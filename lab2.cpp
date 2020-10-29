//#include <chrono>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
//#include <random>
//#include <fstream>

//#include "Student.h"


struct Entry
{
    unsigned int index;
    double value;
};

struct Matrix
{

    std::vector<std::vector<Entry>> data;
    unsigned int rows;
    unsigned int cols;

};

enum PrintType
{
    Full, Sparse
};

//
// 1 1 1
// 1 1 1
// 2 2 2
//
// 2;6
// 0:1, 6:2
// 0:1, 6:2
// 
int main(int argc, char* argv[])
{
    std::vector<std::vector<int>> matrix;

    //create a func that will read the data from file
    Matrix m = readMatrix("file.txt");
    print(m, PrintType::Full);
    print(m, PrintType::Sparse);

    add(m, m);
    substrac(m, m);
    multiply(m, m);

    return 0;
}

