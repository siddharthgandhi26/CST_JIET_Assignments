#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> ar;
/*	ar.push_back(17);
	ar.push_back(48);
	ar.push_back(9);
	ar.push_back(9);*/
	ar.push_back(9);
	ar.push_back(5);
	ar.push_back(3);
	int i,j,minx=INT_MAX,b;
	cout<<"Array is:"<<endl;
	for(i=0;i<ar.size();i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<ar.size();i++)
	{
		for(j=i+1;j<ar.size();j++)
		{
			b=ar[i]^ar[j];
			
		if(b<minx)
			{
			minx=b;
			}
	}
}
cout<<"min ans is"<<minx;
}
