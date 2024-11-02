/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * WebAssembly Disassembler                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "MCTargetDesc/WebAssemblyMCTargetDesc.h"

namespace llvm {

static constexpr int WebAssemblyInstructionTableSize = 256;

enum EntryType : uint8_t { ET_Unused, ET_Prefix, ET_Instruction };

struct WebAssemblyInstruction {
  uint16_t Opcode;
  EntryType ET;
  uint8_t NumOperands;
  uint16_t OperandStart;
};

WebAssemblyInstruction InstructionTable0[] = {
  // 0x0: unreachable
  { 1608, ET_Instruction, 0, 0  },
  // 0x1: nop
  { 1322, ET_Instruction, 0, 0  },
  // 0x2: block   	$sig
  { 604, ET_Instruction, 1, 0  },
  // 0x3: loop    	$sig
  { 1172, ET_Instruction, 1, 0  },
  // 0x4: if    	$sig
  { 976, ET_Instruction, 1, 0  },
  // 0x5: else
  { 712, ET_Instruction, 0, 0  },
  // 0x6: try     	$sig
  { 1606, ET_Instruction, 1, 0  },
  // 0x7: catch   	$tag
  { 622, ET_Instruction, 1, 1  },
  // 0x8: throw   	$tag
  { 1596, ET_Instruction, 1, 1  },
  // 0x9: rethrow 	$depth
  { 1388, ET_Instruction, 1, 2  },
  { 0, ET_Unused, 0, 0  },
  // 0xb: end
  { 722, ET_Instruction, 0, 0  },
  // 0xc: br      	$dst
  { 608, ET_Instruction, 1, 3  },
  // 0xd: br_if   	$dst
  { 607, ET_Instruction, 1, 3  },
  // 0xe: br_table 	$brl
  { 610, ET_Instruction, 1, 4  },
  // 0xf: return
  { 1390, ET_Instruction, 0, 0  },
  // 0x10: call	$callee
  { 618, ET_Instruction, 1, 5  },
  // 0x11: call_indirect	$type
  { 617, ET_Instruction, 2, 6  },
  // 0x12: return_call	$callee
  { 1394, ET_Instruction, 1, 5  },
  // 0x13: return_call_indirect	$type
  { 1393, ET_Instruction, 2, 6  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x1a: drop
  { 698, ET_Instruction, 0, 0  },
  // 0x1b: f32.select
  { 1406, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x20: local.get	$local
  { 1130, ET_Instruction, 1, 8  },
  // 0x21: local.set	$local
  { 1144, ET_Instruction, 1, 8  },
  // 0x22: local.tee	$local
  { 1158, ET_Instruction, 1, 8  },
  // 0x23: global.get	$local
  { 868, ET_Instruction, 1, 9  },
  // 0x24: global.set	$local
  { 882, ET_Instruction, 1, 9  },
  // 0x25: table.get	$table
  { 1568, ET_Instruction, 1, 10  },
  // 0x26: table.set	$table
  { 1576, ET_Instruction, 1, 10  },
  { 0, ET_Unused, 0, 0  },
  // 0x28: i32.load	${off}${p2align}
  { 1094, ET_Instruction, 2, 11  },
  // 0x29: i64.load	${off}${p2align}
  { 1098, ET_Instruction, 2, 11  },
  // 0x2a: f32.load	${off}${p2align}
  { 1086, ET_Instruction, 2, 11  },
  // 0x2b: f64.load	${off}${p2align}
  { 1090, ET_Instruction, 2, 11  },
  // 0x2c: i32.load8_s	${off}${p2align}
  { 1046, ET_Instruction, 2, 11  },
  // 0x2d: i32.load8_u	${off}${p2align}
  { 1054, ET_Instruction, 2, 11  },
  // 0x2e: i32.load16_s	${off}${p2align}
  { 1010, ET_Instruction, 2, 11  },
  // 0x2f: i32.load16_u	${off}${p2align}
  { 1018, ET_Instruction, 2, 11  },
  // 0x30: i64.load8_s	${off}${p2align}
  { 1050, ET_Instruction, 2, 11  },
  // 0x31: i64.load8_u	${off}${p2align}
  { 1058, ET_Instruction, 2, 11  },
  // 0x32: i64.load16_s	${off}${p2align}
  { 1014, ET_Instruction, 2, 11  },
  // 0x33: i64.load16_u	${off}${p2align}
  { 1022, ET_Instruction, 2, 11  },
  // 0x34: i64.load32_s	${off}${p2align}
  { 1030, ET_Instruction, 2, 11  },
  // 0x35: i64.load32_u	${off}${p2align}
  { 1034, ET_Instruction, 2, 11  },
  // 0x36: i32.store	${off}${p2align}
  { 1504, ET_Instruction, 2, 11  },
  // 0x37: i64.store	${off}${p2align}
  { 1508, ET_Instruction, 2, 11  },
  // 0x38: f32.store	${off}${p2align}
  { 1496, ET_Instruction, 2, 11  },
  // 0x39: f64.store	${off}${p2align}
  { 1500, ET_Instruction, 2, 11  },
  // 0x3a: i32.store8	${off}${p2align}
  { 1488, ET_Instruction, 2, 11  },
  // 0x3b: i32.store16	${off}${p2align}
  { 1476, ET_Instruction, 2, 11  },
  // 0x3c: i64.store8	${off}${p2align}
  { 1492, ET_Instruction, 2, 11  },
  // 0x3d: i64.store16	${off}${p2align}
  { 1480, ET_Instruction, 2, 11  },
  // 0x3e: i64.store32	${off}${p2align}
  { 1484, ET_Instruction, 2, 11  },
  // 0x3f: memory.size	$flags
  { 1618, ET_Instruction, 1, 2  },
  // 0x40: memory.grow	$flags
  { 1616, ET_Instruction, 1, 2  },
  // 0x41: i32.const	$imm
  { 640, ET_Instruction, 1, 13  },
  // 0x42: i64.const	$imm
  { 642, ET_Instruction, 1, 14  },
  // 0x43: f32.const	$imm
  { 636, ET_Instruction, 1, 15  },
  // 0x44: f64.const	$imm
  { 638, ET_Instruction, 1, 16  },
  // 0x45: i32.eqz
  { 726, ET_Instruction, 0, 0  },
  // 0x46: i32.eq  
  { 740, ET_Instruction, 0, 0  },
  // 0x47: i32.ne  
  { 1314, ET_Instruction, 0, 0  },
  // 0x48: i32.lt_s
  { 1184, ET_Instruction, 0, 0  },
  // 0x49: i32.lt_u
  { 1194, ET_Instruction, 0, 0  },
  // 0x4a: i32.gt_s
  { 906, ET_Instruction, 0, 0  },
  // 0x4b: i32.gt_u
  { 916, ET_Instruction, 0, 0  },
  // 0x4c: i32.le_s
  { 988, ET_Instruction, 0, 0  },
  // 0x4d: i32.le_u
  { 998, ET_Instruction, 0, 0  },
  // 0x4e: i32.ge_s
  { 850, ET_Instruction, 0, 0  },
  // 0x4f: i32.ge_u
  { 860, ET_Instruction, 0, 0  },
  // 0x50: i64.eqz
  { 728, ET_Instruction, 0, 0  },
  // 0x51: i64.eq  
  { 744, ET_Instruction, 0, 0  },
  // 0x52: i64.ne  
  { 1318, ET_Instruction, 0, 0  },
  // 0x53: i64.lt_s
  { 1188, ET_Instruction, 0, 0  },
  // 0x54: i64.lt_u
  { 1198, ET_Instruction, 0, 0  },
  // 0x55: i64.gt_s
  { 910, ET_Instruction, 0, 0  },
  // 0x56: i64.gt_u
  { 920, ET_Instruction, 0, 0  },
  // 0x57: i64.le_s
  { 992, ET_Instruction, 0, 0  },
  // 0x58: i64.le_u
  { 1002, ET_Instruction, 0, 0  },
  // 0x59: i64.ge_s
  { 854, ET_Instruction, 0, 0  },
  // 0x5a: i64.ge_u
  { 864, ET_Instruction, 0, 0  },
  // 0x5b: f32.eq  
  { 730, ET_Instruction, 0, 0  },
  // 0x5c: f32.ne  
  { 1304, ET_Instruction, 0, 0  },
  // 0x5d: f32.lt  
  { 1174, ET_Instruction, 0, 0  },
  // 0x5e: f32.gt  
  { 896, ET_Instruction, 0, 0  },
  // 0x5f: f32.le  
  { 978, ET_Instruction, 0, 0  },
  // 0x60: f32.ge  
  { 840, ET_Instruction, 0, 0  },
  // 0x61: f64.eq  
  { 734, ET_Instruction, 0, 0  },
  // 0x62: f64.ne  
  { 1308, ET_Instruction, 0, 0  },
  // 0x63: f64.lt  
  { 1178, ET_Instruction, 0, 0  },
  // 0x64: f64.gt  
  { 900, ET_Instruction, 0, 0  },
  // 0x65: f64.le  
  { 982, ET_Instruction, 0, 0  },
  // 0x66: f64.ge  
  { 844, ET_Instruction, 0, 0  },
  // 0x67: i32.clz 
  { 632, ET_Instruction, 0, 0  },
  // 0x68: i32.ctz 
  { 674, ET_Instruction, 0, 0  },
  // 0x69: i32.popcnt
  { 1340, ET_Instruction, 0, 0  },
  // 0x6a: i32.add 
  { 266, ET_Instruction, 0, 0  },
  // 0x6b: i32.sub 
  { 1542, ET_Instruction, 0, 0  },
  // 0x6c: i32.mul 
  { 1264, ET_Instruction, 0, 0  },
  // 0x6d: i32.div_s
  { 688, ET_Instruction, 0, 0  },
  // 0x6e: i32.div_u
  { 692, ET_Instruction, 0, 0  },
  // 0x6f: i32.rem_s
  { 1368, ET_Instruction, 0, 0  },
  // 0x70: i32.rem_u
  { 1372, ET_Instruction, 0, 0  },
  // 0x71: i32.and 
  { 299, ET_Instruction, 0, 0  },
  // 0x72: i32.or  
  { 1327, ET_Instruction, 0, 0  },
  // 0x73: i32.xor 
  { 1611, ET_Instruction, 0, 0  },
  // 0x74: i32.shl 
  { 1420, ET_Instruction, 0, 0  },
  // 0x75: i32.shr_s
  { 1432, ET_Instruction, 0, 0  },
  // 0x76: i32.shr_u
  { 1444, ET_Instruction, 0, 0  },
  // 0x77: i32.rotl
  { 1396, ET_Instruction, 0, 0  },
  // 0x78: i32.rotr
  { 1400, ET_Instruction, 0, 0  },
  // 0x79: i64.clz 
  { 634, ET_Instruction, 0, 0  },
  // 0x7a: i64.ctz 
  { 676, ET_Instruction, 0, 0  },
  // 0x7b: i64.popcnt
  { 1342, ET_Instruction, 0, 0  },
  // 0x7c: i64.add 
  { 270, ET_Instruction, 0, 0  },
  // 0x7d: i64.sub 
  { 1546, ET_Instruction, 0, 0  },
  // 0x7e: i64.mul 
  { 1268, ET_Instruction, 0, 0  },
  // 0x7f: i64.div_s
  { 690, ET_Instruction, 0, 0  },
  // 0x80: i64.div_u
  { 694, ET_Instruction, 0, 0  },
  // 0x81: i64.rem_s
  { 1370, ET_Instruction, 0, 0  },
  // 0x82: i64.rem_u
  { 1374, ET_Instruction, 0, 0  },
  // 0x83: i64.and 
  { 301, ET_Instruction, 0, 0  },
  // 0x84: i64.or  
  { 1329, ET_Instruction, 0, 0  },
  // 0x85: i64.xor 
  { 1613, ET_Instruction, 0, 0  },
  // 0x86: i64.shl 
  { 1424, ET_Instruction, 0, 0  },
  // 0x87: i64.shr_s
  { 1436, ET_Instruction, 0, 0  },
  // 0x88: i64.shr_u
  { 1448, ET_Instruction, 0, 0  },
  // 0x89: i64.rotl
  { 1398, ET_Instruction, 0, 0  },
  // 0x8a: i64.rotr
  { 1402, ET_Instruction, 0, 0  },
  // 0x8b: f32.abs 
  { 240, ET_Instruction, 0, 0  },
  // 0x8c: f32.neg 
  { 1288, ET_Instruction, 0, 0  },
  // 0x8d: f32.ceil
  { 624, ET_Instruction, 0, 0  },
  // 0x8e: f32.floor
  { 816, ET_Instruction, 0, 0  },
  // 0x8f: f32.trunc
  { 1598, ET_Instruction, 0, 0  },
  // 0x90: f32.nearest
  { 1280, ET_Instruction, 0, 0  },
  // 0x91: f32.sqrt
  { 1468, ET_Instruction, 0, 0  },
  // 0x92: f32.add 
  { 256, ET_Instruction, 0, 0  },
  // 0x93: f32.sub 
  { 1532, ET_Instruction, 0, 0  },
  // 0x94: f32.mul 
  { 1254, ET_Instruction, 0, 0  },
  // 0x95: f32.div 
  { 680, ET_Instruction, 0, 0  },
  // 0x96: f32.min 
  { 1234, ET_Instruction, 0, 0  },
  // 0x97: f32.max 
  { 1202, ET_Instruction, 0, 0  },
  // 0x98: f32.copysign
  { 656, ET_Instruction, 0, 0  },
  // 0x99: f64.abs 
  { 244, ET_Instruction, 0, 0  },
  // 0x9a: f64.neg 
  { 1292, ET_Instruction, 0, 0  },
  // 0x9b: f64.ceil
  { 628, ET_Instruction, 0, 0  },
  // 0x9c: f64.floor
  { 820, ET_Instruction, 0, 0  },
  // 0x9d: f64.trunc
  { 1602, ET_Instruction, 0, 0  },
  // 0x9e: f64.nearest
  { 1284, ET_Instruction, 0, 0  },
  // 0x9f: f64.sqrt
  { 1472, ET_Instruction, 0, 0  },
  // 0xa0: f64.add 
  { 260, ET_Instruction, 0, 0  },
  // 0xa1: f64.sub 
  { 1536, ET_Instruction, 0, 0  },
  // 0xa2: f64.mul 
  { 1258, ET_Instruction, 0, 0  },
  // 0xa3: f64.div 
  { 684, ET_Instruction, 0, 0  },
  // 0xa4: f64.min 
  { 1238, ET_Instruction, 0, 0  },
  // 0xa5: f64.max 
  { 1206, ET_Instruction, 0, 0  },
  // 0xa6: f64.copysign
  { 658, ET_Instruction, 0, 0  },
  // 0xa7: i32.wrap_i64
  { 946, ET_Instruction, 0, 0  },
  // 0xa8: i32.trunc_f32_s
  { 930, ET_Instruction, 0, 0  },
  // 0xa9: i32.trunc_f32_u
  { 938, ET_Instruction, 0, 0  },
  // 0xaa: i32.trunc_f64_s
  { 932, ET_Instruction, 0, 0  },
  // 0xab: i32.trunc_f64_u
  { 940, ET_Instruction, 0, 0  },
  // 0xac: i64.extend_i32_s
  { 954, ET_Instruction, 0, 0  },
  // 0xad: i64.extend_i32_u
  { 956, ET_Instruction, 0, 0  },
  // 0xae: i64.trunc_f32_s
  { 960, ET_Instruction, 0, 0  },
  // 0xaf: i64.trunc_f32_u
  { 968, ET_Instruction, 0, 0  },
  // 0xb0: i64.trunc_f64_s
  { 962, ET_Instruction, 0, 0  },
  // 0xb1: i64.trunc_f64_u
  { 970, ET_Instruction, 0, 0  },
  // 0xb2: f32.convert_i32_s
  { 790, ET_Instruction, 0, 0  },
  // 0xb3: f32.convert_i32_u
  { 794, ET_Instruction, 0, 0  },
  // 0xb4: f32.convert_i64_s
  { 792, ET_Instruction, 0, 0  },
  // 0xb5: f32.convert_i64_u
  { 796, ET_Instruction, 0, 0  },
  // 0xb6: f32.demote_f64
  { 798, ET_Instruction, 0, 0  },
  // 0xb7: f64.convert_i32_s
  { 802, ET_Instruction, 0, 0  },
  // 0xb8: f64.convert_i32_u
  { 806, ET_Instruction, 0, 0  },
  // 0xb9: f64.convert_i64_s
  { 804, ET_Instruction, 0, 0  },
  // 0xba: f64.convert_i64_u
  { 808, ET_Instruction, 0, 0  },
  // 0xbb: f64.promote_f32
  { 810, ET_Instruction, 0, 0  },
  // 0xbc: i32.reinterpret_f32
  { 928, ET_Instruction, 0, 0  },
  // 0xbd: i64.reinterpret_f64
  { 958, ET_Instruction, 0, 0  },
  // 0xbe: f32.reinterpret_i32
  { 800, ET_Instruction, 0, 0  },
  // 0xbf: f64.reinterpret_i64
  { 812, ET_Instruction, 0, 0  },
  // 0xc0: i32.extend8_s
  { 926, ET_Instruction, 0, 0  },
  // 0xc1: i32.extend16_s
  { 924, ET_Instruction, 0, 0  },
  // 0xc2: i64.extend8_s
  { 952, ET_Instruction, 0, 0  },
  // 0xc3: i64.extend16_s
  { 948, ET_Instruction, 0, 0  },
  // 0xc4: i64.extend32_s
  { 950, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xd0: ref.null	$heaptype
  { 1364, ET_Instruction, 1, 17  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

WebAssemblyInstruction InstructionTable252[] = {
  // 0x0: i32.trunc_sat_f32_s
  { 934, ET_Instruction, 0, 0  },
  // 0x1: i32.trunc_sat_f32_u
  { 942, ET_Instruction, 0, 0  },
  // 0x2: i32.trunc_sat_f64_s
  { 936, ET_Instruction, 0, 0  },
  // 0x3: i32.trunc_sat_f64_u
  { 944, ET_Instruction, 0, 0  },
  // 0x4: i64.trunc_sat_f32_s
  { 964, ET_Instruction, 0, 0  },
  // 0x5: i64.trunc_sat_f32_u
  { 972, ET_Instruction, 0, 0  },
  // 0x6: i64.trunc_sat_f64_s
  { 966, ET_Instruction, 0, 0  },
  // 0x7: i64.trunc_sat_f64_u
  { 974, ET_Instruction, 0, 0  },
  // 0x8: memory.init	$seg, $idx
  { 1638, ET_Instruction, 2, 18  },
  // 0x9: data.drop	$seg
  { 1632, ET_Instruction, 1, 13  },
  // 0xa: memory.copy	$src_idx, $dst_idx
  { 1634, ET_Instruction, 2, 18  },
  // 0xb: memory.fill	$idx
  { 1636, ET_Instruction, 1, 13  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xe: table.copy	$table1, $table2
  { 1562, ET_Instruction, 2, 20  },
  // 0xf: table.grow	$table
  { 1572, ET_Instruction, 1, 10  },
  // 0x10: table.size	$table
  { 1580, ET_Instruction, 1, 10  },
  // 0x11: table.fill	$table
  { 1564, ET_Instruction, 1, 10  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

WebAssemblyInstruction InstructionTable253[] = {
  // 0x0: v128.load	$off$p2align
  { 1118, ET_Instruction, 2, 11  },
  // 0x1: i16x8.load8x8_s	$off$p2align
  { 1062, ET_Instruction, 2, 11  },
  // 0x2: i16x8.load8x8_u	$off$p2align
  { 1074, ET_Instruction, 2, 11  },
  // 0x3: i32x4.load16x4_s	$off$p2align
  { 1066, ET_Instruction, 2, 11  },
  // 0x4: i32x4.load16x4_u	$off$p2align
  { 1078, ET_Instruction, 2, 11  },
  // 0x5: i64x2.load32x2_s	$off$p2align
  { 1070, ET_Instruction, 2, 11  },
  // 0x6: i64x2.load32x2_u	$off$p2align
  { 1082, ET_Instruction, 2, 11  },
  // 0x7: v128.load8_splat	$off$p2align
  { 1042, ET_Instruction, 2, 11  },
  // 0x8: v128.load16_splat	$off$p2align
  { 1006, ET_Instruction, 2, 11  },
  // 0x9: v128.load32_splat	$off$p2align
  { 1026, ET_Instruction, 2, 11  },
  // 0xa: v128.load64_splat	$off$p2align
  { 1038, ET_Instruction, 2, 11  },
  // 0xb: v128.store	$off$p2align
  { 1528, ET_Instruction, 2, 11  },
  // 0xc: v128.const	$i0, $i1, $i2, $i3
  { 650, ET_Instruction, 4, 22  },
  // 0xd: i8x16.shuffle	$m0, $m1, $m2, $m3, $m4, $m5, $m6, $m7, $m8, $m9, $mA, $mB, $mC, $mD, $mE, $mF
  { 1454, ET_Instruction, 16, 26  },
  // 0xe: i8x16.swizzle
  { 1560, ET_Instruction, 0, 0  },
  // 0xf: i8x16.splat
  { 1466, ET_Instruction, 0, 0  },
  // 0x10: i16x8.splat
  { 1460, ET_Instruction, 0, 0  },
  // 0x11: i32x4.splat
  { 1462, ET_Instruction, 0, 0  },
  // 0x12: i64x2.splat
  { 1464, ET_Instruction, 0, 0  },
  // 0x13: f32x4.splat
  { 1456, ET_Instruction, 0, 0  },
  // 0x14: f64x2.splat
  { 1458, ET_Instruction, 0, 0  },
  // 0x15: i8x16.extract_lane_s	$idx
  { 786, ET_Instruction, 1, 26  },
  // 0x16: i8x16.extract_lane_u	$idx
  { 788, ET_Instruction, 1, 26  },
  // 0x17: i8x16.replace_lane	$idx
  { 1386, ET_Instruction, 1, 26  },
  // 0x18: i16x8.extract_lane_s	$idx
  { 778, ET_Instruction, 1, 26  },
  // 0x19: i16x8.extract_lane_u	$idx
  { 780, ET_Instruction, 1, 26  },
  // 0x1a: i16x8.replace_lane	$idx
  { 1380, ET_Instruction, 1, 26  },
  // 0x1b: i32x4.extract_lane	$idx
  { 782, ET_Instruction, 1, 26  },
  // 0x1c: i32x4.replace_lane	$idx
  { 1382, ET_Instruction, 1, 26  },
  // 0x1d: i64x2.extract_lane	$idx
  { 784, ET_Instruction, 1, 26  },
  // 0x1e: i64x2.replace_lane	$idx
  { 1384, ET_Instruction, 1, 26  },
  // 0x1f: f32x4.extract_lane	$idx
  { 774, ET_Instruction, 1, 26  },
  // 0x20: f32x4.replace_lane	$idx
  { 1376, ET_Instruction, 1, 26  },
  // 0x21: f64x2.extract_lane	$idx
  { 776, ET_Instruction, 1, 26  },
  // 0x22: f64x2.replace_lane	$idx
  { 1378, ET_Instruction, 1, 26  },
  // 0x23: i8x16.eq
  { 746, ET_Instruction, 0, 0  },
  // 0x24: i8x16.ne
  { 1320, ET_Instruction, 0, 0  },
  // 0x25: i8x16.lt_s
  { 1190, ET_Instruction, 0, 0  },
  // 0x26: i8x16.lt_u
  { 1200, ET_Instruction, 0, 0  },
  // 0x27: i8x16.gt_s
  { 912, ET_Instruction, 0, 0  },
  // 0x28: i8x16.gt_u
  { 922, ET_Instruction, 0, 0  },
  // 0x29: i8x16.le_s
  { 994, ET_Instruction, 0, 0  },
  // 0x2a: i8x16.le_u
  { 1004, ET_Instruction, 0, 0  },
  // 0x2b: i8x16.ge_s
  { 856, ET_Instruction, 0, 0  },
  // 0x2c: i8x16.ge_u
  { 866, ET_Instruction, 0, 0  },
  // 0x2d: i16x8.eq
  { 738, ET_Instruction, 0, 0  },
  // 0x2e: i16x8.ne
  { 1312, ET_Instruction, 0, 0  },
  // 0x2f: i16x8.lt_s
  { 1182, ET_Instruction, 0, 0  },
  // 0x30: i16x8.lt_u
  { 1192, ET_Instruction, 0, 0  },
  // 0x31: i16x8.gt_s
  { 904, ET_Instruction, 0, 0  },
  // 0x32: i16x8.gt_u
  { 914, ET_Instruction, 0, 0  },
  // 0x33: i16x8.le_s
  { 986, ET_Instruction, 0, 0  },
  // 0x34: i16x8.le_u
  { 996, ET_Instruction, 0, 0  },
  // 0x35: i16x8.ge_s
  { 848, ET_Instruction, 0, 0  },
  // 0x36: i16x8.ge_u
  { 858, ET_Instruction, 0, 0  },
  // 0x37: i32x4.eq
  { 742, ET_Instruction, 0, 0  },
  // 0x38: i32x4.ne
  { 1316, ET_Instruction, 0, 0  },
  // 0x39: i32x4.lt_s
  { 1186, ET_Instruction, 0, 0  },
  // 0x3a: i32x4.lt_u
  { 1196, ET_Instruction, 0, 0  },
  // 0x3b: i32x4.gt_s
  { 908, ET_Instruction, 0, 0  },
  // 0x3c: i32x4.gt_u
  { 918, ET_Instruction, 0, 0  },
  // 0x3d: i32x4.le_s
  { 990, ET_Instruction, 0, 0  },
  // 0x3e: i32x4.le_u
  { 1000, ET_Instruction, 0, 0  },
  // 0x3f: i32x4.ge_s
  { 852, ET_Instruction, 0, 0  },
  // 0x40: i32x4.ge_u
  { 862, ET_Instruction, 0, 0  },
  // 0x41: f32x4.eq
  { 732, ET_Instruction, 0, 0  },
  // 0x42: f32x4.ne
  { 1306, ET_Instruction, 0, 0  },
  // 0x43: f32x4.lt
  { 1176, ET_Instruction, 0, 0  },
  // 0x44: f32x4.gt
  { 898, ET_Instruction, 0, 0  },
  // 0x45: f32x4.le
  { 980, ET_Instruction, 0, 0  },
  // 0x46: f32x4.ge
  { 842, ET_Instruction, 0, 0  },
  // 0x47: f64x2.eq
  { 736, ET_Instruction, 0, 0  },
  // 0x48: f64x2.ne
  { 1310, ET_Instruction, 0, 0  },
  // 0x49: f64x2.lt
  { 1180, ET_Instruction, 0, 0  },
  // 0x4a: f64x2.gt
  { 902, ET_Instruction, 0, 0  },
  // 0x4b: f64x2.le
  { 984, ET_Instruction, 0, 0  },
  // 0x4c: f64x2.ge
  { 846, ET_Instruction, 0, 0  },
  // 0x4d: v128.not
  { 1324, ET_Instruction, 0, 0  },
  // 0x4e: v128.and
  { 302, ET_Instruction, 0, 0  },
  // 0x4f: v128.andnot
  { 297, ET_Instruction, 0, 0  },
  // 0x50: v128.or
  { 1330, ET_Instruction, 0, 0  },
  // 0x51: v128.xor
  { 1614, ET_Instruction, 0, 0  },
  // 0x52: v128.bitselect
  { 602, ET_Instruction, 0, 0  },
  // 0x53: f64x2.convert_low_i32x4_s
  { 1652, ET_Instruction, 0, 0  },
  // 0x54: f64x2.convert_low_i32x4_u
  { 1654, ET_Instruction, 0, 0  },
  // 0x55: i32x4.trunc_sat_zero_f64x2_s
  { 1668, ET_Instruction, 0, 0  },
  // 0x56: i32x4.trunc_sat_zero_f64x2_u
  { 1670, ET_Instruction, 0, 0  },
  // 0x57: f32x4.demote_zero_f64x2
  { 1656, ET_Instruction, 0, 0  },
  // 0x58: v128.load8_lane	$off$p2align, $idx
  { 1114, ET_Instruction, 3, 42  },
  // 0x59: v128.load16_lane	$off$p2align, $idx
  { 1102, ET_Instruction, 3, 42  },
  // 0x5a: v128.load32_lane	$off$p2align, $idx
  { 1106, ET_Instruction, 3, 42  },
  // 0x5b: v128.load64_lane	$off$p2align, $idx
  { 1110, ET_Instruction, 3, 42  },
  // 0x5c: v128.store8_lane	$off$p2align, $idx
  { 1524, ET_Instruction, 3, 42  },
  // 0x5d: v128.store16_lane	$off$p2align, $idx
  { 1512, ET_Instruction, 3, 42  },
  // 0x5e: v128.store32_lane	$off$p2align, $idx
  { 1516, ET_Instruction, 3, 42  },
  // 0x5f: v128.store64_lane	$off$p2align, $idx
  { 1520, ET_Instruction, 3, 42  },
  // 0x60: i8x16.abs
  { 254, ET_Instruction, 0, 0  },
  // 0x61: i8x16.neg
  { 1302, ET_Instruction, 0, 0  },
  // 0x62: i8x16.any_true
  { 310, ET_Instruction, 0, 0  },
  // 0x63: i8x16.all_true
  { 294, ET_Instruction, 0, 0  },
  // 0x64: i8x16.bitmask
  { 600, ET_Instruction, 0, 0  },
  // 0x65: i8x16.narrow_i16x8_s
  { 1274, ET_Instruction, 0, 0  },
  // 0x66: i8x16.narrow_i16x8_u
  { 1278, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x69: f64x2.promote_low_f32x4
  { 1666, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x6b: i8x16.shl
  { 1428, ET_Instruction, 0, 0  },
  // 0x6c: i8x16.shr_s
  { 1440, ET_Instruction, 0, 0  },
  // 0x6d: i8x16.shr_u
  { 1452, ET_Instruction, 0, 0  },
  // 0x6e: i8x16.add
  { 274, ET_Instruction, 0, 0  },
  // 0x6f: i8x16.add_saturate_s
  { 278, ET_Instruction, 0, 0  },
  // 0x70: i8x16.add_saturate_u
  { 282, ET_Instruction, 0, 0  },
  // 0x71: i8x16.sub
  { 1550, ET_Instruction, 0, 0  },
  // 0x72: i8x16.sub_saturate_s
  { 1554, ET_Instruction, 0, 0  },
  // 0x73: i8x16.sub_saturate_u
  { 1558, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x76: i8x16.min_s
  { 1246, ET_Instruction, 0, 0  },
  // 0x77: i8x16.min_u
  { 1252, ET_Instruction, 0, 0  },
  // 0x78: i8x16.max_s
  { 1214, ET_Instruction, 0, 0  },
  // 0x79: i8x16.max_u
  { 1220, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x7b: i8x16.avgr_u
  { 592, ET_Instruction, 0, 0  },
  // 0x7c: i8x16.popcnt
  { 1344, ET_Instruction, 0, 0  },
  // 0x7d: i8x16.signselect
  { 1624, ET_Instruction, 0, 0  },
  // 0x7e: i16x8.signselect
  { 1626, ET_Instruction, 0, 0  },
  // 0x7f: i32x4.signselect
  { 1628, ET_Instruction, 0, 0  },
  // 0x80: i16x8.abs
  { 248, ET_Instruction, 0, 0  },
  // 0x81: i16x8.neg
  { 1296, ET_Instruction, 0, 0  },
  // 0x82: i16x8.any_true
  { 304, ET_Instruction, 0, 0  },
  // 0x83: i16x8.all_true
  { 288, ET_Instruction, 0, 0  },
  // 0x84: i16x8.bitmask
  { 594, ET_Instruction, 0, 0  },
  // 0x85: i16x8.narrow_i32x4_s
  { 1272, ET_Instruction, 0, 0  },
  // 0x86: i16x8.narrow_i32x4_u
  { 1276, ET_Instruction, 0, 0  },
  // 0x87: i16x8.widen_low_i8x16_s
  { 1692, ET_Instruction, 0, 0  },
  // 0x88: i16x8.widen_high_i8x16_s
  { 1684, ET_Instruction, 0, 0  },
  // 0x89: i16x8.widen_low_i8x16_u
  { 1696, ET_Instruction, 0, 0  },
  // 0x8a: i16x8.widen_high_i8x16_u
  { 1688, ET_Instruction, 0, 0  },
  // 0x8b: i16x8.shl
  { 1418, ET_Instruction, 0, 0  },
  // 0x8c: i16x8.shr_s
  { 1430, ET_Instruction, 0, 0  },
  // 0x8d: i16x8.shr_u
  { 1442, ET_Instruction, 0, 0  },
  // 0x8e: i16x8.add
  { 264, ET_Instruction, 0, 0  },
  // 0x8f: i16x8.add_saturate_s
  { 276, ET_Instruction, 0, 0  },
  // 0x90: i16x8.add_saturate_u
  { 280, ET_Instruction, 0, 0  },
  // 0x91: i16x8.sub
  { 1540, ET_Instruction, 0, 0  },
  // 0x92: i16x8.sub_saturate_s
  { 1552, ET_Instruction, 0, 0  },
  // 0x93: i16x8.sub_saturate_u
  { 1556, ET_Instruction, 0, 0  },
  // 0x94: i64x2.signselect
  { 1630, ET_Instruction, 0, 0  },
  // 0x95: i16x8.mul
  { 1262, ET_Instruction, 0, 0  },
  // 0x96: i16x8.min_s
  { 1242, ET_Instruction, 0, 0  },
  // 0x97: i16x8.min_u
  { 1248, ET_Instruction, 0, 0  },
  // 0x98: i16x8.max_s
  { 1210, ET_Instruction, 0, 0  },
  // 0x99: i16x8.max_u
  { 1216, ET_Instruction, 0, 0  },
  // 0x9a: i16x8.extmul_low_i8x16_s
  { 762, ET_Instruction, 0, 0  },
  // 0x9b: i16x8.avgr_u
  { 590, ET_Instruction, 0, 0  },
  // 0x9c: i16x8.q15mulr_sat_s
  { 1354, ET_Instruction, 0, 0  },
  // 0x9d: i16x8.extmul_high_i8x16_s
  { 750, ET_Instruction, 0, 0  },
  // 0x9e: i16x8.extmul_low_i8x16_u
  { 768, ET_Instruction, 0, 0  },
  // 0x9f: i16x8.extmul_high_i8x16_u
  { 756, ET_Instruction, 0, 0  },
  // 0xa0: i32x4.abs
  { 250, ET_Instruction, 0, 0  },
  // 0xa1: i32x4.neg
  { 1298, ET_Instruction, 0, 0  },
  // 0xa2: i32x4.any_true
  { 306, ET_Instruction, 0, 0  },
  // 0xa3: i32x4.all_true
  { 290, ET_Instruction, 0, 0  },
  // 0xa4: i32x4.bitmask
  { 596, ET_Instruction, 0, 0  },
  // 0xa5: i32x4.extadd_pairwise_i16x8_s
  { 1660, ET_Instruction, 0, 0  },
  // 0xa6: i32x4.extadd_pairwise_i16x8_u
  { 1664, ET_Instruction, 0, 0  },
  // 0xa7: i32x4.widen_low_i16x8_s
  { 1694, ET_Instruction, 0, 0  },
  // 0xa8: i32x4.widen_high_i16x8_s
  { 1686, ET_Instruction, 0, 0  },
  // 0xa9: i32x4.widen_low_i16x8_u
  { 1698, ET_Instruction, 0, 0  },
  // 0xaa: i32x4.widen_high_i16x8_u
  { 1690, ET_Instruction, 0, 0  },
  // 0xab: i32x4.shl
  { 1422, ET_Instruction, 0, 0  },
  // 0xac: i32x4.shr_s
  { 1434, ET_Instruction, 0, 0  },
  // 0xad: i32x4.shr_u
  { 1446, ET_Instruction, 0, 0  },
  // 0xae: i32x4.add
  { 268, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xb1: i32x4.sub
  { 1544, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xb4: f32x4.qfma
  { 1356, ET_Instruction, 0, 0  },
  // 0xb5: i32x4.mul
  { 1266, ET_Instruction, 0, 0  },
  // 0xb6: i32x4.min_s
  { 1244, ET_Instruction, 0, 0  },
  // 0xb7: i32x4.min_u
  { 1250, ET_Instruction, 0, 0  },
  // 0xb8: i32x4.max_s
  { 1212, ET_Instruction, 0, 0  },
  // 0xb9: i32x4.max_u
  { 1218, ET_Instruction, 0, 0  },
  // 0xba: i32x4.dot_i16x8_s
  { 696, ET_Instruction, 0, 0  },
  // 0xbb: i32x4.extmul_low_i16x8_s
  { 764, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xbd: i32x4.extmul_high_i16x8_s
  { 752, ET_Instruction, 0, 0  },
  // 0xbe: i32x4.extmul_low_i16x8_u
  { 770, ET_Instruction, 0, 0  },
  // 0xbf: i32x4.extmul_high_i16x8_u
  { 758, ET_Instruction, 0, 0  },
  // 0xc0: i64x2.eq
  { 748, ET_Instruction, 0, 0  },
  // 0xc1: i64x2.neg
  { 1300, ET_Instruction, 0, 0  },
  // 0xc2: i64x2.any_true
  { 308, ET_Instruction, 0, 0  },
  // 0xc3: i64x2.all_true
  { 292, ET_Instruction, 0, 0  },
  // 0xc4: i64x2.bitmask
  { 598, ET_Instruction, 0, 0  },
  // 0xc5: prefetch.t	$off$p2align
  { 1350, ET_Instruction, 2, 11  },
  // 0xc6: prefetch.nt	$off$p2align
  { 1346, ET_Instruction, 2, 11  },
  // 0xc7: i64x2.widen_low_i32x4_s
  { 1676, ET_Instruction, 0, 0  },
  // 0xc8: i64x2.widen_high_i32x4_s
  { 1672, ET_Instruction, 0, 0  },
  // 0xc9: i64x2.widen_low_i32x4_u
  { 1678, ET_Instruction, 0, 0  },
  // 0xca: i64x2.widen_high_i32x4_u
  { 1674, ET_Instruction, 0, 0  },
  // 0xcb: i64x2.shl
  { 1426, ET_Instruction, 0, 0  },
  // 0xcc: i64x2.shr_s
  { 1438, ET_Instruction, 0, 0  },
  // 0xcd: i64x2.shr_u
  { 1450, ET_Instruction, 0, 0  },
  // 0xce: i64x2.add
  { 272, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xd1: i64x2.sub
  { 1548, ET_Instruction, 0, 0  },
  // 0xd2: i64x2.extmul_low_i32x4_s
  { 766, ET_Instruction, 0, 0  },
  // 0xd3: i64x2.extmul_high_i32x4_s
  { 754, ET_Instruction, 0, 0  },
  // 0xd4: f32x4.qfms
  { 1360, ET_Instruction, 0, 0  },
  // 0xd5: i64x2.mul
  { 1270, ET_Instruction, 0, 0  },
  // 0xd6: i64x2.extmul_low_i32x4_u
  { 772, ET_Instruction, 0, 0  },
  // 0xd7: i64x2.extmul_high_i32x4_u
  { 760, ET_Instruction, 0, 0  },
  // 0xd8: f32x4.ceil
  { 626, ET_Instruction, 0, 0  },
  // 0xd9: f32x4.floor
  { 818, ET_Instruction, 0, 0  },
  // 0xda: f32x4.trunc
  { 1600, ET_Instruction, 0, 0  },
  // 0xdb: f32x4.nearest
  { 1282, ET_Instruction, 0, 0  },
  // 0xdc: f64x2.ceil
  { 630, ET_Instruction, 0, 0  },
  // 0xdd: f64x2.floor
  { 822, ET_Instruction, 0, 0  },
  // 0xde: f64x2.trunc
  { 1604, ET_Instruction, 0, 0  },
  // 0xdf: f64x2.nearest
  { 1286, ET_Instruction, 0, 0  },
  // 0xe0: f32x4.abs
  { 242, ET_Instruction, 0, 0  },
  // 0xe1: f32x4.neg
  { 1290, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xe3: f32x4.sqrt
  { 1470, ET_Instruction, 0, 0  },
  // 0xe4: f32x4.add
  { 258, ET_Instruction, 0, 0  },
  // 0xe5: f32x4.sub
  { 1534, ET_Instruction, 0, 0  },
  // 0xe6: f32x4.mul
  { 1256, ET_Instruction, 0, 0  },
  // 0xe7: f32x4.div
  { 682, ET_Instruction, 0, 0  },
  // 0xe8: f32x4.min
  { 1236, ET_Instruction, 0, 0  },
  // 0xe9: f32x4.max
  { 1204, ET_Instruction, 0, 0  },
  // 0xea: f32x4.pmin
  { 1336, ET_Instruction, 0, 0  },
  // 0xeb: f32x4.pmax
  { 1332, ET_Instruction, 0, 0  },
  // 0xec: f64x2.abs
  { 246, ET_Instruction, 0, 0  },
  // 0xed: f64x2.neg
  { 1294, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xef: f64x2.sqrt
  { 1474, ET_Instruction, 0, 0  },
  // 0xf0: f64x2.add
  { 262, ET_Instruction, 0, 0  },
  // 0xf1: f64x2.sub
  { 1538, ET_Instruction, 0, 0  },
  // 0xf2: f64x2.mul
  { 1260, ET_Instruction, 0, 0  },
  // 0xf3: f64x2.div
  { 686, ET_Instruction, 0, 0  },
  // 0xf4: f64x2.min
  { 1240, ET_Instruction, 0, 0  },
  // 0xf5: f64x2.max
  { 1208, ET_Instruction, 0, 0  },
  // 0xf6: f64x2.pmin
  { 1338, ET_Instruction, 0, 0  },
  // 0xf7: f64x2.pmax
  { 1334, ET_Instruction, 0, 0  },
  // 0xf8: i32x4.trunc_sat_f32x4_s
  { 1648, ET_Instruction, 0, 0  },
  // 0xf9: i32x4.trunc_sat_f32x4_u
  { 1650, ET_Instruction, 0, 0  },
  // 0xfa: f32x4.convert_i32x4_s
  { 1680, ET_Instruction, 0, 0  },
  // 0xfb: f32x4.convert_i32x4_u
  { 1682, ET_Instruction, 0, 0  },
  // 0xfc: v128.load32_zero	$off$p2align
  { 1122, ET_Instruction, 2, 11  },
  // 0xfd: v128.load64_zero	$off$p2align
  { 1126, ET_Instruction, 2, 11  },
  // 0xfe: f64x2.qfma
  { 1358, ET_Instruction, 0, 0  },
  // 0xff: f64x2.qfms
  { 1362, ET_Instruction, 0, 0  },
};

WebAssemblyInstruction InstructionTable254[] = {
  // 0x0: memory.atomic.notify 	${off}${p2align}
  { 1222, ET_Instruction, 2, 11  },
  // 0x1: memory.atomic.wait32 	${off}${p2align}
  { 1226, ET_Instruction, 2, 11  },
  // 0x2: memory.atomic.wait64 	${off}${p2align}
  { 1230, ET_Instruction, 2, 11  },
  // 0x3: atomic.fence
  { 336, ET_Instruction, 1, 2  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x10: i32.atomic.load	${off}${p2align}
  { 358, ET_Instruction, 2, 11  },
  // 0x11: i64.atomic.load	${off}${p2align}
  { 362, ET_Instruction, 2, 11  },
  // 0x12: i32.atomic.load8_u	${off}${p2align}
  { 350, ET_Instruction, 2, 11  },
  // 0x13: i32.atomic.load16_u	${off}${p2align}
  { 338, ET_Instruction, 2, 11  },
  // 0x14: i64.atomic.load8_u	${off}${p2align}
  { 354, ET_Instruction, 2, 11  },
  // 0x15: i64.atomic.load16_u	${off}${p2align}
  { 342, ET_Instruction, 2, 11  },
  // 0x16: i64.atomic.load32_u	${off}${p2align}
  { 346, ET_Instruction, 2, 11  },
  // 0x17: i32.atomic.store	${off}${p2align}
  { 582, ET_Instruction, 2, 11  },
  // 0x18: i64.atomic.store	${off}${p2align}
  { 586, ET_Instruction, 2, 11  },
  // 0x19: i32.atomic.store8	${off}${p2align}
  { 574, ET_Instruction, 2, 11  },
  // 0x1a: i32.atomic.store16	${off}${p2align}
  { 562, ET_Instruction, 2, 11  },
  // 0x1b: i64.atomic.store8	${off}${p2align}
  { 578, ET_Instruction, 2, 11  },
  // 0x1c: i64.atomic.store16	${off}${p2align}
  { 566, ET_Instruction, 2, 11  },
  // 0x1d: i64.atomic.store32	${off}${p2align}
  { 570, ET_Instruction, 2, 11  },
  // 0x1e: i32.atomic.rmw.add	${off}${p2align}
  { 506, ET_Instruction, 2, 11  },
  // 0x1f: i64.atomic.rmw.add	${off}${p2align}
  { 510, ET_Instruction, 2, 11  },
  // 0x20: i32.atomic.rmw8.add_u	${off}${p2align}
  { 450, ET_Instruction, 2, 11  },
  // 0x21: i32.atomic.rmw16.add_u	${off}${p2align}
  { 366, ET_Instruction, 2, 11  },
  // 0x22: i64.atomic.rmw8.add_u	${off}${p2align}
  { 454, ET_Instruction, 2, 11  },
  // 0x23: i64.atomic.rmw16.add_u	${off}${p2align}
  { 370, ET_Instruction, 2, 11  },
  // 0x24: i64.atomic.rmw32.add_u	${off}${p2align}
  { 422, ET_Instruction, 2, 11  },
  // 0x25: i32.atomic.rmw.sub	${off}${p2align}
  { 538, ET_Instruction, 2, 11  },
  // 0x26: i64.atomic.rmw.sub	${off}${p2align}
  { 542, ET_Instruction, 2, 11  },
  // 0x27: i32.atomic.rmw8.sub_u	${off}${p2align}
  { 482, ET_Instruction, 2, 11  },
  // 0x28: i32.atomic.rmw16.sub_u	${off}${p2align}
  { 398, ET_Instruction, 2, 11  },
  // 0x29: i64.atomic.rmw8.sub_u	${off}${p2align}
  { 486, ET_Instruction, 2, 11  },
  // 0x2a: i64.atomic.rmw16.sub_u	${off}${p2align}
  { 402, ET_Instruction, 2, 11  },
  // 0x2b: i64.atomic.rmw32.sub_u	${off}${p2align}
  { 438, ET_Instruction, 2, 11  },
  // 0x2c: i32.atomic.rmw.and	${off}${p2align}
  { 514, ET_Instruction, 2, 11  },
  // 0x2d: i64.atomic.rmw.and	${off}${p2align}
  { 518, ET_Instruction, 2, 11  },
  // 0x2e: i32.atomic.rmw8.and_u	${off}${p2align}
  { 458, ET_Instruction, 2, 11  },
  // 0x2f: i32.atomic.rmw16.and_u	${off}${p2align}
  { 374, ET_Instruction, 2, 11  },
  // 0x30: i64.atomic.rmw8.and_u	${off}${p2align}
  { 462, ET_Instruction, 2, 11  },
  // 0x31: i64.atomic.rmw16.and_u	${off}${p2align}
  { 378, ET_Instruction, 2, 11  },
  // 0x32: i64.atomic.rmw32.and_u	${off}${p2align}
  { 426, ET_Instruction, 2, 11  },
  // 0x33: i32.atomic.rmw.or	${off}${p2align}
  { 530, ET_Instruction, 2, 11  },
  // 0x34: i64.atomic.rmw.or	${off}${p2align}
  { 534, ET_Instruction, 2, 11  },
  // 0x35: i32.atomic.rmw8.or_u	${off}${p2align}
  { 474, ET_Instruction, 2, 11  },
  // 0x36: i32.atomic.rmw16.or_u	${off}${p2align}
  { 390, ET_Instruction, 2, 11  },
  // 0x37: i64.atomic.rmw8.or_u	${off}${p2align}
  { 478, ET_Instruction, 2, 11  },
  // 0x38: i64.atomic.rmw16.or_u	${off}${p2align}
  { 394, ET_Instruction, 2, 11  },
  // 0x39: i64.atomic.rmw32.or_u	${off}${p2align}
  { 434, ET_Instruction, 2, 11  },
  // 0x3a: i32.atomic.rmw.xor	${off}${p2align}
  { 554, ET_Instruction, 2, 11  },
  // 0x3b: i64.atomic.rmw.xor	${off}${p2align}
  { 558, ET_Instruction, 2, 11  },
  // 0x3c: i32.atomic.rmw8.xor_u	${off}${p2align}
  { 498, ET_Instruction, 2, 11  },
  // 0x3d: i32.atomic.rmw16.xor_u	${off}${p2align}
  { 414, ET_Instruction, 2, 11  },
  // 0x3e: i64.atomic.rmw8.xor_u	${off}${p2align}
  { 502, ET_Instruction, 2, 11  },
  // 0x3f: i64.atomic.rmw16.xor_u	${off}${p2align}
  { 418, ET_Instruction, 2, 11  },
  // 0x40: i64.atomic.rmw32.xor_u	${off}${p2align}
  { 446, ET_Instruction, 2, 11  },
  // 0x41: i32.atomic.rmw.xchg	${off}${p2align}
  { 546, ET_Instruction, 2, 11  },
  // 0x42: i64.atomic.rmw.xchg	${off}${p2align}
  { 550, ET_Instruction, 2, 11  },
  // 0x43: i32.atomic.rmw8.xchg_u	${off}${p2align}
  { 490, ET_Instruction, 2, 11  },
  // 0x44: i32.atomic.rmw16.xchg_u	${off}${p2align}
  { 406, ET_Instruction, 2, 11  },
  // 0x45: i64.atomic.rmw8.xchg_u	${off}${p2align}
  { 494, ET_Instruction, 2, 11  },
  // 0x46: i64.atomic.rmw16.xchg_u	${off}${p2align}
  { 410, ET_Instruction, 2, 11  },
  // 0x47: i64.atomic.rmw32.xchg_u	${off}${p2align}
  { 442, ET_Instruction, 2, 11  },
  // 0x48: i32.atomic.rmw.cmpxchg	${off}${p2align}
  { 522, ET_Instruction, 2, 11  },
  // 0x49: i64.atomic.rmw.cmpxchg	${off}${p2align}
  { 526, ET_Instruction, 2, 11  },
  // 0x4a: i32.atomic.rmw8.cmpxchg_u	${off}${p2align}
  { 466, ET_Instruction, 2, 11  },
  // 0x4b: i32.atomic.rmw16.cmpxchg_u	${off}${p2align}
  { 382, ET_Instruction, 2, 11  },
  // 0x4c: i64.atomic.rmw8.cmpxchg_u	${off}${p2align}
  { 470, ET_Instruction, 2, 11  },
  // 0x4d: i64.atomic.rmw16.cmpxchg_u	${off}${p2align}
  { 386, ET_Instruction, 2, 11  },
  // 0x4e: i64.atomic.rmw32.cmpxchg_u	${off}${p2align}
  { 430, ET_Instruction, 2, 11  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xff: compiler_fence
  { 236, ET_Instruction, 0, 0  },
};

const uint8_t OperandTable[] = {
  WebAssembly::OPERAND_SIGNATURE,
  WebAssembly::OPERAND_EVENT,
  MCOI::OPERAND_IMMEDIATE,
  WebAssembly::OPERAND_BASIC_BLOCK,
  WebAssembly::OPERAND_BRLIST,
  WebAssembly::OPERAND_FUNCTION32,
  WebAssembly::OPERAND_TYPEINDEX,
  MCOI::OPERAND_IMMEDIATE,
  WebAssembly::OPERAND_LOCAL,
  WebAssembly::OPERAND_GLOBAL,
  WebAssembly::OPERAND_TABLE,
  WebAssembly::OPERAND_P2ALIGN,
  WebAssembly::OPERAND_OFFSET32,
  WebAssembly::OPERAND_I32IMM,
  WebAssembly::OPERAND_I64IMM,
  WebAssembly::OPERAND_F32IMM,
  WebAssembly::OPERAND_F64IMM,
  WebAssembly::OPERAND_HEAPTYPE,
  WebAssembly::OPERAND_I32IMM,
  WebAssembly::OPERAND_I32IMM,
  WebAssembly::OPERAND_TABLE,
  WebAssembly::OPERAND_TABLE,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_P2ALIGN,
  WebAssembly::OPERAND_OFFSET32,
  WebAssembly::OPERAND_VEC_I8IMM,
};

struct { uint8_t Prefix; const WebAssemblyInstruction *Table; }
PrefixTable[] = {
  { 252, InstructionTable252 },
  { 253, InstructionTable253 },
  { 254, InstructionTable254 },
  { 0, nullptr }
};

} // end namespace llvm
