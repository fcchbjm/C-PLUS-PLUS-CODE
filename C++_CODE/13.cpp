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
//	// ��ά����
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
		// �涨��û��ʵ��������ģ������ȡ������������������������const_iterator�����ͻ��Ǿ�̬��Ա����
		//typename vector<T>::const_iterator it = v.begin();//ʹ�� typedef ���߱�����ȷ��������һ�����ͣ���̬��Ա��������Ҫ�ӹؼ���
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
		auto p = find(v.begin(), v.end(), x);//find Ϊalgorithm�⺯�������ҷ�ΧΪ[begin, end), ���û�ҵ�������endλ��
		if (p != v.end())
		{
			// insert�Ժ�p����ʧЧ����Ҫֱ�ӷ��ʣ�Ҫ���ʾ�Ҫ�������ʧЧ�ĵ�������ֵ
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