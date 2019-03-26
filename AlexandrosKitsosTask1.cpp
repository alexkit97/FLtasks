// Alexandros Kitsos, 26/03/2019, Flow Traders Task 1

#include <iostream>
#include <vector>
#include <set>
#include <utility>

using namespace std;

template <typename A, typename B>
auto combine(const A &a, const B &b)  {
  typename A::const_iterator p1 = a.begin();
  typename B::const_iterator p2 = b.begin();

  vector<pair<typename A::value_type, typename B::value_type>> c;

  while (p1 != a.end() && p2 != b.end()) {
    c.push_back(make_pair(*p1,*p2));
    ++p1;
    ++p2;
  }
  return c;
};

int main () {
  set<int> a = {1,2,3,4,5,6};
  vector<char> b = {'a','b','c','d'};
  auto c = combine(a,b);
}
