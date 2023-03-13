#include "Lab2.h"
#include "Lab3.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    int16_t signed_num = -567;
    uint16_t unsigned_num = 123;

#pragma region Task2
    //������� 2
    cout << "Task 2" << endl << endl;

    From16bitIn32bit(signed_num);
    From16bitIn32bit(unsigned_num);
#pragma endregion

#pragma region Task3
    //������� 3
    cout << "Task 3" << endl << endl;

    _AlgebraicOperations(unsigned_num);
    AlgebraicOperations(signed_num);
#pragma endregion

#pragma region Task4

    //������� 4
    cout << "Task 4" << endl << endl;

    short x1 = -567;
    short x2 = 123;

    ShiftBits(x1);
    ShiftBits(x2);
#pragma endregion
        

#pragma region Task5
    //������� 5
    cout << "Task 5" << endl << endl;

    unsigned k = 123;
    cout << "�������� ��������: " << k << endl;
    cout << "���������� ���� �� �������� 16: " << Round_Down(k) << endl;
    cout << "���������� ����� �� �������� 16: " << Round_Up(k) << endl << endl;

    signed k1 = -567;
    cout << "�������� ��������: " << k1 << endl;
    cout << "���������� ���� �� �������� 16: " << Round_Down(k1) << endl;
    cout << "���������� ����� �� �������� 16: " << Round_Up(k1) << endl;
#pragma endregion



    //������� 6
    cout << "Task 6" << endl << endl;

#pragma region Taks7
    //������� 7
    cout << "Task 7" << endl << endl;

    float x = -185.45;
    cout << "������ ����� " << x << " ����� " << Absolute(x) << endl << endl;
#pragma endregion

//#pragma region Task8
//    //������� 8
//    cout << "Task 8" << endl << endl;
//
//    int N = 1000;
//    cout << "Sd(" << N << ") = " << HarmonicSeriesSd(N) << endl;
//    cout << "Sa(" << N << ") = " << HarmonicSeriesSa(N) << endl;
//
//    N = 1000000;
//    cout << "Sd(" << N << ") = " << HarmonicSeriesSd(N) << endl;
//    cout << "Sa(" << N << ") = " << HarmonicSeriesSa(N) << endl;
//
//    N = 1000000000;
//    cout << "Sd(" << N << ") = " << HarmonicSeriesSd(N) << endl;
//    cout << "Sa(" << N << ") = " << HarmonicSeriesSa(N) << endl << endl;
//#pragma endregion


    // ������� 9
    cout << "Task 9" << endl << endl;

    double eps = 0.001;

    PartialSums1(eps);

    cout << endl;

    // ������� 10
    cout << "Task 10" << endl << endl;

    double eps1 = 0.001;
    int alpha = 20;
  
    PartialSums2(eps1, alpha);

    return 0;



    

    
}