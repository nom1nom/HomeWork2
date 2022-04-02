#include <iostream>
using namespace std;

//#define ARIFMETIKA
//#define AGE
//#define INKREM
//#define DIAP
//#define CHET_NECHET
//#define SUMMA
//   ������� 1
//#define FACTORIAL
//#define PROST1
//#define PROST
//#define ASCII
//#define STEPEN
//   ������� 2
//#define FIBONACCI 
//#define PYTHAGOR
//#define TAB_UMNOZH
//   ������� 3
//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define TRIANGLE4
//#define PLUS_MINUS
#define RHOMBUS

void main()
{
	setlocale(LC_ALL, "");

#if defined ARIFMETIKA
	int num_1, num_2, res_1;
	float res_2;
	cout << "������� ����� 1:" << endl;
	cin >> num_1;
	cout << "������� ����� 2:" << endl;
	cin >> num_2;

	res_1 = num_1 + num_2;
	cout << num_1 << "+" << num_2 << "=" << res_1 << endl;
	res_1 = num_1 - num_2;
	cout << num_1 << "-" << num_2 << "=" << res_1 << endl;
	res_1 = num_1 * num_2;
	cout << num_1 << "*" << num_2 << "=" << res_1 << endl;
	res_2 = (float)num_1 / (float)num_2;
	cout << num_1 << "/" << num_2 << "=" << res_2 << endl;
	res_1 = num_1 % num_2;
	cout << num_1 << "%" << num_2 << "=" << res_1 << endl;

#endif

#if defined AGE
	int age;
	cout << "������� �������:"; cin >> age;
	if (age > 18)
	{
		cout << "�� ������ 18 ���" << endl;
	}
	else if (age == 18)
	{
		cout << "�������!" << endl;
	}
	else if (age < 18)
	{
		cout << "�� ������ 18 ���" << endl;
	}
	else if (age == 17)
	{
		cout << "����-���� �� �������" << endl;
	}

#endif

#if defined INKREM

	int i;
	cout << "������� �����:" << endl;
	cin >> i;
	cout << ++i << endl;
	//cout << i++ << endl;
	i++;
	cout << i++ << endl;
	++i;
	cout << ++i << endl;

#endif

#if defined DIAP
	int n;
	cout << "�����" << endl;
	cin >> n;
	cout << ((n >= 1) && (n <= 10));
	cout << endl << "���� �� ������ 1, �� ����� � ��������" << endl;
	cout << "���� - 0, �� ����� ��� ���������" << endl;

#endif

#if defined CHET_NECHET

	int number;
	cout << "���� �����: "; cin >> number;

	while (number != 0)
	{
		if (number % 2 == 0)
			cout << "����� ������" << endl;
		else
			cout << "����� ��������" << endl;

		cout << "������� �����: ";
		cin >> number;
	}

#endif

#if defined SUMMA 
	int i;
	//int summa;
	int summa = 0;
	cout << "������� �����, ����� �������� ����� ������:\t"; cin >> i;
	for (i = 1; i <= 5; i = i + 1)
	{
		summa = summa + i;
	}
	cout << summa << endl;

#endif

#if defined FACTORIAL
	int f = 0, i = 1, j = 1;
	cout << "������� �����:\t";
	cin >> f;
	while (i <= f)
	{
		j = j * i;
		i = i + 1;
	}
	cout << f << "!=" << j << endl;
#endif

#if defined PROST1
	for (int i = 2; i < 100; i++)  //�������
		for (int j = 2; j < i; j++) //��������
		{
			if (i % j == 0)
			{
				break;
			}
			else if (i == j + 1)
			{
				cout << i << endl;
			}
		}
#endif

#if defined PROST
	for (int j = 2; j < 10; j++)
	{
		if (j == 2 || j == 3)
		{
			cout << j << endl;
		}
		else if (j % 2 != 0 && j % 3 != 0)
		{
			cout << j << endl;
		}
	}
	for (int j = 11; j < 100; j++)
	{
		if (j % 2 != 0 && j % 3 != 0 && j % 5 != 0 && j % 7 != 0)
		{
			cout << j << endl;
		}
	}
#endif

#if defined ASCII //���� ������� 16 ����� �� 16 ��������!
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << "\t";
	}
	cout << endl;
#endif

#if defined STEPEN 
	double a;
	int n;
	double N = 1;
	cout << "������� ��������� �������:\t"; cin >> a;
	cout << "������� ���������� �������:\t"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << "���������:\t" << N << endl;
#endif

#if defined FIBONACCI
	int a = 0, b = 1, c = 1;
	while (b <= 10000)
	{
		cout << a << endl;
		c = a + b;
		a = b;
		b = c;
	}
#endif

#if defined PYTHAGOR 
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif

#if defined TAB_UMNOZH 
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
		cout << endl;
	}
#endif

#if defined SQUARE
	int n;
	cout << "������� n:\t"; cin >> n; cout << endl;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
#endif

#if defined TRIANGLE1
	int n;
	cout << "������� n:\t"; cin >> n; cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
#endif

#if defined TRIANGLE2
	int n;
	cout << "������� n:\t"; cin >> n; cout << endl;
	for (int i = n; i >= 0; i++)
	{
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
#endif

#if defined TRIANGLE3
	int n;
	cout << "������� n:\t"; cin >> n; cout << endl;
	for (int i = 0; i <=n; i++)
	{
		for (int j = 0; j <=n; j++)
			if (j <= i) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		cout << endl;
	}
#endif

#if defined TRIANGLE4
	int n;
	cout << "������� n:\t"; cin >> n; cout << endl;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
			if (j <= n - i) {
				cout << " ";
			}
			else {
				cout << "*";
            }
		cout << endl;
	}
#endif

#if defined PLUS_MINUS//������� �����
	int n;
	cout << "������� n:";  cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i%2 == j%2) {
				cout << "*";
			}
			else {
				cout << "-";
			}
		}
		cout << endl; 
	}

#endif

#if defined RHOMBUS// �� �������
	int n;
	cout << "������� n:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) {
				cout << "\\";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	




	

#endif

}















