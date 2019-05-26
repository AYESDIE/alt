//
// Created by ayesdie on 25/5/19.
//

#ifndef ALT_INSERTION_SORT_INSERTION_SORT_HPP
#define ALT_INSERTION_SORT_INSERTION_SORT_HPP

namespace alt
{
namespace sort
{

template <typename VecType>
void InsertionSort(std::vector<VecType>&,
                   bool non_decreasing = true);

} // namespace sort
} // namespace alt

#include "insertion_sort_impl.hpp"

#endif
