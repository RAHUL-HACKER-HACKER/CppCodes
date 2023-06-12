#include<iostream>
using namespace std;
#include<fstream>
int main(){
//ofstream abc;
//abc.open("C:\\Users\\rahul\\Desktop\\myfile.txt");
//
//abc<<"rahul kumar abcdef";
//abc.close();
ifstream cbd;
cbd.open("C:\\Users\\rahul\\Desktop\\myfile.txt");
string a;
cbd>>a;



while(cbd){
	getline(cbd,a);
	
	cout<<a<<endl;
	
	}



return 0;
}
