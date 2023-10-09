#include <iostream>

#include "MyObject.h"
#include "global.h"

int i = 7;

int main()
{
    //std::cout << "The number is " << i << std::endl;

    int* newArr = new int[10];

    delete[] newArr;

    int* i = new int(1);

    delete i;

    //int* mallocArr = (int*)malloc(10 * sizeof(int));

    //free(mallocArr);

    MyObject* obj = new MyObject;

    delete obj;

    return 0;
}
