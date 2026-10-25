#ifndef MATH_UTILS_HPP
#define MATH_UTILS_HPP

#include <expected>
#include <string>

namespace Core {
    // Función C++23 que usa std::expected para manejo seguro de errores sin excepciones
    enum class MathError { DivisionByZero };

    std::expected<double, MathError> safe_divide(double numerator, double denominator);
}

#endif // MATH_UTILS_HPP
