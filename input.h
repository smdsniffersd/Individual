// input.h
#pragma once
#include <iostream>

namespace input {
    /// <summary>
    /// ‘ункци€, ввода количества тройников, а так же количества разъемов.
    /// </summary>
    /// <param name="NumbersTroniks">—сылка на unsigned int-вою переменную количества тройников</param>
    /// <param name="Troniks">—сылка на int-товый массив количества разъЄмов</param>
    void getInput(unsigned int& NumbersTroniks, int*& Troniks) {
        std::cout << "¬ведите количество тройников: ";
        std::cin >> NumbersTroniks;

        if ((NumbersTroniks < 1) || (NumbersTroniks > 1000)) {
            std::cout << "¬ведено неверное количество тройников. ¬ведите в диапазоне от 1 до 1000" << std::endl;
            exit(0);
        }

        Troniks = new int[NumbersTroniks];

        for (unsigned int i = 0; i < NumbersTroniks; i++) {
            std::cout << "“ройник " << i + 1 << ": ";
            std::cin >> Troniks[i];
            if ((Troniks[i] < 1) || (Troniks[i] > 1000)) {
                std::cout << "¬ведено неверное количество разъЄмов. ¬ведите в диапазоне от 1 до 1000";
                exit(1);
            }
        }
    }

}