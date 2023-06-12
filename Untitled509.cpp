#include<iostream>
using namespace std;
#include<windows.h>

int  a=400;
int b=700;

void display(){
	cout<<"processing------"<<endl;
	Sleep(3000);
	cout<<"value of a :"<<a<<endl;
	cout<<"value of b :"<<b<<endl;
	system("pause");
//	exit(0);
	display();
	

	
}


int main(){
	
	
	display();
	
	
	return 0;
}
