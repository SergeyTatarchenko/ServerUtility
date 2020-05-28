/***************************************************************
 * Name:      ServerUtilityApp.h
 * Purpose:   Defines Application Class
 * Author:    SergeyTatarchenko ()
 * Created:   2020-05-28
 * Copyright: SergeyTatarchenko (https://github.com/SergeyTatarchenko)
 * License:
 **************************************************************/

#ifndef SERVERUTILITYAPP_H
#define SERVERUTILITYAPP_H

#include <wx/app.h>


class ServerUtilityApp : public wxApp
{
public:
	virtual bool OnInit();
};

DECLARE_APP(ServerUtilityApp)

#endif // SERVERUTILITYAPP_H
