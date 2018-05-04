#include "Sphere.h"

namespace PapyrusVR
{
	bool Sphere::CheckForOverlap(Vector3 distanceFromOrigin)
	{
		//Use square distances (more performance friendly)
        return lengthSquared( distanceFromOrigin ) < pow( radius, 2 );
	}
}