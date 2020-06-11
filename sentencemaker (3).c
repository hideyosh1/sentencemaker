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
        int semitrue[charcount];
        int commatrue[charcount];
        int semitrueb[charcount];
        int commatrueb[charcount];
        char midpunc = get_char("would you like semicolons (s), commas (c), both (b), or would you like to skip this step(n)?\n");
        if(midpunc == 's'){
            for(int i = 0; i<charcount; i++){
                semitrue[i] = get_int("type in 1 if you want a semicolon on word %d. otherwise, type 0.\n", i+1);
            }
        }else if(midpunc == 'c'){
            for(int i =0; i<charcount; i++){
                commatrue[i] = get_int("type in 1 if you want a comma on word %d. otherwise, type 0.\n", i+1);
            }
        }else if(midpunc =='b'){
            for(int i = 0; i<charcount; i++){
                semitrueb[i] = get_int("type in 1 if you want a semicolon on word %d. otherwisem type 0.\n", i+1);
            }for(int i = 0; i<charcount; i++){
                commatrueb[i] = get_int("type in 1 if you want a comma on word %d. otherwise, type 0.\n", i+1);
            }
        }else if(midpunc == 'n'){
                printf("ok then\n");
            }else{
                printf("aight, I'm just going to assume you said n.");
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
            if(semitrue[i] == 1){
                printf("; ");
            }else if(commatrue[i+1] == 1){
                printf(", ");
            }else if(semitrueb[i+1] == 1){
                printf("; ");
            }else if(commatrueb[i+1] == 1){
                printf(", ");
            }
        }
        printf("\b\n");
        }
    }else if (startstop == 'n'){
        printf("bye then\n");
    }
}