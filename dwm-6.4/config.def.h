/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 2;        /* border pixel of windows */
static const unsigned int gappx     = 17;        /* gaps between windows */
static const unsigned int snap      = 10;       /* snap pixel */

static const unsigned int systraypinning = 0;   /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayonleft = 0;   	/* 0: systray in the right corner, >0: systray on left of status text */
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int systraypinningfailfirst = 1;   /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static const int showsystray        = 1;     /* 0 means no systray */

static const int showbar            = 1;        /* 0 means no standard bar */
static const int topbar             = 1;        /* 0 means standard bar at bottom */
static const int extrabar           = 1;        /* 0 means no extra bar */
static const char statussep         = ';';      /* separator between statuses */

#define ICONSIZE 16   /* icon size */
#define ICONSPACING 5 /* space between icon and title */

static const double defaultopacity  = 1.0;

static const char *fonts[]          = { "Liberation Mono:size=14" };
static const char dmenufont[]       = "Liberation Mono:size=14";

static const char col_shade1[]         = "#8ab7e8";
//static const char col_shade2[]         = "#070033";
static const char col_shade2[]         = "#002025";
//static const char col_shade3[]         = "#170d5e";
static const char col_shade3[]         = "#003034";
static const char col_shade4[]         = "#000025";
static const char col_urgborder[]   = "#cd0000";
static const char *colors[][3]      = {
	/*               fg              bg          border   */
	[SchemeNorm] = { col_shade1,     col_shade2,  col_shade2 },
	[SchemeSel]  = { col_shade1,     col_shade3,  col_shade1  },
	[SchemeUrg]  = { col_urgborder,  col_shade2,  col_urgborder  },
};

/* tagging */
//static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
//static const char *tags[] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
static const char *tags[] = { "А₁ : Info", "В₂ : Net", "Г₃ : Run₁", "Д₄ : Run₂", "Є₅ : Code₁", "Ꙃ₆ : Code₂", "З₇ : X₁", "И₈ : X₂", "Ѳ₉ : X₃"};

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class              instance    title       tags mask     iscentered     isfloating     opacity     monitor */
	{ "Gimp",             NULL,       NULL,       0,            1,             1,             1.0,        -1 },
	{ "Firefox",          NULL,       NULL,       0,            1,             0,             1.0,        -1 },
	{ "librewolf",        NULL,       NULL,       0,            1,             0,             1.0,        -1 },
	{ "Chromium",         NULL,       NULL,       0,            1,             0,             1.0,        -1 },
	{ "zoom",             NULL,       NULL,       0,            0,             1,             1.0,        -1 },
	{ "feh",              NULL,       NULL,       0,            1,             1,             1.0,        -1 },
	{ "xdman-Main",       NULL,       NULL,       0,            0,             1,             1.0,        -1 },
	{ "mpv",              NULL,       NULL,       0,            1,             1,             1.0,        -1 },
	{ "davinci-resolve",  NULL,       NULL,       0,            1,             1,             1.0,        -1 },
	{ "galculator",       NULL,       NULL,       0,            1,             1,             1.0,        -1 },
	{ "thunar",           NULL,       NULL,       0,            1,             0,             1.0,        -1 },
	{ "Zathura",          NULL,       NULL,       0,            1,             1,             1.0,        -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */
static const int attachdirection = 0;    /* 0 default, 1 above, 2 aside, 3 below, 4 bottom, 5 top */

#include "layouts.c"
#include "fibonacci.c"
static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[T]",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
	{ "[@]",      spiral },
 	{ "[\\]",     dwindle },
	{ "|M|",      centeredmaster },
	{ ">M>",      centeredfloatingmaster },
	{ "HHH",      grid },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static const char *dmenucmd[] = { "dmenu_run", "-fn", dmenufont, "-nb", col_shade1, "-nf", col_shade3, "-sb", col_shade2, "-sf", col_shade4, NULL };
static const char *termcmd[]  = { "alacritty", NULL };

static const char *upvol[] = {"amixer", "-q", "set", "Master", "5%+", "unmute", NULL};

static const char *downvol[] = {"amixer", "-q", "set", "Master", "5%-", "unmute", NULL};

static const char *mutevol[] = {"amixer", "-q", "set", "Master", "toggle-mute", NULL};

static const char *playpause[] = {"playerctl", "play-pause", NULL};

static const char *playnext[] = {"playerctl", "next", NULL};

static const char *playprev[] = {"playerctl", "previous", NULL};

static const char *brightup[] = {"xbacklight", "-inc", "25%", NULL};

static const char *brightdown[] = {"xbacklight", "-dec", "25%", NULL};

static const char *lockscreen[] = {"betterlockscreen", "-l", "dimblur", NULL};

static const char *fullscreenshot_scrot[] ={"scrot", "/home/red/Pictures/Screenshots/Screenshot-$(date +%F_%T).png", NULL};

#include <X11/XF86keysym.h>
#include "mpdcontrol.c"
#include "movestack.c"
static const Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY|ShiftMask,             XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_p,      spawn,          SHCMD("rofi -show drun") },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY|Mod1Mask,              XK_1,      spawn,          SHCMD("st") },
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_b,      toggleextrabar, {0} },
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
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	{ MODKEY,                       XK_minus,  setgaps,        {.i = -1 } },
	{ MODKEY,                       XK_equal,  setgaps,        {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_equal,  setgaps,        {.i = 0  } },
	{ MODKEY|ShiftMask,             XK_KP_Add, changeopacity,  {.f = +0.1}},
	{ MODKEY|ShiftMask,        XK_KP_Subtract, changeopacity,  {.f = -0.1}},
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
  {0,                         XK_Print,      spawn,          SHCMD("sh /home/red/screenshot-scrot-xclip.sh") },
  { MODKEY,                   XK_Print,      spawn,          {.v = fullscreenshot_scrot} },
  //{ MODKEY,                   XK_Print,      spawn,          SHCMD("flameshot full") },
	{ MODKEY|ShiftMask,             XK_e,      spawn,          SHCMD("sh /home/red/.config/rofi/powermenu.sh") },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkExBarLeftStatus,   0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkExBarMiddle,       0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkExBarRightStatus,  0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};