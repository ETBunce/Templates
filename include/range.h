/*
Range
This class simulates a range of numbers and features different
functions to view some facts and properties about them
Ethan Bunce
Version 1.0
*/

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Range {
    T start;
    T end;
    T step;
public:

    int length() { // Returns the number of values within range
        T difference = end - start;
        return int(difference / step) + 1;
    }

    T sum() { // Returns the sum of all values in range
        T total = 0;
        T val = start;
        int count = 0;      // A counter to determine when to stop looping
        int len = length(); // Counter will increment until reaching this number
        do { // Iterate through each value in range
            total += val;
            val += step;
            count++;
        } while (count < len); // Loop for however many values are in range
        return total;
    }
    
    double average() { // Returns the average of all values in range
        return (double)sum() / length();
    }

    T max() { // Returns the highest value in range
        if (start < end) { // Range is in ascending order, so calculate largest
            return start + (length() - 1) * step;
        } else { // Range is in descending order, so start is largest
            return start;
        }
    }

    T min() { // Returns the lowest value in range
        if (start < end) { // Range is in ascending order, so start is smallest
            return start;
        } else { // Range is in descending order, so calculate smallest
            return start + (length() - 1) * step;
        }
    }

    vector<T> values() { // Returns a vector of all values in range
        vector<T> vec;
        T val = start;
        int count = 0;      // A counter to determine when to stop looping
        int len = length(); // Counter will increment until reaching this number
        do { // Iterate through each value in range
            vec.push_back(val);
            val += step;
            count++;
        } while (count < len); // Loop for however many values in range
        return vec;
    }

    bool contains(T checkVal) { // Returns true only if the given value is found in range
        T val = start;
        int count = 0;      // A counter to determine when to stop looping
        int len = length(); // Counter will increment until reaching this number
        do { // Iterate through each value in range
            if (val == checkVal) {
                return true; // Return true if checkVal is found
            }
            val += step;
            count++;
        } while (count < len); // Loop for however many values in range
        return false;
    }

    /* Constructor/Destructor */
    Range(T aStart, T aEnd, T aStep = 1) : start(aStart), end(aEnd), step(aStep) {}
    ~Range() {}

    /* << operator overload */
    friend ostream& operator << (ostream& out, Range& b) {
        T val = b.start;
        int count = 0;      // A counter to determine when to stop looping
        int len = b.length(); // Counter will increment until reaching this number
        do { // Iterate through each value in range
            out << val << " ";
            val += b.step;
            count++;
        } while (count < len); // Loop for however many values in range
        return out;
    }
};