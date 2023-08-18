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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(-1.712823E-27f);
	}
	if (Global_1572887.f_14 != 0)
	{
		return;
	}
	bVar0 = false;
	while (!func_2(1, 1))
	{
		bVar0 = false;
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			bVar0 = true;
		}
		if (!Global_1915643.f_22504)
		{
			bVar0 = true;
		}
		if (func_3())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
			func_1(-1.712823E-27f);
		}
		else
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2.546118E-24f))
			{
				func_4(2);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2.747697E-17f))
			{
				func_1(-2.747697E-17f);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1.262798E-13f))
			{
				func_1(-1.262798E-13f);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 9.343495E-19f))
			{
				func_1(9.343495E-19f);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1.139065E-07f))
			{
				func_1(-1.139065E-07f);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -861983.4f))
			{
				func_1(-861983.4f);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -7.420127E-09f))
			{
				func_1(-7.420127E-09f);
			}
			BUILTIN::WAIT(0);
		}
	}
	func_1(-1.712823E-27f);
}

void func_1(float fParam0)
{
	Global_1915643.f_22504.f_4 = fParam0;
}

bool func_2(bool bParam0, bool bParam1)
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

bool func_3()
{
	return Global_1102813.f_3664;
}

void func_4(int iParam0)
{
	Global_1051832.f_3648 = (Global_1051832.f_3648 || iParam0);
}

