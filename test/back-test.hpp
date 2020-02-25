#ifndef D3__EASE__TEST__BACK_TEST_HPP
#define D3__EASE__TEST__BACK_TEST_HPP

#include "catch/catch.hpp"

#include "d3_ease/index.hpp"

#include "./generic.hpp"
#include "./inDelta.hpp"

TEST_CASE("easeBack is an alias for easeBackInOut") {
    REQUIRE( std::is_same< d3_ease::easeBack<double>, d3_ease::easeBackInOut<double> >::value == true );
}

TEST_CASE("easeBackIn(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(0.0), inDelta( 0.000000) );
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(0.1), inDelta(-0.014314) );
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(0.2), inDelta(-0.046451) );
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(0.3), inDelta(-0.080200) );
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(0.4), inDelta(-0.099352) );
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(0.5), inDelta(-0.087698) );
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(0.6), inDelta(-0.029028) );
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(0.7), inDelta(+0.092868) );
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(0.8), inDelta(+0.294198) );
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(0.9), inDelta(+0.591172) );
    REQUIRE_THAT( d3_ease::easeBackIn<double>{}(1.0), inDelta(+1.000000) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeBackIn(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeBackIn<double>{}(".9") == d3_ease::easeBackIn<double>{}(0.9) );
//    REQUIRE( d3_ease::easeBackIn<double>{}({valueOf: [] { return 0.9; }}) == d3_ease::easeBackIn<double>{}(0.9) );
//}

TEST_CASE("easeBackOut(t) returns the expected results") {
    const auto backOut = generic::out<double>(d3_ease::easeBackIn<double>{});
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(0.0), inDelta( backOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(0.1), inDelta( backOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(0.2), inDelta( backOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(0.3), inDelta( backOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(0.4), inDelta( backOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(0.5), inDelta( backOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(0.6), inDelta( backOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(0.7), inDelta( backOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(0.8), inDelta( backOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(0.9), inDelta( backOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeBackOut<double>{}(1.0), inDelta( backOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeBackOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeBackOut<double>{}(".9") == d3_ease::easeBackOut<double>{}(0.9) );
//    REQUIRE( d3_ease::easeBackOut<double>{}({valueOf: [] { return 0.9; }}) == d3_ease::easeBackOut<double>{}(0.9) );
//}

TEST_CASE("easeBackInOut(t) returns the expected results") {
    const auto backInOut = generic::inOut<double>(d3_ease::easeBackIn<double>{});
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(0.0), inDelta( backInOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(0.1), inDelta( backInOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(0.2), inDelta( backInOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(0.3), inDelta( backInOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(0.4), inDelta( backInOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(0.5), inDelta( backInOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(0.6), inDelta( backInOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(0.7), inDelta( backInOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(0.8), inDelta( backInOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(0.9), inDelta( backInOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeBackInOut<double>{}(1.0), inDelta( backInOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeBackInOut(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeBackInOut<double>{}(".9") == d3_ease::easeBackInOut<double>{}(0.9) );
//    REQUIRE( d3_ease::easeBackInOut<double>{}({valueOf: [] { return 0.9; }}) == d3_ease::easeBackInOut<double>{}(0.9) );
//}

#endif // D3__EASE__TEST__BACK_TEST_HPP
