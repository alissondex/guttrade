//
// Created by alisson on 23/12/17.
//

#include "guttrade/indicator/trend/aroon.hpp"

#include <functional>

#include <iostream>

namespace {

guttrade::type::decimal arron(const std::vector<guttrade::type::decimal> &data,
                              const std::function<bool(const guttrade::type::decimal &current,
                                                       const guttrade::type::decimal &next)> &function)
{
    if(0 == data.size() || 2 > data.size()) {
        // FIXME: set error
        throw std::exception{};
    }

    auto period = data.size() - 1;

    std::pair<std::size_t, guttrade::type::decimal> current = std::make_pair(static_cast<std::size_t>(0), data.back());

    for(std::size_t x = data.size(); x != 0; --x) {

        if (function(current.second, data[x - 1])) {
            current.first = data.size() - x;
            current.second = data[x - 1];
        }

    }

    return ((period - current.first) / static_cast<guttrade::type::decimal>(period) ) * 100;
}

}

guttrade::type::decimal guttrade::indicator::trend::aroon_up(const std::vector<guttrade::type::decimal> &data)
{
   return arron(data, [](const guttrade::type::decimal &current, const guttrade::type::decimal &next){
       return next > current;
    });
}

guttrade::type::decimal guttrade::indicator::trend::aroon_down(const std::vector<guttrade::type::decimal> &data)
{
    return arron(data, [](const guttrade::type::decimal &current, const guttrade::type::decimal &next){
        return next < current;
    });
}
