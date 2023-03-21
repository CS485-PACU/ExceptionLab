//***************************************************************************
// File name:  driver.cpp
// Author:     Chadd Williams
// Date:       3/9/2017
// Class:      CS485
// Assignment: Demonstrate exceptions
// Purpose:    Demonstrate how exceptions are caught and thrown
//***************************************************************************

#include <iostream>
#include <exception>
#include <memory>
#include "bigger.h"
#include <random>


//***************************************************************************
// Function:    throwExceptionAlways
//
// Description: Function that always throws an exception
//
// Parameters:  value - an int
//
// Returned:    none
//***************************************************************************
void throwExceptionAlways (int value)
{

  std::cout << "Enter throwExceptionAlways" << std::endl;

  if (value != value + 1)
  {
    throw std::out_of_range (std::to_string(value));
  }

  std::cout << "Exit throwExceptionAlways" << std::endl;
}


//***************************************************************************
// Function:    throwRandomException
//
// Description: Function that always throws a random exception
//
// Parameters:  value - an int
//
// Returned:    none
//***************************************************************************
void throwRandomException (int value)
{

  //https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
  //Will be used to obtain a seed for the random number engine
  std::random_device rd;  
  //Standard mersenne_twister_engine seeded with rd()
  std::mt19937 gen (rd ()); 
  std::uniform_int_distribution<> dis (1, 6);


  std::cout << "Enter throwRandomException" << std::endl;

  if ( dis(gen) > 2)
  {
    throw std::logic_error ("dis(gen) > 2");
  }
  else
  {
    throw std::logic_error ("dis(gen) <= 2");
  }

  std::cout << "Exit throwRandomException" << std::endl;
}

//***************************************************************************
// Function:    throwExceptionIfOdd
//
// Description: Function throws an exception if the parameter is odd
//
// Parameters:  value - an int
//
// Returned:    none
//***************************************************************************
void throwExceptionIfOdd (int value)
{
  // throw a std::invalid_argument with a useful what() message 
  // if the parameter is odd.
  // do nothing otherwise
}


//***************************************************************************
// Function:    rethrowException
//
// Description: Call throwExceptionIfOdd() with an odd parameter and
//              rethrow the exceptoion
//
// Parameters:  none
//
// Returned:    none
//***************************************************************************
void rethrowException ()
{
  // call throwExceptionIfOdd(3) inside a try/catch block.
  // rethrow the caught exception.
}

//***************************************************************************
// Function:    throwExceptionTestDtor
//
// Description: Demonstrate how dtors work when an exception is thrown
//
// Parameters:  cBigger - a pass by value parameter
//
// Returned:    EXIT_SUCCESS
//***************************************************************************
int throwExceptionTestDtor (bigger cBigger)
{
  // TODO
  // Declare a bigger object.
  // Declare a bigger raw pointer
  // have the raw pointer point to a newly allocated object.
  // Declare a bigger shared pointer
  // throw an std::exception()

  // SOLUTION
  //bigger cObject;
  //bigger *pcObject;
  //pcObject = new bigger (42);
  //throw std::exception();

  // observe which dtors are called
  // add a comment in this function after each declaration
  // stating if the dtor is called for that object when
  // the exception is thrown.
  return 0;
}

//***************************************************************************
// Function:    rethrowExceptionTest
//
// Description: Demonstrate how to rethrow an exception
//
// Parameters:  cBigger - a pass by value parameter
//
// Returned:    EXIT_SUCCESS
//***************************************************************************
int rethrowExceptionTest (bigger cBigger)
{
  //TODO

  // call throwExceptionTestDtor with the parameter for this
  // function.
  // catch the thrown exception, display a message and then
  // rethrow the exception.
  return 0;
}

//***************************************************************************
// Function:    main
//
// Description: Demonstrate catching exceptions
//
// Parameters:  None
//
// Returned:    EXIT_SUCCESS
//***************************************************************************

int main ()
{
  int *paInts;
  int size = -1;

  // TODO 1
  // Compile and run this project in the Debugger
  // Observe the exception being thrown
  // be sure to check out the call stack in the debugger!

  paInts = new int[size];


  // TODO 2
  // Wrap the dynamic allocation above in a try/catch block
  // in the catch, print the data returned from calling what()
  // on the caught exception.



  // TODO 3
  // call throwExceptionAlways(). Pass any int as a parameter.
  // run the code via the debugger and observer the exception
 
  std::cout << " Call throwExceptionAlways" << std::endl;


  std::cout << " End Call throwExceptionAlways" << std::endl;

  // TODO 4 
  // Wrap the call to throwExceptionAlways() in a try/catch
  // block.  Catch the appropriate exception and print the 
  // data return from calling what() on the caught exception.
   
  // TODO 5 
  // call throwRandomException(). Pass any int as a parameter.
  // run the code via the debugger and observer the exception

  std::cout << " Call throwRandomException" << std::endl;


  std::cout << " End Call throwRandomException" << std::endl;



  // TODO 6 
  // Wrap the call to throwRandomException() in a try/catch
  // block.  Catch the appropriate exception(s) and print the 
  // data return from calling what() on the caught exception(s).

  // TODO 7
  // Fill in function rethrowException()
  // call rethrowException() in a try/catch
  // block.  Catch the appropriate exception(s) and print the 
  // data return from calling what() on the caught exception(s).

  std::cout << " Call rethrowException" << std::endl;


  std::cout << " End Call rethrowException" << std::endl;


  // TODO 8
  // Fill in the function throwExceptionIfOdd().
  // run the code via the debugger and observer the exception
  std::cout << " Call throwExceptionIfOdd(2)" << std::endl;

  try
  {
    throwExceptionIfOdd (2);
  }
  catch (const std::exception &rcException)
  {
    std::cout << rcException.what () << std::endl;
  }
  std::cout << " End Call throwExceptionIfOdd(2)" << std::endl;

  std::cout << " Call throwExceptionIfOdd(3)" << std::endl;

  try
  {
    throwExceptionIfOdd (3);
  }
  catch (const std::exception &rcException)
  {
    std::cout << rcException.what () << std::endl;
  }
  std::cout << " End Call throwExceptionIfOdd(3)" << std::endl;


  // END OF REQUIRED CONTENT

  // BONUS 

 
  // TODO 9
  // fill in function throwExceptionTestDtor.
  // Construt a bigger object and call throwExceptionTestDtor.
  // display a message that you are about to call throwExceptionTestDtor
  // Catch the exception thrown and observer the dtor's called

  // SOLUTION
  //bigger cBigger (99);
  //try
  //{
  //  std::cout << "calling throwExceptionTestDtor" << std::endl;
  //  throwExceptionTestDtor (cBigger);
  //}
  //catch (const CS485Exception &e)
  //{
  //  std::cout << e.what () << std::endl;
  //}

  // do the above first, then comment out the above and
  // write the code below to cut down on the amount
  // of output you must look through.

  // TODO 10
  // fill in function rethrowExceptionTest
  // Construt a bigger object and call rethrowExceptionTest.
  // display a message that you are about to call rethrowExceptionTest
  // Catch the exception thrown

  // SOLUTION
  /*bigger cBiggerStill (999);
  try
  {
    std::cout << "calling throwExceptionTestDtor" << std::endl;
    throwExceptionTestDtor (cBiggerStill);
  }
  catch (const CS485Exception &e)
  {
    std::cout << e.what () << std::endl;
  }*/
  // terminate gracefully

  return EXIT_SUCCESS;
}