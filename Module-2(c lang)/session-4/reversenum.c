#include<stdio.h>
//find sum of first and last digit(hint:8712   8+2=10)
//find max of all digit hint( 1284  max:8)

main(){
	int i,num,rem,rev=0;
	printf("\n Enter the num");
	scanf("%d",&num);//init
    while(num != 0){//conidition
    	rem = num %10;
    	//printf("\n rem=%d",rem);
    	num=num/10;//modification
    	//printf("\t num=%d",num);
    	rev=rev*10+rem;
    	//printf("\t rev=%d",rev);
	}
	printf("\t rev=%d",rev);
}
