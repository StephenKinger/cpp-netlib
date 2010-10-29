#ifndef BOOST_NETWORK_PROTOCOL_HTTP_SERVER_HEADER_NAME_HPP_20101028
#define BOOST_NETWORK_PROTOCOL_HTTP_SERVER_HEADER_NAME_HPP_20101028

// Copyright 2010 Dean Michael Berris.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <utility>

namespace boost { namespace network { namespace http {

    template <class Tag>
    struct response_header;

    template <class Tag>
    struct request_header;

    template <class T1, class T2>
    T1 & 
    name(std::pair<T1,T2> & p) {
        return p.first;
    }

    template <class Tag>
    typename string<Tag>::type &
    name(response_header<Tag> & h) {
        return h.name;
    }

    template <class Tag>
    typename string<Tag>::type &
    name(request_header<Tag> & h) {
        return h.name;
    }
    
} /* http */
    
} /* network */
    
} /* boost */

#endif /* BOOST_NETWORK_PROTOCOL_HTTP_SERVER_HEADER_NAME_HPP_20101028 */
