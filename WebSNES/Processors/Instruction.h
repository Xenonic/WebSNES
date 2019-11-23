#pragma once

#include "../Base/Types.h"

#include <string>

struct Instruction
{
	std::string OpCode;  // Uses small buffer optimization.
	uint8 Hex;
	// #TODO: Flags, addressing mode?
};