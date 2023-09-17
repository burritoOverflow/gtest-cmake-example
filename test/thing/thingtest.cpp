#include "thing.h"

#include <gtest/gtest.h>

TEST(ThingTests, TestCreateThing) {
  Thing t{};
  EXPECT_EQ(t.GetThingName(), "thing name");
}

TEST(ThingTests, TestChangeThingName) {
  Thing t{};
  std::string thing_name = "foo";
  t.SetThingName(thing_name);
  EXPECT_EQ(t.GetThingName(), thing_name);
  EXPECT_NE(t.GetThingName(), "thing name");  // default thing name
}
