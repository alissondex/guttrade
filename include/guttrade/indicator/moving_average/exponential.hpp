//
// Created by alisson on 17/12/17.
//

#ifndef GUTTRADE_INDICATOR_MOVING_AVERAGE_EXPONENTIAL_HPP
#define GUTTRADE_INDICATOR_MOVING_AVERAGE_EXPONENTIAL_HPP

#include "guttrade/type.hpp"

#include <vector>

namespace guttrade {
namespace indicator {
namespace moving_average {

std::vector<guttrade::type::decimal> exponential(const std::vector<guttrade::type::decimal> &data, const std::size_t period);

} /* moving_average */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_MOVING_AVERAGE_EXPONENTIAL_HPP
