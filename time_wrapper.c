// Based on cswl's implmentation
// https://github.com/cswl/coding_c_array_min_max_timer

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CMD_MAX_LEN		1024

char* join_args(int argc, char* argv[]) {
	int i = 1;
	static char joined_cmd[CMD_MAX_LEN];
	for (; i < argc; i++) {
		strcat(joined_cmd, argv[i]);
		strcat(joined_cmd, " ");
	}
	char *c = joined_cmd;
	return c;
}

int main(int argc, char* argv[]) {
	clock_t t_start, t_end;
	int retval;
	char* cmd = join_args(argc, argv);

	t_start = clock();
	retval = system(cmd);
	t_end = clock();

	printf("%s ended with return value %d\nTime taken - %f microseconds.\n", 
		cmd, 
		retval, 
		(double)(1e6)*(t_end - t_start) / CLOCKS_PER_SEC);

	return 0;
}