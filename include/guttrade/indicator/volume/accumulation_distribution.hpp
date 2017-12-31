//
// Created by alisson on 25/12/17.
//

#ifndef GUTTRADE_INDICATOR_VOLUME_ADL_HPP
#define GUTTRADE_INDICATOR_VOLUME_ADL_HPP

#include <vector>
#include "guttrade/type.hpp"

namespace guttrade {
namespace indicator {
namespace volume {

std::vector<guttrade::type::decimal> accumulation_distribution(const std::vector<guttrade::type::candlevolume> &data);

} /* volume */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_VOLUME_ADL_HPP
