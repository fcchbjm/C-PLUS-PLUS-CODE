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

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//权限只能缩小，不能放大
//	int i = 0;
//	int& ri = i;
//	const int& rci = i;
//	//int& rc = 0;//error
//	const int& rc = 0;//临时对象具有常性，必须用常引用
//
//	//const int j = 0;
//	// int& rj = j;//权限放大
//
//	const int k = 0;
//	int kk = k;//拷贝不存在权限放大
//
//	double d = 12.34;
//	int ii = d;
//	const int& rid = d;//引用了隐式类型转换时产生的临时对象，临时对象具有常性
//	double& rd = d;
//
//	return 0;
//}

////inline主要用于替代C语言中的宏
//#include <iostream>
//using namespace std;
//#define DEF_ADD(x,y) ((x) + (y))
//inline int INL_ADD(int x, int y)//内联声明的定义不能分离到不同文件（无法找到函数地址）
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

////NULL与nullptr
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
//	func(NULL);//C语言：define NULL 0
//	func((int*)NULL);
//	func(nullptr);//nullptr为关键字，会自动转换为对应类型的指针类型
//
//	void* p1 = NULL;
//	int* p2 = (int*)p1;//必须强制类型转换
//
//	return 0;
//}
