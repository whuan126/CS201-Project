/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Lanai {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_INSTR_REF	= 14,
    DBG_LABEL	= 15,
    REG_SEQUENCE	= 16,
    COPY	= 17,
    BUNDLE	= 18,
    LIFETIME_START	= 19,
    LIFETIME_END	= 20,
    PSEUDO_PROBE	= 21,
    STACKMAP	= 22,
    FENTRY_CALL	= 23,
    PATCHPOINT	= 24,
    LOAD_STACK_GUARD	= 25,
    PREALLOCATED_SETUP	= 26,
    PREALLOCATED_ARG	= 27,
    STATEPOINT	= 28,
    LOCAL_ESCAPE	= 29,
    FAULTING_OP	= 30,
    PATCHABLE_OP	= 31,
    PATCHABLE_FUNCTION_ENTER	= 32,
    PATCHABLE_RET	= 33,
    PATCHABLE_FUNCTION_EXIT	= 34,
    PATCHABLE_TAIL_CALL	= 35,
    PATCHABLE_EVENT_CALL	= 36,
    PATCHABLE_TYPED_EVENT_CALL	= 37,
    ICALL_BRANCH_FUNNEL	= 38,
    G_ADD	= 39,
    G_SUB	= 40,
    G_MUL	= 41,
    G_SDIV	= 42,
    G_UDIV	= 43,
    G_SREM	= 44,
    G_UREM	= 45,
    G_AND	= 46,
    G_OR	= 47,
    G_XOR	= 48,
    G_IMPLICIT_DEF	= 49,
    G_PHI	= 50,
    G_FRAME_INDEX	= 51,
    G_GLOBAL_VALUE	= 52,
    G_EXTRACT	= 53,
    G_UNMERGE_VALUES	= 54,
    G_INSERT	= 55,
    G_MERGE_VALUES	= 56,
    G_BUILD_VECTOR	= 57,
    G_BUILD_VECTOR_TRUNC	= 58,
    G_CONCAT_VECTORS	= 59,
    G_PTRTOINT	= 60,
    G_INTTOPTR	= 61,
    G_BITCAST	= 62,
    G_FREEZE	= 63,
    G_INTRINSIC_TRUNC	= 64,
    G_INTRINSIC_ROUND	= 65,
    G_INTRINSIC_LRINT	= 66,
    G_INTRINSIC_ROUNDEVEN	= 67,
    G_READCYCLECOUNTER	= 68,
    G_LOAD	= 69,
    G_SEXTLOAD	= 70,
    G_ZEXTLOAD	= 71,
    G_INDEXED_LOAD	= 72,
    G_INDEXED_SEXTLOAD	= 73,
    G_INDEXED_ZEXTLOAD	= 74,
    G_STORE	= 75,
    G_INDEXED_STORE	= 76,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 77,
    G_ATOMIC_CMPXCHG	= 78,
    G_ATOMICRMW_XCHG	= 79,
    G_ATOMICRMW_ADD	= 80,
    G_ATOMICRMW_SUB	= 81,
    G_ATOMICRMW_AND	= 82,
    G_ATOMICRMW_NAND	= 83,
    G_ATOMICRMW_OR	= 84,
    G_ATOMICRMW_XOR	= 85,
    G_ATOMICRMW_MAX	= 86,
    G_ATOMICRMW_MIN	= 87,
    G_ATOMICRMW_UMAX	= 88,
    G_ATOMICRMW_UMIN	= 89,
    G_ATOMICRMW_FADD	= 90,
    G_ATOMICRMW_FSUB	= 91,
    G_FENCE	= 92,
    G_BRCOND	= 93,
    G_BRINDIRECT	= 94,
    G_INTRINSIC	= 95,
    G_INTRINSIC_W_SIDE_EFFECTS	= 96,
    G_ANYEXT	= 97,
    G_TRUNC	= 98,
    G_CONSTANT	= 99,
    G_FCONSTANT	= 100,
    G_VASTART	= 101,
    G_VAARG	= 102,
    G_SEXT	= 103,
    G_SEXT_INREG	= 104,
    G_ZEXT	= 105,
    G_SHL	= 106,
    G_LSHR	= 107,
    G_ASHR	= 108,
    G_FSHL	= 109,
    G_FSHR	= 110,
    G_ICMP	= 111,
    G_FCMP	= 112,
    G_SELECT	= 113,
    G_UADDO	= 114,
    G_UADDE	= 115,
    G_USUBO	= 116,
    G_USUBE	= 117,
    G_SADDO	= 118,
    G_SADDE	= 119,
    G_SSUBO	= 120,
    G_SSUBE	= 121,
    G_UMULO	= 122,
    G_SMULO	= 123,
    G_UMULH	= 124,
    G_SMULH	= 125,
    G_UADDSAT	= 126,
    G_SADDSAT	= 127,
    G_USUBSAT	= 128,
    G_SSUBSAT	= 129,
    G_USHLSAT	= 130,
    G_SSHLSAT	= 131,
    G_SMULFIX	= 132,
    G_UMULFIX	= 133,
    G_SMULFIXSAT	= 134,
    G_UMULFIXSAT	= 135,
    G_SDIVFIX	= 136,
    G_UDIVFIX	= 137,
    G_SDIVFIXSAT	= 138,
    G_UDIVFIXSAT	= 139,
    G_FADD	= 140,
    G_FSUB	= 141,
    G_FMUL	= 142,
    G_FMA	= 143,
    G_FMAD	= 144,
    G_FDIV	= 145,
    G_FREM	= 146,
    G_FPOW	= 147,
    G_FPOWI	= 148,
    G_FEXP	= 149,
    G_FEXP2	= 150,
    G_FLOG	= 151,
    G_FLOG2	= 152,
    G_FLOG10	= 153,
    G_FNEG	= 154,
    G_FPEXT	= 155,
    G_FPTRUNC	= 156,
    G_FPTOSI	= 157,
    G_FPTOUI	= 158,
    G_SITOFP	= 159,
    G_UITOFP	= 160,
    G_FABS	= 161,
    G_FCOPYSIGN	= 162,
    G_FCANONICALIZE	= 163,
    G_FMINNUM	= 164,
    G_FMAXNUM	= 165,
    G_FMINNUM_IEEE	= 166,
    G_FMAXNUM_IEEE	= 167,
    G_FMINIMUM	= 168,
    G_FMAXIMUM	= 169,
    G_PTR_ADD	= 170,
    G_PTRMASK	= 171,
    G_SMIN	= 172,
    G_SMAX	= 173,
    G_UMIN	= 174,
    G_UMAX	= 175,
    G_ABS	= 176,
    G_BR	= 177,
    G_BRJT	= 178,
    G_INSERT_VECTOR_ELT	= 179,
    G_EXTRACT_VECTOR_ELT	= 180,
    G_SHUFFLE_VECTOR	= 181,
    G_CTTZ	= 182,
    G_CTTZ_ZERO_UNDEF	= 183,
    G_CTLZ	= 184,
    G_CTLZ_ZERO_UNDEF	= 185,
    G_CTPOP	= 186,
    G_BSWAP	= 187,
    G_BITREVERSE	= 188,
    G_FCEIL	= 189,
    G_FCOS	= 190,
    G_FSIN	= 191,
    G_FSQRT	= 192,
    G_FFLOOR	= 193,
    G_FRINT	= 194,
    G_FNEARBYINT	= 195,
    G_ADDRSPACE_CAST	= 196,
    G_BLOCK_ADDR	= 197,
    G_JUMP_TABLE	= 198,
    G_DYN_STACKALLOC	= 199,
    G_STRICT_FADD	= 200,
    G_STRICT_FSUB	= 201,
    G_STRICT_FMUL	= 202,
    G_STRICT_FDIV	= 203,
    G_STRICT_FREM	= 204,
    G_STRICT_FMA	= 205,
    G_STRICT_FSQRT	= 206,
    G_READ_REGISTER	= 207,
    G_WRITE_REGISTER	= 208,
    G_MEMCPY	= 209,
    G_MEMMOVE	= 210,
    G_MEMSET	= 211,
    G_VECREDUCE_SEQ_FADD	= 212,
    G_VECREDUCE_SEQ_FMUL	= 213,
    G_VECREDUCE_FADD	= 214,
    G_VECREDUCE_FMUL	= 215,
    G_VECREDUCE_FMAX	= 216,
    G_VECREDUCE_FMIN	= 217,
    G_VECREDUCE_ADD	= 218,
    G_VECREDUCE_MUL	= 219,
    G_VECREDUCE_AND	= 220,
    G_VECREDUCE_OR	= 221,
    G_VECREDUCE_XOR	= 222,
    G_VECREDUCE_SMAX	= 223,
    G_VECREDUCE_SMIN	= 224,
    G_VECREDUCE_UMAX	= 225,
    G_VECREDUCE_UMIN	= 226,
    ADJCALLSTACKDOWN	= 227,
    ADJCALLSTACKUP	= 228,
    ADJDYNALLOC	= 229,
    CALL	= 230,
    CALLR	= 231,
    ADDC_F_I_HI	= 232,
    ADDC_F_I_LO	= 233,
    ADDC_F_R	= 234,
    ADDC_I_HI	= 235,
    ADDC_I_LO	= 236,
    ADDC_R	= 237,
    ADD_F_I_HI	= 238,
    ADD_F_I_LO	= 239,
    ADD_F_R	= 240,
    ADD_I_HI	= 241,
    ADD_I_LO	= 242,
    ADD_R	= 243,
    AND_F_I_HI	= 244,
    AND_F_I_LO	= 245,
    AND_F_R	= 246,
    AND_I_HI	= 247,
    AND_I_LO	= 248,
    AND_R	= 249,
    BRCC	= 250,
    BRIND_CC	= 251,
    BRIND_CCA	= 252,
    BRR	= 253,
    BT	= 254,
    JR	= 255,
    LDADDR	= 256,
    LDBs_RI	= 257,
    LDBs_RR	= 258,
    LDBz_RI	= 259,
    LDBz_RR	= 260,
    LDHs_RI	= 261,
    LDHs_RR	= 262,
    LDHz_RI	= 263,
    LDHz_RR	= 264,
    LDW_RI	= 265,
    LDW_RR	= 266,
    LDWz_RR	= 267,
    LEADZ	= 268,
    LOG0	= 269,
    LOG1	= 270,
    LOG2	= 271,
    LOG3	= 272,
    LOG4	= 273,
    MOVHI	= 274,
    NOP	= 275,
    OR_F_I_HI	= 276,
    OR_F_I_LO	= 277,
    OR_F_R	= 278,
    OR_I_HI	= 279,
    OR_I_LO	= 280,
    OR_R	= 281,
    POPC	= 282,
    RET	= 283,
    SA_F_I	= 284,
    SA_I	= 285,
    SCC	= 286,
    SELECT	= 287,
    SFSUB_F_RI_HI	= 288,
    SFSUB_F_RI_LO	= 289,
    SFSUB_F_RR	= 290,
    SHL_F_R	= 291,
    SHL_R	= 292,
    SLI	= 293,
    SL_F_I	= 294,
    SL_I	= 295,
    SRA_F_R	= 296,
    SRA_R	= 297,
    SRL_F_R	= 298,
    SRL_R	= 299,
    STADDR	= 300,
    STB_RI	= 301,
    STB_RR	= 302,
    STH_RI	= 303,
    STH_RR	= 304,
    SUBB_F_I_HI	= 305,
    SUBB_F_I_LO	= 306,
    SUBB_F_R	= 307,
    SUBB_I_HI	= 308,
    SUBB_I_LO	= 309,
    SUBB_R	= 310,
    SUB_F_I_HI	= 311,
    SUB_F_I_LO	= 312,
    SUB_F_R	= 313,
    SUB_I_HI	= 314,
    SUB_I_LO	= 315,
    SUB_R	= 316,
    SW_RI	= 317,
    SW_RR	= 318,
    TRAILZ	= 319,
    XOR_F_I_HI	= 320,
    XOR_F_I_LO	= 321,
    XOR_F_R	= 322,
    XOR_I_HI	= 323,
    XOR_I_LO	= 324,
    XOR_R	= 325,
    INSTRUCTION_LIST_END = 326
  };

} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace Lanai {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_ALU_WriteALU	= 1,
    IIC_ALU	= 2,
    IIC_LD_WriteLD	= 3,
    IIC_LDSW_WriteLDSW	= 4,
    WriteLD	= 5,
    IIC_ST_WriteST	= 6,
    IIC_STSW_WriteSTSW	= 7,
    SCHED_LIST_END = 8
  };
} // end namespace Sched
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { Lanai::SP, 0 };
static const MCPhysReg ImplicitList2[] = { Lanai::RCA, 0 };
static const MCPhysReg ImplicitList3[] = { Lanai::SR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc LanaiInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo5 },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo6 },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #13 = DBG_VALUE
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #14 = DBG_INSTR_REF
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #15 = DBG_LABEL
  { 16,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #16 = REG_SEQUENCE
  { 17,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #17 = COPY
  { 18,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #18 = BUNDLE
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #19 = LIFETIME_START
  { 20,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #20 = LIFETIME_END
  { 21,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo8 },  // Inst #21 = PSEUDO_PROBE
  { 22,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #22 = STACKMAP
  { 23,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #23 = FENTRY_CALL
  { 24,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #24 = PATCHPOINT
  { 25,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo11 },  // Inst #25 = LOAD_STACK_GUARD
  { 26,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #26 = PREALLOCATED_SETUP
  { 27,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo12 },  // Inst #27 = PREALLOCATED_ARG
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #28 = STATEPOINT
  { 29,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo13 },  // Inst #29 = LOCAL_ESCAPE
  { 30,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #30 = FAULTING_OP
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #31 = PATCHABLE_OP
  { 32,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #32 = PATCHABLE_FUNCTION_ENTER
  { 33,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #33 = PATCHABLE_RET
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #34 = PATCHABLE_FUNCTION_EXIT
  { 35,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #35 = PATCHABLE_TAIL_CALL
  { 36,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #36 = PATCHABLE_EVENT_CALL
  { 37,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #37 = PATCHABLE_TYPED_EVENT_CALL
  { 38,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #38 = ICALL_BRANCH_FUNNEL
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #39 = G_ADD
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #40 = G_SUB
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #41 = G_MUL
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #42 = G_SDIV
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #43 = G_UDIV
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #44 = G_SREM
  { 45,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #45 = G_UREM
  { 46,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #46 = G_AND
  { 47,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #47 = G_OR
  { 48,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #48 = G_XOR
  { 49,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #49 = G_IMPLICIT_DEF
  { 50,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #50 = G_PHI
  { 51,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #51 = G_FRAME_INDEX
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #52 = G_GLOBAL_VALUE
  { 53,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #53 = G_EXTRACT
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #54 = G_UNMERGE_VALUES
  { 55,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #55 = G_INSERT
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #56 = G_MERGE_VALUES
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #57 = G_BUILD_VECTOR
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #58 = G_BUILD_VECTOR_TRUNC
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #59 = G_CONCAT_VECTORS
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #60 = G_PTRTOINT
  { 61,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #61 = G_INTTOPTR
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #62 = G_BITCAST
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #63 = G_FREEZE
  { 64,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #64 = G_INTRINSIC_TRUNC
  { 65,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #65 = G_INTRINSIC_ROUND
  { 66,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #66 = G_INTRINSIC_LRINT
  { 67,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #67 = G_INTRINSIC_ROUNDEVEN
  { 68,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #68 = G_READCYCLECOUNTER
  { 69,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #69 = G_LOAD
  { 70,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #70 = G_SEXTLOAD
  { 71,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #71 = G_ZEXTLOAD
  { 72,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #72 = G_INDEXED_LOAD
  { 73,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #73 = G_INDEXED_SEXTLOAD
  { 74,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #74 = G_INDEXED_ZEXTLOAD
  { 75,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #75 = G_STORE
  { 76,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24 },  // Inst #76 = G_INDEXED_STORE
  { 77,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #77 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 78,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #78 = G_ATOMIC_CMPXCHG
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #79 = G_ATOMICRMW_XCHG
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #80 = G_ATOMICRMW_ADD
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #81 = G_ATOMICRMW_SUB
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #82 = G_ATOMICRMW_AND
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #83 = G_ATOMICRMW_NAND
  { 84,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #84 = G_ATOMICRMW_OR
  { 85,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #85 = G_ATOMICRMW_XOR
  { 86,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #86 = G_ATOMICRMW_MAX
  { 87,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #87 = G_ATOMICRMW_MIN
  { 88,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #88 = G_ATOMICRMW_UMAX
  { 89,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #89 = G_ATOMICRMW_UMIN
  { 90,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #90 = G_ATOMICRMW_FADD
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #91 = G_ATOMICRMW_FSUB
  { 92,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #92 = G_FENCE
  { 93,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #93 = G_BRCOND
  { 94,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #94 = G_BRINDIRECT
  { 95,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #95 = G_INTRINSIC
  { 96,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #96 = G_INTRINSIC_W_SIDE_EFFECTS
  { 97,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #97 = G_ANYEXT
  { 98,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #98 = G_TRUNC
  { 99,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #99 = G_CONSTANT
  { 100,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #100 = G_FCONSTANT
  { 101,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #101 = G_VASTART
  { 102,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #102 = G_VAARG
  { 103,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #103 = G_SEXT
  { 104,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #104 = G_SEXT_INREG
  { 105,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #105 = G_ZEXT
  { 106,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #106 = G_SHL
  { 107,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #107 = G_LSHR
  { 108,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #108 = G_ASHR
  { 109,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #109 = G_FSHL
  { 110,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #110 = G_FSHR
  { 111,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #111 = G_ICMP
  { 112,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #112 = G_FCMP
  { 113,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #113 = G_SELECT
  { 114,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #114 = G_UADDO
  { 115,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #115 = G_UADDE
  { 116,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #116 = G_USUBO
  { 117,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #117 = G_USUBE
  { 118,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #118 = G_SADDO
  { 119,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #119 = G_SADDE
  { 120,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #120 = G_SSUBO
  { 121,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #121 = G_SSUBE
  { 122,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #122 = G_UMULO
  { 123,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #123 = G_SMULO
  { 124,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #124 = G_UMULH
  { 125,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #125 = G_SMULH
  { 126,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #126 = G_UADDSAT
  { 127,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #127 = G_SADDSAT
  { 128,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #128 = G_USUBSAT
  { 129,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #129 = G_SSUBSAT
  { 130,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #130 = G_USHLSAT
  { 131,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #131 = G_SSHLSAT
  { 132,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #132 = G_SMULFIX
  { 133,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #133 = G_UMULFIX
  { 134,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #134 = G_SMULFIXSAT
  { 135,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #135 = G_UMULFIXSAT
  { 136,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #136 = G_SDIVFIX
  { 137,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #137 = G_UDIVFIX
  { 138,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #138 = G_SDIVFIXSAT
  { 139,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #139 = G_UDIVFIXSAT
  { 140,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #140 = G_FADD
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #141 = G_FSUB
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #142 = G_FMUL
  { 143,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #143 = G_FMA
  { 144,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #144 = G_FMAD
  { 145,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #145 = G_FDIV
  { 146,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #146 = G_FREM
  { 147,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #147 = G_FPOW
  { 148,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #148 = G_FPOWI
  { 149,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #149 = G_FEXP
  { 150,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #150 = G_FEXP2
  { 151,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #151 = G_FLOG
  { 152,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #152 = G_FLOG2
  { 153,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #153 = G_FLOG10
  { 154,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #154 = G_FNEG
  { 155,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #155 = G_FPEXT
  { 156,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #156 = G_FPTRUNC
  { 157,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #157 = G_FPTOSI
  { 158,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #158 = G_FPTOUI
  { 159,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #159 = G_SITOFP
  { 160,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #160 = G_UITOFP
  { 161,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #161 = G_FABS
  { 162,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #162 = G_FCOPYSIGN
  { 163,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #163 = G_FCANONICALIZE
  { 164,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #164 = G_FMINNUM
  { 165,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #165 = G_FMAXNUM
  { 166,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #166 = G_FMINNUM_IEEE
  { 167,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #167 = G_FMAXNUM_IEEE
  { 168,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #168 = G_FMINIMUM
  { 169,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #169 = G_FMAXIMUM
  { 170,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #170 = G_PTR_ADD
  { 171,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #171 = G_PTRMASK
  { 172,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #172 = G_SMIN
  { 173,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #173 = G_SMAX
  { 174,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #174 = G_UMIN
  { 175,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #175 = G_UMAX
  { 176,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #176 = G_ABS
  { 177,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #177 = G_BR
  { 178,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #178 = G_BRJT
  { 179,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #179 = G_INSERT_VECTOR_ELT
  { 180,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #180 = G_EXTRACT_VECTOR_ELT
  { 181,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo39 },  // Inst #181 = G_SHUFFLE_VECTOR
  { 182,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #182 = G_CTTZ
  { 183,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #183 = G_CTTZ_ZERO_UNDEF
  { 184,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #184 = G_CTLZ
  { 185,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #185 = G_CTLZ_ZERO_UNDEF
  { 186,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #186 = G_CTPOP
  { 187,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #187 = G_BSWAP
  { 188,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #188 = G_BITREVERSE
  { 189,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #189 = G_FCEIL
  { 190,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #190 = G_FCOS
  { 191,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #191 = G_FSIN
  { 192,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #192 = G_FSQRT
  { 193,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #193 = G_FFLOOR
  { 194,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #194 = G_FRINT
  { 195,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #195 = G_FNEARBYINT
  { 196,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #196 = G_ADDRSPACE_CAST
  { 197,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #197 = G_BLOCK_ADDR
  { 198,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #198 = G_JUMP_TABLE
  { 199,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo40 },  // Inst #199 = G_DYN_STACKALLOC
  { 200,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #200 = G_STRICT_FADD
  { 201,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #201 = G_STRICT_FSUB
  { 202,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #202 = G_STRICT_FMUL
  { 203,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #203 = G_STRICT_FDIV
  { 204,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #204 = G_STRICT_FREM
  { 205,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #205 = G_STRICT_FMA
  { 206,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #206 = G_STRICT_FSQRT
  { 207,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #207 = G_READ_REGISTER
  { 208,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #208 = G_WRITE_REGISTER
  { 209,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #209 = G_MEMCPY
  { 210,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #210 = G_MEMMOVE
  { 211,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #211 = G_MEMSET
  { 212,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #212 = G_VECREDUCE_SEQ_FADD
  { 213,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #213 = G_VECREDUCE_SEQ_FMUL
  { 214,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #214 = G_VECREDUCE_FADD
  { 215,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #215 = G_VECREDUCE_FMUL
  { 216,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #216 = G_VECREDUCE_FMAX
  { 217,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #217 = G_VECREDUCE_FMIN
  { 218,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #218 = G_VECREDUCE_ADD
  { 219,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #219 = G_VECREDUCE_MUL
  { 220,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #220 = G_VECREDUCE_AND
  { 221,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #221 = G_VECREDUCE_OR
  { 222,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #222 = G_VECREDUCE_XOR
  { 223,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #223 = G_VECREDUCE_SMAX
  { 224,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #224 = G_VECREDUCE_SMIN
  { 225,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #225 = G_VECREDUCE_UMAX
  { 226,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #226 = G_VECREDUCE_UMIN
  { 227,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #227 = ADJCALLSTACKDOWN
  { 228,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #228 = ADJCALLSTACKUP
  { 229,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo43 },  // Inst #229 = ADJDYNALLOC
  { 230,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2 },  // Inst #230 = CALL
  { 231,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo44 },  // Inst #231 = CALLR
  { 232,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo45 },  // Inst #232 = ADDC_F_I_HI
  { 233,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo45 },  // Inst #233 = ADDC_F_I_LO
  { 234,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo46 },  // Inst #234 = ADDC_F_R
  { 235,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo45 },  // Inst #235 = ADDC_I_HI
  { 236,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo45 },  // Inst #236 = ADDC_I_LO
  { 237,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo46 },  // Inst #237 = ADDC_R
  { 238,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #238 = ADD_F_I_HI
  { 239,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #239 = ADD_F_I_LO
  { 240,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo46 },  // Inst #240 = ADD_F_R
  { 241,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #241 = ADD_I_HI
  { 242,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #242 = ADD_I_LO
  { 243,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #243 = ADD_R
  { 244,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #244 = AND_F_I_HI
  { 245,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #245 = AND_F_I_LO
  { 246,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo46 },  // Inst #246 = AND_F_R
  { 247,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #247 = AND_I_HI
  { 248,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #248 = AND_I_LO
  { 249,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #249 = AND_R
  { 250,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo7 },  // Inst #250 = BRCC
  { 251,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo47 },  // Inst #251 = BRIND_CC
  { 252,	3,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo45 },  // Inst #252 = BRIND_CCA
  { 253,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo48 },  // Inst #253 = BRR
  { 254,	1,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #254 = BT
  { 255,	1,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #255 = JR
  { 256,	2,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #256 = LDADDR
  { 257,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #257 = LDBs_RI
  { 258,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #258 = LDBs_RR
  { 259,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #259 = LDBz_RI
  { 260,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #260 = LDBz_RR
  { 261,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #261 = LDHs_RI
  { 262,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #262 = LDHs_RR
  { 263,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #263 = LDHz_RI
  { 264,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #264 = LDHz_RR
  { 265,	4,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #265 = LDW_RI
  { 266,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #266 = LDW_RR
  { 267,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #267 = LDWz_RR
  { 268,	2,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #268 = LEADZ
  { 269,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #269 = LOG0
  { 270,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #270 = LOG1
  { 271,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #271 = LOG2
  { 272,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #272 = LOG3
  { 273,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #273 = LOG4
  { 274,	2,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #274 = MOVHI
  { 275,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #275 = NOP
  { 276,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #276 = OR_F_I_HI
  { 277,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #277 = OR_F_I_LO
  { 278,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo46 },  // Inst #278 = OR_F_R
  { 279,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #279 = OR_I_HI
  { 280,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #280 = OR_I_LO
  { 281,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #281 = OR_R
  { 282,	2,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #282 = POPC
  { 283,	0,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, nullptr, nullptr },  // Inst #283 = RET
  { 284,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #284 = SA_F_I
  { 285,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #285 = SA_I
  { 286,	2,	1,	4,	2,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo47 },  // Inst #286 = SCC
  { 287,	4,	1,	4,	1,	0|(1ULL<<MCID::Select)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo51 },  // Inst #287 = SELECT
  { 288,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo47 },  // Inst #288 = SFSUB_F_RI_HI
  { 289,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo47 },  // Inst #289 = SFSUB_F_RI_LO
  { 290,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #290 = SFSUB_F_RR
  { 291,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo46 },  // Inst #291 = SHL_F_R
  { 292,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #292 = SHL_R
  { 293,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #293 = SLI
  { 294,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #294 = SL_F_I
  { 295,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #295 = SL_I
  { 296,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo46 },  // Inst #296 = SRA_F_R
  { 297,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #297 = SRA_R
  { 298,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo46 },  // Inst #298 = SRL_F_R
  { 299,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #299 = SRL_R
  { 300,	2,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #300 = STADDR
  { 301,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #301 = STB_RI
  { 302,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #302 = STB_RR
  { 303,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #303 = STH_RI
  { 304,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #304 = STH_RR
  { 305,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo45 },  // Inst #305 = SUBB_F_I_HI
  { 306,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo45 },  // Inst #306 = SUBB_F_I_LO
  { 307,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo46 },  // Inst #307 = SUBB_F_R
  { 308,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo45 },  // Inst #308 = SUBB_I_HI
  { 309,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo45 },  // Inst #309 = SUBB_I_LO
  { 310,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo46 },  // Inst #310 = SUBB_R
  { 311,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #311 = SUB_F_I_HI
  { 312,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #312 = SUB_F_I_LO
  { 313,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo46 },  // Inst #313 = SUB_F_R
  { 314,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #314 = SUB_I_HI
  { 315,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #315 = SUB_I_LO
  { 316,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #316 = SUB_R
  { 317,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #317 = SW_RI
  { 318,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #318 = SW_RR
  { 319,	2,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #319 = TRAILZ
  { 320,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #320 = XOR_F_I_HI
  { 321,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo45 },  // Inst #321 = XOR_F_I_LO
  { 322,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo46 },  // Inst #322 = XOR_F_R
  { 323,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #323 = XOR_I_HI
  { 324,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #324 = XOR_I_LO
  { 325,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #325 = XOR_R
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char LanaiInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "LOG0\0"
  /* 14 */ "LOG1\0"
  /* 19 */ "G_FLOG2\0"
  /* 27 */ "G_FEXP2\0"
  /* 35 */ "LOG3\0"
  /* 40 */ "LOG4\0"
  /* 45 */ "BRIND_CCA\0"
  /* 55 */ "G_FMA\0"
  /* 61 */ "G_STRICT_FMA\0"
  /* 74 */ "G_FSUB\0"
  /* 81 */ "G_STRICT_FSUB\0"
  /* 95 */ "G_ATOMICRMW_FSUB\0"
  /* 112 */ "G_SUB\0"
  /* 118 */ "G_ATOMICRMW_SUB\0"
  /* 134 */ "BRCC\0"
  /* 139 */ "SCC\0"
  /* 143 */ "BRIND_CC\0"
  /* 152 */ "G_INTRINSIC\0"
  /* 164 */ "G_FPTRUNC\0"
  /* 174 */ "G_INTRINSIC_TRUNC\0"
  /* 192 */ "G_TRUNC\0"
  /* 200 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 221 */ "G_DYN_STACKALLOC\0"
  /* 238 */ "ADJDYNALLOC\0"
  /* 250 */ "POPC\0"
  /* 255 */ "G_FMAD\0"
  /* 262 */ "G_INDEXED_SEXTLOAD\0"
  /* 281 */ "G_SEXTLOAD\0"
  /* 292 */ "G_INDEXED_ZEXTLOAD\0"
  /* 311 */ "G_ZEXTLOAD\0"
  /* 322 */ "G_INDEXED_LOAD\0"
  /* 337 */ "G_LOAD\0"
  /* 344 */ "G_VECREDUCE_FADD\0"
  /* 361 */ "G_FADD\0"
  /* 368 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 389 */ "G_STRICT_FADD\0"
  /* 403 */ "G_ATOMICRMW_FADD\0"
  /* 420 */ "G_VECREDUCE_ADD\0"
  /* 436 */ "G_ADD\0"
  /* 442 */ "G_PTR_ADD\0"
  /* 452 */ "G_ATOMICRMW_ADD\0"
  /* 468 */ "G_ATOMICRMW_NAND\0"
  /* 485 */ "G_VECREDUCE_AND\0"
  /* 501 */ "G_AND\0"
  /* 507 */ "G_ATOMICRMW_AND\0"
  /* 523 */ "LIFETIME_END\0"
  /* 536 */ "G_BRCOND\0"
  /* 545 */ "G_INTRINSIC_ROUND\0"
  /* 563 */ "LOAD_STACK_GUARD\0"
  /* 580 */ "PSEUDO_PROBE\0"
  /* 593 */ "G_SSUBE\0"
  /* 601 */ "G_USUBE\0"
  /* 609 */ "G_FENCE\0"
  /* 617 */ "REG_SEQUENCE\0"
  /* 630 */ "G_SADDE\0"
  /* 638 */ "G_UADDE\0"
  /* 646 */ "G_FMINNUM_IEEE\0"
  /* 661 */ "G_FMAXNUM_IEEE\0"
  /* 676 */ "G_JUMP_TABLE\0"
  /* 689 */ "BUNDLE\0"
  /* 696 */ "LOCAL_ESCAPE\0"
  /* 709 */ "G_INDEXED_STORE\0"
  /* 725 */ "G_STORE\0"
  /* 733 */ "G_BITREVERSE\0"
  /* 746 */ "DBG_VALUE\0"
  /* 756 */ "G_GLOBAL_VALUE\0"
  /* 771 */ "G_MEMMOVE\0"
  /* 781 */ "G_FREEZE\0"
  /* 790 */ "G_FCANONICALIZE\0"
  /* 806 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 824 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 842 */ "G_IMPLICIT_DEF\0"
  /* 857 */ "DBG_INSTR_REF\0"
  /* 871 */ "G_FNEG\0"
  /* 878 */ "EXTRACT_SUBREG\0"
  /* 893 */ "INSERT_SUBREG\0"
  /* 907 */ "G_SEXT_INREG\0"
  /* 920 */ "SUBREG_TO_REG\0"
  /* 934 */ "G_ATOMIC_CMPXCHG\0"
  /* 951 */ "G_ATOMICRMW_XCHG\0"
  /* 968 */ "G_FLOG\0"
  /* 975 */ "G_VAARG\0"
  /* 983 */ "PREALLOCATED_ARG\0"
  /* 1000 */ "G_SMULH\0"
  /* 1008 */ "G_UMULH\0"
  /* 1016 */ "G_PHI\0"
  /* 1022 */ "MOVHI\0"
  /* 1028 */ "SFSUB_F_RI_HI\0"
  /* 1042 */ "SUBB_I_HI\0"
  /* 1052 */ "SUB_I_HI\0"
  /* 1061 */ "ADDC_I_HI\0"
  /* 1071 */ "ADD_I_HI\0"
  /* 1080 */ "AND_I_HI\0"
  /* 1089 */ "SUBB_F_I_HI\0"
  /* 1101 */ "SUB_F_I_HI\0"
  /* 1112 */ "ADDC_F_I_HI\0"
  /* 1124 */ "ADD_F_I_HI\0"
  /* 1135 */ "AND_F_I_HI\0"
  /* 1146 */ "XOR_F_I_HI\0"
  /* 1157 */ "XOR_I_HI\0"
  /* 1166 */ "SLI\0"
  /* 1170 */ "STB_RI\0"
  /* 1177 */ "STH_RI\0"
  /* 1184 */ "LDW_RI\0"
  /* 1191 */ "SW_RI\0"
  /* 1197 */ "LDBs_RI\0"
  /* 1205 */ "LDHs_RI\0"
  /* 1213 */ "LDBz_RI\0"
  /* 1221 */ "LDHz_RI\0"
  /* 1229 */ "G_FPTOSI\0"
  /* 1238 */ "G_FPTOUI\0"
  /* 1247 */ "G_FPOWI\0"
  /* 1255 */ "SA_I\0"
  /* 1260 */ "SA_F_I\0"
  /* 1267 */ "SL_F_I\0"
  /* 1274 */ "SL_I\0"
  /* 1279 */ "G_PTRMASK\0"
  /* 1289 */ "GC_LABEL\0"
  /* 1298 */ "DBG_LABEL\0"
  /* 1308 */ "EH_LABEL\0"
  /* 1317 */ "ANNOTATION_LABEL\0"
  /* 1334 */ "ICALL_BRANCH_FUNNEL\0"
  /* 1354 */ "G_FSHL\0"
  /* 1361 */ "G_SHL\0"
  /* 1367 */ "G_FCEIL\0"
  /* 1375 */ "PATCHABLE_TAIL_CALL\0"
  /* 1395 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 1422 */ "PATCHABLE_EVENT_CALL\0"
  /* 1443 */ "FENTRY_CALL\0"
  /* 1455 */ "KILL\0"
  /* 1460 */ "G_VECREDUCE_FMUL\0"
  /* 1477 */ "G_FMUL\0"
  /* 1484 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 1505 */ "G_STRICT_FMUL\0"
  /* 1519 */ "G_VECREDUCE_MUL\0"
  /* 1535 */ "G_MUL\0"
  /* 1541 */ "G_FREM\0"
  /* 1548 */ "G_STRICT_FREM\0"
  /* 1562 */ "G_SREM\0"
  /* 1569 */ "G_UREM\0"
  /* 1576 */ "INLINEASM\0"
  /* 1586 */ "G_FMINIMUM\0"
  /* 1597 */ "G_FMAXIMUM\0"
  /* 1608 */ "G_FMINNUM\0"
  /* 1618 */ "G_FMAXNUM\0"
  /* 1628 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 1650 */ "G_FCOPYSIGN\0"
  /* 1662 */ "G_VECREDUCE_FMIN\0"
  /* 1679 */ "G_VECREDUCE_SMIN\0"
  /* 1696 */ "G_SMIN\0"
  /* 1703 */ "G_VECREDUCE_UMIN\0"
  /* 1720 */ "G_UMIN\0"
  /* 1727 */ "G_ATOMICRMW_UMIN\0"
  /* 1744 */ "G_ATOMICRMW_MIN\0"
  /* 1760 */ "G_FSIN\0"
  /* 1767 */ "CFI_INSTRUCTION\0"
  /* 1783 */ "ADJCALLSTACKDOWN\0"
  /* 1800 */ "G_SSUBO\0"
  /* 1808 */ "G_USUBO\0"
  /* 1816 */ "G_SADDO\0"
  /* 1824 */ "G_UADDO\0"
  /* 1832 */ "G_SMULO\0"
  /* 1840 */ "G_UMULO\0"
  /* 1848 */ "SFSUB_F_RI_LO\0"
  /* 1862 */ "SUBB_I_LO\0"
  /* 1872 */ "SUB_I_LO\0"
  /* 1881 */ "ADDC_I_LO\0"
  /* 1891 */ "ADD_I_LO\0"
  /* 1900 */ "AND_I_LO\0"
  /* 1909 */ "SUBB_F_I_LO\0"
  /* 1921 */ "SUB_F_I_LO\0"
  /* 1932 */ "ADDC_F_I_LO\0"
  /* 1944 */ "ADD_F_I_LO\0"
  /* 1955 */ "AND_F_I_LO\0"
  /* 1966 */ "XOR_F_I_LO\0"
  /* 1977 */ "XOR_I_LO\0"
  /* 1986 */ "STACKMAP\0"
  /* 1995 */ "G_BSWAP\0"
  /* 2003 */ "G_SITOFP\0"
  /* 2012 */ "G_UITOFP\0"
  /* 2021 */ "G_FCMP\0"
  /* 2028 */ "G_ICMP\0"
  /* 2035 */ "NOP\0"
  /* 2039 */ "G_CTPOP\0"
  /* 2047 */ "PATCHABLE_OP\0"
  /* 2060 */ "FAULTING_OP\0"
  /* 2072 */ "ADJCALLSTACKUP\0"
  /* 2087 */ "PREALLOCATED_SETUP\0"
  /* 2106 */ "G_FEXP\0"
  /* 2113 */ "G_BR\0"
  /* 2118 */ "INLINEASM_BR\0"
  /* 2131 */ "LDADDR\0"
  /* 2138 */ "STADDR\0"
  /* 2145 */ "G_BLOCK_ADDR\0"
  /* 2158 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 2183 */ "G_READCYCLECOUNTER\0"
  /* 2202 */ "G_READ_REGISTER\0"
  /* 2218 */ "G_WRITE_REGISTER\0"
  /* 2235 */ "G_ASHR\0"
  /* 2242 */ "G_FSHR\0"
  /* 2249 */ "G_LSHR\0"
  /* 2256 */ "JR\0"
  /* 2259 */ "CALLR\0"
  /* 2265 */ "G_FFLOOR\0"
  /* 2274 */ "G_BUILD_VECTOR\0"
  /* 2289 */ "G_SHUFFLE_VECTOR\0"
  /* 2306 */ "G_VECREDUCE_XOR\0"
  /* 2322 */ "G_XOR\0"
  /* 2328 */ "G_ATOMICRMW_XOR\0"
  /* 2344 */ "G_VECREDUCE_OR\0"
  /* 2359 */ "G_OR\0"
  /* 2364 */ "G_ATOMICRMW_OR\0"
  /* 2379 */ "BRR\0"
  /* 2383 */ "STB_RR\0"
  /* 2390 */ "SFSUB_F_RR\0"
  /* 2401 */ "STH_RR\0"
  /* 2408 */ "LDW_RR\0"
  /* 2415 */ "SW_RR\0"
  /* 2421 */ "LDBs_RR\0"
  /* 2429 */ "LDHs_RR\0"
  /* 2437 */ "LDBz_RR\0"
  /* 2445 */ "LDHz_RR\0"
  /* 2453 */ "LDWz_RR\0"
  /* 2461 */ "G_INTTOPTR\0"
  /* 2472 */ "SRA_R\0"
  /* 2478 */ "SUBB_R\0"
  /* 2485 */ "SUB_R\0"
  /* 2491 */ "ADDC_R\0"
  /* 2498 */ "ADD_R\0"
  /* 2504 */ "AND_R\0"
  /* 2510 */ "SRA_F_R\0"
  /* 2518 */ "SUBB_F_R\0"
  /* 2527 */ "SUB_F_R\0"
  /* 2535 */ "ADDC_F_R\0"
  /* 2544 */ "ADD_F_R\0"
  /* 2552 */ "AND_F_R\0"
  /* 2560 */ "SHL_F_R\0"
  /* 2568 */ "SRL_F_R\0"
  /* 2576 */ "XOR_F_R\0"
  /* 2584 */ "SHL_R\0"
  /* 2590 */ "SRL_R\0"
  /* 2596 */ "XOR_R\0"
  /* 2602 */ "G_FABS\0"
  /* 2609 */ "G_ABS\0"
  /* 2615 */ "G_UNMERGE_VALUES\0"
  /* 2632 */ "G_MERGE_VALUES\0"
  /* 2647 */ "G_FCOS\0"
  /* 2654 */ "G_CONCAT_VECTORS\0"
  /* 2671 */ "COPY_TO_REGCLASS\0"
  /* 2688 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 2718 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 2745 */ "G_SSUBSAT\0"
  /* 2755 */ "G_USUBSAT\0"
  /* 2765 */ "G_SADDSAT\0"
  /* 2775 */ "G_UADDSAT\0"
  /* 2785 */ "G_SSHLSAT\0"
  /* 2795 */ "G_USHLSAT\0"
  /* 2805 */ "G_SMULFIXSAT\0"
  /* 2818 */ "G_UMULFIXSAT\0"
  /* 2831 */ "G_SDIVFIXSAT\0"
  /* 2844 */ "G_UDIVFIXSAT\0"
  /* 2857 */ "BT\0"
  /* 2860 */ "G_EXTRACT\0"
  /* 2870 */ "G_SELECT\0"
  /* 2879 */ "G_BRINDIRECT\0"
  /* 2892 */ "PATCHABLE_RET\0"
  /* 2906 */ "G_MEMSET\0"
  /* 2915 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 2939 */ "G_BRJT\0"
  /* 2946 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 2967 */ "G_INSERT_VECTOR_ELT\0"
  /* 2987 */ "G_FCONSTANT\0"
  /* 2999 */ "G_CONSTANT\0"
  /* 3010 */ "STATEPOINT\0"
  /* 3021 */ "PATCHPOINT\0"
  /* 3032 */ "G_PTRTOINT\0"
  /* 3043 */ "G_FRINT\0"
  /* 3051 */ "G_INTRINSIC_LRINT\0"
  /* 3069 */ "G_FNEARBYINT\0"
  /* 3082 */ "G_VASTART\0"
  /* 3092 */ "LIFETIME_START\0"
  /* 3107 */ "G_INSERT\0"
  /* 3116 */ "G_FSQRT\0"
  /* 3124 */ "G_STRICT_FSQRT\0"
  /* 3139 */ "G_BITCAST\0"
  /* 3149 */ "G_ADDRSPACE_CAST\0"
  /* 3166 */ "G_FPEXT\0"
  /* 3174 */ "G_SEXT\0"
  /* 3181 */ "G_ANYEXT\0"
  /* 3190 */ "G_ZEXT\0"
  /* 3197 */ "G_FDIV\0"
  /* 3204 */ "G_STRICT_FDIV\0"
  /* 3218 */ "G_SDIV\0"
  /* 3225 */ "G_UDIV\0"
  /* 3232 */ "G_FPOW\0"
  /* 3239 */ "G_VECREDUCE_FMAX\0"
  /* 3256 */ "G_VECREDUCE_SMAX\0"
  /* 3273 */ "G_SMAX\0"
  /* 3280 */ "G_VECREDUCE_UMAX\0"
  /* 3297 */ "G_UMAX\0"
  /* 3304 */ "G_ATOMICRMW_UMAX\0"
  /* 3321 */ "G_ATOMICRMW_MAX\0"
  /* 3337 */ "G_FRAME_INDEX\0"
  /* 3351 */ "G_SMULFIX\0"
  /* 3361 */ "G_UMULFIX\0"
  /* 3371 */ "G_SDIVFIX\0"
  /* 3381 */ "G_UDIVFIX\0"
  /* 3391 */ "G_MEMCPY\0"
  /* 3400 */ "COPY\0"
  /* 3405 */ "LEADZ\0"
  /* 3411 */ "TRAILZ\0"
  /* 3418 */ "G_CTLZ\0"
  /* 3425 */ "G_CTTZ\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned LanaiInstrNameIndices[] = {
    1018U, 1576U, 2118U, 1767U, 1308U, 1289U, 1317U, 1455U, 
    878U, 893U, 844U, 920U, 2671U, 746U, 857U, 1298U, 
    617U, 3400U, 689U, 3092U, 523U, 580U, 1986U, 1443U, 
    3021U, 563U, 2087U, 983U, 3010U, 696U, 2060U, 2047U, 
    2158U, 2892U, 2915U, 1375U, 1422U, 1395U, 1334U, 436U, 
    112U, 1535U, 3218U, 3225U, 1562U, 1569U, 501U, 2359U, 
    2322U, 842U, 1016U, 3337U, 756U, 2860U, 2615U, 3107U, 
    2632U, 2274U, 200U, 2654U, 3032U, 2461U, 3139U, 781U, 
    174U, 545U, 3051U, 1628U, 2183U, 337U, 281U, 311U, 
    322U, 262U, 292U, 725U, 709U, 2688U, 934U, 951U, 
    452U, 118U, 507U, 468U, 2364U, 2328U, 3321U, 1744U, 
    3304U, 1727U, 403U, 95U, 609U, 536U, 2879U, 152U, 
    2718U, 3181U, 192U, 2999U, 2987U, 3082U, 975U, 3174U, 
    907U, 3190U, 1361U, 2249U, 2235U, 1354U, 2242U, 2028U, 
    2021U, 2870U, 1824U, 638U, 1808U, 601U, 1816U, 630U, 
    1800U, 593U, 1840U, 1832U, 1008U, 1000U, 2775U, 2765U, 
    2755U, 2745U, 2795U, 2785U, 3351U, 3361U, 2805U, 2818U, 
    3371U, 3381U, 2831U, 2844U, 361U, 74U, 1477U, 55U, 
    255U, 3197U, 1541U, 3232U, 1247U, 2106U, 27U, 968U, 
    19U, 0U, 871U, 3166U, 164U, 1229U, 1238U, 2003U, 
    2012U, 2602U, 1650U, 790U, 1608U, 1618U, 646U, 661U, 
    1586U, 1597U, 442U, 1279U, 1696U, 3273U, 1720U, 3297U, 
    2609U, 2113U, 2939U, 2967U, 2946U, 2289U, 3425U, 824U, 
    3418U, 806U, 2039U, 1995U, 733U, 1367U, 2647U, 1760U, 
    3116U, 2265U, 3043U, 3069U, 3149U, 2145U, 676U, 221U, 
    389U, 81U, 1505U, 3204U, 1548U, 61U, 3124U, 2202U, 
    2218U, 3391U, 771U, 2906U, 368U, 1484U, 344U, 1460U, 
    3239U, 1662U, 420U, 1519U, 485U, 2344U, 2306U, 3256U, 
    1679U, 3280U, 1703U, 1783U, 2072U, 238U, 1390U, 2259U, 
    1112U, 1932U, 2535U, 1061U, 1881U, 2491U, 1124U, 1944U, 
    2544U, 1071U, 1891U, 2498U, 1135U, 1955U, 2552U, 1080U, 
    1900U, 2504U, 134U, 143U, 45U, 2379U, 2857U, 2256U, 
    2131U, 1197U, 2421U, 1213U, 2437U, 1205U, 2429U, 1221U, 
    2445U, 1184U, 2408U, 2453U, 3405U, 9U, 14U, 22U, 
    35U, 40U, 1022U, 2035U, 1147U, 1967U, 2577U, 1158U, 
    1978U, 2597U, 250U, 2902U, 1260U, 1255U, 139U, 2872U, 
    1028U, 1848U, 2390U, 2560U, 2584U, 1166U, 1267U, 1274U, 
    2510U, 2472U, 2568U, 2590U, 2138U, 1170U, 2383U, 1177U, 
    2401U, 1089U, 1909U, 2518U, 1042U, 1862U, 2478U, 1101U, 
    1921U, 2527U, 1052U, 1872U, 2485U, 1191U, 2415U, 3411U, 
    1146U, 1966U, 2576U, 1157U, 1977U, 2596U, 
};

static inline void InitLanaiMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, nullptr, nullptr, 326);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct LanaiGenInstrInfo : public TargetInstrInfo {
  explicit LanaiGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~LanaiGenInstrInfo() override = default;

};
} // end namespace llvm
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc LanaiInsts[];
extern const unsigned LanaiInstrNameIndices[];
extern const char LanaiInstrNameData[];
LanaiGenInstrInfo::LanaiGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, nullptr, nullptr, 326);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Lanai {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Lanai {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Lanai {
namespace OpTypes {
enum OperandType {
  AluOp = 0,
  BrTarget = 1,
  CCOp = 2,
  CallTarget = 3,
  MEMi = 4,
  MEMri = 5,
  MEMrr = 6,
  MEMspls = 7,
  f32imm = 8,
  f64imm = 9,
  i16imm = 10,
  i1imm = 11,
  i32hi16 = 12,
  i32hi16and = 13,
  i32imm = 14,
  i32lo16and = 15,
  i32lo16s = 16,
  i32lo16z = 17,
  i32lo21 = 18,
  i32neg16 = 19,
  i64imm = 20,
  i8imm = 21,
  imm10 = 22,
  immShift = 23,
  pred = 24,
  ptype0 = 25,
  ptype1 = 26,
  ptype2 = 27,
  ptype3 = 28,
  ptype4 = 29,
  ptype5 = 30,
  type0 = 31,
  type1 = 32,
  type2 = 33,
  type3 = 34,
  type4 = 35,
  type5 = 36,
  untyped_imm_0 = 37,
  CCR = 38,
  GPR = 39,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace Lanai {
LLVM_READONLY
static int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  const uint16_t Offsets[] = {
    0,
    1,
    1,
    1,
    2,
    3,
    4,
    5,
    5,
    8,
    12,
    13,
    17,
    20,
    20,
    20,
    21,
    23,
    25,
    25,
    26,
    27,
    31,
    33,
    33,
    39,
    40,
    41,
    44,
    44,
    46,
    47,
    47,
    47,
    47,
    47,
    47,
    49,
    52,
    52,
    55,
    58,
    61,
    64,
    67,
    70,
    73,
    76,
    79,
    82,
    83,
    84,
    86,
    88,
    91,
    93,
    97,
    99,
    101,
    103,
    105,
    107,
    109,
    111,
    113,
    115,
    117,
    119,
    121,
    122,
    124,
    126,
    128,
    133,
    138,
    143,
    145,
    150,
    155,
    159,
    162,
    165,
    168,
    171,
    174,
    177,
    180,
    183,
    186,
    189,
    192,
    195,
    198,
    200,
    202,
    203,
    204,
    205,
    207,
    209,
    211,
    213,
    214,
    217,
    219,
    222,
    224,
    227,
    230,
    233,
    237,
    241,
    245,
    249,
    253,
    257,
    262,
    266,
    271,
    275,
    280,
    284,
    289,
    293,
    297,
    300,
    303,
    306,
    309,
    312,
    315,
    318,
    321,
    325,
    329,
    333,
    337,
    341,
    345,
    349,
    353,
    356,
    359,
    362,
    366,
    370,
    373,
    376,
    379,
    382,
    384,
    386,
    388,
    390,
    392,
    394,
    396,
    398,
    400,
    402,
    404,
    406,
    408,
    411,
    413,
    416,
    419,
    422,
    425,
    428,
    431,
    434,
    437,
    440,
    443,
    446,
    449,
    451,
    452,
    455,
    459,
    462,
    466,
    468,
    470,
    472,
    474,
    476,
    478,
    480,
    482,
    484,
    486,
    488,
    490,
    492,
    494,
    496,
    498,
    500,
    503,
    506,
    509,
    512,
    515,
    518,
    522,
    524,
    526,
    528,
    532,
    536,
    540,
    543,
    546,
    548,
    550,
    552,
    554,
    556,
    558,
    560,
    562,
    564,
    566,
    568,
    570,
    572,
    574,
    576,
    578,
    579,
    580,
    583,
    586,
    590,
    593,
    596,
    600,
    603,
    606,
    610,
    613,
    616,
    620,
    623,
    626,
    630,
    633,
    636,
    640,
    642,
    644,
    647,
    649,
    650,
    651,
    653,
    657,
    661,
    665,
    669,
    673,
    677,
    681,
    685,
    689,
    693,
    697,
    699,
    699,
    699,
    699,
    699,
    699,
    701,
    701,
    704,
    707,
    711,
    714,
    717,
    721,
    723,
    723,
    726,
    729,
    731,
    735,
    737,
    739,
    741,
    745,
    749,
    751,
    754,
    757,
    761,
    765,
    769,
    773,
    775,
    779,
    783,
    787,
    791,
    794,
    797,
    801,
    804,
    807,
    811,
    814,
    817,
    821,
    824,
    827,
    831,
    835,
    839,
    841,
    844,
    847,
    851,
    854,
    857,
  };
  const int8_t OpcodeOperandTypes[] = {
    -1, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    /**/
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, 
    /**/
    /**/
    -1, 
    -1, -1, 
    -1, -1, 
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i64imm, OpTypes::i64imm, OpTypes::i8imm, OpTypes::i32imm, 
    OpTypes::i64imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i64imm, OpTypes::i32imm, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, 
    OpTypes::i32imm, 
    -1, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i32imm, 
    -1, 
    /**/
    /**/
    /**/
    /**/
    /**/
    -1, -1, 
    -1, -1, -1, 
    /**/
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type1, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::ptype0, OpTypes::ptype2, -1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    -1, 
    -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::ptype0, OpTypes::ptype0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    -1, 
    OpTypes::ptype0, -1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::i32imm, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, -1, 
    -1, OpTypes::type0, 
    OpTypes::ptype0, OpTypes::ptype1, OpTypes::type2, OpTypes::untyped_imm_0, 
    OpTypes::ptype0, OpTypes::ptype1, OpTypes::type2, OpTypes::untyped_imm_0, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::type2, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::CallTarget, 
    OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16and, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16and, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16and, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16and, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::BrTarget, OpTypes::CCOp, 
    OpTypes::GPR, OpTypes::CCOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::CCOp, 
    OpTypes::i16imm, OpTypes::CCOp, 
    OpTypes::BrTarget, 
    OpTypes::GPR, 
    OpTypes::GPR, OpTypes::i32lo21, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16s, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, 
    /**/
    /**/
    /**/
    /**/
    /**/
    OpTypes::GPR, OpTypes::i32hi16, 
    /**/
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, 
    /**/
    OpTypes::GPR, OpTypes::GPR, OpTypes::immShift, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::immShift, 
    OpTypes::GPR, OpTypes::CCOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::CCOp, 
    OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::i32lo21, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::immShift, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::immShift, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::i32lo21, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16s, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Lanai {

enum PostEncoderMethod {
	PostEncoderMethod_adjustPqBitsSpls
};

// splsIdempotent
LLVM_READONLY
int splsIdempotent(uint16_t Opcode) {
static const uint16_t splsIdempotentTable[][2] = {
  { Lanai::LDBs_RI, Lanai::LDBs_RI },
  { Lanai::LDBz_RI, Lanai::LDBz_RI },
  { Lanai::LDHs_RI, Lanai::LDHs_RI },
  { Lanai::LDHz_RI, Lanai::LDHz_RI },
  { Lanai::STB_RI, Lanai::STB_RI },
  { Lanai::STH_RI, Lanai::STH_RI },
}; // End of splsIdempotentTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 6;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (Opcode == splsIdempotentTable[mid][0]) {
      break;
    }
    if (Opcode < splsIdempotentTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return splsIdempotentTable[mid][1];
}

} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRMAP_INFO

