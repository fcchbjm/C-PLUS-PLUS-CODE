#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//void test_vector5()
//{
//	vector<string> v1;
//	string s1("xxxx");
//	v1.push_back(s1);
//
//	v1.push_back("yyyyy");
//	for (const auto& e : v1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	// 二维数组
//	// 10*5
//	vector<int> v(5, 1);
//	vector<vector<int>> vv(10, v);
//	vv[2][1] = 2;
//	// vv.operator[](2).operator[](1) = 2;
//	for (size_t i = 0; i < vv.size(); i++)
//	{
//		for (size_t j = 0; j < vv[i].size(); ++j)
//		{
//			cout << vv[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}

#include "myvector.h"

using namespace std;

namespace myns
{
	//void print_vector(const vector<int>& v)
	//{
	//	vector<int>::const_iterator it = v.begin();
	//	while (it != v.end())
	//	{
	//		cout << *it << " ";
	//		++it;
	//	}
	//	cout << endl;

	//	for (auto e : v)
	//	{
	//		cout << e << " ";
	//	}
	//	cout << endl;
	//}

	template<class T>
	void print_vector(const vector<T>& v)
	{
		// 规定，没有实例化的类模板里面取东西，编译器不能区分这里const_iterator是类型还是静态成员变量
		//typename vector<T>::const_iterator it = v.begin();//使用 typedef 告诉编译器确定这里是一个类型，静态成员变量不需要加关键字
		auto it = v.begin();
		while (it != v.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}


	void test_vector1()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);

		for (size_t i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;

		vector<int>::iterator it = v.begin();
		while (it != v.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;

		print_vector(v);

		vector<double> vd;
		vd.push_back(1.1);
		vd.push_back(2.1);
		vd.push_back(3.1);
		vd.push_back(4.1);
		vd.push_back(5.1);

		print_vector(vd);
	}

	void test_vector2()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		//v.push_back(5);

		print_vector(v);

		v.insert(v.begin() + 2, 30);
		print_vector(v);

		int x;
		cin >> x;
		auto p = find(v.begin(), v.end(), x);//find 为algorithm库函数，查找范围为[begin, end), 如果没找到，返回end位置
		if (p != v.end())
		{
			// insert以后p就是失效，不要直接访问，要访问就要更新这个失效的迭代器的值
			//v.insert(p, 40);
			//(*p) *= 10;

			p = v.insert(p, 40);
			(*(p + 1)) *= 10;
		}
		print_vector(v);
	}
}

int main()
{
	myns::test_vector2();
	return 0;
}