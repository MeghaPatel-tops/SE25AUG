#include<stdio.h>
main(){
	int a[5]={12,34,56,78,90};
	char str[5]={'h','e','l','l','o'};
	int i;
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
	for(i=0;i<5;i++){
		printf("\n str[%d]=%c",i,str[i]);
	}
}
