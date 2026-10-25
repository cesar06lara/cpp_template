#include "math_utils.hpp"

namespace Core {
    std::expected<double, MathError> safe_divide(double numerator, double denominator) {
        if (denominator == 0.0) {
            return std::unexpected(MathError::DivisionByZero);
        }
        return numerator / denominator;
    }
}
