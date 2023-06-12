using namespace std;
#include<iostream>
//template use to addition of int and double values
template <class temp1,class temp2> temp1 add(temp1 x,temp2 y)
{
	temp1 sum;
	sum=x+y;
	cout<<sum;
	
}

main()
{
	int x,y;
	x=100;
	y=200;
	cout<<"sum of two int values x and y :";
	add(x,y);
	double a,b;
	a=123.45;
	b=567.89;
	cout<<endl<<"sum of two double values a and b :";
	add(a,b);
	
}
