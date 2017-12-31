//
// Created by alisson on 31/12/17.
//

#ifndef GUTTRADE_INDICATOR_VOLATILITY_TRUE_RANGE_HPP
#define GUTTRADE_INDICATOR_VOLATILITY_TRUE_RANGE_HPP

#include "guttrade/type.hpp"

namespace guttrade {
namespace indicator {
namespace volatility {

guttrade::type::decimal true_range(const guttrade::type::candlestick &last, const guttrade::type::candlestick &prevous);

} /* volatility */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_VOLATILITY_TRUE_RANGE_HPP
