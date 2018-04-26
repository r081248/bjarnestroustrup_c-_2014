#include<iostream>

using namespace std;

//Write a program to parse the expression
// example 1+2/5*7-10*98
//Expression should end with letter 'x'

int main()
{
	cout<<"Enter expression that ends with x...."<<endl;
	int lvalue,rvalue;
	char op;
	cin >> lvalue;
	if(!cin)
	{
		cout<<"No first operand.....\n";
		return 0;
	}
	
	for(;cin>>op;)
	{
		if(op!='x') cin >> rvalue;		
		if(!cin)
		{
			cout<<"No second operator...\n";
			return 0;
		}
		switch(op)
		{
			case '+':
				lvalue += rvalue;
				break;
			case '-':
				lvalue -= rvalue;
				break;
			case '*':
				lvalue *= rvalue;
				break;
			case '/':
				lvalue /= rvalue;
				break;
			default:
				cout << "Result: " << lvalue << '\n';
				return 0;


		}
		

	}
	cout << "Bad Expression"<<endl;
}
