#pragma once

#include "Device.h"
#include "ShaderCompiler.h"

class Shader : public vk::UniqueShaderModule {
public:
    Shader(vk::Device device, std::string filename, EShLanguage stage);
private:
};
