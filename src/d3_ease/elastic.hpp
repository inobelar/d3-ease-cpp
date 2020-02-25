#ifndef D3__EASE__ELASTIC_HPP
#define D3__EASE__ELASTIC_HPP

#include <cmath> // for M_PI, std::asin(), std::pow(), std::sin()
#include <algorithm> // for std::max()

namespace d3_ease {

namespace detail {

constexpr double
    tau = 2 * M_PI,
    amplitude = 1,
    period = 0.3;

} // namespace detail

// NOTE: based on https://github.com/DefinitelyTyped/DefinitelyTyped/blob/master/types/d3-ease/index.d.ts#L273

/**
 * Elastic easing function factory
 */
template <typename T, typename BaseT>
class ElasticEasingFactory {
public:
    /**
     * Calculate eased time.
     * @param normalizedTime Normalized time typically in the range [0, 1]
     */
    virtual T operator () (T normalizedTime) const = 0;

    /**
     * Returns a new elastic easing with the specified amplitude a.
     * Defaults to 1,if not specified.
     *
     * @param a Amplitude for elastic easing.
     */

    virtual BaseT amplitude(T a) const = 0;

    /**
     * Returns a new elastic easing with the specified amplitude a.
     * Defaults to 0.3,if not specified.
     *
     * @param p Period for elastic easing.
     */
    virtual BaseT period(T p) const = 0;
};

template <typename T>
class elasticIn : public ElasticEasingFactory<T, elasticIn<T>>
{
    T s;

    T a, p;

    elasticIn(T a_, T p_)
        : s( std::asin(1 / (a_ = std::max<T>(1, a_))) * (p_ /= detail::tau) )
        , a(a_), p(p_)
    {}

public:

    elasticIn()
        : elasticIn(detail::amplitude, detail::period)
    {}

    T operator () (T t) const override {
        return a * std::pow(2, 10 * --t) * std::sin((s - t) / p);
    }

    elasticIn amplitude(T a) const override {
        return elasticIn(a, p * detail::tau);
    }

    elasticIn period(T p) const override {
        return elasticIn(a, p);
    }
};

template <typename T>
class elasticOut : public ElasticEasingFactory<T, elasticOut<T>>
{
    T s;

    T a, p;

    elasticOut(T a_, T p_)
        : s( std::asin(1 / (a_ = std::max<T>(1, a_))) * (p_ /= detail::tau) )
        , a(a_), p(p_)
    {}

public:

    elasticOut()
        : elasticOut(detail::amplitude, detail::period)
    {}

    T operator () (T t) const override {
        return 1 - a * std::pow(2, -10 * t) * std::sin((t + s) / p);
    }

    elasticOut amplitude(T a) const override {
        return elasticOut(a, p * detail::tau);
    }

    elasticOut period(T p) const override {
        return elasticOut(a, p);
    }
};

template <typename T>
class elasticInOut : public ElasticEasingFactory<T, elasticInOut<T>>
{
    T s;

    T a, p;

    elasticInOut(T a_, T p_)
        : s( std::asin(1 / (a_ = std::max<T>(1, a_))) * (p_ /= detail::tau) )
        , a(a_), p(p_)
    {}

public:

    elasticInOut()
        : elasticInOut(detail::amplitude, detail::period)
    {}

    T operator () (T t) const override {
        return ((t = t * 2 - 1) < 0
                ? a * std::pow(2, 10 * t) * std::sin((s - t) / p)
                : 2 - a * std::pow(2, -10 * t) * std::sin((s + t) / p)) / 2;
    }

    elasticInOut amplitude(T a) const override {
        return elasticInOut(a, p * detail::tau);
    }

    elasticInOut period(T p) const override {
        return elasticInOut(a, p);
    }
};

} // namespace d3_ease

#endif // D3__EASE__ELASTIC_HPP
