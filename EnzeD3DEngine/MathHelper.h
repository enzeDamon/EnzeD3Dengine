#pragma once
#include "stdafx.h"

class MathHelper{
    public:
    static DirectX::XMFLOAT4X4 Indentity4X4(){
    
        static DirectX::XMFLOAT4X4 I(
            1.f, 0.f, 0.f, 0.f,
            0.f, 1.f, 0.f, 0.f,
            0.f, 0.f, 1.f, 0.f,
            0.f, 0.f, 0.f, 1.f
        );
        return I;
    }
};

