#include<stdio.h>
struct Product{
	int pid;
	char pname[20];
	float price;
};
main(){
	struct Product p[3] ;
	char ch;
	FILE *fp;
	int i;
	fp=fopen("product.csv","w");
	 fprintf(fp,"ProductId,Name,Price\n");
	for(i=0;i<3;i++){
		printf("\n Enter pid pname price");
	    scanf("%d %s %f",&p[i].pid,p[i].pname,&p[i].price);
	    fprintf(fp,"%d,%s,%f\n",p[i].pid,p[i].pname,p[i].price);
	}
	fclose(fp);

    fp=fopen("product.csv","r");
    while((ch=getc(fp))!=EOF){
    	if(ch==','){
    		printf("\t");
    		continue;
		}
    	printf("%c",ch);
	}
  
}
