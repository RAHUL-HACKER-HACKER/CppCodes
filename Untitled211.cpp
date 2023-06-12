#include <iostream>
using namespace std;
int main(){
int n;
float a,b;

string sum,sub,mul,div,x;
cout<<"enter the value of a :";
cin>>a;
cout<<" enter the value if b:";
cin>>b;
cout<<"select= sum, sub, mul, division \n";
cin>>x;

if("sum"==x){
	n=1;
}
else if("sub"==x){
	n=2;
}
else if("mul"==x){
	n=3;
}
else if("div"==x){
	n=4;
}

switch(n){
case 1:
cout<<"sum = "<<a+b;
break;

case 2:
cout<<"sub = "<<a-b;
break;

case 3:
cout<<"mul = "<<a*b;
break;

case 4:
cout<<"division = "<<a/b;
break;

}



return 0;
}
