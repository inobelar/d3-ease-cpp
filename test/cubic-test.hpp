#ifndef D3__EASE__TEST__CUBIC_TEST_HPP
#define D3__EASE__TEST__CUBIC_TEST_HPP

#include "catch/catch.hpp"

#include "d3_ease/index.hpp"

#include "./generic.hpp"
#include "./inDelta.hpp"

// FIXME: strictly speaking, currently this not an alias but wrapper. It may be fixed in c++14
//TEST_CASE("easeCubic is an alias for easeCubicInOut") {
//    REQUIRE( &d3_ease::easeCubic<double> == &d3_ease::easeCubicInOut<double> );
//}

TEST_CASE("easeCubicIn(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeCubicIn(0.0), inDelta(0.000) );
    REQUIRE_THAT( d3_ease::easeCubicIn(0.1), inDelta(0.001) );
    REQUIRE_THAT( d3_ease::easeCubicIn(0.2), inDelta(0.008) );
    REQUIRE_THAT( d3_ease::easeCubicIn(0.3), inDelta(0.027) );
    REQUIRE_THAT( d3_ease::easeCubicIn(0.4), inDelta(0.064) );
    REQUIRE_THAT( d3_ease::easeCubicIn(0.5), inDelta(0.125) );
    REQUIRE_THAT( d3_ease::easeCubicIn(0.6), inDelta(0.216) );
    REQUIRE_THAT( d3_ease::easeCubicIn(0.7), inDelta(0.343) );
    REQUIRE_THAT( d3_ease::easeCubicIn(0.8), inDelta(0.512) );
    REQUIRE_THAT( d3_ease::easeCubicIn(0.9), inDelta(0.729) );
    REQUIRE_THAT( d3_ease::easeCubicIn(1.0), inDelta(1.000) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeCubicIn(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeCubicIn(".9") == d3_ease::easeCubicIn(0.9) );
//    REQUIRE( d3_ease::easeCubicIn({valueOf: [] { return 0.9; }}) == d3_ease::easeCubicIn(0.9) );
//}

TEST_CASE("easeCubicOut(t) returns the expected results") {
    const auto cubicOut = generic::out<double>(d3_ease::easeCubicIn);
    REQUIRE_THAT( d3_ease::easeCubicOut(0.0), inDelta( cubicOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeCubicOut(0.1), inDelta( cubicOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeCubicOut(0.2), inDelta( cubicOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeCubicOut(0.3), inDelta( cubicOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeCubicOut(0.4), inDelta( cubicOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeCubicOut(0.5), inDelta( cubicOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeCubicOut(0.6), inDelta( cubicOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeCubicOut(0.7), inDelta( cubicOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeCubicOut(0.8), inDelta( cubicOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeCubicOut(0.9), inDelta( cubicOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeCubicOut(1.0), inDelta( cubicOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeCubicOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeCubicOut(".9") == d3_ease::easeCubicOut(0.9) );
//    REQUIRE( d3_ease::easeCubicOut({valueOf: [] { return 0.9; }}) == d3_ease::easeCubicOut(0.9) );
//}

TEST_CASE("easeCubicInOut(t) returns the expected results") {
    const auto cubicInOut = generic::inOut<double>(d3_ease::easeCubicIn);
    REQUIRE_THAT( d3_ease::easeCubicInOut(0.0), inDelta( cubicInOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeCubicInOut(0.1), inDelta( cubicInOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeCubicInOut(0.2), inDelta( cubicInOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeCubicInOut(0.3), inDelta( cubicInOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeCubicInOut(0.4), inDelta( cubicInOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeCubicInOut(0.5), inDelta( cubicInOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeCubicInOut(0.6), inDelta( cubicInOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeCubicInOut(0.7), inDelta( cubicInOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeCubicInOut(0.8), inDelta( cubicInOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeCubicInOut(0.9), inDelta( cubicInOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeCubicInOut(1.0), inDelta( cubicInOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeCubicInOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeCubicInOut(".9") == d3_ease::easeCubicInOut(0.9) );
//    REQUIRE( d3_ease::easeCubicInOut({valueOf: [] { return 0.9; }}) == d3_ease::easeCubicInOut(0.9) );
//}

#endif // D3__EASE__TEST__CUBIC_TEST_HPP
