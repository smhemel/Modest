/*
 Copyright (C) 2016 Alexander Borisov

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

 Author: lex.borisov@gmail.com (Alexander Borisov)
*/

#ifndef MyCSS_DECLARATION_ENTRY_DESTROY_RESOURCES_H
#define MyCSS_DECLARATION_ENTRY_DESTROY_RESOURCES_H
#pragma once

static mycss_callback_declaration_destroy_f mycss_declaration_entry_destroy_map_by_type[] = 
{
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_border_bottom_left_radius,
	mycss_declaration_entry_destroy_border_bottom_right_radius,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_border_color,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_border_style,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_border_top_left_radius,
	mycss_declaration_entry_destroy_border_top_right_radius,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_border_width,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_font,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_margin,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_padding,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef,
	mycss_declaration_entry_destroy_undef
};


#endif /* MyCSS_DECLARATION_ENTRY_DESTROY_RESOURCES_H */