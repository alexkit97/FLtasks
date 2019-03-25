#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<class T, class U>
auto combine(T a, U b) {
  vector<pair<T,U>> c;

  int length;

  if (a.size() < b.size()) {
    length = a.size();
  } else {
    length = b.size();
  }

  for (int i = 0; i < length; ++ i) {
    c.emplace_back(a[i],b[i]);
  }


  return c;
};



int main() {
  vector<int> a;
  a.push_back(2);
  a.push_back(3);

  vector<char> b;
  b.push_back('b');
  b.push_back('d');


  auto c = combine(a,b);
  cout << typeid(c).name() << endl;

  return 0;
}
