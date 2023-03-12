#include "Lab2.h"
#include "Lab3.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    int16_t signed_num = -567;
    uint16_t unsigned_num = 123;

#pragma region Task2
    //ÇÀÄÀÍÈÅ 2
    cout << "Task 2" << endl << endl;

    From16bitIn32bit(signed_num);
    From16bitIn32bit(unsigned_num);
#pragma endregion

#pragma region Task3
    //ÇÀÄÀÍÈÅ 3
    cout << "Task 3" << endl << endl;

    _AlgebraicOperations(unsigned_num);
    AlgebraicOperations(signed_num);
#pragma endregion


    return 0;
}