#include <iostream>
#include <initializer_list>
#include "mylist.h"

using namespace std;

namespace ns
{
	struct AA
	{
		int _a1 = 1;
		int _a2 = 1;
	};

	// 按需实例化
	// T* const ptr1
	// const T* ptr2
	template<class Container>
	void print_container(const Container& con)
	{
		// const iterator -> 迭代器本身不能修改
		// const_iterator -> 指向内容不能修改
		typename Container::const_iterator it = con.begin();
		//auto it = con.begin();
		while (it != con.end())
		{
			//*it += 10;

			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : con)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_list2()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		// insert以后迭代器不失效
		list<int>::iterator it = lt.begin();
		lt.insert(it, 10);
		*it += 100;

		print_container(lt);

		// erase以后迭代器失效
		// 删除所有的偶数
		it = lt.begin();
		while (it != lt.end())
		{
			if (*it % 2 == 0)
			{
				it = lt.erase(it);
			}
			else
			{
				++it;
			}
		}

		print_container(lt);
	}

	void test_list3()
	{
		list<int> lt1;
		lt1.push_back(1);
		lt1.push_back(2);
		lt1.push_back(3);
		lt1.push_back(4);

		list<int> lt2(lt1);

		print_container(lt1);
		print_container(lt2);

		list<int> lt3;
		lt3.push_back(10);
		lt3.push_back(20);
		lt3.push_back(30);
		lt3.push_back(40);

		lt1 = lt3;
		print_container(lt1);
		print_container(lt3);
	}

	void func(const list<int>& lt)
	{
		print_container(lt);
	}

	template<class T>
	void func(initializer_list<T> it)
	{
		print_container(it);
	}

	void test_list4()
	{
		// 直接构造
		list<int> lt0({ 1,2,3,4,5,6 });
		// 隐式类型转换
		list<int> lt1 = { 1,2,3,4,5,6,7,8 };
		const list<int>& lt3 = { 1,2,3,4,5,6,7,8 };

		func(lt0);
		func({ 1,2,3,4,5,6 });

		print_container(lt1);

		//auto il = { 10, 20, 30 };
	/*	initializer_list<int> il = { 10, 20, 30 };
		cout << typeid(il).name() << endl;
		cout << sizeof(il) << endl;*/
	}
}

int main()
{
	ns::test_list4();
	return 0;
}