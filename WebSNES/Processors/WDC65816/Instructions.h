#pragma once

#include "CPU.h"

#include <map>
#include <string>

void ADC(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x61:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x63:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x65:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x67:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x69:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x6D:
	{
		auto Operand1 = CPU.Fetch();
		auto Operand2 = CPU.Fetch();
		break;
	}
	case 0x6F:
	{
		auto Operand1 = CPU.Fetch();
		auto Operand2 = CPU.Fetch();
		auto Operand3 = CPU.Fetch();
		break;
	}
	case 0x71:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x72:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x73:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x75:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x77:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x79:
	{
		auto Operand1 = CPU.Fetch();
		auto Operand2 = CPU.Fetch();
		break;
	}
	case 0x7D:
	{
		auto Operand1 = CPU.Fetch();
		auto Operand2 = CPU.Fetch();
		break;
	}
	case 0x7F:
	{
		auto Operand1 = CPU.Fetch();
		auto Operand2 = CPU.Fetch();
		auto Operand3 = CPU.Fetch();
		break;
	}
	}
}

void AND(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x21:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x23:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x25:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x27:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x29:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x2D:
	{
		auto Operand1 = CPU.Fetch();
		auto Operand2 = CPU.Fetch();
		break;
	}
	case 0x2F:
	{
		auto Operand1 = CPU.Fetch();
		auto Operand2 = CPU.Fetch();
		auto Operand3 = CPU.Fetch();
		break;
	}
	case 0x31:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x32:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x33:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x35:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x37:
	{
		auto Operand1 = CPU.Fetch();
		break;
	}
	case 0x39:
	{
		auto Operand1 = CPU.Fetch();
		auto Operand2 = CPU.Fetch();
		break;
	}
	case 0x3D:
	{
		auto Operand1 = CPU.Fetch();
		auto Operand2 = CPU.Fetch();
		break;
	}
	case 0x3F:
	{
		auto Operand1 = CPU.Fetch();
		auto Operand2 = CPU.Fetch();
		auto Operand3 = CPU.Fetch();
		break;
	}
	}
}

void ASL(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x06:
		break;
	case 0x0A:
		break;
	case 0x0E:
		break;
	case 0x16:
		break;
	case 0x1E:
		break;
	}
}

void BCC(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x90:
		break;
	}
}

void BCS(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xB0:
		break;
	}
}

void BEQ(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xF0:
		break;
	}
}

void BIT(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x24:
		break;
	case 0x2C:
		break;
	case 0x34:
		break;
	case 0x3C:
		break;
	case 0x89:
		break;
	}
}

void BMI(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x30:
		break;
	}
}

void BNE(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xD0:
		break;
	}
}

void BPL(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x10:
		break;
	}
}

void BRA(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x80:
		break;
	}
}

void BRK(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x00:
		break;
	}
}

void BRL(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x82:
		break;
	}
}

void BVC(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x50:
		break;
	}
}

void BVS(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x70:
		break;
	}
}

void CLC(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x18:
		break;
	}
}

void CLD(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xD8:
		break;
	}
}

void CLI(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x58:
		break;
	}
}

void CLV(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xB8:
		break;
	}
}

void CMP(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xC1:
		break;
	case 0xC3:
		break;
	case 0xC5:
		break;
	case 0xC7:
		break;
	case 0xC9:
		break;
	case 0xCD:
		break;
	case 0xCF:
		break;
	case 0xD1:
		break;
	case 0xD2:
		break;
	case 0xD3:
		break;
	case 0xD5:
		break;
	case 0xD7:
		break;
	case 0xD9:
		break;
	case 0xDD:
		break;
	case 0xDF:
		break;
	}
}

void CPX(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xE0:
		break;
	case 0xE4:
		break;
	case 0xEC:
		break;
	}
}

void CPY(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xC0:
		break;
	case 0xC4:
		break;
	case 0xCC:
		break;
	}
}

void COP(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x02:
		break;
	}
}

void DEC(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x3A:
		break;
	case 0xC6:
		break;
	case 0xCE:
		break;
	case 0xD6:
		break;
	case 0xDE:
		break;
	}
}

void DEX(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xCA:
		break;
	}
}

void DEY(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x88:
		break;
	}
}

void EOR(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x41:
		break;
	case 0x43:
		break;
	case 0x45:
		break;
	case 0x47:
		break;
	case 0x49:
		break;
	case 0x4D:
		break;
	case 0x4F:
		break;
	case 0x51:
		break;
	case 0x52:
		break;
	case 0x53:
		break;
	case 0x55:
		break;
	case 0x57:
		break;
	case 0x59:
		break;
	case 0x5D:
		break;
	case 0x5F:
		break;
	}
}

void INC(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x1A:
		break;
	case 0xE6:
		break;
	case 0xEE:
		break;
	case 0xF6:
		break;
	case 0xFE:
		break;
	}
}

void INX(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xE8:
		break;
	}
}

void INY(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xC8:
		break;
	}
}

void JMP(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x4C:
		break;
	case 0x6C:
		break;
	case 0x7C:
		break;
	}
}

void JML(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x5C:
		break;
	case 0xDC:
		break;
	}
}

void JSR(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x20:
		break;
	case 0xFC:
		break;
	}
}

void JSL(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x22:
		break;
	}
}

void LDA(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xA1:
		break;
	case 0xA3:
		break;
	case 0xA5:
		break;
	case 0xA7:
		break;
	case 0xA9:
		break;
	case 0xAD:
		break;
	case 0xAF:
		break;
	case 0xB1:
		break;
	case 0xB2:
		break;
	case 0xB3:
		break;
	case 0xB5:
		break;
	case 0xB7:
		break;
	case 0xB9:
		break;
	case 0xBD:
		break;
	case 0xBF:
		break;
	}
}

void LDX(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xA2:
		break;
	case 0xA6:
		break;
	case 0xAE:
		break;
	case 0xB6:
		break;
	case 0xBE:
		break;
	}
}

void LDY(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xA0:
		break;
	case 0xA4:
		break;
	case 0xAC:
		break;
	case 0xB4:
		break;
	case 0xBC:
		break;
	}
}

void LSR(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x46:
		break;
	case 0x4A:
		break;
	case 0x4E:
		break;
	case 0x56:
		break;
	case 0x5E:
		break;
	}
}

void MVN(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x54:
		break;
	}
}

void MVP(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x44:
		break;
	}
}

void NOP(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xEA:
		break;
	}
}

void ORA(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x01:
		break;
	case 0x03:
		break;
	case 0x05:
		break;
	case 0x07:
		break;
	case 0x09:
		break;
	case 0x0D:
		break;
	case 0x0F:
		break;
	case 0x11:
		break;
	case 0x12:
		break;
	case 0x13:
		break;
	case 0x15:
		break;
	case 0x17:
		break;
	case 0x19:
		break;
	case 0x1D:
		break;
	case 0x1F:
		break;
	}
}

void PEA(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xF4:
		break;
	}
}

void PEI(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xD4:
		break;
	}
}

void PER(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x62:
		break;
	}
}

void PHA(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x48:
		break;
	}
}

void PHB(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x8B:
		break;
	}
}

void PHD(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x0B:
		break;
	}
}

void PHK(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x4B:
		break;
	}
}

void PHX(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xDA:
		break;
	}
}

void PHY(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x5A:
		break;
	}
}

void PLA(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x68:
		break;
	}
}

void PLD(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x2B:
		break;
	}
}

void PLP(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x28:
		break;
	}
}

void PLX(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xFA:
		break;
	}
}

void PLY(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x7A:
		break;
	}
}

void REP(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xC2:
		break;
	}
}

void ROL(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x26:
		break;
	case 0x2A:
		break;
	case 0x2E:
		break;
	case 0x36:
		break;
	case 0x3E:
		break;
	}
}

void ROR(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x66:
		break;
	case 0x6A:
		break;
	case 0x6E:
		break;
	case 0x76:
		break;
	case 0x7E:
		break;
	}
}

void RTI(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x40:
		break;
	}
}

void RTS(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x60:
		break;
	}
}

void RTL(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x6B:
		break;
	}
}

void SBC(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xE1:
		break;
	case 0xE3:
		break;
	case 0xE5:
		break;
	case 0xE7:
		break;
	case 0xE9:
		break;
	case 0xED:
		break;
	case 0xEF:
		break;
	case 0xF1:
		break;
	case 0xF2:
		break;
	case 0xF3:
		break;
	case 0xF5:
		break;
	case 0xF7:
		break;
	case 0xF9:
		break;
	case 0xFD:
		break;
	case 0xFF:
		break;
	}
}

void SEC(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x38:
		break;
	}
}

void SED(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xF8:
		break;
	}
}

void SEI(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x78:
		break;
	}
}

void SEP(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xE2:
		break;
	}
}

void STA(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x81:
		break;
	case 0x83:
		break;
	case 0x85:
		break;
	case 0x87:
		break;
	case 0x8D:
		break;
	case 0x8F:
		break;
	case 0x91:
		break;
	case 0x92:
		break;
	case 0x93:
		break;
	case 0x95:
		break;
	case 0x97:
		break;
	case 0x99:
		break;
	case 0x9D:
		break;
	case 0x9F:
		break;
	}
}

void STX(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x86:
		break;
	case 0x8E:
		break;
	case 0x96:
		break;
	}
}

void STY(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x84:
		break;
	case 0x8C:
		break;
	case 0x94:
		break;
	}
}

void STP(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xDB:
		break;
	}
}

void STZ(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x64:
		break;
	case 0x74:
		break;
	case 0x9C:
		break;
	case 0x9E:
		break;
	}
}

void TAX(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xAA:
		break;
	}
}

void TAY(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xA8:
		break;
	}
}

void TCD(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x5B:
		break;
	}
}

void TCS(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x1B:
		break;
	}
}

void TDC(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x7B:
		break;
	}
}

void TSC(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x3B:
		break;
	}
}

void TSX(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xBA:
		break;
	}
}

void TXA(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x8A:
		break;
	}
}

void TXS(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x9A:
		break;
	}
}

void TXY(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x9B:
		break;
	}
}

void TYA(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x98:
		break;
	}
}

void TYX(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xBB:
		break;
	}
}

void TRB(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x14:
		break;
	case 0x1C:
		break;
	}
}

void TSB(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0x04:
		break;
	case 0x0C:
		break;
	}
}

void WAI(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xCB:
		break;
	}
}

void XCE(WDC65816& CPU, uint8 Hex)
{
	switch (Hex)
	{
	case 0xFB:
		break;
	}
}

#define OPERATION(OpCode) { #OpCode, &##OpCode }

using InstructionRef = void(*)(WDC65816&, uint8);

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
	OPERATION(PHB),
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
	OPERATION(SED),
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