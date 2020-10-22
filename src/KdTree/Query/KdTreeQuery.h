#pragma once

#include <internal/IndexSquaredDistance.h>
#include <static_stack.h>

#define PDPC_KDTREE_MAX_DEPTH 32

namespace pdpc {

class KdTree;

class KdTreeQuery
{
public:
    KdTreeQuery();
    KdTreeQuery(const KdTree* kdtree);

protected:
    const KdTree* m_kdtree;
    static_stack<IndexSquaredDistance, 2*PDPC_KDTREE_MAX_DEPTH> m_stack;
};

} // namespace pdpc