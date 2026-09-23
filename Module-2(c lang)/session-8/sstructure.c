#include<stdio.h>
struct Product{
	int pid;
	char pname[20];
	float price;
};
main(){
	struct Product p1 = {101,"Laptop",23300.40};
	printf("\n pid=%d",p1.pid);
	printf("\n pname=%s",p1.pname);
	printf("\n price=%f",p1.price);
}
