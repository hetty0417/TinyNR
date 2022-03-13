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

#define Node(type)\
struct\
{\
	struct type*  nextNode;\
	struct type** preNode;\
}

#define Link(type)\
struct\
{\
	struct type*  head;\
	struct type** tail;\
	U32           nodeNum;\
}

typedef Link(buff)  BUFF_LINK;

#define LINK_INIT(link)\
{\
    (link)->head = NULL;\
	(link)->tail = &((tail)->head);\
	(link)->nodeNum = 0;\
}

#define INSERT_FROM_TAIL(link,buff,domain)\
{\
	(buff)->domain.nextNode = NULL;\
	(buff)->domain.preNode = (link)->head;\
	*((link)->tail) = (buff);\
	(link)->tail = &((buff)->domain.nextNode);\
}

typedef struct Buff
{
	BuffCtxt     ctxt;
	Node(Buff) 	 nodeInfo;
	U8           payLoad[0];
}Buff;


#define CHECK_NULL_RETURN_RESULT(ptr,ret) {if((ptr) == NULL) return (ret);}

void HelloBase();

#endif 
