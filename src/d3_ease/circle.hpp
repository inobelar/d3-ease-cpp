#ifndef D3__EASE__CIRCLE_HPP
#define D3__EASE__CIRCLE_HPP

#include <cmath> // for std::sqrt()

namespace d3_ease {

template <typename T>
inline T circleIn(T t) {
    return 1 - std::sqrt(1 - t * t);
}

template <typename T>
inline T circleOut(T t) {
    return std::sqrt(1 - --t * t);
}

template <typename T>
inline T circleInOut(T t) {
    return ((t *= 2) <= 1 ? 1 - std::sqrt(1 - t * t) : std::sqrt(1 - (t -= 2) * t) + 1) / 2;
}

} // namespace d3_ease

#endif // D3__EASE__CIRCLE_HPP
