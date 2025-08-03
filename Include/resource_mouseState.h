#ifndef RESOURCE_MOUSE_STATE_H
#define RESOURCE_MOUSE_STATE_H

#ifdef TARGET_WINDOWS
#ifdef FE_EXPORT
#define FE_API __declspec(dllexport)
#else
#define FE_API __declspec(dllimport)
#endif //#ifdef FE_EXPORT
#else
#ifdef FE_EXPORT
#define FE_API __attribute__((__visibility__("default")))
#else
#define FE_API
#endif //#ifdef FE_EXPORT
#endif //#ifdef TARGET_WINDOWS

/* An object containing information about the mouse state.
 * Note: x & y will behave differently depending on mode set via FE_MouseMode
 * MOUSE_MENU - Will track the mouse position relative to the window in pixels
 * MOUSE_GAME - Will track the difference in position in pixels
 */
struct FE_API FE_MouseState
{
    int x                    = 0;
    int y                    = 0;
    bool leftButtonPressed   = false;
    bool middleButtonPressed = false;
    bool rightButtonPressed  = false;
};

#endif //#ifndef RESOURCE_MOUSE_STATE_H
