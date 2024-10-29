#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <assert.h>

using namespace std;

namespace myns
{
	class string
	{
	public:

		typedef char* iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		//string()
		//	:_str(new char[1]{'\0'})
		//	,_size(0)
		//	,_capacity(0)
		//{}

		//代码量少，调用频繁的函数，放在类中，默认内联
		string(const char* str = "")
		{
			_size = strlen(str);
			_capacity = _size;//capacity 不包含'\0'
			_str = new char[strlen(str) + 1];//初始化列表只按照成员
			strcpy(_str, str);
		}

		const char* c_str() const
		{
			return _str;
		}

		size_t size() const
		{
			return _size;
		}

		char& operator[](size_t pos)
		{
			assert(pos < _size);

			return _str[pos];
		}

		const char& operator[](size_t pos) const
		{
			assert(pos < _size);

			return _str[pos];
		}

		void reserve(size_t n);

		void push_back(char ch);

		//追加
		void append(const char* str);

		string& operator+=(char ch);

		string& operator+=(const char* str);

		void insert(size_t pos, char ch);

		void insert(size_t pos, const char* str);

		void erase(size_t pos, size_t len = npos);//声明的时候给缺省值

		size_t find(char ch, size_t pos = 0);

		size_t find(const char* str, size_t pos = 0);

		string substr(size_t pos = 0, size_t len);//求子串

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}
	private:
		//char _buffer[16];
		char* _str;
		size_t _size;
		size_t _capacity;

		//const static size_t npos = -1;//定义，只有 const static int(整型) 才能在这里定义
		const static size_t npos;//声明
	};

	
}