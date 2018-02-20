//////////////////////////////////////////////////////////////////////
/// @file polar.hpp
/// @author Daniel Fuchs, CS5201-A
/// @brief Template function file for the Polar class
//////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

#ifndef POLAR_HPP
#define POLAR_HPP

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator=(const Polar<T> & rhs)
/// @brief Operator= Overload
/// @pre Assignment is defined for Type T.
/// @post Calling object is set to equal given parameter.
/// @param rhs Polar to be assigned
/// @return Reference to calling object
//////////////////////////////////////////////////////////////////////
template <typename T>
Polar<T> & Polar<T>::operator=(const Polar<T> & rhs)
{
    m_modulus = rhs.m_modulus;
    m_argument = rhs.m_argument;
    return *this;
}

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator*(const Polar<T> & rhs)const
/// @brief Operator* Overload
/// @pre Multiplication and Addition are defined for Type T.
/// @post Polar is returned with a modulus equal to the product
/// of the calling object's modulus and rhs's modulus, and with a
/// argument equal to the sum of the two arguments.
/// @param rhs Polar to be multiplied with calling object
/// @return Polar with specified values
//////////////////////////////////////////////////////////////////////
template <typename T>
Polar<T> Polar<T>::operator*(const Polar<T> & rhs)const
{
    Polar<T> temp(*this);
    temp.m_modulus = temp.m_modulus * rhs.m_modulus;
    temp.m_argument = temp.m_argument + rhs.m_argument;
    return temp;
}

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator/(const Polar<T> & rhs)const
/// @brief Operator/ Overload
/// @pre Division and Subtraction are defined for Type T.
/// @post Polar is returned with a modulus equal to the quotient
/// of the calling object's modulus and rhs's modulus, and with a
/// argument equal to the difference of the two arguments.
/// @param rhs Polar to be divided from calling object
/// @return Polar with specified values
//////////////////////////////////////////////////////////////////////
template <typename T>
Polar<T> Polar<T>::operator/(const Polar<T> & rhs)const
{
    Polar<T> temp(*this);
    temp.m_modulus = temp.m_modulus / rhs.m_modulus;
    temp.m_argument = temp.m_argument - rhs.m_argument;
    return temp;
}

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator~()const
/// @brief Determines the magnitude of the calling object
/// @pre T is a numeric type compatible with cmath::abs()
/// @post Absolute value of m_modulus is computed and returned
/// @return Type T non-negative number
//////////////////////////////////////////////////////////////////////
template <typename T>
T Polar<T>::operator~()const
{
    return abs(m_modulus);
}

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator-()const
/// @brief Determines the negation of the calling object
/// @pre Negation is defined for type T.
/// @post Negation of calling object is returned; the modulus's sign
/// is inverted.
/// @return Polar with modulus negated
//////////////////////////////////////////////////////////////////////
template <typename T>
Polar<T> Polar<T>::operator-()const
{
    Polar<T> temp(-m_modulus, m_argument);
    return temp;
}

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator!()const
/// @brief Determines the conjugate of the calling object
/// @pre Negation is defined for type T.
/// @post Conjugate of calling object is returned; the argument's sign
/// is inverted.
/// @return Polar with argument negated
//////////////////////////////////////////////////////////////////////
template <typename T>
Polar<T> Polar<T>::operator!()const
{
    Polar<T> temp(m_modulus, -m_argument);
    return temp;
}

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator[](int index)const
/// @brief Operator[] Overload
/// @pre Index is expected to equal 0 or 1.
/// @post If index is not 0 or 1, exception (type int) is thrown. If
/// index = 0, m_modulus is returned; otherwise return m_argument.
/// @param index Desired member variable to access
/// @return Type T constant reference to m_modulus or m_argument
//////////////////////////////////////////////////////////////////////
template <typename T>
const T & Polar<T>::operator[](int index)const
{
    if (index == 0) return m_modulus;
    else if (index == 1) return m_argument;
    else
    {
        cerr << "ERROR: Invalid [] Read on type Polar" << endl;
        throw index;
    }
}

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator<(const Polar<T> & rhs)const
/// @brief Operator< Overload
/// @pre cmath::abs() and Operator< are defined for type T
/// @post Returns true if calling object's |modulus| is less than
/// rhs's |modulus|, false otherwise.
/// @param rhs Polar to compare calling object to
/// @return Boolean value
//////////////////////////////////////////////////////////////////////
template <typename T>
bool Polar<T>::operator<(const Polar<T> & rhs)const
{
    return (abs(m_modulus) < abs(rhs.m_modulus));
}

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator>(const Polar<T> & rhs)const
/// @brief Operator> Overload
/// @pre cmath::abs() and Operator> are defined for type T
/// @post Returns true if calling object's |modulus| is greater than
/// rhs's |modulus|, false otherwise.
/// @param rhs Polar to compare calling object to
/// @return Boolean value
//////////////////////////////////////////////////////////////////////
template <typename T>
bool Polar<T>::operator>(const Polar<T> & rhs)const
{
    return (abs(m_modulus) > abs(rhs.m_modulus));
}

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator==(const Polar<T> & rhs)const
/// @brief Operator== Overload
/// @pre cmath::abs() and Operator== are defined for type T
/// @post Returns true if calling object's |modulus| is equal to the
/// rhs's |modulus|, false otherwise.
/// @param rhs Polar to compare calling object to
/// @return Boolean value
//////////////////////////////////////////////////////////////////////
template <typename T>
bool Polar<T>::operator==(const Polar<T> & rhs)const
{
    return (abs(m_modulus) == abs(rhs.m_modulus));
}

//////////////////////////////////////////////////////////////////////
/// @fn Polar<T>::operator!=(const Polar<T> & rhs)const
/// @brief Operator!= Overload
/// @pre cmath::abs() and Operator!= are defined for type T
/// @post Returns true if calling object's |modulus| is not equal to
/// rhs's |modulus|, false otherwise.
/// @param rhs Polar to compare calling object to
/// @return Boolean value
//////////////////////////////////////////////////////////////////////
template <typename T>
bool Polar<T>::operator!=(const Polar<T> & rhs)const
{
    return (abs(m_modulus) != abs(rhs.m_modulus));
}

//////////////////////////////////////////////////////////////////////
/// @fn operator<<(ostream & os, const Polar<T> & rhs)
/// @brief Operator<< Overload
/// @pre Operator<< is defined for type T. Function is intended for
/// use with cout.
/// @post Sends "(m_modulus, m_argument)" into stream.
/// @param rhs Polar to output
/// @param os Output stream
/// @return Reference to output stream passed
//////////////////////////////////////////////////////////////////////
template <typename T>
ostream & operator<<(ostream & os, const Polar<T> & rhs)
{
    os << "(" << rhs.m_modulus << ", " << rhs.m_argument << ")";
    return os;
}

//////////////////////////////////////////////////////////////////////
/// @fn operator>>(istream & is, Polar<T> & rhs)
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
template <typename T>
istream & operator>>(istream & is, Polar<T> & rhs)
{
    if (!(is >> rhs.m_modulus)) throw 1;
    if (!(is >> rhs.m_argument)) throw 1;
    return is;
}

#endif