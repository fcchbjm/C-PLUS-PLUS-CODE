//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	A(int a = 0)
//		: _a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p1 = new A(1);//new���ڴ����ռ���ɺ��Զ����ù��캯��
//	delete p1;
//
//	A* p2 = (A*)operator new(sizeof(A));//�ֶ�����operator new,�����Զ����ù��캯��
//	//��λnew���ֶ����ù��캯��
//	new(p2)A(1);//new(place_address)type(Initializer-list) �� new(place_adderss)type
//
//	p2->~A();//��������������ʽ���ã����캯��������ʽ����
//	operator delete(p2);//ʹ��opertor delete�ֶ��ͷſռ�
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
////void Swap(int& left, int& right)
////{
////	int temp = left;
////	left = right;
////	right = temp;
////}
////
////void Swap(double& left, double& right)
////{
////	double temp = left;
////	left = right;
////	right = temp;
////}
////
////void Swap(char& left, char& right)
////{
////	char temp = left;
////	left = right;
////	right = temp;
////}
//
////ģ������
//template<class T>
//void Swap(T& x, T& y)
//{
//	T tmp = x;
//	x = y;
//	y = tmp;
//}
//
//template<typename T1, typename T2>
//void func(const T1& x, const T2& y)
//{
//
//}
//
//int main()
//{
//	int i = 1, j = 2;
//	double m = 1.1, n = 2.2;
//	Swap(i, j);
//	Swap(m, n);
//	//Swap(i, n);
//
//	swap(i, j);//C++����swapģ�庯��
//	swap(m, n);
//
//	func(i, m);
//	func(i, j);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
////�ú���ģ�����ɶ�Ӧ�ĺ��� -> ģ���ʵ����
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//template<class T1, class T2>
//T1 Add(const T1& left, const T2& right)
//{
//	return left + right;
//}
//
//template<class T>
//T* func1(int n)
//{
//	return new T[n];
//}
//
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.2;
//	Add(a1, a2);
//	Add(d1, d2);
//
//	// �Ƶ�ʵ����
//	cout << Add(a1, (int)d1) << endl;
//	cout << Add((double)a1, d1) << endl;
//
//	// ��ʾʵ����
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//
//	cout << Add(a1, d1) << endl;
//
//	double* p1 = func1<double>(10);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//template<typename T>
//class Stack
//{
//public:
//	Stack(int n = 4)
//		:_array(new T[n])
//		,_size(0)
//		,_capacity(n)
//	{}
//
//	~Stack()
//	{
//		delete[] _array;
//		_array = nullptr;
//		_size = _capacity = 0;
//	}
//
//	void Push(const T& x);
//
//private:
//	T* _array;
//	size_t _capacity;
//	size_t _size;
//};
//
//template<class T>
//void Stack<T>::Push(const T& x)
//{
//	if (_size == _capacity)
//	{
//		T* tmp = new T[_capacity * 2];
//		memcpy(tmp, _array, sizeof(T) * _size);
//		delete[] _array;
//
//		_array = tmp;
//		_capacity *= 2;
//	}
//
//	_array[_size++] = x;
//}
//
//int main()
//{
//	// ��ģ�嶼����ʾʵ����
//	Stack<int> st1; // int
//	st1.Push(1);
//	st1.Push(2);
//	st1.Push(3);
//
//	Stack<double> st2; // double
//	st2.Push(1.1);
//	st2.Push(1.1);
//	st2.Push(1.1);
//
//	Stack<double>* pst = new Stack<double>;
//	//...
//	delete pst;
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <assert.h>
//using namespace std;
//
////class string
////{
////public:
////	char& operator[](size_t i)
////	{
////      assert(i < _size);
////		return _str[i];
////	}
////private:
////	char* _str;
////	size_t _size;
////	size_t _capacity;
////};
//
//int main()
//{
//	string s1;
//	string s2("hello world");
//	string s3(s2);
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//
//	//cin >> s1;
//	//cout << s1 << endl;
//
//	string s4(s2, 6, 15);
//	cout << s4 << endl;
//
//	string s5(s2, 6);
//	cout << s5 << endl;
//
//	string s6("hello world", 5);
//	cout << s6 << endl;
//
//	string s7(10, 'X');
//	cout << s7 << endl;
//
//	//s6[10];
//	s6[0] = 'x';
//	cout << s6 << endl;
//
//	return 0;
//}
