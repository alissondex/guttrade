//
// Created by alisson on 17/12/17.
//

#include "guttrade/indicator/moving_average/exponential.hpp"

#include "guttrade/indicator/moving_average/simple.hpp"

std::vector<guttrade::type::decimal> guttrade::indicator::moving_average::exponential(const std::vector<guttrade::type::decimal> &data,
                                                                                      std::size_t period)
{
    if(data.size() == 0) {
        // FIXME: set error
        throw std::exception{};
    }

    if(data.size() < period) {
        // FIXME: set error
        throw std::exception{};
    }

    std::vector<guttrade::type::decimal> avarage_exp;

    avarage_exp.push_back(guttrade::indicator::moving_average::simple({data.begin(), data.begin() + period}));
    auto const_k = 2 / static_cast<guttrade::type::decimal>(period + 1);

    for(std::size_t x = period; x < data.size(); ++x)
        avarage_exp.push_back(((data[x] - avarage_exp.back()) * const_k) + avarage_exp.back());

    return avarage_exp;
}
