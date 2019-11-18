#pragma once

#include "../Base/Types.h"

#include <array>

struct Instruction
{
	std::string OpCode;  // Uses small buffer optimization.
	uint8 Operand[3];  // #TODO: Is this the ideal representation?
	// #TODO: Flags?
};