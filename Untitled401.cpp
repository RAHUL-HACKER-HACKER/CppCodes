#include<iostream>
#include<vector>
#include <utility>
using namespace std;
int main(){
	pair<int,string> a;
	a={10,"rahul"};
	cout<<a.first<<" "<<a.second;
	cout<<endl;
	vector<int> b;
	for (int i = 1; i <= 5; i++)
        b.push_back(i);
	cout<<b[4];
	
}
