#pragma once

#include "../Base/Types.h"

struct Instruction
{
	std::string OpCode;  // Uses small buffer optimization.
	// #TODO: Flags, addressing mode?
};