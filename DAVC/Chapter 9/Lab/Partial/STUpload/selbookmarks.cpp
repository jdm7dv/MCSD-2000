// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "selbookmarks.h"


/////////////////////////////////////////////////////////////////////////////
// CSelBookmarks properties

/////////////////////////////////////////////////////////////////////////////
// CSelBookmarks operations

long CSelBookmarks::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT CSelBookmarks::GetItem(const VARIANT& Index)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&Index);
	return result;
}

void CSelBookmarks::Remove(const VARIANT& Index)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Index);
}

void CSelBookmarks::Add(const VARIANT& Bookmark)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Bookmark);
}
