// 
// This program computes an approximation to the second derivative of
// u(x) = exp(2x) at a single point x, using different stepsizes h
// 
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>

// 
// Useful functions
// 

// Example function: u(x) = exp(2x)
double u(double x)
{
    return 1. - (1. - exp(-10.)) * x - exp(-10. * x);
}



// 
// Main program
// 

int main()
{
  // Parameters for output formatting
  int width = 18;
  int prec  = 10;

  double h = 1.0e-2;  // Stepsize 
  double xmin =  0.;
  double xmax = 1.;


  // Output a header 
  std::cout << "x" << ";"
            <<  "u(x)"
            << std::endl;

  // Loop over i 
  double x = xmin;
  while(x <= xmax)
  {
    // Compute u(x)
    double u_exact = u(x);

    // Output to screen
    std::cout << std::setw(width) << std::setprecision(prec) << std::scientific << x << "; "
              << std::setw(width) << std::setprecision(prec) << std::scientific << u_exact
              << std::endl;

    // Increase stepsize
    x += h;
  }

  // Done
  return 0;
}