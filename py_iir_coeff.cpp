
// Boost Includes ==============================================================
#include <boost/python.hpp>
#include <boost/cstdint.hpp>

// Includes ====================================================================
#include "iir_coeff.h"

// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
BOOST_PYTHON_MODULE(iir_coeff)
{
  class_< iir_coeff >("iir_coeff", init< const iir_coeff& >())
        .def(init< optional< long int > >())
	.def_readwrite("order", &iir_coeff::order)
    ;

}

