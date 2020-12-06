#include <iostream>
#include <string>
using namespace std;

int main() {
  setlocale(LC_ALL,"rus");
   string str;
   char ch;
   int i;
   int position=-1;

  
  cout << "Введите число ";
  cin >> str;
  cout << endl;
  cout << "Введите цифру, которую надо найти в числе ";
  cin >> ch;
  cout << endl;
   for(int i=0;i<str.length();i++)
    {
    if(str[i]==ch)
    {
        position=i;
        break;}
    }

   if(position!=-1)
    {
    cout << "Цифра " << ch << " находится на " << position+1 << " позиции" << endl;
    }
    else
    {
    cout << "Искомая цифра отсутствует" << endl;
    }
    return 0;
}
