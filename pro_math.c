
#include "pro_math.h"

uint32_t Math_Abs (int32_t a_u32_value)
{
    return ( a_u32_value>=0 ? (uint32_t)a_u32_value : (uint32_t)(-a_u32_value) );
}


int32_t Math_Max (int32_t a_u32_value1, int32_t a_u32_value2)
{
    return ( a_u32_value1>=a_u32_value2 ? a_u32_value1 : a_u32_value2 );
}
