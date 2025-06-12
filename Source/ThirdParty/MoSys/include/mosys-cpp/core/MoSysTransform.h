// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <cstddef>

namespace mosys
{
	/**
	 * \brief X, Y and Z Axis
	 * \todo Add operators for MoSys3DPoint +, -, ==, !=, etc
	 */
	template<typename T> struct MoSys3DPoint
	{
		T X;
		T Y;
		T Z;

		MoSys3DPoint()
		{
			X = T();
			Y = T();
			Z = T();
		}

		MoSys3DPoint(T x, T y, T z)
		{
			X = x;
			Y = y;
			Z = z;
		}

		static size_t size()
		{
			return sizeof(T) * 3;
		}
	};

	typedef MoSys3DPoint<float> MoSysVector3f;
	typedef MoSys3DPoint<double> MoSysVector3d;

	template<typename T> struct MoSysTransform
	{
		MoSys3DPoint<T> Position;
		MoSys3DPoint<T> Rotation;
		MoSys3DPoint<T> Scale;

		MoSysTransform()
		{
			Position = MoSys3DPoint<T>();
			Rotation = MoSys3DPoint<T>();
			Scale = MoSys3DPoint<T>();
		}

		MoSysTransform(MoSys3DPoint<T> position, MoSys3DPoint<T> rotation, MoSys3DPoint<T> scale)
		{
			Position = position;
			Rotation = rotation;
			Scale = scale;
		}

		MoSysTransform(T posx, T posy, T posz, T rotx, T roty, T rotz, T scax, T scay, T scaz)
		{
			Position = { posx, posy, posz };
			Rotation = { rotx, roty, rotz };
			Scale = { scax, scay, scaz };
		}

		static size_t size()
		{
			return (MoSys3DPoint<T>::size() * 3);
		}
	};

	typedef MoSysTransform<float> MoSysTransformf;
	typedef MoSysTransform<double> MoSysTransformd;	
}