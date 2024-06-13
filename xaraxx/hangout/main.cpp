#include <iostream>
#include <vector>
#include <string>

// Questions for Dani: 
// 1- There is any way to declare global variables in C++?

std::string randomWord(std::string word, int size){
	// Find a library to pick up an integer random number
	// define the variable idx
	return word[idx];
}

int main(){

	const char* starter[80] = {"+----+", "|    |", "     |", "     |", "     |", "     =========", "+----+", "|    |", "0    |", "     |", "     |", "     =========", " +----+", " |    |", " 0    |", " |    |", "      |", "      =========", " +----+", " |    |", " 0    |", "/|    |", "      |", "      =========", " +----+", " |    |", " 0    |", "/|\\   |", "      |", "      =========", " +----+", " |    |", " 0    |", "/|\\   |", " |    |", "      =========", " +----+", " |    |", " 0    |", "/|\\   |", " |    |", "/     |" ,"      =========", " +----+", " |    |", " 0    |", "/|\\   |", " |    |", "/ \\   |" ,"      =========" };

	const char* WORDS[12] = {"LAVADORA", "SECADORA", "COCINA", "MEDICINA", "HIPOTÁLAMO", "HIPNOSIS", "PAREIDOLEO", "SINAPSIS", "NEUROSIS", "HISTORIA", "HISTERIA"};	
	
	// This will print the memory direction of the string array IMAGES
	// std::cout << IMAGES << "\n";
	
	int starterSize = sizeof(starter) / sizeof(starter[0]);
	int wordsSize = sizeof(WORDS) / sizeof(WORDS[0]);

	std::cout <<"My starter vector size: "<<  starterSize << "\n";	
	std::cout <<"My words vector size: "<<  wordsSize << "\n";	
	
	for (int i = 0; i < starterSize; i++)
		std::cout << starter[i] << "\n";
	return 0;
}
