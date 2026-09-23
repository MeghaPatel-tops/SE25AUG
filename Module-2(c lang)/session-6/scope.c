#include<stdio.h>
float pi=3.14;//global varible
main(){

	{
		int x=10;//local
		printf("\n x=%d",x);
	}
	printf("\n pi=%f",pi);
}
