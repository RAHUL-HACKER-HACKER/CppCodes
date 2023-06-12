#include<iostream>
using namespace std;
main(){
	int a[]={2,3,4,5,6,7,8,9,20};
	int* b=a;
	
	
	int n=sizeof(a)/sizeof(a[0]);
	cout<<endl<<"size of array :"<<n;
	cout<<endl<<"size of array :"<<b;
}
