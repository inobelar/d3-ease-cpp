#ifndef D3__EASE__EXP_HPP
#define D3__EASE__EXP_HPP

#include <cmath> // for std::pow()

namespace d3_ease {

template <typename T>
inline T expIn(T t) {
    return std::pow(2, 10 * t - 10);
}

template <typename T>
inline T expOut(T t) {
    return 1 - std::pow(2, -10 * t);
}

template <typename T>
inline T expInOut(T t) {
    return ((t *= 2) <= 1 ? std::pow(2, 10 * t - 10) : 2 - std::pow(2, 10 - 10 * t)) / 2;
}

} // namespace d3_ease

#endif // D3__EASE__EXP_HPP
