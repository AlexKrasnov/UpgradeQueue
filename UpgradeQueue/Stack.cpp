#include <iostream>
using namespace std;

#define MaxSize 100

template <class T>
class Stack
{
	const int size;
	int top;
	T* array;
public:
	Stack(int s = MaxSize) : size(s), top(-1)
	{
		if (s < 0)
			throw "negative size";
		if (s > MaxSize) 
			throw "very big size";
		array = new T[s];
	}
	Stack(const Stack &st) : size(st.size), top(st.top)
	{
		array = new T[size];
		for (int i = 0; i < s; i++)
			array[i] = st.array[i];
	}
	virtual ~Stack()
	{
		delete[] array;
	}
	bool IsEmpty() const { return top == -1; }
	bool IsFool() const { return top == size - 1;}
	virtual void push(const T val)
	{
		if (IsFool())
			throw "Stack is fool";
		array[++top] = val;
	}
	virtual T pop()
	{
		if (IsEmpty())
			throw "Stack is empty";
		return array[top--];
	}
	virtual T look() const
	{
		if (IsEmpty())
			throw "Stack is empty";
		return array[top];
	}
	virtual void del()
	{
		if (IsEmpty())
			throw "Stack is empty";
		top--;
	}
	void print() const
	{
		for (int i=0;i<=top;i++)
		{
			cout<<array[i]<<" ";
		}
		cout << endl;
	}
	T FindMin()
	{
		int t = top;
		T tmp = this->look();
		while (!this->IsEmpty())
		{
			if (tmp > this->look())
				tmp = this->look();
			top--;
		}
		top = t;
		return tmp;
	}
};