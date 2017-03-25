#include "one_printf_lib.h"


int start_one_os(int argc, char *argv)
{
	int ret;

	one_printf("Hello, One OS!\n");

	// get start info
	one_get_start_info(argc, argv, &start_info);

	// bind to core if needed
	if(start_info.bind_core)
	{
		one_bind_to_core(start_info.bind_core);
	}

	// config oneos
	one_config_os();

	// initialize oneos
	one_init_os();

	// start oneos
	one_start_os();

}