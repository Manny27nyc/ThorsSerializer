#ifndef THORS_ANVIL_SERIALIZE_BSON_UTIL_H
#define THORS_ANVIL_SERIALIZE_BSON_UTIL_H
/*
 * BsonaryPrinter<T>
 *  See documentation in BsonParser.h
 */

#include "Serialize.h"
#include <vector>

namespace ThorsAnvil
{
    namespace Serialize
    {

enum class BsonContainer  {Map, Array, Value};
enum class ValueType {Int32, Int64, Double64, Double128, Bool, String, Null, Binary, Obj};

template<std::size_t lhs, std::size_t rhs>
struct MaxTemplate
{
    static constexpr std::size_t value = (lhs >= rhs) ? lhs : rhs;
};

    }
}

#endif
