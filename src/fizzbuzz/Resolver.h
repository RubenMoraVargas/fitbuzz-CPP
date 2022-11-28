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
			bool checkIfNumberIsDivisibleBy3(int number);

		public:
			Resolver();
			//TODO:Delete this functions,Its only to test
			void testGetFirst100Numbers();
			void testCheckIfNumberIsDivisibleBy3();

		protected:

	};

}

#endif
