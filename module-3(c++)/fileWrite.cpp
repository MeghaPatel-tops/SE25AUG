#include<iostream>
#include<fstream>
using namespace std;
main(){
	char data[20];
//	ofstream writeFile;
//	writeFile.open("hello.txt",ios::out);
//	writeFile<<"hello world";
//	writeFile.close();

    ifstream readFile;
    readFile.open("hello.txt",ios::in);
    //readFile>>data;
    readFile.getline(data,20);
    cout<<"\n reading dat from file="<<data;
    readFile.close();
    
}
