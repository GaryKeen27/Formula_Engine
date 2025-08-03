#ifndef RESOURCE_SHADER_H
#define RESOURCE_SHADER_H

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

class FE_API FE_Shader
{
public:
    FE_Shader();
    ~FE_Shader();

    bool Create(const std::string& label, const std::filesystem::path& filePath, const std::string& entryPoint);
    bool Create(const std::string& label, const std::string& moduleName, const std::string& entryPoint, const std::string& source);
    void Destroy();

    struct Members;
    Members* members;
};

#endif //#ifndef RESOURCE_SHADER_H
