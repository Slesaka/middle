#include "middle.h"
using namespace std;

int itc_min_num(long long number){
    int number2, mmin = 9;
    while (number > 0){
        number2 = number % 10;
        if (number2 < mmin){
            mmin = number2;
        }
        number /= 10;
    }
    return mmin;
}
int itc_rev_num(long long number)
{
    /*long long number2, number3 = 0;
    while (number > 0){
        number2 = number % 10;
        number3 = number3 * 10 + number2;
        number /= 10;
    }
    return number3;*/

    /*long long number2, number3 = 0, kop, kol = 0;
    kop = number;
    while (number > 0){
        number2 = number % 10;
        number3 = number3 * 10 + number2;
        number /= 10;
    }
    while(kop > 0){
        if (number3 % 10 != kop % 10){
            kol++;
        }
        number3 /= 10;
        kop /= 10;
    }
    return kol;*/

    long long number2, number3 = 0;
    while (number > 0){
        number2 = number % 10;
        number3 = number3 * 10 + number2;
        number /= 10;
    }
    return itc_len_num(number3);
}

int itc_null_count(long long number){
    long long kol;
    while (number != 0){
        if (number % 10 == 0){
            kol++;
        }
        number /= 10;
    }
    return kol;
}
bool itc_mirror_num(long long number){
    long long number2, number3 = 0;
    number2 = number;
    while (number != 0){
        number3 = number3 * 10 + number % 10;
        number /= 10;
    }
    if (number2 == number3){
        return true;
    }
    return false;
}
int itc_mirror_count(long long number){
    int kol = 0;
    for (int i = 1; i <= number; i++){
        if (itc_mirror_num(i) == true){
            kol++;
        }
    }
    return kol;
}
