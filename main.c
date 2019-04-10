
#include <stdio.h>
#include <stdlib.h>



int main()
{
    char secret[122], eh;                           //this is the range of numbers what you wanna type can be (since ASCII letters range from 65 - 122)
    int i;
    int shift = 1;                                  // the number of letters its gonna change by so a moves one space so t'd be b and c = d etc
        printf( "enter a secret:" );                // just a user prompt does nothing but make it easier for a suer to get
    
     gets(secret);                                  // this collects the user input and stores it into 'secret'
   
    
    for(i = 0; secret[i] != '\0'; i = i + 1)
{
    eh = secret[i];                                 // this is jsut to separate 'secret' from any equations to make the maths easier, i just chose 'eh' for some reason. may be unnecassary but im not gonna test that theory
    
    if (eh >= 'A' && eh <= 'Z')                     // this is to say if the input is a capital letter execute the equation below
    {
        if(eh >= 'Z')
        {
            eh = 64;                                // this is in case the letter 'Z' is used to set the value as 64 so when the shift occurs it becomes 65 or 'A'
        }
        eh = eh + shift - 65 + 'A'  ;           // this is theactual letter shift where all the numbers are converted to range from 0-25 with the minus '64', the shift moves the value up one, then adding 'A' to return the value to ASCII letters
        
            secret[i] = eh;                         // this returns the value of 'eh' to secret for printing
    }
        else if(eh >= 'a' && eh <= 'z')             // this heres for lower case letters, otherwise everything else is the same as above
        {
            
               if(eh >= 'z')
               {
                   eh = 96;
               }
               eh = eh + shift - 97 + 'A';
                secret[i] = eh;
        }
    
    
}
        printf("hidden secret: %s", secret);        //this just prints the encoded bit
        return 0;
}



