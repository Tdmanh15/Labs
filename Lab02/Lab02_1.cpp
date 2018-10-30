#include<iostream>
using namespace std;
class phone_number{
	private:
	int area_code,exchange, number;
	
	public:
		void Nhap(int &area_code,int &exchange,int &number)
		{
			
			cout<<"Enter your area code:";
			cin>>area_code;
			cout<<"Enter your exchange: ";
			cin>>exchange;
			cout<<"Enter your number: ";
			cin>>number;
		}
		void Xuat(int area_code,int exchange,int number)
		{
			cout<<"My number is : (028)123-4567"<<endl;
			cout<<"Your number is : ("<<area_code<<") "<<	exchange<<"-"<<number;
		}
};
int main()
{
	int area_code;
	int exchange;
	int number;
	phone_number number1;
	number1.Nhap( area_code, exchange,number);
	number1.Xuat(area_code,exchange,number);
	return 0;
}
