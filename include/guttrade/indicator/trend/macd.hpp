//
// Created by alisson on 23/12/17.
//

#ifndef GUTTRADE_INDICATOR_TENDENCIE_MACD_HPP
#define GUTTRADE_INDICATOR_TENDENCIE_MACD_HPP

#include <guttrade/type.hpp>

#include <vector>

namespace guttrade {
namespace indicator {
namespace trend {

std::vector<guttrade::type::decimal> macd_line(const std::vector<guttrade::type::decimal> &data,
                                               const std::size_t recent = 12,
                                               const std::size_t old = 26);

std::vector<guttrade::type::decimal> macd(const std::vector<guttrade::type::decimal> &data,
                                          const std::size_t recent = 12,
                                          const std::size_t old = 26,
                                          const std::size_t signal = 9);

} /* trend */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_TENDENCIE_MACD_HPP
