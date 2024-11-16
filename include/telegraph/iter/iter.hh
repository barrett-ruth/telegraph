#pragma once

namespace telegraph {
namespace iter {

template <typename Vertex> class vertex_iter {
  Vertex const &begin() const noexcept;
  Vertex const &end() const noexcept;
  void operator++(int) {}
  void operator++() {}
};

template <typename Edge> class edge_iter {
  Edge const &begin() const noexcept;
  Edge const &end() const noexcept;
  void operator++(int) {}
  void operator++() {}
};

} // namespace iter
} // namespace telegraph
