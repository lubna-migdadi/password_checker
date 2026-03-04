#include "password.h"
int uppercase(char password[]){
    int i = 0;
    while (password[i]){
        if (password[i]>='A' && password[i]<='Z'){
            return 1;
        }
        i++;
    }
    return 0;
}