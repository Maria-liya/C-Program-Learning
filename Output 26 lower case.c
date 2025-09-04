#include <stdio.h>
#include <stdlib.h>
#define SIZE 26

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char lowercase[SIZE];
	int i;
	for (i=0;i<SIZE;i++)
	{
		lowercase[i]='a'+i;
		printf("%c ",lowercase[i]);
	}
	return 0;
}