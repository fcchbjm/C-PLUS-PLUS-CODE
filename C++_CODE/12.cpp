#define _CRT_SECURE_NO_WARNINGS 1

#include <vector>
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

void test_vector1()
{
	vector<int> v1;
	vector<int> v2(10, 1);

	vector<int> v3(++v2.begin(), --v2.end());

	for (size_t i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	vector<int>::iterator it = v3.begin();
	while (it != v3.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : v3)
	{
		cout << e << " ";
	}
	cout << endl;
}


void TestVectorExpand()
{
	size_t sz;
	vector<int> v;
	v.reserve(100);

	sz = v.capacity();
	cout << "capacity changed: " << sz << '\n';

	cout << "making v grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		v.push_back(i);
		if (sz != v.capacity())
		{
			sz = v.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

void test_vector2()
{
	//TestVectorExpand();

	vector<int> v(10, 1);
	v.reserve(20);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.reserve(15);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.reserve(5);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
}

void test_vector3()
{
	//TestVectorExpand();

	vector<int> v(10, 1);
	v.reserve(20);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(15, 2);//预开辟15个元素大小的空间，用1填充
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(25, 3);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(5);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
}

void test_vector4()
{
	vector<int> v(10, 1);
	v.push_back(2);
	v.insert(v.begin(), 0);

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.insert(v.begin() + 3, 10);

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	vector<int> v1(5, 0);
	for (size_t i = 0; i < 5; i++)
	{
		cin >> v1[i];
	}

	for (auto e : v1)
	{
		cout << e << ",";
	}
	cout << endl;

	vector<char> v2;
	string s2;
	// \0

	vector<int> v3;
	// send(s2.c_str())
}

void test_vector5()
{
	vector<string> v1;
	string s1("xxxx");
	v1.push_back(s1);

	v1.push_back("yyyyy");
	for (const auto& e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	// 二维数组
	// 10*5
	vector<int> v(5, 1);
	vector<vector<int>> vv(10, v);
	vv[2][1] = 2;
}

//int main()
//{
//	myns::test_string6();
//
//	//char16_t str16[] = u"牛马";//utf16
//	//char32_t str32[] = U"牛马";//utf32
//	//wchar_t wstr[] = L"牛马";//宽字节
//
//	//cout << sizeof(str16) << endl;
//	//cout << sizeof(str32) << endl;
//	//cout << sizeof(wstr) << endl; 
//
//	return 0;
//}