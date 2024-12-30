#include <iostream>
#include <vector>
#include <list>

using namespace std;

#include "mystack.h"
#include "myqueue.h"

int main()
{
	ns::stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	st.pop();

	ns::queue<int, list<int>> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	q.pop();

	return 0;
}