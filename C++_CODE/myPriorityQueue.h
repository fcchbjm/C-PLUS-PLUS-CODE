#pragma once

#include <vector>

namespace ns
{
	//仿函数：本质是一个类，这个类重载operator(), 他的对象可以像函数一样使用
	template<class T>
	class Less
	{
	public:
		bool operator()(const T& x, const T& y)
		{
			return x < y;
		}
	};

	template<class T>
	class Greater
	{
	public:
		bool operator()(const T& x, const T& y)
		{
			return x > y;
		}
	};

	template<class T, class Container = std::vector<T>, class Compare = Less<T>>
	class priority_queue
	{
	public:
		void AdjustUp(size_t child)
		{
			Compare com;
			size_t parent = (child - 1) / 2;
			while (child > 0)
			{
				//if (_con[child] > _con[parent])
				if (com(_con[child], _con[parent]))
				{
					std::swap(_con[parent], _con[child]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else
				{
					break;
				}
			}
		}

		void AdjustDown(size_t parent)
		{
			Compare com;
			size_t child = parent * 2 + 1;
			while (child < _con.size())
			{
				//if (child + 1 < _con.size() && _con[child + 1] > _con[child])
				if (child + 1 < _con.size() && com(_con[child + 1], _con[child]))
				{
					++child;
				}

				//if (_con[child] > _con[parent])
				if (com(_con[child], _con[parent]))
				{
					std::swap(_con[child], _con[parent]);
					parent = child;
					child = parent * 2 + 1;
				}
				else
				{
					break;
				}
			}
		}

		void push(const T& x)
		{
			_con.push_back(x);

			AdjustUp(_con.size() - 1);
		}

		void pop()
		{
			std::swap(_con[0], _con[_con.size() - 1]);
			_con.pop_back();

			AdjustDown(0);
		}

		const T& top()
		{
			return _con[0];
		}

		size_t size()
		{
			return _con.size();
		}

		bool empty()
		{
			return _con.empty();
		}

	private:
		Container _con;
	};
}