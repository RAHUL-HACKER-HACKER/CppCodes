#include <iostream>
using namespace std;
int main()
{
  cout << "pattern problem";
  int n;
  cout<<"enter any num : ";
  cin>>n;
  
  
  for(int i=n;i>=1;i--){
  	
      for(int j=1;j<i;j++){
          cout<<" ";
      }
      
      for(int k=1;k<=n-i;k++){
      cout<<k;
      }
      cout<<endl;
  }
  return 0;
}
