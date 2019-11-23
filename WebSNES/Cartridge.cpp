#include "Cartridge.h"

#include <fstream>
#include <iostream>
#include <chrono>

bool Cartridge::Load(std::string FileName)
{
	std::cout << "Loading... \n";
	auto Start = std::chrono::system_clock::now();

	std::ifstream Stream(FileName, std::ios::in | std::ios::binary);
	while (Stream)
	{
		char Buffer;

		// Verify we didn't run into an error
		if (!Stream.read(&Buffer, 1))
		{
			return false;
		}

		Data.push_back(Buffer);
	}

	auto End = std::chrono::system_clock::now();

	std::cout << "Loaded " << Data.size() << " bytes in " << std::chrono::duration_cast<std::chrono::milliseconds>(End - Start).count() << "ms\n";

	return true;
}