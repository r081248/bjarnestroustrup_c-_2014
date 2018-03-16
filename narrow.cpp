#include<iostream>

/* example of unsafe conversions

*/

using namespace std;
int main(int argc,char **argv)
{
	int a = 20000;
	char b = a;
	int c = b;
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;
	return 0;
}
