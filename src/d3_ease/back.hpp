#ifndef D3__EASE__BACK_HPP
#define D3__EASE__BACK_HPP

namespace d3_ease {

namespace detail {

constexpr double overshoot = 1.70158;

} // namespace detail

// NOTE: based on https://github.com/DefinitelyTyped/DefinitelyTyped/blob/master/types/d3-ease/index.d.ts#L231

/**
 * Anticipatory easing function factory
 */
template <typename T, typename BaseT>
class BackEasingFactory {
public:
    /**
     * Calculate eased time.
     * @param normalizedTime Normalized time typically in the range [0, 1]
     */
    virtual T operator () (T normalizedTime) const = 0;

    /**
     * Returns a new back easing with the specified overshoot s.
     * The degree of overshoot is configurable; if not specified, it defaults to 1.70158.
     *
     * @param s Overshoot parameter
     */
    static BaseT overshoot(T s) {
        return BaseT(s);
    }
};

template <typename T>
class backIn : public BackEasingFactory<T, backIn<T>>
{
    friend BackEasingFactory<T, backIn<T>>; // To give access to private c-tor (called in overshoot())

    T s;

    backIn(T s_)
        : s(s_)
    {}

public:

    backIn()
        : backIn(detail::overshoot)
    {}

    T operator () (T t) const override {
         return t * t * ((s + 1) * t - s);
    }
};

template <typename T>
class backOut : public BackEasingFactory<T, backOut<T>>
{
    friend BackEasingFactory<T, backOut<T>>; // To give access to private c-tor (called in overshoot())

    T s;

    backOut(T s_)
        : s(s_)
    {}

public:

    backOut()
        : backOut(detail::overshoot)
    {}

    T operator () (T t) const override {
         return --t * t * ((s + 1) * t + s) + 1;
    }
};

template <typename T>
class backInOut : public BackEasingFactory<T, backInOut<T>>
{
    friend BackEasingFactory<T, backInOut<T>>; // To give access to private c-tor (called in overshoot())

    T s;

    backInOut(T s_)
        : s(s_)
    {}

public:

    backInOut()
        : backInOut(detail::overshoot)
    {}

    T operator () (T t) const override {
         return ((t *= 2) < 1 ? t * t * ((s + 1) * t - s) : (t -= 2) * t * ((s + 1) * t + s) + 2) / 2;
    }
};

} // namespace d3_ease

#endif // D3__EASE__BACK_HPP
