/* 
 * Copyright (c) 2007, 2013, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */

#ifndef _DOCUMENT_PROPERTIES_FORM_H_
#define _DOCUMENT_PROPERTIES_FORM_H_

#include "workbench/wb_backend_public_interface.h"

#include "mforms/textentry.h"
#include "mforms/textbox.h"
#include "mforms/form.h"
#include "mforms/table.h"
#include "mforms/box.h"
#include "mforms/textentry.h"
#include "mforms/button.h"

namespace wb {
  class WBContextUI;
}

class MYSQLWBBACKEND_PUBLIC_FUNC DocumentPropertiesForm : public mforms::Form
{
  
  mforms::Table _table;
  mforms::Box _bottom_box;

  std::list<mforms::View*> _widgets;

  mforms::TextEntry _entry1;
  mforms::TextEntry _entry2;
  mforms::TextEntry _entry3;
  mforms::TextEntry _entry4;
  mforms::TextEntry _entry5;
  mforms::TextEntry _entry6;
  mforms::TextBox _text;
  
  mforms::Button _ok_button;
  mforms::Button _cancel_button;
  
  wb::WBContextUI *_wbui;
  
  void add_control(const std::string &caption, mforms::View *control, bool expand= false);
  
  void ok_clicked();
  void cancel_clicked();
  
  void pull_values();
  void push_values();
  
public:
  DocumentPropertiesForm(wb::WBContextUI *wbui);
  virtual ~DocumentPropertiesForm();

  void show();
};


#endif /* _DOCUMENT_PROPERTIES_FORM_H_ */
