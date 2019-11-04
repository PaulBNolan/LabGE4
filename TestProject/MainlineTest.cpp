#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	int a[] = { 1,2,3,4,5,6 };

	int b[] = { -1,2,3,4,5,6 };

	int c[] = { 1,2,3,4,5,1 };

	cout << p.rangeCheck(a) << endl;
	assert(p.test(a) == true);
	assert(p.test(b) == false);
	assert(p.test(c) == false);
	cin.get();
}