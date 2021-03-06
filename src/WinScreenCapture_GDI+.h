/*************************************************************************************************/
/* Project: Screen capture server                                                                */
/* Author: @aviloria (GitHub)                                                                    */
/*-----------------------------------------------------------------------------------------------*/
/* Copyleft license                                                                              */
/*    YOU ARE ALLOWED TO FREELY DISTRIBUTE COPIES AND MODIFIED VERSIONS OF THIS WORK WITH        */
/*    THE STIPULATION THAT THE SAME RIGHTS BE PRESERVED IN DERIVATIVE WORKS CREATED LATER.       */
/*************************************************************************************************/
//-------------------------------------------------------------------------------------------------
#ifndef __WINSCREENCAPTURE_GDIPLUS_H__
#define __WINSCREENCAPTURE_GDIPLUS_H__
//-------------------------------------------------------------------------------------------------
#include "IWinScreenCapture.h"
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

/**
 * Screen capture class for capturing using GDI+
 */
class WinScreenCapture_GDIplus : public IWinScreenCapture
{
public:
	WinScreenCapture_GDIplus(const TCHAR *strDisplayDevice=NULL);
	~WinScreenCapture_GDIplus();

	BOOL getCurrentScreenSize(UINT &nSizeX, UINT &nSizeY) const;

	BOOL captureScreenRect(UINT nX0, UINT nY0, UINT nSizeX, UINT nSizeY, CImage &img);

private:
	ULONG_PTR _gdiplusToken;
	HDC _hDCScreen;
};
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
#endif // __WINSCREENCAPTURE_GDIPLUS_H__
//-------------------------------------------------------------------------------------------------
