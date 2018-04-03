//
//  read_int.hpp
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
 *  -throw a std::invalid_argument exception if the range od integer values is empty
 *  -throw a std::ios_base::failure exception if the input stream enters a bas state (unrecoverable
 *      error) or if the end of file is encountered
 *  -if the input is not in a valid format (input stream enters a fail state) the stream should be reset,
 *      the current input line discarded, and the user prompted to try again
 *
 */

#ifndef read_int_hpp
#define read_int_hpp

#include <stdio.h>
using namespace std;

//Function prototype for readInt
int read_int(const string &prompt, int low, int high);

#endif /* read_int_hpp */
