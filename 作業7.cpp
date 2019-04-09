//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;
	int i;
	int total=0;
	
	printf("1+2+3+...+");
	scanf(" %d",&number);
	
	for (i=0; i<=number; i++)
	total=total+i;
	
	printf("=%d\n",total);
	
	system("pause");
	return 0;
}
