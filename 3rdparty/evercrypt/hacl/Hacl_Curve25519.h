/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: /mnt/e/everest/verify/kremlin/krml -tmpdir x25519-c -I /mnt/e/everest/verify/hacl-star/code/old/lib/kremlin -I /mnt/e/everest/verify/kremlin/kremlib/compat -I /mnt/e/everest/verify/hacl-star/specs -I /mnt/e/everest/verify/hacl-star/specs/old -I . -fparentheses -fcurly-braces -fno-shadow -ccopt -march=native -verbose -ldopt -flto -I ../bignum -bundle Hacl.Curve25519=* -minimal -add-include "kremlib.h" -skip-compilation x25519-c/out.krml -o x25519-c/Hacl_Curve25519.c
 * F* version: ebf0a2cc
 * KreMLin version: e9a42a80
 */


#ifndef __Hacl_Curve25519_H
#define __Hacl_Curve25519_H


#include "kremlib.h"

void Hacl_Curve25519_crypto_scalarmult(uint8_t *mypublic, uint8_t *secret, uint8_t *basepoint);

#define __Hacl_Curve25519_H_DEFINED
#endif
