//
// author: ayesdie
//

#ifndef ALT_SORT_SORT_POLICY_INSERTION_SORT_POLICY_IMPL_HPP
#define ALT_SORT_SORT_POLICY_INSERTION_SORT_POLICY_IMPL_HPP

namespace alt
{
namespace sort
{

template <typename VecType>
InsertionSortPolicy::InsertionSortPolicy(std::vector<VecType>& Vec,
                                         bool non_decreasing)
{
  for (size_t j = 1; j < Vec.size(); ++j) {
    // Insert Vec[j] into the sorted sequence
    // A[0 ... j - 1]
    VecType key = Vec[j];

    size_t i = j - 1;

    while ((i >= 0) && ((non_decreasing) ? (Vec[i] > key) : (Vec[i] < key)))
    {
      Vec[i + 1] = Vec[i];
      i = i - 1;
    }
    Vec[i + 1] = key;
  }
}

} // namespace sort
} // namespace alt


#endif //ALT_SORT_SORT_POLICY_INSERTION_SORT_POLICY_IMPL_HPP
