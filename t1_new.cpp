#include <iostream>
#include <vector>
#include <set>
#include <utility>

using namespace std;

template <typename A, typename B>
auto combine(const A &a, const B &b)  {//, A const& b) {
  typename A::const_iterator p1 = a.begin();
  typename B::const_iterator p2 = b.begin();
  int i = 0;

  vector<pair<typename A::value_type, typename B::value_type>> c;
  while (p1 != a.end() && p2 != b.end()) {
    c.push_back(make_pair(*p1,*p2));
    ++p1;
    ++p2;
    cout << c[i].first << " " << c[i].second << endl;
    ++i;
  }
  return c;


/*  for (typename A::const_iterator p1 = a.begin(); p1 != a.end(); ++p1) {
    cout << *p1 << endl;
  }*/
};

int main () {
  set<int> b = {1,2,3};
  vector<char> a = {'a','b','c','d'};
  //vector<pair<int,char>> c;
  auto c = combine(b,a);



}
