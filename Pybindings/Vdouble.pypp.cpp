// This file has been generated by Py++.

#include "Vdouble.pypp.hpp"
#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "/people/cheetah/asaladin/Src/ptools/trunk/ptools.h"
#include "/people/cheetah/asaladin/Src/ptools/trunk/py_details.h"

namespace bp = boost::python;

void register_Vdouble_class(){

    { //::std::vector<double, std::allocator<double> >
        typedef bp::class_< std::vector<double, std::allocator<double> > > Vdouble_exposer_t;
        Vdouble_exposer_t Vdouble_exposer = Vdouble_exposer_t( "Vdouble" );
        bp::scope Vdouble_scope( Vdouble_exposer );
        Vdouble_exposer.def( bp::vector_indexing_suite< ::std::vector<double, std::allocator<double> >, true >() );
    }

}
