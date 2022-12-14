/* See LICENSE file for copyright and license details. */

/* alt-tab configuration */
static const unsigned int tabModKey 		= 0x40;	/* if this key is hold the alt-tab functionality stays acitve. This key must be the same as key that is used to active functin altTabStart `*/
static const unsigned int tabCycleKey 	= 0x17;	/* if this key is hit the alt-tab program moves one position forward in clients stack. This key must be the same as key that is used to active functin altTabStart */
static const unsigned int tabPosY 			= 1;	/* tab position on Y axis, 0 = bottom, 1 = center, 2 = top */
static const unsigned int tabPosX 			= 1;	/* tab position on X axis, 0 = left, 1 = center, 2 = right */
static const unsigned int maxWTab 			= 400;	/* tab menu width */
static const unsigned int maxHTab 			= 100;	/* tab menu height */


/* appearance */
static const unsigned int borderpx  = 2;        /* border pixel of windows */
static const unsigned int gappx     = 25;        /* gaps between windows */
static const unsigned int snap      = 15;       /* snap pixel */
static const int scalepreview       = 5;        /* tag preview scaling */

static const unsigned int systraypinning = 0;   /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayonleft = 0;   	/* 0: systray in the right corner, >0: systray on left of status text */
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int systraypinningfailfirst = 1;   /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static const int showsystray        = 1;     /* 0 means no systray */

static const int showbar            = 1;        /* 0 means no standard bar */
static const int topbar             = 1;        /* 0 means standard bar at bottom */
static const int extrabar           = 1;        /* 0 means no extra bar */
static const char statussep         = ';';      /* separator between statuses */

static const int startontag         = 1;        /* 0 means no tag active on start */

#define ICONSIZE 17   /* icon size */
#define ICONSPACING 7 /* space between icon and title */

// FiraCode - Original
//static const char *fonts[]          = { "FiraCode Nerd Font:size=14" };
//static const char dmenufont[]       = "FiraCode Nerd Font:size=14";

// GohuFont - Terminalish Look
//static const char *fonts[]          = { "GohuFont Nerd Font:size=14" };
//static const char dmenufont[]       = "GohuFont Nerd Font:size=14";

// Iosevka - Balanced & Modern Terminalish Look
static const char *fonts[]          = { "Iosevka Nerd Font:size=14" };
static const char dmenufont[]       = "Iosevka Nerd Font:size=14";

// ## Solarized Irradiated ##
//static const char col_shade1[]  = "#8ab7e8";
//static const char col_shade2[]  = "#002025";
//static const char col_shade3[]  = "#003034";
//static const char col_shade4[]  = "#004046";
//static const char col_shade5[]  = "#59f78d";


// ## GX Blue Irradiated ##
//static const char col_shade1[]  = "#a0a0ff";
//static const char col_shade2[]  = "#000012";
//static const char col_shade3[]  = "#000034";
//static const char col_shade4[]  = "#000077";
//static const char col_shade5[]  = "#59f78d";


// Catppuccin Mocha
//static const char col_shade1[]  = "#89b4fa";
static const char col_shade1[]  = "#a0a0ff";
static const char col_shade2[]  = "#11111b";
static const char col_shade3[]  = "#181825";
static const char col_shade4[]  = "#1e1e2e";
static const char col_shade5[]  = "#a6e3a1";


static const char col_urgborder[]   = "#cd0000";
static const char *colors[][3]      = {
	/*                 fg              bg           border   */
	[SchemeNorm]   = { col_shade1,     col_shade2,  col_shade2 },
	[SchemeSel]    = { col_shade1,     col_shade3,  col_shade1  },
	[SchemeUrg]    = { col_urgborder,  col_shade2,  col_urgborder  },
  [SchemeTitle]  = { col_shade1,     col_shade2,  col_shade1  },
};

/* tagging */
//static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
//static const char *tags[] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
//static const char *tags[] = { "????? ??? ", "????? ??? ", "????? ??? ", "????? ??? ", "????? ??? ", "?????? ??? ", "????? ??? ", "????? ??? ", "????? ??? "};
//static const char *tags[] = { "????? : Info", "????? : Net", "????? : Run???", "????? : Run???", "????? : Code???", "?????? : Code???", "????? : X???", "????? : X???", "????? : X???"};
//static const char *tags[] = { "??", "??", "??", "??", "??", "??", "??", "??", "??"}; // Because iota can cope.
static const char *tags[] = { "??", "??", "??", "??", "??", "??", "??", "??", "??"}; // Inshallah. Use `??` for first tag if you prefer.

// ## GX Blue Irradiated ##
/*
static const char *tagsel[][2] = {
	{ "#faa61a", "#000012" },
	{ "#59f78d", "#000012" },
	{ "#ff5b55", "#000012" },
	{ "#faa61a", "#000012" },
	{ "#59f78d", "#000012" },
	{ "#ff5b55", "#000012" },
	{ "#faa61a", "#000012" },
	{ "#59f78d", "#000012" },
	{ "#ff5b55", "#000012" },
};
*/

// ## Catppuccin Mocha ##
static const char *tagsel[][2] = {
	{ "#fab387", "#11111b" },
	{ "#a6e3a1", "#11111b" },
	{ "#f38ba8", "#11111b" },
	{ "#f9e2af", "#11111b" },
	{ "#fab387", "#11111b" },
	{ "#a6e3a1", "#11111b" },
	{ "#f38ba8", "#11111b" },
	{ "#f9e2af", "#11111b" },
	{ "#fab387", "#11111b" },
};

static const unsigned int ulinepad	= 5;	/* horizontal padding between the underline and tag */
static const unsigned int ulinestroke	= 2;	/* thickness / height of the underline */
static const unsigned int ulinevoffset	= 0;	/* how far above the bottom of the bar the line should appear */
static const int ulineall 		= 0;	/* 1 to show underline on all tags, 0 for just the active ones */

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class              instance    title                   tags mask     iscentered     isfloating     monitor */
	{ "Gimp",             NULL,       NULL,                   0,            1,             1,             -1 },
	{ "Firefox",          NULL,       NULL,                   0,            1,             0,             -1 },
	{ "librewolf",        NULL,       NULL,                   0,            1,             0,             -1 },
	{ "librewolf",        "Devtools", NULL,                   0,            1,             1,             -1 },
	{ "librewolf",        "Browser",  NULL,                   0,            1,             1,             -1 },
	{ "librewolf",        "Toolkit",  NULL,                   0,            1,             1,             -1 },
	{ "Chromium",         NULL,       NULL,                   0,            1,             0,             -1 },
	{ "Discord",          NULL,       NULL,                   0,            1,             0,             -1 },
	{ "zoom",             NULL,       NULL,                   0,            1,             1,             -1 },
//	{ "zoom",             NULL,       "Zoom Meeting",         0,            1,             0,             -1 },
//	{ "zoom",             NULL,       "Zoom - Free Account",  0,            1,             0,             -1 }, // Doesn't work, figuring out.
	{ "qTox",             NULL,       NULL,                   0,            1,             1,             -1 },
	{ "feh",              NULL,       NULL,                   0,            1,             1,             -1 },
	{ "xdman-Main",       NULL,       NULL,                   0,            0,             1,             -1 },
	{ "mpv",              NULL,       NULL,                   0,            1,             1,             -1 },
	{ "davinci-resolve",  NULL,       NULL,                   0,            1,             1,             -1 },
	{ "Galculator",       NULL,       NULL,                   0,            1,             1,             -1 },
	{ "thunar",           NULL,       NULL,                   0,            1,             0,             -1 },
	{ "Zathura",          NULL,       NULL,                   0,            1,             1,             -1 },
	{ "Emacs",            NULL,       NULL,                   0,            1,             0,             -1 },
	{ "st",               NULL,       NULL,                   0,            1,             0,             -1 },
	{ "scratchpad",       NULL,       NULL,                   0,            1,             1,             -1 },
	{ "eva",              NULL,       NULL,                   0,            1,             1,             -1 },
	{ "btop",             NULL,       NULL,                   0,            1,             1,             -1 },
	{ "btm",              NULL,       NULL,                   0,            1,             1,             -1 },
	{ "ncmpcpp",          NULL,       NULL,                   0,            1,             1,             -1 },
	{ "Pavucontrol",      NULL,       NULL,                   0,            1,             1,             -1 },
	{ "qalculate-qt",     NULL,       NULL,                   0,            1,             1,             -1 },
	{ "Lxappearance",     NULL,       NULL,                   0,            1,             1,             -1 },
	{ "qt5ct",            NULL,       NULL,                   0,            1,             1,             -1 },
	{ "Kvantum Manager",  NULL,       NULL,                   0,            1,             1,             -1 },
	{ "Plank",            NULL,       NULL,                   0,            0,             1,             -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */
static const int attachdirection = 0;    /* 0 default, 1 above, 2 aside, 3 below, 4 bottom, 5 top */

/* mouse scroll resize */
static const int scrollsensetivity = 30; /* 1 means resize window by 1 pixel for each scroll event */

#include "layouts.c"
#include "fibonacci.c"
static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[T]",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
	{ "[@]",      spiral },
 	{ "[D]",      dwindle },
	{ "|M|",      centeredmaster },
	{ ">M>",      centeredfloatingmaster },
	{ "[G]",      grid },
  { NULL,       NULL },
};

/* key definitions */
#define MODKEY Mod4Mask
#define LAUNCHKEY Mod4Mask|Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static const char *dmenucmd[] = { "dmenu_run", "-fn", dmenufont, "-nb", col_shade2, "-nf", col_shade1, "-sb", col_shade2, "-sf", col_shade5, NULL };
static const char *termcmd[]  = { "st", NULL };
static const char *layoutmenu_cmd = "/home/redreovich/.rtrxdwm/layoutmenu.sh";


static const char *upvol[] = {"pamixer", "-ui", "5", NULL};

static const char *downvol[] = {"pamixer", "-ud", "5", NULL};

static const char *mutevol[] = {"pamixer", "-t", NULL};

static const char *playpause[] = {"playerctl", "play-pause", NULL};

static const char *playnext[] = {"playerctl", "next", NULL};

static const char *playprev[] = {"playerctl", "previous", NULL};

static const char *brightup[] = {"xbacklight", "-inc", "25%", NULL};

static const char *brightdown[] = {"xbacklight", "-dec", "25%", NULL};

static const char *lockscreen[] = {"betterlockscreen", "-l", "dimblur", NULL};

//static const char *fullscreenshot_scrot[] ={"scrot", "/home/redreovich/Pictures/Screenshots/Screenshot-$(date +%F_%T).png", NULL};

#include <X11/XF86keysym.h>
#include "mpdcontrol.c"
#include "movestack.c"
#include "focusurgent.c"
static const Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY|ShiftMask,             XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_p,      spawn,          SHCMD("rofi -show drun") },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
	{ LAUNCHKEY,                    XK_Return, spawn,          SHCMD("st -g 175x25 -c scratchpad") },
	{ LAUNCHKEY,                    XK_1,      spawn,          SHCMD("alacritty --class=scratchpad") },
  { LAUNCHKEY,                    XK_2,      spawn,          SHCMD("nemo") },
	{ LAUNCHKEY,                    XK_3,      spawn,          SHCMD("/home/redreovich/Application-Packages/LibreWolf/librewolf") },
	{ LAUNCHKEY,                    XK_4,      spawn,          SHCMD("zathura") },
	{ LAUNCHKEY,                    XK_5,      spawn,          SHCMD("st -g 175x25 -c eva -e eva -f 64") },
	{ LAUNCHKEY,                    XK_6,      spawn,          SHCMD("st -g 125x35 -c btop -e btop") },
	{ LAUNCHKEY,                    XK_7,      spawn,          SHCMD("st -g 125x35 -c btm -e btm") },
	{ LAUNCHKEY,                    XK_8,      spawn,          SHCMD("st -g 125x35 -c ncmpcpp -e ncmpcpp --host=$HOME/.config/mpd/socket") },
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_b,      toggleextrabar, {0} },
  { MODKEY|ShiftMask,             XK_b,      toggleborder,   {0} },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY|ShiftMask,             XK_h,      setcfact,       {.f = +0.25} },
	{ MODKEY|ShiftMask,             XK_l,      setcfact,       {.f = -0.25} },
	{ MODKEY|ShiftMask,             XK_o,      setcfact,       {.f =  0.00} },
	{ MODKEY|ShiftMask,             XK_j,      movestack,      {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,      movestack,      {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_Return, zoom,           {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY,                       XK_q,      killclient,     {0} },
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY,                       XK_r,      setlayout,      {.v = &layouts[3]} },
	{ MODKEY|ShiftMask,             XK_r,      setlayout,      {.v = &layouts[4]} },
	{ MODKEY,                       XK_u,      setlayout,      {.v = &layouts[5]} },
	{ MODKEY,                       XK_o,      setlayout,      {.v = &layouts[6]} },
	{ MODKEY,                       XK_g,      setlayout,      {.v = &layouts[7]} },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ControlMask,		        XK_comma,  cyclelayout,    {.i = -1 } },
	{ MODKEY|ControlMask,           XK_period, cyclelayout,    {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY|ShiftMask,             XK_f,      togglefullscr,  {0} },
	{ MODKEY,                       XK_Down,   moveresize,     {.v = "0x 25y 0w 0h" } },
	{ MODKEY,                       XK_Up,     moveresize,     {.v = "0x -25y 0w 0h" } },
	{ MODKEY,                       XK_Right,  moveresize,     {.v = "25x 0y 0w 0h" } },
	{ MODKEY,                       XK_Left,   moveresize,     {.v = "-25x 0y 0w 0h" } },
	{ MODKEY|ShiftMask,             XK_Down,   moveresize,     {.v = "0x 0y 0w 25h" } },
	{ MODKEY|ShiftMask,             XK_Up,     moveresize,     {.v = "0x 0y 0w -25h" } },
	{ MODKEY|ShiftMask,             XK_Right,  moveresize,     {.v = "0x 0y 25w 0h" } },
	{ MODKEY|ShiftMask,             XK_Left,   moveresize,     {.v = "0x 0y -25w 0h" } },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
  { MODKEY|ControlMask,           XK_u,      focusurgent,    {0} },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
  { Mod1Mask,             		    XK_Tab,    altTabStart,	   {0} },
	{ MODKEY,                       XK_minus,  setgaps,        {.i = -1 } },
	{ MODKEY,                       XK_equal,  setgaps,        {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_equal,  setgaps,        {.i = 0  } },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY|ShiftMask,             XK_c,      quit,           {0} },
	{ MODKEY|ControlMask|ShiftMask, XK_q,      quit,           {1} },
	{ MODKEY,                       XK_F1,     mpdchange,      {.i = -1} },
	{ MODKEY,                       XK_F2,     mpdchange,      {.i = +1} },
	{ MODKEY,                       XK_Escape, mpdcontrol,     {0} },
	{0,               XF86XK_AudioLowerVolume, spawn,          {.v = downvol} },
	{0,                     XF86XK_AudioMute,  spawn,          {.v = mutevol} },
	{0,               XF86XK_AudioRaiseVolume, spawn,          {.v = upvol} },
	{0,                      XF86XK_AudioPlay, spawn,          {.v = playpause} },
	{0,                      XF86XK_AudioNext, spawn,          {.v = playnext} },
	{0,                      XF86XK_AudioPrev, spawn,          {.v = playprev} },
	{0,                XF86XK_MonBrightnessUp, spawn,          {.v = brightup} },
	{0,              XF86XK_MonBrightnessDown, spawn,          {.v = brightdown} },
	{ MODKEY,                       XK_x,      spawn,          {.v = lockscreen} },
  {ShiftMask,                 XK_Print,      spawn,          SHCMD("flameshot gui") },
	{0,                         XK_Print,      spawn,          SHCMD("bash /home/redreovich/Scripts/screenshot-scrot-xclip.sh") },
	{ MODKEY,                   XK_Print,      spawn,          SHCMD("bash /home/redreovich/Scripts/screenshot-scrot-full.sh") },
	{ MODKEY|ShiftMask,             XK_e,      spawn,          SHCMD("bash /home/redreovich/.config/rofi/powermenu.sh") },
};

/* resizemousescroll direction argument list */
static const int scrollargs[][2] = {
	/* width change         height change */
	{ +scrollsensetivity,	0 },
	{ -scrollsensetivity,	0 },
	{ 0, 				  	+scrollsensetivity },
	{ 0, 					-scrollsensetivity },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	//{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkLtSymbol,          0,              Button3,        layoutmenu,     {0} },
  { ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkExBarLeftStatus,   0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkExBarMiddle,       0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkExBarRightStatus,  0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkClientWin,         MODKEY,         Button4,        resizemousescroll, {.v = &scrollargs[0]} },
	{ ClkClientWin,         MODKEY,         Button5,        resizemousescroll, {.v = &scrollargs[1]} },
	{ ClkClientWin,         MODKEY,         Button6,        resizemousescroll, {.v = &scrollargs[2]} },
	{ ClkClientWin,         MODKEY,         Button7,        resizemousescroll, {.v = &scrollargs[3]} },
  { ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};
