#include<iostream>
using namespace std;
class time
{
	private:
		int hours, minutes , seconds;
	public :
		time()
		{
			hours=0;
			minutes=0;
			seconds=0;
		}
		time(int h, int m,int s)
		{
			hours=h;
			minutes=m;
			seconds=s;	
		}
		void showTime() 
		const
    	{
        	cout<<hours<<":"<<minutes<<":"<<seconds<<".";
    	}
    time addTo(time t1)
    {
        time temp;
        temp.seconds = seconds + t1.seconds;
        temp.minutes = minutes + t1.minutes;
        temp.hours = hours + t1.hours;

        if(temp.seconds>= 60)
        {
            temp.seconds-= 60;
            temp.minutes++;
        }

        if(temp.minutes>=60)
        {
            temp.minutes-=60;
            temp.hours++;
        }

        if(temp.hours>12)
        {
            temp.hours-=12;
        }

        return temp;
    }
};
int main()
{
    time t1(11, 59, 59);
    time t2(2, 0, 49);
    time t3;

    t3 = t1.addTo(t2);
    t3.showTime();

    return 0;
}
