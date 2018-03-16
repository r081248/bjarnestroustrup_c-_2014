#include<iostream>
#include<vector>

using namespace std;

int main(int argc,char **argv)
{
	vector<double> temps;
	for(double temp;cin>>temp;)//cin reads the data from keyboard and try convert to double and if it is successfully converted then (cin>>temp) replaced with true else false
	{
		temps.push_back(temp);
	}
	cout<<"size of temps is:"<<temps.size()<<endl;





}
