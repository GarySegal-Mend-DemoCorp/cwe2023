/*

The file is extracted from the NIST database https://samate.nist.gov/SARD/test-cases/240830/versions/2.0.0

TEMPLATE GENERATED TESTCASE FILE
Filename: CWE476_NULL_Pointer_Dereference__struct_82_goodG2B.cpp
Label Definition File: CWE476_NULL_Pointer_Dereference.label.xml
Template File: sources-sinks-82_goodG2B.tmpl.cpp
*/
/*
 * @description
 * CWE: 476 NULL Pointer Dereference
 * BadSource:  Set data to NULL
 * GoodSource: Initialize data
 * Sinks:
 *    GoodSink: Check for NULL before attempting to print data
 *    BadSink : Print data
 * Flow Variant: 82 Data flow: data passed in a parameter to an virtual method called via a pointer
 *
 * */
#ifndef OMITGOOD

#include "std_testcase.h"
#include "CWE476_NULL_Pointer_Dereference__struct_82.h"

namespace CWE476_NULL_Pointer_Dereference__struct_82
{

void CWE476_NULL_Pointer_Dereference__struct_82_goodG2B::action(twoIntsStruct * data)
{
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    printIntLine(data->intOne);
}

}
#endif /* OMITGOOD */
