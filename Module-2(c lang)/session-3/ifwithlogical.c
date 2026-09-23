//find max of 3
#include<stdio.h>
main(){
	int a,b,c;
	printf("\n Enter a b and c:");
	scanf("%d %d %d",&a,&b,&c);
	
    if( a > b && a> c){
    	printf("\n a is max");
	}
	else if( b > a  && b> c){
		printf("\n b is max");
	}
	else if(a==b && b==c && c==a){
		printf("\n all area equal");
	}
	else{
		printf("\n c is max");
	}
}
