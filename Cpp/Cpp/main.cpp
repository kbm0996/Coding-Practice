#include <iostream>
#include "rand.h"

using namespace std;

int main() {

	int i = 0;

	while (i++ < 100)
		cout << mylib::rand(-1000.0, 1000.0) << endl;

	return 0;
}