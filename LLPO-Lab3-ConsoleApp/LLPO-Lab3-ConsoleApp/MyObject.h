#pragma once
class MyObject
{
public:

	void* operator new(size_t size);
	void operator delete(void* pMem);
};

