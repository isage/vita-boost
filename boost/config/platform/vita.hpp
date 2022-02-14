//  (C) Copyright John Maddock 2001 - 2003. 
//  (C) Copyright Darin Adler 2001. 
//  (C) Copyright Douglas Gregor 2002. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for most recent version.

//  generic Vita config options:

#define BOOST_PLATFORM "Vita"

#define BOOST_HAS_PTHREADS

// boilerplate code:
#define BOOST_HAS_UNISTD_H
#define BOOST_HAS_GETTIMEOFDAY
#define BOOST_LOG_NO_ASIO
#define BOOST_LOG_WITHOUT_SYSLOG
#define BOOST_LOG_WITHOUT_IPC
#include <boost/config/detail/posix_features.hpp>






