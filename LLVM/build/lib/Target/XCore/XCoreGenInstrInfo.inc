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

namespace XCore {
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
    BR_JT	= 229,
    BR_JT32	= 230,
    EH_RETURN	= 231,
    FRAME_TO_ARGS_OFFSET	= 232,
    Int_MemBarrier	= 233,
    LDAWFI	= 234,
    LDWFI	= 235,
    SELECT_CC	= 236,
    STWFI	= 237,
    ADD_2rus	= 238,
    ADD_3r	= 239,
    ANDNOT_2r	= 240,
    AND_3r	= 241,
    ASHR_l2rus	= 242,
    ASHR_l3r	= 243,
    BAU_1r	= 244,
    BITREV_l2r	= 245,
    BLACP_lu10	= 246,
    BLACP_u10	= 247,
    BLAT_lu6	= 248,
    BLAT_u6	= 249,
    BLA_1r	= 250,
    BLRB_lu10	= 251,
    BLRB_u10	= 252,
    BLRF_lu10	= 253,
    BLRF_u10	= 254,
    BRBF_lru6	= 255,
    BRBF_ru6	= 256,
    BRBT_lru6	= 257,
    BRBT_ru6	= 258,
    BRBU_lu6	= 259,
    BRBU_u6	= 260,
    BRFF_lru6	= 261,
    BRFF_ru6	= 262,
    BRFT_lru6	= 263,
    BRFT_ru6	= 264,
    BRFU_lu6	= 265,
    BRFU_u6	= 266,
    BRU_1r	= 267,
    BYTEREV_l2r	= 268,
    CHKCT_2r	= 269,
    CHKCT_rus	= 270,
    CLRE_0R	= 271,
    CLRPT_1R	= 272,
    CLRSR_branch_lu6	= 273,
    CLRSR_branch_u6	= 274,
    CLRSR_lu6	= 275,
    CLRSR_u6	= 276,
    CLZ_l2r	= 277,
    CRC8_l4r	= 278,
    CRC_l3r	= 279,
    DCALL_0R	= 280,
    DENTSP_0R	= 281,
    DGETREG_1r	= 282,
    DIVS_l3r	= 283,
    DIVU_l3r	= 284,
    DRESTSP_0R	= 285,
    DRET_0R	= 286,
    ECALLF_1r	= 287,
    ECALLT_1r	= 288,
    EDU_1r	= 289,
    EEF_2r	= 290,
    EET_2r	= 291,
    EEU_1r	= 292,
    ENDIN_2r	= 293,
    ENTSP_lu6	= 294,
    ENTSP_u6	= 295,
    EQ_2rus	= 296,
    EQ_3r	= 297,
    EXTDP_lu6	= 298,
    EXTDP_u6	= 299,
    EXTSP_lu6	= 300,
    EXTSP_u6	= 301,
    FREER_1r	= 302,
    FREET_0R	= 303,
    GETD_l2r	= 304,
    GETED_0R	= 305,
    GETET_0R	= 306,
    GETID_0R	= 307,
    GETKEP_0R	= 308,
    GETKSP_0R	= 309,
    GETN_l2r	= 310,
    GETPS_l2r	= 311,
    GETR_rus	= 312,
    GETSR_lu6	= 313,
    GETSR_u6	= 314,
    GETST_2r	= 315,
    GETTS_2r	= 316,
    INCT_2r	= 317,
    INITCP_2r	= 318,
    INITDP_2r	= 319,
    INITLR_l2r	= 320,
    INITPC_2r	= 321,
    INITSP_2r	= 322,
    INPW_l2rus	= 323,
    INSHR_2r	= 324,
    INT_2r	= 325,
    IN_2r	= 326,
    KCALL_1r	= 327,
    KCALL_lu6	= 328,
    KCALL_u6	= 329,
    KENTSP_lu6	= 330,
    KENTSP_u6	= 331,
    KRESTSP_lu6	= 332,
    KRESTSP_u6	= 333,
    KRET_0R	= 334,
    LADD_l5r	= 335,
    LD16S_3r	= 336,
    LD8U_3r	= 337,
    LDA16B_l3r	= 338,
    LDA16F_l3r	= 339,
    LDAPB_lu10	= 340,
    LDAPB_u10	= 341,
    LDAPF_lu10	= 342,
    LDAPF_lu10_ba	= 343,
    LDAPF_u10	= 344,
    LDAWB_l2rus	= 345,
    LDAWB_l3r	= 346,
    LDAWCP_lu6	= 347,
    LDAWCP_u6	= 348,
    LDAWDP_lru6	= 349,
    LDAWDP_ru6	= 350,
    LDAWF_l2rus	= 351,
    LDAWF_l3r	= 352,
    LDAWSP_lru6	= 353,
    LDAWSP_ru6	= 354,
    LDC_lru6	= 355,
    LDC_ru6	= 356,
    LDET_0R	= 357,
    LDIVU_l5r	= 358,
    LDSED_0R	= 359,
    LDSPC_0R	= 360,
    LDSSR_0R	= 361,
    LDWCP_lru6	= 362,
    LDWCP_lu10	= 363,
    LDWCP_ru6	= 364,
    LDWCP_u10	= 365,
    LDWDP_lru6	= 366,
    LDWDP_ru6	= 367,
    LDWSP_lru6	= 368,
    LDWSP_ru6	= 369,
    LDW_2rus	= 370,
    LDW_3r	= 371,
    LMUL_l6r	= 372,
    LSS_3r	= 373,
    LSUB_l5r	= 374,
    LSU_3r	= 375,
    MACCS_l4r	= 376,
    MACCU_l4r	= 377,
    MJOIN_1r	= 378,
    MKMSK_2r	= 379,
    MKMSK_rus	= 380,
    MSYNC_1r	= 381,
    MUL_l3r	= 382,
    NEG	= 383,
    NOT	= 384,
    OR_3r	= 385,
    OUTCT_2r	= 386,
    OUTCT_rus	= 387,
    OUTPW_l2rus	= 388,
    OUTSHR_2r	= 389,
    OUTT_2r	= 390,
    OUT_2r	= 391,
    PEEK_2r	= 392,
    REMS_l3r	= 393,
    REMU_l3r	= 394,
    RETSP_lu6	= 395,
    RETSP_u6	= 396,
    SETCLK_l2r	= 397,
    SETCP_1r	= 398,
    SETC_l2r	= 399,
    SETC_lru6	= 400,
    SETC_ru6	= 401,
    SETDP_1r	= 402,
    SETD_2r	= 403,
    SETEV_1r	= 404,
    SETKEP_0R	= 405,
    SETN_l2r	= 406,
    SETPSC_2r	= 407,
    SETPS_l2r	= 408,
    SETPT_2r	= 409,
    SETRDY_l2r	= 410,
    SETSP_1r	= 411,
    SETSR_branch_lu6	= 412,
    SETSR_branch_u6	= 413,
    SETSR_lu6	= 414,
    SETSR_u6	= 415,
    SETTW_l2r	= 416,
    SETV_1r	= 417,
    SEXT_2r	= 418,
    SEXT_rus	= 419,
    SHL_2rus	= 420,
    SHL_3r	= 421,
    SHR_2rus	= 422,
    SHR_3r	= 423,
    SSYNC_0r	= 424,
    ST16_l3r	= 425,
    ST8_l3r	= 426,
    STET_0R	= 427,
    STSED_0R	= 428,
    STSPC_0R	= 429,
    STSSR_0R	= 430,
    STWDP_lru6	= 431,
    STWDP_ru6	= 432,
    STWSP_lru6	= 433,
    STWSP_ru6	= 434,
    STW_2rus	= 435,
    STW_l3r	= 436,
    SUB_2rus	= 437,
    SUB_3r	= 438,
    SYNCR_1r	= 439,
    TESTCT_2r	= 440,
    TESTLCL_l2r	= 441,
    TESTWCT_2r	= 442,
    TSETMR_2r	= 443,
    TSETR_3r	= 444,
    TSTART_1R	= 445,
    WAITEF_1R	= 446,
    WAITET_1R	= 447,
    WAITEU_0R	= 448,
    XOR_l3r	= 449,
    ZEXT_2r	= 450,
    ZEXT_rus	= 451,
    INSTRUCTION_LIST_END = 452
  };

} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace XCore {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end namespace Sched
} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { XCore::SP, 0 };
static const MCPhysReg ImplicitList2[] = { XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::LR, 0 };
static const MCPhysReg ImplicitList3[] = { XCore::R11, 0 };

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
static const MCOperandInfo OperandInfo43[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(1) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { XCore::RRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(1) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc XCoreInsts[] = {
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
  { 227,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #227 = ADJCALLSTACKDOWN
  { 228,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #228 = ADJCALLSTACKUP
  { 229,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #229 = BR_JT
  { 230,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #230 = BR_JT32
  { 231,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #231 = EH_RETURN
  { 232,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #232 = FRAME_TO_ARGS_OFFSET
  { 233,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #233 = Int_MemBarrier
  { 234,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #234 = LDAWFI
  { 235,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #235 = LDWFI
  { 236,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #236 = SELECT_CC
  { 237,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #237 = STWFI
  { 238,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #238 = ADD_2rus
  { 239,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #239 = ADD_3r
  { 240,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #240 = ANDNOT_2r
  { 241,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #241 = AND_3r
  { 242,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #242 = ASHR_l2rus
  { 243,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #243 = ASHR_l3r
  { 244,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #244 = BAU_1r
  { 245,	2,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #245 = BITREV_l2r
  { 246,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo3 },  // Inst #246 = BLACP_lu10
  { 247,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo3 },  // Inst #247 = BLACP_u10
  { 248,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo3 },  // Inst #248 = BLAT_lu6
  { 249,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo3 },  // Inst #249 = BLAT_u6
  { 250,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo45 },  // Inst #250 = BLA_1r
  { 251,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2 },  // Inst #251 = BLRB_lu10
  { 252,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2 },  // Inst #252 = BLRB_u10
  { 253,	1,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2 },  // Inst #253 = BLRF_lu10
  { 254,	1,	0,	2,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2 },  // Inst #254 = BLRF_u10
  { 255,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #255 = BRBF_lru6
  { 256,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #256 = BRBF_ru6
  { 257,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #257 = BRBT_lru6
  { 258,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #258 = BRBT_ru6
  { 259,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #259 = BRBU_lu6
  { 260,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #260 = BRBU_u6
  { 261,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #261 = BRFF_lru6
  { 262,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #262 = BRFF_ru6
  { 263,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #263 = BRFT_lru6
  { 264,	2,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #264 = BRFT_ru6
  { 265,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #265 = BRFU_lu6
  { 266,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #266 = BRFU_u6
  { 267,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #267 = BRU_1r
  { 268,	2,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #268 = BYTEREV_l2r
  { 269,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #269 = CHKCT_2r
  { 270,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #270 = CHKCT_rus
  { 271,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #271 = CLRE_0R
  { 272,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #272 = CLRPT_1R
  { 273,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #273 = CLRSR_branch_lu6
  { 274,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #274 = CLRSR_branch_u6
  { 275,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #275 = CLRSR_lu6
  { 276,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #276 = CLRSR_u6
  { 277,	2,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #277 = CLZ_l2r
  { 278,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #278 = CRC8_l4r
  { 279,	4,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #279 = CRC_l3r
  { 280,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #280 = DCALL_0R
  { 281,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, nullptr },  // Inst #281 = DENTSP_0R
  { 282,	1,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #282 = DGETREG_1r
  { 283,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #283 = DIVS_l3r
  { 284,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #284 = DIVU_l3r
  { 285,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr },  // Inst #285 = DRESTSP_0R
  { 286,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #286 = DRET_0R
  { 287,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #287 = ECALLF_1r
  { 288,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #288 = ECALLT_1r
  { 289,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #289 = EDU_1r
  { 290,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #290 = EEF_2r
  { 291,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #291 = EET_2r
  { 292,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #292 = EEU_1r
  { 293,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #293 = ENDIN_2r
  { 294,	1,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3 },  // Inst #294 = ENTSP_lu6
  { 295,	1,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3 },  // Inst #295 = ENTSP_u6
  { 296,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #296 = EQ_2rus
  { 297,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #297 = EQ_3r
  { 298,	1,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #298 = EXTDP_lu6
  { 299,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #299 = EXTDP_u6
  { 300,	1,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3 },  // Inst #300 = EXTSP_lu6
  { 301,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3 },  // Inst #301 = EXTSP_u6
  { 302,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #302 = FREER_1r
  { 303,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #303 = FREET_0R
  { 304,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #304 = GETD_l2r
  { 305,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, nullptr },  // Inst #305 = GETED_0R
  { 306,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, nullptr },  // Inst #306 = GETET_0R
  { 307,	0,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, nullptr },  // Inst #307 = GETID_0R
  { 308,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, nullptr },  // Inst #308 = GETKEP_0R
  { 309,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, nullptr },  // Inst #309 = GETKSP_0R
  { 310,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #310 = GETN_l2r
  { 311,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #311 = GETPS_l2r
  { 312,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #312 = GETR_rus
  { 313,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo3 },  // Inst #313 = GETSR_lu6
  { 314,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo3 },  // Inst #314 = GETSR_u6
  { 315,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #315 = GETST_2r
  { 316,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #316 = GETTS_2r
  { 317,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #317 = INCT_2r
  { 318,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #318 = INITCP_2r
  { 319,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #319 = INITDP_2r
  { 320,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #320 = INITLR_l2r
  { 321,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #321 = INITPC_2r
  { 322,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #322 = INITSP_2r
  { 323,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #323 = INPW_l2rus
  { 324,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #324 = INSHR_2r
  { 325,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #325 = INT_2r
  { 326,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #326 = IN_2r
  { 327,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #327 = KCALL_1r
  { 328,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #328 = KCALL_lu6
  { 329,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #329 = KCALL_u6
  { 330,	1,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3 },  // Inst #330 = KENTSP_lu6
  { 331,	1,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3 },  // Inst #331 = KENTSP_u6
  { 332,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3 },  // Inst #332 = KRESTSP_lu6
  { 333,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3 },  // Inst #333 = KRESTSP_u6
  { 334,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, nullptr },  // Inst #334 = KRET_0R
  { 335,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #335 = LADD_l5r
  { 336,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #336 = LD16S_3r
  { 337,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #337 = LD8U_3r
  { 338,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #338 = LDA16B_l3r
  { 339,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #339 = LDA16F_l3r
  { 340,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #340 = LDAPB_lu10
  { 341,	1,	0,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #341 = LDAPB_u10
  { 342,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #342 = LDAPF_lu10
  { 343,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #343 = LDAPF_lu10_ba
  { 344,	1,	0,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #344 = LDAPF_u10
  { 345,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #345 = LDAWB_l2rus
  { 346,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #346 = LDAWB_l3r
  { 347,	1,	0,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo3 },  // Inst #347 = LDAWCP_lu6
  { 348,	1,	0,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo3 },  // Inst #348 = LDAWCP_u6
  { 349,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #349 = LDAWDP_lru6
  { 350,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #350 = LDAWDP_ru6
  { 351,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #351 = LDAWF_l2rus
  { 352,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #352 = LDAWF_l3r
  { 353,	2,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo56 },  // Inst #353 = LDAWSP_lru6
  { 354,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo56 },  // Inst #354 = LDAWSP_ru6
  { 355,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #355 = LDC_lru6
  { 356,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #356 = LDC_ru6
  { 357,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, nullptr },  // Inst #357 = LDET_0R
  { 358,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #358 = LDIVU_l5r
  { 359,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, nullptr },  // Inst #359 = LDSED_0R
  { 360,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, nullptr },  // Inst #360 = LDSPC_0R
  { 361,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, nullptr },  // Inst #361 = LDSSR_0R
  { 362,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #362 = LDWCP_lru6
  { 363,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo3 },  // Inst #363 = LDWCP_lu10
  { 364,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #364 = LDWCP_ru6
  { 365,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo3 },  // Inst #365 = LDWCP_u10
  { 366,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #366 = LDWDP_lru6
  { 367,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #367 = LDWDP_ru6
  { 368,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo56 },  // Inst #368 = LDWSP_lru6
  { 369,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo56 },  // Inst #369 = LDWSP_ru6
  { 370,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #370 = LDW_2rus
  { 371,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #371 = LDW_3r
  { 372,	6,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #372 = LMUL_l6r
  { 373,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #373 = LSS_3r
  { 374,	5,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #374 = LSUB_l5r
  { 375,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #375 = LSU_3r
  { 376,	6,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #376 = MACCS_l4r
  { 377,	6,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #377 = MACCU_l4r
  { 378,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #378 = MJOIN_1r
  { 379,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #379 = MKMSK_2r
  { 380,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #380 = MKMSK_rus
  { 381,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #381 = MSYNC_1r
  { 382,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #382 = MUL_l3r
  { 383,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #383 = NEG
  { 384,	2,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #384 = NOT
  { 385,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #385 = OR_3r
  { 386,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #386 = OUTCT_2r
  { 387,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #387 = OUTCT_rus
  { 388,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #388 = OUTPW_l2rus
  { 389,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #389 = OUTSHR_2r
  { 390,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #390 = OUTT_2r
  { 391,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #391 = OUT_2r
  { 392,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #392 = PEEK_2r
  { 393,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #393 = REMS_l3r
  { 394,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #394 = REMU_l3r
  { 395,	1,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3 },  // Inst #395 = RETSP_lu6
  { 396,	1,	0,	2,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo3 },  // Inst #396 = RETSP_u6
  { 397,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #397 = SETCLK_l2r
  { 398,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #398 = SETCP_1r
  { 399,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #399 = SETC_l2r
  { 400,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #400 = SETC_lru6
  { 401,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #401 = SETC_ru6
  { 402,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #402 = SETDP_1r
  { 403,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #403 = SETD_2r
  { 404,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo45 },  // Inst #404 = SETEV_1r
  { 405,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, nullptr },  // Inst #405 = SETKEP_0R
  { 406,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #406 = SETN_l2r
  { 407,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #407 = SETPSC_2r
  { 408,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #408 = SETPS_l2r
  { 409,	2,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #409 = SETPT_2r
  { 410,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #410 = SETRDY_l2r
  { 411,	1,	0,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList1, OperandInfo45 },  // Inst #411 = SETSP_1r
  { 412,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #412 = SETSR_branch_lu6
  { 413,	1,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #413 = SETSR_branch_u6
  { 414,	1,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #414 = SETSR_lu6
  { 415,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #415 = SETSR_u6
  { 416,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #416 = SETTW_l2r
  { 417,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo45 },  // Inst #417 = SETV_1r
  { 418,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #418 = SEXT_2r
  { 419,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #419 = SEXT_rus
  { 420,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #420 = SHL_2rus
  { 421,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #421 = SHL_3r
  { 422,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #422 = SHR_2rus
  { 423,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #423 = SHR_3r
  { 424,	0,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #424 = SSYNC_0r
  { 425,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #425 = ST16_l3r
  { 426,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #426 = ST8_l3r
  { 427,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, nullptr },  // Inst #427 = STET_0R
  { 428,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, nullptr },  // Inst #428 = STSED_0R
  { 429,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, nullptr },  // Inst #429 = STSPC_0R
  { 430,	0,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, nullptr },  // Inst #430 = STSSR_0R
  { 431,	2,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #431 = STWDP_lru6
  { 432,	2,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #432 = STWDP_ru6
  { 433,	2,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo56 },  // Inst #433 = STWSP_lru6
  { 434,	2,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, nullptr, OperandInfo56 },  // Inst #434 = STWSP_ru6
  { 435,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #435 = STW_2rus
  { 436,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #436 = STW_l3r
  { 437,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #437 = SUB_2rus
  { 438,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #438 = SUB_3r
  { 439,	1,	0,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #439 = SYNCR_1r
  { 440,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #440 = TESTCT_2r
  { 441,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #441 = TESTLCL_l2r
  { 442,	2,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #442 = TESTWCT_2r
  { 443,	2,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #443 = TSETMR_2r
  { 444,	3,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #444 = TSETR_3r
  { 445,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #445 = TSTART_1R
  { 446,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #446 = WAITEF_1R
  { 447,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #447 = WAITET_1R
  { 448,	0,	0,	2,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #448 = WAITEU_0R
  { 449,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #449 = XOR_l3r
  { 450,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #450 = ZEXT_2r
  { 451,	3,	1,	2,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #451 = ZEXT_rus
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char XCoreInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "LDAPB_u10\0"
  /* 19 */ "BLRB_u10\0"
  /* 28 */ "LDAPF_u10\0"
  /* 38 */ "BLRF_u10\0"
  /* 47 */ "BLACP_u10\0"
  /* 57 */ "LDWCP_u10\0"
  /* 67 */ "LDAPB_lu10\0"
  /* 78 */ "BLRB_lu10\0"
  /* 88 */ "LDAPF_lu10\0"
  /* 99 */ "BLRF_lu10\0"
  /* 109 */ "BLACP_lu10\0"
  /* 120 */ "LDWCP_lu10\0"
  /* 131 */ "BR_JT32\0"
  /* 139 */ "G_FLOG2\0"
  /* 147 */ "G_FEXP2\0"
  /* 155 */ "KCALL_u6\0"
  /* 164 */ "LDAWCP_u6\0"
  /* 174 */ "EXTDP_u6\0"
  /* 183 */ "RETSP_u6\0"
  /* 192 */ "KENTSP_u6\0"
  /* 202 */ "KRESTSP_u6\0"
  /* 213 */ "EXTSP_u6\0"
  /* 222 */ "CLRSR_u6\0"
  /* 231 */ "GETSR_u6\0"
  /* 240 */ "SETSR_u6\0"
  /* 249 */ "BLAT_u6\0"
  /* 257 */ "BRBU_u6\0"
  /* 265 */ "BRFU_u6\0"
  /* 273 */ "CLRSR_branch_u6\0"
  /* 289 */ "SETSR_branch_u6\0"
  /* 305 */ "KCALL_lu6\0"
  /* 315 */ "LDAWCP_lu6\0"
  /* 326 */ "EXTDP_lu6\0"
  /* 336 */ "RETSP_lu6\0"
  /* 346 */ "KENTSP_lu6\0"
  /* 357 */ "KRESTSP_lu6\0"
  /* 369 */ "EXTSP_lu6\0"
  /* 379 */ "CLRSR_lu6\0"
  /* 389 */ "GETSR_lu6\0"
  /* 399 */ "SETSR_lu6\0"
  /* 409 */ "BLAT_lu6\0"
  /* 418 */ "BRBU_lu6\0"
  /* 427 */ "BRFU_lu6\0"
  /* 436 */ "CLRSR_branch_lu6\0"
  /* 453 */ "SETSR_branch_lu6\0"
  /* 470 */ "LDC_ru6\0"
  /* 478 */ "SETC_ru6\0"
  /* 487 */ "BRBF_ru6\0"
  /* 496 */ "BRFF_ru6\0"
  /* 505 */ "LDWCP_ru6\0"
  /* 515 */ "LDAWDP_ru6\0"
  /* 526 */ "LDWDP_ru6\0"
  /* 536 */ "STWDP_ru6\0"
  /* 546 */ "LDAWSP_ru6\0"
  /* 557 */ "LDWSP_ru6\0"
  /* 567 */ "STWSP_ru6\0"
  /* 577 */ "BRBT_ru6\0"
  /* 586 */ "BRFT_ru6\0"
  /* 595 */ "LDC_lru6\0"
  /* 604 */ "SETC_lru6\0"
  /* 614 */ "BRBF_lru6\0"
  /* 624 */ "BRFF_lru6\0"
  /* 634 */ "LDWCP_lru6\0"
  /* 645 */ "LDAWDP_lru6\0"
  /* 657 */ "LDWDP_lru6\0"
  /* 668 */ "STWDP_lru6\0"
  /* 679 */ "LDAWSP_lru6\0"
  /* 691 */ "LDWSP_lru6\0"
  /* 702 */ "STWSP_lru6\0"
  /* 713 */ "BRBT_lru6\0"
  /* 723 */ "BRFT_lru6\0"
  /* 733 */ "G_FMA\0"
  /* 739 */ "G_STRICT_FMA\0"
  /* 752 */ "G_FSUB\0"
  /* 759 */ "G_STRICT_FSUB\0"
  /* 773 */ "G_ATOMICRMW_FSUB\0"
  /* 790 */ "G_SUB\0"
  /* 796 */ "G_ATOMICRMW_SUB\0"
  /* 812 */ "SELECT_CC\0"
  /* 822 */ "G_INTRINSIC\0"
  /* 834 */ "G_FPTRUNC\0"
  /* 844 */ "G_INTRINSIC_TRUNC\0"
  /* 862 */ "G_TRUNC\0"
  /* 870 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 891 */ "G_DYN_STACKALLOC\0"
  /* 908 */ "G_FMAD\0"
  /* 915 */ "G_INDEXED_SEXTLOAD\0"
  /* 934 */ "G_SEXTLOAD\0"
  /* 945 */ "G_INDEXED_ZEXTLOAD\0"
  /* 964 */ "G_ZEXTLOAD\0"
  /* 975 */ "G_INDEXED_LOAD\0"
  /* 990 */ "G_LOAD\0"
  /* 997 */ "G_VECREDUCE_FADD\0"
  /* 1014 */ "G_FADD\0"
  /* 1021 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 1042 */ "G_STRICT_FADD\0"
  /* 1056 */ "G_ATOMICRMW_FADD\0"
  /* 1073 */ "G_VECREDUCE_ADD\0"
  /* 1089 */ "G_ADD\0"
  /* 1095 */ "G_PTR_ADD\0"
  /* 1105 */ "G_ATOMICRMW_ADD\0"
  /* 1121 */ "G_ATOMICRMW_NAND\0"
  /* 1138 */ "G_VECREDUCE_AND\0"
  /* 1154 */ "G_AND\0"
  /* 1160 */ "G_ATOMICRMW_AND\0"
  /* 1176 */ "LIFETIME_END\0"
  /* 1189 */ "G_BRCOND\0"
  /* 1198 */ "G_INTRINSIC_ROUND\0"
  /* 1216 */ "LOAD_STACK_GUARD\0"
  /* 1233 */ "PSEUDO_PROBE\0"
  /* 1246 */ "G_SSUBE\0"
  /* 1254 */ "G_USUBE\0"
  /* 1262 */ "G_FENCE\0"
  /* 1270 */ "REG_SEQUENCE\0"
  /* 1283 */ "G_SADDE\0"
  /* 1291 */ "G_UADDE\0"
  /* 1299 */ "G_FMINNUM_IEEE\0"
  /* 1314 */ "G_FMAXNUM_IEEE\0"
  /* 1329 */ "G_JUMP_TABLE\0"
  /* 1342 */ "BUNDLE\0"
  /* 1349 */ "LOCAL_ESCAPE\0"
  /* 1362 */ "G_INDEXED_STORE\0"
  /* 1378 */ "G_STORE\0"
  /* 1386 */ "G_BITREVERSE\0"
  /* 1399 */ "DBG_VALUE\0"
  /* 1409 */ "G_GLOBAL_VALUE\0"
  /* 1424 */ "G_MEMMOVE\0"
  /* 1434 */ "G_FREEZE\0"
  /* 1443 */ "G_FCANONICALIZE\0"
  /* 1459 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 1477 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 1495 */ "G_IMPLICIT_DEF\0"
  /* 1510 */ "DBG_INSTR_REF\0"
  /* 1524 */ "G_FNEG\0"
  /* 1531 */ "EXTRACT_SUBREG\0"
  /* 1546 */ "INSERT_SUBREG\0"
  /* 1560 */ "G_SEXT_INREG\0"
  /* 1573 */ "SUBREG_TO_REG\0"
  /* 1587 */ "G_ATOMIC_CMPXCHG\0"
  /* 1604 */ "G_ATOMICRMW_XCHG\0"
  /* 1621 */ "G_FLOG\0"
  /* 1628 */ "G_VAARG\0"
  /* 1636 */ "PREALLOCATED_ARG\0"
  /* 1653 */ "G_SMULH\0"
  /* 1661 */ "G_UMULH\0"
  /* 1669 */ "LDAWFI\0"
  /* 1676 */ "LDWFI\0"
  /* 1682 */ "STWFI\0"
  /* 1688 */ "G_PHI\0"
  /* 1694 */ "G_FPTOSI\0"
  /* 1703 */ "G_FPTOUI\0"
  /* 1712 */ "G_FPOWI\0"
  /* 1720 */ "G_PTRMASK\0"
  /* 1730 */ "GC_LABEL\0"
  /* 1739 */ "DBG_LABEL\0"
  /* 1749 */ "EH_LABEL\0"
  /* 1758 */ "ANNOTATION_LABEL\0"
  /* 1775 */ "ICALL_BRANCH_FUNNEL\0"
  /* 1795 */ "G_FSHL\0"
  /* 1802 */ "G_SHL\0"
  /* 1808 */ "G_FCEIL\0"
  /* 1816 */ "PATCHABLE_TAIL_CALL\0"
  /* 1836 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 1863 */ "PATCHABLE_EVENT_CALL\0"
  /* 1884 */ "FENTRY_CALL\0"
  /* 1896 */ "KILL\0"
  /* 1901 */ "G_VECREDUCE_FMUL\0"
  /* 1918 */ "G_FMUL\0"
  /* 1925 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 1946 */ "G_STRICT_FMUL\0"
  /* 1960 */ "G_VECREDUCE_MUL\0"
  /* 1976 */ "G_MUL\0"
  /* 1982 */ "G_FREM\0"
  /* 1989 */ "G_STRICT_FREM\0"
  /* 2003 */ "G_SREM\0"
  /* 2010 */ "G_UREM\0"
  /* 2017 */ "INLINEASM\0"
  /* 2027 */ "G_FMINIMUM\0"
  /* 2038 */ "G_FMAXIMUM\0"
  /* 2049 */ "G_FMINNUM\0"
  /* 2059 */ "G_FMAXNUM\0"
  /* 2069 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 2091 */ "G_FCOPYSIGN\0"
  /* 2103 */ "G_VECREDUCE_FMIN\0"
  /* 2120 */ "G_VECREDUCE_SMIN\0"
  /* 2137 */ "G_SMIN\0"
  /* 2144 */ "G_VECREDUCE_UMIN\0"
  /* 2161 */ "G_UMIN\0"
  /* 2168 */ "G_ATOMICRMW_UMIN\0"
  /* 2185 */ "G_ATOMICRMW_MIN\0"
  /* 2201 */ "G_FSIN\0"
  /* 2208 */ "CFI_INSTRUCTION\0"
  /* 2224 */ "EH_RETURN\0"
  /* 2234 */ "ADJCALLSTACKDOWN\0"
  /* 2251 */ "G_SSUBO\0"
  /* 2259 */ "G_USUBO\0"
  /* 2267 */ "G_SADDO\0"
  /* 2275 */ "G_UADDO\0"
  /* 2283 */ "G_SMULO\0"
  /* 2291 */ "G_UMULO\0"
  /* 2299 */ "STACKMAP\0"
  /* 2308 */ "G_BSWAP\0"
  /* 2316 */ "G_SITOFP\0"
  /* 2325 */ "G_UITOFP\0"
  /* 2334 */ "G_FCMP\0"
  /* 2341 */ "G_ICMP\0"
  /* 2348 */ "G_CTPOP\0"
  /* 2356 */ "PATCHABLE_OP\0"
  /* 2369 */ "FAULTING_OP\0"
  /* 2381 */ "ADJCALLSTACKUP\0"
  /* 2396 */ "PREALLOCATED_SETUP\0"
  /* 2415 */ "G_FEXP\0"
  /* 2422 */ "LDSPC_0R\0"
  /* 2431 */ "STSPC_0R\0"
  /* 2440 */ "LDSED_0R\0"
  /* 2449 */ "STSED_0R\0"
  /* 2458 */ "GETED_0R\0"
  /* 2467 */ "GETID_0R\0"
  /* 2476 */ "CLRE_0R\0"
  /* 2484 */ "DCALL_0R\0"
  /* 2493 */ "GETKEP_0R\0"
  /* 2503 */ "SETKEP_0R\0"
  /* 2513 */ "GETKSP_0R\0"
  /* 2523 */ "DENTSP_0R\0"
  /* 2533 */ "DRESTSP_0R\0"
  /* 2544 */ "LDSSR_0R\0"
  /* 2553 */ "STSSR_0R\0"
  /* 2562 */ "LDET_0R\0"
  /* 2570 */ "FREET_0R\0"
  /* 2579 */ "DRET_0R\0"
  /* 2587 */ "KRET_0R\0"
  /* 2595 */ "GETET_0R\0"
  /* 2604 */ "STET_0R\0"
  /* 2612 */ "WAITEU_0R\0"
  /* 2622 */ "WAITEF_1R\0"
  /* 2632 */ "WAITET_1R\0"
  /* 2642 */ "CLRPT_1R\0"
  /* 2651 */ "TSTART_1R\0"
  /* 2661 */ "G_BR\0"
  /* 2666 */ "INLINEASM_BR\0"
  /* 2679 */ "G_BLOCK_ADDR\0"
  /* 2692 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 2717 */ "G_READCYCLECOUNTER\0"
  /* 2736 */ "G_READ_REGISTER\0"
  /* 2752 */ "G_WRITE_REGISTER\0"
  /* 2769 */ "G_ASHR\0"
  /* 2776 */ "G_FSHR\0"
  /* 2783 */ "G_LSHR\0"
  /* 2790 */ "G_FFLOOR\0"
  /* 2799 */ "G_BUILD_VECTOR\0"
  /* 2814 */ "G_SHUFFLE_VECTOR\0"
  /* 2831 */ "G_VECREDUCE_XOR\0"
  /* 2847 */ "G_XOR\0"
  /* 2853 */ "G_ATOMICRMW_XOR\0"
  /* 2869 */ "G_VECREDUCE_OR\0"
  /* 2884 */ "G_OR\0"
  /* 2889 */ "G_ATOMICRMW_OR\0"
  /* 2904 */ "G_INTTOPTR\0"
  /* 2915 */ "G_FABS\0"
  /* 2922 */ "G_ABS\0"
  /* 2928 */ "G_UNMERGE_VALUES\0"
  /* 2945 */ "G_MERGE_VALUES\0"
  /* 2960 */ "G_FCOS\0"
  /* 2967 */ "G_CONCAT_VECTORS\0"
  /* 2984 */ "COPY_TO_REGCLASS\0"
  /* 3001 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 3031 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 3058 */ "G_SSUBSAT\0"
  /* 3068 */ "G_USUBSAT\0"
  /* 3078 */ "G_SADDSAT\0"
  /* 3088 */ "G_UADDSAT\0"
  /* 3098 */ "G_SSHLSAT\0"
  /* 3108 */ "G_USHLSAT\0"
  /* 3118 */ "G_SMULFIXSAT\0"
  /* 3131 */ "G_UMULFIXSAT\0"
  /* 3144 */ "G_SDIVFIXSAT\0"
  /* 3157 */ "G_UDIVFIXSAT\0"
  /* 3170 */ "G_EXTRACT\0"
  /* 3180 */ "G_SELECT\0"
  /* 3189 */ "G_BRINDIRECT\0"
  /* 3202 */ "PATCHABLE_RET\0"
  /* 3216 */ "FRAME_TO_ARGS_OFFSET\0"
  /* 3237 */ "G_MEMSET\0"
  /* 3246 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 3270 */ "G_BRJT\0"
  /* 3277 */ "BR_JT\0"
  /* 3283 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 3304 */ "G_INSERT_VECTOR_ELT\0"
  /* 3324 */ "G_FCONSTANT\0"
  /* 3336 */ "G_CONSTANT\0"
  /* 3347 */ "STATEPOINT\0"
  /* 3358 */ "PATCHPOINT\0"
  /* 3369 */ "G_PTRTOINT\0"
  /* 3380 */ "G_FRINT\0"
  /* 3388 */ "G_INTRINSIC_LRINT\0"
  /* 3406 */ "G_FNEARBYINT\0"
  /* 3419 */ "NOT\0"
  /* 3423 */ "G_VASTART\0"
  /* 3433 */ "LIFETIME_START\0"
  /* 3448 */ "G_INSERT\0"
  /* 3457 */ "G_FSQRT\0"
  /* 3465 */ "G_STRICT_FSQRT\0"
  /* 3480 */ "G_BITCAST\0"
  /* 3490 */ "G_ADDRSPACE_CAST\0"
  /* 3507 */ "G_FPEXT\0"
  /* 3515 */ "G_SEXT\0"
  /* 3522 */ "G_ANYEXT\0"
  /* 3531 */ "G_ZEXT\0"
  /* 3538 */ "G_FDIV\0"
  /* 3545 */ "G_STRICT_FDIV\0"
  /* 3559 */ "G_SDIV\0"
  /* 3566 */ "G_UDIV\0"
  /* 3573 */ "G_FPOW\0"
  /* 3580 */ "G_VECREDUCE_FMAX\0"
  /* 3597 */ "G_VECREDUCE_SMAX\0"
  /* 3614 */ "G_SMAX\0"
  /* 3621 */ "G_VECREDUCE_UMAX\0"
  /* 3638 */ "G_UMAX\0"
  /* 3645 */ "G_ATOMICRMW_UMAX\0"
  /* 3662 */ "G_ATOMICRMW_MAX\0"
  /* 3678 */ "G_FRAME_INDEX\0"
  /* 3692 */ "G_SMULFIX\0"
  /* 3702 */ "G_UMULFIX\0"
  /* 3712 */ "G_SDIVFIX\0"
  /* 3722 */ "G_UDIVFIX\0"
  /* 3732 */ "G_MEMCPY\0"
  /* 3741 */ "COPY\0"
  /* 3746 */ "G_CTLZ\0"
  /* 3753 */ "G_CTTZ\0"
  /* 3760 */ "LDAPF_lu10_ba\0"
  /* 3774 */ "SSYNC_0r\0"
  /* 3783 */ "BLA_1r\0"
  /* 3790 */ "MSYNC_1r\0"
  /* 3799 */ "ECALLF_1r\0"
  /* 3809 */ "DGETREG_1r\0"
  /* 3820 */ "KCALL_1r\0"
  /* 3829 */ "MJOIN_1r\0"
  /* 3838 */ "SETCP_1r\0"
  /* 3847 */ "SETDP_1r\0"
  /* 3856 */ "SETSP_1r\0"
  /* 3865 */ "SYNCR_1r\0"
  /* 3874 */ "FREER_1r\0"
  /* 3883 */ "ECALLT_1r\0"
  /* 3893 */ "BAU_1r\0"
  /* 3900 */ "EDU_1r\0"
  /* 3907 */ "EEU_1r\0"
  /* 3914 */ "BRU_1r\0"
  /* 3921 */ "SETEV_1r\0"
  /* 3930 */ "SETV_1r\0"
  /* 3938 */ "INITPC_2r\0"
  /* 3948 */ "SETPSC_2r\0"
  /* 3958 */ "SETD_2r\0"
  /* 3966 */ "EEF_2r\0"
  /* 3973 */ "PEEK_2r\0"
  /* 3981 */ "MKMSK_2r\0"
  /* 3990 */ "ENDIN_2r\0"
  /* 3999 */ "INITCP_2r\0"
  /* 4009 */ "INITDP_2r\0"
  /* 4019 */ "INITSP_2r\0"
  /* 4029 */ "INSHR_2r\0"
  /* 4038 */ "OUTSHR_2r\0"
  /* 4048 */ "TSETMR_2r\0"
  /* 4058 */ "GETTS_2r\0"
  /* 4067 */ "CHKCT_2r\0"
  /* 4076 */ "INCT_2r\0"
  /* 4084 */ "TESTCT_2r\0"
  /* 4094 */ "OUTCT_2r\0"
  /* 4103 */ "TESTWCT_2r\0"
  /* 4114 */ "EET_2r\0"
  /* 4121 */ "INT_2r\0"
  /* 4128 */ "ANDNOT_2r\0"
  /* 4138 */ "SETPT_2r\0"
  /* 4147 */ "GETST_2r\0"
  /* 4156 */ "OUTT_2r\0"
  /* 4164 */ "OUT_2r\0"
  /* 4171 */ "SEXT_2r\0"
  /* 4179 */ "ZEXT_2r\0"
  /* 4187 */ "SETC_l2r\0"
  /* 4196 */ "GETD_l2r\0"
  /* 4205 */ "SETCLK_l2r\0"
  /* 4216 */ "TESTLCL_l2r\0"
  /* 4228 */ "GETN_l2r\0"
  /* 4237 */ "SETN_l2r\0"
  /* 4246 */ "INITLR_l2r\0"
  /* 4257 */ "GETPS_l2r\0"
  /* 4267 */ "SETPS_l2r\0"
  /* 4277 */ "BYTEREV_l2r\0"
  /* 4289 */ "BITREV_l2r\0"
  /* 4300 */ "SETTW_l2r\0"
  /* 4310 */ "SETRDY_l2r\0"
  /* 4321 */ "CLZ_l2r\0"
  /* 4329 */ "SUB_3r\0"
  /* 4336 */ "ADD_3r\0"
  /* 4343 */ "AND_3r\0"
  /* 4350 */ "SHL_3r\0"
  /* 4357 */ "EQ_3r\0"
  /* 4363 */ "SHR_3r\0"
  /* 4370 */ "OR_3r\0"
  /* 4376 */ "TSETR_3r\0"
  /* 4385 */ "LD16S_3r\0"
  /* 4394 */ "LSS_3r\0"
  /* 4401 */ "LD8U_3r\0"
  /* 4409 */ "LSU_3r\0"
  /* 4416 */ "LDW_3r\0"
  /* 4423 */ "ST16_l3r\0"
  /* 4432 */ "ST8_l3r\0"
  /* 4440 */ "LDA16B_l3r\0"
  /* 4451 */ "LDAWB_l3r\0"
  /* 4461 */ "CRC_l3r\0"
  /* 4469 */ "LDA16F_l3r\0"
  /* 4480 */ "LDAWF_l3r\0"
  /* 4490 */ "MUL_l3r\0"
  /* 4498 */ "ASHR_l3r\0"
  /* 4507 */ "XOR_l3r\0"
  /* 4515 */ "REMS_l3r\0"
  /* 4524 */ "DIVS_l3r\0"
  /* 4533 */ "REMU_l3r\0"
  /* 4542 */ "DIVU_l3r\0"
  /* 4551 */ "STW_l3r\0"
  /* 4559 */ "CRC8_l4r\0"
  /* 4568 */ "MACCS_l4r\0"
  /* 4578 */ "MACCU_l4r\0"
  /* 4588 */ "LSUB_l5r\0"
  /* 4597 */ "LADD_l5r\0"
  /* 4606 */ "LDIVU_l5r\0"
  /* 4616 */ "LMUL_l6r\0"
  /* 4625 */ "Int_MemBarrier\0"
  /* 4640 */ "SUB_2rus\0"
  /* 4649 */ "ADD_2rus\0"
  /* 4658 */ "SHL_2rus\0"
  /* 4667 */ "EQ_2rus\0"
  /* 4675 */ "SHR_2rus\0"
  /* 4684 */ "LDW_2rus\0"
  /* 4693 */ "STW_2rus\0"
  /* 4702 */ "LDAWB_l2rus\0"
  /* 4714 */ "LDAWF_l2rus\0"
  /* 4726 */ "ASHR_l2rus\0"
  /* 4737 */ "INPW_l2rus\0"
  /* 4748 */ "OUTPW_l2rus\0"
  /* 4760 */ "MKMSK_rus\0"
  /* 4770 */ "GETR_rus\0"
  /* 4779 */ "CHKCT_rus\0"
  /* 4789 */ "OUTCT_rus\0"
  /* 4799 */ "SEXT_rus\0"
  /* 4808 */ "ZEXT_rus\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned XCoreInstrNameIndices[] = {
    1690U, 2017U, 2666U, 2208U, 1749U, 1730U, 1758U, 1896U, 
    1531U, 1546U, 1497U, 1573U, 2984U, 1399U, 1510U, 1739U, 
    1270U, 3741U, 1342U, 3433U, 1176U, 1233U, 2299U, 1884U, 
    3358U, 1216U, 2396U, 1636U, 3347U, 1349U, 2369U, 2356U, 
    2692U, 3202U, 3246U, 1816U, 1863U, 1836U, 1775U, 1089U, 
    790U, 1976U, 3559U, 3566U, 2003U, 2010U, 1154U, 2884U, 
    2847U, 1495U, 1688U, 3678U, 1409U, 3170U, 2928U, 3448U, 
    2945U, 2799U, 870U, 2967U, 3369U, 2904U, 3480U, 1434U, 
    844U, 1198U, 3388U, 2069U, 2717U, 990U, 934U, 964U, 
    975U, 915U, 945U, 1378U, 1362U, 3001U, 1587U, 1604U, 
    1105U, 796U, 1160U, 1121U, 2889U, 2853U, 3662U, 2185U, 
    3645U, 2168U, 1056U, 773U, 1262U, 1189U, 3189U, 822U, 
    3031U, 3522U, 862U, 3336U, 3324U, 3423U, 1628U, 3515U, 
    1560U, 3531U, 1802U, 2783U, 2769U, 1795U, 2776U, 2341U, 
    2334U, 3180U, 2275U, 1291U, 2259U, 1254U, 2267U, 1283U, 
    2251U, 1246U, 2291U, 2283U, 1661U, 1653U, 3088U, 3078U, 
    3068U, 3058U, 3108U, 3098U, 3692U, 3702U, 3118U, 3131U, 
    3712U, 3722U, 3144U, 3157U, 1014U, 752U, 1918U, 733U, 
    908U, 3538U, 1982U, 3573U, 1712U, 2415U, 147U, 1621U, 
    139U, 0U, 1524U, 3507U, 834U, 1694U, 1703U, 2316U, 
    2325U, 2915U, 2091U, 1443U, 2049U, 2059U, 1299U, 1314U, 
    2027U, 2038U, 1095U, 1720U, 2137U, 3614U, 2161U, 3638U, 
    2922U, 2661U, 3270U, 3304U, 3283U, 2814U, 3753U, 1477U, 
    3746U, 1459U, 2348U, 2308U, 1386U, 1808U, 2960U, 2201U, 
    3457U, 2790U, 3380U, 3406U, 3490U, 2679U, 1329U, 891U, 
    1042U, 759U, 1946U, 3545U, 1989U, 739U, 3465U, 2736U, 
    2752U, 3732U, 1424U, 3237U, 1021U, 1925U, 997U, 1901U, 
    3580U, 2103U, 1073U, 1960U, 1138U, 2869U, 2831U, 3597U, 
    2120U, 3621U, 2144U, 2234U, 2381U, 3277U, 131U, 2224U, 
    3216U, 4625U, 1669U, 1676U, 812U, 1682U, 4649U, 4336U, 
    4128U, 4343U, 4726U, 4498U, 3893U, 4289U, 109U, 47U, 
    409U, 249U, 3783U, 78U, 19U, 99U, 38U, 614U, 
    487U, 713U, 577U, 418U, 257U, 624U, 496U, 723U, 
    586U, 427U, 265U, 3914U, 4277U, 4067U, 4779U, 2476U, 
    2642U, 436U, 273U, 379U, 222U, 4321U, 4559U, 4461U, 
    2484U, 2523U, 3809U, 4524U, 4542U, 2533U, 2579U, 3799U, 
    3883U, 3900U, 3966U, 4114U, 3907U, 3990U, 347U, 193U, 
    4667U, 4357U, 326U, 174U, 369U, 213U, 3874U, 2570U, 
    4196U, 2458U, 2595U, 2467U, 2493U, 2513U, 4228U, 4257U, 
    4770U, 389U, 231U, 4147U, 4058U, 4076U, 3999U, 4009U, 
    4246U, 3938U, 4019U, 4737U, 4029U, 4121U, 3993U, 3820U, 
    305U, 155U, 346U, 192U, 357U, 202U, 2587U, 4597U, 
    4385U, 4401U, 4440U, 4469U, 67U, 9U, 88U, 3760U, 
    28U, 4702U, 4451U, 315U, 164U, 645U, 515U, 4714U, 
    4480U, 679U, 546U, 595U, 470U, 2562U, 4606U, 2440U, 
    2422U, 2544U, 634U, 120U, 505U, 57U, 657U, 526U, 
    691U, 557U, 4684U, 4416U, 4616U, 4394U, 4588U, 4409U, 
    4568U, 4578U, 3829U, 3981U, 4760U, 3790U, 4490U, 1527U, 
    3419U, 4370U, 4094U, 4789U, 4748U, 4038U, 4156U, 4164U, 
    3973U, 4515U, 4533U, 336U, 183U, 4205U, 3838U, 4187U, 
    604U, 478U, 3847U, 3958U, 3921U, 2503U, 4237U, 3948U, 
    4267U, 4138U, 4310U, 3856U, 453U, 289U, 399U, 240U, 
    4300U, 3930U, 4171U, 4799U, 4658U, 4350U, 4675U, 4363U, 
    3774U, 4423U, 4432U, 2604U, 2449U, 2431U, 2553U, 668U, 
    536U, 702U, 567U, 4693U, 4551U, 4640U, 4329U, 3865U, 
    4084U, 4216U, 4103U, 4048U, 4376U, 2651U, 2622U, 2632U, 
    2612U, 4507U, 4179U, 4808U, 
};

static inline void InitXCoreMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, nullptr, nullptr, 452);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct XCoreGenInstrInfo : public TargetInstrInfo {
  explicit XCoreGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~XCoreGenInstrInfo() override = default;

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
extern const MCInstrDesc XCoreInsts[];
extern const unsigned XCoreInstrNameIndices[];
extern const char XCoreInstrNameData[];
XCoreGenInstrInfo::XCoreGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, nullptr, nullptr, 452);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace XCore {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace XCore
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace XCore {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace XCore
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace XCore {
namespace OpTypes {
enum OperandType {
  InlineJT = 0,
  InlineJT32 = 1,
  MEMii = 2,
  brtarget = 3,
  brtarget_neg = 4,
  f32imm = 5,
  f64imm = 6,
  i16imm = 7,
  i1imm = 8,
  i32imm = 9,
  i64imm = 10,
  i8imm = 11,
  pcrel_imm = 12,
  pcrel_imm_neg = 13,
  ptype0 = 14,
  ptype1 = 15,
  ptype2 = 16,
  ptype3 = 17,
  ptype4 = 18,
  ptype5 = 19,
  type0 = 20,
  type1 = 21,
  type2 = 22,
  type3 = 23,
  type4 = 24,
  type5 = 25,
  untyped_imm_0 = 26,
  GRRegs = 27,
  RRegs = 28,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace XCore {
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
    580,
    582,
    583,
    583,
    586,
    589,
    593,
    596,
    599,
    602,
    605,
    608,
    611,
    614,
    615,
    617,
    618,
    619,
    620,
    621,
    622,
    623,
    624,
    625,
    626,
    628,
    630,
    632,
    634,
    635,
    636,
    638,
    640,
    642,
    644,
    645,
    646,
    647,
    649,
    651,
    653,
    653,
    654,
    655,
    656,
    657,
    658,
    660,
    665,
    669,
    669,
    669,
    670,
    673,
    676,
    676,
    676,
    677,
    678,
    679,
    681,
    683,
    684,
    686,
    687,
    688,
    691,
    694,
    695,
    696,
    697,
    698,
    699,
    699,
    701,
    701,
    701,
    701,
    701,
    701,
    703,
    705,
    707,
    708,
    709,
    711,
    713,
    715,
    717,
    719,
    721,
    723,
    725,
    728,
    731,
    733,
    735,
    736,
    737,
    738,
    739,
    740,
    741,
    742,
    742,
    747,
    750,
    753,
    756,
    759,
    760,
    761,
    762,
    763,
    764,
    767,
    770,
    771,
    772,
    774,
    776,
    779,
    782,
    784,
    786,
    788,
    790,
    790,
    795,
    795,
    795,
    795,
    797,
    798,
    800,
    801,
    803,
    805,
    807,
    809,
    812,
    815,
    821,
    824,
    829,
    832,
    838,
    844,
    845,
    847,
    849,
    850,
    853,
    855,
    857,
    860,
    862,
    864,
    867,
    870,
    872,
    874,
    876,
    879,
    882,
    883,
    884,
    886,
    887,
    889,
    891,
    893,
    894,
    896,
    897,
    897,
    899,
    901,
    903,
    905,
    907,
    908,
    909,
    910,
    911,
    912,
    914,
    915,
    918,
    921,
    924,
    927,
    930,
    933,
    933,
    936,
    939,
    939,
    939,
    939,
    939,
    941,
    943,
    945,
    947,
    950,
    953,
    956,
    959,
    960,
    962,
    964,
    966,
    968,
    971,
    972,
    973,
    974,
    974,
    977,
    980,
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
    OpTypes::InlineJT, OpTypes::GRRegs, 
    OpTypes::InlineJT32, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    /**/
    OpTypes::GRRegs, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::GRRegs, 
    OpTypes::pcrel_imm_neg, 
    OpTypes::pcrel_imm_neg, 
    OpTypes::pcrel_imm, 
    OpTypes::pcrel_imm, 
    OpTypes::GRRegs, OpTypes::brtarget_neg, 
    OpTypes::GRRegs, OpTypes::brtarget_neg, 
    OpTypes::GRRegs, OpTypes::brtarget_neg, 
    OpTypes::GRRegs, OpTypes::brtarget_neg, 
    OpTypes::brtarget_neg, 
    OpTypes::brtarget_neg, 
    OpTypes::GRRegs, OpTypes::brtarget, 
    OpTypes::GRRegs, OpTypes::brtarget, 
    OpTypes::GRRegs, OpTypes::brtarget, 
    OpTypes::GRRegs, OpTypes::brtarget, 
    OpTypes::brtarget, 
    OpTypes::brtarget, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::i32imm, 
    /**/
    OpTypes::GRRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    /**/
    /**/
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    /**/
    /**/
    OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::GRRegs, 
    /**/
    OpTypes::GRRegs, OpTypes::GRRegs, 
    /**/
    /**/
    /**/
    /**/
    /**/
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    /**/
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::pcrel_imm_neg, 
    OpTypes::pcrel_imm_neg, 
    OpTypes::pcrel_imm, 
    OpTypes::pcrel_imm, 
    OpTypes::pcrel_imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    /**/
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    /**/
    /**/
    /**/
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    /**/
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    /**/
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    /**/
    /**/
    /**/
    /**/
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::RRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::i32imm, OpTypes::GRRegs, 
    OpTypes::i32imm, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    OpTypes::GRRegs, 
    /**/
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::GRRegs, 
    OpTypes::GRRegs, OpTypes::GRRegs, OpTypes::i32imm, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace XCore
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

