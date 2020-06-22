#pragma once

#include <OverEngine.h>

class SandboxLayer : public OverEngine::Layer
{
public:
	SandboxLayer();

	void OnAttach() override;
	void OnUpdate(OverEngine::TimeStep DeltaTime) override;
	void OnImGuiRender() override;
	void OnEvent(OverEngine::Event& event) override;

	bool OnWindowResizeEvent(OverEngine::WindowResizeEvent& event);
	bool OnMouseScrolledEvent(OverEngine::MouseScrolledEvent& event);
private:
	OverEngine::String vendorInfo, rendererInfo, versionInfo;

	OverEngine::Ref<OverEngine::Transform> m_TriangleTransform, m_SquareTransform;
	OverEngine::Ref<OverEngine::Shader> m_Shader, m_FlatColorFragmentShader;
	OverEngine::Ref<OverEngine::VertexArray> m_VertexArray, m_SquareVA;

	OverEngine::Ref<OverEngine::Camera> m_Camera;

	float m_CameraSpeed = 2.4f;
};