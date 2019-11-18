#pragma once

#include "../../Base/Types.h"
#include "../Register.h"
#include "../Instruction.h"

class WDC65816
{
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

	void Execute(const Instruction& InInstruction);
};