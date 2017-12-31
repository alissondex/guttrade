//
// Created by alisson on 25/12/17.
//

#ifndef GUTTRADE_DETAIL_ALGORITHM_SUBTRACT_VECTORS_HPP
#define GUTTRADE_DETAIL_ALGORITHM_SUBTRACT_VECTORS_HPP

#include <vector>


namespace guttrade {
namespace detail {
namespace algorithm {

template <typename T> typename std::enable_if<std::is_arithmetic<T>::value, std::vector<T>>::type
subtract_vector(std::vector<T> va, std::vector<T> vb, bool left_zero)
{
    std::vector<T> &vector_to_insert = (va.size() > vb.size() ? vb : va);

    auto zeros_to_insert = std::max(va.size(), vb.size()) - std::min(va.size(), vb.size());

    for (std::size_t x = 0; x < zeros_to_insert; ++x) {
        if(left_zero) {
            vector_to_insert.insert(vector_to_insert.begin(), 0);
        }
        else {
            vector_to_insert.push_back(0);
        }
    }

    std::vector<T> line;

    for(std::size_t x = 0; x < va.size(); ++x)
        line.push_back(va[x] - vb[x]);

    return line;
}

} /* algorithm */
} /* detail */
} /* guttrade */


#endif //GUTTRADE_DETAIL_ALGORITHM_SUBTRACT_VECTORS_HPP
