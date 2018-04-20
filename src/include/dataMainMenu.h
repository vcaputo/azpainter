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

/***************************************
 * メニュー定義データ
 ***************************************/

#ifndef MAINMENUDAT_DEFINE

extern const uint16_t g_mainmenudat[];

#else

const uint16_t g_mainmenudat[] = {
//file
TRMENU_TOP_FILE,
TRMENU_FILE_NEW, TRMENU_FILE_OPEN, 0xfffe,
TRMENU_FILE_SAVE, TRMENU_FILE_SAVE_AS, TRMENU_FILE_SAVE_DUP, 0xfffe,
TRMENU_FILE_RECENTFILE, 0xfffe,
TRMENU_FILE_EXIT,

//edit
TRMENU_TOP_EDIT,
TRMENU_EDIT_UNDO, TRMENU_EDIT_REDO, 0xfffe,
TRMENU_EDIT_CHECK_MASKS, 0xfffe,
TRMENU_EDIT_FILL, TRMENU_EDIT_ERASE, 0xfffe,
TRMENU_EDIT_RESIZE_CANVAS, TRMENU_EDIT_SCALE_CANVAS, 0xfffe,
TRMENU_EDIT_CHANGE_DPI,

//layer
TRMENU_TOP_LAYER,
TRMENU_LAYER_NEW, TRMENU_LAYER_NEW_FOLDER, TRMENU_LAYER_NEW_FROM_FILE, 0xfffe,
TRMENU_LAYER_COPY, TRMENU_LAYER_DELETE, TRMENU_LAYER_ERASE, 0xfffe,
TRMENU_LAYER_OPTION, TRMENU_LAYER_SETCOLOR, TRMENU_LAYER_SETTYPE, 0xfffe,
TRMENU_LAYER_DROP, TRMENU_LAYER_COMBINE, TRMENU_LAYER_COMBINE_MULTI, TRMENU_LAYER_BLEND_ALL, 0xfffe,
TRMENU_LAYER_CLOSE_ALL_FOLDERS, 0xfffe,
TRMENU_LAYER_EDIT,
0xfffd,
	TRMENU_LAYER_EDIT_REV_HORZ, TRMENU_LAYER_EDIT_REV_VERT,
	TRMENU_LAYER_EDIT_ROTATE_LEFT, TRMENU_LAYER_EDIT_ROTATE_RIGHT,
0xfffd,
TRMENU_LAYER_VIEW,
0xfffd,
	TRMENU_LAYER_VIEW_ALL_SHOW, TRMENU_LAYER_VIEW_ALL_HIDE,
	TRMENU_LAYER_VIEW_ONLY_CURRENT, TRMENU_LAYER_VIEW_REV_CHECKED,
	TRMENU_LAYER_VIEW_REV_IMAGE,
0xfffd,
TRMENU_LAYER_FLAG,
0xfffd,
	TRMENU_LAYER_FLAG_OFF_LOCK, TRMENU_LAYER_FLAG_OFF_FILL_REF,
	TRMENU_LAYER_FLAG_OFF_CHECKED,
0xfffd,
0xfffe,
TRMENU_LAYER_OUTPUT,

//select
TRMENU_TOP_SELECT,
TRMENU_SEL_RELEASE, TRMENU_SEL_INVERSE, TRMENU_SEL_ALL, 0xfffe,
TRMENU_SEL_COPY, TRMENU_SEL_CUT, TRMENU_SEL_PASTE_NEWLAYER, 0xfffe,
TRMENU_SEL_EXPAND, 0xfffe,
TRMENU_SEL_OUTPUT_PNG,

//filter
TRMENU_TOP_FILTER,

TRMENU_FILTER_COLOR,
0xfffd,
TRMENU_FILTER_COLOR_BRIGHT_CONST, TRMENU_FILTER_COLOR_GAMMA, TRMENU_FILTER_COLOR_LEVEL,
TRMENU_FILTER_COLOR_RGB, TRMENU_FILTER_COLOR_HSV, TRMENU_FILTER_COLOR_HLS, 0xfffe,
TRMENU_FILTER_COLOR_NEGA, TRMENU_FILTER_COLOR_GRAYSCALE, TRMENU_FILTER_COLOR_SEPIA,
TRMENU_FILTER_COLOR_GRADMAP, 0xfffe,
TRMENU_FILTER_COLOR_THRESHOLD, TRMENU_FILTER_COLOR_THRESHOLD_DITHER,
TRMENU_FILTER_COLOR_POSTERIZE, TRMENU_FILTER_COLOR_REDUCE_COLOR,
0xfffd,

TRMENU_FILTER_COLREP,
0xfffd,
TRMENU_FILTER_COLREP_DRAWCOL, 0xfffe, TRMENU_FILTER_COLREP_DRAWCOL_TO_TP,
TRMENU_FILTER_COLREP_EXDRAWCOL_TO_TP, TRMENU_FILTER_COLREP_DRAWCOL_TO_BKGND,
TRMENU_FILTER_COLREP_TP_TO_DRAWCOL,
0xfffd,

TRMENU_FILTER_ALPHA1,
0xfffd,
TRMENU_FILTER_ALPHA1_TP_TO_TP, TRMENU_FILTER_ALPHA1_NOTTP_TO_TP,
TRMENU_FILTER_ALPHA1_COPY, TRMENU_FILTER_ALPHA1_ADD, TRMENU_FILTER_ALPHA1_SUB,
TRMENU_FILTER_ALPHA1_MUL, 0xfffe, TRMENU_FILTER_ALPHA1_LUM_REV, TRMENU_FILTER_ALPHA1_LUM,
0xfffd,

TRMENU_FILTER_ALPHA2,
0xfffd,
TRMENU_FILTER_ALPHA2_LUM_REV, TRMENU_FILTER_ALPHA2_LUM,
TRMENU_FILTER_ALPHA2_OPAQUE_TO_MAX,
TRMENU_FILTER_ALPHA2_TEXTURE, TRMENU_FILTER_ALPHA2_CREATE_GRAYSCALE,
0xfffd,

TRMENU_FILTER_BLUR,
0xfffd,
TRMENU_FILTER_BLUR_BLUR, TRMENU_FILTER_BLUR_GAUSS, TRMENU_FILTER_BLUR_MOTION,
TRMENU_FILTER_BLUR_RADIAL, TRMENU_FILTER_BLUR_LENS,
0xfffd,

TRMENU_FILTER_DRAW,
0xfffd,
TRMENU_FILTER_DRAW_CLOUD, TRMENU_FILTER_DRAW_AMITONE1, TRMENU_FILTER_DRAW_AMITONE2, 0xfffe,
TRMENU_FILTER_DRAW_RANDOM_POINT, TRMENU_FILTER_DRAW_EDGE_POINT, 0xfffe,
TRMENU_FILTER_DRAW_FRAME, TRMENU_FILTER_DRAW_HORZVERT_LINE, TRMENU_FILTER_DRAW_PLAID,
0xfffd,

TRMENU_FILTER_DRAW_COMIC,
0xfffd,
TRMENU_FILTER_COMIC_CONCLINE, TRMENU_FILTER_COMIC_FLASH, TRMENU_FILTER_COMIC_POPUP_FLASH,
TRMENU_FILTER_COMIC_UNIFLASH, TRMENU_FILTER_COMIC_UNIFLASH_WAVE,
0xfffd,

TRMENU_FILTER_PIXELATE,
0xfffd,
TRMENU_FILTER_PIXELATE_MOZAIC, TRMENU_FILTER_PIXELATE_CRYSTAL, TRMENU_FILTER_PIXELATE_HALFTONE,
0xfffd,

TRMENU_FILTER_EDGE,
0xfffd,
TRMENU_FILTER_EDGE_SHARP, TRMENU_FILTER_EDGE_UNSHARPMASK, 0xfffe,
TRMENU_FILTER_EDGE_SOBEL, TRMENU_FILTER_EDGE_LAPLACIAN, TRMENU_FILTER_EDGE_HIGHPASS,
0xfffd,

TRMENU_FILTER_EFFECT,
0xfffd,
TRMENU_FILTER_EFFECT_GLOW, TRMENU_FILTER_EFFECT_RGBSHIFT, TRMENU_FILTER_EFFECT_OILPAINT,
TRMENU_FILTER_EFFECT_EMBOSS, TRMENU_FILTER_EFFECT_NOISE,
TRMENU_FILTER_EFFECT_DIFFUSION, TRMENU_FILTER_EFFECT_SCRATCH,
TRMENU_FILTER_EFFECT_MEDIAN, TRMENU_FILTER_EFFECT_BLURRING,
0xfffd,

TRMENU_FILTER_TRANSFORM,
0xfffd,
TRMENU_FILTER_TRANS_WAVE, TRMENU_FILTER_TRANS_RIPPLE, TRMENU_FILTER_TRANS_POLAR,
TRMENU_FILTER_TRANS_RADIAL_SHIFT, TRMENU_FILTER_TRANS_SWIRL,
0xfffd,

TRMENU_FILTER_OTHER,
0xfffd,
TRMENU_FILTER_OTHER_LUM_TO_ALPHA, TRMENU_FILTER_OTHER_1PXDOT_THINNING,
TRMENU_FILTER_OTHER_ANTIALIASING, TRMENU_FILTER_OTHER_HEMMING,
TRMENU_FILTER_OTHER_3DFRAME, TRMENU_FILTER_OTHER_SHIFT,
0xfffd,

//view
TRMENU_TOP_VIEW,
TRMENU_VIEW_PALETTE,
0xfffd,
	TRMENU_VIEW_PALETTE_VISIBLE, TRMENU_VIEW_PALETTE_ALL_WINDOW, TRMENU_VIEW_PALETTE_ALL_DOCK, 0xfffe,
	TRMENU_VIEW_PALETTE_TOOL, TRMENU_VIEW_PALETTE_OPTION, TRMENU_VIEW_PALETTE_LAYER,
	TRMENU_VIEW_PALETTE_BRUSH, TRMENU_VIEW_PALETTE_COLOR, TRMENU_VIEW_PALETTE_COLOR_WHEEL,
	TRMENU_VIEW_PALETTE_COLOR_PALETTE,
	TRMENU_VIEW_PALETTE_CANVAS_CTRL, TRMENU_VIEW_PALETTE_CANVAS_VIEW, TRMENU_VIEW_PALETTE_IMAGE_VIEWER,
	TRMENU_VIEW_PALETTE_FILTER_LIST,
0xfffd,
0xfffe,
TRMENU_VIEW_CANVAS_MIRROR, TRMENU_VIEW_BKGND_PLAID, TRMENU_VIEW_GRID, TRMENU_VIEW_GRID_SPLIT, 0xfffe,
TRMENU_VIEW_TOOLBAR, TRMENU_VIEW_STATUSBAR, 0xfffe,
TRMENU_VIEW_CANVAS_ZOOM,
0xfffd,
	TRMENU_VIEW_CANVASZOOM_UP, TRMENU_VIEW_CANVASZOOM_DOWN, TRMENU_VIEW_CANVASZOOM_FIT, 0xfffe,
0xfffd,
TRMENU_VIEW_CANVAS_ROTATE,
0xfffd,
	TRMENU_VIEW_CANVASROTATE_LEFT, TRMENU_VIEW_CANVASROTATE_RIGHT, 0xfffe,
	TRMENU_VIEW_CANVASROTATE_0, TRMENU_VIEW_CANVASROTATE_90,
	TRMENU_VIEW_CANVASROTATE_180, TRMENU_VIEW_CANVASROTATE_270,
0xfffd,

//option
TRMENU_TOP_OPTION,
TRMENU_OPT_ENV, TRMENU_OPT_GRID, TRMENU_OPT_CANVASKEY,
TRMENU_OPT_SHORTCUTKEY, TRMENU_OPT_DOCK_ARRANGE, 0xfffe,
TRMENU_OPT_VERSION,

0xffff
};

#endif
