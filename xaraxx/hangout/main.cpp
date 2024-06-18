#include <iostream>
#include <vector>
#include <string>


// Questions for Dani: 
// 1- There is any way to declare global variables in C++?


	const char* starter[80] = {"+----+", "|    |", "     |", "     |", "     |", "     =========", "+----+", "|    |", "0    |", "     |", "     |", "     =========", " +----+", " |    |", " 0    |", " |    |", "      |", "      =========", " +----+", " |    |", " 0    |", "/|    |", "      |", "      =========", " +----+", " |    |", " 0    |", "/|\\   |", "      |", "      =========", " +----+", " |    |", " 0    |", "/|\\   |", " |    |", "      =========", " +----+", " |    |", " 0    |", "/|\\   |", " |    |", "/     |" ,"      =========", " +----+", " |    |", " 0    |", "/|\\   |", " |    |", "/ \\   |" ,"      =========" };


	const char* WORDS[12] = {"LAVADORA", "SECADORA", "COCINA", "MEDICINA", "HIPOTÁLAMO", "HIPNOSIS", "PAREIDOLEO", "SINAPSIS", "NEUROSIS", "HISTORIA", "HISTERIA"};	


	int starterSize = sizeof(starter) / sizeof(starter[0]);
	
	int wordsSize = sizeof(WORDS) / sizeof(WORDS[0]);

std::string randomWord(){
	// Find a library to pick up an integer random number
	// define the variable idx
	int idx = 1;
	return WORDS[idx];
}

void displayBoard(std::string hiddenWord, int tries){
	std::cout << starter[tries] << "\n";
	std::cout << "" << "\n";
	std::cout << hiddenWord << "\n";
	std::cout << "--- * --- * --- * --- * --- * "<< "\n";
}

void run(){
	std::string word = randomWord();
	int stringLen = word.length();
	std::string buildHiddenWord(stringLen, '-');
	const char* hiddenWord = buildHiddenWord.c_str();
	int tries = 0;
	char currentLetter;	
	std::cout <<"The random word is "<<  word << "\n";
	
	while (true){
	
		void displayBoard(std::string hiddenWord, int tries);
		std::cin >> currentLetter;
	        std::cout << "Escoja una letra: " << currentLetter << "\n";
		
		// create a variable letter_indexes which is a vector
		for (int i = 0; i <= stringLen; i++){
			if (word[i] == currentLetter){
				// apend i in letterIndexes
			}
		} 

		// define a variable lenLetterIndexes
		int lenLetterIndexes;
		if (lenLetterIndexes == 0){
			tries++;
			if (tries == 7){
				displayBoard(hiddenWord, tries);
				std::cout << "";
				// include the word 
				std::cout << "Perdiste la palabra correcta era "
				break
			}
		} else {
			//Translate the code when the player wins!! in this part.
		}

	}

}

int main(){
	
	
	// This will print the memory direction of the string array IMAGES
	// std::cout << IMAGES << "\n";
	

//	std::cout <<"My starter vector size: "<<  starterSize << "\n";	
//	std::cout <<"My words vector size: "<<  wordsSize << "\n";	
	
	std::cout <<"B I E N V E N I D O S  A L  A H O R C A D O "<< "\n";	
	
	run();

	for (int i = 0; i < starterSize; i++)
		std::cout << starter[i] << "\n";
	return 0;
}
