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
		/*1.	Даны два действительных числа.Вывести первое число, если оно больше второго, и оба числа, если это не так.*/
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
		/*2.	Даны два действительных числа.Заменить первое число нулем, если оно меньше или равно второму, и оставить числа без изменения 
		в противном случае.*/
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
		/*3.	Даны три действительных числа.Выбрать из них те, которые принадлежат интервалу(1, 3).*/
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
		/*4.	Даны действительные числа х, у(х != у).Меньшее из.этих двух чисел заменить их полусуммой*, а большее — их удвоенным
		произведением.*/
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
	/*	5.	Даны три действительные числа.Возвести в квадрат те из них, значения которых неотрицательны.*/
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
		/*6.	Если сумма трех попарно различных действительных чисел х, у, z меньше единицы, то наименьшее из этих трех чисел заменить
		полусуммой* двух других; в противном случае заменить меньшее из х и у полусуммой* двух оставшихся значений.*/
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
		/*7.	Даны действительные числа х, у.Если х и у отрицательны, то каждое значение заменить его модулем; если отрицательно
		только одно из них, то оба значения увеличить на 0.5; если оба значения неотрицательны и ни одно из них не принадлежит
		отрезку[0.5, 2.0], то оба значения уменьшить в 10 раз; в остальных случаях х и у оставить без изменения.*/
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
		/*8.	Даны действительные положительные числа х, у, z.
		a.Выяснить, существует ли треугольник с длинами сторон х, у, z.
		b.Если треугольник существует, то ответить—является ли он остроугольным.*/

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
		/*9.	Даны действительные числа а, b, с(a != 0).Полностью исследовать биквадратное уравнение ах4 + Ьх2 + с = 0, т.е.если
		действительных корней нет, то должно быть выдано сообщение об этом, иначе должны быть выданы два или четыре корня.*/
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
		/*10.	Дано действительное число х.Получить целую часть
			a.числа х;*/
		/*b.затем—число х, округленное до ближайшего целого;
		c.затем—число х без дробных цифр*/

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