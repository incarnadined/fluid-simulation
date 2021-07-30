#pragma once
#include "pch.h"

class Renderer
{
public:
	Renderer(HWND hWnd);
	~Renderer();

	void EndFrame(const float* colour);

private:
	unsigned int mWidth;
	unsigned int mHeight;

	Microsoft::WRL::ComPtr<IDXGISwapChain> pSwapChain;
	Microsoft::WRL::ComPtr<ID3D11Device> pDevice;
	Microsoft::WRL::ComPtr<ID3D11DeviceContext> pDeviceContext;
	Microsoft::WRL::ComPtr<ID3D11RenderTargetView> pRenderTargetView;
};

