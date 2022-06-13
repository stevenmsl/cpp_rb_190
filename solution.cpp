#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <set>
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol190;
using namespace std;

uint32_t Solution::reverseBits(uint32_t n)
{
  uint32_t result = 0;

  for (auto i = 0; i < 32; i++)
  {
    result <<= 1;
    result |= n & 1;
    // cout << result << endl;
    n >>= 1;
  }

  return result;
}