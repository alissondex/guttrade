//
// Created by alisson on 31/12/17.
//

#include <cmath>
#include "guttrade/indicator/volatility/true_range.hpp"

guttrade::type::decimal guttrade::indicator::volatility::true_range(const guttrade::type::candlestick &last,
                                                                    const guttrade::type::candlestick &prevous)
{
    guttrade::type::decimal first = std::abs(last.maximum_ - last.minimum_);
    guttrade::type::decimal second = std::abs(last.maximum_ - prevous.closure_);
    guttrade::type::decimal third = std::abs(last.minimum_ - prevous.closure_);

    return std::max(std::max(first, second), third);
}
