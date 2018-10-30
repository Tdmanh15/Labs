#include<iostream>
#include<math.h>
using namespace std;
class compounded
{
	private:
	int initial_amount,number_of_years;
	float interest_rate;
	public:
		void Nhap(int &initial_amount,int &number_of_years,float &interest_rate)
		{
			cout<<"Enter initial amount:";
			cin>>initial_amount;
			cout<<"Enter number of years: ";
			cin>>number_of_years;
			cout<<"Enter interest rate (percent per year): ";
			cin>>interest_rate;
		}
		void Xuat(int initial_amount,int number_of_years,float interest_rate)
		{
			int m=initial_amount;
			float k=interest_rate;
			int n=number_of_years;
			float sum=0;
			
				sum=(pow((1+k*0.01),n))*m;
			cout<<"At the  of "<<number_of_years<<" year, you will have "<<sum<<" dollars.";
		}
};
int main()
{
	int initial_amount;
	int number_of_years;
	float interest_rate;
	compounded a;
	a.Nhap(initial_amount,number_of_years,interest_rate);
	a.Xuat(initial_amount,number_of_years,interest_rate);
	return 0;	
}
