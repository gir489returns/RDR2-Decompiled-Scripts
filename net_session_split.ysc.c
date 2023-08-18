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
	struct<2> Local_13 = { 0, 0 } ;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = -1;
	var uLocal_19 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	Local_13.f_1 = { ScriptParam_0 };
	func_1();
	while (!func_2(0, 0) && Local_13 != 5)
	{
		func_3(&Local_13);
		BUILTIN::WAIT(0);
	}
	func_4();
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
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

void func_3(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(iParam0->f_1.f_1), iVar0))
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
			{
				SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(iParam0->f_1.f_1), iVar0);
			}
		}
		iVar0++;
	}
	if (*iParam0 > 0)
	{
		if ((MISC::GET_GAME_TIMER() - iParam0->f_6) > 15000)
		{
			func_5(5, iParam0);
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION(&(iParam0->f_1.f_1)))
			{
				func_5(1, iParam0);
				iParam0->f_6 = MISC::GET_GAME_TIMER();
				NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(iParam0->f_1.f_3);
			}
			break;
		case 1:
			if (NETWORK::NETWORK_AUTO_SESSION_SPLIT_SESSION(1, iParam0->f_1.f_4, 0, -1))
			{
				func_5(2, iParam0);
			}
			break;
		case 2:
			if (NETWORK::_NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT())
			{
			}
			else
			{
				func_5(3, iParam0);
			}
			break;
		case 3:
			if (NETWORK::_NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL())
			{
				func_5(4, iParam0);
			}
			else
			{
				func_5(1, iParam0);
			}
			break;
		case 4:
			if (NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION())
			{
				if (!NETWORK::_0x0B6B4507AC5EA8B8())
				{
					if (!NETWORK::NETWORK_IS_RESETTING_POPULATION())
					{
						NETWORK::NETWORK_RESET_POPULATION(false, 0);
					}
				}
				func_5(5, iParam0);
			}
			else
			{
				func_5(1, iParam0);
			}
			break;
		case 5:
			break;
	}
}

void func_4()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(int iParam0, int iParam1)
{
	*iParam1 = iParam0;
}

