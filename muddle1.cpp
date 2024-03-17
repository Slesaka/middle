#include "middle.h"
using namespace std;

void itc_num_print(int number){
    cout << number << endl;
}
int itc_len_num(long long number){
    int kol = 0;
    while (number > 0){
        number /= 10;
        kol ++;
    }
    return kol;
}
int itc_sum_num(long long number){
    int number2, sum = 0;
    while (number > 0){
        number2 = number % 10;
        sum += number2;
        number /= 10;
    }
    return sum;
}
long long itc_multi_num(long long number){
    int number2, proz = 1;
    while (number > 0){
        number2 = number % 10;
        proz *= number2;
        number /= 10;
    }
    return proz;
}
int itc_max_num(long long number){
    int number2, mmax = 0;
    while (number > 0){
        number2 = number % 10;
        if (number2 > mmax){
            mmax = number2;
        }
        number /= 10;
    }
    return mmax;
}
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
    /*int number2, number3 = 0;
    while (number > 0){
        number2 = number % 10;
        number3 = number3 * 10 + number2;
        number /= 10;
    }
    return number3;*/

    //113 311

    int number2, number3 = 0, kop, kol = 0;
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
    return kol;
}
