#include "main.h"

/**
 * function that prints 10 times the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{       
        int number=0;
        char alphabet;
        
        while (number < 10 )
        {       
                for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
                {
                        _putchar (alphabet);
                }       
                _putchar('/n');
                number++;
        }             
}
