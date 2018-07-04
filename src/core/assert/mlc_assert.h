#ifndef __MLC_CORE_ASSERT_MLC_ASSERT_H_
#define __MLC_CORE_ASSERT_MLC_ASSERT_H_

#ifdef NDEBUG

#   define assert(expr) ((void)0)

#else

#   ifndef __MLC_UTILS_MLC_STRING_H_
#   include "utils/mlc_string.h"
#   endif

#   ifndef __MLC_COMM_MLC_COMPLIANT_CPP_H_
#   include "comm/mlc_compliant_cpp.h"
#   endif

    __BEGIN_DECLS
    extern void __handle_assert_fail(const char* assert_expr_, \
                                 const char* fun_name_, \
                                 const char* file_name_, \
                                 const unsigned int line_)
                                  __THROW __attribute__ ((__noreturn__));
    __END_DECLS

#   define assert(expr) \
    (\
        (expr) \
        ? ((void)0) \
        :  __handle_assert_faile(__TO_STRING(expr), __func__, __FILE__, __LINE__);\
    )

#   define static_assert _Static_assert

#endif





#endif