using namespace std;
#include <iostream>
class student
{
	public:
		
		void sum(int a,int b )
		{
			cout<<"sum of all :"<<a+b;
		}
		
		
};
main()
{
	student s;
	
	int x=100;
	int y=200;
	s.sum(x,y);
}
