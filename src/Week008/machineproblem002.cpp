/* ****************************************************************
 * @author: Nigel San Luis
 * @app name: Hello World
 * @app desc: CS201 - Week 004
 * @history:
 *  - <2019/9/26> | HelloWorld
 *      -- newly created app
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <string>

//#include "_pause.h"

//using namespace std; // <--- Best not to use.

// Constants for the program
constexpr size_t MAXROW{ 5 };
constexpr size_t MAXCOL{ 7 };

// Proto Types
void DisplaySeats(int seats[MAXROW][MAXCOL]);

int main()
{
    int seats[MAXROW][MAXCOL] =
    {
        { 1,2,3,4,5,6,7 },
        { 8,9,10,11,12,13,14 },
        { 15,16,17,18,19,20,21 },
        { 22, 23, 24, 25, 26, 27, 28 },
        { 29, 30, 31, 32, 33, 34, 35 }
    };

    DislaySeats(seats);

    std::cout << std::endl;

    int seatNumber;
    std::cout << "Enter a set number to reserve: ";
    std::cin >> seatNumber;

          seatNumber--;

std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // <---Requires header file <limits>.
    std::cout << "\n\n Press Enter to continue";
    std::cin.get();

    //_pause();

    return 0;
}

void DisplaySeats(int seats[MAXROW][MAXCOL])
{
    for (int row = 0; row < 5; row++)
    {
        
    