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
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	Local_13 = vScriptParam_0.x;
	Local_13.f_1 = vScriptParam_0.y;
	if (func_2(Local_13.f_1) && func_3(Local_13))
	{
		while (!func_4(1) && !func_5(32768))
		{
			if (func_6(vScriptParam_0.f_2))
			{
			}
			else
			{
				BUILTIN::WAIT(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return 0;
	}
	return 1;
}

int func_3(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return 0;
	}
	return 1;
}

bool func_4(bool bParam0)
{
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
	return false;
}

bool func_5(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_6(vector3 vParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (!Global_1939946.f_5[Local_13.f_1 /*11*/])
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam0, true) > 1101004800)
			{
				return true;
			}
		}
		if (func_7(Global_1940186, 4194304))
		{
			return true;
		}
	}
	return false;
}

bool func_7(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

