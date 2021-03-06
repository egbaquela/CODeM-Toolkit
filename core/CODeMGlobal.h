/****************************************************************************
**
** The MIT License (MIT)
**
** Copyright (c) 2016 The University of Sheffield (www.sheffield.ac.uk)
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in all
** copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
** SOFTWARE
**
****************************************************************************/
#ifndef CODEMGLOBAL_H
#define CODEMGLOBAL_H

#include <random>
#include <ctime>

namespace CODeM {

inline double randUni() { return (double)(std::rand()) / RAND_MAX; }

inline double factorial(double n) {return tgamma(n + 1.0);}

const double PI(3.14159265358979323846264338327950288419716939937510582097494459230781640628620899);

/// Distribution constants
const int    DistNSamples(500);
const double DistMinInterval(0.001);
const double DistPeakMinN(1.0);
const double DistPeakMaxN(50.0);
const double DistPeakMinNBasisFunc(30.0);
const double DistPeakMaxNBasisFunc(150.0);

} // namespace CODeM

#endif // CODEMGLOBAL_H
