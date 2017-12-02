using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// reference: Devin Curry, www.devination.com

// tool to extract Vector3 data for (x,y) and create a Vector2 with this data.

public static class ExtensionMethods

{
	public static Vector2 toVector2(this Vector3 vec3)
	{
		return new Vector2(vec3.x, vec3.y);
	}
}
