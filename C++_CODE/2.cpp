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

#include <iostream>
using namespace std;

int main()
{
	//Ȩ��ֻ����С�����ܷŴ�
	int i = 0;
	int& ri = i;
	const int& rci = i;
	//int& rc = 0;//error
	const int& rc = 0;//��ʱ������г��ԣ������ó�����

	//const int j = 0;
	// int& rj = j;//Ȩ�޷Ŵ�

	const int k = 0;
	int kk = k;//����������Ȩ�޷Ŵ�

	double d = 12.34;
	int ii = d;
	const int& rid = d;//��������ʽ����ת��ʱ��������ʱ������ʱ������г���
	double& rd = d;

	return 0;
}





