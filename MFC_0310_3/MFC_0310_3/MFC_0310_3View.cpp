
// MFC_0310_3View.cpp : CMFC_0310_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC_0310_3.h"
#endif

#include "MFC_0310_3Doc.h"
#include "MFC_0310_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0310_3View

IMPLEMENT_DYNCREATE(CMFC_0310_3View, CView)

BEGIN_MESSAGE_MAP(CMFC_0310_3View, CView)
	ON_WM_MBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC_0310_3View 构造/析构

CMFC_0310_3View::CMFC_0310_3View()
{
	// TODO: 在此处添加构造代码

}

CMFC_0310_3View::~CMFC_0310_3View()
{
}

BOOL CMFC_0310_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC_0310_3View 绘制

void CMFC_0310_3View::OnDraw(CDC* /*pDC*/)
{
	CMFC_0310_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC_0310_3View 诊断

#ifdef _DEBUG
void CMFC_0310_3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0310_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0310_3Doc* CMFC_0310_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0310_3Doc)));
	return (CMFC_0310_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0310_3View 消息处理程序


void CMFC_0310_3View::OnMButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMButtonDown(nFlags, point);
}


void CMFC_0310_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正被按下");
	CClientDC dc(this);
	dc.TextOutW(100, 200, s);
	CView::OnLButtonDown(nFlags, point);
}


void CMFC_0310_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString ss = _T("左键正在抬起");
	CClientDC dc(this);
	dc.TextOutW(200, 200, ss);
	CView::OnLButtonUp(nFlags, point);
}
