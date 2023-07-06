
#include <iostream>
#include<sstream>

const unsigned maxSize = 200;

int parseArray(int array[], std::istringstream & stream) 
{
    int currentNumber;
    int index = 0;

    while (stream >> currentNumber)
    {
        array[index] = currentNumber;

        if (index++ >= maxSize)
            return -1;
    }

    return index;
}

bool areEqual(int arr1[], int arr1size, int arr2[], int arr2size) 
{
    if (arr1size != arr2size)
        return false;

    for (int i = 0; i < arr1size; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }

    return true;
}

int main()
{
    std::string str1, str2;

    getline(std::cin, str1);
    getline(std::cin, str2);

    int arr1[maxSize], arr2[maxSize];

    std::istringstream stream1(str1);
    std::istringstream stream2(str2);

    int arr1size = parseArray(arr1, stream1);
    int arr2size = parseArray(arr2, stream2);

    if (areEqual(arr1, arr1size, arr2, arr2size))
    {
        std::cout << "equal";
    }
    else
    {
        std::cout << "not equal";
    }
}