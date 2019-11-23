#pragma once

#include "Base/Types.h"

#include <vector>
#include <string>

class Cartridge
{
private:
	std::vector<uint8> Data;
	size_t Next = 0;

public:
	bool Load(std::string FileName);
	uint8 Read()
	{
		return Data[Next++];
	}
};