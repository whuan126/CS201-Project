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

namespace MSP430 {
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
    ADD16mc	= 227,
    ADD16mi	= 228,
    ADD16mm	= 229,
    ADD16mn	= 230,
    ADD16mp	= 231,
    ADD16mr	= 232,
    ADD16rc	= 233,
    ADD16ri	= 234,
    ADD16rm	= 235,
    ADD16rn	= 236,
    ADD16rp	= 237,
    ADD16rr	= 238,
    ADD8mc	= 239,
    ADD8mi	= 240,
    ADD8mm	= 241,
    ADD8mn	= 242,
    ADD8mp	= 243,
    ADD8mr	= 244,
    ADD8rc	= 245,
    ADD8ri	= 246,
    ADD8rm	= 247,
    ADD8rn	= 248,
    ADD8rp	= 249,
    ADD8rr	= 250,
    ADDC16mc	= 251,
    ADDC16mi	= 252,
    ADDC16mm	= 253,
    ADDC16mn	= 254,
    ADDC16mp	= 255,
    ADDC16mr	= 256,
    ADDC16rc	= 257,
    ADDC16ri	= 258,
    ADDC16rm	= 259,
    ADDC16rn	= 260,
    ADDC16rp	= 261,
    ADDC16rr	= 262,
    ADDC8mc	= 263,
    ADDC8mi	= 264,
    ADDC8mm	= 265,
    ADDC8mn	= 266,
    ADDC8mp	= 267,
    ADDC8mr	= 268,
    ADDC8rc	= 269,
    ADDC8ri	= 270,
    ADDC8rm	= 271,
    ADDC8rn	= 272,
    ADDC8rp	= 273,
    ADDC8rr	= 274,
    ADDframe	= 275,
    ADJCALLSTACKDOWN	= 276,
    ADJCALLSTACKUP	= 277,
    AND16mc	= 278,
    AND16mi	= 279,
    AND16mm	= 280,
    AND16mn	= 281,
    AND16mp	= 282,
    AND16mr	= 283,
    AND16rc	= 284,
    AND16ri	= 285,
    AND16rm	= 286,
    AND16rn	= 287,
    AND16rp	= 288,
    AND16rr	= 289,
    AND8mc	= 290,
    AND8mi	= 291,
    AND8mm	= 292,
    AND8mn	= 293,
    AND8mp	= 294,
    AND8mr	= 295,
    AND8rc	= 296,
    AND8ri	= 297,
    AND8rm	= 298,
    AND8rn	= 299,
    AND8rp	= 300,
    AND8rr	= 301,
    BIC16mc	= 302,
    BIC16mi	= 303,
    BIC16mm	= 304,
    BIC16mn	= 305,
    BIC16mp	= 306,
    BIC16mr	= 307,
    BIC16rc	= 308,
    BIC16ri	= 309,
    BIC16rm	= 310,
    BIC16rn	= 311,
    BIC16rp	= 312,
    BIC16rr	= 313,
    BIC8mc	= 314,
    BIC8mi	= 315,
    BIC8mm	= 316,
    BIC8mn	= 317,
    BIC8mp	= 318,
    BIC8mr	= 319,
    BIC8rc	= 320,
    BIC8ri	= 321,
    BIC8rm	= 322,
    BIC8rn	= 323,
    BIC8rp	= 324,
    BIC8rr	= 325,
    BIS16mc	= 326,
    BIS16mi	= 327,
    BIS16mm	= 328,
    BIS16mn	= 329,
    BIS16mp	= 330,
    BIS16mr	= 331,
    BIS16rc	= 332,
    BIS16ri	= 333,
    BIS16rm	= 334,
    BIS16rn	= 335,
    BIS16rp	= 336,
    BIS16rr	= 337,
    BIS8mc	= 338,
    BIS8mi	= 339,
    BIS8mm	= 340,
    BIS8mn	= 341,
    BIS8mp	= 342,
    BIS8mr	= 343,
    BIS8rc	= 344,
    BIS8ri	= 345,
    BIS8rm	= 346,
    BIS8rn	= 347,
    BIS8rp	= 348,
    BIS8rr	= 349,
    BIT16mc	= 350,
    BIT16mi	= 351,
    BIT16mm	= 352,
    BIT16mn	= 353,
    BIT16mp	= 354,
    BIT16mr	= 355,
    BIT16rc	= 356,
    BIT16ri	= 357,
    BIT16rm	= 358,
    BIT16rn	= 359,
    BIT16rp	= 360,
    BIT16rr	= 361,
    BIT8mc	= 362,
    BIT8mi	= 363,
    BIT8mm	= 364,
    BIT8mn	= 365,
    BIT8mp	= 366,
    BIT8mr	= 367,
    BIT8rc	= 368,
    BIT8ri	= 369,
    BIT8rm	= 370,
    BIT8rn	= 371,
    BIT8rp	= 372,
    BIT8rr	= 373,
    Bi	= 374,
    Bm	= 375,
    Br	= 376,
    CALLi	= 377,
    CALLm	= 378,
    CALLn	= 379,
    CALLp	= 380,
    CALLr	= 381,
    CMP16mc	= 382,
    CMP16mi	= 383,
    CMP16mm	= 384,
    CMP16mn	= 385,
    CMP16mp	= 386,
    CMP16mr	= 387,
    CMP16rc	= 388,
    CMP16ri	= 389,
    CMP16rm	= 390,
    CMP16rn	= 391,
    CMP16rp	= 392,
    CMP16rr	= 393,
    CMP8mc	= 394,
    CMP8mi	= 395,
    CMP8mm	= 396,
    CMP8mn	= 397,
    CMP8mp	= 398,
    CMP8mr	= 399,
    CMP8rc	= 400,
    CMP8ri	= 401,
    CMP8rm	= 402,
    CMP8rn	= 403,
    CMP8rp	= 404,
    CMP8rr	= 405,
    DADD16mc	= 406,
    DADD16mi	= 407,
    DADD16mm	= 408,
    DADD16mn	= 409,
    DADD16mp	= 410,
    DADD16mr	= 411,
    DADD16rc	= 412,
    DADD16ri	= 413,
    DADD16rm	= 414,
    DADD16rn	= 415,
    DADD16rp	= 416,
    DADD16rr	= 417,
    DADD8mc	= 418,
    DADD8mi	= 419,
    DADD8mm	= 420,
    DADD8mn	= 421,
    DADD8mp	= 422,
    DADD8mr	= 423,
    DADD8rc	= 424,
    DADD8ri	= 425,
    DADD8rm	= 426,
    DADD8rn	= 427,
    DADD8rp	= 428,
    DADD8rr	= 429,
    JCC	= 430,
    JMP	= 431,
    MOV16mc	= 432,
    MOV16mi	= 433,
    MOV16mm	= 434,
    MOV16mn	= 435,
    MOV16mr	= 436,
    MOV16rc	= 437,
    MOV16ri	= 438,
    MOV16rm	= 439,
    MOV16rn	= 440,
    MOV16rp	= 441,
    MOV16rr	= 442,
    MOV8mc	= 443,
    MOV8mi	= 444,
    MOV8mm	= 445,
    MOV8mn	= 446,
    MOV8mr	= 447,
    MOV8rc	= 448,
    MOV8ri	= 449,
    MOV8rm	= 450,
    MOV8rn	= 451,
    MOV8rp	= 452,
    MOV8rr	= 453,
    MOVZX16rm8	= 454,
    MOVZX16rr8	= 455,
    POP16r	= 456,
    PUSH16c	= 457,
    PUSH16i	= 458,
    PUSH16r	= 459,
    PUSH8r	= 460,
    RET	= 461,
    RETI	= 462,
    RRA16m	= 463,
    RRA16n	= 464,
    RRA16p	= 465,
    RRA16r	= 466,
    RRA8m	= 467,
    RRA8n	= 468,
    RRA8p	= 469,
    RRA8r	= 470,
    RRC16m	= 471,
    RRC16n	= 472,
    RRC16p	= 473,
    RRC16r	= 474,
    RRC8m	= 475,
    RRC8n	= 476,
    RRC8p	= 477,
    RRC8r	= 478,
    Rrcl16	= 479,
    Rrcl8	= 480,
    SEXT16m	= 481,
    SEXT16n	= 482,
    SEXT16p	= 483,
    SEXT16r	= 484,
    SUB16mc	= 485,
    SUB16mi	= 486,
    SUB16mm	= 487,
    SUB16mn	= 488,
    SUB16mp	= 489,
    SUB16mr	= 490,
    SUB16rc	= 491,
    SUB16ri	= 492,
    SUB16rm	= 493,
    SUB16rn	= 494,
    SUB16rp	= 495,
    SUB16rr	= 496,
    SUB8mc	= 497,
    SUB8mi	= 498,
    SUB8mm	= 499,
    SUB8mn	= 500,
    SUB8mp	= 501,
    SUB8mr	= 502,
    SUB8rc	= 503,
    SUB8ri	= 504,
    SUB8rm	= 505,
    SUB8rn	= 506,
    SUB8rp	= 507,
    SUB8rr	= 508,
    SUBC16mc	= 509,
    SUBC16mi	= 510,
    SUBC16mm	= 511,
    SUBC16mn	= 512,
    SUBC16mp	= 513,
    SUBC16mr	= 514,
    SUBC16rc	= 515,
    SUBC16ri	= 516,
    SUBC16rm	= 517,
    SUBC16rn	= 518,
    SUBC16rp	= 519,
    SUBC16rr	= 520,
    SUBC8mc	= 521,
    SUBC8mi	= 522,
    SUBC8mm	= 523,
    SUBC8mn	= 524,
    SUBC8mp	= 525,
    SUBC8mr	= 526,
    SUBC8rc	= 527,
    SUBC8ri	= 528,
    SUBC8rm	= 529,
    SUBC8rn	= 530,
    SUBC8rp	= 531,
    SUBC8rr	= 532,
    SWPB16m	= 533,
    SWPB16n	= 534,
    SWPB16p	= 535,
    SWPB16r	= 536,
    Select16	= 537,
    Select8	= 538,
    Shl16	= 539,
    Shl8	= 540,
    Sra16	= 541,
    Sra8	= 542,
    Srl16	= 543,
    Srl8	= 544,
    XOR16mc	= 545,
    XOR16mi	= 546,
    XOR16mm	= 547,
    XOR16mn	= 548,
    XOR16mp	= 549,
    XOR16mr	= 550,
    XOR16rc	= 551,
    XOR16ri	= 552,
    XOR16rm	= 553,
    XOR16rn	= 554,
    XOR16rp	= 555,
    XOR16rr	= 556,
    XOR8mc	= 557,
    XOR8mi	= 558,
    XOR8mm	= 559,
    XOR8mn	= 560,
    XOR8mp	= 561,
    XOR8mr	= 562,
    XOR8rc	= 563,
    XOR8ri	= 564,
    XOR8rm	= 565,
    XOR8rn	= 566,
    XOR8rp	= 567,
    XOR8rr	= 568,
    ZEXT16r	= 569,
    INSTRUCTION_LIST_END = 570
  };

} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace MSP430 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { MSP430::SR, 0 };
static const MCPhysReg ImplicitList2[] = { MSP430::SP, 0 };
static const MCPhysReg ImplicitList3[] = { MSP430::SP, MSP430::SR, 0 };
static const MCPhysReg ImplicitList4[] = { MSP430::R11, MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::SR, 0 };

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
static const MCOperandInfo OperandInfo43[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo53[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo60[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo76[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(1) }, };
static const MCOperandInfo OperandInfo77[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo80[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo81[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc MSP430Insts[] = {
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
  { 227,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #227 = ADD16mc
  { 228,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #228 = ADD16mi
  { 229,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #229 = ADD16mm
  { 230,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #230 = ADD16mn
  { 231,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #231 = ADD16mp
  { 232,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #232 = ADD16mr
  { 233,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #233 = ADD16rc
  { 234,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #234 = ADD16ri
  { 235,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #235 = ADD16rm
  { 236,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #236 = ADD16rn
  { 237,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #237 = ADD16rp
  { 238,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #238 = ADD16rr
  { 239,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #239 = ADD8mc
  { 240,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #240 = ADD8mi
  { 241,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #241 = ADD8mm
  { 242,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #242 = ADD8mn
  { 243,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #243 = ADD8mp
  { 244,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #244 = ADD8mr
  { 245,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #245 = ADD8rc
  { 246,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #246 = ADD8ri
  { 247,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #247 = ADD8rm
  { 248,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #248 = ADD8rn
  { 249,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #249 = ADD8rp
  { 250,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #250 = ADD8rr
  { 251,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo43 },  // Inst #251 = ADDC16mc
  { 252,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo44 },  // Inst #252 = ADDC16mi
  { 253,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo45 },  // Inst #253 = ADDC16mm
  { 254,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #254 = ADDC16mn
  { 255,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #255 = ADDC16mp
  { 256,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47 },  // Inst #256 = ADDC16mr
  { 257,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48 },  // Inst #257 = ADDC16rc
  { 258,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #258 = ADDC16ri
  { 259,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo50 },  // Inst #259 = ADDC16rm
  { 260,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo51 },  // Inst #260 = ADDC16rn
  { 261,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo52 },  // Inst #261 = ADDC16rp
  { 262,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo53 },  // Inst #262 = ADDC16rr
  { 263,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo43 },  // Inst #263 = ADDC8mc
  { 264,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo44 },  // Inst #264 = ADDC8mi
  { 265,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo45 },  // Inst #265 = ADDC8mm
  { 266,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #266 = ADDC8mn
  { 267,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #267 = ADDC8mp
  { 268,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo54 },  // Inst #268 = ADDC8mr
  { 269,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo55 },  // Inst #269 = ADDC8rc
  { 270,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo56 },  // Inst #270 = ADDC8ri
  { 271,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo57 },  // Inst #271 = ADDC8rm
  { 272,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo58 },  // Inst #272 = ADDC8rn
  { 273,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo59 },  // Inst #273 = ADDC8rp
  { 274,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo60 },  // Inst #274 = ADDC8rr
  { 275,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList1, OperandInfo61 },  // Inst #275 = ADDframe
  { 276,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo9 },  // Inst #276 = ADJCALLSTACKDOWN
  { 277,	2,	0,	0,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo9 },  // Inst #277 = ADJCALLSTACKUP
  { 278,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #278 = AND16mc
  { 279,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #279 = AND16mi
  { 280,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #280 = AND16mm
  { 281,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #281 = AND16mn
  { 282,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #282 = AND16mp
  { 283,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #283 = AND16mr
  { 284,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #284 = AND16rc
  { 285,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #285 = AND16ri
  { 286,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #286 = AND16rm
  { 287,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #287 = AND16rn
  { 288,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #288 = AND16rp
  { 289,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #289 = AND16rr
  { 290,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #290 = AND8mc
  { 291,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #291 = AND8mi
  { 292,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #292 = AND8mm
  { 293,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #293 = AND8mn
  { 294,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #294 = AND8mp
  { 295,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #295 = AND8mr
  { 296,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #296 = AND8rc
  { 297,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #297 = AND8ri
  { 298,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #298 = AND8rm
  { 299,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #299 = AND8rn
  { 300,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #300 = AND8rp
  { 301,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #301 = AND8rr
  { 302,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #302 = BIC16mc
  { 303,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #303 = BIC16mi
  { 304,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #304 = BIC16mm
  { 305,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #305 = BIC16mn
  { 306,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #306 = BIC16mp
  { 307,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #307 = BIC16mr
  { 308,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #308 = BIC16rc
  { 309,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #309 = BIC16ri
  { 310,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #310 = BIC16rm
  { 311,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #311 = BIC16rn
  { 312,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #312 = BIC16rp
  { 313,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #313 = BIC16rr
  { 314,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #314 = BIC8mc
  { 315,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #315 = BIC8mi
  { 316,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #316 = BIC8mm
  { 317,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #317 = BIC8mn
  { 318,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #318 = BIC8mp
  { 319,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #319 = BIC8mr
  { 320,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #320 = BIC8rc
  { 321,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #321 = BIC8ri
  { 322,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #322 = BIC8rm
  { 323,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #323 = BIC8rn
  { 324,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #324 = BIC8rp
  { 325,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #325 = BIC8rr
  { 326,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #326 = BIS16mc
  { 327,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #327 = BIS16mi
  { 328,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #328 = BIS16mm
  { 329,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #329 = BIS16mn
  { 330,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #330 = BIS16mp
  { 331,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #331 = BIS16mr
  { 332,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #332 = BIS16rc
  { 333,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #333 = BIS16ri
  { 334,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #334 = BIS16rm
  { 335,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #335 = BIS16rn
  { 336,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #336 = BIS16rp
  { 337,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #337 = BIS16rr
  { 338,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #338 = BIS8mc
  { 339,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #339 = BIS8mi
  { 340,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #340 = BIS8mm
  { 341,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #341 = BIS8mn
  { 342,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #342 = BIS8mp
  { 343,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #343 = BIS8mr
  { 344,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #344 = BIS8rc
  { 345,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #345 = BIS8ri
  { 346,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #346 = BIS8rm
  { 347,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #347 = BIS8rn
  { 348,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #348 = BIS8rp
  { 349,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #349 = BIS8rr
  { 350,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #350 = BIT16mc
  { 351,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #351 = BIT16mi
  { 352,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #352 = BIT16mm
  { 353,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #353 = BIT16mn
  { 354,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #354 = BIT16mp
  { 355,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #355 = BIT16mr
  { 356,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62 },  // Inst #356 = BIT16rc
  { 357,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63 },  // Inst #357 = BIT16ri
  { 358,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64 },  // Inst #358 = BIT16rm
  { 359,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo65 },  // Inst #359 = BIT16rn
  { 360,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo65 },  // Inst #360 = BIT16rp
  { 361,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66 },  // Inst #361 = BIT16rr
  { 362,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #362 = BIT8mc
  { 363,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #363 = BIT8mi
  { 364,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #364 = BIT8mm
  { 365,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #365 = BIT8mn
  { 366,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #366 = BIT8mp
  { 367,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #367 = BIT8mr
  { 368,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo67 },  // Inst #368 = BIT8rc
  { 369,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68 },  // Inst #369 = BIT8ri
  { 370,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo69 },  // Inst #370 = BIT8rm
  { 371,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo70 },  // Inst #371 = BIT8rn
  { 372,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo70 },  // Inst #372 = BIT8rp
  { 373,	2,	0,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo71 },  // Inst #373 = BIT8rr
  { 374,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #374 = Bi
  { 375,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #375 = Bm
  { 376,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #376 = Br
  { 377,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo3 },  // Inst #377 = CALLi
  { 378,	2,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo72 },  // Inst #378 = CALLm
  { 379,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo74 },  // Inst #379 = CALLn
  { 380,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo74 },  // Inst #380 = CALLp
  { 381,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList4, OperandInfo73 },  // Inst #381 = CALLr
  { 382,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #382 = CMP16mc
  { 383,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #383 = CMP16mi
  { 384,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #384 = CMP16mm
  { 385,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #385 = CMP16mn
  { 386,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #386 = CMP16mp
  { 387,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #387 = CMP16mr
  { 388,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo62 },  // Inst #388 = CMP16rc
  { 389,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo63 },  // Inst #389 = CMP16ri
  { 390,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo64 },  // Inst #390 = CMP16rm
  { 391,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo65 },  // Inst #391 = CMP16rn
  { 392,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo65 },  // Inst #392 = CMP16rp
  { 393,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66 },  // Inst #393 = CMP16rr
  { 394,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #394 = CMP8mc
  { 395,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #395 = CMP8mi
  { 396,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #396 = CMP8mm
  { 397,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #397 = CMP8mn
  { 398,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #398 = CMP8mp
  { 399,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #399 = CMP8mr
  { 400,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo67 },  // Inst #400 = CMP8rc
  { 401,	2,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo68 },  // Inst #401 = CMP8ri
  { 402,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo69 },  // Inst #402 = CMP8rm
  { 403,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo70 },  // Inst #403 = CMP8rn
  { 404,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo70 },  // Inst #404 = CMP8rp
  { 405,	2,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo71 },  // Inst #405 = CMP8rr
  { 406,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo43 },  // Inst #406 = DADD16mc
  { 407,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo44 },  // Inst #407 = DADD16mi
  { 408,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo45 },  // Inst #408 = DADD16mm
  { 409,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #409 = DADD16mn
  { 410,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #410 = DADD16mp
  { 411,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47 },  // Inst #411 = DADD16mr
  { 412,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48 },  // Inst #412 = DADD16rc
  { 413,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #413 = DADD16ri
  { 414,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo50 },  // Inst #414 = DADD16rm
  { 415,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo51 },  // Inst #415 = DADD16rn
  { 416,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo52 },  // Inst #416 = DADD16rp
  { 417,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo53 },  // Inst #417 = DADD16rr
  { 418,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo43 },  // Inst #418 = DADD8mc
  { 419,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo44 },  // Inst #419 = DADD8mi
  { 420,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo45 },  // Inst #420 = DADD8mm
  { 421,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #421 = DADD8mn
  { 422,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #422 = DADD8mp
  { 423,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo54 },  // Inst #423 = DADD8mr
  { 424,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo55 },  // Inst #424 = DADD8rc
  { 425,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo56 },  // Inst #425 = DADD8ri
  { 426,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo57 },  // Inst #426 = DADD8rm
  { 427,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo58 },  // Inst #427 = DADD8rn
  { 428,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo59 },  // Inst #428 = DADD8rp
  { 429,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo60 },  // Inst #429 = DADD8rr
  { 430,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo7 },  // Inst #430 = JCC
  { 431,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #431 = JMP
  { 432,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #432 = MOV16mc
  { 433,	3,	0,	6,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #433 = MOV16mi
  { 434,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #434 = MOV16mm
  { 435,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #435 = MOV16mn
  { 436,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #436 = MOV16mr
  { 437,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #437 = MOV16rc
  { 438,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #438 = MOV16ri
  { 439,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #439 = MOV16rm
  { 440,	2,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #440 = MOV16rn
  { 441,	3,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo75 },  // Inst #441 = MOV16rp
  { 442,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #442 = MOV16rr
  { 443,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #443 = MOV8mc
  { 444,	3,	0,	6,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #444 = MOV8mi
  { 445,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #445 = MOV8mm
  { 446,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #446 = MOV8mn
  { 447,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #447 = MOV8mr
  { 448,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #448 = MOV8rc
  { 449,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #449 = MOV8ri
  { 450,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #450 = MOV8rm
  { 451,	2,	1,	2,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #451 = MOV8rn
  { 452,	3,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #452 = MOV8rp
  { 453,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #453 = MOV8rr
  { 454,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #454 = MOVZX16rm8
  { 455,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #455 = MOVZX16rr8
  { 456,	1,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo73 },  // Inst #456 = POP16r
  { 457,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo2 },  // Inst #457 = PUSH16c
  { 458,	1,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo3 },  // Inst #458 = PUSH16i
  { 459,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo73 },  // Inst #459 = PUSH16r
  { 460,	1,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo78 },  // Inst #460 = PUSH8r
  { 461,	0,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #461 = RET
  { 462,	0,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #462 = RETI
  { 463,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo72 },  // Inst #463 = RRA16m
  { 464,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo74 },  // Inst #464 = RRA16n
  { 465,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo74 },  // Inst #465 = RRA16p
  { 466,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo79 },  // Inst #466 = RRA16r
  { 467,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo72 },  // Inst #467 = RRA8m
  { 468,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo74 },  // Inst #468 = RRA8n
  { 469,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo74 },  // Inst #469 = RRA8p
  { 470,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo80 },  // Inst #470 = RRA8r
  { 471,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo72 },  // Inst #471 = RRC16m
  { 472,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo74 },  // Inst #472 = RRC16n
  { 473,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo74 },  // Inst #473 = RRC16p
  { 474,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo79 },  // Inst #474 = RRC16r
  { 475,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo72 },  // Inst #475 = RRC8m
  { 476,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo74 },  // Inst #476 = RRC8n
  { 477,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo74 },  // Inst #477 = RRC8p
  { 478,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo80 },  // Inst #478 = RRC8r
  { 479,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo66 },  // Inst #479 = Rrcl16
  { 480,	2,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo71 },  // Inst #480 = Rrcl8
  { 481,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo72 },  // Inst #481 = SEXT16m
  { 482,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo74 },  // Inst #482 = SEXT16n
  { 483,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo74 },  // Inst #483 = SEXT16p
  { 484,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo79 },  // Inst #484 = SEXT16r
  { 485,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #485 = SUB16mc
  { 486,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #486 = SUB16mi
  { 487,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #487 = SUB16mm
  { 488,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #488 = SUB16mn
  { 489,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #489 = SUB16mp
  { 490,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #490 = SUB16mr
  { 491,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #491 = SUB16rc
  { 492,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #492 = SUB16ri
  { 493,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #493 = SUB16rm
  { 494,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #494 = SUB16rn
  { 495,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #495 = SUB16rp
  { 496,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #496 = SUB16rr
  { 497,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #497 = SUB8mc
  { 498,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #498 = SUB8mi
  { 499,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #499 = SUB8mm
  { 500,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #500 = SUB8mn
  { 501,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #501 = SUB8mp
  { 502,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #502 = SUB8mr
  { 503,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #503 = SUB8rc
  { 504,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #504 = SUB8ri
  { 505,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #505 = SUB8rm
  { 506,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #506 = SUB8rn
  { 507,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #507 = SUB8rp
  { 508,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #508 = SUB8rr
  { 509,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo43 },  // Inst #509 = SUBC16mc
  { 510,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo44 },  // Inst #510 = SUBC16mi
  { 511,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo45 },  // Inst #511 = SUBC16mm
  { 512,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #512 = SUBC16mn
  { 513,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #513 = SUBC16mp
  { 514,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo47 },  // Inst #514 = SUBC16mr
  { 515,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo48 },  // Inst #515 = SUBC16rc
  { 516,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo49 },  // Inst #516 = SUBC16ri
  { 517,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo50 },  // Inst #517 = SUBC16rm
  { 518,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo51 },  // Inst #518 = SUBC16rn
  { 519,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo52 },  // Inst #519 = SUBC16rp
  { 520,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo53 },  // Inst #520 = SUBC16rr
  { 521,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo43 },  // Inst #521 = SUBC8mc
  { 522,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo44 },  // Inst #522 = SUBC8mi
  { 523,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo45 },  // Inst #523 = SUBC8mm
  { 524,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #524 = SUBC8mn
  { 525,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo46 },  // Inst #525 = SUBC8mp
  { 526,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo54 },  // Inst #526 = SUBC8mr
  { 527,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo55 },  // Inst #527 = SUBC8rc
  { 528,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo56 },  // Inst #528 = SUBC8ri
  { 529,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo57 },  // Inst #529 = SUBC8rm
  { 530,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo58 },  // Inst #530 = SUBC8rn
  { 531,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo59 },  // Inst #531 = SUBC8rp
  { 532,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo60 },  // Inst #532 = SUBC8rr
  { 533,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #533 = SWPB16m
  { 534,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo74 },  // Inst #534 = SWPB16n
  { 535,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo74 },  // Inst #535 = SWPB16p
  { 536,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #536 = SWPB16r
  { 537,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo81 },  // Inst #537 = Select16
  { 538,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo82 },  // Inst #538 = Select8
  { 539,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo83 },  // Inst #539 = Shl16
  { 540,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo84 },  // Inst #540 = Shl8
  { 541,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo83 },  // Inst #541 = Sra16
  { 542,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo84 },  // Inst #542 = Sra8
  { 543,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo83 },  // Inst #543 = Srl16
  { 544,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo84 },  // Inst #544 = Srl8
  { 545,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #545 = XOR16mc
  { 546,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #546 = XOR16mi
  { 547,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #547 = XOR16mm
  { 548,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #548 = XOR16mn
  { 549,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #549 = XOR16mp
  { 550,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo47 },  // Inst #550 = XOR16mr
  { 551,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo48 },  // Inst #551 = XOR16rc
  { 552,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo49 },  // Inst #552 = XOR16ri
  { 553,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo50 },  // Inst #553 = XOR16rm
  { 554,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo51 },  // Inst #554 = XOR16rn
  { 555,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo52 },  // Inst #555 = XOR16rp
  { 556,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo53 },  // Inst #556 = XOR16rr
  { 557,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo43 },  // Inst #557 = XOR8mc
  { 558,	3,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo44 },  // Inst #558 = XOR8mi
  { 559,	4,	0,	6,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #559 = XOR8mm
  { 560,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #560 = XOR8mn
  { 561,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo46 },  // Inst #561 = XOR8mp
  { 562,	3,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo54 },  // Inst #562 = XOR8mr
  { 563,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo55 },  // Inst #563 = XOR8rc
  { 564,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo56 },  // Inst #564 = XOR8ri
  { 565,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo57 },  // Inst #565 = XOR8rm
  { 566,	3,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo58 },  // Inst #566 = XOR8rn
  { 567,	4,	2,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo59 },  // Inst #567 = XOR8rp
  { 568,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo60 },  // Inst #568 = XOR8rr
  { 569,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #569 = ZEXT16r
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char MSP430InstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "G_FLOG2\0"
  /* 17 */ "G_FEXP2\0"
  /* 25 */ "Sra16\0"
  /* 31 */ "Rrcl16\0"
  /* 38 */ "Shl16\0"
  /* 44 */ "Srl16\0"
  /* 50 */ "Select16\0"
  /* 59 */ "Sra8\0"
  /* 64 */ "Rrcl8\0"
  /* 70 */ "Shl8\0"
  /* 75 */ "Srl8\0"
  /* 80 */ "MOVZX16rm8\0"
  /* 91 */ "MOVZX16rr8\0"
  /* 102 */ "Select8\0"
  /* 110 */ "G_FMA\0"
  /* 116 */ "G_STRICT_FMA\0"
  /* 129 */ "G_FSUB\0"
  /* 136 */ "G_STRICT_FSUB\0"
  /* 150 */ "G_ATOMICRMW_FSUB\0"
  /* 167 */ "G_SUB\0"
  /* 173 */ "G_ATOMICRMW_SUB\0"
  /* 189 */ "JCC\0"
  /* 193 */ "G_INTRINSIC\0"
  /* 205 */ "G_FPTRUNC\0"
  /* 215 */ "G_INTRINSIC_TRUNC\0"
  /* 233 */ "G_TRUNC\0"
  /* 241 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 262 */ "G_DYN_STACKALLOC\0"
  /* 279 */ "G_FMAD\0"
  /* 286 */ "G_INDEXED_SEXTLOAD\0"
  /* 305 */ "G_SEXTLOAD\0"
  /* 316 */ "G_INDEXED_ZEXTLOAD\0"
  /* 335 */ "G_ZEXTLOAD\0"
  /* 346 */ "G_INDEXED_LOAD\0"
  /* 361 */ "G_LOAD\0"
  /* 368 */ "G_VECREDUCE_FADD\0"
  /* 385 */ "G_FADD\0"
  /* 392 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 413 */ "G_STRICT_FADD\0"
  /* 427 */ "G_ATOMICRMW_FADD\0"
  /* 444 */ "G_VECREDUCE_ADD\0"
  /* 460 */ "G_ADD\0"
  /* 466 */ "G_PTR_ADD\0"
  /* 476 */ "G_ATOMICRMW_ADD\0"
  /* 492 */ "G_ATOMICRMW_NAND\0"
  /* 509 */ "G_VECREDUCE_AND\0"
  /* 525 */ "G_AND\0"
  /* 531 */ "G_ATOMICRMW_AND\0"
  /* 547 */ "LIFETIME_END\0"
  /* 560 */ "G_BRCOND\0"
  /* 569 */ "G_INTRINSIC_ROUND\0"
  /* 587 */ "LOAD_STACK_GUARD\0"
  /* 604 */ "PSEUDO_PROBE\0"
  /* 617 */ "G_SSUBE\0"
  /* 625 */ "G_USUBE\0"
  /* 633 */ "G_FENCE\0"
  /* 641 */ "REG_SEQUENCE\0"
  /* 654 */ "G_SADDE\0"
  /* 662 */ "G_UADDE\0"
  /* 670 */ "G_FMINNUM_IEEE\0"
  /* 685 */ "G_FMAXNUM_IEEE\0"
  /* 700 */ "G_JUMP_TABLE\0"
  /* 713 */ "BUNDLE\0"
  /* 720 */ "LOCAL_ESCAPE\0"
  /* 733 */ "G_INDEXED_STORE\0"
  /* 749 */ "G_STORE\0"
  /* 757 */ "G_BITREVERSE\0"
  /* 770 */ "DBG_VALUE\0"
  /* 780 */ "G_GLOBAL_VALUE\0"
  /* 795 */ "G_MEMMOVE\0"
  /* 805 */ "G_FREEZE\0"
  /* 814 */ "G_FCANONICALIZE\0"
  /* 830 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 848 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 866 */ "G_IMPLICIT_DEF\0"
  /* 881 */ "DBG_INSTR_REF\0"
  /* 895 */ "G_FNEG\0"
  /* 902 */ "EXTRACT_SUBREG\0"
  /* 917 */ "INSERT_SUBREG\0"
  /* 931 */ "G_SEXT_INREG\0"
  /* 944 */ "SUBREG_TO_REG\0"
  /* 958 */ "G_ATOMIC_CMPXCHG\0"
  /* 975 */ "G_ATOMICRMW_XCHG\0"
  /* 992 */ "G_FLOG\0"
  /* 999 */ "G_VAARG\0"
  /* 1007 */ "PREALLOCATED_ARG\0"
  /* 1024 */ "G_SMULH\0"
  /* 1032 */ "G_UMULH\0"
  /* 1040 */ "G_PHI\0"
  /* 1046 */ "G_FPTOSI\0"
  /* 1055 */ "RETI\0"
  /* 1060 */ "G_FPTOUI\0"
  /* 1069 */ "G_FPOWI\0"
  /* 1077 */ "G_PTRMASK\0"
  /* 1087 */ "GC_LABEL\0"
  /* 1096 */ "DBG_LABEL\0"
  /* 1106 */ "EH_LABEL\0"
  /* 1115 */ "ANNOTATION_LABEL\0"
  /* 1132 */ "ICALL_BRANCH_FUNNEL\0"
  /* 1152 */ "G_FSHL\0"
  /* 1159 */ "G_SHL\0"
  /* 1165 */ "G_FCEIL\0"
  /* 1173 */ "PATCHABLE_TAIL_CALL\0"
  /* 1193 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 1220 */ "PATCHABLE_EVENT_CALL\0"
  /* 1241 */ "FENTRY_CALL\0"
  /* 1253 */ "KILL\0"
  /* 1258 */ "G_VECREDUCE_FMUL\0"
  /* 1275 */ "G_FMUL\0"
  /* 1282 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 1303 */ "G_STRICT_FMUL\0"
  /* 1317 */ "G_VECREDUCE_MUL\0"
  /* 1333 */ "G_MUL\0"
  /* 1339 */ "G_FREM\0"
  /* 1346 */ "G_STRICT_FREM\0"
  /* 1360 */ "G_SREM\0"
  /* 1367 */ "G_UREM\0"
  /* 1374 */ "INLINEASM\0"
  /* 1384 */ "G_FMINIMUM\0"
  /* 1395 */ "G_FMAXIMUM\0"
  /* 1406 */ "G_FMINNUM\0"
  /* 1416 */ "G_FMAXNUM\0"
  /* 1426 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 1448 */ "G_FCOPYSIGN\0"
  /* 1460 */ "G_VECREDUCE_FMIN\0"
  /* 1477 */ "G_VECREDUCE_SMIN\0"
  /* 1494 */ "G_SMIN\0"
  /* 1501 */ "G_VECREDUCE_UMIN\0"
  /* 1518 */ "G_UMIN\0"
  /* 1525 */ "G_ATOMICRMW_UMIN\0"
  /* 1542 */ "G_ATOMICRMW_MIN\0"
  /* 1558 */ "G_FSIN\0"
  /* 1565 */ "CFI_INSTRUCTION\0"
  /* 1581 */ "ADJCALLSTACKDOWN\0"
  /* 1598 */ "G_SSUBO\0"
  /* 1606 */ "G_USUBO\0"
  /* 1614 */ "G_SADDO\0"
  /* 1622 */ "G_UADDO\0"
  /* 1630 */ "G_SMULO\0"
  /* 1638 */ "G_UMULO\0"
  /* 1646 */ "STACKMAP\0"
  /* 1655 */ "G_BSWAP\0"
  /* 1663 */ "G_SITOFP\0"
  /* 1672 */ "G_UITOFP\0"
  /* 1681 */ "G_FCMP\0"
  /* 1688 */ "G_ICMP\0"
  /* 1695 */ "JMP\0"
  /* 1699 */ "G_CTPOP\0"
  /* 1707 */ "PATCHABLE_OP\0"
  /* 1720 */ "FAULTING_OP\0"
  /* 1732 */ "ADJCALLSTACKUP\0"
  /* 1747 */ "PREALLOCATED_SETUP\0"
  /* 1766 */ "G_FEXP\0"
  /* 1773 */ "G_BR\0"
  /* 1778 */ "INLINEASM_BR\0"
  /* 1791 */ "G_BLOCK_ADDR\0"
  /* 1804 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 1829 */ "G_READCYCLECOUNTER\0"
  /* 1848 */ "G_READ_REGISTER\0"
  /* 1864 */ "G_WRITE_REGISTER\0"
  /* 1881 */ "G_ASHR\0"
  /* 1888 */ "G_FSHR\0"
  /* 1895 */ "G_LSHR\0"
  /* 1902 */ "G_FFLOOR\0"
  /* 1911 */ "G_BUILD_VECTOR\0"
  /* 1926 */ "G_SHUFFLE_VECTOR\0"
  /* 1943 */ "G_VECREDUCE_XOR\0"
  /* 1959 */ "G_XOR\0"
  /* 1965 */ "G_ATOMICRMW_XOR\0"
  /* 1981 */ "G_VECREDUCE_OR\0"
  /* 1996 */ "G_OR\0"
  /* 2001 */ "G_ATOMICRMW_OR\0"
  /* 2016 */ "G_INTTOPTR\0"
  /* 2027 */ "G_FABS\0"
  /* 2034 */ "G_ABS\0"
  /* 2040 */ "G_UNMERGE_VALUES\0"
  /* 2057 */ "G_MERGE_VALUES\0"
  /* 2072 */ "G_FCOS\0"
  /* 2079 */ "G_CONCAT_VECTORS\0"
  /* 2096 */ "COPY_TO_REGCLASS\0"
  /* 2113 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 2143 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 2170 */ "G_SSUBSAT\0"
  /* 2180 */ "G_USUBSAT\0"
  /* 2190 */ "G_SADDSAT\0"
  /* 2200 */ "G_UADDSAT\0"
  /* 2210 */ "G_SSHLSAT\0"
  /* 2220 */ "G_USHLSAT\0"
  /* 2230 */ "G_SMULFIXSAT\0"
  /* 2243 */ "G_UMULFIXSAT\0"
  /* 2256 */ "G_SDIVFIXSAT\0"
  /* 2269 */ "G_UDIVFIXSAT\0"
  /* 2282 */ "G_EXTRACT\0"
  /* 2292 */ "G_SELECT\0"
  /* 2301 */ "G_BRINDIRECT\0"
  /* 2314 */ "PATCHABLE_RET\0"
  /* 2328 */ "G_MEMSET\0"
  /* 2337 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 2361 */ "G_BRJT\0"
  /* 2368 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 2389 */ "G_INSERT_VECTOR_ELT\0"
  /* 2409 */ "G_FCONSTANT\0"
  /* 2421 */ "G_CONSTANT\0"
  /* 2432 */ "STATEPOINT\0"
  /* 2443 */ "PATCHPOINT\0"
  /* 2454 */ "G_PTRTOINT\0"
  /* 2465 */ "G_FRINT\0"
  /* 2473 */ "G_INTRINSIC_LRINT\0"
  /* 2491 */ "G_FNEARBYINT\0"
  /* 2504 */ "G_VASTART\0"
  /* 2514 */ "LIFETIME_START\0"
  /* 2529 */ "G_INSERT\0"
  /* 2538 */ "G_FSQRT\0"
  /* 2546 */ "G_STRICT_FSQRT\0"
  /* 2561 */ "G_BITCAST\0"
  /* 2571 */ "G_ADDRSPACE_CAST\0"
  /* 2588 */ "G_FPEXT\0"
  /* 2596 */ "G_SEXT\0"
  /* 2603 */ "G_ANYEXT\0"
  /* 2612 */ "G_ZEXT\0"
  /* 2619 */ "G_FDIV\0"
  /* 2626 */ "G_STRICT_FDIV\0"
  /* 2640 */ "G_SDIV\0"
  /* 2647 */ "G_UDIV\0"
  /* 2654 */ "G_FPOW\0"
  /* 2661 */ "G_VECREDUCE_FMAX\0"
  /* 2678 */ "G_VECREDUCE_SMAX\0"
  /* 2695 */ "G_SMAX\0"
  /* 2702 */ "G_VECREDUCE_UMAX\0"
  /* 2719 */ "G_UMAX\0"
  /* 2726 */ "G_ATOMICRMW_UMAX\0"
  /* 2743 */ "G_ATOMICRMW_MAX\0"
  /* 2759 */ "G_FRAME_INDEX\0"
  /* 2773 */ "G_SMULFIX\0"
  /* 2783 */ "G_UMULFIX\0"
  /* 2793 */ "G_SDIVFIX\0"
  /* 2803 */ "G_UDIVFIX\0"
  /* 2813 */ "G_MEMCPY\0"
  /* 2822 */ "COPY\0"
  /* 2827 */ "G_CTLZ\0"
  /* 2834 */ "G_CTTZ\0"
  /* 2841 */ "PUSH16c\0"
  /* 2849 */ "SUB16mc\0"
  /* 2857 */ "SUBC16mc\0"
  /* 2866 */ "ADDC16mc\0"
  /* 2875 */ "BIC16mc\0"
  /* 2883 */ "DADD16mc\0"
  /* 2892 */ "AND16mc\0"
  /* 2900 */ "CMP16mc\0"
  /* 2908 */ "XOR16mc\0"
  /* 2916 */ "BIS16mc\0"
  /* 2924 */ "BIT16mc\0"
  /* 2932 */ "MOV16mc\0"
  /* 2940 */ "SUB8mc\0"
  /* 2947 */ "SUBC8mc\0"
  /* 2955 */ "ADDC8mc\0"
  /* 2963 */ "BIC8mc\0"
  /* 2970 */ "DADD8mc\0"
  /* 2978 */ "AND8mc\0"
  /* 2985 */ "CMP8mc\0"
  /* 2992 */ "XOR8mc\0"
  /* 2999 */ "BIS8mc\0"
  /* 3006 */ "BIT8mc\0"
  /* 3013 */ "MOV8mc\0"
  /* 3020 */ "SUB16rc\0"
  /* 3028 */ "SUBC16rc\0"
  /* 3037 */ "ADDC16rc\0"
  /* 3046 */ "BIC16rc\0"
  /* 3054 */ "DADD16rc\0"
  /* 3063 */ "AND16rc\0"
  /* 3071 */ "CMP16rc\0"
  /* 3079 */ "XOR16rc\0"
  /* 3087 */ "BIS16rc\0"
  /* 3095 */ "BIT16rc\0"
  /* 3103 */ "MOV16rc\0"
  /* 3111 */ "SUB8rc\0"
  /* 3118 */ "SUBC8rc\0"
  /* 3126 */ "ADDC8rc\0"
  /* 3134 */ "BIC8rc\0"
  /* 3141 */ "DADD8rc\0"
  /* 3149 */ "AND8rc\0"
  /* 3156 */ "CMP8rc\0"
  /* 3163 */ "XOR8rc\0"
  /* 3170 */ "BIS8rc\0"
  /* 3177 */ "BIT8rc\0"
  /* 3184 */ "MOV8rc\0"
  /* 3191 */ "ADDframe\0"
  /* 3200 */ "PUSH16i\0"
  /* 3208 */ "Bi\0"
  /* 3211 */ "CALLi\0"
  /* 3217 */ "SUB16mi\0"
  /* 3225 */ "SUBC16mi\0"
  /* 3234 */ "ADDC16mi\0"
  /* 3243 */ "BIC16mi\0"
  /* 3251 */ "DADD16mi\0"
  /* 3260 */ "AND16mi\0"
  /* 3268 */ "CMP16mi\0"
  /* 3276 */ "XOR16mi\0"
  /* 3284 */ "BIS16mi\0"
  /* 3292 */ "BIT16mi\0"
  /* 3300 */ "MOV16mi\0"
  /* 3308 */ "SUB8mi\0"
  /* 3315 */ "SUBC8mi\0"
  /* 3323 */ "ADDC8mi\0"
  /* 3331 */ "BIC8mi\0"
  /* 3338 */ "DADD8mi\0"
  /* 3346 */ "AND8mi\0"
  /* 3353 */ "CMP8mi\0"
  /* 3360 */ "XOR8mi\0"
  /* 3367 */ "BIS8mi\0"
  /* 3374 */ "BIT8mi\0"
  /* 3381 */ "MOV8mi\0"
  /* 3388 */ "SUB16ri\0"
  /* 3396 */ "SUBC16ri\0"
  /* 3405 */ "ADDC16ri\0"
  /* 3414 */ "BIC16ri\0"
  /* 3422 */ "DADD16ri\0"
  /* 3431 */ "AND16ri\0"
  /* 3439 */ "CMP16ri\0"
  /* 3447 */ "XOR16ri\0"
  /* 3455 */ "BIS16ri\0"
  /* 3463 */ "BIT16ri\0"
  /* 3471 */ "MOV16ri\0"
  /* 3479 */ "SUB8ri\0"
  /* 3486 */ "SUBC8ri\0"
  /* 3494 */ "ADDC8ri\0"
  /* 3502 */ "BIC8ri\0"
  /* 3509 */ "DADD8ri\0"
  /* 3517 */ "AND8ri\0"
  /* 3524 */ "CMP8ri\0"
  /* 3531 */ "XOR8ri\0"
  /* 3538 */ "BIS8ri\0"
  /* 3545 */ "BIT8ri\0"
  /* 3552 */ "MOV8ri\0"
  /* 3559 */ "RRA16m\0"
  /* 3566 */ "SWPB16m\0"
  /* 3574 */ "RRC16m\0"
  /* 3581 */ "SEXT16m\0"
  /* 3589 */ "RRA8m\0"
  /* 3595 */ "RRC8m\0"
  /* 3601 */ "Bm\0"
  /* 3604 */ "CALLm\0"
  /* 3610 */ "SUB16mm\0"
  /* 3618 */ "SUBC16mm\0"
  /* 3627 */ "ADDC16mm\0"
  /* 3636 */ "BIC16mm\0"
  /* 3644 */ "DADD16mm\0"
  /* 3653 */ "AND16mm\0"
  /* 3661 */ "CMP16mm\0"
  /* 3669 */ "XOR16mm\0"
  /* 3677 */ "BIS16mm\0"
  /* 3685 */ "BIT16mm\0"
  /* 3693 */ "MOV16mm\0"
  /* 3701 */ "SUB8mm\0"
  /* 3708 */ "SUBC8mm\0"
  /* 3716 */ "ADDC8mm\0"
  /* 3724 */ "BIC8mm\0"
  /* 3731 */ "DADD8mm\0"
  /* 3739 */ "AND8mm\0"
  /* 3746 */ "CMP8mm\0"
  /* 3753 */ "XOR8mm\0"
  /* 3760 */ "BIS8mm\0"
  /* 3767 */ "BIT8mm\0"
  /* 3774 */ "MOV8mm\0"
  /* 3781 */ "SUB16rm\0"
  /* 3789 */ "SUBC16rm\0"
  /* 3798 */ "ADDC16rm\0"
  /* 3807 */ "BIC16rm\0"
  /* 3815 */ "DADD16rm\0"
  /* 3824 */ "AND16rm\0"
  /* 3832 */ "CMP16rm\0"
  /* 3840 */ "XOR16rm\0"
  /* 3848 */ "BIS16rm\0"
  /* 3856 */ "BIT16rm\0"
  /* 3864 */ "MOV16rm\0"
  /* 3872 */ "SUB8rm\0"
  /* 3879 */ "SUBC8rm\0"
  /* 3887 */ "ADDC8rm\0"
  /* 3895 */ "BIC8rm\0"
  /* 3902 */ "DADD8rm\0"
  /* 3910 */ "AND8rm\0"
  /* 3917 */ "CMP8rm\0"
  /* 3924 */ "XOR8rm\0"
  /* 3931 */ "BIS8rm\0"
  /* 3938 */ "BIT8rm\0"
  /* 3945 */ "MOV8rm\0"
  /* 3952 */ "RRA16n\0"
  /* 3959 */ "SWPB16n\0"
  /* 3967 */ "RRC16n\0"
  /* 3974 */ "SEXT16n\0"
  /* 3982 */ "RRA8n\0"
  /* 3988 */ "RRC8n\0"
  /* 3994 */ "CALLn\0"
  /* 4000 */ "SUB16mn\0"
  /* 4008 */ "SUBC16mn\0"
  /* 4017 */ "ADDC16mn\0"
  /* 4026 */ "BIC16mn\0"
  /* 4034 */ "DADD16mn\0"
  /* 4043 */ "AND16mn\0"
  /* 4051 */ "CMP16mn\0"
  /* 4059 */ "XOR16mn\0"
  /* 4067 */ "BIS16mn\0"
  /* 4075 */ "BIT16mn\0"
  /* 4083 */ "MOV16mn\0"
  /* 4091 */ "SUB8mn\0"
  /* 4098 */ "SUBC8mn\0"
  /* 4106 */ "ADDC8mn\0"
  /* 4114 */ "BIC8mn\0"
  /* 4121 */ "DADD8mn\0"
  /* 4129 */ "AND8mn\0"
  /* 4136 */ "CMP8mn\0"
  /* 4143 */ "XOR8mn\0"
  /* 4150 */ "BIS8mn\0"
  /* 4157 */ "BIT8mn\0"
  /* 4164 */ "MOV8mn\0"
  /* 4171 */ "SUB16rn\0"
  /* 4179 */ "SUBC16rn\0"
  /* 4188 */ "ADDC16rn\0"
  /* 4197 */ "BIC16rn\0"
  /* 4205 */ "DADD16rn\0"
  /* 4214 */ "AND16rn\0"
  /* 4222 */ "CMP16rn\0"
  /* 4230 */ "XOR16rn\0"
  /* 4238 */ "BIS16rn\0"
  /* 4246 */ "BIT16rn\0"
  /* 4254 */ "MOV16rn\0"
  /* 4262 */ "SUB8rn\0"
  /* 4269 */ "SUBC8rn\0"
  /* 4277 */ "ADDC8rn\0"
  /* 4285 */ "BIC8rn\0"
  /* 4292 */ "DADD8rn\0"
  /* 4300 */ "AND8rn\0"
  /* 4307 */ "CMP8rn\0"
  /* 4314 */ "XOR8rn\0"
  /* 4321 */ "BIS8rn\0"
  /* 4328 */ "BIT8rn\0"
  /* 4335 */ "MOV8rn\0"
  /* 4342 */ "RRA16p\0"
  /* 4349 */ "SWPB16p\0"
  /* 4357 */ "RRC16p\0"
  /* 4364 */ "SEXT16p\0"
  /* 4372 */ "RRA8p\0"
  /* 4378 */ "RRC8p\0"
  /* 4384 */ "CALLp\0"
  /* 4390 */ "SUB16mp\0"
  /* 4398 */ "SUBC16mp\0"
  /* 4407 */ "ADDC16mp\0"
  /* 4416 */ "BIC16mp\0"
  /* 4424 */ "DADD16mp\0"
  /* 4433 */ "AND16mp\0"
  /* 4441 */ "CMP16mp\0"
  /* 4449 */ "XOR16mp\0"
  /* 4457 */ "BIS16mp\0"
  /* 4465 */ "BIT16mp\0"
  /* 4473 */ "SUB8mp\0"
  /* 4480 */ "SUBC8mp\0"
  /* 4488 */ "ADDC8mp\0"
  /* 4496 */ "BIC8mp\0"
  /* 4503 */ "DADD8mp\0"
  /* 4511 */ "AND8mp\0"
  /* 4518 */ "CMP8mp\0"
  /* 4525 */ "XOR8mp\0"
  /* 4532 */ "BIS8mp\0"
  /* 4539 */ "BIT8mp\0"
  /* 4546 */ "SUB16rp\0"
  /* 4554 */ "SUBC16rp\0"
  /* 4563 */ "ADDC16rp\0"
  /* 4572 */ "BIC16rp\0"
  /* 4580 */ "DADD16rp\0"
  /* 4589 */ "AND16rp\0"
  /* 4597 */ "CMP16rp\0"
  /* 4605 */ "XOR16rp\0"
  /* 4613 */ "BIS16rp\0"
  /* 4621 */ "BIT16rp\0"
  /* 4629 */ "MOV16rp\0"
  /* 4637 */ "SUB8rp\0"
  /* 4644 */ "SUBC8rp\0"
  /* 4652 */ "ADDC8rp\0"
  /* 4660 */ "BIC8rp\0"
  /* 4667 */ "DADD8rp\0"
  /* 4675 */ "AND8rp\0"
  /* 4682 */ "CMP8rp\0"
  /* 4689 */ "XOR8rp\0"
  /* 4696 */ "BIS8rp\0"
  /* 4703 */ "BIT8rp\0"
  /* 4710 */ "MOV8rp\0"
  /* 4717 */ "RRA16r\0"
  /* 4724 */ "SWPB16r\0"
  /* 4732 */ "RRC16r\0"
  /* 4739 */ "PUSH16r\0"
  /* 4747 */ "POP16r\0"
  /* 4754 */ "SEXT16r\0"
  /* 4762 */ "ZEXT16r\0"
  /* 4770 */ "RRA8r\0"
  /* 4776 */ "RRC8r\0"
  /* 4782 */ "PUSH8r\0"
  /* 4789 */ "Br\0"
  /* 4792 */ "CALLr\0"
  /* 4798 */ "SUB16mr\0"
  /* 4806 */ "SUBC16mr\0"
  /* 4815 */ "ADDC16mr\0"
  /* 4824 */ "BIC16mr\0"
  /* 4832 */ "DADD16mr\0"
  /* 4841 */ "AND16mr\0"
  /* 4849 */ "CMP16mr\0"
  /* 4857 */ "XOR16mr\0"
  /* 4865 */ "BIS16mr\0"
  /* 4873 */ "BIT16mr\0"
  /* 4881 */ "MOV16mr\0"
  /* 4889 */ "SUB8mr\0"
  /* 4896 */ "SUBC8mr\0"
  /* 4904 */ "ADDC8mr\0"
  /* 4912 */ "BIC8mr\0"
  /* 4919 */ "DADD8mr\0"
  /* 4927 */ "AND8mr\0"
  /* 4934 */ "CMP8mr\0"
  /* 4941 */ "XOR8mr\0"
  /* 4948 */ "BIS8mr\0"
  /* 4955 */ "BIT8mr\0"
  /* 4962 */ "MOV8mr\0"
  /* 4969 */ "SUB16rr\0"
  /* 4977 */ "SUBC16rr\0"
  /* 4986 */ "ADDC16rr\0"
  /* 4995 */ "BIC16rr\0"
  /* 5003 */ "DADD16rr\0"
  /* 5012 */ "AND16rr\0"
  /* 5020 */ "CMP16rr\0"
  /* 5028 */ "XOR16rr\0"
  /* 5036 */ "BIS16rr\0"
  /* 5044 */ "BIT16rr\0"
  /* 5052 */ "MOV16rr\0"
  /* 5060 */ "SUB8rr\0"
  /* 5067 */ "SUBC8rr\0"
  /* 5075 */ "ADDC8rr\0"
  /* 5083 */ "BIC8rr\0"
  /* 5090 */ "DADD8rr\0"
  /* 5098 */ "AND8rr\0"
  /* 5105 */ "CMP8rr\0"
  /* 5112 */ "XOR8rr\0"
  /* 5119 */ "BIS8rr\0"
  /* 5126 */ "BIT8rr\0"
  /* 5133 */ "MOV8rr\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned MSP430InstrNameIndices[] = {
    1042U, 1374U, 1778U, 1565U, 1106U, 1087U, 1115U, 1253U, 
    902U, 917U, 868U, 944U, 2096U, 770U, 881U, 1096U, 
    641U, 2822U, 713U, 2514U, 547U, 604U, 1646U, 1241U, 
    2443U, 587U, 1747U, 1007U, 2432U, 720U, 1720U, 1707U, 
    1804U, 2314U, 2337U, 1173U, 1220U, 1193U, 1132U, 460U, 
    167U, 1333U, 2640U, 2647U, 1360U, 1367U, 525U, 1996U, 
    1959U, 866U, 1040U, 2759U, 780U, 2282U, 2040U, 2529U, 
    2057U, 1911U, 241U, 2079U, 2454U, 2016U, 2561U, 805U, 
    215U, 569U, 2473U, 1426U, 1829U, 361U, 305U, 335U, 
    346U, 286U, 316U, 749U, 733U, 2113U, 958U, 975U, 
    476U, 173U, 531U, 492U, 2001U, 1965U, 2743U, 1542U, 
    2726U, 1525U, 427U, 150U, 633U, 560U, 2301U, 193U, 
    2143U, 2603U, 233U, 2421U, 2409U, 2504U, 999U, 2596U, 
    931U, 2612U, 1159U, 1895U, 1881U, 1152U, 1888U, 1688U, 
    1681U, 2292U, 1622U, 662U, 1606U, 625U, 1614U, 654U, 
    1598U, 617U, 1638U, 1630U, 1032U, 1024U, 2200U, 2190U, 
    2180U, 2170U, 2220U, 2210U, 2773U, 2783U, 2230U, 2243U, 
    2793U, 2803U, 2256U, 2269U, 385U, 129U, 1275U, 110U, 
    279U, 2619U, 1339U, 2654U, 1069U, 1766U, 17U, 992U, 
    9U, 0U, 895U, 2588U, 205U, 1046U, 1060U, 1663U, 
    1672U, 2027U, 1448U, 814U, 1406U, 1416U, 670U, 685U, 
    1384U, 1395U, 466U, 1077U, 1494U, 2695U, 1518U, 2719U, 
    2034U, 1773U, 2361U, 2389U, 2368U, 1926U, 2834U, 848U, 
    2827U, 830U, 1699U, 1655U, 757U, 1165U, 2072U, 1558U, 
    2538U, 1902U, 2465U, 2491U, 2571U, 1791U, 700U, 262U, 
    413U, 136U, 1303U, 2626U, 1346U, 116U, 2546U, 1848U, 
    1864U, 2813U, 795U, 2328U, 392U, 1282U, 368U, 1258U, 
    2661U, 1460U, 444U, 1317U, 509U, 1981U, 1943U, 2678U, 
    1477U, 2702U, 1501U, 2884U, 3252U, 3645U, 4035U, 4425U, 
    4833U, 3055U, 3423U, 3816U, 4206U, 4581U, 5004U, 2971U, 
    3339U, 3732U, 4122U, 4504U, 4920U, 3142U, 3510U, 3903U, 
    4293U, 4668U, 5091U, 2866U, 3234U, 3627U, 4017U, 4407U, 
    4815U, 3037U, 3405U, 3798U, 4188U, 4563U, 4986U, 2955U, 
    3323U, 3716U, 4106U, 4488U, 4904U, 3126U, 3494U, 3887U, 
    4277U, 4652U, 5075U, 3191U, 1581U, 1732U, 2892U, 3260U, 
    3653U, 4043U, 4433U, 4841U, 3063U, 3431U, 3824U, 4214U, 
    4589U, 5012U, 2978U, 3346U, 3739U, 4129U, 4511U, 4927U, 
    3149U, 3517U, 3910U, 4300U, 4675U, 5098U, 2875U, 3243U, 
    3636U, 4026U, 4416U, 4824U, 3046U, 3414U, 3807U, 4197U, 
    4572U, 4995U, 2963U, 3331U, 3724U, 4114U, 4496U, 4912U, 
    3134U, 3502U, 3895U, 4285U, 4660U, 5083U, 2916U, 3284U, 
    3677U, 4067U, 4457U, 4865U, 3087U, 3455U, 3848U, 4238U, 
    4613U, 5036U, 2999U, 3367U, 3760U, 4150U, 4532U, 4948U, 
    3170U, 3538U, 3931U, 4321U, 4696U, 5119U, 2924U, 3292U, 
    3685U, 4075U, 4465U, 4873U, 3095U, 3463U, 3856U, 4246U, 
    4621U, 5044U, 3006U, 3374U, 3767U, 4157U, 4539U, 4955U, 
    3177U, 3545U, 3938U, 4328U, 4703U, 5126U, 3208U, 3601U, 
    4789U, 3211U, 3604U, 3994U, 4384U, 4792U, 2900U, 3268U, 
    3661U, 4051U, 4441U, 4849U, 3071U, 3439U, 3832U, 4222U, 
    4597U, 5020U, 2985U, 3353U, 3746U, 4136U, 4518U, 4934U, 
    3156U, 3524U, 3917U, 4307U, 4682U, 5105U, 2883U, 3251U, 
    3644U, 4034U, 4424U, 4832U, 3054U, 3422U, 3815U, 4205U, 
    4580U, 5003U, 2970U, 3338U, 3731U, 4121U, 4503U, 4919U, 
    3141U, 3509U, 3902U, 4292U, 4667U, 5090U, 189U, 1695U, 
    2932U, 3300U, 3693U, 4083U, 4881U, 3103U, 3471U, 3864U, 
    4254U, 4629U, 5052U, 3013U, 3381U, 3774U, 4164U, 4962U, 
    3184U, 3552U, 3945U, 4335U, 4710U, 5133U, 80U, 91U, 
    4747U, 2841U, 3200U, 4739U, 4782U, 2324U, 1055U, 3559U, 
    3952U, 4342U, 4717U, 3589U, 3982U, 4372U, 4770U, 3574U, 
    3967U, 4357U, 4732U, 3595U, 3988U, 4378U, 4776U, 31U, 
    64U, 3581U, 3974U, 4364U, 4754U, 2849U, 3217U, 3610U, 
    4000U, 4390U, 4798U, 3020U, 3388U, 3781U, 4171U, 4546U, 
    4969U, 2940U, 3308U, 3701U, 4091U, 4473U, 4889U, 3111U, 
    3479U, 3872U, 4262U, 4637U, 5060U, 2857U, 3225U, 3618U, 
    4008U, 4398U, 4806U, 3028U, 3396U, 3789U, 4179U, 4554U, 
    4977U, 2947U, 3315U, 3708U, 4098U, 4480U, 4896U, 3118U, 
    3486U, 3879U, 4269U, 4644U, 5067U, 3566U, 3959U, 4349U, 
    4724U, 50U, 102U, 38U, 70U, 25U, 59U, 44U, 
    75U, 2908U, 3276U, 3669U, 4059U, 4449U, 4857U, 3079U, 
    3447U, 3840U, 4230U, 4605U, 5028U, 2992U, 3360U, 3753U, 
    4143U, 4525U, 4941U, 3163U, 3531U, 3924U, 4314U, 4689U, 
    5112U, 4762U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, nullptr, nullptr, 570);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MSP430GenInstrInfo : public TargetInstrInfo {
  explicit MSP430GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~MSP430GenInstrInfo() override = default;

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
extern const MCInstrDesc MSP430Insts[];
extern const unsigned MSP430InstrNameIndices[];
extern const char MSP430InstrNameData[];
MSP430GenInstrInfo::MSP430GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, nullptr, nullptr, 570);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace MSP430 {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace MSP430 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace MSP430 {
namespace OpTypes {
enum OperandType {
  cc = 0,
  cg16imm = 1,
  cg8imm = 2,
  f32imm = 3,
  f64imm = 4,
  i16imm = 5,
  i1imm = 6,
  i32imm = 7,
  i64imm = 8,
  i8imm = 9,
  indreg = 10,
  jmptarget = 11,
  memdst = 12,
  memsrc = 13,
  postreg = 14,
  ptype0 = 15,
  ptype1 = 16,
  ptype2 = 17,
  ptype3 = 18,
  ptype4 = 19,
  ptype5 = 20,
  type0 = 21,
  type1 = 22,
  type2 = 23,
  type3 = 24,
  type4 = 25,
  type5 = 26,
  untyped_imm_0 = 27,
  GR16 = 28,
  GR8 = 29,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace MSP430 {
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
    575,
    578,
    582,
    585,
    588,
    591,
    594,
    597,
    601,
    604,
    608,
    611,
    614,
    617,
    621,
    624,
    627,
    630,
    633,
    636,
    640,
    643,
    647,
    650,
    653,
    656,
    660,
    663,
    666,
    669,
    672,
    675,
    679,
    682,
    686,
    689,
    692,
    695,
    699,
    702,
    705,
    708,
    711,
    714,
    718,
    721,
    725,
    728,
    731,
    733,
    735,
    738,
    741,
    745,
    748,
    751,
    754,
    757,
    760,
    764,
    767,
    771,
    774,
    777,
    780,
    784,
    787,
    790,
    793,
    796,
    799,
    803,
    806,
    810,
    813,
    816,
    819,
    823,
    826,
    829,
    832,
    835,
    838,
    842,
    845,
    849,
    852,
    855,
    858,
    862,
    865,
    868,
    871,
    874,
    877,
    881,
    884,
    888,
    891,
    894,
    897,
    901,
    904,
    907,
    910,
    913,
    916,
    920,
    923,
    927,
    930,
    933,
    936,
    940,
    943,
    946,
    949,
    952,
    955,
    959,
    962,
    966,
    969,
    972,
    975,
    979,
    982,
    985,
    988,
    990,
    992,
    995,
    997,
    999,
    1001,
    1004,
    1007,
    1011,
    1014,
    1017,
    1020,
    1022,
    1024,
    1027,
    1029,
    1031,
    1033,
    1034,
    1036,
    1037,
    1038,
    1040,
    1041,
    1042,
    1043,
    1046,
    1049,
    1053,
    1056,
    1059,
    1062,
    1064,
    1066,
    1069,
    1071,
    1073,
    1075,
    1078,
    1081,
    1085,
    1088,
    1091,
    1094,
    1096,
    1098,
    1101,
    1103,
    1105,
    1107,
    1110,
    1113,
    1117,
    1120,
    1123,
    1126,
    1129,
    1132,
    1136,
    1139,
    1143,
    1146,
    1149,
    1152,
    1156,
    1159,
    1162,
    1165,
    1168,
    1171,
    1175,
    1178,
    1182,
    1185,
    1187,
    1188,
    1191,
    1194,
    1198,
    1201,
    1204,
    1206,
    1208,
    1211,
    1213,
    1216,
    1218,
    1221,
    1224,
    1228,
    1231,
    1234,
    1236,
    1238,
    1241,
    1243,
    1246,
    1248,
    1251,
    1253,
    1254,
    1255,
    1256,
    1257,
    1258,
    1258,
    1258,
    1260,
    1261,
    1262,
    1264,
    1266,
    1267,
    1268,
    1270,
    1272,
    1273,
    1274,
    1276,
    1278,
    1279,
    1280,
    1282,
    1284,
    1286,
    1288,
    1289,
    1290,
    1292,
    1295,
    1298,
    1302,
    1305,
    1308,
    1311,
    1314,
    1317,
    1321,
    1324,
    1328,
    1331,
    1334,
    1337,
    1341,
    1344,
    1347,
    1350,
    1353,
    1356,
    1360,
    1363,
    1367,
    1370,
    1373,
    1376,
    1380,
    1383,
    1386,
    1389,
    1392,
    1395,
    1399,
    1402,
    1406,
    1409,
    1412,
    1415,
    1419,
    1422,
    1425,
    1428,
    1431,
    1434,
    1438,
    1441,
    1445,
    1448,
    1450,
    1451,
    1452,
    1454,
    1458,
    1462,
    1465,
    1468,
    1471,
    1474,
    1477,
    1480,
    1483,
    1486,
    1490,
    1493,
    1496,
    1499,
    1502,
    1505,
    1509,
    1512,
    1516,
    1519,
    1522,
    1525,
    1529,
    1532,
    1535,
    1538,
    1541,
    1544,
    1548,
    1551,
    1555,
    1558,
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
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::jmptarget, OpTypes::cc, 
    OpTypes::jmptarget, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR8, 
    OpTypes::GR16, 
    OpTypes::cg16imm, 
    OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR8, 
    /**/
    /**/
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, 
    OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::cg16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::GR16, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::cg8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::i8imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR16, 
    OpTypes::GR16, OpTypes::i16imm, OpTypes::GR8, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::cg8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::i8imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, OpTypes::i16imm, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR16, OpTypes::GR8, OpTypes::GR16, 
    OpTypes::GR8, OpTypes::GR8, OpTypes::GR8, 
    OpTypes::GR16, OpTypes::GR16, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

