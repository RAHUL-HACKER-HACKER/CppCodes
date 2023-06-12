using namespace std;
#include <iostream>
add()
{
	int a,b;
	a=100;
	b=200;
	cout<<*&a;
	cout<<endl<<*&b;
}
main()
{
	add();
	
}
