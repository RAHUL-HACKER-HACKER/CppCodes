#include <iostream>  
using namespace std;  
class A  
{  
    public:  
    void display()  
    {  
        cout << "Class A" <<endl;  
    }  
};  
class B:public A 
{  
    public:  
    void display()  
    {  
        cout << "Class B" <<endl;  
    }  
};  
class C : public B  
{  
public:
    void dis()  
    {  
       cout<<"class c"; 
    }  
};  
int main()  
{  
    C c; 
	 
    c.display();
	  
    return 0;  
}  
