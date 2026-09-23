#include<iostream>
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
	 Product p1;
	 p1.getProductInfo();
	 p1.showProduct();
	 
}
