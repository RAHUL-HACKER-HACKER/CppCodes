
#include<iostream>
using namespace std;
 
class display{
	
	public:
		
		
		void show(){
			
			cout<<"hi how are you guy";
		}
		
	
};
main(){
	
	display d;
	display* p=&d;
	
	p->show();
	
}
