#ifndef D3__EASE__TEST__BOUNCE_TEST_HPP
#define D3__EASE__TEST__BOUNCE_TEST_HPP

#include "catch/catch.hpp"

#include "d3_ease/index.hpp"

#include "./generic.hpp"
#include "./inDelta.hpp"

// FIXME: strictly speaking, currently this not an alias but wrapper. It may be fixed in c++14
//TEST_CASE("easeBounce is an alias for easeBounceOut") {
//    REQUIRE( &d3_ease::easeBounce<double> == &d3_ease::easeBounceOut<double>);
//}

TEST_CASE("easeBounceIn(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeBounceIn(0.0), inDelta(0.000000) );
    REQUIRE_THAT( d3_ease::easeBounceIn(0.1), inDelta(0.011875) );
    REQUIRE_THAT( d3_ease::easeBounceIn(0.2), inDelta(0.060000) );
    REQUIRE_THAT( d3_ease::easeBounceIn(0.3), inDelta(0.069375) );
    REQUIRE_THAT( d3_ease::easeBounceIn(0.4), inDelta(0.227500) );
    REQUIRE_THAT( d3_ease::easeBounceIn(0.5), inDelta(0.234375) );
    REQUIRE_THAT( d3_ease::easeBounceIn(0.6), inDelta(0.090000) );
    REQUIRE_THAT( d3_ease::easeBounceIn(0.7), inDelta(0.319375) );
    REQUIRE_THAT( d3_ease::easeBounceIn(0.8), inDelta(0.697500) );
    REQUIRE_THAT( d3_ease::easeBounceIn(0.9), inDelta(0.924375) );
    REQUIRE_THAT( d3_ease::easeBounceIn(1.0), inDelta(1.000000) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeBounceIn(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeBounceIn(".9") == d3_ease::easeBounceIn(0.9) );
//    REQUIRE( d3_ease::easeBounceIn({valueOf: [] { return 0.9; }}) == d3_ease::easeBounceIn(0.9) );
//}

TEST_CASE("easeBounceOut(t) returns the expected results") {
    const auto bounceOut = generic::out<double>(d3_ease::easeBounceIn);
    REQUIRE_THAT( d3_ease::easeBounceOut(0.0), inDelta( bounceOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeBounceOut(0.1), inDelta( bounceOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeBounceOut(0.2), inDelta( bounceOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeBounceOut(0.3), inDelta( bounceOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeBounceOut(0.4), inDelta( bounceOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeBounceOut(0.5), inDelta( bounceOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeBounceOut(0.6), inDelta( bounceOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeBounceOut(0.7), inDelta( bounceOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeBounceOut(0.8), inDelta( bounceOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeBounceOut(0.9), inDelta( bounceOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeBounceOut(1.0), inDelta( bounceOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeBounceOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeBounceOut(".9") == d3_ease::easeBounceOut(0.9) );
//    REQUIRE( d3_ease::easeBounceOut({valueOf: [] { return 0.9; }}) == d3_ease::easeBounceOut(0.9) );
//}

TEST_CASE("easeBounceInOut(t) returns the expected results") {
    const auto bounceInOut = generic::inOut<double>(d3_ease::easeBounceIn);
    REQUIRE_THAT( d3_ease::easeBounceInOut(0.0), inDelta( bounceInOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeBounceInOut(0.1), inDelta( bounceInOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeBounceInOut(0.2), inDelta( bounceInOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeBounceInOut(0.3), inDelta( bounceInOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeBounceInOut(0.4), inDelta( bounceInOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeBounceInOut(0.5), inDelta( bounceInOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeBounceInOut(0.6), inDelta( bounceInOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeBounceInOut(0.7), inDelta( bounceInOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeBounceInOut(0.8), inDelta( bounceInOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeBounceInOut(0.9), inDelta( bounceInOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeBounceInOut(1.0), inDelta( bounceInOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeBounceInOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeBounceInOut(".9") == d3_ease::easeBounceInOut(0.9) );
//    REQUIRE( d3_ease::easeBounceInOut({valueOf: [] { return 0.9; }}) == d3_ease::easeBounceInOut(0.9) );
//}

#endif // D3__EASE__TEST__BOUNCE_TEST_HPP
