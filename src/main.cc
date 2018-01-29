#include <iostream>
#include "exceptions.h"
#include "Lab3.h"
#include <string>

using namespace std;

int main() {

    string testString = "TEST_STRING";
    string badKey = "BAD_KEY";

    int badIndex = 23;

    try {
      // throw ContainerEmptyException();
      // throw KeyNotFoundException();
      throw InvalidIndexException();
    }

    // catch (ContainerEmptyException e) {
    //   cout << e.toString();
    // }

    // catch (KeyNotFoundException e) {
    //   // e.storeKey(badKey);
    //   cout << e.toString(badKey) << endl;
    // }

    catch (InvalidIndexException e) {
        // e.storeIndex(10);
        cout << e.toString(badIndex) << endl;
    }

    // cout << testString << endl;

    return 0;
}
