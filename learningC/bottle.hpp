#pragma once
#include <iostream>
#include <string>

template<auto shape>
class bottle {
public:

	bottle() {
	}
	bottle(int s) {}

	float getVolume() const {
		return shape.getVolume();
	}


};

