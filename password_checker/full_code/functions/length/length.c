#include "password.h"
int length(char password[]){
    int i =0;
    while (password[i]){
        i++;
    }
    return i;
}