#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	float fVar2;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	PED::SET_PED_RESET_FLAG(Global_33, 304, true);
	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		iVar0 = func_2(Global_33, 0);
		if ((iVar0 != -3.273909E-18f && iVar0 != 2.080198E+24f) && iVar0 != -1.197024E-12f)
		{
			if (Global_17385 == 0)
			{
				WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_33, 0, &Global_17386);
			}
		}
		iVar1 = func_2(Global_33, 1);
		if (WEAPON::IS_WEAPON_REVOLVER(iVar1) || WEAPON::IS_WEAPON_PISTOL(iVar1))
		{
			if (Global_17385 == 0)
			{
				WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_33, 1, &Global_17390);
			}
		}
		WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), -3.273909E-18f, false);
	Global_1940239.f_11642 = 0;
	Global_1940239.f_11643 = 0;
	fVar2 = -1.057507E-23f;
	if (func_3(0))
	{
		fVar2 = -1.287736E+17f;
	}
	else if (Global_1940239.f_1 == 0)
	{
	}
	else
	{
		fVar2 = Global_1940239.f_1;
	}
	while (!func_4())
	{
		PED::SET_PED_RESET_FLAG(Global_33, 304, true);
		switch (func_5())
		{
			case 0:
				if (func_6())
				{
					func_7();
				}
				if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(NaNf, fVar2) != 0)
				{
				}
				else
				{
					func_8(1);
				}
				break;
			case 1:
				if (func_6())
				{
					func_7();
				}
				if (((((!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(NaNf) || Global_1940239 == 2) || Global_13) || PED::IS_PED_DEAD_OR_DYING(Global_33, true)) || !func_9(255)) || func_10(512))
				{
					func_8(2);
				}
				else
				{
					func_11();
				}
				PAD::DISABLE_CONTROL_ACTION(0, -1.076797E-08f, false);
				PAD::DISABLE_CONTROL_ACTION(0, -6.00134E-14f, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1.422437E+11f, false);
				break;
			case 2:
				if (func_6())
				{
					func_7();
					func_1();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	UIAPPS::_CLOSE_UIAPP_BY_HASH(NaNf);
	if (!func_10(512))
	{
		func_12(0, 0);
	}
	else
	{
		func_12(1, 0);
		func_13(512);
	}
	Global_1940239.f_2 = 0;
	Global_17413 = 0;
	Global_1940239.f_13 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_3(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_4()
{
	if (func_14(1, 1))
	{
		return true;
	}
	if (Global_1940239.f_13)
	{
		return true;
	}
	return false;
}

int func_5()
{
	return Global_1940239.f_11642;
}

bool func_6()
{
	return Global_1940239.f_11643;
}

void func_7()
{
	Global_1940239.f_11643 = 0;
}

void func_8(int iParam0)
{
	if (Global_1940239.f_11642 != iParam0)
	{
		Global_1940239.f_11642 = iParam0;
		func_15();
	}
}

bool func_9(int iParam0)
{
	return !func_16(iParam0);
}

bool func_10(int iParam0)
{
	return (Global_1940239.f_11561 && iParam0) != 0;
}

void func_11()
{
	PAD::DISABLE_CONTROL_ACTION(0, NaNf, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2.252231E+16f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -7.349376E+15f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1.302565E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -7.533967E+23f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -5.413385E-27f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -4.491091E+18f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
}

void func_12(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_1940239 = 1;
		Global_1940239.f_1 = iParam1;
	}
	else
	{
		Global_1940239 = 2;
	}
}

void func_13(int iParam0)
{
	Global_1940239.f_11561 = (Global_1940239.f_11561 - (Global_1940239.f_11561 && iParam0));
}

bool func_14(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_13)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 5.152806E+32f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_15()
{
	Global_1940239.f_11643 = 1;
}

bool func_16(int iParam0)
{
	return func_17(1, iParam0);
}

bool func_17(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_18(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_19())
	{
		return func_18(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_18(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_18(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_19()
{
	return Global_1102813.f_3672;
}

