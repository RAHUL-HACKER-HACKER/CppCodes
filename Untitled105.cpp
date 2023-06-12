using namespace std;
#include <iostream>
void add()
{
	int a,b;
	a=500;
	b=700;
	cout<<endl<<"sum of a and b :"<<(a+b);
	
}

void sub(int x,int y)
{
	//int x,y;
	cout<<endl<<"sub of a and b :"<<(x-y);
}
main()
{
	int x,y;
	x=230;
	y=123;
	
	sub(x,y);
	add();

	
}
