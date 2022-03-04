#ifndef CU_MSG_PROC_H_20220303
#define CU_MSG_PROC_H_20220303

#include "base.h"


Buff* NewBuffWithInit(U32 payloadLen,U32 rbId);
void FreeBuff(Buff* buf);



#endif 

