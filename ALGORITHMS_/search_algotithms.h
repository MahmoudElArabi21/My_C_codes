#ifndef _SEARCH_ALGORITHMS_
#define _SEARCH_ALGORITHMS_

#include "../my_types.h"

sint32 linear_search(sint32 *arr, uint32 arr_size, sint32 element);
sint32 linear_search_both_sides(sint32 *arr, uint32 arr_size, sint32 element);

sint32 binary_search(sint32 *arr, uint32 arr_size, sint32 element);

#endif // _SEARCH_ALGORITHMS_