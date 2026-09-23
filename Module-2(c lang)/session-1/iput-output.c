#include<stdio.h>
main(){
	char ch;//%c  1byte
	int num;//%d  4byte
	float pi;//%f  4byte
	
	printf("\n Enter single char:");
	scanf("%c",&ch);
	printf("\n ch=%c",ch);
	printf("\n Enter the int value:");
	scanf("%d",&num);
	printf("\n num=%d",num);
	printf("\n enter the value of pi:");
	scanf("%f",&pi);
	printf("\n pi=%.2f",pi);
}
