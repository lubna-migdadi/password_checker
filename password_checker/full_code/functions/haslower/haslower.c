#include "password.h"
int lowercase(char password[]){
    int i = 0;
    while (password[i]){
        if (password[i]>='a'&&password[i]<='z'){
            return 1;
        }
        i++;
    }
    return 0;
}