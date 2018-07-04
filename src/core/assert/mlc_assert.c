#ifndef __MLC_CORE_ASSERT_MLC_ASSERT_H_
#include "core/assert/mlc_assert.h"
#endif

#include <stdio.h>
#include <stdlib.h>

void 
__handle_assert_fail(const char* assert_expr_, \
                     const char* fun_name_, \
                     const char* file_name_, \
                     const unsigned int line_)
{
    printf("%s:%u %s: Assertion '%s' failed.\n", file_name_, line_, fun_name_, assert_expr_);
    abort();
}
