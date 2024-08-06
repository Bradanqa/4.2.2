#include "List.h"
#include <catch2/catch_test_macros.hpp>
#include <cstdint>


TEST_CASE("PushBack", "[List]")
{
   List list;
   REQUIRE(list.Empty());

   list.PushBack(1);
   REQUIRE(list.Size() == 1);

   list.PushBack(2);
   REQUIRE(list.Size() == 2);

   list.PushBack(3);
   REQUIRE(list.Size() == 3);

   REQUIRE(list.PopFront() == 1);
   REQUIRE(list.PopFront() == 2);
   REQUIRE(list.PopFront() == 3);
   REQUIRE(list.Empty());
}

TEST_CASE("PushFront", "[List]")
{
   List list;
   REQUIRE(list.Empty());

   list.PushFront(1);
   REQUIRE(list.Size() == 1);

   list.PushFront(2);
   REQUIRE(list.Size() == 2);

   list.PushFront(3);
   REQUIRE(list.Size() == 3);

   REQUIRE(list.PopFront() == 3);
   REQUIRE(list.PopFront() == 2);
   REQUIRE(list.PopFront() == 1);
   REQUIRE(list.Empty());
}

TEST_CASE("PopBack on empty list", "[List]")
{
   List list;
   REQUIRE_THROWS(list.PopBack());
}

TEST_CASE("PopFront on empty list", "[List]")
{
   List list;
   REQUIRE_THROWS(list.PopFront());
}

TEST_CASE("List Tests", "[List]")
{
   List list;

   list.PushBack(1);
   list.PushFront(2);
   list.PushBack(3);

   REQUIRE(list.Size() == 3);

   REQUIRE(list.PopBack() == 3);
   REQUIRE(list.PopFront() == 2);
   REQUIRE(list.PopBack() == 1);

   REQUIRE(list.Empty());

   list.PushFront(1);
   list.PushBack(2);

   REQUIRE(list.Size() == 2);

   REQUIRE(list.PopBack() == 2);
   REQUIRE(list.PopFront() == 1);

   REQUIRE(list.Empty());
}