/***************************************************************
 * Name:      DCSApp.cpp
 * Purpose:   Code for Application Class
 * Author:    LiQuidFly (liquidfly@126.com)
 * Created:   2014-09-23
 * Copyright: LiQuidFly ()
 * License:
 **************************************************************/

#include "DCSApp.h"

//(*AppHeaders
#include "DCSMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(DCSApp);

bool DCSApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	DCSFrame* Frame = new DCSFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
