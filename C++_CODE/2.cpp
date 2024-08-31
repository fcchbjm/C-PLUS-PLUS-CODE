//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	int& ri = i;//引用在定义时必须初始化
//  //int& ri;//error
//	int& ri2 = i;//一个对象可以拥有多个引用
//
//
//	int j = 10;
//	ri = j;//引用不可以修改指向的对象，只能修改值
//	cout << i << j << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	//权限只能缩小，不能放大
	int i = 0;
	int& ri = i;
	const int& rci = i;
	//int& rc = 0;//error
	const int& rc = 0;//临时对象具有常性，必须用常引用

	//const int j = 0;
	// int& rj = j;//权限放大

	const int k = 0;
	int kk = k;//拷贝不存在权限放大

	double d = 12.34;
	int ii = d;
	const int& rid = d;//引用了隐式类型转换时产生的临时对象，临时对象具有常性
	double& rd = d;

	return 0;
}





