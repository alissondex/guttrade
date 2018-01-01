//
// Created by alisson on 23/12/17.
//


#include "guttrade/indicator/tendencie/macd.hpp"

#include "guttrade/detail/algorithm/subtract_vectors.hpp"
#include "guttrade/indicator/moving_average/exponential.hpp"

#include <cstdlib>

std::vector<guttrade::type::decimal> guttrade::indicator::trend::macd_line(const std::vector<guttrade::type::decimal> &data,
                                                                               const std::size_t recent_period,
                                                                               const std::size_t old_period)
{
    if(recent_period == old_period) {
        // FIXME: set error of invalid arguments
        throw std::exception{};
    }


    auto recent_line = guttrade::indicator::moving_average::exponential(data, recent_period);
    auto old_line = guttrade::indicator::moving_average::exponential(data, old_period);

    return guttrade::detail::algorithm::subtract_vector(recent_line, old_line, true);
}

std::vector<guttrade::type::decimal> guttrade::indicator::trend::macd(const std::vector<guttrade::type::decimal> &data,
                                                                          const std::size_t recent,
                                                                          const std::size_t old,
                                                                          const std::size_t signal)
{
    auto macd_line = guttrade::indicator::trend::macd_line(data, recent, old);
    auto signal_line = guttrade::indicator::moving_average::exponential(data, signal);

    return guttrade::detail::algorithm::subtract_vector(macd_line, signal_line, true);
}
