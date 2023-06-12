#include<iostream>
using namespace std;
class info{
	string a;
	int b;
	public:
	info(string a,int b){
		
		cout<<"constructor is called"<<endl;
		this->a=a;
		this->b=b;
		
	}

	void disp(){
		
		cout<<"value of a :"<<a<<endl;
		cout<<"value of b :"<<b<<endl;
		
	}

	
	
};
int main(){
	
	info obj1("hello guys",200);
	info obj2("hi anand ",1000);
    obj2.disp();
	obj1.disp();
	
	
	

	
	
	
	
}
