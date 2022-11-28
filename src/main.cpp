#include <iostream>
#include "fizzbuzz/Resolver.h"

#define EXIT_SUCCESS 0
using namespace fizzbuzz;

int main(int argc, char** argv) {
	Resolver* resolver = new Resolver();

	resolver->testGetFirst100Numbers();
	resolver->testCheckIfNumberIsDivisibleBy3();
	resolver->testCheckIfNumberIsDivisibleBy5();

	return EXIT_SUCCESS;
}

