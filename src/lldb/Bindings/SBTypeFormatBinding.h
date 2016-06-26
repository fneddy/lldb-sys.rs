//===-- SBTypeFormatBinding.h -----------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLDB_SBTypeFormatBinding_h_
#define LLDB_SBTypeFormatBinding_h_

#include "lldb/Bindings/SBBindingDefines.h"

#ifdef __cplusplus
extern "C" {
#endif

LLDB_API SBTypeFormatRef CreateSBTypeFormat();

LLDB_API SBTypeFormatRef CreateSBTypeFormat2(LLDBFormat format, uint32_t options);

LLDB_API SBTypeFormatRef CreateSBTypeFormat3(const char *type, uint32_t options);

LLDB_API void DisposeSBTypeFormat(SBTypeFormatRef instance);

LLDB_API bool SBTypeFormatIsValid(SBTypeFormatRef instance);

LLDB_API LLDBFormat SBTypeFormatGetFormat(SBTypeFormatRef instance);

LLDB_API const char *SBTypeFormatGetTypeName(SBTypeFormatRef instance);

LLDB_API unsigned int SBTypeFormatGetOptions(SBTypeFormatRef instance);

LLDB_API void SBTypeFormatSetFormat(SBTypeFormatRef instance, LLDBFormat);

LLDB_API void SBTypeFormatSetTypeName(SBTypeFormatRef instance, const char *);

LLDB_API void SBTypeFormatSetOptions(SBTypeFormatRef instance, uint32_t);

LLDB_API bool SBTypeFormatGetDescription(SBTypeFormatRef instance, SBStreamRef description,
                                             LLDBDescriptionLevel description_level);

LLDB_API bool SBTypeFormatIsEqualTo(SBTypeFormatRef instance, SBTypeFormatRef rhs);

#ifdef __cplusplus
}
#endif

#endif // LLDB_SBTypeFormatBinding_h_