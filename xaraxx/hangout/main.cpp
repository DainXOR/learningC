#include <iostream>
#include <vector>
#include <string>


int main(){

	const char* starter[80] = {"+----+", "|    |", "     |", "     |", "     |", "     =========", "+----+", "|    |", "0    |", "     |", "     |", "     =========", " +----+", " |    |", " 0    |", " |    |", "      |", "      =========", " +----+", " |    |", " 0    |", "/|    |", "      |", "      =========", " +----+", " |    |", " 0    |", "/|\\   |", "      |", "      =========", " +----+", " |    |", " 0    |", "/|\\   |", " |    |", "      =========", " +----+", " |    |", " 0    |", "/|\\   |", " |    |", "/     |" ,"      =========", " +----+", " |    |", " 0    |", "/|\\   |", " |    |", "/ \\   |" ,"      =========" };

	const char	
	// This will print the memory direction of the string array IMAGES
	// std::cout << IMAGES << "\n";
	
	int starterSize = sizeof(starter) / sizeof(starter[0]);

	std::cout <<"My starter vector size: "<<  starterSize << "\n";	
	for (int i = 0; i < starterSize; i++)
		std::cout << starter[i] << "\n";
	return 0;
}
