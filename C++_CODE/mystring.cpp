#include "mystring.h"

namespace myns
{
	const size_t string::npos = -1;//定义

	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity = n;
		}
	}

	void string::push_back(char ch)
	{
		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : 2 * _capacity);
		}

		_str[_size] = ch;
		++_size;
		_str[_size] = '\0';
	}

	void string::append(const char* str)
	{
		size_t len = strlen(str);
		if (_size + len > _capacity)
		{
			//需要的容量大于二倍，按需要开，否则按二倍开
			reserve(_size + len > 2 * _capacity ? _size + len : 2 * _capacity);
		}

		//strcat(_str, str);//需要找'\0'
		strcpy(_str + _size, str);
		_size += len;
	}

	string& string::operator+=(char ch)
	{
		push_back(ch);
		return *this;
	}
	string& string::operator+=(const char* str)
	{
		append(str);
		return *this;
	}

	void string::insert(size_t pos, char ch)
	{
		assert(pos <= _size);

		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : 2 * _capacity);
		}

		//挪动数据
		size_t end = _size + 1;
		//while (end >= (int)pos)//注意隐式类型提升
		while (end > pos)
		{
			_str[end] = _str[end - 1];
			--end;
		}
		
		_str[pos] = ch;
		++_size;
	}

	void string::insert(size_t pos, const char* str)
	{
		assert(pos <= _size);

		size_t len = strlen(str);

		if (_size + len > _capacity)
		{
			reserve(_size + len > 2 * _capacity ? _size + len : 2 * _capacity);
		}

		size_t end = _size + len;
		while (end > pos + len - 1)
		{
			_str[end] = _str[end - len];
			--end;
		}

		for (size_t i = 0; i < len; i++)
		{
			_str[pos + i] = str[i];
		}

		_size += len;
	}

	void string::erase(size_t pos, size_t len)
	{
		assert(pos < _size);

		if (len >= _size - pos)
		{
			_str[pos] = '\0';
			_size = pos;
		}
		else
		{
			for (size_t i = pos + len; i <= _size; i++)
			{
				_str[i - len] = _str[i];
			}
			_size -= len;
		}
	}

	size_t string::find(char ch, size_t pos)
	{
		for (size_t i = pos; i < _size; i++)
		{
			if (_str[pos] == pos)
			{
				return i;
			}
		}
		return npos;
	}

	size_t string::find(const char* str, size_t pos)
	{
		assert(pos < _size);

		const char* ptr = strstr(_str, str);
		if (ptr == nullptr)
		{
			return npos;
		}
		else
		{
			return ptr - _str;
		}
	}

	string string::substr(size_t pos, size_t len)
	{
		assert(pos < _size);
		if (len > _size - pos)
		{
			len = _size - pos;
		}

		string sub;
		sub.reserve(len);

		for (size_t i = 0; i < len; i++)
		{
			sub += _str[pos + i];
		}


		return sub;
	}

}