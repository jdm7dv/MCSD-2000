// STUploadDoc.h : interface of the CSTUploadDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUPLOADDOC_H__8F89ECBF_D435_11D2_925F_0080C7FA0C3E__INCLUDED_)
#define AFX_STUPLOADDOC_H__8F89ECBF_D435_11D2_925F_0080C7FA0C3E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSTUploadDoc : public CDocument
{
protected: // create from serialization only
	CSTUploadDoc();
	DECLARE_DYNCREATE(CSTUploadDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSTUploadDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSTUploadDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSTUploadDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUPLOADDOC_H__8F89ECBF_D435_11D2_925F_0080C7FA0C3E__INCLUDED_)
