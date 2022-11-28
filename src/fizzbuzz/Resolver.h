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

		public:
			Resolver();
			//TODO:Delete this function,Its only created to test getFirst100Numbers()
			std::string printFirst100Numbers();

		protected:

	};

}

#endif
