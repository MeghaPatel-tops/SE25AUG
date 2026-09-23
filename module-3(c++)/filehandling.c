#include<stdio.h>
main(){
	FILE *fp;
	char data[50],ch;
	fp=fopen("test.txt","w");
	//fprintf(fp,"Hello world");
	//fputs("hello world",fp);
	fputc('w',fp);
	fclose(fp);
	
	fp=fopen("test.txt","r");
	//fscanf(fp,"%s",data);
    //	fgets(data,12,fp);
    ch= getc(fp);
//	printf("\n redaing data from file=%s",data);
	printf("\n char=%c",ch);
}
