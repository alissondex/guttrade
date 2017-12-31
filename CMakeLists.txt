cmake_minimum_required(VERSION 3.9)
project(guttrade)

set(CMAKE_CXX_STANDARD 17)

set(USTRADE_HEADERS
        # guttrade
        include/guttrade.hpp
        include/guttrade/type.hpp
        include/guttrade/indicator.hpp

        # guttrade/detail/algorithm
        include/guttrade/detail/algorithm/subtract_vectors.hpp

        # guttrade/indicator
        include/guttrade/indicator/moving_avarage.hpp
        include/guttrade/indicator/tendencie.hpp
        include/guttrade/indicator/volatility.hpp
        include/guttrade/indicator/volume.hpp

        # guttrade/indicator/moving_average
        include/guttrade/indicator/moving_average/simple.hpp
        include/guttrade/indicator/moving_average/exponential.hpp

        # guttrade/indicator/tendencie
        include/guttrade/indicator/tendencie/aroon.hpp
        include/guttrade/indicator/tendencie/directional_movement_index.hpp
        include/guttrade/indicator/tendencie/macd.hpp
        include/guttrade/indicator/tendencie/stop_and_reverse.hpp

        # guttrade/indicator/volatility
        include/guttrade/indicator/volatility/average_true_range.hpp
        include/guttrade/indicator/volatility/bollinger_bands.hpp
        include/guttrade/indicator/volatility/true_range.hpp

        # guttrade/indicator/volume
        include/guttrade/indicator/volume/on_balance_volume.hpp
        include/guttrade/indicator/volume/accumulation_distribution.hpp
        include/guttrade/indicator/volume/chaikin_oscillator.hpp)

set(USTRADE_SOURCES
        # guttrade/indicator/moving_average
        src/indicator/moving_average/simple.cpp
        src/indicator/moving_average/exponential.cpp

        # guttrade/indicator/tendencie
        src/indicator/tendencie/aroon.cpp
        src/indicator/tendencie/directional_movement_index.cpp
        src/indicator/tendencie/macd.cpp
        src/indicator/tendencie/stop_and_reverse.cpp

        # guttrade/indicator/volatility
        src/indicator/volatility/average_true_range.cpp
        src/indicator/volatility/bollinger_bands.cpp
        src/indicator/volatility/true_range.cpp

        # guttrade/indicator/volume
        src/indicator/volume/on_balance_volume.cpp
        src/indicator/volume/accumulation_distribution.cpp
        src/indicator/volume/chaikin_oscillator.cpp)

include_directories("include")

add_library(guttrade SHARED ${USTRADE_HEADERS} ${USTRADE_SOURCES})

install(DIRECTORY include DESTINATION "${CMAKE_INSTALL_PREFIX}")
install(TARGETS guttrade LIBRARY DESTINATION "${CMAKE_INSTALL_PREFIX}/lib")
