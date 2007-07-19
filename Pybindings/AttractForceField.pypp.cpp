// This file has been generated by Py++.

#include "AttractForceField.pypp.hpp"
#include "boost/python.hpp"
#include "/people/cheetah/asaladin/Src/ptools/trunk/ptools.h"
#include "/people/cheetah/asaladin/Src/ptools/trunk/pairlist_dummy.h"

namespace bp = boost::python;

struct AttractForceField_wrapper : PTools::AttractForceField, bp::wrapper< PTools::AttractForceField > {

    AttractForceField_wrapper(PTools::AttractForceField const & arg )
    : PTools::AttractForceField( arg )
      , bp::wrapper< PTools::AttractForceField >(){
        // copy constructor
        
    }

    AttractForceField_wrapper(::PTools::Rigidbody const & recept, ::PTools::Rigidbody const & lig, double cutoff )
    : PTools::AttractForceField( boost::ref(recept), boost::ref(lig), cutoff )
      , bp::wrapper< PTools::AttractForceField >(){
        // constructor
    
    }

    virtual void Derivatives( ::Vdouble const & stateVars, ::Vdouble & delta ) {
        if( bp::override func_Derivatives = this->get_override( "Derivatives" ) )
            func_Derivatives( boost::ref(stateVars), boost::ref(delta) );
        else
            this->PTools::AttractForceField::Derivatives( boost::ref(stateVars), boost::ref(delta) );
    }
    
    
    void default_Derivatives( ::Vdouble const & stateVars, ::Vdouble & delta ) {
        PTools::AttractForceField::Derivatives( boost::ref(stateVars), boost::ref(delta) );
    }

    virtual double Function( ::Vdouble const & stateVars ) {
        if( bp::override func_Function = this->get_override( "Function" ) )
            return func_Function( boost::ref(stateVars) );
        else
            return this->PTools::AttractForceField::Function( boost::ref(stateVars) );
    }
    
    
    double default_Function( ::Vdouble const & stateVars ) {
        return PTools::AttractForceField::Function( boost::ref(stateVars) );
    }

    virtual ::uint ProblemSize(  ) {
        if( bp::override func_ProblemSize = this->get_override( "ProblemSize" ) )
            return func_ProblemSize(  );
        else
            return this->PTools::AttractForceField::ProblemSize(  );
    }
    
    
    ::uint default_ProblemSize(  ) {
        return PTools::AttractForceField::ProblemSize( );
    }

};

void register_AttractForceField_class(){

    bp::class_< AttractForceField_wrapper, bp::bases< PTools::ForceField > >( "AttractForceField", bp::init< PTools::Rigidbody const &, PTools::Rigidbody const &, double >(( bp::arg("recept"), bp::arg("lig"), bp::arg("cutoff") )) )    
        .def( 
            "Derivatives"
            , &::PTools::AttractForceField::Derivatives
            , &AttractForceField_wrapper::default_Derivatives
            , ( bp::arg("stateVars"), bp::arg("delta") ) )    
        .def( 
            "Electrostatic"
            , &::PTools::AttractForceField::Electrostatic )    
        .def( 
            "Energy"
            , (double ( ::PTools::AttractForceField::* )(  ) )( &::PTools::AttractForceField::Energy ) )    
        .def( 
            "Energy"
            , (double ( ::PTools::AttractForceField::* )( ::Vdouble const & ) )( &::PTools::AttractForceField::Energy )
            , ( bp::arg("stateVars") ) )    
        .def( 
            "Function"
            , &::PTools::AttractForceField::Function
            , &AttractForceField_wrapper::default_Function
            , ( bp::arg("stateVars") ) )    
        .def( 
            "Gradient"
            , &::PTools::AttractForceField::Gradient
            , ( bp::arg("stateVars"), bp::arg("delta") ) )    
        .def( 
            "LennardJones"
            , &::PTools::AttractForceField::LennardJones )    
        .def( 
            "ProblemSize"
            , &::PTools::AttractForceField::ProblemSize
            , &AttractForceField_wrapper::default_ProblemSize )    
        .def( 
            "SetRestraint"
            , &::PTools::AttractForceField::SetRestraint
            , ( bp::arg("rstk") ) )    
        .def( 
            "ShowEnergyParams"
            , &::PTools::AttractForceField::ShowEnergyParams )    
        .def( 
            "Trans"
            , (void ( ::PTools::AttractForceField::* )(  ) )( &::PTools::AttractForceField::Trans ) );

}