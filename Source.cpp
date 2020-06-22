#include <iostream>
#include <cmath>
#include <vector>

int main(void) {
	char startstop;
	std::cout << "hello, this is the haise sentencemaker, would you like to start?\n";
	std::cout << "y for yes, n for no.\n";
	std::cin >> startstop;
	if (startstop == 'y') {
		int numword;
		std::cout << "number of words: \n";
		std::cin >> numword;
		std::cout << "note that only 200 words can be used due to limitations.\n";
		std::vector<std::string>words;
		words.reserve(200);
		char punc;
		std::cout << "would you like an:\n exclamation mark (e),\n a period (p),\n a question mark (q),\n or would you like to skip this step?(any other key)";
		std::cin >> punc;
		for (int i = 0; i < numword; i++) {
			std::string temp;
			std::cout << "enter word: \n";
			std::cin >> temp;
			words.push_back(temp);

		}for (int i = 0; i < numword; i++) {
			std::cout << words[i] << " ";
		}
		if (punc == 'e') {
			std::cout << "\b!\n";
		}
		else if (punc == 'q') {
			std::cout << "\b?\n";
		}
		else if (punc == 'p') {
			std::cout << "\b.\n";
		}
		else {
			std::cout << "\b";
		}
		
	}
	return 0;
}
