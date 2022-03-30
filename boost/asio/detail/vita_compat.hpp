//
// detail/vita_compat.hpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2021 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef ASIO_DETAIL_VITA_COMPAT_HPP
#define ASIO_DETAIL_VITA_COMPAT_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include <boost/asio/detail/config.hpp>

#if defined(__vita__)

#include <boost/asio/detail/push_options.hpp>

namespace boost {
namespace asio {
namespace detail {

#if !defined(AI_PASSIVE)
# define AI_PASSIVE 0x1
#endif

#if !defined(AI_CANONNAME)
# define AI_CANONNAME 0x2
#endif

#if !defined(AI_NUMERICHOST)
# define AI_NUMERICHOST 0x4
#endif

#if !defined(NI_NOFQDN)
# define NI_NOFQDN 0x01
#endif

#if !defined(NI_NUMERICHOST)
# define NI_NUMERICHOST 0x02
#endif

#if !defined(NI_NAMEREQD)
# define NI_NAMEREQD 0x04
#endif

#if !defined(NI_NUMERICSERV)
# define NI_NUMERICSERV 0x08
#endif

#if !defined(NI_DGRAM)
# define NI_DGRAM 0x10
#endif

#if !defined(IPPROTO_IPV6)
# define IPPROTO_IPV6 41
#endif

#if !defined(IPV6_UNICAST_HOPS)
# define IPV6_UNICAST_HOPS 4
#endif

#if !defined(IPV6_MULTICAST_IF)
# define IPV6_MULTICAST_IF 9
#endif

#if !defined(IPV6_MULTICAST_HOPS)
# define IPV6_MULTICAST_HOPS 10
#endif

#if !defined(IPV6_MULTICAST_LOOP)
# define IPV6_MULTICAST_LOOP 11
#endif

#if !defined(IPV6_JOIN_GROUP)
# define IPV6_JOIN_GROUP 12
#endif

#if !defined(IPV6_LEAVE_GROUP)
# define IPV6_LEAVE_GROUP 13
#endif

} // namespace detail
} // namespace asio
} // namespace boost

#include <boost/asio/detail/pop_options.hpp>

#if !defined(IPV6_V6ONLY)
# define IPV6_V6ONLY 27
#endif

#if !defined(IPPROTO_ICMPV6)
# define IPPROTO_ICMPV6 58
#endif

#endif // defined(__vita__)

#endif // ASIO_DETAIL_VITA_COMPAT_HPP
