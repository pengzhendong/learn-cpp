#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  vector<int> v;
  v.push_back(1);
  v.empty();  // Should be v.clear() here.
  cout << v.size() << endl;
  return 0;
}
