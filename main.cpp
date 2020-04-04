#include <iostream>
#include <fstream>
#include <stack>
#include <string>
#include "GenStack.h"
#include "delimiter.h"

using namespace std;

int main(int argc, char** argv) {
    delimiter d;

    //If no file was specified when running a.out
    if (argc < 2) {
        cout << "ERROR: Please Enter Valid File Input\n" << endl;
    }
    //If a file was specified when running a.out
    else if (argc >= 2) {
        string file = argv[1]; //set file equal to argv
        d.checkBrackets(file); //call checkBrackets from delimiter.cpp
    }

    return 0;
}
