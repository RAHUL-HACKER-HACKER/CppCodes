using namespace std;
#include <iostream>
//#include <cmath>
#include <bits/stdc++.h>
class art
{
	
    public:	
	    int x;
        int y;
         	
    art(int a,int b){
			
		    x=a;
	       	y=b;
		
	}     	
	void add(){
	cout<<endl<<"addition "<<x+y;
    }
};
class iart:public art{
	

};
int main(){
	
	art r1(200,300);

	iart r2;

	r2.add();


    /*you are a good man*/
	return 0;
}
