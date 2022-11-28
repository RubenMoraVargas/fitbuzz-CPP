#include <iostream>
#include <array>
#include <string>
#include "Resolver.h"

using namespace fizzbuzz;

Resolver::Resolver() {
}

std::array<int,100> Resolver::getFirst100Numbers() {
	std::array<int,100> first100Numbers;
	for(int i=0; i<100; i++) {
		first100Numbers[i]=i+1;
	}
	return first100Numbers;
}

std::string Resolver::printFirst100Numbers() {
	std::array<int,100> array= getFirst100Numbers();

	std::string result=std::to_string(array[0]);
	int lenghtOfArray = end(array)-begin(array);

	for (int i=1; i<lenghtOfArray; i++) {
		result = result+","+std::to_string(array[i]);
	}

	std::cout << result;
}

