/*
 * Copyright (C) ????-2004 Justin Hibbits <jrh29@po.cwru.edu>
 * Copyright (C) 2004 Thomer M. Gil <mutt@thomer.com>
 *
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with this program; if not, write to the Free Software
 *     Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 */

#ifndef SIDEBAR_H
#define SIDEBAR_H

struct MBOX_LIST {
	char *path;
	int msgcount;
	int new;
} MBLIST;
enum {
	SB_SRC_NONE = 0,
	SB_SRC_VIRT,
	SB_SRC_INCOMING
};

/* parameter is whether or not to go to the status line */
/* used for omitting the last | that covers up the status bar in the index */
int draw_sidebar(int);
void scroll_sidebar(int, int);
void set_curbuffy(char*);
void set_buffystats(CONTEXT*);
void toggle_sidebar(int menu);
int sidebar_should_refresh();
void sidebar_updated();
int sidebar_get_source();

#endif /* SIDEBAR_H */
