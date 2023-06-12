#include <iostream> 

using namespace std; 

int main() 

{ 

  cout << "Printable ASCII [32..126]:\n"; 

  for (int i=1; i <=100; i++) { 
  

    cout << i << ((i % 20 <=10) ? ' ' : '\n'); 

  } 

} 
