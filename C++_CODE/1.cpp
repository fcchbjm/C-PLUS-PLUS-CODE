//#include <iostream>//����ͷ�ļ� i - input ����  o - output ���  stream - �� 
//
//using namespace std;//ʹ������Ϊstd�������ռ�
//
//int main()
//{
//	cout << "Hello world" << endl;//��������� endl - endline
//	return 0;
//}

//#include <iostream>
//
////#include <stdlib.h>
////int rand = 20;
////��rand��: �ض��壻��ǰ�Ķ����ǡ�������
//
//int i = 15;
//
//namespace ns//��
//{
//	int rand = 10;
//
//	int i = 5;
//
//	struct Node
//	{
//		int val;
//		struct Node* pnext;
//	};
//
//	namespace ns1//�����ռ����Ƕ��
//	{
//		int i = 25;
//	}
//}
//
//namespace ns//��ͬ���Ƶ������ռ���Զ��ϲ�(��ʹ���ڲ�ͬ�ļ���)
//{
//	int j = 30;
//	int k = 35;
//}
//
//int main()
//{
//	//:: �������޶���
//	//std::cout << rand << std::endl;
//
//	std::cout << i << std::endl;
//	std::cout << ns::i << std::endl;//������Ϊns�������ռ���Ѱ����Ϊrand�ı�������
//	std::cout << ::i << std::endl;//Ĭ��ȫ��
//
//	struct ns::Node* pn = NULL;
//
//	std::cout << ns::ns1::i << std::endl;
//
//	std::cout << ns::j << std::endl;
//	std::cout << ns::k << std::endl;
//
//	//C++��׼��������Ϊstd��standard���������ռ���
//
//	return 0;
//}

//#include <iostream>
//using namespace std;//��std�������ռ�ȫ��չ��
//using std::cout;//��std�������ռ��е�coutչ��

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//std::cin istream����� ����խ�ַ��ı�׼������
//	//std::cout ostream����� ����խ�ַ��ı�׼�����
//	//std::endl ���� ����+ˢ�»�����
//	//<< �������������C������Ϊ���Ʋ������� ֧������
//	//>> ����ȡ�������C������Ϊ���Ʋ������� ֧������
//
//	int i = 10;
//	cout << i << endl;//�Զ�ʶ������
//
//	int j = 20;
//	char c = 'a';
//
//	cout << j << c << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// ��io����Ƚϸߵĵط����粿�ִ�������ľ������У���������3�д���
//	// �������C++IOЧ��
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//void printi(int i = 0)
//{
//	cout << i << endl;
//}
//
////ȫȱʡ
//void printnums(int i = 0, int j = 0, int k = 0)
//{
//	cout << i << j << k << endl;
//}
//
////��ȱʡ ���ܼ������������
//void printnums2(int i, int j = 0, int k = 0)
//{
//	cout << i << j << k << endl;
//}
//
//int main()
//{
//	printi();//û�в���ʱ��ʹ�ò�����Ĭ��ֵ
//	printi(20);//����ʱ��ʹ��ָ����ʵ��
//	printnums();
//	printnums2(10);
//	printnums2(10, 20);
//	printnums2(10, 20, 30);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//// 1���������Ͳ�ͬ
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//
//void Swap(int* px, int* py)
//{}
//
//void Swap(double* px, double* py)
//{}
//
//// 2������������ͬ
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
//// 3����������˳��ͬ
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//
////��������������������
////f()���ǵ���ʱ���ᱨ���������壬��������֪������˭
//namespace ns
//{
//	void f1()
//	{
//		cout << "f()" << endl;
//	}
//}
//
//
//void f1()
//{
//	cout << "f()" << endl;
//}
//
//void f1(int a = 10)//������ȱʡֵ
//{
//	cout << "f(int a)" << endl;
//}
//
////����ֵ��ͬ������Ϊ������������Ϊ����ʱҲ�޷�����
//void fxx()
//{}
//
//int fxx()
//{
//	return 0;
//}
