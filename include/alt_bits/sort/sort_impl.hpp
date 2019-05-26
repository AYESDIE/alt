//
// Created by ayesdie on 26/5/19.
//

#ifndef ALT_SORT_SORT_IMPL_HPP
#define ALT_SORT_SORT_IMPL_HPP

#include "sort.hpp"

namespace alt
{
namespace sort
{

template<typename SortPolicy>
template<typename VecType>
Sort<SortPolicy>::Sort(std::vector<VecType> &vec,
                       bool non_decreasing,
                       SortPolicy Sorter)
{
   SortPolicy(vec, non_decreasing);
}

}
}

#endif //ALT_SORT_SORT_IMPL_HPP
