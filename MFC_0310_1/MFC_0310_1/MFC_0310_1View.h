
// MFC_0310_1View.h : CMFC_0310_1View ��Ľӿ�
//

#pragma once


class CMFC_0310_1View : public CView
{
protected: // �������л�����
	CMFC_0310_1View();
	DECLARE_DYNCREATE(CMFC_0310_1View)

// ����
public:
	CMFC_0310_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC_0310_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC_0310_1View.cpp �еĵ��԰汾
inline CMFC_0310_1Doc* CMFC_0310_1View::GetDocument() const
   { return reinterpret_cast<CMFC_0310_1Doc*>(m_pDocument); }
#endif
