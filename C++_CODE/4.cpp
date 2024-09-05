#include <iostream>
using namespace std;

class Date
{
public:
	void SetDate(int year, int month, int day)
	{
		this->_year = year;
		this->_month = month;
		this->_day = day;
	}

	Date(Date& d)
	{
		d._year = _year;
		d._month = _month;
		d._day = _day;
	}

	void PrintDate()
	{
		cout << this->_year << "/" << this->_month << "/" << this->_day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{

	return 0;
}