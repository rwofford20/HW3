//
//  read_int.cpp
//  HW03_EX1
//
//  Created by Rachel Wofford on 2/21/18.
//  Copyright © 2018 Rachel Wofford. All rights reserved.
//

/*
 * Write a read_int function with three parameters where:
 *  -the first parameter is the prompt string
 *  -the second parameter is the smallest acceptable integer
 *  -the third parameter is the largest acceptable integer
 * read_int should:
 *  -return the first data value that is within the range specified by parameters 2 and 3
 *  -throw a std::invalid_argument exception if the range of integer values is empty
 *  -if the input is not in a valid format (input stream enters a fail state) the stream should be reset,
 *      the current input line discarded, and the user prompted to try again
 *
 */

#include <iostream>
#include "read_int.hpp"
#include <stdexcept>

using namespace std;

int read_int(const string &prompt, int low, int high)

{
    //Checks if the range is within the capacity of an int variable
    if (low <= -2147483647 || high >= 2147483647)
    {
        throw range_error("Input is out of range");
    }
    //Checks if the range is valid
    else if (low >= high)
    {
        throw invalid_argument("Low value can not be greater than high value");
    }
    
    //Accept user input for a value within the input range
    cout << prompt;
    int input;
    cin >> input;
    
    //Checks that user input is within the given range
    if (input <= low || input >= high)
    {
        throw range_error("Input is not within range");
    }
    
    return input;
}
