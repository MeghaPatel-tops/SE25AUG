#include<stdio.h>
main(){
	FILE *fp;
	char ch;
	//writing mode
	fp=fopen("hello2.txt","w");
     fputc('X',fp);
	fclose(fp);
	
	//reading
	fp=fopen("hello2.txt","r");
    ch = fgetc(fp);
	printf("\n reading data from file=%c",ch);
	fclose(fp);
	
}
