#ifndef D3__EASE__POLY_HPP
#define D3__EASE__POLY_HPP

#include <cmath> // for std::pow()

namespace d3_ease {

namespace detail {

constexpr double exponent = 3;

} // namespace detail

// NOTE: based on https://github.com/DefinitelyTyped/DefinitelyTyped/blob/master/types/d3-ease/index.d.ts#L78

template <typename T, typename BaseT>
class PolynomialEasingFactory {
public:
    /**
     * Calculate eased time.
     * @param normalizedTime Normalized time typically in the range [0, 1]
     */
    virtual T operator () (T normalizedTime) const = 0;

    /**
     * Returns a new polynomial easing with the specified exponent e.
     * If the exponent is not specified, it defaults to 3, equivalent to cubic.
     *
     * @param e Exponent for polynomial easing.
     */
    static BaseT exponent(T e) {
        return BaseT(e);
    };
};

template <typename T>
class polyIn : public PolynomialEasingFactory<T, polyIn<T>>
{
    friend PolynomialEasingFactory<T, polyIn<T>>; // To give access to private c-tor (called in exponent())

    T e;

    polyIn(T e_)
        : e(e_)
    {}

public:

    polyIn()
        : polyIn(detail::exponent)
    {}

    T operator () (T t) const override {
         return std::pow(t, e);
    }
};

template <typename T>
class polyOut : public PolynomialEasingFactory<T, polyOut<T>>
{
    friend PolynomialEasingFactory<T, polyOut<T>>; // To give access to private c-tor (called in exponent())

    T e;

    polyOut(T e_)
        : e(e_)
    {}

public:

    polyOut()
        : polyOut(detail::exponent)
    {}

    T operator () (T t) const override {
         return 1 - std::pow(1 - t, e);
    }
};

template <typename T>
class polyInOut : public PolynomialEasingFactory<T, polyInOut<T>>
{
    friend PolynomialEasingFactory<T, polyInOut<T>>; // To give access to private c-tor (called in exponent())

    T e;

    polyInOut(T e_)
        : e(e_)
    {}

public:

    polyInOut()
        : polyInOut(detail::exponent)
    {}

    T operator () (T t) const override {
         return ((t *= 2) <= 1 ? std::pow(t, e) : 2 - std::pow(2 - t, e)) / 2;
    }
};

} // namespace d3_ease

#endif // D3__EASE__POLY_HPP
