#include "Lab2.h"

int main()
{
    setlocale(LC_ALL, "Russian");
#pragma region Task1
    // ЗАДАНИЕ 1
    cout << "Task 1" << endl;
    void* p;
    viewPointer(&p);
#pragma endregion

#pragma region Task2
    // ЗАДАНИЕ 2
    cout << "Task 2" << endl;
    printPointer(&p);

    int x = 0x8877665544332211;
    char s[] = "abcdefgh0123456789";

    void* k = &x;

    cout << "Значение для: 0x8877665544332211:" << endl;
    printPointer(k);

    k = &s;

    cout << "Значения для \"abcdefgh0123456789\":" << endl;
    printPointer(k);
#pragma endregion

#pragma region Task3
    //Задание 3
    cout << "Task 3" << endl << endl;
    // unsigned min
    unsigned short x1 = 0;
    print16(&x1);

    // unsigned max
    unsigned short x2 = 0xFFFF;
    print16(&x2);

    // signed min
    short x3 = -32768;
    print16(&x3);

    // signed max
    short x4 = 32767;
    print16(&x4);

    unsigned short y = 5;
    print16(&y);

    short z = -5;
    print16(&z);
#pragma endregion

#pragma region Task4.1
    cout << "Task 4.1" << endl << endl;

    cout << "Unsigned min(32): " << endl;
    uint32_t X1 = 0;
    print32(&X1);

    // unsigned max
    cout << "Unsigned max(32): " << endl;
    uint32_t X2 = 4294967295;
    print32(&X2);

    // signed min
    cout << "Signed min(32): " << endl;
    uint32_t X3 = -2147483648;
    print32(&X3);

    // signed max
    cout << "Signed max(32): " << endl;
    uint32_t X4 = 2147483647;
    print32(&X4);

    cout << "x = 0x99887766 " << endl;
    uint32_t X = 0x99887766;
    print32(&X);

    cout << "y = 5 " << endl;
    uint32_t Y = 5;
    print32(&Y);

    cout << "z = -5 " << endl;
    uint32_t Z = -5;
    print32(&Z);
#pragma endregion

#pragma region Task4.2
    cout << "Task 4.2" << endl << endl;

    cout << "Unsigned min(64): " << endl;
    uint64_t x_1 = 0;
    print64(&x_1);

    // unsigned max
    cout << "Unsigned max(64): " << endl;
    uint64_t x_2 = 18446744073709551615;
    print64(&x_2);

    // signed min
    cout << "Signed min(64): " << endl;
    uint64_t x_3 = LLONG_MIN;
    print64(&x_3);

    // signed max
    cout << "Signed max(64): " << endl;
    uint64_t x_4 = 9223372036854775807;
    print64(&x_4);

    cout << "x = 0x99887766 " << endl;
    uint64_t x64 = 0x99887766;
    print64(&x64);

    cout << "y = 5 " << endl;
    uint64_t y64 = 5;
    print64(&y64);

    cout << "z = -5 " << endl;
    uint64_t z64 = -5;
    print64(&z64);
#pragma endregion

#pragma region Task5

    // ЗАДАНИЕ 5
    int m = 0x99887766;
    printDump(&m, sizeof(m));


    int arr[] = { 0x99887766, 5, -5 };
    printDump(arr, sizeof(arr));

    //Здесь мы используем тот факт, что указатель на массив является указателем на его первый элемент.

    double n = 5;
    printDump(&n, sizeof(n));
#pragma endregion
    


    return 0;
}