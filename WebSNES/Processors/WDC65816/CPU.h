#pragma once

#include "../../Base/Types.h"
#include "../Register.h"

class WDC65816
{
private:
	uint8 RAM[0x800];  // #TODO Can't find specification on this? Documentation doesn't list the CPU having 2048 bytes of RAM.

public:
	// Statuses for the ProcessorStatus register
	enum class StatusFlags
	{
		N = 0b10000000,  // Negative
		V = 0b01000000,  // Overflow
		M = 0b00100000,  // (Native) Accumulator register size
		X = 0b00010000,  // (Native) Index register size
		D = 0b00001000,  // Decimal
		I = 0b00000100,  // IRQ disable
		Z = 0b00000010,  // Zero
		C = 0b00000001,  // Carry
		E,               // 6502 Emulation mode
		B = 0b00010000,  // (Emulation) Break
	};

	namespace Registers
	{
		Register<16> Accumulator;
		Register<16> IndexX;
		Register<16> IndexY;
		Register<16> StackPointer;
		Register<8> DataBank;
		Register<16> Direct;
		Register<8> ProgramBank;
		Register<8> ProcessorStatus;
		Register<16> ProgramCounter;
	}

	struct
	{
		bool InterruptPending = false;
		bool nmiPending = 0;
		bool nmiLine = 0;
		bool irqLine = 0;
		bool apuLine = 0;

		bool rdyLine = 1;
		bool rdyAddrValid = 0;
		uint16 rdyAddrValue;

		bool oamdmaPending = 0;
		uint8 oamdmaPage;
	} IO;

public:
	// #TODO: Load clock rate based on PAL/NTSC in header from cart.

	void Tick(uint32 Clocks);
	void Boot(bool Reset);

	uint8 ReadMemory(uint11 Address);
	void WriteMemory(uint11 Address, uint8 Data);

	uint8 ReadIO(uint16 Address);
	void WriteIO(uint16 Address, uint8 Data);

	void nmi(uint16& Vector);
	void oamdma();

	//  Timing and IO operations
	void nmi_L(bool);
	void irq_L(bool);
	void apu_L(bool);

	void rdy_L(bool);
	void rdy_Addr(bool Valid, uint16 Value = 0);
};