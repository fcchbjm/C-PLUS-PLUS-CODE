#include <iostream>
#include <assert.h>
using namespace std;

class Date
{
	// ��Ԫ��������
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:
	bool CheckDate() const;
	Date(int year = 1900, int month = 1, int day = 1);
	void Print() const;

	// Ĭ����inline
	int GetMonthDay(int year, int month) const
	{
		assert(month > 0 && month < 13);

		static int monthDayArray[13] = { -1, 31, 28, 31, 30, 31, 30,
31, 31, 30, 31, 30, 31 };

		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			return 29;
		}

		return monthDayArray[month];
	}

	bool operator<(const Date& d) const;
	bool operator<=(const Date& d) const;
	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator==(const Date& d) const;
	bool operator!=(const Date& d) const;

	Date operator+(int day) const;
	Date& operator+=(int day);

	Date operator-(int day) const;
	Date& operator-=(int day);

	// d1++;
	// d1.operator++(0);
	Date operator++(int);

	// ++d1;
	// d1.operator++();
	Date& operator++();

	// d1--;
	// d1.operator--(0);
	Date operator--(int);

	// --d1;
	// d1.operator--();
	Date& operator--();

	// d1 - d2
	int operator-(const Date& d) const;

	//void operator<<(ostream& out);

	Date* operator&()
	{
		return this;
		//return nullptr;
		//return (Date*)0x2673FF40;
	}

	const Date* operator&() const
	{
		return this;
		//return nullptr;
		//return (Date*)0x2673FE30;
	}
private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);

bool Date::CheckDate() const
{
	if (_month < 1 || _month > 12
		|| _day < 1 || _day > GetMonthDay(_year, _month))
	{
		return false;
	}
	else
	{
		return true;
	}
}

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;

	if (!CheckDate())
	{
		cout << "�Ƿ�����:";
		Print();
	}
}

// void Date::Print(const Date* const this)
void Date::Print() const
{
	//++_year;
	cout << _year << "/" << _month << "/" << _day << endl;
}

// d1 < d2
bool Date::operator<(const Date& d) const
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year)
	{
		if (_month < d._month)
		{
			return true;
		}
		else if (_month == d._month)
		{
			return _day < d._day;
		}
	}

	return false;
}

// d1 <= d2
bool Date::operator<=(const Date& d) const
{
	return *this < d || *this == d;
}

bool Date::operator>(const Date& d) const
{
	return !(*this <= d);
}

bool Date::operator>=(const Date& d) const
{
	return !(*this < d);
}

bool Date::operator==(const Date& d) const
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator!=(const Date& d) const
{
	return !(*this == d);
}

// d1 += 100
Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= (-day);
	}

	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}

	return *this;
}

// d1 + 100
Date Date::operator+(int day) const
{
	Date tmp = *this;
	tmp += day;

	return tmp;
}

//Date Date::operator-(int day)
//{
//	Date tmp = *this;
//	tmp._day -= day;
//	while (tmp._day <= 0)
//	{
//		--tmp._month;
//		if (tmp._month == 0)
//		{
//			tmp._month = 12;
//			--tmp._year;
//		}
//
//		tmp._day += GetMonthDay(tmp._year, tmp._month);
//	}
//
//	return tmp;
//}
//
//// d1 -= 100
//Date& Date::operator-=(int day)
//{
//	*this = *this - day;
//	
//	return *this;
//}


Date Date::operator-(int day) const
{
	Date tmp = *this;
	tmp -= day;

	return tmp;
}

// d1 -= 100
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += (-day);
	}

	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			_month = 12;
			--_year;
		}

		_day += GetMonthDay(_year, _month);
	}

	return *this;
}

// d1++;
// d1.operator++(0);
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}

// ++d1;
// d1.operator++();
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

// d1 - d2
int Date::operator-(const Date& d) const
{
	int flag = 1;
	Date max = *this;
	Date min = d;
	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;
	}

	int n = 0;
	while (min != max)
	{
		++min;
		++n;
	}

	return n * flag;
}

//void Date::operator<<(ostream& out)
//{
//	out << _year << "��" << _month << "��" << _day << "��" << endl;
//}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "��" << d._month << "��" << d._day << "��" << endl;
	return out;
}

// 11:45
istream& operator>>(istream& in, Date& d)
{
	while (1)
	{
		cout << "����������������:>";
		in >> d._year >> d._month >> d._day;

		if (!d.CheckDate())
		{
			cout << "�������ڷǷ�:";
			d.Print();
			cout << "����������!!!" << endl;
		}
		else
		{
			break;
		}
	}

	return in;
}



int main()
{

	return 0;
}
