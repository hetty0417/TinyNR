#ifndef BASE_H_20220303
#define BASE_H_20220303

#include "stdio.h"

#define SUCC 0
#define FAIL 1

typedef unsigned char      U8;
typedef unsigned short     U16;
typedef unsigned int       U32;
typedef unsigned long long U64;

typedef struct BuffCtxt
{
	U32 rbId;
	U16 curPos;
	U8  rsv[2];
	U32 totalLen;
}BuffCtxt;


typedef struct Buff
{
	BuffCtxt ctxt;
	U8      payLoad[0];
}Buff;


#define CHECK_NULL_RETURN_RESULT(ptr,ret) {if((ptr) == NULL) return (ret);}

void HelloBase();

#endif 
