#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,m;
	for (i=1;i<=5;i++)
	{
		for(m=1;m<=i;m++)
		   printf("$");
		printf("\n");		   	
	}
	return 0;
}