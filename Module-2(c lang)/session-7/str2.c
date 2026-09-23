#include<stdio.h>
main(){
	char pwd[20];//admin123
	int i=0;
	printf("\n enter password");
	scanf("%s",pwd);
	
	while(pwd[i]!='\0'){
		i++;
	}
	printf("\n len=%d",i);
	
	if(i >=8 && i<=10){
		printf("\n valid password");
	}
	else{
		printf("\n invalid password");
	}
}
