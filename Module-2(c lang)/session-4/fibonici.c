#include<stdio.h>
main(){
	int i,num,x1=0,x2=1,ans;
	printf("\n Enter the num");
	scanf("%d",&num);
    for(i=1;i<=num;i++){
    	ans=x1+x2;
    	printf("\t %d,",ans);
    	x1=x2;
    	x2=ans;
	}
}
