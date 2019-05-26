//
// Created by ayesdie on 25/5/19.
//

#include <alt.hpp>
#include "catch.hpp"

using namespace std;
using namespace alt;
using namespace alt::sort;

TEST_CASE("InsertionSortTest", "[InsertionSortTest]")
{
  vector<int> X({4, 9, 1, 3, 8, 6});
  vector<int> sortedX({1, 3, 4, 6, 8, 9});

  // Calls the function
  InsertionSort(X);

  // Checks the Result
  for (int i = 0; i < X.size(); ++i)
  {
    REQUIRE(sortedX[i] == X[i]);
  }
}