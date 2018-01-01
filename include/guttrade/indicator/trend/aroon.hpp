//
// Created by alisson on 23/12/17.
//

#ifndef GUTTRADE_INDICATOR_TREND_AROON_HPP
#define GUTTRADE_INDICATOR_TREND_AROON_HPP

#include "guttrade/type.hpp"

#include <vector>

namespace guttrade {
namespace indicator {
namespace trend {

guttrade::type::decimal aroon_up(const std::vector<guttrade::type::decimal> &data);
guttrade::type::decimal aroon_down(const std::vector<guttrade::type::decimal> &data);

} /* trend */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_TREND_AROON_HPP
