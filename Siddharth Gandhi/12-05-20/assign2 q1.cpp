#include<iostream>
using namespace std;
int main()
{
	int a, b, c, i,lcm, count=0;
	cout<<"Integer A:"<<endl;
	cin>>a;
	cout<<"Integer B:"<<endl;
	cin>>b;
	cout<<"Integer C:"<<endl;
	cin>>c;
	cout<<"numbers are:";
	//brute force approach
	for(i=1;i<=a;i++)
	{
		if(i%b==0 && i%c==0)
		{
			count++;
			cout<<i<<" ";
		}
	}
	cout<<endl<<"total numbers are "<<count;
}

