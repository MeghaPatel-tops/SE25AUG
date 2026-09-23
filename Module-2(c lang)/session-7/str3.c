#include<stdio.h>
main(){
	char str1[20],str2[20];//admin123
	int i=0,j=0;
	printf("\n enter str");
	scanf("%s",str1);
	
	printf("\n str=%s",str1);
	
	
	while(str1[i]!='\0'){
		i++;
	}
	i--;
	printf("\n len=%d",i);
	while(i >= 0){
		str2[j]=str1[i];
		//printf("\n str1[%d]=%c  str2[%d]=%c",i,str1[i],j,str2[j]);
		i--;
		j++;
	}   
	printf("\n revstr=%s",str2);

}
