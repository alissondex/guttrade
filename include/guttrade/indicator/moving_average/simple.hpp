//
// Created by alisson on 17/12/17.
//

#ifndef GUTTRADE_INDICATOR_MOVING_AVERAGE_SIMPLE_HPP
#define GUTTRADE_INDICATOR_MOVING_AVERAGE_SIMPLE_HPP

#include "guttrade/type.hpp"

#include <vector>

namespace guttrade {
namespace indicator {
namespace moving_average {

guttrade::type::decimal simple(const std::vector<guttrade::type::decimal> &data);

} /* moving_average */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_MOVING_AVERAGE_SIMPLE_HPP
