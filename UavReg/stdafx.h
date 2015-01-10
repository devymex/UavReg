#pragma once

#ifndef VC_EXTRALEAN
// Exclude rarely-used stuff from Windows headers
#define VC_EXTRALEAN
#endif

// Including sdkddkver.h defines the highest available Windows platform.
#include <sdkddkver.h>

// some CString constructors will be explicit
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

// turns off MFC's hiding of some common and often safely ignored warning messages
#define _AFX_ALL_WARNINGS

///////////////////////////////////////////////////////////////////////////////
// MFC headers
// MFC core and standard components
#include <afxwin.h>

// MFC extensions
#include <afxext.h>

// MFC Automation classes
//#include <afxdisp.h>

#ifndef _AFX_NO_AFXCMN_SUPPORT
// MFC support for Windows Common Controls
#include <afxcmn.h>
#endif // _AFX_NO_AFXCMN_SUPPORT

// MFC support for Windows Common Dialogs
#include <afxdialogex.h>

#ifndef _AFX_NO_OLE_SUPPORT
// MFC support for Internet Explorer 4 Common Controls
#include <afxdtctl.h>
#endif

//MFC support for ribbons and control bars
#include <afxcontrolbars.h>

///////////////////////////////////////////////////////////////////////////////
// STL headers
#include <algorithm>
#include <cassert>
#include <cmath>
#include <filesystem>
#include <fstream>
#include <functional>
#include <iomanip>
#include <map>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

///////////////////////////////////////////////////////////////////////////////
// OpenCV headers
#include <opencv2\opencv.hpp>
