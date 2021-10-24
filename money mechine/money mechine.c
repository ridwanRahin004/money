#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>

void again_or_exit()
{
	int a_o_e;
	printf("\n\nEnter [1] to start again or enter [2] to exit\n");
	scanf("%d" , &a_o_e);
	if(a_o_e=1){
		main();
	} else if (a_o_e=2)
	{
		printf("\nOk then Enjoy your %ld tk \n\n\n\n");
	}
	else{
		printf("\nInvalid Command###\n\n\n\n");
	}
}

int main()
{
	int m;
	int i;

	system("color 2");
	printf("\tHi\n");
	printf("How much money do you want \?\n");
	scanf("%d" , &m);
	for (i=1;i<=m;i++)
	{
		Sleep(100);
		printf("\t\t%d$\n" , i);
	}
	printf("\nHere you go.......");
	printf("\nEnjoy your %d tk\n\n\n\n" , m);

	again_or_exit();

	return 0;
}
