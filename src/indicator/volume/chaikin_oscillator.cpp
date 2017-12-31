//
// Created by alisson on 25/12/17.
//

#include "guttrade/indicator/volume/chaikin_oscillator.hpp"

#include "guttrade/indicator/volume/accumulation_distribution.hpp"
#include "guttrade/indicator/moving_average/exponential.hpp"

#include "guttrade/detail/algorithm/subtract_vectors.hpp"

namespace {

guttrade::type::decimal get_closure(const guttrade::type::candlestick &candlestick)
{
    return candlestick.closure_;
}

std::vector<guttrade::type::decimal> get_closures(const std::vector<guttrade::type::candlestick> &data)
{
    std::vector<guttrade::type::decimal> closures;

    for(auto it : data)
        closures.push_back(get_closure(it));

    return closures;
}

std::vector<guttrade::type::candlestick> get_candlesticks(const std::vector<guttrade::type::candlevolume> &data)
{
    std::vector<guttrade::type::candlestick> candlesticks;

    for(auto it : data)
        candlesticks.push_back(it.candlestick_);

    return candlesticks;
}

}

std::vector<guttrade::type::decimal> guttrade::indicator::volume::chaikin_oscillator(const std::vector<guttrade::type::candlevolume> &data)
{
    if(10 < data.size()) {
        // FIXME: set error
        throw std::exception{};
    }

    std::vector<guttrade::type::decimal> adl = guttrade::indicator::volume::accumulation_distribution(data);

    auto closures = get_closures(get_candlesticks(data));

    std::vector<guttrade::type::decimal> mme_03 = guttrade::indicator::moving_average::exponential(closures, 3);
    std::vector<guttrade::type::decimal> mme_10 = guttrade::indicator::moving_average::exponential(closures, 10);

    return guttrade::detail::algorithm::subtract_vector(mme_03, mme_10, true);
}
