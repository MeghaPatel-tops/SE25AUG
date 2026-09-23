#include<stdio.h>
main(){
	FILE *fp;
	char data[30];
	//writing mode
	fp=fopen("hello1.txt","w");
	fputs("welcome to app",fp);
	fclose(fp);
	
	//reading
	fp=fopen("hello1.txt","r");
    fgets(data,30,fp);
	printf("\n reading data from file=%s",data);
	fclose(fp);
	
}
