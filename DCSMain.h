/***************************************************************
 * Name:      DCSMain.h
 * Purpose:   Defines Application Frame
 * Author:    LiQuidFly (liquidfly@126.com)
 * Created:   2014-09-23
 * Copyright: LiQuidFly ()
 * License:
 **************************************************************/

#ifndef DCSMAIN_H
#define DCSMAIN_H

//(*Headers(DCSFrame)
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class DCSFrame: public wxFrame
{
    public:

        DCSFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~DCSFrame();

    private:

        //(*Handlers(DCSFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(DCSFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(DCSFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // DCSMAIN_H
