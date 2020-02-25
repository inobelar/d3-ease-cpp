#ifndef D3__EASE__TEST__GENERIC_HPP
#define D3__EASE__TEST__GENERIC_HPP

#include <functional> // for std::function<R(T)>

struct generic {

    // Receive lambda as argument (TODO: possibly unused)
    template <typename T, typename Func = std::function< T (T) > >
    static inline Func out(const Func& easeIn) {
        return [easeIn](T t) -> T {
            return 1 - easeIn(1 - t);
        };
    }

    // Receive func ptr as argument
    template <typename T, typename Func = std::function< T (T) > >
    static inline Func out( T (*const easeIn) (T) ) {
        return [easeIn](T t) -> T {
            return 1 - easeIn(1 - t);
        };
    }

    // Receive lambda as argument (TODO: possibly unused)
    template <typename T, typename Func = std::function< T (T) > >
    static inline T inOut(const Func& easeIn) {
        return [easeIn](T t) -> T {
            return (t < 0.5 ? easeIn(t * 2) : (2 - easeIn((1 - t) * 2))) / 2;
        };
    }

    // Receive func ptr as argument
    template <typename T, typename Func = std::function< T (T) > >
    static inline Func inOut( T (*const easeIn) (T) ) {
        return [easeIn](T t) -> T {
            return (t < 0.5 ? easeIn(t * 2) : (2 - easeIn((1 - t) * 2))) / 2;
        };
    }
};

#endif // D3__EASE__TEST__GENERIC_HPP
