#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main (void)
{
    char startstop = get_char("hello, this is the haise sentence maker, what can I do for you? press y to start, and n to quit.\n");
    if(startstop == 'y'){
        int charcount = get_int("number of words\n");
        string word[charcount];
        printf("DON'T PRESS YOUR SPACEBAR!!!!\n");
        for(int i = 0; i < charcount; i++){
            word[i] = get_string("Word %d\n", i+1);
        }
        char capital = get_char("would you like to capitalize your sentence? y for yes, n for no.\n");
        if(capital == 'n'){
        }else if (capital == 'y'){
            word[0][0] = word[0][0]-32;
        }char morecaps = get_char("Would you like to capitalize any other words? y for yes, n for no.");
        if(morecaps == 'y'){
            int wordamount = get_int("How many words would you like to capitalize?");
            for(int i = 0; i< wordamount; i++){
                int wordnum = get_int("Capitalize word number:");
                word[wordnum-1][0] = word[wordnum-1][0]-32;
            }
        }else{}
        char punc = get_char("what type of punctuation would you like at the end? e for ! p for . q for ? if you would like to skip this step, press n.\n");
        if(punc != 'n'){
        for(int i = 0; i< charcount; i++){
            printf("%s ", word[i]);
        }
        if(punc == 'e'){
            printf("\b!\n");
        }else if(punc == 'p'){
            printf("\b.\n");
        }else if(punc == 'q'){
            printf("\b?\n");
        }
        }else{
            for(int i = 0; i< charcount; i++){
            printf("%s ", word[i]);
        }
        printf("\b\n");
        }
    }else if (startstop == 'n'){
        printf("bye then\n");
    }
}