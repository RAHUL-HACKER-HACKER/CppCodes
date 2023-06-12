using namespace std;
#include<iostream>
template <class c> class add

{
	public:
		c a=100;
		void disp()
		
     	{
		
		    cout<<"value of a :"<<a;
    	}

	

};
main()
{
	add<double> s;

	s.disp();
	
	
}

