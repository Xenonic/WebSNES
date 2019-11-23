#pragma once

#include "Cartridge.h"
#include "Processors/WDC65816/CPU.h"

class Engine
{
private:
	Cartridge Game;
	WDC65816 CPU;

public:
	static Engine& Get()
	{
		static Engine This;
		return This;
	}

	void LoadCartridge(std::string FieName);

	void Launch(double TickRate);
};