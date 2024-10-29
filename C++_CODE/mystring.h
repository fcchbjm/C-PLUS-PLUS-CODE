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

		//�������٣�����Ƶ���ĺ������������У�Ĭ������
		string(const char* str = "")
		{
			_size = strlen(str);
			_capacity = _size;//capacity ������'\0'
			_str = new char[strlen(str) + 1];//��ʼ���б�ֻ���ճ�Ա
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

		//׷��
		void append(const char* str);

		string& operator+=(char ch);

		string& operator+=(const char* str);

		void insert(size_t pos, char ch);

		void insert(size_t pos, const char* str);

		void erase(size_t pos, size_t len = npos);//������ʱ���ȱʡֵ

		size_t find(char ch, size_t pos = 0);

		size_t find(const char* str, size_t pos = 0);

		string substr(size_t pos = 0, size_t len);//���Ӵ�

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

		//const static size_t npos = -1;//���壬ֻ�� const static int(����) ���������ﶨ��
		const static size_t npos;//����
	};

	
}