#include<iostream>
#include<math.h>
using namespace std;
class calculator
{
	private:
		double first_fraction,second_fraction;
		char operators;
		double answer;
		float a,b,c,d;
	public:
		void Nhap(double &first_fraction,char &operators,double &second_fraction)
		{
			cout<<"Enter a,b with first fraction=a/b:";
			cin>>a>>b;
			first_fraction=a/b;
			cout<<"Enter operator:";
			cin>>operators;
			cout<<"Enter c,d with second fraction=c/d:";
			cin>>c>>d;
			second_fraction=c/d;
		switch(operators)
		{
		case '+' :
		answer=first_fraction+second_fraction;
		cout<<"Addition: "<<a<<"/"<<b<<"+"<<c<<"/"<<d<<"=("<<a<<"*"<<d<<"+"<<b<<"*"<<c<<")/("<<b<<"*"<<d<<")= " <<answer;
		break;
		case '-' :
		answer=first_fraction-second_fraction;
		cout<<"Subtraction: "<<a<<"/"<<b<<"+"<<c<<"/"<<d<<"=("<<a<<"*"<<d<<"-"<<b<<"*"<<c<<")/("<<b<<"*"<<d<<")= " <<answer;
		break;
		case '*' :
		answer=first_fraction*second_fraction;
		cout<<"Multiplication: "<<a<<"/"<<b<<"+"<<c<<"/"<<d<<"=("<<a<<"*"<<d<<"*"<<b<<"*"<<c<<")/("<<b<<"*"<<d<<")= " <<answer;
		break;
		case '/' :
		answer=first_fraction/second_fraction;
		cout<<"Division: "<<a<<"/"<<b<<"+"<<c<<"/"<<d<<"=("<<a<<"*"<<d<<"/"<<b<<"*"<<c<<")/("<<b<<"*"<<d<<")= " <<answer;
		break;
		default :
      	cout << "Gia tri khong hop le" << endl;	
		}
	}
		
};
int main()
{
	double first_fraction,second_fraction;
	char operators;
	double answer;
	char n;
	do
	{
		
		calculator a;
		a.Nhap(first_fraction,operators,second_fraction);
		cout<<"\nDo another (y/n)?";
		cin>>n;
	}while(n =='y');
	
	return 0;
}
