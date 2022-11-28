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

void Resolver::testGetFirst100Numbers() {
	std::array<int,100> array= getFirst100Numbers();

	std::string result=std::to_string(array[0]);
	int lenghtOfArray = end(array)-begin(array);

	for (int i=1; i<lenghtOfArray; i++) {
		result = result+","+std::to_string(array[i]);
	}
	std::string resultExpected="1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100";
	bool isWorkAsExpected = result== resultExpected;

	std::cout << "--------------------------------------\n";
	if(isWorkAsExpected) {
		std::cout << "getFirst100Numbers() work as expected.\n";
	} else {
		std::cout << "getFirst100Numbers() failed, please check the result.\n";
	}
	std::cout << "Result of function getFirst100Numbers():\n";
	std::cout << result+ "\n";
}

bool Resolver::checkIfNumberIsDivisibleBy3(int number) {
	bool isDivisible= ((number % 3)==0 );
	return isDivisible;
}

void Resolver::testCheckIfNumberIsDivisibleBy3() {
	std::array<int,10> numbersDivisibleBy3= {0,3,6,9,15,30,60,66,81,90};
	std::array<int,10> numbersUndivisibleBy3= {1,2,4,5,7,10,20,31,34,50};

	int lenghtOfDivisibleArray=
	    end(numbersDivisibleBy3)-begin(numbersDivisibleBy3);
	int lenghtOfUndivisibleArray=
	    end(numbersUndivisibleBy3)-begin(numbersUndivisibleBy3);

	std::cout << "--------------------------------------\n";

	for (int i=1; i<lenghtOfDivisibleArray; i++) {
		if(!checkIfNumberIsDivisibleBy3(numbersDivisibleBy3[i])) {
			std::cout << "numbersDivisibleBy3() with number"+
			          std::to_string(numbersDivisibleBy3[i])+ " failed.\n";
			return;
		}
	}
	for (int i=1; i<lenghtOfUndivisibleArray; i++) {
		if(checkIfNumberIsDivisibleBy3(numbersUndivisibleBy3[i])) {
			std::cout << "numbersDivisibleBy3() with number"+
			          std::to_string(numbersUndivisibleBy3[i])+ " failed.\n";
			return;
		}
	}
	std::cout << "numbersDivisibleBy3() work as expected.\n";
}