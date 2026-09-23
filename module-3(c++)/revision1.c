#include<stdio.h>
union User{
	int uid;
	char name[20];
	char email[20];
};
main(){
	union User u1;
	printf("\n Enter userid name and email");
	scanf("%d %s %s",&u1.uid,u1.name,u1.email);
	printf("\n uid=%d uname=%s email=%s",u1.uid,u1.name,u1.email);
}
