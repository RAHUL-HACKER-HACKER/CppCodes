using namespace std;
#include <iostream>
main()
{
	int a;
	a=100;
	string b;
	b="rahul";
	int* ptr1;
	ptr1=&a;
	string* ptr2;
	ptr2=&b;
	cout<<"value of a "<<a<<endl;
	cout<<"value of a "<<*&a<<endl;
	cout<<"memory addrese of a "<<&a<<endl;
	cout<<"memory addrese of a "<<ptr1<<endl;
	cout<<"value of b "<<b<<endl;
	cout<<"value of b "<<*&b<<endl;
	cout<<"memory addrese of b "<<&b<<endl;
	cout<<"memory addrese of b "<<ptr2<<endl;
}
