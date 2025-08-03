#ifndef UTIL_TYPES_H
#define UTIL_TYPES_H

#include <array>
#include <vector>
#include <string>

enum FE_WindowMode
{
    WINDOW_FULLSCREEN = 0,
    WINDOW_WINDOWED   = 1,
    WINDOW_BORDERLESS = 2,
};

enum FE_MouseMode
{
    MOUSE_MENU = 0,
    MOUSE_GAME = 1,
};

enum FE_ImageFilter
{
    IMAGE_FILTER_NEAREST = 0,
    IMAGE_FILTER_LINEAR  = 1,
};

enum FE_ImageAddress
{
    IMAGE_ADDRESS_REPEAT          = 0,
    IMAGE_ADDRESS_MIRROR          = 1,
    IMAGE_ADDRESS_CLAMP_TO_EDGE   = 2,
    IMAGE_ADDRESS_CLAMP_TO_BORDER = 3,
};

enum FE_Keys
{
    FE_KEY_UNKNOWN = 0,

    //Alphabetical Keys
    FE_KEY_A = 1,
    FE_KEY_B = 2,
    FE_KEY_C = 3,
    FE_KEY_D = 4,
    FE_KEY_E = 5,
    FE_KEY_F = 6,
    FE_KEY_G = 7,
    FE_KEY_H = 8,
    FE_KEY_I = 9,
    FE_KEY_J = 10,
    FE_KEY_K = 11,
    FE_KEY_L = 12,
    FE_KEY_M = 13,
    FE_KEY_N = 14,
    FE_KEY_O = 15,
    FE_KEY_P = 16,
    FE_KEY_Q = 17,
    FE_KEY_R = 18,
    FE_KEY_S = 19,
    FE_KEY_T = 20,
    FE_KEY_U = 21,
    FE_KEY_V = 22,
    FE_KEY_W = 23,
    FE_KEY_X = 24,
    FE_KEY_Y = 25,
    FE_KEY_Z = 26,

    //Numerical Keys
    FE_KEY_0 = 27,
    FE_KEY_1 = 28,
    FE_KEY_2 = 29,
    FE_KEY_3 = 30,
    FE_KEY_4 = 31,
    FE_KEY_5 = 32,
    FE_KEY_6 = 33,
    FE_KEY_7 = 34,
    FE_KEY_8 = 35,
    FE_KEY_9 = 36,

    //Auxiliary Keys
    FE_KEY_ESCAPE    = 37,
    FE_KEY_BACKSPACE = 38,
    FE_KEY_TAB       = 39,
    FE_KEY_RETURN    = 40,
    FE_KEY_CAPSLOCK  = 41,
    FE_KEY_LSHIFT    = 42,
    FE_KEY_RSHIFT    = 43,
    FE_KEY_LCTRL     = 44,
    FE_KEY_LWIN      = 45,
    FE_KEY_ALT       = 46,
    FE_KEY_SPACE     = 47,
    FE_KEY_ALTGR     = 48,
    FE_KEY_RWIN      = 49,
    FE_KEY_MENU      = 50,
    FE_KEY_RCTRL     = 51,

    //Symbol Keys
    FE_KEY_GRAVE        = 52,
    FE_KEY_MINUS        = 53,
    FE_KEY_EQUALS       = 54,
    FE_KEY_LBRACKET     = 55,
    FE_KEY_RBRACKET     = 56,
    FE_KEY_SEMICOLON    = 57,
    FE_KEY_APOSTROPHE   = 58,
    FE_KEY_POUND        = 59,
    FE_KEY_BACKSLASH    = 60,
    FE_KEY_COMMA        = 61,
    FE_KEY_PERIOD       = 62,
    FE_KEY_FORWARDSLASH = 63,

    //Function Keys
    FE_KEY_F1  = 64,
    FE_KEY_F2  = 65,
    FE_KEY_F3  = 66,
    FE_KEY_F4  = 67,
    FE_KEY_F5  = 68,
    FE_KEY_F6  = 69,
    FE_KEY_F7  = 70,
    FE_KEY_F8  = 71,
    FE_KEY_F9  = 72,
    FE_KEY_F10 = 73,
    FE_KEY_F11 = 74,
    FE_KEY_F12 = 75,

    //"Middle Section" Keys
    FE_KEY_PRINTSCREEN = 76,
    FE_KEY_SCROLLLOCK  = 77,
    FE_KEY_PAUSEBREAK  = 78,
    FE_KEY_INSERT      = 79,
    FE_KEY_HOME        = 80,
    FE_KEY_PAGEUP      = 81,
    FE_KEY_DELETE      = 82,
    FE_KEY_END         = 83,
    FE_KEY_PAGEDOWN    = 84,
    FE_KEY_LEFT        = 85,
    FE_KEY_RIGHT       = 86,
    FE_KEY_UP          = 87,
    FE_KEY_DOWN        = 88,

    //Numpad Keys
    FE_KEY_NUMLOCK     = 89,
    FE_KEY_NP_DIVIDE   = 90,
    FE_KEY_NP_MULTIPLY = 91,
    FE_KEY_NP_MINUS    = 92,
    FE_KEY_NP_PLUS     = 93,
    FE_KEY_NP_RETURN   = 94,
    FE_KEY_NP_PERIOD   = 95,
    FE_KEY_NP_0        = 96,
    FE_KEY_NP_1        = 97,
    FE_KEY_NP_2        = 98,
    FE_KEY_NP_3        = 99,
    FE_KEY_NP_4        = 100,
    FE_KEY_NP_5        = 101,
    FE_KEY_NP_6        = 102,
    FE_KEY_NP_7        = 103,
    FE_KEY_NP_8        = 104,
    FE_KEY_NP_9        = 105,

    FE_KEY_MAX = 106
};

#endif //UTIL_TYPES_H
