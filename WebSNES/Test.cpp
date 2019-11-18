#include "Processors/WDC65816/CPU.h"

int main()
{
	WDC65816 cpu;
	cpu.Execute({ "AND" });
}