/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t BPFMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(504403158265495552),	// ADD_ri
    UINT64_C(288230376151711744),	// ADD_ri_32
    UINT64_C(1080863910568919040),	// ADD_rr
    UINT64_C(864691128455135232),	// ADD_rr_32
    UINT64_C(6269010681299730432),	// AND_ri
    UINT64_C(6052837899185946624),	// AND_ri_32
    UINT64_C(6845471433603153920),	// AND_rr
    UINT64_C(6629298651489370112),	// AND_rr_32
    UINT64_C(15852670688344145936),	// BE16
    UINT64_C(15852670688344145952),	// BE32
    UINT64_C(15852670688344145984),	// BE64
    UINT64_C(15780613094306218225),	// CMPXCHGD
    UINT64_C(14051230837395947761),	// CMPXCHGW32
    UINT64_C(6917529027641081856),	// CORE_ALU32_MEM
    UINT64_C(6917529027641081856),	// CORE_MEM
    UINT64_C(7998392938210000896),	// CORE_SHIFT
    UINT64_C(3963167672086036480),	// DIV_ri
    UINT64_C(3746994889972252672),	// DIV_ri_32
    UINT64_C(4539628424389459968),	// DIV_rr
    UINT64_C(4323455642275676160),	// DIV_rr_32
    UINT64_C(1738389456165011456),	// FI_ri
    UINT64_C(9583660007044415488),	// JAL
    UINT64_C(10160120759347838976),	// JALX
    UINT64_C(1513209474796486656),	// JEQ_ri
    UINT64_C(1585267068834414592),	// JEQ_ri_32
    UINT64_C(2089670227099910144),	// JEQ_rr
    UINT64_C(2161727821137838080),	// JEQ_rr_32
    UINT64_C(360287970189639680),	// JMP
    UINT64_C(6124895493223874560),	// JNE_ri
    UINT64_C(6196953087261802496),	// JNE_ri_32
    UINT64_C(6701356245527298048),	// JNE_rr
    UINT64_C(6773413839565225984),	// JNE_rr_32
    UINT64_C(8430738502437568512),	// JSGE_ri
    UINT64_C(8502796096475496448),	// JSGE_ri_32
    UINT64_C(9007199254740992000),	// JSGE_rr
    UINT64_C(9079256848778919936),	// JSGE_rr_32
    UINT64_C(7277816997830721536),	// JSGT_ri
    UINT64_C(7349874591868649472),	// JSGT_ri_32
    UINT64_C(7854277750134145024),	// JSGT_rr
    UINT64_C(7926335344172072960),	// JSGT_rr_32
    UINT64_C(15348267530078650368),	// JSLE_ri
    UINT64_C(15420325124116578304),	// JSLE_ri_32
    UINT64_C(15924728282382073856),	// JSLE_rr
    UINT64_C(15996785876420001792),	// JSLE_rr_32
    UINT64_C(14195346025471803392),	// JSLT_ri
    UINT64_C(14267403619509731328),	// JSLT_ri_32
    UINT64_C(14771806777775226880),	// JSLT_rr
    UINT64_C(14843864371813154816),	// JSLT_rr_32
    UINT64_C(3819052484010180608),	// JUGE_ri
    UINT64_C(3891110078048108544),	// JUGE_ri_32
    UINT64_C(4395513236313604096),	// JUGE_rr
    UINT64_C(4467570830351532032),	// JUGE_rr_32
    UINT64_C(2666130979403333632),	// JUGT_ri
    UINT64_C(2738188573441261568),	// JUGT_ri_32
    UINT64_C(3242591731706757120),	// JUGT_rr
    UINT64_C(3314649325744685056),	// JUGT_rr_32
    UINT64_C(13042424520864956416),	// JULE_ri
    UINT64_C(13114482114902884352),	// JULE_ri_32
    UINT64_C(13618885273168379904),	// JULE_rr
    UINT64_C(13690942867206307840),	// JULE_rr_32
    UINT64_C(11889503016258109440),	// JULT_ri
    UINT64_C(11961560610296037376),	// JULT_ri_32
    UINT64_C(12465963768561532928),	// JULT_rr
    UINT64_C(12538021362599460864),	// JULT_rr_32
    UINT64_C(8142508126285856768),	// LDB
    UINT64_C(8142508126285856768),	// LDB32
    UINT64_C(8718968878589280256),	// LDD
    UINT64_C(7566047373982433280),	// LDH
    UINT64_C(7566047373982433280),	// LDH32
    UINT64_C(6989586621679009792),	// LDW
    UINT64_C(6989586621679009792),	// LDW32
    UINT64_C(3458764513820540928),	// LD_ABS_B
    UINT64_C(2882303761517117440),	// LD_ABS_H
    UINT64_C(2305843009213693952),	// LD_ABS_W
    UINT64_C(5764607523034234880),	// LD_IND_B
    UINT64_C(5188146770730811392),	// LD_IND_H
    UINT64_C(4611686018427387904),	// LD_IND_W
    UINT64_C(1729382256910270464),	// LD_imm64
    UINT64_C(1729382256910270464),	// LD_pseudo
    UINT64_C(15276209936040722448),	// LE16
    UINT64_C(15276209936040722464),	// LE32
    UINT64_C(15276209936040722496),	// LE64
    UINT64_C(13546827679130451968),	// MOV_32_64
    UINT64_C(13186539708940812288),	// MOV_ri
    UINT64_C(12970366926827028480),	// MOV_ri_32
    UINT64_C(13763000461244235776),	// MOV_rr
    UINT64_C(13546827679130451968),	// MOV_rr_32
    UINT64_C(2810246167479189504),	// MUL_ri
    UINT64_C(2594073385365405696),	// MUL_ri_32
    UINT64_C(3386706919782612992),	// MUL_rr
    UINT64_C(3170534137668829184),	// MUL_rr_32
    UINT64_C(9511602413006487552),	// NEG_32
    UINT64_C(9727775195120271360),	// NEG_64
    UINT64_C(13763000461244235776),	// NOP
    UINT64_C(5116089176692883456),	// OR_ri
    UINT64_C(4899916394579099648),	// OR_ri_32
    UINT64_C(5692549928996306944),	// OR_rr
    UINT64_C(5476377146882523136),	// OR_rr_32
    UINT64_C(10736581511651262464),	// RET
    UINT64_C(7421932185906577408),	// SLL_ri
    UINT64_C(7205759403792793600),	// SLL_ri_32
    UINT64_C(7998392938210000896),	// SLL_rr
    UINT64_C(7782220156096217088),	// SLL_rr_32
    UINT64_C(14339461213547659264),	// SRA_ri
    UINT64_C(14123288431433875456),	// SRA_ri_32
    UINT64_C(14915921965851082752),	// SRA_rr
    UINT64_C(14699749183737298944),	// SRA_rr_32
    UINT64_C(8574853690513424384),	// SRL_ri
    UINT64_C(8358680908399640576),	// SRL_ri_32
    UINT64_C(9151314442816847872),	// SRL_rr
    UINT64_C(8935141660703064064),	// SRL_rr_32
    UINT64_C(8286623314361712640),	// STB
    UINT64_C(8286623314361712640),	// STB32
    UINT64_C(8863084066665136128),	// STD
    UINT64_C(7710162562058289152),	// STH
    UINT64_C(7710162562058289152),	// STH32
    UINT64_C(7133701809754865664),	// STW
    UINT64_C(7133701809754865664),	// STW32
    UINT64_C(1657324662872342528),	// SUB_ri
    UINT64_C(1441151880758558720),	// SUB_ri_32
    UINT64_C(2233785415175766016),	// SUB_rr
    UINT64_C(2017612633061982208),	// SUB_rr_32
    UINT64_C(15780613094306217984),	// XADDD
    UINT64_C(14051230837395947520),	// XADDW
    UINT64_C(14051230837395947520),	// XADDW32
    UINT64_C(15780613094306218064),	// XANDD
    UINT64_C(14051230837395947600),	// XANDW32
    UINT64_C(15780613094306218209),	// XCHGD
    UINT64_C(14051230837395947745),	// XCHGW32
    UINT64_C(15780613094306217985),	// XFADDD
    UINT64_C(14051230837395947521),	// XFADDW32
    UINT64_C(15780613094306218065),	// XFANDD
    UINT64_C(14051230837395947601),	// XFANDW32
    UINT64_C(15780613094306218049),	// XFORD
    UINT64_C(14051230837395947585),	// XFORW32
    UINT64_C(15780613094306218145),	// XFXORD
    UINT64_C(14051230837395947681),	// XFXORW32
    UINT64_C(15780613094306218048),	// XORD
    UINT64_C(14051230837395947584),	// XORW32
    UINT64_C(12033618204333965312),	// XOR_ri
    UINT64_C(11817445422220181504),	// XOR_ri_32
    UINT64_C(12610078956637388800),	// XOR_rr
    UINT64_C(12393906174523604992),	// XOR_rr_32
    UINT64_C(15780613094306218144),	// XXORD
    UINT64_C(14051230837395947680),	// XXORW32
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case BPF::CORE_ALU32_MEM:
    case BPF::CORE_MEM:
    case BPF::FI_ri:
    case BPF::NOP:
    case BPF::RET: {
      break;
    }
    case BPF::JAL:
    case BPF::JALX: {
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case BPF::JMP: {
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(65535);
      op <<= 32;
      Value |= op;
      break;
    }
    case BPF::BE16:
    case BPF::BE32:
    case BPF::BE64:
    case BPF::LE16:
    case BPF::LE32:
    case BPF::LE64:
    case BPF::NEG_32:
    case BPF::NEG_64: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      break;
    }
    case BPF::JEQ_ri:
    case BPF::JEQ_ri_32:
    case BPF::JNE_ri:
    case BPF::JNE_ri_32:
    case BPF::JSGE_ri:
    case BPF::JSGE_ri_32:
    case BPF::JSGT_ri:
    case BPF::JSGT_ri_32:
    case BPF::JSLE_ri:
    case BPF::JSLE_ri_32:
    case BPF::JSLT_ri:
    case BPF::JSLT_ri_32:
    case BPF::JUGE_ri:
    case BPF::JUGE_ri_32:
    case BPF::JUGT_ri:
    case BPF::JUGT_ri_32:
    case BPF::JULE_ri:
    case BPF::JULE_ri_32:
    case BPF::JULT_ri:
    case BPF::JULT_ri_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(65535);
      op <<= 32;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case BPF::LDB:
    case BPF::LDB32:
    case BPF::LDD:
    case BPF::LDH:
    case BPF::LDH32:
    case BPF::LDW:
    case BPF::LDW32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(983040)) << 36;
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::LD_imm64:
    case BPF::MOV_ri:
    case BPF::MOV_ri_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case BPF::ADD_ri:
    case BPF::ADD_ri_32:
    case BPF::AND_ri:
    case BPF::AND_ri_32:
    case BPF::DIV_ri:
    case BPF::DIV_ri_32:
    case BPF::MUL_ri:
    case BPF::MUL_ri_32:
    case BPF::OR_ri:
    case BPF::OR_ri_32:
    case BPF::SLL_ri:
    case BPF::SLL_ri_32:
    case BPF::SRA_ri:
    case BPF::SRA_ri_32:
    case BPF::SRL_ri:
    case BPF::SRL_ri_32:
    case BPF::SUB_ri:
    case BPF::SUB_ri_32:
    case BPF::XOR_ri:
    case BPF::XOR_ri_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case BPF::LD_pseudo: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      // op: pseudo
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      break;
    }
    case BPF::MOV_32_64:
    case BPF::MOV_rr:
    case BPF::MOV_rr_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      break;
    }
    case BPF::JEQ_rr:
    case BPF::JEQ_rr_32:
    case BPF::JNE_rr:
    case BPF::JNE_rr_32:
    case BPF::JSGE_rr:
    case BPF::JSGE_rr_32:
    case BPF::JSGT_rr:
    case BPF::JSGT_rr_32:
    case BPF::JSLE_rr:
    case BPF::JSLE_rr_32:
    case BPF::JSLT_rr:
    case BPF::JSLT_rr_32:
    case BPF::JUGE_rr:
    case BPF::JUGE_rr_32:
    case BPF::JUGT_rr:
    case BPF::JUGT_rr_32:
    case BPF::JULE_rr:
    case BPF::JULE_rr_32:
    case BPF::JULT_rr:
    case BPF::JULT_rr_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(65535);
      op <<= 32;
      Value |= op;
      break;
    }
    case BPF::ADD_rr:
    case BPF::ADD_rr_32:
    case BPF::AND_rr:
    case BPF::AND_rr_32:
    case BPF::CORE_SHIFT:
    case BPF::DIV_rr:
    case BPF::DIV_rr_32:
    case BPF::MUL_rr:
    case BPF::MUL_rr_32:
    case BPF::OR_rr:
    case BPF::OR_rr_32:
    case BPF::SLL_rr:
    case BPF::SLL_rr_32:
    case BPF::SRA_rr:
    case BPF::SRA_rr_32:
    case BPF::SRL_rr:
    case BPF::SRL_rr_32:
    case BPF::SUB_rr:
    case BPF::SUB_rr_32:
    case BPF::XOR_rr:
    case BPF::XOR_rr_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      break;
    }
    case BPF::XADDD:
    case BPF::XADDW:
    case BPF::XADDW32:
    case BPF::XANDD:
    case BPF::XANDW32:
    case BPF::XCHGD:
    case BPF::XCHGW32:
    case BPF::XFADDD:
    case BPF::XFADDW32:
    case BPF::XFANDD:
    case BPF::XFANDW32:
    case BPF::XFORD:
    case BPF::XFORW32:
    case BPF::XFXORD:
    case BPF::XFXORW32:
    case BPF::XORD:
    case BPF::XORW32:
    case BPF::XXORD:
    case BPF::XXORW32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1048575);
      op <<= 32;
      Value |= op;
      break;
    }
    case BPF::LD_ABS_B:
    case BPF::LD_ABS_H:
    case BPF::LD_ABS_W: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case BPF::CMPXCHGD:
    case BPF::CMPXCHGW32: {
      // op: new
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      // op: addr
      op = getMemoryOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(1048575);
      op <<= 32;
      Value |= op;
      break;
    }
    case BPF::STB:
    case BPF::STB32:
    case BPF::STD:
    case BPF::STH:
    case BPF::STH32:
    case BPF::STW:
    case BPF::STW32: {
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1048575);
      op <<= 32;
      Value |= op;
      break;
    }
    case BPF::LD_IND_B:
    case BPF::LD_IND_H:
    case BPF::LD_IND_W: {
      // op: val
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  nullptr
};

#endif // NDEBUG
FeatureBitset BPFMCCodeEmitter::
computeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
};
#endif // NDEBUG

void BPFMCCodeEmitter::verifyInstructionPredicates(
    const MCInst &Inst, const FeatureBitset &AvailableFeatures) const {
#ifndef NDEBUG
  static uint8_t RequiredFeaturesRefs[] = {
    CEFBS_None, // PHI = 0
    CEFBS_None, // INLINEASM = 1
    CEFBS_None, // INLINEASM_BR = 2
    CEFBS_None, // CFI_INSTRUCTION = 3
    CEFBS_None, // EH_LABEL = 4
    CEFBS_None, // GC_LABEL = 5
    CEFBS_None, // ANNOTATION_LABEL = 6
    CEFBS_None, // KILL = 7
    CEFBS_None, // EXTRACT_SUBREG = 8
    CEFBS_None, // INSERT_SUBREG = 9
    CEFBS_None, // IMPLICIT_DEF = 10
    CEFBS_None, // SUBREG_TO_REG = 11
    CEFBS_None, // COPY_TO_REGCLASS = 12
    CEFBS_None, // DBG_VALUE = 13
    CEFBS_None, // DBG_INSTR_REF = 14
    CEFBS_None, // DBG_LABEL = 15
    CEFBS_None, // REG_SEQUENCE = 16
    CEFBS_None, // COPY = 17
    CEFBS_None, // BUNDLE = 18
    CEFBS_None, // LIFETIME_START = 19
    CEFBS_None, // LIFETIME_END = 20
    CEFBS_None, // PSEUDO_PROBE = 21
    CEFBS_None, // STACKMAP = 22
    CEFBS_None, // FENTRY_CALL = 23
    CEFBS_None, // PATCHPOINT = 24
    CEFBS_None, // LOAD_STACK_GUARD = 25
    CEFBS_None, // PREALLOCATED_SETUP = 26
    CEFBS_None, // PREALLOCATED_ARG = 27
    CEFBS_None, // STATEPOINT = 28
    CEFBS_None, // LOCAL_ESCAPE = 29
    CEFBS_None, // FAULTING_OP = 30
    CEFBS_None, // PATCHABLE_OP = 31
    CEFBS_None, // PATCHABLE_FUNCTION_ENTER = 32
    CEFBS_None, // PATCHABLE_RET = 33
    CEFBS_None, // PATCHABLE_FUNCTION_EXIT = 34
    CEFBS_None, // PATCHABLE_TAIL_CALL = 35
    CEFBS_None, // PATCHABLE_EVENT_CALL = 36
    CEFBS_None, // PATCHABLE_TYPED_EVENT_CALL = 37
    CEFBS_None, // ICALL_BRANCH_FUNNEL = 38
    CEFBS_None, // G_ADD = 39
    CEFBS_None, // G_SUB = 40
    CEFBS_None, // G_MUL = 41
    CEFBS_None, // G_SDIV = 42
    CEFBS_None, // G_UDIV = 43
    CEFBS_None, // G_SREM = 44
    CEFBS_None, // G_UREM = 45
    CEFBS_None, // G_AND = 46
    CEFBS_None, // G_OR = 47
    CEFBS_None, // G_XOR = 48
    CEFBS_None, // G_IMPLICIT_DEF = 49
    CEFBS_None, // G_PHI = 50
    CEFBS_None, // G_FRAME_INDEX = 51
    CEFBS_None, // G_GLOBAL_VALUE = 52
    CEFBS_None, // G_EXTRACT = 53
    CEFBS_None, // G_UNMERGE_VALUES = 54
    CEFBS_None, // G_INSERT = 55
    CEFBS_None, // G_MERGE_VALUES = 56
    CEFBS_None, // G_BUILD_VECTOR = 57
    CEFBS_None, // G_BUILD_VECTOR_TRUNC = 58
    CEFBS_None, // G_CONCAT_VECTORS = 59
    CEFBS_None, // G_PTRTOINT = 60
    CEFBS_None, // G_INTTOPTR = 61
    CEFBS_None, // G_BITCAST = 62
    CEFBS_None, // G_FREEZE = 63
    CEFBS_None, // G_INTRINSIC_TRUNC = 64
    CEFBS_None, // G_INTRINSIC_ROUND = 65
    CEFBS_None, // G_INTRINSIC_LRINT = 66
    CEFBS_None, // G_INTRINSIC_ROUNDEVEN = 67
    CEFBS_None, // G_READCYCLECOUNTER = 68
    CEFBS_None, // G_LOAD = 69
    CEFBS_None, // G_SEXTLOAD = 70
    CEFBS_None, // G_ZEXTLOAD = 71
    CEFBS_None, // G_INDEXED_LOAD = 72
    CEFBS_None, // G_INDEXED_SEXTLOAD = 73
    CEFBS_None, // G_INDEXED_ZEXTLOAD = 74
    CEFBS_None, // G_STORE = 75
    CEFBS_None, // G_INDEXED_STORE = 76
    CEFBS_None, // G_ATOMIC_CMPXCHG_WITH_SUCCESS = 77
    CEFBS_None, // G_ATOMIC_CMPXCHG = 78
    CEFBS_None, // G_ATOMICRMW_XCHG = 79
    CEFBS_None, // G_ATOMICRMW_ADD = 80
    CEFBS_None, // G_ATOMICRMW_SUB = 81
    CEFBS_None, // G_ATOMICRMW_AND = 82
    CEFBS_None, // G_ATOMICRMW_NAND = 83
    CEFBS_None, // G_ATOMICRMW_OR = 84
    CEFBS_None, // G_ATOMICRMW_XOR = 85
    CEFBS_None, // G_ATOMICRMW_MAX = 86
    CEFBS_None, // G_ATOMICRMW_MIN = 87
    CEFBS_None, // G_ATOMICRMW_UMAX = 88
    CEFBS_None, // G_ATOMICRMW_UMIN = 89
    CEFBS_None, // G_ATOMICRMW_FADD = 90
    CEFBS_None, // G_ATOMICRMW_FSUB = 91
    CEFBS_None, // G_FENCE = 92
    CEFBS_None, // G_BRCOND = 93
    CEFBS_None, // G_BRINDIRECT = 94
    CEFBS_None, // G_INTRINSIC = 95
    CEFBS_None, // G_INTRINSIC_W_SIDE_EFFECTS = 96
    CEFBS_None, // G_ANYEXT = 97
    CEFBS_None, // G_TRUNC = 98
    CEFBS_None, // G_CONSTANT = 99
    CEFBS_None, // G_FCONSTANT = 100
    CEFBS_None, // G_VASTART = 101
    CEFBS_None, // G_VAARG = 102
    CEFBS_None, // G_SEXT = 103
    CEFBS_None, // G_SEXT_INREG = 104
    CEFBS_None, // G_ZEXT = 105
    CEFBS_None, // G_SHL = 106
    CEFBS_None, // G_LSHR = 107
    CEFBS_None, // G_ASHR = 108
    CEFBS_None, // G_FSHL = 109
    CEFBS_None, // G_FSHR = 110
    CEFBS_None, // G_ICMP = 111
    CEFBS_None, // G_FCMP = 112
    CEFBS_None, // G_SELECT = 113
    CEFBS_None, // G_UADDO = 114
    CEFBS_None, // G_UADDE = 115
    CEFBS_None, // G_USUBO = 116
    CEFBS_None, // G_USUBE = 117
    CEFBS_None, // G_SADDO = 118
    CEFBS_None, // G_SADDE = 119
    CEFBS_None, // G_SSUBO = 120
    CEFBS_None, // G_SSUBE = 121
    CEFBS_None, // G_UMULO = 122
    CEFBS_None, // G_SMULO = 123
    CEFBS_None, // G_UMULH = 124
    CEFBS_None, // G_SMULH = 125
    CEFBS_None, // G_UADDSAT = 126
    CEFBS_None, // G_SADDSAT = 127
    CEFBS_None, // G_USUBSAT = 128
    CEFBS_None, // G_SSUBSAT = 129
    CEFBS_None, // G_USHLSAT = 130
    CEFBS_None, // G_SSHLSAT = 131
    CEFBS_None, // G_SMULFIX = 132
    CEFBS_None, // G_UMULFIX = 133
    CEFBS_None, // G_SMULFIXSAT = 134
    CEFBS_None, // G_UMULFIXSAT = 135
    CEFBS_None, // G_SDIVFIX = 136
    CEFBS_None, // G_UDIVFIX = 137
    CEFBS_None, // G_SDIVFIXSAT = 138
    CEFBS_None, // G_UDIVFIXSAT = 139
    CEFBS_None, // G_FADD = 140
    CEFBS_None, // G_FSUB = 141
    CEFBS_None, // G_FMUL = 142
    CEFBS_None, // G_FMA = 143
    CEFBS_None, // G_FMAD = 144
    CEFBS_None, // G_FDIV = 145
    CEFBS_None, // G_FREM = 146
    CEFBS_None, // G_FPOW = 147
    CEFBS_None, // G_FPOWI = 148
    CEFBS_None, // G_FEXP = 149
    CEFBS_None, // G_FEXP2 = 150
    CEFBS_None, // G_FLOG = 151
    CEFBS_None, // G_FLOG2 = 152
    CEFBS_None, // G_FLOG10 = 153
    CEFBS_None, // G_FNEG = 154
    CEFBS_None, // G_FPEXT = 155
    CEFBS_None, // G_FPTRUNC = 156
    CEFBS_None, // G_FPTOSI = 157
    CEFBS_None, // G_FPTOUI = 158
    CEFBS_None, // G_SITOFP = 159
    CEFBS_None, // G_UITOFP = 160
    CEFBS_None, // G_FABS = 161
    CEFBS_None, // G_FCOPYSIGN = 162
    CEFBS_None, // G_FCANONICALIZE = 163
    CEFBS_None, // G_FMINNUM = 164
    CEFBS_None, // G_FMAXNUM = 165
    CEFBS_None, // G_FMINNUM_IEEE = 166
    CEFBS_None, // G_FMAXNUM_IEEE = 167
    CEFBS_None, // G_FMINIMUM = 168
    CEFBS_None, // G_FMAXIMUM = 169
    CEFBS_None, // G_PTR_ADD = 170
    CEFBS_None, // G_PTRMASK = 171
    CEFBS_None, // G_SMIN = 172
    CEFBS_None, // G_SMAX = 173
    CEFBS_None, // G_UMIN = 174
    CEFBS_None, // G_UMAX = 175
    CEFBS_None, // G_ABS = 176
    CEFBS_None, // G_BR = 177
    CEFBS_None, // G_BRJT = 178
    CEFBS_None, // G_INSERT_VECTOR_ELT = 179
    CEFBS_None, // G_EXTRACT_VECTOR_ELT = 180
    CEFBS_None, // G_SHUFFLE_VECTOR = 181
    CEFBS_None, // G_CTTZ = 182
    CEFBS_None, // G_CTTZ_ZERO_UNDEF = 183
    CEFBS_None, // G_CTLZ = 184
    CEFBS_None, // G_CTLZ_ZERO_UNDEF = 185
    CEFBS_None, // G_CTPOP = 186
    CEFBS_None, // G_BSWAP = 187
    CEFBS_None, // G_BITREVERSE = 188
    CEFBS_None, // G_FCEIL = 189
    CEFBS_None, // G_FCOS = 190
    CEFBS_None, // G_FSIN = 191
    CEFBS_None, // G_FSQRT = 192
    CEFBS_None, // G_FFLOOR = 193
    CEFBS_None, // G_FRINT = 194
    CEFBS_None, // G_FNEARBYINT = 195
    CEFBS_None, // G_ADDRSPACE_CAST = 196
    CEFBS_None, // G_BLOCK_ADDR = 197
    CEFBS_None, // G_JUMP_TABLE = 198
    CEFBS_None, // G_DYN_STACKALLOC = 199
    CEFBS_None, // G_STRICT_FADD = 200
    CEFBS_None, // G_STRICT_FSUB = 201
    CEFBS_None, // G_STRICT_FMUL = 202
    CEFBS_None, // G_STRICT_FDIV = 203
    CEFBS_None, // G_STRICT_FREM = 204
    CEFBS_None, // G_STRICT_FMA = 205
    CEFBS_None, // G_STRICT_FSQRT = 206
    CEFBS_None, // G_READ_REGISTER = 207
    CEFBS_None, // G_WRITE_REGISTER = 208
    CEFBS_None, // G_MEMCPY = 209
    CEFBS_None, // G_MEMMOVE = 210
    CEFBS_None, // G_MEMSET = 211
    CEFBS_None, // G_VECREDUCE_SEQ_FADD = 212
    CEFBS_None, // G_VECREDUCE_SEQ_FMUL = 213
    CEFBS_None, // G_VECREDUCE_FADD = 214
    CEFBS_None, // G_VECREDUCE_FMUL = 215
    CEFBS_None, // G_VECREDUCE_FMAX = 216
    CEFBS_None, // G_VECREDUCE_FMIN = 217
    CEFBS_None, // G_VECREDUCE_ADD = 218
    CEFBS_None, // G_VECREDUCE_MUL = 219
    CEFBS_None, // G_VECREDUCE_AND = 220
    CEFBS_None, // G_VECREDUCE_OR = 221
    CEFBS_None, // G_VECREDUCE_XOR = 222
    CEFBS_None, // G_VECREDUCE_SMAX = 223
    CEFBS_None, // G_VECREDUCE_SMIN = 224
    CEFBS_None, // G_VECREDUCE_UMAX = 225
    CEFBS_None, // G_VECREDUCE_UMIN = 226
    CEFBS_None, // ADJCALLSTACKDOWN = 227
    CEFBS_None, // ADJCALLSTACKUP = 228
    CEFBS_None, // MEMCPY = 229
    CEFBS_None, // Select = 230
    CEFBS_None, // Select_32 = 231
    CEFBS_None, // Select_32_64 = 232
    CEFBS_None, // Select_64_32 = 233
    CEFBS_None, // Select_Ri = 234
    CEFBS_None, // Select_Ri_32 = 235
    CEFBS_None, // Select_Ri_32_64 = 236
    CEFBS_None, // Select_Ri_64_32 = 237
    CEFBS_None, // ADD_ri = 238
    CEFBS_None, // ADD_ri_32 = 239
    CEFBS_None, // ADD_rr = 240
    CEFBS_None, // ADD_rr_32 = 241
    CEFBS_None, // AND_ri = 242
    CEFBS_None, // AND_ri_32 = 243
    CEFBS_None, // AND_rr = 244
    CEFBS_None, // AND_rr_32 = 245
    CEFBS_None, // BE16 = 246
    CEFBS_None, // BE32 = 247
    CEFBS_None, // BE64 = 248
    CEFBS_None, // CMPXCHGD = 249
    CEFBS_None, // CMPXCHGW32 = 250
    CEFBS_None, // CORE_ALU32_MEM = 251
    CEFBS_None, // CORE_MEM = 252
    CEFBS_None, // CORE_SHIFT = 253
    CEFBS_None, // DIV_ri = 254
    CEFBS_None, // DIV_ri_32 = 255
    CEFBS_None, // DIV_rr = 256
    CEFBS_None, // DIV_rr_32 = 257
    CEFBS_None, // FI_ri = 258
    CEFBS_None, // JAL = 259
    CEFBS_None, // JALX = 260
    CEFBS_None, // JEQ_ri = 261
    CEFBS_None, // JEQ_ri_32 = 262
    CEFBS_None, // JEQ_rr = 263
    CEFBS_None, // JEQ_rr_32 = 264
    CEFBS_None, // JMP = 265
    CEFBS_None, // JNE_ri = 266
    CEFBS_None, // JNE_ri_32 = 267
    CEFBS_None, // JNE_rr = 268
    CEFBS_None, // JNE_rr_32 = 269
    CEFBS_None, // JSGE_ri = 270
    CEFBS_None, // JSGE_ri_32 = 271
    CEFBS_None, // JSGE_rr = 272
    CEFBS_None, // JSGE_rr_32 = 273
    CEFBS_None, // JSGT_ri = 274
    CEFBS_None, // JSGT_ri_32 = 275
    CEFBS_None, // JSGT_rr = 276
    CEFBS_None, // JSGT_rr_32 = 277
    CEFBS_None, // JSLE_ri = 278
    CEFBS_None, // JSLE_ri_32 = 279
    CEFBS_None, // JSLE_rr = 280
    CEFBS_None, // JSLE_rr_32 = 281
    CEFBS_None, // JSLT_ri = 282
    CEFBS_None, // JSLT_ri_32 = 283
    CEFBS_None, // JSLT_rr = 284
    CEFBS_None, // JSLT_rr_32 = 285
    CEFBS_None, // JUGE_ri = 286
    CEFBS_None, // JUGE_ri_32 = 287
    CEFBS_None, // JUGE_rr = 288
    CEFBS_None, // JUGE_rr_32 = 289
    CEFBS_None, // JUGT_ri = 290
    CEFBS_None, // JUGT_ri_32 = 291
    CEFBS_None, // JUGT_rr = 292
    CEFBS_None, // JUGT_rr_32 = 293
    CEFBS_None, // JULE_ri = 294
    CEFBS_None, // JULE_ri_32 = 295
    CEFBS_None, // JULE_rr = 296
    CEFBS_None, // JULE_rr_32 = 297
    CEFBS_None, // JULT_ri = 298
    CEFBS_None, // JULT_ri_32 = 299
    CEFBS_None, // JULT_rr = 300
    CEFBS_None, // JULT_rr_32 = 301
    CEFBS_None, // LDB = 302
    CEFBS_None, // LDB32 = 303
    CEFBS_None, // LDD = 304
    CEFBS_None, // LDH = 305
    CEFBS_None, // LDH32 = 306
    CEFBS_None, // LDW = 307
    CEFBS_None, // LDW32 = 308
    CEFBS_None, // LD_ABS_B = 309
    CEFBS_None, // LD_ABS_H = 310
    CEFBS_None, // LD_ABS_W = 311
    CEFBS_None, // LD_IND_B = 312
    CEFBS_None, // LD_IND_H = 313
    CEFBS_None, // LD_IND_W = 314
    CEFBS_None, // LD_imm64 = 315
    CEFBS_None, // LD_pseudo = 316
    CEFBS_None, // LE16 = 317
    CEFBS_None, // LE32 = 318
    CEFBS_None, // LE64 = 319
    CEFBS_None, // MOV_32_64 = 320
    CEFBS_None, // MOV_ri = 321
    CEFBS_None, // MOV_ri_32 = 322
    CEFBS_None, // MOV_rr = 323
    CEFBS_None, // MOV_rr_32 = 324
    CEFBS_None, // MUL_ri = 325
    CEFBS_None, // MUL_ri_32 = 326
    CEFBS_None, // MUL_rr = 327
    CEFBS_None, // MUL_rr_32 = 328
    CEFBS_None, // NEG_32 = 329
    CEFBS_None, // NEG_64 = 330
    CEFBS_None, // NOP = 331
    CEFBS_None, // OR_ri = 332
    CEFBS_None, // OR_ri_32 = 333
    CEFBS_None, // OR_rr = 334
    CEFBS_None, // OR_rr_32 = 335
    CEFBS_None, // RET = 336
    CEFBS_None, // SLL_ri = 337
    CEFBS_None, // SLL_ri_32 = 338
    CEFBS_None, // SLL_rr = 339
    CEFBS_None, // SLL_rr_32 = 340
    CEFBS_None, // SRA_ri = 341
    CEFBS_None, // SRA_ri_32 = 342
    CEFBS_None, // SRA_rr = 343
    CEFBS_None, // SRA_rr_32 = 344
    CEFBS_None, // SRL_ri = 345
    CEFBS_None, // SRL_ri_32 = 346
    CEFBS_None, // SRL_rr = 347
    CEFBS_None, // SRL_rr_32 = 348
    CEFBS_None, // STB = 349
    CEFBS_None, // STB32 = 350
    CEFBS_None, // STD = 351
    CEFBS_None, // STH = 352
    CEFBS_None, // STH32 = 353
    CEFBS_None, // STW = 354
    CEFBS_None, // STW32 = 355
    CEFBS_None, // SUB_ri = 356
    CEFBS_None, // SUB_ri_32 = 357
    CEFBS_None, // SUB_rr = 358
    CEFBS_None, // SUB_rr_32 = 359
    CEFBS_None, // XADDD = 360
    CEFBS_None, // XADDW = 361
    CEFBS_None, // XADDW32 = 362
    CEFBS_None, // XANDD = 363
    CEFBS_None, // XANDW32 = 364
    CEFBS_None, // XCHGD = 365
    CEFBS_None, // XCHGW32 = 366
    CEFBS_None, // XFADDD = 367
    CEFBS_None, // XFADDW32 = 368
    CEFBS_None, // XFANDD = 369
    CEFBS_None, // XFANDW32 = 370
    CEFBS_None, // XFORD = 371
    CEFBS_None, // XFORW32 = 372
    CEFBS_None, // XFXORD = 373
    CEFBS_None, // XFXORW32 = 374
    CEFBS_None, // XORD = 375
    CEFBS_None, // XORW32 = 376
    CEFBS_None, // XOR_ri = 377
    CEFBS_None, // XOR_ri_32 = 378
    CEFBS_None, // XOR_rr = 379
    CEFBS_None, // XOR_rr_32 = 380
    CEFBS_None, // XXORD = 381
    CEFBS_None, // XXORW32 = 382
  };

  assert(Inst.getOpcode() < 383);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Inst.getOpcode()]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << MCII.getName(Inst.getOpcode()).str()
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str());
  }
#else
  // Silence unused variable warning on targets that don't use MCII for other purposes (e.g. BPF).
  (void)MCII;
#endif // NDEBUG
}
#endif
