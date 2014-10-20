///////////////////////////////////////////////////////////////////////////////

#include <windows.h>
#include <cstring>
#include <cassert>
#include <tchar.h>
#include <mbstring.h>

///////////////////////////////////////////////////////////////////////////////

#define EXTENDS_MOBJECT /*empty*/
#define MzcFootmark()

////////////////////////////////////////////////////////////////////////////
// for 64-bit

#ifndef LOLONG
    #define LOLONG(dwl) static_cast<DWORD>(dwl)
#endif
#ifndef HILONG
    #define HILONG(dwl) static_cast<DWORD>(((dwl) >> 32) & 0xFFFFFFFF)
#endif
#ifndef MAKELONGLONG
    #define MAKELONGLONG(lo,hi) \
        (static_cast<DWORD>(lo) | \
            (static_cast<DWORDLONG>(static_cast<DWORD>(hi)) << 32))
#endif

///////////////////////////////////////////////////////////////////////////////

#include "File.hpp"
#include "SecurityAttributes.hpp"
#include "ProcessMaker.hpp"

///////////////////////////////////////////////////////////////////////////////
