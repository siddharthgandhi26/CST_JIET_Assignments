#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	int A[50][50]={0};
	cout<<"enter range:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	
	{
		A[i][0]=1;
	}
for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}

	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			if(i>=j){
				if(i==j)
				{
					A[i][j]=A[i][j-1];
				}
				else
				{
					A[i][j]=A[i][j-1]+A[i-1][j];
				}
			}
		}
	}
	cout<<endl<<"route map"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"number of routes:"<<A[n-1][n-1];
}
