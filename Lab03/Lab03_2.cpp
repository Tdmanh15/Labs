#include<iostream>
#include<string>
using namespace std;
class employee
{
	private:
		int employee_number;
		float employee_compensation;
		float sum;
	public:
	void enter_Data()
	{
		cout<<"Enter employee number :";
		cin>>employee_number;
		cout<<"Enter employee's compensation : ";
		cin>>employee_compensation;
		
	}	
	void attend(int &x)
	{
		cout<<"Enter attend :";
		cin>>x;
		sum=employee_number;
		for(int i=1;i<=x;i++)
		{
			sum+=sum*employee_compensation;
		}
		
	}
	void display()
	{
		int x;
		cout<<"\nEmployee number :"<<employee_number;
		cout<<"\nEmployee's compensation : "<<employee_compensation;
		cout<<"\nSum : "<<sum;
	}
};
int main()
{
	int x;
	employee nv1,nv2,nv3;
	cout << "Enter Data For Employee 1" << endl;
 nv1.enter_Data();
 nv1.attend(x);
 cout << "\nEnter Data For Employee 2" << endl;
 nv2.enter_Data();
 nv2.attend(x);
 cout << "\nEnter Data For Employee 3" << endl;
 nv3.enter_Data();
 nv3.attend(x);
 cout << "Total Data Entered Is" << endl;
 nv1.display();
 nv2.display();
 nv3.display();
}
