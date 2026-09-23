#include<iostream>
using namespace std;
int y=90;
namespace myspace{
	int x=100;
}
class Test{
	public:
		void display();
};
void Test::display(){
	cout<<"\n method define outside the class";
}

main(){
	std::cout<<"\n "<<myspace::x;
	Test t1;
	int y=10;
	t1.display();
	cout<<"\n y="<<::y;
}
