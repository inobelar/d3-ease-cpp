#ifndef D3__EASE__TEST__SIN_TEST_HPP
#define D3__EASE__TEST__SIN_TEST_HPP

#include "catch/catch.hpp"

#include "d3_ease/index.hpp"

#include "./generic.hpp"
#include "./inDelta.hpp"

// FIXME: strictly speaking, currently this not an alias but wrapper. It may be fixed in c++14
//TEST_CASE("easeSin is an alias for easeSinInOut") {
//    REQUIRE( &d3_ease::easeSin<double> == &d3_ease::easeSinInOut<double> );
//}

TEST_CASE("easeSinIn(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeSinIn(0.0), inDelta(0.000000) );
    REQUIRE_THAT( d3_ease::easeSinIn(0.1), inDelta(0.012312) );
    REQUIRE_THAT( d3_ease::easeSinIn(0.2), inDelta(0.048943) );
    REQUIRE_THAT( d3_ease::easeSinIn(0.3), inDelta(0.108993) );
    REQUIRE_THAT( d3_ease::easeSinIn(0.4), inDelta(0.190983) );
    REQUIRE_THAT( d3_ease::easeSinIn(0.5), inDelta(0.292893) );
    REQUIRE_THAT( d3_ease::easeSinIn(0.6), inDelta(0.412215) );
    REQUIRE_THAT( d3_ease::easeSinIn(0.7), inDelta(0.546010) );
    REQUIRE_THAT( d3_ease::easeSinIn(0.8), inDelta(0.690983) );
    REQUIRE_THAT( d3_ease::easeSinIn(0.9), inDelta(0.843566) );
    REQUIRE_THAT( d3_ease::easeSinIn(1.0), inDelta(1.000000) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeSinIn(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeSinIn(".9") == d3_ease::easeSinIn(0.9) );
//    REQUIRE( d3_ease::easeSinIn({valueOf: [] { return 0.9; }}) == d3_ease::easeSinIn(0.9) );
//}

TEST_CASE("easeSinOut(t) returns the expected results") {
    const auto sinOut = generic::out<double>(d3_ease::easeSinIn);
    REQUIRE_THAT( d3_ease::easeSinOut(0.0), inDelta( sinOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeSinOut(0.1), inDelta( sinOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeSinOut(0.2), inDelta( sinOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeSinOut(0.3), inDelta( sinOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeSinOut(0.4), inDelta( sinOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeSinOut(0.5), inDelta( sinOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeSinOut(0.6), inDelta( sinOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeSinOut(0.7), inDelta( sinOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeSinOut(0.8), inDelta( sinOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeSinOut(0.9), inDelta( sinOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeSinOut(1.0), inDelta( sinOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeSinOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeSinOut(".9") == d3_ease::easeSinOut(0.9) );
//    REQUIRE( d3_ease::easeSinOut({valueOf: [] { return 0.9; }}) == d3_ease::easeSinOut(0.9) );
//}

TEST_CASE("easeSinInOut(t) returns the expected results") {
    const auto sinInOut = generic::inOut<double>(d3_ease::easeSinIn);
    REQUIRE_THAT( d3_ease::easeSinInOut(0.0), inDelta( sinInOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeSinInOut(0.1), inDelta( sinInOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeSinInOut(0.2), inDelta( sinInOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeSinInOut(0.3), inDelta( sinInOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeSinInOut(0.4), inDelta( sinInOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeSinInOut(0.5), inDelta( sinInOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeSinInOut(0.6), inDelta( sinInOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeSinInOut(0.7), inDelta( sinInOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeSinInOut(0.8), inDelta( sinInOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeSinInOut(0.9), inDelta( sinInOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeSinInOut(1.0), inDelta( sinInOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeSinInOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeSinInOut(".9") == d3_ease::easeSinInOut(0.9) );
//    REQUIRE( d3_ease::easeSinInOut({valueOf: [] { return 0.9; }}) == d3_ease::easeSinInOut(0.9) );
//}

#endif // D3__EASE__TEST__SIN_TEST_HPP
