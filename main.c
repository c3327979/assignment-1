/* Main function of the C program. */
// note that there is no substitution cipher included here, this is because i couldnt make any sense of what i find online and couldnt make one without straight copy pasting
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *Ceaser();
char *CeaserKey();



int main()
{
    int Choice;
    printf("Choose a Function by selecting a number\n");
    printf("1. Rotational Cipher\n");
    printf("2. Substitution Cipher\n");
    printf("3. Decrypt Rotational Cipher\n");
    printf("4. Decrypt Substituion Cipher\n");
    scanf("%d", &Choice);
    if( Choice == 1)
   {
       printf("Encrypted message is: %s", Ceaser());
   }
        else if( Choice == 2)
        {
           printf("Encrypted message is: 2");
        }
        else if( Choice == 3)
        {
             CeaserKey();
        }
        else if( Choice == 4)
        {
            printf("Decrypted message is: 2");
        }
        else
        {
            printf("User Error, Cannot folow isntructions, please re-run code and try again");
        }
 return 0;
}

char *Ceaser()
{
    
    char word[100];                                         // Previouslty thought that the nu,ber between [] was the range of numbers it can store rather than the amount which makes a lot more sense so i brought it down to an even 100
    int key;                                                // I've changed the 'shift' to 'key' since most on line versions use key and will make it easier to follow plus the assessment seems to want me to use key aswell
    int i = 0;
    printf(" Enter a phrase:\n");
    scanf("[^\n]", &word);                                  //[^\n] should just let spcaes work for scanf dont ask how or why google said so
    printf(" Enter a key between 0 and 26: ");
    scanf("%d", &key);                                      // Gets didnt work for some reason but scanf did so woo
    
     for(i = 0; i < strlen(word); i = i + 1)                // This jsut cuts off the function if theres more than 100 characters in 'word'
     {
        if(word[i] >= 'a' && word[i] <= 'z')    
            {
             word[i] = word[i] - 32;                        // Converts all user inputs to capitals like brenton wanted
            }
     }
     
     printf("Input in upper case is: \%s", word);          
     for (i=0;word[i] !='\0';i++){
         word[i] = word[i] + key;
     }
       for(i = 0; i < strlen(word); i = i + 1)
     {
        if(word[i] >= 'a' && word[i] <= 'z')                                   //this is repeated incase of a key larger than 26
            {
             word[i] = word[i] - 26;
            }
     
    
     }
   
    return word;

}

char *CeaserKey()
{
    char word[100];                                         
    int key = 1;                                                
    int i = 0;
    int b = 0;

    printf("enter a phrase to decrypt: ");
    scanf("[^\n]", &word);
    
    
    for (i = 0; i < strlen(word); i = i + 1)   //I moved the part that converts the input to capitals outside of the loop as it only needs to happen once at the beginning
            {
             word[i] = word[i] - 32;                        
            }
         
    printf("string in upper case is: %s\n", word);
    
    while(key < 27)             // I decided to go with  a 'brute force' attack thus this while loop which will continue the loop till all values for 'key' is tested
    {                               // This will test all shifts up to 26 which is all possible values anyway so type whatever code in and one of em will be right
                          // this is pretty much the same after this point
    
     
               
        for (i = 0; i < strlen(word); i = i + 1)
        {
            word[i] = word[i] + 1;
     
             if(word[i] >= 'a' && word[i] <= 'z')                                   
            {
             word[i] = word[i] - 26;
            }
        }
      
        
     
     
        printf("%d. Decoded message is: %s\n", key, word);
        key++ ;
    }   
    
    return 0;
}



