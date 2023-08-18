#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2())
	{
		if (func_3())
		{
			vVar0 = { func_4(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_33, 0f, 5f, 0f) - ENTITY::GET_ENTITY_COORDS(Global_33, true, false)) };
			vVar3 = { func_5() };
			vVar3.f_2 = Global_34.f_2;
			vVar6 = { func_4(vVar3 - Global_34) };
			fVar9 = MISC::ACOS(func_6(vVar0, vVar6));
			fVar10 = (1127481344 - fVar9);
			fVar11 = (fVar10 / 1127481344);
			func_7(fVar11, 0f, 1f);
			iVar12 = 255;
			iVar13 = 195;
			iVar14 = 77;
			iVar15 = 255;
			iVar16 = 30;
			iVar17 = 0;
			GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(iLocal_0, BUILTIN::FLOOR(func_8(BUILTIN::TO_FLOAT(iVar12), BUILTIN::TO_FLOAT(iVar15), fVar11)), BUILTIN::FLOOR(func_8(BUILTIN::TO_FLOAT(iVar13), BUILTIN::TO_FLOAT(iVar16), fVar11)), BUILTIN::FLOOR(func_8(BUILTIN::TO_FLOAT(iVar14), BUILTIN::TO_FLOAT(iVar17), fVar11)));
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_0);
}

bool func_2()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return true;
	}
	if (bLocal_1 && !ENTITY::DOES_ENTITY_EXIST(iLocal_0))
	{
		return true;
	}
	if (Global_1940186.f_38 != 3.105256E-09f)
	{
		return true;
	}
	return false;
}

bool func_3()
{
	int iVar0;

	if (bLocal_1)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar0, true, 0, false))
		{
			if (iVar0 == 3.105256E-09f)
			{
				iLocal_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_33, 0));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
	{
		bLocal_1 = true;
		return true;
	}
	return false;
}

Vector3 func_4(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

Vector3 func_5()
{
	return -994327773, 1159307776, 1137786454;
}

float func_6(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_7(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_8(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

