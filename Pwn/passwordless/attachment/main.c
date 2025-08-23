// gcc -fstack-protector -o chall main.c

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int win()
{
	char flag[256];
	int fd = open("./flag.txt", 0);
	read(fd, flag, sizeof(flag));
	write(1, flag, strlen(flag));
}

int main()
{
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);

	char name[16];
	char password[16];

	int length;

	puts("Instead of getting my password leaked somewhere why not ask for the password in the first place! think outside the box lil bro 📦!");
	puts("Anyway what's you name length?");
	scanf("%d", &length);

	puts("Now what's your name?");
	read(0, name, length);

	if (!strcmp(password, "THIS IS SO EASY"))
	{
		win();
	}

	puts("Goodbye!");
	return 0;
}
