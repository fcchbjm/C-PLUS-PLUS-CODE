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

//#include<iostream>
//#include<assert.h>
//using namespace std;
//
////int main()
////{
////	int a = 0;
////	// ���ã�b��c��a�ı���
////	int& b = a;
////	int& c = a;
////
////	// Ҳ���Ը�����bȡ������d�൱�ڻ���a�ı���
////	int& d = b;
////	++d;
////
////	// ����ȡ��ַ���ǿ�����һ����
////	cout << &a << endl;
////	cout << &b << endl;
////	cout << &c << endl;
////	cout << &d << endl;
////	return 0;
////}
//
//void Swap(int& rx, int& ry)
//{
//	int tmp = rx;
//	rx = ry;
//	ry = tmp;
//}
//
//void Swap(int* px, int* py)
//{}
//
//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void STInit(ST& rs, int n = 4)
//{
//	rs.a = (STDataType*)malloc(n * sizeof(STDataType));
//	rs.top = 0;
//	rs.capacity = n;
//}
//
//// ջ��
//void STPush(ST& rs, STDataType x)
//{
//	//assert(ps);
//
//	// ���ˣ� ����
//	if (rs.top == rs.capacity)
//	{
//		printf("����\n");
//		int newcapacity = rs.capacity == 0 ? 4 : rs.capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(rs.a, newcapacity *
//			sizeof(STDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			return;
//		}
//		rs.a = tmp;
//		rs.capacity = newcapacity;
//	}
//	rs.a[rs.top] = x;
//	rs.top++;
//}
//// int STTop(ST& rs)
//int& STTop(ST& rs)
//{
//	assert(rs.top > 0);
//	return rs.a[rs.top];
//}
//
////int main()
////{
////	int x = 0, y = 1;
////	cout << x << " " << y << endl;
////	//Swap(&x, &y);
////
////	Swap(x, y);
////	cout << x << " " << y << endl;
////
////
////	// ����ȫ�ֵ�
////	ST st1;
////	STInit(st1);
////	STPush(st1, 1);
////	STPush(st1, 2);
////
////	cout << STTop(st1) << endl;
////
////	return 0;
////}
//
//
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}LTNode, * PNode;
//
//// typedef struct ListNode* PNode;
//
////void ListPushBack(LTNode** phead, int x)
//void ListPushBack(LTNode*& phead, int x)
////void ListPushBack(PNode& phead, int x)
//{
//	PNode newnode = (PNode)malloc(sizeof(LTNode));
//	newnode->val = x;
//	newnode->next = NULL;
//	if (phead == NULL)
//	{
//		phead = newnode;
//	}
//	else
//	{
//		//...
//	}
//}
//
//int main()
//{
//	//PNode plist = NULL;
//	LTNode* plist = NULL;
//	ListPushBack(plist, 1);
//
//	return 0;
//}
