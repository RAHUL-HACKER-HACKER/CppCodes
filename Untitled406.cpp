#include <iostream>  
using namespace std;  
class Base  
{ public: 

char e;
int a;
};  
int main()  
{  
Base b;  
std::cout << "Size of class base is : "<<sizeof(b) << std::endl;  
return 0;  
}  

