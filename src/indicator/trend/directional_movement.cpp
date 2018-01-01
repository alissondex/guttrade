//
// Created by alisson on 01/01/18.
//

#include "guttrade/indicator/trend/directional_movement.hpp"

guttrade::type::decimal guttrade::indicator::trend::plus_directional_movement(const guttrade::type::candlestick &last,
                                                                              const guttrade::type::candlestick &previous)
{
    if(last.maximum_ <= previous.maximum_)
        return 0;

    return last.maximum_ - previous.maximum_;
}

guttrade::type::decimal guttrade::indicator::trend::minus_directional_movement(const guttrade::type::candlestick &last,
                                                                               const guttrade::type::candlestick &previous)
{
    if(last.minimum_ >= previous.minimum_)
        return 0;

    return last.minimum_ - previous.minimum_;
}
