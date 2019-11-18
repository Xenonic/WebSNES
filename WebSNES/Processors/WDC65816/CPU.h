#pragma once

#include "../../Base/Types.h"
#include "../Register.h"

class WDC65816
{
public:
	// R/W operations for RAM
	auto readRAM(uint11 addr) -> uint8;
	auto writeRAM(uint11 addr, uint8 data) -> void;

	// Read and write IO from RAM
	auto readIO(uint16 addr) -> uint8;
	auto writeIO(uint16 addr, uint8 data) -> void;

	auto nmi(uint16& vector) -> void override;
	auto oamdma() -> void;
	
	//  Timing and IO operations
  	auto nmi_L(bool) -> void;
  	auto irq_L(bool) -> void;
  	auto apu_L(bool) -> void;

  	auto rdy_L(bool) -> void;
  	auto rdy_Addr(bool valid, uint16 value = 0) -> void;

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
	void tick();

protected:
	uint8 ram[0x800];

	struct IO {
    	bool interrPending = 0;
    	bool nmiPending = 0;
    	bool nmiLine = 0;
    	bool irqLine = 0;
    	bool apuLine = 0;

    	bool rdyLine = 1;
    	bool rdyAddrValid = 0;
    	uint16 rdyAddrValue;

    	bool oamdmaPending = 0;
    	uint8 oamdmaPage;
  } io;
};