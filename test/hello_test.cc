#include <gtest/gtest.h>

#include "telegraph/graph/graph.hh"
#include "telegraph/mst/mst.hh"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  telegraph::graph<int> G;
  // works once kruskal() is actually defined
  // graph<int> spanning_tree = telegraph::mst::kruskal(G);

  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}
