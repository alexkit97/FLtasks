// Alexandros Kisos, 26/03/2019, Flow Traders Task 2

template <int N, int First = 1, int Second = 1, bool Check = false>
class FibonacciSizedArray:
  FibonacciSizedArray <N, Second, First + Second, (First + Second >= N)> {
  public:
    int Fibonacci_array[N] {};
};

template <int N, int First, int Second>
class FibonacciSizedArray <N, First, Second, true> {
public:
  static_assert(Second == N, "not a Fibonacci");
};

int main () {
  FibonacciSizedArray<3> array_one; // will compile only with this
  //FibonacciSizedArray<54> array_two ; will not compile
}
