#include<stdio.h>
main(){
	int enroll,i;
	char name[20],ch;
    FILE *fp;
	fp=fopen("student.csv","a
	
	
	
	
	");
	for(i=0;i<3;i++){
		printf("\n Enter enroll and name");
		scanf("%d %s",&enroll,name);
		fprintf(fp,"%d,%s\n",enroll,name);
		
	}
	fclose(fp);
	fp=fopen("student.csv","r");
	while((ch=getc(fp))!=EOF){
		printf("%c",ch);
	}
}
