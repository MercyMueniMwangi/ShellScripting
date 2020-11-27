#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

void type_prompt()

{
	static int first_time = 1;

	if ( first_time)

	{
		// clear screen for the first time
		// e means escaped
		const char* CLEAR_SCREEN_ANSI = " \e[1;1H\e[2J";

		write(STDOUT_FILENO,CLEAR_SCREEN_ANSI,12);

		first_time = 0;
	}

	printf("$"); //display prompt
}
