#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int Dev;
	char c2[18];
	char c8[18];
	char c16[18];
	
	printf("請輸入一個十進位數字:");
	scanf("%d",&Dev);
	
	itoa(Dev,c2,2);
	itoa(Dev,c8,8);
	itoa(Dev,c16,16);
	
	printf("轉換後二進制為%s\n",c2);
	printf("轉換後八進制為%s\n",c8);
	printf("轉換後十六進制為%s\n",c16);
	
	system("pause");
	return 0;
}
