#include<iostream>
using namespace std;
class Maths{
	private :
		 int m;
	public:
	   Maths(int m){
	   	  this->m=m;
	   }
	   friend void display(Maths);
	   friend class FriendClass;
};
class FriendClass{
	public:
		void test(Maths m1){
			cout<<"\n m="<<m1.m;
		}
};
void display(Maths m1){
	cout<<"\n m="<<m1.m;
}
main(){
	Maths m1(23);
  	display(m1);
  	FriendClass f1;
  	f1.test(m1);
}
