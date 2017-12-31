//
// Created by alisson on 25/12/17.
//

#ifndef GUTTRADE_INDICATOR_VOLUME_OBV_HPP
#define GUTTRADE_INDICATOR_VOLUME_OBV_HPP

#include "guttrade/type.hpp"

#include <vector>

namespace guttrade {
namespace indicator {
namespace volume {

std::vector<guttrade::type::volume> on_balance_volume(const std::vector<std::pair<guttrade::type::decimal, guttrade::type::volume>> &data);

} /* volume */
} /* indicator */
} /* guttrade */

#endif //GUTTRADE_INDICATOR_VOLUME_OBV_HPP
