//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	int& ri = i;//�����ڶ���ʱ�����ʼ��
//  //int& ri;//error
//	int& ri2 = i;//һ���������ӵ�ж������
//
//
//	int j = 10;
//	ri = j;//���ò������޸�ָ��Ķ���ֻ���޸�ֵ
//	cout << i << j << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//Ȩ��ֻ����С�����ܷŴ�
//	int i = 0;
//	int& ri = i;
//	const int& rci = i;
//	//int& rc = 0;//error
//	const int& rc = 0;//��ʱ������г��ԣ������ó�����
//
//	//const int j = 0;
//	// int& rj = j;//Ȩ�޷Ŵ�
//
//	const int k = 0;
//	int kk = k;//����������Ȩ�޷Ŵ�
//
//	double d = 12.34;
//	int ii = d;
//	const int& rid = d;//��������ʽ����ת��ʱ��������ʱ������ʱ������г���
//	double& rd = d;
//
//	return 0;
//}

////inline��Ҫ�������C�����еĺ�
//#include <iostream>
//using namespace std;
//#define DEF_ADD(x,y) ((x) + (y))
//inline int INL_ADD(int x, int y)//���������Ķ��岻�ܷ��뵽��ͬ�ļ����޷��ҵ�������ַ��
//{
//	return x + y;
//}
//
//int main()
//{
//	cout << DEF_ADD(3, 5) << endl;
//	cout << DEF_ADD(3^3, 5|3) << endl;
//
//	cout << INL_ADD(3, 5) << endl;
//	cout << INL_ADD(3^3, 5|3) << endl;
//
//	return 0;
//}

////NULL��nullptr
//#include <iostream>
//using namespace std;
//
//void func(int x)
//{
//	cout << "func(int x)" << endl;
//}
//
//void func(int* px)
//{
//	cout << "func(int* px)" << endl;
//}
//
//int main()
//{
//	func(0);
//	func(NULL);//C���ԣ�define NULL 0
//	func((int*)NULL);
//	func(nullptr);//nullptrΪ�ؼ��֣����Զ�ת��Ϊ��Ӧ���͵�ָ������
//
//	void* p1 = NULL;
//	int* p2 = (int*)p1;//����ǿ������ת��
//
//	return 0;
//}

////��Ͷ���
//#include <iostream>
//using namespace std;
//
////���ԱĬ��˽��
//class MyClass
//{
//public:
//	int i = 0;
//	char c = 0;
//private:
//	int pri_i = 0;
//	char pri_c = 0;
//};
//
////struct��C++��ʵ��ΪĬ��Ϊ���е��࣬���ҿ����й��캯��
//struct MyStruct
//{
//	MyStruct(int I = 0, char C = 0, double D = 0)
//	{
//		i = I;
//		c = C;
//		d = D;
//	}
//	int i = 0;
//	char c = 0;
//	double d = 0;
//};
//
//class Date
//{
//public:
//	Date(int year, int month, int day)//���캯������ʼ������
//	{
//		m_year = year;
//		mMonth = month;
//		_day = day;
//	}
//
//	int GetYear()
//	{
//		return m_year;
//	}
//
//	int GetMonth()
//	{
//		return mMonth;
//	}
//
//	int GetDay()
//	{
//		return _day;
//	}
//
//	void printDate()//���������еĺ���Ĭ������
//	{
//		cout << m_year << "/" << mMonth << "/" << _day << endl;
//	}
//private:
//	//��Ա������������û�пռ䣬ʵ����ʱ���ռ�
//	//Ϊ�����ֳ�Ա������һ���������ǰ����ϱ�ʶ��һ���� _ �� m ��ͷ
//	int m_year;//ǰ����� m_ 
//	int mMonth;//ǰ�����m��������ĸ��д
//	int _day;//ǰ����� _ 
//};
//
//void printDate(Date& d)
//{
//	cout << d.GetYear() << "/" << d.GetMonth() << "/" << d.GetDay() << endl;
//}
//
//struct ListNodeC
//{
//	int val;
//	struct ListNodeC* next;//����C����д��
//};
//
//struct ListNodeCPP
//{
//	int val;
//	ListNodeCPP* next;//������������
//};
//
//int main()
//{
//	MyClass c1;//��������ֱ����������
//	c1.c;//����ֱ�ӷ��ʹ��г�Ա
//	c1.i;
//	//c1.pri_i;//����ֱ�ӷ���˽�г�Ա
//	//c1.pri_c;
//
//	Date d1(2024, 8, 31);
//	printDate(d1);
//
//	return 0;
//}
