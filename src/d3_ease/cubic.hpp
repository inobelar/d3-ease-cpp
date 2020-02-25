#ifndef D3__EASE__CUBIC_HPP
#define D3__EASE__CUBIC_HPP

namespace d3_ease {

template <typename T>
inline T cubicIn(T t) {
    return t * t * t;
}

template <typename T>
inline T cubicOut(T t) {
    return --t * t * t + 1;
}

template <typename T>
inline T cubicInOut(T t) {
    return ((t *= 2) <= 1 ? t * t * t : (t -= 2) * t * t + 2) / 2;
}

} // namespace d3_ease

#endif // D3__EASE__CUBIC_HPP
