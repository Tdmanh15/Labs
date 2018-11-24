#include<iostream>
#include<vector>
using namespace std;
class counter
{
	private:
		static int count;
		int id;
		char name[20];
	public :
		counter()
		{
			static int count=0;
			id=++count;
		}
		void enter()
		{
			cout<<"Enter customer name :";
			cin>>name;
		}
		void display()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"ID : "<<id<<endl;
		}
};
int main()
{
	counter x[2];
	{
		for(int i=0;i<2;i++)
	{
			x[i].enter();
		x[i].display();
	}
}
}
