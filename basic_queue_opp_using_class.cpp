#include<iostream>
 
using namespace std;

class que
{

public:
int ar[8];
	
public:
	
void insert();
void delete1();
void display();

int rear=-1,front;	
	
   que(){
		rear=-1;
		
	    front=-1;
	}
};

void que::insert()
{   
  int a;
   
  
   if(rear==7)
   {	cout<<"queue is full"<<endl;
    
}
else {
    
    cout<<"enter the 8 elements to be insert in queue:\n"<<endl;
	for(int i=0;i<8;i++)
	{    
         cin>>a;
		 ar[i]=a;
		 
	    // cout<<"the is insert element is "<<ar[i]<<"\niis"<<i<<endl;
		
		rear=i;
		//cout<<"rear is"<<rear<<endl;
		front=0;
	}
	
	
}
}
void que::delete1()
{
	int j;
	int temp=front;

	if(front==-1)
	{ cout<<"----------------"<<endl;	
	  cout<<"queue is empty"<<endl;
	   cout<<"----------------"<<endl;		
	
	}
	else
	{  
	    cout<<"----------------"<<endl;	
	    cout<<"the element "<<ar[temp]<<"is deleted"<<endl;
	    cout<<"----------------"<<endl;	
	    ar[temp]=0;
		front=front+1;
	
	}
	
	
}

void que::display()
{   
	int a;
	if(front==-1)
	{   cout<<"----------------"<<endl;	
		cout<<"queue is empty"<<endl;
		cout<<"----------------"<<endl;	
	}
	else{
		cout<<"----------------"<<endl;	
	    cout<<"the queue is\n";
	    cout<<"----------------"<<endl;	
	
	for(a=0;a<8;a++)
	{
	   cout<<"->["<<ar[a]<<"]"<<endl;	
	}
}
}

int main()
{ 
   que a1;
int ch;

while(1)
{   
    cout<<"1.insert\n2.delete\n3.display\n5.exit"<<endl;
   cout<<"enter ur choice"<<endl;
    cin>>ch;

    
	switch(ch)
	{ 
		case 1: a1.insert();
		        break;
		case 2: a1.delete1();
		        break;
		case 3: a1.display();
		        break;
		case 5:return 0;
		
		default : cout<<"error"<<endl;		       
		        
	}
}
	
}
