using namespace std;
#include <iostream>
#include <cstdlib>
class school
{
	public:
		
		int a;
	public:	
	    void boy()
        {
    	    int a=160;
		    cout<<"boy is best new  coder "<<a;
		
	    }
	    void girl()
	    {
	    	
			cout<<endl<<"girl is good coder "<<a;
	    	
		}
		
	    void gay();
	    void trans();
		
};
void school::gay()
{
	int a=10000;   //remove int see magic(a value will change)
 
	cout<<endl<<"gay is a desiner "<<a;
    	
}
void school::trans()
{
	
	cout<<endl<<"trans is best coder "<<a;
}
main()
{
	
	school c;
	c.a=100;
	//int b=200;
	c.boy();
	c.girl();
	c.gay();
	c.trans();
	
}
