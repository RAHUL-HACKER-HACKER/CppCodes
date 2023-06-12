using namespace std;
#include<iostream>
class addition
{
	public:
		void disp()
		{
			int a=100;
			int b=200;
			cout<<"sum of a and b : "<<a+b;
		} 
		
};
class subtraction: virtual public addition
{
	public:
		void disp();
		void disp1()
		{
			int c=500;
			int d=400;
			cout<<endl<<"sub of a and b : "<<c-d; 
		}
};
class show:public addition,public subtraction
{
	
};
main()
{
	show s;
	//s.disp(); it is a ambiguity becouse disp() fn in both class
  	//using scope resolution
  	s.disp();
  	
}
