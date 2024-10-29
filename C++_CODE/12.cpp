#define _CRT_SECURE_NO_WARNINGS 1

#include "mystring.h"
using namespace std;

namespace myns
{
	void test_string6()
	{
		string s1("hello world");
		string s2 = s1;//新建对象调用已经存在的对象调用拷贝构造函数
		//两个已经存在的对象调用operator=

		cout << s1 << endl;
		cout << s2 << endl;

		string s3("xxxxxxxxxxxxxx");
		s1 = s3;

		cout << s1 << endl;
		cout << s3 << endl;
	}

	//void test_string7()
	//{
	//	string s1("hello world");
	//	string s2("xxxxxxxxxxxxxxxxxxxxxxxx");

	//	std::swap(s1, s2);
	//	s1.swap(s2);
	//}
}

int main()
{
	myns::test_string6();

	//char16_t str16[] = u"牛马";//utf16
	//char32_t str32[] = U"牛马";//utf32
	//wchar_t wstr[] = L"牛马";//宽字节

	//cout << sizeof(str16) << endl;
	//cout << sizeof(str32) << endl;
	//cout << sizeof(wstr) << endl; 

	return 0;
}