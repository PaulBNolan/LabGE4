#include "Production.h"
#include <iostream>
#include <assert.h>

void arrayInput();
void arrayTest();

Production p;
bool windowOpen = true;
bool arrayComplete = true;
int arrayIndex = 0;

int a[] = { 1,2,3,4,5,6 };

int b[] = { -1,2,3,4,5,6 };

int c[] = { 1,2,3,4,5,1 };

int d[6] = {};

int main()
{

	p.test(a);
	p.test(b);
	p.test(c);

	while (windowOpen == true)
	{
		if (d[5] == NULL)
		{
			arrayInput();
		}
		else
		{
			arrayTest();
		}
	}
	return 0;
}


void arrayInput()
{
	std::cin >> d[arrayIndex];
	system("cls");
	arrayIndex++;
	std::cout << "Array:";
	for (int i = 0; i < 6; i++)
	{
		if (d[i] != NULL)
		{
			std::cout << " " << d[i];
		}
	}
	std::cout << "" << std::endl;
}

void arrayTest()
{
	if (p.test(d) == true)
	{
		std::cout << "This array passed the tests" << std::endl;
	}
	else
	{
		if (p.rangeCheck(d) == false)
		{
			std::cout << "This array contained numbers outside the given range" << std::endl;
		}
		if (p.repeatCheck(d) == false)
		{
			std::cout << "This array contained repeated numbers" << std::endl;
		}
	}
	assert(p.test(d));

	for (int i = 0; i < 6; i++)
	{
		d[i] = NULL;
	}
	arrayIndex = 0;
}