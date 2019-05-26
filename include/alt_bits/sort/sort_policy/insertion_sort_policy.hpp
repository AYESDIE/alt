//
// author: ayesdie
//

#ifndef ALT_SORT_SORT_POLICY_INSERTION_SORT_POLICY_HPP
#define ALT_SORT_SORT_POLICY_INSERTION_SORT_POLICY_HPP

namespace alt
{
namespace sort
{

class InsertionSortPolicy
{
public:
  InsertionSortPolicy()
  { /* this does nothing */ }

  template <typename VecType>
  InsertionSortPolicy(std::vector<VecType>&,
                      bool non_decreasing = true);
};

} // namespace sort
} // namespace alt

#endif //ALT_SORT_SORT_POLICY_INSERTION_SORT_POLICY_HPP

#include "insertion_sort_policy_impl.hpp"
