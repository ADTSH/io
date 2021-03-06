/*
 *
 * GLUT Constants
 *
 */

typedef struct t_ioGLUT_constTable {
	char *name;
	long value;
} t_ioGLUT_constTable;


t_ioGLUT_constTable ioGLUT_constTable[] = {

	{"GLUT_KEY_ESC", 27},
	{"GLUT_KEY_TAB", 9},
	{"GLUT_KEY_RETURN", 13},
	{"GLUT_KEY_SPACE", 32},
	{"GLUT_KEY_SEMICOLON", ';'},
	{"GLUT_KEY_COMMA", ','},
	{"GLUT_KEY_DECIMAL", '.'},

	{"GLUT_KEY_GRAVE", '~'},
	{"GLUT_KEY_QUOTE", '"'},
	{"GLUT_KEY_LBRACKET", '['},
	{"GLUT_KEY_RBRACKET", ']'},
	{"GLUT_KEY_BACKSLASH", '\\'},
	{"GLUT_KEY_SLASH", '/'},
	{"GLUT_KEY_EQUAL", '='},

/* Display mode bit masks. */
	{"GLUT_RGB",GLUT_RGB},
	{"GLUT_RGBA",GLUT_RGBA},
	{"GLUT_INDEX",GLUT_INDEX},
	{"GLUT_SINGLE",GLUT_SINGLE},
	{"GLUT_DOUBLE",GLUT_DOUBLE},
	{"GLUT_ACCUM",GLUT_ACCUM},
	{"GLUT_ALPHA",GLUT_ALPHA},
	{"GLUT_DEPTH",GLUT_DEPTH},
	{"GLUT_STENCIL",GLUT_STENCIL},
#if (GLUT_API_VERSION >= 2)
	{"GLUT_MULTISAMPLE",GLUT_MULTISAMPLE},
	{"GLUT_STEREO",GLUT_STEREO},
#endif
#if (GLUT_API_VERSION >= 3)
	{"GLUT_LUMINANCE",GLUT_LUMINANCE},
#endif

/* Mouse buttons. */
	{"GLUT_LEFT_BUTTON",GLUT_LEFT_BUTTON},
	{"GLUT_MIDDLE_BUTTON",GLUT_MIDDLE_BUTTON},
	{"GLUT_RIGHT_BUTTON",GLUT_RIGHT_BUTTON},

/* Mouse button  state. */
	{"GLUT_DOWN",GLUT_DOWN},
	{"GLUT_UP",GLUT_UP},


#if (GLUT_API_VERSION >= 2)
	/*
#ifdef GLUT_KEY_ESC
	{"GLUT_KEY_ESC", GLUT_KEY_ESC},
	{"GLUT_KEY_TAB", GLUT_KEY_TAB},
	{"GLUT_KEY_RETURN", GLUT_KEY_RETURN},
	{"GLUT_KEY_SPACE", GLUT_KEY_SPACE},
	{"GLUT_KEY_SEMICOLON", GLUT_KEY_SEMICOLON},
	{"GLUT_KEY_COMMA", GLUT_KEY_COMMA},
	{"GLUT_KEY_DECIMAL", GLUT_KEY_DECIMAL},
	{"GLUT_KEY_GRAVE", GLUT_KEY_GRAVE},
	{"GLUT_KEY_QUOTE", GLUT_KEY_QUOTE},
	{"GLUT_KEY_LBRACKET", GLUT_KEY_LBRACKET},
	{"GLUT_KEY_RBRACKET", GLUT_KEY_RBRACKET},
	{"GLUT_KEY_BACKSLASH", GLUT_KEY_BACKSLASH},
	{"GLUT_KEY_SLASH", GLUT_KEY_SLASH},
	{"GLUT_KEY_EQUAL", GLUT_KEY_EQUAL},
#endif
*/

/* function keys */
	{"GLUT_KEY_F1", GLUT_KEY_F1},
	{"GLUT_KEY_F2", GLUT_KEY_F2},
	{"GLUT_KEY_F3", GLUT_KEY_F3},
	{"GLUT_KEY_F4", GLUT_KEY_F4},
	{"GLUT_KEY_F5", GLUT_KEY_F5},
	{"GLUT_KEY_F6", GLUT_KEY_F6},
	{"GLUT_KEY_F7", GLUT_KEY_F7},
	{"GLUT_KEY_F8", GLUT_KEY_F8},
	{"GLUT_KEY_F9", GLUT_KEY_F9},
	{"GLUT_KEY_F10", GLUT_KEY_F10},
	{"GLUT_KEY_F11", GLUT_KEY_F11},
	{"GLUT_KEY_F12", GLUT_KEY_F12},
/* directional keys */
	{"GLUT_KEY_LEFT", GLUT_KEY_LEFT},
	{"GLUT_KEY_UP", GLUT_KEY_UP},
	{"GLUT_KEY_RIGHT", GLUT_KEY_RIGHT},
	{"GLUT_KEY_DOWN", GLUT_KEY_DOWN},
	{"GLUT_KEY_PAGE_UP", GLUT_KEY_PAGE_UP},
	{"GLUT_KEY_PAGE_DOWN", GLUT_KEY_PAGE_DOWN},
	{"GLUT_KEY_HOME", GLUT_KEY_HOME},
	{"GLUT_KEY_END", GLUT_KEY_END},
	{"GLUT_KEY_INSERT", GLUT_KEY_INSERT},

/* custom additions by Steve Dekorte del = 8, delete = 127 */
	#if defined(__APPLE__) || defined(MACOSX)
	{"GLUT_KEY_DEL", 8},
	{"GLUT_KEY_DELETE", 127},
	#else
	{"GLUT_KEY_DEL", 127},
	{"GLUT_KEY_DELETE", 8},
	#endif

#ifdef GLUT_KEY_PAD_0
	{"GLUT_KEY_PAD_0", GLUT_KEY_PAD_0},
	{"GLUT_KEY_PAD_1", GLUT_KEY_PAD_1},
	{"GLUT_KEY_PAD_2", GLUT_KEY_PAD_2},
	{"GLUT_KEY_PAD_3", GLUT_KEY_PAD_3},
	{"GLUT_KEY_PAD_4", GLUT_KEY_PAD_4},
	{"GLUT_KEY_PAD_5", GLUT_KEY_PAD_5},
	{"GLUT_KEY_PAD_6", GLUT_KEY_PAD_6},
	{"GLUT_KEY_PAD_7", GLUT_KEY_PAD_7},
	{"GLUT_KEY_PAD_8", GLUT_KEY_PAD_8},
	{"GLUT_KEY_PAD_9", GLUT_KEY_PAD_9},
	{"GLUT_KEY_PAD_0", GLUT_KEY_PAD_0},

	{"GLUT_KEY_PAD_DIVIDE", GLUT_KEY_PAD_DIVIDE},
	{"GLUT_KEY_PAD_MULTIPLY", GLUT_KEY_PAD_MULTIPLY},
	{"GLUT_KEY_PAD_SUBTRACT", GLUT_KEY_PAD_SUBTRACT},
	{"GLUT_KEY_PAD_ADD", GLUT_KEY_PAD_ADD},
	{"GLUT_KEY_PAD_RETURN", GLUT_KEY_PAD_RETURN},
	{"GLUT_KEY_PAD_DECIMAL", GLUT_KEY_PAD_DECIMAL},

	{"GLUT_KEY_CONTROL", GLUT_KEY_CONTROL},
	{"GLUT_KEY_ALT", GLUT_KEY_ALT},
	{"GLUT_KEY_SHIFT", GLUT_KEY_SHIFT},
	{"GLUT_KEY_CAPITAL", GLUT_KEY_CAPITAL},
#endif

#endif

/* Entry/exit  state. */
	{"GLUT_LEFT",GLUT_LEFT},
	{"GLUT_ENTERED",GLUT_ENTERED},

/* Menu usage  state. */
	{"GLUT_MENU_NOT_IN_USE",GLUT_MENU_NOT_IN_USE},
	{"GLUT_MENU_IN_USE",GLUT_MENU_IN_USE},

/* Visibility  state. */
	{"GLUT_NOT_VISIBLE",GLUT_NOT_VISIBLE},
	{"GLUT_VISIBLE",GLUT_VISIBLE},

/* Window status  state. */
	{"GLUT_HIDDEN",GLUT_HIDDEN},
	{"GLUT_FULLY_RETAINED",GLUT_FULLY_RETAINED},
	{"GLUT_PARTIALLY_RETAINED",GLUT_PARTIALLY_RETAINED},
	{"GLUT_FULLY_COVERED",GLUT_FULLY_COVERED},

/* Color index component selection values. */
	{"GLUT_RED",GLUT_RED},
	{"GLUT_GREEN",GLUT_GREEN},
	{"GLUT_BLUE",GLUT_BLUE},

/* Layers for use. */
	{"GLUT_NORMAL",GLUT_NORMAL},
	{"GLUT_OVERLAY",GLUT_OVERLAY},

#if defined(_WIN32)
/* Stroke font constants (use these in GLUT program). */
	{"GLUT_STROKE_ROMAN",GLUT_STROKE_ROMAN},
	{"GLUT_STROKE_MONO_ROMAN",GLUT_STROKE_MONO_ROMAN},

/* Bitmap font constants (use these in GLUT program). */
	{"GLUT_BITMAP_9_BY_15",GLUT_BITMAP_9_BY_15},
	{"GLUT_BITMAP_8_BY_13",GLUT_BITMAP_8_BY_13},
	{"GLUT_BITMAP_TIMES_ROMAN_10",GLUT_BITMAP_TIMES_ROMAN_10},
	{"GLUT_BITMAP_TIMES_ROMAN_24",GLUT_BITMAP_TIMES_ROMAN_24},
#if (GLUT_API_VERSION >= 3)
	{"GLUT_BITMAP_HELVETICA_10",GLUT_BITMAP_HELVETICA_10},
	{"GLUT_BITMAP_HELVETICA_12",GLUT_BITMAP_HELVETICA_12},
	{"GLUT_BITMAP_HELVETICA_18",GLUT_BITMAP_HELVETICA_18},
#endif

#else

	#ifdef GLUT_STROKE_ROMAN
	{"GLUT_STROKE_ROMAN",(long)GLUT_STROKE_ROMAN},
	{"GLUT_STROKE_MONO_ROMAN",(long)GLUT_STROKE_MONO_ROMAN},

	{"GLUT_BITMAP_9_BY_15",(long)GLUT_BITMAP_9_BY_15},
	{"GLUT_BITMAP_8_BY_13",(long)GLUT_BITMAP_8_BY_13},
	{"GLUT_BITMAP_TIMES_ROMAN_10",(long)GLUT_BITMAP_TIMES_ROMAN_10},
	{"GLUT_BITMAP_TIMES_ROMAN_24",(long)GLUT_BITMAP_TIMES_ROMAN_24},

	#if (GLUT_API_VERSION >= 3)
	{"GLUT_BITMAP_HELVETICA_10",(long)GLUT_BITMAP_HELVETICA_10},
	{"GLUT_BITMAP_HELVETICA_12",(long)GLUT_BITMAP_HELVETICA_12},
	{"GLUT_BITMAP_HELVETICA_18",(long)GLUT_BITMAP_HELVETICA_18},
	#endif
	#endif
#endif

/* glutGet parameters. */
	{"GLUT_WINDOW_X",GLUT_WINDOW_X},
	{"GLUT_WINDOW_Y",GLUT_WINDOW_Y},
	{"GLUT_WINDOW_WIDTH",GLUT_WINDOW_WIDTH},
	{"GLUT_WINDOW_HEIGHT",GLUT_WINDOW_HEIGHT},
	{"GLUT_WINDOW_BUFFER_SIZE",GLUT_WINDOW_BUFFER_SIZE},
	{"GLUT_WINDOW_STENCIL_SIZE",GLUT_WINDOW_STENCIL_SIZE},
	{"GLUT_WINDOW_DEPTH_SIZE",GLUT_WINDOW_DEPTH_SIZE},
	{"GLUT_WINDOW_RED_SIZE",GLUT_WINDOW_RED_SIZE},
	{"GLUT_WINDOW_GREEN_SIZE",GLUT_WINDOW_GREEN_SIZE},
	{"GLUT_WINDOW_BLUE_SIZE",GLUT_WINDOW_BLUE_SIZE},
	{"GLUT_WINDOW_ALPHA_SIZE",GLUT_WINDOW_ALPHA_SIZE},
	{"GLUT_WINDOW_ACCUM_RED_SIZE",GLUT_WINDOW_ACCUM_RED_SIZE},
	{"GLUT_WINDOW_ACCUM_GREEN_SIZE",GLUT_WINDOW_ACCUM_GREEN_SIZE},
	{"GLUT_WINDOW_ACCUM_BLUE_SIZE",GLUT_WINDOW_ACCUM_BLUE_SIZE},
	{"GLUT_WINDOW_ACCUM_ALPHA_SIZE",GLUT_WINDOW_ACCUM_ALPHA_SIZE},
	{"GLUT_WINDOW_DOUBLEBUFFER",GLUT_WINDOW_DOUBLEBUFFER},
	{"GLUT_WINDOW_RGBA",GLUT_WINDOW_RGBA},
	{"GLUT_WINDOW_PARENT",GLUT_WINDOW_PARENT},
	{"GLUT_WINDOW_NUM_CHILDREN",GLUT_WINDOW_NUM_CHILDREN},
	{"GLUT_WINDOW_COLORMAP_SIZE",GLUT_WINDOW_COLORMAP_SIZE},
#if (GLUT_API_VERSION >= 2)
	{"GLUT_WINDOW_NUM_SAMPLES",GLUT_WINDOW_NUM_SAMPLES},
	{"GLUT_WINDOW_STEREO",GLUT_WINDOW_STEREO},
#endif
#if (GLUT_API_VERSION >= 3)
	{"GLUT_WINDOW_CURSOR",GLUT_WINDOW_CURSOR},
#endif
	{"GLUT_SCREEN_WIDTH",GLUT_SCREEN_WIDTH},
	{"GLUT_SCREEN_HEIGHT",GLUT_SCREEN_HEIGHT},
	{"GLUT_SCREEN_WIDTH_MM",GLUT_SCREEN_WIDTH_MM},
	{"GLUT_SCREEN_HEIGHT_MM",GLUT_SCREEN_HEIGHT_MM},
	{"GLUT_MENU_NUM_ITEMS",GLUT_MENU_NUM_ITEMS},
	{"GLUT_DISPLAY_MODE_POSSIBLE",GLUT_DISPLAY_MODE_POSSIBLE},
	{"GLUT_INIT_WINDOW_X",GLUT_INIT_WINDOW_X},
	{"GLUT_INIT_WINDOW_Y",GLUT_INIT_WINDOW_Y},
	{"GLUT_INIT_WINDOW_WIDTH",GLUT_INIT_WINDOW_WIDTH},
	{"GLUT_INIT_WINDOW_HEIGHT",GLUT_INIT_WINDOW_HEIGHT},
	{"GLUT_INIT_DISPLAY_MODE",GLUT_INIT_DISPLAY_MODE},
#if (GLUT_API_VERSION >= 2)
	{"GLUT_ELAPSED_TIME",GLUT_ELAPSED_TIME},
#endif
#if (GLUT_API_VERSION >= 4 || GLUT_XLIB_IMPLEMENTATION >= 13)
	{"GLUT_WINDOW_FORMAT_ID",GLUT_WINDOW_FORMAT_ID},
#endif

#if (GLUT_API_VERSION >= 2)
/* glutDeviceGet parameters. */
	{"GLUT_HAS_KEYBOARD",GLUT_HAS_KEYBOARD},
	{"GLUT_HAS_MOUSE",GLUT_HAS_MOUSE},
	{"GLUT_HAS_SPACEBALL",GLUT_HAS_SPACEBALL},
	{"GLUT_HAS_DIAL_AND_BUTTON_BOX",GLUT_HAS_DIAL_AND_BUTTON_BOX},
	{"GLUT_HAS_TABLET",GLUT_HAS_TABLET},
	{"GLUT_NUM_MOUSE_BUTTONS",GLUT_NUM_MOUSE_BUTTONS},
	{"GLUT_NUM_SPACEBALL_BUTTONS",GLUT_NUM_SPACEBALL_BUTTONS},
	{"GLUT_NUM_BUTTON_BOX_BUTTONS",GLUT_NUM_BUTTON_BOX_BUTTONS},
	{"GLUT_NUM_DIALS",GLUT_NUM_DIALS},
	{"GLUT_NUM_TABLET_BUTTONS",GLUT_NUM_TABLET_BUTTONS},
#endif
#if (GLUT_API_VERSION >= 4 || GLUT_XLIB_IMPLEMENTATION >= 13)
	{"GLUT_DEVICE_IGNORE_KEY_REPEAT",GLUT_DEVICE_IGNORE_KEY_REPEAT},
	{"GLUT_DEVICE_KEY_REPEAT",GLUT_DEVICE_KEY_REPEAT},
	{"GLUT_HAS_JOYSTICK",GLUT_HAS_JOYSTICK},
	{"GLUT_OWNS_JOYSTICK",GLUT_OWNS_JOYSTICK},
	{"GLUT_JOYSTICK_BUTTONS",GLUT_JOYSTICK_BUTTONS},
	{"GLUT_JOYSTICK_AXES",GLUT_JOYSTICK_AXES},
	{"GLUT_JOYSTICK_POLL_RATE",GLUT_JOYSTICK_POLL_RATE},
#endif

#if (GLUT_API_VERSION >= 3)
/* glutLayerGet parameters. */
	{"GLUT_OVERLAY_POSSIBLE",GLUT_OVERLAY_POSSIBLE},
	{"GLUT_LAYER_IN_USE",GLUT_LAYER_IN_USE},
	{"GLUT_HAS_OVERLAY",GLUT_HAS_OVERLAY},
	{"GLUT_TRANSPARENT_INDEX",GLUT_TRANSPARENT_INDEX},
	{"GLUT_NORMAL_DAMAGED",GLUT_NORMAL_DAMAGED},
	{"GLUT_OVERLAY_DAMAGED",GLUT_OVERLAY_DAMAGED},

#if (GLUT_API_VERSION >= 4 || GLUT_XLIB_IMPLEMENTATION >= 9)
/* glutVideoResizeGet parameters. */
	{"GLUT_VIDEO_RESIZE_POSSIBLE",GLUT_VIDEO_RESIZE_POSSIBLE},
	{"GLUT_VIDEO_RESIZE_IN_USE",GLUT_VIDEO_RESIZE_IN_USE},
	{"GLUT_VIDEO_RESIZE_X_DELTA",GLUT_VIDEO_RESIZE_X_DELTA},
	{"GLUT_VIDEO_RESIZE_Y_DELTA",GLUT_VIDEO_RESIZE_Y_DELTA},
	{"GLUT_VIDEO_RESIZE_WIDTH_DELTA",GLUT_VIDEO_RESIZE_WIDTH_DELTA},
	{"GLUT_VIDEO_RESIZE_HEIGHT_DELTA",GLUT_VIDEO_RESIZE_HEIGHT_DELTA},
	{"GLUT_VIDEO_RESIZE_X",GLUT_VIDEO_RESIZE_X},
	{"GLUT_VIDEO_RESIZE_Y",GLUT_VIDEO_RESIZE_Y},
	{"GLUT_VIDEO_RESIZE_WIDTH",GLUT_VIDEO_RESIZE_WIDTH},
	{"GLUT_VIDEO_RESIZE_HEIGHT",GLUT_VIDEO_RESIZE_HEIGHT},
#endif

/* glutUseLayer parameters. */
	{"GLUT_NORMAL",GLUT_NORMAL},
	{"GLUT_OVERLAY",GLUT_OVERLAY},

/* glutGetModifiers return mask. */
	{"GLUT_ACTIVE_SHIFT",GLUT_ACTIVE_SHIFT},
	{"GLUT_ACTIVE_CTRL",GLUT_ACTIVE_CTRL},
	{"GLUT_ACTIVE_ALT",GLUT_ACTIVE_ALT},

/* glutSetCursor parameters. */
/* Basic arrows. */
	{"GLUT_CURSOR_RIGHT_ARROW",GLUT_CURSOR_RIGHT_ARROW},
	{"GLUT_CURSOR_LEFT_ARROW",GLUT_CURSOR_LEFT_ARROW},
/* Symbolic cursor shapes. */
	{"GLUT_CURSOR_INFO",GLUT_CURSOR_INFO},
	{"GLUT_CURSOR_DESTROY",GLUT_CURSOR_DESTROY},
	{"GLUT_CURSOR_HELP",GLUT_CURSOR_HELP},
	{"GLUT_CURSOR_CYCLE",GLUT_CURSOR_CYCLE},
	{"GLUT_CURSOR_SPRAY",GLUT_CURSOR_SPRAY},
	{"GLUT_CURSOR_WAIT",GLUT_CURSOR_WAIT},
	{"GLUT_CURSOR_TEXT",GLUT_CURSOR_TEXT},
	{"GLUT_CURSOR_CROSSHAIR",GLUT_CURSOR_CROSSHAIR},
/* Directional cursors. */
	{"GLUT_CURSOR_UP_DOWN",GLUT_CURSOR_UP_DOWN},
	{"GLUT_CURSOR_LEFT_RIGHT",GLUT_CURSOR_LEFT_RIGHT},
/* Sizing cursors. */
	{"GLUT_CURSOR_TOP_SIDE",GLUT_CURSOR_TOP_SIDE},
	{"GLUT_CURSOR_BOTTOM_SIDE",GLUT_CURSOR_BOTTOM_SIDE},
	{"GLUT_CURSOR_LEFT_SIDE",GLUT_CURSOR_LEFT_SIDE},
	{"GLUT_CURSOR_RIGHT_SIDE",GLUT_CURSOR_RIGHT_SIDE},
	{"GLUT_CURSOR_TOP_LEFT_CORNER",GLUT_CURSOR_TOP_LEFT_CORNER},
	{"GLUT_CURSOR_TOP_RIGHT_CORNER",GLUT_CURSOR_TOP_RIGHT_CORNER},
	{"GLUT_CURSOR_BOTTOM_RIGHT_CORNER",GLUT_CURSOR_BOTTOM_RIGHT_CORNER},
	{"GLUT_CURSOR_BOTTOM_LEFT_CORNER",GLUT_CURSOR_BOTTOM_LEFT_CORNER},
/* Inherit from parent window. */
	{"GLUT_CURSOR_INHERIT",GLUT_CURSOR_INHERIT},
/* Blank cursor. */
	{"GLUT_CURSOR_NONE",GLUT_CURSOR_NONE},
/* Fullscreen crosshair (if available). */
	{"GLUT_CURSOR_FULL_CROSSHAIR",GLUT_CURSOR_FULL_CROSSHAIR},
#endif
#if (GLUT_API_VERSION >= 4 || GLUT_XLIB_IMPLEMENTATION >= 13)
/* GLUT device control sub-API. */
/* glutSetKeyRepeat modes. */
	{"GLUT_KEY_REPEAT_OFF",GLUT_KEY_REPEAT_OFF},
	{"GLUT_KEY_REPEAT_ON",GLUT_KEY_REPEAT_ON},
	{"GLUT_KEY_REPEAT_DEFAULT",GLUT_KEY_REPEAT_DEFAULT},

/* Joystick button masks. */
	{"GLUT_JOYSTICK_BUTTON_A",GLUT_JOYSTICK_BUTTON_A},
	{"GLUT_JOYSTICK_BUTTON_B",GLUT_JOYSTICK_BUTTON_B},
	{"GLUT_JOYSTICK_BUTTON_C",GLUT_JOYSTICK_BUTTON_C},
	{"GLUT_JOYSTICK_BUTTON_D",GLUT_JOYSTICK_BUTTON_D},

/* GLUT game mode sub-API. */
/* glutGameModeGet. */
	{"GLUT_GAME_MODE_ACTIVE",GLUT_GAME_MODE_ACTIVE},
	{"GLUT_GAME_MODE_POSSIBLE",GLUT_GAME_MODE_POSSIBLE},
	{"GLUT_GAME_MODE_WIDTH",GLUT_GAME_MODE_WIDTH},
	{"GLUT_GAME_MODE_HEIGHT",GLUT_GAME_MODE_HEIGHT},
	{"GLUT_GAME_MODE_PIXEL_DEPTH",GLUT_GAME_MODE_PIXEL_DEPTH},
	{"GLUT_GAME_MODE_REFRESH_RATE",GLUT_GAME_MODE_REFRESH_RATE},
	{"GLUT_GAME_MODE_DISPLAY_CHANGED",GLUT_GAME_MODE_DISPLAY_CHANGED},
#endif

	/* The end */
	{NULL,0},
};

