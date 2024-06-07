#include <iostream>
#include <vector>
#include <cstdint>

//struct types{
//	int my_int
//};

int main(){
	std::vector<int> arr(10);
	// esto es un desbordamiento de memoria
	std::cout << (arr[13] = 1) <<"\n";
	std::cout << arr.size() <<"\n";

	return 0;
}
