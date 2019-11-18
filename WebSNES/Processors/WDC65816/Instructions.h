#pragma once

#include <map>

void ADC(const WDC65816& CPU)
{

}

void AND(const WDC65816& CPU)
{

}

void ASL(const WDC65816& CPU)
{

}

void BCC(const WDC65816& CPU)
{

}

void BCS(const WDC65816& CPU)
{

}

void BEQ(const WDC65816& CPU)
{

}

void BIT(const WDC65816& CPU)
{

}

void BMI(const WDC65816& CPU)
{

}

void BNE(const WDC65816& CPU)
{

}

void BPL(const WDC65816& CPU)
{

}

void BRA(const WDC65816& CPU)
{

}

void BRK(const WDC65816& CPU)
{

}

void BRL(const WDC65816& CPU)
{

}

void BVC(const WDC65816& CPU)
{

}

void BVS(const WDC65816& CPU)
{

}

void CLC(const WDC65816& CPU)
{

}

void CLD(const WDC65816& CPU)
{

}

void CLI(const WDC65816& CPU)
{

}

void CLV(const WDC65816& CPU)
{

}

void CMP(const WDC65816& CPU)
{
	
}

void CPX(const WDC65816& CPU)
{

}

void CPY(const WDC65816& CPU)
{

}

void COP(const WDC65816& CPU)
{

}

void DEC(const WDC65816& CPU)
{

}

void DEX(const WDC65816& CPU)
{

}

void DEY(const WDC65816& CPU)
{

}

void EOR(const WDC65816& CPU)
{

}

void INC(const WDC65816& CPU)
{

}

void INX(const WDC65816& CPU)
{

}

void INY(const WDC65816& CPU)
{

}

void JMP(const WDC65816& CPU)
{

}

void JML(const WDC65816& CPU)
{

}

void JSR(const WDC65816& CPU)
{

}

void JSL(const WDC65816& CPU)
{

}

void LDA(const WDC65816& CPU)
{

}

void LDX(const WDC65816& CPU)
{

}

void LDY(const WDC65816& CPU)
{

}

void LSR(const WDC65816& CPU)
{

}

void MVN(const WDC65816& CPU)
{

}

void MVP(const WDC65816& CPU)
{

}

void NOP(const WDC65816& CPU)
{

}

void ORA(const WDC65816& CPU)
{

}

void PEA(const WDC65816& CPU)
{

}

void PEI(const WDC65816& CPU)
{

}

void PER(const WDC65816& CPU)
{

}

void PHA(const WDC65816& CPU)
{

}

void PHD(const WDC65816& CPU)
{

}

void PHK(const WDC65816& CPU)
{

}

void PHX(const WDC65816& CPU)
{

}

void PHY(const WDC65816& CPU)
{

}

void PLA(const WDC65816& CPU)
{

}

void PLD(const WDC65816& CPU)
{

}

void PLP(const WDC65816& CPU)
{

}

void PLX(const WDC65816& CPU)
{

}

void PLY(const WDC65816& CPU)
{

}

void REP(const WDC65816& CPU)
{

}

void ROL(const WDC65816& CPU)
{

}

void ROR(const WDC65816& CPU)
{

}

void RTI(const WDC65816& CPU)
{

}

void RTS(const WDC65816& CPU)
{

}

void RTL(const WDC65816& CPU)
{

}

void SBC(const WDC65816& CPU)
{

}

void SEC(const WDC65816& CPU)
{

}

void SED(const WDC65816& CPU)
{

}

void SEI(const WDC65816& CPU)
{
	
}

void SEP(const WDC65816& CPU)
{

}

void STA(const WDC65816& CPU)
{

}

void STX(const WDC65816& CPU)
{

}

void STY(const WDC65816& CPU)
{

}

void STP(const WDC65816& CPU)
{

}

void STZ(const WDC65816& CPU)
{

}

void TAX(const WDC65816& CPU)
{

}

void TAY(const WDC65816& CPU)
{

}

void TCD(const WDC65816& CPU)
{

}

void TCS(const WDC65816& CPU)
{

}

void TDC(const WDC65816& CPU)
{

}

void TSC(const WDC65816& CPU)
{

}

void TSX(const WDC65816& CPU)
{

}

void TXA(const WDC65816& CPU)
{

}

void TXS(const WDC65816& CPU)
{

}

void TXY(const WDC65816& CPU)
{

}

void TYA(const WDC65816& CPU)
{

}

void TYX(const WDC65816& CPU)
{

}

void TRB(const WDC65816& CPU)
{

}

void TSB(const WDC65816& CPU)
{

}

void WAI(const WDC65816& CPU)
{

}

void XCE(const WDC65816& CPU)
{

}

using InstructionRef = void(*)(const WDC65816 & CPU);

std::map<std::string, InstructionRef> ExecutionMap =
{
	{ "ADC", &ADC },
	{ "AND", &AND },
	{ "ASL", &ASL },
	{ "BCC", &BCC },
	{ "BCS", &BCS },
	{ "BEQ", &BEQ },
	{ "BIT", &BIT },
	{ "BMI", &BMI },
	{ "BNE", &BNE },
	{ "BPL", &BPL },
	{ "BRA", &BRA },
	{ "BRK", &BRK },
	{ "BRL", &BRL },
	{ "BVC", &BVC },
	{ "BVS", &BVS },
	{ "CLC", &CLC },
	{ "CLD", &CLD },
	{ "CLI", &CLI },
	{ "CLV", &CLV },
	{ "CMP", &CMP },
	{ "CPX", &CPX },
	{ "CPY", &CPY },
	{ "COP", &COP },
	{ "DEC", &DEC },
	{ "DEX", &DEX },
	{ "DEY", &DEY },
	{ "EOR", &EOR },
	{ "INC", &INC },
	{ "INX", &INX },
	{ "INY", &INY },
	{ "JMP", &JMP },
	{ "JML", &JML },
	{ "JSR", &JSR },
	{ "JSL", &JSL },
	{ "LDA", &LDA },
	{ "LDX", &LDX },
	{ "LDY", &LDY },
	{ "LSR", &LSR },
	{ "MVN", &MVN },
	{ "MVP", &MVP },
	{ "NOP", &NOP },
	{ "ORA", &ORA },
	{ "PEA", &PEA },
	{ "PEI", &PEI },
	{ "PER", &PER },
	{ "PHA", &PHA },
	{ "PHD", &PHD },
	{ "PHK", &PHK },
	{ "PHX", &PHX },
	{ "PHY", &PHY },
	{ "PLA", &PLA },
	{ "PLD", &PLD },
	{ "PLP", &PLP },
	{ "PLX", &PLX },
	{ "PLY", &PLY },
	{ "REP", &REP },
	{ "ROL", &ROL },
	{ "ROR", &ROR },
	{ "RTI", &RTI },
	{ "RTS", &RTS },
	{ "RTL", &RTL },
	{ "SBC", &SBC },
	{ "SEC", &SEC },
	{ "SEI", &SEI },
	{ "SEP", &SEP },
	{ "STA", &STA },
	{ "STX", &STX },
	{ "STY", &STY },
	{ "STP", &STP },
	{ "STZ", &STZ },
	{ "TAX", &TAX },
	{ "TAY", &TAY },
	{ "TCD", &TCD },
	{ "TCS", &TCS },
	{ "TDC", &TDC },
	{ "TSC", &TSC },
	{ "TSX", &TSX },
	{ "TXA", &TXA },
	{ "TXS", &TXS },
	{ "TXY", &TXY },
	{ "TYA", &TYA },
	{ "TYX", &TYX },
	{ "TRB", &TRB },
	{ "TSB", &TSB },
	{ "WAI", &WAI },
	{ "XCE", &XCE },
};