#include "middle.h"
using namespace std;

int itc_min_num(long long number){
    int mmin = 10;
    int num;
    if(number == 0){
        return 0;
    }
    if(number < 0){
        number = number * -1;
    }
    while(number != 0){
        num = number % 10;
        if(mmin > num){
            mmin = num;
        }
        number = number / 10;
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


    long long num;
    long long num2 = 0;
    if(number < 0){
        number = number * -1;
    }
    while(number > 0){
        num = number % 10;
        num2 = num2 * 10 + num;
        number = number / 10;
    }
    return itc_len_num(num2);

}

int itc_null_count(long long number){
    long long num;
    long long kol = 0;
    if(number == 0){
        return 1;
    }
    if(number < 0){
        number *= -1;
    }
    while(number > 0){
        num = number % 10;
        if(num == 0){
            kol++;
        }
        number = number /10;

    }
    return kol;
}
bool itc_mirror_num(long long number){
    if (number <= 0) {
        return -1;
    }
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
    if (number <= 0) {
        return -1;
    }
    int kol = 0;
    for (int i = 1; i <= number; i++){
        if (itc_mirror_num(i) == true){
            kol++;
        }
    }
    return kol;
}
