/*
Problem Statement 
Complete the function dataTypeSize() which takes a string as input and returns the size of the data type represented by the given string in byte unit.
Return -1 if the input data type is invalid.
*/

#include <iostream>
using namespace std;
// function declaration
int dataTypeSize(string str)
{
    if(str == "Character")
    {
        return sizeof(char);
    }
    else if(str == "Integer")
    {
        return sizeof(int);
    }
    else if(str == "Float")
    {
        return sizeof(float);
    }
    else if(str == "Long")
    {
        return sizeof(long);
    }
    else if(str == "Double")
    {
        return sizeof(double);
    }
    else
    {
        return -1;
    }       
};

