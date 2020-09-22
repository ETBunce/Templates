/*
Ethan Bunce
Assignment 1 - Range
CS 2420
Spring 2020
Version 1.0
*/

#include <iostream>
#include <string>
#include "range.h"

using namespace std;

// boolToString
// Simply expresses a bool as "True" or "False"
string boolToString(bool a) {
    if (a) { return "True"; }
    else { return "False"; }
}

/* Main will test various Range with various data types and parameters */
int main() {

    /* Int Ranges */
    Range<int> intRange1(5,10);
    Range<int> intRange2(3,12,3);
    Range<int> intRange3(7,-5,-2);

    /* Float Ranges */
    Range<float> floatRange1(4.2,15);
    Range<float> floatRange2(2.1,3.1,0.2);
    Range<float> floatRange3(5,3,-0.1);

    /* Double Ranges */
    Range<double> doubleRange1(1.5,6);
    Range<double> doubleRange2(1.2,1.3,0.02);
    Range<double> doubleRange3(4,-3,-2.3);


    /* INT RANGES */
    cout << "-----------" << endl;
    cout << "Int Ranges" << endl;
    cout << "- - - - - -" << endl;

    cout << "[Range 1] " << intRange1 << endl;
    cout
        << "Length: " << intRange1.length()
        << "  Sum: " << intRange1.sum()
        << "  Average: " << intRange1.average()
        << "  Max: " << intRange1.max()
        << "  Min: " << intRange1.min()
        << "  Contains 7: " << boolToString(intRange1.contains(7)) << endl; // 7 because it's lucky
    vector<int> v1 = intRange1.values();
    cout << "Vector:";
    for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++) {
        cout << " " << *i;
    }
    cout << endl;

    cout << "[Range 2] " << intRange2 << endl;
    cout
        << "Length: " << intRange2.length()
        << "  Sum: " << intRange2.sum()
        << "  Average: " << intRange2.average() << endl;

    cout << "[Range 3] " << intRange3 << endl;
    cout
        << "Max: " << intRange3.max()
        << "  Min: " << intRange3.min()
        << "  Contains 7: " << boolToString(intRange3.contains(7)) << endl; // 7 because it's lucky

    /* FLOAT RANGES */
    cout << endl << "-----------" << endl;
    cout << "Float Ranges" << endl;
    cout << "- - - - - -" << endl;

    cout << "[Range 1] " << floatRange1 << endl;
    cout
        << "Length: " << floatRange1.length()
        << "  Sum: " << floatRange1.sum()
        << "  Average: " << floatRange1.average()
        << "  Max: " << floatRange1.max()
        << "  Min: " << floatRange1.min()
        << "  Contains 7: " << boolToString(floatRange1.contains(7)) << endl; // 7 because it's lucky

    cout << "[Range 2] " << floatRange2 << endl;
    cout
        << "Length: " << floatRange2.length()
        << "  Sum: " << floatRange2.sum()
        << "  Average: " << floatRange2.average() << endl;

    cout << "[Range 3] " << floatRange3 << endl;
    cout
        << "Max: " << floatRange3.max()
        << "  Min: " << floatRange3.min()
        << "  Contains 7: " << boolToString(floatRange3.contains(7)) << endl; // 7 because it's lucky

    /* DOUBLE RANGES */
    cout << endl << "-----------" << endl;
    cout << "Double Ranges" << endl;
    cout << "- - - - - -" << endl;

    cout << "[Range 1] " << doubleRange1 << endl;
    cout
        << "Length: " << doubleRange1.length()
        << "  Sum: " << doubleRange1.sum()
        << "  Average: " << doubleRange1.average()
        << "  Max: " << doubleRange1.max()
        << "  Min: " << doubleRange1.min()
        << "  Contains 7: " << boolToString(doubleRange1.contains(7)) << endl; // 7 because it's lucky

    cout << "[Range 2] " << doubleRange2 << endl;
    cout
        << "Length: " << doubleRange2.length()
        << "  Sum: " << doubleRange2.sum()
        << "  Average: " << doubleRange2.average() << endl;

    cout << "[Range 3] " << doubleRange3 << endl;
    cout
        << "Max: " << doubleRange3.max()
        << "  Min: " << doubleRange3.min()
        << "  Contains 7: " << boolToString(doubleRange3.contains(7)) << endl; // 7 because it's lucky


    return 0;

}