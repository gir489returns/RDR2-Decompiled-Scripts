#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;

	if (ScriptParam_0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = ScriptParam_0.f_1;
	uVar2 = ScriptParam_0.f_2;
	uVar3 = ScriptParam_0;
	iVar4 = -1;
	if (Global_1072759.f_28313.f_25.f_72 == iVar1)
	{
		iVar4 = Global_1072759.f_28313.f_25.f_71;
		Global_1072759.f_28313.f_25.f_71 = -1;
		Global_1072759.f_28313.f_25.f_72 = 0;
	}
	iVar5 = SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
	while (!func_1(&iVar5, &iVar1, &iVar0) && func_2(&iVar0, &uVar2, &iVar1, &uVar3, &iVar4, &(ScriptParam_0.f_3)))
	{
		BUILTIN::WAIT(0);
	}
}

bool func_1(int iParam0, int iParam1, int iParam2)
{
	if (func_3(0, 0))
	{
		return true;
	}
	if (*iParam2 == 2)
	{
		return true;
	}
	return false;
}

bool func_2(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5)
{
	switch (*iParam0)
	{
		case 0:
			if (func_4(uParam1, iParam2, uParam3, iParam4, uParam5))
			{
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 2;
			}
			break;
		case 1:
			if (func_5(uParam1, uParam5))
			{
				*iParam0 = 2;
			}
			break;
		case 2:
			func_6(uParam1, uParam5);
			return false;
	}
	return true;
}

bool func_3(bool bParam0, bool bParam1)
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

int func_4(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case 0:
			return func_7(iParam1, uParam2, iParam3, uParam4);
		default:
			break;
	}
	return 0;
}

int func_5(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 0:
			return func_8(uParam1);
		default:
			break;
	}
	return 1;
}

int func_6(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 0:
			return func_9(uParam1);
		default:
			break;
	}
	return 1;
}

int func_7(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (*uParam3)
	{
	}
	else
	{
		func_10(*iParam0, uParam1, iParam2);
	}
	return 1;
}

int func_8(var uParam0)
{
	int iVar0;

	if (*uParam0)
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Global_1295619.f_3, 2.048912E-15f, true);
		if (!((iVar0 == 1 || iVar0 == 0) || iVar0 == 6))
		{
			return 1;
		}
	}
	return 0;
}

int func_9(var uParam0)
{
	if (*uParam0)
	{
	}
	return 1;
}

void func_10(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	if ((PED::IS_PED_SITTING(Global_1295619.f_3) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Global_1295619.f_3)) || PED::IS_PED_ON_MOUNT(Global_1295619.f_3))
	{
		iVar0 = 0;
	}
	else if (*iParam2 != -1)
	{
		iVar0 = *iParam2;
	}
	else
	{
		iVar0 = 2;
	}
	TASK::_TASK_PLAY_EMOTE(Global_1295619.f_3, *uParam1, iVar0, iParam0, false, true, false, false, false);
}

