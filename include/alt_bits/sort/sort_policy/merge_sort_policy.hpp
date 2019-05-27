//
// Created by ayesdie on 27/5/19.
//

#ifndef ALT_SORT_SORT_POLICY_MERGE_SORT_POLICY_HPP
#define ALT_SORT_SORT_POLICY_MERGE_SORT_POLICY_HPP

namespace alt
{
namespace sort
{

class MergeSortPolicy
{
public:
  MergeSortPolicy()
  { /* this does nothing */ }

  template <typename VecType>
  MergeSortPolicy(std::vector<VecType>&,
            bool non_decreasing = true);

private:
  template <typename VecType>
  MergeSortPolicy(std::vector<VecType>&,
            const size_t,
            const size_t,
            bool non_decreasing = true);

  template <typename VecType>
  void Merge(std::vector<VecType>&,
             const size_t,
             const size_t,
             const size_t,
             bool non_decreasing = true);
};

} // namespace sort
} // namespace alt

#include "merge_sort_policy_impl.hpp"

#endif //ALT_SORT_SORT_POLICY_MERGE_SORT_POLICY_HPP
