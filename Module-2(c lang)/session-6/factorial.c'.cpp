//recursive function
#include<stdio.h>
int factFind(int num){
	if(num==1){
		return 1;
	}
	int f= num *factFind(num-1);
	return f;
}
main(){
	 printf("\n factorial=%d",factFind(5));
}
