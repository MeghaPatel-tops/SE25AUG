#include<iostream>
using namespace std;

class Test{
	public:
	inline void display(){
	cout<<"\n Inline method";
	}
};


main(){
	Test t1;
	t1.display();
}
