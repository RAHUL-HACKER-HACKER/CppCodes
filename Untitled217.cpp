#include <iostream>  
using namespace std;

void add(){
     int n,m;     
      cout<<endl<<"enter value of n :";
      cin>>n;
      cout<<endl<<"enter value of m :";
      cin>>m;
    cout<<"sum of n and m = ";
    cout<<n+m;
}





int main()  
{  
    jump:
       
        add();
      
    goto jump; 
            
}  
