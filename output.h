// output.h
#pragma once
#include <iostream>

namespace output {
    /// <summary>
    /// ����� �������� ������ ������������
    /// </summary>
    /// <param name="NumberTea � ������������ ���������� ��������."></param>
    void output_data(int NumberTea) {
        std::cout << "������������ ���������� ��������, ������� ����� ������������: " << NumberTea;
    }
}