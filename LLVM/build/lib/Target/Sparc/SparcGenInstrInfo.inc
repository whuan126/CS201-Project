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

namespace SP {
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
    GETPCX	= 229,
    SELECT_CC_DFP_FCC	= 230,
    SELECT_CC_DFP_ICC	= 231,
    SELECT_CC_FP_FCC	= 232,
    SELECT_CC_FP_ICC	= 233,
    SELECT_CC_Int_FCC	= 234,
    SELECT_CC_Int_ICC	= 235,
    SELECT_CC_QFP_FCC	= 236,
    SELECT_CC_QFP_ICC	= 237,
    SET	= 238,
    ADDCCri	= 239,
    ADDCCrr	= 240,
    ADDCri	= 241,
    ADDCrr	= 242,
    ADDEri	= 243,
    ADDErr	= 244,
    ADDXC	= 245,
    ADDXCCC	= 246,
    ADDXri	= 247,
    ADDXrr	= 248,
    ADDri	= 249,
    ADDrr	= 250,
    ALIGNADDR	= 251,
    ALIGNADDRL	= 252,
    ANDCCri	= 253,
    ANDCCrr	= 254,
    ANDNCCri	= 255,
    ANDNCCrr	= 256,
    ANDNri	= 257,
    ANDNrr	= 258,
    ANDXNrr	= 259,
    ANDXri	= 260,
    ANDXrr	= 261,
    ANDri	= 262,
    ANDrr	= 263,
    ARRAY16	= 264,
    ARRAY32	= 265,
    ARRAY8	= 266,
    BA	= 267,
    BCOND	= 268,
    BCONDA	= 269,
    BINDri	= 270,
    BINDrr	= 271,
    BMASK	= 272,
    BPFCC	= 273,
    BPFCCA	= 274,
    BPFCCANT	= 275,
    BPFCCNT	= 276,
    BPGEZapn	= 277,
    BPGEZapt	= 278,
    BPGEZnapn	= 279,
    BPGEZnapt	= 280,
    BPGZapn	= 281,
    BPGZapt	= 282,
    BPGZnapn	= 283,
    BPGZnapt	= 284,
    BPICC	= 285,
    BPICCA	= 286,
    BPICCANT	= 287,
    BPICCNT	= 288,
    BPLEZapn	= 289,
    BPLEZapt	= 290,
    BPLEZnapn	= 291,
    BPLEZnapt	= 292,
    BPLZapn	= 293,
    BPLZapt	= 294,
    BPLZnapn	= 295,
    BPLZnapt	= 296,
    BPNZapn	= 297,
    BPNZapt	= 298,
    BPNZnapn	= 299,
    BPNZnapt	= 300,
    BPXCC	= 301,
    BPXCCA	= 302,
    BPXCCANT	= 303,
    BPXCCNT	= 304,
    BPZapn	= 305,
    BPZapt	= 306,
    BPZnapn	= 307,
    BPZnapt	= 308,
    BSHUFFLE	= 309,
    CALL	= 310,
    CALLri	= 311,
    CALLrr	= 312,
    CASAasi10	= 313,
    CASArr	= 314,
    CASXrr	= 315,
    CASrr	= 316,
    CBCOND	= 317,
    CBCONDA	= 318,
    CMASK16	= 319,
    CMASK32	= 320,
    CMASK8	= 321,
    CMPri	= 322,
    CMPrr	= 323,
    EDGE16	= 324,
    EDGE16L	= 325,
    EDGE16LN	= 326,
    EDGE16N	= 327,
    EDGE32	= 328,
    EDGE32L	= 329,
    EDGE32LN	= 330,
    EDGE32N	= 331,
    EDGE8	= 332,
    EDGE8L	= 333,
    EDGE8LN	= 334,
    EDGE8N	= 335,
    FABSD	= 336,
    FABSQ	= 337,
    FABSS	= 338,
    FADDD	= 339,
    FADDQ	= 340,
    FADDS	= 341,
    FALIGNADATA	= 342,
    FAND	= 343,
    FANDNOT1	= 344,
    FANDNOT1S	= 345,
    FANDNOT2	= 346,
    FANDNOT2S	= 347,
    FANDS	= 348,
    FBCOND	= 349,
    FBCONDA	= 350,
    FCHKSM16	= 351,
    FCMPD	= 352,
    FCMPEQ16	= 353,
    FCMPEQ32	= 354,
    FCMPGT16	= 355,
    FCMPGT32	= 356,
    FCMPLE16	= 357,
    FCMPLE32	= 358,
    FCMPNE16	= 359,
    FCMPNE32	= 360,
    FCMPQ	= 361,
    FCMPS	= 362,
    FDIVD	= 363,
    FDIVQ	= 364,
    FDIVS	= 365,
    FDMULQ	= 366,
    FDTOI	= 367,
    FDTOQ	= 368,
    FDTOS	= 369,
    FDTOX	= 370,
    FEXPAND	= 371,
    FHADDD	= 372,
    FHADDS	= 373,
    FHSUBD	= 374,
    FHSUBS	= 375,
    FITOD	= 376,
    FITOQ	= 377,
    FITOS	= 378,
    FLCMPD	= 379,
    FLCMPS	= 380,
    FLUSH	= 381,
    FLUSHW	= 382,
    FLUSHri	= 383,
    FLUSHrr	= 384,
    FMEAN16	= 385,
    FMOVD	= 386,
    FMOVD_FCC	= 387,
    FMOVD_ICC	= 388,
    FMOVD_XCC	= 389,
    FMOVQ	= 390,
    FMOVQ_FCC	= 391,
    FMOVQ_ICC	= 392,
    FMOVQ_XCC	= 393,
    FMOVRGEZD	= 394,
    FMOVRGEZQ	= 395,
    FMOVRGEZS	= 396,
    FMOVRGZD	= 397,
    FMOVRGZQ	= 398,
    FMOVRGZS	= 399,
    FMOVRLEZD	= 400,
    FMOVRLEZQ	= 401,
    FMOVRLEZS	= 402,
    FMOVRLZD	= 403,
    FMOVRLZQ	= 404,
    FMOVRLZS	= 405,
    FMOVRNZD	= 406,
    FMOVRNZQ	= 407,
    FMOVRNZS	= 408,
    FMOVRZD	= 409,
    FMOVRZQ	= 410,
    FMOVRZS	= 411,
    FMOVS	= 412,
    FMOVS_FCC	= 413,
    FMOVS_ICC	= 414,
    FMOVS_XCC	= 415,
    FMUL8SUX16	= 416,
    FMUL8ULX16	= 417,
    FMUL8X16	= 418,
    FMUL8X16AL	= 419,
    FMUL8X16AU	= 420,
    FMULD	= 421,
    FMULD8SUX16	= 422,
    FMULD8ULX16	= 423,
    FMULQ	= 424,
    FMULS	= 425,
    FNADDD	= 426,
    FNADDS	= 427,
    FNAND	= 428,
    FNANDS	= 429,
    FNEGD	= 430,
    FNEGQ	= 431,
    FNEGS	= 432,
    FNHADDD	= 433,
    FNHADDS	= 434,
    FNMULD	= 435,
    FNMULS	= 436,
    FNOR	= 437,
    FNORS	= 438,
    FNOT1	= 439,
    FNOT1S	= 440,
    FNOT2	= 441,
    FNOT2S	= 442,
    FNSMULD	= 443,
    FONE	= 444,
    FONES	= 445,
    FOR	= 446,
    FORNOT1	= 447,
    FORNOT1S	= 448,
    FORNOT2	= 449,
    FORNOT2S	= 450,
    FORS	= 451,
    FPACK16	= 452,
    FPACK32	= 453,
    FPACKFIX	= 454,
    FPADD16	= 455,
    FPADD16S	= 456,
    FPADD32	= 457,
    FPADD32S	= 458,
    FPADD64	= 459,
    FPMERGE	= 460,
    FPSUB16	= 461,
    FPSUB16S	= 462,
    FPSUB32	= 463,
    FPSUB32S	= 464,
    FQTOD	= 465,
    FQTOI	= 466,
    FQTOS	= 467,
    FQTOX	= 468,
    FSLAS16	= 469,
    FSLAS32	= 470,
    FSLL16	= 471,
    FSLL32	= 472,
    FSMULD	= 473,
    FSQRTD	= 474,
    FSQRTQ	= 475,
    FSQRTS	= 476,
    FSRA16	= 477,
    FSRA32	= 478,
    FSRC1	= 479,
    FSRC1S	= 480,
    FSRC2	= 481,
    FSRC2S	= 482,
    FSRL16	= 483,
    FSRL32	= 484,
    FSTOD	= 485,
    FSTOI	= 486,
    FSTOQ	= 487,
    FSTOX	= 488,
    FSUBD	= 489,
    FSUBQ	= 490,
    FSUBS	= 491,
    FXNOR	= 492,
    FXNORS	= 493,
    FXOR	= 494,
    FXORS	= 495,
    FXTOD	= 496,
    FXTOQ	= 497,
    FXTOS	= 498,
    FZERO	= 499,
    FZEROS	= 500,
    JMPLri	= 501,
    JMPLrr	= 502,
    LDArr	= 503,
    LDCSRri	= 504,
    LDCSRrr	= 505,
    LDCri	= 506,
    LDCrr	= 507,
    LDDArr	= 508,
    LDDCri	= 509,
    LDDCrr	= 510,
    LDDFArr	= 511,
    LDDFri	= 512,
    LDDFrr	= 513,
    LDDri	= 514,
    LDDrr	= 515,
    LDFArr	= 516,
    LDFSRri	= 517,
    LDFSRrr	= 518,
    LDFri	= 519,
    LDFrr	= 520,
    LDQFArr	= 521,
    LDQFri	= 522,
    LDQFrr	= 523,
    LDSBArr	= 524,
    LDSBri	= 525,
    LDSBrr	= 526,
    LDSHArr	= 527,
    LDSHri	= 528,
    LDSHrr	= 529,
    LDSTUBArr	= 530,
    LDSTUBri	= 531,
    LDSTUBrr	= 532,
    LDSWri	= 533,
    LDSWrr	= 534,
    LDUBArr	= 535,
    LDUBri	= 536,
    LDUBrr	= 537,
    LDUHArr	= 538,
    LDUHri	= 539,
    LDUHrr	= 540,
    LDXFSRri	= 541,
    LDXFSRrr	= 542,
    LDXri	= 543,
    LDXrr	= 544,
    LDri	= 545,
    LDrr	= 546,
    LEAX_ADDri	= 547,
    LEA_ADDri	= 548,
    LZCNT	= 549,
    MEMBARi	= 550,
    MOVDTOX	= 551,
    MOVFCCri	= 552,
    MOVFCCrr	= 553,
    MOVICCri	= 554,
    MOVICCrr	= 555,
    MOVRGEZri	= 556,
    MOVRGEZrr	= 557,
    MOVRGZri	= 558,
    MOVRGZrr	= 559,
    MOVRLEZri	= 560,
    MOVRLEZrr	= 561,
    MOVRLZri	= 562,
    MOVRLZrr	= 563,
    MOVRNZri	= 564,
    MOVRNZrr	= 565,
    MOVRRZri	= 566,
    MOVRRZrr	= 567,
    MOVSTOSW	= 568,
    MOVSTOUW	= 569,
    MOVWTOS	= 570,
    MOVXCCri	= 571,
    MOVXCCrr	= 572,
    MOVXTOD	= 573,
    MULSCCri	= 574,
    MULSCCrr	= 575,
    MULXri	= 576,
    MULXrr	= 577,
    NOP	= 578,
    ORCCri	= 579,
    ORCCrr	= 580,
    ORNCCri	= 581,
    ORNCCrr	= 582,
    ORNri	= 583,
    ORNrr	= 584,
    ORXNrr	= 585,
    ORXri	= 586,
    ORXrr	= 587,
    ORri	= 588,
    ORrr	= 589,
    PDIST	= 590,
    PDISTN	= 591,
    POPCrr	= 592,
    PWRPSRri	= 593,
    PWRPSRrr	= 594,
    RDASR	= 595,
    RDPR	= 596,
    RDPSR	= 597,
    RDTBR	= 598,
    RDWIM	= 599,
    RESTOREri	= 600,
    RESTORErr	= 601,
    RET	= 602,
    RETL	= 603,
    RETTri	= 604,
    RETTrr	= 605,
    SAVEri	= 606,
    SAVErr	= 607,
    SDIVCCri	= 608,
    SDIVCCrr	= 609,
    SDIVXri	= 610,
    SDIVXrr	= 611,
    SDIVri	= 612,
    SDIVrr	= 613,
    SETHIXi	= 614,
    SETHIi	= 615,
    SHUTDOWN	= 616,
    SIAM	= 617,
    SLLXri	= 618,
    SLLXrr	= 619,
    SLLri	= 620,
    SLLrr	= 621,
    SMACri	= 622,
    SMACrr	= 623,
    SMULCCri	= 624,
    SMULCCrr	= 625,
    SMULri	= 626,
    SMULrr	= 627,
    SRAXri	= 628,
    SRAXrr	= 629,
    SRAri	= 630,
    SRArr	= 631,
    SRLXri	= 632,
    SRLXrr	= 633,
    SRLri	= 634,
    SRLrr	= 635,
    STArr	= 636,
    STBAR	= 637,
    STBArr	= 638,
    STBri	= 639,
    STBrr	= 640,
    STCSRri	= 641,
    STCSRrr	= 642,
    STCri	= 643,
    STCrr	= 644,
    STDArr	= 645,
    STDCQri	= 646,
    STDCQrr	= 647,
    STDCri	= 648,
    STDCrr	= 649,
    STDFArr	= 650,
    STDFQri	= 651,
    STDFQrr	= 652,
    STDFri	= 653,
    STDFrr	= 654,
    STDri	= 655,
    STDrr	= 656,
    STFArr	= 657,
    STFSRri	= 658,
    STFSRrr	= 659,
    STFri	= 660,
    STFrr	= 661,
    STHArr	= 662,
    STHri	= 663,
    STHrr	= 664,
    STQFArr	= 665,
    STQFri	= 666,
    STQFrr	= 667,
    STXFSRri	= 668,
    STXFSRrr	= 669,
    STXri	= 670,
    STXrr	= 671,
    STri	= 672,
    STrr	= 673,
    SUBCCri	= 674,
    SUBCCrr	= 675,
    SUBCri	= 676,
    SUBCrr	= 677,
    SUBEri	= 678,
    SUBErr	= 679,
    SUBXri	= 680,
    SUBXrr	= 681,
    SUBri	= 682,
    SUBrr	= 683,
    SWAPArr	= 684,
    SWAPri	= 685,
    SWAPrr	= 686,
    TA1	= 687,
    TA3	= 688,
    TA5	= 689,
    TADDCCTVri	= 690,
    TADDCCTVrr	= 691,
    TADDCCri	= 692,
    TADDCCrr	= 693,
    TICCri	= 694,
    TICCrr	= 695,
    TLS_ADDXrr	= 696,
    TLS_ADDrr	= 697,
    TLS_CALL	= 698,
    TLS_LDXrr	= 699,
    TLS_LDrr	= 700,
    TRAPri	= 701,
    TRAPrr	= 702,
    TSUBCCTVri	= 703,
    TSUBCCTVrr	= 704,
    TSUBCCri	= 705,
    TSUBCCrr	= 706,
    TXCCri	= 707,
    TXCCrr	= 708,
    UDIVCCri	= 709,
    UDIVCCrr	= 710,
    UDIVXri	= 711,
    UDIVXrr	= 712,
    UDIVri	= 713,
    UDIVrr	= 714,
    UMACri	= 715,
    UMACrr	= 716,
    UMULCCri	= 717,
    UMULCCrr	= 718,
    UMULXHI	= 719,
    UMULri	= 720,
    UMULrr	= 721,
    UNIMP	= 722,
    V9FCMPD	= 723,
    V9FCMPED	= 724,
    V9FCMPEQ	= 725,
    V9FCMPES	= 726,
    V9FCMPQ	= 727,
    V9FCMPS	= 728,
    V9FMOVD_FCC	= 729,
    V9FMOVQ_FCC	= 730,
    V9FMOVS_FCC	= 731,
    V9MOVFCCri	= 732,
    V9MOVFCCrr	= 733,
    WRASRri	= 734,
    WRASRrr	= 735,
    WRPRri	= 736,
    WRPRrr	= 737,
    WRPSRri	= 738,
    WRPSRrr	= 739,
    WRTBRri	= 740,
    WRTBRrr	= 741,
    WRWIMri	= 742,
    WRWIMrr	= 743,
    XMULX	= 744,
    XMULXHI	= 745,
    XNORCCri	= 746,
    XNORCCrr	= 747,
    XNORXrr	= 748,
    XNORri	= 749,
    XNORrr	= 750,
    XORCCri	= 751,
    XORCCrr	= 752,
    XORXri	= 753,
    XORXrr	= 754,
    XORri	= 755,
    XORrr	= 756,
    INSTRUCTION_LIST_END = 757
  };

} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace SP {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_iu_instr	= 1,
    IIC_fpu_normal_instr	= 2,
    IIC_jmp_or_call	= 3,
    IIC_fpu_abs	= 4,
    IIC_fpu_fast_instr	= 5,
    IIC_fpu_divd	= 6,
    IIC_fpu_divs	= 7,
    IIC_fpu_muld	= 8,
    IIC_fpu_muls	= 9,
    IIC_fpu_negs	= 10,
    IIC_fpu_sqrtd	= 11,
    IIC_fpu_sqrts	= 12,
    IIC_fpu_stod	= 13,
    IIC_ldd	= 14,
    IIC_iu_or_fpu_instr	= 15,
    IIC_iu_div	= 16,
    IIC_smac_umac	= 17,
    IIC_iu_smul	= 18,
    IIC_st	= 19,
    IIC_std	= 20,
    IIC_iu_umul	= 21,
    SCHED_LIST_END = 22
  };
} // end namespace Sched
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { SP::O6, 0 };
static const MCPhysReg ImplicitList2[] = { SP::O7, 0 };
static const MCPhysReg ImplicitList3[] = { SP::FCC0, 0 };
static const MCPhysReg ImplicitList4[] = { SP::ICC, 0 };
static const MCPhysReg ImplicitList5[] = { SP::CPSR, 0 };
static const MCPhysReg ImplicitList6[] = { SP::FSR, 0 };
static const MCPhysReg ImplicitList7[] = { SP::Y, SP::ICC, 0 };
static const MCPhysReg ImplicitList8[] = { SP::PSR, 0 };
static const MCPhysReg ImplicitList9[] = { SP::TBR, 0 };
static const MCPhysReg ImplicitList10[] = { SP::WIM, 0 };
static const MCPhysReg ImplicitList11[] = { SP::Y, 0 };
static const MCPhysReg ImplicitList12[] = { SP::Y, SP::ASR18, 0 };
static const MCPhysReg ImplicitList13[] = { SP::CPQ, 0 };
static const MCPhysReg ImplicitList14[] = { SP::FQ, 0 };

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
static const MCOperandInfo OperandInfo43[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo57[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo59[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo79[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo80[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo139[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo140[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo141[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
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
  { 227,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #227 = ADJCALLSTACKDOWN
  { 228,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #228 = ADJCALLSTACKUP
  { 229,	1,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo2 },  // Inst #229 = GETPCX
  { 230,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo43 },  // Inst #230 = SELECT_CC_DFP_FCC
  { 231,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo43 },  // Inst #231 = SELECT_CC_DFP_ICC
  { 232,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo44 },  // Inst #232 = SELECT_CC_FP_FCC
  { 233,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo44 },  // Inst #233 = SELECT_CC_FP_ICC
  { 234,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo45 },  // Inst #234 = SELECT_CC_Int_FCC
  { 235,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo45 },  // Inst #235 = SELECT_CC_Int_ICC
  { 236,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo46 },  // Inst #236 = SELECT_CC_QFP_FCC
  { 237,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo46 },  // Inst #237 = SELECT_CC_QFP_ICC
  { 238,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #238 = SET
  { 239,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #239 = ADDCCri
  { 240,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #240 = ADDCCrr
  { 241,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #241 = ADDCri
  { 242,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo49 },  // Inst #242 = ADDCrr
  { 243,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo48 },  // Inst #243 = ADDEri
  { 244,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo49 },  // Inst #244 = ADDErr
  { 245,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo50 },  // Inst #245 = ADDXC
  { 246,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo50 },  // Inst #246 = ADDXCCC
  { 247,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #247 = ADDXri
  { 248,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #248 = ADDXrr
  { 249,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #249 = ADDri
  { 250,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #250 = ADDrr
  { 251,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #251 = ALIGNADDR
  { 252,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #252 = ALIGNADDRL
  { 253,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #253 = ANDCCri
  { 254,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #254 = ANDCCrr
  { 255,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #255 = ANDNCCri
  { 256,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #256 = ANDNCCrr
  { 257,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #257 = ANDNri
  { 258,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #258 = ANDNrr
  { 259,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #259 = ANDXNrr
  { 260,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #260 = ANDXri
  { 261,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #261 = ANDXrr
  { 262,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #262 = ANDri
  { 263,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #263 = ANDrr
  { 264,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #264 = ARRAY16
  { 265,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #265 = ARRAY32
  { 266,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #266 = ARRAY8
  { 267,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #267 = BA
  { 268,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #268 = BCOND
  { 269,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #269 = BCONDA
  { 270,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #270 = BINDri
  { 271,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #271 = BINDrr
  { 272,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #272 = BMASK
  { 273,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #273 = BPFCC
  { 274,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #274 = BPFCCA
  { 275,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #275 = BPFCCANT
  { 276,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #276 = BPFCCNT
  { 277,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #277 = BPGEZapn
  { 278,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #278 = BPGEZapt
  { 279,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #279 = BPGEZnapn
  { 280,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #280 = BPGEZnapt
  { 281,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #281 = BPGZapn
  { 282,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #282 = BPGZapt
  { 283,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #283 = BPGZnapn
  { 284,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #284 = BPGZnapt
  { 285,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #285 = BPICC
  { 286,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #286 = BPICCA
  { 287,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #287 = BPICCANT
  { 288,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #288 = BPICCNT
  { 289,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #289 = BPLEZapn
  { 290,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #290 = BPLEZapt
  { 291,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #291 = BPLEZnapn
  { 292,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #292 = BPLEZnapt
  { 293,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #293 = BPLZapn
  { 294,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #294 = BPLZapt
  { 295,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #295 = BPLZnapn
  { 296,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #296 = BPLZnapt
  { 297,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #297 = BPNZapn
  { 298,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #298 = BPNZapt
  { 299,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #299 = BPNZnapn
  { 300,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #300 = BPNZnapt
  { 301,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #301 = BPXCC
  { 302,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #302 = BPXCCA
  { 303,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #303 = BPXCCANT
  { 304,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #304 = BPXCCNT
  { 305,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #305 = BPZapn
  { 306,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #306 = BPZapt
  { 307,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #307 = BPZnapn
  { 308,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #308 = BPZnapt
  { 309,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #309 = BSHUFFLE
  { 310,	1,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #310 = CALL
  { 311,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo14 },  // Inst #311 = CALLri
  { 312,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo52 },  // Inst #312 = CALLrr
  { 313,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #313 = CASAasi10
  { 314,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #314 = CASArr
  { 315,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #315 = CASXrr
  { 316,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #316 = CASrr
  { 317,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #317 = CBCOND
  { 318,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #318 = CBCONDA
  { 319,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #319 = CMASK16
  { 320,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #320 = CMASK32
  { 321,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #321 = CMASK8
  { 322,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo60 },  // Inst #322 = CMPri
  { 323,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo61 },  // Inst #323 = CMPrr
  { 324,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #324 = EDGE16
  { 325,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #325 = EDGE16L
  { 326,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #326 = EDGE16LN
  { 327,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #327 = EDGE16N
  { 328,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #328 = EDGE32
  { 329,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #329 = EDGE32L
  { 330,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #330 = EDGE32LN
  { 331,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #331 = EDGE32N
  { 332,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #332 = EDGE8
  { 333,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #333 = EDGE8L
  { 334,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #334 = EDGE8LN
  { 335,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #335 = EDGE8N
  { 336,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #336 = FABSD
  { 337,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #337 = FABSQ
  { 338,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #338 = FABSS
  { 339,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #339 = FADDD
  { 340,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #340 = FADDQ
  { 341,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #341 = FADDS
  { 342,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #342 = FALIGNADATA
  { 343,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #343 = FAND
  { 344,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #344 = FANDNOT1
  { 345,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #345 = FANDNOT1S
  { 346,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #346 = FANDNOT2
  { 347,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #347 = FANDNOT2S
  { 348,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #348 = FANDS
  { 349,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, OperandInfo7 },  // Inst #349 = FBCOND
  { 350,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo7 },  // Inst #350 = FBCONDA
  { 351,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #351 = FCHKSM16
  { 352,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo62 },  // Inst #352 = FCMPD
  { 353,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #353 = FCMPEQ16
  { 354,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #354 = FCMPEQ32
  { 355,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #355 = FCMPGT16
  { 356,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #356 = FCMPGT32
  { 357,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #357 = FCMPLE16
  { 358,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #358 = FCMPLE32
  { 359,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #359 = FCMPNE16
  { 360,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #360 = FCMPNE32
  { 361,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo63 },  // Inst #361 = FCMPQ
  { 362,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo64 },  // Inst #362 = FCMPS
  { 363,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #363 = FDIVD
  { 364,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #364 = FDIVQ
  { 365,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #365 = FDIVS
  { 366,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #366 = FDMULQ
  { 367,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #367 = FDTOI
  { 368,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #368 = FDTOQ
  { 369,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #369 = FDTOS
  { 370,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #370 = FDTOX
  { 371,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #371 = FEXPAND
  { 372,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #372 = FHADDD
  { 373,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #373 = FHADDS
  { 374,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #374 = FHSUBD
  { 375,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #375 = FHSUBS
  { 376,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #376 = FITOD
  { 377,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #377 = FITOQ
  { 378,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #378 = FITOS
  { 379,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #379 = FLCMPD
  { 380,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #380 = FLCMPS
  { 381,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #381 = FLUSH
  { 382,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #382 = FLUSHW
  { 383,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #383 = FLUSHri
  { 384,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #384 = FLUSHrr
  { 385,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #385 = FMEAN16
  { 386,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #386 = FMOVD
  { 387,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo74 },  // Inst #387 = FMOVD_FCC
  { 388,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo74 },  // Inst #388 = FMOVD_ICC
  { 389,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo74 },  // Inst #389 = FMOVD_XCC
  { 390,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #390 = FMOVQ
  { 391,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo75 },  // Inst #391 = FMOVQ_FCC
  { 392,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo75 },  // Inst #392 = FMOVQ_ICC
  { 393,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo75 },  // Inst #393 = FMOVQ_XCC
  { 394,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #394 = FMOVRGEZD
  { 395,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #395 = FMOVRGEZQ
  { 396,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #396 = FMOVRGEZS
  { 397,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #397 = FMOVRGZD
  { 398,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #398 = FMOVRGZQ
  { 399,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #399 = FMOVRGZS
  { 400,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #400 = FMOVRLEZD
  { 401,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #401 = FMOVRLEZQ
  { 402,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #402 = FMOVRLEZS
  { 403,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #403 = FMOVRLZD
  { 404,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #404 = FMOVRLZQ
  { 405,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #405 = FMOVRLZS
  { 406,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #406 = FMOVRNZD
  { 407,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #407 = FMOVRNZQ
  { 408,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #408 = FMOVRNZS
  { 409,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #409 = FMOVRZD
  { 410,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #410 = FMOVRZQ
  { 411,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #411 = FMOVRZS
  { 412,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #412 = FMOVS
  { 413,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo77 },  // Inst #413 = FMOVS_FCC
  { 414,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo77 },  // Inst #414 = FMOVS_ICC
  { 415,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo77 },  // Inst #415 = FMOVS_XCC
  { 416,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #416 = FMUL8SUX16
  { 417,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #417 = FMUL8ULX16
  { 418,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #418 = FMUL8X16
  { 419,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #419 = FMUL8X16AL
  { 420,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #420 = FMUL8X16AU
  { 421,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #421 = FMULD
  { 422,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #422 = FMULD8SUX16
  { 423,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #423 = FMULD8ULX16
  { 424,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #424 = FMULQ
  { 425,	3,	1,	4,	9,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #425 = FMULS
  { 426,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #426 = FNADDD
  { 427,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #427 = FNADDS
  { 428,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #428 = FNAND
  { 429,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #429 = FNANDS
  { 430,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #430 = FNEGD
  { 431,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #431 = FNEGQ
  { 432,	2,	1,	4,	10,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #432 = FNEGS
  { 433,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #433 = FNHADDD
  { 434,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #434 = FNHADDS
  { 435,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #435 = FNMULD
  { 436,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #436 = FNMULS
  { 437,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #437 = FNOR
  { 438,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #438 = FNORS
  { 439,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #439 = FNOT1
  { 440,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #440 = FNOT1S
  { 441,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #441 = FNOT2
  { 442,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #442 = FNOT2S
  { 443,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #443 = FNSMULD
  { 444,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo78 },  // Inst #444 = FONE
  { 445,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #445 = FONES
  { 446,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #446 = FOR
  { 447,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #447 = FORNOT1
  { 448,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #448 = FORNOT1S
  { 449,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #449 = FORNOT2
  { 450,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #450 = FORNOT2S
  { 451,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #451 = FORS
  { 452,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #452 = FPACK16
  { 453,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #453 = FPACK32
  { 454,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #454 = FPACKFIX
  { 455,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #455 = FPADD16
  { 456,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #456 = FPADD16S
  { 457,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #457 = FPADD32
  { 458,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #458 = FPADD32S
  { 459,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #459 = FPADD64
  { 460,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #460 = FPMERGE
  { 461,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #461 = FPSUB16
  { 462,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #462 = FPSUB16S
  { 463,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #463 = FPSUB32
  { 464,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #464 = FPSUB32S
  { 465,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #465 = FQTOD
  { 466,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo81 },  // Inst #466 = FQTOI
  { 467,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo81 },  // Inst #467 = FQTOS
  { 468,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #468 = FQTOX
  { 469,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #469 = FSLAS16
  { 470,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #470 = FSLAS32
  { 471,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #471 = FSLL16
  { 472,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #472 = FSLL32
  { 473,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo82 },  // Inst #473 = FSMULD
  { 474,	2,	1,	4,	11,	0, 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #474 = FSQRTD
  { 475,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #475 = FSQRTQ
  { 476,	2,	1,	4,	12,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #476 = FSQRTS
  { 477,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #477 = FSRA16
  { 478,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #478 = FSRA32
  { 479,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #479 = FSRC1
  { 480,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #480 = FSRC1S
  { 481,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #481 = FSRC2
  { 482,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #482 = FSRC2S
  { 483,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #483 = FSRL16
  { 484,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #484 = FSRL32
  { 485,	2,	1,	4,	13,	0, 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #485 = FSTOD
  { 486,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #486 = FSTOI
  { 487,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #487 = FSTOQ
  { 488,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #488 = FSTOX
  { 489,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #489 = FSUBD
  { 490,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #490 = FSUBQ
  { 491,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #491 = FSUBS
  { 492,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #492 = FXNOR
  { 493,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #493 = FXNORS
  { 494,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #494 = FXOR
  { 495,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #495 = FXORS
  { 496,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #496 = FXTOD
  { 497,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #497 = FXTOQ
  { 498,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #498 = FXTOS
  { 499,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo78 },  // Inst #499 = FZERO
  { 500,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #500 = FZEROS
  { 501,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #501 = JMPLri
  { 502,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #502 = JMPLrr
  { 503,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #503 = LDArr
  { 504,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo14 },  // Inst #504 = LDCSRri
  { 505,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo52 },  // Inst #505 = LDCSRrr
  { 506,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo86 },  // Inst #506 = LDCri
  { 507,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo87 },  // Inst #507 = LDCrr
  { 508,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #508 = LDDArr
  { 509,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo89 },  // Inst #509 = LDDCri
  { 510,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo90 },  // Inst #510 = LDDCrr
  { 511,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo91 },  // Inst #511 = LDDFArr
  { 512,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo92 },  // Inst #512 = LDDFri
  { 513,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo93 },  // Inst #513 = LDDFrr
  { 514,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #514 = LDDri
  { 515,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #515 = LDDrr
  { 516,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo96 },  // Inst #516 = LDFArr
  { 517,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo14 },  // Inst #517 = LDFSRri
  { 518,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo52 },  // Inst #518 = LDFSRrr
  { 519,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo97 },  // Inst #519 = LDFri
  { 520,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo98 },  // Inst #520 = LDFrr
  { 521,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99 },  // Inst #521 = LDQFArr
  { 522,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo100 },  // Inst #522 = LDQFri
  { 523,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo101 },  // Inst #523 = LDQFrr
  { 524,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #524 = LDSBArr
  { 525,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #525 = LDSBri
  { 526,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #526 = LDSBrr
  { 527,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #527 = LDSHArr
  { 528,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #528 = LDSHri
  { 529,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #529 = LDSHrr
  { 530,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #530 = LDSTUBArr
  { 531,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #531 = LDSTUBri
  { 532,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #532 = LDSTUBrr
  { 533,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo102 },  // Inst #533 = LDSWri
  { 534,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo103 },  // Inst #534 = LDSWrr
  { 535,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #535 = LDUBArr
  { 536,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #536 = LDUBri
  { 537,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #537 = LDUBrr
  { 538,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #538 = LDUHArr
  { 539,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #539 = LDUHri
  { 540,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #540 = LDUHrr
  { 541,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo14 },  // Inst #541 = LDXFSRri
  { 542,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo52 },  // Inst #542 = LDXFSRrr
  { 543,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo102 },  // Inst #543 = LDXri
  { 544,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo103 },  // Inst #544 = LDXrr
  { 545,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #545 = LDri
  { 546,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #546 = LDrr
  { 547,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo102 },  // Inst #547 = LEAX_ADDri
  { 548,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #548 = LEA_ADDri
  { 549,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104 },  // Inst #549 = LZCNT
  { 550,	1,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #550 = MEMBARi
  { 551,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105 },  // Inst #551 = MOVDTOX
  { 552,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo106 },  // Inst #552 = MOVFCCri
  { 553,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo107 },  // Inst #553 = MOVFCCrr
  { 554,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo106 },  // Inst #554 = MOVICCri
  { 555,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo107 },  // Inst #555 = MOVICCrr
  { 556,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #556 = MOVRGEZri
  { 557,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #557 = MOVRGEZrr
  { 558,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #558 = MOVRGZri
  { 559,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #559 = MOVRGZrr
  { 560,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #560 = MOVRLEZri
  { 561,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #561 = MOVRLEZrr
  { 562,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #562 = MOVRLZri
  { 563,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #563 = MOVRLZrr
  { 564,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #564 = MOVRNZri
  { 565,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #565 = MOVRNZrr
  { 566,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #566 = MOVRRZri
  { 567,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #567 = MOVRRZrr
  { 568,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105 },  // Inst #568 = MOVSTOSW
  { 569,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105 },  // Inst #569 = MOVSTOUW
  { 570,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo109 },  // Inst #570 = MOVWTOS
  { 571,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo106 },  // Inst #571 = MOVXCCri
  { 572,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo107 },  // Inst #572 = MOVXCCrr
  { 573,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo109 },  // Inst #573 = MOVXTOD
  { 574,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo48 },  // Inst #574 = MULSCCri
  { 575,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo49 },  // Inst #575 = MULSCCrr
  { 576,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #576 = MULXri
  { 577,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #577 = MULXrr
  { 578,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #578 = NOP
  { 579,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #579 = ORCCri
  { 580,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #580 = ORCCrr
  { 581,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #581 = ORNCCri
  { 582,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #582 = ORNCCrr
  { 583,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #583 = ORNri
  { 584,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #584 = ORNrr
  { 585,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #585 = ORXNrr
  { 586,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #586 = ORXri
  { 587,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #587 = ORXrr
  { 588,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #588 = ORri
  { 589,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #589 = ORrr
  { 590,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #590 = PDIST
  { 591,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #591 = PDISTN
  { 592,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #592 = POPCrr
  { 593,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo60 },  // Inst #593 = PWRPSRri
  { 594,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo61 },  // Inst #594 = PWRPSRrr
  { 595,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo111 },  // Inst #595 = RDASR
  { 596,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo112 },  // Inst #596 = RDPR
  { 597,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, nullptr, OperandInfo113 },  // Inst #597 = RDPSR
  { 598,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, nullptr, OperandInfo113 },  // Inst #598 = RDTBR
  { 599,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, nullptr, OperandInfo113 },  // Inst #599 = RDWIM
  { 600,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #600 = RESTOREri
  { 601,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #601 = RESTORErr
  { 602,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #602 = RET
  { 603,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #603 = RETL
  { 604,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #604 = RETTri
  { 605,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #605 = RETTrr
  { 606,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #606 = SAVEri
  { 607,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #607 = SAVErr
  { 608,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo48 },  // Inst #608 = SDIVCCri
  { 609,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo49 },  // Inst #609 = SDIVCCrr
  { 610,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #610 = SDIVXri
  { 611,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #611 = SDIVXrr
  { 612,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo48 },  // Inst #612 = SDIVri
  { 613,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo49 },  // Inst #613 = SDIVrr
  { 614,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #614 = SETHIXi
  { 615,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #615 = SETHIi
  { 616,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #616 = SHUTDOWN
  { 617,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #617 = SIAM
  { 618,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo114 },  // Inst #618 = SLLXri
  { 619,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #619 = SLLXrr
  { 620,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #620 = SLLri
  { 621,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #621 = SLLrr
  { 622,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo115 },  // Inst #622 = SMACri
  { 623,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo116 },  // Inst #623 = SMACrr
  { 624,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo48 },  // Inst #624 = SMULCCri
  { 625,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo49 },  // Inst #625 = SMULCCrr
  { 626,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo48 },  // Inst #626 = SMULri
  { 627,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo49 },  // Inst #627 = SMULrr
  { 628,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo114 },  // Inst #628 = SRAXri
  { 629,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #629 = SRAXrr
  { 630,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #630 = SRAri
  { 631,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #631 = SRArr
  { 632,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo114 },  // Inst #632 = SRLXri
  { 633,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #633 = SRLXrr
  { 634,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #634 = SRLri
  { 635,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #635 = SRLrr
  { 636,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117 },  // Inst #636 = STArr
  { 637,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #637 = STBAR
  { 638,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117 },  // Inst #638 = STBArr
  { 639,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo118 },  // Inst #639 = STBri
  { 640,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo119 },  // Inst #640 = STBrr
  { 641,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo14 },  // Inst #641 = STCSRri
  { 642,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo52 },  // Inst #642 = STCSRrr
  { 643,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo120 },  // Inst #643 = STCri
  { 644,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo121 },  // Inst #644 = STCrr
  { 645,	4,	0,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo122 },  // Inst #645 = STDArr
  { 646,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo14 },  // Inst #646 = STDCQri
  { 647,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo52 },  // Inst #647 = STDCQrr
  { 648,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo123 },  // Inst #648 = STDCri
  { 649,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo124 },  // Inst #649 = STDCrr
  { 650,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo125 },  // Inst #650 = STDFArr
  { 651,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo14 },  // Inst #651 = STDFQri
  { 652,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo52 },  // Inst #652 = STDFQrr
  { 653,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo126 },  // Inst #653 = STDFri
  { 654,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo127 },  // Inst #654 = STDFrr
  { 655,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo128 },  // Inst #655 = STDri
  { 656,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo129 },  // Inst #656 = STDrr
  { 657,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo130 },  // Inst #657 = STFArr
  { 658,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo14 },  // Inst #658 = STFSRri
  { 659,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo52 },  // Inst #659 = STFSRrr
  { 660,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo131 },  // Inst #660 = STFri
  { 661,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo132 },  // Inst #661 = STFrr
  { 662,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117 },  // Inst #662 = STHArr
  { 663,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo118 },  // Inst #663 = STHri
  { 664,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo119 },  // Inst #664 = STHrr
  { 665,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo133 },  // Inst #665 = STQFArr
  { 666,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo134 },  // Inst #666 = STQFri
  { 667,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo135 },  // Inst #667 = STQFrr
  { 668,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo14 },  // Inst #668 = STXFSRri
  { 669,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo52 },  // Inst #669 = STXFSRrr
  { 670,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo136 },  // Inst #670 = STXri
  { 671,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #671 = STXrr
  { 672,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo118 },  // Inst #672 = STri
  { 673,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo119 },  // Inst #673 = STrr
  { 674,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #674 = SUBCCri
  { 675,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #675 = SUBCCrr
  { 676,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #676 = SUBCri
  { 677,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo49 },  // Inst #677 = SUBCrr
  { 678,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo48 },  // Inst #678 = SUBEri
  { 679,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo49 },  // Inst #679 = SUBErr
  { 680,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #680 = SUBXri
  { 681,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #681 = SUBXrr
  { 682,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #682 = SUBri
  { 683,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #683 = SUBrr
  { 684,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo138 },  // Inst #684 = SWAPArr
  { 685,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo139 },  // Inst #685 = SWAPri
  { 686,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #686 = SWAPrr
  { 687,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #687 = TA1
  { 688,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #688 = TA3
  { 689,	0,	0,	4,	1,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #689 = TA5
  { 690,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #690 = TADDCCTVri
  { 691,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #691 = TADDCCTVrr
  { 692,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #692 = TADDCCri
  { 693,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #693 = TADDCCrr
  { 694,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo141 },  // Inst #694 = TICCri
  { 695,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #695 = TICCrr
  { 696,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo142 },  // Inst #696 = TLS_ADDXrr
  { 697,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo143 },  // Inst #697 = TLS_ADDrr
  { 698,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo7 },  // Inst #698 = TLS_CALL
  { 699,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo144 },  // Inst #699 = TLS_LDXrr
  { 700,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo144 },  // Inst #700 = TLS_LDrr
  { 701,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo141 },  // Inst #701 = TRAPri
  { 702,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #702 = TRAPrr
  { 703,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #703 = TSUBCCTVri
  { 704,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #704 = TSUBCCTVrr
  { 705,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #705 = TSUBCCri
  { 706,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #706 = TSUBCCrr
  { 707,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo141 },  // Inst #707 = TXCCri
  { 708,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #708 = TXCCrr
  { 709,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo48 },  // Inst #709 = UDIVCCri
  { 710,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo49 },  // Inst #710 = UDIVCCrr
  { 711,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #711 = UDIVXri
  { 712,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #712 = UDIVXrr
  { 713,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo48 },  // Inst #713 = UDIVri
  { 714,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo49 },  // Inst #714 = UDIVrr
  { 715,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo115 },  // Inst #715 = UMACri
  { 716,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo116 },  // Inst #716 = UMACrr
  { 717,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo48 },  // Inst #717 = UMULCCri
  { 718,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo49 },  // Inst #718 = UMULCCrr
  { 719,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #719 = UMULXHI
  { 720,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo48 },  // Inst #720 = UMULri
  { 721,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo49 },  // Inst #721 = UMULrr
  { 722,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #722 = UNIMP
  { 723,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #723 = V9FCMPD
  { 724,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #724 = V9FCMPED
  { 725,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145 },  // Inst #725 = V9FCMPEQ
  { 726,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo146 },  // Inst #726 = V9FCMPES
  { 727,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145 },  // Inst #727 = V9FCMPQ
  { 728,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo146 },  // Inst #728 = V9FCMPS
  { 729,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo147 },  // Inst #729 = V9FMOVD_FCC
  { 730,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo148 },  // Inst #730 = V9FMOVQ_FCC
  { 731,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo149 },  // Inst #731 = V9FMOVS_FCC
  { 732,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo150 },  // Inst #732 = V9MOVFCCri
  { 733,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo151 },  // Inst #733 = V9MOVFCCrr
  { 734,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo152 },  // Inst #734 = WRASRri
  { 735,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo153 },  // Inst #735 = WRASRrr
  { 736,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo154 },  // Inst #736 = WRPRri
  { 737,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo155 },  // Inst #737 = WRPRrr
  { 738,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo60 },  // Inst #738 = WRPSRri
  { 739,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo61 },  // Inst #739 = WRPSRrr
  { 740,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo60 },  // Inst #740 = WRTBRri
  { 741,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo61 },  // Inst #741 = WRTBRrr
  { 742,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo60 },  // Inst #742 = WRWIMri
  { 743,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo61 },  // Inst #743 = WRWIMrr
  { 744,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #744 = XMULX
  { 745,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #745 = XMULXHI
  { 746,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #746 = XNORCCri
  { 747,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #747 = XNORCCrr
  { 748,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #748 = XNORXrr
  { 749,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #749 = XNORri
  { 750,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #750 = XNORrr
  { 751,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #751 = XORCCri
  { 752,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #752 = XORCCrr
  { 753,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #753 = XORXri
  { 754,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #754 = XORXrr
  { 755,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #755 = XORri
  { 756,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #756 = XORrr
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char SparcInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "CASAasi10\0"
  /* 19 */ "TA1\0"
  /* 23 */ "FSRC1\0"
  /* 29 */ "FANDNOT1\0"
  /* 38 */ "FNOT1\0"
  /* 44 */ "FORNOT1\0"
  /* 52 */ "FSRA32\0"
  /* 59 */ "FPSUB32\0"
  /* 67 */ "FPADD32\0"
  /* 75 */ "EDGE32\0"
  /* 82 */ "FCMPLE32\0"
  /* 91 */ "FCMPNE32\0"
  /* 100 */ "FPACK32\0"
  /* 108 */ "CMASK32\0"
  /* 116 */ "FSLL32\0"
  /* 123 */ "FSRL32\0"
  /* 130 */ "FCMPEQ32\0"
  /* 139 */ "FSLAS32\0"
  /* 147 */ "FCMPGT32\0"
  /* 156 */ "ARRAY32\0"
  /* 164 */ "FSRC2\0"
  /* 170 */ "G_FLOG2\0"
  /* 178 */ "G_FEXP2\0"
  /* 186 */ "FANDNOT2\0"
  /* 195 */ "FNOT2\0"
  /* 201 */ "FORNOT2\0"
  /* 209 */ "TA3\0"
  /* 213 */ "FPADD64\0"
  /* 221 */ "TA5\0"
  /* 225 */ "FSRA16\0"
  /* 232 */ "FPSUB16\0"
  /* 240 */ "FPADD16\0"
  /* 248 */ "EDGE16\0"
  /* 255 */ "FCMPLE16\0"
  /* 264 */ "FCMPNE16\0"
  /* 273 */ "FPACK16\0"
  /* 281 */ "CMASK16\0"
  /* 289 */ "FSLL16\0"
  /* 296 */ "FSRL16\0"
  /* 303 */ "FCHKSM16\0"
  /* 312 */ "FMEAN16\0"
  /* 320 */ "FCMPEQ16\0"
  /* 329 */ "FSLAS16\0"
  /* 337 */ "FCMPGT16\0"
  /* 346 */ "FMUL8X16\0"
  /* 355 */ "FMULD8ULX16\0"
  /* 367 */ "FMUL8ULX16\0"
  /* 378 */ "FMULD8SUX16\0"
  /* 390 */ "FMUL8SUX16\0"
  /* 401 */ "ARRAY16\0"
  /* 409 */ "EDGE8\0"
  /* 415 */ "CMASK8\0"
  /* 422 */ "ARRAY8\0"
  /* 429 */ "BA\0"
  /* 432 */ "BPFCCA\0"
  /* 439 */ "BPICCA\0"
  /* 446 */ "BPXCCA\0"
  /* 453 */ "CBCONDA\0"
  /* 461 */ "FBCONDA\0"
  /* 469 */ "G_FMA\0"
  /* 475 */ "G_STRICT_FMA\0"
  /* 488 */ "FALIGNADATA\0"
  /* 500 */ "G_FSUB\0"
  /* 507 */ "G_STRICT_FSUB\0"
  /* 521 */ "G_ATOMICRMW_FSUB\0"
  /* 538 */ "G_SUB\0"
  /* 544 */ "G_ATOMICRMW_SUB\0"
  /* 560 */ "ADDXCCC\0"
  /* 568 */ "BPFCC\0"
  /* 574 */ "V9FMOVD_FCC\0"
  /* 586 */ "SELECT_CC_DFP_FCC\0"
  /* 604 */ "SELECT_CC_QFP_FCC\0"
  /* 622 */ "SELECT_CC_FP_FCC\0"
  /* 639 */ "V9FMOVQ_FCC\0"
  /* 651 */ "V9FMOVS_FCC\0"
  /* 663 */ "SELECT_CC_Int_FCC\0"
  /* 681 */ "BPICC\0"
  /* 687 */ "FMOVD_ICC\0"
  /* 697 */ "SELECT_CC_DFP_ICC\0"
  /* 715 */ "SELECT_CC_QFP_ICC\0"
  /* 733 */ "SELECT_CC_FP_ICC\0"
  /* 750 */ "FMOVQ_ICC\0"
  /* 760 */ "FMOVS_ICC\0"
  /* 770 */ "SELECT_CC_Int_ICC\0"
  /* 788 */ "BPXCC\0"
  /* 794 */ "FMOVD_XCC\0"
  /* 804 */ "FMOVQ_XCC\0"
  /* 814 */ "FMOVS_XCC\0"
  /* 824 */ "G_INTRINSIC\0"
  /* 836 */ "G_FPTRUNC\0"
  /* 846 */ "G_INTRINSIC_TRUNC\0"
  /* 864 */ "G_TRUNC\0"
  /* 872 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 893 */ "G_DYN_STACKALLOC\0"
  /* 910 */ "ADDXC\0"
  /* 916 */ "G_FMAD\0"
  /* 923 */ "G_INDEXED_SEXTLOAD\0"
  /* 942 */ "G_SEXTLOAD\0"
  /* 953 */ "G_INDEXED_ZEXTLOAD\0"
  /* 972 */ "G_ZEXTLOAD\0"
  /* 983 */ "G_INDEXED_LOAD\0"
  /* 998 */ "G_LOAD\0"
  /* 1005 */ "FSUBD\0"
  /* 1011 */ "FHSUBD\0"
  /* 1018 */ "G_VECREDUCE_FADD\0"
  /* 1035 */ "G_FADD\0"
  /* 1042 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 1063 */ "G_STRICT_FADD\0"
  /* 1077 */ "G_ATOMICRMW_FADD\0"
  /* 1094 */ "G_VECREDUCE_ADD\0"
  /* 1110 */ "G_ADD\0"
  /* 1116 */ "G_PTR_ADD\0"
  /* 1126 */ "G_ATOMICRMW_ADD\0"
  /* 1142 */ "FADDD\0"
  /* 1148 */ "FHADDD\0"
  /* 1155 */ "FNHADDD\0"
  /* 1163 */ "FNADDD\0"
  /* 1170 */ "V9FCMPED\0"
  /* 1179 */ "FNEGD\0"
  /* 1185 */ "FMULD\0"
  /* 1191 */ "FNMULD\0"
  /* 1198 */ "FSMULD\0"
  /* 1205 */ "FNSMULD\0"
  /* 1213 */ "FAND\0"
  /* 1218 */ "FNAND\0"
  /* 1224 */ "G_ATOMICRMW_NAND\0"
  /* 1241 */ "FEXPAND\0"
  /* 1249 */ "G_VECREDUCE_AND\0"
  /* 1265 */ "G_AND\0"
  /* 1271 */ "G_ATOMICRMW_AND\0"
  /* 1287 */ "LIFETIME_END\0"
  /* 1300 */ "CBCOND\0"
  /* 1307 */ "FBCOND\0"
  /* 1314 */ "G_BRCOND\0"
  /* 1323 */ "G_INTRINSIC_ROUND\0"
  /* 1341 */ "FITOD\0"
  /* 1347 */ "FQTOD\0"
  /* 1353 */ "FSTOD\0"
  /* 1359 */ "FXTOD\0"
  /* 1365 */ "MOVXTOD\0"
  /* 1373 */ "V9FCMPD\0"
  /* 1381 */ "FLCMPD\0"
  /* 1388 */ "LOAD_STACK_GUARD\0"
  /* 1405 */ "FABSD\0"
  /* 1411 */ "FSQRTD\0"
  /* 1418 */ "FDIVD\0"
  /* 1424 */ "FMOVD\0"
  /* 1430 */ "FMOVRGEZD\0"
  /* 1440 */ "FMOVRLEZD\0"
  /* 1450 */ "FMOVRGZD\0"
  /* 1459 */ "FMOVRLZD\0"
  /* 1468 */ "FMOVRNZD\0"
  /* 1477 */ "FMOVRZD\0"
  /* 1485 */ "PSEUDO_PROBE\0"
  /* 1498 */ "G_SSUBE\0"
  /* 1506 */ "G_USUBE\0"
  /* 1514 */ "G_FENCE\0"
  /* 1522 */ "REG_SEQUENCE\0"
  /* 1535 */ "G_SADDE\0"
  /* 1543 */ "G_UADDE\0"
  /* 1551 */ "G_FMINNUM_IEEE\0"
  /* 1566 */ "G_FMAXNUM_IEEE\0"
  /* 1581 */ "FPMERGE\0"
  /* 1589 */ "G_JUMP_TABLE\0"
  /* 1602 */ "BUNDLE\0"
  /* 1609 */ "BSHUFFLE\0"
  /* 1618 */ "FONE\0"
  /* 1623 */ "LOCAL_ESCAPE\0"
  /* 1636 */ "G_INDEXED_STORE\0"
  /* 1652 */ "G_STORE\0"
  /* 1660 */ "G_BITREVERSE\0"
  /* 1673 */ "DBG_VALUE\0"
  /* 1683 */ "G_GLOBAL_VALUE\0"
  /* 1698 */ "G_MEMMOVE\0"
  /* 1708 */ "G_FREEZE\0"
  /* 1717 */ "G_FCANONICALIZE\0"
  /* 1733 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 1751 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 1769 */ "G_IMPLICIT_DEF\0"
  /* 1784 */ "DBG_INSTR_REF\0"
  /* 1798 */ "G_FNEG\0"
  /* 1805 */ "EXTRACT_SUBREG\0"
  /* 1820 */ "INSERT_SUBREG\0"
  /* 1834 */ "G_SEXT_INREG\0"
  /* 1847 */ "SUBREG_TO_REG\0"
  /* 1861 */ "G_ATOMIC_CMPXCHG\0"
  /* 1878 */ "G_ATOMICRMW_XCHG\0"
  /* 1895 */ "G_FLOG\0"
  /* 1902 */ "G_VAARG\0"
  /* 1910 */ "PREALLOCATED_ARG\0"
  /* 1927 */ "G_SMULH\0"
  /* 1935 */ "G_UMULH\0"
  /* 1943 */ "FLUSH\0"
  /* 1949 */ "G_PHI\0"
  /* 1955 */ "UMULXHI\0"
  /* 1963 */ "XMULXHI\0"
  /* 1971 */ "FDTOI\0"
  /* 1977 */ "FQTOI\0"
  /* 1983 */ "FSTOI\0"
  /* 1989 */ "G_FPTOSI\0"
  /* 1998 */ "G_FPTOUI\0"
  /* 2007 */ "G_FPOWI\0"
  /* 2015 */ "BMASK\0"
  /* 2021 */ "G_PTRMASK\0"
  /* 2031 */ "EDGE32L\0"
  /* 2039 */ "EDGE16L\0"
  /* 2047 */ "EDGE8L\0"
  /* 2054 */ "FMUL8X16AL\0"
  /* 2065 */ "GC_LABEL\0"
  /* 2074 */ "DBG_LABEL\0"
  /* 2084 */ "EH_LABEL\0"
  /* 2093 */ "ANNOTATION_LABEL\0"
  /* 2110 */ "ICALL_BRANCH_FUNNEL\0"
  /* 2130 */ "G_FSHL\0"
  /* 2137 */ "G_SHL\0"
  /* 2143 */ "G_FCEIL\0"
  /* 2151 */ "PATCHABLE_TAIL_CALL\0"
  /* 2171 */ "TLS_CALL\0"
  /* 2180 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 2207 */ "PATCHABLE_EVENT_CALL\0"
  /* 2228 */ "FENTRY_CALL\0"
  /* 2240 */ "KILL\0"
  /* 2245 */ "ALIGNADDRL\0"
  /* 2256 */ "RETL\0"
  /* 2261 */ "G_VECREDUCE_FMUL\0"
  /* 2278 */ "G_FMUL\0"
  /* 2285 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 2306 */ "G_STRICT_FMUL\0"
  /* 2320 */ "G_VECREDUCE_MUL\0"
  /* 2336 */ "G_MUL\0"
  /* 2342 */ "SIAM\0"
  /* 2347 */ "G_FREM\0"
  /* 2354 */ "G_STRICT_FREM\0"
  /* 2368 */ "G_SREM\0"
  /* 2375 */ "G_UREM\0"
  /* 2382 */ "RDWIM\0"
  /* 2388 */ "INLINEASM\0"
  /* 2398 */ "G_FMINIMUM\0"
  /* 2409 */ "G_FMAXIMUM\0"
  /* 2420 */ "G_FMINNUM\0"
  /* 2430 */ "G_FMAXNUM\0"
  /* 2440 */ "EDGE32N\0"
  /* 2448 */ "EDGE16N\0"
  /* 2456 */ "EDGE8N\0"
  /* 2463 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 2485 */ "G_FCOPYSIGN\0"
  /* 2497 */ "G_VECREDUCE_FMIN\0"
  /* 2514 */ "G_VECREDUCE_SMIN\0"
  /* 2531 */ "G_SMIN\0"
  /* 2538 */ "G_VECREDUCE_UMIN\0"
  /* 2555 */ "G_UMIN\0"
  /* 2562 */ "G_ATOMICRMW_UMIN\0"
  /* 2579 */ "G_ATOMICRMW_MIN\0"
  /* 2595 */ "G_FSIN\0"
  /* 2602 */ "EDGE32LN\0"
  /* 2611 */ "EDGE16LN\0"
  /* 2620 */ "EDGE8LN\0"
  /* 2628 */ "CFI_INSTRUCTION\0"
  /* 2644 */ "PDISTN\0"
  /* 2651 */ "ADJCALLSTACKDOWN\0"
  /* 2668 */ "SHUTDOWN\0"
  /* 2677 */ "G_SSUBO\0"
  /* 2685 */ "G_USUBO\0"
  /* 2693 */ "G_SADDO\0"
  /* 2701 */ "G_UADDO\0"
  /* 2709 */ "G_SMULO\0"
  /* 2717 */ "G_UMULO\0"
  /* 2725 */ "FZERO\0"
  /* 2731 */ "STACKMAP\0"
  /* 2740 */ "G_BSWAP\0"
  /* 2748 */ "G_SITOFP\0"
  /* 2757 */ "G_UITOFP\0"
  /* 2766 */ "G_FCMP\0"
  /* 2773 */ "G_ICMP\0"
  /* 2780 */ "UNIMP\0"
  /* 2786 */ "NOP\0"
  /* 2790 */ "G_CTPOP\0"
  /* 2798 */ "PATCHABLE_OP\0"
  /* 2811 */ "FAULTING_OP\0"
  /* 2823 */ "ADJCALLSTACKUP\0"
  /* 2838 */ "PREALLOCATED_SETUP\0"
  /* 2857 */ "G_FEXP\0"
  /* 2864 */ "FSUBQ\0"
  /* 2870 */ "FADDQ\0"
  /* 2876 */ "V9FCMPEQ\0"
  /* 2885 */ "FNEGQ\0"
  /* 2891 */ "FDMULQ\0"
  /* 2898 */ "FMULQ\0"
  /* 2904 */ "FDTOQ\0"
  /* 2910 */ "FITOQ\0"
  /* 2916 */ "FSTOQ\0"
  /* 2922 */ "FXTOQ\0"
  /* 2928 */ "V9FCMPQ\0"
  /* 2936 */ "FABSQ\0"
  /* 2942 */ "FSQRTQ\0"
  /* 2949 */ "FDIVQ\0"
  /* 2955 */ "FMOVQ\0"
  /* 2961 */ "FMOVRGEZQ\0"
  /* 2971 */ "FMOVRLEZQ\0"
  /* 2981 */ "FMOVRGZQ\0"
  /* 2990 */ "FMOVRLZQ\0"
  /* 2999 */ "FMOVRNZQ\0"
  /* 3008 */ "FMOVRZQ\0"
  /* 3016 */ "STBAR\0"
  /* 3022 */ "RDTBR\0"
  /* 3028 */ "G_BR\0"
  /* 3033 */ "INLINEASM_BR\0"
  /* 3046 */ "ALIGNADDR\0"
  /* 3056 */ "G_BLOCK_ADDR\0"
  /* 3069 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 3094 */ "G_READCYCLECOUNTER\0"
  /* 3113 */ "G_READ_REGISTER\0"
  /* 3129 */ "G_WRITE_REGISTER\0"
  /* 3146 */ "G_ASHR\0"
  /* 3153 */ "G_FSHR\0"
  /* 3160 */ "G_LSHR\0"
  /* 3167 */ "FOR\0"
  /* 3171 */ "FNOR\0"
  /* 3176 */ "FXNOR\0"
  /* 3182 */ "G_FFLOOR\0"
  /* 3191 */ "G_BUILD_VECTOR\0"
  /* 3206 */ "G_SHUFFLE_VECTOR\0"
  /* 3223 */ "FXOR\0"
  /* 3228 */ "G_VECREDUCE_XOR\0"
  /* 3244 */ "G_XOR\0"
  /* 3250 */ "G_ATOMICRMW_XOR\0"
  /* 3266 */ "G_VECREDUCE_OR\0"
  /* 3281 */ "G_OR\0"
  /* 3286 */ "G_ATOMICRMW_OR\0"
  /* 3301 */ "RDPR\0"
  /* 3306 */ "RDASR\0"
  /* 3312 */ "RDPSR\0"
  /* 3318 */ "G_INTTOPTR\0"
  /* 3329 */ "FSRC1S\0"
  /* 3336 */ "FANDNOT1S\0"
  /* 3346 */ "FNOT1S\0"
  /* 3353 */ "FORNOT1S\0"
  /* 3362 */ "FPSUB32S\0"
  /* 3371 */ "FPADD32S\0"
  /* 3380 */ "FSRC2S\0"
  /* 3387 */ "FANDNOT2S\0"
  /* 3397 */ "FNOT2S\0"
  /* 3404 */ "FORNOT2S\0"
  /* 3413 */ "FPSUB16S\0"
  /* 3422 */ "FPADD16S\0"
  /* 3431 */ "G_FABS\0"
  /* 3438 */ "G_ABS\0"
  /* 3444 */ "FSUBS\0"
  /* 3450 */ "FHSUBS\0"
  /* 3457 */ "FADDS\0"
  /* 3463 */ "FHADDS\0"
  /* 3470 */ "FNHADDS\0"
  /* 3478 */ "FNADDS\0"
  /* 3485 */ "FANDS\0"
  /* 3491 */ "FNANDS\0"
  /* 3498 */ "FONES\0"
  /* 3504 */ "V9FCMPES\0"
  /* 3513 */ "G_UNMERGE_VALUES\0"
  /* 3530 */ "G_MERGE_VALUES\0"
  /* 3545 */ "FNEGS\0"
  /* 3551 */ "FMULS\0"
  /* 3557 */ "FNMULS\0"
  /* 3564 */ "G_FCOS\0"
  /* 3571 */ "FZEROS\0"
  /* 3578 */ "FDTOS\0"
  /* 3584 */ "FITOS\0"
  /* 3590 */ "FQTOS\0"
  /* 3596 */ "MOVWTOS\0"
  /* 3604 */ "FXTOS\0"
  /* 3610 */ "V9FCMPS\0"
  /* 3618 */ "FLCMPS\0"
  /* 3625 */ "FORS\0"
  /* 3630 */ "FNORS\0"
  /* 3636 */ "FXNORS\0"
  /* 3643 */ "G_CONCAT_VECTORS\0"
  /* 3660 */ "FXORS\0"
  /* 3666 */ "COPY_TO_REGCLASS\0"
  /* 3683 */ "FABSS\0"
  /* 3689 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 3719 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 3746 */ "FSQRTS\0"
  /* 3753 */ "FDIVS\0"
  /* 3759 */ "FMOVS\0"
  /* 3765 */ "FMOVRGEZS\0"
  /* 3775 */ "FMOVRLEZS\0"
  /* 3785 */ "FMOVRGZS\0"
  /* 3794 */ "FMOVRLZS\0"
  /* 3803 */ "FMOVRNZS\0"
  /* 3812 */ "FMOVRZS\0"
  /* 3820 */ "G_SSUBSAT\0"
  /* 3830 */ "G_USUBSAT\0"
  /* 3840 */ "G_SADDSAT\0"
  /* 3850 */ "G_UADDSAT\0"
  /* 3860 */ "G_SSHLSAT\0"
  /* 3870 */ "G_USHLSAT\0"
  /* 3880 */ "G_SMULFIXSAT\0"
  /* 3893 */ "G_UMULFIXSAT\0"
  /* 3906 */ "G_SDIVFIXSAT\0"
  /* 3919 */ "G_UDIVFIXSAT\0"
  /* 3932 */ "G_EXTRACT\0"
  /* 3942 */ "G_SELECT\0"
  /* 3951 */ "G_BRINDIRECT\0"
  /* 3964 */ "PATCHABLE_RET\0"
  /* 3978 */ "G_MEMSET\0"
  /* 3987 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 4011 */ "G_BRJT\0"
  /* 4018 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 4039 */ "G_INSERT_VECTOR_ELT\0"
  /* 4059 */ "BPFCCANT\0"
  /* 4068 */ "BPICCANT\0"
  /* 4077 */ "BPXCCANT\0"
  /* 4086 */ "G_FCONSTANT\0"
  /* 4098 */ "G_CONSTANT\0"
  /* 4109 */ "BPFCCNT\0"
  /* 4117 */ "BPICCNT\0"
  /* 4125 */ "BPXCCNT\0"
  /* 4133 */ "LZCNT\0"
  /* 4139 */ "STATEPOINT\0"
  /* 4150 */ "PATCHPOINT\0"
  /* 4161 */ "G_PTRTOINT\0"
  /* 4172 */ "G_FRINT\0"
  /* 4180 */ "G_INTRINSIC_LRINT\0"
  /* 4198 */ "G_FNEARBYINT\0"
  /* 4211 */ "G_VASTART\0"
  /* 4221 */ "LIFETIME_START\0"
  /* 4236 */ "G_INSERT\0"
  /* 4245 */ "G_FSQRT\0"
  /* 4253 */ "G_STRICT_FSQRT\0"
  /* 4268 */ "G_BITCAST\0"
  /* 4278 */ "G_ADDRSPACE_CAST\0"
  /* 4295 */ "PDIST\0"
  /* 4301 */ "G_FPEXT\0"
  /* 4309 */ "G_SEXT\0"
  /* 4316 */ "G_ANYEXT\0"
  /* 4325 */ "G_ZEXT\0"
  /* 4332 */ "FMUL8X16AU\0"
  /* 4343 */ "G_FDIV\0"
  /* 4350 */ "G_STRICT_FDIV\0"
  /* 4364 */ "G_SDIV\0"
  /* 4371 */ "G_UDIV\0"
  /* 4378 */ "FLUSHW\0"
  /* 4385 */ "G_FPOW\0"
  /* 4392 */ "MOVSTOSW\0"
  /* 4401 */ "MOVSTOUW\0"
  /* 4410 */ "G_VECREDUCE_FMAX\0"
  /* 4427 */ "G_VECREDUCE_SMAX\0"
  /* 4444 */ "G_SMAX\0"
  /* 4451 */ "G_VECREDUCE_UMAX\0"
  /* 4468 */ "G_UMAX\0"
  /* 4475 */ "G_ATOMICRMW_UMAX\0"
  /* 4492 */ "G_ATOMICRMW_MAX\0"
  /* 4508 */ "GETPCX\0"
  /* 4515 */ "G_FRAME_INDEX\0"
  /* 4529 */ "FPACKFIX\0"
  /* 4538 */ "G_SMULFIX\0"
  /* 4548 */ "G_UMULFIX\0"
  /* 4558 */ "G_SDIVFIX\0"
  /* 4568 */ "G_UDIVFIX\0"
  /* 4578 */ "XMULX\0"
  /* 4584 */ "FDTOX\0"
  /* 4590 */ "MOVDTOX\0"
  /* 4598 */ "FQTOX\0"
  /* 4604 */ "FSTOX\0"
  /* 4610 */ "G_MEMCPY\0"
  /* 4619 */ "COPY\0"
  /* 4624 */ "G_CTLZ\0"
  /* 4631 */ "G_CTTZ\0"
  /* 4638 */ "SETHIi\0"
  /* 4645 */ "MEMBARi\0"
  /* 4653 */ "SETHIXi\0"
  /* 4661 */ "SRAri\0"
  /* 4667 */ "LDSBri\0"
  /* 4674 */ "STBri\0"
  /* 4680 */ "LDUBri\0"
  /* 4687 */ "SUBri\0"
  /* 4693 */ "LDSTUBri\0"
  /* 4702 */ "SMACri\0"
  /* 4709 */ "UMACri\0"
  /* 4716 */ "SUBCri\0"
  /* 4723 */ "TSUBCCri\0"
  /* 4732 */ "TADDCCri\0"
  /* 4741 */ "ANDCCri\0"
  /* 4749 */ "V9MOVFCCri\0"
  /* 4760 */ "TICCri\0"
  /* 4767 */ "MOVICCri\0"
  /* 4776 */ "SMULCCri\0"
  /* 4785 */ "UMULCCri\0"
  /* 4794 */ "ANDNCCri\0"
  /* 4803 */ "ORNCCri\0"
  /* 4811 */ "XNORCCri\0"
  /* 4820 */ "XORCCri\0"
  /* 4828 */ "MULSCCri\0"
  /* 4837 */ "SDIVCCri\0"
  /* 4846 */ "UDIVCCri\0"
  /* 4855 */ "TXCCri\0"
  /* 4862 */ "MOVXCCri\0"
  /* 4871 */ "ADDCri\0"
  /* 4878 */ "LDDCri\0"
  /* 4885 */ "LDCri\0"
  /* 4891 */ "STDCri\0"
  /* 4898 */ "STCri\0"
  /* 4904 */ "LEA_ADDri\0"
  /* 4914 */ "LEAX_ADDri\0"
  /* 4925 */ "LDDri\0"
  /* 4931 */ "LDri\0"
  /* 4936 */ "ANDri\0"
  /* 4942 */ "BINDri\0"
  /* 4949 */ "STDri\0"
  /* 4955 */ "SUBEri\0"
  /* 4962 */ "ADDEri\0"
  /* 4969 */ "RESTOREri\0"
  /* 4979 */ "SAVEri\0"
  /* 4986 */ "LDDFri\0"
  /* 4993 */ "LDFri\0"
  /* 4999 */ "STDFri\0"
  /* 5006 */ "LDQFri\0"
  /* 5013 */ "STQFri\0"
  /* 5020 */ "STFri\0"
  /* 5026 */ "LDSHri\0"
  /* 5033 */ "FLUSHri\0"
  /* 5041 */ "STHri\0"
  /* 5047 */ "LDUHri\0"
  /* 5054 */ "CALLri\0"
  /* 5061 */ "SLLri\0"
  /* 5067 */ "JMPLri\0"
  /* 5074 */ "SRLri\0"
  /* 5080 */ "SMULri\0"
  /* 5087 */ "UMULri\0"
  /* 5094 */ "WRWIMri\0"
  /* 5102 */ "ANDNri\0"
  /* 5109 */ "ORNri\0"
  /* 5115 */ "TRAPri\0"
  /* 5122 */ "SWAPri\0"
  /* 5129 */ "CMPri\0"
  /* 5135 */ "STDCQri\0"
  /* 5143 */ "STDFQri\0"
  /* 5151 */ "WRTBRri\0"
  /* 5159 */ "XNORri\0"
  /* 5166 */ "XORri\0"
  /* 5172 */ "WRPRri\0"
  /* 5179 */ "WRASRri\0"
  /* 5187 */ "LDCSRri\0"
  /* 5195 */ "STCSRri\0"
  /* 5203 */ "LDFSRri\0"
  /* 5211 */ "STFSRri\0"
  /* 5219 */ "LDXFSRri\0"
  /* 5228 */ "STXFSRri\0"
  /* 5237 */ "PWRPSRri\0"
  /* 5246 */ "STri\0"
  /* 5251 */ "RETTri\0"
  /* 5258 */ "SDIVri\0"
  /* 5265 */ "UDIVri\0"
  /* 5272 */ "TSUBCCTVri\0"
  /* 5283 */ "TADDCCTVri\0"
  /* 5294 */ "LDSWri\0"
  /* 5301 */ "SRAXri\0"
  /* 5308 */ "SUBXri\0"
  /* 5315 */ "ADDXri\0"
  /* 5322 */ "LDXri\0"
  /* 5328 */ "ANDXri\0"
  /* 5335 */ "SLLXri\0"
  /* 5342 */ "SRLXri\0"
  /* 5349 */ "MULXri\0"
  /* 5356 */ "XORXri\0"
  /* 5363 */ "STXri\0"
  /* 5369 */ "SDIVXri\0"
  /* 5377 */ "UDIVXri\0"
  /* 5385 */ "MOVRGEZri\0"
  /* 5395 */ "MOVRLEZri\0"
  /* 5405 */ "MOVRGZri\0"
  /* 5414 */ "MOVRLZri\0"
  /* 5423 */ "MOVRNZri\0"
  /* 5432 */ "MOVRRZri\0"
  /* 5441 */ "BPGEZapn\0"
  /* 5450 */ "BPLEZapn\0"
  /* 5459 */ "BPGZapn\0"
  /* 5467 */ "BPLZapn\0"
  /* 5475 */ "BPNZapn\0"
  /* 5483 */ "BPZapn\0"
  /* 5490 */ "BPGEZnapn\0"
  /* 5500 */ "BPLEZnapn\0"
  /* 5510 */ "BPGZnapn\0"
  /* 5519 */ "BPLZnapn\0"
  /* 5528 */ "BPNZnapn\0"
  /* 5537 */ "BPZnapn\0"
  /* 5545 */ "LDSBArr\0"
  /* 5553 */ "STBArr\0"
  /* 5560 */ "LDUBArr\0"
  /* 5568 */ "LDSTUBArr\0"
  /* 5578 */ "LDDArr\0"
  /* 5585 */ "LDArr\0"
  /* 5591 */ "STDArr\0"
  /* 5598 */ "LDDFArr\0"
  /* 5606 */ "LDFArr\0"
  /* 5613 */ "STDFArr\0"
  /* 5621 */ "LDQFArr\0"
  /* 5629 */ "STQFArr\0"
  /* 5637 */ "STFArr\0"
  /* 5644 */ "LDSHArr\0"
  /* 5652 */ "STHArr\0"
  /* 5659 */ "LDUHArr\0"
  /* 5667 */ "SWAPArr\0"
  /* 5675 */ "SRArr\0"
  /* 5681 */ "CASArr\0"
  /* 5688 */ "STArr\0"
  /* 5694 */ "LDSBrr\0"
  /* 5701 */ "STBrr\0"
  /* 5707 */ "LDUBrr\0"
  /* 5714 */ "SUBrr\0"
  /* 5720 */ "LDSTUBrr\0"
  /* 5729 */ "SMACrr\0"
  /* 5736 */ "UMACrr\0"
  /* 5743 */ "SUBCrr\0"
  /* 5750 */ "TSUBCCrr\0"
  /* 5759 */ "TADDCCrr\0"
  /* 5768 */ "ANDCCrr\0"
  /* 5776 */ "V9MOVFCCrr\0"
  /* 5787 */ "TICCrr\0"
  /* 5794 */ "MOVICCrr\0"
  /* 5803 */ "SMULCCrr\0"
  /* 5812 */ "UMULCCrr\0"
  /* 5821 */ "ANDNCCrr\0"
  /* 5830 */ "ORNCCrr\0"
  /* 5838 */ "XNORCCrr\0"
  /* 5847 */ "XORCCrr\0"
  /* 5855 */ "MULSCCrr\0"
  /* 5864 */ "SDIVCCrr\0"
  /* 5873 */ "UDIVCCrr\0"
  /* 5882 */ "TXCCrr\0"
  /* 5889 */ "MOVXCCrr\0"
  /* 5898 */ "ADDCrr\0"
  /* 5905 */ "LDDCrr\0"
  /* 5912 */ "LDCrr\0"
  /* 5918 */ "STDCrr\0"
  /* 5925 */ "POPCrr\0"
  /* 5932 */ "STCrr\0"
  /* 5938 */ "TLS_ADDrr\0"
  /* 5948 */ "LDDrr\0"
  /* 5954 */ "TLS_LDrr\0"
  /* 5963 */ "ANDrr\0"
  /* 5969 */ "BINDrr\0"
  /* 5976 */ "STDrr\0"
  /* 5982 */ "SUBErr\0"
  /* 5989 */ "ADDErr\0"
  /* 5996 */ "RESTORErr\0"
  /* 6006 */ "SAVErr\0"
  /* 6013 */ "LDDFrr\0"
  /* 6020 */ "LDFrr\0"
  /* 6026 */ "STDFrr\0"
  /* 6033 */ "LDQFrr\0"
  /* 6040 */ "STQFrr\0"
  /* 6047 */ "STFrr\0"
  /* 6053 */ "LDSHrr\0"
  /* 6060 */ "FLUSHrr\0"
  /* 6068 */ "STHrr\0"
  /* 6074 */ "LDUHrr\0"
  /* 6081 */ "CALLrr\0"
  /* 6088 */ "SLLrr\0"
  /* 6094 */ "JMPLrr\0"
  /* 6101 */ "SRLrr\0"
  /* 6107 */ "SMULrr\0"
  /* 6114 */ "UMULrr\0"
  /* 6121 */ "WRWIMrr\0"
  /* 6129 */ "ANDNrr\0"
  /* 6136 */ "ORNrr\0"
  /* 6142 */ "ANDXNrr\0"
  /* 6150 */ "ORXNrr\0"
  /* 6157 */ "TRAPrr\0"
  /* 6164 */ "SWAPrr\0"
  /* 6171 */ "CMPrr\0"
  /* 6177 */ "STDCQrr\0"
  /* 6185 */ "STDFQrr\0"
  /* 6193 */ "WRTBRrr\0"
  /* 6201 */ "XNORrr\0"
  /* 6208 */ "XORrr\0"
  /* 6214 */ "WRPRrr\0"
  /* 6221 */ "WRASRrr\0"
  /* 6229 */ "LDCSRrr\0"
  /* 6237 */ "STCSRrr\0"
  /* 6245 */ "LDFSRrr\0"
  /* 6253 */ "STFSRrr\0"
  /* 6261 */ "LDXFSRrr\0"
  /* 6270 */ "STXFSRrr\0"
  /* 6279 */ "PWRPSRrr\0"
  /* 6288 */ "CASrr\0"
  /* 6294 */ "STrr\0"
  /* 6299 */ "RETTrr\0"
  /* 6306 */ "SDIVrr\0"
  /* 6313 */ "UDIVrr\0"
  /* 6320 */ "TSUBCCTVrr\0"
  /* 6331 */ "TADDCCTVrr\0"
  /* 6342 */ "LDSWrr\0"
  /* 6349 */ "SRAXrr\0"
  /* 6356 */ "SUBXrr\0"
  /* 6363 */ "TLS_ADDXrr\0"
  /* 6374 */ "TLS_LDXrr\0"
  /* 6384 */ "ANDXrr\0"
  /* 6391 */ "SLLXrr\0"
  /* 6398 */ "SRLXrr\0"
  /* 6405 */ "MULXrr\0"
  /* 6412 */ "XNORXrr\0"
  /* 6420 */ "XORXrr\0"
  /* 6427 */ "CASXrr\0"
  /* 6434 */ "STXrr\0"
  /* 6440 */ "SDIVXrr\0"
  /* 6448 */ "UDIVXrr\0"
  /* 6456 */ "MOVRGEZrr\0"
  /* 6466 */ "MOVRLEZrr\0"
  /* 6476 */ "MOVRGZrr\0"
  /* 6485 */ "MOVRLZrr\0"
  /* 6494 */ "MOVRNZrr\0"
  /* 6503 */ "MOVRRZrr\0"
  /* 6512 */ "BPGEZapt\0"
  /* 6521 */ "BPLEZapt\0"
  /* 6530 */ "BPGZapt\0"
  /* 6538 */ "BPLZapt\0"
  /* 6546 */ "BPNZapt\0"
  /* 6554 */ "BPZapt\0"
  /* 6561 */ "BPGEZnapt\0"
  /* 6571 */ "BPLEZnapt\0"
  /* 6581 */ "BPGZnapt\0"
  /* 6590 */ "BPLZnapt\0"
  /* 6599 */ "BPNZnapt\0"
  /* 6608 */ "BPZnapt\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned SparcInstrNameIndices[] = {
    1951U, 2388U, 3033U, 2628U, 2084U, 2065U, 2093U, 2240U, 
    1805U, 1820U, 1771U, 1847U, 3666U, 1673U, 1784U, 2074U, 
    1522U, 4619U, 1602U, 4221U, 1287U, 1485U, 2731U, 2228U, 
    4150U, 1388U, 2838U, 1910U, 4139U, 1623U, 2811U, 2798U, 
    3069U, 3964U, 3987U, 2151U, 2207U, 2180U, 2110U, 1110U, 
    538U, 2336U, 4364U, 4371U, 2368U, 2375U, 1265U, 3281U, 
    3244U, 1769U, 1949U, 4515U, 1683U, 3932U, 3513U, 4236U, 
    3530U, 3191U, 872U, 3643U, 4161U, 3318U, 4268U, 1708U, 
    846U, 1323U, 4180U, 2463U, 3094U, 998U, 942U, 972U, 
    983U, 923U, 953U, 1652U, 1636U, 3689U, 1861U, 1878U, 
    1126U, 544U, 1271U, 1224U, 3286U, 3250U, 4492U, 2579U, 
    4475U, 2562U, 1077U, 521U, 1514U, 1314U, 3951U, 824U, 
    3719U, 4316U, 864U, 4098U, 4086U, 4211U, 1902U, 4309U, 
    1834U, 4325U, 2137U, 3160U, 3146U, 2130U, 3153U, 2773U, 
    2766U, 3942U, 2701U, 1543U, 2685U, 1506U, 2693U, 1535U, 
    2677U, 1498U, 2717U, 2709U, 1935U, 1927U, 3850U, 3840U, 
    3830U, 3820U, 3870U, 3860U, 4538U, 4548U, 3880U, 3893U, 
    4558U, 4568U, 3906U, 3919U, 1035U, 500U, 2278U, 469U, 
    916U, 4343U, 2347U, 4385U, 2007U, 2857U, 178U, 1895U, 
    170U, 0U, 1798U, 4301U, 836U, 1989U, 1998U, 2748U, 
    2757U, 3431U, 2485U, 1717U, 2420U, 2430U, 1551U, 1566U, 
    2398U, 2409U, 1116U, 2021U, 2531U, 4444U, 2555U, 4468U, 
    3438U, 3028U, 4011U, 4039U, 4018U, 3206U, 4631U, 1751U, 
    4624U, 1733U, 2790U, 2740U, 1660U, 2143U, 3564U, 2595U, 
    4245U, 3182U, 4172U, 4198U, 4278U, 3056U, 1589U, 893U, 
    1063U, 507U, 2306U, 4350U, 2354U, 475U, 4253U, 3113U, 
    3129U, 4610U, 1698U, 3978U, 1042U, 2285U, 1018U, 2261U, 
    4410U, 2497U, 1094U, 2320U, 1249U, 3266U, 3228U, 4427U, 
    2514U, 4451U, 2538U, 2651U, 2823U, 4508U, 586U, 697U, 
    622U, 733U, 663U, 770U, 604U, 715U, 3983U, 4733U, 
    5760U, 4871U, 5898U, 4962U, 5989U, 910U, 560U, 5315U, 
    6367U, 4908U, 5942U, 3046U, 2245U, 4741U, 5768U, 4794U, 
    5821U, 5102U, 6129U, 6142U, 5328U, 6384U, 4936U, 5963U, 
    401U, 156U, 422U, 429U, 1301U, 454U, 4942U, 5969U, 
    2015U, 568U, 432U, 4059U, 4109U, 5441U, 6512U, 5490U, 
    6561U, 5459U, 6530U, 5510U, 6581U, 681U, 439U, 4068U, 
    4117U, 5450U, 6521U, 5500U, 6571U, 5467U, 6538U, 5519U, 
    6590U, 5475U, 6546U, 5528U, 6599U, 788U, 446U, 4077U, 
    4125U, 5483U, 6554U, 5537U, 6608U, 1609U, 2166U, 5054U, 
    6081U, 9U, 5681U, 6427U, 6288U, 1300U, 453U, 281U, 
    108U, 415U, 5129U, 6171U, 248U, 2039U, 2611U, 2448U, 
    75U, 2031U, 2602U, 2440U, 409U, 2047U, 2620U, 2456U, 
    1405U, 2936U, 3683U, 1142U, 2870U, 3457U, 488U, 1213U, 
    29U, 3336U, 186U, 3387U, 3485U, 1307U, 461U, 303U, 
    1375U, 320U, 130U, 337U, 147U, 255U, 82U, 264U, 
    91U, 2930U, 3612U, 1418U, 2949U, 3753U, 2891U, 1971U, 
    2904U, 3578U, 4584U, 1241U, 1148U, 3463U, 1011U, 3450U, 
    1341U, 2910U, 3584U, 1381U, 3618U, 1943U, 4378U, 5033U, 
    6060U, 312U, 1424U, 576U, 687U, 794U, 2955U, 641U, 
    750U, 804U, 1430U, 2961U, 3765U, 1450U, 2981U, 3785U, 
    1440U, 2971U, 3775U, 1459U, 2990U, 3794U, 1468U, 2999U, 
    3803U, 1477U, 3008U, 3812U, 3759U, 653U, 760U, 814U, 
    390U, 367U, 346U, 2054U, 4332U, 1185U, 378U, 355U, 
    2898U, 3551U, 1163U, 3478U, 1218U, 3491U, 1179U, 2885U, 
    3545U, 1155U, 3470U, 1191U, 3557U, 3171U, 3630U, 38U, 
    3346U, 195U, 3397U, 1205U, 1618U, 3498U, 3167U, 44U, 
    3353U, 201U, 3404U, 3625U, 273U, 100U, 4529U, 240U, 
    3422U, 67U, 3371U, 213U, 1581U, 232U, 3413U, 59U, 
    3362U, 1347U, 1977U, 3590U, 4598U, 329U, 139U, 289U, 
    116U, 1198U, 1411U, 2942U, 3746U, 225U, 52U, 23U, 
    3329U, 164U, 3380U, 296U, 123U, 1353U, 1983U, 2916U, 
    4604U, 1005U, 2864U, 3444U, 3176U, 3636U, 3223U, 3660U, 
    1359U, 2922U, 3604U, 2725U, 3571U, 5067U, 6094U, 5585U, 
    5187U, 6229U, 4885U, 5912U, 5578U, 4878U, 5905U, 5598U, 
    4986U, 6013U, 4925U, 5948U, 5606U, 5203U, 6245U, 4993U, 
    6020U, 5621U, 5006U, 6033U, 5545U, 4667U, 5694U, 5644U, 
    5026U, 6053U, 5568U, 4693U, 5720U, 5294U, 6342U, 5560U, 
    4680U, 5707U, 5659U, 5047U, 6074U, 5219U, 6261U, 5322U, 
    6378U, 4931U, 5958U, 4914U, 4904U, 4133U, 4645U, 4590U, 
    4751U, 5778U, 4767U, 5794U, 5385U, 6456U, 5405U, 6476U, 
    5395U, 6466U, 5414U, 6485U, 5423U, 6494U, 5432U, 6503U, 
    4392U, 4401U, 3596U, 4862U, 5889U, 1365U, 4828U, 5855U, 
    5349U, 6405U, 2786U, 4813U, 5840U, 4803U, 5830U, 5109U, 
    6136U, 6150U, 5357U, 6414U, 5161U, 6203U, 4295U, 2644U, 
    5925U, 5237U, 6279U, 3306U, 3301U, 3312U, 3022U, 2382U, 
    4969U, 5996U, 3974U, 2256U, 5251U, 6299U, 4979U, 6006U, 
    4837U, 5864U, 5369U, 6440U, 5258U, 6306U, 4653U, 4638U, 
    2668U, 2342U, 5335U, 6391U, 5061U, 6088U, 4702U, 5729U, 
    4776U, 5803U, 5080U, 6107U, 5301U, 6349U, 4661U, 5675U, 
    5342U, 6398U, 5074U, 6101U, 5688U, 3016U, 5553U, 4674U, 
    5701U, 5195U, 6237U, 4898U, 5932U, 5591U, 5135U, 6177U, 
    4891U, 5918U, 5613U, 5143U, 6185U, 4999U, 6026U, 4949U, 
    5976U, 5637U, 5211U, 6253U, 5020U, 6047U, 5652U, 5041U, 
    6068U, 5629U, 5013U, 6040U, 5228U, 6270U, 5363U, 6434U, 
    5246U, 6294U, 4724U, 5751U, 4716U, 5743U, 4955U, 5982U, 
    5308U, 6356U, 4687U, 5714U, 5667U, 5122U, 6164U, 19U, 
    209U, 221U, 5283U, 6331U, 4732U, 5759U, 4760U, 5787U, 
    6363U, 5938U, 2171U, 6374U, 5954U, 5115U, 6157U, 5272U, 
    6320U, 4723U, 5750U, 4855U, 5882U, 4846U, 5873U, 5377U, 
    6448U, 5265U, 6313U, 4709U, 5736U, 4785U, 5812U, 1955U, 
    5087U, 6114U, 2780U, 1373U, 1170U, 2876U, 3504U, 2928U, 
    3610U, 574U, 639U, 651U, 4749U, 5776U, 5179U, 6221U, 
    5172U, 6214U, 5238U, 6280U, 5151U, 6193U, 5094U, 6121U, 
    4578U, 1963U, 4811U, 5838U, 6412U, 5159U, 6201U, 4820U, 
    5847U, 5356U, 6420U, 5166U, 6208U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, nullptr, nullptr, 757);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~SparcGenInstrInfo() override = default;

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
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, nullptr, nullptr, 757);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SP {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SP {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SP {
namespace OpTypes {
enum OperandType {
  CCOp = 0,
  MEMri = 1,
  MEMrr = 2,
  MembarTag = 3,
  TLSSym = 4,
  bprtarget = 5,
  bprtarget16 = 6,
  brtarget = 7,
  calltarget = 8,
  f32imm = 9,
  f64imm = 10,
  getPCX = 11,
  i16imm = 12,
  i1imm = 13,
  i32imm = 14,
  i64imm = 15,
  i8imm = 16,
  ptype0 = 17,
  ptype1 = 18,
  ptype2 = 19,
  ptype3 = 20,
  ptype4 = 21,
  ptype5 = 22,
  shift_imm5 = 23,
  shift_imm6 = 24,
  simm13Op = 25,
  type0 = 26,
  type1 = 27,
  type2 = 28,
  type3 = 29,
  type4 = 30,
  type5 = 31,
  untyped_imm_0 = 32,
  ASRRegs = 33,
  CoprocPair = 34,
  CoprocRegs = 35,
  DFPRegs = 36,
  FCCRegs = 37,
  FPRegs = 38,
  I64Regs = 39,
  IntPair = 40,
  IntRegs = 41,
  LowDFPRegs = 42,
  LowQFPRegs = 43,
  PRRegs = 44,
  QFPRegs = 45,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace SP {
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
    577,
    581,
    585,
    589,
    593,
    597,
    601,
    605,
    609,
    611,
    614,
    617,
    620,
    623,
    626,
    629,
    632,
    635,
    638,
    641,
    644,
    647,
    650,
    653,
    656,
    659,
    662,
    665,
    668,
    671,
    674,
    677,
    680,
    683,
    686,
    689,
    692,
    695,
    696,
    698,
    700,
    702,
    704,
    707,
    710,
    713,
    716,
    719,
    721,
    723,
    725,
    727,
    729,
    731,
    733,
    735,
    737,
    739,
    741,
    743,
    745,
    747,
    749,
    751,
    753,
    755,
    757,
    759,
    761,
    763,
    765,
    767,
    769,
    771,
    773,
    775,
    777,
    779,
    781,
    783,
    786,
    787,
    789,
    791,
    795,
    800,
    804,
    808,
    810,
    812,
    813,
    814,
    815,
    817,
    819,
    822,
    825,
    828,
    831,
    834,
    837,
    840,
    843,
    846,
    849,
    852,
    855,
    857,
    859,
    861,
    864,
    867,
    870,
    873,
    876,
    879,
    882,
    885,
    888,
    891,
    893,
    895,
    898,
    900,
    903,
    906,
    909,
    912,
    915,
    918,
    921,
    924,
    926,
    928,
    931,
    934,
    937,
    940,
    942,
    944,
    946,
    948,
    950,
    953,
    956,
    959,
    962,
    964,
    966,
    968,
    971,
    974,
    974,
    974,
    976,
    978,
    981,
    983,
    987,
    991,
    995,
    997,
    1001,
    1005,
    1009,
    1012,
    1015,
    1018,
    1021,
    1024,
    1027,
    1030,
    1033,
    1036,
    1039,
    1042,
    1045,
    1048,
    1051,
    1054,
    1057,
    1060,
    1063,
    1065,
    1069,
    1073,
    1077,
    1080,
    1083,
    1086,
    1089,
    1092,
    1095,
    1098,
    1101,
    1104,
    1107,
    1110,
    1113,
    1116,
    1119,
    1121,
    1123,
    1125,
    1128,
    1131,
    1134,
    1137,
    1140,
    1143,
    1145,
    1147,
    1149,
    1151,
    1154,
    1156,
    1158,
    1161,
    1164,
    1167,
    1170,
    1173,
    1176,
    1178,
    1181,
    1183,
    1186,
    1189,
    1192,
    1195,
    1198,
    1201,
    1204,
    1207,
    1210,
    1213,
    1215,
    1217,
    1219,
    1221,
    1224,
    1227,
    1230,
    1233,
    1236,
    1238,
    1240,
    1242,
    1245,
    1248,
    1250,
    1252,
    1254,
    1256,
    1259,
    1262,
    1264,
    1266,
    1268,
    1270,
    1273,
    1276,
    1279,
    1282,
    1285,
    1288,
    1291,
    1293,
    1295,
    1297,
    1299,
    1301,
    1304,
    1307,
    1311,
    1313,
    1315,
    1318,
    1321,
    1325,
    1328,
    1331,
    1335,
    1338,
    1341,
    1344,
    1347,
    1351,
    1353,
    1355,
    1358,
    1361,
    1365,
    1368,
    1371,
    1375,
    1378,
    1381,
    1385,
    1388,
    1391,
    1395,
    1398,
    1401,
    1404,
    1407,
    1411,
    1414,
    1417,
    1421,
    1424,
    1427,
    1429,
    1431,
    1434,
    1437,
    1440,
    1443,
    1446,
    1449,
    1451,
    1452,
    1454,
    1458,
    1462,
    1466,
    1470,
    1473,
    1476,
    1479,
    1482,
    1485,
    1488,
    1491,
    1494,
    1497,
    1500,
    1503,
    1506,
    1508,
    1510,
    1512,
    1516,
    1520,
    1522,
    1525,
    1528,
    1531,
    1534,
    1534,
    1537,
    1540,
    1543,
    1546,
    1549,
    1552,
    1555,
    1558,
    1561,
    1564,
    1567,
    1570,
    1573,
    1575,
    1577,
    1579,
    1581,
    1583,
    1584,
    1585,
    1586,
    1589,
    1592,
    1593,
    1594,
    1596,
    1598,
    1601,
    1604,
    1607,
    1610,
    1613,
    1616,
    1619,
    1622,
    1624,
    1626,
    1626,
    1626,
    1629,
    1632,
    1635,
    1638,
    1642,
    1646,
    1649,
    1652,
    1655,
    1658,
    1661,
    1664,
    1667,
    1670,
    1673,
    1676,
    1679,
    1682,
    1686,
    1686,
    1690,
    1693,
    1696,
    1698,
    1700,
    1703,
    1706,
    1710,
    1712,
    1714,
    1717,
    1720,
    1724,
    1726,
    1728,
    1731,
    1734,
    1737,
    1740,
    1744,
    1746,
    1748,
    1751,
    1754,
    1758,
    1761,
    1764,
    1768,
    1771,
    1774,
    1776,
    1778,
    1781,
    1784,
    1787,
    1790,
    1793,
    1796,
    1799,
    1802,
    1805,
    1808,
    1811,
    1814,
    1817,
    1820,
    1825,
    1829,
    1833,
    1833,
    1833,
    1833,
    1836,
    1839,
    1842,
    1845,
    1848,
    1851,
    1855,
    1859,
    1861,
    1865,
    1869,
    1872,
    1875,
    1878,
    1881,
    1884,
    1887,
    1890,
    1893,
    1896,
    1899,
    1902,
    1905,
    1908,
    1911,
    1915,
    1919,
    1922,
    1925,
    1928,
    1931,
    1934,
    1935,
    1938,
    1941,
    1944,
    1947,
    1950,
    1953,
    1958,
    1963,
    1968,
    1973,
    1978,
    1981,
    1984,
    1987,
    1990,
    1992,
    1994,
    1996,
    1998,
    2000,
    2002,
    2005,
    2008,
    2011,
    2014,
    2017,
    2020,
    2023,
    2026,
    2029,
    2032,
    2035,
    2038,
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
    OpTypes::getPCX, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::i32imm, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::i32imm, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::i32imm, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i32imm, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::i32imm, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::brtarget, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::calltarget, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i8imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::I64Regs, 
    OpTypes::I64Regs, 
    OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::QFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, 
    OpTypes::QFPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    /**/
    /**/
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::QFPRegs, 
    OpTypes::DFPRegs, OpTypes::QFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::QFPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::CoprocRegs, -1, OpTypes::i32imm, 
    OpTypes::CoprocRegs, -1, -1, 
    OpTypes::IntPair, -1, -1, OpTypes::i8imm, 
    OpTypes::CoprocPair, -1, OpTypes::i32imm, 
    OpTypes::CoprocPair, -1, -1, 
    OpTypes::DFPRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::DFPRegs, -1, OpTypes::i32imm, 
    OpTypes::DFPRegs, -1, -1, 
    OpTypes::IntPair, -1, OpTypes::i32imm, 
    OpTypes::IntPair, -1, -1, 
    OpTypes::FPRegs, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::FPRegs, -1, OpTypes::i32imm, 
    OpTypes::FPRegs, -1, -1, 
    OpTypes::QFPRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::QFPRegs, -1, OpTypes::i32imm, 
    OpTypes::QFPRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::I64Regs, -1, OpTypes::i32imm, 
    OpTypes::I64Regs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::I64Regs, -1, OpTypes::i32imm, 
    OpTypes::I64Regs, -1, -1, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::I64Regs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::MembarTag, 
    OpTypes::I64Regs, OpTypes::DFPRegs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    /**/
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::PRRegs, 
    OpTypes::IntRegs, 
    OpTypes::IntRegs, 
    OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::IntRegs, OpTypes::i32imm, 
    /**/
    /**/
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::shift_imm6, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::shift_imm5, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::shift_imm6, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::shift_imm5, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::shift_imm6, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::shift_imm5, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, OpTypes::i8imm, 
    /**/
    -1, -1, OpTypes::IntRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::CoprocRegs, 
    -1, -1, OpTypes::CoprocRegs, 
    -1, -1, OpTypes::IntPair, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::CoprocPair, 
    -1, -1, OpTypes::CoprocPair, 
    -1, -1, OpTypes::DFPRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::DFPRegs, 
    -1, -1, OpTypes::DFPRegs, 
    -1, OpTypes::i32imm, OpTypes::IntPair, 
    -1, -1, OpTypes::IntPair, 
    -1, -1, OpTypes::FPRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::FPRegs, 
    -1, -1, OpTypes::FPRegs, 
    -1, -1, OpTypes::IntRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, 
    -1, -1, OpTypes::QFPRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, OpTypes::QFPRegs, 
    -1, -1, OpTypes::QFPRegs, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::I64Regs, 
    -1, -1, OpTypes::I64Regs, 
    -1, OpTypes::i32imm, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, OpTypes::IntRegs, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, OpTypes::IntRegs, 
    OpTypes::IntRegs, -1, -1, OpTypes::IntRegs, 
    /**/
    /**/
    /**/
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::TLSSym, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::TLSSym, 
    OpTypes::calltarget, OpTypes::TLSSym, 
    OpTypes::IntRegs, -1, -1, OpTypes::TLSSym, 
    OpTypes::IntRegs, -1, -1, OpTypes::TLSSym, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::i32imm, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FCCRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FCCRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FCCRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FCCRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::FCCRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::FCCRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::FCCRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::FCCRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::ASRRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::ASRRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::PRRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::PRRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

