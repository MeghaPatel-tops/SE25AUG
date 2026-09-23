#include<iostream>
using namespace std;
class SquareFind{
	public:
		int num;
		void findSquare(){
			cout<<"\n enter num";
			cin>>num;
			cout<<"\n square ="<<num*num;
		}
};
class findRect{
	public:
		int l,b;
		void findAreaOfRect(){
			cout<<"\n Enterlen and breath";
			cin>>l>>b;
			cout<<"\n area of rect="<<l*b;
		}
};
class Maths : public SquareFind,public findRect{
	  public:
	  	int ch;
	  	void MathsTask(){
	  	  	cout<<"\n press 1 for find Square";
	  	  	cout<<"\n press 2 for find area of rect";
	  	  	cin>>ch;
	  	  	switch(ch){
	  	  		case 1:
	  	  			findSquare();
	  	  		break;
				case 2:
					findAreaOfRect();
				break;
				default	:
				    cout<<"\n wrong choice";
				break;		
				}
	  	  	
		}
};
main(){
	Maths m1;
	m1.MathsTask();
}
