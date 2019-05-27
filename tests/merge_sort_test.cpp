//
// author: ayesdie
//

#include <alt.hpp>
#include "catch.hpp"

using namespace std;
using namespace alt;
using namespace alt::sort;

TEST_CASE("MergeSortTest", "[MergeSortTest]")
{
  vector<int> X({4, 9, 1, 3, 8, 6});
  vector<int> sortedX({1, 3, 4, 6, 8, 9});

  // Calls the function
  Sort<MergeSortPolicy>(X, true, MergeSortPolicy());

  // Checks the Result
  for (int i = 0; i < X.size(); ++i)
  {
    REQUIRE(sortedX[i] == X[i]);
  }

  // Calls the function
  Sort<MergeSortPolicy>(X, false, MergeSortPolicy());

  // Checks the Result
  for (int j = 0; j < X.size(); ++j)
  {
    REQUIRE(sortedX[X.size() - j - 1] == X[j]);
  }

  for (int j = 0; j < X.size(); ++j) {
    cout << X[j] << " ";
  }

}