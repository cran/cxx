// X.cc

#include <iostream.h>
#include "X.hh"

static Y y;

X::X()  { cout << "constructor X" << endl; }
X::~X() { cout << "destructor X" << endl; }
Y::Y()  { cout << "constructor Y" << endl; }
Y::~Y() { cout << "destructor Y" << endl; }
