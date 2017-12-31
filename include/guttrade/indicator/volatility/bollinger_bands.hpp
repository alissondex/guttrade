//
// Created by alisson on 30/12/17.
//

#ifndef GUTTRADE_INDICATOR_VOLATILITY_BOLLINGER_BANDS_HPP
#define GUTTRADE_INDICATOR_VOLATILITY_BOLLINGER_BANDS_HPP

#include <vector>
#include "guttrade/type.hpp"

namespace guttrade {
namespace indicator {
namespace volatility {

std::pair<std::vector<guttrade::type::decimal>, std::vector<guttrade::type::decimal>> bollinger_bands(
        const std::vector<guttrade::type::decimal> &data,
        const std::size_t period = 20,
        const guttrade::type::decimal &factor = 2.0);

} /* volatility */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_VOLATILITY_BOLLINGER_BANDS_HPP
