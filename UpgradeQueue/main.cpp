#include "UpgradeQueue.cpp"

void main()
{
	try
	{
		setlocale (LC_ALL, "Rus");
		cout << "\t***Демонстрация работы стека и очереди с поддержкой минимума***\n\n";

		UpgradeStack<int> s;
		for (int i=0;i<5;i++)
			s.push(int(pow(-1,i))*i);
		cout << "Стек: ";
		s.print();
		cout << "Min элемент в стеке: " << s.FindMin() << endl;

		cout << endl;

		UpgradeQueue<int> q;
		for (int i=0;i<5;i++)
			q.push(int(pow(-1,i))*i);
		cout << "Очередь: ";
		q.print();
		cout << "Min элемент в очереди: " << q.FindMin() << endl;
	}
	catch (const char* error)
	{
		cout << error << endl;
	}
}