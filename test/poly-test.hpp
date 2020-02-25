#ifndef D3__EASE__TEST__POLY_TEST_HPP
#define D3__EASE__TEST__POLY_TEST_HPP

#include "catch/catch.hpp"

#include "d3_ease/index.hpp"

#include "./generic.hpp"
#include "./inDelta.hpp"

TEST_CASE("easePoly is an alias for easePolyInOut") {
    REQUIRE( std::is_same< d3_ease::easePoly<double>, d3_ease::easePolyInOut<double> >::value == true );
}

TEST_CASE("easePolyIn(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(0.0), inDelta(0.000) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(0.1), inDelta(0.001) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(0.2), inDelta(0.008) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(0.3), inDelta(0.027) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(0.4), inDelta(0.064) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(0.5), inDelta(0.125) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(0.6), inDelta(0.216) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(0.7), inDelta(0.343) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(0.8), inDelta(0.512) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(0.9), inDelta(0.729) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>{}(1.0), inDelta(1.000) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easePolyIn(t) coerces t to a number") {
//    REQUIRE( d3_ease::easePolyIn<double>{}(".9") == d3_ease::easePolyIn<double>{}(0.9) );
//    REQUIRE( d3_ease::easePolyIn<double>{}({valueOf: [] { return 0.9; }}) == d3_ease::easePolyIn<double>{}(0.9) );
//}

TEST_CASE("easePolyIn(t) is the same as polyIn.exponent(3)(t)") {
    REQUIRE( d3_ease::easePolyIn<double>{}(0.1) == d3_ease::easePolyIn<double>::exponent(3)(0.1) );
    REQUIRE( d3_ease::easePolyIn<double>{}(0.2) == d3_ease::easePolyIn<double>::exponent(3)(0.2) );
    REQUIRE( d3_ease::easePolyIn<double>{}(0.3) == d3_ease::easePolyIn<double>::exponent(3)(0.3) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easePolyIn.exponent(e)(t) coerces t and e to numbers") {
//    REQUIRE( d3_ease::easePolyIn<double>::exponent("1.3")(".9") == d3_ease::easePolyIn<double>::exponent(1.3)(0.9) );
//    REQUIRE( d3_ease::easePolyIn<double>::exponent({valueOf: [] { return 1.3; }})({valueOf: [] { return 0.9; }}) == d3_ease::easePolyIn<double>::exponent(1.3)(0.9) );
//}


TEST_CASE("easePolyIn.exponent(2.5)(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(0.0), inDelta(0.000000) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(0.1), inDelta(0.003162) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(0.2), inDelta(0.017889) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(0.3), inDelta(0.049295) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(0.4), inDelta(0.101193) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(0.5), inDelta(0.176777) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(0.6), inDelta(0.278855) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(0.7), inDelta(0.409963) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(0.8), inDelta(0.572433) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(0.9), inDelta(0.768433) );
    REQUIRE_THAT( d3_ease::easePolyIn<double>::exponent(2.5)(1.0), inDelta(1.000000) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easePolyOut.exponent(e)(t) coerces t and e to numbers") {
//    REQUIRE( d3_ease::easePolyOut<double>::exponent("1.3")(".9") == d3_ease::easePolyOut<double>::exponent(1.3)(0.9) );
//    REQUIRE( d3_ease::easePolyOut<double>::exponent({valueOf: [] { return 1.3; }})({valueOf: [] { return 0.9; }}) == d3_ease::easePolyOut<double>::exponent(1.3)(0.9) );
//}


TEST_CASE("easePolyOut(t) is the same as polyOut.exponent(3)(t)") {
    REQUIRE( d3_ease::easePolyOut<double>{}(0.1) == d3_ease::easePolyOut<double>::exponent(3)(0.1) );
    REQUIRE( d3_ease::easePolyOut<double>{}(0.2) == d3_ease::easePolyOut<double>::exponent(3)(0.2) );
    REQUIRE( d3_ease::easePolyOut<double>{}(0.3) == d3_ease::easePolyOut<double>::exponent(3)(0.3) );
}

// NOTE: Not appliable for C++ version
//TEST_CASE("easePolyOut(t, null) is the same as polyOut.exponent(3)(t)") {
//    REQUIRE( d3_ease::easePolyOut<double>{}(0.1, null) == d3_ease::easePolyOut<double>::exponent(3)(0.1) );
//    REQUIRE( d3_ease::easePolyOut<double>{}(0.2, null) == d3_ease::easePolyOut<double>::exponent(3)(0.2) );
//    REQUIRE( d3_ease::easePolyOut<double>{}(0.3, null) == d3_ease::easePolyOut<double>::exponent(3)(0.3) );
//}

// NOTE: Not appliable for C++ version
//TEST_CASE("easePolyOut(t, undefined) is the same as polyOut.exponent(3)(t)") {
//    REQUIRE( d3_ease::easePolyOut<double>::(0.1, undefined) == d3_ease::easePolyOut<double>::exponent(3)(0.1) );
//    REQUIRE( d3_ease::easePolyOut<double>::(0.2, undefined) == d3_ease::easePolyOut<double>::exponent(3)(0.2) );
//    REQUIRE( d3_ease::easePolyOut<double>::(0.3, undefined) == d3_ease::easePolyOut<double>::exponent(3)(0.3) );
//}

TEST_CASE("easePolyOut.exponent(2.5)(t) returns the expected results") {
    const auto polyOut = generic::out<double>(d3_ease::easePolyIn<double>::exponent(2.5));
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(0.0), inDelta( polyOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(0.1), inDelta( polyOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(0.2), inDelta( polyOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(0.3), inDelta( polyOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(0.4), inDelta( polyOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(0.5), inDelta( polyOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(0.6), inDelta( polyOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(0.7), inDelta( polyOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(0.8), inDelta( polyOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(0.9), inDelta( polyOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easePolyOut<double>::exponent(2.5)(1.0), inDelta( polyOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easePolyInOut.exponent(e)(t) coerces t and e to numbers") {
//    REQUIRE( d3_ease::easePolyInOut<double>::exponent("1.3")(".9") == d3_ease::easePolyInOut<double>::exponent(1.3)(0.9) );
//    REQUIRE( d3_ease::easePolyInOut<double>::exponent({valueOf: [] { return 1.3; }})({valueOf: [] { return 0.9; }}) == d3_ease::easePolyInOut<double>::exponent(1.3)(0.9) );
//}

TEST_CASE("easePolyInOut(t) is the same as polyInOut.exponent(3)(t)") {
    REQUIRE( d3_ease::easePolyInOut<double>{}(0.1) == d3_ease::easePolyInOut<double>::exponent(3)(0.1) );
    REQUIRE( d3_ease::easePolyInOut<double>{}(0.2) == d3_ease::easePolyInOut<double>::exponent(3)(0.2) );
    REQUIRE( d3_ease::easePolyInOut<double>{}(0.3) == d3_ease::easePolyInOut<double>::exponent(3)(0.3) );
}

TEST_CASE("easePolyInOut.exponent(2.5)(t) returns the expected results") {
    const auto polyInOut = generic::inOut<double>(d3_ease::easePolyIn<double>::exponent(2.5));
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(0.0), inDelta( polyInOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(0.1), inDelta( polyInOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(0.2), inDelta( polyInOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(0.3), inDelta( polyInOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(0.4), inDelta( polyInOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(0.5), inDelta( polyInOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(0.6), inDelta( polyInOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(0.7), inDelta( polyInOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(0.8), inDelta( polyInOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(0.9), inDelta( polyInOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easePolyInOut<double>::exponent(2.5)(1.0), inDelta( polyInOut(1.0) ) );
}


#endif // D3__EASE__TEST__POLY_TEST_HPP
