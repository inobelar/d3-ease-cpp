#define CATCH_CONFIG_RUNNER
#include "catch/catch.hpp"

#include "back-test.hpp"
#include "bounce-test.hpp"
#include "circle-test.hpp"
#include "cubic-test.hpp"
#include "elastic-test.hpp"
#include "exp-test.hpp"
#include "linear-test.hpp"
#include "poly-test.hpp"
#include "quad-test.hpp"
#include "sin-test.hpp"

int main( int argc, char* argv[] )
{
    int result = Catch::Session().run( argc, argv );

    return result;
}
