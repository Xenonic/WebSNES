#pragma once

#include "CPU.h"

#include <map>

//  Arithmetic Instructions
void ADC(WDC65816& CPU)
{
	/* Add accumulator with value and carry bit*/
	CPU.Registers.Accumulator += Operand[0] + (CPU.IsStatusSet(StatusFlags::C) ? 1 : 0);
}

void SBC(WDC65816& CPU)
{
	/* Subtract from accumulator value and carry bit*/
	//CPU.Registers.Accumulator -= Operand[0] + (CPU.IsStatusSet(StatusFlags::C) ? 1 : 0);
}

//  Logical instructions
void AND(WDC65816& CPU)
{	
	/* AND operation between accumulator and Memory storing result in accumulator*/
	CPU.Registers.Accumulator = Operand[0] & CPU.Registers.Accumulator
	
}

void EOR(WDC65816& CPU)
{
	/* EOR operation between accumulator and Memory storing result in accumulator*/
	CPU.Registers.Accumulator = Operand[0] ^ CPU.Registers.Accumulator

}

void ORA(WDC65816& CPU)
{
	/* OR operation between accumulator and Memory storing result in accumulator*/
	CPU.Registers.Accumulator = Operand[0] | CPU.Registers.Accumulator
}

void TSB(WDC65816& CPU)
{

}

void TRB(WDC65816& CPU)
{

}

// Shift instructions
void ASL(WDC65816& CPU)
{
	/* Arithmetic shift left */
	//SIDENOTE:WHY IS ARITHMETIC VS LOGICAL SHIFT COMPILER DEPENDANT IN C?? THIS MAKES NO SENSE JUST
	// JAVA GOT IT RIGHT WITH >>> and <<<

	CPU.Registers.Accumulator = CPU.Registers.Accumulator << Operand[0];
}

void LSR(WDC65816& CPU)
{
	/* Arithmetic shift right */
	CPU.Registers.Accumulator = (CPU.Registers.Accumulator / 2)^Operand[0];
}

void ROL(WDC65816& CPU)
{
	/* Rotate Right*/
	//NOTE: this will break if Operand[0] == 0 | 32 or Accumulator > 32 bits. I don't see this being a problem
	// But if this is an issue we can implement something else.
	
	CPU.Registers.Accumulator = CPU.Registers.Accumulator << Operand[0] | CPU.Registers.Accumulator >> (32 - Operand[0]);
}

void ROR(WDC65816& CPU)
{
	/* Rotate Left*/
	//  This calls a right shift and then reverses...using a magic number 
	//  (shhh it's magic that I stole a long time ago from http://www.inwap.com/pdp10/hbaker/hakmem/hakmem.html)
	//  This assumes that Accumulator is a byte or smaller (i think it is)

	CPU.Registers.Accumulator = (ROL(CPU) * 0x0202020202ULL & 0x010884422010ULL) % 1023;

}

void BCC(WDC65816& CPU)
{

}


void BCS(WDC65816& CPU)
{

}

void BEQ(WDC65816& CPU)
{

}

void BIT(WDC65816& CPU)
{

}

void BMI(WDC65816& CPU)
{

}

void BNE(WDC65816& CPU)
{

}

void BPL(WDC65816& CPU)
{

}

void BRA(WDC65816& CPU)
{

}

void BRK(WDC65816& CPU)
{

}

void BRL(WDC65816& CPU)
{

}

void BVC(WDC65816& CPU)
{

}

void BVS(WDC65816& CPU)
{

}

void CLC(WDC65816& CPU)
{

}

void CLD(WDC65816& CPU)
{

}

void CLI(WDC65816& CPU)
{

}

void CLV(WDC65816& CPU)
{

}

void CMP(WDC65816& CPU)
{
	
}

void CPX(WDC65816& CPU)
{

}

void CPY(WDC65816& CPU)
{

}

void COP(WDC65816& CPU)
{

}

void DEC(WDC65816& CPU)
{

}

void DEX(WDC65816& CPU)
{
	//CPU.Registers.IndexX -= 1;
	 
}

void DEY(WDC65816& CPU)
{
	//CPU.Registers.IndexY -= 1;
}

void INC(WDC65816& CPU)
{
	
}

void INX(WDC65816& CPU)
{
	//CPU.Registers.IndexX += 1;
}

void INY(WDC65816& CPU)
{
	//CPU.Registers.IndexY += 1;
}

void JMP(WDC65816& CPU)
{

}

void JML(WDC65816& CPU)
{

}

void JSR(WDC65816& CPU)
{

}

void JSL(WDC65816& CPU)
{

}

void LDA(WDC65816& CPU)
{

}

void LDX(WDC65816& CPU)
{

}

void LDY(WDC65816& CPU)
{

}

void MVN(WDC65816& CPU)
{

}

void MVP(WDC65816& CPU)
{

}

void NOP(WDC65816& CPU)
{

}



void PEA(WDC65816& CPU)
{

}

void PEI(WDC65816& CPU)
{

}

void PER(WDC65816& CPU)
{

}

void PHA(WDC65816& CPU)
{

}

void PHD(WDC65816& CPU)
{

}

void PHK(WDC65816& CPU)
{

}

void PHX(WDC65816& CPU)
{

}

void PHY(WDC65816& CPU)
{

}

void PLA(WDC65816& CPU)
{

}

void PLD(WDC65816& CPU)
{

}

void PLP(WDC65816& CPU)
{

}

void PLX(WDC65816& CPU)
{

}

void PLY(WDC65816& CPU)
{

}

void REP(WDC65816& CPU)
{

}


void RTI(WDC65816& CPU)
{

}

void RTS(WDC65816& CPU)
{

}

void RTL(WDC65816& CPU)
{

}



void SEC(WDC65816& CPU)
{

}

void SED(WDC65816& CPU)
{

}

void SEI(WDC65816& CPU)
{
	
}

void SEP(WDC65816& CPU)
{

}

void STA(WDC65816& CPU)
{

}

void STX(WDC65816& CPU)
{

}

void STY(WDC65816& CPU)
{

}

void STP(WDC65816& CPU)
{

}

void STZ(WDC65816& CPU)
{

}

void TAX(WDC65816& CPU)
{
	//CPU.Registers.IndexX = CPU.Registers.Accumulator
}

void TAY(WDC65816& CPU)
{
	//CPU.Registers.IndexY = CPU.Registers.Accumulator
}

void TCD(WDC65816& CPU)
{

}

void TCS(WDC65816& CPU)
{

}

void TDC(WDC65816& CPU)
{

}

void TSC(WDC65816& CPU)
{

}

void TSX(WDC65816& CPU)
{

}

void TXA(WDC65816& CPU)
{

}

void TXS(WDC65816& CPU)
{

}

void TXY(WDC65816& CPU)
{

}

void TYA(WDC65816& CPU)
{

}

void TYX(WDC65816& CPU)
{

}

void WAI(WDC65816& CPU)
{

}

void XCE(WDC65816& CPU)
{

}

#define OPERATION(OpCode) { #OpCode, &##OpCode }

using InstructionRef = void(*)(const WDC65816&, std::array<uint8, 3>);

std::map<std::string, InstructionRef> ExecutionMap =
{
	OPERATION(ADC),
	OPERATION(AND),
	OPERATION(ASL),
	OPERATION(BCC),
	OPERATION(BCS),
	OPERATION(BEQ),
	OPERATION(BIT),
	OPERATION(BMI),
	OPERATION(BNE),
	OPERATION(BPL),
	OPERATION(BRA),
	OPERATION(BRK),
	OPERATION(BRL),
	OPERATION(BVC),
	OPERATION(BVS),
	OPERATION(CLC),
	OPERATION(CLD),
	OPERATION(CLI),
	OPERATION(CLV),
	OPERATION(CMP),
	OPERATION(CPX),
	OPERATION(CPY),
	OPERATION(COP),
	OPERATION(DEC),
	OPERATION(DEX),
	OPERATION(DEY),
	OPERATION(EOR),
	OPERATION(INC),
	OPERATION(INX),
	OPERATION(INY),
	OPERATION(JMP),
	OPERATION(JML),
	OPERATION(JSR),
	OPERATION(JSL),
	OPERATION(LDA),
	OPERATION(LDX),
	OPERATION(LDY),
	OPERATION(LSR),
	OPERATION(MVN),
	OPERATION(MVP),
	OPERATION(NOP),
	OPERATION(ORA),
	OPERATION(PEA),
	OPERATION(PEI),
	OPERATION(PER),
	OPERATION(PHA),
	OPERATION(PHD),
	OPERATION(PHK),
	OPERATION(PHX),
	OPERATION(PHY),
	OPERATION(PLA),
	OPERATION(PLD),
	OPERATION(PLP),
	OPERATION(PLX),
	OPERATION(PLY),
	OPERATION(REP),
	OPERATION(ROL),
	OPERATION(ROR),
	OPERATION(RTI),
	OPERATION(RTS),
	OPERATION(RTL),
	OPERATION(SBC),
	OPERATION(SEC),
	OPERATION(SEI),
	OPERATION(SEP),
	OPERATION(STA),
	OPERATION(STX),
	OPERATION(STY),
	OPERATION(STP),
	OPERATION(STZ),
	OPERATION(TAX),
	OPERATION(TAY),
	OPERATION(TCD),
	OPERATION(TCS),
	OPERATION(TDC),
	OPERATION(TSC),
	OPERATION(TSX),
	OPERATION(TXA),
	OPERATION(TXS),
	OPERATION(TXY),
	OPERATION(TYA),
	OPERATION(TYX),
	OPERATION(TRB),
	OPERATION(TSB),
	OPERATION(WAI),
	OPERATION(XCE),
};

#undef OPERATION