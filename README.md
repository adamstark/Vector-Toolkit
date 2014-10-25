Vector Toolkit
==============

A toolkit of useful functions for processing C++ STL vectors. It contains over 50 functions to help quickly process vectors of numbers.

Author
------

Vector Toolkit is developed and maintained by Adam Stark.

Usage
-----

Vector Toolkit can be used with the following types:

	int
	float	
	double
	long

For each type, there is a shorthand typedef: 

- VTi
- VTf
- VTd
- VTl 

E.g. For integers:

	// create a vector counting from 0 to 99
	std::vector<int> x = VTi::range(100);
	
	// calculate the mean
	double mean = VTi::mean(x);
	
	// calculate the standard deviation
	double std = VTi::standardDeviation(x);
	
	// calculate the maximum index
	int maxIndex = VTi::maxIndex(x);

	// multiply every element by 4
	std::vector<int> y = VTi::multiply(x,4);
	
	// calcualte the Euclidean distance between the two vectors
	double distance = VTi::euclideanDistance(x,y);
	
E.g. For floats:

	// create a vector counting from 0 to 99
	std::vector<float> x = VTf::range(100);
	
	// calculate the mean
	double mean = VTf::mean(x);
	
	// calculate the standard deviation
	double std = VTf::standardDeviation(x);
	
	// calculate the maximum index
	int maxIndex = VTf::maxIndex(x);

	// multiply every element by 4
	std::vector<float> y = VTf::multiply(x,4.0);
	
	// calcualte the Euclidean distance between the two vectors
	double distance = VTf::euclideanDistance(x,y);

E.g. For doubles:

	// create a vector counting from 0 to 99
	std::vector<double> x = VTd::range(100);
	
	// calculate the mean
	double mean = VTd::mean(x);
	
	// calculate the standard deviation
	double std = VTd::standardDeviation(x);
	
	// calculate the maximum index
	int maxIndex = VTd::maxIndex(x);

	// multiply every element by 4
	std::vector<double> y = VTd::multiply(x,4.0);
	
	// calcualte the Euclidean distance between the two vectors
	double distance = VTd::euclideanDistance(x,y);

E.g. For long:

	// create a vector counting from 0 to 99
	std::vector<long> x = VTl::range(100);
	
	// calculate the mean
	double mean = VTl::mean(x);
	
	// calculate the standard deviation
	double std = VTl::standardDeviation(x);
	
	// calculate the maximum index
	int maxIndex = VTl::maxIndex(x);

	// multiply every element by 4
	std::vector<long> y = VTl::multiply(x,4.0);
	
	// calcualte the Euclidean distance between the two vectors
	double distance = VTl::euclideanDistance(x,y);


Example Functions
-----------------

The following are some example functions that the toolkit includes:

**Simple info about a vector:**

- sum()
- max()
- min()
- maxIndex()
- minIndex()

**Simple statistics:**

- mean()
- median()
- standardDeviation()
- variance()

**Working with scalars or other vectors:**

- multiply()
- divide()
- add()
- subtract()

**Distance and Similarity:**

- euclideanDistance()
- cosineSimilarity()
- cosineDistance()

**Other Handy Things:**

- getEvenElements()
- getOddElements()
- printVector()
- isAllPositiveOrZero()
- contains()
- reverse()

and lots of other functions of these types.


Version History
---------------

**v1.0.4 - 25/10/2014**

- Updated documentation

**v1.0.3 - 25/10/2014**

- Added unit tests
- Added vector scaling
- Added functions for quickly creating vectors

**v1.0.2 - 22/10/2014**

- Updated documentation

**v1.0.1 - 22/10/2014**

- First full version


License
-------

Copyright (c) 2014 Adam Stark

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.