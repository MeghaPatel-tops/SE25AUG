#include<stdio.h>
/*
   if(condition){
 	//block  
}

*/
//To find square of only positive number
main(){
	int num;
	printf("\n enter num");
	scanf("%d",&num);
	if(num > 0){
		printf("\n square of %d =%d",num,num*num);
	}
}
