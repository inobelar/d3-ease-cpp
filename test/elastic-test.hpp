#ifndef D3__EASE__TEST__ELASTIC_TEST_HPP
#define D3__EASE__TEST__ELASTIC_TEST_HPP

#include "catch/catch.hpp"

#include "d3_ease/index.hpp"

#include "./generic.hpp"
#include "./inDelta.hpp"

TEST_CASE("easeElastic is an alias for easeElasticOut") {
    REQUIRE( std::is_same< d3_ease::easeElastic<double>, d3_ease::easeElasticOut<double> >::value == true );
}

TEST_CASE("easeElasticIn(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(0.0), inDelta(-0.000488) ); // Note: not exactly zero.
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(0.1), inDelta( 0.001953) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(0.2), inDelta(-0.001953) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(0.3), inDelta(-0.003906) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(0.4), inDelta( 0.015625) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(0.5), inDelta(-0.015625) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(0.6), inDelta(-0.031250) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(0.7), inDelta( 0.125000) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(0.8), inDelta(-0.125000) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(0.9), inDelta(-0.250000) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}(1.0), inDelta( 1.000000) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeElasticIn(t) coerces t to a number") {
//    REQUIRE( d3_ease::easeElasticIn<double>{}(".9") == d3_ease::easeElasticIn<double>{}(0.9) );
//    REQUIRE( d3_ease::easeElasticIn<double>({valueOf: [] { return 0.9; }}) == d3_ease::easeElasticIn<double>{}(0.9) );
//}

TEST_CASE("easeElasticIn(t) is the same as elasticIn.amplitude(1).period(0.3)(t)") {
    REQUIRE( d3_ease::easeElasticIn<double>{}(0.1) == d3_ease::easeElasticIn<double>{}.amplitude(1).period(0.3)(0.1));
    REQUIRE( d3_ease::easeElasticIn<double>{}(0.2) == d3_ease::easeElasticIn<double>{}.amplitude(1).period(0.3)(0.2));
    REQUIRE( d3_ease::easeElasticIn<double>{}(0.3) == d3_ease::easeElasticIn<double>{}.amplitude(1).period(0.3)(0.3));
}



TEST_CASE("easeElasticIn.amplitude(a)(t) is the same as elasticIn(t) if a <= 1") {
    REQUIRE( d3_ease::easeElasticIn<double>{}.amplitude(-1.0)(0.1) == d3_ease::easeElasticIn<double>{}(0.1));
    REQUIRE( d3_ease::easeElasticIn<double>{}.amplitude(+0.4)(0.2) == d3_ease::easeElasticIn<double>{}(0.2));
    REQUIRE( d3_ease::easeElasticIn<double>{}.amplitude(+0.8)(0.3) == d3_ease::easeElasticIn<double>{}(0.3));
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeElasticIn.amplitude(a).period(p)(t) coerces t, a and p to numbers") {
//    REQUIRE( d3_ease::easeElasticIn<double>{}.amplitude("1.3").period("0.2")(".9") == d3_ease::easeElasticIn<double>{}.amplitude(1.3).period(0.2)(.9) );
//    REQUIRE( d3_ease::easeElasticIn<double>{}.amplitude({valueOf: [] { return 1.3; }}).period({valueOf: [] { return 0.2; }})({valueOf: [] { return .9; }}) == d3_ease::easeElasticIn<double>{}.amplitude(1.3).period(0.2)(.9) );
//}

TEST_CASE("easeElasticIn.amplitude(1.3)(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(0.0), inDelta( 0.000214) ); // Note: not exactly zero.
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(0.1), inDelta( 0.001953) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(0.2), inDelta(-0.004763) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(0.3), inDelta( 0.001714) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(0.4), inDelta( 0.015625) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(0.5), inDelta(-0.038105) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(0.6), inDelta( 0.013711) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(0.7), inDelta( 0.125000) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(0.8), inDelta(-0.304844) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(0.9), inDelta( 0.109687) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.3)(1.0), inDelta( 1.000000) );
}

TEST_CASE("easeElasticIn.amplitude(1.5).period(1)(t) returns the expected results") {
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(0.0), inDelta( 0.000977) ); // Note: not exactly zero.
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(0.1), inDelta( 0.000297) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(0.2), inDelta(-0.002946) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(0.3), inDelta(-0.010721) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(0.4), inDelta(-0.022909) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(0.5), inDelta(-0.031250) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(0.6), inDelta(-0.009491) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(0.7), inDelta( 0.094287) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(0.8), inDelta( 0.343083) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(0.9), inDelta( 0.733090) );
    REQUIRE_THAT( d3_ease::easeElasticIn<double>{}.amplitude(1.5).period(1)(1.0), inDelta( 1.000000) );
}

TEST_CASE("easeElasticOut(t) returns the expected results") {
    const auto elasticOut = generic::out<double>(d3_ease::easeElasticIn<double>{});
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(0.0), inDelta( elasticOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(0.1), inDelta( elasticOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(0.2), inDelta( elasticOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(0.3), inDelta( elasticOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(0.4), inDelta( elasticOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(0.5), inDelta( elasticOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(0.6), inDelta( elasticOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(0.7), inDelta( elasticOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(0.8), inDelta( elasticOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(0.9), inDelta( elasticOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeElasticOut<double>{}(1.0), inDelta( elasticOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeElasticOut.amplitude(a).period(p)(t) coerces t, a and p to numbers") {
//    REQUIRE( d3_ease::easeElasticOut<double>{}.amplitude("1.3").period("0.2")(".9") == d3_ease::easeElasticOut<double>{}.amplitude(1.3).period(0.2)(.9) );
//    REQUIRE( d3_ease::easeElasticOut<double>{}.amplitude({valueOf: [] { return 1.3; }}).period({valueOf: [] { return 0.2; }})({valueOf: [] { return .9; }}) == d3_ease::easeElasticOut<double>::amplitude(1.3).period(0.2)(.9) );
//}

TEST_CASE("easeElasticInOut(t) returns the expected results") {
    const auto elasticInOut = generic::inOut<double>(d3_ease::easeElasticIn<double>{});
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(0.0), inDelta( elasticInOut(0.0) ) );
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(0.1), inDelta( elasticInOut(0.1) ) );
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(0.2), inDelta( elasticInOut(0.2) ) );
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(0.3), inDelta( elasticInOut(0.3) ) );
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(0.4), inDelta( elasticInOut(0.4) ) );
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(0.5), inDelta( elasticInOut(0.5) ) );
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(0.6), inDelta( elasticInOut(0.6) ) );
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(0.7), inDelta( elasticInOut(0.7) ) );
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(0.8), inDelta( elasticInOut(0.8) ) );
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(0.9), inDelta( elasticInOut(0.9) ) );
    REQUIRE_THAT( d3_ease::easeElasticInOut<double>{}(1.0), inDelta( elasticInOut(1.0) ) );
}

// TODO: Currently not supported in C++ version
//TEST_CASE("easeElasticInOut.amplitude(a).period(p)(t) coerces t, a and p to numbers") {
//    REQUIRE( d3_ease::easeElasticInOut<double>{}.amplitude("1.3").period("0.2")(".9") == d3_ease::easeElasticInOut<double>{}.amplitude(1.3).period(0.2)(.9) );
//    REQUIRE( d3_ease::easeElasticInOut<double>{}.amplitude({valueOf: [] { return 1.3; }}).period({valueOf: [] { return 0.2; }})({valueOf: [] { return .9; }}) == d3_ease::easeElasticInOut<double>{}.amplitude(1.3).period(0.2)(.9) );
//}

#endif // D3__EASE__TEST__ELASTIC_TEST_HPP
