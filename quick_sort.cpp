#include<iostream>
using namespace std;
class employee{
	public:
	int id,sal;
	string name;
	void read(){
	
		cout<<"Enter Employee ID:";
		cin>>id;
		cout<<"Enter Employee Name:";
		cin>>name;
		cout<<"Enter Employee Salary:";
		cin>>sal;
	
	}
};
void sort_id(employee a[],int n,int f,int l)
{
	int pivot;
	if(f<l)
	{
		pivot=f;
		int i=f+1;
		int j=l;
		while(i<j)
		{
			while(a[i].id<a[pivot].id && i<l)
			{
				i++;
			}
			
			while(a[j].id>a[pivot].id)
			{
				j--;
			}
			if(i<j)
			{
				employee temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			else{
			break;
			}
			}
			employee temp=a[pivot];
			a[pivot]=a[j];
			a[j]=temp;
			sort_id(a,n,f,j-1);
			sort_id(a,n,j+1,l);
			}
			}
void print(employee a[],int n)
{
	for(int i=0;i<n;i++)
	{
	cout<<"Employee Id:"<<a[i].id<<endl;
	cout<<"Employee Name:"<<a[i].name<<endl;
	cout<<"Employee Salary:"<<a[i].sal<<endl;
	}
	}
int main() {
	int id,sal;
	string name;
	int n;
	cout<<"Enter number of Employees:";
	cin>>n;
	employee a[n];
	for(int i=0;i<n;i++)
	{
	a[i].read();
	}
	int f=0;
	int l=n-1;
	sort_id(a,n,f,l);
	print(a,n);
	return 0;
	}	
			

	
