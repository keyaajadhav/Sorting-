#include<iostream>
using namespace std;

class student
{
 string name;
 int roll,sgpa;
 public:
 void getdata(student s[],int n);
 void showdata(student s[],int n);
 void shell_sort(student s[],int n);
};

void student::getdata(student s[], int n)
{	for(int i=0;i<n;i++)
{
	cout<<"Enter student name:";
	cin>>s[i].name;
	cout<<"Enter roll no:";
	cin>>s[i].roll;
	cout<<"Enter sgpa:";
	cin>>s[i].sgpa;
}
}
void student::shell_sort(student s[],int n)
{
	int gap=n/2;
	while(gap>=1)
	{
	for(int j=gap;j<n;j++)
	{
		for(int i=j-gap;i>=0;i=i-gap)
		{
			if(s[i].name>s[i+gap].name)
			{
				student temp=s[i+gap];
				s[i+gap]=s[i];
				s[i]=temp;

			}
			else{
			break;
		}
		}
		}
		gap=gap/2;
		
		}
		}

void student::showdata(student s[],int n)
{	
	
	for(int i=0;i<n;i++)
	{
	cout<<"Name:"<<s[i].name<<endl;
	cout<<"Roll No."<<s[i].roll<<endl;
	cout<<"SGPA:"<<s[i].sgpa<<endl;
	}
	}
int main()
{
int m;
cout<<"Enter number of students:";
 cin>>m;
 student s[m];
 int n=sizeof(s)/sizeof(s[0]);
 student x;
 x.getdata(s,n);
 x.shell_sort(s,n);	
 x.showdata(s,n);
 return 0;
 }
