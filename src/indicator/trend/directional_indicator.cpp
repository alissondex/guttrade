//
// Created by alisson on 01/01/18.
//

#include "guttrade/indicator/trend/directional_indicator.hpp"

#include "guttrade/indicator/trend/directional_movement.hpp"
#include "guttrade/indicator/volatility/true_range.hpp"

guttrade::type::decimal guttrade::indicator::trend::plus_directional_indicator(const guttrade::type::candlestick &last,
                                                                               const guttrade::type::candlestick &previous)
{
    return guttrade::indicator::trend::plus_directional_movement(last, previous) /
           guttrade::indicator::volatility::true_range(last, previous);
}

guttrade::type::decimal guttrade::indicator::trend::minus_directional_indicator(const guttrade::type::candlestick &last,
                                                                                const guttrade::type::candlestick &previous)
{
    return guttrade::indicator::trend::minus_directional_movement(last, previous) /
           guttrade::indicator::volatility::true_range(last, previous);
}
