//
// Created by Aditya Tewari on 10/5/17.
//
#include "../library.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

Rational r = Rational(3, 4);
Rational q = Rational(3, 4);
Rational p = Rational(3, 6);

TEST_CASE("Test Constructor and Equivalence", "[rational]")
{
  REQUIRE(r == q);
}

TEST_CASE("Test Addition", "[rational]")
{
  REQUIRE((r+p) == Rational(18+12, 4* 6));
}

TEST_CASE("Test Subtraction", "[rational]")
{
  REQUIRE((r-p) == Rational(18-12, 4*6));
}

TEST_CASE("Test Multiplication", "[rational]")
{
  REQUIRE((r*p) == Rational(9, 24));
}

TEST_CASE("Test Division", "[rational]")
{
  REQUIRE(r/p == Rational(18, 12));
}
