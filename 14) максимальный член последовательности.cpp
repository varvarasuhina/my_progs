#include <iostream>
using namespace std;

int main()
{
setlocale(0, "");
int i, a, s, max, n, j;
cout << "введите кол-во элементов последовательности" << endl;
cin >> n;
cout << "введите элементы последовательности" << endl;
j = 1;
s = 1;
i = 2;
cin >> a;
max = a;
while (i <= n) {
cin >> a;
if (max < a) {
max = a;
j = i;
s = 1;
}
else {
if (max == a) {
s++;
}
}
i++;
}
if (s == 1) {
cout << "Максимальный элемент: " << max << " находится на позиции " << j;
}
else {
cout << "Максимальный элемент: " << max << " встречается в последовательности " << s << " раз(а)";
}
return 0;
}
