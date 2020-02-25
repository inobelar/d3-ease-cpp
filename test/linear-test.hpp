#ifndef D3__EASE__TEST__LINEAR_TEST_HPP
#define D3__EASE__TEST__LINEAR_TEST_HPP

#include "catch/catch.hpp"

#include "d3_ease/index.hpp"

#include "./inDelta.hpp"

TEST_CASE("easeLinear(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeLinear(0.0), inDelta(0.0) );
    REQUIRE_THAT( d3_ease::easeLinear(0.1), inDelta(0.1) );
    REQUIRE_THAT( d3_ease::easeLinear(0.2), inDelta(0.2) );
    REQUIRE_THAT( d3_ease::easeLinear(0.3), inDelta(0.3) );
    REQUIRE_THAT( d3_ease::easeLinear(0.4), inDelta(0.4) );
    REQUIRE_THAT( d3_ease::easeLinear(0.5), inDelta(0.5) );
    REQUIRE_THAT( d3_ease::easeLinear(0.6), inDelta(0.6) );
    REQUIRE_THAT( d3_ease::easeLinear(0.7), inDelta(0.7) );
    REQUIRE_THAT( d3_ease::easeLinear(0.8), inDelta(0.8) );
    REQUIRE_THAT( d3_ease::easeLinear(0.9), inDelta(0.9) );
    REQUIRE_THAT( d3_ease::easeLinear(1.0), inDelta(1.0) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeLinear(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeLinear(".9") == d3_ease::easeLinear(0.9) );
//    REQUIRE( d3_ease::easeLinear({valueOf: [] { return 0.9; }}) == d3_ease::easeLinear(0.9) );
//}

#endif // D3__EASE__TEST__LINEAR_TEST_HPP
