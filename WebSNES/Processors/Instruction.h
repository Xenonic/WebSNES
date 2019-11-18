#pragma once

#include "../Base/Types.h"

#include <array>

struct Instruction
{
	std::string OpCode;  // Uses small buffer optimization.
	std::array<uint8, 3> Operand;  // #TODO: Is this the ideal representation?
	// #TODO: Flags?
};