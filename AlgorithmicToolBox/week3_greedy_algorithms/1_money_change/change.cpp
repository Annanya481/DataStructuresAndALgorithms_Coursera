#include <iostream>

int get_change(int m) {
  //write your code here
  int coins[] = {10, 5, 1};
  int min = 0;

  for(int i=0; m>0; i++){
    min += m/coins[i];
    m %= coins[i];
  }
  return min;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
