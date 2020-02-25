#ifndef D3__EASE__SIN_HPP
#define D3__EASE__SIN_HPP

#include <cmath> // for M_PI, std::cos(), std::sin()

namespace d3_ease {

namespace /*<anonymous>*/ {

constexpr double
    pi = M_PI,
    halfPi = pi / 2;

} // namespace <anonymous>

template <typename T>
inline T sinIn(T t) {
    return 1 - std::cos(t * halfPi);
}

template <typename T>
inline T sinOut(T t) {
    return std::sin(t * halfPi);
}

template <typename T>
inline T sinInOut(T t) {
    return (1 - std::cos(pi * t)) / 2;
}

} // namespace d3_ease

#endif // D3__EASE__SIN_HPP
