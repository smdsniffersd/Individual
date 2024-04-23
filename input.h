// input.h
#pragma once
#include <iostream>

namespace input {
    /// <summary>
    /// �������, ����� ���������� ���������, � ��� �� ���������� ��������.
    /// </summary>
    /// <param name="NumbersTroniks">������ �� unsigned int-��� ���������� ���������� ���������</param>
    /// <param name="Troniks">������ �� int-����� ������ ���������� ��������</param>
    void getInput(unsigned int& NumbersTroniks, int*& Troniks) {
        std::cout << "������� ���������� ���������: ";
        std::cin >> NumbersTroniks;

        if ((NumbersTroniks < 1) || (NumbersTroniks > 1000)) {
            std::cout << "������� �������� ���������� ���������. ������� � ��������� �� 1 �� 1000" << std::endl;
            exit(0);
        }

        Troniks = new int[NumbersTroniks];

        for (unsigned int i = 0; i < NumbersTroniks; i++) {
            std::cout << "������� " << i + 1 << ": ";
            std::cin >> Troniks[i];
            if ((Troniks[i] < 1) || (Troniks[i] > 1000)) {
                std::cout << "������� �������� ���������� ��������. ������� � ��������� �� 1 �� 1000";
                exit(1);
            }
        }
    }

}