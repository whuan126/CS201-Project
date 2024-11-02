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

namespace BPF {
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
    MEMCPY	= 229,
    Select	= 230,
    Select_32	= 231,
    Select_32_64	= 232,
    Select_64_32	= 233,
    Select_Ri	= 234,
    Select_Ri_32	= 235,
    Select_Ri_32_64	= 236,
    Select_Ri_64_32	= 237,
    ADD_ri	= 238,
    ADD_ri_32	= 239,
    ADD_rr	= 240,
    ADD_rr_32	= 241,
    AND_ri	= 242,
    AND_ri_32	= 243,
    AND_rr	= 244,
    AND_rr_32	= 245,
    BE16	= 246,
    BE32	= 247,
    BE64	= 248,
    CMPXCHGD	= 249,
    CMPXCHGW32	= 250,
    CORE_ALU32_MEM	= 251,
    CORE_MEM	= 252,
    CORE_SHIFT	= 253,
    DIV_ri	= 254,
    DIV_ri_32	= 255,
    DIV_rr	= 256,
    DIV_rr_32	= 257,
    FI_ri	= 258,
    JAL	= 259,
    JALX	= 260,
    JEQ_ri	= 261,
    JEQ_ri_32	= 262,
    JEQ_rr	= 263,
    JEQ_rr_32	= 264,
    JMP	= 265,
    JNE_ri	= 266,
    JNE_ri_32	= 267,
    JNE_rr	= 268,
    JNE_rr_32	= 269,
    JSGE_ri	= 270,
    JSGE_ri_32	= 271,
    JSGE_rr	= 272,
    JSGE_rr_32	= 273,
    JSGT_ri	= 274,
    JSGT_ri_32	= 275,
    JSGT_rr	= 276,
    JSGT_rr_32	= 277,
    JSLE_ri	= 278,
    JSLE_ri_32	= 279,
    JSLE_rr	= 280,
    JSLE_rr_32	= 281,
    JSLT_ri	= 282,
    JSLT_ri_32	= 283,
    JSLT_rr	= 284,
    JSLT_rr_32	= 285,
    JUGE_ri	= 286,
    JUGE_ri_32	= 287,
    JUGE_rr	= 288,
    JUGE_rr_32	= 289,
    JUGT_ri	= 290,
    JUGT_ri_32	= 291,
    JUGT_rr	= 292,
    JUGT_rr_32	= 293,
    JULE_ri	= 294,
    JULE_ri_32	= 295,
    JULE_rr	= 296,
    JULE_rr_32	= 297,
    JULT_ri	= 298,
    JULT_ri_32	= 299,
    JULT_rr	= 300,
    JULT_rr_32	= 301,
    LDB	= 302,
    LDB32	= 303,
    LDD	= 304,
    LDH	= 305,
    LDH32	= 306,
    LDW	= 307,
    LDW32	= 308,
    LD_ABS_B	= 309,
    LD_ABS_H	= 310,
    LD_ABS_W	= 311,
    LD_IND_B	= 312,
    LD_IND_H	= 313,
    LD_IND_W	= 314,
    LD_imm64	= 315,
    LD_pseudo	= 316,
    LE16	= 317,
    LE32	= 318,
    LE64	= 319,
    MOV_32_64	= 320,
    MOV_ri	= 321,
    MOV_ri_32	= 322,
    MOV_rr	= 323,
    MOV_rr_32	= 324,
    MUL_ri	= 325,
    MUL_ri_32	= 326,
    MUL_rr	= 327,
    MUL_rr_32	= 328,
    NEG_32	= 329,
    NEG_64	= 330,
    NOP	= 331,
    OR_ri	= 332,
    OR_ri_32	= 333,
    OR_rr	= 334,
    OR_rr_32	= 335,
    RET	= 336,
    SLL_ri	= 337,
    SLL_ri_32	= 338,
    SLL_rr	= 339,
    SLL_rr_32	= 340,
    SRA_ri	= 341,
    SRA_ri_32	= 342,
    SRA_rr	= 343,
    SRA_rr_32	= 344,
    SRL_ri	= 345,
    SRL_ri_32	= 346,
    SRL_rr	= 347,
    SRL_rr_32	= 348,
    STB	= 349,
    STB32	= 350,
    STD	= 351,
    STH	= 352,
    STH32	= 353,
    STW	= 354,
    STW32	= 355,
    SUB_ri	= 356,
    SUB_ri_32	= 357,
    SUB_rr	= 358,
    SUB_rr_32	= 359,
    XADDD	= 360,
    XADDW	= 361,
    XADDW32	= 362,
    XANDD	= 363,
    XANDW32	= 364,
    XCHGD	= 365,
    XCHGW32	= 366,
    XFADDD	= 367,
    XFADDW32	= 368,
    XFANDD	= 369,
    XFANDW32	= 370,
    XFORD	= 371,
    XFORW32	= 372,
    XFXORD	= 373,
    XFXORW32	= 374,
    XORD	= 375,
    XORW32	= 376,
    XOR_ri	= 377,
    XOR_ri_32	= 378,
    XOR_rr	= 379,
    XOR_rr_32	= 380,
    XXORD	= 381,
    XXORW32	= 382,
    INSTRUCTION_LIST_END = 383
  };

} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace BPF {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { BPF::R11, 0 };
static const MCPhysReg ImplicitList2[] = { BPF::R0, 0 };
static const MCPhysReg ImplicitList3[] = { BPF::W0, 0 };
static const MCPhysReg ImplicitList4[] = { BPF::R0, BPF::R1, BPF::R2, BPF::R3, BPF::R4, BPF::R5, 0 };
static const MCPhysReg ImplicitList5[] = { BPF::R6, 0 };

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
static const MCOperandInfo OperandInfo43[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo57[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo76[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo77[] = { { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };

extern const MCInstrDesc BPFInsts[] = {
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
  { 227,	2,	0,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #227 = ADJCALLSTACKDOWN
  { 228,	2,	0,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #228 = ADJCALLSTACKUP
  { 229,	4,	0,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #229 = MEMCPY
  { 230,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #230 = Select
  { 231,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #231 = Select_32
  { 232,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #232 = Select_32_64
  { 233,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #233 = Select_64_32
  { 234,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #234 = Select_Ri
  { 235,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #235 = Select_Ri_32
  { 236,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #236 = Select_Ri_32_64
  { 237,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #237 = Select_Ri_64_32
  { 238,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #238 = ADD_ri
  { 239,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #239 = ADD_ri_32
  { 240,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #240 = ADD_rr
  { 241,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #241 = ADD_rr_32
  { 242,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #242 = AND_ri
  { 243,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #243 = AND_ri_32
  { 244,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #244 = AND_rr
  { 245,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #245 = AND_rr_32
  { 246,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #246 = BE16
  { 247,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #247 = BE32
  { 248,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #248 = BE64
  { 249,	3,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo57 },  // Inst #249 = CMPXCHGD
  { 250,	3,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo58 },  // Inst #250 = CMPXCHGW32
  { 251,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #251 = CORE_ALU32_MEM
  { 252,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #252 = CORE_MEM
  { 253,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #253 = CORE_SHIFT
  { 254,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #254 = DIV_ri
  { 255,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #255 = DIV_ri_32
  { 256,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #256 = DIV_rr
  { 257,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #257 = DIV_rr_32
  { 258,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #258 = FI_ri
  { 259,	1,	0,	8,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList4, OperandInfo2 },  // Inst #259 = JAL
  { 260,	1,	0,	8,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList4, OperandInfo63 },  // Inst #260 = JALX
  { 261,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #261 = JEQ_ri
  { 262,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #262 = JEQ_ri_32
  { 263,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #263 = JEQ_rr
  { 264,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #264 = JEQ_rr_32
  { 265,	1,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #265 = JMP
  { 266,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #266 = JNE_ri
  { 267,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #267 = JNE_ri_32
  { 268,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #268 = JNE_rr
  { 269,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #269 = JNE_rr_32
  { 270,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #270 = JSGE_ri
  { 271,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #271 = JSGE_ri_32
  { 272,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #272 = JSGE_rr
  { 273,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #273 = JSGE_rr_32
  { 274,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #274 = JSGT_ri
  { 275,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #275 = JSGT_ri_32
  { 276,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #276 = JSGT_rr
  { 277,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #277 = JSGT_rr_32
  { 278,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #278 = JSLE_ri
  { 279,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #279 = JSLE_ri_32
  { 280,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #280 = JSLE_rr
  { 281,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #281 = JSLE_rr_32
  { 282,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #282 = JSLT_ri
  { 283,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #283 = JSLT_ri_32
  { 284,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #284 = JSLT_rr
  { 285,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #285 = JSLT_rr_32
  { 286,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #286 = JUGE_ri
  { 287,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #287 = JUGE_ri_32
  { 288,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #288 = JUGE_rr
  { 289,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #289 = JUGE_rr_32
  { 290,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #290 = JUGT_ri
  { 291,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #291 = JUGT_ri_32
  { 292,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #292 = JUGT_rr
  { 293,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #293 = JUGT_rr_32
  { 294,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #294 = JULE_ri
  { 295,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #295 = JULE_ri_32
  { 296,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #296 = JULE_rr
  { 297,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #297 = JULE_rr_32
  { 298,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #298 = JULT_ri
  { 299,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #299 = JULT_ri_32
  { 300,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #300 = JULT_rr
  { 301,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #301 = JULT_rr_32
  { 302,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #302 = LDB
  { 303,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #303 = LDB32
  { 304,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #304 = LDD
  { 305,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #305 = LDH
  { 306,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #306 = LDH32
  { 307,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #307 = LDW
  { 308,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #308 = LDW32
  { 309,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo69 },  // Inst #309 = LD_ABS_B
  { 310,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo69 },  // Inst #310 = LD_ABS_H
  { 311,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo69 },  // Inst #311 = LD_ABS_W
  { 312,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo70 },  // Inst #312 = LD_IND_B
  { 313,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo70 },  // Inst #313 = LD_IND_H
  { 314,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList5, ImplicitList4, OperandInfo70 },  // Inst #314 = LD_IND_W
  { 315,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #315 = LD_imm64
  { 316,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #316 = LD_pseudo
  { 317,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #317 = LE16
  { 318,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #318 = LE32
  { 319,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #319 = LE64
  { 320,	2,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #320 = MOV_32_64
  { 321,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #321 = MOV_ri
  { 322,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #322 = MOV_ri_32
  { 323,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #323 = MOV_rr
  { 324,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo74 },  // Inst #324 = MOV_rr_32
  { 325,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #325 = MUL_ri
  { 326,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #326 = MUL_ri_32
  { 327,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #327 = MUL_rr
  { 328,	3,	1,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #328 = MUL_rr_32
  { 329,	2,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo75 },  // Inst #329 = NEG_32
  { 330,	2,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #330 = NEG_64
  { 331,	1,	0,	8,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #331 = NOP
  { 332,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #332 = OR_ri
  { 333,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #333 = OR_ri_32
  { 334,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #334 = OR_rr
  { 335,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #335 = OR_rr_32
  { 336,	0,	0,	8,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #336 = RET
  { 337,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #337 = SLL_ri
  { 338,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #338 = SLL_ri_32
  { 339,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #339 = SLL_rr
  { 340,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #340 = SLL_rr_32
  { 341,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #341 = SRA_ri
  { 342,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #342 = SRA_ri_32
  { 343,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #343 = SRA_rr
  { 344,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #344 = SRA_rr_32
  { 345,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #345 = SRL_ri
  { 346,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #346 = SRL_ri_32
  { 347,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #347 = SRL_rr
  { 348,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #348 = SRL_rr_32
  { 349,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #349 = STB
  { 350,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #350 = STB32
  { 351,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #351 = STD
  { 352,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #352 = STH
  { 353,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #353 = STH32
  { 354,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #354 = STW
  { 355,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #355 = STW32
  { 356,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #356 = SUB_ri
  { 357,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #357 = SUB_ri_32
  { 358,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #358 = SUB_rr
  { 359,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #359 = SUB_rr_32
  { 360,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #360 = XADDD
  { 361,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #361 = XADDW
  { 362,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #362 = XADDW32
  { 363,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #363 = XANDD
  { 364,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #364 = XANDW32
  { 365,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #365 = XCHGD
  { 366,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #366 = XCHGW32
  { 367,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #367 = XFADDD
  { 368,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #368 = XFADDW32
  { 369,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #369 = XFANDD
  { 370,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #370 = XFANDW32
  { 371,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #371 = XFORD
  { 372,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #372 = XFORW32
  { 373,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #373 = XFXORD
  { 374,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #374 = XFXORW32
  { 375,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #375 = XORD
  { 376,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #376 = XORW32
  { 377,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #377 = XOR_ri
  { 378,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #378 = XOR_ri_32
  { 379,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #379 = XOR_rr
  { 380,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #380 = XOR_rr_32
  { 381,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #381 = XXORD
  { 382,	4,	1,	8,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #382 = XXORW32
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char BPFInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "LDB32\0"
  /* 15 */ "STB32\0"
  /* 21 */ "BE32\0"
  /* 26 */ "LE32\0"
  /* 31 */ "LDH32\0"
  /* 37 */ "STH32\0"
  /* 43 */ "XFADDW32\0"
  /* 52 */ "XADDW32\0"
  /* 60 */ "LDW32\0"
  /* 66 */ "XFANDW32\0"
  /* 75 */ "XANDW32\0"
  /* 83 */ "CMPXCHGW32\0"
  /* 94 */ "XFORW32\0"
  /* 102 */ "XFXORW32\0"
  /* 111 */ "XXORW32\0"
  /* 119 */ "STW32\0"
  /* 125 */ "Select_Ri_64_32\0"
  /* 141 */ "Select_64_32\0"
  /* 154 */ "NEG_32\0"
  /* 161 */ "Select_Ri_32\0"
  /* 174 */ "SRA_ri_32\0"
  /* 184 */ "SUB_ri_32\0"
  /* 194 */ "ADD_ri_32\0"
  /* 204 */ "AND_ri_32\0"
  /* 214 */ "JSGE_ri_32\0"
  /* 225 */ "JUGE_ri_32\0"
  /* 236 */ "JSLE_ri_32\0"
  /* 247 */ "JULE_ri_32\0"
  /* 258 */ "JNE_ri_32\0"
  /* 268 */ "SLL_ri_32\0"
  /* 278 */ "SRL_ri_32\0"
  /* 288 */ "MUL_ri_32\0"
  /* 298 */ "JEQ_ri_32\0"
  /* 308 */ "XOR_ri_32\0"
  /* 318 */ "JSGT_ri_32\0"
  /* 329 */ "JUGT_ri_32\0"
  /* 340 */ "JSLT_ri_32\0"
  /* 351 */ "JULT_ri_32\0"
  /* 362 */ "DIV_ri_32\0"
  /* 372 */ "MOV_ri_32\0"
  /* 382 */ "SRA_rr_32\0"
  /* 392 */ "SUB_rr_32\0"
  /* 402 */ "ADD_rr_32\0"
  /* 412 */ "AND_rr_32\0"
  /* 422 */ "JSGE_rr_32\0"
  /* 433 */ "JUGE_rr_32\0"
  /* 444 */ "JSLE_rr_32\0"
  /* 455 */ "JULE_rr_32\0"
  /* 466 */ "JNE_rr_32\0"
  /* 476 */ "SLL_rr_32\0"
  /* 486 */ "SRL_rr_32\0"
  /* 496 */ "MUL_rr_32\0"
  /* 506 */ "JEQ_rr_32\0"
  /* 516 */ "XOR_rr_32\0"
  /* 526 */ "JSGT_rr_32\0"
  /* 537 */ "JUGT_rr_32\0"
  /* 548 */ "JSLT_rr_32\0"
  /* 559 */ "JULT_rr_32\0"
  /* 570 */ "DIV_rr_32\0"
  /* 580 */ "MOV_rr_32\0"
  /* 590 */ "Select_32\0"
  /* 600 */ "G_FLOG2\0"
  /* 608 */ "G_FEXP2\0"
  /* 616 */ "BE64\0"
  /* 621 */ "LE64\0"
  /* 626 */ "MOV_32_64\0"
  /* 636 */ "Select_Ri_32_64\0"
  /* 652 */ "Select_32_64\0"
  /* 665 */ "NEG_64\0"
  /* 672 */ "LD_imm64\0"
  /* 681 */ "BE16\0"
  /* 686 */ "LE16\0"
  /* 691 */ "G_FMA\0"
  /* 697 */ "G_STRICT_FMA\0"
  /* 710 */ "LDB\0"
  /* 714 */ "STB\0"
  /* 718 */ "G_FSUB\0"
  /* 725 */ "G_STRICT_FSUB\0"
  /* 739 */ "G_ATOMICRMW_FSUB\0"
  /* 756 */ "G_SUB\0"
  /* 762 */ "G_ATOMICRMW_SUB\0"
  /* 778 */ "LD_IND_B\0"
  /* 787 */ "LD_ABS_B\0"
  /* 796 */ "G_INTRINSIC\0"
  /* 808 */ "G_FPTRUNC\0"
  /* 818 */ "G_INTRINSIC_TRUNC\0"
  /* 836 */ "G_TRUNC\0"
  /* 844 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 865 */ "G_DYN_STACKALLOC\0"
  /* 882 */ "G_FMAD\0"
  /* 889 */ "G_INDEXED_SEXTLOAD\0"
  /* 908 */ "G_SEXTLOAD\0"
  /* 919 */ "G_INDEXED_ZEXTLOAD\0"
  /* 938 */ "G_ZEXTLOAD\0"
  /* 949 */ "G_INDEXED_LOAD\0"
  /* 964 */ "G_LOAD\0"
  /* 971 */ "G_VECREDUCE_FADD\0"
  /* 988 */ "G_FADD\0"
  /* 995 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 1016 */ "G_STRICT_FADD\0"
  /* 1030 */ "G_ATOMICRMW_FADD\0"
  /* 1047 */ "G_VECREDUCE_ADD\0"
  /* 1063 */ "G_ADD\0"
  /* 1069 */ "G_PTR_ADD\0"
  /* 1079 */ "G_ATOMICRMW_ADD\0"
  /* 1095 */ "XFADDD\0"
  /* 1102 */ "XADDD\0"
  /* 1108 */ "LDD\0"
  /* 1112 */ "XFANDD\0"
  /* 1119 */ "XANDD\0"
  /* 1125 */ "CMPXCHGD\0"
  /* 1134 */ "G_ATOMICRMW_NAND\0"
  /* 1151 */ "G_VECREDUCE_AND\0"
  /* 1167 */ "G_AND\0"
  /* 1173 */ "G_ATOMICRMW_AND\0"
  /* 1189 */ "LIFETIME_END\0"
  /* 1202 */ "G_BRCOND\0"
  /* 1211 */ "G_INTRINSIC_ROUND\0"
  /* 1229 */ "LOAD_STACK_GUARD\0"
  /* 1246 */ "XFORD\0"
  /* 1252 */ "XFXORD\0"
  /* 1259 */ "XXORD\0"
  /* 1265 */ "STD\0"
  /* 1269 */ "PSEUDO_PROBE\0"
  /* 1282 */ "G_SSUBE\0"
  /* 1290 */ "G_USUBE\0"
  /* 1298 */ "G_FENCE\0"
  /* 1306 */ "REG_SEQUENCE\0"
  /* 1319 */ "G_SADDE\0"
  /* 1327 */ "G_UADDE\0"
  /* 1335 */ "G_FMINNUM_IEEE\0"
  /* 1350 */ "G_FMAXNUM_IEEE\0"
  /* 1365 */ "G_JUMP_TABLE\0"
  /* 1378 */ "BUNDLE\0"
  /* 1385 */ "LOCAL_ESCAPE\0"
  /* 1398 */ "G_INDEXED_STORE\0"
  /* 1414 */ "G_STORE\0"
  /* 1422 */ "G_BITREVERSE\0"
  /* 1435 */ "DBG_VALUE\0"
  /* 1445 */ "G_GLOBAL_VALUE\0"
  /* 1460 */ "G_MEMMOVE\0"
  /* 1470 */ "G_FREEZE\0"
  /* 1479 */ "G_FCANONICALIZE\0"
  /* 1495 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 1513 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 1531 */ "G_IMPLICIT_DEF\0"
  /* 1546 */ "DBG_INSTR_REF\0"
  /* 1560 */ "G_FNEG\0"
  /* 1567 */ "EXTRACT_SUBREG\0"
  /* 1582 */ "INSERT_SUBREG\0"
  /* 1596 */ "G_SEXT_INREG\0"
  /* 1609 */ "SUBREG_TO_REG\0"
  /* 1623 */ "G_ATOMIC_CMPXCHG\0"
  /* 1640 */ "G_ATOMICRMW_XCHG\0"
  /* 1657 */ "G_FLOG\0"
  /* 1664 */ "G_VAARG\0"
  /* 1672 */ "PREALLOCATED_ARG\0"
  /* 1689 */ "LDH\0"
  /* 1693 */ "G_SMULH\0"
  /* 1701 */ "G_UMULH\0"
  /* 1709 */ "STH\0"
  /* 1713 */ "LD_IND_H\0"
  /* 1722 */ "LD_ABS_H\0"
  /* 1731 */ "G_PHI\0"
  /* 1737 */ "G_FPTOSI\0"
  /* 1746 */ "G_FPTOUI\0"
  /* 1755 */ "G_FPOWI\0"
  /* 1763 */ "G_PTRMASK\0"
  /* 1773 */ "JAL\0"
  /* 1777 */ "GC_LABEL\0"
  /* 1786 */ "DBG_LABEL\0"
  /* 1796 */ "EH_LABEL\0"
  /* 1805 */ "ANNOTATION_LABEL\0"
  /* 1822 */ "ICALL_BRANCH_FUNNEL\0"
  /* 1842 */ "G_FSHL\0"
  /* 1849 */ "G_SHL\0"
  /* 1855 */ "G_FCEIL\0"
  /* 1863 */ "PATCHABLE_TAIL_CALL\0"
  /* 1883 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 1910 */ "PATCHABLE_EVENT_CALL\0"
  /* 1931 */ "FENTRY_CALL\0"
  /* 1943 */ "KILL\0"
  /* 1948 */ "G_VECREDUCE_FMUL\0"
  /* 1965 */ "G_FMUL\0"
  /* 1972 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 1993 */ "G_STRICT_FMUL\0"
  /* 2007 */ "G_VECREDUCE_MUL\0"
  /* 2023 */ "G_MUL\0"
  /* 2029 */ "CORE_ALU32_MEM\0"
  /* 2044 */ "CORE_MEM\0"
  /* 2053 */ "G_FREM\0"
  /* 2060 */ "G_STRICT_FREM\0"
  /* 2074 */ "G_SREM\0"
  /* 2081 */ "G_UREM\0"
  /* 2088 */ "INLINEASM\0"
  /* 2098 */ "G_FMINIMUM\0"
  /* 2109 */ "G_FMAXIMUM\0"
  /* 2120 */ "G_FMINNUM\0"
  /* 2130 */ "G_FMAXNUM\0"
  /* 2140 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 2162 */ "G_FCOPYSIGN\0"
  /* 2174 */ "G_VECREDUCE_FMIN\0"
  /* 2191 */ "G_VECREDUCE_SMIN\0"
  /* 2208 */ "G_SMIN\0"
  /* 2215 */ "G_VECREDUCE_UMIN\0"
  /* 2232 */ "G_UMIN\0"
  /* 2239 */ "G_ATOMICRMW_UMIN\0"
  /* 2256 */ "G_ATOMICRMW_MIN\0"
  /* 2272 */ "G_FSIN\0"
  /* 2279 */ "CFI_INSTRUCTION\0"
  /* 2295 */ "ADJCALLSTACKDOWN\0"
  /* 2312 */ "G_SSUBO\0"
  /* 2320 */ "G_USUBO\0"
  /* 2328 */ "G_SADDO\0"
  /* 2336 */ "G_UADDO\0"
  /* 2344 */ "G_SMULO\0"
  /* 2352 */ "G_UMULO\0"
  /* 2360 */ "STACKMAP\0"
  /* 2369 */ "G_BSWAP\0"
  /* 2377 */ "G_SITOFP\0"
  /* 2386 */ "G_UITOFP\0"
  /* 2395 */ "G_FCMP\0"
  /* 2402 */ "G_ICMP\0"
  /* 2409 */ "JMP\0"
  /* 2413 */ "NOP\0"
  /* 2417 */ "G_CTPOP\0"
  /* 2425 */ "PATCHABLE_OP\0"
  /* 2438 */ "FAULTING_OP\0"
  /* 2450 */ "ADJCALLSTACKUP\0"
  /* 2465 */ "PREALLOCATED_SETUP\0"
  /* 2484 */ "G_FEXP\0"
  /* 2491 */ "G_BR\0"
  /* 2496 */ "INLINEASM_BR\0"
  /* 2509 */ "G_BLOCK_ADDR\0"
  /* 2522 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 2547 */ "G_READCYCLECOUNTER\0"
  /* 2566 */ "G_READ_REGISTER\0"
  /* 2582 */ "G_WRITE_REGISTER\0"
  /* 2599 */ "G_ASHR\0"
  /* 2606 */ "G_FSHR\0"
  /* 2613 */ "G_LSHR\0"
  /* 2620 */ "G_FFLOOR\0"
  /* 2629 */ "G_BUILD_VECTOR\0"
  /* 2644 */ "G_SHUFFLE_VECTOR\0"
  /* 2661 */ "G_VECREDUCE_XOR\0"
  /* 2677 */ "G_XOR\0"
  /* 2683 */ "G_ATOMICRMW_XOR\0"
  /* 2699 */ "G_VECREDUCE_OR\0"
  /* 2714 */ "G_OR\0"
  /* 2719 */ "G_ATOMICRMW_OR\0"
  /* 2734 */ "G_INTTOPTR\0"
  /* 2745 */ "G_FABS\0"
  /* 2752 */ "G_ABS\0"
  /* 2758 */ "G_UNMERGE_VALUES\0"
  /* 2775 */ "G_MERGE_VALUES\0"
  /* 2790 */ "G_FCOS\0"
  /* 2797 */ "G_CONCAT_VECTORS\0"
  /* 2814 */ "COPY_TO_REGCLASS\0"
  /* 2831 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 2861 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 2888 */ "G_SSUBSAT\0"
  /* 2898 */ "G_USUBSAT\0"
  /* 2908 */ "G_SADDSAT\0"
  /* 2918 */ "G_UADDSAT\0"
  /* 2928 */ "G_SSHLSAT\0"
  /* 2938 */ "G_USHLSAT\0"
  /* 2948 */ "G_SMULFIXSAT\0"
  /* 2961 */ "G_UMULFIXSAT\0"
  /* 2974 */ "G_SDIVFIXSAT\0"
  /* 2987 */ "G_UDIVFIXSAT\0"
  /* 3000 */ "G_EXTRACT\0"
  /* 3010 */ "G_SELECT\0"
  /* 3019 */ "G_BRINDIRECT\0"
  /* 3032 */ "PATCHABLE_RET\0"
  /* 3046 */ "G_MEMSET\0"
  /* 3055 */ "CORE_SHIFT\0"
  /* 3066 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 3090 */ "G_BRJT\0"
  /* 3097 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 3118 */ "G_INSERT_VECTOR_ELT\0"
  /* 3138 */ "G_FCONSTANT\0"
  /* 3150 */ "G_CONSTANT\0"
  /* 3161 */ "STATEPOINT\0"
  /* 3172 */ "PATCHPOINT\0"
  /* 3183 */ "G_PTRTOINT\0"
  /* 3194 */ "G_FRINT\0"
  /* 3202 */ "G_INTRINSIC_LRINT\0"
  /* 3220 */ "G_FNEARBYINT\0"
  /* 3233 */ "G_VASTART\0"
  /* 3243 */ "LIFETIME_START\0"
  /* 3258 */ "G_INSERT\0"
  /* 3267 */ "G_FSQRT\0"
  /* 3275 */ "G_STRICT_FSQRT\0"
  /* 3290 */ "G_BITCAST\0"
  /* 3300 */ "G_ADDRSPACE_CAST\0"
  /* 3317 */ "G_FPEXT\0"
  /* 3325 */ "G_SEXT\0"
  /* 3332 */ "G_ANYEXT\0"
  /* 3341 */ "G_ZEXT\0"
  /* 3348 */ "G_FDIV\0"
  /* 3355 */ "G_STRICT_FDIV\0"
  /* 3369 */ "G_SDIV\0"
  /* 3376 */ "G_UDIV\0"
  /* 3383 */ "XADDW\0"
  /* 3389 */ "LDW\0"
  /* 3393 */ "G_FPOW\0"
  /* 3400 */ "STW\0"
  /* 3404 */ "LD_IND_W\0"
  /* 3413 */ "LD_ABS_W\0"
  /* 3422 */ "G_VECREDUCE_FMAX\0"
  /* 3439 */ "G_VECREDUCE_SMAX\0"
  /* 3456 */ "G_SMAX\0"
  /* 3463 */ "G_VECREDUCE_UMAX\0"
  /* 3480 */ "G_UMAX\0"
  /* 3487 */ "G_ATOMICRMW_UMAX\0"
  /* 3504 */ "G_ATOMICRMW_MAX\0"
  /* 3520 */ "G_FRAME_INDEX\0"
  /* 3534 */ "G_SMULFIX\0"
  /* 3544 */ "G_UMULFIX\0"
  /* 3554 */ "G_SDIVFIX\0"
  /* 3564 */ "G_UDIVFIX\0"
  /* 3574 */ "JALX\0"
  /* 3579 */ "G_MEMCPY\0"
  /* 3588 */ "COPY\0"
  /* 3593 */ "G_CTLZ\0"
  /* 3600 */ "G_CTTZ\0"
  /* 3607 */ "Select_Ri\0"
  /* 3617 */ "SRA_ri\0"
  /* 3624 */ "SUB_ri\0"
  /* 3631 */ "ADD_ri\0"
  /* 3638 */ "AND_ri\0"
  /* 3645 */ "JSGE_ri\0"
  /* 3653 */ "JUGE_ri\0"
  /* 3661 */ "JSLE_ri\0"
  /* 3669 */ "JULE_ri\0"
  /* 3677 */ "JNE_ri\0"
  /* 3684 */ "FI_ri\0"
  /* 3690 */ "SLL_ri\0"
  /* 3697 */ "SRL_ri\0"
  /* 3704 */ "MUL_ri\0"
  /* 3711 */ "JEQ_ri\0"
  /* 3718 */ "XOR_ri\0"
  /* 3725 */ "JSGT_ri\0"
  /* 3733 */ "JUGT_ri\0"
  /* 3741 */ "JSLT_ri\0"
  /* 3749 */ "JULT_ri\0"
  /* 3757 */ "DIV_ri\0"
  /* 3764 */ "MOV_ri\0"
  /* 3771 */ "LD_pseudo\0"
  /* 3781 */ "SRA_rr\0"
  /* 3788 */ "SUB_rr\0"
  /* 3795 */ "ADD_rr\0"
  /* 3802 */ "AND_rr\0"
  /* 3809 */ "JSGE_rr\0"
  /* 3817 */ "JUGE_rr\0"
  /* 3825 */ "JSLE_rr\0"
  /* 3833 */ "JULE_rr\0"
  /* 3841 */ "JNE_rr\0"
  /* 3848 */ "SLL_rr\0"
  /* 3855 */ "SRL_rr\0"
  /* 3862 */ "MUL_rr\0"
  /* 3869 */ "JEQ_rr\0"
  /* 3876 */ "XOR_rr\0"
  /* 3883 */ "JSGT_rr\0"
  /* 3891 */ "JUGT_rr\0"
  /* 3899 */ "JSLT_rr\0"
  /* 3907 */ "JULT_rr\0"
  /* 3915 */ "DIV_rr\0"
  /* 3922 */ "MOV_rr\0"
  /* 3929 */ "Select\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned BPFInstrNameIndices[] = {
    1733U, 2088U, 2496U, 2279U, 1796U, 1777U, 1805U, 1943U, 
    1567U, 1582U, 1533U, 1609U, 2814U, 1435U, 1546U, 1786U, 
    1306U, 3588U, 1378U, 3243U, 1189U, 1269U, 2360U, 1931U, 
    3172U, 1229U, 2465U, 1672U, 3161U, 1385U, 2438U, 2425U, 
    2522U, 3032U, 3066U, 1863U, 1910U, 1883U, 1822U, 1063U, 
    756U, 2023U, 3369U, 3376U, 2074U, 2081U, 1167U, 2714U, 
    2677U, 1531U, 1731U, 3520U, 1445U, 3000U, 2758U, 3258U, 
    2775U, 2629U, 844U, 2797U, 3183U, 2734U, 3290U, 1470U, 
    818U, 1211U, 3202U, 2140U, 2547U, 964U, 908U, 938U, 
    949U, 889U, 919U, 1414U, 1398U, 2831U, 1623U, 1640U, 
    1079U, 762U, 1173U, 1134U, 2719U, 2683U, 3504U, 2256U, 
    3487U, 2239U, 1030U, 739U, 1298U, 1202U, 3019U, 796U, 
    2861U, 3332U, 836U, 3150U, 3138U, 3233U, 1664U, 3325U, 
    1596U, 3341U, 1849U, 2613U, 2599U, 1842U, 2606U, 2402U, 
    2395U, 3010U, 2336U, 1327U, 2320U, 1290U, 2328U, 1319U, 
    2312U, 1282U, 2352U, 2344U, 1701U, 1693U, 2918U, 2908U, 
    2898U, 2888U, 2938U, 2928U, 3534U, 3544U, 2948U, 2961U, 
    3554U, 3564U, 2974U, 2987U, 988U, 718U, 1965U, 691U, 
    882U, 3348U, 2053U, 3393U, 1755U, 2484U, 608U, 1657U, 
    600U, 0U, 1560U, 3317U, 808U, 1737U, 1746U, 2377U, 
    2386U, 2745U, 2162U, 1479U, 2120U, 2130U, 1335U, 1350U, 
    2098U, 2109U, 1069U, 1763U, 2208U, 3456U, 2232U, 3480U, 
    2752U, 2491U, 3090U, 3118U, 3097U, 2644U, 3600U, 1513U, 
    3593U, 1495U, 2417U, 2369U, 1422U, 1855U, 2790U, 2272U, 
    3267U, 2620U, 3194U, 3220U, 3300U, 2509U, 1365U, 865U, 
    1016U, 725U, 1993U, 3355U, 2060U, 697U, 3275U, 2566U, 
    2582U, 3579U, 1460U, 3046U, 995U, 1972U, 971U, 1948U, 
    3422U, 2174U, 1047U, 2007U, 1151U, 2699U, 2661U, 3439U, 
    2191U, 3463U, 2215U, 2295U, 2450U, 3581U, 3929U, 590U, 
    652U, 141U, 3607U, 161U, 636U, 125U, 3631U, 194U, 
    3795U, 402U, 3638U, 204U, 3802U, 412U, 681U, 21U, 
    616U, 1125U, 83U, 2029U, 2044U, 3055U, 3757U, 362U, 
    3915U, 570U, 3684U, 1773U, 3574U, 3711U, 298U, 3869U, 
    506U, 2409U, 3677U, 258U, 3841U, 466U, 3645U, 214U, 
    3809U, 422U, 3725U, 318U, 3883U, 526U, 3661U, 236U, 
    3825U, 444U, 3741U, 340U, 3899U, 548U, 3653U, 225U, 
    3817U, 433U, 3733U, 329U, 3891U, 537U, 3669U, 247U, 
    3833U, 455U, 3749U, 351U, 3907U, 559U, 710U, 9U, 
    1108U, 1689U, 31U, 3389U, 60U, 787U, 1722U, 3413U, 
    778U, 1713U, 3404U, 672U, 3771U, 686U, 26U, 621U, 
    626U, 3764U, 372U, 3922U, 580U, 3704U, 288U, 3862U, 
    496U, 154U, 665U, 2413U, 3719U, 309U, 3877U, 517U, 
    3042U, 3690U, 268U, 3848U, 476U, 3617U, 174U, 3781U, 
    382U, 3697U, 278U, 3855U, 486U, 714U, 15U, 1265U, 
    1709U, 37U, 3400U, 119U, 3624U, 184U, 3788U, 392U, 
    1102U, 3383U, 52U, 1119U, 75U, 1128U, 86U, 1095U, 
    43U, 1112U, 66U, 1246U, 94U, 1252U, 102U, 1254U, 
    104U, 3718U, 308U, 3876U, 516U, 1259U, 111U, 
};

static inline void InitBPFMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, nullptr, nullptr, 383);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct BPFGenInstrInfo : public TargetInstrInfo {
  explicit BPFGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~BPFGenInstrInfo() override = default;

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
extern const MCInstrDesc BPFInsts[];
extern const unsigned BPFInstrNameIndices[];
extern const char BPFInstrNameData[];
BPFGenInstrInfo::BPFGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, nullptr, nullptr, 383);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace BPF {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace BPF
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace BPF {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace BPF
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace BPF {
namespace OpTypes {
enum OperandType {
  MEMri = 0,
  brtarget = 1,
  calltarget = 2,
  f32imm = 3,
  f64imm = 4,
  i16imm = 5,
  i1imm = 6,
  i32imm = 7,
  i64imm = 8,
  i8imm = 9,
  ptype0 = 10,
  ptype1 = 11,
  ptype2 = 12,
  ptype3 = 13,
  ptype4 = 14,
  ptype5 = 15,
  type0 = 16,
  type1 = 17,
  type2 = 18,
  type3 = 19,
  type4 = 20,
  type5 = 21,
  u64imm = 22,
  untyped_imm_0 = 23,
  GPR = 24,
  GPR32 = 25,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace BPF {
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
    580,
    586,
    592,
    598,
    604,
    610,
    616,
    622,
    628,
    631,
    634,
    637,
    640,
    643,
    646,
    649,
    652,
    654,
    656,
    658,
    661,
    664,
    668,
    672,
    676,
    679,
    682,
    685,
    688,
    691,
    692,
    693,
    696,
    699,
    702,
    705,
    706,
    709,
    712,
    715,
    718,
    721,
    724,
    727,
    730,
    733,
    736,
    739,
    742,
    745,
    748,
    751,
    754,
    757,
    760,
    763,
    766,
    769,
    772,
    775,
    778,
    781,
    784,
    787,
    790,
    793,
    796,
    799,
    802,
    805,
    808,
    811,
    814,
    817,
    820,
    823,
    826,
    829,
    832,
    835,
    837,
    839,
    841,
    843,
    845,
    847,
    849,
    852,
    854,
    856,
    858,
    860,
    862,
    864,
    866,
    868,
    871,
    874,
    877,
    880,
    882,
    884,
    885,
    888,
    891,
    894,
    897,
    897,
    900,
    903,
    906,
    909,
    912,
    915,
    918,
    921,
    924,
    927,
    930,
    933,
    936,
    939,
    942,
    945,
    948,
    951,
    954,
    957,
    960,
    963,
    966,
    970,
    974,
    978,
    982,
    986,
    990,
    994,
    998,
    1002,
    1006,
    1010,
    1014,
    1018,
    1022,
    1026,
    1030,
    1034,
    1037,
    1040,
    1043,
    1046,
    1050,
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
    OpTypes::i64imm, OpTypes::i64imm, 
    OpTypes::i64imm, OpTypes::i64imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, OpTypes::i64imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, OpTypes::i64imm, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, OpTypes::i32imm, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR32, OpTypes::i32imm, OpTypes::i32imm, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i64imm, OpTypes::i64imm, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR32, 
    OpTypes::GPR32, OpTypes::u64imm, OpTypes::GPR, OpTypes::u64imm, 
    OpTypes::GPR, OpTypes::u64imm, OpTypes::GPR, OpTypes::u64imm, 
    OpTypes::GPR, OpTypes::u64imm, OpTypes::GPR, OpTypes::u64imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::calltarget, 
    OpTypes::GPR, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::i32imm, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::brtarget, 
    OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::i32imm, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::i32imm, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::i32imm, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::i32imm, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::i32imm, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::i32imm, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::i32imm, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::i32imm, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::i32imm, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::brtarget, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::brtarget, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::u64imm, 
    OpTypes::GPR, OpTypes::i64imm, OpTypes::u64imm, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    /**/
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i64imm, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR, 
    OpTypes::GPR32, OpTypes::GPR, OpTypes::i16imm, OpTypes::GPR32, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace BPF
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

