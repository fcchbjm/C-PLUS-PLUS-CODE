//#include <iostream>
//#include<string>
//#include<map>
//#include<list>
//using namespace std;
//
////class string
////{
////private:
////	char _buff[16];
////	char*  _str;
////
////	size_t _size;
////	size_t _capacity;
////};
//
//void test_string1()
//{
//	string s1;
//	string s2("hello world");
//
//	cout << s1 << s2 << endl;
//
//	s2[0] = 'x';
//	cout << s1 << s2 << endl;
//
//	// 1���±� + []
//	for (size_t i = 0; i < s2.size(); i++)
//	{
//		cout << s2[i] << " ";
//	}
//	cout << endl;
//
//	// 2��������  ����ָ�룬��ʵ�ֲ�һ����ָ��
//	//string::iterator it = s2.begin();
//	auto it = s2.begin();//auto�򻯴��룬�Զ��Ƶ����ͣ�ĳ�̶ֳ��ϼ����˴���Ŀɶ���
//	while (it != s2.end())
//	{
//		*it += 2;
//
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	cout << s2 << endl;
//
//	map<string, string> dict;
//	//map<string, string>::iterator mit = dict.begin();
//	auto mit = dict.begin();
//
//	/*list<int> lt = { 1,2,3,4,5,6,7 };
//	list<int>::iterator lit = lt.begin();
//	while (lit != lt.end())
//	{
//		cout << *lit << " ";
//		++lit;
//	}
//	cout << endl;*/
//
//	// 3����Χfor:�Զ��Ƶ�����,�ַ����Զ�����ֵ���Զ��������Զ��жϽ���
//	// �ײ���ǵ�����
//	//for (auto ch : s2)
//	for (auto& ch : s2)
//	{
//		ch -= 2;
//		cout << ch << " ";
//	}
//	cout << endl;
//
//	cout << s2 << endl;
//}
//
//void test_string2()
//{
//	string s2("hello world");
//	string::iterator it = s2.begin();
//	while (it != s2.end())
//	{
//		*it += 2;
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	string::reverse_iterator rit = s2.rbegin();//���������
//	while (rit != s2.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	const string s3("hello world");
//	//string::const_iterator cit = s3.begin();
//	auto cit = s3.begin();
//	while (cit != s3.end())
//	{
//		//*cit += 2;
//		cout << *cit << " ";
//		++cit;
//	}
//	cout << endl;
//
//	//string::const_reverse_iterator rcit = s3.rbegin();
//	auto rcit = s3.rbegin();
//	while (rcit != s3.rend())
//	{
//		// *rcit += 2;
//		cout << *rcit << " ";
//		++rcit;
//	}
//	cout << endl;
//}
//
//void TestPushBack()
//{
//	// reverse ��ת  ����
//	// reserve ������Ԥ��
//	string s;
//	// ��ǰ���ռ䣬�������ݣ����Ч��
//	s.reserve(100);
//	size_t sz = s.capacity();
//	cout << "capacity changed: " << sz << '\n';
//
//	cout << "making s grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		s.push_back('c');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}
//
//void test_string3()
//{
//	string s2("hello world");
//	cout << s2.length() << endl;
//	cout << s2.size() << endl;//size����ͨ����
//
//	cout << s2.max_size() << endl;
//
//	cout << s2.capacity() << endl;
//	TestPushBack();
//
//	string s3("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
//	//cout << sizeof(s2) << endl;
//	//cout << sizeof(s3) << endl;
//}
//
//void test_string4()
//{
//	string s2("hello worldxxxxxxxxxxxxx");
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl << endl;
//
//	s2.reserve(20);
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl << endl;
//
//	s2.reserve(28);
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl << endl;
//
//	s2.reserve(40);
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl << endl;
//
//	s2.clear();
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl << endl;
//
//	cout << typeid(string::iterator).name() << endl;
//	cout << typeid(string::reverse_iterator).name() << endl;
//
//}
//
//int func1()
//{
//	return 10;
//}
//
//// ����������
////void func0(auto a = 0)
////{}
//
//auto func2()
//{
//	//...
//	return func1();
//}
//
//auto func3()
//{
//	//...
//	return func2();
//}
//
//void test01()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = func1();
//	// ���뱨��:rror C3531: ��e��: ���Ͱ�����auto���ķ��ű�����г�ʼֵ�趨��
//	//auto e;
//	cout << typeid(b).name() << endl;//typeid���Բ鿴����
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	//auto array[] = { 4, 5, 6 };
//
//	auto ret = func3();
//
//	int array[] = { 1, 2, 3, 4, 5 };
//	// C++98�ı���
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		array[i] *= 2;
//	}
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		cout << array[i] << endl;
//	}
//
//	// ��Χfor���������� �� ����
//	// C++11�ı���
//	for (auto& e : array)
//		e *= 2;
//
//	for (auto e : array)
//		cout << e << " " << endl;
//}
//
//int main()
//{
//	test_string4();
//
//	return 0;
//}

