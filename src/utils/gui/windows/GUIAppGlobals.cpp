//---------------------------------------------------------------------------//
//                        GUIAppGlobals.cpp -
//
//                           -------------------
//  project              : SUMO - Simulation of Urban MObility
//  begin                : Tue, 29.05.2005
//  copyright            : (C) 2005 by Daniel Krajzewicz
//  organisation         : IVF/DLR http://ivf.dlr.de
//  email                : Daniel.Krajzewicz@dlr.de
//---------------------------------------------------------------------------//

//---------------------------------------------------------------------------//
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 2 of the License, or
//   (at your option) any later version.
//
//---------------------------------------------------------------------------//
namespace
{
    const char rcsid[] =
    "$Id$";
}
// $Log$
// Revision 1.3  2005/09/15 12:20:19  dkrajzew
// LARGE CODE RECHECK
//
// Revision 1.2  2005/07/12 12:52:07  dkrajzew
// code style adapted
//
// Revision 1.2  2005/06/14 11:29:51  dksumo
// documentation added
//
/* =========================================================================
 * compiler pragmas
 * ======================================================================= */
#pragma warning(disable: 4786)


/* =========================================================================
 * included modules
 * ======================================================================= */




#ifdef HAVE_CONFIG_H
#include <config.h>
#endif // HAVE_CONFIG_H

#include "GUIAppGlobals.h"

#ifdef _DEBUG
#include <utils/dev/debug_new.h>
#endif // _DEBUG



/* =========================================================================
 * variable definitions
 * ======================================================================= */

FXApp *gFXApp = 0;



/**************** DO NOT DEFINE ANYTHING AFTER THE INCLUDE *****************/

// Local Variables:
// mode:C++
// End:

