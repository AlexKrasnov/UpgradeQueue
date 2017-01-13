#include "UpgradeStack.cpp"

template <class T>
class UpgradeQueue
{
	UpgradeStack<T> st1, st2;
public:
    void push(const T val)
	{
		st1.push(val);
	}
	T pop()
	{
        while(!st1.IsEmpty())
        {
            st2.push(st1.pop());
        }
		T tmp = st2.pop();
        //добавляем элементы обратно
        while(!st2.IsEmpty())
        {
            st1.push(st2.pop());
        }
		return tmp;
	}
	T FindMin() const
	{
		return st2.FindMin();
	}
    void print()
    {
        while(!st2.IsEmpty())
        {
            st1.push(st2.pop());
        }
        //вывод элементов
        while(!st1.IsEmpty())
        {
            cout <<st1.look()<<' ';
            st2.push(st1.pop());
        }
		cout << endl;
    }
};