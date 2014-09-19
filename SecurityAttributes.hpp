////////////////////////////////////////////////////////////////////////////
// SecurityAttributes.hpp -- Win32 security attributes
// This file is part of MZC3.  See file "ReadMe.txt" and "License.txt".
////////////////////////////////////////////////////////////////////////////

#ifndef __MZC3_SECURITYATTRIBUTES__
#define __MZC3_SECURITYATTRIBUTES__

////////////////////////////////////////////////////////////////////////////
// MSecurityAttributes --- Win32 security attributes

class MSecurityAttributes : public SECURITY_ATTRIBUTES
{
public:
    MSecurityAttributes(BOOL bInherit = TRUE,
                        LPVOID pSecurityDescriptor = NULL);
};

////////////////////////////////////////////////////////////////////////////

#ifndef MZC_NO_INLINING
    #undef MZC_INLINE
    #define MZC_INLINE inline
    #include "SecurityAttributes_inl.hpp"
#endif

#endif  // ndef __MZC3_SECURITYATTRIBUTES__
