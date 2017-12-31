//
// Created by alisson on 30/12/17.
//

#include <cmath>
#include "guttrade/indicator/volatility/bollinger_bands.hpp"

#include "guttrade/indicator/moving_average/simple.hpp"

namespace {

// TODO: move this function
guttrade::type::decimal variance(const std::vector<guttrade::type::decimal> &data)
{
    auto mas = guttrade::indicator::moving_average::simple(data);
    guttrade::type::decimal sum_dif = 0;

    for(auto it : data)
        sum_dif += (std::pow(it - mas, 2.0));

    return sum_dif / data.size();
}

// TODO: move this function
guttrade::type::decimal standard_deviation(const std::vector<guttrade::type::decimal> &data)
{
    std::sqrt(variance(data));
}

}

std::pair<std::vector<guttrade::type::decimal>, std::vector<guttrade::type::decimal>> guttrade::indicator::volatility::bollinger_bands(
        const std::vector<guttrade::type::decimal> &data,
        const std::size_t period,
        const type::decimal &factor)
{
    if(0 == data.size() || period > data.size()) {
        // FIXME: set error
        throw std::exception{};
    }

    std::vector<guttrade::type::decimal> bollinger_band_higher;
    std::vector<guttrade::type::decimal> bollinger_band_bottom;

    for(std::size_t x = period; x < data.size(); ++x) {

        std::vector<guttrade::type::decimal> subvector({data.begin() + x, data.begin() + x + period});

        auto mas = guttrade::indicator::moving_average::simple(subvector);
        auto sd = standard_deviation(subvector);

        bollinger_band_higher.push_back(mas + (factor * sd));
        bollinger_band_bottom.push_back(mas - (factor * sd));
    }

    return std::make_pair(bollinger_band_higher, bollinger_band_bottom);
}
