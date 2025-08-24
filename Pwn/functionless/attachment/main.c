// gcc -fstack-protector -o chall main.c

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main()
{
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);

	puts("Instead of me coding the whole thing, why not you do a little bit of work on you own 🙃!");
	printf("Just to help you out a bit 👉 %p\n", puts);

	void* foo[2];

	read(0, foo, sizeof(foo));

	((int (*)(char *))foo[0])((char *)foo[1]);
	return 0;
}
