#ifndef CANSICC_H
#define CANSICC_H

#define CANSIC_ESC "\033["
#define CANSIC_END "\033[0m"
#define _ANSISEQUENCE(n) CANSIC_ESC #n

#define CANSIC_RESET _ANSISEQUENCE(0) "m"
#define CANSIC_BOLD _ANSISEQUENCE(1) "m"
#define CANSIC_FAINT _ANSISEQUENCE(2) "m"
#define CANSIC_ITALIC _ANSISEQUENCE(3) "m"
#define CANSIC_UNDERLINE _ANSISEQUENCE(4) "m"
#define CANSIC_SLOWBLINK _ANSISEQUENCE(5) "m"
#define CANSIC_RAPIDBLINK _ANSISEQUENCE(6) "m"
#define CANSIC_SWAPFGBGCOLORS _ANSISEQUENCE(7) "m"
#define CANSIC_CONCEAL _ANSISEQUENCE(8) "m"
#define CANSIC_CROSSEDOUT _ANSISEQUENCE(9) "m"
#define CANSIC_FRACTUR _ANSISEQUENCE(20) "m"
#define CANSIC_BOLDOFF _ANSISEQUENCE(21) "m"
#define CANSIC_NORMALCOLOR _ANSISEQUENCE(22) "m"
#define CANSIC_NOTITALNOTFRAKTUR _ANSISEQUENCE(23) "m"
#define CANSIC_UNDERLINEOFF _ANSISEQUENCE(24) "m"
#define CANSIC_BLINKOFF _ANSISEQUENCE(25) "m"
#define CANSIC_INVERSEOFF _ANSISEQUENCE(27) "m"
#define CANSIC_REVEAL _ANSISEQUENCE(28) "m"
#define CANSIC_NOTCROSSEDOUT _ANSISEQUENCE(29) "m"
#define CANSIC_SETFGCOLOR _ANSISEQUENCE(38)
#define CANSIC_DEFAULTFGCOLOR _ANSISEQUENCE(39) "m"
#define CANSIC_SETBGCOLOR _ANSISEQUENCE(48)
#define CANSIC_DEFAULTBGCOLOR _ANSISEQUENCE(49) "m"
#define CANSIC_DIABLEPROPORTIONALSPACING _ANSISEQUENCE(50) "m"
#define CANSIC_FRAMED _ANSISEQUENCE(51) "m"
#define CANSIC_ENCIRCLED _ANSISEQUENCE(52) "m"
#define CANSIC_OVERLINED _ANSISEQUENCE(53) "m"
#define CANSIC_NOTFRAMEDNOTENCIRCLED _ANSISEQUENCE(54) "m"
#define CANSIC_NOTOVERLINED _ANSISEQUENCE(55) "m"

#define CANSIC_FG_RGB(r, g, b) CANSIC_SETFGCOLOR ";2;" #r ";" #g ";" #b "m"
#define CANSIC_BG_RGB(r, g, b) CANSIC_SETBGCOLOR ";2;" #r ";" #g ";" #b "m"

#endif