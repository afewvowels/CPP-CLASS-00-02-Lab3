#include <iostream>
#include "exceptions.h"
#include "Lab3.h"
#include <string>
#include <map>

using namespace std;

int main() {

    string testString = "TEST_STRING";
    string badKey = "BAD_KEY";

    int searchIndex = 5;

    map<int,string> testDictionary;
    map<int,string>:: iterator it;

    testDictionary[0] = string("Word1");
    testDictionary[1] = string("Word2");
    testDictionary[2] = string("Word3");

    int badIndex = 23;

    try {
      // throw ContainerEmptyException();
      // throw KeyNotFoundException();
      // throw InvalidIndexException();
      it = testDictionary.find(searchIndex);
      if(it == testDictionary.end())
        throw KeyNotFoundException();
      // testString[25] = 'a';
    }

    // catch (ContainerEmptyException e) {
    //   cout << e.toString();
    // }

    catch (KeyNotFoundException e) {
      // e.storeKey(badKey);
      cout << e.toString(to_string(searchIndex)) << endl;
    }

    // catch (InvalidIndexException e) {
    //     // e.storeIndex(10);
    //     cout << e.toString(badIndex) << endl;
    // }

    // cout << testString << endl;

    catch (string testString) {
      cout << "Invalid index exception\n";
    }

    return 0;
}
