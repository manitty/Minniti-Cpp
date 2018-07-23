/*
  vectorAux.cpp
  Implementations of template functions 
  Cosc-220   Lab 7

  Thomas Anastasio
  Created: February 25, 2003
  Current: March 13, 2003
*/


//////////   THIS CODE IS PROVIDED TO STUDENTS   /////////////


#include "vectorAux.h"

#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
void removeDup(std::vector<T> & v)
{
  
}


template <typename T>
unsigned seqVectSearch(const std::vector<T> & v, unsigned first, 
		       unsigned last, const T& target)
{
  ///  Complete the code.   Use the text's sequential search
  ///  algorithm for arrays as a model.
  return last;           // return last if target not found
}

template <typename T>
void writeVector(const std::vector<T> & v)
{
  unsigned i;
  unsigned n = v.size();

  for (i = 0; i < n; i++)
    std::cout << v[i] << ' ';
  std::cout << std::endl;
}
