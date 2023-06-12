using namespace std;
#include <iostream>
main()
{
	int a[10],n;
	cout<<"lenght of array :";
	cin>>n;
	cout<<endl<<"inter values of array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"your value :";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		
	}
}
