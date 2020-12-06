#include <iostream>
using namespace std;

int main()
{
int s, z, b, bd;
cout << "ВВЕДИТЕ СВОЙ ОПЫТ РАБОТЫ" << endl;
cin >> s;
cout << "ВАША З/П" << endl;
cin >> z;
if (s < 3) {
b = z * 0.5;
bd = b / 80;
}
if ((s >= 3) && (s < 5)) {
b = z * 0.6;
bd = b / 80;
}
if ((s >= 5) && (s < 8)) {
b = z * 0.8;
bd = b / 80;
}
if (s >= 8) {
b = z;
bd = b / 80;
}
cout << " ВАМ ВЫПЛАТЯТ " << b <<  " RUB ИЛИ " << bd << " $ ЗА ВАШ БОЛЬНИЧНЫЙ " << endl;
return 0;
}
