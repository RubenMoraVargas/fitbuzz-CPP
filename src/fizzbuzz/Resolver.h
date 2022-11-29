#ifndef RESOLVER_H
#define RESOLVER_H
#include <iostream>
#include <array>
#include <string>
using namespace std;

namespace fizzbuzz {

	class Resolver {
		private:
			std::array<int,100> getFirst100Numbers();
			bool checkIfNumberIsDivisibleByAnother(int number, int another);
			
			void testCheckIfArrayIsDivisibleByNumber(std::array<int,5> array,int number);
			void testCheckIfArrayIsNotDivisibleByNumber(std::array<int,5> array,int number);
		public:
			Resolver(); 
			void getFizzBuzz();
			
			void testGetFirst100Numbers();
			void testCheckIfNumberIsDivisibleByAnother();
			void testGetFizzBuzz();

		protected:

	};

}

#endif
