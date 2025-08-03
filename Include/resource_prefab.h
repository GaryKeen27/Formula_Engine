#ifndef RESOURCE_PREFAB_H
#define RESOURCE_PREFAB_H

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

#include <filesystem>
#include <string>

struct FE_API FE_Prefab
{
public:
    FE_Prefab();
    ~FE_Prefab();

    bool Create(const std::string& label, const std::filesystem::path& filePath);
    void Destroy();

    struct Members;
    Members* members;
};

#endif //#ifndef RESOURCE_PREFAB_H
