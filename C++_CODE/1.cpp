//#include <iostream>//����ͷ�ļ� i - input ����  o - output ���  stream - �� 
//
//using namespace std;//ʹ������Ϊstd�������ռ�
//
//int main()
//{
//	cout << "Hello world" << endl;//��������� endl - endline
//	return 0;
//}

#include <iostream>

//#include <stdlib.h>
//int rand = 20;
//��rand��: �ض��壻��ǰ�Ķ����ǡ�������

int i = 15;

namespace ns//��
{
	int rand = 10;

	int i = 5;

	struct Node
	{
		int val;
		struct Node* pnext;
	};

	namespace ns1//�����ռ����Ƕ��
	{
		int i = 25;
	}
}

namespace ns//��ͬ���Ƶ������ռ���Զ��ϲ�(��ʹ���ڲ�ͬ�ļ���)
{
	int j = 30;
	int k = 35;
}

int main()
{
	//:: �������޶���
	//std::cout << rand << std::endl;

	std::cout << i << std::endl;
	std::cout << ns::i << std::endl;//������Ϊns�������ռ���Ѱ����Ϊrand�ı�������
	std::cout << ::i << std::endl;//Ĭ��ȫ��

	struct ns::Node* pn = NULL;

	std::cout << ns::ns1::i << std::endl;

	std::cout << ns::j << std::endl;
	std::cout << ns::k << std::endl;

	//C++��׼��������Ϊstd��standard���������ռ���

	return 0;
}

