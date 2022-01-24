#include <iostream>
using namespace std;

struct node  
{
	int data;
	node* next;
};

class stack
{
private:
	node* _top;
	int _size;
public:
	stack();
	~stack();
	bool empty();
	int top();
	void push(int elem);
	void pop();
	void clear();
};

stack::stack()
{
	_size = 0;
	_top = NULL;
}

bool stack::empty()
{
	return (_size == 0);
}

int stack::top()
{
	if (_size) return _top->data;
	else abort();
}

void stack::push(int elem)
{
	try
	{
		node* s = new node;
		s->data = elem;
		s->next = _top;
		_top = s;
		++_size;
	}
	catch (const std::exception&)
	{
		abort();
	}
	
}

void stack::pop()
{
	if (_size)
	{
		node* s = _top;
		_top = _top->next;
		delete s;
		--_size;
	}
	else abort();
}

void stack::clear()
{
	while (_size)
	{
		node* s = _top;
		_top = _top->next;
		delete s;
		--_size;
	}
}

stack::~stack()
{
	while (_size)
	{
		node* s = _top;
		_top = _top->next;
		delete s;
		--_size;
	}
}

int main()
{
	stack a;
	a.push(1);
	a.clear();
	a.push(1);
	a.push(2);
	a.push(3);	
	a.push(9);
	a.push(10);
	a.push(11);
	a.pop();


	cout << a.top() << '\n';
	//	cout << a.empty()<<'\n';
	return 0;
}
