#include "middle.h"

int itc_abs(int num1)
{
    if (num1 >= 0){
        return num1;
    }
    return -num1;
}

double itc_pow(int num1, int num2)
{
    int num3 = num1;

    if (num2 > 0){
        for (int i = 1; i < num2; i++){
            num1 = num1 * num3;
        }
        return num1;
    }
    else if (num2 == 0)
        return 1;
    else {
        for (int i = -1; i > num2; i--){
            num1 = num1 * num3;
        }
        return 1.0 / num1;
    }
}
