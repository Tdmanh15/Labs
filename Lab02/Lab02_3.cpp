#include<iostream>
#include<math.h>
using namespace std;
class calculation_arithmetical
{
	private:
	double first_number;
	char operator_s;
	double second_number;
	double answer;
	
		
	
	public:
		void Nhap(double &first_number,char &operator_s,double &second_number)
		{
			cout<<"Enter first number, operator, second number: ";
			cin>>first_number>>operator_s>>second_number;
		
			switch(operator_s)
		{
		case '+' :
		answer=first_number+second_number;
		cout<<"Answer: "<<answer;
		break;
		case '-' :
		answer=first_number-second_number;
		cout<<"Answer: "<<answer;
		break;
		case '*' :
		answer=first_number*second_number;
		cout<<"Answer: "<<answer;
		break;
		case '/' :
		answer=first_number/second_number;
		cout<<"Answer: "<<answer;
		break;
		default :
      	cout << "Gia tri khong hop le" << endl;	
		}
		}
		
};
int main()
{
	double first_number;
	char operator_s;
	double second_number;
	double answer;
	char n;

	do
	{
		
		calculation_arithmetical a;
		a.Nhap(first_number,operator_s,second_number);
		cout<<"\nDo another (y/n)?";
		cin>>n;
	}while(n =='y');
	return 0;
}
