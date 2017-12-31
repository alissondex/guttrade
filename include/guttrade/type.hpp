//
// Created by alisson on 17/12/17.
//

#ifndef GUTTRADE_TYPES_HPP
#define GUTTRADE_TYPES_HPP

namespace guttrade {
namespace type {

using decimal = long double;
using volume = long double;

struct candlestick {
    decimal opening_;
    decimal closure_;
    decimal minimum_;
    decimal maximum_;
};

struct candlevolume {
    candlestick candlestick_;
    volume volume_;
};

} /* type */
} /* guttrade */

#endif //GUTTRADE_TYPES_HPP
