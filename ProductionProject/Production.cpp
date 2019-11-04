#include "Production.h"

bool Production::test(int a[])
{
	if (rangeCheck(a) == true && repeatCheck(a) == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Production::rangeCheck(int a[])
{
	for (int i = 0; i < 6; i++)
	{
		if (a[i] < 0 || a[i] > 42)
		{
			return false;
		}
	}
	return true;
}

bool Production::repeatCheck(int a[])
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (a[i] == a[j] && i != j)
			{
				return false;
			}
		}
	}

	return true;
}