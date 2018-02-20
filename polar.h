//////////////////////////////////////////////////////////////////////
/// @file polar.h
/// @author Daniel Fuchs, CS5201-A
/// @brief Header file for the Polar class
//////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef POLAR_H
#define POLAR_H

//////////////////////////////////////////////////////////////////////
/// @class Polar
/// @brief Template class representing a Polar Number. A Polar Number
/// has two components; one being the real component, or the modulus,
/// and the other being the non-real component, the argument. This
/// class implements a variety of operators, and is intended for use
/// with types of short, int, long, float, and double.
//////////////////////////////////////////////////////////////////////

template <typename T>
class Polar
{
private:
    T m_modulus;   ///< Represents the modulus
    T m_argument;  ///< Represents the argument

public:
    //////////////////////////////////////////////////////////////////////
    /// @fn Polar()
    /// @brief Default Constructor
    /// @pre Type T have a constructor that accepts 0 as an input.
    /// @post m_modulus and m_argument are initialized as zero.
    //////////////////////////////////////////////////////////////////////
    Polar(): m_modulus(0), m_argument(0) {};

    //////////////////////////////////////////////////////////////////////
    /// @fn Polar(const T & modulus, const T & argument)
    /// @brief Constructor
    /// @pre Type T must have a copy constructor.
    /// @post m_modulus and m_argument are initialized with the given
    /// parameters.
    /// @param modulus Desired value for m_modulus
    /// @param argument Desired value for m_argument
    //////////////////////////////////////////////////////////////////////
    Polar(const T & modulus, const T & argument):
            m_modulus(modulus), m_argument(argument) {};

    //////////////////////////////////////////////////////////////////////
    /// @fn Polar(const Polar<T> & rhs)
    /// @brief Copy Constructor
    /// @pre Type T must have a copy constructor.
    /// @post Object is initialized as a copy of rhs.
    /// @param rhs The target object to copy
    //////////////////////////////////////////////////////////////////////
    Polar(const Polar<T> & rhs):
            m_modulus(rhs.m_modulus), m_argument(rhs.m_argument) {};

    //////////////////////////////////////////////////////////////////////
    /// @fn ~Polar()
    /// @brief Destructor
    /// @pre None.
    /// @post Object is deallocated.
    //////////////////////////////////////////////////////////////////////
    ~Polar() {};

    //////////////////////////////////////////////////////////////////////
    /// @fn getModulus()
    /// @brief Accessor for m_modulus
    /// @pre None.
    /// @post m_modulus is returned.
    /// @return Type T copy of m_modulus
    //////////////////////////////////////////////////////////////////////
    T getModulus()const { return m_modulus; };

    //////////////////////////////////////////////////////////////////////
    /// @fn getArgument()
    /// @brief Accessor for m_argument
    /// @pre None.
    /// @post m_argument is returned.
    /// @return Type T copy of m_argument
    //////////////////////////////////////////////////////////////////////
    T getArgument()const { return m_argument; };

    //////////////////////////////////////////////////////////////////////
    /// @fn setModulus()
    /// @brief Mutator for m_modulus
    /// @pre Assignment is defined for type T.
    /// @post m_modulus is assigned parameter's value
    /// @param modulus Desired value for m_modulus
    //////////////////////////////////////////////////////////////////////
    void setModulus(const T & modulus) { m_modulus = modulus; };

    //////////////////////////////////////////////////////////////////////
    /// @fn setArgument()
    /// @brief Mutator for m_argument
    /// @pre Assignment is defined for type T.
    /// @post m_argument is assigned parameter's value
    /// @param argument Desired value for m_argument
    //////////////////////////////////////////////////////////////////////
    void setArgument(const T * argument) { m_argument = argument; };

    //////////////////////////////////////////////////////////////////////
    /// @fn operator=(const Polar<T> & rhs)
    /// @brief Operator= Overload
    /// @pre Assignment is defined for Type T.
    /// @post Calling object is set to equal given parameter.
    /// @param rhs Polar to be assigned
    /// @return Reference to calling object
    //////////////////////////////////////////////////////////////////////
    Polar<T> & operator=(const Polar<T> & rhs);

    //////////////////////////////////////////////////////////////////////
    /// @fn operator*(const Polar<T> & rhs)const
    /// @brief Operator* Overload
    /// @pre Multiplication and Addition are defined for Type T.
    /// @post Polar is returned with a modulus equal to the product
    /// of the calling object's modulus and rhs's modulus, and with a
    /// argument equal to the sum of the two arguments.
    /// @param rhs Polar to be multiplied with calling object
    /// @return Polar with specified values
    //////////////////////////////////////////////////////////////////////
    Polar<T> operator*(const Polar<T> & rhs)const;

    //////////////////////////////////////////////////////////////////////
    /// @fn operator/(const Polar<T> & rhs)const
    /// @brief Operator/ Overload
    /// @pre Division and Subtraction are defined for Type T.
    /// @post Polar is returned with a modulus equal to the quotient
    /// of the calling object's modulus and rhs's modulus, and with a
    /// argument equal to the difference of the two arguments.
    /// @param rhs Polar to be divided from calling object
    /// @return Polar with specified values
    //////////////////////////////////////////////////////////////////////
    Polar<T> operator/(const Polar<T> & rhs)const;

    //////////////////////////////////////////////////////////////////////
    /// @fn operator~()
    /// @brief Determines the magnitude of the calling object
    /// @pre T is a numeric type compatible with cmath::abs()
    /// @post Absolute value of m_modulus is computed and returned
    /// @return Type T non-negative number
    //////////////////////////////////////////////////////////////////////
    T operator~()const;

    //////////////////////////////////////////////////////////////////////
    /// @fn operator-()
    /// @brief Determines the negation of the calling object
    /// @pre Negation is defined for type T.
    /// @post Negation of calling object is returned; the modulus's sign
    /// is inverted.
    /// @return Polar with modulus negated
    //////////////////////////////////////////////////////////////////////
    Polar<T> operator-()const;

    //////////////////////////////////////////////////////////////////////
    /// @fn operator!()
    /// @brief Determines the conjugate of the calling object
    /// @pre Negation is defined for type T.
    /// @post Conjugate of calling object is returned; the argument's sign
    /// is inverted.
    /// @return Polar with argument negated
    //////////////////////////////////////////////////////////////////////
    Polar<T> operator!()const;

    //////////////////////////////////////////////////////////////////////
    /// @fn operator[](int index)const
    /// @brief Operator[] Overload
    /// @pre Index is expected to equal 0 or 1.
    /// @post If index is not 0 or 1, exception (type int) is thrown. If
    /// index = 0, m_modulus is returned; otherwise return m_argument.
    /// @param index Desired member variable to access
    /// @return Type T constant reference to m_modulus or m_argument
    //////////////////////////////////////////////////////////////////////
    const T & operator[](int index)const;

    //////////////////////////////////////////////////////////////////////
    /// @fn operator<(const Polar<T> & rhs)const
    /// @brief Operator< Overload
    /// @pre cmath::abs() and Operator< are defined for type T
    /// @post Returns true if calling object's |modulus| is less than
    /// rhs's |modulus|, false otherwise.
    /// @param rhs Polar to compare calling object to
    /// @return Boolean value
    //////////////////////////////////////////////////////////////////////
    bool operator<(const Polar<T> & rhs)const;

    //////////////////////////////////////////////////////////////////////
    /// @fn operator>(const Polar<T> & rhs)const
    /// @brief Operator> Overload
    /// @pre cmath::abs() and Operator> are defined for type T
    /// @post Returns true if calling object's |modulus| is greater than
    /// rhs's |modulus|, false otherwise.
    /// @param rhs Polar to compare calling object to
    /// @return Boolean value
    //////////////////////////////////////////////////////////////////////
    bool operator>(const Polar<T> & rhs)const;

    //////////////////////////////////////////////////////////////////////
    /// @fn operator==(const Polar<T> & rhs)const
    /// @brief Operator== Overload
    /// @pre cmath::abs() and Operator== are defined for type T
    /// @post Returns true if calling object's |modulus| is equal to the
    /// rhs's |modulus|, false otherwise.
    /// @param rhs Polar to compare calling object to
    /// @return Boolean value
    //////////////////////////////////////////////////////////////////////
    bool operator==(const Polar<T> & rhs)const;

    //////////////////////////////////////////////////////////////////////
    /// @fn operator!=(const Polar<T> & rhs)const
    /// @brief Operator!= Overload
    /// @pre cmath::abs() and Operator!= are defined for type T
    /// @post Returns true if calling object's |modulus| is not equal to
    /// rhs's |modulus|, false otherwise.
    /// @param rhs Polar to compare calling object to
    /// @return Boolean value
    //////////////////////////////////////////////////////////////////////
    bool operator!=(const Polar<T> & rhs)const;

    //////////////////////////////////////////////////////////////////////
    /// @fn operator<<(ostream & os, const Polar<S> & rhs)
    /// @brief Operator<< Overload
    /// @pre Operator<< is defined for type T. Function is intended for
    /// use with cout.
    /// @post Sends "(m_modulus, m_argument)" into stream.
    /// @param rhs Polar to output
    /// @param os Output stream
    /// @return Reference to output stream passed
    //////////////////////////////////////////////////////////////////////
    template <typename S>
    friend ostream & operator<<(ostream & os, const Polar<S> & rhs);

    //////////////////////////////////////////////////////////////////////
    /// @fn operator>>(istream & is, Polar<S> & rhs)
    /// @brief Operator>> Overload
    /// @pre Operator>> is defined for type T. Function is intended for
    /// use with cin. Values incoming from stream must be compatible
    /// with assignment to type T.
    /// @post Assigns received parameters into m_modulus and m_argument.
    /// If only one value is provided, an exception (type int) is thrown.
    /// If either insertion fails, an exception (type int) is thrown.
    /// @param rhs Polar to store values in
    /// @param is Input stream
    /// @return Reference to input stream passed
    //////////////////////////////////////////////////////////////////////
    template <typename S>
    friend istream & operator>>(istream & is, Polar<S> & rhs);
};

#endif

#include "polar.hpp"