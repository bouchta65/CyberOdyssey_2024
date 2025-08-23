// gcc -o chall main.c

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int win()
{
	char flag[100];
	FILE *file = fopen("./flag.txt", "r");
	fgets(flag, sizeof(flag), file);
	printf("Hak: %s!\n", flag);
}

int main()
{
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);

	char buffer[100];
	int offset, length;

	printf("Because I am nice %p 🫶\n", win);

	puts("I trust you're gonna choose 0! you know why? because I trust you 🥺!");
	scanf("%d", &offset);

	puts("I trust you're gonna choose 100! you know why? because I trust you 👉👈!");
	scanf("%d", &length);

	read(0, buffer+offset, length);

	return 0;
}
