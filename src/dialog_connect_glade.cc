// generated 2008/2/5 0:05:31 CET by tobias@THINKPAD-T43.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/tobias/src/svn/gninjam/trunk/gninjam.glade
// for gtk 2.12.0 and gtkmm 2.12.0
//
// Please modify the corresponding derived classes in ./src/dialog_connect.cc


#if defined __GNUC__ && __GNUC__ < 3
#error This program will crash if compiled with g++ 2.x
// see the dynamic_cast bug in the gtkmm FAQ
#endif //
#include "config.h"
/*
 * Standard gettext macros.
 */
#ifdef ENABLE_NLS
#  include <libintl.h>
#  undef _
#  define _(String) dgettext (GETTEXT_PACKAGE, String)
#  ifdef gettext_noop
#    define N_(String) gettext_noop (String)
#  else
#    define N_(String) (String)
#  endif
#else
#  define textdomain(String) (String)
#  define gettext(String) (String)
#  define dgettext(Domain,Message) (Message)
#  define dcgettext(Domain,Message,Type) (Message)
#  define bindtextdomain(Domain,Directory) (Domain)
#  define _(String) (String)
#  define N_(String) (String)
#endif
#include <gtkmmconfig.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION>2
#include <sigc++-2.0/sigc++/sigc++.h>
#define GMM_GTKMM_22_24(a,b) b
#else //gtkmm 2.2
#define GMM_GTKMM_22_24(a,b) a
#endif //
#include "dialog_connect_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>
#include <gtkmm/button.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/label.h>
#include <gtkmm/table.h>
#include <gtkmm/box.h>

dialog_connect_glade::dialog_connect_glade(
)
{  dialog_connect = this;
   gmm_data = new GlademmData(get_accel_group());
   
   Gtk::Button *cancelbutton1 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-cancel")));
   Gtk::Button *okbutton1 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-ok")));
   Gtk::Label *label4 = Gtk::manage(new class Gtk::Label(_("Hostname:")));
   Gtk::Label *label5 = Gtk::manage(new class Gtk::Label(_("Username:")));
   entry_hostname = Gtk::manage(new class Gtk::Entry());
   entry_username = Gtk::manage(new class Gtk::Entry());
   label6 = Gtk::manage(new class Gtk::Label(_("Password:")));
   entry_password = Gtk::manage(new class Gtk::Entry());
   checkbutton_anonymous = Gtk::manage(new class Gtk::CheckButton(_("Connect _anonymously"), true));
   
   Gtk::Table *table1 = Gtk::manage(new class Gtk::Table(2, 2, false));
   cancelbutton1->set_name("cancelbutton1");
   cancelbutton1->set_flags(Gtk::CAN_FOCUS);
   cancelbutton1->set_flags(Gtk::CAN_DEFAULT);
   cancelbutton1->set_relief(Gtk::RELIEF_NORMAL);
   okbutton1->set_name("okbutton1");
   okbutton1->set_flags(Gtk::CAN_FOCUS);
   okbutton1->set_flags(Gtk::CAN_DEFAULT);
   okbutton1->add_accelerator("clicked", gmm_data->getAccelGroup(), GDK_Return, Gdk::ModifierType(0), Gtk::ACCEL_VISIBLE);
   okbutton1->set_relief(Gtk::RELIEF_NORMAL);
   dialog_connect->get_action_area()->set_name("dialog-action_area2");
   dialog_connect->get_action_area()->property_layout_style().set_value(Gtk::BUTTONBOX_END);
   label4->set_name("label4");
   label4->set_alignment(0,0.5);
   label4->set_padding(0,0);
   label4->set_justify(Gtk::JUSTIFY_LEFT);
   label4->set_line_wrap(false);
   label4->set_use_markup(false);
   label4->set_selectable(false);
   label5->set_name("label5");
   label5->set_alignment(0,0.5);
   label5->set_padding(0,0);
   label5->set_justify(Gtk::JUSTIFY_LEFT);
   label5->set_line_wrap(false);
   label5->set_use_markup(false);
   label5->set_selectable(false);
   entry_hostname->set_name("entry_hostname");
   entry_hostname->set_flags(Gtk::CAN_FOCUS);
   entry_hostname->grab_focus();
   entry_hostname->set_visibility(true);
   entry_hostname->set_editable(true);
   entry_hostname->set_max_length(0);
   entry_hostname->set_text("");
   entry_hostname->set_has_frame(true);
   entry_hostname->set_activates_default(false);
   entry_username->set_name("entry_username");
   entry_username->set_flags(Gtk::CAN_FOCUS);
   entry_username->set_visibility(true);
   entry_username->set_editable(true);
   entry_username->set_max_length(0);
   entry_username->set_text("");
   entry_username->set_has_frame(true);
   entry_username->set_activates_default(false);
   label6->set_name("label6");
   label6->set_alignment(0,0.5);
   label6->set_padding(0,0);
   label6->set_justify(Gtk::JUSTIFY_LEFT);
   label6->set_line_wrap(false);
   label6->set_use_markup(false);
   label6->set_selectable(false);
   entry_password->set_name("entry_password");
   entry_password->set_flags(Gtk::CAN_FOCUS);
   entry_password->set_visibility(false);
   entry_password->set_editable(true);
   entry_password->set_max_length(0);
   entry_password->set_text("");
   entry_password->set_has_frame(true);
   entry_password->set_activates_default(false);
   checkbutton_anonymous->set_name("checkbutton_anonymous");
   checkbutton_anonymous->set_flags(Gtk::CAN_FOCUS);
   checkbutton_anonymous->set_relief(Gtk::RELIEF_NORMAL);
   checkbutton_anonymous->set_mode(true);
   checkbutton_anonymous->set_active(false);
   table1->set_name("table1");
   table1->set_border_width(4);
   table1->set_row_spacings(4);
   table1->set_col_spacings(4);
   table1->attach(*label4, 0, 1, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table1->attach(*label5, 0, 1, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table1->attach(*entry_hostname, 1, 2, 0, 1, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table1->attach(*entry_username, 1, 2, 1, 2, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table1->attach(*label6, 0, 1, 3, 4, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table1->attach(*entry_password, 1, 2, 3, 4, Gtk::EXPAND|Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table1->attach(*checkbutton_anonymous, 1, 2, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   dialog_connect->get_vbox()->set_name("dialog-vbox2");
   dialog_connect->get_vbox()->set_homogeneous(false);
   dialog_connect->get_vbox()->set_spacing(0);
   dialog_connect->get_vbox()->pack_start(*table1);
   dialog_connect->set_name("dialog_connect");
   dialog_connect->set_title(_("Connect"));
   dialog_connect->set_modal(false);
   dialog_connect->property_window_position().set_value(Gtk::WIN_POS_NONE);
   dialog_connect->set_resizable(true);
   dialog_connect->property_destroy_with_parent().set_value(false);
   dialog_connect->set_has_separator(true);
   dialog_connect->add_action_widget(*cancelbutton1, -6);
   dialog_connect->add_action_widget(*okbutton1, -5);
   cancelbutton1->show();
   okbutton1->show();
   label4->show();
   label5->show();
   entry_hostname->show();
   entry_username->show();
   label6->show();
   entry_password->show();
   checkbutton_anonymous->show();
   table1->show();
   checkbutton_anonymous->signal_toggled().connect(sigc::mem_fun(*this, &dialog_connect_glade::on_checkbutton_anonymous_toggled), false);
   okbutton1->grab_default();
}

dialog_connect_glade::~dialog_connect_glade()
{  delete gmm_data;
}
