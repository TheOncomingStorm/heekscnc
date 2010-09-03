// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//
// Copyright (c) 2009, Dan Heeks
// This program is released under the BSD license. See the file COPYING for details.

#ifdef WIN32
#pragma warning(disable : 4996)
#endif

#include <list>
#include <vector>
#include <map>
#include <set>

#include <wx/wx.h>

extern "C" {
#include <GL/gl.h>
#ifdef WIN32
#include <GL/glu.h>
#else
#include <GL/glu.h>
#endif
}
#if 0
#include <wx/glcanvas.h>
#include <wx/config.h>
#include <wx/confbase.h>
#include <wx/fileconf.h>
#include <wx/splitter.h>
#ifdef WIN32
#include <wx/msw/regconf.h>
#endif
#include <wx/aui/aui.h>
#endif

#include "HeeksCNC.h"
#include "interface/strconv.h"
#include "interface/HeeksObj.h"
#include "interface/ObjectCanvas.h"

#include "gp_Pnt.hxx"
#include "gp_Lin.hxx"
#include "gp_Circ.hxx"
#include "gp_Pln.hxx"
#include "Geom_Plane.hxx"
#include "GeomAPI_IntSS.hxx"
#include "Geom_Line.hxx"
#include "gp_Elips.hxx"

// TODO: reference additional headers your program requires here

// Visual Studio 2010 work arround

#if _MSC_VER == 1600
	#include <iterator>
#endif