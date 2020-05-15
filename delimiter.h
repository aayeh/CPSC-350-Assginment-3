#include <iostream>

using namespace std;

class delimiter
{
public:
  delimiter();
  delimiter(string filePath);
  ~delimiter();

  char getCharVal(char d);
};
