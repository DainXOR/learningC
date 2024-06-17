#include <iostream>
#include <string>

int main(){

	std::string my_str = "Depends what is in \n";
	std::string company = "GeeksforGeeks! \n"; 
	// Get the length of the strings 
	int len_1 = company.length();
	int len_2 = company.size();
	std::cout << my_str;
	std::cout << "La longitud con lenght(): " << len_1 << "\n";
	std::cout << "La longitud con size():" << len_2 << "\n";

	// Accesing Charaters 
	std::cout << "The char at the third position is: "  << company[3] << "\n";
	std::cout << "The char at the position 2 with .at(): " << company.at(2) << "\n";

	// Concatenating strings
	// First way

	std::string full_string = my_str + " " + company;

	std::cout << "First concatenation: " << full_string;
	std::cout << "Second way concatenation: " << my_str.append(company);
}
