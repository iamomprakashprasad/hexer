//////////////////////////////////////////////////////////////////////////////
//
// (C) Copyright Ion Gaztanaga 2008-2012. Distributed under the Boost
// Software License, Version 1.0. (See accompanying file
// LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/interprocess for documentation.
//
//////////////////////////////////////////////////////////////////////////////

#ifndef BOOST_INTERPROCESS_CONTAINERS_STABLE_VECTOR_HPP
#define BOOST_INTERPROCESS_CONTAINERS_STABLE_VECTOR_HPP

#if (defined _MSC_VER) && (_MSC_VER >= 1200)
#  pragma once
#endif

#include <boost/interprocess/detail/config_begin.hpp>
#include <boost/container/stable_vector.hpp>
#include <boost/interprocess/containers/containers_fwd.hpp>

namespace hexerboost {} namespace boost = hexerboost; namespace hexerboost {
   namespace interprocess {

      using hexerboost::container::stable_vector;

   }  //namespace interprocess {
}  //namespace hexerboost {} namespace boost = hexerboost; namespace hexerboost {

#include <boost/interprocess/detail/config_end.hpp>

#endif //   #ifndef  BOOST_INTERPROCESS_CONTAINERS_STABLE_VECTOR_HPP
