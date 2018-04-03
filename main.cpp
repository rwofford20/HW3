/////////////////////////
// Rachel Wofford
// CS 273-1
// 2-21-17
// Homework 3 Problem 1
////////////////////////

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

#include <iostream>
#include "read_int.hpp"
#include <stdexcept>

using namespace std;

int main()

{
    do{
        int low, high;
        cout << "Enter the range of values to read.\n";
        cout << "high: ";
        cin >> high;
        cout << "low: ";
        cin >> low;

        try {
            int number = read_int("Please enter a number within the range: ", low, high);
            cout << "You entered " << number << endl;
        }
        //Catch statement if the range is not valid
        catch (invalid_argument &e) {
            cerr << "Exception: You supplied an invalid argument for read_int!" << endl;
        }
        //Catch statement if the user's input is not within the range that an int variable can store
        //or if the user's input is not in the range they provided
        catch (range_error &f) {
            cerr << "Exception: You supplied an invalid argument for read_int!" << endl; 
        }
        //Catch statement that identifies invalid inputs
        catch (ios_base::failure &g) {
            //Informs user that input is invalid
            cout << "Invalid input." << endl;
            //Clears the input so user can input a new value
            cin.clear();
            cin.ignore(numeric_limits<int>::max(), '\n');
        }
    } while(true);
    
}
