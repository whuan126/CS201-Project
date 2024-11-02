/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace Hexagon {
enum {
  ArchV5 = 0,
  ArchV55 = 1,
  ArchV60 = 2,
  ArchV62 = 3,
  ArchV65 = 4,
  ArchV66 = 5,
  ArchV67 = 6,
  ExtensionAudio = 7,
  ExtensionHVX = 8,
  ExtensionHVX64B = 9,
  ExtensionHVX128B = 10,
  ExtensionHVXV60 = 11,
  ExtensionHVXV62 = 12,
  ExtensionHVXV65 = 13,
  ExtensionHVXV66 = 14,
  ExtensionHVXV67 = 15,
  ExtensionZReg = 16,
  FeatureCompound = 17,
  FeatureDuplex = 18,
  FeatureLongCalls = 19,
  FeatureMemNoShuf = 20,
  FeatureMemops = 21,
  FeatureNVJ = 22,
  FeatureNVS = 23,
  FeatureNoreturnStackElim = 24,
  FeaturePackets = 25,
  FeaturePreV65 = 26,
  FeatureReservedR19 = 27,
  FeatureSmallData = 28,
  FeatureUnsafeFP = 29,
  ProcTinyCore = 30,
  NumSubtargetFeatures = 31
};
} // end namespace Hexagon
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "audio", "Hexagon Audio extension instructions", Hexagon::ExtensionAudio, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "compound", "Use compound instructions", Hexagon::FeatureCompound, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "duplex", "Enable generation of duplex instruction", Hexagon::FeatureDuplex, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx", "Hexagon HVX instructions", Hexagon::ExtensionHVX, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx-length128b", "Hexagon HVX 128B instructions", Hexagon::ExtensionHVX128B, { { { 0x100ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx-length64b", "Hexagon HVX 64B instructions", Hexagon::ExtensionHVX64B, { { { 0x100ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv60", "Hexagon HVX instructions", Hexagon::ExtensionHVXV60, { { { 0x100ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv62", "Hexagon HVX instructions", Hexagon::ExtensionHVXV62, { { { 0x900ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv65", "Hexagon HVX instructions", Hexagon::ExtensionHVXV65, { { { 0x1900ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv66", "Hexagon HVX instructions", Hexagon::ExtensionHVXV66, { { { 0x13900ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv67", "Hexagon HVX instructions", Hexagon::ExtensionHVXV67, { { { 0x7800ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "long-calls", "Use constant-extended calls", Hexagon::FeatureLongCalls, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "mem_noshuf", "Supports mem_noshuf feature", Hexagon::FeatureMemNoShuf, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "memops", "Use memop instructions", Hexagon::FeatureMemops, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "noreturn-stack-elim", "Eliminate stack allocation in a noreturn function when possible", Hexagon::FeatureNoreturnStackElim, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nvj", "Support for new-value jumps", Hexagon::FeatureNVJ, { { { 0x2000000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nvs", "Support for new-value stores", Hexagon::FeatureNVS, { { { 0x2000000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "packets", "Support for instruction packets", Hexagon::FeaturePackets, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "prev65", "Support features deprecated in v65", Hexagon::FeaturePreV65, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "reserved-r19", "Reserve register R19", Hexagon::FeatureReservedR19, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "small-data", "Allow GP-relative addressing of global variables", Hexagon::FeatureSmallData, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "tinycore", "Hexagon Tiny Core", Hexagon::ProcTinyCore, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "unsafe-fp", "Use unsafe FP math", Hexagon::FeatureUnsafeFP, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v5", "Enable Hexagon V5 architecture", Hexagon::ArchV5, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v55", "Enable Hexagon V55 architecture", Hexagon::ArchV55, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v60", "Enable Hexagon V60 architecture", Hexagon::ArchV60, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v62", "Enable Hexagon V62 architecture", Hexagon::ArchV62, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v65", "Enable Hexagon V65 architecture", Hexagon::ArchV65, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v66", "Enable Hexagon V66 architecture", Hexagon::ArchV66, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v67", "Enable Hexagon V67 architecture", Hexagon::ArchV67, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "zreg", "Hexagon ZReg extension instructions", Hexagon::ExtensionZReg, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV60"
namespace HexagonItinerariesV60FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV60FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV60"
namespace HexagonItinerariesV60Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV60Bypass

// Functional units for "HexagonItinerariesV5"
namespace HexagonItinerariesV5FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
} // end namespace HexagonItinerariesV5FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV5"
namespace HexagonItinerariesV5Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV5Bypass

// Functional units for "HexagonItinerariesV55"
namespace HexagonItinerariesV55FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
} // end namespace HexagonItinerariesV55FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV55"
namespace HexagonItinerariesV55Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV55Bypass

// Functional units for "HexagonItinerariesV62"
namespace HexagonItinerariesV62FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV62FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV62"
namespace HexagonItinerariesV62Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV62Bypass

// Functional units for "HexagonItinerariesV65"
namespace HexagonItinerariesV65FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV65FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV65"
namespace HexagonItinerariesV65Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV65Bypass

// Functional units for "HexagonItinerariesV66"
namespace HexagonItinerariesV66FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV66FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV66"
namespace HexagonItinerariesV66Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV66Bypass

// Functional units for "HexagonItinerariesV67"
namespace HexagonItinerariesV67FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV67FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV67"
namespace HexagonItinerariesV67Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV67Bypass

// Functional units for "HexagonItinerariesV67T"
namespace HexagonItinerariesV67TFU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV67TFU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV67T"
namespace HexagonItinerariesV67TBypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV67TBypass

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV60FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV60FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-9
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10-11
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12-14
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15-16
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17-19
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20-21
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22-25
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26-27
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 28-29
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30-31
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32-35
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 36-37
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38-41
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 42-43
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-45
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 46-47
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48-49
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50-52
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-55
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 56-57
  { 1, HexagonItinerariesV60FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-59
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60-62
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63-64
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 65-67
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 68-69
  { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 70
  { 1, HexagonItinerariesV5FU::SLOT0 | HexagonItinerariesV5FU::SLOT1 | HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71
  { 1, HexagonItinerariesV5FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72
  { 1, HexagonItinerariesV5FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 73
  { 1, HexagonItinerariesV5FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74
  { 1, HexagonItinerariesV5FU::SLOT0 | HexagonItinerariesV5FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 75
  { 1, HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76
  { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 77-78
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 79
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1 | HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 80
  { 1, HexagonItinerariesV55FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81
  { 1, HexagonItinerariesV55FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 82
  { 1, HexagonItinerariesV55FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 84
  { 1, HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86-87
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 1, HexagonItinerariesV62FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 1, HexagonItinerariesV62FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, HexagonItinerariesV62FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 1, HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95-96
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97-98
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99-101
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102-103
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104-106
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107-108
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109-112
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113-114
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115-116
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117-118
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119-122
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123-124
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125-128
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129-130
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131-132
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133-134
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135-136
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137-139
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140-142
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143-144
  { 1, HexagonItinerariesV62FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145-146
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147-149
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150-151
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152-154
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155-156
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 1, HexagonItinerariesV65FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 1, HexagonItinerariesV65FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 1, HexagonItinerariesV65FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 1, HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164-165
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166-167
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168-170
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171-172
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173-175
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176-177
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178-181
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182-183
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 184-185
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 186-187
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 188-191
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192-193
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-197
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 198-199
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-201
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202-203
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 204-205
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 206-208
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 209-211
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 212-213
  { 1, HexagonItinerariesV65FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 214-215
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 216-218
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 219-220
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 221-223
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 224-225
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 226
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227
  { 1, HexagonItinerariesV66FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 228
  { 1, HexagonItinerariesV66FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 229
  { 1, HexagonItinerariesV66FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 231
  { 1, HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 232
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 233-234
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-236
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 237-239
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 240-241
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 242-244
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 245-246
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 247-250
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 251-252
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 253-254
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 255-256
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 257-260
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 261-262
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 263-266
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 267-268
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 269-270
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 271-272
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 273-274
  { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 275-277
  { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-280
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 281-282
  { 1, HexagonItinerariesV66FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 283-284
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 285-287
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 288-289
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 290-292
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 293-294
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 295
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 296
  { 1, HexagonItinerariesV67FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 297
  { 1, HexagonItinerariesV67FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 298
  { 1, HexagonItinerariesV67FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 299
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 300
  { 1, HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 301
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 302-303
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 304-305
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 306-308
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 309-310
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 311-313
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 314-315
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 316-319
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 320-321
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 322-323
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 324-325
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 326-329
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 330-331
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 332-335
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 336-337
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 338-339
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 340-341
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 342-343
  { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 344-346
  { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 347-349
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 350-351
  { 1, HexagonItinerariesV67FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 352-353
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 354-356
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 357-358
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 359-361
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 362-363
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 364
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 365
  { 1, HexagonItinerariesV67TFU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 366
  { 1, HexagonItinerariesV67TFU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 367
  { 1, HexagonItinerariesV67TFU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 368
  { 1, HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 369
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 370-371
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 372-373
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 374-376
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 377-378
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 379-381
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 382-383
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 384-387
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 388
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 389
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 390-391
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 392-393
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 394-395
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 396-399
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 400-401
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 402-405
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 406-407
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 408-409
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 410-411
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 412-413
  { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 414-416
  { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 417-419
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 420-421
  { 1, HexagonItinerariesV67TFU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 422-423
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 424-426
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 427-428
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 429-431
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 432-433
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  3,   2,   2, // 1-3
  1,   1,   1, // 4-6
  3,   2, // 7-8
  3,   2,   2,   2, // 9-12
  3,   3,   2,   2, // 13-16
  3,   2,   2, // 17-19
  3,   3,   2, // 20-22
  3,   2,   2, // 23-25
  3,   1,   1, // 26-28
  3,   1,   2, // 29-31
  3,   2,   2, // 32-34
  1,   1,   1, // 35-37
  2, // 38
  2,   2, // 39-40
  2,   1, // 41-42
  3,   2,   2, // 43-45
  4,   2,   1,   2, // 46-49
  4,   1,   2, // 50-52
  4,   3,   1,   2, // 53-56
  1,   2,   2, // 57-59
  1,   2,   2, // 60-62
  3,   2,   2, // 63-65
  3,   3,   2, // 66-68
  2, // 69
  3, // 70
  4,   2, // 71-72
  3,   2, // 73-74
  3,   1, // 75-76
  4,   1,   2, // 77-79
  4,   1,   1, // 80-82
  4,   2,   1,   1, // 83-86
  4,   1,   1, // 87-89
  4,   2,   1,   1, // 90-93
  2, // 94
  4,   3,   1,   2,   2, // 95-99
  9,   7,   7, // 100-102
  3,   1,   2,   2,   2, // 103-107
  3,   1,   2,   2, // 108-111
  1, // 112
  9,   7,   7, // 113-115
  9,   1,   2, // 116-118
  1,   1,   1, // 119-121
  9,   2,   7, // 122-124
  1,   2,   7, // 125-127
  9,   2,   7,   7, // 128-131
  4,   2,   2, // 132-134
  2,   1,   2,   2, // 135-138
  2,   1,   2,   3, // 139-142
  1,   2,   2, // 143-145
  1,   2,   3, // 146-148
  4,   2,   2,   2,   2, // 149-153
  3,   1,   2,   3, // 154-157
  1,   2,   2, // 158-160
  2,   1,   2,   2, // 161-164
  3,   1,   2,   2, // 165-168
  4,   2,   2, // 169-171
  1,   1,   1, // 172-174
  9,   7,   7,   7, // 175-178
  9,   7, // 179-180
  9, // 181
  1, // 182
  3,   2,   2, // 183-185
  3,   2, // 186-187
  4,   3,   2, // 188-190
  4,   1, // 191-192
  4,   1,   2, // 193-195
  3,   1,   2, // 196-198
  1,   2,   3, // 199-201
  1,   2,   2, // 202-204
  4,   2, // 205-206
  4,   2,   2, // 207-209
  4,   2,   2, // 210-212
  4,   2,   2, // 213-215
  3,   2, // 216-217
  3,   2,   2, // 218-220
  3,   2,   2, // 221-223
  4,   2, // 224-225
  4,   1, // 226-227
  3,   2,   2, // 228-230
  3,   2,   2, // 231-233
  4,   4,   1,   1,   2, // 234-238
  3,   1,   2, // 239-241
  2, // 242
  4,   1,   1, // 243-245
  4,   1,   1,   2, // 246-249
  4,   4,   1,   1,   1, // 250-254
  3,   2,   2, // 255-257
  4,   4,   2,   2, // 258-261
  4,   2,   2, // 262-264
  3,   2, // 265-266
  3,   1,   1, // 267-269
  3,   1, // 270-271
  3,   2,   2,   2, // 272-275
  4,   2, // 276-277
  3,   2,   2,   2, // 278-281
  5,   1, // 282-283
  5,   1,   1, // 284-286
  4,   2, // 287-288
  5,   2,   1,   1, // 289-292
  4,   2,   1,   1, // 293-296
  4,   1,   1, // 297-299
  5,   1,   1, // 300-302
  5,   2,   1,   1, // 303-306
  5,   2,   1,   1,   2, // 307-311
  5,   5,   1, // 312-314
  4,   2,   2, // 315-317
  5,   5,   1,   1, // 318-321
  4,   2, // 322-323
  4,   1, // 324-325
  2,   2, // 326-327
  1, // 328
  2,   1, // 329-330
  2, // 331
  3,   2, // 332-333
  2,   2, // 334-335
  3,   1, // 336-337
  2,   1, // 338-339
  1,   2, // 340-341
  2,   2, // 342-343
  2,   1, // 344-345
  2, // 346
  2,   2, // 347-348
  2,   1, // 349-350
  2, // 351
  3,   2,   2, // 352-354
  1,   1,   2, // 355-357
  3,   2,   2, // 358-360
  1,   2,   2, // 361-363
  2,   3,   2, // 364-366
  3,   2,   2, // 367-369
  3,   2, // 370-371
  1,   2, // 372-373
  4,   3,   2,   1,   2, // 374-378
  4,   3,   2,   1,   2,   2, // 379-384
  4,   2, // 385-386
  4,   1, // 387-388
  4,   3,   3,   1,   2, // 389-393
  4,   3,   2,   2, // 394-397
  4,   2,   1,   2,   2, // 398-402
  4,   3,   2, // 403-405
  4,   1,   2,   2, // 406-409
  4,   1,   1,   2, // 410-413
  4,   2,   2, // 414-416
  4,   2,   1,   1,   2, // 417-421
  4,   3,   1,   1,   2, // 422-426
  1,   1,   2, // 427-429
  4,   2,   2,   2, // 430-433
  4,   2,   1,   2, // 434-437
  4,   2,   2,   2, // 438-441
  4,   2,   2,   1, // 442-445
  2,   2, // 446-447
  2,   3, // 448-449
  4,   2, // 450-451
  4,   1,   1, // 452-454
  4,   2,   2, // 455-457
  4,   2,   2, // 458-460
  3,   2,   1,   2,   2, // 461-465
  3,   3,   1,   2,   2, // 466-470
  3,   2,   1,   2,   3, // 471-475
  3,   3,   1,   2,   3, // 476-480
  3,   1,   2,   2,   3, // 481-485
  4,   1,   1, // 486-488
  4,   2, // 489-490
  2,   2,   2, // 491-493
  2,   1,   1,   2,   2, // 494-498
  3,   2,   2, // 499-501
  3,   1,   1,   2,   2, // 502-506
  2,   2,   3, // 507-509
  2,   1,   1,   2,   3, // 510-514
  3,   2,   3, // 515-517
  3,   1,   1,   2,   3, // 518-522
  1,   1,   2,   2, // 523-526
  1,   2,   2,   2, // 527-530
  1,   1,   2,   3, // 531-534
  1,   2,   2,   3, // 535-538
  4,   1,   1,   2, // 539-542
  4,   2,   1,   1,   2, // 543-547
  4,   2, // 548-549
  4,   2,   2,   2, // 550-553
  3,   2, // 554-555
  3,   2,   2, // 556-558
  3,   2, // 559-560
  3, // 561
  3, // 562
  1,   2, // 563-564
  2, // 565
  1,   2, // 566-567
  4,   7,   1, // 568-570
  9,   2, // 571-572
  9,   2, // 573-574
  9,   1,   2, // 575-577
  9,   3,   1,   2, // 578-581
  9,   2,   1,   2, // 582-585
  9,   3,   2,   1,   2, // 586-590
  9,   3,   1,   2, // 591-594
  9,   1,   2, // 595-597
  9,   2,   1,   2, // 598-601
  9,   3,   2,   1,   2, // 602-606
  9,   3,   1,   2, // 607-610
  1,   2,   5, // 611-613
  2,   1,   2,   5, // 614-617
  3,   2,   1,   2,   5, // 618-622
  3,   1,   2,   5, // 623-626
  1,   2,   5, // 627-629
  2,   1,   2,   5, // 630-633
  3,   2,   1,   2,   5, // 634-638
  3,   1,   2,   5, // 639-642
  2,   1,   2,   7, // 643-646
  3,   2,   1,   2,   7, // 647-651
  7,   1,   2,   7, // 652-655
  3,   7,   1,   2,   7, // 656-660
  3,   1,   2,   7, // 661-664
  1,   2, // 665-666
  3,   1,   2, // 667-669
  9,   5,   5, // 670-672
  9,   7,   7,   7, // 673-676
  9,   9,   7,   7,   7, // 677-681
  9,   9,   7,   7, // 682-685
  9,   5,   5, // 686-688
  9,   5,   5, // 689-691
  9,   7,   5,   5, // 692-695
  9,   5,   5,   2, // 696-699
  9,   7,   2, // 700-702
  9,   7,   7,   2, // 703-706
  9,   5,   2, // 707-709
  9,   7,   5,   2, // 710-713
  9,   7,   5,   5, // 714-717
  9,   5,   5,   2, // 718-721
  9,   5, // 722-723
  9,   9,   5,   5,   2, // 724-728
  9,   5, // 729-730
  9,   5,   5, // 731-733
  9,   5,   5,   2, // 734-737
  9,   5,   2, // 738-740
  9,   7,   5,   2, // 741-744
  9,   5,   2, // 745-747
  9,   7,   5,   2, // 748-751
  1,   2,   7, // 752-754
  7,   1,   2,   7, // 755-758
  1,   2,   7, // 759-761
  7,   1,   2,   7, // 762-765
  3, // 766
  9,   5,   2, // 767-769
  9,   7,   5,   5,   2, // 770-774
  9,   5,   5,   2, // 775-778
  9,   5,   2, // 779-781
  9,   7,   5,   2, // 782-785
  9,   5,   2,   2, // 786-789
  9,   7,   5,   2,   2, // 790-794
  9,   5,   2, // 795-797
  9,   7,   5,   2, // 798-801
  9,   3,   5,   2, // 802-805
  9,   3,   7,   5,   2, // 806-810
  9,   5,   2, // 811-813
  9,   5,   5, // 814-816
  9,   7, // 817-818
  1,   2,   7,   7, // 819-822
  7,   1,   2,   7,   7, // 823-827
  1,   2,   7,   7, // 828-831
  7,   1,   2,   7,   7, // 832-836
  9,   7,   7,   7, // 837-840
  9,   5, // 841-842
  9,   7,   5, // 843-845
  2, // 846
  3,   2, // 847-848
  1,   2, // 849-850
  3,   1,   2, // 851-853
  2,   1,   2, // 854-856
  3,   2,   1,   2, // 857-860
  1, // 861
  1,   2, // 862-863
  1, // 864
  1, // 865
  1,   1, // 866-867
  1, // 868
  1,   1, // 869-870
  3,   2,   2, // 871-873
  1,   1,   1, // 874-876
  3,   2, // 877-878
  3,   2,   2,   2, // 879-882
  3,   3,   2,   2, // 883-886
  3,   2,   2, // 887-889
  3,   3,   2, // 890-892
  3,   2,   2, // 893-895
  3,   1,   1, // 896-898
  3,   1,   2, // 899-901
  3,   2,   2, // 902-904
  1,   1,   1, // 905-907
  2, // 908
  2,   2, // 909-910
  2,   1, // 911-912
  3,   2,   2, // 913-915
  4,   2,   1,   2, // 916-919
  4,   1,   2, // 920-922
  4,   3,   1,   2, // 923-926
  1,   2,   2, // 927-929
  1,   2,   2, // 930-932
  4,   2,   1, // 933-935
  4,   3,   1, // 936-938
  2, // 939
  3, // 940
  4,   2, // 941-942
  4,   2, // 943-944
  2,   1, // 945-946
  4,   1,   2, // 947-949
  4,   1,   1, // 950-952
  4,   2,   1,   1, // 953-956
  4,   1,   1, // 957-959
  4,   2,   1,   1, // 960-963
  2, // 964
  4,   3,   1,   2,   2, // 965-969
  3,   1,   2,   2,   2, // 970-974
  3,   1,   2,   2, // 975-978
  1, // 979
  1,   1,   1, // 980-982
  4,   2,   2, // 983-985
  2,   1,   2,   2, // 986-989
  2,   1,   2,   3, // 990-993
  1,   2,   2, // 994-996
  1,   2,   3, // 997-999
  3,   2,   2,   2,   2, // 1000-1004
  3,   1,   2,   3, // 1005-1008
  1,   2,   2, // 1009-1011
  2,   1,   2,   2, // 1012-1015
  3,   1,   2,   2, // 1016-1019
  4,   2,   2, // 1020-1022
  1,   1,   1, // 1023-1025
  1, // 1026
  3,   2,   2, // 1027-1029
  3,   2, // 1030-1031
  4,   3,   2, // 1032-1034
  4,   1, // 1035-1036
  4,   1,   2, // 1037-1039
  3,   1,   2, // 1040-1042
  1,   2,   3, // 1043-1045
  1,   2,   2, // 1046-1048
  4,   2, // 1049-1050
  4,   2,   2, // 1051-1053
  3,   2,   2, // 1054-1056
  4,   2,   2, // 1057-1059
  3,   2, // 1060-1061
  3,   2,   2, // 1062-1064
  4,   2,   2, // 1065-1067
  4,   2, // 1068-1069
  4,   1, // 1070-1071
  3,   2,   2, // 1072-1074
  4,   2,   2, // 1075-1077
  4,   4,   1,   1,   2, // 1078-1082
  3,   1,   2, // 1083-1085
  2, // 1086
  4,   1,   1, // 1087-1089
  4,   1,   1,   1, // 1090-1093
  4,   4,   1,   1,   1, // 1094-1098
  3,   2,   2, // 1099-1101
  4,   4,   2,   2, // 1102-1105
  4,   2,   2, // 1106-1108
  3,   2, // 1109-1110
  3,   1,   1, // 1111-1113
  3,   1, // 1114-1115
  3,   2,   2,   2, // 1116-1119
  4,   2, // 1120-1121
  3,   2,   2,   2, // 1122-1125
  4,   1, // 1126-1127
  5,   1,   1, // 1128-1130
  4,   2, // 1131-1132
  5,   2,   1,   1, // 1133-1136
  4,   2,   1,   1, // 1137-1140
  4,   1,   1, // 1141-1143
  4,   1,   1, // 1144-1146
  4,   1,   1,   1, // 1147-1150
  4,   1,   1,   1,   2, // 1151-1155
  4,   4,   1, // 1156-1158
  4,   1,   1, // 1159-1161
  4,   4,   1,   1, // 1162-1165
  4,   2, // 1166-1167
  4,   1, // 1168-1169
  2,   2, // 1170-1171
  1, // 1172
  2,   1, // 1173-1174
  2, // 1175
  3,   2, // 1176-1177
  2,   2, // 1178-1179
  3,   1, // 1180-1181
  2,   1, // 1182-1183
  1,   2, // 1184-1185
  2,   2, // 1186-1187
  2,   1, // 1188-1189
  2, // 1190
  2,   2, // 1191-1192
  2,   1, // 1193-1194
  2, // 1195
  3,   1,   2, // 1196-1198
  1,   1,   2, // 1199-1201
  3,   2,   2, // 1202-1204
  1,   2,   2, // 1205-1207
  1,   3,   2, // 1208-1210
  3,   2,   2, // 1211-1213
  3,   2, // 1214-1215
  1,   2, // 1216-1217
  4,   3,   2,   1,   2, // 1218-1222
  4,   3,   2,   1,   2,   2, // 1223-1228
  4,   2, // 1229-1230
  4,   1, // 1231-1232
  4,   3,   3,   1,   2, // 1233-1237
  4,   3,   2,   2, // 1238-1241
  4,   2,   1,   2,   2, // 1242-1246
  4,   3,   2, // 1247-1249
  4,   1,   2,   2, // 1250-1253
  4,   1,   1,   2, // 1254-1257
  4,   2,   2, // 1258-1260
  4,   2,   1,   1,   2, // 1261-1265
  4,   3,   1,   1,   2, // 1266-1270
  1,   1,   2, // 1271-1273
  4,   2,   2,   2, // 1274-1277
  4,   2,   1,   2, // 1278-1281
  3,   2,   2,   2, // 1282-1285
  4,   2,   2,   1, // 1286-1289
  2,   2, // 1290-1291
  2,   3, // 1292-1293
  3,   2, // 1294-1295
  4,   1,   1, // 1296-1298
  4,   2,   2, // 1299-1301
  4,   2,   2, // 1302-1304
  3,   2,   1,   2,   2, // 1305-1309
  3,   3,   1,   2,   2, // 1310-1314
  3,   2,   1,   2,   3, // 1315-1319
  3,   3,   1,   2,   3, // 1320-1324
  3,   1,   2,   2,   3, // 1325-1329
  4,   1,   1, // 1330-1332
  3,   2, // 1333-1334
  2,   2,   2, // 1335-1337
  2,   1,   1,   2,   2, // 1338-1342
  3,   2,   2, // 1343-1345
  3,   1,   1,   2,   2, // 1346-1350
  2,   2,   3, // 1351-1353
  2,   1,   1,   2,   3, // 1354-1358
  3,   2,   3, // 1359-1361
  3,   1,   1,   2,   3, // 1362-1366
  1,   1,   2,   2, // 1367-1370
  1,   2,   2,   2, // 1371-1374
  1,   1,   2,   3, // 1375-1378
  1,   2,   2,   3, // 1379-1382
  4,   1,   1,   2, // 1383-1386
  4,   2,   1,   1,   2, // 1387-1391
  4,   2, // 1392-1393
  4,   2,   2,   2, // 1394-1397
  3,   2, // 1398-1399
  3,   2,   2, // 1400-1402
  3,   2, // 1403-1404
  3, // 1405
  3, // 1406
  1,   2, // 1407-1408
  2, // 1409
  1,   2, // 1410-1411
  1, // 1412
  1,   2, // 1413-1414
  1, // 1415
  1, // 1416
  1,   1, // 1417-1418
  1, // 1419
  1,   1, // 1420-1421
  4,   2,   2, // 1422-1424
  1,   1,   1, // 1425-1427
  3,   2, // 1428-1429
  3,   2,   2,   2, // 1430-1433
  3,   3,   2,   2, // 1434-1437
  3,   2,   2, // 1438-1440
  3,   3,   2, // 1441-1443
  3,   2,   2, // 1444-1446
  3,   1,   1, // 1447-1449
  3,   1,   2, // 1450-1452
  3,   2,   2, // 1453-1455
  1,   1,   1, // 1456-1458
  2, // 1459
  2,   2, // 1460-1461
  2,   1, // 1462-1463
  3,   2,   2, // 1464-1466
  4,   2,   1,   2, // 1467-1470
  4,   1,   2, // 1471-1473
  4,   3,   1,   2, // 1474-1477
  1,   2,   2, // 1478-1480
  1,   2,   2, // 1481-1483
  3,   2,   2, // 1484-1486
  3,   3,   2, // 1487-1489
  2, // 1490
  3, // 1491
  4,   2, // 1492-1493
  3,   2, // 1494-1495
  3,   1, // 1496-1497
  4,   1,   2, // 1498-1500
  4,   1,   1, // 1501-1503
  4,   2,   1,   1, // 1504-1507
  4,   1,   1, // 1508-1510
  4,   2,   1,   1, // 1511-1514
  2, // 1515
  4,   3,   1,   2,   2, // 1516-1520
  9,   7,   7, // 1521-1523
  3,   1,   2,   2,   2, // 1524-1528
  3,   1,   2,   2, // 1529-1532
  1, // 1533
  9,   7,   7, // 1534-1536
  9,   1,   2, // 1537-1539
  1,   1,   1, // 1540-1542
  9,   2,   7, // 1543-1545
  1,   2,   7, // 1546-1548
  9,   2,   7,   7, // 1549-1552
  4,   2,   2, // 1553-1555
  2,   1,   2,   2, // 1556-1559
  2,   1,   2,   3, // 1560-1563
  1,   2,   2, // 1564-1566
  1,   2,   3, // 1567-1569
  4,   2,   2,   2,   2, // 1570-1574
  3,   1,   2,   3, // 1575-1578
  1,   2,   2, // 1579-1581
  2,   1,   2,   2, // 1582-1585
  3,   1,   2,   2, // 1586-1589
  4,   2,   2, // 1590-1592
  1,   1,   1, // 1593-1595
  9,   7,   7,   7, // 1596-1599
  9,   7, // 1600-1601
  9, // 1602
  1, // 1603
  3,   2,   2, // 1604-1606
  3,   2, // 1607-1608
  4,   3,   2, // 1609-1611
  4,   1, // 1612-1613
  4,   1,   2, // 1614-1616
  3,   1,   2, // 1617-1619
  1,   2,   3, // 1620-1622
  1,   2,   2, // 1623-1625
  4,   2, // 1626-1627
  4,   2,   2, // 1628-1630
  4,   2,   2, // 1631-1633
  4,   2,   2, // 1634-1636
  3,   2, // 1637-1638
  3,   2,   2, // 1639-1641
  3,   2,   2, // 1642-1644
  4,   2, // 1645-1646
  4,   1, // 1647-1648
  3,   2,   2, // 1649-1651
  3,   2,   2, // 1652-1654
  3,   4,   2,   2,   2, // 1655-1659
  3,   1,   2, // 1660-1662
  2, // 1663
  4,   1,   1, // 1664-1666
  4,   1,   1,   2, // 1667-1670
  4,   4,   2,   1,   1, // 1671-1675
  3,   2,   2, // 1676-1678
  4,   4,   2,   2, // 1679-1682
  4,   2,   2, // 1683-1685
  3,   2, // 1686-1687
  3,   1,   1, // 1688-1690
  3,   1, // 1691-1692
  3,   2,   2,   2, // 1693-1696
  4,   2, // 1697-1698
  3,   2,   2,   2, // 1699-1702
  5,   1, // 1703-1704
  5,   1,   1, // 1705-1707
  4,   2, // 1708-1709
  5,   2,   1,   1, // 1710-1713
  4,   2,   1,   1, // 1714-1717
  4,   1,   1, // 1718-1720
  5,   1,   1, // 1721-1723
  5,   2,   1,   1, // 1724-1727
  5,   2,   1,   1,   2, // 1728-1732
  5,   5,   1, // 1733-1735
  4,   2,   2, // 1736-1738
  5,   5,   1,   1, // 1739-1742
  4,   2, // 1743-1744
  4,   1, // 1745-1746
  2,   2, // 1747-1748
  1, // 1749
  2,   1, // 1750-1751
  2, // 1752
  3,   2, // 1753-1754
  2,   2, // 1755-1756
  3,   1, // 1757-1758
  2,   1, // 1759-1760
  1,   2, // 1761-1762
  2,   2, // 1763-1764
  2,   1, // 1765-1766
  2, // 1767
  2,   2, // 1768-1769
  2,   1, // 1770-1771
  2, // 1772
  3,   2,   2, // 1773-1775
  1,   1,   2, // 1776-1778
  3,   2,   2, // 1779-1781
  1,   2,   2, // 1782-1784
  2,   3,   2, // 1785-1787
  3,   2,   2, // 1788-1790
  3,   2, // 1791-1792
  1,   2, // 1793-1794
  4,   3,   2,   1,   2, // 1795-1799
  4,   3,   2,   1,   2,   2, // 1800-1805
  4,   2, // 1806-1807
  4,   1, // 1808-1809
  4,   3,   3,   1,   2, // 1810-1814
  4,   3,   2,   2, // 1815-1818
  4,   2,   1,   2,   2, // 1819-1823
  4,   3,   2, // 1824-1826
  4,   1,   2,   2, // 1827-1830
  4,   1,   1,   2, // 1831-1834
  4,   2,   2, // 1835-1837
  4,   2,   1,   1,   2, // 1838-1842
  4,   3,   1,   1,   2, // 1843-1847
  1,   1,   2, // 1848-1850
  4,   2,   2,   2, // 1851-1854
  4,   2,   1,   2, // 1855-1858
  4,   2,   2,   2, // 1859-1862
  4,   2,   2,   1, // 1863-1866
  2,   2, // 1867-1868
  2,   3, // 1869-1870
  4,   2, // 1871-1872
  4,   1,   1, // 1873-1875
  4,   2,   2, // 1876-1878
  4,   2,   2, // 1879-1881
  3,   2,   1,   2,   2, // 1882-1886
  3,   3,   1,   2,   2, // 1887-1891
  3,   2,   1,   2,   3, // 1892-1896
  3,   3,   1,   2,   3, // 1897-1901
  3,   1,   2,   2,   3, // 1902-1906
  4,   1,   1, // 1907-1909
  4,   2, // 1910-1911
  2,   2,   2, // 1912-1914
  2,   1,   1,   2,   2, // 1915-1919
  3,   2,   2, // 1920-1922
  3,   1,   1,   2,   2, // 1923-1927
  2,   2,   3, // 1928-1930
  2,   1,   1,   2,   3, // 1931-1935
  3,   2,   3, // 1936-1938
  3,   1,   1,   2,   3, // 1939-1943
  1,   1,   2,   2, // 1944-1947
  1,   2,   2,   2, // 1948-1951
  1,   1,   2,   3, // 1952-1955
  1,   2,   2,   3, // 1956-1959
  4,   1,   1,   2, // 1960-1963
  4,   2,   1,   1,   2, // 1964-1968
  4,   2, // 1969-1970
  4,   2,   2,   2, // 1971-1974
  3,   2, // 1975-1976
  3,   2,   2, // 1977-1979
  3,   2, // 1980-1981
  3, // 1982
  3, // 1983
  1,   2, // 1984-1985
  2, // 1986
  1,   2, // 1987-1988
  4,   7,   1, // 1989-1991
  9,   2, // 1992-1993
  9,   2, // 1994-1995
  9,   1,   2, // 1996-1998
  9,   3,   1,   2, // 1999-2002
  9,   2,   1,   2, // 2003-2006
  9,   3,   2,   1,   2, // 2007-2011
  9,   3,   1,   2, // 2012-2015
  9,   1,   2, // 2016-2018
  9,   2,   1,   2, // 2019-2022
  9,   3,   2,   1,   2, // 2023-2027
  9,   3,   1,   2, // 2028-2031
  1,   2,   5, // 2032-2034
  2,   1,   2,   5, // 2035-2038
  3,   2,   1,   2,   5, // 2039-2043
  3,   1,   2,   5, // 2044-2047
  1,   2,   5, // 2048-2050
  2,   1,   2,   5, // 2051-2054
  3,   2,   1,   2,   5, // 2055-2059
  3,   1,   2,   5, // 2060-2063
  2,   1,   2,   7, // 2064-2067
  3,   2,   1,   2,   7, // 2068-2072
  7,   1,   2,   7, // 2073-2076
  3,   7,   1,   2,   7, // 2077-2081
  3,   1,   2,   7, // 2082-2085
  1,   2, // 2086-2087
  3,   1,   2, // 2088-2090
  9,   5,   5, // 2091-2093
  9,   7,   7,   7, // 2094-2097
  9,   9,   7,   7,   7, // 2098-2102
  9,   9,   7,   7, // 2103-2106
  9,   5,   5, // 2107-2109
  9,   5,   5, // 2110-2112
  9,   7,   5,   5, // 2113-2116
  9,   5,   5,   2, // 2117-2120
  9,   7,   2, // 2121-2123
  9,   7,   7,   2, // 2124-2127
  9,   5,   2, // 2128-2130
  9,   7,   5,   2, // 2131-2134
  9,   7,   5,   5, // 2135-2138
  9,   5,   5,   2, // 2139-2142
  9,   5, // 2143-2144
  9,   9,   5,   5,   2, // 2145-2149
  9,   5, // 2150-2151
  9,   5,   5, // 2152-2154
  9,   5,   5,   2, // 2155-2158
  9,   5,   2, // 2159-2161
  9,   7,   5,   2, // 2162-2165
  9,   5,   2, // 2166-2168
  9,   7,   5,   2, // 2169-2172
  1,   2,   7, // 2173-2175
  7,   1,   2,   7, // 2176-2179
  1,   2,   7, // 2180-2182
  7,   1,   2,   7, // 2183-2186
  3, // 2187
  9,   5,   2, // 2188-2190
  9,   7,   5,   5,   2, // 2191-2195
  9,   5,   5,   2, // 2196-2199
  9,   5,   2, // 2200-2202
  9,   7,   5,   2, // 2203-2206
  9,   5,   2,   2, // 2207-2210
  9,   7,   5,   2,   2, // 2211-2215
  9,   5,   2, // 2216-2218
  9,   7,   5,   2, // 2219-2222
  9,   3,   5,   2, // 2223-2226
  9,   3,   7,   5,   2, // 2227-2231
  9,   5,   2, // 2232-2234
  9,   7,   7, // 2235-2237
  9,   7, // 2238-2239
  1,   2,   7,   7, // 2240-2243
  7,   1,   2,   7,   7, // 2244-2248
  1,   2,   7,   7, // 2249-2252
  7,   1,   2,   7,   7, // 2253-2257
  9,   7,   7,   7, // 2258-2261
  9,   5, // 2262-2263
  9,   7,   5, // 2264-2266
  2, // 2267
  3,   2, // 2268-2269
  1,   2, // 2270-2271
  3,   1,   2, // 2272-2274
  2,   1,   2, // 2275-2277
  3,   2,   1,   2, // 2278-2281
  1, // 2282
  1,   2, // 2283-2284
  1, // 2285
  1, // 2286
  1,   1, // 2287-2288
  1, // 2289
  1,   1, // 2290-2291
  4,   2,   2, // 2292-2294
  1,   1,   1, // 2295-2297
  3,   2, // 2298-2299
  3,   2,   2,   2, // 2300-2303
  4,   3,   2,   2, // 2304-2307
  3,   2,   2, // 2308-2310
  4,   3,   2, // 2311-2313
  3,   2,   2, // 2314-2316
  3,   2,   2, // 2317-2319
  3,   2,   2, // 2320-2322
  3,   2,   2, // 2323-2325
  1,   1,   1, // 2326-2328
  2, // 2329
  2,   2, // 2330-2331
  2,   2, // 2332-2333
  4,   1,   2, // 2334-2336
  4,   2,   1,   2, // 2337-2340
  4,   1,   2, // 2341-2343
  4,   3,   1,   2, // 2344-2347
  1,   2,   2, // 2348-2350
  1,   2,   2, // 2351-2353
  3,   2,   1, // 2354-2356
  3,   3,   1, // 2357-2359
  2, // 2360
  3, // 2361
  4,   1, // 2362-2363
  3,   1, // 2364-2365
  3,   1, // 2366-2367
  4,   1,   2, // 2368-2370
  4,   1,   1, // 2371-2373
  4,   2,   1,   1, // 2374-2377
  4,   1,   1, // 2378-2380
  4,   2,   1,   1, // 2381-2384
  2, // 2385
  4,   3,   1,   2,   2, // 2386-2390
  9,   7,   7, // 2391-2393
  3,   1,   2,   2,   2, // 2394-2398
  3,   1,   2,   2, // 2399-2402
  2, // 2403
  9,   7,   7, // 2404-2406
  9,   1,   2, // 2407-2409
  1,   1,   1, // 2410-2412
  9,   2,   7, // 2413-2415
  1,   2,   7, // 2416-2418
  9,   2,   7,   7, // 2419-2422
  4,   2,   2, // 2423-2425
  2,   1,   2,   2, // 2426-2429
  2,   1,   2,   3, // 2430-2433
  1,   2,   2, // 2434-2436
  1,   2,   3, // 2437-2439
  4,   2,   2,   2,   2, // 2440-2444
  3,   1,   2,   3, // 2445-2448
  1,   2,   2, // 2449-2451
  2,   1,   2,   2, // 2452-2455
  3,   1,   2,   2, // 2456-2459
  3,   1,   2, // 2460-2462
  1,   1,   1, // 2463-2465
  9,   7,   7,   7, // 2466-2469
  9,   7, // 2470-2471
  9, // 2472
  1, // 2473
  3,   2,   2, // 2474-2476
  3,   2, // 2477-2478
  4,   3,   2, // 2479-2481
  4,   1, // 2482-2483
  4,   1,   2, // 2484-2486
  3,   1,   2, // 2487-2489
  1,   2,   3, // 2490-2492
  1,   2,   2, // 2493-2495
  4,   2, // 2496-2497
  4,   2,   2, // 2498-2500
  4,   2,   2, // 2501-2503
  4,   2,   2, // 2504-2506
  3,   2, // 2507-2508
  3,   2,   2, // 2509-2511
  3,   2,   2, // 2512-2514
  4,   2, // 2515-2516
  4,   1, // 2517-2518
  3,   2,   2, // 2519-2521
  3,   2,   2, // 2522-2524
  3,   4,   2,   2,   2, // 2525-2529
  3,   2,   2, // 2530-2532
  2, // 2533
  4,   1,   1, // 2534-2536
  4,   1,   1,   2, // 2537-2540
  4,   4,   2,   1,   1, // 2541-2545
  3,   2,   2, // 2546-2548
  4,   4,   2,   2, // 2549-2552
  4,   2,   2, // 2553-2555
  3,   2, // 2556-2557
  3,   2,   2, // 2558-2560
  3,   2, // 2561-2562
  3,   2,   2,   2, // 2563-2566
  4,   2, // 2567-2568
  3,   2,   2,   2, // 2569-2572
  5,   1, // 2573-2574
  5,   1,   1, // 2575-2577
  4,   2, // 2578-2579
  5,   2,   1,   1, // 2580-2583
  4,   2,   1,   1, // 2584-2587
  4,   1,   1, // 2588-2590
  5,   1,   1, // 2591-2593
  5,   2,   1,   1, // 2594-2597
  5,   2,   1,   1,   2, // 2598-2602
  5,   5,   1, // 2603-2605
  4,   2,   2, // 2606-2608
  5,   5,   1,   1, // 2609-2612
  4,   2, // 2613-2614
  4,   1, // 2615-2616
  2,   2, // 2617-2618
  1, // 2619
  2,   1, // 2620-2621
  2, // 2622
  3,   2, // 2623-2624
  2,   2, // 2625-2626
  3,   2, // 2627-2628
  2,   2, // 2629-2630
  2,   2, // 2631-2632
  2,   2, // 2633-2634
  2,   1, // 2635-2636
  2, // 2637
  2,   2, // 2638-2639
  2,   1, // 2640-2641
  2, // 2642
  3,   2,   2, // 2643-2645
  2,   2,   2, // 2646-2648
  3,   2,   2, // 2649-2651
  2,   2,   2, // 2652-2654
  2,   3,   2, // 2655-2657
  3,   2,   2, // 2658-2660
  3,   2, // 2661-2662
  2,   2, // 2663-2664
  4,   3,   2,   1,   2, // 2665-2669
  4,   3,   2,   1,   2,   2, // 2670-2675
  4,   2, // 2676-2677
  4,   1, // 2678-2679
  4,   4,   3,   1,   2, // 2680-2684
  4,   3,   2,   2, // 2685-2688
  4,   2,   1,   2,   2, // 2689-2693
  4,   3,   2, // 2694-2696
  4,   1,   2,   2, // 2697-2700
  4,   1,   1,   2, // 2701-2704
  4,   2,   2, // 2705-2707
  4,   2,   1,   1,   2, // 2708-2712
  4,   3,   1,   1,   2, // 2713-2717
  1,   1,   2, // 2718-2720
  4,   2,   2,   2, // 2721-2724
  4,   2,   1,   2, // 2725-2728
  4,   2,   2,   2, // 2729-2732
  4,   2,   2,   1, // 2733-2736
  2,   2, // 2737-2738
  2,   3, // 2739-2740
  4,   2, // 2741-2742
  4,   1,   1, // 2743-2745
  4,   2,   2, // 2746-2748
  4,   2,   2, // 2749-2751
  3,   2,   1,   2,   2, // 2752-2756
  4,   3,   1,   2,   1, // 2757-2761
  3,   2,   1,   2,   3, // 2762-2766
  4,   3,   1,   2,   3, // 2767-2771
  3,   1,   2,   2,   3, // 2772-2776
  4,   1,   1, // 2777-2779
  4,   2, // 2780-2781
  2,   2,   2, // 2782-2784
  2,   1,   1,   2,   2, // 2785-2789
  3,   2,   2, // 2790-2792
  3,   1,   1,   2,   2, // 2793-2797
  2,   2,   3, // 2798-2800
  2,   1,   1,   2,   3, // 2801-2805
  3,   2,   3, // 2806-2808
  3,   1,   1,   2,   3, // 2809-2813
  1,   1,   2,   2, // 2814-2817
  1,   2,   2,   2, // 2818-2821
  1,   1,   2,   3, // 2822-2825
  1,   2,   2,   3, // 2826-2829
  4,   1,   1,   2, // 2830-2833
  4,   2,   1,   1,   2, // 2834-2838
  4,   2, // 2839-2840
  4,   2,   2,   2, // 2841-2844
  3,   2, // 2845-2846
  3,   2,   2, // 2847-2849
  3,   2, // 2850-2851
  3, // 2852
  4, // 2853
  2,   2, // 2854-2855
  2, // 2856
  1,   2, // 2857-2858
  4,   7,   1, // 2859-2861
  9,   2, // 2862-2863
  9,   2, // 2864-2865
  9,   1,   2, // 2866-2868
  9,   3,   1,   2, // 2869-2872
  9,   2,   1,   2, // 2873-2876
  9,   3,   2,   1,   2, // 2877-2881
  9,   3,   1,   2, // 2882-2885
  9,   1,   2, // 2886-2888
  9,   2,   1,   2, // 2889-2892
  9,   3,   2,   1,   2, // 2893-2897
  9,   3,   1,   2, // 2898-2901
  1,   2,   5, // 2902-2904
  2,   1,   2,   5, // 2905-2908
  3,   2,   1,   2,   5, // 2909-2913
  3,   1,   2,   5, // 2914-2917
  1,   2,   5, // 2918-2920
  2,   1,   2,   5, // 2921-2924
  3,   2,   1,   2,   5, // 2925-2929
  3,   1,   2,   5, // 2930-2933
  2,   1,   2,   7, // 2934-2937
  3,   2,   1,   2,   7, // 2938-2942
  7,   1,   2,   7, // 2943-2946
  3,   7,   1,   2,   7, // 2947-2951
  3,   1,   2,   7, // 2952-2955
  1,   2, // 2956-2957
  3,   1,   2, // 2958-2960
  9,   5,   5, // 2961-2963
  9,   7,   7,   7, // 2964-2967
  9,   9,   7,   7,   7, // 2968-2972
  9,   9,   7,   7, // 2973-2976
  9,   5,   5, // 2977-2979
  9,   5,   5, // 2980-2982
  9,   7,   5,   5, // 2983-2986
  9,   5,   5,   2, // 2987-2990
  9,   7,   2, // 2991-2993
  9,   7,   7,   2, // 2994-2997
  9,   5,   2, // 2998-3000
  9,   7,   5,   2, // 3001-3004
  9,   7,   5,   5, // 3005-3008
  9,   5,   5,   2, // 3009-3012
  9,   5, // 3013-3014
  9,   9,   5,   5,   2, // 3015-3019
  9,   5, // 3020-3021
  9,   5,   5, // 3022-3024
  9,   5,   5,   2, // 3025-3028
  9,   5,   2, // 3029-3031
  9,   7,   5,   2, // 3032-3035
  9,   5,   2, // 3036-3038
  9,   7,   5,   2, // 3039-3042
  1,   2,   7, // 3043-3045
  7,   1,   2,   7, // 3046-3049
  1,   2,   7, // 3050-3052
  7,   1,   2,   7, // 3053-3056
  3, // 3057
  9,   5,   2, // 3058-3060
  9,   7,   5,   5,   2, // 3061-3065
  9,   5,   5,   2, // 3066-3069
  9,   5,   2, // 3070-3072
  9,   7,   5,   2, // 3073-3076
  9,   5,   2,   2, // 3077-3080
  9,   7,   5,   2,   2, // 3081-3085
  9,   5,   2, // 3086-3088
  9,   7,   5,   2, // 3089-3092
  9,   3,   5,   2, // 3093-3096
  9,   3,   7,   5,   2, // 3097-3101
  9,   5,   2, // 3102-3104
  9,   7,   7, // 3105-3107
  9,   7, // 3108-3109
  1,   2,   7,   7, // 3110-3113
  7,   1,   2,   7,   7, // 3114-3118
  1,   2,   7,   7, // 3119-3122
  7,   1,   2,   7,   7, // 3123-3127
  9,   7,   7,   7, // 3128-3131
  9,   5, // 3132-3133
  9,   7,   5, // 3134-3136
  2, // 3137
  3,   2, // 3138-3139
  1,   2, // 3140-3141
  3,   1,   2, // 3142-3144
  2,   1,   2, // 3145-3147
  3,   2,   1,   2, // 3148-3151
  1, // 3152
  1,   2, // 3153-3154
  1, // 3155
  1, // 3156
  1,   1, // 3157-3158
  1, // 3159
  1,   1, // 3160-3161
  4,   2,   2, // 3162-3164
  1,   1,   1, // 3165-3167
  3,   2, // 3168-3169
  3,   2,   2,   2, // 3170-3173
  4,   3,   2,   2, // 3174-3177
  3,   2,   2, // 3178-3180
  4,   3,   2, // 3181-3183
  3,   2,   2, // 3184-3186
  3,   2,   2, // 3187-3189
  3,   2,   2, // 3190-3192
  3,   2,   2, // 3193-3195
  1,   1,   1, // 3196-3198
  2, // 3199
  2,   2, // 3200-3201
  2,   2, // 3202-3203
  4,   1,   2, // 3204-3206
  4,   2,   1,   2, // 3207-3210
  4,   1,   2, // 3211-3213
  4,   3,   1,   2, // 3214-3217
  1,   2,   3, // 3218-3220
  1,   2,   2, // 3221-3223
  3,   2,   1, // 3224-3226
  3,   3,   1, // 3227-3229
  2, // 3230
  3, // 3231
  4,   1, // 3232-3233
  3,   1, // 3234-3235
  3,   1, // 3236-3237
  4,   1,   2, // 3238-3240
  4,   1,   1, // 3241-3243
  4,   2,   1,   1, // 3244-3247
  4,   1,   1, // 3248-3250
  4,   2,   1,   1, // 3251-3254
  2, // 3255
  4,   3,   1,   2,   2, // 3256-3260
  9,   7,   7, // 3261-3263
  3,   1,   2,   2,   3, // 3264-3268
  3,   1,   2,   3, // 3269-3272
  2, // 3273
  9,   7,   7, // 3274-3276
  9,   1,   2, // 3277-3279
  1,   1,   1, // 3280-3282
  9,   2,   7, // 3283-3285
  1,   2,   7, // 3286-3288
  9,   2,   7,   7, // 3289-3292
  4,   2,   2, // 3293-3295
  2,   1,   2,   3, // 3296-3299
  2,   1,   2,   3, // 3300-3303
  1,   2,   3, // 3304-3306
  1,   2,   3, // 3307-3309
  4,   2,   2,   2,   2, // 3310-3314
  3,   1,   2,   3, // 3315-3318
  1,   2,   2, // 3319-3321
  2,   1,   2,   2, // 3322-3325
  3,   1,   2,   2, // 3326-3329
  3,   1,   2, // 3330-3332
  1,   1,   1, // 3333-3335
  9,   7,   7,   7, // 3336-3339
  9,   7, // 3340-3341
  9, // 3342
  1, // 3343
  3,   2,   2, // 3344-3346
  3,   2, // 3347-3348
  4,   3,   2, // 3349-3351
  4,   1, // 3352-3353
  4,   1,   2, // 3354-3356
  3,   1,   2, // 3357-3359
  1,   2,   3, // 3360-3362
  1,   2,   2, // 3363-3365
  4,   2, // 3366-3367
  4,   2,   2, // 3368-3370
  4,   2,   2, // 3371-3373
  4,   2,   2, // 3374-3376
  3,   2, // 3377-3378
  4,   2,   2, // 3379-3381
  4,   2,   2, // 3382-3384
  4,   2, // 3385-3386
  4,   1, // 3387-3388
  4,   2,   2, // 3389-3391
  4,   2,   2, // 3392-3394
  3,   4,   2,   2,   2, // 3395-3399
  3,   2,   2, // 3400-3402
  2, // 3403
  4,   1,   1, // 3404-3406
  4,   1,   1,   2, // 3407-3410
  4,   4,   2,   1,   1, // 3411-3415
  3,   2,   2, // 3416-3418
  4,   4,   2,   2, // 3419-3422
  4,   2,   2, // 3423-3425
  3,   2, // 3426-3427
  3,   2,   2, // 3428-3430
  3,   2, // 3431-3432
  3,   2,   2,   2, // 3433-3436
  4,   2, // 3437-3438
  3,   2,   2,   2, // 3439-3442
  5,   1, // 3443-3444
  5,   1,   1, // 3445-3447
  4,   2, // 3448-3449
  5,   2,   1,   1, // 3450-3453
  4,   2,   1,   1, // 3454-3457
  4,   1,   1, // 3458-3460
  5,   1,   1, // 3461-3463
  5,   2,   1,   1, // 3464-3467
  5,   2,   1,   1,   2, // 3468-3472
  5,   5,   1, // 3473-3475
  4,   2,   2, // 3476-3478
  5,   5,   1,   1, // 3479-3482
  4,   2, // 3483-3484
  4,   1, // 3485-3486
  2,   2, // 3487-3488
  1, // 3489
  2,   1, // 3490-3491
  2, // 3492
  3,   2, // 3493-3494
  2,   2, // 3495-3496
  3,   2, // 3497-3498
  2,   2, // 3499-3500
  2,   2, // 3501-3502
  2,   2, // 3503-3504
  2,   1, // 3505-3506
  2, // 3507
  2,   2, // 3508-3509
  2,   1, // 3510-3511
  2, // 3512
  3,   3,   2, // 3513-3515
  2,   2,   2, // 3516-3518
  3,   2,   2, // 3519-3521
  2,   2,   2, // 3522-3524
  3,   3,   2, // 3525-3527
  3,   2,   2, // 3528-3530
  3,   2, // 3531-3532
  2,   2, // 3533-3534
  4,   3,   2,   1,   2, // 3535-3539
  4,   3,   2,   1,   2,   2, // 3540-3545
  4,   2, // 3546-3547
  4,   1, // 3548-3549
  4,   4,   3,   1,   2, // 3550-3554
  4,   3,   2,   2, // 3555-3558
  4,   2,   1,   2,   2, // 3559-3563
  4,   3,   2, // 3564-3566
  4,   1,   2,   2, // 3567-3570
  4,   1,   1,   2, // 3571-3574
  4,   2,   2, // 3575-3577
  4,   2,   1,   1,   2, // 3578-3582
  4,   3,   1,   1,   2, // 3583-3587
  1,   1,   2, // 3588-3590
  4,   2,   2,   2, // 3591-3594
  4,   2,   1,   2, // 3595-3598
  4,   2,   2,   2, // 3599-3602
  4,   2,   2,   1, // 3603-3606
  2,   3, // 3607-3608
  2,   3, // 3609-3610
  4,   2, // 3611-3612
  4,   1,   1, // 3613-3615
  4,   2,   2, // 3616-3618
  4,   2,   2, // 3619-3621
  3,   2,   1,   2,   3, // 3622-3626
  4,   3,   1,   2,   1, // 3627-3631
  3,   2,   1,   2,   3, // 3632-3636
  4,   3,   1,   2,   3, // 3637-3641
  3,   1,   2,   2,   3, // 3642-3646
  4,   1,   1, // 3647-3649
  4,   2, // 3650-3651
  2,   2,   3, // 3652-3654
  2,   1,   1,   2,   3, // 3655-3659
  3,   2,   3, // 3660-3662
  3,   1,   1,   2,   3, // 3663-3667
  2,   2,   3, // 3668-3670
  2,   1,   1,   2,   3, // 3671-3675
  3,   2,   3, // 3676-3678
  3,   1,   1,   2,   3, // 3679-3683
  1,   1,   2,   3, // 3684-3687
  1,   2,   2,   3, // 3688-3691
  1,   1,   2,   3, // 3692-3695
  1,   2,   2,   3, // 3696-3699
  4,   1,   1,   2, // 3700-3703
  4,   2,   1,   1,   2, // 3704-3708
  4,   2, // 3709-3710
  4,   2,   2,   2, // 3711-3714
  3,   2, // 3715-3716
  3,   2,   2, // 3717-3719
  3,   2, // 3720-3721
  3, // 3722
  4, // 3723
  2,   2, // 3724-3725
  2, // 3726
  1,   2, // 3727-3728
  4,   7,   1, // 3729-3731
  9,   2, // 3732-3733
  9,   2, // 3734-3735
  9,   1,   2, // 3736-3738
  9,   3,   1,   2, // 3739-3742
  9,   2,   1,   2, // 3743-3746
  9,   3,   2,   1,   2, // 3747-3751
  9,   3,   1,   2, // 3752-3755
  9,   1,   2, // 3756-3758
  9,   2,   1,   2, // 3759-3762
  9,   3,   2,   1,   2, // 3763-3767
  9,   3,   1,   2, // 3768-3771
  1,   2,   5, // 3772-3774
  2,   1,   2,   5, // 3775-3778
  3,   2,   1,   2,   5, // 3779-3783
  3,   1,   2,   5, // 3784-3787
  1,   2,   5, // 3788-3790
  2,   1,   2,   5, // 3791-3794
  3,   2,   1,   2,   5, // 3795-3799
  3,   1,   2,   5, // 3800-3803
  2,   1,   2,   7, // 3804-3807
  3,   2,   1,   2,   7, // 3808-3812
  7,   1,   2,   7, // 3813-3816
  3,   7,   1,   2,   7, // 3817-3821
  3,   1,   2,   7, // 3822-3825
  1,   2, // 3826-3827
  3,   1,   2, // 3828-3830
  9,   5,   5, // 3831-3833
  9,   7,   7,   7, // 3834-3837
  9,   9,   7,   7,   7, // 3838-3842
  9,   9,   7,   7, // 3843-3846
  9,   5,   5, // 3847-3849
  9,   5,   5, // 3850-3852
  9,   7,   5,   5, // 3853-3856
  9,   5,   5,   2, // 3857-3860
  9,   7,   2, // 3861-3863
  9,   7,   7,   2, // 3864-3867
  9,   5,   2, // 3868-3870
  9,   7,   5,   2, // 3871-3874
  9,   7,   5,   5, // 3875-3878
  9,   5,   5,   2, // 3879-3882
  9,   5, // 3883-3884
  9,   9,   5,   5,   2, // 3885-3889
  9,   5, // 3890-3891
  9,   5,   5, // 3892-3894
  9,   5,   5,   2, // 3895-3898
  9,   5,   2, // 3899-3901
  9,   7,   5,   2, // 3902-3905
  9,   5,   2, // 3906-3908
  9,   7,   5,   2, // 3909-3912
  1,   2,   7, // 3913-3915
  7,   1,   2,   7, // 3916-3919
  1,   2,   7, // 3920-3922
  7,   1,   2,   7, // 3923-3926
  3, // 3927
  9,   5,   2, // 3928-3930
  9,   7,   5,   5,   2, // 3931-3935
  9,   5,   5,   2, // 3936-3939
  9,   5,   2, // 3940-3942
  9,   7,   5,   2, // 3943-3946
  9,   5,   2,   2, // 3947-3950
  9,   7,   5,   2,   2, // 3951-3955
  9,   5,   2, // 3956-3958
  9,   7,   5,   2, // 3959-3962
  9,   3,   5,   2, // 3963-3966
  9,   3,   7,   5,   2, // 3967-3971
  9,   5,   2, // 3972-3974
  9,   7,   7, // 3975-3977
  9,   7, // 3978-3979
  1,   2,   7,   7, // 3980-3983
  7,   1,   2,   7,   7, // 3984-3988
  1,   2,   7,   7, // 3989-3992
  7,   1,   2,   7,   7, // 3993-3997
  9,   7,   7,   7, // 3998-4001
  9,   5, // 4002-4003
  9,   7,   5, // 4004-4006
  2, // 4007
  3,   2, // 4008-4009
  1,   2, // 4010-4011
  3,   1,   2, // 4012-4014
  2,   1,   2, // 4015-4017
  3,   2,   1,   2, // 4018-4021
  1, // 4022
  1,   2, // 4023-4024
  1, // 4025
  1, // 4026
  1,   1, // 4027-4028
  1, // 4029
  1,   1, // 4030-4031
  4,   2,   2, // 4032-4034
  1,   1,   1, // 4035-4037
  3,   2, // 4038-4039
  3,   2,   2,   2, // 4040-4043
  4,   3,   2,   2, // 4044-4047
  3,   2,   2, // 4048-4050
  4,   3,   2, // 4051-4053
  3,   2,   2, // 4054-4056
  3,   2,   2, // 4057-4059
  3,   2,   2, // 4060-4062
  3,   2,   2, // 4063-4065
  1,   1,   1, // 4066-4068
  2, // 4069
  2,   2, // 4070-4071
  2,   2, // 4072-4073
  4,   1,   2, // 4074-4076
  4,   2,   1,   2, // 4077-4080
  4,   1,   2, // 4081-4083
  4,   3,   1,   2, // 4084-4087
  1,   2,   3, // 4088-4090
  1,   2,   2, // 4091-4093
  3,   2,   1, // 4094-4096
  3,   3,   1, // 4097-4099
  2, // 4100
  3, // 4101
  4,   1, // 4102-4103
  3,   1, // 4104-4105
  3,   1, // 4106-4107
  4,   1,   2, // 4108-4110
  4,   1,   1, // 4111-4113
  4,   2,   1,   1, // 4114-4117
  4,   1,   1, // 4118-4120
  4,   2,   1,   1, // 4121-4124
  2, // 4125
  4,   3,   1,   2,   2, // 4126-4130
  9,   7,   7, // 4131-4133
  3,   1,   2,   2,   3, // 4134-4138
  3,   1,   2,   3, // 4139-4142
  2, // 4143
  9,   7,   7, // 4144-4146
  9,   1,   2, // 4147-4149
  1,   1,   1, // 4150-4152
  9,   2,   7, // 4153-4155
  1,   2,   7, // 4156-4158
  9,   2,   7,   7, // 4159-4162
  4,   2,   2, // 4163-4165
  2,   1,   2,   3, // 4166-4169
  2,   1,   2,   3, // 4170-4173
  1,   2,   3, // 4174-4176
  1,   2,   3, // 4177-4179
  4,   2,   2,   2,   2, // 4180-4184
  3,   1,   2,   3, // 4185-4188
  1,   2,   2, // 4189-4191
  2,   1,   2,   2, // 4192-4195
  3,   1,   2,   2, // 4196-4199
  3,   1,   2, // 4200-4202
  1,   1,   1, // 4203-4205
  9,   7,   7,   7, // 4206-4209
  9,   7, // 4210-4211
  9, // 4212
  1, // 4213
  3,   2,   2, // 4214-4216
  3,   2, // 4217-4218
  4,   3,   2, // 4219-4221
  4,   1, // 4222-4223
  4,   1,   2, // 4224-4226
  3,   1,   2, // 4227-4229
  1,   2,   3, // 4230-4232
  1,   2,   2, // 4233-4235
  4,   2, // 4236-4237
  4,   2,   2, // 4238-4240
  4,   2,   2, // 4241-4243
  4,   2,   2, // 4244-4246
  3,   2, // 4247-4248
  4,   2,   2, // 4249-4251
  4,   2,   2, // 4252-4254
  4,   2, // 4255-4256
  4,   1, // 4257-4258
  4,   2,   2, // 4259-4261
  4,   2,   2, // 4262-4264
  3,   4,   2,   2,   2, // 4265-4269
  3,   2,   2, // 4270-4272
  2, // 4273
  4,   1,   1, // 4274-4276
  4,   1,   1,   2, // 4277-4280
  4,   4,   2,   1,   1, // 4281-4285
  3,   2,   2, // 4286-4288
  4,   4,   2,   2, // 4289-4292
  4,   2,   2, // 4293-4295
  3,   2, // 4296-4297
  3,   2,   2, // 4298-4300
  3,   2, // 4301-4302
  3,   2,   2,   2, // 4303-4306
  4,   2, // 4307-4308
  3,   2,   2,   2, // 4309-4312
  5,   1, // 4313-4314
  5,   1,   1, // 4315-4317
  4,   2, // 4318-4319
  5,   2,   1,   1, // 4320-4323
  4,   2,   1,   1, // 4324-4327
  4,   1,   1, // 4328-4330
  5,   1,   1, // 4331-4333
  5,   2,   1,   1, // 4334-4337
  5,   2,   1,   1,   2, // 4338-4342
  5,   5,   1, // 4343-4345
  4,   2,   2, // 4346-4348
  5,   5,   1,   1, // 4349-4352
  4,   2, // 4353-4354
  4,   1, // 4355-4356
  2,   2, // 4357-4358
  1, // 4359
  2,   1, // 4360-4361
  2, // 4362
  3,   2, // 4363-4364
  2,   2, // 4365-4366
  3,   2, // 4367-4368
  2,   2, // 4369-4370
  2,   2, // 4371-4372
  2,   2, // 4373-4374
  2,   1, // 4375-4376
  2, // 4377
  2,   2, // 4378-4379
  2,   1, // 4380-4381
  2, // 4382
  3,   3,   2, // 4383-4385
  2,   2,   2, // 4386-4388
  3,   2,   2, // 4389-4391
  2,   2,   2, // 4392-4394
  3,   3,   2, // 4395-4397
  3,   2,   2, // 4398-4400
  3,   2, // 4401-4402
  2,   2, // 4403-4404
  4,   3,   2,   1,   2, // 4405-4409
  4,   3,   2,   1,   2,   2, // 4410-4415
  4,   2, // 4416-4417
  4,   1, // 4418-4419
  4,   4,   3,   1,   2, // 4420-4424
  4,   3,   2,   2, // 4425-4428
  4,   2,   1,   2,   2, // 4429-4433
  4,   3,   2, // 4434-4436
  4,   1,   2,   2, // 4437-4440
  4,   1,   1,   2, // 4441-4444
  4,   2,   2, // 4445-4447
  4,   2,   1,   1,   2, // 4448-4452
  4,   3,   1,   1,   2, // 4453-4457
  1,   1,   2, // 4458-4460
  4,   2,   2,   2, // 4461-4464
  4,   2,   1,   2, // 4465-4468
  4,   2,   2,   2, // 4469-4472
  4,   2,   2,   1, // 4473-4476
  2,   3, // 4477-4478
  2,   3, // 4479-4480
  4,   2, // 4481-4482
  4,   1,   1, // 4483-4485
  4,   2,   2, // 4486-4488
  4,   2,   2, // 4489-4491
  3,   2,   1,   2,   3, // 4492-4496
  4,   3,   1,   2,   1, // 4497-4501
  3,   2,   1,   2,   3, // 4502-4506
  4,   3,   1,   2,   3, // 4507-4511
  3,   1,   2,   2,   3, // 4512-4516
  4,   1,   1, // 4517-4519
  4,   2, // 4520-4521
  2,   2,   3, // 4522-4524
  2,   1,   1,   2,   3, // 4525-4529
  3,   2,   3, // 4530-4532
  3,   1,   1,   2,   3, // 4533-4537
  2,   2,   3, // 4538-4540
  2,   1,   1,   2,   3, // 4541-4545
  3,   2,   3, // 4546-4548
  3,   1,   1,   2,   3, // 4549-4553
  1,   1,   2,   3, // 4554-4557
  1,   2,   2,   3, // 4558-4561
  1,   1,   2,   3, // 4562-4565
  1,   2,   2,   3, // 4566-4569
  4,   1,   1,   2, // 4570-4573
  4,   2,   1,   1,   2, // 4574-4578
  4,   2, // 4579-4580
  4,   2,   2,   2, // 4581-4584
  3,   2, // 4585-4586
  3,   2,   2, // 4587-4589
  3,   2, // 4590-4591
  3, // 4592
  4, // 4593
  2,   2, // 4594-4595
  2, // 4596
  1,   2, // 4597-4598
  4,   7,   1, // 4599-4601
  9,   2, // 4602-4603
  9,   2, // 4604-4605
  9,   1,   2, // 4606-4608
  9,   3,   1,   2, // 4609-4612
  9,   2,   1,   2, // 4613-4616
  9,   3,   2,   1,   2, // 4617-4621
  9,   3,   1,   2, // 4622-4625
  9,   1,   2, // 4626-4628
  9,   2,   1,   2, // 4629-4632
  9,   3,   2,   1,   2, // 4633-4637
  9,   3,   1,   2, // 4638-4641
  1,   2,   5, // 4642-4644
  2,   1,   2,   5, // 4645-4648
  3,   2,   1,   2,   5, // 4649-4653
  3,   1,   2,   5, // 4654-4657
  1,   2,   5, // 4658-4660
  2,   1,   2,   5, // 4661-4664
  3,   2,   1,   2,   5, // 4665-4669
  3,   1,   2,   5, // 4670-4673
  2,   1,   2,   7, // 4674-4677
  3,   2,   1,   2,   7, // 4678-4682
  7,   1,   2,   7, // 4683-4686
  3,   7,   1,   2,   7, // 4687-4691
  3,   1,   2,   7, // 4692-4695
  1,   2, // 4696-4697
  3,   1,   2, // 4698-4700
  9,   5,   5, // 4701-4703
  9,   7,   7,   7, // 4704-4707
  9,   9,   7,   7,   7, // 4708-4712
  9,   9,   7,   7, // 4713-4716
  9,   5,   5, // 4717-4719
  9,   5,   5, // 4720-4722
  9,   7,   5,   5, // 4723-4726
  9,   5,   5,   2, // 4727-4730
  9,   7,   2, // 4731-4733
  9,   7,   7,   2, // 4734-4737
  9,   5,   2, // 4738-4740
  9,   7,   5,   2, // 4741-4744
  9,   7,   5,   5, // 4745-4748
  9,   5,   5,   2, // 4749-4752
  9,   5, // 4753-4754
  9,   9,   5,   5,   2, // 4755-4759
  9,   5, // 4760-4761
  9,   5,   5, // 4762-4764
  9,   5,   5,   2, // 4765-4768
  9,   5,   2, // 4769-4771
  9,   7,   5,   2, // 4772-4775
  9,   5,   2, // 4776-4778
  9,   7,   5,   2, // 4779-4782
  1,   2,   7, // 4783-4785
  7,   1,   2,   7, // 4786-4789
  1,   2,   7, // 4790-4792
  7,   1,   2,   7, // 4793-4796
  3, // 4797
  9,   5,   2, // 4798-4800
  9,   7,   5,   5,   2, // 4801-4805
  9,   5,   5,   2, // 4806-4809
  9,   5,   2, // 4810-4812
  9,   7,   5,   2, // 4813-4816
  9,   5,   2,   2, // 4817-4820
  9,   7,   5,   2,   2, // 4821-4825
  9,   5,   2, // 4826-4828
  9,   7,   5,   2, // 4829-4832
  9,   3,   5,   2, // 4833-4836
  9,   3,   7,   5,   2, // 4837-4841
  9,   5,   2, // 4842-4844
  9,   7,   7, // 4845-4847
  9,   7, // 4848-4849
  1,   2,   7,   7, // 4850-4853
  7,   1,   2,   7,   7, // 4854-4858
  1,   2,   7,   7, // 4859-4862
  7,   1,   2,   7,   7, // 4863-4867
  9,   7,   7,   7, // 4868-4871
  9,   5, // 4872-4873
  9,   7,   5, // 4874-4876
  2, // 4877
  3,   2, // 4878-4879
  1,   2, // 4880-4881
  3,   1,   2, // 4882-4884
  2,   1,   2, // 4885-4887
  3,   2,   1,   2, // 4888-4891
  1, // 4892
  1,   2, // 4893-4894
  1, // 4895
  1, // 4896
  1,   1, // 4897-4898
  1, // 4899
  1,   1, // 4900-4901
  4,   2,   2, // 4902-4904
  2,   1,   1, // 4905-4907
  3,   2, // 4908-4909
  3,   2,   2,   2, // 4910-4913
  4,   3,   2,   2, // 4914-4917
  3,   2,   2, // 4918-4920
  4,   3,   2, // 4921-4923
  3,   2,   2, // 4924-4926
  3,   2,   2, // 4927-4929
  3,   2,   2, // 4930-4932
  3,   2,   2, // 4933-4935
  2,   1,   1, // 4936-4938
  2, // 4939
  2,   2, // 4940-4941
  2,   2, // 4942-4943
  4,   1,   2, // 4944-4946
  4,   2,   1,   2, // 4947-4950
  4,   1,   2, // 4951-4953
  4,   3,   1,   2, // 4954-4957
  1,   2,   3, // 4958-4960
  1,   2,   2, // 4961-4963
  3,   2,   1, // 4964-4966
  3,   3,   1, // 4967-4969
  2, // 4970
  3, // 4971
  4,   1, // 4972-4973
  3,   1, // 4974-4975
  3,   1,   1, // 4976-4978
  4,   1,   2, // 4979-4981
  4,   1,   1, // 4982-4984
  4,   2,   1,   1, // 4985-4988
  4,   1,   1, // 4989-4991
  4,   2,   1,   1, // 4992-4995
  2, // 4996
  4,   3,   1,   2,   2, // 4997-5001
  9,   7,   7, // 5002-5004
  3,   1,   2,   2,   3, // 5005-5009
  3,   1,   2,   3, // 5010-5013
  2, // 5014
  9,   7,   7, // 5015-5017
  9,   1,   2, // 5018-5020
  2,   1,   1, // 5021-5023
  9,   2,   7, // 5024-5026
  1,   2,   7, // 5027-5029
  9,   2,   7,   7, // 5030-5033
  4,   2,   2, // 5034-5036
  2,   1,   2,   3, // 5037-5040
  2,   1,   2,   3, // 5041-5044
  1,   2,   3, // 5045-5047
  1,   2,   3, // 5048-5050
  4,   2,   2,   2,   2, // 5051-5055
  3,   1,   2,   3, // 5056-5059
  1,   2,   2, // 5060-5062
  2,   1,   2,   2, // 5063-5066
  3,   1,   2,   2, // 5067-5070
  3,   1,   2, // 5071-5073
  1,   1,   3,   3, // 5074-5077
  9,   7,   7,   7, // 5078-5081
  9,   7, // 5082-5083
  9, // 5084
  1, // 5085
  3,   2,   2, // 5086-5088
  3,   2, // 5089-5090
  4,   3,   2, // 5091-5093
  4,   1, // 5094-5095
  4,   1,   2, // 5096-5098
  3,   1,   2, // 5099-5101
  1,   2,   3, // 5102-5104
  1,   2,   2, // 5105-5107
  4,   2, // 5108-5109
  4,   2,   2, // 5110-5112
  4,   2,   2, // 5113-5115
  4,   2,   2, // 5116-5118
  3,   2, // 5119-5120
  4,   2,   2, // 5121-5123
  4,   2,   2, // 5124-5126
  4,   2, // 5127-5128
  4,   1, // 5129-5130
  4,   2,   2, // 5131-5133
  4,   2,   2, // 5134-5136
  3,   4,   2,   2,   2, // 5137-5141
  3,   2,   2, // 5142-5144
  2, // 5145
  4,   1,   1, // 5146-5148
  4,   1,   1,   2, // 5149-5152
  4,   4,   2,   1,   1, // 5153-5157
  3,   2,   2, // 5158-5160
  4,   4,   2,   2, // 5161-5164
  4,   2,   2, // 5165-5167
  3,   2, // 5168-5169
  3,   2,   2, // 5170-5172
  3,   2, // 5173-5174
  3,   2,   2,   2, // 5175-5178
  4,   2, // 5179-5180
  3,   2,   2,   2, // 5181-5184
  5,   1, // 5185-5186
  5,   1,   1, // 5187-5189
  4,   2, // 5190-5191
  5,   2,   1,   1, // 5192-5195
  4,   2,   1,   1, // 5196-5199
  4,   1,   1, // 5200-5202
  5,   1,   1, // 5203-5205
  5,   2,   1,   1, // 5206-5209
  5,   2,   1,   1,   2, // 5210-5214
  5,   5,   1, // 5215-5217
  4,   2,   2, // 5218-5220
  5,   5,   1,   1, // 5221-5224
  4,   2, // 5225-5226
  4,   1, // 5227-5228
  2,   2, // 5229-5230
  1, // 5231
  2,   1, // 5232-5233
  2, // 5234
  3,   2, // 5235-5236
  2,   2, // 5237-5238
  3,   2, // 5239-5240
  2,   2, // 5241-5242
  2,   2, // 5243-5244
  2,   2, // 5245-5246
  2,   1, // 5247-5248
  2, // 5249
  2,   2, // 5250-5251
  2,   1, // 5252-5253
  2, // 5254
  3,   3,   2, // 5255-5257
  2,   2,   2, // 5258-5260
  3,   2,   2, // 5261-5263
  2,   2,   2, // 5264-5266
  3,   3,   2, // 5267-5269
  3,   2,   2, // 5270-5272
  3,   2, // 5273-5274
  2,   2, // 5275-5276
  4,   3,   2,   1,   2, // 5277-5281
  4,   3,   2,   1,   2,   2, // 5282-5287
  4,   2, // 5288-5289
  4,   1, // 5290-5291
  4,   4,   3,   1,   2, // 5292-5296
  4,   3,   2,   2, // 5297-5300
  4,   2,   1,   2,   2, // 5301-5305
  4,   3,   2, // 5306-5308
  4,   1,   2,   2, // 5309-5312
  4,   1,   1,   2, // 5313-5316
  4,   2,   2, // 5317-5319
  4,   2,   1,   1,   2, // 5320-5324
  4,   3,   1,   1,   2, // 5325-5329
  1,   1,   2, // 5330-5332
  4,   2,   2,   2, // 5333-5336
  4,   2,   1,   2, // 5337-5340
  4,   2,   2,   2, // 5341-5344
  4,   2,   2,   1, // 5345-5348
  2,   3, // 5349-5350
  2,   3, // 5351-5352
  4,   2, // 5353-5354
  4,   1,   1, // 5355-5357
  4,   2,   2, // 5358-5360
  4,   2,   2, // 5361-5363
  3,   2,   1,   2,   3, // 5364-5368
  4,   3,   1,   2,   1, // 5369-5373
  3,   2,   1,   2,   3, // 5374-5378
  4,   3,   1,   2,   3, // 5379-5383
  3,   1,   2,   2,   3, // 5384-5388
  4,   1,   1, // 5389-5391
  4,   2, // 5392-5393
  2,   2,   3, // 5394-5396
  2,   1,   1,   2,   3, // 5397-5401
  3,   2,   3, // 5402-5404
  3,   1,   1,   2,   3, // 5405-5409
  2,   2,   3, // 5410-5412
  2,   1,   1,   2,   3, // 5413-5417
  3,   2,   3, // 5418-5420
  3,   1,   1,   2,   3, // 5421-5425
  1,   1,   2,   3, // 5426-5429
  1,   2,   2,   3, // 5430-5433
  1,   1,   2,   3, // 5434-5437
  1,   2,   2,   3, // 5438-5441
  4,   1,   1,   2, // 5442-5445
  4,   2,   1,   1,   2, // 5446-5450
  4,   2, // 5451-5452
  4,   2,   2,   2, // 5453-5456
  3,   2, // 5457-5458
  3,   2,   2, // 5459-5461
  3,   2, // 5462-5463
  3, // 5464
  4, // 5465
  2,   2, // 5466-5467
  2, // 5468
  1,   2, // 5469-5470
  4,   7,   1, // 5471-5473
  9,   2, // 5474-5475
  9,   2, // 5476-5477
  9,   1,   2, // 5478-5480
  9,   3,   1,   2, // 5481-5484
  9,   2,   1,   2, // 5485-5488
  9,   3,   2,   1,   2, // 5489-5493
  9,   3,   1,   2, // 5494-5497
  9,   1,   2, // 5498-5500
  9,   2,   1,   2, // 5501-5504
  9,   3,   2,   1,   2, // 5505-5509
  9,   3,   1,   2, // 5510-5513
  1,   2,   5, // 5514-5516
  2,   1,   2,   5, // 5517-5520
  3,   2,   1,   2,   5, // 5521-5525
  3,   1,   2,   5, // 5526-5529
  1,   2,   5, // 5530-5532
  2,   1,   2,   5, // 5533-5536
  3,   2,   1,   2,   5, // 5537-5541
  3,   1,   2,   5, // 5542-5545
  2,   1,   2,   7, // 5546-5549
  3,   2,   1,   2,   7, // 5550-5554
  7,   1,   2,   7, // 5555-5558
  3,   7,   1,   2,   7, // 5559-5563
  3,   1,   2,   7, // 5564-5567
  1,   2, // 5568-5569
  3,   1,   2, // 5570-5572
  9,   5,   5, // 5573-5575
  9,   7,   7,   7, // 5576-5579
  9,   9,   7,   7,   7, // 5580-5584
  9,   9,   7,   7, // 5585-5588
  9,   5,   5, // 5589-5591
  9,   5,   5, // 5592-5594
  9,   7,   5,   5, // 5595-5598
  9,   5,   5,   2, // 5599-5602
  9,   7,   2, // 5603-5605
  9,   7,   7,   2, // 5606-5609
  9,   5,   2, // 5610-5612
  9,   7,   5,   2, // 5613-5616
  9,   7,   5,   5, // 5617-5620
  9,   5,   5,   2, // 5621-5624
  9,   5, // 5625-5626
  9,   9,   5,   5,   2, // 5627-5631
  9,   5, // 5632-5633
  9,   5,   5, // 5634-5636
  9,   5,   5,   2, // 5637-5640
  9,   5,   2, // 5641-5643
  9,   7,   5,   2, // 5644-5647
  9,   5,   2, // 5648-5650
  9,   7,   5,   2, // 5651-5654
  1,   2,   7, // 5655-5657
  7,   1,   2,   7, // 5658-5661
  1,   2,   7, // 5662-5664
  7,   1,   2,   7, // 5665-5668
  3, // 5669
  9,   5,   2, // 5670-5672
  9,   7,   5,   5,   2, // 5673-5677
  9,   5,   5,   2, // 5678-5681
  9,   5,   2, // 5682-5684
  9,   7,   5,   2, // 5685-5688
  9,   5,   2,   2, // 5689-5692
  9,   7,   5,   2,   2, // 5693-5697
  9,   5,   2, // 5698-5700
  9,   7,   5,   2, // 5701-5704
  9,   3,   5,   2, // 5705-5708
  9,   3,   7,   5,   2, // 5709-5713
  9,   5,   2, // 5714-5716
  9,   7,   7, // 5717-5719
  9,   7, // 5720-5721
  1,   2,   7,   7, // 5722-5725
  7,   1,   2,   7,   7, // 5726-5730
  1,   2,   7,   7, // 5731-5734
  7,   1,   2,   7,   7, // 5735-5739
  9,   7,   7,   7, // 5740-5743
  9,   5, // 5744-5745
  9,   7,   5, // 5746-5748
  2, // 5749
  3,   2, // 5750-5751
  1,   2, // 5752-5753
  3,   1,   2, // 5754-5756
  2,   1,   2, // 5757-5759
  3,   2,   1,   2, // 5760-5763
  1, // 5764
  1,   2, // 5765-5766
  1, // 5767
  1, // 5768
  1,   1, // 5769-5770
  1, // 5771
  1,   1, // 5772-5773
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1-3
 0,  0,  0, // 4-6
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 7-8
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 9-12
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 13-16
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 17-19
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 20-22
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 23-25
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 26-28
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 29-31
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 32-34
 0,  0,  0, // 35-37
 0, // 38
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 39-40
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 41-42
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 43-45
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 46-49
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 50-52
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 53-56
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 57-59
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 60-62
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 63-65
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 66-68
HexagonItinerariesV60Bypass::Hex_FWD, // 69
HexagonItinerariesV60Bypass::Hex_FWD, // 70
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 71-72
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 73-74
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 75-76
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 77-79
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 80-82
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 83-86
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 87-89
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 90-93
HexagonItinerariesV60Bypass::Hex_FWD, // 94
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 95-99
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 100-102
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 103-107
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 108-111
HexagonItinerariesV60Bypass::Hex_FWD, // 112
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 113-115
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 116-118
 0,  0,  0, // 119-121
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 122-124
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 125-127
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 128-131
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 132-134
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 135-138
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 139-142
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 143-145
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 146-148
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 149-153
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 154-157
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 158-160
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 161-164
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 165-168
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 169-171
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 172-174
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD,  0, // 175-178
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 179-180
HexagonItinerariesV60Bypass::HVX_FWD, // 181
HexagonItinerariesV60Bypass::Hex_FWD, // 182
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 183-185
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 186-187
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 188-190
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 191-192
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 193-195
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 196-198
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 199-201
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 202-204
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 205-206
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 207-209
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 210-212
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 213-215
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 216-217
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 218-220
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 221-223
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 224-225
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 226-227
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 228-230
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 231-233
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 234-238
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 239-241
HexagonItinerariesV60Bypass::Hex_FWD, // 242
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 243-245
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 246-249
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 250-254
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 255-257
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 258-261
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 262-264
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 265-266
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 267-269
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 270-271
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 272-275
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 276-277
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 278-281
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 282-283
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 284-286
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 287-288
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 289-292
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 293-296
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 297-299
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 300-302
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 303-306
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 307-311
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 312-314
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 315-317
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 318-321
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 322-323
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 324-325
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 326-327
HexagonItinerariesV60Bypass::Hex_FWD, // 328
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 329-330
HexagonItinerariesV60Bypass::Hex_FWD, // 331
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 332-333
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 334-335
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 336-337
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 338-339
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 340-341
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 342-343
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 344-345
HexagonItinerariesV60Bypass::Hex_FWD, // 346
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 347-348
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 349-350
HexagonItinerariesV60Bypass::Hex_FWD, // 351
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 352-354
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 355-357
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 358-360
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 361-363
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 364-366
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 367-369
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 370-371
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 372-373
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 374-378
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 379-384
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 385-386
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 387-388
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 389-393
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 394-397
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 398-402
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 403-405
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 406-409
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 410-413
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 414-416
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 417-421
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 422-426
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 427-429
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 430-433
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 434-437
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 438-441
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 442-445
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 446-447
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 448-449
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 450-451
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 452-454
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 455-457
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 458-460
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 461-465
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 466-470
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 471-475
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 476-480
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 481-485
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 486-488
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 489-490
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 491-493
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 494-498
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 499-501
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 502-506
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 507-509
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 510-514
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 515-517
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 518-522
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 523-526
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 527-530
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 531-534
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 535-538
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 539-542
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 543-547
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 548-549
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 550-553
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 554-555
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 556-558
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 559-560
HexagonItinerariesV60Bypass::Hex_FWD, // 561
HexagonItinerariesV60Bypass::Hex_FWD, // 562
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 563-564
HexagonItinerariesV60Bypass::Hex_FWD, // 565
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 566-567
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 568-570
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 571-572
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 573-574
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 575-577
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 578-581
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 582-585
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 586-590
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 591-594
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 595-597
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 598-601
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 602-606
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 607-610
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 611-613
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 614-617
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 618-622
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 623-626
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 627-629
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 630-633
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 634-638
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 639-642
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 643-646
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 647-651
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 652-655
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 656-660
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 661-664
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 665-666
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 667-669
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 670-672
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 673-676
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 677-681
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 682-685
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 686-688
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 689-691
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 692-695
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 696-699
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 700-702
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 703-706
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 707-709
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 710-713
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 714-717
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 718-721
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 722-723
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 724-728
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 729-730
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 731-733
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 734-737
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 738-740
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 741-744
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 745-747
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 748-751
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 752-754
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 755-758
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 759-761
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 762-765
HexagonItinerariesV60Bypass::HVX_FWD, // 766
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 767-769
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 770-774
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 775-778
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 779-781
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 782-785
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 786-789
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 790-794
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 795-797
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 798-801
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 802-805
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 806-810
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 811-813
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 814-816
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 817-818
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 819-822
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 823-827
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 828-831
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 832-836
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 837-840
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 841-842
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 843-845
HexagonItinerariesV60Bypass::Hex_FWD, // 846
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 847-848
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 849-850
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 851-853
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 854-856
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 857-860
HexagonItinerariesV60Bypass::Hex_FWD, // 861
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 862-863
HexagonItinerariesV60Bypass::Hex_FWD, // 864
HexagonItinerariesV60Bypass::Hex_FWD, // 865
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 866-867
HexagonItinerariesV60Bypass::Hex_FWD, // 868
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 869-870
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 871-873
 0,  0,  0, // 874-876
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 877-878
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 879-882
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 883-886
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 887-889
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 890-892
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 893-895
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 896-898
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 899-901
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 902-904
 0,  0,  0, // 905-907
 0, // 908
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 909-910
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 911-912
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 913-915
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 916-919
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 920-922
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 923-926
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 927-929
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 930-932
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 933-935
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 936-938
HexagonItinerariesV55Bypass::Hex_FWD, // 939
HexagonItinerariesV55Bypass::Hex_FWD, // 940
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 941-942
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 943-944
 0,  0, // 945-946
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 947-949
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 950-952
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 953-956
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 957-959
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 960-963
HexagonItinerariesV55Bypass::Hex_FWD, // 964
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 965-969
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 970-974
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 975-978
HexagonItinerariesV55Bypass::Hex_FWD, // 979
 0,  0,  0, // 980-982
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 983-985
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 986-989
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 990-993
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 994-996
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 997-999
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1000-1004
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1005-1008
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1009-1011
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1012-1015
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1016-1019
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1020-1022
 0,  0,  0, // 1023-1025
HexagonItinerariesV55Bypass::Hex_FWD, // 1026
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1027-1029
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1030-1031
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1032-1034
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1035-1036
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1037-1039
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1040-1042
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1043-1045
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1046-1048
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1049-1050
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1051-1053
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1054-1056
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1057-1059
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1060-1061
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1062-1064
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1065-1067
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1068-1069
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1070-1071
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1072-1074
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1075-1077
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1078-1082
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1083-1085
HexagonItinerariesV55Bypass::Hex_FWD, // 1086
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1087-1089
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1090-1093
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1094-1098
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1099-1101
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1102-1105
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1106-1108
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1109-1110
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1111-1113
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1114-1115
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1116-1119
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1120-1121
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1122-1125
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1126-1127
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1128-1130
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1131-1132
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1133-1136
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1137-1140
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1141-1143
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1144-1146
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1147-1150
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1151-1155
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1156-1158
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1159-1161
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1162-1165
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1166-1167
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1168-1169
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1170-1171
HexagonItinerariesV55Bypass::Hex_FWD, // 1172
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1173-1174
HexagonItinerariesV55Bypass::Hex_FWD, // 1175
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1176-1177
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1178-1179
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1180-1181
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1182-1183
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1184-1185
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1186-1187
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1188-1189
HexagonItinerariesV55Bypass::Hex_FWD, // 1190
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1191-1192
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1193-1194
HexagonItinerariesV55Bypass::Hex_FWD, // 1195
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1196-1198
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1199-1201
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1202-1204
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1205-1207
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1208-1210
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1211-1213
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1214-1215
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1216-1217
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1218-1222
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1223-1228
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1229-1230
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1231-1232
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1233-1237
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1238-1241
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1242-1246
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1247-1249
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1250-1253
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1254-1257
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1258-1260
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1261-1265
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1266-1270
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1271-1273
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1274-1277
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1278-1281
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1282-1285
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1286-1289
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1290-1291
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1292-1293
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1294-1295
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1296-1298
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1299-1301
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1302-1304
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1305-1309
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1310-1314
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1315-1319
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1320-1324
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1325-1329
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1330-1332
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1333-1334
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1335-1337
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1338-1342
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1343-1345
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1346-1350
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1351-1353
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1354-1358
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1359-1361
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1362-1366
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1367-1370
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1371-1374
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1375-1378
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1379-1382
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1383-1386
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1387-1391
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1392-1393
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1394-1397
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1398-1399
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1400-1402
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1403-1404
HexagonItinerariesV55Bypass::Hex_FWD, // 1405
HexagonItinerariesV55Bypass::Hex_FWD, // 1406
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1407-1408
HexagonItinerariesV55Bypass::Hex_FWD, // 1409
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1410-1411
HexagonItinerariesV55Bypass::Hex_FWD, // 1412
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1413-1414
HexagonItinerariesV55Bypass::Hex_FWD, // 1415
HexagonItinerariesV55Bypass::Hex_FWD, // 1416
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1417-1418
HexagonItinerariesV55Bypass::Hex_FWD, // 1419
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1420-1421
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1422-1424
 0,  0,  0, // 1425-1427
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1428-1429
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1430-1433
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1434-1437
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1438-1440
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1441-1443
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1444-1446
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1447-1449
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1450-1452
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1453-1455
 0,  0,  0, // 1456-1458
 0, // 1459
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1460-1461
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1462-1463
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1464-1466
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1467-1470
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1471-1473
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1474-1477
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1478-1480
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1481-1483
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1484-1486
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1487-1489
HexagonItinerariesV62Bypass::Hex_FWD, // 1490
HexagonItinerariesV62Bypass::Hex_FWD, // 1491
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1492-1493
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1494-1495
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1496-1497
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1498-1500
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1501-1503
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1504-1507
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1508-1510
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1511-1514
HexagonItinerariesV62Bypass::Hex_FWD, // 1515
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1516-1520
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1521-1523
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1524-1528
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1529-1532
HexagonItinerariesV62Bypass::Hex_FWD, // 1533
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1534-1536
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1537-1539
 0,  0,  0, // 1540-1542
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1543-1545
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1546-1548
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1549-1552
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1553-1555
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1556-1559
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1560-1563
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1564-1566
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1567-1569
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1570-1574
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1575-1578
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1579-1581
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1582-1585
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1586-1589
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1590-1592
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1593-1595
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD,  0, // 1596-1599
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1600-1601
HexagonItinerariesV62Bypass::HVX_FWD, // 1602
HexagonItinerariesV62Bypass::Hex_FWD, // 1603
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1604-1606
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1607-1608
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1609-1611
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1612-1613
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1614-1616
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1617-1619
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1620-1622
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1623-1625
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1626-1627
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1628-1630
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1631-1633
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1634-1636
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1637-1638
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1639-1641
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1642-1644
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1645-1646
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1647-1648
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1649-1651
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1652-1654
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1655-1659
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1660-1662
HexagonItinerariesV62Bypass::Hex_FWD, // 1663
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1664-1666
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1667-1670
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1671-1675
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1676-1678
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1679-1682
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1683-1685
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1686-1687
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1688-1690
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1691-1692
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1693-1696
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1697-1698
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1699-1702
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1703-1704
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1705-1707
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1708-1709
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1710-1713
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1714-1717
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1718-1720
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1721-1723
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1724-1727
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1728-1732
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1733-1735
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1736-1738
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1739-1742
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1743-1744
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1745-1746
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1747-1748
HexagonItinerariesV62Bypass::Hex_FWD, // 1749
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1750-1751
HexagonItinerariesV62Bypass::Hex_FWD, // 1752
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1753-1754
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1755-1756
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1757-1758
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1759-1760
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1761-1762
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1763-1764
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1765-1766
HexagonItinerariesV62Bypass::Hex_FWD, // 1767
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1768-1769
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1770-1771
HexagonItinerariesV62Bypass::Hex_FWD, // 1772
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1773-1775
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1776-1778
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1779-1781
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1782-1784
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1785-1787
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1788-1790
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1791-1792
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1793-1794
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1795-1799
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1800-1805
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1806-1807
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1808-1809
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1810-1814
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1815-1818
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1819-1823
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1824-1826
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1827-1830
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1831-1834
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1835-1837
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1838-1842
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1843-1847
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1848-1850
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1851-1854
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1855-1858
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1859-1862
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1863-1866
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1867-1868
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1869-1870
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1871-1872
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1873-1875
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1876-1878
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1879-1881
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1882-1886
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1887-1891
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1892-1896
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1897-1901
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1902-1906
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1907-1909
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1910-1911
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1912-1914
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1915-1919
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1920-1922
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1923-1927
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1928-1930
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1931-1935
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1936-1938
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1939-1943
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1944-1947
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1948-1951
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1952-1955
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1956-1959
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1960-1963
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1964-1968
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1969-1970
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1971-1974
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1975-1976
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1977-1979
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1980-1981
HexagonItinerariesV62Bypass::Hex_FWD, // 1982
HexagonItinerariesV62Bypass::Hex_FWD, // 1983
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1984-1985
HexagonItinerariesV62Bypass::Hex_FWD, // 1986
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1987-1988
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1989-1991
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1992-1993
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1994-1995
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1996-1998
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1999-2002
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2003-2006
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2007-2011
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2012-2015
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2016-2018
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2019-2022
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2023-2027
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2028-2031
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2032-2034
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2035-2038
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2039-2043
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2044-2047
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2048-2050
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2051-2054
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2055-2059
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2060-2063
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2064-2067
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2068-2072
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2073-2076
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2077-2081
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2082-2085
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2086-2087
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2088-2090
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2091-2093
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2094-2097
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2098-2102
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2103-2106
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2107-2109
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2110-2112
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2113-2116
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2117-2120
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2121-2123
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2124-2127
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2128-2130
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2131-2134
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2135-2138
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2139-2142
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2143-2144
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2145-2149
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2150-2151
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2152-2154
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2155-2158
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2159-2161
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2162-2165
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2166-2168
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2169-2172
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2173-2175
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2176-2179
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2180-2182
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2183-2186
HexagonItinerariesV62Bypass::HVX_FWD, // 2187
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2188-2190
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2191-2195
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2196-2199
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2200-2202
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2203-2206
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2207-2210
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2211-2215
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2216-2218
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2219-2222
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2223-2226
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2227-2231
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2232-2234
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2235-2237
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2238-2239
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2240-2243
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2244-2248
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2249-2252
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2253-2257
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2258-2261
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2262-2263
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2264-2266
HexagonItinerariesV62Bypass::Hex_FWD, // 2267
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2268-2269
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2270-2271
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2272-2274
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2275-2277
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2278-2281
HexagonItinerariesV62Bypass::Hex_FWD, // 2282
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2283-2284
HexagonItinerariesV62Bypass::Hex_FWD, // 2285
HexagonItinerariesV62Bypass::Hex_FWD, // 2286
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2287-2288
HexagonItinerariesV62Bypass::Hex_FWD, // 2289
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2290-2291
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2292-2294
 0,  0,  0, // 2295-2297
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2298-2299
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2300-2303
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2304-2307
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2308-2310
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2311-2313
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2314-2316
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2317-2319
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2320-2322
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2323-2325
 0,  0,  0, // 2326-2328
 0, // 2329
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2330-2331
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2332-2333
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2334-2336
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2337-2340
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2341-2343
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2344-2347
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2348-2350
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2351-2353
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2354-2356
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2357-2359
HexagonItinerariesV65Bypass::Hex_FWD, // 2360
HexagonItinerariesV65Bypass::Hex_FWD, // 2361
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2362-2363
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2364-2365
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2366-2367
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2368-2370
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2371-2373
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2374-2377
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2378-2380
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2381-2384
HexagonItinerariesV65Bypass::Hex_FWD, // 2385
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2386-2390
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2391-2393
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2394-2398
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2399-2402
HexagonItinerariesV65Bypass::Hex_FWD, // 2403
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2404-2406
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2407-2409
 0,  0,  0, // 2410-2412
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2413-2415
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2416-2418
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2419-2422
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2423-2425
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2426-2429
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2430-2433
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2434-2436
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2437-2439
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2440-2444
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2445-2448
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2449-2451
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2452-2455
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2456-2459
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2460-2462
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2463-2465
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD,  0, // 2466-2469
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2470-2471
HexagonItinerariesV65Bypass::HVX_FWD, // 2472
HexagonItinerariesV65Bypass::Hex_FWD, // 2473
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2474-2476
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2477-2478
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2479-2481
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2482-2483
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2484-2486
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2487-2489
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2490-2492
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2493-2495
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2496-2497
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2498-2500
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2501-2503
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2504-2506
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2507-2508
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2509-2511
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2512-2514
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2515-2516
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2517-2518
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2519-2521
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2522-2524
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2525-2529
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2530-2532
HexagonItinerariesV65Bypass::Hex_FWD, // 2533
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2534-2536
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2537-2540
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2541-2545
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2546-2548
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2549-2552
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2553-2555
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2556-2557
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2558-2560
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2561-2562
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2563-2566
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2567-2568
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2569-2572
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2573-2574
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2575-2577
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2578-2579
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2580-2583
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2584-2587
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2588-2590
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2591-2593
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2594-2597
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2598-2602
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2603-2605
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2606-2608
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2609-2612
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2613-2614
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2615-2616
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2617-2618
HexagonItinerariesV65Bypass::Hex_FWD, // 2619
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2620-2621
HexagonItinerariesV65Bypass::Hex_FWD, // 2622
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2623-2624
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2625-2626
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2627-2628
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2629-2630
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2631-2632
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2633-2634
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2635-2636
HexagonItinerariesV65Bypass::Hex_FWD, // 2637
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2638-2639
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2640-2641
HexagonItinerariesV65Bypass::Hex_FWD, // 2642
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2643-2645
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2646-2648
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2649-2651
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2652-2654
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2655-2657
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2658-2660
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2661-2662
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2663-2664
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2665-2669
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2670-2675
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2676-2677
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2678-2679
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2680-2684
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2685-2688
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2689-2693
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2694-2696
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2697-2700
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2701-2704
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2705-2707
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2708-2712
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2713-2717
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2718-2720
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2721-2724
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2725-2728
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2729-2732
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2733-2736
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2737-2738
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2739-2740
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2741-2742
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2743-2745
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2746-2748
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2749-2751
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2752-2756
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2757-2761
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2762-2766
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2767-2771
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2772-2776
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2777-2779
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2780-2781
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2782-2784
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2785-2789
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2790-2792
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2793-2797
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2798-2800
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2801-2805
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2806-2808
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2809-2813
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2814-2817
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2818-2821
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2822-2825
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2826-2829
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2830-2833
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2834-2838
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2839-2840
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2841-2844
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2845-2846
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2847-2849
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2850-2851
HexagonItinerariesV65Bypass::Hex_FWD, // 2852
HexagonItinerariesV65Bypass::Hex_FWD, // 2853
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2854-2855
HexagonItinerariesV65Bypass::Hex_FWD, // 2856
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2857-2858
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2859-2861
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2862-2863
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2864-2865
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2866-2868
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2869-2872
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2873-2876
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2877-2881
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2882-2885
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2886-2888
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2889-2892
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2893-2897
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2898-2901
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2902-2904
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2905-2908
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2909-2913
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2914-2917
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2918-2920
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2921-2924
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2925-2929
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2930-2933
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2934-2937
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2938-2942
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2943-2946
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2947-2951
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2952-2955
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2956-2957
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2958-2960
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2961-2963
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2964-2967
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2968-2972
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2973-2976
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2977-2979
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2980-2982
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2983-2986
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2987-2990
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2991-2993
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2994-2997
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2998-3000
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3001-3004
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3005-3008
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3009-3012
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3013-3014
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3015-3019
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3020-3021
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3022-3024
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3025-3028
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3029-3031
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3032-3035
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3036-3038
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3039-3042
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3043-3045
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3046-3049
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3050-3052
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3053-3056
HexagonItinerariesV65Bypass::HVX_FWD, // 3057
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3058-3060
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3061-3065
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3066-3069
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3070-3072
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3073-3076
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3077-3080
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3081-3085
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3086-3088
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3089-3092
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3093-3096
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3097-3101
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3102-3104
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3105-3107
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3108-3109
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3110-3113
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3114-3118
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3119-3122
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3123-3127
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3128-3131
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3132-3133
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3134-3136
HexagonItinerariesV65Bypass::Hex_FWD, // 3137
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3138-3139
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3140-3141
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3142-3144
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3145-3147
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3148-3151
HexagonItinerariesV65Bypass::Hex_FWD, // 3152
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3153-3154
HexagonItinerariesV65Bypass::Hex_FWD, // 3155
HexagonItinerariesV65Bypass::Hex_FWD, // 3156
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3157-3158
HexagonItinerariesV65Bypass::Hex_FWD, // 3159
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3160-3161
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3162-3164
 0,  0,  0, // 3165-3167
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3168-3169
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3170-3173
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3174-3177
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3178-3180
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3181-3183
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3184-3186
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3187-3189
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3190-3192
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3193-3195
 0,  0,  0, // 3196-3198
 0, // 3199
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3200-3201
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3202-3203
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3204-3206
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3207-3210
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3211-3213
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3214-3217
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3218-3220
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3221-3223
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3224-3226
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3227-3229
HexagonItinerariesV66Bypass::Hex_FWD, // 3230
HexagonItinerariesV66Bypass::Hex_FWD, // 3231
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3232-3233
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3234-3235
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3236-3237
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3238-3240
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3241-3243
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3244-3247
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3248-3250
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3251-3254
HexagonItinerariesV66Bypass::Hex_FWD, // 3255
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3256-3260
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3261-3263
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3264-3268
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3269-3272
HexagonItinerariesV66Bypass::Hex_FWD, // 3273
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3274-3276
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3277-3279
 0,  0,  0, // 3280-3282
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3283-3285
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3286-3288
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3289-3292
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3293-3295
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3296-3299
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3300-3303
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3304-3306
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3307-3309
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3310-3314
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3315-3318
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3319-3321
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3322-3325
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3326-3329
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3330-3332
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3333-3335
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD,  0, // 3336-3339
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3340-3341
HexagonItinerariesV66Bypass::HVX_FWD, // 3342
HexagonItinerariesV66Bypass::Hex_FWD, // 3343
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3344-3346
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3347-3348
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3349-3351
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3352-3353
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3354-3356
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3357-3359
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3360-3362
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3363-3365
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3366-3367
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3368-3370
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3371-3373
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3374-3376
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3377-3378
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3379-3381
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3382-3384
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3385-3386
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3387-3388
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3389-3391
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3392-3394
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3395-3399
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3400-3402
HexagonItinerariesV66Bypass::Hex_FWD, // 3403
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3404-3406
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3407-3410
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3411-3415
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3416-3418
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3419-3422
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3423-3425
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3426-3427
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3428-3430
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3431-3432
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3433-3436
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3437-3438
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3439-3442
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3443-3444
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3445-3447
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3448-3449
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3450-3453
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3454-3457
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3458-3460
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3461-3463
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3464-3467
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3468-3472
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3473-3475
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3476-3478
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3479-3482
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3483-3484
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3485-3486
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3487-3488
HexagonItinerariesV66Bypass::Hex_FWD, // 3489
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3490-3491
HexagonItinerariesV66Bypass::Hex_FWD, // 3492
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3493-3494
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3495-3496
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3497-3498
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3499-3500
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3501-3502
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3503-3504
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3505-3506
HexagonItinerariesV66Bypass::Hex_FWD, // 3507
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3508-3509
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3510-3511
HexagonItinerariesV66Bypass::Hex_FWD, // 3512
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3513-3515
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3516-3518
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3519-3521
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3522-3524
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3525-3527
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3528-3530
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3531-3532
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3533-3534
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3535-3539
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3540-3545
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3546-3547
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3548-3549
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3550-3554
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3555-3558
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3559-3563
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3564-3566
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3567-3570
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3571-3574
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3575-3577
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3578-3582
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3583-3587
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3588-3590
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3591-3594
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3595-3598
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3599-3602
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3603-3606
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3607-3608
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3609-3610
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3611-3612
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3613-3615
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3616-3618
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3619-3621
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3622-3626
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3627-3631
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3632-3636
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3637-3641
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3642-3646
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3647-3649
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3650-3651
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3652-3654
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3655-3659
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3660-3662
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3663-3667
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3668-3670
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3671-3675
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3676-3678
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3679-3683
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3684-3687
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3688-3691
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3692-3695
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3696-3699
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3700-3703
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3704-3708
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3709-3710
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3711-3714
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3715-3716
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3717-3719
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3720-3721
HexagonItinerariesV66Bypass::Hex_FWD, // 3722
HexagonItinerariesV66Bypass::Hex_FWD, // 3723
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3724-3725
HexagonItinerariesV66Bypass::Hex_FWD, // 3726
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3727-3728
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3729-3731
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3732-3733
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3734-3735
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3736-3738
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3739-3742
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3743-3746
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3747-3751
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3752-3755
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3756-3758
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3759-3762
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3763-3767
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3768-3771
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3772-3774
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3775-3778
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3779-3783
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3784-3787
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3788-3790
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3791-3794
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3795-3799
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3800-3803
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3804-3807
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3808-3812
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3813-3816
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3817-3821
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3822-3825
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3826-3827
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3828-3830
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3831-3833
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3834-3837
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3838-3842
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3843-3846
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3847-3849
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3850-3852
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3853-3856
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3857-3860
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3861-3863
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3864-3867
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3868-3870
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3871-3874
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3875-3878
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3879-3882
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3883-3884
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3885-3889
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3890-3891
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3892-3894
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3895-3898
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3899-3901
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3902-3905
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3906-3908
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3909-3912
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3913-3915
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3916-3919
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3920-3922
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3923-3926
HexagonItinerariesV66Bypass::HVX_FWD, // 3927
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3928-3930
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3931-3935
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3936-3939
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3940-3942
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3943-3946
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3947-3950
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3951-3955
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3956-3958
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3959-3962
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3963-3966
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3967-3971
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3972-3974
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3975-3977
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3978-3979
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3980-3983
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3984-3988
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3989-3992
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3993-3997
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3998-4001
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4002-4003
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4004-4006
HexagonItinerariesV66Bypass::Hex_FWD, // 4007
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4008-4009
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4010-4011
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4012-4014
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4015-4017
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4018-4021
HexagonItinerariesV66Bypass::Hex_FWD, // 4022
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4023-4024
HexagonItinerariesV66Bypass::Hex_FWD, // 4025
HexagonItinerariesV66Bypass::Hex_FWD, // 4026
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4027-4028
HexagonItinerariesV66Bypass::Hex_FWD, // 4029
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4030-4031
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4032-4034
 0,  0,  0, // 4035-4037
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4038-4039
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4040-4043
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4044-4047
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4048-4050
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4051-4053
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4054-4056
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4057-4059
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4060-4062
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4063-4065
 0,  0,  0, // 4066-4068
 0, // 4069
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4070-4071
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4072-4073
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4074-4076
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4077-4080
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4081-4083
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4084-4087
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4088-4090
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4091-4093
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4094-4096
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4097-4099
HexagonItinerariesV67Bypass::Hex_FWD, // 4100
HexagonItinerariesV67Bypass::Hex_FWD, // 4101
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4102-4103
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4104-4105
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4106-4107
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4108-4110
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4111-4113
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4114-4117
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4118-4120
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4121-4124
HexagonItinerariesV67Bypass::Hex_FWD, // 4125
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4126-4130
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4131-4133
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4134-4138
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4139-4142
HexagonItinerariesV67Bypass::Hex_FWD, // 4143
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4144-4146
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4147-4149
 0,  0,  0, // 4150-4152
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4153-4155
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4156-4158
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4159-4162
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4163-4165
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4166-4169
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4170-4173
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4174-4176
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4177-4179
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4180-4184
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4185-4188
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4189-4191
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4192-4195
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4196-4199
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4200-4202
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4203-4205
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD,  0, // 4206-4209
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4210-4211
HexagonItinerariesV67Bypass::HVX_FWD, // 4212
HexagonItinerariesV67Bypass::Hex_FWD, // 4213
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4214-4216
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4217-4218
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4219-4221
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4222-4223
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4224-4226
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4227-4229
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4230-4232
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4233-4235
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4236-4237
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4238-4240
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4241-4243
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4244-4246
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4247-4248
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4249-4251
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4252-4254
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4255-4256
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4257-4258
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4259-4261
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4262-4264
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4265-4269
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4270-4272
HexagonItinerariesV67Bypass::Hex_FWD, // 4273
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4274-4276
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4277-4280
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4281-4285
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4286-4288
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4289-4292
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4293-4295
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4296-4297
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4298-4300
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4301-4302
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4303-4306
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4307-4308
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4309-4312
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4313-4314
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4315-4317
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4318-4319
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4320-4323
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4324-4327
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4328-4330
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4331-4333
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4334-4337
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4338-4342
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4343-4345
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4346-4348
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4349-4352
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4353-4354
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4355-4356
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4357-4358
HexagonItinerariesV67Bypass::Hex_FWD, // 4359
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4360-4361
HexagonItinerariesV67Bypass::Hex_FWD, // 4362
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4363-4364
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4365-4366
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4367-4368
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4369-4370
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4371-4372
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4373-4374
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4375-4376
HexagonItinerariesV67Bypass::Hex_FWD, // 4377
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4378-4379
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4380-4381
HexagonItinerariesV67Bypass::Hex_FWD, // 4382
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4383-4385
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4386-4388
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4389-4391
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4392-4394
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4395-4397
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4398-4400
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4401-4402
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4403-4404
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4405-4409
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4410-4415
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4416-4417
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4418-4419
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4420-4424
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4425-4428
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4429-4433
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4434-4436
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4437-4440
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4441-4444
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4445-4447
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4448-4452
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4453-4457
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4458-4460
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4461-4464
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4465-4468
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4469-4472
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4473-4476
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4477-4478
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4479-4480
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4481-4482
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4483-4485
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4486-4488
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4489-4491
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4492-4496
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4497-4501
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4502-4506
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4507-4511
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4512-4516
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4517-4519
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4520-4521
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4522-4524
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4525-4529
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4530-4532
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4533-4537
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4538-4540
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4541-4545
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4546-4548
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4549-4553
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4554-4557
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4558-4561
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4562-4565
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4566-4569
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4570-4573
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4574-4578
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4579-4580
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4581-4584
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4585-4586
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4587-4589
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4590-4591
HexagonItinerariesV67Bypass::Hex_FWD, // 4592
HexagonItinerariesV67Bypass::Hex_FWD, // 4593
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4594-4595
HexagonItinerariesV67Bypass::Hex_FWD, // 4596
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4597-4598
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4599-4601
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4602-4603
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4604-4605
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4606-4608
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4609-4612
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4613-4616
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4617-4621
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4622-4625
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4626-4628
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4629-4632
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4633-4637
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4638-4641
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4642-4644
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4645-4648
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4649-4653
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4654-4657
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4658-4660
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4661-4664
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4665-4669
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4670-4673
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4674-4677
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4678-4682
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4683-4686
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4687-4691
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4692-4695
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4696-4697
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4698-4700
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4701-4703
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4704-4707
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4708-4712
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4713-4716
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4717-4719
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4720-4722
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4723-4726
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4727-4730
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4731-4733
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4734-4737
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4738-4740
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4741-4744
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4745-4748
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4749-4752
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4753-4754
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4755-4759
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4760-4761
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4762-4764
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4765-4768
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4769-4771
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4772-4775
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4776-4778
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4779-4782
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4783-4785
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4786-4789
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4790-4792
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4793-4796
HexagonItinerariesV67Bypass::HVX_FWD, // 4797
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4798-4800
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4801-4805
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4806-4809
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4810-4812
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4813-4816
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4817-4820
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4821-4825
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4826-4828
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4829-4832
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4833-4836
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4837-4841
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4842-4844
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4845-4847
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4848-4849
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4850-4853
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4854-4858
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4859-4862
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4863-4867
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4868-4871
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4872-4873
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4874-4876
HexagonItinerariesV67Bypass::Hex_FWD, // 4877
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4878-4879
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4880-4881
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4882-4884
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4885-4887
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4888-4891
HexagonItinerariesV67Bypass::Hex_FWD, // 4892
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4893-4894
HexagonItinerariesV67Bypass::Hex_FWD, // 4895
HexagonItinerariesV67Bypass::Hex_FWD, // 4896
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4897-4898
HexagonItinerariesV67Bypass::Hex_FWD, // 4899
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4900-4901
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4902-4904
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4905-4907
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4908-4909
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4910-4913
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4914-4917
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4918-4920
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4921-4923
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4924-4926
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4927-4929
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4930-4932
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4933-4935
 0,  0,  0, // 4936-4938
 0, // 4939
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4940-4941
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4942-4943
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4944-4946
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4947-4950
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4951-4953
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4954-4957
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4958-4960
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4961-4963
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4964-4966
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4967-4969
HexagonItinerariesV67TBypass::Hex_FWD, // 4970
HexagonItinerariesV67TBypass::Hex_FWD, // 4971
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4972-4973
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4974-4975
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4976-4978
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4979-4981
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4982-4984
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4985-4988
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4989-4991
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4992-4995
HexagonItinerariesV67TBypass::Hex_FWD, // 4996
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4997-5001
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5002-5004
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5005-5009
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5010-5013
HexagonItinerariesV67TBypass::Hex_FWD, // 5014
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5015-5017
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5018-5020
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5021-5023
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5024-5026
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5027-5029
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5030-5033
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5034-5036
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5037-5040
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5041-5044
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5045-5047
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5048-5050
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5051-5055
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5056-5059
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5060-5062
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5063-5066
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5067-5070
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5071-5073
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD,  0,  0, // 5074-5077
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD,  0, // 5078-5081
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5082-5083
HexagonItinerariesV67TBypass::HVX_FWD, // 5084
HexagonItinerariesV67TBypass::Hex_FWD, // 5085
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5086-5088
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5089-5090
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5091-5093
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5094-5095
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5096-5098
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5099-5101
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5102-5104
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5105-5107
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5108-5109
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5110-5112
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5113-5115
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5116-5118
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5119-5120
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5121-5123
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5124-5126
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5127-5128
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5129-5130
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5131-5133
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5134-5136
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5137-5141
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5142-5144
HexagonItinerariesV67TBypass::Hex_FWD, // 5145
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5146-5148
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5149-5152
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5153-5157
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5158-5160
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5161-5164
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5165-5167
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5168-5169
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5170-5172
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5173-5174
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5175-5178
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5179-5180
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5181-5184
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5185-5186
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5187-5189
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5190-5191
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5192-5195
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5196-5199
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5200-5202
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5203-5205
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5206-5209
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5210-5214
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5215-5217
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5218-5220
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5221-5224
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5225-5226
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5227-5228
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5229-5230
HexagonItinerariesV67TBypass::Hex_FWD, // 5231
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5232-5233
HexagonItinerariesV67TBypass::Hex_FWD, // 5234
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5235-5236
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5237-5238
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5239-5240
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5241-5242
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5243-5244
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5245-5246
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5247-5248
HexagonItinerariesV67TBypass::Hex_FWD, // 5249
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5250-5251
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5252-5253
HexagonItinerariesV67TBypass::Hex_FWD, // 5254
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5255-5257
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5258-5260
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5261-5263
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5264-5266
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5267-5269
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5270-5272
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5273-5274
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5275-5276
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5277-5281
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5282-5287
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5288-5289
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5290-5291
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5292-5296
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5297-5300
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5301-5305
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5306-5308
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5309-5312
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5313-5316
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5317-5319
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5320-5324
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5325-5329
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5330-5332
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5333-5336
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5337-5340
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5341-5344
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5345-5348
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5349-5350
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5351-5352
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5353-5354
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5355-5357
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5358-5360
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5361-5363
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5364-5368
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5369-5373
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5374-5378
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5379-5383
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5384-5388
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5389-5391
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5392-5393
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5394-5396
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5397-5401
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5402-5404
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5405-5409
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5410-5412
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5413-5417
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5418-5420
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5421-5425
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5426-5429
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5430-5433
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5434-5437
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5438-5441
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5442-5445
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5446-5450
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5451-5452
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5453-5456
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5457-5458
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5459-5461
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5462-5463
HexagonItinerariesV67TBypass::Hex_FWD, // 5464
HexagonItinerariesV67TBypass::Hex_FWD, // 5465
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5466-5467
HexagonItinerariesV67TBypass::Hex_FWD, // 5468
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5469-5470
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5471-5473
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5474-5475
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5476-5477
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5478-5480
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5481-5484
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5485-5488
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5489-5493
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5494-5497
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5498-5500
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5501-5504
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5505-5509
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5510-5513
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5514-5516
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5517-5520
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5521-5525
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5526-5529
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5530-5532
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5533-5536
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5537-5541
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5542-5545
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5546-5549
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5550-5554
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5555-5558
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5559-5563
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5564-5567
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5568-5569
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5570-5572
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5573-5575
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5576-5579
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5580-5584
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5585-5588
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5589-5591
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5592-5594
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5595-5598
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5599-5602
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5603-5605
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5606-5609
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5610-5612
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5613-5616
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5617-5620
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5621-5624
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5625-5626
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5627-5631
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5632-5633
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5634-5636
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5637-5640
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5641-5643
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5644-5647
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5648-5650
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5651-5654
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5655-5657
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5658-5661
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5662-5664
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5665-5668
HexagonItinerariesV67TBypass::HVX_FWD, // 5669
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5670-5672
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5673-5677
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5678-5681
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5682-5684
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5685-5688
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5689-5692
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5693-5697
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5698-5700
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5701-5704
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5705-5708
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5709-5713
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5714-5716
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5717-5719
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5720-5721
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5722-5725
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5726-5730
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5731-5734
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5735-5739
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5740-5743
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5744-5745
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5746-5748
HexagonItinerariesV67TBypass::Hex_FWD, // 5749
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5750-5751
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5752-5753
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5754-5756
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5757-5759
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5760-5763
HexagonItinerariesV67TBypass::Hex_FWD, // 5764
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5765-5766
HexagonItinerariesV67TBypass::Hex_FWD, // 5767
HexagonItinerariesV67TBypass::Hex_FWD, // 5768
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5769-5770
HexagonItinerariesV67TBypass::Hex_FWD, // 5771
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5772-5773
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV60[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 1, 4 }, // 1 tc_01d44cb2
  { 1, 2, 3, 4, 7 }, // 2 PSEUDO
  { 1, 2, 3, 7, 9 }, // 3 tc_c57d9f39
  { 1, 2, 3, 9, 13 }, // 4 tc_1c2c7a4a
  { 1, 2, 3, 13, 17 }, // 5 tc_442395f3
  { 1, 2, 3, 17, 20 }, // 6 tc_713b66bf
  { 1, 2, 3, 20, 23 }, // 7 tc_86173609
  { 1, 1, 2, 23, 26 }, // 8 tc_5da50c4b
  { 1, 1, 2, 26, 29 }, // 9 tc_4a55d03c
  { 1, 2, 3, 29, 32 }, // 10 tc_d33e5eee
  { 1, 1, 2, 32, 35 }, // 11 tc_651cbe02
  { 1, 3, 4, 35, 38 }, // 12 DUPLEX
  { 1, 4, 5, 38, 39 }, // 13 tc_ENDLOOP
  { 1, 2, 3, 0, 0 }, // 14 tc_23708a21
  { 1, 1, 2, 39, 41 }, // 15 tc_56a124a7
  { 1, 5, 6, 41, 43 }, // 16 tc_2f573607
  { 1, 5, 6, 43, 46 }, // 17 tc_53c851ab
  { 1, 6, 7, 46, 50 }, // 18 tc_fedb7e19
  { 1, 6, 7, 50, 53 }, // 19 tc_4222e6bf
  { 1, 6, 7, 53, 57 }, // 20 tc_075c8dd8
  { 1, 3, 4, 57, 60 }, // 21 tc_9bcfb2ee
  { 1, 3, 4, 60, 63 }, // 22 tc_158aa3f7
  { 1, 3, 4, 63, 66 }, // 23 tc_df5d53f9
  { 1, 3, 4, 66, 69 }, // 24 tc_14ab4f41
  { 1, 3, 4, 69, 70 }, // 25 tc_f38f92e1
  { 1, 3, 4, 70, 71 }, // 26 tc_1981450d
  { 1, 6, 7, 71, 73 }, // 27 tc_e9170fb7
  { 1, 3, 4, 73, 75 }, // 28 tc_40d64c94
  { 1, 6, 7, 75, 77 }, // 29 LD_tc_ld_SLOT01
  { 1, 1, 2, 77, 80 }, // 30 tc_38382228
  { 1, 1, 2, 80, 83 }, // 31 tc_c21d7447
  { 1, 1, 2, 83, 87 }, // 32 tc_7f8ae742
  { 1, 7, 8, 87, 90 }, // 33 tc_5a4b5e58
  { 1, 7, 8, 90, 94 }, // 34 tc_197dce51
  { 1, 1, 2, 94, 95 }, // 35 tc_44fffc58
  { 1, 6, 7, 95, 100 }, // 36 tc_5ceb2f9e
  { 1, 8, 10, 100, 103 }, // 37 tc_56c4f9fe
  { 1, 6, 7, 103, 108 }, // 38 tc_b4dc7630
  { 1, 6, 7, 108, 112 }, // 39 tc_a2b365d2
  { 1, 5, 6, 112, 113 }, // 40 tc_60e324ff
  { 1, 10, 12, 113, 116 }, // 41 tc_db5555f3
  { 1, 12, 15, 116, 119 }, // 42 tc_c0749f3c
  { 1, 15, 17, 119, 122 }, // 43 PSEUDOM
  { 1, 8, 10, 122, 125 }, // 44 tc_3aacf4a8
  { 1, 17, 20, 125, 128 }, // 45 tc_c5dba46e
  { 1, 10, 12, 128, 132 }, // 46 tc_af25efd9
  { 1, 1, 2, 132, 135 }, // 47 tc_0dfac0a7
  { 1, 6, 7, 135, 139 }, // 48 tc_8035e91f
  { 1, 3, 4, 139, 143 }, // 49 tc_011e0e9d
  { 1, 6, 7, 143, 146 }, // 50 tc_ae5babd7
  { 1, 3, 4, 146, 149 }, // 51 tc_5deb5e47
  { 1, 1, 2, 149, 154 }, // 52 tc_bb831a7c
  { 1, 3, 4, 154, 158 }, // 53 tc_92240447
  { 1, 6, 7, 158, 161 }, // 54 tc_7c31e19a
  { 1, 6, 7, 161, 165 }, // 55 tc_d03278fd
  { 1, 6, 7, 165, 169 }, // 56 tc_65cbd974
  { 1, 3, 4, 169, 172 }, // 57 tc_934753bb
  { 1, 6, 7, 172, 175 }, // 58 ST_tc_st_SLOT01
  { 1, 20, 22, 175, 179 }, // 59 CVI_VA
  { 1, 8, 10, 179, 181 }, // 60 tc_0ec46cf9
  { 1, 10, 12, 181, 182 }, // 61 tc_718b5c53
  { 1, 22, 26, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 3, 4, 182, 183 }, // 63 tc_d45ba9cd
  { 1, 2, 3, 183, 186 }, // 64 tc_388f9897
  { 1, 2, 3, 186, 188 }, // 65 tc_9124c04f
  { 1, 2, 3, 188, 191 }, // 66 tc_4ac61d92
  { 1, 6, 7, 191, 193 }, // 67 tc_aee6250c
  { 1, 6, 7, 193, 196 }, // 68 tc_eed07714
  { 1, 6, 7, 196, 199 }, // 69 tc_74a42bda
  { 1, 6, 7, 199, 202 }, // 70 tc_a9edeffa
  { 1, 6, 7, 202, 205 }, // 71 tc_838c4d7a
  { 1, 1, 2, 205, 207 }, // 72 tc_d61dfdc3
  { 1, 1, 2, 207, 210 }, // 73 tc_8a825db2
  { 1, 1, 2, 210, 213 }, // 74 tc_f34c1c21
  { 1, 2, 3, 213, 216 }, // 75 tc_95a33176
  { 1, 1, 2, 216, 218 }, // 76 tc_9f6cd987
  { 1, 2, 3, 0, 0 }, // 77 tc_b837298f
  { 1, 2, 3, 218, 221 }, // 78 tc_8b5bd4f5
  { 1, 2, 3, 221, 224 }, // 79 tc_84a7500d
  { 1, 7, 8, 224, 226 }, // 80 tc_7476d766
  { 1, 7, 8, 226, 228 }, // 81 tc_49fdfd4b
  { 1, 1, 2, 228, 231 }, // 82 tc_f098b237
  { 1, 1, 2, 231, 234 }, // 83 tc_20131976
  { 1, 1, 2, 234, 239 }, // 84 tc_1d41f8b7
  { 1, 1, 2, 239, 242 }, // 85 tc_a1297125
  { 1, 2, 3, 242, 243 }, // 86 tc_112d30d6
  { 1, 1, 2, 243, 246 }, // 87 tc_d68dca5c
  { 1, 1, 2, 246, 250 }, // 88 tc_788b1d09
  { 1, 1, 2, 250, 255 }, // 89 tc_38e0bae9
  { 1, 1, 2, 255, 258 }, // 90 tc_407e96f9
  { 1, 1, 2, 258, 262 }, // 91 tc_7401744f
  { 1, 1, 2, 262, 265 }, // 92 tc_9b3c0462
  { 1, 1, 2, 265, 267 }, // 93 tc_151bf368
  { 1, 2, 3, 267, 270 }, // 94 tc_9c52f549
  { 1, 1, 2, 270, 272 }, // 95 tc_55b33fda
  { 1, 1, 2, 272, 276 }, // 96 tc_6fc5dbea
  { 1, 7, 8, 276, 278 }, // 97 tc_3edca78f
  { 1, 1, 2, 278, 282 }, // 98 tc_a7a13fac
  { 1, 1, 2, 282, 284 }, // 99 tc_9783714b
  { 1, 1, 2, 284, 287 }, // 100 tc_f0e8e832
  { 1, 1, 2, 287, 289 }, // 101 tc_65279839
  { 1, 1, 2, 289, 293 }, // 102 tc_0a195f2c
  { 1, 1, 2, 293, 297 }, // 103 tc_01e1be3b
  { 1, 1, 2, 297, 300 }, // 104 tc_556f6577
  { 1, 1, 2, 300, 303 }, // 105 tc_02fe1c65
  { 1, 1, 2, 303, 307 }, // 106 tc_9e72dc89
  { 1, 1, 2, 307, 312 }, // 107 tc_9edb7c77
  { 1, 1, 2, 312, 315 }, // 108 tc_7f7f45f5
  { 1, 1, 2, 315, 318 }, // 109 tc_c20701f0
  { 1, 1, 2, 318, 322 }, // 110 tc_f7569068
  { 1, 7, 8, 322, 324 }, // 111 tc_fae9dfa5
  { 1, 7, 8, 324, 326 }, // 112 tc_6ae3426b
  { 1, 1, 2, 326, 328 }, // 113 tc_69bfb303
  { 1, 5, 6, 328, 329 }, // 114 tc_362b0be2
  { 1, 5, 6, 329, 331 }, // 115 tc_dc51281d
  { 1, 1, 2, 331, 332 }, // 116 tc_decdde8a
  { 1, 1, 2, 332, 334 }, // 117 tc_eeda4109
  { 1, 1, 2, 334, 336 }, // 118 tc_711c805f
  { 1, 5, 6, 336, 338 }, // 119 tc_ed03645c
  { 1, 5, 6, 338, 340 }, // 120 tc_42ff66ba
  { 1, 7, 8, 340, 342 }, // 121 tc_57a55b54
  { 1, 7, 8, 342, 344 }, // 122 tc_1248597c
  { 1, 7, 8, 344, 346 }, // 123 tc_9406230a
  { 1, 5, 6, 346, 347 }, // 124 tc_d57d649c
  { 1, 7, 8, 347, 349 }, // 125 tc_4abdbdc6
  { 1, 7, 8, 349, 351 }, // 126 tc_6d861a95
  { 1, 5, 6, 351, 352 }, // 127 tc_45f9d1be
  { 1, 3, 4, 352, 355 }, // 128 tc_24e109c7
  { 1, 1, 2, 355, 358 }, // 129 tc_9e27f2f9
  { 1, 3, 4, 358, 361 }, // 130 tc_f6e2aff9
  { 1, 1, 2, 361, 364 }, // 131 tc_24f426ab
  { 1, 3, 4, 364, 367 }, // 132 tc_975a4e54
  { 1, 1, 2, 367, 370 }, // 133 tc_5502c366
  { 1, 3, 4, 370, 372 }, // 134 tc_7b9187d3
  { 1, 1, 2, 372, 374 }, // 135 tc_f999c66e
  { 1, 6, 7, 374, 379 }, // 136 tc_1c7522a8
  { 1, 6, 7, 379, 385 }, // 137 tc_76bb5435
  { 1, 6, 7, 385, 387 }, // 138 tc_8a6d0d94
  { 1, 3, 4, 387, 389 }, // 139 tc_64b00d8a
  { 1, 6, 7, 389, 394 }, // 140 tc_5f2afaf7
  { 1, 6, 7, 394, 398 }, // 141 tc_ac65613f
  { 1, 6, 7, 398, 403 }, // 142 tc_a32e03e7
  { 1, 6, 7, 403, 406 }, // 143 tc_822c3c68
  { 1, 6, 7, 406, 410 }, // 144 tc_abfd9a6d
  { 1, 6, 7, 410, 414 }, // 145 tc_bf2ffc0f
  { 1, 6, 7, 414, 417 }, // 146 tc_7c6d32e4
  { 1, 6, 7, 417, 422 }, // 147 tc_45791fb8
  { 1, 6, 7, 422, 427 }, // 148 tc_b7c4062a
  { 1, 6, 7, 427, 430 }, // 149 tc_5944960d
  { 1, 1, 2, 430, 434 }, // 150 tc_2c13e7f5
  { 1, 1, 2, 434, 438 }, // 151 tc_a154b476
  { 1, 1, 2, 438, 442 }, // 152 tc_a4e22bbd
  { 1, 1, 2, 442, 446 }, // 153 tc_503ce0f3
  { 1, 6, 7, 446, 448 }, // 154 tc_0655b949
  { 1, 3, 4, 448, 450 }, // 155 tc_6e20402a
  { 1, 1, 2, 450, 452 }, // 156 tc_a7bdb22c
  { 1, 1, 2, 452, 455 }, // 157 tc_db596beb
  { 1, 1, 2, 455, 458 }, // 158 tc_a08b630b
  { 1, 1, 2, 458, 461 }, // 159 tc_1fcb8495
  { 1, 6, 7, 461, 466 }, // 160 tc_9edefe01
  { 1, 6, 7, 466, 471 }, // 161 tc_449acf79
  { 1, 3, 4, 471, 476 }, // 162 tc_ce59038e
  { 1, 3, 4, 476, 481 }, // 163 tc_f529831b
  { 1, 3, 4, 481, 486 }, // 164 tc_addc37a8
  { 1, 3, 4, 486, 489 }, // 165 tc_6f42bc60
  { 1, 1, 2, 489, 491 }, // 166 tc_e3d699e3
  { 1, 6, 7, 491, 494 }, // 167 tc_ba9255a6
  { 1, 6, 7, 494, 499 }, // 168 tc_1fe4ab69
  { 1, 6, 7, 499, 502 }, // 169 tc_bb07f2c5
  { 1, 6, 7, 502, 507 }, // 170 tc_8e82e8ca
  { 1, 3, 4, 507, 510 }, // 171 tc_cfa0e29b
  { 1, 3, 4, 510, 515 }, // 172 tc_0a6c20ae
  { 1, 3, 4, 515, 518 }, // 173 tc_0fac1eb8
  { 1, 3, 4, 518, 523 }, // 174 tc_829d8a86
  { 1, 6, 7, 523, 527 }, // 175 tc_280f7fe1
  { 1, 6, 7, 527, 531 }, // 176 tc_887d1bb7
  { 1, 3, 4, 531, 535 }, // 177 tc_96ef76ef
  { 1, 3, 4, 535, 539 }, // 178 tc_55a9a350
  { 1, 1, 2, 539, 543 }, // 179 tc_f0cdeccf
  { 1, 1, 2, 543, 548 }, // 180 tc_a38c45dc
  { 1, 1, 2, 548, 550 }, // 181 tc_d3632d88
  { 1, 1, 2, 550, 554 }, // 182 tc_5e4cf0e8
  { 1, 1, 2, 554, 556 }, // 183 tc_ef921005
  { 1, 6, 7, 556, 559 }, // 184 tc_5b347363
  { 1, 6, 7, 559, 561 }, // 185 tc_3d14a17b
  { 1, 6, 7, 561, 562 }, // 186 tc_3fbf1042
  { 1, 6, 7, 562, 563 }, // 187 tc_63567288
  { 1, 6, 7, 563, 565 }, // 188 tc_59a7822c
  { 1, 6, 7, 0, 0 }, // 189 tc_937dd41c
  { 1, 3, 4, 0, 0 }, // 190 tc_a4ee89db
  { 1, 3, 4, 0, 0 }, // 191 tc_c818ff7f
  { 1, 3, 4, 565, 566 }, // 192 tc_1242dc2a
  { 1, 6, 7, 566, 568 }, // 193 tc_44d5a428
  { 1, 26, 28, 568, 571 }, // 194 tc_540c3da3
  { 1, 28, 30, 571, 573 }, // 195 tc_c4edf264
  { 1, 30, 32, 573, 575 }, // 196 tc_5bf8afbb
  { 1, 32, 36, 575, 578 }, // 197 tc_a7e6707d
  { 1, 32, 36, 578, 582 }, // 198 tc_3c56e5ce
  { 1, 12, 15, 582, 586 }, // 199 tc_abe8c3b2
  { 1, 12, 15, 586, 591 }, // 200 tc_453fe68d
  { 1, 12, 15, 591, 595 }, // 201 tc_1ba8a0cd
  { 1, 36, 38, 595, 598 }, // 202 tc_52447ecc
  { 1, 36, 38, 598, 602 }, // 203 tc_3904b926
  { 1, 36, 38, 602, 607 }, // 204 tc_b9db8205
  { 1, 36, 38, 607, 611 }, // 205 tc_663c80a7
  { 1, 38, 42, 611, 614 }, // 206 tc_f21e8abb
  { 1, 38, 42, 614, 618 }, // 207 tc_131f1c81
  { 1, 38, 42, 618, 623 }, // 208 tc_c7039829
  { 1, 38, 42, 623, 627 }, // 209 tc_e2d2e9e5
  { 1, 42, 44, 627, 630 }, // 210 tc_ab23f776
  { 1, 42, 44, 630, 634 }, // 211 tc_7177e272
  { 1, 42, 44, 634, 639 }, // 212 tc_e99d4c2e
  { 1, 42, 44, 639, 643 }, // 213 tc_6942b6e0
  { 1, 17, 20, 643, 647 }, // 214 tc_a02a10a8
  { 1, 17, 20, 647, 652 }, // 215 tc_54a0dc47
  { 1, 17, 20, 652, 656 }, // 216 tc_447d9895
  { 1, 17, 20, 656, 661 }, // 217 tc_191381c1
  { 1, 17, 20, 661, 665 }, // 218 tc_3e2aaafc
  { 1, 42, 44, 665, 667 }, // 219 tc_3ce09744
  { 1, 42, 44, 667, 670 }, // 220 tc_20a4bbec
  { 1, 28, 30, 670, 673 }, // 221 tc_c127de3a
  { 1, 8, 10, 673, 677 }, // 222 tc_257f6f7c
  { 1, 8, 10, 677, 682 }, // 223 tc_7e6a3e89
  { 1, 8, 10, 682, 686 }, // 224 tc_e35c1e93
  { 1, 44, 46, 686, 689 }, // 225 tc_05ca8cfd
  { 1, 46, 48, 689, 692 }, // 226 tc_d8287c14
  { 1, 46, 48, 692, 696 }, // 227 tc_08a4f1b6
  { 1, 30, 32, 696, 700 }, // 228 tc_56e64202
  { 1, 28, 30, 700, 703 }, // 229 tc_ac4046bc
  { 1, 28, 30, 703, 707 }, // 230 tc_2e8f5f6e
  { 1, 44, 46, 707, 710 }, // 231 tc_7417e785
  { 1, 44, 46, 710, 714 }, // 232 tc_309dbb4f
  { 1, 48, 50, 714, 718 }, // 233 tc_df80eeb0
  { 1, 44, 46, 718, 722 }, // 234 tc_16ff9ef8
  { 1, 44, 46, 722, 724 }, // 235 tc_51d0ecc3
  { 1, 48, 50, 724, 729 }, // 236 tc_561aaa58
  { 1, 30, 32, 729, 731 }, // 237 tc_946013d8
  { 1, 30, 32, 731, 734 }, // 238 tc_46d6c3e0
  { 1, 48, 50, 734, 738 }, // 239 tc_87adc037
  { 1, 28, 30, 738, 741 }, // 240 tc_649072c2
  { 1, 28, 30, 741, 745 }, // 241 tc_b091f1c6
  { 1, 46, 48, 745, 748 }, // 242 tc_0b04c6c7
  { 1, 46, 48, 748, 752 }, // 243 tc_660769f1
  { 1, 50, 53, 752, 755 }, // 244 tc_e8797b98
  { 1, 50, 53, 755, 759 }, // 245 tc_05ac6f98
  { 1, 53, 56, 759, 762 }, // 246 tc_05058f6f
  { 1, 53, 56, 762, 766 }, // 247 tc_fd7610da
  { 1, 56, 58, 0, 0 }, // 248 tc_1381a97c
  { 1, 56, 58, 766, 767 }, // 249 tc_e3f68a46
  { 1, 58, 60, 767, 770 }, // 250 tc_f1de44ef
  { 1, 48, 50, 770, 775 }, // 251 tc_9d1dc972
  { 1, 58, 60, 775, 779 }, // 252 tc_90bcc1db
  { 1, 60, 63, 779, 782 }, // 253 tc_cd94bfe0
  { 1, 60, 63, 782, 786 }, // 254 tc_15fdf750
  { 1, 46, 48, 786, 790 }, // 255 tc_1ad8a370
  { 1, 46, 48, 790, 795 }, // 256 tc_e675c45a
  { 1, 63, 65, 795, 798 }, // 257 tc_61bf7c03
  { 1, 63, 65, 798, 802 }, // 258 tc_933f2b39
  { 1, 63, 65, 802, 806 }, // 259 tc_26a377fe
  { 1, 63, 65, 806, 811 }, // 260 tc_2d4051cd
  { 1, 30, 32, 811, 814 }, // 261 tc_6e7fa133
  { 1, 44, 46, 814, 817 }, // 262 tc_8772086c
  { 1, 10, 12, 817, 819 }, // 263 tc_b4416217
  { 1, 17, 20, 819, 823 }, // 264 tc_9f363d21
  { 1, 17, 20, 823, 828 }, // 265 tc_8e420e4d
  { 1, 65, 68, 828, 832 }, // 266 tc_7273323b
  { 1, 65, 68, 832, 837 }, // 267 tc_58d21193
  { 1, 10, 12, 837, 841 }, // 268 tc_71646d06
  { 1, 48, 50, 841, 843 }, // 269 tc_04da405a
  { 1, 48, 50, 843, 846 }, // 270 tc_2c745bb8
  { 1, 56, 58, 846, 847 }, // 271 tc_b28e51aa
  { 1, 56, 58, 847, 849 }, // 272 tc_767c4e9d
  { 1, 68, 70, 849, 851 }, // 273 tc_e699ae41
  { 1, 68, 70, 851, 854 }, // 274 tc_a0dbea28
  { 1, 68, 70, 854, 857 }, // 275 tc_dd5b0695
  { 1, 68, 70, 857, 861 }, // 276 tc_3ad719fb
  { 1, 3, 4, 0, 0 }, // 277 tc_77f94a5e
  { 1, 7, 8, 0, 0 }, // 278 tc_55255f2b
  { 1, 3, 4, 861, 862 }, // 279 tc_b1ae5f67
  { 1, 3, 4, 862, 864 }, // 280 tc_2237d952
  { 1, 5, 6, 864, 865 }, // 281 tc_0ba0d5da
  { 1, 5, 6, 0, 0 }, // 282 tc_9b34f5e0
  { 1, 7, 8, 865, 866 }, // 283 tc_d7718fbe
  { 1, 3, 4, 866, 868 }, // 284 tc_a3070909
  { 1, 7, 8, 868, 869 }, // 285 tc_2c3e17fc
  { 1, 7, 8, 869, 871 }, // 286 tc_28e55c6f
  { 0, 0, 0, 0, 0 }, // 287 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV5[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 70, 71, 0, 0 }, // 1 tc_01d44cb2
  { 1, 71, 72, 0, 0 }, // 2 PSEUDO
  { 1, 71, 72, 0, 0 }, // 3 tc_c57d9f39
  { 1, 71, 72, 0, 0 }, // 4 tc_1c2c7a4a
  { 1, 71, 72, 0, 0 }, // 5 tc_442395f3
  { 1, 71, 72, 0, 0 }, // 6 tc_713b66bf
  { 1, 71, 72, 0, 0 }, // 7 tc_86173609
  { 1, 70, 71, 0, 0 }, // 8 tc_5da50c4b
  { 1, 70, 71, 0, 0 }, // 9 tc_4a55d03c
  { 1, 71, 72, 0, 0 }, // 10 tc_d33e5eee
  { 1, 70, 71, 0, 0 }, // 11 tc_651cbe02
  { 1, 72, 73, 0, 0 }, // 12 DUPLEX
  { 1, 73, 74, 0, 0 }, // 13 tc_ENDLOOP
  { 1, 71, 72, 0, 0 }, // 14 tc_23708a21
  { 1, 70, 71, 0, 0 }, // 15 tc_56a124a7
  { 1, 74, 75, 0, 0 }, // 16 tc_2f573607
  { 1, 74, 75, 0, 0 }, // 17 tc_53c851ab
  { 1, 75, 76, 0, 0 }, // 18 tc_fedb7e19
  { 1, 75, 76, 0, 0 }, // 19 tc_4222e6bf
  { 1, 75, 76, 0, 0 }, // 20 tc_075c8dd8
  { 1, 72, 73, 0, 0 }, // 21 tc_9bcfb2ee
  { 1, 72, 73, 0, 0 }, // 22 tc_158aa3f7
  { 1, 72, 73, 0, 0 }, // 23 tc_df5d53f9
  { 1, 72, 73, 0, 0 }, // 24 tc_14ab4f41
  { 1, 72, 73, 0, 0 }, // 25 tc_f38f92e1
  { 1, 72, 73, 0, 0 }, // 26 tc_1981450d
  { 1, 75, 76, 0, 0 }, // 27 tc_e9170fb7
  { 1, 72, 73, 0, 0 }, // 28 tc_40d64c94
  { 1, 75, 76, 0, 0 }, // 29 LD_tc_ld_SLOT01
  { 1, 70, 71, 0, 0 }, // 30 tc_38382228
  { 1, 70, 71, 0, 0 }, // 31 tc_c21d7447
  { 1, 70, 71, 0, 0 }, // 32 tc_7f8ae742
  { 1, 76, 77, 0, 0 }, // 33 tc_5a4b5e58
  { 1, 76, 77, 0, 0 }, // 34 tc_197dce51
  { 1, 70, 71, 0, 0 }, // 35 tc_44fffc58
  { 1, 75, 76, 0, 0 }, // 36 tc_5ceb2f9e
  { 0, 0, 0, 0, 0 }, // 37 tc_56c4f9fe
  { 1, 75, 76, 0, 0 }, // 38 tc_b4dc7630
  { 1, 75, 76, 0, 0 }, // 39 tc_a2b365d2
  { 1, 74, 75, 0, 0 }, // 40 tc_60e324ff
  { 0, 0, 0, 0, 0 }, // 41 tc_db5555f3
  { 0, 0, 0, 0, 0 }, // 42 tc_c0749f3c
  { 1, 77, 79, 0, 0 }, // 43 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 44 tc_3aacf4a8
  { 0, 0, 0, 0, 0 }, // 45 tc_c5dba46e
  { 0, 0, 0, 0, 0 }, // 46 tc_af25efd9
  { 1, 70, 71, 0, 0 }, // 47 tc_0dfac0a7
  { 1, 75, 76, 0, 0 }, // 48 tc_8035e91f
  { 1, 72, 73, 0, 0 }, // 49 tc_011e0e9d
  { 1, 75, 76, 0, 0 }, // 50 tc_ae5babd7
  { 1, 72, 73, 0, 0 }, // 51 tc_5deb5e47
  { 1, 70, 71, 0, 0 }, // 52 tc_bb831a7c
  { 1, 72, 73, 0, 0 }, // 53 tc_92240447
  { 1, 75, 76, 0, 0 }, // 54 tc_7c31e19a
  { 1, 75, 76, 0, 0 }, // 55 tc_d03278fd
  { 1, 75, 76, 0, 0 }, // 56 tc_65cbd974
  { 1, 72, 73, 0, 0 }, // 57 tc_934753bb
  { 1, 75, 76, 0, 0 }, // 58 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 59 CVI_VA
  { 0, 0, 0, 0, 0 }, // 60 tc_0ec46cf9
  { 0, 0, 0, 0, 0 }, // 61 tc_718b5c53
  { 0, 0, 0, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 72, 73, 0, 0 }, // 63 tc_d45ba9cd
  { 1, 71, 72, 0, 0 }, // 64 tc_388f9897
  { 1, 71, 72, 0, 0 }, // 65 tc_9124c04f
  { 1, 71, 72, 0, 0 }, // 66 tc_4ac61d92
  { 1, 75, 76, 0, 0 }, // 67 tc_aee6250c
  { 1, 75, 76, 0, 0 }, // 68 tc_eed07714
  { 1, 75, 76, 0, 0 }, // 69 tc_74a42bda
  { 1, 75, 76, 0, 0 }, // 70 tc_a9edeffa
  { 1, 75, 76, 0, 0 }, // 71 tc_838c4d7a
  { 1, 70, 71, 0, 0 }, // 72 tc_d61dfdc3
  { 1, 70, 71, 0, 0 }, // 73 tc_8a825db2
  { 1, 70, 71, 0, 0 }, // 74 tc_f34c1c21
  { 1, 71, 72, 0, 0 }, // 75 tc_95a33176
  { 1, 70, 71, 0, 0 }, // 76 tc_9f6cd987
  { 1, 71, 72, 0, 0 }, // 77 tc_b837298f
  { 1, 71, 72, 0, 0 }, // 78 tc_8b5bd4f5
  { 1, 71, 72, 0, 0 }, // 79 tc_84a7500d
  { 1, 76, 77, 0, 0 }, // 80 tc_7476d766
  { 1, 76, 77, 0, 0 }, // 81 tc_49fdfd4b
  { 1, 70, 71, 0, 0 }, // 82 tc_f098b237
  { 1, 70, 71, 0, 0 }, // 83 tc_20131976
  { 1, 70, 71, 0, 0 }, // 84 tc_1d41f8b7
  { 1, 70, 71, 0, 0 }, // 85 tc_a1297125
  { 1, 71, 72, 0, 0 }, // 86 tc_112d30d6
  { 1, 70, 71, 0, 0 }, // 87 tc_d68dca5c
  { 1, 70, 71, 0, 0 }, // 88 tc_788b1d09
  { 1, 70, 71, 0, 0 }, // 89 tc_38e0bae9
  { 1, 70, 71, 0, 0 }, // 90 tc_407e96f9
  { 1, 70, 71, 0, 0 }, // 91 tc_7401744f
  { 1, 70, 71, 0, 0 }, // 92 tc_9b3c0462
  { 1, 70, 71, 0, 0 }, // 93 tc_151bf368
  { 1, 71, 72, 0, 0 }, // 94 tc_9c52f549
  { 1, 70, 71, 0, 0 }, // 95 tc_55b33fda
  { 1, 70, 71, 0, 0 }, // 96 tc_6fc5dbea
  { 1, 76, 77, 0, 0 }, // 97 tc_3edca78f
  { 1, 70, 71, 0, 0 }, // 98 tc_a7a13fac
  { 1, 70, 71, 0, 0 }, // 99 tc_9783714b
  { 1, 70, 71, 0, 0 }, // 100 tc_f0e8e832
  { 1, 70, 71, 0, 0 }, // 101 tc_65279839
  { 1, 70, 71, 0, 0 }, // 102 tc_0a195f2c
  { 1, 70, 71, 0, 0 }, // 103 tc_01e1be3b
  { 1, 70, 71, 0, 0 }, // 104 tc_556f6577
  { 1, 70, 71, 0, 0 }, // 105 tc_02fe1c65
  { 1, 70, 71, 0, 0 }, // 106 tc_9e72dc89
  { 1, 70, 71, 0, 0 }, // 107 tc_9edb7c77
  { 1, 70, 71, 0, 0 }, // 108 tc_7f7f45f5
  { 1, 70, 71, 0, 0 }, // 109 tc_c20701f0
  { 1, 70, 71, 0, 0 }, // 110 tc_f7569068
  { 1, 76, 77, 0, 0 }, // 111 tc_fae9dfa5
  { 1, 76, 77, 0, 0 }, // 112 tc_6ae3426b
  { 1, 70, 71, 0, 0 }, // 113 tc_69bfb303
  { 1, 74, 75, 0, 0 }, // 114 tc_362b0be2
  { 1, 74, 75, 0, 0 }, // 115 tc_dc51281d
  { 1, 70, 71, 0, 0 }, // 116 tc_decdde8a
  { 1, 70, 71, 0, 0 }, // 117 tc_eeda4109
  { 1, 70, 71, 0, 0 }, // 118 tc_711c805f
  { 1, 74, 75, 0, 0 }, // 119 tc_ed03645c
  { 1, 74, 75, 0, 0 }, // 120 tc_42ff66ba
  { 1, 76, 77, 0, 0 }, // 121 tc_57a55b54
  { 1, 76, 77, 0, 0 }, // 122 tc_1248597c
  { 1, 76, 77, 0, 0 }, // 123 tc_9406230a
  { 1, 74, 75, 0, 0 }, // 124 tc_d57d649c
  { 1, 76, 77, 0, 0 }, // 125 tc_4abdbdc6
  { 1, 76, 77, 0, 0 }, // 126 tc_6d861a95
  { 1, 74, 75, 0, 0 }, // 127 tc_45f9d1be
  { 1, 72, 73, 0, 0 }, // 128 tc_24e109c7
  { 1, 70, 71, 0, 0 }, // 129 tc_9e27f2f9
  { 1, 72, 73, 0, 0 }, // 130 tc_f6e2aff9
  { 1, 70, 71, 0, 0 }, // 131 tc_24f426ab
  { 1, 72, 73, 0, 0 }, // 132 tc_975a4e54
  { 1, 70, 71, 0, 0 }, // 133 tc_5502c366
  { 1, 72, 73, 0, 0 }, // 134 tc_7b9187d3
  { 1, 70, 71, 0, 0 }, // 135 tc_f999c66e
  { 1, 75, 76, 0, 0 }, // 136 tc_1c7522a8
  { 1, 75, 76, 0, 0 }, // 137 tc_76bb5435
  { 1, 75, 76, 0, 0 }, // 138 tc_8a6d0d94
  { 1, 72, 73, 0, 0 }, // 139 tc_64b00d8a
  { 1, 75, 76, 0, 0 }, // 140 tc_5f2afaf7
  { 1, 75, 76, 0, 0 }, // 141 tc_ac65613f
  { 1, 75, 76, 0, 0 }, // 142 tc_a32e03e7
  { 1, 75, 76, 0, 0 }, // 143 tc_822c3c68
  { 1, 75, 76, 0, 0 }, // 144 tc_abfd9a6d
  { 1, 75, 76, 0, 0 }, // 145 tc_bf2ffc0f
  { 1, 75, 76, 0, 0 }, // 146 tc_7c6d32e4
  { 1, 75, 76, 0, 0 }, // 147 tc_45791fb8
  { 1, 75, 76, 0, 0 }, // 148 tc_b7c4062a
  { 1, 75, 76, 0, 0 }, // 149 tc_5944960d
  { 1, 70, 71, 0, 0 }, // 150 tc_2c13e7f5
  { 1, 70, 71, 0, 0 }, // 151 tc_a154b476
  { 1, 70, 71, 0, 0 }, // 152 tc_a4e22bbd
  { 1, 70, 71, 0, 0 }, // 153 tc_503ce0f3
  { 1, 75, 76, 0, 0 }, // 154 tc_0655b949
  { 1, 72, 73, 0, 0 }, // 155 tc_6e20402a
  { 1, 70, 71, 0, 0 }, // 156 tc_a7bdb22c
  { 1, 70, 71, 0, 0 }, // 157 tc_db596beb
  { 1, 70, 71, 0, 0 }, // 158 tc_a08b630b
  { 1, 70, 71, 0, 0 }, // 159 tc_1fcb8495
  { 1, 75, 76, 0, 0 }, // 160 tc_9edefe01
  { 1, 75, 76, 0, 0 }, // 161 tc_449acf79
  { 1, 72, 73, 0, 0 }, // 162 tc_ce59038e
  { 1, 72, 73, 0, 0 }, // 163 tc_f529831b
  { 1, 72, 73, 0, 0 }, // 164 tc_addc37a8
  { 1, 72, 73, 0, 0 }, // 165 tc_6f42bc60
  { 1, 70, 71, 0, 0 }, // 166 tc_e3d699e3
  { 1, 75, 76, 0, 0 }, // 167 tc_ba9255a6
  { 1, 75, 76, 0, 0 }, // 168 tc_1fe4ab69
  { 1, 75, 76, 0, 0 }, // 169 tc_bb07f2c5
  { 1, 75, 76, 0, 0 }, // 170 tc_8e82e8ca
  { 1, 72, 73, 0, 0 }, // 171 tc_cfa0e29b
  { 1, 72, 73, 0, 0 }, // 172 tc_0a6c20ae
  { 1, 72, 73, 0, 0 }, // 173 tc_0fac1eb8
  { 1, 72, 73, 0, 0 }, // 174 tc_829d8a86
  { 1, 75, 76, 0, 0 }, // 175 tc_280f7fe1
  { 1, 75, 76, 0, 0 }, // 176 tc_887d1bb7
  { 1, 72, 73, 0, 0 }, // 177 tc_96ef76ef
  { 1, 72, 73, 0, 0 }, // 178 tc_55a9a350
  { 1, 70, 71, 0, 0 }, // 179 tc_f0cdeccf
  { 1, 70, 71, 0, 0 }, // 180 tc_a38c45dc
  { 1, 70, 71, 0, 0 }, // 181 tc_d3632d88
  { 1, 70, 71, 0, 0 }, // 182 tc_5e4cf0e8
  { 1, 70, 71, 0, 0 }, // 183 tc_ef921005
  { 1, 75, 76, 0, 0 }, // 184 tc_5b347363
  { 1, 75, 76, 0, 0 }, // 185 tc_3d14a17b
  { 1, 75, 76, 0, 0 }, // 186 tc_3fbf1042
  { 1, 75, 76, 0, 0 }, // 187 tc_63567288
  { 1, 75, 76, 0, 0 }, // 188 tc_59a7822c
  { 1, 75, 76, 0, 0 }, // 189 tc_937dd41c
  { 1, 72, 73, 0, 0 }, // 190 tc_a4ee89db
  { 1, 72, 73, 0, 0 }, // 191 tc_c818ff7f
  { 1, 72, 73, 0, 0 }, // 192 tc_1242dc2a
  { 1, 75, 76, 0, 0 }, // 193 tc_44d5a428
  { 0, 0, 0, 0, 0 }, // 194 tc_540c3da3
  { 0, 0, 0, 0, 0 }, // 195 tc_c4edf264
  { 0, 0, 0, 0, 0 }, // 196 tc_5bf8afbb
  { 0, 0, 0, 0, 0 }, // 197 tc_a7e6707d
  { 0, 0, 0, 0, 0 }, // 198 tc_3c56e5ce
  { 0, 0, 0, 0, 0 }, // 199 tc_abe8c3b2
  { 0, 0, 0, 0, 0 }, // 200 tc_453fe68d
  { 0, 0, 0, 0, 0 }, // 201 tc_1ba8a0cd
  { 0, 0, 0, 0, 0 }, // 202 tc_52447ecc
  { 0, 0, 0, 0, 0 }, // 203 tc_3904b926
  { 0, 0, 0, 0, 0 }, // 204 tc_b9db8205
  { 0, 0, 0, 0, 0 }, // 205 tc_663c80a7
  { 0, 0, 0, 0, 0 }, // 206 tc_f21e8abb
  { 0, 0, 0, 0, 0 }, // 207 tc_131f1c81
  { 0, 0, 0, 0, 0 }, // 208 tc_c7039829
  { 0, 0, 0, 0, 0 }, // 209 tc_e2d2e9e5
  { 0, 0, 0, 0, 0 }, // 210 tc_ab23f776
  { 0, 0, 0, 0, 0 }, // 211 tc_7177e272
  { 0, 0, 0, 0, 0 }, // 212 tc_e99d4c2e
  { 0, 0, 0, 0, 0 }, // 213 tc_6942b6e0
  { 0, 0, 0, 0, 0 }, // 214 tc_a02a10a8
  { 0, 0, 0, 0, 0 }, // 215 tc_54a0dc47
  { 0, 0, 0, 0, 0 }, // 216 tc_447d9895
  { 0, 0, 0, 0, 0 }, // 217 tc_191381c1
  { 0, 0, 0, 0, 0 }, // 218 tc_3e2aaafc
  { 0, 0, 0, 0, 0 }, // 219 tc_3ce09744
  { 0, 0, 0, 0, 0 }, // 220 tc_20a4bbec
  { 0, 0, 0, 0, 0 }, // 221 tc_c127de3a
  { 0, 0, 0, 0, 0 }, // 222 tc_257f6f7c
  { 0, 0, 0, 0, 0 }, // 223 tc_7e6a3e89
  { 0, 0, 0, 0, 0 }, // 224 tc_e35c1e93
  { 0, 0, 0, 0, 0 }, // 225 tc_05ca8cfd
  { 0, 0, 0, 0, 0 }, // 226 tc_d8287c14
  { 0, 0, 0, 0, 0 }, // 227 tc_08a4f1b6
  { 0, 0, 0, 0, 0 }, // 228 tc_56e64202
  { 0, 0, 0, 0, 0 }, // 229 tc_ac4046bc
  { 0, 0, 0, 0, 0 }, // 230 tc_2e8f5f6e
  { 0, 0, 0, 0, 0 }, // 231 tc_7417e785
  { 0, 0, 0, 0, 0 }, // 232 tc_309dbb4f
  { 0, 0, 0, 0, 0 }, // 233 tc_df80eeb0
  { 0, 0, 0, 0, 0 }, // 234 tc_16ff9ef8
  { 0, 0, 0, 0, 0 }, // 235 tc_51d0ecc3
  { 0, 0, 0, 0, 0 }, // 236 tc_561aaa58
  { 0, 0, 0, 0, 0 }, // 237 tc_946013d8
  { 0, 0, 0, 0, 0 }, // 238 tc_46d6c3e0
  { 0, 0, 0, 0, 0 }, // 239 tc_87adc037
  { 0, 0, 0, 0, 0 }, // 240 tc_649072c2
  { 0, 0, 0, 0, 0 }, // 241 tc_b091f1c6
  { 0, 0, 0, 0, 0 }, // 242 tc_0b04c6c7
  { 0, 0, 0, 0, 0 }, // 243 tc_660769f1
  { 0, 0, 0, 0, 0 }, // 244 tc_e8797b98
  { 0, 0, 0, 0, 0 }, // 245 tc_05ac6f98
  { 0, 0, 0, 0, 0 }, // 246 tc_05058f6f
  { 0, 0, 0, 0, 0 }, // 247 tc_fd7610da
  { 0, 0, 0, 0, 0 }, // 248 tc_1381a97c
  { 0, 0, 0, 0, 0 }, // 249 tc_e3f68a46
  { 0, 0, 0, 0, 0 }, // 250 tc_f1de44ef
  { 0, 0, 0, 0, 0 }, // 251 tc_9d1dc972
  { 0, 0, 0, 0, 0 }, // 252 tc_90bcc1db
  { 0, 0, 0, 0, 0 }, // 253 tc_cd94bfe0
  { 0, 0, 0, 0, 0 }, // 254 tc_15fdf750
  { 0, 0, 0, 0, 0 }, // 255 tc_1ad8a370
  { 0, 0, 0, 0, 0 }, // 256 tc_e675c45a
  { 0, 0, 0, 0, 0 }, // 257 tc_61bf7c03
  { 0, 0, 0, 0, 0 }, // 258 tc_933f2b39
  { 0, 0, 0, 0, 0 }, // 259 tc_26a377fe
  { 0, 0, 0, 0, 0 }, // 260 tc_2d4051cd
  { 0, 0, 0, 0, 0 }, // 261 tc_6e7fa133
  { 0, 0, 0, 0, 0 }, // 262 tc_8772086c
  { 0, 0, 0, 0, 0 }, // 263 tc_b4416217
  { 0, 0, 0, 0, 0 }, // 264 tc_9f363d21
  { 0, 0, 0, 0, 0 }, // 265 tc_8e420e4d
  { 0, 0, 0, 0, 0 }, // 266 tc_7273323b
  { 0, 0, 0, 0, 0 }, // 267 tc_58d21193
  { 0, 0, 0, 0, 0 }, // 268 tc_71646d06
  { 0, 0, 0, 0, 0 }, // 269 tc_04da405a
  { 0, 0, 0, 0, 0 }, // 270 tc_2c745bb8
  { 0, 0, 0, 0, 0 }, // 271 tc_b28e51aa
  { 0, 0, 0, 0, 0 }, // 272 tc_767c4e9d
  { 0, 0, 0, 0, 0 }, // 273 tc_e699ae41
  { 0, 0, 0, 0, 0 }, // 274 tc_a0dbea28
  { 0, 0, 0, 0, 0 }, // 275 tc_dd5b0695
  { 0, 0, 0, 0, 0 }, // 276 tc_3ad719fb
  { 1, 72, 73, 0, 0 }, // 277 tc_77f94a5e
  { 1, 76, 77, 0, 0 }, // 278 tc_55255f2b
  { 1, 72, 73, 0, 0 }, // 279 tc_b1ae5f67
  { 1, 72, 73, 0, 0 }, // 280 tc_2237d952
  { 1, 74, 75, 0, 0 }, // 281 tc_0ba0d5da
  { 1, 74, 75, 0, 0 }, // 282 tc_9b34f5e0
  { 1, 76, 77, 0, 0 }, // 283 tc_d7718fbe
  { 1, 72, 73, 0, 0 }, // 284 tc_a3070909
  { 1, 76, 77, 0, 0 }, // 285 tc_2c3e17fc
  { 1, 76, 77, 0, 0 }, // 286 tc_28e55c6f
  { 0, 0, 0, 0, 0 }, // 287 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV55[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 79, 80, 871, 874 }, // 1 tc_01d44cb2
  { 1, 80, 81, 874, 877 }, // 2 PSEUDO
  { 1, 80, 81, 877, 879 }, // 3 tc_c57d9f39
  { 1, 80, 81, 879, 883 }, // 4 tc_1c2c7a4a
  { 1, 80, 81, 883, 887 }, // 5 tc_442395f3
  { 1, 80, 81, 887, 890 }, // 6 tc_713b66bf
  { 1, 80, 81, 890, 893 }, // 7 tc_86173609
  { 1, 79, 80, 893, 896 }, // 8 tc_5da50c4b
  { 1, 79, 80, 896, 899 }, // 9 tc_4a55d03c
  { 1, 80, 81, 899, 902 }, // 10 tc_d33e5eee
  { 1, 79, 80, 902, 905 }, // 11 tc_651cbe02
  { 1, 81, 82, 905, 908 }, // 12 DUPLEX
  { 1, 82, 83, 908, 909 }, // 13 tc_ENDLOOP
  { 1, 80, 81, 0, 0 }, // 14 tc_23708a21
  { 1, 79, 80, 909, 911 }, // 15 tc_56a124a7
  { 1, 83, 84, 911, 913 }, // 16 tc_2f573607
  { 1, 83, 84, 913, 916 }, // 17 tc_53c851ab
  { 1, 84, 85, 916, 920 }, // 18 tc_fedb7e19
  { 1, 84, 85, 920, 923 }, // 19 tc_4222e6bf
  { 1, 84, 85, 923, 927 }, // 20 tc_075c8dd8
  { 1, 81, 82, 927, 930 }, // 21 tc_9bcfb2ee
  { 1, 81, 82, 930, 933 }, // 22 tc_158aa3f7
  { 1, 81, 82, 933, 936 }, // 23 tc_df5d53f9
  { 1, 81, 82, 936, 939 }, // 24 tc_14ab4f41
  { 1, 81, 82, 939, 940 }, // 25 tc_f38f92e1
  { 1, 81, 82, 940, 941 }, // 26 tc_1981450d
  { 1, 84, 85, 941, 943 }, // 27 tc_e9170fb7
  { 1, 81, 82, 943, 945 }, // 28 tc_40d64c94
  { 1, 84, 85, 945, 947 }, // 29 LD_tc_ld_SLOT01
  { 1, 79, 80, 947, 950 }, // 30 tc_38382228
  { 1, 79, 80, 950, 953 }, // 31 tc_c21d7447
  { 1, 79, 80, 953, 957 }, // 32 tc_7f8ae742
  { 1, 85, 86, 957, 960 }, // 33 tc_5a4b5e58
  { 1, 85, 86, 960, 964 }, // 34 tc_197dce51
  { 1, 79, 80, 964, 965 }, // 35 tc_44fffc58
  { 1, 84, 85, 965, 970 }, // 36 tc_5ceb2f9e
  { 0, 0, 0, 0, 0 }, // 37 tc_56c4f9fe
  { 1, 84, 85, 970, 975 }, // 38 tc_b4dc7630
  { 1, 84, 85, 975, 979 }, // 39 tc_a2b365d2
  { 1, 83, 84, 979, 980 }, // 40 tc_60e324ff
  { 0, 0, 0, 0, 0 }, // 41 tc_db5555f3
  { 0, 0, 0, 0, 0 }, // 42 tc_c0749f3c
  { 1, 86, 88, 980, 983 }, // 43 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 44 tc_3aacf4a8
  { 0, 0, 0, 0, 0 }, // 45 tc_c5dba46e
  { 0, 0, 0, 0, 0 }, // 46 tc_af25efd9
  { 1, 79, 80, 983, 986 }, // 47 tc_0dfac0a7
  { 1, 84, 85, 986, 990 }, // 48 tc_8035e91f
  { 1, 81, 82, 990, 994 }, // 49 tc_011e0e9d
  { 1, 84, 85, 994, 997 }, // 50 tc_ae5babd7
  { 1, 81, 82, 997, 1000 }, // 51 tc_5deb5e47
  { 1, 79, 80, 1000, 1005 }, // 52 tc_bb831a7c
  { 1, 81, 82, 1005, 1009 }, // 53 tc_92240447
  { 1, 84, 85, 1009, 1012 }, // 54 tc_7c31e19a
  { 1, 84, 85, 1012, 1016 }, // 55 tc_d03278fd
  { 1, 84, 85, 1016, 1020 }, // 56 tc_65cbd974
  { 1, 81, 82, 1020, 1023 }, // 57 tc_934753bb
  { 1, 84, 85, 1023, 1026 }, // 58 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 59 CVI_VA
  { 0, 0, 0, 0, 0 }, // 60 tc_0ec46cf9
  { 0, 0, 0, 0, 0 }, // 61 tc_718b5c53
  { 0, 0, 0, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 81, 82, 1026, 1027 }, // 63 tc_d45ba9cd
  { 1, 80, 81, 1027, 1030 }, // 64 tc_388f9897
  { 1, 80, 81, 1030, 1032 }, // 65 tc_9124c04f
  { 1, 80, 81, 1032, 1035 }, // 66 tc_4ac61d92
  { 1, 84, 85, 1035, 1037 }, // 67 tc_aee6250c
  { 1, 84, 85, 1037, 1040 }, // 68 tc_eed07714
  { 1, 84, 85, 1040, 1043 }, // 69 tc_74a42bda
  { 1, 84, 85, 1043, 1046 }, // 70 tc_a9edeffa
  { 1, 84, 85, 1046, 1049 }, // 71 tc_838c4d7a
  { 1, 79, 80, 1049, 1051 }, // 72 tc_d61dfdc3
  { 1, 79, 80, 1051, 1054 }, // 73 tc_8a825db2
  { 1, 79, 80, 1054, 1057 }, // 74 tc_f34c1c21
  { 1, 80, 81, 1057, 1060 }, // 75 tc_95a33176
  { 1, 79, 80, 1060, 1062 }, // 76 tc_9f6cd987
  { 1, 80, 81, 0, 0 }, // 77 tc_b837298f
  { 1, 80, 81, 1062, 1065 }, // 78 tc_8b5bd4f5
  { 1, 80, 81, 1065, 1068 }, // 79 tc_84a7500d
  { 1, 85, 86, 1068, 1070 }, // 80 tc_7476d766
  { 1, 85, 86, 1070, 1072 }, // 81 tc_49fdfd4b
  { 1, 79, 80, 1072, 1075 }, // 82 tc_f098b237
  { 1, 79, 80, 1075, 1078 }, // 83 tc_20131976
  { 1, 79, 80, 1078, 1083 }, // 84 tc_1d41f8b7
  { 1, 79, 80, 1083, 1086 }, // 85 tc_a1297125
  { 1, 80, 81, 1086, 1087 }, // 86 tc_112d30d6
  { 1, 79, 80, 1087, 1090 }, // 87 tc_d68dca5c
  { 1, 79, 80, 1090, 1094 }, // 88 tc_788b1d09
  { 1, 79, 80, 1094, 1099 }, // 89 tc_38e0bae9
  { 1, 79, 80, 1099, 1102 }, // 90 tc_407e96f9
  { 1, 79, 80, 1102, 1106 }, // 91 tc_7401744f
  { 1, 79, 80, 1106, 1109 }, // 92 tc_9b3c0462
  { 1, 79, 80, 1109, 1111 }, // 93 tc_151bf368
  { 1, 80, 81, 1111, 1114 }, // 94 tc_9c52f549
  { 1, 79, 80, 1114, 1116 }, // 95 tc_55b33fda
  { 1, 79, 80, 1116, 1120 }, // 96 tc_6fc5dbea
  { 1, 85, 86, 1120, 1122 }, // 97 tc_3edca78f
  { 1, 79, 80, 1122, 1126 }, // 98 tc_a7a13fac
  { 1, 79, 80, 1126, 1128 }, // 99 tc_9783714b
  { 1, 79, 80, 1128, 1131 }, // 100 tc_f0e8e832
  { 1, 79, 80, 1131, 1133 }, // 101 tc_65279839
  { 1, 79, 80, 1133, 1137 }, // 102 tc_0a195f2c
  { 1, 79, 80, 1137, 1141 }, // 103 tc_01e1be3b
  { 1, 79, 80, 1141, 1144 }, // 104 tc_556f6577
  { 1, 79, 80, 1144, 1147 }, // 105 tc_02fe1c65
  { 1, 79, 80, 1147, 1151 }, // 106 tc_9e72dc89
  { 1, 79, 80, 1151, 1156 }, // 107 tc_9edb7c77
  { 1, 79, 80, 1156, 1159 }, // 108 tc_7f7f45f5
  { 1, 79, 80, 1159, 1162 }, // 109 tc_c20701f0
  { 1, 79, 80, 1162, 1166 }, // 110 tc_f7569068
  { 1, 85, 86, 1166, 1168 }, // 111 tc_fae9dfa5
  { 1, 85, 86, 1168, 1170 }, // 112 tc_6ae3426b
  { 1, 79, 80, 1170, 1172 }, // 113 tc_69bfb303
  { 1, 83, 84, 1172, 1173 }, // 114 tc_362b0be2
  { 1, 83, 84, 1173, 1175 }, // 115 tc_dc51281d
  { 1, 79, 80, 1175, 1176 }, // 116 tc_decdde8a
  { 1, 79, 80, 1176, 1178 }, // 117 tc_eeda4109
  { 1, 79, 80, 1178, 1180 }, // 118 tc_711c805f
  { 1, 83, 84, 1180, 1182 }, // 119 tc_ed03645c
  { 1, 83, 84, 1182, 1184 }, // 120 tc_42ff66ba
  { 1, 85, 86, 1184, 1186 }, // 121 tc_57a55b54
  { 1, 85, 86, 1186, 1188 }, // 122 tc_1248597c
  { 1, 85, 86, 1188, 1190 }, // 123 tc_9406230a
  { 1, 83, 84, 1190, 1191 }, // 124 tc_d57d649c
  { 1, 85, 86, 1191, 1193 }, // 125 tc_4abdbdc6
  { 1, 85, 86, 1193, 1195 }, // 126 tc_6d861a95
  { 1, 83, 84, 1195, 1196 }, // 127 tc_45f9d1be
  { 1, 81, 82, 1196, 1199 }, // 128 tc_24e109c7
  { 1, 79, 80, 1199, 1202 }, // 129 tc_9e27f2f9
  { 1, 81, 82, 1202, 1205 }, // 130 tc_f6e2aff9
  { 1, 79, 80, 1205, 1208 }, // 131 tc_24f426ab
  { 1, 81, 82, 1208, 1211 }, // 132 tc_975a4e54
  { 1, 79, 80, 1211, 1214 }, // 133 tc_5502c366
  { 1, 81, 82, 1214, 1216 }, // 134 tc_7b9187d3
  { 1, 79, 80, 1216, 1218 }, // 135 tc_f999c66e
  { 1, 84, 85, 1218, 1223 }, // 136 tc_1c7522a8
  { 1, 84, 85, 1223, 1229 }, // 137 tc_76bb5435
  { 1, 84, 85, 1229, 1231 }, // 138 tc_8a6d0d94
  { 1, 81, 82, 1231, 1233 }, // 139 tc_64b00d8a
  { 1, 84, 85, 1233, 1238 }, // 140 tc_5f2afaf7
  { 1, 84, 85, 1238, 1242 }, // 141 tc_ac65613f
  { 1, 84, 85, 1242, 1247 }, // 142 tc_a32e03e7
  { 1, 84, 85, 1247, 1250 }, // 143 tc_822c3c68
  { 1, 84, 85, 1250, 1254 }, // 144 tc_abfd9a6d
  { 1, 84, 85, 1254, 1258 }, // 145 tc_bf2ffc0f
  { 1, 84, 85, 1258, 1261 }, // 146 tc_7c6d32e4
  { 1, 84, 85, 1261, 1266 }, // 147 tc_45791fb8
  { 1, 84, 85, 1266, 1271 }, // 148 tc_b7c4062a
  { 1, 84, 85, 1271, 1274 }, // 149 tc_5944960d
  { 1, 79, 80, 1274, 1278 }, // 150 tc_2c13e7f5
  { 1, 79, 80, 1278, 1282 }, // 151 tc_a154b476
  { 1, 79, 80, 1282, 1286 }, // 152 tc_a4e22bbd
  { 1, 79, 80, 1286, 1290 }, // 153 tc_503ce0f3
  { 1, 84, 85, 1290, 1292 }, // 154 tc_0655b949
  { 1, 81, 82, 1292, 1294 }, // 155 tc_6e20402a
  { 1, 79, 80, 1294, 1296 }, // 156 tc_a7bdb22c
  { 1, 79, 80, 1296, 1299 }, // 157 tc_db596beb
  { 1, 79, 80, 1299, 1302 }, // 158 tc_a08b630b
  { 1, 79, 80, 1302, 1305 }, // 159 tc_1fcb8495
  { 1, 84, 85, 1305, 1310 }, // 160 tc_9edefe01
  { 1, 84, 85, 1310, 1315 }, // 161 tc_449acf79
  { 1, 81, 82, 1315, 1320 }, // 162 tc_ce59038e
  { 1, 81, 82, 1320, 1325 }, // 163 tc_f529831b
  { 1, 81, 82, 1325, 1330 }, // 164 tc_addc37a8
  { 1, 81, 82, 1330, 1333 }, // 165 tc_6f42bc60
  { 1, 79, 80, 1333, 1335 }, // 166 tc_e3d699e3
  { 1, 84, 85, 1335, 1338 }, // 167 tc_ba9255a6
  { 1, 84, 85, 1338, 1343 }, // 168 tc_1fe4ab69
  { 1, 84, 85, 1343, 1346 }, // 169 tc_bb07f2c5
  { 1, 84, 85, 1346, 1351 }, // 170 tc_8e82e8ca
  { 1, 81, 82, 1351, 1354 }, // 171 tc_cfa0e29b
  { 1, 81, 82, 1354, 1359 }, // 172 tc_0a6c20ae
  { 1, 81, 82, 1359, 1362 }, // 173 tc_0fac1eb8
  { 1, 81, 82, 1362, 1367 }, // 174 tc_829d8a86
  { 1, 84, 85, 1367, 1371 }, // 175 tc_280f7fe1
  { 1, 84, 85, 1371, 1375 }, // 176 tc_887d1bb7
  { 1, 81, 82, 1375, 1379 }, // 177 tc_96ef76ef
  { 1, 81, 82, 1379, 1383 }, // 178 tc_55a9a350
  { 1, 79, 80, 1383, 1387 }, // 179 tc_f0cdeccf
  { 1, 79, 80, 1387, 1392 }, // 180 tc_a38c45dc
  { 1, 79, 80, 1392, 1394 }, // 181 tc_d3632d88
  { 1, 79, 80, 1394, 1398 }, // 182 tc_5e4cf0e8
  { 1, 79, 80, 1398, 1400 }, // 183 tc_ef921005
  { 1, 84, 85, 1400, 1403 }, // 184 tc_5b347363
  { 1, 84, 85, 1403, 1405 }, // 185 tc_3d14a17b
  { 1, 84, 85, 1405, 1406 }, // 186 tc_3fbf1042
  { 1, 84, 85, 1406, 1407 }, // 187 tc_63567288
  { 1, 84, 85, 1407, 1409 }, // 188 tc_59a7822c
  { 1, 84, 85, 0, 0 }, // 189 tc_937dd41c
  { 1, 81, 82, 0, 0 }, // 190 tc_a4ee89db
  { 1, 81, 82, 0, 0 }, // 191 tc_c818ff7f
  { 1, 81, 82, 1409, 1410 }, // 192 tc_1242dc2a
  { 1, 84, 85, 1410, 1412 }, // 193 tc_44d5a428
  { 0, 0, 0, 0, 0 }, // 194 tc_540c3da3
  { 0, 0, 0, 0, 0 }, // 195 tc_c4edf264
  { 0, 0, 0, 0, 0 }, // 196 tc_5bf8afbb
  { 0, 0, 0, 0, 0 }, // 197 tc_a7e6707d
  { 0, 0, 0, 0, 0 }, // 198 tc_3c56e5ce
  { 0, 0, 0, 0, 0 }, // 199 tc_abe8c3b2
  { 0, 0, 0, 0, 0 }, // 200 tc_453fe68d
  { 0, 0, 0, 0, 0 }, // 201 tc_1ba8a0cd
  { 0, 0, 0, 0, 0 }, // 202 tc_52447ecc
  { 0, 0, 0, 0, 0 }, // 203 tc_3904b926
  { 0, 0, 0, 0, 0 }, // 204 tc_b9db8205
  { 0, 0, 0, 0, 0 }, // 205 tc_663c80a7
  { 0, 0, 0, 0, 0 }, // 206 tc_f21e8abb
  { 0, 0, 0, 0, 0 }, // 207 tc_131f1c81
  { 0, 0, 0, 0, 0 }, // 208 tc_c7039829
  { 0, 0, 0, 0, 0 }, // 209 tc_e2d2e9e5
  { 0, 0, 0, 0, 0 }, // 210 tc_ab23f776
  { 0, 0, 0, 0, 0 }, // 211 tc_7177e272
  { 0, 0, 0, 0, 0 }, // 212 tc_e99d4c2e
  { 0, 0, 0, 0, 0 }, // 213 tc_6942b6e0
  { 0, 0, 0, 0, 0 }, // 214 tc_a02a10a8
  { 0, 0, 0, 0, 0 }, // 215 tc_54a0dc47
  { 0, 0, 0, 0, 0 }, // 216 tc_447d9895
  { 0, 0, 0, 0, 0 }, // 217 tc_191381c1
  { 0, 0, 0, 0, 0 }, // 218 tc_3e2aaafc
  { 0, 0, 0, 0, 0 }, // 219 tc_3ce09744
  { 0, 0, 0, 0, 0 }, // 220 tc_20a4bbec
  { 0, 0, 0, 0, 0 }, // 221 tc_c127de3a
  { 0, 0, 0, 0, 0 }, // 222 tc_257f6f7c
  { 0, 0, 0, 0, 0 }, // 223 tc_7e6a3e89
  { 0, 0, 0, 0, 0 }, // 224 tc_e35c1e93
  { 0, 0, 0, 0, 0 }, // 225 tc_05ca8cfd
  { 0, 0, 0, 0, 0 }, // 226 tc_d8287c14
  { 0, 0, 0, 0, 0 }, // 227 tc_08a4f1b6
  { 0, 0, 0, 0, 0 }, // 228 tc_56e64202
  { 0, 0, 0, 0, 0 }, // 229 tc_ac4046bc
  { 0, 0, 0, 0, 0 }, // 230 tc_2e8f5f6e
  { 0, 0, 0, 0, 0 }, // 231 tc_7417e785
  { 0, 0, 0, 0, 0 }, // 232 tc_309dbb4f
  { 0, 0, 0, 0, 0 }, // 233 tc_df80eeb0
  { 0, 0, 0, 0, 0 }, // 234 tc_16ff9ef8
  { 0, 0, 0, 0, 0 }, // 235 tc_51d0ecc3
  { 0, 0, 0, 0, 0 }, // 236 tc_561aaa58
  { 0, 0, 0, 0, 0 }, // 237 tc_946013d8
  { 0, 0, 0, 0, 0 }, // 238 tc_46d6c3e0
  { 0, 0, 0, 0, 0 }, // 239 tc_87adc037
  { 0, 0, 0, 0, 0 }, // 240 tc_649072c2
  { 0, 0, 0, 0, 0 }, // 241 tc_b091f1c6
  { 0, 0, 0, 0, 0 }, // 242 tc_0b04c6c7
  { 0, 0, 0, 0, 0 }, // 243 tc_660769f1
  { 0, 0, 0, 0, 0 }, // 244 tc_e8797b98
  { 0, 0, 0, 0, 0 }, // 245 tc_05ac6f98
  { 0, 0, 0, 0, 0 }, // 246 tc_05058f6f
  { 0, 0, 0, 0, 0 }, // 247 tc_fd7610da
  { 0, 0, 0, 0, 0 }, // 248 tc_1381a97c
  { 0, 0, 0, 0, 0 }, // 249 tc_e3f68a46
  { 0, 0, 0, 0, 0 }, // 250 tc_f1de44ef
  { 0, 0, 0, 0, 0 }, // 251 tc_9d1dc972
  { 0, 0, 0, 0, 0 }, // 252 tc_90bcc1db
  { 0, 0, 0, 0, 0 }, // 253 tc_cd94bfe0
  { 0, 0, 0, 0, 0 }, // 254 tc_15fdf750
  { 0, 0, 0, 0, 0 }, // 255 tc_1ad8a370
  { 0, 0, 0, 0, 0 }, // 256 tc_e675c45a
  { 0, 0, 0, 0, 0 }, // 257 tc_61bf7c03
  { 0, 0, 0, 0, 0 }, // 258 tc_933f2b39
  { 0, 0, 0, 0, 0 }, // 259 tc_26a377fe
  { 0, 0, 0, 0, 0 }, // 260 tc_2d4051cd
  { 0, 0, 0, 0, 0 }, // 261 tc_6e7fa133
  { 0, 0, 0, 0, 0 }, // 262 tc_8772086c
  { 0, 0, 0, 0, 0 }, // 263 tc_b4416217
  { 0, 0, 0, 0, 0 }, // 264 tc_9f363d21
  { 0, 0, 0, 0, 0 }, // 265 tc_8e420e4d
  { 0, 0, 0, 0, 0 }, // 266 tc_7273323b
  { 0, 0, 0, 0, 0 }, // 267 tc_58d21193
  { 0, 0, 0, 0, 0 }, // 268 tc_71646d06
  { 0, 0, 0, 0, 0 }, // 269 tc_04da405a
  { 0, 0, 0, 0, 0 }, // 270 tc_2c745bb8
  { 0, 0, 0, 0, 0 }, // 271 tc_b28e51aa
  { 0, 0, 0, 0, 0 }, // 272 tc_767c4e9d
  { 0, 0, 0, 0, 0 }, // 273 tc_e699ae41
  { 0, 0, 0, 0, 0 }, // 274 tc_a0dbea28
  { 0, 0, 0, 0, 0 }, // 275 tc_dd5b0695
  { 0, 0, 0, 0, 0 }, // 276 tc_3ad719fb
  { 1, 81, 82, 0, 0 }, // 277 tc_77f94a5e
  { 1, 85, 86, 0, 0 }, // 278 tc_55255f2b
  { 1, 81, 82, 1412, 1413 }, // 279 tc_b1ae5f67
  { 1, 81, 82, 1413, 1415 }, // 280 tc_2237d952
  { 1, 83, 84, 1415, 1416 }, // 281 tc_0ba0d5da
  { 1, 83, 84, 0, 0 }, // 282 tc_9b34f5e0
  { 1, 85, 86, 1416, 1417 }, // 283 tc_d7718fbe
  { 1, 81, 82, 1417, 1419 }, // 284 tc_a3070909
  { 1, 85, 86, 1419, 1420 }, // 285 tc_2c3e17fc
  { 1, 85, 86, 1420, 1422 }, // 286 tc_28e55c6f
  { 0, 0, 0, 0, 0 }, // 287 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV62[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 88, 89, 1422, 1425 }, // 1 tc_01d44cb2
  { 1, 89, 90, 1425, 1428 }, // 2 PSEUDO
  { 1, 89, 90, 1428, 1430 }, // 3 tc_c57d9f39
  { 1, 89, 90, 1430, 1434 }, // 4 tc_1c2c7a4a
  { 1, 89, 90, 1434, 1438 }, // 5 tc_442395f3
  { 1, 89, 90, 1438, 1441 }, // 6 tc_713b66bf
  { 1, 89, 90, 1441, 1444 }, // 7 tc_86173609
  { 1, 88, 89, 1444, 1447 }, // 8 tc_5da50c4b
  { 1, 88, 89, 1447, 1450 }, // 9 tc_4a55d03c
  { 1, 89, 90, 1450, 1453 }, // 10 tc_d33e5eee
  { 1, 88, 89, 1453, 1456 }, // 11 tc_651cbe02
  { 1, 90, 91, 1456, 1459 }, // 12 DUPLEX
  { 1, 91, 92, 1459, 1460 }, // 13 tc_ENDLOOP
  { 1, 89, 90, 0, 0 }, // 14 tc_23708a21
  { 1, 89, 90, 1460, 1462 }, // 15 tc_56a124a7
  { 1, 92, 93, 1462, 1464 }, // 16 tc_2f573607
  { 1, 92, 93, 1464, 1467 }, // 17 tc_53c851ab
  { 1, 93, 94, 1467, 1471 }, // 18 tc_fedb7e19
  { 1, 93, 94, 1471, 1474 }, // 19 tc_4222e6bf
  { 1, 93, 94, 1474, 1478 }, // 20 tc_075c8dd8
  { 1, 90, 91, 1478, 1481 }, // 21 tc_9bcfb2ee
  { 1, 90, 91, 1481, 1484 }, // 22 tc_158aa3f7
  { 1, 90, 91, 1484, 1487 }, // 23 tc_df5d53f9
  { 1, 90, 91, 1487, 1490 }, // 24 tc_14ab4f41
  { 1, 90, 91, 1490, 1491 }, // 25 tc_f38f92e1
  { 1, 90, 91, 1491, 1492 }, // 26 tc_1981450d
  { 1, 93, 94, 1492, 1494 }, // 27 tc_e9170fb7
  { 1, 90, 91, 1494, 1496 }, // 28 tc_40d64c94
  { 1, 93, 94, 1496, 1498 }, // 29 LD_tc_ld_SLOT01
  { 1, 88, 89, 1498, 1501 }, // 30 tc_38382228
  { 1, 88, 89, 1501, 1504 }, // 31 tc_c21d7447
  { 1, 88, 89, 1504, 1508 }, // 32 tc_7f8ae742
  { 1, 94, 95, 1508, 1511 }, // 33 tc_5a4b5e58
  { 1, 94, 95, 1511, 1515 }, // 34 tc_197dce51
  { 1, 88, 89, 1515, 1516 }, // 35 tc_44fffc58
  { 1, 93, 94, 1516, 1521 }, // 36 tc_5ceb2f9e
  { 1, 95, 97, 1521, 1524 }, // 37 tc_56c4f9fe
  { 1, 93, 94, 1524, 1529 }, // 38 tc_b4dc7630
  { 1, 93, 94, 1529, 1533 }, // 39 tc_a2b365d2
  { 1, 92, 93, 1533, 1534 }, // 40 tc_60e324ff
  { 1, 97, 99, 1534, 1537 }, // 41 tc_db5555f3
  { 1, 99, 102, 1537, 1540 }, // 42 tc_c0749f3c
  { 1, 102, 104, 1540, 1543 }, // 43 PSEUDOM
  { 1, 95, 97, 1543, 1546 }, // 44 tc_3aacf4a8
  { 1, 104, 107, 1546, 1549 }, // 45 tc_c5dba46e
  { 1, 97, 99, 1549, 1553 }, // 46 tc_af25efd9
  { 1, 88, 89, 1553, 1556 }, // 47 tc_0dfac0a7
  { 1, 93, 94, 1556, 1560 }, // 48 tc_8035e91f
  { 1, 90, 91, 1560, 1564 }, // 49 tc_011e0e9d
  { 1, 93, 94, 1564, 1567 }, // 50 tc_ae5babd7
  { 1, 90, 91, 1567, 1570 }, // 51 tc_5deb5e47
  { 1, 88, 89, 1570, 1575 }, // 52 tc_bb831a7c
  { 1, 90, 91, 1575, 1579 }, // 53 tc_92240447
  { 1, 93, 94, 1579, 1582 }, // 54 tc_7c31e19a
  { 1, 93, 94, 1582, 1586 }, // 55 tc_d03278fd
  { 1, 93, 94, 1586, 1590 }, // 56 tc_65cbd974
  { 1, 90, 91, 1590, 1593 }, // 57 tc_934753bb
  { 1, 93, 94, 1593, 1596 }, // 58 ST_tc_st_SLOT01
  { 1, 107, 109, 1596, 1600 }, // 59 CVI_VA
  { 1, 95, 97, 1600, 1602 }, // 60 tc_0ec46cf9
  { 1, 97, 99, 1602, 1603 }, // 61 tc_718b5c53
  { 1, 109, 113, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 90, 91, 1603, 1604 }, // 63 tc_d45ba9cd
  { 1, 89, 90, 1604, 1607 }, // 64 tc_388f9897
  { 1, 89, 90, 1607, 1609 }, // 65 tc_9124c04f
  { 1, 89, 90, 1609, 1612 }, // 66 tc_4ac61d92
  { 1, 93, 94, 1612, 1614 }, // 67 tc_aee6250c
  { 1, 93, 94, 1614, 1617 }, // 68 tc_eed07714
  { 1, 93, 94, 1617, 1620 }, // 69 tc_74a42bda
  { 1, 93, 94, 1620, 1623 }, // 70 tc_a9edeffa
  { 1, 93, 94, 1623, 1626 }, // 71 tc_838c4d7a
  { 1, 88, 89, 1626, 1628 }, // 72 tc_d61dfdc3
  { 1, 88, 89, 1628, 1631 }, // 73 tc_8a825db2
  { 1, 88, 89, 1631, 1634 }, // 74 tc_f34c1c21
  { 1, 89, 90, 1634, 1637 }, // 75 tc_95a33176
  { 1, 88, 89, 1637, 1639 }, // 76 tc_9f6cd987
  { 1, 89, 90, 0, 0 }, // 77 tc_b837298f
  { 1, 89, 90, 1639, 1642 }, // 78 tc_8b5bd4f5
  { 1, 89, 90, 1642, 1645 }, // 79 tc_84a7500d
  { 1, 94, 95, 1645, 1647 }, // 80 tc_7476d766
  { 1, 94, 95, 1647, 1649 }, // 81 tc_49fdfd4b
  { 1, 88, 89, 1649, 1652 }, // 82 tc_f098b237
  { 1, 88, 89, 1652, 1655 }, // 83 tc_20131976
  { 1, 88, 89, 1655, 1660 }, // 84 tc_1d41f8b7
  { 1, 88, 89, 1660, 1663 }, // 85 tc_a1297125
  { 1, 89, 90, 1663, 1664 }, // 86 tc_112d30d6
  { 1, 88, 89, 1664, 1667 }, // 87 tc_d68dca5c
  { 1, 88, 89, 1667, 1671 }, // 88 tc_788b1d09
  { 1, 88, 89, 1671, 1676 }, // 89 tc_38e0bae9
  { 1, 88, 89, 1676, 1679 }, // 90 tc_407e96f9
  { 1, 88, 89, 1679, 1683 }, // 91 tc_7401744f
  { 1, 88, 89, 1683, 1686 }, // 92 tc_9b3c0462
  { 1, 88, 89, 1686, 1688 }, // 93 tc_151bf368
  { 1, 89, 90, 1688, 1691 }, // 94 tc_9c52f549
  { 1, 88, 89, 1691, 1693 }, // 95 tc_55b33fda
  { 1, 88, 89, 1693, 1697 }, // 96 tc_6fc5dbea
  { 1, 94, 95, 1697, 1699 }, // 97 tc_3edca78f
  { 1, 88, 89, 1699, 1703 }, // 98 tc_a7a13fac
  { 1, 88, 89, 1703, 1705 }, // 99 tc_9783714b
  { 1, 88, 89, 1705, 1708 }, // 100 tc_f0e8e832
  { 1, 88, 89, 1708, 1710 }, // 101 tc_65279839
  { 1, 88, 89, 1710, 1714 }, // 102 tc_0a195f2c
  { 1, 88, 89, 1714, 1718 }, // 103 tc_01e1be3b
  { 1, 88, 89, 1718, 1721 }, // 104 tc_556f6577
  { 1, 88, 89, 1721, 1724 }, // 105 tc_02fe1c65
  { 1, 88, 89, 1724, 1728 }, // 106 tc_9e72dc89
  { 1, 88, 89, 1728, 1733 }, // 107 tc_9edb7c77
  { 1, 88, 89, 1733, 1736 }, // 108 tc_7f7f45f5
  { 1, 88, 89, 1736, 1739 }, // 109 tc_c20701f0
  { 1, 88, 89, 1739, 1743 }, // 110 tc_f7569068
  { 1, 94, 95, 1743, 1745 }, // 111 tc_fae9dfa5
  { 1, 94, 95, 1745, 1747 }, // 112 tc_6ae3426b
  { 1, 88, 89, 1747, 1749 }, // 113 tc_69bfb303
  { 1, 92, 93, 1749, 1750 }, // 114 tc_362b0be2
  { 1, 92, 93, 1750, 1752 }, // 115 tc_dc51281d
  { 1, 89, 90, 1752, 1753 }, // 116 tc_decdde8a
  { 1, 89, 90, 1753, 1755 }, // 117 tc_eeda4109
  { 1, 89, 90, 1755, 1757 }, // 118 tc_711c805f
  { 1, 92, 93, 1757, 1759 }, // 119 tc_ed03645c
  { 1, 92, 93, 1759, 1761 }, // 120 tc_42ff66ba
  { 1, 94, 95, 1761, 1763 }, // 121 tc_57a55b54
  { 1, 94, 95, 1763, 1765 }, // 122 tc_1248597c
  { 1, 94, 95, 1765, 1767 }, // 123 tc_9406230a
  { 1, 92, 93, 1767, 1768 }, // 124 tc_d57d649c
  { 1, 94, 95, 1768, 1770 }, // 125 tc_4abdbdc6
  { 1, 94, 95, 1770, 1772 }, // 126 tc_6d861a95
  { 1, 92, 93, 1772, 1773 }, // 127 tc_45f9d1be
  { 1, 90, 91, 1773, 1776 }, // 128 tc_24e109c7
  { 1, 89, 90, 1776, 1779 }, // 129 tc_9e27f2f9
  { 1, 90, 91, 1779, 1782 }, // 130 tc_f6e2aff9
  { 1, 89, 90, 1782, 1785 }, // 131 tc_24f426ab
  { 1, 90, 91, 1785, 1788 }, // 132 tc_975a4e54
  { 1, 88, 89, 1788, 1791 }, // 133 tc_5502c366
  { 1, 90, 91, 1791, 1793 }, // 134 tc_7b9187d3
  { 1, 89, 90, 1793, 1795 }, // 135 tc_f999c66e
  { 1, 93, 94, 1795, 1800 }, // 136 tc_1c7522a8
  { 1, 93, 94, 1800, 1806 }, // 137 tc_76bb5435
  { 1, 93, 94, 1806, 1808 }, // 138 tc_8a6d0d94
  { 1, 90, 91, 1808, 1810 }, // 139 tc_64b00d8a
  { 1, 93, 94, 1810, 1815 }, // 140 tc_5f2afaf7
  { 1, 93, 94, 1815, 1819 }, // 141 tc_ac65613f
  { 1, 93, 94, 1819, 1824 }, // 142 tc_a32e03e7
  { 1, 93, 94, 1824, 1827 }, // 143 tc_822c3c68
  { 1, 93, 94, 1827, 1831 }, // 144 tc_abfd9a6d
  { 1, 93, 94, 1831, 1835 }, // 145 tc_bf2ffc0f
  { 1, 93, 94, 1835, 1838 }, // 146 tc_7c6d32e4
  { 1, 93, 94, 1838, 1843 }, // 147 tc_45791fb8
  { 1, 93, 94, 1843, 1848 }, // 148 tc_b7c4062a
  { 1, 93, 94, 1848, 1851 }, // 149 tc_5944960d
  { 1, 88, 89, 1851, 1855 }, // 150 tc_2c13e7f5
  { 1, 88, 89, 1855, 1859 }, // 151 tc_a154b476
  { 1, 88, 89, 1859, 1863 }, // 152 tc_a4e22bbd
  { 1, 88, 89, 1863, 1867 }, // 153 tc_503ce0f3
  { 1, 93, 94, 1867, 1869 }, // 154 tc_0655b949
  { 1, 90, 91, 1869, 1871 }, // 155 tc_6e20402a
  { 1, 88, 89, 1871, 1873 }, // 156 tc_a7bdb22c
  { 1, 88, 89, 1873, 1876 }, // 157 tc_db596beb
  { 1, 88, 89, 1876, 1879 }, // 158 tc_a08b630b
  { 1, 88, 89, 1879, 1882 }, // 159 tc_1fcb8495
  { 1, 93, 94, 1882, 1887 }, // 160 tc_9edefe01
  { 1, 93, 94, 1887, 1892 }, // 161 tc_449acf79
  { 1, 90, 91, 1892, 1897 }, // 162 tc_ce59038e
  { 1, 90, 91, 1897, 1902 }, // 163 tc_f529831b
  { 1, 90, 91, 1902, 1907 }, // 164 tc_addc37a8
  { 1, 90, 91, 1907, 1910 }, // 165 tc_6f42bc60
  { 1, 88, 89, 1910, 1912 }, // 166 tc_e3d699e3
  { 1, 93, 94, 1912, 1915 }, // 167 tc_ba9255a6
  { 1, 93, 94, 1915, 1920 }, // 168 tc_1fe4ab69
  { 1, 93, 94, 1920, 1923 }, // 169 tc_bb07f2c5
  { 1, 93, 94, 1923, 1928 }, // 170 tc_8e82e8ca
  { 1, 90, 91, 1928, 1931 }, // 171 tc_cfa0e29b
  { 1, 90, 91, 1931, 1936 }, // 172 tc_0a6c20ae
  { 1, 90, 91, 1936, 1939 }, // 173 tc_0fac1eb8
  { 1, 90, 91, 1939, 1944 }, // 174 tc_829d8a86
  { 1, 93, 94, 1944, 1948 }, // 175 tc_280f7fe1
  { 1, 93, 94, 1948, 1952 }, // 176 tc_887d1bb7
  { 1, 90, 91, 1952, 1956 }, // 177 tc_96ef76ef
  { 1, 90, 91, 1956, 1960 }, // 178 tc_55a9a350
  { 1, 88, 89, 1960, 1964 }, // 179 tc_f0cdeccf
  { 1, 88, 89, 1964, 1969 }, // 180 tc_a38c45dc
  { 1, 88, 89, 1969, 1971 }, // 181 tc_d3632d88
  { 1, 88, 89, 1971, 1975 }, // 182 tc_5e4cf0e8
  { 1, 88, 89, 1975, 1977 }, // 183 tc_ef921005
  { 1, 93, 94, 1977, 1980 }, // 184 tc_5b347363
  { 1, 93, 94, 1980, 1982 }, // 185 tc_3d14a17b
  { 1, 93, 94, 1982, 1983 }, // 186 tc_3fbf1042
  { 1, 93, 94, 1983, 1984 }, // 187 tc_63567288
  { 1, 93, 94, 1984, 1986 }, // 188 tc_59a7822c
  { 1, 93, 94, 0, 0 }, // 189 tc_937dd41c
  { 1, 90, 91, 0, 0 }, // 190 tc_a4ee89db
  { 1, 90, 91, 0, 0 }, // 191 tc_c818ff7f
  { 1, 90, 91, 1986, 1987 }, // 192 tc_1242dc2a
  { 1, 93, 94, 1987, 1989 }, // 193 tc_44d5a428
  { 1, 113, 115, 1989, 1992 }, // 194 tc_540c3da3
  { 1, 115, 117, 1992, 1994 }, // 195 tc_c4edf264
  { 1, 117, 119, 1994, 1996 }, // 196 tc_5bf8afbb
  { 1, 119, 123, 1996, 1999 }, // 197 tc_a7e6707d
  { 1, 119, 123, 1999, 2003 }, // 198 tc_3c56e5ce
  { 1, 99, 102, 2003, 2007 }, // 199 tc_abe8c3b2
  { 1, 99, 102, 2007, 2012 }, // 200 tc_453fe68d
  { 1, 99, 102, 2012, 2016 }, // 201 tc_1ba8a0cd
  { 1, 123, 125, 2016, 2019 }, // 202 tc_52447ecc
  { 1, 123, 125, 2019, 2023 }, // 203 tc_3904b926
  { 1, 123, 125, 2023, 2028 }, // 204 tc_b9db8205
  { 1, 123, 125, 2028, 2032 }, // 205 tc_663c80a7
  { 1, 125, 129, 2032, 2035 }, // 206 tc_f21e8abb
  { 1, 125, 129, 2035, 2039 }, // 207 tc_131f1c81
  { 1, 125, 129, 2039, 2044 }, // 208 tc_c7039829
  { 1, 125, 129, 2044, 2048 }, // 209 tc_e2d2e9e5
  { 1, 129, 131, 2048, 2051 }, // 210 tc_ab23f776
  { 1, 129, 131, 2051, 2055 }, // 211 tc_7177e272
  { 1, 129, 131, 2055, 2060 }, // 212 tc_e99d4c2e
  { 1, 129, 131, 2060, 2064 }, // 213 tc_6942b6e0
  { 1, 104, 107, 2064, 2068 }, // 214 tc_a02a10a8
  { 1, 104, 107, 2068, 2073 }, // 215 tc_54a0dc47
  { 1, 104, 107, 2073, 2077 }, // 216 tc_447d9895
  { 1, 104, 107, 2077, 2082 }, // 217 tc_191381c1
  { 1, 104, 107, 2082, 2086 }, // 218 tc_3e2aaafc
  { 1, 129, 131, 2086, 2088 }, // 219 tc_3ce09744
  { 1, 129, 131, 2088, 2091 }, // 220 tc_20a4bbec
  { 1, 115, 117, 2091, 2094 }, // 221 tc_c127de3a
  { 1, 95, 97, 2094, 2098 }, // 222 tc_257f6f7c
  { 1, 95, 97, 2098, 2103 }, // 223 tc_7e6a3e89
  { 1, 95, 97, 2103, 2107 }, // 224 tc_e35c1e93
  { 1, 131, 133, 2107, 2110 }, // 225 tc_05ca8cfd
  { 1, 133, 135, 2110, 2113 }, // 226 tc_d8287c14
  { 1, 133, 135, 2113, 2117 }, // 227 tc_08a4f1b6
  { 1, 117, 119, 2117, 2121 }, // 228 tc_56e64202
  { 1, 115, 117, 2121, 2124 }, // 229 tc_ac4046bc
  { 1, 115, 117, 2124, 2128 }, // 230 tc_2e8f5f6e
  { 1, 131, 133, 2128, 2131 }, // 231 tc_7417e785
  { 1, 131, 133, 2131, 2135 }, // 232 tc_309dbb4f
  { 1, 135, 137, 2135, 2139 }, // 233 tc_df80eeb0
  { 1, 131, 133, 2139, 2143 }, // 234 tc_16ff9ef8
  { 1, 131, 133, 2143, 2145 }, // 235 tc_51d0ecc3
  { 1, 135, 137, 2145, 2150 }, // 236 tc_561aaa58
  { 1, 117, 119, 2150, 2152 }, // 237 tc_946013d8
  { 1, 117, 119, 2152, 2155 }, // 238 tc_46d6c3e0
  { 1, 135, 137, 2155, 2159 }, // 239 tc_87adc037
  { 1, 115, 117, 2159, 2162 }, // 240 tc_649072c2
  { 1, 115, 117, 2162, 2166 }, // 241 tc_b091f1c6
  { 1, 133, 135, 2166, 2169 }, // 242 tc_0b04c6c7
  { 1, 133, 135, 2169, 2173 }, // 243 tc_660769f1
  { 1, 137, 140, 2173, 2176 }, // 244 tc_e8797b98
  { 1, 137, 140, 2176, 2180 }, // 245 tc_05ac6f98
  { 1, 140, 143, 2180, 2183 }, // 246 tc_05058f6f
  { 1, 140, 143, 2183, 2187 }, // 247 tc_fd7610da
  { 1, 143, 145, 0, 0 }, // 248 tc_1381a97c
  { 1, 143, 145, 2187, 2188 }, // 249 tc_e3f68a46
  { 1, 145, 147, 2188, 2191 }, // 250 tc_f1de44ef
  { 1, 135, 137, 2191, 2196 }, // 251 tc_9d1dc972
  { 1, 145, 147, 2196, 2200 }, // 252 tc_90bcc1db
  { 1, 147, 150, 2200, 2203 }, // 253 tc_cd94bfe0
  { 1, 147, 150, 2203, 2207 }, // 254 tc_15fdf750
  { 1, 133, 135, 2207, 2211 }, // 255 tc_1ad8a370
  { 1, 133, 135, 2211, 2216 }, // 256 tc_e675c45a
  { 1, 150, 152, 2216, 2219 }, // 257 tc_61bf7c03
  { 1, 150, 152, 2219, 2223 }, // 258 tc_933f2b39
  { 1, 150, 152, 2223, 2227 }, // 259 tc_26a377fe
  { 1, 150, 152, 2227, 2232 }, // 260 tc_2d4051cd
  { 1, 117, 119, 2232, 2235 }, // 261 tc_6e7fa133
  { 1, 95, 97, 2235, 2238 }, // 262 tc_8772086c
  { 1, 97, 99, 2238, 2240 }, // 263 tc_b4416217
  { 1, 104, 107, 2240, 2244 }, // 264 tc_9f363d21
  { 1, 104, 107, 2244, 2249 }, // 265 tc_8e420e4d
  { 1, 152, 155, 2249, 2253 }, // 266 tc_7273323b
  { 1, 152, 155, 2253, 2258 }, // 267 tc_58d21193
  { 1, 97, 99, 2258, 2262 }, // 268 tc_71646d06
  { 1, 135, 137, 2262, 2264 }, // 269 tc_04da405a
  { 1, 135, 137, 2264, 2267 }, // 270 tc_2c745bb8
  { 1, 143, 145, 2267, 2268 }, // 271 tc_b28e51aa
  { 1, 143, 145, 2268, 2270 }, // 272 tc_767c4e9d
  { 1, 155, 157, 2270, 2272 }, // 273 tc_e699ae41
  { 1, 155, 157, 2272, 2275 }, // 274 tc_a0dbea28
  { 1, 155, 157, 2275, 2278 }, // 275 tc_dd5b0695
  { 1, 155, 157, 2278, 2282 }, // 276 tc_3ad719fb
  { 1, 90, 91, 0, 0 }, // 277 tc_77f94a5e
  { 1, 94, 95, 0, 0 }, // 278 tc_55255f2b
  { 1, 90, 91, 2282, 2283 }, // 279 tc_b1ae5f67
  { 1, 90, 91, 2283, 2285 }, // 280 tc_2237d952
  { 1, 92, 93, 2285, 2286 }, // 281 tc_0ba0d5da
  { 1, 92, 93, 0, 0 }, // 282 tc_9b34f5e0
  { 1, 94, 95, 2286, 2287 }, // 283 tc_d7718fbe
  { 1, 90, 91, 2287, 2289 }, // 284 tc_a3070909
  { 1, 94, 95, 2289, 2290 }, // 285 tc_2c3e17fc
  { 1, 94, 95, 2290, 2292 }, // 286 tc_28e55c6f
  { 0, 0, 0, 0, 0 }, // 287 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV65[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 157, 158, 2292, 2295 }, // 1 tc_01d44cb2
  { 1, 158, 159, 2295, 2298 }, // 2 PSEUDO
  { 1, 158, 159, 2298, 2300 }, // 3 tc_c57d9f39
  { 1, 158, 159, 2300, 2304 }, // 4 tc_1c2c7a4a
  { 1, 158, 159, 2304, 2308 }, // 5 tc_442395f3
  { 1, 158, 159, 2308, 2311 }, // 6 tc_713b66bf
  { 1, 158, 159, 2311, 2314 }, // 7 tc_86173609
  { 1, 157, 158, 2314, 2317 }, // 8 tc_5da50c4b
  { 1, 157, 158, 2317, 2320 }, // 9 tc_4a55d03c
  { 1, 158, 159, 2320, 2323 }, // 10 tc_d33e5eee
  { 1, 157, 158, 2323, 2326 }, // 11 tc_651cbe02
  { 1, 159, 160, 2326, 2329 }, // 12 DUPLEX
  { 1, 160, 161, 2329, 2330 }, // 13 tc_ENDLOOP
  { 1, 158, 159, 0, 0 }, // 14 tc_23708a21
  { 1, 158, 159, 2330, 2332 }, // 15 tc_56a124a7
  { 1, 161, 162, 2332, 2334 }, // 16 tc_2f573607
  { 1, 161, 162, 2334, 2337 }, // 17 tc_53c851ab
  { 1, 162, 163, 2337, 2341 }, // 18 tc_fedb7e19
  { 1, 162, 163, 2341, 2344 }, // 19 tc_4222e6bf
  { 1, 162, 163, 2344, 2348 }, // 20 tc_075c8dd8
  { 1, 159, 160, 2348, 2351 }, // 21 tc_9bcfb2ee
  { 1, 159, 160, 2351, 2354 }, // 22 tc_158aa3f7
  { 1, 159, 160, 2354, 2357 }, // 23 tc_df5d53f9
  { 1, 159, 160, 2357, 2360 }, // 24 tc_14ab4f41
  { 1, 159, 160, 2360, 2361 }, // 25 tc_f38f92e1
  { 1, 159, 160, 2361, 2362 }, // 26 tc_1981450d
  { 1, 162, 163, 2362, 2364 }, // 27 tc_e9170fb7
  { 1, 159, 160, 2364, 2366 }, // 28 tc_40d64c94
  { 1, 162, 163, 2366, 2368 }, // 29 LD_tc_ld_SLOT01
  { 1, 157, 158, 2368, 2371 }, // 30 tc_38382228
  { 1, 157, 158, 2371, 2374 }, // 31 tc_c21d7447
  { 1, 157, 158, 2374, 2378 }, // 32 tc_7f8ae742
  { 1, 163, 164, 2378, 2381 }, // 33 tc_5a4b5e58
  { 1, 163, 164, 2381, 2385 }, // 34 tc_197dce51
  { 1, 157, 158, 2385, 2386 }, // 35 tc_44fffc58
  { 1, 162, 163, 2386, 2391 }, // 36 tc_5ceb2f9e
  { 1, 164, 166, 2391, 2394 }, // 37 tc_56c4f9fe
  { 1, 162, 163, 2394, 2399 }, // 38 tc_b4dc7630
  { 1, 162, 163, 2399, 2403 }, // 39 tc_a2b365d2
  { 1, 161, 162, 2403, 2404 }, // 40 tc_60e324ff
  { 1, 166, 168, 2404, 2407 }, // 41 tc_db5555f3
  { 1, 168, 171, 2407, 2410 }, // 42 tc_c0749f3c
  { 1, 171, 173, 2410, 2413 }, // 43 PSEUDOM
  { 1, 164, 166, 2413, 2416 }, // 44 tc_3aacf4a8
  { 1, 173, 176, 2416, 2419 }, // 45 tc_c5dba46e
  { 1, 166, 168, 2419, 2423 }, // 46 tc_af25efd9
  { 1, 157, 158, 2423, 2426 }, // 47 tc_0dfac0a7
  { 1, 162, 163, 2426, 2430 }, // 48 tc_8035e91f
  { 1, 159, 160, 2430, 2434 }, // 49 tc_011e0e9d
  { 1, 162, 163, 2434, 2437 }, // 50 tc_ae5babd7
  { 1, 159, 160, 2437, 2440 }, // 51 tc_5deb5e47
  { 1, 157, 158, 2440, 2445 }, // 52 tc_bb831a7c
  { 1, 159, 160, 2445, 2449 }, // 53 tc_92240447
  { 1, 162, 163, 2449, 2452 }, // 54 tc_7c31e19a
  { 1, 162, 163, 2452, 2456 }, // 55 tc_d03278fd
  { 1, 162, 163, 2456, 2460 }, // 56 tc_65cbd974
  { 1, 159, 160, 2460, 2463 }, // 57 tc_934753bb
  { 1, 162, 163, 2463, 2466 }, // 58 ST_tc_st_SLOT01
  { 1, 176, 178, 2466, 2470 }, // 59 CVI_VA
  { 1, 164, 166, 2470, 2472 }, // 60 tc_0ec46cf9
  { 1, 166, 168, 2472, 2473 }, // 61 tc_718b5c53
  { 1, 178, 182, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 159, 160, 2473, 2474 }, // 63 tc_d45ba9cd
  { 1, 158, 159, 2474, 2477 }, // 64 tc_388f9897
  { 1, 158, 159, 2477, 2479 }, // 65 tc_9124c04f
  { 1, 158, 159, 2479, 2482 }, // 66 tc_4ac61d92
  { 1, 162, 163, 2482, 2484 }, // 67 tc_aee6250c
  { 1, 162, 163, 2484, 2487 }, // 68 tc_eed07714
  { 1, 162, 163, 2487, 2490 }, // 69 tc_74a42bda
  { 1, 162, 163, 2490, 2493 }, // 70 tc_a9edeffa
  { 1, 162, 163, 2493, 2496 }, // 71 tc_838c4d7a
  { 1, 157, 158, 2496, 2498 }, // 72 tc_d61dfdc3
  { 1, 157, 158, 2498, 2501 }, // 73 tc_8a825db2
  { 1, 157, 158, 2501, 2504 }, // 74 tc_f34c1c21
  { 1, 158, 159, 2504, 2507 }, // 75 tc_95a33176
  { 1, 157, 158, 2507, 2509 }, // 76 tc_9f6cd987
  { 1, 158, 159, 0, 0 }, // 77 tc_b837298f
  { 1, 158, 159, 2509, 2512 }, // 78 tc_8b5bd4f5
  { 1, 158, 159, 2512, 2515 }, // 79 tc_84a7500d
  { 1, 163, 164, 2515, 2517 }, // 80 tc_7476d766
  { 1, 163, 164, 2517, 2519 }, // 81 tc_49fdfd4b
  { 1, 157, 158, 2519, 2522 }, // 82 tc_f098b237
  { 1, 157, 158, 2522, 2525 }, // 83 tc_20131976
  { 1, 157, 158, 2525, 2530 }, // 84 tc_1d41f8b7
  { 1, 157, 158, 2530, 2533 }, // 85 tc_a1297125
  { 1, 158, 159, 2533, 2534 }, // 86 tc_112d30d6
  { 1, 157, 158, 2534, 2537 }, // 87 tc_d68dca5c
  { 1, 157, 158, 2537, 2541 }, // 88 tc_788b1d09
  { 1, 157, 158, 2541, 2546 }, // 89 tc_38e0bae9
  { 1, 157, 158, 2546, 2549 }, // 90 tc_407e96f9
  { 1, 157, 158, 2549, 2553 }, // 91 tc_7401744f
  { 1, 157, 158, 2553, 2556 }, // 92 tc_9b3c0462
  { 1, 157, 158, 2556, 2558 }, // 93 tc_151bf368
  { 1, 158, 159, 2558, 2561 }, // 94 tc_9c52f549
  { 1, 157, 158, 2561, 2563 }, // 95 tc_55b33fda
  { 1, 157, 158, 2563, 2567 }, // 96 tc_6fc5dbea
  { 1, 163, 164, 2567, 2569 }, // 97 tc_3edca78f
  { 1, 157, 158, 2569, 2573 }, // 98 tc_a7a13fac
  { 1, 157, 158, 2573, 2575 }, // 99 tc_9783714b
  { 1, 157, 158, 2575, 2578 }, // 100 tc_f0e8e832
  { 1, 157, 158, 2578, 2580 }, // 101 tc_65279839
  { 1, 157, 158, 2580, 2584 }, // 102 tc_0a195f2c
  { 1, 157, 158, 2584, 2588 }, // 103 tc_01e1be3b
  { 1, 157, 158, 2588, 2591 }, // 104 tc_556f6577
  { 1, 157, 158, 2591, 2594 }, // 105 tc_02fe1c65
  { 1, 157, 158, 2594, 2598 }, // 106 tc_9e72dc89
  { 1, 157, 158, 2598, 2603 }, // 107 tc_9edb7c77
  { 1, 157, 158, 2603, 2606 }, // 108 tc_7f7f45f5
  { 1, 157, 158, 2606, 2609 }, // 109 tc_c20701f0
  { 1, 157, 158, 2609, 2613 }, // 110 tc_f7569068
  { 1, 163, 164, 2613, 2615 }, // 111 tc_fae9dfa5
  { 1, 163, 164, 2615, 2617 }, // 112 tc_6ae3426b
  { 1, 157, 158, 2617, 2619 }, // 113 tc_69bfb303
  { 1, 161, 162, 2619, 2620 }, // 114 tc_362b0be2
  { 1, 161, 162, 2620, 2622 }, // 115 tc_dc51281d
  { 1, 158, 159, 2622, 2623 }, // 116 tc_decdde8a
  { 1, 158, 159, 2623, 2625 }, // 117 tc_eeda4109
  { 1, 158, 159, 2625, 2627 }, // 118 tc_711c805f
  { 1, 161, 162, 2627, 2629 }, // 119 tc_ed03645c
  { 1, 161, 162, 2629, 2631 }, // 120 tc_42ff66ba
  { 1, 163, 164, 2631, 2633 }, // 121 tc_57a55b54
  { 1, 163, 164, 2633, 2635 }, // 122 tc_1248597c
  { 1, 163, 164, 2635, 2637 }, // 123 tc_9406230a
  { 1, 161, 162, 2637, 2638 }, // 124 tc_d57d649c
  { 1, 163, 164, 2638, 2640 }, // 125 tc_4abdbdc6
  { 1, 163, 164, 2640, 2642 }, // 126 tc_6d861a95
  { 1, 161, 162, 2642, 2643 }, // 127 tc_45f9d1be
  { 1, 159, 160, 2643, 2646 }, // 128 tc_24e109c7
  { 1, 158, 159, 2646, 2649 }, // 129 tc_9e27f2f9
  { 1, 159, 160, 2649, 2652 }, // 130 tc_f6e2aff9
  { 1, 158, 159, 2652, 2655 }, // 131 tc_24f426ab
  { 1, 159, 160, 2655, 2658 }, // 132 tc_975a4e54
  { 1, 157, 158, 2658, 2661 }, // 133 tc_5502c366
  { 1, 159, 160, 2661, 2663 }, // 134 tc_7b9187d3
  { 1, 158, 159, 2663, 2665 }, // 135 tc_f999c66e
  { 1, 162, 163, 2665, 2670 }, // 136 tc_1c7522a8
  { 1, 162, 163, 2670, 2676 }, // 137 tc_76bb5435
  { 1, 162, 163, 2676, 2678 }, // 138 tc_8a6d0d94
  { 1, 159, 160, 2678, 2680 }, // 139 tc_64b00d8a
  { 1, 162, 163, 2680, 2685 }, // 140 tc_5f2afaf7
  { 1, 162, 163, 2685, 2689 }, // 141 tc_ac65613f
  { 1, 162, 163, 2689, 2694 }, // 142 tc_a32e03e7
  { 1, 162, 163, 2694, 2697 }, // 143 tc_822c3c68
  { 1, 162, 163, 2697, 2701 }, // 144 tc_abfd9a6d
  { 1, 162, 163, 2701, 2705 }, // 145 tc_bf2ffc0f
  { 1, 162, 163, 2705, 2708 }, // 146 tc_7c6d32e4
  { 1, 162, 163, 2708, 2713 }, // 147 tc_45791fb8
  { 1, 162, 163, 2713, 2718 }, // 148 tc_b7c4062a
  { 1, 162, 163, 2718, 2721 }, // 149 tc_5944960d
  { 1, 157, 158, 2721, 2725 }, // 150 tc_2c13e7f5
  { 1, 157, 158, 2725, 2729 }, // 151 tc_a154b476
  { 1, 157, 158, 2729, 2733 }, // 152 tc_a4e22bbd
  { 1, 157, 158, 2733, 2737 }, // 153 tc_503ce0f3
  { 1, 162, 163, 2737, 2739 }, // 154 tc_0655b949
  { 1, 159, 160, 2739, 2741 }, // 155 tc_6e20402a
  { 1, 157, 158, 2741, 2743 }, // 156 tc_a7bdb22c
  { 1, 157, 158, 2743, 2746 }, // 157 tc_db596beb
  { 1, 157, 158, 2746, 2749 }, // 158 tc_a08b630b
  { 1, 157, 158, 2749, 2752 }, // 159 tc_1fcb8495
  { 1, 162, 163, 2752, 2757 }, // 160 tc_9edefe01
  { 1, 162, 163, 2757, 2762 }, // 161 tc_449acf79
  { 1, 159, 160, 2762, 2767 }, // 162 tc_ce59038e
  { 1, 159, 160, 2767, 2772 }, // 163 tc_f529831b
  { 1, 159, 160, 2772, 2777 }, // 164 tc_addc37a8
  { 1, 159, 160, 2777, 2780 }, // 165 tc_6f42bc60
  { 1, 157, 158, 2780, 2782 }, // 166 tc_e3d699e3
  { 1, 162, 163, 2782, 2785 }, // 167 tc_ba9255a6
  { 1, 162, 163, 2785, 2790 }, // 168 tc_1fe4ab69
  { 1, 162, 163, 2790, 2793 }, // 169 tc_bb07f2c5
  { 1, 162, 163, 2793, 2798 }, // 170 tc_8e82e8ca
  { 1, 159, 160, 2798, 2801 }, // 171 tc_cfa0e29b
  { 1, 159, 160, 2801, 2806 }, // 172 tc_0a6c20ae
  { 1, 159, 160, 2806, 2809 }, // 173 tc_0fac1eb8
  { 1, 159, 160, 2809, 2814 }, // 174 tc_829d8a86
  { 1, 162, 163, 2814, 2818 }, // 175 tc_280f7fe1
  { 1, 162, 163, 2818, 2822 }, // 176 tc_887d1bb7
  { 1, 159, 160, 2822, 2826 }, // 177 tc_96ef76ef
  { 1, 159, 160, 2826, 2830 }, // 178 tc_55a9a350
  { 1, 157, 158, 2830, 2834 }, // 179 tc_f0cdeccf
  { 1, 157, 158, 2834, 2839 }, // 180 tc_a38c45dc
  { 1, 157, 158, 2839, 2841 }, // 181 tc_d3632d88
  { 1, 157, 158, 2841, 2845 }, // 182 tc_5e4cf0e8
  { 1, 157, 158, 2845, 2847 }, // 183 tc_ef921005
  { 1, 162, 163, 2847, 2850 }, // 184 tc_5b347363
  { 1, 162, 163, 2850, 2852 }, // 185 tc_3d14a17b
  { 1, 162, 163, 2852, 2853 }, // 186 tc_3fbf1042
  { 1, 162, 163, 2853, 2854 }, // 187 tc_63567288
  { 1, 162, 163, 2854, 2856 }, // 188 tc_59a7822c
  { 1, 162, 163, 0, 0 }, // 189 tc_937dd41c
  { 1, 159, 160, 0, 0 }, // 190 tc_a4ee89db
  { 1, 159, 160, 0, 0 }, // 191 tc_c818ff7f
  { 1, 159, 160, 2856, 2857 }, // 192 tc_1242dc2a
  { 1, 162, 163, 2857, 2859 }, // 193 tc_44d5a428
  { 1, 182, 184, 2859, 2862 }, // 194 tc_540c3da3
  { 1, 184, 186, 2862, 2864 }, // 195 tc_c4edf264
  { 1, 186, 188, 2864, 2866 }, // 196 tc_5bf8afbb
  { 1, 188, 192, 2866, 2869 }, // 197 tc_a7e6707d
  { 1, 188, 192, 2869, 2873 }, // 198 tc_3c56e5ce
  { 1, 168, 171, 2873, 2877 }, // 199 tc_abe8c3b2
  { 1, 168, 171, 2877, 2882 }, // 200 tc_453fe68d
  { 1, 168, 171, 2882, 2886 }, // 201 tc_1ba8a0cd
  { 1, 192, 194, 2886, 2889 }, // 202 tc_52447ecc
  { 1, 192, 194, 2889, 2893 }, // 203 tc_3904b926
  { 1, 192, 194, 2893, 2898 }, // 204 tc_b9db8205
  { 1, 192, 194, 2898, 2902 }, // 205 tc_663c80a7
  { 1, 194, 198, 2902, 2905 }, // 206 tc_f21e8abb
  { 1, 194, 198, 2905, 2909 }, // 207 tc_131f1c81
  { 1, 194, 198, 2909, 2914 }, // 208 tc_c7039829
  { 1, 194, 198, 2914, 2918 }, // 209 tc_e2d2e9e5
  { 1, 198, 200, 2918, 2921 }, // 210 tc_ab23f776
  { 1, 198, 200, 2921, 2925 }, // 211 tc_7177e272
  { 1, 198, 200, 2925, 2930 }, // 212 tc_e99d4c2e
  { 1, 198, 200, 2930, 2934 }, // 213 tc_6942b6e0
  { 1, 173, 176, 2934, 2938 }, // 214 tc_a02a10a8
  { 1, 173, 176, 2938, 2943 }, // 215 tc_54a0dc47
  { 1, 173, 176, 2943, 2947 }, // 216 tc_447d9895
  { 1, 173, 176, 2947, 2952 }, // 217 tc_191381c1
  { 1, 173, 176, 2952, 2956 }, // 218 tc_3e2aaafc
  { 1, 198, 200, 2956, 2958 }, // 219 tc_3ce09744
  { 1, 198, 200, 2958, 2961 }, // 220 tc_20a4bbec
  { 1, 184, 186, 2961, 2964 }, // 221 tc_c127de3a
  { 1, 164, 166, 2964, 2968 }, // 222 tc_257f6f7c
  { 1, 164, 166, 2968, 2973 }, // 223 tc_7e6a3e89
  { 1, 164, 166, 2973, 2977 }, // 224 tc_e35c1e93
  { 1, 200, 202, 2977, 2980 }, // 225 tc_05ca8cfd
  { 1, 202, 204, 2980, 2983 }, // 226 tc_d8287c14
  { 1, 202, 204, 2983, 2987 }, // 227 tc_08a4f1b6
  { 1, 186, 188, 2987, 2991 }, // 228 tc_56e64202
  { 1, 184, 186, 2991, 2994 }, // 229 tc_ac4046bc
  { 1, 184, 186, 2994, 2998 }, // 230 tc_2e8f5f6e
  { 1, 200, 202, 2998, 3001 }, // 231 tc_7417e785
  { 1, 200, 202, 3001, 3005 }, // 232 tc_309dbb4f
  { 1, 204, 206, 3005, 3009 }, // 233 tc_df80eeb0
  { 1, 200, 202, 3009, 3013 }, // 234 tc_16ff9ef8
  { 1, 200, 202, 3013, 3015 }, // 235 tc_51d0ecc3
  { 1, 204, 206, 3015, 3020 }, // 236 tc_561aaa58
  { 1, 186, 188, 3020, 3022 }, // 237 tc_946013d8
  { 1, 186, 188, 3022, 3025 }, // 238 tc_46d6c3e0
  { 1, 204, 206, 3025, 3029 }, // 239 tc_87adc037
  { 1, 184, 186, 3029, 3032 }, // 240 tc_649072c2
  { 1, 184, 186, 3032, 3036 }, // 241 tc_b091f1c6
  { 1, 202, 204, 3036, 3039 }, // 242 tc_0b04c6c7
  { 1, 202, 204, 3039, 3043 }, // 243 tc_660769f1
  { 1, 206, 209, 3043, 3046 }, // 244 tc_e8797b98
  { 1, 206, 209, 3046, 3050 }, // 245 tc_05ac6f98
  { 1, 209, 212, 3050, 3053 }, // 246 tc_05058f6f
  { 1, 209, 212, 3053, 3057 }, // 247 tc_fd7610da
  { 1, 212, 214, 0, 0 }, // 248 tc_1381a97c
  { 1, 212, 214, 3057, 3058 }, // 249 tc_e3f68a46
  { 1, 214, 216, 3058, 3061 }, // 250 tc_f1de44ef
  { 1, 204, 206, 3061, 3066 }, // 251 tc_9d1dc972
  { 1, 214, 216, 3066, 3070 }, // 252 tc_90bcc1db
  { 1, 216, 219, 3070, 3073 }, // 253 tc_cd94bfe0
  { 1, 216, 219, 3073, 3077 }, // 254 tc_15fdf750
  { 1, 202, 204, 3077, 3081 }, // 255 tc_1ad8a370
  { 1, 202, 204, 3081, 3086 }, // 256 tc_e675c45a
  { 1, 219, 221, 3086, 3089 }, // 257 tc_61bf7c03
  { 1, 219, 221, 3089, 3093 }, // 258 tc_933f2b39
  { 1, 219, 221, 3093, 3097 }, // 259 tc_26a377fe
  { 1, 219, 221, 3097, 3102 }, // 260 tc_2d4051cd
  { 1, 186, 188, 3102, 3105 }, // 261 tc_6e7fa133
  { 1, 164, 166, 3105, 3108 }, // 262 tc_8772086c
  { 1, 166, 168, 3108, 3110 }, // 263 tc_b4416217
  { 1, 173, 176, 3110, 3114 }, // 264 tc_9f363d21
  { 1, 173, 176, 3114, 3119 }, // 265 tc_8e420e4d
  { 1, 221, 224, 3119, 3123 }, // 266 tc_7273323b
  { 1, 221, 224, 3123, 3128 }, // 267 tc_58d21193
  { 1, 166, 168, 3128, 3132 }, // 268 tc_71646d06
  { 1, 204, 206, 3132, 3134 }, // 269 tc_04da405a
  { 1, 204, 206, 3134, 3137 }, // 270 tc_2c745bb8
  { 1, 212, 214, 3137, 3138 }, // 271 tc_b28e51aa
  { 1, 212, 214, 3138, 3140 }, // 272 tc_767c4e9d
  { 1, 224, 226, 3140, 3142 }, // 273 tc_e699ae41
  { 1, 224, 226, 3142, 3145 }, // 274 tc_a0dbea28
  { 1, 224, 226, 3145, 3148 }, // 275 tc_dd5b0695
  { 1, 224, 226, 3148, 3152 }, // 276 tc_3ad719fb
  { 1, 159, 160, 0, 0 }, // 277 tc_77f94a5e
  { 1, 163, 164, 0, 0 }, // 278 tc_55255f2b
  { 1, 159, 160, 3152, 3153 }, // 279 tc_b1ae5f67
  { 1, 159, 160, 3153, 3155 }, // 280 tc_2237d952
  { 1, 161, 162, 3155, 3156 }, // 281 tc_0ba0d5da
  { 1, 161, 162, 0, 0 }, // 282 tc_9b34f5e0
  { 1, 163, 164, 3156, 3157 }, // 283 tc_d7718fbe
  { 1, 159, 160, 3157, 3159 }, // 284 tc_a3070909
  { 1, 163, 164, 3159, 3160 }, // 285 tc_2c3e17fc
  { 1, 163, 164, 3160, 3162 }, // 286 tc_28e55c6f
  { 0, 0, 0, 0, 0 }, // 287 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV66[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 226, 227, 3162, 3165 }, // 1 tc_01d44cb2
  { 1, 227, 228, 3165, 3168 }, // 2 PSEUDO
  { 1, 227, 228, 3168, 3170 }, // 3 tc_c57d9f39
  { 1, 227, 228, 3170, 3174 }, // 4 tc_1c2c7a4a
  { 1, 227, 228, 3174, 3178 }, // 5 tc_442395f3
  { 1, 227, 228, 3178, 3181 }, // 6 tc_713b66bf
  { 1, 227, 228, 3181, 3184 }, // 7 tc_86173609
  { 1, 226, 227, 3184, 3187 }, // 8 tc_5da50c4b
  { 1, 226, 227, 3187, 3190 }, // 9 tc_4a55d03c
  { 1, 227, 228, 3190, 3193 }, // 10 tc_d33e5eee
  { 1, 226, 227, 3193, 3196 }, // 11 tc_651cbe02
  { 1, 228, 229, 3196, 3199 }, // 12 DUPLEX
  { 1, 229, 230, 3199, 3200 }, // 13 tc_ENDLOOP
  { 1, 227, 228, 0, 0 }, // 14 tc_23708a21
  { 1, 227, 228, 3200, 3202 }, // 15 tc_56a124a7
  { 1, 230, 231, 3202, 3204 }, // 16 tc_2f573607
  { 1, 230, 231, 3204, 3207 }, // 17 tc_53c851ab
  { 1, 231, 232, 3207, 3211 }, // 18 tc_fedb7e19
  { 1, 231, 232, 3211, 3214 }, // 19 tc_4222e6bf
  { 1, 231, 232, 3214, 3218 }, // 20 tc_075c8dd8
  { 1, 228, 229, 3218, 3221 }, // 21 tc_9bcfb2ee
  { 1, 228, 229, 3221, 3224 }, // 22 tc_158aa3f7
  { 1, 228, 229, 3224, 3227 }, // 23 tc_df5d53f9
  { 1, 228, 229, 3227, 3230 }, // 24 tc_14ab4f41
  { 1, 228, 229, 3230, 3231 }, // 25 tc_f38f92e1
  { 1, 228, 229, 3231, 3232 }, // 26 tc_1981450d
  { 1, 231, 232, 3232, 3234 }, // 27 tc_e9170fb7
  { 1, 228, 229, 3234, 3236 }, // 28 tc_40d64c94
  { 1, 231, 232, 3236, 3238 }, // 29 LD_tc_ld_SLOT01
  { 1, 226, 227, 3238, 3241 }, // 30 tc_38382228
  { 1, 226, 227, 3241, 3244 }, // 31 tc_c21d7447
  { 1, 226, 227, 3244, 3248 }, // 32 tc_7f8ae742
  { 1, 232, 233, 3248, 3251 }, // 33 tc_5a4b5e58
  { 1, 232, 233, 3251, 3255 }, // 34 tc_197dce51
  { 1, 226, 227, 3255, 3256 }, // 35 tc_44fffc58
  { 1, 231, 232, 3256, 3261 }, // 36 tc_5ceb2f9e
  { 1, 233, 235, 3261, 3264 }, // 37 tc_56c4f9fe
  { 1, 231, 232, 3264, 3269 }, // 38 tc_b4dc7630
  { 1, 231, 232, 3269, 3273 }, // 39 tc_a2b365d2
  { 1, 230, 231, 3273, 3274 }, // 40 tc_60e324ff
  { 1, 235, 237, 3274, 3277 }, // 41 tc_db5555f3
  { 1, 237, 240, 3277, 3280 }, // 42 tc_c0749f3c
  { 1, 240, 242, 3280, 3283 }, // 43 PSEUDOM
  { 1, 233, 235, 3283, 3286 }, // 44 tc_3aacf4a8
  { 1, 242, 245, 3286, 3289 }, // 45 tc_c5dba46e
  { 1, 235, 237, 3289, 3293 }, // 46 tc_af25efd9
  { 1, 226, 227, 3293, 3296 }, // 47 tc_0dfac0a7
  { 1, 231, 232, 3296, 3300 }, // 48 tc_8035e91f
  { 1, 228, 229, 3300, 3304 }, // 49 tc_011e0e9d
  { 1, 231, 232, 3304, 3307 }, // 50 tc_ae5babd7
  { 1, 228, 229, 3307, 3310 }, // 51 tc_5deb5e47
  { 1, 226, 227, 3310, 3315 }, // 52 tc_bb831a7c
  { 1, 228, 229, 3315, 3319 }, // 53 tc_92240447
  { 1, 231, 232, 3319, 3322 }, // 54 tc_7c31e19a
  { 1, 231, 232, 3322, 3326 }, // 55 tc_d03278fd
  { 1, 231, 232, 3326, 3330 }, // 56 tc_65cbd974
  { 1, 228, 229, 3330, 3333 }, // 57 tc_934753bb
  { 1, 231, 232, 3333, 3336 }, // 58 ST_tc_st_SLOT01
  { 1, 245, 247, 3336, 3340 }, // 59 CVI_VA
  { 1, 233, 235, 3340, 3342 }, // 60 tc_0ec46cf9
  { 1, 235, 237, 3342, 3343 }, // 61 tc_718b5c53
  { 1, 247, 251, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 228, 229, 3343, 3344 }, // 63 tc_d45ba9cd
  { 1, 227, 228, 3344, 3347 }, // 64 tc_388f9897
  { 1, 227, 228, 3347, 3349 }, // 65 tc_9124c04f
  { 1, 227, 228, 3349, 3352 }, // 66 tc_4ac61d92
  { 1, 231, 232, 3352, 3354 }, // 67 tc_aee6250c
  { 1, 231, 232, 3354, 3357 }, // 68 tc_eed07714
  { 1, 231, 232, 3357, 3360 }, // 69 tc_74a42bda
  { 1, 231, 232, 3360, 3363 }, // 70 tc_a9edeffa
  { 1, 231, 232, 3363, 3366 }, // 71 tc_838c4d7a
  { 1, 226, 227, 3366, 3368 }, // 72 tc_d61dfdc3
  { 1, 226, 227, 3368, 3371 }, // 73 tc_8a825db2
  { 1, 226, 227, 3371, 3374 }, // 74 tc_f34c1c21
  { 1, 227, 228, 3374, 3377 }, // 75 tc_95a33176
  { 1, 226, 227, 3377, 3379 }, // 76 tc_9f6cd987
  { 1, 227, 228, 0, 0 }, // 77 tc_b837298f
  { 1, 227, 228, 3379, 3382 }, // 78 tc_8b5bd4f5
  { 1, 227, 228, 3382, 3385 }, // 79 tc_84a7500d
  { 1, 232, 233, 3385, 3387 }, // 80 tc_7476d766
  { 1, 232, 233, 3387, 3389 }, // 81 tc_49fdfd4b
  { 1, 226, 227, 3389, 3392 }, // 82 tc_f098b237
  { 1, 226, 227, 3392, 3395 }, // 83 tc_20131976
  { 1, 226, 227, 3395, 3400 }, // 84 tc_1d41f8b7
  { 1, 226, 227, 3400, 3403 }, // 85 tc_a1297125
  { 1, 227, 228, 3403, 3404 }, // 86 tc_112d30d6
  { 1, 226, 227, 3404, 3407 }, // 87 tc_d68dca5c
  { 1, 226, 227, 3407, 3411 }, // 88 tc_788b1d09
  { 1, 226, 227, 3411, 3416 }, // 89 tc_38e0bae9
  { 1, 226, 227, 3416, 3419 }, // 90 tc_407e96f9
  { 1, 226, 227, 3419, 3423 }, // 91 tc_7401744f
  { 1, 226, 227, 3423, 3426 }, // 92 tc_9b3c0462
  { 1, 226, 227, 3426, 3428 }, // 93 tc_151bf368
  { 1, 227, 228, 3428, 3431 }, // 94 tc_9c52f549
  { 1, 226, 227, 3431, 3433 }, // 95 tc_55b33fda
  { 1, 226, 227, 3433, 3437 }, // 96 tc_6fc5dbea
  { 1, 232, 233, 3437, 3439 }, // 97 tc_3edca78f
  { 1, 226, 227, 3439, 3443 }, // 98 tc_a7a13fac
  { 1, 226, 227, 3443, 3445 }, // 99 tc_9783714b
  { 1, 226, 227, 3445, 3448 }, // 100 tc_f0e8e832
  { 1, 226, 227, 3448, 3450 }, // 101 tc_65279839
  { 1, 226, 227, 3450, 3454 }, // 102 tc_0a195f2c
  { 1, 226, 227, 3454, 3458 }, // 103 tc_01e1be3b
  { 1, 226, 227, 3458, 3461 }, // 104 tc_556f6577
  { 1, 226, 227, 3461, 3464 }, // 105 tc_02fe1c65
  { 1, 226, 227, 3464, 3468 }, // 106 tc_9e72dc89
  { 1, 226, 227, 3468, 3473 }, // 107 tc_9edb7c77
  { 1, 226, 227, 3473, 3476 }, // 108 tc_7f7f45f5
  { 1, 226, 227, 3476, 3479 }, // 109 tc_c20701f0
  { 1, 226, 227, 3479, 3483 }, // 110 tc_f7569068
  { 1, 232, 233, 3483, 3485 }, // 111 tc_fae9dfa5
  { 1, 232, 233, 3485, 3487 }, // 112 tc_6ae3426b
  { 1, 226, 227, 3487, 3489 }, // 113 tc_69bfb303
  { 1, 230, 231, 3489, 3490 }, // 114 tc_362b0be2
  { 1, 230, 231, 3490, 3492 }, // 115 tc_dc51281d
  { 1, 227, 228, 3492, 3493 }, // 116 tc_decdde8a
  { 1, 227, 228, 3493, 3495 }, // 117 tc_eeda4109
  { 1, 227, 228, 3495, 3497 }, // 118 tc_711c805f
  { 1, 230, 231, 3497, 3499 }, // 119 tc_ed03645c
  { 1, 230, 231, 3499, 3501 }, // 120 tc_42ff66ba
  { 1, 232, 233, 3501, 3503 }, // 121 tc_57a55b54
  { 1, 232, 233, 3503, 3505 }, // 122 tc_1248597c
  { 1, 232, 233, 3505, 3507 }, // 123 tc_9406230a
  { 1, 230, 231, 3507, 3508 }, // 124 tc_d57d649c
  { 1, 232, 233, 3508, 3510 }, // 125 tc_4abdbdc6
  { 1, 232, 233, 3510, 3512 }, // 126 tc_6d861a95
  { 1, 230, 231, 3512, 3513 }, // 127 tc_45f9d1be
  { 1, 228, 229, 3513, 3516 }, // 128 tc_24e109c7
  { 1, 227, 228, 3516, 3519 }, // 129 tc_9e27f2f9
  { 1, 228, 229, 3519, 3522 }, // 130 tc_f6e2aff9
  { 1, 227, 228, 3522, 3525 }, // 131 tc_24f426ab
  { 1, 228, 229, 3525, 3528 }, // 132 tc_975a4e54
  { 1, 226, 227, 3528, 3531 }, // 133 tc_5502c366
  { 1, 228, 229, 3531, 3533 }, // 134 tc_7b9187d3
  { 1, 227, 228, 3533, 3535 }, // 135 tc_f999c66e
  { 1, 231, 232, 3535, 3540 }, // 136 tc_1c7522a8
  { 1, 231, 232, 3540, 3546 }, // 137 tc_76bb5435
  { 1, 231, 232, 3546, 3548 }, // 138 tc_8a6d0d94
  { 1, 228, 229, 3548, 3550 }, // 139 tc_64b00d8a
  { 1, 231, 232, 3550, 3555 }, // 140 tc_5f2afaf7
  { 1, 231, 232, 3555, 3559 }, // 141 tc_ac65613f
  { 1, 231, 232, 3559, 3564 }, // 142 tc_a32e03e7
  { 1, 231, 232, 3564, 3567 }, // 143 tc_822c3c68
  { 1, 231, 232, 3567, 3571 }, // 144 tc_abfd9a6d
  { 1, 231, 232, 3571, 3575 }, // 145 tc_bf2ffc0f
  { 1, 231, 232, 3575, 3578 }, // 146 tc_7c6d32e4
  { 1, 231, 232, 3578, 3583 }, // 147 tc_45791fb8
  { 1, 231, 232, 3583, 3588 }, // 148 tc_b7c4062a
  { 1, 231, 232, 3588, 3591 }, // 149 tc_5944960d
  { 1, 226, 227, 3591, 3595 }, // 150 tc_2c13e7f5
  { 1, 226, 227, 3595, 3599 }, // 151 tc_a154b476
  { 1, 226, 227, 3599, 3603 }, // 152 tc_a4e22bbd
  { 1, 226, 227, 3603, 3607 }, // 153 tc_503ce0f3
  { 1, 231, 232, 3607, 3609 }, // 154 tc_0655b949
  { 1, 228, 229, 3609, 3611 }, // 155 tc_6e20402a
  { 1, 226, 227, 3611, 3613 }, // 156 tc_a7bdb22c
  { 1, 226, 227, 3613, 3616 }, // 157 tc_db596beb
  { 1, 226, 227, 3616, 3619 }, // 158 tc_a08b630b
  { 1, 226, 227, 3619, 3622 }, // 159 tc_1fcb8495
  { 1, 231, 232, 3622, 3627 }, // 160 tc_9edefe01
  { 1, 231, 232, 3627, 3632 }, // 161 tc_449acf79
  { 1, 228, 229, 3632, 3637 }, // 162 tc_ce59038e
  { 1, 228, 229, 3637, 3642 }, // 163 tc_f529831b
  { 1, 228, 229, 3642, 3647 }, // 164 tc_addc37a8
  { 1, 228, 229, 3647, 3650 }, // 165 tc_6f42bc60
  { 1, 226, 227, 3650, 3652 }, // 166 tc_e3d699e3
  { 1, 231, 232, 3652, 3655 }, // 167 tc_ba9255a6
  { 1, 231, 232, 3655, 3660 }, // 168 tc_1fe4ab69
  { 1, 231, 232, 3660, 3663 }, // 169 tc_bb07f2c5
  { 1, 231, 232, 3663, 3668 }, // 170 tc_8e82e8ca
  { 1, 228, 229, 3668, 3671 }, // 171 tc_cfa0e29b
  { 1, 228, 229, 3671, 3676 }, // 172 tc_0a6c20ae
  { 1, 228, 229, 3676, 3679 }, // 173 tc_0fac1eb8
  { 1, 228, 229, 3679, 3684 }, // 174 tc_829d8a86
  { 1, 231, 232, 3684, 3688 }, // 175 tc_280f7fe1
  { 1, 231, 232, 3688, 3692 }, // 176 tc_887d1bb7
  { 1, 228, 229, 3692, 3696 }, // 177 tc_96ef76ef
  { 1, 228, 229, 3696, 3700 }, // 178 tc_55a9a350
  { 1, 226, 227, 3700, 3704 }, // 179 tc_f0cdeccf
  { 1, 226, 227, 3704, 3709 }, // 180 tc_a38c45dc
  { 1, 226, 227, 3709, 3711 }, // 181 tc_d3632d88
  { 1, 226, 227, 3711, 3715 }, // 182 tc_5e4cf0e8
  { 1, 226, 227, 3715, 3717 }, // 183 tc_ef921005
  { 1, 231, 232, 3717, 3720 }, // 184 tc_5b347363
  { 1, 231, 232, 3720, 3722 }, // 185 tc_3d14a17b
  { 1, 231, 232, 3722, 3723 }, // 186 tc_3fbf1042
  { 1, 231, 232, 3723, 3724 }, // 187 tc_63567288
  { 1, 231, 232, 3724, 3726 }, // 188 tc_59a7822c
  { 1, 231, 232, 0, 0 }, // 189 tc_937dd41c
  { 1, 228, 229, 0, 0 }, // 190 tc_a4ee89db
  { 1, 228, 229, 0, 0 }, // 191 tc_c818ff7f
  { 1, 228, 229, 3726, 3727 }, // 192 tc_1242dc2a
  { 1, 231, 232, 3727, 3729 }, // 193 tc_44d5a428
  { 1, 251, 253, 3729, 3732 }, // 194 tc_540c3da3
  { 1, 253, 255, 3732, 3734 }, // 195 tc_c4edf264
  { 1, 255, 257, 3734, 3736 }, // 196 tc_5bf8afbb
  { 1, 257, 261, 3736, 3739 }, // 197 tc_a7e6707d
  { 1, 257, 261, 3739, 3743 }, // 198 tc_3c56e5ce
  { 1, 237, 240, 3743, 3747 }, // 199 tc_abe8c3b2
  { 1, 237, 240, 3747, 3752 }, // 200 tc_453fe68d
  { 1, 237, 240, 3752, 3756 }, // 201 tc_1ba8a0cd
  { 1, 261, 263, 3756, 3759 }, // 202 tc_52447ecc
  { 1, 261, 263, 3759, 3763 }, // 203 tc_3904b926
  { 1, 261, 263, 3763, 3768 }, // 204 tc_b9db8205
  { 1, 261, 263, 3768, 3772 }, // 205 tc_663c80a7
  { 1, 263, 267, 3772, 3775 }, // 206 tc_f21e8abb
  { 1, 263, 267, 3775, 3779 }, // 207 tc_131f1c81
  { 1, 263, 267, 3779, 3784 }, // 208 tc_c7039829
  { 1, 263, 267, 3784, 3788 }, // 209 tc_e2d2e9e5
  { 1, 267, 269, 3788, 3791 }, // 210 tc_ab23f776
  { 1, 267, 269, 3791, 3795 }, // 211 tc_7177e272
  { 1, 267, 269, 3795, 3800 }, // 212 tc_e99d4c2e
  { 1, 267, 269, 3800, 3804 }, // 213 tc_6942b6e0
  { 1, 242, 245, 3804, 3808 }, // 214 tc_a02a10a8
  { 1, 242, 245, 3808, 3813 }, // 215 tc_54a0dc47
  { 1, 242, 245, 3813, 3817 }, // 216 tc_447d9895
  { 1, 242, 245, 3817, 3822 }, // 217 tc_191381c1
  { 1, 242, 245, 3822, 3826 }, // 218 tc_3e2aaafc
  { 1, 267, 269, 3826, 3828 }, // 219 tc_3ce09744
  { 1, 267, 269, 3828, 3831 }, // 220 tc_20a4bbec
  { 1, 253, 255, 3831, 3834 }, // 221 tc_c127de3a
  { 1, 233, 235, 3834, 3838 }, // 222 tc_257f6f7c
  { 1, 233, 235, 3838, 3843 }, // 223 tc_7e6a3e89
  { 1, 233, 235, 3843, 3847 }, // 224 tc_e35c1e93
  { 1, 269, 271, 3847, 3850 }, // 225 tc_05ca8cfd
  { 1, 271, 273, 3850, 3853 }, // 226 tc_d8287c14
  { 1, 271, 273, 3853, 3857 }, // 227 tc_08a4f1b6
  { 1, 255, 257, 3857, 3861 }, // 228 tc_56e64202
  { 1, 253, 255, 3861, 3864 }, // 229 tc_ac4046bc
  { 1, 253, 255, 3864, 3868 }, // 230 tc_2e8f5f6e
  { 1, 269, 271, 3868, 3871 }, // 231 tc_7417e785
  { 1, 269, 271, 3871, 3875 }, // 232 tc_309dbb4f
  { 1, 273, 275, 3875, 3879 }, // 233 tc_df80eeb0
  { 1, 269, 271, 3879, 3883 }, // 234 tc_16ff9ef8
  { 1, 269, 271, 3883, 3885 }, // 235 tc_51d0ecc3
  { 1, 273, 275, 3885, 3890 }, // 236 tc_561aaa58
  { 1, 255, 257, 3890, 3892 }, // 237 tc_946013d8
  { 1, 255, 257, 3892, 3895 }, // 238 tc_46d6c3e0
  { 1, 273, 275, 3895, 3899 }, // 239 tc_87adc037
  { 1, 253, 255, 3899, 3902 }, // 240 tc_649072c2
  { 1, 253, 255, 3902, 3906 }, // 241 tc_b091f1c6
  { 1, 271, 273, 3906, 3909 }, // 242 tc_0b04c6c7
  { 1, 271, 273, 3909, 3913 }, // 243 tc_660769f1
  { 1, 275, 278, 3913, 3916 }, // 244 tc_e8797b98
  { 1, 275, 278, 3916, 3920 }, // 245 tc_05ac6f98
  { 1, 278, 281, 3920, 3923 }, // 246 tc_05058f6f
  { 1, 278, 281, 3923, 3927 }, // 247 tc_fd7610da
  { 1, 281, 283, 0, 0 }, // 248 tc_1381a97c
  { 1, 281, 283, 3927, 3928 }, // 249 tc_e3f68a46
  { 1, 283, 285, 3928, 3931 }, // 250 tc_f1de44ef
  { 1, 273, 275, 3931, 3936 }, // 251 tc_9d1dc972
  { 1, 283, 285, 3936, 3940 }, // 252 tc_90bcc1db
  { 1, 285, 288, 3940, 3943 }, // 253 tc_cd94bfe0
  { 1, 285, 288, 3943, 3947 }, // 254 tc_15fdf750
  { 1, 271, 273, 3947, 3951 }, // 255 tc_1ad8a370
  { 1, 271, 273, 3951, 3956 }, // 256 tc_e675c45a
  { 1, 288, 290, 3956, 3959 }, // 257 tc_61bf7c03
  { 1, 288, 290, 3959, 3963 }, // 258 tc_933f2b39
  { 1, 288, 290, 3963, 3967 }, // 259 tc_26a377fe
  { 1, 288, 290, 3967, 3972 }, // 260 tc_2d4051cd
  { 1, 255, 257, 3972, 3975 }, // 261 tc_6e7fa133
  { 1, 233, 235, 3975, 3978 }, // 262 tc_8772086c
  { 1, 235, 237, 3978, 3980 }, // 263 tc_b4416217
  { 1, 242, 245, 3980, 3984 }, // 264 tc_9f363d21
  { 1, 242, 245, 3984, 3989 }, // 265 tc_8e420e4d
  { 1, 290, 293, 3989, 3993 }, // 266 tc_7273323b
  { 1, 290, 293, 3993, 3998 }, // 267 tc_58d21193
  { 1, 235, 237, 3998, 4002 }, // 268 tc_71646d06
  { 1, 273, 275, 4002, 4004 }, // 269 tc_04da405a
  { 1, 273, 275, 4004, 4007 }, // 270 tc_2c745bb8
  { 1, 281, 283, 4007, 4008 }, // 271 tc_b28e51aa
  { 1, 281, 283, 4008, 4010 }, // 272 tc_767c4e9d
  { 1, 293, 295, 4010, 4012 }, // 273 tc_e699ae41
  { 1, 293, 295, 4012, 4015 }, // 274 tc_a0dbea28
  { 1, 293, 295, 4015, 4018 }, // 275 tc_dd5b0695
  { 1, 293, 295, 4018, 4022 }, // 276 tc_3ad719fb
  { 1, 228, 229, 0, 0 }, // 277 tc_77f94a5e
  { 1, 232, 233, 0, 0 }, // 278 tc_55255f2b
  { 1, 228, 229, 4022, 4023 }, // 279 tc_b1ae5f67
  { 1, 228, 229, 4023, 4025 }, // 280 tc_2237d952
  { 1, 230, 231, 4025, 4026 }, // 281 tc_0ba0d5da
  { 1, 230, 231, 0, 0 }, // 282 tc_9b34f5e0
  { 1, 232, 233, 4026, 4027 }, // 283 tc_d7718fbe
  { 1, 228, 229, 4027, 4029 }, // 284 tc_a3070909
  { 1, 232, 233, 4029, 4030 }, // 285 tc_2c3e17fc
  { 1, 232, 233, 4030, 4032 }, // 286 tc_28e55c6f
  { 0, 0, 0, 0, 0 }, // 287 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV67[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 295, 296, 4032, 4035 }, // 1 tc_01d44cb2
  { 1, 296, 297, 4035, 4038 }, // 2 PSEUDO
  { 1, 296, 297, 4038, 4040 }, // 3 tc_c57d9f39
  { 1, 296, 297, 4040, 4044 }, // 4 tc_1c2c7a4a
  { 1, 296, 297, 4044, 4048 }, // 5 tc_442395f3
  { 1, 296, 297, 4048, 4051 }, // 6 tc_713b66bf
  { 1, 296, 297, 4051, 4054 }, // 7 tc_86173609
  { 1, 295, 296, 4054, 4057 }, // 8 tc_5da50c4b
  { 1, 295, 296, 4057, 4060 }, // 9 tc_4a55d03c
  { 1, 296, 297, 4060, 4063 }, // 10 tc_d33e5eee
  { 1, 295, 296, 4063, 4066 }, // 11 tc_651cbe02
  { 1, 297, 298, 4066, 4069 }, // 12 DUPLEX
  { 1, 298, 299, 4069, 4070 }, // 13 tc_ENDLOOP
  { 1, 296, 297, 0, 0 }, // 14 tc_23708a21
  { 1, 296, 297, 4070, 4072 }, // 15 tc_56a124a7
  { 1, 299, 300, 4072, 4074 }, // 16 tc_2f573607
  { 1, 299, 300, 4074, 4077 }, // 17 tc_53c851ab
  { 1, 300, 301, 4077, 4081 }, // 18 tc_fedb7e19
  { 1, 300, 301, 4081, 4084 }, // 19 tc_4222e6bf
  { 1, 300, 301, 4084, 4088 }, // 20 tc_075c8dd8
  { 1, 297, 298, 4088, 4091 }, // 21 tc_9bcfb2ee
  { 1, 297, 298, 4091, 4094 }, // 22 tc_158aa3f7
  { 1, 297, 298, 4094, 4097 }, // 23 tc_df5d53f9
  { 1, 297, 298, 4097, 4100 }, // 24 tc_14ab4f41
  { 1, 297, 298, 4100, 4101 }, // 25 tc_f38f92e1
  { 1, 297, 298, 4101, 4102 }, // 26 tc_1981450d
  { 1, 300, 301, 4102, 4104 }, // 27 tc_e9170fb7
  { 1, 297, 298, 4104, 4106 }, // 28 tc_40d64c94
  { 1, 300, 301, 4106, 4108 }, // 29 LD_tc_ld_SLOT01
  { 1, 295, 296, 4108, 4111 }, // 30 tc_38382228
  { 1, 295, 296, 4111, 4114 }, // 31 tc_c21d7447
  { 1, 295, 296, 4114, 4118 }, // 32 tc_7f8ae742
  { 1, 301, 302, 4118, 4121 }, // 33 tc_5a4b5e58
  { 1, 301, 302, 4121, 4125 }, // 34 tc_197dce51
  { 1, 295, 296, 4125, 4126 }, // 35 tc_44fffc58
  { 1, 300, 301, 4126, 4131 }, // 36 tc_5ceb2f9e
  { 1, 302, 304, 4131, 4134 }, // 37 tc_56c4f9fe
  { 1, 300, 301, 4134, 4139 }, // 38 tc_b4dc7630
  { 1, 300, 301, 4139, 4143 }, // 39 tc_a2b365d2
  { 1, 299, 300, 4143, 4144 }, // 40 tc_60e324ff
  { 1, 304, 306, 4144, 4147 }, // 41 tc_db5555f3
  { 1, 306, 309, 4147, 4150 }, // 42 tc_c0749f3c
  { 1, 309, 311, 4150, 4153 }, // 43 PSEUDOM
  { 1, 302, 304, 4153, 4156 }, // 44 tc_3aacf4a8
  { 1, 311, 314, 4156, 4159 }, // 45 tc_c5dba46e
  { 1, 304, 306, 4159, 4163 }, // 46 tc_af25efd9
  { 1, 295, 296, 4163, 4166 }, // 47 tc_0dfac0a7
  { 1, 300, 301, 4166, 4170 }, // 48 tc_8035e91f
  { 1, 297, 298, 4170, 4174 }, // 49 tc_011e0e9d
  { 1, 300, 301, 4174, 4177 }, // 50 tc_ae5babd7
  { 1, 297, 298, 4177, 4180 }, // 51 tc_5deb5e47
  { 1, 295, 296, 4180, 4185 }, // 52 tc_bb831a7c
  { 1, 297, 298, 4185, 4189 }, // 53 tc_92240447
  { 1, 300, 301, 4189, 4192 }, // 54 tc_7c31e19a
  { 1, 300, 301, 4192, 4196 }, // 55 tc_d03278fd
  { 1, 300, 301, 4196, 4200 }, // 56 tc_65cbd974
  { 1, 297, 298, 4200, 4203 }, // 57 tc_934753bb
  { 1, 300, 301, 4203, 4206 }, // 58 ST_tc_st_SLOT01
  { 1, 314, 316, 4206, 4210 }, // 59 CVI_VA
  { 1, 302, 304, 4210, 4212 }, // 60 tc_0ec46cf9
  { 1, 304, 306, 4212, 4213 }, // 61 tc_718b5c53
  { 1, 316, 320, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 297, 298, 4213, 4214 }, // 63 tc_d45ba9cd
  { 1, 296, 297, 4214, 4217 }, // 64 tc_388f9897
  { 1, 296, 297, 4217, 4219 }, // 65 tc_9124c04f
  { 1, 296, 297, 4219, 4222 }, // 66 tc_4ac61d92
  { 1, 300, 301, 4222, 4224 }, // 67 tc_aee6250c
  { 1, 300, 301, 4224, 4227 }, // 68 tc_eed07714
  { 1, 300, 301, 4227, 4230 }, // 69 tc_74a42bda
  { 1, 300, 301, 4230, 4233 }, // 70 tc_a9edeffa
  { 1, 300, 301, 4233, 4236 }, // 71 tc_838c4d7a
  { 1, 295, 296, 4236, 4238 }, // 72 tc_d61dfdc3
  { 1, 295, 296, 4238, 4241 }, // 73 tc_8a825db2
  { 1, 295, 296, 4241, 4244 }, // 74 tc_f34c1c21
  { 1, 296, 297, 4244, 4247 }, // 75 tc_95a33176
  { 1, 295, 296, 4247, 4249 }, // 76 tc_9f6cd987
  { 1, 296, 297, 0, 0 }, // 77 tc_b837298f
  { 1, 296, 297, 4249, 4252 }, // 78 tc_8b5bd4f5
  { 1, 296, 297, 4252, 4255 }, // 79 tc_84a7500d
  { 1, 301, 302, 4255, 4257 }, // 80 tc_7476d766
  { 1, 301, 302, 4257, 4259 }, // 81 tc_49fdfd4b
  { 1, 295, 296, 4259, 4262 }, // 82 tc_f098b237
  { 1, 295, 296, 4262, 4265 }, // 83 tc_20131976
  { 1, 295, 296, 4265, 4270 }, // 84 tc_1d41f8b7
  { 1, 295, 296, 4270, 4273 }, // 85 tc_a1297125
  { 1, 296, 297, 4273, 4274 }, // 86 tc_112d30d6
  { 1, 295, 296, 4274, 4277 }, // 87 tc_d68dca5c
  { 1, 295, 296, 4277, 4281 }, // 88 tc_788b1d09
  { 1, 295, 296, 4281, 4286 }, // 89 tc_38e0bae9
  { 1, 295, 296, 4286, 4289 }, // 90 tc_407e96f9
  { 1, 295, 296, 4289, 4293 }, // 91 tc_7401744f
  { 1, 295, 296, 4293, 4296 }, // 92 tc_9b3c0462
  { 1, 295, 296, 4296, 4298 }, // 93 tc_151bf368
  { 1, 296, 297, 4298, 4301 }, // 94 tc_9c52f549
  { 1, 295, 296, 4301, 4303 }, // 95 tc_55b33fda
  { 1, 295, 296, 4303, 4307 }, // 96 tc_6fc5dbea
  { 1, 301, 302, 4307, 4309 }, // 97 tc_3edca78f
  { 1, 295, 296, 4309, 4313 }, // 98 tc_a7a13fac
  { 1, 295, 296, 4313, 4315 }, // 99 tc_9783714b
  { 1, 295, 296, 4315, 4318 }, // 100 tc_f0e8e832
  { 1, 295, 296, 4318, 4320 }, // 101 tc_65279839
  { 1, 295, 296, 4320, 4324 }, // 102 tc_0a195f2c
  { 1, 295, 296, 4324, 4328 }, // 103 tc_01e1be3b
  { 1, 295, 296, 4328, 4331 }, // 104 tc_556f6577
  { 1, 295, 296, 4331, 4334 }, // 105 tc_02fe1c65
  { 1, 295, 296, 4334, 4338 }, // 106 tc_9e72dc89
  { 1, 295, 296, 4338, 4343 }, // 107 tc_9edb7c77
  { 1, 295, 296, 4343, 4346 }, // 108 tc_7f7f45f5
  { 1, 295, 296, 4346, 4349 }, // 109 tc_c20701f0
  { 1, 295, 296, 4349, 4353 }, // 110 tc_f7569068
  { 1, 301, 302, 4353, 4355 }, // 111 tc_fae9dfa5
  { 1, 301, 302, 4355, 4357 }, // 112 tc_6ae3426b
  { 1, 295, 296, 4357, 4359 }, // 113 tc_69bfb303
  { 1, 299, 300, 4359, 4360 }, // 114 tc_362b0be2
  { 1, 299, 300, 4360, 4362 }, // 115 tc_dc51281d
  { 1, 296, 297, 4362, 4363 }, // 116 tc_decdde8a
  { 1, 296, 297, 4363, 4365 }, // 117 tc_eeda4109
  { 1, 296, 297, 4365, 4367 }, // 118 tc_711c805f
  { 1, 299, 300, 4367, 4369 }, // 119 tc_ed03645c
  { 1, 299, 300, 4369, 4371 }, // 120 tc_42ff66ba
  { 1, 301, 302, 4371, 4373 }, // 121 tc_57a55b54
  { 1, 301, 302, 4373, 4375 }, // 122 tc_1248597c
  { 1, 301, 302, 4375, 4377 }, // 123 tc_9406230a
  { 1, 299, 300, 4377, 4378 }, // 124 tc_d57d649c
  { 1, 301, 302, 4378, 4380 }, // 125 tc_4abdbdc6
  { 1, 301, 302, 4380, 4382 }, // 126 tc_6d861a95
  { 1, 299, 300, 4382, 4383 }, // 127 tc_45f9d1be
  { 1, 297, 298, 4383, 4386 }, // 128 tc_24e109c7
  { 1, 296, 297, 4386, 4389 }, // 129 tc_9e27f2f9
  { 1, 297, 298, 4389, 4392 }, // 130 tc_f6e2aff9
  { 1, 296, 297, 4392, 4395 }, // 131 tc_24f426ab
  { 1, 297, 298, 4395, 4398 }, // 132 tc_975a4e54
  { 1, 295, 296, 4398, 4401 }, // 133 tc_5502c366
  { 1, 297, 298, 4401, 4403 }, // 134 tc_7b9187d3
  { 1, 296, 297, 4403, 4405 }, // 135 tc_f999c66e
  { 1, 300, 301, 4405, 4410 }, // 136 tc_1c7522a8
  { 1, 300, 301, 4410, 4416 }, // 137 tc_76bb5435
  { 1, 300, 301, 4416, 4418 }, // 138 tc_8a6d0d94
  { 1, 297, 298, 4418, 4420 }, // 139 tc_64b00d8a
  { 1, 300, 301, 4420, 4425 }, // 140 tc_5f2afaf7
  { 1, 300, 301, 4425, 4429 }, // 141 tc_ac65613f
  { 1, 300, 301, 4429, 4434 }, // 142 tc_a32e03e7
  { 1, 300, 301, 4434, 4437 }, // 143 tc_822c3c68
  { 1, 300, 301, 4437, 4441 }, // 144 tc_abfd9a6d
  { 1, 300, 301, 4441, 4445 }, // 145 tc_bf2ffc0f
  { 1, 300, 301, 4445, 4448 }, // 146 tc_7c6d32e4
  { 1, 300, 301, 4448, 4453 }, // 147 tc_45791fb8
  { 1, 300, 301, 4453, 4458 }, // 148 tc_b7c4062a
  { 1, 300, 301, 4458, 4461 }, // 149 tc_5944960d
  { 1, 295, 296, 4461, 4465 }, // 150 tc_2c13e7f5
  { 1, 295, 296, 4465, 4469 }, // 151 tc_a154b476
  { 1, 295, 296, 4469, 4473 }, // 152 tc_a4e22bbd
  { 1, 295, 296, 4473, 4477 }, // 153 tc_503ce0f3
  { 1, 300, 301, 4477, 4479 }, // 154 tc_0655b949
  { 1, 297, 298, 4479, 4481 }, // 155 tc_6e20402a
  { 1, 295, 296, 4481, 4483 }, // 156 tc_a7bdb22c
  { 1, 295, 296, 4483, 4486 }, // 157 tc_db596beb
  { 1, 295, 296, 4486, 4489 }, // 158 tc_a08b630b
  { 1, 295, 296, 4489, 4492 }, // 159 tc_1fcb8495
  { 1, 300, 301, 4492, 4497 }, // 160 tc_9edefe01
  { 1, 300, 301, 4497, 4502 }, // 161 tc_449acf79
  { 1, 297, 298, 4502, 4507 }, // 162 tc_ce59038e
  { 1, 297, 298, 4507, 4512 }, // 163 tc_f529831b
  { 1, 297, 298, 4512, 4517 }, // 164 tc_addc37a8
  { 1, 297, 298, 4517, 4520 }, // 165 tc_6f42bc60
  { 1, 295, 296, 4520, 4522 }, // 166 tc_e3d699e3
  { 1, 300, 301, 4522, 4525 }, // 167 tc_ba9255a6
  { 1, 300, 301, 4525, 4530 }, // 168 tc_1fe4ab69
  { 1, 300, 301, 4530, 4533 }, // 169 tc_bb07f2c5
  { 1, 300, 301, 4533, 4538 }, // 170 tc_8e82e8ca
  { 1, 297, 298, 4538, 4541 }, // 171 tc_cfa0e29b
  { 1, 297, 298, 4541, 4546 }, // 172 tc_0a6c20ae
  { 1, 297, 298, 4546, 4549 }, // 173 tc_0fac1eb8
  { 1, 297, 298, 4549, 4554 }, // 174 tc_829d8a86
  { 1, 300, 301, 4554, 4558 }, // 175 tc_280f7fe1
  { 1, 300, 301, 4558, 4562 }, // 176 tc_887d1bb7
  { 1, 297, 298, 4562, 4566 }, // 177 tc_96ef76ef
  { 1, 297, 298, 4566, 4570 }, // 178 tc_55a9a350
  { 1, 295, 296, 4570, 4574 }, // 179 tc_f0cdeccf
  { 1, 295, 296, 4574, 4579 }, // 180 tc_a38c45dc
  { 1, 295, 296, 4579, 4581 }, // 181 tc_d3632d88
  { 1, 295, 296, 4581, 4585 }, // 182 tc_5e4cf0e8
  { 1, 295, 296, 4585, 4587 }, // 183 tc_ef921005
  { 1, 300, 301, 4587, 4590 }, // 184 tc_5b347363
  { 1, 300, 301, 4590, 4592 }, // 185 tc_3d14a17b
  { 1, 300, 301, 4592, 4593 }, // 186 tc_3fbf1042
  { 1, 300, 301, 4593, 4594 }, // 187 tc_63567288
  { 1, 300, 301, 4594, 4596 }, // 188 tc_59a7822c
  { 1, 300, 301, 0, 0 }, // 189 tc_937dd41c
  { 1, 297, 298, 0, 0 }, // 190 tc_a4ee89db
  { 1, 297, 298, 0, 0 }, // 191 tc_c818ff7f
  { 1, 297, 298, 4596, 4597 }, // 192 tc_1242dc2a
  { 1, 300, 301, 4597, 4599 }, // 193 tc_44d5a428
  { 1, 320, 322, 4599, 4602 }, // 194 tc_540c3da3
  { 1, 322, 324, 4602, 4604 }, // 195 tc_c4edf264
  { 1, 324, 326, 4604, 4606 }, // 196 tc_5bf8afbb
  { 1, 326, 330, 4606, 4609 }, // 197 tc_a7e6707d
  { 1, 326, 330, 4609, 4613 }, // 198 tc_3c56e5ce
  { 1, 306, 309, 4613, 4617 }, // 199 tc_abe8c3b2
  { 1, 306, 309, 4617, 4622 }, // 200 tc_453fe68d
  { 1, 306, 309, 4622, 4626 }, // 201 tc_1ba8a0cd
  { 1, 330, 332, 4626, 4629 }, // 202 tc_52447ecc
  { 1, 330, 332, 4629, 4633 }, // 203 tc_3904b926
  { 1, 330, 332, 4633, 4638 }, // 204 tc_b9db8205
  { 1, 330, 332, 4638, 4642 }, // 205 tc_663c80a7
  { 1, 332, 336, 4642, 4645 }, // 206 tc_f21e8abb
  { 1, 332, 336, 4645, 4649 }, // 207 tc_131f1c81
  { 1, 332, 336, 4649, 4654 }, // 208 tc_c7039829
  { 1, 332, 336, 4654, 4658 }, // 209 tc_e2d2e9e5
  { 1, 336, 338, 4658, 4661 }, // 210 tc_ab23f776
  { 1, 336, 338, 4661, 4665 }, // 211 tc_7177e272
  { 1, 336, 338, 4665, 4670 }, // 212 tc_e99d4c2e
  { 1, 336, 338, 4670, 4674 }, // 213 tc_6942b6e0
  { 1, 311, 314, 4674, 4678 }, // 214 tc_a02a10a8
  { 1, 311, 314, 4678, 4683 }, // 215 tc_54a0dc47
  { 1, 311, 314, 4683, 4687 }, // 216 tc_447d9895
  { 1, 311, 314, 4687, 4692 }, // 217 tc_191381c1
  { 1, 311, 314, 4692, 4696 }, // 218 tc_3e2aaafc
  { 1, 336, 338, 4696, 4698 }, // 219 tc_3ce09744
  { 1, 336, 338, 4698, 4701 }, // 220 tc_20a4bbec
  { 1, 322, 324, 4701, 4704 }, // 221 tc_c127de3a
  { 1, 302, 304, 4704, 4708 }, // 222 tc_257f6f7c
  { 1, 302, 304, 4708, 4713 }, // 223 tc_7e6a3e89
  { 1, 302, 304, 4713, 4717 }, // 224 tc_e35c1e93
  { 1, 338, 340, 4717, 4720 }, // 225 tc_05ca8cfd
  { 1, 340, 342, 4720, 4723 }, // 226 tc_d8287c14
  { 1, 340, 342, 4723, 4727 }, // 227 tc_08a4f1b6
  { 1, 324, 326, 4727, 4731 }, // 228 tc_56e64202
  { 1, 322, 324, 4731, 4734 }, // 229 tc_ac4046bc
  { 1, 322, 324, 4734, 4738 }, // 230 tc_2e8f5f6e
  { 1, 338, 340, 4738, 4741 }, // 231 tc_7417e785
  { 1, 338, 340, 4741, 4745 }, // 232 tc_309dbb4f
  { 1, 342, 344, 4745, 4749 }, // 233 tc_df80eeb0
  { 1, 338, 340, 4749, 4753 }, // 234 tc_16ff9ef8
  { 1, 338, 340, 4753, 4755 }, // 235 tc_51d0ecc3
  { 1, 342, 344, 4755, 4760 }, // 236 tc_561aaa58
  { 1, 324, 326, 4760, 4762 }, // 237 tc_946013d8
  { 1, 324, 326, 4762, 4765 }, // 238 tc_46d6c3e0
  { 1, 342, 344, 4765, 4769 }, // 239 tc_87adc037
  { 1, 322, 324, 4769, 4772 }, // 240 tc_649072c2
  { 1, 322, 324, 4772, 4776 }, // 241 tc_b091f1c6
  { 1, 340, 342, 4776, 4779 }, // 242 tc_0b04c6c7
  { 1, 340, 342, 4779, 4783 }, // 243 tc_660769f1
  { 1, 344, 347, 4783, 4786 }, // 244 tc_e8797b98
  { 1, 344, 347, 4786, 4790 }, // 245 tc_05ac6f98
  { 1, 347, 350, 4790, 4793 }, // 246 tc_05058f6f
  { 1, 347, 350, 4793, 4797 }, // 247 tc_fd7610da
  { 1, 350, 352, 0, 0 }, // 248 tc_1381a97c
  { 1, 350, 352, 4797, 4798 }, // 249 tc_e3f68a46
  { 1, 352, 354, 4798, 4801 }, // 250 tc_f1de44ef
  { 1, 342, 344, 4801, 4806 }, // 251 tc_9d1dc972
  { 1, 352, 354, 4806, 4810 }, // 252 tc_90bcc1db
  { 1, 354, 357, 4810, 4813 }, // 253 tc_cd94bfe0
  { 1, 354, 357, 4813, 4817 }, // 254 tc_15fdf750
  { 1, 340, 342, 4817, 4821 }, // 255 tc_1ad8a370
  { 1, 340, 342, 4821, 4826 }, // 256 tc_e675c45a
  { 1, 357, 359, 4826, 4829 }, // 257 tc_61bf7c03
  { 1, 357, 359, 4829, 4833 }, // 258 tc_933f2b39
  { 1, 357, 359, 4833, 4837 }, // 259 tc_26a377fe
  { 1, 357, 359, 4837, 4842 }, // 260 tc_2d4051cd
  { 1, 324, 326, 4842, 4845 }, // 261 tc_6e7fa133
  { 1, 302, 304, 4845, 4848 }, // 262 tc_8772086c
  { 1, 304, 306, 4848, 4850 }, // 263 tc_b4416217
  { 1, 311, 314, 4850, 4854 }, // 264 tc_9f363d21
  { 1, 311, 314, 4854, 4859 }, // 265 tc_8e420e4d
  { 1, 359, 362, 4859, 4863 }, // 266 tc_7273323b
  { 1, 359, 362, 4863, 4868 }, // 267 tc_58d21193
  { 1, 304, 306, 4868, 4872 }, // 268 tc_71646d06
  { 1, 342, 344, 4872, 4874 }, // 269 tc_04da405a
  { 1, 342, 344, 4874, 4877 }, // 270 tc_2c745bb8
  { 1, 350, 352, 4877, 4878 }, // 271 tc_b28e51aa
  { 1, 350, 352, 4878, 4880 }, // 272 tc_767c4e9d
  { 1, 362, 364, 4880, 4882 }, // 273 tc_e699ae41
  { 1, 362, 364, 4882, 4885 }, // 274 tc_a0dbea28
  { 1, 362, 364, 4885, 4888 }, // 275 tc_dd5b0695
  { 1, 362, 364, 4888, 4892 }, // 276 tc_3ad719fb
  { 1, 297, 298, 0, 0 }, // 277 tc_77f94a5e
  { 1, 301, 302, 0, 0 }, // 278 tc_55255f2b
  { 1, 297, 298, 4892, 4893 }, // 279 tc_b1ae5f67
  { 1, 297, 298, 4893, 4895 }, // 280 tc_2237d952
  { 1, 299, 300, 4895, 4896 }, // 281 tc_0ba0d5da
  { 1, 299, 300, 0, 0 }, // 282 tc_9b34f5e0
  { 1, 301, 302, 4896, 4897 }, // 283 tc_d7718fbe
  { 1, 297, 298, 4897, 4899 }, // 284 tc_a3070909
  { 1, 301, 302, 4899, 4900 }, // 285 tc_2c3e17fc
  { 1, 301, 302, 4900, 4902 }, // 286 tc_28e55c6f
  { 0, 0, 0, 0, 0 }, // 287 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV67T[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 364, 365, 4902, 4905 }, // 1 tc_01d44cb2
  { 1, 365, 366, 4905, 4908 }, // 2 PSEUDO
  { 1, 365, 366, 4908, 4910 }, // 3 tc_c57d9f39
  { 1, 365, 366, 4910, 4914 }, // 4 tc_1c2c7a4a
  { 1, 365, 366, 4914, 4918 }, // 5 tc_442395f3
  { 1, 365, 366, 4918, 4921 }, // 6 tc_713b66bf
  { 1, 365, 366, 4921, 4924 }, // 7 tc_86173609
  { 1, 364, 365, 4924, 4927 }, // 8 tc_5da50c4b
  { 1, 364, 365, 4927, 4930 }, // 9 tc_4a55d03c
  { 1, 365, 366, 4930, 4933 }, // 10 tc_d33e5eee
  { 1, 364, 365, 4933, 4936 }, // 11 tc_651cbe02
  { 1, 366, 367, 4936, 4939 }, // 12 DUPLEX
  { 1, 367, 368, 4939, 4940 }, // 13 tc_ENDLOOP
  { 1, 365, 366, 0, 0 }, // 14 tc_23708a21
  { 1, 365, 366, 4940, 4942 }, // 15 tc_56a124a7
  { 1, 368, 369, 4942, 4944 }, // 16 tc_2f573607
  { 1, 368, 369, 4944, 4947 }, // 17 tc_53c851ab
  { 1, 366, 367, 4947, 4951 }, // 18 tc_fedb7e19
  { 1, 366, 367, 4951, 4954 }, // 19 tc_4222e6bf
  { 1, 366, 367, 4954, 4958 }, // 20 tc_075c8dd8
  { 1, 366, 367, 4958, 4961 }, // 21 tc_9bcfb2ee
  { 1, 366, 367, 4961, 4964 }, // 22 tc_158aa3f7
  { 1, 366, 367, 4964, 4967 }, // 23 tc_df5d53f9
  { 1, 366, 367, 4967, 4970 }, // 24 tc_14ab4f41
  { 1, 366, 367, 4970, 4971 }, // 25 tc_f38f92e1
  { 1, 366, 367, 4971, 4972 }, // 26 tc_1981450d
  { 1, 366, 367, 4972, 4974 }, // 27 tc_e9170fb7
  { 1, 366, 367, 4974, 4976 }, // 28 tc_40d64c94
  { 1, 366, 367, 4976, 4979 }, // 29 LD_tc_ld_SLOT01
  { 1, 369, 370, 4979, 4982 }, // 30 tc_38382228
  { 1, 369, 370, 4982, 4985 }, // 31 tc_c21d7447
  { 1, 369, 370, 4985, 4989 }, // 32 tc_7f8ae742
  { 1, 369, 370, 4989, 4992 }, // 33 tc_5a4b5e58
  { 1, 369, 370, 4992, 4996 }, // 34 tc_197dce51
  { 1, 364, 365, 4996, 4997 }, // 35 tc_44fffc58
  { 1, 366, 367, 4997, 5002 }, // 36 tc_5ceb2f9e
  { 1, 370, 372, 5002, 5005 }, // 37 tc_56c4f9fe
  { 1, 366, 367, 5005, 5010 }, // 38 tc_b4dc7630
  { 1, 366, 367, 5010, 5014 }, // 39 tc_a2b365d2
  { 1, 368, 369, 5014, 5015 }, // 40 tc_60e324ff
  { 1, 372, 374, 5015, 5018 }, // 41 tc_db5555f3
  { 1, 374, 377, 5018, 5021 }, // 42 tc_c0749f3c
  { 1, 377, 379, 5021, 5024 }, // 43 PSEUDOM
  { 1, 370, 372, 5024, 5027 }, // 44 tc_3aacf4a8
  { 1, 379, 382, 5027, 5030 }, // 45 tc_c5dba46e
  { 1, 372, 374, 5030, 5034 }, // 46 tc_af25efd9
  { 1, 364, 365, 5034, 5037 }, // 47 tc_0dfac0a7
  { 1, 366, 367, 5037, 5041 }, // 48 tc_8035e91f
  { 1, 366, 367, 5041, 5045 }, // 49 tc_011e0e9d
  { 1, 366, 367, 5045, 5048 }, // 50 tc_ae5babd7
  { 1, 366, 367, 5048, 5051 }, // 51 tc_5deb5e47
  { 1, 369, 370, 5051, 5056 }, // 52 tc_bb831a7c
  { 1, 366, 367, 5056, 5060 }, // 53 tc_92240447
  { 1, 366, 367, 5060, 5063 }, // 54 tc_7c31e19a
  { 1, 366, 367, 5063, 5067 }, // 55 tc_d03278fd
  { 1, 366, 367, 5067, 5071 }, // 56 tc_65cbd974
  { 1, 366, 367, 5071, 5074 }, // 57 tc_934753bb
  { 1, 366, 367, 5074, 5078 }, // 58 ST_tc_st_SLOT01
  { 1, 382, 384, 5078, 5082 }, // 59 CVI_VA
  { 1, 370, 372, 5082, 5084 }, // 60 tc_0ec46cf9
  { 1, 372, 374, 5084, 5085 }, // 61 tc_718b5c53
  { 1, 384, 388, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 366, 367, 5085, 5086 }, // 63 tc_d45ba9cd
  { 1, 388, 389, 5086, 5089 }, // 64 tc_388f9897
  { 1, 388, 389, 5089, 5091 }, // 65 tc_9124c04f
  { 1, 388, 389, 5091, 5094 }, // 66 tc_4ac61d92
  { 1, 389, 390, 5094, 5096 }, // 67 tc_aee6250c
  { 1, 389, 390, 5096, 5099 }, // 68 tc_eed07714
  { 1, 389, 390, 5099, 5102 }, // 69 tc_74a42bda
  { 1, 389, 390, 5102, 5105 }, // 70 tc_a9edeffa
  { 1, 389, 390, 5105, 5108 }, // 71 tc_838c4d7a
  { 1, 364, 365, 5108, 5110 }, // 72 tc_d61dfdc3
  { 1, 364, 365, 5110, 5113 }, // 73 tc_8a825db2
  { 1, 364, 365, 5113, 5116 }, // 74 tc_f34c1c21
  { 1, 365, 366, 5116, 5119 }, // 75 tc_95a33176
  { 1, 364, 365, 5119, 5121 }, // 76 tc_9f6cd987
  { 1, 365, 366, 0, 0 }, // 77 tc_b837298f
  { 1, 365, 366, 5121, 5124 }, // 78 tc_8b5bd4f5
  { 1, 365, 366, 5124, 5127 }, // 79 tc_84a7500d
  { 1, 369, 370, 5127, 5129 }, // 80 tc_7476d766
  { 1, 369, 370, 5129, 5131 }, // 81 tc_49fdfd4b
  { 1, 364, 365, 5131, 5134 }, // 82 tc_f098b237
  { 1, 364, 365, 5134, 5137 }, // 83 tc_20131976
  { 1, 364, 365, 5137, 5142 }, // 84 tc_1d41f8b7
  { 1, 364, 365, 5142, 5145 }, // 85 tc_a1297125
  { 1, 365, 366, 5145, 5146 }, // 86 tc_112d30d6
  { 1, 369, 370, 5146, 5149 }, // 87 tc_d68dca5c
  { 1, 369, 370, 5149, 5153 }, // 88 tc_788b1d09
  { 1, 369, 370, 5153, 5158 }, // 89 tc_38e0bae9
  { 1, 364, 365, 5158, 5161 }, // 90 tc_407e96f9
  { 1, 369, 370, 5161, 5165 }, // 91 tc_7401744f
  { 1, 364, 365, 5165, 5168 }, // 92 tc_9b3c0462
  { 1, 364, 365, 5168, 5170 }, // 93 tc_151bf368
  { 1, 365, 366, 5170, 5173 }, // 94 tc_9c52f549
  { 1, 364, 365, 5173, 5175 }, // 95 tc_55b33fda
  { 1, 364, 365, 5175, 5179 }, // 96 tc_6fc5dbea
  { 1, 369, 370, 5179, 5181 }, // 97 tc_3edca78f
  { 1, 364, 365, 5181, 5185 }, // 98 tc_a7a13fac
  { 1, 369, 370, 5185, 5187 }, // 99 tc_9783714b
  { 1, 369, 370, 5187, 5190 }, // 100 tc_f0e8e832
  { 1, 364, 365, 5190, 5192 }, // 101 tc_65279839
  { 1, 369, 370, 5192, 5196 }, // 102 tc_0a195f2c
  { 1, 369, 370, 5196, 5200 }, // 103 tc_01e1be3b
  { 1, 369, 370, 5200, 5203 }, // 104 tc_556f6577
  { 1, 369, 370, 5203, 5206 }, // 105 tc_02fe1c65
  { 1, 369, 370, 5206, 5210 }, // 106 tc_9e72dc89
  { 1, 369, 370, 5210, 5215 }, // 107 tc_9edb7c77
  { 1, 369, 370, 5215, 5218 }, // 108 tc_7f7f45f5
  { 1, 364, 365, 5218, 5221 }, // 109 tc_c20701f0
  { 1, 369, 370, 5221, 5225 }, // 110 tc_f7569068
  { 1, 369, 370, 5225, 5227 }, // 111 tc_fae9dfa5
  { 1, 369, 370, 5227, 5229 }, // 112 tc_6ae3426b
  { 1, 364, 365, 5229, 5231 }, // 113 tc_69bfb303
  { 1, 368, 369, 5231, 5232 }, // 114 tc_362b0be2
  { 1, 368, 369, 5232, 5234 }, // 115 tc_dc51281d
  { 1, 365, 366, 5234, 5235 }, // 116 tc_decdde8a
  { 1, 365, 366, 5235, 5237 }, // 117 tc_eeda4109
  { 1, 365, 366, 5237, 5239 }, // 118 tc_711c805f
  { 1, 368, 369, 5239, 5241 }, // 119 tc_ed03645c
  { 1, 368, 369, 5241, 5243 }, // 120 tc_42ff66ba
  { 1, 369, 370, 5243, 5245 }, // 121 tc_57a55b54
  { 1, 369, 370, 5245, 5247 }, // 122 tc_1248597c
  { 1, 369, 370, 5247, 5249 }, // 123 tc_9406230a
  { 1, 368, 369, 5249, 5250 }, // 124 tc_d57d649c
  { 1, 369, 370, 5250, 5252 }, // 125 tc_4abdbdc6
  { 1, 369, 370, 5252, 5254 }, // 126 tc_6d861a95
  { 1, 368, 369, 5254, 5255 }, // 127 tc_45f9d1be
  { 1, 366, 367, 5255, 5258 }, // 128 tc_24e109c7
  { 1, 365, 366, 5258, 5261 }, // 129 tc_9e27f2f9
  { 1, 366, 367, 5261, 5264 }, // 130 tc_f6e2aff9
  { 1, 365, 366, 5264, 5267 }, // 131 tc_24f426ab
  { 1, 366, 367, 5267, 5270 }, // 132 tc_975a4e54
  { 1, 364, 365, 5270, 5273 }, // 133 tc_5502c366
  { 1, 366, 367, 5273, 5275 }, // 134 tc_7b9187d3
  { 1, 365, 366, 5275, 5277 }, // 135 tc_f999c66e
  { 1, 366, 367, 5277, 5282 }, // 136 tc_1c7522a8
  { 1, 366, 367, 5282, 5288 }, // 137 tc_76bb5435
  { 1, 366, 367, 5288, 5290 }, // 138 tc_8a6d0d94
  { 1, 366, 367, 5290, 5292 }, // 139 tc_64b00d8a
  { 1, 366, 367, 5292, 5297 }, // 140 tc_5f2afaf7
  { 1, 366, 367, 5297, 5301 }, // 141 tc_ac65613f
  { 1, 366, 367, 5301, 5306 }, // 142 tc_a32e03e7
  { 1, 366, 367, 5306, 5309 }, // 143 tc_822c3c68
  { 1, 366, 367, 5309, 5313 }, // 144 tc_abfd9a6d
  { 1, 366, 367, 5313, 5317 }, // 145 tc_bf2ffc0f
  { 1, 366, 367, 5317, 5320 }, // 146 tc_7c6d32e4
  { 1, 366, 367, 5320, 5325 }, // 147 tc_45791fb8
  { 1, 366, 367, 5325, 5330 }, // 148 tc_b7c4062a
  { 1, 366, 367, 5330, 5333 }, // 149 tc_5944960d
  { 1, 369, 370, 5333, 5337 }, // 150 tc_2c13e7f5
  { 1, 369, 370, 5337, 5341 }, // 151 tc_a154b476
  { 1, 369, 370, 5341, 5345 }, // 152 tc_a4e22bbd
  { 1, 369, 370, 5345, 5349 }, // 153 tc_503ce0f3
  { 1, 366, 367, 5349, 5351 }, // 154 tc_0655b949
  { 1, 366, 367, 5351, 5353 }, // 155 tc_6e20402a
  { 1, 369, 370, 5353, 5355 }, // 156 tc_a7bdb22c
  { 1, 369, 370, 5355, 5358 }, // 157 tc_db596beb
  { 1, 369, 370, 5358, 5361 }, // 158 tc_a08b630b
  { 1, 369, 370, 5361, 5364 }, // 159 tc_1fcb8495
  { 1, 366, 367, 5364, 5369 }, // 160 tc_9edefe01
  { 1, 366, 367, 5369, 5374 }, // 161 tc_449acf79
  { 1, 366, 367, 5374, 5379 }, // 162 tc_ce59038e
  { 1, 366, 367, 5379, 5384 }, // 163 tc_f529831b
  { 1, 366, 367, 5384, 5389 }, // 164 tc_addc37a8
  { 1, 366, 367, 5389, 5392 }, // 165 tc_6f42bc60
  { 1, 364, 365, 5392, 5394 }, // 166 tc_e3d699e3
  { 1, 366, 367, 5394, 5397 }, // 167 tc_ba9255a6
  { 1, 366, 367, 5397, 5402 }, // 168 tc_1fe4ab69
  { 1, 366, 367, 5402, 5405 }, // 169 tc_bb07f2c5
  { 1, 366, 367, 5405, 5410 }, // 170 tc_8e82e8ca
  { 1, 366, 367, 5410, 5413 }, // 171 tc_cfa0e29b
  { 1, 366, 367, 5413, 5418 }, // 172 tc_0a6c20ae
  { 1, 366, 367, 5418, 5421 }, // 173 tc_0fac1eb8
  { 1, 366, 367, 5421, 5426 }, // 174 tc_829d8a86
  { 1, 366, 367, 5426, 5430 }, // 175 tc_280f7fe1
  { 1, 366, 367, 5430, 5434 }, // 176 tc_887d1bb7
  { 1, 366, 367, 5434, 5438 }, // 177 tc_96ef76ef
  { 1, 366, 367, 5438, 5442 }, // 178 tc_55a9a350
  { 1, 369, 370, 5442, 5446 }, // 179 tc_f0cdeccf
  { 1, 369, 370, 5446, 5451 }, // 180 tc_a38c45dc
  { 1, 369, 370, 5451, 5453 }, // 181 tc_d3632d88
  { 1, 369, 370, 5453, 5457 }, // 182 tc_5e4cf0e8
  { 1, 364, 365, 5457, 5459 }, // 183 tc_ef921005
  { 1, 366, 367, 5459, 5462 }, // 184 tc_5b347363
  { 1, 366, 367, 5462, 5464 }, // 185 tc_3d14a17b
  { 1, 366, 367, 5464, 5465 }, // 186 tc_3fbf1042
  { 1, 366, 367, 5465, 5466 }, // 187 tc_63567288
  { 1, 366, 367, 5466, 5468 }, // 188 tc_59a7822c
  { 1, 366, 367, 0, 0 }, // 189 tc_937dd41c
  { 1, 366, 367, 0, 0 }, // 190 tc_a4ee89db
  { 1, 366, 367, 0, 0 }, // 191 tc_c818ff7f
  { 1, 366, 367, 5468, 5469 }, // 192 tc_1242dc2a
  { 1, 366, 367, 5469, 5471 }, // 193 tc_44d5a428
  { 1, 390, 392, 5471, 5474 }, // 194 tc_540c3da3
  { 1, 392, 394, 5474, 5476 }, // 195 tc_c4edf264
  { 1, 394, 396, 5476, 5478 }, // 196 tc_5bf8afbb
  { 1, 396, 400, 5478, 5481 }, // 197 tc_a7e6707d
  { 1, 396, 400, 5481, 5485 }, // 198 tc_3c56e5ce
  { 1, 374, 377, 5485, 5489 }, // 199 tc_abe8c3b2
  { 1, 374, 377, 5489, 5494 }, // 200 tc_453fe68d
  { 1, 374, 377, 5494, 5498 }, // 201 tc_1ba8a0cd
  { 1, 400, 402, 5498, 5501 }, // 202 tc_52447ecc
  { 1, 400, 402, 5501, 5505 }, // 203 tc_3904b926
  { 1, 400, 402, 5505, 5510 }, // 204 tc_b9db8205
  { 1, 400, 402, 5510, 5514 }, // 205 tc_663c80a7
  { 1, 402, 406, 5514, 5517 }, // 206 tc_f21e8abb
  { 1, 402, 406, 5517, 5521 }, // 207 tc_131f1c81
  { 1, 402, 406, 5521, 5526 }, // 208 tc_c7039829
  { 1, 402, 406, 5526, 5530 }, // 209 tc_e2d2e9e5
  { 1, 406, 408, 5530, 5533 }, // 210 tc_ab23f776
  { 1, 406, 408, 5533, 5537 }, // 211 tc_7177e272
  { 1, 406, 408, 5537, 5542 }, // 212 tc_e99d4c2e
  { 1, 406, 408, 5542, 5546 }, // 213 tc_6942b6e0
  { 1, 379, 382, 5546, 5550 }, // 214 tc_a02a10a8
  { 1, 379, 382, 5550, 5555 }, // 215 tc_54a0dc47
  { 1, 379, 382, 5555, 5559 }, // 216 tc_447d9895
  { 1, 379, 382, 5559, 5564 }, // 217 tc_191381c1
  { 1, 379, 382, 5564, 5568 }, // 218 tc_3e2aaafc
  { 1, 406, 408, 5568, 5570 }, // 219 tc_3ce09744
  { 1, 406, 408, 5570, 5573 }, // 220 tc_20a4bbec
  { 1, 392, 394, 5573, 5576 }, // 221 tc_c127de3a
  { 1, 370, 372, 5576, 5580 }, // 222 tc_257f6f7c
  { 1, 370, 372, 5580, 5585 }, // 223 tc_7e6a3e89
  { 1, 370, 372, 5585, 5589 }, // 224 tc_e35c1e93
  { 1, 408, 410, 5589, 5592 }, // 225 tc_05ca8cfd
  { 1, 410, 412, 5592, 5595 }, // 226 tc_d8287c14
  { 1, 410, 412, 5595, 5599 }, // 227 tc_08a4f1b6
  { 1, 394, 396, 5599, 5603 }, // 228 tc_56e64202
  { 1, 392, 394, 5603, 5606 }, // 229 tc_ac4046bc
  { 1, 392, 394, 5606, 5610 }, // 230 tc_2e8f5f6e
  { 1, 408, 410, 5610, 5613 }, // 231 tc_7417e785
  { 1, 408, 410, 5613, 5617 }, // 232 tc_309dbb4f
  { 1, 412, 414, 5617, 5621 }, // 233 tc_df80eeb0
  { 1, 408, 410, 5621, 5625 }, // 234 tc_16ff9ef8
  { 1, 408, 410, 5625, 5627 }, // 235 tc_51d0ecc3
  { 1, 412, 414, 5627, 5632 }, // 236 tc_561aaa58
  { 1, 394, 396, 5632, 5634 }, // 237 tc_946013d8
  { 1, 394, 396, 5634, 5637 }, // 238 tc_46d6c3e0
  { 1, 412, 414, 5637, 5641 }, // 239 tc_87adc037
  { 1, 392, 394, 5641, 5644 }, // 240 tc_649072c2
  { 1, 392, 394, 5644, 5648 }, // 241 tc_b091f1c6
  { 1, 410, 412, 5648, 5651 }, // 242 tc_0b04c6c7
  { 1, 410, 412, 5651, 5655 }, // 243 tc_660769f1
  { 1, 414, 417, 5655, 5658 }, // 244 tc_e8797b98
  { 1, 414, 417, 5658, 5662 }, // 245 tc_05ac6f98
  { 1, 417, 420, 5662, 5665 }, // 246 tc_05058f6f
  { 1, 417, 420, 5665, 5669 }, // 247 tc_fd7610da
  { 1, 420, 422, 0, 0 }, // 248 tc_1381a97c
  { 1, 420, 422, 5669, 5670 }, // 249 tc_e3f68a46
  { 1, 422, 424, 5670, 5673 }, // 250 tc_f1de44ef
  { 1, 412, 414, 5673, 5678 }, // 251 tc_9d1dc972
  { 1, 422, 424, 5678, 5682 }, // 252 tc_90bcc1db
  { 1, 424, 427, 5682, 5685 }, // 253 tc_cd94bfe0
  { 1, 424, 427, 5685, 5689 }, // 254 tc_15fdf750
  { 1, 410, 412, 5689, 5693 }, // 255 tc_1ad8a370
  { 1, 410, 412, 5693, 5698 }, // 256 tc_e675c45a
  { 1, 427, 429, 5698, 5701 }, // 257 tc_61bf7c03
  { 1, 427, 429, 5701, 5705 }, // 258 tc_933f2b39
  { 1, 427, 429, 5705, 5709 }, // 259 tc_26a377fe
  { 1, 427, 429, 5709, 5714 }, // 260 tc_2d4051cd
  { 1, 394, 396, 5714, 5717 }, // 261 tc_6e7fa133
  { 1, 370, 372, 5717, 5720 }, // 262 tc_8772086c
  { 1, 372, 374, 5720, 5722 }, // 263 tc_b4416217
  { 1, 379, 382, 5722, 5726 }, // 264 tc_9f363d21
  { 1, 379, 382, 5726, 5731 }, // 265 tc_8e420e4d
  { 1, 429, 432, 5731, 5735 }, // 266 tc_7273323b
  { 1, 429, 432, 5735, 5740 }, // 267 tc_58d21193
  { 1, 372, 374, 5740, 5744 }, // 268 tc_71646d06
  { 1, 412, 414, 5744, 5746 }, // 269 tc_04da405a
  { 1, 412, 414, 5746, 5749 }, // 270 tc_2c745bb8
  { 1, 420, 422, 5749, 5750 }, // 271 tc_b28e51aa
  { 1, 420, 422, 5750, 5752 }, // 272 tc_767c4e9d
  { 1, 432, 434, 5752, 5754 }, // 273 tc_e699ae41
  { 1, 432, 434, 5754, 5757 }, // 274 tc_a0dbea28
  { 1, 432, 434, 5757, 5760 }, // 275 tc_dd5b0695
  { 1, 432, 434, 5760, 5764 }, // 276 tc_3ad719fb
  { 1, 366, 367, 0, 0 }, // 277 tc_77f94a5e
  { 1, 369, 370, 0, 0 }, // 278 tc_55255f2b
  { 1, 366, 367, 5764, 5765 }, // 279 tc_b1ae5f67
  { 1, 366, 367, 5765, 5767 }, // 280 tc_2237d952
  { 1, 368, 369, 5767, 5768 }, // 281 tc_0ba0d5da
  { 1, 368, 369, 0, 0 }, // 282 tc_9b34f5e0
  { 1, 369, 370, 5768, 5769 }, // 283 tc_d7718fbe
  { 1, 366, 367, 5769, 5771 }, // 284 tc_a3070909
  { 1, 369, 370, 5771, 5772 }, // 285 tc_2c3e17fc
  { 1, 369, 370, 5772, 5774 }, // 286 tc_28e55c6f
  { 0, 0, 0, 0, 0 }, // 287 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

#undef DBGFIELD

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV60 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV60,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV5 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV5,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV55 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV55,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV62 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV62,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV65 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  5, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV65,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV66 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  6, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV66,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV67 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  7, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV67,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV67T = {
  3, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  8, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV67T,
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV HexagonSubTypeKV[] = {
 { "generic", { { { 0x16e60007ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV60 },
 { "hexagonv5", { { { 0x16e60001ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV5 },
 { "hexagonv55", { { { 0x16e60003ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV55 },
 { "hexagonv60", { { { 0x16e60007ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV60 },
 { "hexagonv62", { { { 0x16e6000fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV62 },
 { "hexagonv65", { { { 0x12f6001fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV65 },
 { "hexagonv66", { { { 0x12f6003fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV66 },
 { "hexagonv67", { { { 0x12f6007fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV67 },
 { "hexagonv67t", { { { 0x52b200ffULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV67T },
};

namespace Hexagon_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end namespace Hexagon_MC

struct HexagonGenMCSubtargetInfo : public MCSubtargetInfo {
  HexagonGenMCSubtargetInfo(const Triple &TT,
    StringRef CPU, StringRef TuneCPU, StringRef FS,
    ArrayRef<SubtargetFeatureKV> PF,
    ArrayRef<SubtargetSubTypeKV> PD,
    const MCWriteProcResEntry *WPR,
    const MCWriteLatencyEntry *WL,
    const MCReadAdvanceEntry *RA, const InstrStage *IS,
    const unsigned *OC, const unsigned *FP) :
      MCSubtargetInfo(TT, CPU, TuneCPU, FS, PF, PD,
                      WPR, WL, RA, IS, OC, FP) { }

  unsigned resolveVariantSchedClass(unsigned SchedClass,
      const MCInst *MI, const MCInstrInfo *MCII,
      unsigned CPUID) const override {
    return Hexagon_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
  }
  unsigned getHwMode() const override;
};
unsigned HexagonGenMCSubtargetInfo::getHwMode() const {
  if (checkFeatures("+hvx-length128b")) return 1;
  if (checkFeatures("+hvx-length64b")) return 2;
  return 0;
}

static inline MCSubtargetInfo *createHexagonMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS) {
  return new HexagonGenMCSubtargetInfo(TT, CPU, TuneCPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef TuneCPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU);
  LLVM_DEBUG(dbgs() << "\nTuneCPU:" << TuneCPU << "\n\n");
  InitMCProcessorInfo(CPU, TuneCPU, FS);
  const FeatureBitset &Bits = getFeatureBits();
  if (Bits[Hexagon::ArchV5] && HexagonArchVersion < Hexagon::ArchEnum::V5) HexagonArchVersion = Hexagon::ArchEnum::V5;
  if (Bits[Hexagon::ArchV55] && HexagonArchVersion < Hexagon::ArchEnum::V55) HexagonArchVersion = Hexagon::ArchEnum::V55;
  if (Bits[Hexagon::ArchV60] && HexagonArchVersion < Hexagon::ArchEnum::V60) HexagonArchVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ArchV62] && HexagonArchVersion < Hexagon::ArchEnum::V62) HexagonArchVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ArchV65] && HexagonArchVersion < Hexagon::ArchEnum::V65) HexagonArchVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ArchV66] && HexagonArchVersion < Hexagon::ArchEnum::V66) HexagonArchVersion = Hexagon::ArchEnum::V66;
  if (Bits[Hexagon::ArchV67] && HexagonArchVersion < Hexagon::ArchEnum::V67) HexagonArchVersion = Hexagon::ArchEnum::V67;
  if (Bits[Hexagon::ExtensionAudio]) UseAudioOps = true;
  if (Bits[Hexagon::ExtensionHVX] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVX64B]) UseHVX64BOps = true;
  if (Bits[Hexagon::ExtensionHVX128B]) UseHVX128BOps = true;
  if (Bits[Hexagon::ExtensionHVXV60] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVXV62] && HexagonHVXVersion < Hexagon::ArchEnum::V62) HexagonHVXVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ExtensionHVXV65] && HexagonHVXVersion < Hexagon::ArchEnum::V65) HexagonHVXVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ExtensionHVXV66] && HexagonHVXVersion < Hexagon::ArchEnum::V66) HexagonHVXVersion = Hexagon::ArchEnum::V66;
  if (Bits[Hexagon::ExtensionHVXV67] && HexagonHVXVersion < Hexagon::ArchEnum::V67) HexagonHVXVersion = Hexagon::ArchEnum::V67;
  if (Bits[Hexagon::ExtensionZReg]) UseZRegOps = true;
  if (Bits[Hexagon::FeatureCompound]) UseCompound = true;
  if (Bits[Hexagon::FeatureDuplex]) EnableDuplex = true;
  if (Bits[Hexagon::FeatureLongCalls]) UseLongCalls = true;
  if (Bits[Hexagon::FeatureMemNoShuf]) HasMemNoShuf = false;
  if (Bits[Hexagon::FeatureMemops]) UseMemops = true;
  if (Bits[Hexagon::FeatureNVJ]) UseNewValueJumps = true;
  if (Bits[Hexagon::FeatureNVS]) UseNewValueStores = true;
  if (Bits[Hexagon::FeatureNoreturnStackElim]) NoreturnStackElim = true;
  if (Bits[Hexagon::FeaturePackets]) UsePackets = true;
  if (Bits[Hexagon::FeaturePreV65]) HasPreV65 = true;
  if (Bits[Hexagon::FeatureReservedR19]) ReservedR19 = true;
  if (Bits[Hexagon::FeatureSmallData]) UseSmallData = true;
  if (Bits[Hexagon::FeatureUnsafeFP]) UseUnsafeMath = true;
  if (Bits[Hexagon::ProcTinyCore] && HexagonProcFamily < TinyCore) HexagonProcFamily = TinyCore;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace Hexagon_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID);
} // end namespace Hexagon_MC

struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  unsigned resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
  unsigned getHwMode() const override;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetSubTypeKV HexagonSubTypeKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, TuneCPU, FS, makeArrayRef(HexagonFeatureKV, 31), makeArrayRef(HexagonSubTypeKV, 9), 
                        HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                        HexagonStages, HexagonOperandCycles, HexagonForwardingPaths) {}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass

unsigned HexagonGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const {
  return Hexagon_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
} // HexagonGenSubtargetInfo::resolveVariantSchedClass

unsigned HexagonGenSubtargetInfo::getHwMode() const {
  if (checkFeatures("+hvx-length128b")) return 1;
  if (checkFeatures("+hvx-length64b")) return 2;
  return 0;
}
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

