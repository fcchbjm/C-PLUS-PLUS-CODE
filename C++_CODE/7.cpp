////编译器会在确保正确的前提下，在对象拷贝的情况下进行优化
//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	A(int a1 = 0, int a2 = 0)
//		:_a1(a1)
//		, _a2(a2)
//	{
//		cout << "A(int a1 = 0, int a2 = 0)" << endl;
//	}
//
//	A(const A& aa)
//		:_a1(aa._a1)
//	{
//		cout << "A(const A& aa)" << endl;
//	}
//
//	A& operator=(const A& aa)
//	{
//		cout << "A& operator=(const A& aa)" << endl;
//		if (this != &aa)
//		{
//			_a1 = aa._a1;
//		}
//		return *this;
//	}
//
//	~A()
//	{
//		//delete _ptr;
//		cout << "~A()" << endl;
//	}
//
//	void Print()
//	{
//		cout << "A::Print->" << _a1 << endl;
//	}
//
//	A& operator++()
//	{
//		_a1 += 100;
//
//		return *this;
//	}
//private:
//	int _a1 = 1;
//	int _a2 = 1;
//};
//
//void test1()
//{
//	//构造+拷贝构造 --优化--> 直接构造
//	A aa1 = 1;
//	const A& aa2 = 1;
//}
//
//void f1(A aa)
//{}
//
//void f2(A& aa)//使用引用以减少拷贝
//{}
//
//void test2()
//{
//	A aa1(1);
//	f1(aa1);
//	cout << endl;
//
//	A aa2(1);
//	f2(aa2);
//	cout << endl;
//
//	// 优化 构造+拷贝构造 --优化--> 直接构造
//	f1(A(1));//匿名对象
//	cout << endl;
//
//	// 优化 同上
//	f1(1);
//	cout << endl;
//}
//
//
//
//A f3()
//{
//	A aa(1);
//	++aa;
//
//	return aa;
//}
//
//void test3()
//{
//	f3().Print();// 优化 直接aa.Print(),然后析构
//	cout <<"*********"<< endl << endl;
//}
//
//A f4()
//{
//	A aa(1);
//	++aa;
//
//	return aa;
//}
//
//void test4()
//{
//	A ret = f4();// 优化 直接构造ret 然后ret.Print(),最后析构
//	ret.Print();
//	cout << "*********" << endl << endl;
//
//}
//
//A f5()
//{
//	A aa(1);
//	++aa;
//	cout << "##########" << endl;
//	return aa;
//}
//
//void test5()
//{
//	A ret;
//	ret = f5();
//	ret.Print();
//	cout << "*********" << endl << endl;
//}
//
//
//int main()
//{
//	//test1();
//
//	//test2();
//
//	//test3();
//
//	//test4();
//
//	//test5();
//
//	return 0;
//}

//int main()
//{
//	int* p1 = new int;
//	int* p2 = new int[10];
//
//	delete p1;
//	delete[] p2;
//
//	// 申请对象+初始化
//	int* p3 = new int(0);
//	int* p4 = new int[10]{ 0 };
//	int* p5 = new int[10]{1,2,3,4,5};
//
//	delete p3;
//	delete[] p4;
//	delete[] p5;
//
//	return 0;
//}

//struct ListNode
//{
//	int val;
//	ListNode* next;
//
//	ListNode(int x)
//		:val(x)
//		, next(nullptr)
//	{}
//};

//int main()
//{
//	A* p1 = new A;
//	A* p2 = new A(1);
//
//	delete p1;
//	delete p2;
//
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(1);
//	ListNode* n3 = new ListNode(1);
//	ListNode* n4 = new ListNode(1);
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//
//	return 0;
//}

//int main()
//{
//	A* p1 = new A(1);
//	A* p2 = new A(2,2);
//
//	A aa1(1, 1);
//	A aa2(2, 2);
//	A aa3(3, 3);
//	A* p3 = new A[3]{aa1, aa2, aa3};
//
//	A* p4 = new A[3]{ A(1,1), A(2,2), A(3,3)};
//
//	//A aa1 = { 1, 1 };
//	A* p5 = new A[3]{ {1,1}, {2,2}, {3,3} };
//
//	return 0;
//}

// 1M 约等于 100wByte
// 1G 约等于 10亿Byte
//int main()
//{
//	try
//	{
//		// throw try/catch 
//		void* p1 = new char[1024 * 1024 * 1024];
//		cout << p1 << endl;
//
//		void* p2 = new char[1024 * 1024 * 1024];
//		cout << p2 << endl;
//
//		void* p3 = new char[1024 * 1024 * 1024];
//		cout << p3 << endl;
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

// 1G = 1024MB = 1024*1024KB = 1024*1024*1024Byte

//void func()
//{
//	// throw try/catch 
//	int n = 1;
//	while (1)
//	{
//		void* p1 = new char[1024 * 1024];
//		cout << p1 << "->"<< n<<endl;
//		++n;
//	}
//}
//
//int main()
//{
//	try
//	{
//		func();
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	A* p1 = new A(1);
//	delete p1;
//
//	A* p2 = new A[5];
//	delete[] p2;
//
//	return 0;
//}

//int main()
//{
//	int* p1 = new int;
//	free(p1);
//	//delete p1;
//
//	A* p2 = new A;
//	//free(p2);
//	delete p2;
//
//	return 0;
//}

//class B
//{
//public:
//	~B()
//	{
//		cout << "~B()" << endl;
//	}
//private:
//	int _b1 = 2;
//	int _b2 = 2;
//};
//
//int main()
//{
//	//int* p1 = new int[10]; // -> malloc
//	//delete p1;             // -> free
//	//free(p1);
//
//	B* p2 = new B[10];
//	delete p2;
//
//	//A* p3 = new A[10];
//	//delete[] p3;
//
//	return 0;
//}