#pragma once

#include "../../Base/Types.h"
#include "../Register.h"
#include "../Instruction.h"

class Cartridge;

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

	struct
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
	} Registers;

	struct
	{
		// Input
		bool RESB = 0;  // Reset.
		bool ABORTB = 0;  // Abort input.
		bool IRQB = 0;  // Interrupt request.
		bool NMI = 0;  // Non-maskable interrupt.
		bool BE = 0;  // Bus enable.

		// Output
		bool VPB = 0;  // Vector pull.
		bool ML = 0;  // Memory lock.
		bool VPA = 0;  // Valid program address.
		bool VDA = 0;  // Valid data address.
		bool RWB = 0;  // Read/write.

		// Bidirectional
		bool RDY = 0;  // Ready.


		// Unknown
		bool XIN = 0;
		bool HBLANK = 0;
		bool VBLANK = 0;
		bool REFRESH = 0;
		bool DRAMMODE = 0;
		bool DMA = 0;
		bool CPUCK = 0;
		bool SYSCK = 0;
		bool ALCK = 0;
		bool XF = 0;
		bool MF = 0;
		bool TCKSEL0 = 0;
		bool TCKSEL1 = 0;
		bool TM = 0;
		bool HVCMODE = 0;
		bool HALT = 0;
		bool RAMSEL = 0;
		bool ROMSEL = 0;
		bool CPURD = 0;
		bool CPUWR = 0;
		bool PARD = 0;
		bool PAWR = 0;
	} Pins;

	size_t Clock = 0;

	Cartridge* Source;

public:
	//uint8 ReadMemory(uint11 Address);
	//void WriteMemory(uint11 Address, uint8 Data);

	uint8 ReadIO(uint16 Address);
	void WriteIO(uint16 Address, uint8 Data);

	bool IsStatusSet(StatusFlags Flag)
	{
		return Registers.ProcessorStatus.Data & Flag;
	}

	void Tick();

	uint8 Fetch();

	Instruction Disassemble(uint8 Data) const;

	void Execute(const Instruction& InInstruction);
};