#include <iostream>  
using namespace std;  
 class Account {
 	public:
   int a=10000;  
    
   float salary = 60000;   
 };  
class Programmer: private Account { 
public: 
   int b=20000; 
   salary = 60000; 
   float bonus = 5000;
   int c=a; 
   
      
   }; 
   
   
         
int main(void) {  
     
	 //Account p2;  
	 Programmer p1;
    cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;
	  cout<<"a: "<<p1.c<<endl;
	    
    return 0;  
}  
