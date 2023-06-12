#include<iostream>
using namespace std;
#include<cstdlib>
#include <ctime>
main(){
	srand(time(0));
	//cout<<rand()%10;
	//cout<<endl<<rand()%10;
	//game 
	int n,m;
	m=rand()%10;
	
	cout<<"enter any num : ";
	cin>>n;
	
	while(m!=n){
		cout<<endl<<"num not matched!!!";
		cout<<endl<<"enter any other num : ";
	    cin>>n;
		
		
	}
	cout<<endl<<"congratulation!, you win the match--------";
	string a;
	cout<<endl<<"do you want to play again?,(yes,no)";
	cin>>a;
	while("yes"==a){
		
		cout<<"enter any num : ";
	    cin>>n;
		while(m!=n){
		cout<<endl<<"num not matched!!!";
		cout<<endl<<"enter any other num : ";
	    cin>>n;
           }
     cout<<endl<<"congratulation!, you win the match--------";
	cout<<endl<<"do you want to play again?,(yes,no)";
	cin>>a;	
	}
	
	
		cout<<endl<<"thank for playing game";
		cout<<pow(5,3);
		
	
	
}
