// main.cpp
#include "input.h"
#include "calc.h"
#include "output.h"

using namespace input;
using namespace calculate;
using namespace output;
/// <summary>
/// ������� �������, ����������� ���������� � ���������� �������� �������
/// </summary>
int main() {
    setlocale(LC_ALL, "RU");
    unsigned int NumbersTroniks;
    int* Troniks;

    getInput(NumbersTroniks, Troniks);
    int NumberTea = calculateMaxTeapots(NumbersTroniks, Troniks);
    output_data(NumberTea);

    delete[] Troniks; 

    return 0;
}