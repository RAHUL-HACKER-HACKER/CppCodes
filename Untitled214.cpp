#include <iostream>
using namespace std;
int main()
{
  cout << "pattern problem";
  int n;
  cout<<"enter any num : ";
  cin>>n;
  
  int i=1;
  do {
  	int j=1;
  	
  	do{
  		cout<<j;
  		j++;
  		
  		
	  }
	  while(j<=i);
  	
	  
	  cout<<endl;
	  i++;
  }
  while(i<=n);
  

  		
  		
  		
	  
  
  return 0;
}
