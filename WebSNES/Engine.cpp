#include "Engine.h"

#include <thread>

int main()
{
	auto& Game = Engine::Get();
	Game.LoadCartridge("../ROMs/SuperMarioWorld_NTSC.sfc");
	Game.Launch(1.0);
}

void Engine::LoadCartridge(std::string FileName)
{
	Game = Cartridge{};
	Game.Load(FileName);
}

void Engine::Launch(double TickRate)
{
	const auto TickTime = std::chrono::milliseconds(static_cast<int>(1.0 / TickRate * 1000));

	CPU.Source = &Game;

	while (true)
	{
		auto TickStart = std::chrono::system_clock::now();

		CPU.Tick();

		auto TickEnd = std::chrono::system_clock::now();
		auto ThisTick = std::chrono::duration_cast<std::chrono::milliseconds>(TickEnd - TickStart);
		std::this_thread::sleep_for(TickTime - ThisTick);
	}
}