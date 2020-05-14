#include<iostream>
using namespace std;


int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}

int main()
{
	int a,b,c;
	cout<<"enter value 1:"<<endl;
	cin>>a;
	cout<<"enter value 2:"<<endl;
	cin>>b;
	c=gcd(a,b);
	cout<<"Greatest common divisor is:"<<c;
}
