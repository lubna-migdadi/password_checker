#include "password.h"

int has_space(char password[])
{
    int i = 0;
    while (password[i] != '\0')
    {
        if (password[i] == ' ')
        {
            return 1;
        }    
        i++;
    }
    return 0;
}