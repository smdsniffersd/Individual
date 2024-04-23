// calc.h
#include "calc.h"

namespace calculate {
    /// <summary>
    /// ������� ���������� ���������� ������ ��������� � ���������.
    /// </summary>
    /// <param name="NumbersTroniks"> � unsigned int-��� ���������� ���������� ���������.</param>
    /// <param name="Troniks"> � ������������� ������ ���������� ��������.</param>
    /// <returns>int-��� �������� ���������� ������ ��������.</returns>
    int calculateMaxTeapots(int NumbersTroniks, int* Troniks) {
        int NumberTea = 0;
        for (int i = 0; i < NumbersTroniks; i++) {
            NumberTea += Troniks[i];
        }
        return NumberTea - (NumbersTroniks - 1);
    }
}