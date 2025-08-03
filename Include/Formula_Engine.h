#ifndef FORMULA_ENGINE_H
#define FORMULA_ENGINE_H

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

#include "resource_mouseState.h"
#include "resource_keyState.h"
#include "resource_shader.h"
#include "resource_image.h"
#include "resource_buffer.h"
#include "resource_prefab.h"
#include "resource_sampler.h"
#include "resource_renderActions.h"
#ifdef FEATURE_RAYTRACING
#include "resource_accelerationStructure.h"
#endif //#ifdef FEATURE_RAYTRACING

/*
 * Formula Engine primary API list
 */

//ToDo: Go through every header and adjust const& to values for small types

FE_API bool FE_Init(const char* appName, const int& verMajor, const int& verMinor, const int& verPatch, const uint32_t& width, const uint32_t& height, const FE_WindowMode& windowMode);
FE_API void FE_Destroy();
FE_API bool FE_WindowClosed();
FE_API void FE_UpdateInputs(FE_KeyState& keyState, FE_MouseState& mouseState);
FE_API void FE_SetMouseMode(const FE_MouseMode& mode);
FE_API bool FE_Execute(const std::vector<FE_RenderAction*>& renderActions);
FE_API bool FE_Render(FE_Image2DBase& image);

#endif //#ifndef FORMULA_ENGINE_H
