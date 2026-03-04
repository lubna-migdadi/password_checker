#include "password.h"
int digits(char password[]){
    int i = 0;
    while (password[i]){
        if (password[i]>='0' && password[i]<='9'){
            return 1;
        }
        i++;
    }
    return 0;
}