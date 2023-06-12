using namespace std;
#include<iostream>
class arith{
	public:
	int a,b;
    
	arith(int c,int d){
		
		 a=c;
		 b=d;
		
		
	}
	void add(){
		
		cout<<endl<<"sum of a and b : "<<a+b;
		
	}
	
};
int main(){
	arith ar(300,500);
	
	ar.add();
	cout<<endl<<ar.a;
	cout<<endl<<ar.b;
	
	
	return 0;
}
