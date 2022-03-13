#include "entry/cu_main.h"
#include "entry/du_main.h"
#include "process/msg_proc/cu_msg_proc.h"
#include "process/data_proc/cu_dl_data_proc.h"



int main()
{
	printf("Hello NR\n");
	int ret = SUCC;
	ret = cu_main_proc();
	ret = du_main_proc();
	return 0;
}

U32 cu_main_proc()
{
	HelloGtpu();
	Buff* buff =  NewBuffWithInit(8, 1);
	CHECK_NULL_RETURN_RESULT(buff,FAIL);
	printf("totalsize = %u\n",buff->ctxt.totalLen);
	FreeBuff(buff);
	U32 ret = CuDlDataProc();
	return SUCC;
}
