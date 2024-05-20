#include "middle.h"
using namespace std;

//11
int itc_second_max_num(long long number){
    long long num = 0;
    if(number < 0){
        number = number * -1;
    }
    if(number / 10 == 0){
        return -1;
    }
    long long maxi = -1, maxi2 = -1;
    if(number >= 0){
        while(number != 0){
            num = number % 10;
            if(maxi <= num){
                maxi2 = maxi;
                maxi = num;
            }
            if(num < maxi && num > maxi2){
                maxi2 = number % 10;
            }
            number = number / 10;
        }
    }
    if(maxi2 == -10){
        return -1;
    }
    return maxi2;
}
int itc_second_simple_max_num(long long number){
    int mmax = -1, z = 0, lok = -1;
    if(number < 0){
        number = number * -1;
    }
    if(number/10 == 0){
        return -1;
    }
    else{
        while(number != 0){
            z = number%10;
            if(mmax <= z){
                lok = mmax;
                mmax = z;
        }
        if(z < mmax && z > lok){
            lok = z;
        }
        number = number / 10;
    }
    if(lok == mmax){
        return -1;
    }
    else{
        return -1;
    }
    }
}

long long itc_bin_num(long long number){
    int l = 0;
    int ch = 10;
    long long num = 0;
    while(number > 0){
        l = number%2;
        number = number / 2;
        num = ch * l + num;
        ch = ch * 10;
    }
    return num/10;
}
long long itc_oct_num(long long number){
    if (number <= 0) {
        return -1;
    }
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
    if (number <= 0){
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
