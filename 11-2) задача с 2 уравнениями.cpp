#include <iostream>
#include <cmath>
using namespace std;

int main()
{
setlocale(0, "");
double z1, z2, b;
cout << "введите b: ";
cin >> b;
if (b >= 2 && b <= 7)
{
z1 = sqrt(2 * b + 2 * sqrt(pow(b, 2) - 4)) / (sqrt(pow(b, 2) - 4) + b + 2);
z2 = 1.0 / sqrt(b + 2);
cout << "z1 = " << z1 << ", z2 = " << z2 << endl;
}
else if (b > -2 && b < 2)
{
z2 = 1.0 / sqrt(b + 2);
cout << "z2 = " << z2 << endl;
}
else
{
cout << "выражения z1 and z2 не имеют решений при b = " << b << endl;
}
return 0;
}
