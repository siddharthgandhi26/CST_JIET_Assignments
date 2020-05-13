#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,ans;
	cout<<"enter number of bricks:"<<endl;
	cin>>n;
	ans=(-1+sqrt(1+8*n))/2;
	cout<<"ans is"<<ans;
}
