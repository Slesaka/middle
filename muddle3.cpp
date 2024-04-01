#include "middle.h"
using namespace std;

int itc_second_max_num(long long number){
    if (number < 10){
        return -1;
    }
    int mmax = 0, mmax2 = -10000;
    while (number != 0){
        if (mmax < number % 10){
            mmax2 = mmax;
            mmax = number % 10;
        }
        else if (mmax2 < number % 10){
            mmax2 = number % 10;
        }
        number /= 10;
    }
    return mmax2;
}
int itc_second_simple_max_num(long long number){
    if (number < 10){
        return -1;
    }
    int mmax = 0, mmax2 = -10000;
    while (number != 0){
        if (mmax < number % 10){
            mmax2 = mmax;
            mmax = number % 10;
        }
        else if (mmax2 < number % 10){
            mmax2 = number % 10;
        }
        number /= 10;
    }
    if (mmax == mmax2){
        return -1;
    }
    return mmax2;
}
long long itc_bin_num(long long number){
    if (number < 0){
        return -1;
    }
    int k = 1;
    long long itog = 0;
    while (number != 0){
        itog = itog + number % 2 * k;
        number /= 2;
        k *= 10;
    }
    return itog;
}
long long itc_oct_num(long long number){
    if (number < 0){
        return -1;
    }
    int k = 1;
    long long itog = 0;
    while (number != 0){
        itog = itog + number % 8 * k;
        number /= 8;
        k *= 10;
    }
    return itog;
}
int itc_rev_bin_num(long long number){
    if (number < 0){
        return -1;
    }
    long long number2 = number;
    long long k = 1;
    long long rez = 0;
    while (number2 != 0){
        if (number2 % 10 >= 2){
            return -1;
        }
    number2 /= 10;
    }
    while (number != 0){
        rez = rez + number % 10 * k;
        k *= 2;
        number /= 10;
    }
    return rez;
}
