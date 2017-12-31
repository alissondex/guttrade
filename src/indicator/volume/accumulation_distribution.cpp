//
// Created by alisson on 25/12/17.
//

#include "guttrade/indicator/volume/accumulation_distribution.hpp"

namespace {

guttrade::type::decimal get_cash_flow(const guttrade::type::candlestick &candlestick)
{
    return ((candlestick.closure_ - candlestick.minimum_) - (candlestick.maximum_ - candlestick.closure_)) /
            (candlestick.maximum_ - candlestick.minimum_);
}

}

std::vector<guttrade::type::decimal> guttrade::indicator::volume::accumulation_distribution(const std::vector<guttrade::type::candlevolume> &data)
{
    if(0 == data.size()) {
        // FIXME: set error
        throw std::exception{};
    }

    std::vector<guttrade::type::decimal> adl;

    guttrade::type::decimal cash_flow = get_cash_flow(data[0].candlestick_);
    adl.push_back(cash_flow * data[0].volume_);

    for(std::size_t x = 1; x < data.size(); ++x) {

        cash_flow = get_cash_flow(data[x].candlestick_);
        adl.push_back( adl[x - 1] + (cash_flow * data[x].volume_));

    }

    return adl;
}

