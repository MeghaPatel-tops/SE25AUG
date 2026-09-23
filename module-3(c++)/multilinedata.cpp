#include<iostream>
#include<fstream>
using namespace std;
main(){
	int id,i;
	char name[20];
	char data[30];
	ofstream wF;
	wF.open("user.csv",ios::app);
	for(i=0;i<3;i++){
		cout<<"\n enter id amd name";
		cin>>id>>name;
		wF<<id<<","<<name<<"\n";
	}
	wF.close();
	
	ifstream rF;
	rF.open("user.csv",ios::in);
	while(rF.getline(data,30)){
		  cout<<data<<"\n";
	}
	rF.close();
}
