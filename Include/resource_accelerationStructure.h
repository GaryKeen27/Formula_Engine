#ifdef FEATURE_RAYTRACING
#ifndef RESOURCE_ACCELERATION_STRUCTURE_H
#define RESOURCE_ACCELERATION_STRUCTURE_H

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

#include <string>
#include <vector>

#include "resource_buffer.h"
#include "resource_prefab.h"

class FE_API FE_AccelerationStructure : public FE_Uniform
{
public:
    FE_AccelerationStructure();
    ~FE_AccelerationStructure();

    bool Create(const std::string& label, const std::vector<FE_Prefab*>& prefabs);
    void Destroy();

    struct Members;
    Members* members;
};

#endif //#ifndef RESOURCE_ACCELERATION_STRUCTURE_H
#endif //#ifdef FEATURE_RAYTRACING
