// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ptools.h"
#include "vector_less__std_scope_vector_less__double__grate___grate_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__std_scope_vector_less__double__grate___grate__class(){

    { //::std::vector< std::vector< double > >
        typedef bp::class_< std::vector< std::vector< double > > > vector_less__std_scope_vector_less__double__grate___grate__exposer_t;
        vector_less__std_scope_vector_less__double__grate___grate__exposer_t vector_less__std_scope_vector_less__double__grate___grate__exposer = vector_less__std_scope_vector_less__double__grate___grate__exposer_t( "vector_less__std_scope_vector_less__double__grate___grate_" );
        bp::scope vector_less__std_scope_vector_less__double__grate___grate__scope( vector_less__std_scope_vector_less__double__grate___grate__exposer );
        //WARNING: the next line of code will not compile, because "::std::vector<double, std::allocator<double> >" does not have operator== !
        vector_less__std_scope_vector_less__double__grate___grate__exposer.def( bp::vector_indexing_suite< ::std::vector< std::vector< double > > >() );
    }

}