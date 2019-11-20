#include "CPU.h"
#include "Instructions.h"

void WDC65816::Boot(bool Reset)
{

}

void WDC65816::Tick(uint1 Cycles)
{
	Clock += Cycles;
}

void WDC65816::Execute(const Instruction& InInstruction)
{
	ExecutionMap[InInstruction.OpCode](*this);  // #TODO: Static search
}