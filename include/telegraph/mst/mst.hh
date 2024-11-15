#pragma once

#include "telegraph/graph/graph.hh"

namespace telegraph {
namespace mst {

// TODO: auto-determine algorithm - defaulting to kruskal for now
[[nodiscard]] auto mst(auto const &graph) noexcept { return kruskal(graph); };
[[nodiscard]] auto kruskal(auto const &graph) noexcept;
[[nodiscard]] auto prim(auto const &graph) noexcept;

} // namespace mst
} // namespace telegraph
