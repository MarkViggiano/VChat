#include <iostream>
#include "utils/keyGenerator.hh"
#include "users/User.hh"
using namespace std;

int main() {
  cout << "Works for me!" << endl;
  cout << generateNewKey() << endl;
  string name;
  cout << "Username:";
  cin >> name;
  User testUser(name);
  cout << testUser.getName() << endl;
  cout << testUser.getMessages()[0];
  return 0;
}
