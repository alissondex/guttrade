//
// Created by alisson on 17/12/17.
//

#include "guttrade/indicator/moving_average/simple.hpp"

guttrade::type::decimal guttrade::indicator::moving_average::simple(const std::vector<guttrade::type::decimal> &data)
{
    guttrade::type::decimal average = 0;

    for(auto it : data)
        average += it;

    return average / data.size();
}

