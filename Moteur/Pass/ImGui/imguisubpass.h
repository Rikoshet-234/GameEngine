#pragma once
#include "imgui/ImGUIInstance.h"
#include "Pass/Subpass.h"
#include "Pass/PipelineBuilder.h"

class ImGUISubpass : public Subpass {
public:
    ImGUISubpass(ImGUIInstance &imGUIInstance,
        vk::Device device,
        BufferFactory &bufferFactory);

private:
    void execute(vk::CommandBuffer cmd) override;
    void create(vk::RenderPass renderpass, vk::Extent2D extent, uint32_t indexPass) override;

    ImGUIInstance &mImGUIInstance;
    vk::Device mDevice;
    BufferFactory &mBufferFactory;
    Pipeline mPipeline;
    std::unique_ptr<Buffer> mVbo;
    std::unique_ptr<Buffer> mIbo;
};
