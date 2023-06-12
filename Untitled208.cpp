#include <iostream>
using namespace std;



main()
{

    for(int i=3;i>=1;i--){
	    for(int j=i;j>1;j--)
	    {
	    	cout<<" ";
	    	

		}
		
		for(int k=1;k<=(4-i);k++)
		{
			cout<<k;
		}
		cout<<endl;
		
	}
}


