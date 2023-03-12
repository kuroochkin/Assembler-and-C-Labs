#include "Lab2.h"
#include "Lab3.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    int16_t signed_num = -567;
    uint16_t unsigned_num = 123;

    From16bitIn32bit(signed_num);
    From16bitIn32bit(unsigned_num);

    return 0;
}