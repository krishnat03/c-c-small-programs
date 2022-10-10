#include <iostream>
using namespace std;
 
int main() {
  string text = "this is long string";
  string pattern = "long";
  auto foundIdx = text.find(pattern);
  cout <<"The substring starts from the index: " <<foundIdx << endl;
  return 0;
}