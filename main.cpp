#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol190;

/*
Input: 00000010100101000001111010011100
Output: 00111001011110000010100101000000
Explanation: The input binary string
00000010100101000001111010011100
represents the unsigned integer 43261596, so return 964176192
which its binary representation is 00111001011110000010100101000000.
*/
tuple<uint32_t, uint32_t>
testFixture1()
{
  return make_tuple(43261596, 964176192);
}

/*
Input: 11111111111111111111111111111101
Output: 10111111111111111111111111111111
Explanation: The input binary string 11111111111111111111111111111101
represents the unsigned integer 4294967293, so return 3221225471
which its binary representation is 10101111110010110010011101101001.
*/
tuple<uint32_t, uint32_t>
testFixture2()
{
  return make_tuple(4294967293, 3221225471);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.reverseBits(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.reverseBits(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();

  return 0;
}