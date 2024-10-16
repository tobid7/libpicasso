#pragma once
enum
{
	MAESTRO_ADD = 0x00,
	MAESTRO_DP3,
	MAESTRO_DP4,
	MAESTRO_DPH,
	MAESTRO_DST,
	MAESTRO_EX2,
	MAESTRO_LG2,
	MAESTRO_LITP,
	MAESTRO_MUL,
	MAESTRO_SGE,
	MAESTRO_SLT,
	MAESTRO_FLR,
	MAESTRO_MAX,
	MAESTRO_MIN,
	MAESTRO_RCP,
	MAESTRO_RSQ,

	MAESTRO_unk10,
	MAESTRO_unk11,
	MAESTRO_MOVA,
	MAESTRO_MOV,
	MAESTRO_unk14,
	MAESTRO_unk15,
	MAESTRO_unk16,
	MAESTRO_unk17,
	MAESTRO_DPHI,
	MAESTRO_DSTI,
	MAESTRO_SGEI,
	MAESTRO_SLTI,
	MAESTRO_unk1C,
	MAESTRO_unk1D,
	MAESTRO_unk1E,
	MAESTRO_unk1F,

	MAESTRO_BREAK,
	MAESTRO_NOP,
	MAESTRO_END,
	MAESTRO_BREAKC,
	MAESTRO_CALL,
	MAESTRO_CALLC,
	MAESTRO_CALLU,
	MAESTRO_IFU,
	MAESTRO_IFC,
	MAESTRO_FOR,
	MAESTRO_EMIT, // Geometry shader related
	MAESTRO_SETEMIT, // Geometry shader related
	MAESTRO_JMPC,
	MAESTRO_JMPU,
	MAESTRO_CMP, // only the upper 5 bits are used for the opcode

	// Only the upper 3 bits are used for the following opcodes
	MAESTRO_MADI = 0x30,
	MAESTRO_MAD = 0x38,
};