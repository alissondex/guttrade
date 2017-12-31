//
// Created by alisson on 23/12/17.
//

#ifndef GUTTRADE_INDICATOR_TENDENCIE_AROON_HPP
#define GUTTRADE_INDICATOR_TENDENCIE_AROON_HPP

#include "guttrade/type.hpp"

#include <vector>

namespace guttrade {
namespace indicator {
namespace tendencie {

guttrade::type::decimal aroon_up(const std::vector<guttrade::type::decimal> &data);
guttrade::type::decimal aroon_down(const std::vector<guttrade::type::decimal> &data);

} /* tendencie */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_TENDENCIE_AROON_HPP
