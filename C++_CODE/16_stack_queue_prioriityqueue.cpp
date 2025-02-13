#include <iostream>
#include <vector>
#include <list>

using namespace std;

#include "mystack.h"
#include "myqueue.h"
#include "mypriorityqueue.h"

namespace ns
{
	void TestStack01()
	{
		ns::stack<int> st;
		st.push(1);
		st.push(2);
		st.push(3);
		st.push(4);

		st.pop();
	}


	void TestQueue01()
	{
		ns::queue<int> q;
		q.push(1);
		q.push(2);
		q.push(3);
		q.push(4);

		q.pop();
	}

	void TestPriorityQueue01()
	{
		ns::priority_queue<int> pq;
		pq.push(4);
		pq.push(1);
		pq.push(5);
		pq.push(7);
		pq.push(9);
		while (!pq.empty())
		{
			cout << pq.top() << " ";
			pq.pop();
		}
		cout << endl;
	}

	//< ����
	//> ����
	template<class Compare>
	void BubbleSort(int* a, int n, Compare com)
	{
		for (int j = 0; j < n; j++)
		{
			// ����
			int flag = 0;
			for (int i = 1; i < n - j; i++)
			{
				//if (a[i] < a[i - 1])
				if (com(a[i], a[i - 1]))
				{
					swap(a[i - 1], a[i]);
					flag = 1;
				}
			}

			if (flag == 0)
			{
				break;
			}
		}
	}

	void TestFunc01()
	{

		Less<int> LessFunc;
		Greater<int> GreaterFunc;
		// ��������
		cout << LessFunc(1, 2) << endl;
		cout << LessFunc.operator()(1, 2) << endl;

		int a[] = { 9,1,2,5,7,4,6,3 };
		BubbleSort(a, 8, LessFunc);
		BubbleSort(a, 8, GreaterFunc);

		BubbleSort(a, 8, Less<int>());
		BubbleSort(a, 8, Greater<int>());
	}

	void TestPriorityQueue02()
	{
		ns::priority_queue<int, vector<int>, Greater<int>> pq;
		pq.push(4);
		pq.push(1);
		pq.push(5);
		pq.push(7);
		pq.push(9);
		while (!pq.empty())
		{
			cout << pq.top() << " ";
			pq.pop();
		}
		cout << endl;
	}
};

//int main()
//{
//	ns::TestPriorityQueue01();
//	ns::TestPriorityQueue02();
//	return 0;
//}