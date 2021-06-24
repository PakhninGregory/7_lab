#include <iostream>
#include <ctime> 
#include <iomanip> 
#include <string>
#include <fstream>

using namespace std;

double min(double x, double y) {
	if (x < y)
		return x;
	else
		return y;
}

void chline(char ch, int i, int j) {
	for (int ii = 0;ii < i;ii++) {
		for (int jj = 0;jj < j;jj++)
			cout << ch << '\t';
		cout << '\n';
	}
}

double case4(double x1, double x2) {
	return 2 / ((1 / x1) + (1 / x2));
}

void larger_of(double& x, double& y) {
	if (x < y)
		x = y;
	else
		y = x;
}

void case6(double& x, double& y, double& z) {
	double k;
	if (x > y) {
		k = y;
		y = x;
		x = k;
	}
	if (y > z) {
		k = z;
		z = y;
		y = k;
	}
	if (x > y) {
		k = y;
		y = x;
		x = k;
	}
}


int Fibonacci(int i)
{
	int f1 = 0;
	int f2 = 1;
	int fn;
	if (i < 1) { return 0; }
	if (i == 1) { cout << "0 1\n"; }
	if (i > 1)
	{
		cout << "0 1 ";
		for (int j = 1; j < i;j++)
		{
			fn = f1 + f2;
			cout << fn << " ";
			f1 = f2;
			f2 = fn;
		}
	}
	cout << "\n\n";
	return 0;
};

double power(double n, int p) {
	double pow = 1;
	int i;
	if ((n == 0 || n == 1) && p == 0) {
		std::cout << "Результат неопределен, использую ответ '1'\n";
		return 1.f;
	}

	if (n == 0) {
		return 0;
	}

	//если степень - 0, то возвратится единица без запуска цикла
	for (i = 1; i <= abs(p); i++)
		pow *= n;

	if (p < 1) {
		pow = 1 / pow;
	}

	return pow;
};



double pow_recur(double X, int N)
{
	if (N == 0)
		return 1;
	else if (N < 0)
		return 1 / pow_recur(X, -N);
	else
		return X * pow_recur(X, N - 1);
}

void case10(int number, int basis) {
	string arr = "";
	std::cout << 10 << " : " << number << "\n";

	while (number > 0)
	{
		arr = std::to_string(number % basis) + arr;
		number /= basis;
	}

	std::cout << basis << " : " << arr << "\n";
};
//© Fф-ский
int main()
{
	setlocale(LC_ALL, "Russian");
	int z;
	do {
		cout << "Введите номер задания для его дальнейшего выполнения (для выхода - 0): ";
		cin >> z;
		switch (z) {
		case 1: {
			cout << "Функция 2 double -> среднее гармоническое\n";
			double x1, x2;
			cout << "x1\t";
			cin >> x1;
			cout << "x2\t";
			cin >> x2;
			cout << case4(x1, x2) << '\n';
		}
			  break;
		case 2: {
			cout << "Функция замены адресов 3 double в возростающем порядке\n";
			double x, y, z;
			cout << "x\t";
			cin >> x;
			cout << "y\t";
			cin >> y;
			cout << "z\t";
			cin >> z;
			case6(x, y, z);
			cout << x << '\t' << y << '\t' << z << '\n';
		}
			  break;
		}

		system("pause");
		system("cls");
	} while (z != 0);
	cout << "\n\n\n\n\t\t\tСделал Пахнин Григорий\n\n\n\n\n";
	return 0;
}