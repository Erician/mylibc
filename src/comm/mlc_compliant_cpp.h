#ifndef __MLC_COMM_MLC_COMPLIANT_CPP_H_
#define __MLC_COMM_MLC_COMPLIANT_CPP_H_

#undef __BEGIN_DECLS
#undef __END_DECLS
#ifdef __cplusplus
#   define __BEGIN_DECLS extern "c" {
#   define __END_DECLS }
#else
#   define __BEGIN_DECLS
#   define __END_DECLS
#endif

#ifdef __cplusplus
#   define __THROW throw()
#else
#   define __THROW 
#endif

#endif