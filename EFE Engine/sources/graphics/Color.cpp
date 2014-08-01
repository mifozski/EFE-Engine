#include "graphics/Color.h"

namespace efe
{

	//////////////////////////////////////////////////////////////
	// CONSTRUCTORS
	//////////////////////////////////////////////////////////////

	//--------------------------------------------------------------

	cColor::cColor(float a_fR, float a_fG, float a_fB, float a_fA)
	{
		r = a_fR; g = a_fG; b = a_fB; a = a_fA;
	}

	//--------------------------------------------------------------

	cColor::cColor(float a_fR, float a_fG, float a_fB)
	{
		r = a_fR; g = a_fG; b = a_fB; a = 1;
	}

	//--------------------------------------------------------------

	cColor::cColor()
	{
		r = 0; g = 0; b = 0; a =1;
	}

	//--------------------------------------------------------------

	cColor::cColor(float a_fVal)
	{
		r = a_fVal; g = a_fVal; b = a_fVal; a = 1;
	}

	//--------------------------------------------------------------

	cColor::cColor(float a_fVal, float a_fA)
	{
		r = a_fVal; g = a_fVal; b = a_fVal; a = a_fA;
	}

	//--------------------------------------------------------------

	//////////////////////////////////////////////////////////////
	// PUBLIC METHODS
	//////////////////////////////////////////////////////////////

	//--------------------------------------------------------------

	void cColor::FromVec(float *a_pV)
	{
		r = a_pV[0];
		g = a_pV[1];
		b = a_pV[2];
		a = a_pV[3];
	}

	//--------------------------------------------------------------

	cColor cColor::operator*(const cColor &a_Col) const
	{
		return cColor(
			r * a_Col.r,
			g * a_Col.g,
			b * a_Col.b,
			a * a_Col.a
			);
	}
}