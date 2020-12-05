#include <iostream>
using namespace std;

int main()
{
int a;
cin >> a;
for (int i = 1; i <= a; i++)
{
int n;
int m;
cin >> n;
cin >> m;
int x;
int y;
cin >> x;
cin >> y;
int sum = 0;
if ((x - 2 <= n) && (y - 1 <= m) && (x - 2 > 0) && (y - 1 > 0))
{
sum++;
cout << (x - 2) << ' ' << (y - 1) << endl;;
}
