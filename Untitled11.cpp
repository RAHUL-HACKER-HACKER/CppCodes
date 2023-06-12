//question (2nd)
using namespace std;
#include <cstdlib>
#include <iostream>
#include <ctime>
int main()

{
	int n,r;
	srand(time(0));
	{
	
		r=rand()%10;
    }
	
	cout<<"inter guess value :";
	cin>>n;
		
		
	while(r!=n)
	{
		if(n<r)
		{
			cout<<"inter value too low,try again"<<endl;
			cout<<"inter value  :";
	        cin>>n;
				
		}
		else
		{
			cout<<"inter value too high,try again"<<endl;
			cout<<"inter value  :";
	        cin>>n;
		}
    }
    if(r==n)
    {
    	cout<<endl<<"Excellent!,you guessed the number";
	}
}

		

