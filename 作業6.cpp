//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int year;
	
	printf("�п�J�~��:");
	scanf(" %d",&year);
	if (year % 400 == 0&&year % 3200 != 0||year % 100 != 0&&year % 4 == 0)
	printf("�o�O�|�~\n");
	else
	printf("�o�O���~\n");
	
	system("pause");
	return 0;
}
