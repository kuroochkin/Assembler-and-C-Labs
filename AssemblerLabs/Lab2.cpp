#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <bitset>
#include <climits>

using namespace std;

// переписать на cout
void viewPointer(void* p)
{
    char* p1 = reinterpret_cast<char*>(p);
    unsigned short* p2 = reinterpret_cast<unsigned short*>(p);
    double* p3 = reinterpret_cast<double*>(p);

    printf("p: %p \n", p);
    printf("p1: %p \n", p1);
    printf("p2: %p \n", p2);
    printf("p3: %p \n\n", p3);

    p1++; p2++; p3++;

    printf("p1+1: %p \n", p1);
    printf("p2+1: %p \n", p2);
    printf("p3+1: %p \n\n", p3);

    //Разница между указателями 𝑝𝑖 и 𝑝𝑖 + 1 для типизированного указателя 𝑇 * 𝑝𝑖 будет равна размеру типа 𝑇 в байтах.
    //Это связано с тем, что при прибавлении единицы к указателю, адрес увеличивается на размер типа, 
    //чтобы указать на следующий элемент в памяти.Таким образом, если размер типа 𝑇 равен, например, 4 байта, 
    //то разница между 𝑝𝑖 и 𝑝𝑖 + 1 будет равна 4 байта.
}

void printPointer(void* p)
{
    char* p1 = reinterpret_cast<char*>(p);
    unsigned short* p2 = reinterpret_cast<unsigned short*>(p);
    double* p3 = reinterpret_cast<double*>(p);

    cout << "char: " << *p1 << endl;
    cout << "unsigned short: " << hex << *p2 << endl;
    cout << "double: " << hex << *p3 << endl;
    cout << endl;

    cout << "char: " << *(p1 + 1) << endl;
    cout << "unsigned short: " << hex << *(p2 + 1) << endl;
    cout << "double: " << *(p3 + 1) << endl;
    cout << endl;

    //манипулятор hex, который выводит целые числа в шестнадцатеричном виде.

}

void print16(void* p)
{
    //Без знака
    unsigned short unsigned_value = *reinterpret_cast<unsigned short*>(p);
    //Со знаком
    short signed_value = *reinterpret_cast<short*>(p);

    cout << "Unsigned hexdecimal: 0x" << std::hex << unsigned_value << endl; //16
    cout << "Unsigned binary: " << std::bitset<16>(unsigned_value) << endl; //2
    cout << "Unsigned decimal: " << std::dec << unsigned_value << endl; // 10
    cout << "Signed hexdecimal: 0x" << std::hex << signed_value << endl; //16
    cout << "Signed binary: " << std::bitset<16>(signed_value) << endl; //2
    cout << "Signed decimal: " << std::dec << signed_value << endl << endl; //10

    //Как видно из результатов, одна и та же область памяти может интерпретироваться по - разному в зависимости от того, 
        //как она рассматривается как знаковое или беззнаковое целое число, а также от того, 
       // в какой системе счисления ее представляют.
}

void print32(void* p)
{
    

    //cout << "Unsigned hexdecimal: 0x" << std::hex << *x << endl; //16
    //cout << "Unsigned binary: " << std::bitset<32>(*x) << endl; //2
    //cout << "Unsigned decimal: " << std::dec << *x << endl; // 10
    //cout << "Signed hexdecimal: 0x" << std::hex << *x << endl; //16
    //cout << "Signed binary: " << std::bitset<16>(*x) << endl; //2 // ERROR
    //cout << "Signed decimal: " << std::dec << *x << endl << endl; //10

    uint32_t* x = static_cast<uint32_t*>(p);
    cout << "Unsigned integer (hex): 0x" << hex << setfill('0') << setw(8) << *x << endl;
    bitset<32> bits(*x);
    cout << "Unsigned integer (binary): " << bits << endl;
    cout << "Unsigned integer (decimal): " << *x << endl;

    int32_t* signed_x = reinterpret_cast<int32_t*>(x);
    cout << "Signed integer (hex): 0x" << hex << setfill('0') << setw(8) << *signed_x << endl;
    bitset<32> signed_bits(*signed_x);
    cout << "Signed integer (binary): " << signed_bits << endl;
    cout << "Signed integer (decimal): " << *signed_x << endl;

    float* float_x = reinterpret_cast<float*>(x);
    cout << "Floating point (fixed): " << fixed << setprecision(4) << *float_x << endl;
    cout << "Floating point (exp): " << scientific << setprecision(4) << *float_x << endl << endl;
}

void print64(void* p) 
{
    uint64_t* x = static_cast<uint64_t*>(p);
    cout << "Unsigned integer (hex): 0x" << std::hex << setfill('0') << setw(16) << *x << endl;
    bitset<64> bits(*x);
    cout << "Unsigned integer (binary): " << bits << endl;
    cout << "Unsigned integer (decimal): " << *x << endl;

    int64_t* signed_x = reinterpret_cast<int64_t*>(x);
    cout << "Signed integer (hex): 0x" << hex << setfill('0') << setw(16) << *signed_x << endl;
    bitset<64> signed_bits(*signed_x);
    cout << "Signed integer (binary): " << signed_bits << endl;
    cout << "Signed integer (decimal): " << *signed_x << endl;

    double* double_x = reinterpret_cast<double*>(x);
    cout << "Floating point (fixed): " << fixed << setprecision(4) << *double_x << endl;
    cout << "Floating point (exp): " << scientific << setprecision(4) << *double_x << endl << endl;
}

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



    return 0;
}

