using namespace std;
#include<iostream>
class abc{
	public:



int add(int a,int b){
	
	int c=a+b;
	return c;
}
void display(){
	abc e;
	abc &f=e;
	
	int d=f.add(600,700);
	cout<<"sum of a and b :"<<d;
}

};


int main(){
	abc ab;
	
	ab.display();
	
	return 0;
}
