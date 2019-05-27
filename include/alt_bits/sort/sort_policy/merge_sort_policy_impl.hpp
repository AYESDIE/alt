//
// Created by ayesdie on 27/5/19.
//

#ifndef ALT_SORT_SORT_POLICY_MERGE_SORT_POLICY_IMPL_HPP
#define ALT_SORT_SORT_POLICY_MERGE_SORT_POLICY_IMPL_HPP

#define INF 100000000

#include "merge_sort_policy.hpp"

namespace alt
{
namespace sort
{
template<typename VecType>
MergeSortPolicy::MergeSortPolicy(std::vector<VecType> &Vec,
                                 bool non_decreasing)
{
  MergeSortPolicy(Vec, 0, size_t(Vec.size() - 1));

  if (!non_decreasing)
    std::reverse(Vec.begin(), Vec.end());
}

template<typename VecType>
MergeSortPolicy::MergeSortPolicy(std::vector<VecType> &Vec,
                                 const size_t p,
                                 const size_t r,
                                 bool non_decreasing)
{
  if (p < r)
  {
    size_t q = (p + r)/2;
    MergeSortPolicy(Vec, p, q);
    MergeSortPolicy(Vec, q + 1, r);
    Merge(Vec, p, q, r);
  }
}

template<typename VecType>
void MergeSortPolicy::Merge(std::vector<VecType> &Vec,
                            const size_t p,
                            const size_t q,
                            const size_t r,
                            bool non_decreasing)
{
  size_t n1 = q - p + 1;
  size_t n2 = r - q;

  std::vector<VecType> L, R;

  for (int i = 0; i < n1 - 1; ++i)
  {
    L.push_back(Vec[p + i - 1]);
  }

  for (int j = 0; j < n2 - 1; ++j)
  {
    R.push_back(Vec[q + j]);
  }

  L.push_back(INF);
  R.push_back(INF);

  size_t i = 0, j = 0;
  for (int k = p; k < r; ++k)
  {
    if (L[i] <= R[j])
    {
      Vec[k] = L[i];
      i = i + 1;
    }
    else
    {
      Vec[k] = R[j];
      j = j + 1;
    }
  }
}

} // namespace sort
} // namespace alt


#endif //ALT_SORT_SORT_POLICY_INSERTION_SORT_POLICY_IMPL_HPP
