#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int Dev;
	char c2[18];
	char c8[18];
	char c16[18];
	
	printf("�п�J�@�ӤQ�i��Ʀr:");
	scanf("%d",&Dev);
	
	itoa(Dev,c2,2);
	itoa(Dev,c8,8);
	itoa(Dev,c16,16);
	
	printf("�ഫ��G�i�%s\n",c2);
	printf("�ഫ��K�i�%s\n",c8);
	printf("�ഫ��Q���i�%s\n",c16);
	
	system("pause");
	return 0;
}
