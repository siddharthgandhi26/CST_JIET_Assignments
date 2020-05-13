#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> ar;
	ar.push_back(2);
	ar.push_back(4);
	ar.push_back(7);
	ar.push_back(2);
	ar.push_back(7);
	ar.push_back(2);
	ar.push_back(4);
	int p=0,i;
	cout<<"Array is:"<<endl;
	for(i=0;i<ar.size();i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<ar.size();i++)
	{
		p=p^ar[i];
	}
	cout<<"the answer is "<<p<<endl;
}
