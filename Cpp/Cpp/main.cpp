#include <iostream>
#include "rand.h"

using namespace std;

int main() {

	int i = 0;

	while (i++ < 100)
		cout << rand(-1000, 1000) << endl;

	return 0;
}