// This file has been generated by Py++.

#include "Lbfgs.pypp.hpp"
#include "boost/python.hpp"
#include "/people/cheetah/asaladin/Src/ptools/trunk/ptools.h"
#include "/people/cheetah/asaladin/Src/ptools/trunk/py_details.h"

namespace bp = boost::python;

void register_Lbfgs_class(){

    bp::class_< PTools::Lbfgs, boost::noncopyable >( "Lbfgs", bp::init< PTools::ForceField & >(( bp::arg("toMinim") )) )    
        .def( 
            "GetX"
            , &::PTools::Lbfgs::GetX )    
        .def( 
            "minimize"
            , &::PTools::Lbfgs::minimize
            , ( bp::arg("maxiter") ) );

}
