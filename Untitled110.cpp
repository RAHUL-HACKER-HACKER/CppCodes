using namespace std;
#include <iostream>
class student
{
	public:
		string name;
		int roll,n,a[10],tot=1;
		void get_detail()
		{
			cout<<"inter your name : ";
			cin>>name;
			cout<<endl<<"inter your roll no : "<<roll;
			
		}
		void stu_disp()
		{
			cout<<endl<<"student name : "<<name;
			cout<<endl<<"student roll : "<<roll;
		}
	
};
class marks:public student
{
	public:
		void get_marks()
		{
			cout<<endl<<"inter number of subject : ";
			cin>>n;
		
			for(int i;i<n;i++)
			{
				cout<<endl<<"inter your "<<i+1<<" subject narks : ";
				cin>>a[i];
				
			}
	    }
		void marks_disp()
		{
			cout<<endl<<"-----your marks -----";
			for(int i;i<n;i++)
			{
				cout<<endl<<i+1<<" subject : "<<a[i];
			}
		}
		
};
class result:public marks
{
	public:
		
	    void cal()
	    {
		    for(int i;i<n;i++)
		    {
			    tot+=a[i];
			
		    }
		cout<<endl<<"total marks : "<<tot;
		cout<<endl<<"avg marks : "<<(tot/n);
		
	    }
	void res_display()
	{
		for(int i;i<n;i++)
		{
			if(a[i]<50)
			{
				cout<<endl<<"you are fail subject "<<i+1;			}
		}
	}
};
main()
{
	result r;
	r.get_detail();
	r.stu_disp();
	r.get_marks();
	r.marks_disp();
	r.cal();
	r.res_display();
	
}
