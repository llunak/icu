/*
******************************************************************************
* Copyright (C) 2014, International Business Machines
* Corporation and others.  All Rights Reserved.
******************************************************************************
* sharednumberformat.h
*/

#ifndef __SHARED_NUMBERFORMAT_H__
#define __SHARED_NUMBERFORMAT_H__

#include "unicode/utypes.h"
#include "sharedobject.h"
#include "sharedptr.h"

U_NAMESPACE_BEGIN

class NumberFormat;

class U_I18N_API SharedNumberFormat : public SharedObject {
public:
    SharedNumberFormat(NumberFormat *nfToAdopt) : ptr(nfToAdopt) { }
    virtual ~SharedNumberFormat();
    const NumberFormat *get() const { return ptr; }
    const NumberFormat *operator->() const { return ptr; }
    const NumberFormat &operator*() const { return *ptr; }
private:
    NumberFormat *ptr;
    SharedNumberFormat(const SharedNumberFormat &);
    SharedNumberFormat &operator=(const SharedNumberFormat &);
};

U_NAMESPACE_END

#endif