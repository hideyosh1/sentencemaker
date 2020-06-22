#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
void afwhichword();
int main(void) {
	int afnumsemi = 0;
	int afnumcom = 0;
	int bafnumsemi = 0;
	int bafnumcom = 0;
	char startstop;
	cout << "hello, this is the haise sentencemaker, would you like to start?\n";
	cout << "y for yes, n for no.\n";
	cin >> startstop;
	if (startstop == 'y') {
		int numword;
		cout << "number of words: \n";
		cin >> numword;
		cout << "note that only 200 words can be used due to limitations.\n";
		vector<string>words;
		words.reserve(200);
		char punc;
		cout << "would you like an:\n exclamation mark (e),\n a period (p),\n a question mark (q),\n or would you like to skip this step?(any other key)";
		cin >> punc;
		char midpunc;
		cout << "would you like a:\n semicolon (s),\n a comma, (c),\n or both?(b) any other key: skip this step.";
		cin >> midpunc;
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
		}
		for (int i = 0; i < numword; i++) {
			string temp;
			cout << "enter word: \n";
			cin >> temp;
			words.push_back(temp);
		}
		char capital;
		cout << "would you like to capitalize your sentence? yes or no?";
		cin >> capital;
		if (capital == 'y') {
			words[0][0] = words[0][0] - 32;
		}
		for (int i = 0; i < numword; i++) {
			cout << words[i] << " ";
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
		}
		if (punc == 'e') {
			cout << "\b!\n";
		}
		else if (punc == 'q') {
			cout << "\b?\n";
		}
		else if (punc == 'p') {
			cout << "\b.\n";
		}
		else {
			cout << "\b";
		}
	}
}void afwhichword() {
	cout << "after which word?";
}
