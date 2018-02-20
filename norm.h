//////////////////////////////////////////////////////////////////////
/// @file norm.h
/// @author Daniel Fuchs, CS5201-A
/// @brief Implementation file for the Norm class
//////////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include "polar.h"

using namespace std;

#ifndef NORM_H
#define NORM_H

//////////////////////////////////////////////////////////////////////
/// @class Norm
/// @brief Operational Class. Contains a single function used to
/// compute norm of a vector of polar numbers.
//////////////////////////////////////////////////////////////////////

class Norm
{
public:
    //////////////////////////////////////////////////////////////////////
    /// @fn operator()(vector< Polar<T> > & parameters)
    /// @brief Calculates the norm of a given set of Polar numbers.
    /// @pre None
    /// @post Returns sum of all magnitudes of Polar numbers from the
    /// given vector. Makes use of Polar::operator~().
    /// @param parameters A vector of Polar numbers
    /// @return Sum of all Polar number magnitudes. Type returned is the
    /// same type as vector's Polar values.
    //////////////////////////////////////////////////////////////////////
    template<typename T>
    T operator()(vector< Polar<T> > & parameters)
    {
        T sum = 0;
        for (int i = (int)parameters.size() - 1; i >= 0; i--)
        {
            sum = sum + ~parameters[i];
        }
        return sum;
    }
};

#endif