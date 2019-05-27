//
// Created by ayesdie on 26/5/19.
//

#ifndef ALT_SORT_SORT_HPP
#define ALT_SORT_SORT_HPP

#include "sort_policy/insertion_sort_policy.hpp"
#include "sort_policy/merge_sort_policy.hpp"

namespace alt
{
namespace sort
{

template <typename SortPolicy>
class Sort
{
public:
  template <typename VecType>
  Sort(std::vector<VecType>& vec,
       bool non_decreasing,
       SortPolicy Sorter);
};

}
}

#include "sort_impl.hpp"
#include "sort_templates.hpp"

#endif //ALT_SORT_SORT_HPP
