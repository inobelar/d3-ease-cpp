#ifndef D3__EASE__QUAD_HPP
#define D3__EASE__QUAD_HPP

namespace d3_ease {

template <typename T>
inline T quadIn(T t) {
    return t * t;
}

template <typename T>
inline T quadOut(T t) {
    return t * (2 - t);
}

template <typename T>
inline T quadInOut(T t) {
    return ((t *= 2) <= 1 ? t * t : --t * (2 - t) + 1) / 2;
}

} // namespace d3_ease

#endif // D3__EASE__QUAD_HPP
