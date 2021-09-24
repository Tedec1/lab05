/*
 * main.cpp
 *
 * Author: C. Painter-Wakefield
 *
 * main() function for the Mondrian lab - handles user interface, creates Mondrian
 * object, and requests a painting.
 *
 * Last modified: 2/7/2019
 */

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>

#include "mondrian.h"

using namespace std;

int main() {
    cout << "Welcome to Mondrian!" << endl;
    cout << "====================" << endl;
    cout << endl;

    // get the output filename
    string filename;
    do {
        cout << "Please enter the filename for the picture you wish to create (with a .png extension):" << endl;
        getline(cin, filename);
    } while (filename.empty());

    // get picture dimensions
    int width = 0, height = 0;
    string input;
    cout << "How big would you like to make your picture?" << endl;
    do {
        cout << "Please enter the width and height, e.g., '200 100':" << endl;
        getline(cin, input);
        istringstream sin(input);
        sin >> width >> height;
        if (width <= 0 || height <= 0) {
            cout << "I can't make a picture of that size!" << endl;
            width = height = 0;
        }
    } while (width == 0);

    cout << endl;
    cout << "Please wait, we are painting your picture..." << endl;

    Mondrian artist;
    artist.paint(filename, width, height);

    cout << endl;
    cout << "Your picture is ready!" << endl;

    return 0;
}
