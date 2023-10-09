#include <iostream>

#include "MyObject.h"
#include "global.h"

using namespace std;

void* MyObject::operator new(size_t size)
{
	cout << "MyObject::Constructor \n";
	char* pMem = (char*)malloc(size);
	void* pStartMemBlock = pMem;
	return pStartMemBlock;
}

void MyObject::operator delete(void* pMem)
{
	cout << "MyObject::Destructor \n";
	free(pMem);
}
