#ifndef D3__EASE__TEST__CIRCLE_TEST_HPP
#define D3__EASE__TEST__CIRCLE_TEST_HPP

#include "catch/catch.hpp"

#include "d3_ease/index.hpp"

#include "./generic.hpp"
#include "./inDelta.hpp"

// FIXME: strictly speaking, currently this not an alias but wrapper. It may be fixed in c++14
//TEST_CASE("easeCircle is an alias for easeCircleInOut") {
//    REQUIRE( &d3_ease::easeCircle<double> == &d3_ease::easeCircleInOut<double> );
//}

TEST_CASE("easeCircleIn(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeCircleIn(0.0), inDelta(0.000000) );
    REQUIRE_THAT( d3_ease::easeCircleIn(0.1), inDelta(0.005013) );
    REQUIRE_THAT( d3_ease::easeCircleIn(0.2), inDelta(0.020204) );
    REQUIRE_THAT( d3_ease::easeCircleIn(0.3), inDelta(0.046061) );
    REQUIRE_THAT( d3_ease::easeCircleIn(0.4), inDelta(0.083485) );
    REQUIRE_THAT( d3_ease::easeCircleIn(0.5), inDelta(0.133975) );
    REQUIRE_THAT( d3_ease::easeCircleIn(0.6), inDelta(0.200000) );
    REQUIRE_THAT( d3_ease::easeCircleIn(0.7), inDelta(0.285857) );
    REQUIRE_THAT( d3_ease::easeCircleIn(0.8), inDelta(0.400000) );
    REQUIRE_THAT( d3_ease::easeCircleIn(0.9), inDelta(0.564110) );
    REQUIRE_THAT( d3_ease::easeCircleIn(1.0), inDelta(1.000000) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeCircleIn(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeCircleIn(".9") == d3_ease::easeCircleIn(0.9) );
//    REQUIRE( d3_ease::easeCircleIn({valueOf: [] { return 0.9; }}) == d3_ease::easeCircleIn(0.9) );
//}

TEST_CASE("easeCircleOut(t) returns the expected results") {
    const auto circleOut = generic::out<double>(d3_ease::easeCircleIn);
    REQUIRE_THAT( d3_ease::easeCircleOut(0.0), inDelta( circleOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeCircleOut(0.1), inDelta( circleOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeCircleOut(0.2), inDelta( circleOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeCircleOut(0.3), inDelta( circleOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeCircleOut(0.4), inDelta( circleOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeCircleOut(0.5), inDelta( circleOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeCircleOut(0.6), inDelta( circleOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeCircleOut(0.7), inDelta( circleOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeCircleOut(0.8), inDelta( circleOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeCircleOut(0.9), inDelta( circleOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeCircleOut(1.0), inDelta( circleOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeCircleOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeCircleOut(".9") == d3_ease::easeCircleOut(0.9) );
//    REQUIRE( d3_ease::easeCircleOut({valueOf: [] { return 0.9; }}) == ease.easeCircleOut(0.9) );
//}

TEST_CASE("easeCircleInOut(t) returns the expected results") {
    const auto circleInOut = generic::inOut<double>(d3_ease::easeCircleIn);
    REQUIRE_THAT( d3_ease::easeCircleInOut(0.0), inDelta( circleInOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeCircleInOut(0.1), inDelta( circleInOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeCircleInOut(0.2), inDelta( circleInOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeCircleInOut(0.3), inDelta( circleInOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeCircleInOut(0.4), inDelta( circleInOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeCircleInOut(0.5), inDelta( circleInOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeCircleInOut(0.6), inDelta( circleInOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeCircleInOut(0.7), inDelta( circleInOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeCircleInOut(0.8), inDelta( circleInOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeCircleInOut(0.9), inDelta( circleInOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeCircleInOut(1.0), inDelta( circleInOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeCircleInOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeCircleInOut(".9") == d3_ease::easeCircleInOut(0.9) );
//    REQUIRE( d3_ease::easeCircleInOut({valueOf: [] { return 0.9; }}) == d3_ease::easeCircleInOut(0.9) );
//}

#endif // D3__EASE__TEST__CIRCLE_TEST_HPP
