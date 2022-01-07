#include<iostream>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int seconds;
	int seconds_time;

public:
	void getTime(void);
	void addTime(Time T1, Time T2);
	void subTime(Time T1, Time T2);
	void sectotime(Time T1);
	void timetosec(Time T1);
};

void Time::getTime(void)
{
	cout << "Enter time:" << endl;
	cout << "Enter hour: ";    cin >> hours;
	cout << "Enter minutes: ";  cin >> minutes;
	cout << "Enter Second: ";  cin >> seconds;
	cout << "Enter a time in seconds"; cin >> seconds_time;


}


void Time::addTime(Time T1, Time T2)
{

	this->seconds = T1.seconds + T2.seconds;
	this->minutes = T1.minutes + T2.minutes + this->seconds / 60;
	this->hours = T1.hours + T2.hours + (this->minutes / 60);
	this->minutes %= 60;
	this->seconds %= 60;
	cout << endl;
	cout << "Time after add: ";
	cout << hours << ":" << minutes << ":" << seconds << endl;
}

void Time::subTime(Time T1, Time T2) {

	this->seconds = T1.seconds - T2.seconds;
	this->minutes = T1.minutes - T2.minutes;
	this->hours = T1.hours - T2.hours;

	if (minutes < 0) {
		minutes +=60;
		hours -= 1;
	}

		if (hours > 12)
		{
			hours-= 12;
		}
		cout << endl;
		cout << "Time difference: ";
		cout << hours << ":" << minutes << ":" << seconds << endl;

}
void Time::timetosec(Time T1) {
	int seconds_total;
	seconds_total =( T1.hours * 3600) +( T1.minutes * 60) + T1.seconds;
	cout << "convert the time to seconds: "<<seconds_total<<endl;
}
void Time::sectotime(Time T1) {

	int seconds, minutes, hours;
	minutes = T1.seconds_time / 60;
	seconds = T1.seconds_time % 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	cout << T1.seconds_time << " seconds is equivalent to " << hours << " hours " << minutes
		<< " minutes " << seconds << " seconds.\n"<<endl;
}

int main()
{
	Time T1, T2, T3,T4;
	T1.getTime();
	T2.getTime();

	T3.addTime(T1, T2);
	T3.subTime(T1,T2);
	cout << "the first time in second : ";
	T3.timetosec(T1);
	cout << "the second time in second : ";
	T3.timetosec(T2);

	T3.sectotime(T1);
	T3.sectotime(T2);

	system("pause");
	return 0;
}