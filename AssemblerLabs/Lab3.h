#pragma once
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <bitset>
#include <climits>
#include <cstdio>

using namespace std;

void PrintInfo(int p)
{
    cout << "Unsigned hexdecimal: 0x" << hex << p << endl; //16
    cout << "Unsigned binary: " << bitset<16>(p) << endl; //2
    cout << "Unsigned decimal: " << dec << p << endl; // 10
    cout << "Signed hexdecimal: 0x" << hex << p << endl; //16
    cout << "Signed binary: " << bitset<16>(p) << endl; //2
    cout << "Signed decimal: " << dec << p << endl << endl; //10
}

void From16bitIn32bit(int16_t p)
{
    // Расширяем знаковое число до 32 бит
    int32_t signed_extended = static_cast<int32_t>(p);
    PrintInfo(signed_extended);  
    
    // Расширяем беззнаковое число до 32 бит
    uint32_t unsigned_extended = static_cast<uint32_t>(p);
    PrintInfo(unsigned_extended);
}

void AlgebraicOperations(int16_t p)
{
    cout << "Число " << p << endl;

    int16_t p1 = p * 2;
    cout << "Беззнаковое умножение на 2: " << p1 << endl;

    int16_t p2 = p / 2;
    cout << "Беззнаковое деление на 2: " << p2 << endl;

    int16_t p3 = p % 16;
    cout << "Беззнаковое деление по остатку 16: " << p3 << endl;

    p -= p % 16;
    cout << "Округление вниз до числа, кратного 16: " << p << endl << endl;
}

void _AlgebraicOperations(uint16_t p)
{
    cout << "Число " << p << endl;

    uint16_t _p1 = p * 2;
    cout << "Знаковое умножение на 2: " << _p1 << endl;

    uint16_t _p2 = p / 2;
    cout << "Знаковое деление на 2: " << _p2 << endl;

    uint16_t _p3 = p % 16;
    cout << "Знаковое деление по остатку 16: " << _p3 << endl << endl; 
}

void ShiftBits(short x)
{
    cout << "Число " << x << endl;

    short x1 = static_cast<unsigned short>(x) << 1;
    cout << "Беззнаковый сдвиг влево на 1 бит: " << x1 << endl;

    short x2 = static_cast<unsigned short>(x) >> 1;
    cout << "Беззнаковый сдвиг вправо на 1 бит: " << x2 << endl;

    short x3 = x << 1;
    cout << "Знаковый сдвиг влево на 1 бит: " << x3 << endl;

    short x4 = x >> 1;
    cout << "Знаковый сдвиг вправо на 1 бит: " << x4 << endl;

    short x5 = x & 15;
    cout << "x & 15: " << x5 << endl;

    short x6 = x & -16;
    cout << "x & -16: " << x6 << endl << endl;
}

unsigned Round_Down(int x) 
{
    return x & 0xFFF0;
}

unsigned Round_Up(int x) 
{
    return (x | 0x000F) & 0xFFF0;
}

float Absolute(float x) {
    // Получаем адрес переменной типа float
    float* p = &x;
    // Приводим адрес к типу указателя на целочисленную переменную
    int* ip = reinterpret_cast<int*>(p);
    // Получаем битовое представление числа
    int bits = *ip;
    // Обнуляем старший бит
    bits &= 0x7FFFFFFF;
    // Приводим число обратно к типу float
    p = reinterpret_cast<float*>(&bits);
    // Если знак отрицательный, изменяем его на противоположный
    
    return *p;
}

float HarmonicSeriesSd(int N) 
{
    float sum = 0.0;
    for (int i = 1; i <= N; i++) {
        sum += 1.0f / i;
    }
    return sum;
}

float HarmonicSeriesSa(int N) {
    float sum = 0.0;
    for (int i = N; i >= 1; i--) {
        sum += 1.0f / i;
    }
    return sum;
}

double OurSeries(int i) 
{
    return pow(-1, i) * (i + 2) / (pow(i, 2) + 1);
}

double Euler_Maclaurin_Sum(double eps) {
    double sum = 0, term;
    int n = 2;

    // Первый член суммы
    term = OurSeries(0);

    while (abs(term) > eps) 
    {
        sum += term;

        // Вычисляем следующий член суммы
        double h = 1.0 / n;
        term = OurSeries(n);

        // Используем ускоренное суммирование Эйлера-Маклорена
        for (int k = 1; k < n; k++) {
            double c = pow(h * k, 1) / (1 - pow(2 * h * k, 2));
            term += c * OurSeries(n - k) + c * OurSeries(n + k);
        }

        n++;
    }

    return sum;
}

double Series(int alpha, double x) 
{
    return 1 / pow(x, alpha);
}







