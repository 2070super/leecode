#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(Date& d)
	{
			_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void printf()
	{
		cout << _year << "-" << _month << "-" << _day;
	}
private:
	int _year;
	int _month;
	int _day;
};
int b()
{
	Date d1;
	Date d2(d1);
	d2.printf();
	return 0;
}  