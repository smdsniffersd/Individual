// output.h
#pragma once
#include <iostream>

namespace output {
    /// <summary>
    /// Вывод конечных данных пользователю
    /// </summary>
    /// <param name="NumberTea — максимальное количество чайников."></param>
    void output_data(int NumberTea) {
        std::cout << "Максимальное количество чайников, которые можно использовать: " << NumberTea;
    }
}