#include<stdio.h>
main(){
	FILE *fp;
	char data[30];
	//writing mode
	fp=fopen("hello.txt","w");
	fprintf(fp,"%s","hello world");
	fclose(fp);
	
	//reading
	fp=fopen("hello.txt","r");
	fscanf(fp,"%s",data);
	printf("\n reading data from file=%s",data);
	fclose(fp);
	
}
