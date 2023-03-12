#include "Lab2.h"
#include "Lab3.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    int16_t signed_num = -567;
    uint16_t unsigned_num = 123;

#pragma region Task2
    //ЗАДАНИЕ 2
    cout << "Task 2" << endl << endl;

    From16bitIn32bit(signed_num);
    From16bitIn32bit(unsigned_num);
#pragma endregion

#pragma region Task3
    //ЗАДАНИЕ 3
    cout << "Task 3" << endl << endl;

    _AlgebraicOperations(unsigned_num);
    AlgebraicOperations(signed_num);
#pragma endregion

#pragma region Task4

    //ЗАДАНИЕ 4
    cout << "Task 4" << endl << endl;

    short x1 = -567;
    short x2 = 123;

    ShiftBits(x1);
    ShiftBits(x2);
#pragma endregion
        

#pragma region Task5
    //ЗАДАНИЕ 5
    cout << "Task 5" << endl << endl;

    unsigned k = 123;
    cout << "Исходное значение: " << k << endl;
    cout << "Округление вниз до кратного 16: " << Round_Down(k) << endl;
    cout << "Округление вверх до кратного 16: " << Round_Up(k) << endl << endl;

    signed k1 = -567;
    cout << "Исходное значение: " << k1 << endl;
    cout << "Округление вниз до кратного 16: " << Round_Down(k1) << endl;
    cout << "Округление вверх до кратного 16: " << Round_Up(k1) << endl;
#pragma endregion


    //ЗАДАНИЕ 6
    cout << "Task 6" << endl << endl;

    //ЗАДАНИЕ 7
    cout << "Task 7" << endl << endl;

    float x = -185.45;
    cout << "Модуль числа " << x << " равен " << Absolute(x) << endl;



    return 0;

    

    
}