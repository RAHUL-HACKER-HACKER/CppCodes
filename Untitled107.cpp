using namespace std;
#include <iostream>
class base
{
	public:
		void objj()
		{
			cout<<"this is a first object"<<endl;
			
		}
		
	
};
class derived:public base
{
	public:
		void obj()
		{
			cout<<"this is a second object"<<endl;
			
		}
};
main()
{
	base b;
	derived d;
	d.objj();
	d.obj();
}
