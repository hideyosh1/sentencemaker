#include <iostream>
#include <vector>
/*NOTE: This program will stop whenever an invalid datatype is given. Type in 8, not eight. Type in 2, not two.*/
//also this thing stops right when it gives the final output which is stupid af. i gotta put a while true at the end.
using namespace std;
void afwhichword();
int main(void) {
	//initializing this first because of c++ stupid local variable shenanigans
	int afnumsemi = 0;
	int afnumcom = 0;
	int bafnumsemi = 0;
	int bafnumcom = 0;
	char startstop;
	//starts and stops program
	cout << "hello, this is the haise sentencemaker, would you like to start?\n";
	cout << "y for yes, n for no.\n";
	cin >> startstop;
	if (startstop == 'y') {
		//specifies number of words
		int numword;
		cout << "number of words: \n";
		cin >> numword;
		cout << "note that only 200 words can be used due to limitations.\n";
		//200 word limit, I don't want this to take up too much memory.
		vector<string>words;
		words.reserve(200);
		char punc;
		cout << "would you like an:\n exclamation mark (e),\n a period (p),\n a question mark (q),\n or would you like to skip this step?(any other key)";
		cin >> punc;
		char midpunc;
		cout << "would you like a:\n semicolon (s),\n a comma, (c),\n or both?(b) any other key: skip this step.";
		cin >> midpunc;
		//these variable names are stupid but whatever, i made a whole function that just couts "after which word", its fine
		//you might ask why i used 4 instead of 2. i just did it cause i'm scared it'll mess up. might try cloning this later.
		if (midpunc == 's') {
			afwhichword();
			cin >> afnumsemi;
		}
		else if (midpunc == 'c') {
			afwhichword();
			cin >> afnumcom;
		}
		else if (midpunc == 'b') {
			cout << "semicolon ";
			afwhichword();
			cin >> bafnumsemi;
			cout << "comma ";
			afwhichword();
			cin >> bafnumcom;
		}//stupid vector doesn't pushback unless i put it in a variable
		for (int i = 0; i < numword; i++) {
			string temp;
			cout << "enter word: \n";
			cin >> temp;
			words.push_back(temp);
		}
		char capital;
		cout << "would you like to capitalize your sentence? yes or no?";
		cin >> capital;
		//a bit of unicode/ascii trickery, doesn't work with numbers bc that's stupid
		if (capital == 'y') {
			words[0][0] = words[0][0] - 32;
		}//bet you didn't know about \b, haha
			for (int i = 0; i < numword; i++) {
				cout << words[i] << " ";
				//too lazy to switch something that's hard to fix.
				if (afnumsemi == i + 1) {
					cout << "\b; ";
				}
				else if (afnumcom == i + 1) {
					cout << "\b, ";
				}
				else if (bafnumsemi == i + 1) {
					cout << "\b; ";
				}
				else if (bafnumcom == i + 1) {
					cout << "\b, ";
				}
			}//doing 4 if statements hurts my feelings. i like switch more.
			switch (punc) {
			case 'e':
				cout << "\b! ";
				break;
			case 'q':
				cout << "\b? ";
				break;
			case 'p':
				cout << "\b. ";
				break;
			}
		
	}//yeah remember what i said about "a whole function that couts 'after which word'"
	//sleep is dumb and i'm too lazy to /k. know this is abstraction leak, but i mean it's not chainable anyway.
	char isuckatwaiting;
	cin >> isuckatwaiting;
}void afwhichword() {
	cout << "after which word?";
}
