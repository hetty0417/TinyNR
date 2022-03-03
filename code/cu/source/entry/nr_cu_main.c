#include "entry/nr_cu_main.h"
#include "gtpu/gtpu_proc.h"
#include "pdcp/pdcp_proc.h"
#include "sdap/sdap_proc.h"

int main()
{
	printf("Hello NR\n");
	int ret = SUCC;
	ret = cu_main_proc();
	ret = du_main_proc();
	return 0;
}

int cu_main_proc()
{
	HelloGtpu();
}