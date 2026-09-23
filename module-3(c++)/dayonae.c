#include<stdio.h>
main(){
	float day[7],hour,sum=0;
	int i,j;
	
		for(i=0;i<7;i++){
		printf("\n Enter value");
		scanf("%f",&hour);
		if(hour <= 0 || hour>= 24){
			printf("\n Enter valid hours");
			break;
		}
		else{
			sum+=hour;
			day[i]=hour;
		}
	}
	
	
		for(i=0;i<7;i++){
			printf("\t %f",day[i]);
		}
		printf("\n sum=%f",sum);
		printf("\n avg=%f",sum/7);
	
}
