using namespace std;
#include <iostream>
class parent
{
	public:
		int a;
		void def()
		{
			int a=100;
			cout<<"1st value ;"<<a;
		}
		
		void fn()
		{
			//int a;
			
			cout<<endl<<"2nd value :"<<a;
		}
		void chek()
		{
			int a=300;
            cout<<endl<<"3rd value :"<<a;
		}
};
main()
{
	parent p0,p1,p2,p3;
	p0.a=200;
	p1.def();
	p1.fn();
	p3.chek();
}
	

