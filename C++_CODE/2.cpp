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
