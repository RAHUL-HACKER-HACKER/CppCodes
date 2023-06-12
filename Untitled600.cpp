#include<iostream>
using namespace std;

class info{
public:
string a="ANAND RAJ";
virtual void fn(){
	cout<<a<<endl;
}
//cout<<a<<endl;
};
class info_1{
public:
int b=12;
void fn(){
	cout<<b<<endl;
}
//cout<<b<<endl;
};
class info_2:public info_1,public info{
public:
char c='R';
void fn2(){
	cout<<c<<endl;
}
//cout<<c<<endl;
};

int main(){
info_2 obj;
obj.fn();
//obj.fn1();
//obj.fn2();




return 0;
}
