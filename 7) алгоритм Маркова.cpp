#include<iostream>
#include<string>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	string a, b, c;
	a = ""; b = ""; c = "";
	cout << "Введите строку:\n";
	string s;
	cin >> s; 
	int x, y, z;
	x = s.length() / 2; y = (s.length() - x) / 2; z = s.length() - x - y;
	int i;
	for (i = 0; i < x; i++)
	{
		a = a + s[i];
	}
	for (i = x; i < x + y; i++)
	{
		b = b + s[i];
	}
	for (i = x + y; i < s.length(); i++)
	{
		c = c + s[i];
	}
	string a1, a2, b1, b2, c1, c2;
	string f; 
	if (a == a) 
	{
		a1 = "*" + a;
	}
	if (a1 == "*" + a) 
	{
		a2 = a + b;
		b1 = "*" + b;
	}
	if (b1 == "*" + b) 
	{
		b2 = c + a;
		c1 = "*" + c;
	}
	if (c1 == "*" + c) 
	{
		c2 = b + c;
	}
	f = a2 + b2 + c2; 
	cout << "Удвоенная строка:\n"; cout << f;

}
