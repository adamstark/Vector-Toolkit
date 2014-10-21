//=======================================================================
/** @file VectorToolkit.h
 *  @brief Useful methods whe working with STL vectors
 *  @author Adam Stark
 *  @copyright Copyright (C) 2014  Adam Stark
 *
 * This file is part of the Vector Toolkit library
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
//=======================================================================

#ifndef VECTOR_TOOLKIT_H
#define VECTOR_TOOLKIT_H

#include <vector>
#include <iostream>

//=======================================================================
/** A collection of useful functions for processing STL vectors */
template <class T>
class VectorToolkit
{
public:
    
    //=============================================================================
    // Boolean functions
    //=============================================================================
    
    /** @Returns true if the vector is empty */
    static bool isEmpty(std::vector<T> v);
    
    /** @Returns true if every element is zero */
    static bool containsOnlyZeros(std::vector<T> v);
    
    /** @Returns true if every element is greater than or equal to zero */
    static bool isAllPositive(std::vector<T> v);

    /** @Returns true if every element is less than or equal to zero */
    static bool isAllNegative(std::vector<T> v);
    
    /** Returns true if a given element is in the vector.
     * @param v the vector to examine
     * @param element the element to look for
     * @returns true if the element is in the vector v
     */
    static bool contains(std::vector<T> v, T element);
    
    //=============================================================================
    // Maxima & Minima
    //=============================================================================
    
    /** Finds the maximum value in a vector.
     * @param v the vector from which to find the maximum value
     * @returns the maximum value in the vector v
     */
    static T max(std::vector<T> v);
    
    /** Finds the index of the maximum value in a vector.
     * @param v the vector from which to find the max index
     * @returns the index of the maximum value in the vector v
     */
    static int maxIndex(std::vector<T> v);
    
    /** Finds the minimum value in a vector.
     * @param v the vector from which to find the minimum value
     * @returns the minimum value in the vector v
     */
    static T min(std::vector<T> v);
    
    /** Finds the index of the minimum value in a vector.
     * @param v the vector from which to find the min index
     * @returns the index of the minimum value in the vector v
     */
    static int minIndex(std::vector<T> v);
    
    //=============================================================================
    // Printing to the console
    //=============================================================================
    
    /** Prints a vector line by line to the console.
     * @param v the vector to print
     */
    static void printVector(std::vector<T> v);
    
    //=============================================================================
    // Useful functions
    //=============================================================================
    
    /** @Returns the last element of the vector */
    static T getLastElement(std::vector<T> v);
    
    /** @Returns the first element of the vector */
    static T getFirstElement(std::vector<T> v);
    
    //=============================================================================
    // Sum, averages, and other statistics
    //=============================================================================
    
    /** Counts the number of occurrences of an element in a given vector.
     * @param v the vector to examine
     * @param element the element to count
     * @returns the number of instances of element in the vector v
     */
    static int countOccurrencesOf(std::vector<T> v,T element);
    
    /** Sums the elements in a vector.
     * @param v the vector to sum
     * @returns the sum of the vector v
     */
    static T sum(std::vector<T> v);
    
    /** Calculates the product of all elements in the vector.
     * NB. this returns a double as it anticipates a potentially large value
     *
     * @param v the vector to calculate the product for
     * @returns the product of the vector v
     */
    static double product(std::vector<T> v);
    
    /** Calculates the arithmetic mean of the elements in a vector
     @param v the vector from which to calculate the arithmetic mean
     * @returns the arithmetic mean of the vector v
     */
    static double mean(std::vector<T> v);
    
    /** Calculates the geometric mean of the elements in a vector
     @param v the vector from which to calculate the geometric mean
     * @returns the geometric mean of the vector v
     */
    static double geometricMean(std::vector<T> v);
    
    /** Calculates the median of the elements in a vector
     @param v the vector from which to calculate the median
     * @returns the median of the vector v
     */
    static double median(std::vector<T> v);
    
    /** Calculates the variance of the elements in a vector
     @param v the vector from which to calculate the variance
     * @returns the variance of the vector v
     */
    static double variance(std::vector<T> v);
    
    /** Calculates the standard deviation of the elements in a vector
     @param v the vector from which to calculate the standard deviation
     * @returns the standard deviation of the vector v
     */
    static double standardDeviation(std::vector<T> v);
    
    /** Calculates the L1-norm of a vector.
     * @param v the vector from which to calculate the norm
     * @returns the L1-norm of the vector
     */
    static double norm1(std::vector<T> v);
    
    /** Calculates the L2-norm of a vector.
     * @param v the vector from which to calculate the norm
     * @returns the L2-norm of the vector
     */
    static double norm2(std::vector<T> v);
    
    /** Calculates the p-norm of a vector.
     * @param v the vector from which to calculate the norm
     * @param p the exponent to use in the calculate of the norm
     * @returns the p-norm of the vector
     */
    static double normP(std::vector<T> v,double p);
    
    /** Calculates the magnitude (just L2-norm) of a vector 
     * @param v the vector from which to calculate the norm
     * @returns the vector magnitude
     */
    static double magnitude(std::vector<T> v);
    
    //=============================================================================
    // In place operations on vectors
    //=============================================================================
    
    /** Sets every element to a specified value
     * @param v the vector to fill with values
     * @param element the value to set each index in the vector to
     */
    static void fillVectorWith(std::vector<T> &v,T element);
    
    /** Multiply every element in a vector by a scalar.
     * @param v the vector to multiply
     * @param scalar the scalar to multiply the vector by
     */
    static void multiplyInPlace(std::vector<T> &v,T scalar);
    
    /** Multiply one vector by another
     * @param v1 the first vector (to be multiplied in place)
     * @param v2 the second vector
     */
    static void multiplyInPlace(std::vector<T> &v1,std::vector<T> v2);
    
    /** Divide every element in a vector by a scalar.
     * @param v the vector to divide
     * @param scalar the scalar to divide the vector by
     */
    static void divideInPlace(std::vector<T> &v,T scalar);
    
    /** Divide one vector by another
     * @param v1 the first vector (to be divided in place)
     * @param v2 the second vector
     */
    static void divideInPlace(std::vector<T> &v1,std::vector<T> v2);
    
    /** Add a value to every element in a vector.
     * @param v the vector to which the value will be added
     * @param value the value to be added to each element of the vector
     */
    static void addInPlace(std::vector<T> &v,T value);
    
    /** Add one vector to another
     * @param v1 the first vector (to be added to in place)
     * @param v2 the second vector
     */
    static void addInPlace(std::vector<T> &v1,std::vector<T> v2);
    
    /** Subtract a value from every element in a vector.
     * @param v the vector from which the value will be subtracted
     * @param value the value to be subtracted from each element of the vector
     */
    static void subtractInPlace(std::vector<T> &v,T value);
    
    /** Subtract one vector from another
     * @param v1 the first vector (to be subtracted from in place)
     * @param v2 the second vector
     */
    static void subtractInPlace(std::vector<T> &v1,std::vector<T> v2);
    
    /** Calculate the absolute value for each element of a vector.
     * @param v the vector to calculate the absolute value on
     */
    static void absInPlace(std::vector<T> &v);
    
    //=============================================================================
    // Operations that return vectors
    //=============================================================================
    
    /** Multiply every element in a vector by a scalar and return a new vector.
     * @param v the vector to multiply
     * @param scalar the scalar to multiply the vector by
     * @returns a vector multiplied by the scalar
     */
    static std::vector<T> multiply(std::vector<T> v,T scalar);
    
    /** Multiply two vectors together.
     * @param v1 the first vector
     * @param v2 the second vector
     * @returns the multiplication of the two vectors
     */
    static std::vector<T> multiply(std::vector<T> v1,std::vector<T> v2);
    
    /** Divide every element in a vector by a scalar and return a new vector.
     * @param v the vector to divide
     * @param scalar the scalar to divide the vector by
     * @returns a vector divided by the scalar
     */
    static std::vector<T> divide(std::vector<T> v,T scalar);
    
    /** Divide one vector by another.
     * @param v1 the first vector
     * @param v2 the second vector
     * @returns the first vector divided by the second
     */
    static std::vector<T> divide(std::vector<T> v1,std::vector<T> v2);
    
    /** Add a value to every element in a vector and return a new vector.
     * @param v the vector to which the value will be added
     * @param value the value to be added to each element of the vector
     * @returns a vector with the value added to every element
     */
    static std::vector<T> add(std::vector<T> v,T value);
    
    /** Add one vector to another.
     * @param v1 the first vector
     * @param v2 the second vector
     * @returns the second vector added to the first
     */
    static std::vector<T> add(std::vector<T> v1,std::vector<T> v2);
    
    /** Subtract a value from every element in a vector and return a new vector.
     * @param v the vector from which the value will be subtracted
     * @param value the value to be subtracted from each element of the vector
     * @returns a vector with the value subtracted from every element
     */
    static std::vector<T> subtract(std::vector<T> v,T value);
    
    /** Subtract one vector from another.
     * @param v1 the first vector
     * @param v2 the second vector
     * @returns the second vector subtracted from the first
     */
    static std::vector<T> subtract(std::vector<T> v1,std::vector<T> v2);
    
    /** Calculate the absolute value for each element of a vector.
     * @param v the vector to calculate the absolute value on
     * @returns a vector containing the absolute values
     */
    static std::vector<T> abs(std::vector<T> v);
    
    
    //=============================================================================
    // Distances and Similarity Measures
    //=============================================================================
    
    /** Calculates the dot product between two vectors.
     * @param v1 the first vector
     * @param v2 the second vector
     * @returns the dot product of the two vectors
     */
    static double dotProduct(std::vector<T> v1,std::vector<T> v2);
    
    /** Calculates the Euclidean distance between two vectors.
     * @param v1 the first vector
     * @param v2 the second vector
     * @returns the Euclidean distance between the two vectors
     */
    static double euclideanDistance(std::vector<T> v1,std::vector<T> v2);
    
    //=============================================================================
    
private:
    VectorToolkit();
};

//=======================================================================
typedef VectorToolkit<float> VTf;
typedef VectorToolkit<double> VTd;
typedef VectorToolkit<int> VTi;
typedef VectorToolkit<long> VTl;

#endif