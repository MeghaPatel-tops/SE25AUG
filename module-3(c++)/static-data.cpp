#include<iostream>
using namespace std;
class Maths{
	public:
		int m;
		static int s;
		Maths(int m){
			this->m=m;
			s++;
		}
		void display(){
			cout<<"\n m="<<m;
		}
		static void printStaticData(){
			cout<<"\n static data="<<Maths::s;
		}
};
int Maths::s=100;
main()
{
	Maths m1(2);
	m1.display();
	
	Maths m2(4);
	m2.display();
	//	cout<<"\n using m1 s="<<m1.s;
	//	cout<<"\n using m2 s="<<m2.s;
	Maths::printStaticData();
}
