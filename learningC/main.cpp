#include <iostream>
#include <vector>
#include <array>
#include <unordered_map>

#include "guide.h"
#include "bottle.hpp"


int operator +(int, my_int) {
	return 2;
}

class hola {
	std::string name;
	int i = 0;

	hola() {
		std::cout << "hola" << std::endl;
		name = "aaaaaaa";
	}

public:
	std::string getName() const {
		return name;
	}
};

// define a hash function for the class hola
namespace std {
	template<>
	struct hash<hola> {
		std::size_t operator()(const hola& h) const {
			return std::hash<std::string>()(h.getName());
		}
	};
}

struct cilinder {
	float radius;
	float height;

	constexpr float getVolume() const {
		return 3.1416f * radius * radius * height;
	}
};


int main() {

	my_int i;
	i.hola();

	std::cout << i.operator+(3);
	std::cout << operator+(3, i);
	std::array arr = { 0,1,2,3,4,5,65 };
	std::vector<my_int> v1 = { my_int(), my_int(), my_int() };
	int v[] = {1, 2, 3, 4, 5};

	
	for (auto valor : v)
		std::cout << valor << std::endl;

	constexpr cilinder sp{ 0, 0 };

	bottle<sp> b;
	bottle<cilinder{12, 2}> c;

}