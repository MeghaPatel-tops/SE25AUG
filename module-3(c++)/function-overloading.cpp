#include<iostream>
using namespace std;
//same function perform diff task according to 
//no.of parameters and type of parameter
class Maths{
	public:
		void add(int x,int y){
			cout<<"\n addition of two int="<<x+y;
		}
		void add(float a, float b ,float c){
			cout<<"\n addition of three float="<<a+b+c;
		}
};
main(){
	Maths m1;
	m1.add(3.4,5.6,7.8);
	m1.add(45,67);
}
