/////////////////////////////////////////////////////////
// Filename: Texture.h
/////////////////////////////////////////////////////////
#ifndef _TEXTURE_H_
#define _TEXTURE_H_

//////////////
// INCLUDES //
//////////////
#include <d3d11.h>
#include <d3dx11tex.h>

/////////////////////////
// Class name: Texture //
/////////////////////////
class Texture
{
public:
	Texture();
	Texture(const Texture&);
	~Texture();

	bool Initialize(ID3D11Device*, WCHAR*);
	void Shutdown();

	ID3D11ShaderResourceView* GetTexture();

private:	
	ID3D11ShaderResourceView* m_texture;
};

#endif
