#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
    int maxI, max;
    int L1, L2, L3, L4, L5;
    
        cout << "Введите уровни волшебности пяти лампы \n";
        cin >> L1 >> L2 >> L3 >> L4 >> L5;

    maxI = 0;
    max = L1;

    if (L1 >= L2) {
        max = L1;
        maxI = 1;
    }
    else {
        max = L2;
        maxI = 2;
    }
    if (max < L3) {
        max = L3;
        maxI = 3;
    }
    if (max < L4) {
        max = L4;
        maxI = 4;
    }
    if (max < L5) {
        max = L5;
        maxI = 5;
    }
    cout <<"Номер самой волшебной лампы: "<< maxI << endl;
    cout << "Максимальное значение волшебности: " << max << endl;

    return 0;
}
