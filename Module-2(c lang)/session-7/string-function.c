#include<stdio.h>
#include<string.h>
main(){
	char str1[20],str2[20];//admin123
	int i=0,j=0;
	printf("\n enter str");
	scanf("%s",str1);
	strcpy(str2,str1);
	printf("\n str2=%s",str2);
	printf("\n length of str2=%d",strlen(str2));
	printf("\n strcmp=%d",strcmp("bbc","acd"));
	
	strcat(str1," hello");
	printf("\n str1=%s",str1);
	printf("\n upparcase=%s",strupr(str1));
}
