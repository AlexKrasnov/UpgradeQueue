#include "UpgradeQueue.cpp"

void main()
{
	try
	{
		setlocale (LC_ALL, "Rus");
		cout << "\t***������������ ������ ����� � ������� � ���������� ��������***\n\n";

		UpgradeStack<int> s;
		for (int i=0;i<5;i++)
			s.push(int(pow(-1,i))*i);
		cout << "����: ";
		s.print();
		cout << "Min ������� � �����: " << s.FindMin() << endl;

		cout << endl;

		UpgradeQueue<int> q;
		for (int i=0;i<5;i++)
			q.push(int(pow(-1,i))*i);
		cout << "�������: ";
		q.print();
		cout << "Min ������� � �������: " << q.FindMin() << endl;
	}
	catch (const char* error)
	{
		cout << error << endl;
	}
}