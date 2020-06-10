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
        }char morecaps = get_char("Would you like to capitalize any other words? y for yes, n for no.\n");
        if(morecaps == 'y'){
            int wordamount = get_int("How many words would you like to capitalize?\n");
            for(int i = 0; i< wordamount; i++){
                int wordnum = get_int("Capitalize word number:\n");
                word[wordnum-1][0] = word[wordnum-1][0]-32;
            }
        }else{}
        char midpunc = get_char("would you like to add semicolons and commas? y is yes, n for no.\n");
        if(midpunc == 'y'){
        char midpunchoice = get_char("would you like a semicolon(s), comma(s), or both? use s for semicolon, c for comma, and b for both.\n");
        if(midpunchoice == 's'){
            int numsemi = get_int("how many semicolons?\n");
            int afnumsemi[numsemi];
            for(int i = 0; i<numsemi; i++){
                afnumsemi[i] = get_int("after word:\n");
        }
        }else if(midpunchoice == 'c'){
           int numcom = get_int("how many commas?\n");
           int afnumcom[numcom];
           for(int i = 0; i<numcom; i++){
               afnumcom[i] = get_int("after word:\n");
           }
        }else if(midpunchoice=='b'){
            int bnumsemi = get_int("how many semicolons?\n");
            int bafnumsemi[bnumsemi];
            for(int i = 0; i<bnumsemi; i++){
                bafnumsemi[i] = get_int("after word:\n");
            }int bnumcom = get_int("how many commas?\n");
            int bafnumcom[bnumcom];
            for(int i = 0; i<bnumcom; i++){
                bafnumcom[i] = get_int("after word:\n");
            }
        }
        }
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
            if(midpunchoice == 'y'){
                for(int i = 0; i<charcount; i++){
                    
                }
            }
        }
        printf("\b\n");
        }
    }else if (startstop == 'n'){
        printf("bye then\n");
    }
}