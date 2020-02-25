#ifndef D3__EASE__TEST__QUAD_TEST_HPP
#define D3__EASE__TEST__QUAD_TEST_HPP

#include "catch/catch.hpp"

#include "d3_ease/index.hpp"

#include "./generic.hpp"
#include "./inDelta.hpp"

// FIXME: strictly speaking, currently this not an alias but wrapper. It may be fixed in c++14
//TEST_CASE("easeQuad is an alias for easeQuadInOut") {
//    REQUIRE( &d3_ease::easeQuad<double> == &d3_ease::easeQuadInOut<double> );
//}

TEST_CASE("easeQuadIn(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeQuadIn(0.0), inDelta(0.00) );
    REQUIRE_THAT( d3_ease::easeQuadIn(0.1), inDelta(0.01) );
    REQUIRE_THAT( d3_ease::easeQuadIn(0.2), inDelta(0.04) );
    REQUIRE_THAT( d3_ease::easeQuadIn(0.3), inDelta(0.09) );
    REQUIRE_THAT( d3_ease::easeQuadIn(0.4), inDelta(0.16) );
    REQUIRE_THAT( d3_ease::easeQuadIn(0.5), inDelta(0.25) );
    REQUIRE_THAT( d3_ease::easeQuadIn(0.6), inDelta(0.36) );
    REQUIRE_THAT( d3_ease::easeQuadIn(0.7), inDelta(0.49) );
    REQUIRE_THAT( d3_ease::easeQuadIn(0.8), inDelta(0.64) );
    REQUIRE_THAT( d3_ease::easeQuadIn(0.9), inDelta(0.81) );
    REQUIRE_THAT( d3_ease::easeQuadIn(1.0), inDelta(1.00) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeQuadIn(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeQuadIn(".9") == d3_ease::easeQuadIn(0.9) );
//    REQUIRE( d3_ease::easeQuadIn({valueOf: [] { return 0.9; }}) == d3_ease::easeQuadIn(0.9) );
//}

TEST_CASE("easeQuadOut(t) returns the expected results") {
    const auto quadOut = generic::out<double>(d3_ease::easeQuadIn);
    REQUIRE_THAT( d3_ease::easeQuadOut(0.0), inDelta( quadOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeQuadOut(0.1), inDelta( quadOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeQuadOut(0.2), inDelta( quadOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeQuadOut(0.3), inDelta( quadOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeQuadOut(0.4), inDelta( quadOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeQuadOut(0.5), inDelta( quadOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeQuadOut(0.6), inDelta( quadOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeQuadOut(0.7), inDelta( quadOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeQuadOut(0.8), inDelta( quadOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeQuadOut(0.9), inDelta( quadOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeQuadOut(1.0), inDelta( quadOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeQuadOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeQuadOut(".9") == d3_ease::easeQuadOut(0.9) );
//    REQUIRE( d3_ease::easeQuadOut({valueOf: [] { return 0.9; }}) == d3_ease::easeQuadOut(0.9) );
//}

TEST_CASE("easeQuadInOut(t) returns the expected results") {
    const auto quadInOut = generic::inOut<double>(d3_ease::easeQuadIn);
    REQUIRE_THAT( d3_ease::easeQuadInOut(0.0), inDelta( quadInOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeQuadInOut(0.1), inDelta( quadInOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeQuadInOut(0.2), inDelta( quadInOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeQuadInOut(0.3), inDelta( quadInOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeQuadInOut(0.4), inDelta( quadInOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeQuadInOut(0.5), inDelta( quadInOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeQuadInOut(0.6), inDelta( quadInOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeQuadInOut(0.7), inDelta( quadInOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeQuadInOut(0.8), inDelta( quadInOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeQuadInOut(0.9), inDelta( quadInOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeQuadInOut(1.0), inDelta( quadInOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeQuadInOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeQuadInOut(".9") == d3_ease::easeQuadInOut(0.9) );
//    REQUIRE( d3_ease::easeQuadInOut({valueOf: [] { return 0.9; }}) == d3_ease::easeQuadInOut(0.9) );
//}

#endif // D3__EASE__TEST__QUAD_TEST_HPP
