/////////////////////////////////////////////////////////////////////////
/// @file driver.cpp
/// @author Daniel Fuchs, CS5201-A
/// @brief This file creates a driver to test the Polar and Norm classes
/// This program expects an input file to be provided. The input is to
/// have an integer representing the number of polar numbers to declare,
/// and then two initial values for each polar number declared. Intended
/// values can be of type short, int, long, float, or double.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "polar.h"
#include "norm.h"
using namespace std;

//////////////////////////////////////////////////////////////////////
/// @fn main(int argc, char* argv[])
/// @brief Driving Function, calculates quotient of first two polars,
/// product of third and fourth polar, conjugate of fifth polar, and
/// outputs the norm of all polars.
/// @pre Filename to be opened is provided as a parameter.
/// @post Outputs all operations over standard output stream.
/// @param argc Number of arguments
/// @param argv Arguments provided
/// @return Returns 0
//////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
    // OPEN FILE STREAM
    ifstream fin;                    //Declare input stream
    if (argc == 2)                   //If filename provided
    {
        string filename = argv[1];   //Store filename
        fin.open(filename.c_str());  //Attempt to open file
    }
    else                             //If arguments invalid
    {
        cerr << "ERROR: Improper Usage. Usage: ./driver filename" << endl;
        exit(1);
    }

    // VERIFY FILE STREAM
    if (!fin)                        //If file could not be opened
    {
        cerr << "ERROR: File not found. Usage: ./driver filename" << endl;
        exit(1);
    }

    // DECLARATIONS
    int numPolars = 0;               //Stores number of polar number
    Polar<double> temp;              //Stores incoming polar number
    vector< Polar<double> > storage; //Stores all specified polar number
    Norm calc_norm;                  //Used to calculate norm of "storage"

    // CREATE POLAR NUMBERS
    try
    {
        if (!(fin >> numPolars)) throw 1;   //If invalid number of polars
        else if(numPolars < 5) throw 1;     //If less than 5 polars
        for (int i = 0; i < numPolars; i++) //For specified amount of polars
        {
            //Note that if ">>" fails for polar objects, an integer is thrown
            fin >> temp;                    //If undefined polar
            storage.push_back(temp);        //Else add to storage
        }
    }
    catch(...) //If polar number creation fails
    {
        cerr << "ERROR: Bad Input" << endl;
        cerr << "Input must begin specifying number of polar number.";
        cerr << " At least 5 polar numbers must be provided." << endl;
        cerr << "Exactly 2 numeric values must be provided for each polar";
        cerr << " number." << endl;
        fin.close(); //Close file stream
        exit(1);
    }
    double normResult = calc_norm(storage); //Norm of all polars

    // OUTPUT
    cout << storage[0]/storage[1] << endl;  //Quotient of 1st + 2nd polar
    cout << storage[2]*storage[3] << endl;  //Product of 3rd + 4th polar
    cout << !storage[4] << endl;            //Conjugate of 5th polar
    cout << setprecision(8) << normResult << endl;


    fin.close(); //Close file stream
    return 0;
}