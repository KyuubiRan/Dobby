#ifndef ZZ_GLOBALS_H_
#define ZZ_GLOBALS_H_

#include "vm_core/macros.h"
#include "vm_core/platform/globals.h"

// Types for native machine words. Guaranteed to be able to hold pointers and
// integers.
typedef intptr_t word;
typedef uintptr_t uword;
typedef char byte;

#if defined(_M_X64) || defined(__x86_64__)
#define TARGET_ARCH_X64 1
#elif defined(_M_IX86) || defined(__i386__)
#define TARGET_ARCH_IA32 1
#elif defined(__AARCH64EL__)
#define TARGET_ARCH_ARM64 1
#elif defined(__ARMEL__)
#define TARGET_ARCH_ARM 1
#elif defined(__mips64)
#define TARGET_ARCH_MIPS64 1
#elif defined(__MIPSEB__) || defined(__MIPSEL__)
#define TARGET_ARCH_MIPS 1
#elif defined(_ARCH_PPC)
#define TARGET_ARCH_PPC 1
#else
#error Target architecture was not detected as supported by v8
#endif

#endif