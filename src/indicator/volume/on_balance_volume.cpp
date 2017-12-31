//
// Created by alisson on 25/12/17.
//

#include "guttrade/indicator/volume/on_balance_volume.hpp"

#include <optional>

std::vector<guttrade::type::volume> guttrade::indicator::volume::on_balance_volume(const std::vector<std::pair<guttrade::type::decimal, guttrade::type::volume>> &data)
{
    if(0 == data.size()) {
        // FIXME: set error
        throw std::exception{};
    }

    std::vector<guttrade::type::volume> obv;
    obv.push_back(data[0].second);

    for(std::size_t x = 1; x < data.size(); ++x) {
        if(data[x].first > data[x - 1].first)
            obv.push_back(obv[x - 1] + data[x].second);

        else if(data[x].first < data[x - 1].first)
            obv.push_back(obv[x - 1] - data[x].second);

        else
            obv.push_back(obv[x - 1]);
    }

    return obv;
}

