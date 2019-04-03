/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    char secret[122], eh;
    int i;
    int shift = 13;
        printf( "enter a secret:" );
    
     gets(secret);
   
    
    for(i = 0; secret[i] != '\0'; i = i + 1)
{
    eh = secret[i];
    
    if (eh >= 65 && eh <= 90) 
    {
        eh = eh + shift;
            
            secret[i] = eh;
    }
        else if(eh >= 97 && eh <= 122)
        {
            eh = eh + shift;
                if(eh > 122)
                {
                    eh = eh - 122 + 98 - 32;
                }
                secret[i] = eh;
        }
    
    
}
        printf("hidden secret: %s", secret);
        return 0;
}

