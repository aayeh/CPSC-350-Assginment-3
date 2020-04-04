#include <iostream>
#include <stack>
#include <string>
#include <fstream>
using namespace std;

class delimiter {
    private:

    public:
        delimiter(); //Constructor
        ~delimiter(); //Destructor

        int checkBrackets(string file); //checkBrackets takes in string file from main.cpp
};
