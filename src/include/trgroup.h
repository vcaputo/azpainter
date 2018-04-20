/*$
 Copyright (C) 2013-2018 Azel.

 This file is part of AzPainter.

 AzPainter is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 AzPainter is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
$*/

/******************************
 * 文字列グループID
 ******************************/

#ifndef TRGROUP_H
#define TRGROUP_H

enum
{
	TRGROUP_WORD = 0,
	TRGROUP_APPERR,
	TRGROUP_MESSAGE,
	TRGROUP_MAINMENU,
	TRGROUP_TOOLBAR_TOOLTIP,
	TRGROUP_DROPMENU_SAVEDUP,
	TRGROUP_CHECK_MASKS,
	TRGROUP_DRAW_MESSAGE,
	TRGROUP_STATUSBAR_HELP,

	TRGROUP_TOOL = 100,
	TRGROUP_TOOL_SUB,
	TRGROUP_LAYERTYPE,
	TRGROUP_PIXELMODE_BRUSH,
	TRGROUP_PIXELMODE_TOOL,
	TRGROUP_SELMATERIAL,
	TRGROUP_BLENDMODE,
	TRGROUP_SCALE_TYPE,
	TRGROUP_DOCK_NAME,

	TRGROUP_DOCK_IMAGEVIEWER = 1000,
	TRGROUP_DOCK_CANVASVIEW,
	TRGROUP_DOCK_COLOR,
	TRGROUP_DOCK_COLOR_PALETTE,
	TRGROUP_DOCK_OPTION,
	TRGROUP_DOCK_LAYER,
	TRGROUP_DOCK_BRUSH_SIZE,
	TRGROUP_DOCK_BRUSH_LIST,
	TRGROUP_DOCK_BRUSH_VALUE,
	TRGROUP_DOCK_COLOR_WHEEL,

	TRGROUP_DOCKOPT_MOVE = 1100,
	TRGROUP_DOCKOPT_GRAD,
	TRGROUP_DOCKOPT_FILL,
	TRGROUP_DOCKOPT_STAMP,
	TRGROUP_DOCKOPT_RULE,
	TRGROUP_DOCKOPT_HEADTAIL,

	TRGROUP_FILEDIALOG = 2000,
	TRGROUP_DLG_CANVASVIEW_OPT,
	TRGROUP_DLG_GRID_OPT,
	TRGROUP_DLG_NEWIMAGE,
	TRGROUP_DLG_PALETTE_EDIT,
	TRGROUP_DLG_LAYER,
	TRGROUP_DLG_GRADATION_EDIT,
	TRGROUP_DLG_CANVAS_RESIZE,
	TRGROUP_DLG_CANVAS_SCALE,
	TRGROUP_DLG_CHANGE_DPI,
	TRGROUP_DLG_SAVE_OPTION,
	TRGROUP_DLG_BRUSH_DETAIL,
	TRGROUP_DLG_BRUSHLISTEDIT,
	TRGROUP_DLG_SELECT_EXPAND,
	TRGROUP_DLG_BOXEDITTRANS,
	TRGROUP_DLG_DRAWTEXT,
	TRGROUP_DLG_SHORTCUTKEY_OPT,
	TRGROUP_DLG_CANVASKEY_OPT,
	TRGROUP_DLG_PANEL_LAYOUT_OPT,
	TRGROUP_DLG_ENV_OPTION,
	TRGROUP_DLG_FILTER,
	TRGROUP_DLG_TOOLBAR_CUSTOMIZE
};

#endif
