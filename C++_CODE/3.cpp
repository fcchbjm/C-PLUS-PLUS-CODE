//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	void SetDate(int year, int month, int day)//成员函数共用一份空间
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;//成员变量在实例化对象时才会开空间
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//	d1.SetDate(2024, 9, 4);
//	d2.SetDate(2024, 8, 31);
//	d1.PrintDate();
//	d2.PrintDate();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class A//类成员变量遵循内存对齐
//{
//public:
//	void PrintA()
//	{
//		cout << _ch << " " << _i << endl;
//	}
//private:
//	char _ch;
//	int _i;
//};
//
//class B//没有成员变量，给一个字节，占位标识对象存在
//{
//	void PrintB()
//	{
//		//...
//	}
//};
//
//class C
//{
//	//...
//};
//
//int main()
//{
//	cout << "sizeof(A) = " << sizeof(A) << endl;
//	cout << "sizeof(B) = " << sizeof(B) << endl;
//	cout << "sizeof(C) = " << sizeof(C) << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//void SetDate(Date* const this, int year, int month, int day)//通过this指针区分调用函数的对象
//	void SetDate(int year, int month, int day)//成员函数共用一份空间
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//
//	//void PrintDate(Date* const this)//this指针指向的对象不能修改，但指向的内容可以修改；this指针存放在栈（寄存器）中
//	void PrintDate()//this指针不能显式传参
//	{
//		cout << this->_year << "/" << this->_month << "/" << this->_day << endl;
//	}
//private:
//	int _year;//成员变量在实例化对象时才会开空间
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//	d1.SetDate(2024, 9, 4);
//	d2.SetDate(2024, 8, 31);
//	d1.PrintDate();
//	d2.PrintDate();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << "A::PrintA();" << endl;
//	}
//};
//
//int main()
//{
//	A* pa = nullptr;
//	pa->PrintA();//正常运行
//	//mov         rcx, qword ptr[pa]//pa传给ecx（this指针）
//	//call        A::PrintA(07FF7F2441479h)//调用函数
//	//没有解引用，不会报空指针的错误
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << "A::PrintA();" << endl;
//		cout << _i << endl;
//		// cout << this->_i << endl;
//		//发生了解引用，游戏崩溃，空指针
//	}
//private:
//	int _i;
//};
//
//int main()
//{
//	A* pa = nullptr;
//	pa->PrintA();//运行崩溃
//
//	return 0;
//}
