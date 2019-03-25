#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<int size>
class FibonacciSizedArray {
private:
  int input_size;
  vector<int> array;
public:
  FibonacciSizedArray<size> () :input_size(size){
        create_array(size);

        for (int i = 0; i < array.size(); ++i) {
          cout << array[i] << " " ;
        }
        try{
          if (array.back() != size){
            throw string("error");
          }
        }
        catch(string e) {
          cout << e << endl;
        }

        //cout << array.back() << endl;
  }
  // creates array with the fibonacci elements up to the required value
  void create_array (int length) {
    int first = 0;
    int second = 1;
    int next =  first + second;

    array.push_back(first);
    array.push_back(second);



    while(next <= length) {
      array.push_back(next);
      first = second;
      second = next;
      next = first + second;
      //cout << array[next];
    }
    //delete first, second, next;
  }
};


int main () {
  FibonacciSizedArray<75024> array;
  return 0;
}
