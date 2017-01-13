#include "Stack.cpp"

template <typename T>
T Min(T a, T b)
{
	if (a < b) return a;
	else return b;
}

template <class T>
class UpgradeStack
{
	Stack<T> st1, st2;
public:
	/*
	UpgradeStack(int s = MaxSize): 
	st1(s), st2(s) {}
	UpgradeStack(const UpgradeStack& st): 
	st1(st.st1), st2(st.st2) {}
	*/
	virtual void push(const T val)
	{
		st1.push(val);
		T tmp;
		if (st2.IsEmpty())
			tmp = Min(val, val);
		else 
			tmp = Min(val, st2.look());
		st2.push(tmp);
	}
	virtual T pop()
	{
		st2.del();
		return st1.pop();
	}
	bool IsEmpty() const { return st1.IsEmpty() && st2.IsEmpty(); }
	bool IsFool() const { return st1.IsFool() && st2.IsFool(); }	
	virtual T look() const
	{
		return st1.look();
	}
	void print() const
	{
		st1.print();
	}
	T FindMin() const
	{
		return st2.look();
	}
};