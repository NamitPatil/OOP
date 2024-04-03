#include<iostream>
 
using namespace std;
const int maxsize=100;
 
class stack{
  private:
	int top;
	int size;
	int arr[];
  public:
    	
	stack(int s)
	{
		top=-1;
		size=s;
	}
	
	void push(int val)
	{
		if(top==size-1)
		{
			cout<<"Stack is full";
		}
		else{
			top++;
			arr[top]=val;
			cout<<"Pushed Successfully";
		}
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack is empty";
		}
		else{
			top--;
			cout<<"\nElement pop successfull";
		}
		
	}
	bool isempty(){
		return (top==-1);
	}
	bool isfull(){
		return (top==size-1);
	}
	int peek()
	{
		int p=arr[top];
		return p;
	}
	void display()
	{
		for(int i=0;i<=top;  i++)
		{
			cout<<arr[i]<<endl;
		}
	}
};
int main()
{
	int sz;
	cout<<"Enter stack size :";
	cin>>sz;
	stack s(sz);
	int ch,p;
	do{
		cout<<"\nEnter your choice\n1.PUSH\n2.POP\n3.is empty\n4.is full\n5.PEEK\n6.Display\n7.EXIT"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
				
				cout<<"\nEnter value to push"<<endl;
				cin>>p;
				s.push(p);
				break;
			}
			case 2:
				{
				
				s.pop();
				break;
			}
			case 3:
			{
			
				if(s.isempty()==true)
				{
					cout<<"\nStack is empty";
				}
				else{
					cout<<"\nstack is not empty";
				}
				break;
			}
			case 4:
				{
				
				if(s.isfull()==true)
				{
					cout<<"\nStack is full";
				}
				else{
					cout<<"\nstack is not full";
				}
				break;
			}
			case 5:
			{
			
			cout<<"\nPeek element is = "<<s.peek()<<endl;
				break;
			}
			case 6:
				{
					s.display();
					break;
				}
			case 7:
				{
				
				cout<<"Exiting!!!!";
			}
		}
	}while(ch!=7);
	
}
