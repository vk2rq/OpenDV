/*
 *   Copyright (C) 2010-2013 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef	SplitRepeaterFrame_H
#define	SplitRepeaterFrame_H

#include "SplitRepeaterDefs.h"

#include <wx/wx.h>

class CSplitRepeaterFrame : public wxFrame {
public:
	CSplitRepeaterFrame(const wxString& title, const wxPoint& position, bool gui);
	virtual ~CSplitRepeaterFrame();

	virtual void onQuit(wxCommandEvent& event);
	virtual void onPreferences(wxCommandEvent& event);
	virtual void onUpdates(wxCommandEvent& event);
	virtual void onAbout(wxCommandEvent& event);
	virtual void onClose(wxCloseEvent& event);
	virtual void onActions(wxCommandEvent& event);
	virtual void onLog(wxEvent& event);

	virtual void onTimer(wxTimerEvent& event);

	virtual void showLog(const wxString& text);

private:
	wxStaticText* m_state;
	wxStaticText* m_your;
	wxStaticText* m_my;
	wxStaticText* m_rpt1;
	wxStaticText* m_rpt2;
	wxStaticText* m_flags;
	wxStaticText* m_ber;
	wxStaticText* m_timeout;
	wxStaticText* m_beacon;
	wxStaticText* m_announce;
	wxStaticText* m_text;
	wxStaticText* m_status1;
	wxStaticText* m_status2;
	wxStaticText* m_status3;
	wxStaticText* m_status4;
	wxStaticText* m_status5;
	wxStaticText* m_logLine1;
	wxStaticText* m_logLine2;
	wxStaticText* m_logLine3;
	wxTimer       m_timer;
	bool          m_updates;

	DECLARE_EVENT_TABLE()

	wxMenuBar* createMenuBar();
};

#endif
