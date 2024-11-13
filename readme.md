# readme

## brainstorming

### features

- inspiration: networkx api

- documentation
    - algo/derivations + write up thingy (data - "we chose this graph representation based on these benchmarks we did: xd")

- ease of use
    - simple algos correctly & quickly
- header-only
- flexibility/parameterization
- robust (cycles, negative edge weights, invalid inputs, etc)
- examples - performance comparisons (boost, )
- integrate with STL/STL-like api
  - iterators
- package manager integration
- easy to define ur own graph algorithms using library
  - modular (i.e. do custom shit)
- big objects
- multithreading (?)/parallel processing
  - thread-safe graphs
- niche shit
  - compression

```cpp
/*
    std::vector::{reverse,bidirectional,forward}_iterator
    std::graph::{topo,dfs,bfs}_iterator
    std::tree::{level}_iteratir <- is a bfs iterator - could maybe typedef it for clarity
    - same w/ dfs as preorder - ways to find next? flexibility...
*/
```

### algorithms

- native operator support
- flexible comparators/lambdas and stuff
  - all compile-time validated
- also: **_TREES_**
  - proper polymorphism between calls (i.e. returning `tree` from `graph::{*}`)
  - ^ make compile-time as much as possible

```cc
graph<node>([](const node n) { return n.value; })

// spam parameters -> graph(a, b, c); what if you just want to specify c?
//  - no kwargs in c++
// pass config: graph(config)
// certain specalized classes:


// tree w/ tree-specific algos/apis
// disable certain graph shits
// enable others: level_order
class tree : graph {
    T root;
};

class graph {
    bool directed;
    bool weighted;
    double sparsity();
    bool cyclical();
};

class telegraph {
    graph mst();
};
```

### infra

- `make`
- testing + benchmarking
- documentation (non-dogshit)
  - intellisense-like signature help
  - **_NOT_** doxygen
