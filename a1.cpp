#include<iostream>
using namespace std;

class student
{	

	string name;
	int roll;
	int sgpa;
	public:
	 void getdata(student s[],int n);
	 void showdata(student s[],int n);
	 void insert(student s[],int n);
	 
};
  void student::getdata(student s[],int n)
	{
	for(int i=0;i<n;i++)
	{
	cout<<"Enter Roll no:";
	cin>>s[i].roll;
	cout<<"Enter student name:";
	cin>>s[i].name;
	cout<<"Enter sgpa";
	cin>>s[i].sgpa;
	}
	}

 void student::showdata(student s[],int n){
 	for(int i=0;i<n;i++)
 	{

	cout<<" Roll no:"<<s[i].roll<<endl;
	cout<<" student name:"<<s[i].name<<endl;
	cout<<"sgpa:"<<s[i].sgpa<<endl;

	}
	}
	
void student::insert(student s[],int n){
		for(int i=1;i<n;i++)
		{
			student key=s[i];
			int j=i-1;
			while(j>=0 && s[j].roll>key.roll)
			{
			s[j+1]=s[j];
			j--;
			}
			s[j+1]=key;
			}
			}
	
	




int main()
{
char ch;
int choice;
int m;
cout<<"Enter number of students";
cin>>m;
student x;

student s[m];
int n=sizeof(s)/sizeof(s[0]);

do{
	cout<<"Enter choice";
	cin>>choice;
	switch(choice)
	{
		case 1:
		
  		x.getdata(s,n);
	
		break;
		
		case 2:
		x.insert(s,n);
		break;
		
		case 3:
	
		x.showdata(s,n);
	
		break;
		case 4:
		cout<<"Enter Valid Choice";
		break;
		
}
cin>>ch;
}
while(ch=='y');
return 0;
}

