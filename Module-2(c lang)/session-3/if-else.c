#include<stdio.h>
/*
   if(condition){
 	//block  
	}
	else{
	}

*/
//To find number whether it is even or odd
main(){
	int num;
	printf("\n enter num");
	scanf("%d",&num);
	if(num %2 == 0){
		printf("\n Even Number");
	}
	else{
		printf("\n Odd Number");
	}
}
