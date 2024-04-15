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
    if (number <= 0){
        return -1;
    }
    int number2, proz = 1;
    while (number > 0){
        number2 = number % 10;
        proz *= number2;
        number /= 10;
    }
    return proz;
}
int itc_max_num(long long number){
    if (number <= 0){
        return -1;
    }
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

