#include <iostream>


using namespace std;

class bank{
public:
 string name;
 string acno;
 string actype;
 int amount;

 bank()
 {
 name="xclusive";
 acno="335271574534";
 actype= "savings";
 amount =100;

 }
 //~bank();

 void deposit();
 void withdraw();
 void profile();

};
 void bank::deposit()
{ int a;
  cout<<"-------------------------------"<<endl;
  cout<<"Enter the ammout to be deposit:"<<endl;
  cin>>a;
  amount=amount+a;
  cout<<"Rs."<<a<<" is credited in ur account"<<endl;
  cout<<"-------------------------------"<<endl;
}
void bank::withdraw()
{int l;
 cout<<"-------------------------------"<<endl;
 cout<<"Enter the amount to be withdraw:"<<endl;
 cin>>l;
 if(l>amount){
 cout<<"----------------------------------------------"<<endl;
 cout<<"you have insufficient balance in your Account"<<endl;
 cout<<"----------------------------------------------"<<endl;
 }
 else
 {
 amount=amount-l;
 cout<<"Rs."<<l<<" is succefully debited from your account"<<endl;
 cout<<"-------------------------------"<<endl;
}
}
void bank::profile()
{


 cout<<"-------------------"<<endl;
 cout<<"PROFILE"<<endl;
 cout<<"-------------------"<<endl;
 cout<<"Name:"<<name<<endl;
 cout<<"Account number:"<<acno<<endl;
 cout<<"Account type:"<<actype<<endl;
 cout<<"Total amount: Rs."<<amount<<endl;
 cout<<"-------------------"<<endl;

}
int main()
{
    cout<<"*****************"<<endl;
	cout<<"BANK OF MEGHALAYA"<<endl;
	cout<<"*****************"<<endl;
	bank a1;
	int ch;
	while(1)
	{ cout<<"Enter your choice"<<endl;
     cout<<"1.Profile\t2.Withdraw\t3.Deposit\t4.Exit"<<endl;
	  cin>>ch;
	  switch(ch)
	  {
	     case 1: a1.profile();
	             break;
	     case 2: a1.withdraw();
	             break;
	     case 3: a1.deposit();
	             break;
	     case 4: return 0;
	             break;
	     default : cout<<"please enter a valid option"<<endl;
       }

	}
	return 0;
}
