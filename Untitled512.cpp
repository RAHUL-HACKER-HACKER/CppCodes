#include<iostream>
using namespace std;
class info{
public:
string a;
int b;
char c[100];
info(string a1,int b1,char c1[100]){

a=a1;
b=b1;
c[100]=c1[100];
}
void display(){
cout<<a<<endl;
cout<<b<<endl;
for(int i=0;i<10;i++){

cout<<c[i];
}
}



};
int main(){

string a2="r'k";
int b2=9;
char c2[100]="hjvhlvvhuyyuftt6udts";
info myobj(a2,b2,c2[100]);
myobj.display();





return 0;
}
