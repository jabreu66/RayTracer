#include "Tuples.hpp"
#include <iostream>
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_approx.hpp> 

// UNIT TESTS

using catch_approx = Catch::Approx;

SCENARIO("A tuple with w = 1.0 is a point", "[tuple]") {
    GIVEN("a ← tuple(4.3, -4.2, 3.1, 1.0)") {
        Tuples a{4.3f, -4.2f, 3.1f, 1.0f};

        THEN("a.x = 4.3")         { REQUIRE(a.getTuple()[0] == catch_approx(4.3f)); }
        THEN("a.y = -4.2")        { REQUIRE(a.getTuple()[1] == catch_approx(-4.2f)); }
        THEN("a.z = 3.1")         { REQUIRE(a.getTuple()[2] == catch_approx(3.1f)); }
        THEN("a.w = 1.0")         { REQUIRE(a.getTuple()[3] == catch_approx(1.0f)); }

        THEN("a is a point")      { REQUIRE( a.isPoint()   ); }
        THEN("a is not a vector") { REQUIRE_FALSE(a.isVector()); }
    }
}

SCENARIO("A tuple with w = 0.0 is a vector", "[tuple]") {
    GIVEN("a ← tuple(4.3, -4.2, 3.1, 0.0)") {
        Tuples a{4.3f, -4.2f, 3.1f, 0.0f};

        THEN("a.x = 4.3")         { REQUIRE(a.getTuple()[0] == catch_approx(4.3f)); }
        THEN("a.y = -4.2")        { REQUIRE(a.getTuple()[1] == catch_approx(-4.2f)); }
        THEN("a.z = 3.1")         { REQUIRE(a.getTuple()[2] == catch_approx(3.1f)); }
        THEN("a.w = 0.0")         { REQUIRE(a.getTuple()[3] == catch_approx(0.0f)); }

        THEN("a is not a point")  { REQUIRE_FALSE(a.isPoint()); }
        THEN("a is a vector")     { REQUIRE( a.isVector()   ); }
    }
}

    SCENARIO(" point() creates tuples with w=1", "[point]") {
    GIVEN("p ← point(4, -4, 3)") {
        Tuples a = point(4.0f, -4.0f, 3.0f);

        THEN("p.x = 4")         { REQUIRE(a.getTuple()[0] == catch_approx(4.0f)); }
        THEN("p.y = -4")        { REQUIRE(a.getTuple()[1] == catch_approx(-4.0f)); }
        THEN("p.z = 3")         { REQUIRE(a.getTuple()[2] == catch_approx(3.0f)); }
        THEN("a.w = 1.0")         { REQUIRE(a.getTuple()[3] == catch_approx(1.0f)); }

    }
}