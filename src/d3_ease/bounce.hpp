#ifndef D3__EASE__BOUNCE_HPP
#define D3__EASE__BOUNCE_HPP

namespace d3_ease {

namespace /*<anonymous>*/ {

constexpr double
    b1 = 4.0 / 11,
    b2 = 6.0 / 11,
    b3 = 8.0 / 11,
    b4 = 3.0 / 4,
    b5 = 9.0 / 11,
    b6 = 10.0 / 11,
    b7 = 15.0 / 16,
    b8 = 21.0 / 22,
    b9 = 63.0 / 64,
    b0 = 1.0 / b1 / b1;

} // namespace <anonymous>

template <typename T>
inline T bounceOut(T t) {
    return t < b1 ? b0 * t * t : t < b3 ? b0 * (t -= b2) * t + b4 : t < b6 ? b0 * (t -= b5) * t + b7 : b0 * (t -= b8) * t + b9;
}

template <typename T>
inline T bounceIn(T t) {
    return 1 - bounceOut(1 - t);
}

template <typename T>
inline T bounceInOut(T t) {
    return ((t *= 2) <= 1 ? 1 - bounceOut(1 - t) : bounceOut(t - 1) + 1) / 2;
}

} // namespace d3_ease

#endif // D3__EASE__BOUNCE_HPP
