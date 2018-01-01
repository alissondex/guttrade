//
// Created by alisson on 01/01/18.
//

#ifndef GUTTRADE_INDICATOR_TREND_DIRECTIONAL_INDICATOR_HPP
#define GUTTRADE_INDICATOR_TREND_DIRECTIONAL_INDICATOR_HPP

#include "guttrade/type.hpp"

namespace guttrade {
namespace indicator {
namespace trend {

guttrade::type::decimal plus_directional_indicator(const guttrade::type::candlestick &last, const guttrade::type::candlestick &previous);
guttrade::type::decimal minus_directional_indicator(const guttrade::type::candlestick &last, const guttrade::type::candlestick &previous);

}
}
}

#endif //GUTTRADE_INDICATOR_TREND_DIRECTIONAL_INDICATOR_HPP
