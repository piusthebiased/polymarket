/*!
 * secp256k1.
 * secp256k1_config.h
 *
 * \date 2019
 * \author Eduard Maximovich (edward.vstock@gmail.com)
 * \link   https://github.com/edwardstock
 */

#ifndef SECP256K1_CONFIG_H
#define SECP256K1_CONFIG_H

/* #undef SECP256K1_EXPORTING */
/* #undef SECP256K1_SHARED */

#ifdef SECP256K1_SHARED
#ifdef SECP256K1_EXPORTING
#   if _MSC_VER
#       define SECP256K1_API __declspec(dllexport)
#   else
#       define SECP256K1_API __attribute__((visibility("default")))
#   endif
#else
#   if _MSC_VER
#       define SECP256K1_API __declspec(dllimport)
#   else
#       define SECP256K1_API
#   endif
#endif
#else
#define SECP256K1_API
#endif  // SECP256K1_SHARED

#endif //SECP256K1_CONFIG_H
