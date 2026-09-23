#include<iostream>
using namespace std;
class Account{
	public:
		int accno;
		char holder[20];
		float balance;
		void getUserinfo(){
			cout<<"\n Enter accno holder balance";
			cin>>accno>>holder>>balance;
		}
		
};
class Saving : public Account{
	  public:
	  	void checkBal(){
	        balance = balance + (balance*0.02);
			cout<<"\n current Bal:"<<balance;  	
		}
};
class Current : public Account{
	  public:
	  	void checkBal(){
	        balance = balance - (balance*0.02);
			cout<<"\n current Bal:"<<balance;  	
		}
};
main(){
	int ch;
	cout<<"\n press 1 for Saving account";
	  	  	cout<<"\n press 2 for current account";
	  	  	cin>>ch;
	  	  	switch(ch){
	  	  		case 1:
	  	  			Saving s1;
	  	  			s1.getUserinfo();
	  	  			s1.checkBal();
	  	  		break;
				case 2:
					Current c1;
					c1.getUserinfo();
					c1.checkBal();
				break;
				default	:
				    cout<<"\n wrong choice";
				break;		
				}
}







