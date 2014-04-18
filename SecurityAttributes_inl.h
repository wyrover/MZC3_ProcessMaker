////////////////////////////////////////////////////////////////////////////
// SecurityAttributes_inl.h -- Win32 security attributes
// This file is part of MZC3.  See file "ReadMe.txt" and "License.txt".
////////////////////////////////////////////////////////////////////////////

MZC_INLINE MSecurityAttributes::MSecurityAttributes(
    BOOL bInherit/* = TRUE*/, LPVOID pSecurityDescriptor/* = NULL*/)
{
    nLength = sizeof(SECURITY_ATTRIBUTES);
    lpSecurityDescriptor = pSecurityDescriptor;
    bInheritHandle = bInherit;
}
