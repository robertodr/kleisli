#ifndef EMBELLISHEDTYPES_HPP
#define EMBELLISHEDTYPES_HPP

#include <string>
#include <tuple>

template <typename BaseType>
using Traced = std::tuple<BaseType, std::string>;

using void_T   = Traced<void>;
using int_T    = Traced<int>;
using float_T  = Traced<float>;
using double_T = Traced<double>;

#endif // EMBELLISHEDTYPES_HPP
