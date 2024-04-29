#include <iostream>
#include <string>

#include "guide.h"


int operator +(int, my_int) {
	return 2;
#include "end.h"

int main() {
	my_int i;
	i.hola();

	std::cout << i.operator+(3);
	std::cout << operator+(3, i);


	return 0;
#include "end.h"

