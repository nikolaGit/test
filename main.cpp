#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const auto odd([] (int i) {	return i % 2 != 0; });

template<typename T>
void quick_remove_at(std::vector<T>& vec, std::size_t idx) {
    if (idx < vec.size()) {
        vec.at(idx) = std::move(vec.back());
        vec.pop_back();
    }
}

template<typename T>
void quick_remove_at(std::vector<T>& vec, typename std::vector<T>::iterator it) {
  if (it != std::end(vec)) {
      *it = std::move(vec.back());
      vec.pop_back();
  }
}



int main()
{

 vector<int> v {123, 456, 789, 100, 200};

quick_remove_at(v,2);

for (auto i : v)
{
	cout << i << " ";
}
cout << endl;

	return 0;
}