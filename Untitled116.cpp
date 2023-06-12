#include<iostream>
using namespace std;
main()
{
	int a1=0,a2=1,a3,n;
	cout<<"inter length of fabonacci series";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<a1<<",";
		a3=a1+a2;
		a1=a2;
		a2=a3;
	}
}
