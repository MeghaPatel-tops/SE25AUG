#include<iostream>
using namespace std;
class Category{
	public:
		//data member;
		int catid;
		char catname[20];
		
		void getCategory(){
			cout<<"\n Enter category details";
			cin>>catid>>catname;
		}
};
class Product : protected Category{
	  public:
	  	char pname[20];
	  	float price;
	  	
	  	void getProduct(){
	  		getCategory();
	  		cout<<"\n Enter product name and price";
			cin>>pname>>price;  	
		}
		void showProduct(){
			cout<<"\ncategory id="<<catid<<"\t name="<<catname;
			cout<<"\n productName="<<pname<<"\t price="<<price;
		}
	
};
main(){
	Product p1;
	//p1.getCategory();
	p1.getProduct();
	p1.showProduct();
//	cout<<"\n in main="<<p1.catname;
}














