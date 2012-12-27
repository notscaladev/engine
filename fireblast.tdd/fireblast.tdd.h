// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the FIREBLASTTDD_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// FIREBLASTTDD_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FIREBLASTTDD_EXPORTS
#define FIREBLASTTDD_API __declspec(dllexport)
#else
#define FIREBLASTTDD_API __declspec(dllimport)
#endif

// This class is exported from the fireblast.tdd.dll
class FIREBLASTTDD_API Cfireblasttdd {
public:
	Cfireblasttdd(void);
	double SquareRoot(double v);
	bool isOdd(int number);
};

extern FIREBLASTTDD_API int nfireblasttdd;

FIREBLASTTDD_API int fnfireblasttdd(void);
