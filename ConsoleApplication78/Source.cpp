#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	srand(time(NULL));
	int task;
	cin >> task;
	if (task == 1)
	{
		/*1.	���� ��� �������������� �����.������� ������ �����, ���� ��� ������ �������, � ��� �����, ���� ��� �� ���.*/
		int a, b;
		a = 1 + rand() % 99;
		b = 1 + rand() % 99;
		if (a > b)
		{
			cout << a << endl;
		}
		else
		{
			cout << a << endl;
			cout << b << endl;
		}
	}
	if (task == 2)
	{
		/*2.	���� ��� �������������� �����.�������� ������ ����� �����, ���� ��� ������ ��� ����� �������, � �������� ����� ��� ��������� 
		� ��������� ������.*/
		int a, b;
		a = 1 + rand() % 99;
		b = 1 + rand() % 99;
		if (a <= b)
		{
			a = 0;
			cout << a << endl;
		}
		else
		{
			cout << a << endl;
			cout << b << endl;
		}
	}
	if (task == 3)
	{
		/*3.	���� ��� �������������� �����.������� �� ��� ��, ������� ����������� ���������(1, 3).*/
		int a, b, c;
		a = 1 + rand() % 9;
		b = 1 + rand() % 9;
		c = 1 + rand() % 9;
		
		if (a > 0 && a < 4)
		{
			cout << a << endl;
		}
		if (b > 0 && b < 4)
		{
			cout << b << endl;
		}
		if (c > 0 && c < 4)
		{
			cout << c << endl;
		}
	}
	if (task == 4)
	{
		/*4.	���� �������������� ����� �, �(� != �).������� ��.���� ���� ����� �������� �� ����������*, � ������� � �� ���������
		�������������.*/
		int a, b;
		a = 1 + rand() % 9;
		b = 1 + rand() % 9;
		if (a < b)
		{
			a = (a + b) / 2;
			b = 2 * a*b;
			cout << a << endl;
			cout << b << endl;
		}
		if (a > b)
		{
			b = (a + b) / 2;
			a = 2 * a*b;
			a = (a + b) / 2;
			b = 2 * a*b;
			cout << a << endl;
			cout << b << endl;
		}
	}
	if (task == 5)
	{
	/*	5.	���� ��� �������������� �����.�������� � ������� �� �� ���, �������� ������� ��������������.*/
		int a, b, c;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a > 0)
			cout << a*a << endl;
		if (b > 0)
			cout << b*b << endl;
		if (c > 0)
			cout << c*c << endl;
	}
	if (task == 6)
		/*6.	���� ����� ���� ������� ��������� �������������� ����� �, �, z ������ �������, �� ���������� �� ���� ���� ����� ��������
		����������* ���� ������; � ��������� ������ �������� ������� �� � � � ����������* ���� ���������� ��������.*/
	{
		int x, y, z, a, b, c;
		cin >> x;
		cin >> y;
		cin >> z;
		a = min(min(x, y), (z));
		cout << a << endl;
		b = max(max(x, y), (z));
		cout << b << endl;
		c = (x > a&&x < b) ? x : (y > a&&y < b) ? y : z;
		cout << c << endl;
		if (x + y + z < 1)
		{
			cout << (b + c) / 2 << endl;
		}
		else
		{
			cout << (b + c) / 2 << endl;
		}

	}
	if (task == 7)
		/*7.	���� �������������� ����� �, �.���� � � � ������������, �� ������ �������� �������� ��� �������; ���� ������������
		������ ���� �� ���, �� ��� �������� ��������� �� 0.5; ���� ��� �������� �������������� � �� ���� �� ��� �� �����������
		�������[0.5, 2.0], �� ��� �������� ��������� � 10 ���; � ��������� ������� � � � �������� ��� ���������.*/
	{
		double x, y;
		cin >> x;
		cin >> y;
		if (x < 0 && y < 0)
		{
			x = -x;
			y = -y;
			cout << x << endl;
			cout << y << endl;
		}
		else if (x < 0 || y < 0)
		{
			x = x*0.5;
			y = y*0.5;
			cout << x << endl;
			cout << y << endl;
		}
		else if ((x < 2 && x > 0.5 && x > 0) && (y < 2 && y > 0.5 && y > 0))
		{
			x = x / 10;
			y = y / 10;
			cout << x << endl;
			cout << y << endl;
		}
		else
		{
			cout << x << "\n";
			cout << y << "\n";

		}



	}
	if (task == 8)
		/*8.	���� �������������� ������������� ����� �, �, z.
		a.��������, ���������� �� ����������� � ������� ������ �, �, z.
		b.���� ����������� ����������, �� ����������������� �� �� �������������.*/

	{
		int x, y, z, f, d, s;
		cin >> x;
		cin >> y;
		cin >> z;
		f = max(max(x, y), (z));
		d = min(min(x, y), (z));
		s = (x > d&&x < f) ? x : (y > d&&y < f) ? y : z;
		cout << "max= " << f << endl;
		cout << "min= " << d << endl;
		cout << "mid= " << s << endl;
		if (f < d + s)

		{
			cout << "Treugolnik sushestvuet"<< endl;
			if (f*f < d*d + s*s)
				cout << "Treugolnik ostrougolniy"<< endl;
			else
				cout << "treugolnik ne ostrougolniy"<< endl;
		}
		else
			cout << "Treugolnik ne sushestvuet" << endl;
	}

	if (task == 9)
	{
		/*9.	���� �������������� ����� �, b, �(a != 0).��������� ����������� ������������ ��������� ��4 + ��2 + � = 0, �.�.����
		�������������� ������ ���, �� ������ ���� ������ ��������� �� ����, ����� ������ ���� ������ ��� ��� ������ �����.*/
		double a, b, c, x, y;
		cin >> a;
		cin >> b;
		cin >> c;
		if (b*b - 4 * a*c > 0)

			if (((b + pow(b*b - 4*a*c, 0.5) / 2*a >= 0 && (-b + pow(b*b - 4*a*c, 0.5) / 2*a >= 0))))
			{
				cout << "kornei=4" << endl;
			}
			else
			{
				cout << "kornei net" << endl;
			}
		if (((b + pow(b*b - 4*a*c, 0.5) / 2*a >= 0 || (-b + pow(b*b - 4*a*c, 0.5) / 2*a >= 0))))
			cout << "kornei=2" << endl;
	}
	if (task == 10)
	{
		/*10.	���� �������������� ����� �.�������� ����� �����
			a.����� �;*/
		/*b.���������� �, ����������� �� ���������� ������;
		c.���������� � ��� ������� ����*/

		double x;
		cin >> x;
		int a= x;
		cout << a << endl;
		if (x - a < 0.5)
		{
			x = a;
			cout << x << endl;
		}
		else
		{
			x = a + 1;
			cout << x << endl;
		}



	}

}