#include <vector>
using namespace std;

class User {
  private:
    string *name;
    vector<string> messages;

  public:
    User (string *n) {
      name = n;
      messages.push_back("hello world!");
    }

    string *getName() {
      return name;
    }

    vector<string> getMessages() {
      return messages;
    }
};
