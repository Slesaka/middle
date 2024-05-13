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
    long long sum = 0;
    long long num;
    while(number != 0){
        num = number % 10;
        sum += num;
        number = number / 10;
    }
    if(sum < 0){
        sum = sum * -1;
    }
return sum;
}

long long itc_multi_num(long long number){
    long long proz = 1;
    long long num;
    while(number != 0){
        num = number % 10;
        proz = proz * num;
        number = number / 10;
    }
    if(proz < 0){
        proz = proz * -1;
    }
return proz;
}

int itc_max_num(long long number){
    int maxi = 0;
    int num;
    if(number < 0){
        number = number * -1;
    }
    while(number != 0){
        num = number % 10;
        if(maxi < num){
            maxi = num;
        }
        number = number / 10;
    }

    return maxi;
}
