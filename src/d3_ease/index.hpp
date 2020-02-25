#ifndef D3__EASE__INDEX_HPP
#define D3__EASE__INDEX_HPP

#include "d3_ease/linear.hpp"
#include "d3_ease/quad.hpp"
#include "d3_ease/cubic.hpp"
#include "d3_ease/poly.hpp"
#include "d3_ease/sin.hpp"
#include "d3_ease/exp.hpp"
#include "d3_ease/circle.hpp"
#include "d3_ease/bounce.hpp"
// TODO: back
// TODO: elastic

namespace d3_ease {

// -----------------------------------------------------------------------------
// linear

template <typename T>
inline T easeLinear(T t) { return linear(t); }

// -----------------------------------------------------------------------------
// quad

template <typename T>
inline T easeQuad(T t) { return quadInOut(t); }

template <typename T>
inline T easeQuadIn(T t) { return quadIn(t); }

template <typename T>
inline T easeQuadOut(T t) { return quadOut(t); }

template <typename T>
inline T easeQuadInOut(T t) { return quadInOut(t); }

// -----------------------------------------------------------------------------
// cubic

template <typename T>
inline T easeCubic(T t) { return cubicInOut(t); }

template <typename T>
inline T easeCubicIn(T t) { return cubicIn(t); }

template <typename T>
inline T easeCubicOut(T t) { return cubicOut(t); }

template <typename T>
inline T easeCubicInOut(T t) { return cubicInOut(t); }

// -----------------------------------------------------------------------------
// poly

template <typename T>
using easePoly = polyInOut<T>;

template <typename T>
using easePolyIn = polyIn<T>;

template <typename T>
using easePolyOut = polyOut<T>;

template <typename T>
using easePolyInOut = polyInOut<T>;

// -----------------------------------------------------------------------------
// sin

template <typename T>
inline T easeSin(T t) { return sinInOut(t); }

template <typename T>
inline T easeSinIn(T t) { return sinIn(t); }

template <typename T>
inline T easeSinOut(T t) { return sinOut(t); }

template <typename T>
inline T easeSinInOut(T t) { return sinInOut(t); }

// -----------------------------------------------------------------------------
// exp

template <typename T>
inline T easeExp(T t) { return expInOut(t); }

template <typename T>
inline T easeExpIn(T t) { return expIn(t); }

template <typename T>
inline T easeExpOut(T t) { return expOut(t); }

template <typename T>
inline T easeExpInOut(T t) { return expInOut(t); }

// -----------------------------------------------------------------------------
// circle

template <typename T>
inline T easeCircle(T t) { return circleInOut(t); }

template <typename T>
inline T easeCircleIn(T t) { return circleIn(t); }

template <typename T>
inline T easeCircleOut(T t) { return circleOut(t); }

template <typename T>
inline T easeCircleInOut(T t) { return circleInOut(t); }

// -----------------------------------------------------------------------------
// bounce

template <typename T>
inline T easeBounce(T t) { return bounceOut(t); }

template <typename T>
inline T easeBounceIn(T t) { return bounceIn(t); }

template <typename T>
inline T easeBounceOut(T t) { return bounceOut(t); }

template <typename T>
inline T easeBounceInOut(T t) { return bounceInOut(t); }

// -----------------------------------------------------------------------------
// back

//export {
//  backInOut as easeBack,
//  backIn as easeBackIn,
//  backOut as easeBackOut,
//  backInOut as easeBackInOut
//} from "./back.js";

// -----------------------------------------------------------------------------
// elastic

//export {
//  elasticOut as easeElastic,
//  elasticIn as easeElasticIn,
//  elasticOut as easeElasticOut,
//  elasticInOut as easeElasticInOut
//} from "./elastic.js";

} // namespace d3_ease

#endif // D3__EASE__INDEX_HPP
