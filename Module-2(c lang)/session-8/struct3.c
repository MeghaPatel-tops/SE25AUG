#include<stdio.h>
struct Product{
	int pid;
	char pname[20];
	float price;
};
main(){
	struct Product p[3] ;
	int i;
	for(i=0;i<3;i++){
		printf("\n Enter pid pname price");
	    scanf("%d %s %f",&p[i].pid,p[i].pname,&p[i].price);
	}
    for(i=0;i<3;i++){
    		printf("\n pid=%d",p[i].pid);
	printf("\n pname=%s",p[i].pname);
	printf("\n price=%f",p[i].price);
	}
}
