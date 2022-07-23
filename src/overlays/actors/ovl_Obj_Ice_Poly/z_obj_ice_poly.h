#ifndef Z_OBJ_ICE_POLY_H
#define Z_OBJ_ICE_POLY_H

#include "global.h"

struct ObjIcePoly;

typedef void (*ObjIcePolyActionFunc)(struct ObjIcePoly*, PlayState*);

#define OBJICEPOLY_GET_FF00(thisx) (((thisx)->params >> 8) & 0xFF)

#define OBJICEPOLY_FF_FF 0xFF

typedef struct ObjIcePoly {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ObjIcePolyActionFunc actionFunc;
    /* 0x148 */ u8 unk_148;
    /* 0x149 */ u8 unk_149;
    /* 0x14A */ s16 unk_14A;
    /* 0x14C */ ColliderCylinder colliders1[2];
    /* 0x1E4 */ ColliderCylinder colliders2[2];
} ObjIcePoly; // size = 0x27C

extern const ActorInit Obj_Ice_Poly_InitVars;

#endif // Z_OBJ_ICE_POLY_H
