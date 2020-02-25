#ifndef D3__EASE__TEST__EXP_TEST_HPP
#define D3__EASE__TEST__EXP_TEST_HPP

#include "catch/catch.hpp"

#include "d3_ease/index.hpp"

#include "./generic.hpp"
#include "./inDelta.hpp"

// FIXME: strictly speaking, currently this not an alias but wrapper. It may be fixed in c++14
//TEST_CASE("easeExp is an alias for easeExpInOut") {
//    REQUIRE( &d3_ease::easeExp<double> == &d3_ease::easeExpInOut<double> );
//}

TEST_CASE("easeExpIn(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeExpIn(0.0), inDelta( 0.000976) ); // Note: not exactly zero.
    REQUIRE_THAT( d3_ease::easeExpIn(0.1), inDelta( 0.001953) );
    REQUIRE_THAT( d3_ease::easeExpIn(0.2), inDelta( 0.003906) );
    REQUIRE_THAT( d3_ease::easeExpIn(0.3), inDelta( 0.007813) );
    REQUIRE_THAT( d3_ease::easeExpIn(0.4), inDelta( 0.015625) );
    REQUIRE_THAT( d3_ease::easeExpIn(0.5), inDelta( 0.031250) );
    REQUIRE_THAT( d3_ease::easeExpIn(0.6), inDelta( 0.062500) );
    REQUIRE_THAT( d3_ease::easeExpIn(0.7), inDelta( 0.125000) );
    REQUIRE_THAT( d3_ease::easeExpIn(0.8), inDelta( 0.250000) );
    REQUIRE_THAT( d3_ease::easeExpIn(0.9), inDelta( 0.500000) );
    REQUIRE_THAT( d3_ease::easeExpIn(1.0), inDelta( 1.000000) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeExpIn(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeExpIn(".9") == d3_ease::easeExpIn(0.9) );
//    REQUIRE( d3_ease::easeExpIn({valueOf: [] { return 0.9; }}) == d3_ease::easeExpIn(0.9) );
//}

TEST_CASE("easeExpOut(t) returns the expected results") {
    const auto expOut = generic::out<double>(d3_ease::easeExpIn);
    REQUIRE_THAT( d3_ease::easeExpOut(0.0), inDelta( expOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeExpOut(0.1), inDelta( expOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeExpOut(0.2), inDelta( expOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeExpOut(0.3), inDelta( expOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeExpOut(0.4), inDelta( expOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeExpOut(0.5), inDelta( expOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeExpOut(0.6), inDelta( expOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeExpOut(0.7), inDelta( expOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeExpOut(0.8), inDelta( expOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeExpOut(0.9), inDelta( expOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeExpOut(1.0), inDelta( expOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeExpOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeExpOut(".9") == d3_ease::easeExpOut(0.9) );
//    REQUIRE( d3_ease::easeExpOut({valueOf: [] { return 0.9; }}) == d3_ease::easeExpOut(0.9) );
//}

TEST_CASE("easeExpInOut(t) returns the expected results") {
    const auto expInOut = generic::inOut<double>(d3_ease::easeExpIn);
    REQUIRE_THAT( d3_ease::easeExpInOut(0.0), inDelta( expInOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeExpInOut(0.1), inDelta( expInOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeExpInOut(0.2), inDelta( expInOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeExpInOut(0.3), inDelta( expInOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeExpInOut(0.4), inDelta( expInOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeExpInOut(0.5), inDelta( expInOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeExpInOut(0.6), inDelta( expInOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeExpInOut(0.7), inDelta( expInOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeExpInOut(0.8), inDelta( expInOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeExpInOut(0.9), inDelta( expInOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeExpInOut(1.0), inDelta( expInOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeExpInOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeExpInOut(".9") == d3_ease::easeExpInOut(0.9) );
//    REQUIRE( d3_ease::easeExpInOut({valueOf: [] { return 0.9; }}) == d3_ease::easeExpInOut(0.9) );
//}

#endif // D3__EASE__TEST__EXP_TEST_HPP
