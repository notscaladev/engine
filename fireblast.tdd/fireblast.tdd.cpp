// fireblast.tdd.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "fireblast.tdd.h"


// This is an example of an exported variable
FIREBLASTTDD_API int nfireblasttdd=0;

// This is an example of an exported function.
FIREBLASTTDD_API int fnfireblasttdd(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see fireblast.tdd.h for the class definition
Cfireblasttdd::Cfireblasttdd()
{
	return;
}

double Cfireblasttdd::SquareRoot(double value)
{
	return 0.0;
}
