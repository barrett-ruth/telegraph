#pragma once

#include <unordered_map>
#include <vector>

#include "telegraph/iter/iter.hh"

namespace telegraph {

template <typename Vertex, typename Edge = std::pair<Vertex, Vertex>,
          typename Weight = size_t>
class graph {
  [[nodiscard]] telegraph::iter::vertex_iter<Vertex> V() const noexcept;
  [[nodiscard]] telegraph::iter::edge_iter<Edge> E() const noexcept;

  void push_vertex(Vertex const &v) const noexcept;
  void emplace_vertex(auto &&...args) const noexcept;
  void add_edge(Edge const &e) const noexcept;
  void emplace_edge(auto &&...args) const noexcept;

  [[nodiscard]] telegraph::iter::vertex_iter<Edge>
  outgoing(Vertex const &vertex) const noexcept;
  [[nodiscard]] telegraph::iter::edge_iter<Edge>
  incoming(Vertex const &vertex) const noexcept;

private:
  std::unordered_map<Vertex, std::pair<Vertex, Weight>> adj;
};

} // namespace telegraph
