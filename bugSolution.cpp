#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
  }

  for (int i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;

  vec.push_back(10);

  for (int i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
