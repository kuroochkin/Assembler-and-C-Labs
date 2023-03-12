#pragma once
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <bitset>
#include <climits>
#include <cstdio>

using namespace std;

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

    cout << "char: " << (int)*p1 << endl;
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
    uint32_t* x = static_cast<uint32_t*>(p);
    cout << "Unsigned integer (hex): 0x" << hex << setfill('0') << setw(8) << *x << endl;
    bitset<32> bits(*x);
    cout << "Unsigned integer (binary): " << bits << endl;
    cout << "!!!!!!!!!!!Unsigned integer (decimal): " << std::dec  << *x << endl;

    int32_t* signed_x = reinterpret_cast<int32_t*>(x);
    cout << "Signed integer (hex): 0x" << hex << setfill('0') << setw(8) << *signed_x << endl;
    bitset<32> signed_bits(*signed_x);
    cout << "Signed integer (binary): " << signed_bits << endl;
    cout << "Signed integer (decimal): " << std::dec << *signed_x << endl;

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

void printDump(void* p, size_t N) 
{
    unsigned char* ptr = reinterpret_cast<unsigned char*>(p);
    for (size_t i = 0; i < N; ++i) {
        printf("%02X ", ptr[i]);
        /*bitset<8> signed_bits(ptr[i]);
        cout << "Signed integer (binary): " << signed_bits << endl;*/
    }
    printf("\n");

    //Результат выполнения программы будет разным для процессоров с разными порядками следования байтов.
}



