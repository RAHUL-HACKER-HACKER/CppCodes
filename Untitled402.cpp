using namespace std;
#include<iostream>
#include<fstream>
int main(){
	
	ofstream myfile("abcd.txt");
	myfile<<"my self rahul kumar";
	myfile.close();
	string mytext;
	ifstream myreadfile("abcd.txt");
	while(getline(myreadfile,mytext)){
		cout<<mytext;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
