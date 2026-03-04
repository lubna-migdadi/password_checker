#include "password.h"
#include <unistd.h>

int main(){
    char password[50];
    write(1,"Enter password: ",17);
    int n = read(0,password,49);

    if (n<=0)
    {
        write(1,"can't reading password.",24);
        return 1;
    }

    password[n-1]='\0';
    
    if (has_space(password))
    {
        write(1,"Invalid Password (contain spaces)\n",35);
        return 0;
    }

    if (length(password)<8)
    {
        write(1,"Invalid Password (less than 8 characters.)",43);
        return 0;
    }

    if (!digits(password))
    {
        write(1,"Invalid Password (no digit.)",29);
        return 0;
    }

    if (!uppercase(password))
    {
        write(1,"Invalid Password (no uppercase .)",34);
        return 0;
        
    }

    if (!lowercase(password))
    {
        write(1,"Invalid Password (no lowercase .)",34);
        return 0;
    }
    
    write (1,"Valid Password",14);
    return 0;
}