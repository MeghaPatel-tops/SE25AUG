#include<iostream>
using namespace std;
class Area{
	public:
		virtual void findArea()=0;
};
class Circle:public Area{
	public:
		void findArea(){
			int r;
			cout<<"\n Enter radius";
			cin>>r;
			cout<<"\n ares of circle="<<(3.14*r*r);
		}
};
class Rect :public Area{
public:
		void findArea(){
			int l,b;
			cout<<"\n Enter len and breath";
			cin>>l>>b;
			cout<<"\n ares of Ract="<<l*b;
		}
};
main(){
	Circle c1;
	c1.findArea();
	Rect r1;
	r1.findArea();
}
	
