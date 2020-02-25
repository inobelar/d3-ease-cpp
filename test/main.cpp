#define CATCH_CONFIG_RUNNER
#include "catch/catch.hpp"

// TODO: back-test
#include "bounce-test.hpp"
#include "circle-test.hpp"
#include "cubic-test.hpp"
// TODO: elastic-test
#include "exp-test.hpp"
#include "linear-test.hpp"
// TODO: poly-test
#include "quad-test.hpp"
#include "sin-test.hpp"

int main( int argc, char* argv[] )
{
    int result = Catch::Session().run( argc, argv );

    return result;
}
