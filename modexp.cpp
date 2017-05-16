//
//  modExp.cpp
//  ModularExp
//
//  Created by Greg Hultberg on 2/2/17.
//  Copyright © 2017 Greg Hultberg. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

long long modexp(long long, long long, long long);

int main(){

  long long x,y,n;

  cout<<"Enter base number: ";
  cin>>x;
  cout<<"Enter exponent: ";
  cin>>y;
  cout<<"Enter modulus: ";
  cin>>n;
  cout<< modexp(x, y, n);



  return 0;
}

long long modexp(long long x, long long y, long long n)
{
  if (y==0)
    return 1;

  long long z = modexp(x, y/2, n);

  if (y%2 == 0)
    return ((z*z)%n);

  return ((x*(z*z))%n);

}
