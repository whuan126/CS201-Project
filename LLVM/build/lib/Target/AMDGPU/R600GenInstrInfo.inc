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

namespace R600 {
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
    BRANCH	= 227,
    BRANCH_COND_f32	= 228,
    BRANCH_COND_i32	= 229,
    BREAK	= 230,
    BREAKC_f32	= 231,
    BREAKC_i32	= 232,
    BREAK_LOGICALNZ_f32	= 233,
    BREAK_LOGICALNZ_i32	= 234,
    BREAK_LOGICALZ_f32	= 235,
    BREAK_LOGICALZ_i32	= 236,
    CONST_COPY	= 237,
    CONTINUE	= 238,
    CONTINUEC_f32	= 239,
    CONTINUEC_i32	= 240,
    CONTINUE_LOGICALNZ_f32	= 241,
    CONTINUE_LOGICALNZ_i32	= 242,
    CONTINUE_LOGICALZ_f32	= 243,
    CONTINUE_LOGICALZ_i32	= 244,
    CUBE_eg_pseudo	= 245,
    CUBE_r600_pseudo	= 246,
    DEFAULT	= 247,
    DOT_4	= 248,
    DUMMY_CHAIN	= 249,
    ELSE	= 250,
    END	= 251,
    ENDFUNC	= 252,
    ENDIF	= 253,
    ENDLOOP	= 254,
    ENDMAIN	= 255,
    ENDSWITCH	= 256,
    FABS_R600	= 257,
    FNEG_R600	= 258,
    FUNC	= 259,
    IFC_f32	= 260,
    IFC_i32	= 261,
    IF_LOGICALNZ_f32	= 262,
    IF_LOGICALNZ_i32	= 263,
    IF_LOGICALZ_f32	= 264,
    IF_LOGICALZ_i32	= 265,
    IF_PREDICATE_SET	= 266,
    JUMP	= 267,
    JUMP_COND	= 268,
    MASK_WRITE	= 269,
    MOV_IMM_F32	= 270,
    MOV_IMM_GLOBAL_ADDR	= 271,
    MOV_IMM_I32	= 272,
    PRED_X	= 273,
    R600_EXTRACT_ELT_V2	= 274,
    R600_EXTRACT_ELT_V4	= 275,
    R600_INSERT_ELT_V2	= 276,
    R600_INSERT_ELT_V4	= 277,
    R600_RegisterLoad	= 278,
    R600_RegisterStore	= 279,
    RETDYN	= 280,
    RETURN	= 281,
    TXD	= 282,
    TXD_SHADOW	= 283,
    WHILELOOP	= 284,
    ADD	= 285,
    ADDC_UINT	= 286,
    ADD_INT	= 287,
    ALU_CLAUSE	= 288,
    AND_INT	= 289,
    ASHR_eg	= 290,
    ASHR_r600	= 291,
    BCNT_INT	= 292,
    BFE_INT_eg	= 293,
    BFE_UINT_eg	= 294,
    BFI_INT_eg	= 295,
    BFM_INT_eg	= 296,
    BIT_ALIGN_INT_eg	= 297,
    CEIL	= 298,
    CF_ALU	= 299,
    CF_ALU_BREAK	= 300,
    CF_ALU_CONTINUE	= 301,
    CF_ALU_ELSE_AFTER	= 302,
    CF_ALU_POP_AFTER	= 303,
    CF_ALU_PUSH_BEFORE	= 304,
    CF_CALL_FS_EG	= 305,
    CF_CALL_FS_R600	= 306,
    CF_CONTINUE_EG	= 307,
    CF_CONTINUE_R600	= 308,
    CF_ELSE_EG	= 309,
    CF_ELSE_R600	= 310,
    CF_END_CM	= 311,
    CF_END_EG	= 312,
    CF_END_R600	= 313,
    CF_JUMP_EG	= 314,
    CF_JUMP_R600	= 315,
    CF_PUSH_EG	= 316,
    CF_PUSH_ELSE_R600	= 317,
    CF_TC_EG	= 318,
    CF_TC_R600	= 319,
    CF_VC_EG	= 320,
    CF_VC_R600	= 321,
    CNDE_INT	= 322,
    CNDE_eg	= 323,
    CNDE_r600	= 324,
    CNDGE_INT	= 325,
    CNDGE_eg	= 326,
    CNDGE_r600	= 327,
    CNDGT_INT	= 328,
    CNDGT_eg	= 329,
    CNDGT_r600	= 330,
    COS_cm	= 331,
    COS_eg	= 332,
    COS_r600	= 333,
    COS_r700	= 334,
    CUBE_eg_real	= 335,
    CUBE_r600_real	= 336,
    DOT4_eg	= 337,
    DOT4_r600	= 338,
    EG_ExportBuf	= 339,
    EG_ExportSwz	= 340,
    END_LOOP_EG	= 341,
    END_LOOP_R600	= 342,
    EXP_IEEE_cm	= 343,
    EXP_IEEE_eg	= 344,
    EXP_IEEE_r600	= 345,
    FETCH_CLAUSE	= 346,
    FFBH_UINT	= 347,
    FFBL_INT	= 348,
    FLOOR	= 349,
    FLT16_TO_FLT32	= 350,
    FLT32_TO_FLT16	= 351,
    FLT_TO_INT_eg	= 352,
    FLT_TO_INT_r600	= 353,
    FLT_TO_UINT_eg	= 354,
    FLT_TO_UINT_r600	= 355,
    FMA_eg	= 356,
    FRACT	= 357,
    GROUP_BARRIER	= 358,
    INTERP_LOAD_P0	= 359,
    INTERP_PAIR_XY	= 360,
    INTERP_PAIR_ZW	= 361,
    INTERP_VEC_LOAD	= 362,
    INTERP_XY	= 363,
    INTERP_ZW	= 364,
    INT_TO_FLT_eg	= 365,
    INT_TO_FLT_r600	= 366,
    KILLGT	= 367,
    LDS_ADD	= 368,
    LDS_ADD_RET	= 369,
    LDS_AND	= 370,
    LDS_AND_RET	= 371,
    LDS_BYTE_READ_RET	= 372,
    LDS_BYTE_WRITE	= 373,
    LDS_CMPST	= 374,
    LDS_CMPST_RET	= 375,
    LDS_MAX_INT	= 376,
    LDS_MAX_INT_RET	= 377,
    LDS_MAX_UINT	= 378,
    LDS_MAX_UINT_RET	= 379,
    LDS_MIN_INT	= 380,
    LDS_MIN_INT_RET	= 381,
    LDS_MIN_UINT	= 382,
    LDS_MIN_UINT_RET	= 383,
    LDS_OR	= 384,
    LDS_OR_RET	= 385,
    LDS_READ_RET	= 386,
    LDS_SHORT_READ_RET	= 387,
    LDS_SHORT_WRITE	= 388,
    LDS_SUB	= 389,
    LDS_SUB_RET	= 390,
    LDS_UBYTE_READ_RET	= 391,
    LDS_USHORT_READ_RET	= 392,
    LDS_WRITE	= 393,
    LDS_WRXCHG	= 394,
    LDS_WRXCHG_RET	= 395,
    LDS_XOR	= 396,
    LDS_XOR_RET	= 397,
    LITERALS	= 398,
    LOG_CLAMPED_eg	= 399,
    LOG_CLAMPED_r600	= 400,
    LOG_IEEE_cm	= 401,
    LOG_IEEE_eg	= 402,
    LOG_IEEE_r600	= 403,
    LOOP_BREAK_EG	= 404,
    LOOP_BREAK_R600	= 405,
    LSHL_eg	= 406,
    LSHL_r600	= 407,
    LSHR_eg	= 408,
    LSHR_r600	= 409,
    MAX	= 410,
    MAX_DX10	= 411,
    MAX_INT	= 412,
    MAX_UINT	= 413,
    MIN	= 414,
    MIN_DX10	= 415,
    MIN_INT	= 416,
    MIN_UINT	= 417,
    MOV	= 418,
    MOVA_INT_eg	= 419,
    MUL	= 420,
    MULADD_IEEE_eg	= 421,
    MULADD_IEEE_r600	= 422,
    MULADD_INT24_cm	= 423,
    MULADD_UINT24_eg	= 424,
    MULADD_eg	= 425,
    MULADD_r600	= 426,
    MULHI_INT_cm	= 427,
    MULHI_INT_cm24	= 428,
    MULHI_INT_eg	= 429,
    MULHI_INT_r600	= 430,
    MULHI_UINT24_eg	= 431,
    MULHI_UINT_cm	= 432,
    MULHI_UINT_cm24	= 433,
    MULHI_UINT_eg	= 434,
    MULHI_UINT_r600	= 435,
    MULLO_INT_cm	= 436,
    MULLO_INT_eg	= 437,
    MULLO_INT_r600	= 438,
    MULLO_UINT_cm	= 439,
    MULLO_UINT_eg	= 440,
    MULLO_UINT_r600	= 441,
    MUL_IEEE	= 442,
    MUL_INT24_cm	= 443,
    MUL_LIT_eg	= 444,
    MUL_LIT_r600	= 445,
    MUL_UINT24_eg	= 446,
    NOT_INT	= 447,
    OR_INT	= 448,
    PAD	= 449,
    POP_EG	= 450,
    POP_R600	= 451,
    PRED_SETE	= 452,
    PRED_SETE_INT	= 453,
    PRED_SETGE	= 454,
    PRED_SETGE_INT	= 455,
    PRED_SETGT	= 456,
    PRED_SETGT_INT	= 457,
    PRED_SETNE	= 458,
    PRED_SETNE_INT	= 459,
    R600_ExportBuf	= 460,
    R600_ExportSwz	= 461,
    RAT_ATOMIC_ADD_NORET	= 462,
    RAT_ATOMIC_ADD_RTN	= 463,
    RAT_ATOMIC_AND_NORET	= 464,
    RAT_ATOMIC_AND_RTN	= 465,
    RAT_ATOMIC_CMPXCHG_INT_NORET	= 466,
    RAT_ATOMIC_CMPXCHG_INT_RTN	= 467,
    RAT_ATOMIC_DEC_UINT_NORET	= 468,
    RAT_ATOMIC_DEC_UINT_RTN	= 469,
    RAT_ATOMIC_INC_UINT_NORET	= 470,
    RAT_ATOMIC_INC_UINT_RTN	= 471,
    RAT_ATOMIC_MAX_INT_NORET	= 472,
    RAT_ATOMIC_MAX_INT_RTN	= 473,
    RAT_ATOMIC_MAX_UINT_NORET	= 474,
    RAT_ATOMIC_MAX_UINT_RTN	= 475,
    RAT_ATOMIC_MIN_INT_NORET	= 476,
    RAT_ATOMIC_MIN_INT_RTN	= 477,
    RAT_ATOMIC_MIN_UINT_NORET	= 478,
    RAT_ATOMIC_MIN_UINT_RTN	= 479,
    RAT_ATOMIC_OR_NORET	= 480,
    RAT_ATOMIC_OR_RTN	= 481,
    RAT_ATOMIC_RSUB_NORET	= 482,
    RAT_ATOMIC_RSUB_RTN	= 483,
    RAT_ATOMIC_SUB_NORET	= 484,
    RAT_ATOMIC_SUB_RTN	= 485,
    RAT_ATOMIC_XCHG_INT_NORET	= 486,
    RAT_ATOMIC_XCHG_INT_RTN	= 487,
    RAT_ATOMIC_XOR_NORET	= 488,
    RAT_ATOMIC_XOR_RTN	= 489,
    RAT_MSKOR	= 490,
    RAT_STORE_DWORD128	= 491,
    RAT_STORE_DWORD32	= 492,
    RAT_STORE_DWORD64	= 493,
    RAT_STORE_TYPED_cm	= 494,
    RAT_STORE_TYPED_eg	= 495,
    RAT_WRITE_CACHELESS_128_eg	= 496,
    RAT_WRITE_CACHELESS_32_eg	= 497,
    RAT_WRITE_CACHELESS_64_eg	= 498,
    RECIPSQRT_CLAMPED_cm	= 499,
    RECIPSQRT_CLAMPED_eg	= 500,
    RECIPSQRT_CLAMPED_r600	= 501,
    RECIPSQRT_IEEE_cm	= 502,
    RECIPSQRT_IEEE_eg	= 503,
    RECIPSQRT_IEEE_r600	= 504,
    RECIP_CLAMPED_cm	= 505,
    RECIP_CLAMPED_eg	= 506,
    RECIP_CLAMPED_r600	= 507,
    RECIP_IEEE_cm	= 508,
    RECIP_IEEE_eg	= 509,
    RECIP_IEEE_r600	= 510,
    RECIP_UINT_eg	= 511,
    RECIP_UINT_r600	= 512,
    RNDNE	= 513,
    SETE	= 514,
    SETE_DX10	= 515,
    SETE_INT	= 516,
    SETGE_DX10	= 517,
    SETGE_INT	= 518,
    SETGE_UINT	= 519,
    SETGT_DX10	= 520,
    SETGT_INT	= 521,
    SETGT_UINT	= 522,
    SETNE_DX10	= 523,
    SETNE_INT	= 524,
    SGE	= 525,
    SGT	= 526,
    SIN_cm	= 527,
    SIN_eg	= 528,
    SIN_r600	= 529,
    SIN_r700	= 530,
    SNE	= 531,
    SUBB_UINT	= 532,
    SUB_INT	= 533,
    TEX_GET_GRADIENTS_H	= 534,
    TEX_GET_GRADIENTS_V	= 535,
    TEX_GET_TEXTURE_RESINFO	= 536,
    TEX_LD	= 537,
    TEX_LDPTR	= 538,
    TEX_SAMPLE	= 539,
    TEX_SAMPLE_C	= 540,
    TEX_SAMPLE_C_G	= 541,
    TEX_SAMPLE_C_L	= 542,
    TEX_SAMPLE_C_LB	= 543,
    TEX_SAMPLE_G	= 544,
    TEX_SAMPLE_L	= 545,
    TEX_SAMPLE_LB	= 546,
    TEX_SET_GRADIENTS_H	= 547,
    TEX_SET_GRADIENTS_V	= 548,
    TEX_VTX_CONSTBUF	= 549,
    TEX_VTX_TEXBUF	= 550,
    TRUNC	= 551,
    UINT_TO_FLT_eg	= 552,
    UINT_TO_FLT_r600	= 553,
    VTX_READ_128_cm	= 554,
    VTX_READ_128_eg	= 555,
    VTX_READ_16_cm	= 556,
    VTX_READ_16_eg	= 557,
    VTX_READ_32_cm	= 558,
    VTX_READ_32_eg	= 559,
    VTX_READ_64_cm	= 560,
    VTX_READ_64_eg	= 561,
    VTX_READ_8_cm	= 562,
    VTX_READ_8_eg	= 563,
    WHILE_LOOP_EG	= 564,
    WHILE_LOOP_R600	= 565,
    XOR_INT	= 566,
    INSTRUCTION_LIST_END = 567
  };

} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace R600 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    NullALU	= 1,
    VecALU	= 2,
    AnyALU	= 3,
    TransALU	= 4,
    XALU	= 5,
    SCHED_LIST_END = 6
  };
} // end namespace Sched
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {


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
static const MCOperandInfo OperandInfo43[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc R600Insts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5 },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6 },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #13 = DBG_VALUE
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #14 = DBG_INSTR_REF
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #15 = DBG_LABEL
  { 16,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #16 = REG_SEQUENCE
  { 17,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #17 = COPY
  { 18,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #18 = BUNDLE
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #19 = LIFETIME_START
  { 20,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #20 = LIFETIME_END
  { 21,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8 },  // Inst #21 = PSEUDO_PROBE
  { 22,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #22 = STACKMAP
  { 23,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #23 = FENTRY_CALL
  { 24,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #24 = PATCHPOINT
  { 25,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo11 },  // Inst #25 = LOAD_STACK_GUARD
  { 26,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #26 = PREALLOCATED_SETUP
  { 27,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12 },  // Inst #27 = PREALLOCATED_ARG
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #28 = STATEPOINT
  { 29,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13 },  // Inst #29 = LOCAL_ESCAPE
  { 30,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #30 = FAULTING_OP
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #31 = PATCHABLE_OP
  { 32,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #32 = PATCHABLE_FUNCTION_ENTER
  { 33,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #33 = PATCHABLE_RET
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #34 = PATCHABLE_FUNCTION_EXIT
  { 35,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #35 = PATCHABLE_TAIL_CALL
  { 36,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #36 = PATCHABLE_EVENT_CALL
  { 37,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #37 = PATCHABLE_TYPED_EVENT_CALL
  { 38,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #38 = ICALL_BRANCH_FUNNEL
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #39 = G_ADD
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #40 = G_SUB
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #41 = G_MUL
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #42 = G_SDIV
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #43 = G_UDIV
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #44 = G_SREM
  { 45,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #45 = G_UREM
  { 46,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #46 = G_AND
  { 47,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #47 = G_OR
  { 48,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #48 = G_XOR
  { 49,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #49 = G_IMPLICIT_DEF
  { 50,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #50 = G_PHI
  { 51,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #51 = G_FRAME_INDEX
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #52 = G_GLOBAL_VALUE
  { 53,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #53 = G_EXTRACT
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #54 = G_UNMERGE_VALUES
  { 55,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #55 = G_INSERT
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #56 = G_MERGE_VALUES
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #57 = G_BUILD_VECTOR
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #58 = G_BUILD_VECTOR_TRUNC
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #59 = G_CONCAT_VECTORS
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #60 = G_PTRTOINT
  { 61,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #61 = G_INTTOPTR
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #62 = G_BITCAST
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #63 = G_FREEZE
  { 64,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #64 = G_INTRINSIC_TRUNC
  { 65,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #65 = G_INTRINSIC_ROUND
  { 66,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #66 = G_INTRINSIC_LRINT
  { 67,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #67 = G_INTRINSIC_ROUNDEVEN
  { 68,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #68 = G_READCYCLECOUNTER
  { 69,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #69 = G_LOAD
  { 70,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #70 = G_SEXTLOAD
  { 71,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #71 = G_ZEXTLOAD
  { 72,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #72 = G_INDEXED_LOAD
  { 73,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #73 = G_INDEXED_SEXTLOAD
  { 74,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #74 = G_INDEXED_ZEXTLOAD
  { 75,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #75 = G_STORE
  { 76,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo24 },  // Inst #76 = G_INDEXED_STORE
  { 77,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #77 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 78,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #78 = G_ATOMIC_CMPXCHG
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #79 = G_ATOMICRMW_XCHG
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #80 = G_ATOMICRMW_ADD
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #81 = G_ATOMICRMW_SUB
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #82 = G_ATOMICRMW_AND
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #83 = G_ATOMICRMW_NAND
  { 84,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #84 = G_ATOMICRMW_OR
  { 85,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #85 = G_ATOMICRMW_XOR
  { 86,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #86 = G_ATOMICRMW_MAX
  { 87,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #87 = G_ATOMICRMW_MIN
  { 88,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #88 = G_ATOMICRMW_UMAX
  { 89,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #89 = G_ATOMICRMW_UMIN
  { 90,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #90 = G_ATOMICRMW_FADD
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #91 = G_ATOMICRMW_FSUB
  { 92,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #92 = G_FENCE
  { 93,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #93 = G_BRCOND
  { 94,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #94 = G_BRINDIRECT
  { 95,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #95 = G_INTRINSIC
  { 96,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #96 = G_INTRINSIC_W_SIDE_EFFECTS
  { 97,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #97 = G_ANYEXT
  { 98,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #98 = G_TRUNC
  { 99,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #99 = G_CONSTANT
  { 100,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #100 = G_FCONSTANT
  { 101,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #101 = G_VASTART
  { 102,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #102 = G_VAARG
  { 103,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #103 = G_SEXT
  { 104,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #104 = G_SEXT_INREG
  { 105,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #105 = G_ZEXT
  { 106,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #106 = G_SHL
  { 107,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #107 = G_LSHR
  { 108,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #108 = G_ASHR
  { 109,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #109 = G_FSHL
  { 110,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #110 = G_FSHR
  { 111,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #111 = G_ICMP
  { 112,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #112 = G_FCMP
  { 113,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #113 = G_SELECT
  { 114,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #114 = G_UADDO
  { 115,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #115 = G_UADDE
  { 116,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #116 = G_USUBO
  { 117,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #117 = G_USUBE
  { 118,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #118 = G_SADDO
  { 119,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #119 = G_SADDE
  { 120,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #120 = G_SSUBO
  { 121,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #121 = G_SSUBE
  { 122,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #122 = G_UMULO
  { 123,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #123 = G_SMULO
  { 124,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #124 = G_UMULH
  { 125,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #125 = G_SMULH
  { 126,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #126 = G_UADDSAT
  { 127,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #127 = G_SADDSAT
  { 128,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #128 = G_USUBSAT
  { 129,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #129 = G_SSUBSAT
  { 130,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #130 = G_USHLSAT
  { 131,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #131 = G_SSHLSAT
  { 132,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #132 = G_SMULFIX
  { 133,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #133 = G_UMULFIX
  { 134,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #134 = G_SMULFIXSAT
  { 135,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #135 = G_UMULFIXSAT
  { 136,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #136 = G_SDIVFIX
  { 137,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #137 = G_UDIVFIX
  { 138,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #138 = G_SDIVFIXSAT
  { 139,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #139 = G_UDIVFIXSAT
  { 140,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #140 = G_FADD
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #141 = G_FSUB
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #142 = G_FMUL
  { 143,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #143 = G_FMA
  { 144,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #144 = G_FMAD
  { 145,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #145 = G_FDIV
  { 146,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #146 = G_FREM
  { 147,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #147 = G_FPOW
  { 148,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #148 = G_FPOWI
  { 149,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #149 = G_FEXP
  { 150,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #150 = G_FEXP2
  { 151,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #151 = G_FLOG
  { 152,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #152 = G_FLOG2
  { 153,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #153 = G_FLOG10
  { 154,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #154 = G_FNEG
  { 155,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #155 = G_FPEXT
  { 156,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #156 = G_FPTRUNC
  { 157,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #157 = G_FPTOSI
  { 158,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #158 = G_FPTOUI
  { 159,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #159 = G_SITOFP
  { 160,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #160 = G_UITOFP
  { 161,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #161 = G_FABS
  { 162,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #162 = G_FCOPYSIGN
  { 163,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #163 = G_FCANONICALIZE
  { 164,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #164 = G_FMINNUM
  { 165,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #165 = G_FMAXNUM
  { 166,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #166 = G_FMINNUM_IEEE
  { 167,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #167 = G_FMAXNUM_IEEE
  { 168,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #168 = G_FMINIMUM
  { 169,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #169 = G_FMAXIMUM
  { 170,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #170 = G_PTR_ADD
  { 171,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #171 = G_PTRMASK
  { 172,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #172 = G_SMIN
  { 173,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #173 = G_SMAX
  { 174,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #174 = G_UMIN
  { 175,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #175 = G_UMAX
  { 176,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #176 = G_ABS
  { 177,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #177 = G_BR
  { 178,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #178 = G_BRJT
  { 179,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #179 = G_INSERT_VECTOR_ELT
  { 180,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #180 = G_EXTRACT_VECTOR_ELT
  { 181,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo39 },  // Inst #181 = G_SHUFFLE_VECTOR
  { 182,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #182 = G_CTTZ
  { 183,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #183 = G_CTTZ_ZERO_UNDEF
  { 184,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #184 = G_CTLZ
  { 185,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #185 = G_CTLZ_ZERO_UNDEF
  { 186,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #186 = G_CTPOP
  { 187,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #187 = G_BSWAP
  { 188,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #188 = G_BITREVERSE
  { 189,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #189 = G_FCEIL
  { 190,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #190 = G_FCOS
  { 191,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #191 = G_FSIN
  { 192,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #192 = G_FSQRT
  { 193,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #193 = G_FFLOOR
  { 194,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #194 = G_FRINT
  { 195,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #195 = G_FNEARBYINT
  { 196,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #196 = G_ADDRSPACE_CAST
  { 197,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #197 = G_BLOCK_ADDR
  { 198,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #198 = G_JUMP_TABLE
  { 199,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40 },  // Inst #199 = G_DYN_STACKALLOC
  { 200,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #200 = G_STRICT_FADD
  { 201,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #201 = G_STRICT_FSUB
  { 202,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #202 = G_STRICT_FMUL
  { 203,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #203 = G_STRICT_FDIV
  { 204,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #204 = G_STRICT_FREM
  { 205,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #205 = G_STRICT_FMA
  { 206,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #206 = G_STRICT_FSQRT
  { 207,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #207 = G_READ_REGISTER
  { 208,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #208 = G_WRITE_REGISTER
  { 209,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #209 = G_MEMCPY
  { 210,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #210 = G_MEMMOVE
  { 211,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #211 = G_MEMSET
  { 212,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #212 = G_VECREDUCE_SEQ_FADD
  { 213,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #213 = G_VECREDUCE_SEQ_FMUL
  { 214,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #214 = G_VECREDUCE_FADD
  { 215,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #215 = G_VECREDUCE_FMUL
  { 216,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #216 = G_VECREDUCE_FMAX
  { 217,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #217 = G_VECREDUCE_FMIN
  { 218,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #218 = G_VECREDUCE_ADD
  { 219,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #219 = G_VECREDUCE_MUL
  { 220,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #220 = G_VECREDUCE_AND
  { 221,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #221 = G_VECREDUCE_OR
  { 222,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #222 = G_VECREDUCE_XOR
  { 223,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #223 = G_VECREDUCE_SMAX
  { 224,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #224 = G_VECREDUCE_SMIN
  { 225,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #225 = G_VECREDUCE_UMAX
  { 226,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #226 = G_VECREDUCE_UMIN
  { 227,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #227 = BRANCH
  { 228,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #228 = BRANCH_COND_f32
  { 229,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #229 = BRANCH_COND_i32
  { 230,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #230 = BREAK
  { 231,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #231 = BREAKC_f32
  { 232,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #232 = BREAKC_i32
  { 233,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #233 = BREAK_LOGICALNZ_f32
  { 234,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #234 = BREAK_LOGICALNZ_i32
  { 235,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #235 = BREAK_LOGICALZ_f32
  { 236,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #236 = BREAK_LOGICALZ_i32
  { 237,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #237 = CONST_COPY
  { 238,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #238 = CONTINUE
  { 239,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #239 = CONTINUEC_f32
  { 240,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #240 = CONTINUEC_i32
  { 241,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #241 = CONTINUE_LOGICALNZ_f32
  { 242,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #242 = CONTINUE_LOGICALNZ_i32
  { 243,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #243 = CONTINUE_LOGICALZ_f32
  { 244,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #244 = CONTINUE_LOGICALZ_i32
  { 245,	2,	1,	0,	2,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #245 = CUBE_eg_pseudo
  { 246,	2,	1,	0,	2,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #246 = CUBE_r600_pseudo
  { 247,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #247 = DEFAULT
  { 248,	71,	1,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #248 = DOT_4
  { 249,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #249 = DUMMY_CHAIN
  { 250,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #250 = ELSE
  { 251,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #251 = END
  { 252,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #252 = ENDFUNC
  { 253,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #253 = ENDIF
  { 254,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #254 = ENDLOOP
  { 255,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #255 = ENDMAIN
  { 256,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #256 = ENDSWITCH
  { 257,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #257 = FABS_R600
  { 258,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #258 = FNEG_R600
  { 259,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #259 = FUNC
  { 260,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #260 = IFC_f32
  { 261,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #261 = IFC_i32
  { 262,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #262 = IF_LOGICALNZ_f32
  { 263,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #263 = IF_LOGICALNZ_i32
  { 264,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #264 = IF_LOGICALZ_f32
  { 265,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #265 = IF_LOGICALZ_i32
  { 266,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #266 = IF_PREDICATE_SET
  { 267,	1,	0,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #267 = JUMP
  { 268,	2,	0,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #268 = JUMP_COND
  { 269,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #269 = MASK_WRITE
  { 270,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #270 = MOV_IMM_F32
  { 271,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #271 = MOV_IMM_GLOBAL_ADDR
  { 272,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #272 = MOV_IMM_I32
  { 273,	4,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x180ULL, nullptr, nullptr, OperandInfo50 },  // Inst #273 = PRED_X
  { 274,	3,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #274 = R600_EXTRACT_ELT_V2
  { 275,	3,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #275 = R600_EXTRACT_ELT_V4
  { 276,	4,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #276 = R600_INSERT_ELT_V2
  { 277,	4,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #277 = R600_INSERT_ELT_V4
  { 278,	4,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x8000000000000000ULL, nullptr, nullptr, OperandInfo55 },  // Inst #278 = R600_RegisterLoad
  { 279,	4,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x4000000000000000ULL, nullptr, nullptr, OperandInfo55 },  // Inst #279 = R600_RegisterStore
  { 280,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #280 = RETDYN
  { 281,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #281 = RETURN
  { 282,	7,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, nullptr, OperandInfo56 },  // Inst #282 = TXD
  { 283,	7,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, nullptr, OperandInfo56 },  // Inst #283 = TXD_SHADOW
  { 284,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #284 = WHILELOOP
  { 285,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #285 = ADD
  { 286,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #286 = ADDC_UINT
  { 287,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #287 = ADD_INT
  { 288,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #288 = ALU_CLAUSE
  { 289,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #289 = AND_INT
  { 290,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #290 = ASHR_eg
  { 291,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #291 = ASHR_r600
  { 292,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #292 = BCNT_INT
  { 293,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #293 = BFE_INT_eg
  { 294,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #294 = BFE_UINT_eg
  { 295,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #295 = BFI_INT_eg
  { 296,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #296 = BFM_INT_eg
  { 297,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #297 = BIT_ALIGN_INT_eg
  { 298,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #298 = CEIL
  { 299,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #299 = CF_ALU
  { 300,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #300 = CF_ALU_BREAK
  { 301,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #301 = CF_ALU_CONTINUE
  { 302,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #302 = CF_ALU_ELSE_AFTER
  { 303,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #303 = CF_ALU_POP_AFTER
  { 304,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #304 = CF_ALU_PUSH_BEFORE
  { 305,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #305 = CF_CALL_FS_EG
  { 306,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #306 = CF_CALL_FS_R600
  { 307,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #307 = CF_CONTINUE_EG
  { 308,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #308 = CF_CONTINUE_R600
  { 309,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #309 = CF_ELSE_EG
  { 310,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #310 = CF_ELSE_R600
  { 311,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #311 = CF_END_CM
  { 312,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #312 = CF_END_EG
  { 313,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #313 = CF_END_R600
  { 314,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #314 = CF_JUMP_EG
  { 315,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #315 = CF_JUMP_R600
  { 316,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #316 = CF_PUSH_EG
  { 317,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #317 = CF_PUSH_ELSE_R600
  { 318,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #318 = CF_TC_EG
  { 319,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #319 = CF_TC_R600
  { 320,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #320 = CF_VC_EG
  { 321,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #321 = CF_VC_R600
  { 322,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #322 = CNDE_INT
  { 323,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #323 = CNDE_eg
  { 324,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #324 = CNDE_r600
  { 325,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #325 = CNDGE_INT
  { 326,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #326 = CNDGE_eg
  { 327,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #327 = CNDGE_r600
  { 328,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #328 = CNDGT_INT
  { 329,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #329 = CNDGT_eg
  { 330,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #330 = CNDGT_r600
  { 331,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, nullptr, OperandInfo58 },  // Inst #331 = COS_cm
  { 332,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo58 },  // Inst #332 = COS_eg
  { 333,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo58 },  // Inst #333 = COS_r600
  { 334,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo58 },  // Inst #334 = COS_r700
  { 335,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #335 = CUBE_eg_real
  { 336,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #336 = CUBE_r600_real
  { 337,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #337 = DOT4_eg
  { 338,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #338 = DOT4_r600
  { 339,	7,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo61 },  // Inst #339 = EG_ExportBuf
  { 340,	9,	0,	0,	1,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo62 },  // Inst #340 = EG_ExportSwz
  { 341,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #341 = END_LOOP_EG
  { 342,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #342 = END_LOOP_R600
  { 343,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo58 },  // Inst #343 = EXP_IEEE_cm
  { 344,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #344 = EXP_IEEE_eg
  { 345,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #345 = EXP_IEEE_r600
  { 346,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #346 = FETCH_CLAUSE
  { 347,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #347 = FFBH_UINT
  { 348,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #348 = FFBL_INT
  { 349,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #349 = FLOOR
  { 350,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #350 = FLT16_TO_FLT32
  { 351,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #351 = FLT32_TO_FLT16
  { 352,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #352 = FLT_TO_INT_eg
  { 353,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #353 = FLT_TO_INT_r600
  { 354,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #354 = FLT_TO_UINT_eg
  { 355,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #355 = FLT_TO_UINT_r600
  { 356,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #356 = FMA_eg
  { 357,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #357 = FRACT
  { 358,	0,	0,	0,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x4000ULL, nullptr, nullptr, nullptr },  // Inst #358 = GROUP_BARRIER
  { 359,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #359 = INTERP_LOAD_P0
  { 360,	5,	2,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #360 = INTERP_PAIR_XY
  { 361,	5,	2,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #361 = INTERP_PAIR_ZW
  { 362,	2,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #362 = INTERP_VEC_LOAD
  { 363,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #363 = INTERP_XY
  { 364,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #364 = INTERP_ZW
  { 365,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #365 = INT_TO_FLT_eg
  { 366,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #366 = INT_TO_FLT_r600
  { 367,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #367 = KILLGT
  { 368,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #368 = LDS_ADD
  { 369,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo67 },  // Inst #369 = LDS_ADD_RET
  { 370,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #370 = LDS_AND
  { 371,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo67 },  // Inst #371 = LDS_AND_RET
  { 372,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo68 },  // Inst #372 = LDS_BYTE_READ_RET
  { 373,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #373 = LDS_BYTE_WRITE
  { 374,	12,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44200ULL, nullptr, nullptr, OperandInfo69 },  // Inst #374 = LDS_CMPST
  { 375,	13,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x44200ULL, nullptr, nullptr, OperandInfo70 },  // Inst #375 = LDS_CMPST_RET
  { 376,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #376 = LDS_MAX_INT
  { 377,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo67 },  // Inst #377 = LDS_MAX_INT_RET
  { 378,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #378 = LDS_MAX_UINT
  { 379,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo67 },  // Inst #379 = LDS_MAX_UINT_RET
  { 380,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #380 = LDS_MIN_INT
  { 381,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo67 },  // Inst #381 = LDS_MIN_INT_RET
  { 382,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #382 = LDS_MIN_UINT
  { 383,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo67 },  // Inst #383 = LDS_MIN_UINT_RET
  { 384,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #384 = LDS_OR
  { 385,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo67 },  // Inst #385 = LDS_OR_RET
  { 386,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo68 },  // Inst #386 = LDS_READ_RET
  { 387,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo68 },  // Inst #387 = LDS_SHORT_READ_RET
  { 388,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #388 = LDS_SHORT_WRITE
  { 389,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #389 = LDS_SUB
  { 390,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo67 },  // Inst #390 = LDS_SUB_RET
  { 391,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo68 },  // Inst #391 = LDS_UBYTE_READ_RET
  { 392,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo68 },  // Inst #392 = LDS_USHORT_READ_RET
  { 393,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #393 = LDS_WRITE
  { 394,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #394 = LDS_WRXCHG
  { 395,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo67 },  // Inst #395 = LDS_WRXCHG_RET
  { 396,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo66 },  // Inst #396 = LDS_XOR
  { 397,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo67 },  // Inst #397 = LDS_XOR_RET
  { 398,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #398 = LITERALS
  { 399,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #399 = LOG_CLAMPED_eg
  { 400,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #400 = LOG_CLAMPED_r600
  { 401,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo58 },  // Inst #401 = LOG_IEEE_cm
  { 402,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #402 = LOG_IEEE_eg
  { 403,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #403 = LOG_IEEE_r600
  { 404,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #404 = LOOP_BREAK_EG
  { 405,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #405 = LOOP_BREAK_R600
  { 406,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #406 = LSHL_eg
  { 407,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #407 = LSHL_r600
  { 408,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #408 = LSHR_eg
  { 409,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #409 = LSHR_r600
  { 410,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #410 = MAX
  { 411,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #411 = MAX_DX10
  { 412,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #412 = MAX_INT
  { 413,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #413 = MAX_UINT
  { 414,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #414 = MIN
  { 415,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #415 = MIN_DX10
  { 416,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #416 = MIN_INT
  { 417,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #417 = MIN_UINT
  { 418,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #418 = MOV
  { 419,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #419 = MOVA_INT_eg
  { 420,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #420 = MUL
  { 421,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #421 = MULADD_IEEE_eg
  { 422,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #422 = MULADD_IEEE_r600
  { 423,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #423 = MULADD_INT24_cm
  { 424,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #424 = MULADD_UINT24_eg
  { 425,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #425 = MULADD_eg
  { 426,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #426 = MULADD_r600
  { 427,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo57 },  // Inst #427 = MULHI_INT_cm
  { 428,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo57 },  // Inst #428 = MULHI_INT_cm24
  { 429,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #429 = MULHI_INT_eg
  { 430,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #430 = MULHI_INT_r600
  { 431,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #431 = MULHI_UINT24_eg
  { 432,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo57 },  // Inst #432 = MULHI_UINT_cm
  { 433,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo57 },  // Inst #433 = MULHI_UINT_cm24
  { 434,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #434 = MULHI_UINT_eg
  { 435,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #435 = MULHI_UINT_r600
  { 436,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo57 },  // Inst #436 = MULLO_INT_cm
  { 437,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #437 = MULLO_INT_eg
  { 438,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #438 = MULLO_INT_r600
  { 439,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo57 },  // Inst #439 = MULLO_UINT_cm
  { 440,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #440 = MULLO_UINT_eg
  { 441,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #441 = MULLO_UINT_r600
  { 442,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #442 = MUL_IEEE
  { 443,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #443 = MUL_INT24_cm
  { 444,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #444 = MUL_LIT_eg
  { 445,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo59 },  // Inst #445 = MUL_LIT_r600
  { 446,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #446 = MUL_UINT24_eg
  { 447,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #447 = NOT_INT
  { 448,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #448 = OR_INT
  { 449,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #449 = PAD
  { 450,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #450 = POP_EG
  { 451,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #451 = POP_R600
  { 452,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #452 = PRED_SETE
  { 453,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #453 = PRED_SETE_INT
  { 454,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #454 = PRED_SETGE
  { 455,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #455 = PRED_SETGE_INT
  { 456,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #456 = PRED_SETGT
  { 457,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #457 = PRED_SETGT_INT
  { 458,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #458 = PRED_SETNE
  { 459,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #459 = PRED_SETNE_INT
  { 460,	7,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo61 },  // Inst #460 = R600_ExportBuf
  { 461,	9,	0,	0,	1,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo62 },  // Inst #461 = R600_ExportSwz
  { 462,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #462 = RAT_ATOMIC_ADD_NORET
  { 463,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #463 = RAT_ATOMIC_ADD_RTN
  { 464,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #464 = RAT_ATOMIC_AND_NORET
  { 465,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #465 = RAT_ATOMIC_AND_RTN
  { 466,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #466 = RAT_ATOMIC_CMPXCHG_INT_NORET
  { 467,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #467 = RAT_ATOMIC_CMPXCHG_INT_RTN
  { 468,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #468 = RAT_ATOMIC_DEC_UINT_NORET
  { 469,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #469 = RAT_ATOMIC_DEC_UINT_RTN
  { 470,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #470 = RAT_ATOMIC_INC_UINT_NORET
  { 471,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #471 = RAT_ATOMIC_INC_UINT_RTN
  { 472,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #472 = RAT_ATOMIC_MAX_INT_NORET
  { 473,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #473 = RAT_ATOMIC_MAX_INT_RTN
  { 474,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #474 = RAT_ATOMIC_MAX_UINT_NORET
  { 475,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #475 = RAT_ATOMIC_MAX_UINT_RTN
  { 476,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #476 = RAT_ATOMIC_MIN_INT_NORET
  { 477,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #477 = RAT_ATOMIC_MIN_INT_RTN
  { 478,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #478 = RAT_ATOMIC_MIN_UINT_NORET
  { 479,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #479 = RAT_ATOMIC_MIN_UINT_RTN
  { 480,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #480 = RAT_ATOMIC_OR_NORET
  { 481,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #481 = RAT_ATOMIC_OR_RTN
  { 482,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #482 = RAT_ATOMIC_RSUB_NORET
  { 483,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #483 = RAT_ATOMIC_RSUB_RTN
  { 484,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #484 = RAT_ATOMIC_SUB_NORET
  { 485,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #485 = RAT_ATOMIC_SUB_RTN
  { 486,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #486 = RAT_ATOMIC_XCHG_INT_NORET
  { 487,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #487 = RAT_ATOMIC_XCHG_INT_RTN
  { 488,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #488 = RAT_ATOMIC_XOR_NORET
  { 489,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo71 },  // Inst #489 = RAT_ATOMIC_XOR_RTN
  { 490,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo72 },  // Inst #490 = RAT_MSKOR
  { 491,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo72 },  // Inst #491 = RAT_STORE_DWORD128
  { 492,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo73 },  // Inst #492 = RAT_STORE_DWORD32
  { 493,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo74 },  // Inst #493 = RAT_STORE_DWORD64
  { 494,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo75 },  // Inst #494 = RAT_STORE_TYPED_cm
  { 495,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo75 },  // Inst #495 = RAT_STORE_TYPED_eg
  { 496,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo76 },  // Inst #496 = RAT_WRITE_CACHELESS_128_eg
  { 497,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo77 },  // Inst #497 = RAT_WRITE_CACHELESS_32_eg
  { 498,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo78 },  // Inst #498 = RAT_WRITE_CACHELESS_64_eg
  { 499,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo58 },  // Inst #499 = RECIPSQRT_CLAMPED_cm
  { 500,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #500 = RECIPSQRT_CLAMPED_eg
  { 501,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #501 = RECIPSQRT_CLAMPED_r600
  { 502,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo58 },  // Inst #502 = RECIPSQRT_IEEE_cm
  { 503,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #503 = RECIPSQRT_IEEE_eg
  { 504,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #504 = RECIPSQRT_IEEE_r600
  { 505,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo58 },  // Inst #505 = RECIP_CLAMPED_cm
  { 506,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #506 = RECIP_CLAMPED_eg
  { 507,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #507 = RECIP_CLAMPED_r600
  { 508,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo58 },  // Inst #508 = RECIP_IEEE_cm
  { 509,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #509 = RECIP_IEEE_eg
  { 510,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #510 = RECIP_IEEE_r600
  { 511,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #511 = RECIP_UINT_eg
  { 512,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #512 = RECIP_UINT_r600
  { 513,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #513 = RNDNE
  { 514,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #514 = SETE
  { 515,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #515 = SETE_DX10
  { 516,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #516 = SETE_INT
  { 517,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #517 = SETGE_DX10
  { 518,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #518 = SETGE_INT
  { 519,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #519 = SETGE_UINT
  { 520,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #520 = SETGT_DX10
  { 521,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #521 = SETGT_INT
  { 522,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #522 = SETGT_UINT
  { 523,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #523 = SETNE_DX10
  { 524,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #524 = SETNE_INT
  { 525,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #525 = SGE
  { 526,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #526 = SGT
  { 527,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, nullptr, OperandInfo58 },  // Inst #527 = SIN_cm
  { 528,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo58 },  // Inst #528 = SIN_eg
  { 529,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo58 },  // Inst #529 = SIN_r600
  { 530,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo58 },  // Inst #530 = SIN_r700
  { 531,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #531 = SNE
  { 532,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #532 = SUBB_UINT
  { 533,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #533 = SUB_INT
  { 534,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #534 = TEX_GET_GRADIENTS_H
  { 535,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #535 = TEX_GET_GRADIENTS_V
  { 536,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #536 = TEX_GET_TEXTURE_RESINFO
  { 537,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #537 = TEX_LD
  { 538,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #538 = TEX_LDPTR
  { 539,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #539 = TEX_SAMPLE
  { 540,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #540 = TEX_SAMPLE_C
  { 541,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #541 = TEX_SAMPLE_C_G
  { 542,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #542 = TEX_SAMPLE_C_L
  { 543,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #543 = TEX_SAMPLE_C_LB
  { 544,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #544 = TEX_SAMPLE_G
  { 545,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #545 = TEX_SAMPLE_L
  { 546,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #546 = TEX_SAMPLE_LB
  { 547,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #547 = TEX_SET_GRADIENTS_H
  { 548,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo79 },  // Inst #548 = TEX_SET_GRADIENTS_V
  { 549,	4,	1,	0,	1,	0, 0x1000ULL, nullptr, nullptr, OperandInfo80 },  // Inst #549 = TEX_VTX_CONSTBUF
  { 550,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1000ULL, nullptr, nullptr, OperandInfo80 },  // Inst #550 = TEX_VTX_TEXBUF
  { 551,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #551 = TRUNC
  { 552,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #552 = UINT_TO_FLT_eg
  { 553,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo58 },  // Inst #553 = UINT_TO_FLT_r600
  { 554,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo80 },  // Inst #554 = VTX_READ_128_cm
  { 555,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo80 },  // Inst #555 = VTX_READ_128_eg
  { 556,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo81 },  // Inst #556 = VTX_READ_16_cm
  { 557,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo81 },  // Inst #557 = VTX_READ_16_eg
  { 558,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #558 = VTX_READ_32_cm
  { 559,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo82 },  // Inst #559 = VTX_READ_32_eg
  { 560,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo83 },  // Inst #560 = VTX_READ_64_cm
  { 561,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo83 },  // Inst #561 = VTX_READ_64_eg
  { 562,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo81 },  // Inst #562 = VTX_READ_8_cm
  { 563,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo81 },  // Inst #563 = VTX_READ_8_eg
  { 564,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #564 = WHILE_LOOP_EG
  { 565,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #565 = WHILE_LOOP_R600
  { 566,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo57 },  // Inst #566 = XOR_INT
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char R600InstrNameData[] = {
  /* 0 */ "CF_TC_R600\0"
  /* 11 */ "CF_VC_R600\0"
  /* 22 */ "CF_END_R600\0"
  /* 34 */ "CF_ELSE_R600\0"
  /* 47 */ "CF_PUSH_ELSE_R600\0"
  /* 65 */ "CF_CONTINUE_R600\0"
  /* 82 */ "FNEG_R600\0"
  /* 92 */ "LOOP_BREAK_R600\0"
  /* 108 */ "CF_JUMP_R600\0"
  /* 121 */ "END_LOOP_R600\0"
  /* 135 */ "WHILE_LOOP_R600\0"
  /* 151 */ "POP_R600\0"
  /* 160 */ "FABS_R600\0"
  /* 170 */ "CF_CALL_FS_R600\0"
  /* 186 */ "DOT4_r600\0"
  /* 196 */ "MULADD_r600\0"
  /* 208 */ "LOG_CLAMPED_r600\0"
  /* 225 */ "RECIP_CLAMPED_r600\0"
  /* 244 */ "RECIPSQRT_CLAMPED_r600\0"
  /* 267 */ "CNDE_r600\0"
  /* 277 */ "MULADD_IEEE_r600\0"
  /* 294 */ "LOG_IEEE_r600\0"
  /* 308 */ "RECIP_IEEE_r600\0"
  /* 324 */ "EXP_IEEE_r600\0"
  /* 338 */ "RECIPSQRT_IEEE_r600\0"
  /* 358 */ "CNDGE_r600\0"
  /* 369 */ "LSHL_r600\0"
  /* 379 */ "SIN_r600\0"
  /* 388 */ "ASHR_r600\0"
  /* 398 */ "LSHR_r600\0"
  /* 408 */ "COS_r600\0"
  /* 417 */ "CNDGT_r600\0"
  /* 428 */ "MUL_LIT_r600\0"
  /* 441 */ "UINT_TO_FLT_r600\0"
  /* 458 */ "MULHI_UINT_r600\0"
  /* 474 */ "MULLO_UINT_r600\0"
  /* 490 */ "FLT_TO_UINT_r600\0"
  /* 507 */ "RECIP_UINT_r600\0"
  /* 523 */ "MULHI_INT_r600\0"
  /* 538 */ "MULLO_INT_r600\0"
  /* 553 */ "FLT_TO_INT_r600\0"
  /* 569 */ "SIN_r700\0"
  /* 578 */ "COS_r700\0"
  /* 587 */ "G_FLOG10\0"
  /* 596 */ "SETGE_DX10\0"
  /* 607 */ "SETNE_DX10\0"
  /* 618 */ "SETE_DX10\0"
  /* 628 */ "MIN_DX10\0"
  /* 637 */ "SETGT_DX10\0"
  /* 648 */ "MAX_DX10\0"
  /* 657 */ "INTERP_LOAD_P0\0"
  /* 672 */ "RAT_STORE_DWORD32\0"
  /* 690 */ "MOV_IMM_F32\0"
  /* 702 */ "MOV_IMM_I32\0"
  /* 714 */ "FLT16_TO_FLT32\0"
  /* 729 */ "CONTINUEC_f32\0"
  /* 743 */ "IFC_f32\0"
  /* 751 */ "BREAKC_f32\0"
  /* 762 */ "BRANCH_COND_f32\0"
  /* 778 */ "CONTINUE_LOGICALZ_f32\0"
  /* 800 */ "IF_LOGICALZ_f32\0"
  /* 816 */ "BREAK_LOGICALZ_f32\0"
  /* 835 */ "CONTINUE_LOGICALNZ_f32\0"
  /* 858 */ "IF_LOGICALNZ_f32\0"
  /* 875 */ "BREAK_LOGICALNZ_f32\0"
  /* 895 */ "CONTINUEC_i32\0"
  /* 909 */ "IFC_i32\0"
  /* 917 */ "BREAKC_i32\0"
  /* 928 */ "BRANCH_COND_i32\0"
  /* 944 */ "CONTINUE_LOGICALZ_i32\0"
  /* 966 */ "IF_LOGICALZ_i32\0"
  /* 982 */ "BREAK_LOGICALZ_i32\0"
  /* 1001 */ "CONTINUE_LOGICALNZ_i32\0"
  /* 1024 */ "IF_LOGICALNZ_i32\0"
  /* 1041 */ "BREAK_LOGICALNZ_i32\0"
  /* 1061 */ "G_FLOG2\0"
  /* 1069 */ "G_FEXP2\0"
  /* 1077 */ "R600_EXTRACT_ELT_V2\0"
  /* 1097 */ "R600_INSERT_ELT_V2\0"
  /* 1116 */ "MULHI_UINT_cm24\0"
  /* 1132 */ "MULHI_INT_cm24\0"
  /* 1147 */ "RAT_STORE_DWORD64\0"
  /* 1165 */ "R600_EXTRACT_ELT_V4\0"
  /* 1185 */ "R600_INSERT_ELT_V4\0"
  /* 1204 */ "DOT_4\0"
  /* 1210 */ "FLT32_TO_FLT16\0"
  /* 1225 */ "RAT_STORE_DWORD128\0"
  /* 1244 */ "G_FMA\0"
  /* 1250 */ "G_STRICT_FMA\0"
  /* 1263 */ "TEX_SAMPLE_C_LB\0"
  /* 1279 */ "TEX_SAMPLE_LB\0"
  /* 1293 */ "G_FSUB\0"
  /* 1300 */ "G_STRICT_FSUB\0"
  /* 1314 */ "G_ATOMICRMW_FSUB\0"
  /* 1331 */ "G_SUB\0"
  /* 1337 */ "LDS_SUB\0"
  /* 1345 */ "G_ATOMICRMW_SUB\0"
  /* 1361 */ "G_INTRINSIC\0"
  /* 1373 */ "ENDFUNC\0"
  /* 1381 */ "G_FPTRUNC\0"
  /* 1391 */ "G_INTRINSIC_TRUNC\0"
  /* 1409 */ "G_TRUNC\0"
  /* 1417 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 1438 */ "G_DYN_STACKALLOC\0"
  /* 1455 */ "TEX_SAMPLE_C\0"
  /* 1468 */ "G_FMAD\0"
  /* 1475 */ "G_INDEXED_SEXTLOAD\0"
  /* 1494 */ "G_SEXTLOAD\0"
  /* 1505 */ "G_INDEXED_ZEXTLOAD\0"
  /* 1524 */ "G_ZEXTLOAD\0"
  /* 1535 */ "INTERP_VEC_LOAD\0"
  /* 1551 */ "G_INDEXED_LOAD\0"
  /* 1566 */ "G_LOAD\0"
  /* 1573 */ "PAD\0"
  /* 1577 */ "G_VECREDUCE_FADD\0"
  /* 1594 */ "G_FADD\0"
  /* 1601 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 1622 */ "G_STRICT_FADD\0"
  /* 1636 */ "G_ATOMICRMW_FADD\0"
  /* 1653 */ "G_VECREDUCE_ADD\0"
  /* 1669 */ "G_ADD\0"
  /* 1675 */ "G_PTR_ADD\0"
  /* 1685 */ "LDS_ADD\0"
  /* 1693 */ "G_ATOMICRMW_ADD\0"
  /* 1709 */ "TEX_LD\0"
  /* 1716 */ "G_ATOMICRMW_NAND\0"
  /* 1733 */ "G_VECREDUCE_AND\0"
  /* 1749 */ "G_AND\0"
  /* 1755 */ "LDS_AND\0"
  /* 1763 */ "G_ATOMICRMW_AND\0"
  /* 1779 */ "LIFETIME_END\0"
  /* 1792 */ "G_BRCOND\0"
  /* 1801 */ "JUMP_COND\0"
  /* 1811 */ "G_INTRINSIC_ROUND\0"
  /* 1829 */ "LOAD_STACK_GUARD\0"
  /* 1846 */ "TXD\0"
  /* 1850 */ "PSEUDO_PROBE\0"
  /* 1863 */ "G_SSUBE\0"
  /* 1871 */ "G_USUBE\0"
  /* 1879 */ "G_FENCE\0"
  /* 1887 */ "REG_SEQUENCE\0"
  /* 1900 */ "G_SADDE\0"
  /* 1908 */ "G_UADDE\0"
  /* 1916 */ "MUL_IEEE\0"
  /* 1925 */ "G_FMINNUM_IEEE\0"
  /* 1940 */ "G_FMAXNUM_IEEE\0"
  /* 1955 */ "SGE\0"
  /* 1959 */ "PRED_SETGE\0"
  /* 1970 */ "G_JUMP_TABLE\0"
  /* 1983 */ "BUNDLE\0"
  /* 1990 */ "TEX_SAMPLE\0"
  /* 2001 */ "RNDNE\0"
  /* 2007 */ "SNE\0"
  /* 2011 */ "PRED_SETNE\0"
  /* 2022 */ "LOCAL_ESCAPE\0"
  /* 2035 */ "CF_ALU_PUSH_BEFORE\0"
  /* 2054 */ "G_INDEXED_STORE\0"
  /* 2070 */ "G_STORE\0"
  /* 2078 */ "ELSE\0"
  /* 2083 */ "G_BITREVERSE\0"
  /* 2096 */ "FETCH_CLAUSE\0"
  /* 2109 */ "ALU_CLAUSE\0"
  /* 2120 */ "PRED_SETE\0"
  /* 2130 */ "LDS_BYTE_WRITE\0"
  /* 2145 */ "MASK_WRITE\0"
  /* 2156 */ "LDS_WRITE\0"
  /* 2166 */ "LDS_SHORT_WRITE\0"
  /* 2182 */ "DBG_VALUE\0"
  /* 2192 */ "G_GLOBAL_VALUE\0"
  /* 2207 */ "CF_ALU_CONTINUE\0"
  /* 2223 */ "G_MEMMOVE\0"
  /* 2233 */ "G_FREEZE\0"
  /* 2242 */ "G_FCANONICALIZE\0"
  /* 2258 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 2276 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 2294 */ "G_IMPLICIT_DEF\0"
  /* 2309 */ "DBG_INSTR_REF\0"
  /* 2323 */ "ENDIF\0"
  /* 2329 */ "TEX_VTX_CONSTBUF\0"
  /* 2346 */ "TEX_VTX_TEXBUF\0"
  /* 2361 */ "G_FNEG\0"
  /* 2368 */ "EXTRACT_SUBREG\0"
  /* 2383 */ "INSERT_SUBREG\0"
  /* 2397 */ "G_SEXT_INREG\0"
  /* 2410 */ "SUBREG_TO_REG\0"
  /* 2424 */ "CF_TC_EG\0"
  /* 2433 */ "CF_VC_EG\0"
  /* 2442 */ "CF_END_EG\0"
  /* 2452 */ "CF_ELSE_EG\0"
  /* 2463 */ "CF_CONTINUE_EG\0"
  /* 2478 */ "CF_PUSH_EG\0"
  /* 2489 */ "LOOP_BREAK_EG\0"
  /* 2503 */ "CF_JUMP_EG\0"
  /* 2514 */ "END_LOOP_EG\0"
  /* 2526 */ "WHILE_LOOP_EG\0"
  /* 2540 */ "POP_EG\0"
  /* 2547 */ "CF_CALL_FS_EG\0"
  /* 2561 */ "G_ATOMIC_CMPXCHG\0"
  /* 2578 */ "LDS_WRXCHG\0"
  /* 2589 */ "G_ATOMICRMW_XCHG\0"
  /* 2606 */ "G_FLOG\0"
  /* 2613 */ "G_VAARG\0"
  /* 2621 */ "PREALLOCATED_ARG\0"
  /* 2638 */ "TEX_SAMPLE_C_G\0"
  /* 2653 */ "TEX_SAMPLE_G\0"
  /* 2666 */ "BRANCH\0"
  /* 2673 */ "ENDSWITCH\0"
  /* 2683 */ "G_SMULH\0"
  /* 2691 */ "G_UMULH\0"
  /* 2699 */ "TEX_GET_GRADIENTS_H\0"
  /* 2719 */ "TEX_SET_GRADIENTS_H\0"
  /* 2739 */ "G_PHI\0"
  /* 2745 */ "G_FPTOSI\0"
  /* 2754 */ "G_FPTOUI\0"
  /* 2763 */ "G_FPOWI\0"
  /* 2771 */ "CF_ALU_BREAK\0"
  /* 2784 */ "G_PTRMASK\0"
  /* 2794 */ "GC_LABEL\0"
  /* 2803 */ "DBG_LABEL\0"
  /* 2813 */ "EH_LABEL\0"
  /* 2822 */ "ANNOTATION_LABEL\0"
  /* 2839 */ "ICALL_BRANCH_FUNNEL\0"
  /* 2859 */ "G_FSHL\0"
  /* 2866 */ "G_SHL\0"
  /* 2872 */ "G_FCEIL\0"
  /* 2880 */ "PATCHABLE_TAIL_CALL\0"
  /* 2900 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 2927 */ "PATCHABLE_EVENT_CALL\0"
  /* 2948 */ "FENTRY_CALL\0"
  /* 2960 */ "KILL\0"
  /* 2965 */ "G_VECREDUCE_FMUL\0"
  /* 2982 */ "G_FMUL\0"
  /* 2989 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 3010 */ "G_STRICT_FMUL\0"
  /* 3024 */ "G_VECREDUCE_MUL\0"
  /* 3040 */ "G_MUL\0"
  /* 3046 */ "TEX_SAMPLE_C_L\0"
  /* 3061 */ "TEX_SAMPLE_L\0"
  /* 3074 */ "CF_END_CM\0"
  /* 3084 */ "G_FREM\0"
  /* 3091 */ "G_STRICT_FREM\0"
  /* 3105 */ "G_SREM\0"
  /* 3112 */ "G_UREM\0"
  /* 3119 */ "INLINEASM\0"
  /* 3129 */ "G_FMINIMUM\0"
  /* 3140 */ "G_FMAXIMUM\0"
  /* 3151 */ "G_FMINNUM\0"
  /* 3161 */ "G_FMAXNUM\0"
  /* 3171 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 3193 */ "G_FCOPYSIGN\0"
  /* 3205 */ "DUMMY_CHAIN\0"
  /* 3217 */ "ENDMAIN\0"
  /* 3225 */ "G_VECREDUCE_FMIN\0"
  /* 3242 */ "G_VECREDUCE_SMIN\0"
  /* 3259 */ "G_SMIN\0"
  /* 3266 */ "G_VECREDUCE_UMIN\0"
  /* 3283 */ "G_UMIN\0"
  /* 3290 */ "G_ATOMICRMW_UMIN\0"
  /* 3307 */ "G_ATOMICRMW_MIN\0"
  /* 3323 */ "G_FSIN\0"
  /* 3330 */ "CFI_INSTRUCTION\0"
  /* 3346 */ "RETURN\0"
  /* 3353 */ "RAT_ATOMIC_RSUB_RTN\0"
  /* 3373 */ "RAT_ATOMIC_SUB_RTN\0"
  /* 3392 */ "RAT_ATOMIC_ADD_RTN\0"
  /* 3411 */ "RAT_ATOMIC_AND_RTN\0"
  /* 3430 */ "RAT_ATOMIC_XOR_RTN\0"
  /* 3449 */ "RAT_ATOMIC_OR_RTN\0"
  /* 3467 */ "RAT_ATOMIC_DEC_UINT_RTN\0"
  /* 3491 */ "RAT_ATOMIC_INC_UINT_RTN\0"
  /* 3515 */ "RAT_ATOMIC_MIN_UINT_RTN\0"
  /* 3539 */ "RAT_ATOMIC_MAX_UINT_RTN\0"
  /* 3563 */ "RAT_ATOMIC_CMPXCHG_INT_RTN\0"
  /* 3590 */ "RAT_ATOMIC_XCHG_INT_RTN\0"
  /* 3614 */ "RAT_ATOMIC_MIN_INT_RTN\0"
  /* 3637 */ "RAT_ATOMIC_MAX_INT_RTN\0"
  /* 3660 */ "RETDYN\0"
  /* 3667 */ "G_SSUBO\0"
  /* 3675 */ "G_USUBO\0"
  /* 3683 */ "G_SADDO\0"
  /* 3691 */ "G_UADDO\0"
  /* 3699 */ "TEX_GET_TEXTURE_RESINFO\0"
  /* 3723 */ "G_SMULO\0"
  /* 3731 */ "G_UMULO\0"
  /* 3739 */ "STACKMAP\0"
  /* 3748 */ "G_BSWAP\0"
  /* 3756 */ "G_SITOFP\0"
  /* 3765 */ "G_UITOFP\0"
  /* 3774 */ "G_FCMP\0"
  /* 3781 */ "G_ICMP\0"
  /* 3788 */ "JUMP\0"
  /* 3793 */ "ENDLOOP\0"
  /* 3801 */ "WHILELOOP\0"
  /* 3811 */ "G_CTPOP\0"
  /* 3819 */ "PATCHABLE_OP\0"
  /* 3832 */ "FAULTING_OP\0"
  /* 3844 */ "PREALLOCATED_SETUP\0"
  /* 3863 */ "G_FEXP\0"
  /* 3870 */ "G_BR\0"
  /* 3875 */ "INLINEASM_BR\0"
  /* 3888 */ "G_BLOCK_ADDR\0"
  /* 3901 */ "MOV_IMM_GLOBAL_ADDR\0"
  /* 3921 */ "GROUP_BARRIER\0"
  /* 3935 */ "CF_ALU_ELSE_AFTER\0"
  /* 3953 */ "CF_ALU_POP_AFTER\0"
  /* 3970 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 3995 */ "G_READCYCLECOUNTER\0"
  /* 4014 */ "G_READ_REGISTER\0"
  /* 4030 */ "G_WRITE_REGISTER\0"
  /* 4047 */ "G_ASHR\0"
  /* 4054 */ "G_FSHR\0"
  /* 4061 */ "G_LSHR\0"
  /* 4068 */ "RAT_MSKOR\0"
  /* 4078 */ "G_FFLOOR\0"
  /* 4087 */ "G_BUILD_VECTOR\0"
  /* 4102 */ "G_SHUFFLE_VECTOR\0"
  /* 4119 */ "G_VECREDUCE_XOR\0"
  /* 4135 */ "G_XOR\0"
  /* 4141 */ "LDS_XOR\0"
  /* 4149 */ "G_ATOMICRMW_XOR\0"
  /* 4165 */ "G_VECREDUCE_OR\0"
  /* 4180 */ "G_OR\0"
  /* 4185 */ "LDS_OR\0"
  /* 4192 */ "G_ATOMICRMW_OR\0"
  /* 4207 */ "TEX_LDPTR\0"
  /* 4217 */ "G_INTTOPTR\0"
  /* 4228 */ "G_FABS\0"
  /* 4235 */ "G_ABS\0"
  /* 4241 */ "G_UNMERGE_VALUES\0"
  /* 4258 */ "G_MERGE_VALUES\0"
  /* 4273 */ "LITERALS\0"
  /* 4282 */ "G_FCOS\0"
  /* 4289 */ "G_CONCAT_VECTORS\0"
  /* 4306 */ "COPY_TO_REGCLASS\0"
  /* 4323 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 4353 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 4380 */ "G_SSUBSAT\0"
  /* 4390 */ "G_USUBSAT\0"
  /* 4400 */ "G_SADDSAT\0"
  /* 4410 */ "G_UADDSAT\0"
  /* 4420 */ "G_SSHLSAT\0"
  /* 4430 */ "G_USHLSAT\0"
  /* 4440 */ "G_SMULFIXSAT\0"
  /* 4453 */ "G_UMULFIXSAT\0"
  /* 4466 */ "G_SDIVFIXSAT\0"
  /* 4479 */ "G_UDIVFIXSAT\0"
  /* 4492 */ "FRACT\0"
  /* 4498 */ "G_EXTRACT\0"
  /* 4508 */ "G_SELECT\0"
  /* 4517 */ "G_BRINDIRECT\0"
  /* 4530 */ "RAT_ATOMIC_RSUB_NORET\0"
  /* 4552 */ "RAT_ATOMIC_SUB_NORET\0"
  /* 4573 */ "RAT_ATOMIC_ADD_NORET\0"
  /* 4594 */ "RAT_ATOMIC_AND_NORET\0"
  /* 4615 */ "RAT_ATOMIC_XOR_NORET\0"
  /* 4636 */ "RAT_ATOMIC_OR_NORET\0"
  /* 4656 */ "RAT_ATOMIC_DEC_UINT_NORET\0"
  /* 4682 */ "RAT_ATOMIC_INC_UINT_NORET\0"
  /* 4708 */ "RAT_ATOMIC_MIN_UINT_NORET\0"
  /* 4734 */ "RAT_ATOMIC_MAX_UINT_NORET\0"
  /* 4760 */ "RAT_ATOMIC_CMPXCHG_INT_NORET\0"
  /* 4789 */ "RAT_ATOMIC_XCHG_INT_NORET\0"
  /* 4815 */ "RAT_ATOMIC_MIN_INT_NORET\0"
  /* 4840 */ "RAT_ATOMIC_MAX_INT_NORET\0"
  /* 4865 */ "LDS_SUB_RET\0"
  /* 4877 */ "LDS_UBYTE_READ_RET\0"
  /* 4896 */ "LDS_BYTE_READ_RET\0"
  /* 4914 */ "LDS_READ_RET\0"
  /* 4927 */ "LDS_USHORT_READ_RET\0"
  /* 4947 */ "LDS_SHORT_READ_RET\0"
  /* 4966 */ "LDS_ADD_RET\0"
  /* 4978 */ "LDS_AND_RET\0"
  /* 4990 */ "PATCHABLE_RET\0"
  /* 5004 */ "LDS_WRXCHG_RET\0"
  /* 5019 */ "LDS_XOR_RET\0"
  /* 5031 */ "LDS_OR_RET\0"
  /* 5042 */ "LDS_MIN_UINT_RET\0"
  /* 5059 */ "LDS_MAX_UINT_RET\0"
  /* 5076 */ "LDS_MIN_INT_RET\0"
  /* 5092 */ "LDS_MAX_INT_RET\0"
  /* 5108 */ "LDS_CMPST_RET\0"
  /* 5122 */ "G_MEMSET\0"
  /* 5131 */ "IF_PREDICATE_SET\0"
  /* 5148 */ "KILLGT\0"
  /* 5155 */ "SGT\0"
  /* 5159 */ "PRED_SETGT\0"
  /* 5170 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 5194 */ "G_BRJT\0"
  /* 5201 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 5222 */ "G_INSERT_VECTOR_ELT\0"
  /* 5242 */ "DEFAULT\0"
  /* 5250 */ "G_FCONSTANT\0"
  /* 5262 */ "G_CONSTANT\0"
  /* 5273 */ "STATEPOINT\0"
  /* 5284 */ "PATCHPOINT\0"
  /* 5295 */ "G_PTRTOINT\0"
  /* 5306 */ "G_FRINT\0"
  /* 5314 */ "G_INTRINSIC_LRINT\0"
  /* 5332 */ "SUBB_UINT\0"
  /* 5342 */ "ADDC_UINT\0"
  /* 5352 */ "SETGE_UINT\0"
  /* 5363 */ "FFBH_UINT\0"
  /* 5373 */ "LDS_MIN_UINT\0"
  /* 5386 */ "SETGT_UINT\0"
  /* 5397 */ "LDS_MAX_UINT\0"
  /* 5410 */ "G_FNEARBYINT\0"
  /* 5423 */ "SUB_INT\0"
  /* 5431 */ "ADD_INT\0"
  /* 5439 */ "AND_INT\0"
  /* 5447 */ "CNDE_INT\0"
  /* 5456 */ "CNDGE_INT\0"
  /* 5466 */ "PRED_SETGE_INT\0"
  /* 5481 */ "PRED_SETNE_INT\0"
  /* 5496 */ "PRED_SETE_INT\0"
  /* 5510 */ "FFBL_INT\0"
  /* 5519 */ "LDS_MIN_INT\0"
  /* 5531 */ "XOR_INT\0"
  /* 5539 */ "CNDGT_INT\0"
  /* 5549 */ "PRED_SETGT_INT\0"
  /* 5564 */ "BCNT_INT\0"
  /* 5573 */ "NOT_INT\0"
  /* 5581 */ "LDS_MAX_INT\0"
  /* 5593 */ "G_VASTART\0"
  /* 5603 */ "LIFETIME_START\0"
  /* 5618 */ "G_INSERT\0"
  /* 5627 */ "G_FSQRT\0"
  /* 5635 */ "G_STRICT_FSQRT\0"
  /* 5650 */ "G_BITCAST\0"
  /* 5660 */ "G_ADDRSPACE_CAST\0"
  /* 5677 */ "LDS_CMPST\0"
  /* 5687 */ "G_FPEXT\0"
  /* 5695 */ "G_SEXT\0"
  /* 5702 */ "G_ANYEXT\0"
  /* 5711 */ "G_ZEXT\0"
  /* 5718 */ "CF_ALU\0"
  /* 5725 */ "G_FDIV\0"
  /* 5732 */ "G_STRICT_FDIV\0"
  /* 5746 */ "G_SDIV\0"
  /* 5753 */ "G_UDIV\0"
  /* 5760 */ "MOV\0"
  /* 5764 */ "TEX_GET_GRADIENTS_V\0"
  /* 5784 */ "TEX_SET_GRADIENTS_V\0"
  /* 5804 */ "TXD_SHADOW\0"
  /* 5815 */ "G_FPOW\0"
  /* 5822 */ "INTERP_ZW\0"
  /* 5832 */ "INTERP_PAIR_ZW\0"
  /* 5847 */ "G_VECREDUCE_FMAX\0"
  /* 5864 */ "G_VECREDUCE_SMAX\0"
  /* 5881 */ "G_SMAX\0"
  /* 5888 */ "G_VECREDUCE_UMAX\0"
  /* 5905 */ "G_UMAX\0"
  /* 5912 */ "G_ATOMICRMW_UMAX\0"
  /* 5929 */ "G_ATOMICRMW_MAX\0"
  /* 5945 */ "G_FRAME_INDEX\0"
  /* 5959 */ "G_SMULFIX\0"
  /* 5969 */ "G_UMULFIX\0"
  /* 5979 */ "G_SDIVFIX\0"
  /* 5989 */ "G_UDIVFIX\0"
  /* 5999 */ "PRED_X\0"
  /* 6006 */ "G_MEMCPY\0"
  /* 6015 */ "CONST_COPY\0"
  /* 6026 */ "INTERP_XY\0"
  /* 6036 */ "INTERP_PAIR_XY\0"
  /* 6051 */ "G_CTLZ\0"
  /* 6058 */ "G_CTTZ\0"
  /* 6065 */ "R600_RegisterLoad\0"
  /* 6083 */ "R600_RegisterStore\0"
  /* 6102 */ "R600_ExportBuf\0"
  /* 6117 */ "EG_ExportBuf\0"
  /* 6130 */ "VTX_READ_32_eg\0"
  /* 6145 */ "RAT_WRITE_CACHELESS_32_eg\0"
  /* 6171 */ "MULADD_UINT24_eg\0"
  /* 6188 */ "MULHI_UINT24_eg\0"
  /* 6204 */ "MUL_UINT24_eg\0"
  /* 6218 */ "VTX_READ_64_eg\0"
  /* 6233 */ "RAT_WRITE_CACHELESS_64_eg\0"
  /* 6259 */ "DOT4_eg\0"
  /* 6267 */ "VTX_READ_16_eg\0"
  /* 6282 */ "VTX_READ_128_eg\0"
  /* 6298 */ "RAT_WRITE_CACHELESS_128_eg\0"
  /* 6325 */ "VTX_READ_8_eg\0"
  /* 6339 */ "FMA_eg\0"
  /* 6346 */ "MULADD_eg\0"
  /* 6356 */ "LOG_CLAMPED_eg\0"
  /* 6371 */ "RECIP_CLAMPED_eg\0"
  /* 6388 */ "RECIPSQRT_CLAMPED_eg\0"
  /* 6409 */ "RAT_STORE_TYPED_eg\0"
  /* 6428 */ "CNDE_eg\0"
  /* 6436 */ "MULADD_IEEE_eg\0"
  /* 6451 */ "LOG_IEEE_eg\0"
  /* 6463 */ "RECIP_IEEE_eg\0"
  /* 6477 */ "EXP_IEEE_eg\0"
  /* 6489 */ "RECIPSQRT_IEEE_eg\0"
  /* 6507 */ "CNDGE_eg\0"
  /* 6516 */ "LSHL_eg\0"
  /* 6524 */ "SIN_eg\0"
  /* 6531 */ "ASHR_eg\0"
  /* 6539 */ "LSHR_eg\0"
  /* 6547 */ "COS_eg\0"
  /* 6554 */ "CNDGT_eg\0"
  /* 6563 */ "MUL_LIT_eg\0"
  /* 6574 */ "UINT_TO_FLT_eg\0"
  /* 6589 */ "BFE_UINT_eg\0"
  /* 6601 */ "MULHI_UINT_eg\0"
  /* 6615 */ "MULLO_UINT_eg\0"
  /* 6629 */ "FLT_TO_UINT_eg\0"
  /* 6644 */ "RECIP_UINT_eg\0"
  /* 6658 */ "MOVA_INT_eg\0"
  /* 6670 */ "BFE_INT_eg\0"
  /* 6681 */ "BFI_INT_eg\0"
  /* 6692 */ "MULHI_INT_eg\0"
  /* 6705 */ "BFM_INT_eg\0"
  /* 6716 */ "BIT_ALIGN_INT_eg\0"
  /* 6733 */ "MULLO_INT_eg\0"
  /* 6746 */ "FLT_TO_INT_eg\0"
  /* 6760 */ "CUBE_r600_real\0"
  /* 6775 */ "CUBE_eg_real\0"
  /* 6788 */ "VTX_READ_32_cm\0"
  /* 6803 */ "MULADD_INT24_cm\0"
  /* 6819 */ "MUL_INT24_cm\0"
  /* 6832 */ "VTX_READ_64_cm\0"
  /* 6847 */ "VTX_READ_16_cm\0"
  /* 6862 */ "VTX_READ_128_cm\0"
  /* 6878 */ "VTX_READ_8_cm\0"
  /* 6892 */ "RECIP_CLAMPED_cm\0"
  /* 6909 */ "RECIPSQRT_CLAMPED_cm\0"
  /* 6930 */ "RAT_STORE_TYPED_cm\0"
  /* 6949 */ "LOG_IEEE_cm\0"
  /* 6961 */ "RECIP_IEEE_cm\0"
  /* 6975 */ "EXP_IEEE_cm\0"
  /* 6987 */ "RECIPSQRT_IEEE_cm\0"
  /* 7005 */ "SIN_cm\0"
  /* 7012 */ "COS_cm\0"
  /* 7019 */ "MULHI_UINT_cm\0"
  /* 7033 */ "MULLO_UINT_cm\0"
  /* 7047 */ "MULHI_INT_cm\0"
  /* 7060 */ "MULLO_INT_cm\0"
  /* 7073 */ "CUBE_r600_pseudo\0"
  /* 7090 */ "CUBE_eg_pseudo\0"
  /* 7105 */ "R600_ExportSwz\0"
  /* 7120 */ "EG_ExportSwz\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned R600InstrNameIndices[] = {
    2741U, 3119U, 3875U, 3330U, 2813U, 2794U, 2822U, 2960U, 
    2368U, 2383U, 2296U, 2410U, 4306U, 2182U, 2309U, 2803U, 
    1887U, 6021U, 1983U, 5603U, 1779U, 1850U, 3739U, 2948U, 
    5284U, 1829U, 3844U, 2621U, 5273U, 2022U, 3832U, 3819U, 
    3970U, 4990U, 5170U, 2880U, 2927U, 2900U, 2839U, 1669U, 
    1331U, 3040U, 5746U, 5753U, 3105U, 3112U, 1749U, 4180U, 
    4135U, 2294U, 2739U, 5945U, 2192U, 4498U, 4241U, 5618U, 
    4258U, 4087U, 1417U, 4289U, 5295U, 4217U, 5650U, 2233U, 
    1391U, 1811U, 5314U, 3171U, 3995U, 1566U, 1494U, 1524U, 
    1551U, 1475U, 1505U, 2070U, 2054U, 4323U, 2561U, 2589U, 
    1693U, 1345U, 1763U, 1716U, 4192U, 4149U, 5929U, 3307U, 
    5912U, 3290U, 1636U, 1314U, 1879U, 1792U, 4517U, 1361U, 
    4353U, 5702U, 1409U, 5262U, 5250U, 5593U, 2613U, 5695U, 
    2397U, 5711U, 2866U, 4061U, 4047U, 2859U, 4054U, 3781U, 
    3774U, 4508U, 3691U, 1908U, 3675U, 1871U, 3683U, 1900U, 
    3667U, 1863U, 3731U, 3723U, 2691U, 2683U, 4410U, 4400U, 
    4390U, 4380U, 4430U, 4420U, 5959U, 5969U, 4440U, 4453U, 
    5979U, 5989U, 4466U, 4479U, 1594U, 1293U, 2982U, 1244U, 
    1468U, 5725U, 3084U, 5815U, 2763U, 3863U, 1069U, 2606U, 
    1061U, 587U, 2361U, 5687U, 1381U, 2745U, 2754U, 3756U, 
    3765U, 4228U, 3193U, 2242U, 3151U, 3161U, 1925U, 1940U, 
    3129U, 3140U, 1675U, 2784U, 3259U, 5881U, 3283U, 5905U, 
    4235U, 3870U, 5194U, 5222U, 5201U, 4102U, 6058U, 2276U, 
    6051U, 2258U, 3811U, 3748U, 2083U, 2872U, 4282U, 3323U, 
    5627U, 4078U, 5306U, 5410U, 5660U, 3888U, 1970U, 1438U, 
    1622U, 1300U, 3010U, 5732U, 3091U, 1250U, 5635U, 4014U, 
    4030U, 6006U, 2223U, 5122U, 1601U, 2989U, 1577U, 2965U, 
    5847U, 3225U, 1653U, 3024U, 1733U, 4165U, 4119U, 5864U, 
    3242U, 5888U, 3266U, 2666U, 762U, 928U, 2778U, 751U, 
    917U, 875U, 1041U, 816U, 982U, 6015U, 2214U, 729U, 
    895U, 835U, 1001U, 778U, 944U, 7090U, 7073U, 5242U, 
    1204U, 3205U, 2078U, 1788U, 1373U, 2323U, 3793U, 3217U, 
    2673U, 160U, 82U, 1376U, 743U, 909U, 858U, 1024U, 
    800U, 966U, 5131U, 3788U, 1801U, 2145U, 690U, 3901U, 
    702U, 5999U, 1077U, 1165U, 1097U, 1185U, 6065U, 6083U, 
    3660U, 3346U, 1846U, 5804U, 3801U, 1590U, 5342U, 5431U, 
    2109U, 5439U, 6531U, 388U, 5564U, 6670U, 6589U, 6681U, 
    6705U, 6716U, 2875U, 5718U, 2771U, 2207U, 3935U, 3953U, 
    2035U, 2547U, 170U, 2463U, 65U, 2452U, 34U, 3074U, 
    2442U, 22U, 2503U, 108U, 2478U, 47U, 2424U, 0U, 
    2433U, 11U, 5447U, 6428U, 267U, 5456U, 6507U, 358U, 
    5539U, 6554U, 417U, 7012U, 6547U, 408U, 578U, 6775U, 
    6760U, 6259U, 186U, 6117U, 7120U, 2514U, 121U, 6975U, 
    6477U, 324U, 2096U, 5363U, 5510U, 4081U, 714U, 1210U, 
    6746U, 553U, 6629U, 490U, 6339U, 4492U, 3921U, 657U, 
    6036U, 5832U, 1535U, 6026U, 5822U, 6575U, 442U, 5148U, 
    1685U, 4966U, 1755U, 4978U, 4896U, 2130U, 5677U, 5108U, 
    5581U, 5092U, 5397U, 5059U, 5519U, 5076U, 5373U, 5042U, 
    4185U, 5031U, 4914U, 4947U, 2166U, 1337U, 4865U, 4877U, 
    4927U, 2156U, 2578U, 5004U, 4141U, 5019U, 4273U, 6356U, 
    208U, 6949U, 6451U, 294U, 2489U, 92U, 6516U, 369U, 
    6539U, 398U, 5860U, 648U, 5585U, 5401U, 3238U, 628U, 
    5523U, 5377U, 5760U, 6658U, 2978U, 6436U, 277U, 6803U, 
    6171U, 6346U, 196U, 7047U, 1132U, 6692U, 523U, 6188U, 
    7019U, 1116U, 6601U, 458U, 7060U, 6733U, 538U, 7033U, 
    6615U, 474U, 1916U, 6819U, 6563U, 428U, 6204U, 5573U, 
    5532U, 1573U, 2540U, 151U, 2120U, 5496U, 1959U, 5466U, 
    5159U, 5549U, 2011U, 5481U, 6102U, 7105U, 4573U, 3392U, 
    4594U, 3411U, 4760U, 3563U, 4656U, 3467U, 4682U, 3491U, 
    4840U, 3637U, 4734U, 3539U, 4815U, 3614U, 4708U, 3515U, 
    4636U, 3449U, 4530U, 3353U, 4552U, 3373U, 4789U, 3590U, 
    4615U, 3430U, 4068U, 1225U, 672U, 1147U, 6930U, 6409U, 
    6298U, 6145U, 6233U, 6909U, 6388U, 244U, 6987U, 6489U, 
    338U, 6892U, 6371U, 225U, 6961U, 6463U, 308U, 6644U, 
    507U, 2001U, 2125U, 618U, 5501U, 596U, 5471U, 5352U, 
    637U, 5554U, 5386U, 607U, 5486U, 1955U, 5155U, 7005U, 
    6524U, 379U, 569U, 2007U, 5332U, 5423U, 2699U, 5764U, 
    3699U, 1709U, 4207U, 1990U, 1455U, 2638U, 3046U, 1263U, 
    2653U, 3061U, 1279U, 2719U, 5784U, 2329U, 2346U, 1385U, 
    6574U, 441U, 6862U, 6282U, 6847U, 6267U, 6788U, 6130U, 
    6832U, 6218U, 6878U, 6325U, 2526U, 135U, 5531U, 
};

static inline void InitR600MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, nullptr, nullptr, 567);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct R600GenInstrInfo : public TargetInstrInfo {
  explicit R600GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~R600GenInstrInfo() override = default;

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
extern const MCInstrDesc R600Insts[];
extern const unsigned R600InstrNameIndices[];
extern const char R600InstrNameData[];
R600GenInstrInfo::R600GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, nullptr, nullptr, 567);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace R600 {
namespace OpName {
enum {
  ADDR = 98,
  COUNT = 105,
  Enabled = 106,
  KCACHE_ADDR0 = 103,
  KCACHE_ADDR1 = 104,
  KCACHE_BANK0 = 99,
  KCACHE_BANK1 = 100,
  KCACHE_MODE0 = 101,
  KCACHE_MODE1 = 102,
  addr = 72,
  bank_swizzle = 93,
  chan = 73,
  clamp = 80,
  clamp_W = 58,
  clamp_X = 7,
  clamp_Y = 24,
  clamp_Z = 41,
  dst = 0,
  dst_rel = 79,
  dst_rel_W = 57,
  dst_rel_X = 6,
  dst_rel_Y = 23,
  dst_rel_Z = 40,
  last = 90,
  literal = 92,
  literal0 = 70,
  literal1 = 71,
  omod = 78,
  omod_W = 56,
  omod_X = 5,
  omod_Y = 22,
  omod_Z = 39,
  pred_sel = 91,
  pred_sel_W = 69,
  pred_sel_X = 18,
  pred_sel_Y = 35,
  pred_sel_Z = 52,
  src0 = 1,
  src0_W = 59,
  src0_X = 8,
  src0_Y = 25,
  src0_Z = 42,
  src0_abs = 83,
  src0_abs_W = 62,
  src0_abs_X = 11,
  src0_abs_Y = 28,
  src0_abs_Z = 45,
  src0_neg = 81,
  src0_neg_W = 60,
  src0_neg_X = 9,
  src0_neg_Y = 26,
  src0_neg_Z = 43,
  src0_rel = 82,
  src0_rel_W = 61,
  src0_rel_X = 10,
  src0_rel_Y = 27,
  src0_rel_Z = 44,
  src0_sel = 84,
  src0_sel_W = 63,
  src0_sel_X = 12,
  src0_sel_Y = 29,
  src0_sel_Z = 46,
  src1 = 85,
  src1_W = 64,
  src1_X = 13,
  src1_Y = 30,
  src1_Z = 47,
  src1_abs = 88,
  src1_abs_W = 67,
  src1_abs_X = 16,
  src1_abs_Y = 33,
  src1_abs_Z = 50,
  src1_neg = 86,
  src1_neg_W = 65,
  src1_neg_X = 14,
  src1_neg_Y = 31,
  src1_neg_Z = 48,
  src1_rel = 87,
  src1_rel_W = 66,
  src1_rel_X = 15,
  src1_rel_Y = 32,
  src1_rel_Z = 49,
  src1_sel = 89,
  src1_sel_W = 68,
  src1_sel_X = 17,
  src1_sel_Y = 34,
  src1_sel_Z = 51,
  src2 = 94,
  src2_neg = 95,
  src2_rel = 96,
  src2_sel = 97,
  update_exec_mask = 75,
  update_exec_mask_W = 53,
  update_exec_mask_X = 2,
  update_exec_mask_Y = 19,
  update_exec_mask_Z = 36,
  update_pred = 76,
  update_pred_W = 54,
  update_pred_X = 3,
  update_pred_Y = 20,
  update_pred_Z = 37,
  val = 74,
  write = 77,
  write_W = 55,
  write_X = 4,
  write_Y = 21,
  write_Z = 38,
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace R600 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  static const int16_t OperandMap [][107] = {
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 7, 8, -1, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 10, 11, -1, 12, 7, -1, 8, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, -1, -1, -1, -1, -1, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 4, 5, -1, 6, 7, 8, 9, -1, 10, 15, 16, 17, 18, 11, 12, 13, 14, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 6, 7, 8, 9, -1, -1, -1, -1, -1, 10, 11, 12, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 6, 7, -1, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 9, 10, -1, 11, 6, -1, 7, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, },
};
  switch(Opcode) {
  case R600::CUBE_eg_pseudo:
  case R600::CUBE_r600_pseudo:
    return OperandMap[0][NamedIdx];
  case R600::LDS_ADD_RET:
  case R600::LDS_AND_RET:
  case R600::LDS_MAX_INT_RET:
  case R600::LDS_MAX_UINT_RET:
  case R600::LDS_MIN_INT_RET:
  case R600::LDS_MIN_UINT_RET:
  case R600::LDS_OR_RET:
  case R600::LDS_SUB_RET:
  case R600::LDS_WRXCHG_RET:
  case R600::LDS_XOR_RET:
    return OperandMap[1][NamedIdx];
  case R600::LDS_CMPST_RET:
    return OperandMap[2][NamedIdx];
  case R600::LDS_BYTE_READ_RET:
  case R600::LDS_READ_RET:
  case R600::LDS_SHORT_READ_RET:
  case R600::LDS_UBYTE_READ_RET:
  case R600::LDS_USHORT_READ_RET:
    return OperandMap[3][NamedIdx];
  case R600::BFE_INT_eg:
  case R600::BFE_UINT_eg:
  case R600::BFI_INT_eg:
  case R600::BIT_ALIGN_INT_eg:
  case R600::CNDE_INT:
  case R600::CNDE_eg:
  case R600::CNDE_r600:
  case R600::CNDGE_INT:
  case R600::CNDGE_eg:
  case R600::CNDGE_r600:
  case R600::CNDGT_INT:
  case R600::CNDGT_eg:
  case R600::CNDGT_r600:
  case R600::FMA_eg:
  case R600::MULADD_IEEE_eg:
  case R600::MULADD_IEEE_r600:
  case R600::MULADD_INT24_cm:
  case R600::MULADD_UINT24_eg:
  case R600::MULADD_eg:
  case R600::MULADD_r600:
  case R600::MUL_LIT_eg:
  case R600::MUL_LIT_r600:
    return OperandMap[4][NamedIdx];
  case R600::BCNT_INT:
  case R600::CEIL:
  case R600::COS_cm:
  case R600::COS_eg:
  case R600::COS_r600:
  case R600::COS_r700:
  case R600::EXP_IEEE_cm:
  case R600::EXP_IEEE_eg:
  case R600::EXP_IEEE_r600:
  case R600::FFBH_UINT:
  case R600::FFBL_INT:
  case R600::FLOOR:
  case R600::FLT16_TO_FLT32:
  case R600::FLT32_TO_FLT16:
  case R600::FLT_TO_INT_eg:
  case R600::FLT_TO_INT_r600:
  case R600::FLT_TO_UINT_eg:
  case R600::FLT_TO_UINT_r600:
  case R600::FRACT:
  case R600::INTERP_LOAD_P0:
  case R600::INT_TO_FLT_eg:
  case R600::INT_TO_FLT_r600:
  case R600::LOG_CLAMPED_eg:
  case R600::LOG_CLAMPED_r600:
  case R600::LOG_IEEE_cm:
  case R600::LOG_IEEE_eg:
  case R600::LOG_IEEE_r600:
  case R600::MOV:
  case R600::MOVA_INT_eg:
  case R600::NOT_INT:
  case R600::RECIPSQRT_CLAMPED_cm:
  case R600::RECIPSQRT_CLAMPED_eg:
  case R600::RECIPSQRT_CLAMPED_r600:
  case R600::RECIPSQRT_IEEE_cm:
  case R600::RECIPSQRT_IEEE_eg:
  case R600::RECIPSQRT_IEEE_r600:
  case R600::RECIP_CLAMPED_cm:
  case R600::RECIP_CLAMPED_eg:
  case R600::RECIP_CLAMPED_r600:
  case R600::RECIP_IEEE_cm:
  case R600::RECIP_IEEE_eg:
  case R600::RECIP_IEEE_r600:
  case R600::RECIP_UINT_eg:
  case R600::RECIP_UINT_r600:
  case R600::RNDNE:
  case R600::SIN_cm:
  case R600::SIN_eg:
  case R600::SIN_r600:
  case R600::SIN_r700:
  case R600::TRUNC:
  case R600::UINT_TO_FLT_eg:
  case R600::UINT_TO_FLT_r600:
    return OperandMap[5][NamedIdx];
  case R600::ADD:
  case R600::ADDC_UINT:
  case R600::ADD_INT:
  case R600::AND_INT:
  case R600::ASHR_eg:
  case R600::ASHR_r600:
  case R600::BFM_INT_eg:
  case R600::CUBE_eg_real:
  case R600::CUBE_r600_real:
  case R600::DOT4_eg:
  case R600::DOT4_r600:
  case R600::INTERP_XY:
  case R600::INTERP_ZW:
  case R600::KILLGT:
  case R600::LSHL_eg:
  case R600::LSHL_r600:
  case R600::LSHR_eg:
  case R600::LSHR_r600:
  case R600::MAX:
  case R600::MAX_DX10:
  case R600::MAX_INT:
  case R600::MAX_UINT:
  case R600::MIN:
  case R600::MIN_DX10:
  case R600::MIN_INT:
  case R600::MIN_UINT:
  case R600::MUL:
  case R600::MULHI_INT_cm:
  case R600::MULHI_INT_cm24:
  case R600::MULHI_INT_eg:
  case R600::MULHI_INT_r600:
  case R600::MULHI_UINT24_eg:
  case R600::MULHI_UINT_cm:
  case R600::MULHI_UINT_cm24:
  case R600::MULHI_UINT_eg:
  case R600::MULHI_UINT_r600:
  case R600::MULLO_INT_cm:
  case R600::MULLO_INT_eg:
  case R600::MULLO_INT_r600:
  case R600::MULLO_UINT_cm:
  case R600::MULLO_UINT_eg:
  case R600::MULLO_UINT_r600:
  case R600::MUL_IEEE:
  case R600::MUL_INT24_cm:
  case R600::MUL_UINT24_eg:
  case R600::OR_INT:
  case R600::PRED_SETE:
  case R600::PRED_SETE_INT:
  case R600::PRED_SETGE:
  case R600::PRED_SETGE_INT:
  case R600::PRED_SETGT:
  case R600::PRED_SETGT_INT:
  case R600::PRED_SETNE:
  case R600::PRED_SETNE_INT:
  case R600::SETE:
  case R600::SETE_DX10:
  case R600::SETE_INT:
  case R600::SETGE_DX10:
  case R600::SETGE_INT:
  case R600::SETGE_UINT:
  case R600::SETGT_DX10:
  case R600::SETGT_INT:
  case R600::SETGT_UINT:
  case R600::SETNE_DX10:
  case R600::SETNE_INT:
  case R600::SGE:
  case R600::SGT:
  case R600::SNE:
  case R600::SUBB_UINT:
  case R600::SUB_INT:
  case R600::XOR_INT:
    return OperandMap[6][NamedIdx];
  case R600::DOT_4:
    return OperandMap[7][NamedIdx];
  case R600::R600_RegisterLoad:
    return OperandMap[8][NamedIdx];
  case R600::LDS_ADD:
  case R600::LDS_AND:
  case R600::LDS_BYTE_WRITE:
  case R600::LDS_MAX_INT:
  case R600::LDS_MAX_UINT:
  case R600::LDS_MIN_INT:
  case R600::LDS_MIN_UINT:
  case R600::LDS_OR:
  case R600::LDS_SHORT_WRITE:
  case R600::LDS_SUB:
  case R600::LDS_WRITE:
  case R600::LDS_WRXCHG:
  case R600::LDS_XOR:
    return OperandMap[9][NamedIdx];
  case R600::LDS_CMPST:
    return OperandMap[10][NamedIdx];
  case R600::R600_RegisterStore:
    return OperandMap[11][NamedIdx];
  case R600::CF_ALU:
  case R600::CF_ALU_BREAK:
  case R600::CF_ALU_CONTINUE:
  case R600::CF_ALU_ELSE_AFTER:
  case R600::CF_ALU_POP_AFTER:
  case R600::CF_ALU_PUSH_BEFORE:
    return OperandMap[12][NamedIdx];
  default: return -1;
  }
}
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace R600 {
namespace OpTypes {
enum OperandType {
  ABS = 0,
  BANK_SWIZZLE = 1,
  CLAMP = 2,
  CT = 3,
  FRAMEri = 4,
  InstFlag = 5,
  KCACHE = 6,
  LAST = 7,
  LITERAL = 8,
  MEMrr = 9,
  MEMxi = 10,
  NEG = 11,
  OMOD = 12,
  R600_Pred = 13,
  REL = 14,
  RSel = 15,
  SEL = 16,
  UEM = 17,
  UP = 18,
  WRITE = 19,
  brtarget = 20,
  f32imm = 21,
  f64imm = 22,
  i16imm = 23,
  i1imm = 24,
  i32imm = 25,
  i64imm = 26,
  i8imm = 27,
  ptype0 = 28,
  ptype1 = 29,
  ptype2 = 30,
  ptype3 = 31,
  ptype4 = 32,
  ptype5 = 33,
  s16imm = 34,
  type0 = 35,
  type1 = 36,
  type2 = 37,
  type3 = 38,
  type4 = 39,
  type5 = 40,
  u16imm = 41,
  u32imm = 42,
  u8imm = 43,
  untyped_imm_0 = 44,
  R600_Addr = 45,
  R600_Addr_W = 46,
  R600_Addr_Y = 47,
  R600_Addr_Z = 48,
  R600_ArrayBase = 49,
  R600_KC0 = 50,
  R600_KC0_W = 51,
  R600_KC0_X = 52,
  R600_KC0_Y = 53,
  R600_KC0_Z = 54,
  R600_KC1 = 55,
  R600_KC1_W = 56,
  R600_KC1_X = 57,
  R600_KC1_Y = 58,
  R600_KC1_Z = 59,
  R600_LDS_SRC_REG = 60,
  R600_Predicate = 61,
  R600_Predicate_Bit = 62,
  R600_Reg128 = 63,
  R600_Reg128Vertical = 64,
  R600_Reg32 = 65,
  R600_Reg64 = 66,
  R600_Reg64Vertical = 67,
  R600_TReg32 = 68,
  R600_TReg32_W = 69,
  R600_TReg32_X = 70,
  R600_TReg32_Y = 71,
  R600_TReg32_Z = 72,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace R600 {
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
    573,
    575,
    577,
    577,
    579,
    581,
    582,
    583,
    584,
    585,
    587,
    587,
    589,
    591,
    592,
    593,
    594,
    595,
    597,
    599,
    599,
    670,
    670,
    670,
    670,
    670,
    670,
    670,
    670,
    670,
    672,
    674,
    674,
    676,
    678,
    679,
    680,
    681,
    682,
    683,
    684,
    686,
    687,
    689,
    691,
    693,
    697,
    700,
    703,
    707,
    711,
    715,
    719,
    719,
    719,
    726,
    733,
    733,
    754,
    775,
    796,
    797,
    818,
    839,
    860,
    874,
    893,
    912,
    931,
    952,
    971,
    985,
    994,
    1003,
    1012,
    1021,
    1030,
    1039,
    1039,
    1039,
    1040,
    1041,
    1043,
    1045,
    1045,
    1045,
    1045,
    1047,
    1049,
    1051,
    1052,
    1054,
    1056,
    1058,
    1060,
    1079,
    1098,
    1117,
    1136,
    1155,
    1174,
    1193,
    1212,
    1231,
    1245,
    1259,
    1273,
    1287,
    1308,
    1329,
    1350,
    1371,
    1378,
    1387,
    1388,
    1389,
    1403,
    1417,
    1431,
    1432,
    1446,
    1460,
    1474,
    1488,
    1502,
    1516,
    1530,
    1544,
    1558,
    1577,
    1591,
    1591,
    1605,
    1610,
    1615,
    1617,
    1638,
    1659,
    1673,
    1687,
    1708,
    1717,
    1727,
    1736,
    1746,
    1753,
    1762,
    1774,
    1787,
    1796,
    1806,
    1815,
    1825,
    1834,
    1844,
    1853,
    1863,
    1872,
    1882,
    1889,
    1896,
    1905,
    1914,
    1924,
    1931,
    1938,
    1947,
    1956,
    1966,
    1975,
    1985,
    1987,
    2001,
    2015,
    2029,
    2043,
    2057,
    2058,
    2059,
    2080,
    2101,
    2122,
    2143,
    2164,
    2185,
    2206,
    2227,
    2248,
    2269,
    2290,
    2311,
    2325,
    2339,
    2360,
    2379,
    2398,
    2417,
    2436,
    2455,
    2474,
    2495,
    2516,
    2537,
    2558,
    2579,
    2600,
    2621,
    2642,
    2663,
    2684,
    2705,
    2726,
    2747,
    2768,
    2789,
    2810,
    2831,
    2850,
    2869,
    2890,
    2904,
    2925,
    2925,
    2927,
    2929,
    2950,
    2971,
    2992,
    3013,
    3034,
    3055,
    3076,
    3097,
    3104,
    3113,
    3116,
    3119,
    3122,
    3125,
    3128,
    3131,
    3134,
    3137,
    3140,
    3143,
    3146,
    3149,
    3152,
    3155,
    3158,
    3161,
    3164,
    3167,
    3170,
    3173,
    3176,
    3179,
    3182,
    3185,
    3188,
    3191,
    3194,
    3197,
    3199,
    3201,
    3203,
    3205,
    3209,
    3213,
    3216,
    3219,
    3222,
    3236,
    3250,
    3264,
    3278,
    3292,
    3306,
    3320,
    3334,
    3348,
    3362,
    3376,
    3390,
    3404,
    3418,
    3432,
    3453,
    3474,
    3495,
    3516,
    3537,
    3558,
    3579,
    3600,
    3621,
    3642,
    3663,
    3684,
    3705,
    3719,
    3733,
    3747,
    3761,
    3782,
    3803,
    3824,
    3843,
    3862,
    3881,
    3900,
    3919,
    3938,
    3957,
    3976,
    3995,
    4014,
    4033,
    4052,
    4071,
    4090,
    4109,
    4113,
    4117,
    4131,
    4145,
    4159,
    4163,
    4167,
    4171,
    4175,
    4179,
    4183,
    4187,
    4191,
    4195,
    4199,
    4200,
    4201,
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
    OpTypes::brtarget, 
    OpTypes::brtarget, OpTypes::R600_Reg32, 
    OpTypes::brtarget, OpTypes::R600_Reg32, 
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::i32imm, 
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, 
    /**/
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_X, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_X, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_Y, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_Y, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_Z, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_Z, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_TReg32_W, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_TReg32_W, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::LITERAL, 
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    /**/
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, 
    OpTypes::brtarget, 
    OpTypes::brtarget, OpTypes::R600_Predicate_Bit, 
    OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::f32imm, 
    OpTypes::R600_Reg32, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::i32imm, 
    OpTypes::R600_Predicate_Bit, OpTypes::R600_Reg32, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg64Vertical, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg128Vertical, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg64Vertical, OpTypes::R600_Reg64Vertical, OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg128Vertical, OpTypes::R600_Reg128Vertical, OpTypes::R600_Reg32, OpTypes::R600_Reg32, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    /**/
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    /**/
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_Y, OpTypes::i32imm, OpTypes::R600_TReg32_Y, OpTypes::R600_TReg32_X, 
    OpTypes::R600_TReg32_Z, OpTypes::R600_TReg32_W, OpTypes::i32imm, OpTypes::R600_TReg32_Y, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::BANK_SWIZZLE, 
    OpTypes::LITERAL, OpTypes::LITERAL, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    /**/
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::InstFlag, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::i32imm, OpTypes::InstFlag, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::InstFlag, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::InstFlag, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, OpTypes::InstFlag, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_Reg128, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg32, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_Reg128, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_Reg64, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::R600_TReg32_X, OpTypes::R600_TReg32_X, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::R600_Reg32, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::R600_Reg32, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, OpTypes::R600_Predicate, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace R600 {

enum DisableEncoding {
	DisableEncoding_
};

// getLDSNoRetOp
LLVM_READONLY
int getLDSNoRetOp(uint16_t Opcode) {
static const uint16_t getLDSNoRetOpTable[][2] = {
  { R600::LDS_ADD_RET, R600::LDS_ADD },
  { R600::LDS_AND_RET, R600::LDS_AND },
  { R600::LDS_MAX_INT_RET, R600::LDS_MAX_INT },
  { R600::LDS_MAX_UINT_RET, R600::LDS_MAX_UINT },
  { R600::LDS_MIN_INT_RET, R600::LDS_MIN_INT },
  { R600::LDS_MIN_UINT_RET, R600::LDS_MIN_UINT },
  { R600::LDS_OR_RET, R600::LDS_OR },
  { R600::LDS_SUB_RET, R600::LDS_SUB },
  { R600::LDS_WRXCHG_RET, R600::LDS_WRXCHG },
  { R600::LDS_XOR_RET, R600::LDS_XOR },
}; // End of getLDSNoRetOpTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 10;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (Opcode == getLDSNoRetOpTable[mid][0]) {
      break;
    }
    if (Opcode < getLDSNoRetOpTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getLDSNoRetOpTable[mid][1];
}

} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRMAP_INFO

