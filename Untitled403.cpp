#include <iostream>
using namespace std;
#include<fstream>
int main(){
	
	
	
	//or we can use;
	//write a file
    string a;
    ofstream w;
    w.open("C:\\Users\\rahul\\Desktop\\rahulfile.txt");
    
    cout<<"enter any name :";
    getline(cin,a);
    w<<a;
    w.close();
    
    //read a file
    string b;
    ifstream r;
    r.open("C:\\Users\\rahul\\Desktop\\rahulfile.txt");
    
    
    while(getline(r,b)){
		
		cout<<b<<endl;
	}
    r.close();
    
    

	
	
	
	
	
	
	
	return 0;
	
}
