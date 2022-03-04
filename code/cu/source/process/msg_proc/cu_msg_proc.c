#include "process/msg_proc/cu_msg_proc.h"
#include <stdlib.h>

Buff* NewBuffWithInit(U32 payloadLen,U32 rbId)
{	
	U32 totalLen = payloadLen + sizeof(BuffCtxt);
	Buff *buf = malloc(totalLen);
	CHECK_NULL_RETURN_RESULT(buf,NULL);
	buf->ctxt.curPos = sizeof(BuffCtxt);
	buf->ctxt.rbId = rbId;
	buf->ctxt.totalLen = totalLen;
	return buf;
}

void FreeBuff(Buff* buf)
{
	if(buf != NULL)
	{
		free(buf);
	}
}

