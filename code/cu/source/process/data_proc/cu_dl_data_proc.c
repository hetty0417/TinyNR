#include "process/data_proc/cu_dl_data_proc.h"
#include "gtpu/gtpu_proc.h"
#include "pdcp/pdcp_proc.h"
#include "sdap/sdap_proc.h"


U32 CuDlDataProc()
{
	printf("CuDlDataProc\n");
	HelloGtpu();
	HelloSdap();
	HelloPdcp();
	return SUCC;
}

