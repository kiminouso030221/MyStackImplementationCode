#include<iostream>
using namespace std;


class stack
{
private:
	size_t _size;
	int* data;
	int _top;
	size_t _capacity;
public:
	stack();
	~stack();
	int top();
	void push(int elem);
	void pop();
	bool empty();
	size_t size();
	size_t capacity();
	void clear();
};

stack::stack()
{
	_size = 0;
	_top = -1;
	try
	{
		data = new int[10];
	}
	catch (const exception&)
	{
		abort();
	}
	_capacity = 10;
}
stack::~stack()
{
	delete[] data;
}

int stack::top()
{
	if (_size) return data[_top];
	else abort();
}

void stack::push(int elem)
{
	if (_capacity - _size < 3)
	{
		int* temp = new int[(int)(_capacity * 1.5)];
		memmove(temp, data, _capacity * sizeof(int));
		delete[] data;
		data = temp;
		_capacity *= 1.5;
	}
	++_top;
	try
	{
		data[_top] = elem;
	}
	catch (const exception&)
	{
		abort();
	}
	++_size;
}

void stack::pop()
{
	if (_size > 0)
	{
		--_top;
		--_size;
	}
	else abort();
	if ((double)_size / _capacity < 0.5 && _capacity > 40)
	{
		int* temp = new int[(int)(_capacity * 0.75)];
		memmove(temp, data, _size * sizeof(int));
		delete[] data;
		data = temp;
		_capacity *= 0.75;
	}
}

bool stack::empty()
{
	return (_size == 0);
}

size_t stack::size()
{
	return _size;
}

size_t stack::capacity()
{
	return _capacity;
}

void stack::clear()
{
	delete[] data;
	try
	{
		data = new int[10];
	}
	catch (const std::exception&)
	{
		abort();
	}
	_size = 0;
	_top = -1;
	_capacity = 10;
}

int main()
{
	stack a;
	a.push(1);
	a.clear();
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(10);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(10);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(10);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(10);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(10);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(10);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(8);
	a.push(9);
	a.push(10);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(10);
	a.push(11);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(9);
	a.push(8);
	a.push(9);
	a.push(9);
	//a.clear();
	a.push(10);
	a.push(11);
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();

	cout << a.top() << '\n';
	//	cout << a.empty()<<'\n';
	cout << a.capacity() << '\n';
	cout << a.size();
	return 0;
}