#include<stdio.h>
void display();//fuction declartion
void add(int a,int b);
float areaOfCircle(int r);
main(){
	float ans;
	display();//calling
	add(3,7);
	add(80,78);
	ans=areaOfCircle(5);
	printf("\n areofcircle=%f",ans);
}
void display(){//function definition
	printf("\n hello world");
}
void add(int a,int b){
	printf("\n addition of %d and %d=%d",a,b,a+b);
}
float areaOfCircle(int r){
	float a;
	a=3.14*r*r;
	return a;
}
