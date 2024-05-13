#include "middle.h"
using namespace std;

void itc_num_print(int number){
    cout << number << endl;
}
int itc_len_num(long long number){
    long long kol = 0;
    if(number == 0){
        return 1;
    }
    while(number != 0){
        kol++;
        number = number / 10;
    }
return kol;
}
int itc_sum_num(long long number){
    int number2, sum = 0;
    while (number > 0){
        number2 = number % 10;
        sum += number2;
        cout << number2 << " " << sum << endl;
        number /= 10;
    }
    return sum;
}

long long itc_multi_num(long long number){
    int number2, fl = 1, proz = 1;
    if (number < 0){
        fl = 0;
        number = -number;
    }
    while (number > 0){
        number2 = number % 10;
        proz *= number2;
        number /= 10;
    }
    if (fl == 0){
        proz = -proz;
    }
    return proz;
}

int itc_max_num(long long number){
    int number2, mmax = -10;
    while (number < 0){
        number2 = number % 10;
        if (number2 > mmax){
            mmax = number2;
        }
        number /= 10;
    }
    while (number > 0){
        number2 = number % 10;
        if (number2 > mmax){
            mmax = number2;
        }
        number /= 10;
    }
    return mmax;
}
