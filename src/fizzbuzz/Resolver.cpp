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
		std::cout << "Result of function getFirst100Numbers():\n";
		std::cout << result+ "\n";
	}
}

bool Resolver::checkIfNumberIsDivisibleByAnother(int number, int another) {
	if (another<=0) {
		return false;
	}
	bool isDivisible= ((number % another)==0 );
	return isDivisible;
}

void Resolver::testCheckIfNumberIsDivisibleByAnother() {
	std::array<int,5> numbersDivisibleBy2= {0,2,4,6,10};
	std::array<int,5> numbersDivisibleBy3= {0,3,6,15,81};
	std::array<int,5> numbersDivisibleBy5= {0,5,10,50,100};
	std::array<int,5> numbersDivisibleBy7= {0,7,21,35,70};

	std::array<int,5> numbersNotDivisibleBy2= {1,3,9,15,99};
	std::array<int,5> numbersNotDivisibleBy3= {1,2,10,20,100};
	std::array<int,5> numbersNotDivisibleBy5= {1,6,14,49,97};
	std::array<int,5> numbersNotDivisibleBy7= {1,48,60,80,100};

	std::cout << "--------------------------------------\n";
	testCheckIfArrayIsDivisibleByNumber(numbersDivisibleBy2,2);
	testCheckIfArrayIsDivisibleByNumber(numbersDivisibleBy3,3);
	testCheckIfArrayIsDivisibleByNumber(numbersDivisibleBy5,5);
	testCheckIfArrayIsDivisibleByNumber(numbersDivisibleBy7,7);

	testCheckIfArrayIsNotDivisibleByNumber(numbersNotDivisibleBy2,2);
	testCheckIfArrayIsNotDivisibleByNumber(numbersNotDivisibleBy3,3);
	testCheckIfArrayIsNotDivisibleByNumber(numbersNotDivisibleBy5,5);
	testCheckIfArrayIsNotDivisibleByNumber(numbersNotDivisibleBy7,7);

	std::cout << "checkIfNumberIsDivisibleByAnother() work as expected.\n";
}

void Resolver::testCheckIfArrayIsDivisibleByNumber(std::array<int,5> anArray, int number) {
	int lenghtOfArray = end(anArray)-begin(anArray);
	for (int i=0; i<lenghtOfArray; i++) {
		if(!checkIfNumberIsDivisibleByAnother(anArray[i], number)) {
			std::cout << "checkIfNumberIsDivisibleByAnother() with number="+
			          std::to_string(anArray[i])+ " another="+
			          std::to_string(number)+
			          " failed.\n";
			return;
		}
	}
}

void Resolver::testCheckIfArrayIsNotDivisibleByNumber(std::array<int,5> anArray, int number) {
	int lenghtOfArray = end(anArray)-begin(anArray);
	for (int i=1; i<lenghtOfArray; i++) {
		if(checkIfNumberIsDivisibleByAnother(anArray[i], number)) {
			std::cout << "checkIfNumberIsNotDivisibleByAnother() with number="+
			          std::to_string(anArray[i])+ " another="+
			          std::to_string(number)+
			          " failed.\n";
			return;
		}
	}
}

void Resolver::getFizzBuzz() {
	std::array<int,100> anArray= getFirst100Numbers();

	int lenghtOfArray = end(anArray)-begin(anArray);

	std::string result=std::to_string(anArray[0]);
	for (int i=1; i<lenghtOfArray; i++) {
		std::string word= getWordByNumber(anArray[i]);
		result = result +", " + word;

	}
	std::cout << result << "\n";
}

void Resolver::testGetFizzBuzz() {
	std::cout << "----------Fizz Result-----------------\n";
	getFizzBuzz();
	std::cout << "--------------------------------------\n";
}
std::string Resolver::getWordByNumber(int number) {
	std::array<int,2> replacerDivisors= {3,5};
	std::array<std::string,2> replacerWords= {"Fizz","Buzz"};

	std::string replaceWord="";
	int lenghtOfReplacers = end(replacerDivisors)-begin(replacerDivisors);

	for (int j=0; j<lenghtOfReplacers; j++) {
		if(checkIfNumberIsDivisibleByAnother(number, replacerDivisors[j])) {
			replaceWord=replaceWord+replacerWords[j];
		}
	}
	
	if(replaceWord=="") {
		return std::to_string(number);
	} else {
		return replaceWord;
	}
}
