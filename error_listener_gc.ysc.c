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
	int iLocal_13 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	SCRIPTS::TERMINATE_THIS_THREAD();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2) || !func_1(iScriptParam_0))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
	iLocal_13 = iScriptParam_0;
	bVar0 = false;
	while (!bVar0)
	{
		if (func_2() != -1)
		{
			bVar0 = func_3(1, 1);
		}
		else
		{
			bVar0 = SCRIPTS::IS_THREAD_EXIT_REQUESTED();
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(int iParam0)
{
	switch (iParam0)
	{
		case -992702923:
		case 397004310:
		case 2004694700:
			return true;
		default:
			break;
	}
	return false;
}

int func_2()
{
	return Global_1572887.f_14;
}

int func_3(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_13)
	{
		return 0;
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
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 5.152806E+32f)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

