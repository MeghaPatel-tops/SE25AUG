#include<iostream>
//Array of object
using namespace std;
class Product{
	private:
	//data member
	int pid ;
	char pname[20];
	float price;
	//member function
	public:
	void getProductInfo(){
		cout<<"\n Enter pid pname price";
		cin>>pid>>pname>>price;
	}
	void showProduct(){
		cout<<"\n pid="<<pid;
		cout<<"\n pname="<<pname;
		cout<<"\n price="<<price;
		
	}
};
main(){
	 Product p[3];
	 int i;
	 for(i=0;i<3;i++){
	 	p[i].getProductInfo();
	 }
	  for(i=0;i<3;i++){
	 	p[i].showProduct();
	 }
	 
}
