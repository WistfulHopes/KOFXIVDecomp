#pragma once

class Scaleform::GFx::AS3::Classes::UDBase :
	Scaleform::GFx::AS3::Class
{
	class Self;
public:
	UDBase(Scaleform::GFx::AS3::ClassTraits::Traits &);
	virtual ~UDBase();
	virtual void InitPrototype(Scaleform::GFx::AS3::Object &);
};