//  vita_tools.hpp  -----------------------------------------------------------------//

//  Copyright 2023 Cat

//  Distributed under the Boost Software License, Version 1.0.
//  See http://www.boost.org/LICENSE_1_0.txt

//  See library home page at http://www.boost.org/libs/filesystem

//--------------------------------------------------------------------------------------//

#ifndef BOOST_FILESYSTEM_SRC_VITA_TOOLS_HPP_
#define BOOST_FILESYSTEM_SRC_VITA_TOOLS_HPP_

#include <boost/filesystem/config.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/file_status.hpp>

namespace boost {
namespace filesystem {
namespace detail {

BOOST_INLINE_VARIABLE BOOST_CONSTEXPR_OR_CONST char colon = ':';

inline bool is_letter(char c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}


} // namespace detail
} // namespace filesystem
} // namespace boost

#endif // BOOST_FILESYSTEM_SRC_VITA_TOOLS_HPP_
