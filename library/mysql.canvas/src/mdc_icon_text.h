/* 
 * Copyright (c) 2007, 2012, Oracle and/or its affiliates. All rights reserved.
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

#ifndef _MDC_ICON_TEXT_H_
#define _MDC_ICON_TEXT_H_

#include "mdc_text.h"

namespace mdc {
  
class MYSQLCANVAS_PUBLIC_FUNC IconTextFigure : public TextFigure {
public:
    enum Alignment {
      Left,
      Center,
      Right
    };
    
    IconTextFigure(Layer *layer);
    virtual ~IconTextFigure();
    
    virtual base::Size calc_min_size();
    
    virtual void draw_contents(CairoCtx *cr);
    
    void set_icon(cairo_surface_t *icon);
    cairo_surface_t *get_icon() { return _icon; }

    void set_spacing(double space);
    double get_spacing() { return _spacing; }
    
    virtual void auto_size();

protected:
    cairo_surface_t *_icon;
    double _spacing;
  };
  
  
};


#endif /* _MDC_ICON_TEXT_H_ */
