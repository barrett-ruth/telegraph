#pragma once

namespace telegraph {

template <typename Node> class graph;

enum class MST;
template <typename Node> [[nodiscard]] graph<Node> mst(MST const &mst);
} // namespace telegraph

enum class telegraph::MST { KRUSKAL, PRIM };

template <typename Node> class telegraph::graph {
public:
  [[nodiscard]] double sparsity() const noexcept;
  [[nodiscard]] bool is_cyclical() const noexcept;

private:
  bool directed;
  bool weighted;
};
