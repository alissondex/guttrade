//
// Created by alisson on 31/12/17.
//

#ifndef GUTTRADE_INDICATOR_TREND_DIRECTIONAL_MOVEMENT_HPP
#define GUTTRADE_INDICATOR_TREND_DIRECTIONAL_MOVEMENT_HPP

#include "guttrade/type.hpp"

namespace guttrade {
namespace indicator {
namespace trend {

guttrade::type::decimal plus_directional_movement(const guttrade::type::candlestick &last, const guttrade::type::candlestick &previous);
guttrade::type::decimal minus_directional_movement(const guttrade::type::candlestick &last, const guttrade::type::candlestick &previous);

} /* trend */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_TREND_DIRECTIONAL_MOVEMENT_HPP
