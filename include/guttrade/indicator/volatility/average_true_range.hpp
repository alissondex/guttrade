//
// Created by alisson on 30/12/17.
//

#ifndef GUTTRADE_INDICATOR_VOLATILITY_AVERAGE_TRUE_RANGE_HPP
#define GUTTRADE_INDICATOR_VOLATILITY_AVERAGE_TRUE_RANGE_HPP

#include <vector>
#include "guttrade/type.hpp"

namespace guttrade {
namespace indicator {
namespace volatility {

std::vector<guttrade::type::decimal> average_true_range(const std::vector<guttrade::type::decimal> &data,
                                                        const std::size_t period = 14);

} /* volatility */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_VOLATILITY_AVERAGE_TRUE_RANGE_HPP
