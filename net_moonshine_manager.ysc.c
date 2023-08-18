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
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	if (!func_2())
	{
		func_3();
	}
	while (!func_2())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	while (!func_5())
	{
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}
	func_6(&Global_1297014);
	func_7(&Global_1297553);
	func_8(&Global_1297182);
	func_9(0);
	func_10();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_11(32, -1);
	func_12();
	if (func_13())
	{
		func_10();
	}
	func_14();
	func_15(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_2()
{
	if (func_16(0, 0))
	{
		return true;
	}
	return false;
}

void func_3()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_17(iVar0, 1);
		iVar0++;
	}
}

void func_4()
{
	if (!NETWORK::NETWORK_IS_SESSION_ACTIVE() || !func_18())
	{
		return;
	}
	switch (Global_1297182)
	{
		case 0:
			if (Global_1297394 != 1)
			{
				return;
			}
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
			{
				func_19(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
			}
			else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			{
				func_19(PLAYER::PLAYER_ID());
			}
			else
			{
				return;
			}
			func_20();
			func_21(1);
			Global_1297182 = 1;
			break;
		case 1:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_22()))
			{
				func_19(PLAYER::PLAYER_ID());
			}
			func_23();
			func_24();
			func_25();
			func_26();
			func_27();
			func_28();
			func_29();
			func_30();
			func_31();
			func_32();
			func_33();
			break;
	}
}

bool func_5()
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_34(iVar0, &(Global_1297182.f_201.f_1[iVar0 /*4*/])))
		{
			bVar1 = true;
		}
		else
		{
			func_35(iVar0, &(Global_1297182.f_201.f_1[iVar0 /*4*/]), 0);
		}
		iVar0++;
	}
	return !bVar1;
}

void func_6(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_7(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_36(uParam0[iVar0 /*87*/]);
		iVar0++;
	}
}

void func_8(var uParam0)
{
	struct<212> Var0;

	Var0.f_3.f_2 = 32;
	Var0.f_3.f_2.f_1 = 255;
	Var0.f_3.f_2.f_1.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 255;
	Var0.f_3.f_132 = 32;
	Var0.f_3.f_132.f_1 = 255;
	Var0.f_3.f_132.f_1.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_3.f_132.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_200 = 255;
	Var0.f_201.f_1 = 2;
	Var0.f_201.f_1.f_1.f_1 = -1;
	Var0.f_201.f_1.f_1.f_2 = -1;
	Var0.f_201.f_1.f_1.f_4.f_1 = -1;
	Var0.f_201.f_1.f_1.f_4.f_2 = -1;
	*uParam0 = { Var0 };
}

void func_9(bool bParam0)
{
	func_37(37, 0);
	func_37(33, 0);
	if (bParam0)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1297394.f_44.f_2))
		{
			VOLUME::DELETE_VOLUME(Global_1297394.f_44.f_2);
		}
		if (VOLUME::DOES_VOLUME_EXIST(Global_1297394.f_44.f_3))
		{
			VOLUME::DELETE_VOLUME(Global_1297394.f_44.f_3);
		}
	}
}

void func_10()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_10();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_12()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_10();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_10();
					break;
				case 2:
					func_10();
					break;
				case 4:
					func_10();
					break;
				case 3:
					func_10();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_10();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_10();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_10();
		}
		if (func_38() == 0)
		{
			if (func_39())
			{
				func_10();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_10();
	}
	return 1;
}

bool func_13()
{
	if (Global_1572887.f_10)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	return false;
}

bool func_14()
{
	bool bVar0;

	bVar0 = false;
	func_6(&Global_1297014);
	func_7(&Global_1297553);
	func_8(&Global_1297182);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1297014, 1, 45);
	if (!func_40(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1297014), 1, "g_mpMoonshineHostData"))
	{
		bVar0 = true;
	}
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1297553, 2785, 46);
	if (!func_41(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1297553[0 /*87*/])), 2785, "g_mpMoonshinePlayerData"))
	{
		bVar0 = true;
	}
	func_42();
	return !bVar0;
}

void func_15(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_10();
					break;
				case 2:
					func_10();
					break;
				case 4:
					func_10();
					break;
				case 3:
					func_10();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return;
		}
		if (MISC::GET_SYSTEM_TIME() >= iVar0)
		{
			func_10();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_16(bool bParam0, bool bParam1)
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

bool func_17(int iParam0, bool bParam1)
{
	if (func_43(iParam0))
	{
		if (MISC::IS_BIT_SET(Global_1297182.f_201, iParam0))
		{
			MISC::CLEAR_BIT(&(Global_1297182.f_201), iParam0);
		}
		if (bParam1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1297182.f_201.f_1[iParam0 /*4*/], false))
			{
				SCRIPTS::TERMINATE_THREAD(Global_1297182.f_201.f_1[iParam0 /*4*/]);
				Global_1297182.f_201.f_1[iParam0 /*4*/] = 0;
				Global_1297182.f_201.f_1[iParam0 /*4*/].f_1 = -1;
				Global_1297182.f_201.f_1[iParam0 /*4*/].f_3 = 0;
			}
		}
		return func_44(iParam0) == 0;
	}
	return false;
}

bool func_18()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_3;
}

void func_19(int iParam0)
{
	Global_1297182.f_200 = iParam0;
}

void func_20()
{
	int iVar0;

	iVar0 = func_45();
	func_46(iVar0);
	if (func_47(6))
	{
		Global_1297394.f_44.f_1 = 1;
	}
	else
	{
		Global_1297394.f_44.f_1 = 0;
	}
	func_49(func_48());
}

void func_21(int iParam0)
{
	Global_1297182.f_1 = iParam0;
}

int func_22()
{
	return Global_1297182.f_200;
}

void func_23()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!func_50(PLAYER::PLAYER_ID(), 1))
	{
		Global_1297553[iVar0 /*87*/].f_1 = -1;
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1297182.f_200))
	{
		Global_1297553[iVar0 /*87*/].f_1 = -1;
		return;
	}
	iVar1 = Global_1297553[Global_1297182.f_200 /*87*/].f_5.f_12;
	if (Global_1297553[iVar0 /*87*/].f_1 == iVar1)
	{
		return;
	}
	Global_1297553[iVar0 /*87*/].f_1 = iVar1;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if ((!func_18() || !NETWORK::NETWORK_IS_SESSION_ACTIVE()) || !ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
	{
		iVar2 = iVar1;
		if (iVar2 != Global_1297553[Global_1295619 /*87*/])
		{
			Global_1297553[Global_1295619 /*87*/] = iVar2;
		}
	}
	else if (GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
	{
		iVar3 = GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
			iVar4 = func_51(iVar3, 1);
			if (Global_1297553[Global_1295619 /*87*/] != iVar4)
			{
				Global_1297553[Global_1295619 /*87*/] = iVar4;
			}
		}
	}
	else if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(iVar0)))
	{
		iVar5 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
			iVar6 = func_51(iVar5, 1);
			if (Global_1297553[Global_1295619 /*87*/] != iVar6)
			{
				Global_1297553[Global_1295619 /*87*/] = iVar6;
			}
		}
	}
	func_52();
}

void func_25()
{
	if (!func_53(4096))
	{
		if (func_54(PLAYER::PLAYER_ID(), 0, 1) == 0)
		{
			if (func_55())
			{
				func_49(7);
				func_56(4096);
			}
		}
	}
}

void func_26()
{
	func_57();
	func_58();
	func_59();
	func_60();
	func_61();
}

void func_27()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1297182.f_1 == 4)
	{
		func_62();
	}
	else if (Global_1297182.f_1 == 3)
	{
		func_63();
	}
	else
	{
		iVar1 = func_64(Global_1297182.f_200, 1);
		if (iVar1 == -1)
		{
			iVar0 = 1287568416;
		}
		else
		{
			iVar0 = func_65(iVar1);
		}
		if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_66(iVar0);
		}
		else
		{
			iVar2 = GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10);
			func_67(iVar2, iVar0);
		}
	}
}

void func_28()
{
	if (func_50(PLAYER::PLAYER_ID(), 1))
	{
		if ((func_44(1) == 0 && !func_68()) && !func_69())
		{
			if (func_53(262144))
			{
				func_70(262144);
			}
			func_71(128);
			func_71(2048);
			func_70(8192);
			func_70(9.403955E-38f);
			func_72(1);
		}
	}
	else
	{
		switch (func_44(1))
		{
			case 3:
				if (!func_53(8192))
				{
					func_56(8192);
					func_56(262144);
				}
				break;
			case 0:
				if (func_53(262144))
				{
					if (!func_73())
					{
						func_49(7);
						func_70(262144);
					}
				}
				break;
		}
	}
}

void func_29()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_75(iVar0, &(Global_1297182.f_201.f_1[iVar0 /*4*/]), func_74(iVar0));
		iVar0++;
	}
}

void func_30()
{
	if (func_50(PLAYER::PLAYER_ID(), 1))
	{
		func_76(1);
		func_77();
	}
}

void func_31()
{
	if (func_50(Global_1295619.f_149[Global_1295619], 1))
	{
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	}
}

void func_32()
{
	int iVar0;

	func_78();
	func_79();
	func_80();
	if (func_50(PLAYER::PLAYER_ID(), 1))
	{
		func_81();
		func_82();
		func_83();
		func_84();
	}
	iVar0 = func_85(Global_1295619.f_149[Global_1295619]);
	switch (iVar0)
	{
		case 0:
			func_86();
			func_87();
			func_88();
			func_89();
			if (!func_90(0))
			{
				func_91(1);
				return;
			}
			func_92(&(Global_1297394.f_157), 3.85186E-34f);
			if (func_93(1f))
			{
				func_91(7);
			}
			else if (func_94())
			{
				func_95();
				func_91(4);
			}
			else
			{
				func_91(2);
			}
			break;
		case 1:
			if (func_90(0))
			{
				func_92(&(Global_1297394.f_157), 3.85186E-34f);
				func_91(2);
			}
			break;
		case 2:
			if (!func_96(Global_1295619, 256))
			{
				func_97(256);
			}
			if (func_98(Global_1295619.f_5) > 0)
			{
				func_95();
				func_91(4);
				return;
			}
			if (func_99(Global_1295619.f_5) > 0)
			{
				func_100();
			}
			if (func_101())
			{
				func_91(3);
			}
			break;
		case 3:
			if (func_102(&(Global_1297015.f_9)) != 3)
			{
				return;
			}
			if (func_98(Global_1295619.f_5) == 0)
			{
				return;
			}
			func_103();
			func_95();
			func_104(Global_1297015.f_9.f_1, 1);
			func_91(4);
			break;
		case 4:
			func_105();
			if (func_106(&(Global_1297015.f_1)) > Global_1297015.f_4)
			{
				if (func_93(1f) || func_107())
				{
					func_91(6);
				}
				else if (func_98(Global_1295619.f_5) == 0)
				{
				}
			}
			break;
		case 6:
			if (func_108(&(Global_1297015.f_9)))
			{
				return;
			}
			if (func_93(1f))
			{
				if (func_109())
				{
					func_91(5);
				}
				else
				{
					func_110(&(Global_1297015.f_1));
					func_91(7);
				}
			}
			else
			{
				func_111(&(Global_1297015.f_1));
				func_91(4);
			}
			break;
		case 5:
			func_105();
			if (func_96(Global_1295619, 64))
			{
				func_110(&(Global_1297015.f_1));
				func_91(7);
			}
			break;
		case 7:
			if (!func_96(Global_1295619, 524288))
			{
				func_97(524288);
			}
			if (func_96(Global_1295619, 4))
			{
				func_112(4);
			}
			if (!func_96(Global_1295619, 128))
			{
				func_113();
				func_114();
				func_97(128);
			}
			if (func_96(Global_1295619, 8))
			{
				func_112(131072);
				func_112(128);
				func_97(2);
				func_91(8);
			}
			break;
		case 8:
			if (func_96(Global_1295619, 8))
			{
				func_112(8);
			}
			if (func_96(Global_1295619, 512))
			{
				func_115();
				func_91(9);
			}
			break;
		case 9:
			if (func_116())
			{
				func_91(2);
			}
			break;
		case 10:
			if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10) && GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
			{
				if (!func_90(1))
				{
					func_91(1);
				}
				else if (func_93(1f))
				{
					func_91(7);
				}
				else if (func_94())
				{
					func_95();
					func_91(4);
				}
				else
				{
					func_91(2);
				}
			}
			break;
	}
}

void func_33()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1297553[iVar0 /*87*/].f_1 == -1)
	{
		return;
	}
	POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
}

bool func_34(int iParam0, var uParam1)
{
	if (SCRIPTS::DOES_THREAD_EXIST(*uParam1))
	{
		if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(*uParam1))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(*uParam1);
		}
		return false;
	}
	else
	{
		*uParam1 = 0;
		uParam1->f_1 = -1;
	}
	func_17(iParam0, 1);
	return true;
}

void func_35(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_3 = iParam2;
}

void func_36(var uParam0)
{
	struct<87> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = 10;
	Var0.f_5.f_12 = -1;
	Var0.f_5.f_13 = -1;
	Var0.f_19.f_1 = 11;
	Var0.f_42 = 8;
	Var0.f_53 = 8;
	Var0.f_53.f_1.f_1 = -1;
	Var0.f_53.f_1.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_53.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_37(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = (func_117(iParam0) && !bParam1);
	if (!bVar0 && !func_118(iParam0, 65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21, true, true);
			}
			ENTITY::DELETE_ENTITY(&(Global_1051832.f_92[iParam0 /*75*/].f_21));
			Global_1051832.f_92[iParam0 /*75*/].f_21 = 0;
		}
		if (STREAMING::IS_MODEL_VALID(Global_1051832.f_92[iParam0 /*75*/].f_19))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1051832.f_92[iParam0 /*75*/].f_19);
		}
		Global_1051832.f_92[iParam0 /*75*/].f_19 = 0;
	}
	else if (func_119(iParam0, 1.504633E-36f) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		if (func_118(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		if (func_118(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
	{
		if (func_118(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);
		}
	}
	if (func_119(iParam0, 16384) && !bVar0)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			iVar1 = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_120(iParam0, 16384);
	}
	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915643.f_3[iParam0 /*447*/].f_16 = 0;
	iVar3 = func_121(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_122(Global_1051832.f_92[iParam0 /*75*/].f_31[iVar2]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}
	func_123(iParam0);
	if (func_118(iParam0, 262144))
	{
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	}
	else
	{
		func_124(iParam0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_125(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, 1.526336E-16f);
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}
	Global_1051832.f_92[iParam0 /*75*/].f_50 &= 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 &= 2113536;
	func_126(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
}

int func_38()
{
	return Global_1572887.f_14;
}

bool func_39()
{
	return Global_1051645.f_8;
}

bool func_40(int iParam0, int iParam1, char* sParam2)
{
	return true;
}

bool func_41(int iParam0, int iParam1, char* sParam2)
{
	return true;
}

void func_42()
{
	int iVar0;

	iVar0 = func_45();
	func_46(iVar0);
	func_127();
}

bool func_43(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

int func_44(int iParam0)
{
	if (func_43(iParam0))
	{
		return Global_1297182.f_201.f_1[iParam0 /*4*/].f_3;
	}
	return 0;
}

int func_45()
{
	if (!func_128(&(Global_1297394.f_62)))
	{
		return -1;
	}
	switch (func_129(Global_1297394.f_62, 2.23382E-24f, 0, 1))
	{
		case 1580598647:
			return 0;
		case 786277441:
			return 1;
		case 1273401170:
			return 3;
		case -127194573:
			return 2;
		case 1480239309:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_46(int iParam0)
{
	Global_1297553[PLAYER::PLAYER_ID() /*87*/].f_5.f_12 = iParam0;
}

bool func_47(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		bVar1 = func_131(1, iParam0);
		if (bVar1 == 0)
		{
			return false;
		}
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar1))
		{
			return true;
		}
	}
	return false;
}

int func_48()
{
	if (func_128(&(Global_1297394.f_62)))
	{
		switch (func_132(Global_1297394.f_62, 9.466108E-07f, 1, -1))
		{
			case -1647055373:
				return 0;
			case -660379727:
				return 2;
			case 729277565:
				return 1;
			case -1262899184:
				return 3;
			case -553448238:
				return 4;
			case 378713226:
				return 5;
			default:
				break;
		}
	}
	return 0;
}

void func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar1 = func_133();
	iVar2 = func_134();
	iVar3 = func_135() + 1;
	iVar4 = func_136();
	if (!func_55())
	{
		iVar3 = 0;
	}
	func_137(3, iVar1, 1);
	func_137(1, iVar2, 1);
	func_137(0, iVar3, 1);
	if (iVar3 > 0)
	{
		func_137(5, 1, 1);
	}
	else
	{
		func_137(5, 0, 1);
	}
	if (iVar2 > 0)
	{
		func_137(4, 0, 1);
	}
	else if (iParam0 == 5)
	{
		func_137(4, 3, 1);
	}
	else if (iVar3 > 1)
	{
		func_137(4, 2, 1);
	}
	else
	{
		func_137(4, 1, 1);
	}
	if (iVar3 > 1)
	{
		func_137(2, 1, 1);
	}
	else
	{
		func_137(2, 0, 1);
	}
	if (iParam0 != 7)
	{
		Global_1297553[iVar0 /*87*/].f_5.f_11 = iParam0;
	}
	if (func_138())
	{
		func_137(6, 1, 1);
	}
	else
	{
		func_137(6, 0, 1);
	}
	func_137(9, iVar4, 1);
	func_139();
}

bool func_50(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_140(Global_1297553[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

int func_51(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1297553[iParam0 /*87*/];
}

void func_52()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1297182.f_211 == 0)
	{
		Global_1297182.f_211 = MISC::GET_SYSTEM_TIME();
		return;
	}
	else if ((MISC::GET_SYSTEM_TIME() - Global_1297182.f_211) > 1000)
	{
		Global_1297182.f_211 = 0;
	}
	else
	{
		return;
	}
	iVar0 = Global_1297553[Global_1295619 /*87*/].f_3;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && iVar1 != Global_1295619)
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
			else if (Global_1297553[iVar1 /*87*/].f_3 == iVar0 && !func_50(iVar2, 256))
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar3, true, false, iVar0);
			}
			else
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar3, false, false, 256);
			}
		}
		iVar1++;
	}
}

bool func_53(int iParam0)
{
	return func_140(Global_1297394.f_157, iParam0);
}

int func_54(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return 0;
		}
	}
	return Global_1297553[iParam0 /*87*/].f_5[iParam1];
}

bool func_55()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(197278.6f) || !UNLOCK::UNLOCK_IS_UNLOCKED(-3.066262E+24f))
	{
		return false;
	}
	return true;
}

void func_56(int iParam0)
{
	func_92(&(Global_1297394.f_157), iParam0);
}

void func_57()
{
	bool bVar0;

	bVar0 = func_50(PLAYER::PLAYER_ID(), 512);
	if (Global_1297394.f_131.f_5)
	{
		if (bVar0)
		{
			func_71(512);
		}
		return;
	}
	if (func_141(512))
	{
		if (bVar0)
		{
			func_71(512);
		}
		return;
	}
	if (func_142() || func_143())
	{
		if (bVar0)
		{
			func_71(512);
		}
	}
	else if (!bVar0)
	{
		func_144(512);
	}
}

void func_58()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	char cVar4[128];
	bool bVar20;
	char* sVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	struct<55> Var25;

	if (Global_1297182.f_1 == 3)
	{
		return;
	}
	if (Global_1297182.f_3.f_1 >= 32)
	{
		return;
	}
	if (Global_1297394.f_131.f_5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1297182.f_3.f_1 - 1))
	{
		if (!func_140(Global_1297182.f_3.f_2[iVar0 /*4*/].f_3, 8))
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	if (iVar1 < 0 || iVar1 >= 32)
	{
		Global_1297182.f_3.f_1 = 0;
		return;
	}
	iVar3 = Global_1297182.f_3.f_2[iVar1 /*4*/];
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	if (func_145(255))
	{
		return;
	}
	StringCopy(&cVar4, "", 128);
	switch (func_146(&cVar4, iVar3, 1))
	{
		case 1:
			Global_1297182.f_3.f_2[iVar1 /*4*/].f_2 = 0;
			bVar20 = true;
			break;
		case 2:
			if (!func_140(Global_1297182.f_3.f_2[iVar1 /*4*/].f_3, 1))
			{
				func_147(iVar3);
				Global_1297182.f_3.f_2[iVar1 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				func_148(&(Global_1297182.f_3.f_2[iVar1 /*4*/].f_3), 1);
			}
			return;
		case 3:
			if (Global_1297182.f_3.f_2[iVar1 /*4*/].f_2 == 0)
			{
				Global_1297182.f_3.f_2[iVar1 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				return;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1297182.f_3.f_2[iVar1 /*4*/].f_2) > 3000)
			{
				func_92(&(Global_1297182.f_3.f_2[iVar1 /*4*/].f_3), 2);
				bVar20 = true;
			}
			else
			{
				return;
			}
			break;
		case 4:
			bVar20 = true;
			Global_1297182.f_3.f_2[iVar1 /*4*/].f_2 = 0;
			break;
	}
	sVar21 = func_149(cVar4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar21))
	{
		iVar22 = MISC::GET_HASH_KEY(sVar21);
		iVar23 = iVar22;
		iVar24 = 0;
	}
	else
	{
		iVar22 = 6.522135E+22f;
		iVar23 = 1.749576E+13f;
		iVar24 = 1;
	}
	if (bVar20)
	{
		Var25 = 1;
		Var25.f_1 = 1;
		Var25.f_2 = 27.64779f;
		Var25.f_4 = -1;
		Var25.f_5 = -1;
		Var25.f_6 = -1;
		Var25.f_10 = -1;
		Var25.f_11 = -1;
		Var25.f_12 = -1;
		Var25.f_18 = 27.64779f;
		Var25.f_19 = 27.64779f;
		Var25.f_25 = 300;
		Var25.f_33.f_8 = 27.64779f;
		Var25.f_33.f_11 = 27.64779f;
		Var25.f_33.f_12 = 8000;
		Var25.f_33.f_13 = 1.051843E+16f;
		Var25.f_33.f_15 = 1.608566E+13f;
		Var25.f_33.f_21 = 1;
		Var25.f_26 = 9;
		Var25.f_27 = iVar3;
		Var25.f_16 = func_151(PLAYER::GET_PLAYER_NAME(iVar3), func_150(iVar3, 1, -1, 0));
		Var25.f_17 = MISC::VAR_STRING(2, "MS_INVITE_MAIN");
		Var25.f_20 = iVar22;
		Var25.f_21 = iVar23;
		Var25.f_25 = 120;
		Var25.f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
		Var25.f_31 = "IB_GAMERCARD";
		Var25.f_30 = 22;
		Var25.f_33.f_2 = func_151(PLAYER::GET_PLAYER_NAME(iVar3), func_150(iVar3, 1, -1, 0));
		Var25.f_33.f_3 = MISC::VAR_STRING(2, "MS_INVITE_MAIN");
		Var25.f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_NOTIFICATION");
		Var25.f_33.f_6 = iVar22;
		Var25.f_33.f_7 = iVar23;
		Var25.f_33.f_17 = "HUD_Toast_Soundset";
		Var25.f_33.f_18 = "Toast_On";
		Var25.f_24 = 0;
		Var25.f_33.f_21 = iVar24;
		func_92(&(Global_1297182.f_3.f_2[iVar1 /*4*/].f_3), 8);
		if (!func_153(func_152(Var25), Global_1297182.f_3.f_2[iVar1 /*4*/]))
		{
			return;
		}
	}
}

void func_59()
{
	if (Global_1297182.f_3.f_1 > 0)
	{
		if (func_68() || func_69())
		{
			func_154();
		}
	}
}

void func_60()
{
	struct<4> Var0;
	int iVar4;

	if (Global_1297182.f_3 == 0)
	{
		Global_1297182.f_3 = MISC::GET_GAME_TIMER();
		return;
	}
	else if ((MISC::GET_GAME_TIMER() - Global_1297182.f_3) < 3000)
	{
		return;
	}
	Global_1297182.f_3 = 0;
	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297182.f_3.f_2[iVar4 /*4*/].f_1) && func_140(Global_1297182.f_3.f_2[iVar4 /*4*/].f_3, 4))
		{
			Global_1297182.f_3.f_2[iVar4 /*4*/] = { Var0 };
			Global_1297182.f_3.f_1 = (Global_1297182.f_3.f_1 - 1);
		}
		iVar4++;
	}
}

void func_61()
{
	struct<2> Var0;
	int iVar2;

	if (Global_1297182.f_3.f_131 == 0)
	{
		Global_1297182.f_3.f_131 = MISC::GET_GAME_TIMER();
		return;
	}
	else if ((MISC::GET_GAME_TIMER() - Global_1297182.f_3.f_131) < 2000)
	{
		return;
	}
	Global_1297182.f_3.f_131 = 0;
	Var0 = 255;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (((Global_1297182.f_3.f_132[iVar2 /*2*/] != 255 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1297182.f_3.f_132[iVar2 /*2*/])) || (Global_1297182.f_3.f_132[iVar2 /*2*/].f_1 != 0 && (MISC::GET_SYSTEM_TIME() - Global_1297182.f_3.f_132[iVar2 /*2*/].f_1) >= 120000)) || func_155(iVar2))
		{
			Global_1297182.f_3.f_132[iVar2 /*2*/] = { Var0 };
		}
		iVar2++;
	}
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_22();
	iVar2 = func_64(iVar1, 1);
	if (func_44(iVar0) != 3)
	{
		func_156(iVar2);
		func_72(iVar0);
		func_144(32);
	}
	else if (!func_50(PLAYER::PLAYER_ID(), 32))
	{
		func_17(0, 0);
	}
}

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_22();
	iVar2 = func_64(iVar1, 1);
	if (func_44(iVar0) != 3)
	{
		func_156(iVar2);
		func_72(iVar0);
	}
	else if (func_53(8) && func_44(iVar0) != 4)
	{
		func_17(0, 0);
	}
}

int func_64(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1297553[iParam0 /*87*/].f_5.f_12;
}

float func_65(int iParam0)
{
	return Global_1297394.f_6.f_17[iParam0];
}

void func_66(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_44(iVar0);
	if (func_53(128))
	{
		if (iVar1 != 3)
		{
			func_72(0);
			func_21(1);
		}
		return;
	}
	if (Global_1297394.f_66 != -1 && func_64(PLAYER::PLAYER_ID(), 0) == Global_1297394.f_66)
	{
		if (iVar1 != 3)
		{
			if (fParam0 > 1117782016)
			{
				return;
			}
			if (func_68())
			{
				return;
			}
			if (func_69())
			{
				return;
			}
			func_72(0);
			func_21(1);
		}
		else if (func_65(Global_1297394.f_66) > 1120403456)
		{
			func_17(0, 0);
		}
	}
	else
	{
		if (iVar1 != 3)
		{
			return;
		}
		if (func_50(PLAYER::PLAYER_ID(), 1))
		{
			return;
		}
		func_17(0, 0);
	}
}

void func_67(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	if (!func_50(PLAYER::PLAYER_ID(), 8))
	{
		if (func_44(iVar0) != 3)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			{
				if (func_50(PLAYER::PLAYER_ID(), 4) && func_50(iParam0, 2))
				{
					if (func_64(func_22(), 1) == -1)
					{
						return;
					}
					func_19(iParam0);
					func_72(0);
					func_21(2);
					func_156(Global_1297553[iParam0 /*87*/].f_5.f_12);
					func_144(8);
					func_71(4);
					return;
				}
				else if (((((func_64(iParam0, 1) == Global_1297394.f_66 && fParam1 <= 1117782016) && !func_68()) && !func_69()) && !func_157()) || func_53(128))
				{
					func_72(0);
					func_21(1);
				}
			}
		}
		else
		{
			if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && func_50(iParam0, 2)) && func_50(PLAYER::PLAYER_ID(), 4))
			{
				if (Global_1297182.f_1 == 3)
				{
					return;
				}
				else if (Global_1297182.f_1 != 2)
				{
					func_21(2);
					func_144(8);
					func_71(4);
					return;
				}
			}
			if ((fParam1 > 1120403456 && (Global_1297182.f_1 == 1 || Global_1297182.f_1 == 0)) && !func_50(PLAYER::PLAYER_ID(), 1))
			{
				func_17(0, 0);
			}
		}
	}
	else
	{
		if ((func_44(iVar0) == 3 && fParam1 > 1120403456) && (Global_1297182.f_1 == 1 || Global_1297182.f_1 == 0))
		{
			func_17(0, 0);
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && !func_50(iParam0, 2))
		{
			func_71(8);
			func_71(16);
			func_21(1);
		}
	}
}

bool func_68()
{
	return Global_263042[Global_1295619 /*65*/] > 2;
}

bool func_69()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_5)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_158(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_70(int iParam0)
{
	func_159(&(Global_1297394.f_157), iParam0);
}

void func_71(int iParam0)
{
	func_159(&(Global_1297553[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

bool func_72(int iParam0)
{
	if (func_43(iParam0))
	{
		if (!MISC::IS_BIT_SET(Global_1297182.f_201, iParam0))
		{
			MISC::SET_BIT(&(Global_1297182.f_201), iParam0);
		}
		else
		{
			return func_44(iParam0) == 3;
		}
	}
	return false;
}

bool func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar1 = func_51(PLAYER::PLAYER_ID(), 1);
	iVar2 = func_64(PLAYER::PLAYER_ID(), 1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_160(PLAYER::INT_TO_PLAYERINDEX(iVar0), &iVar4, &iVar3, 1))
		{
			if (iVar4 == iVar2 && iVar3 == iVar1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_74(int iParam0)
{
	if (func_43(iParam0))
	{
		return MISC::IS_BIT_SET(Global_1297182.f_201, iParam0);
	}
	return false;
}

void func_75(int iParam0, var uParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (!func_161(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = true;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_22()))
	{
		bVar0 = true;
	}
	switch (uParam1->f_3)
	{
		case 0:
			if (bParam2 && !bVar0)
			{
				func_35(iParam0, uParam1, 1);
			}
			break;
		case 1:
			if (bParam2 && !bVar0)
			{
				if (func_162(iParam0))
				{
					func_35(iParam0, uParam1, 2);
				}
			}
			else
			{
				func_163(iParam0);
				func_35(iParam0, uParam1, 0);
			}
			break;
		case 2:
			if (bParam2 && !bVar0)
			{
				if (func_164(iParam0, uParam1))
				{
					func_163(iParam0);
					func_35(iParam0, uParam1, 3);
				}
			}
			else
			{
				func_163(iParam0);
				func_35(iParam0, uParam1, 0);
			}
			break;
		case 3:
			if ((bVar0 || !bParam2) || !SCRIPTS::DOES_THREAD_EXIST(*uParam1))
			{
				if (func_34(iParam0, uParam1))
				{
					func_35(iParam0, uParam1, 0);
				}
				else
				{
					func_35(iParam0, uParam1, 4);
				}
			}
			break;
		case 4:
			if (func_34(iParam0, uParam1))
			{
				func_35(iParam0, uParam1, 0);
			}
			break;
	}
}

void func_76(bool bParam0)
{
	if (bParam0)
	{
		func_165(1);
	}
	func_165(0);
	MISC::SET_BIT(&(Global_1958621.f_1), 0);
}

void func_77()
{
	Global_1896762.f_325.f_5 = 1;
}

void func_78()
{
	struct<12> Var0;
	int iVar14;
	int iVar15;

	if (Global_1297015.f_32 == 0)
	{
		Global_1297015.f_32 = MISC::GET_SYSTEM_TIME();
	}
	else if ((MISC::GET_SYSTEM_TIME() - Global_1297015.f_32) > 2000)
	{
		Global_1297015.f_32 = MISC::GET_SYSTEM_TIME();
	}
	else
	{
		return;
	}
	if (!func_128(&(Global_1297394.f_62)))
	{
		func_166(0);
		func_167(0);
		return;
	}
	Var0.f_9 = -5.45926E-19f;
	if (func_168(Global_1297394.f_62, 0.1173447f, &Var0, 0, 1))
	{
		func_166(Var0.f_11);
	}
	else
	{
		func_166(0);
	}
	if (func_168(Global_1297394.f_62, 49.24386f, &Var0, 0, 1))
	{
		func_167(Var0.f_11);
	}
	else
	{
		func_167(0);
	}
	iVar14 = func_169();
	func_170(iVar14);
	iVar15 = func_85(Global_1295619.f_149[Global_1295619]);
	if (((((iVar15 == 4 || iVar15 == 5) || iVar15 == 6) || iVar15 == 7) || iVar15 == 8) || iVar15 == 10)
	{
		func_171();
	}
	if (func_50(PLAYER::PLAYER_ID(), 4096))
	{
		func_103();
		func_104(Global_1297015.f_9.f_1, 0);
		func_71(4096);
	}
}

void func_79()
{
	int iVar0;

	iVar0 = func_85(Global_1295619.f_149[Global_1295619]);
	if (iVar0 == 10)
	{
		return;
	}
	if (iVar0 <= 0)
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
	{
		return;
	}
	if (GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
	{
		return;
	}
	if (func_64(Global_1295619.f_149[Global_1295619], 1) != -1)
	{
		func_172(898, 1);
	}
	func_91(10);
}

void func_80()
{
	int iVar0;

	iVar0 = func_85(Global_1295619.f_149[Global_1295619]);
	if (func_96(Global_1295619, 16))
	{
		if (func_96(Global_1295619, 32))
		{
			Global_1297015.f_8 = 1142292480; /* Float: 600f */
			Global_1297015.f_33++;
			func_173(&(Global_1297015.f_5), 1);
			func_112(32);
			func_112(64);
		}
		if (iVar0 != 4 && iVar0 != 6)
		{
			func_112(16);
		}
	}
	else if (iVar0 == 4 || iVar0 == 6)
	{
		func_97(16);
	}
	if (!func_96(Global_1295619, 64))
	{
		if (func_106(&(Global_1297015.f_5)) > Global_1297015.f_8)
		{
			func_110(&(Global_1297015.f_5));
			func_97(64);
		}
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_20))
	{
		return;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	iVar3 = Global_1297553[iVar1 /*87*/].f_19.f_15;
	iVar4 = Global_1297553[iVar1 /*87*/].f_19.f_16;
	iVar5 = Global_1297553[Global_1295619 /*87*/].f_19.f_17;
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_21))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297015.f_21, iVar3);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_24))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297015.f_24, iVar4);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_23))
	{
		iVar2 = func_174(iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297015.f_23, iVar2);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_26))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297015.f_26, 100);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_27))
	{
		iVar6 = func_175(iVar5);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297015.f_27, iVar6);
	}
	if (func_109())
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_29))
		{
			iVar7 = BUILTIN::FLOOR(func_106(&(Global_1297015.f_5)));
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1297015.f_29, iVar7);
		}
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_28))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1297015.f_28, false);
		}
	}
	else if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_28))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1297015.f_28, true);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_31))
	{
		if (func_96(iVar0, 262144))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1297015.f_31, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1297015.f_31, false);
		}
	}
}

void func_82()
{
	if (func_176() && func_177(Global_33, Global_1051832.f_92[33 /*75*/].f_25, 1, 0))
	{
		if (!func_96(Global_1295619, 8192))
		{
			HUD::_ENABLE_HUD_CONTEXT(6.193186E-19f);
			func_97(8192);
		}
	}
	else if (func_96(Global_1295619, 8192))
	{
		HUD::_DISABLE_HUD_CONTEXT(6.193186E-19f);
		func_112(8192);
	}
}

void func_83()
{
	char* sVar0;

	if (Global_1297553[Global_1295619 /*87*/].f_5[3] > 0)
	{
		if (!func_178(897))
		{
			if (func_96(Global_1295619, 524288) && func_177(Global_33, Global_1297553[Global_1295619 /*87*/].f_19.f_22, 1, 0))
			{
				sVar0 = func_179(Global_1297553[Global_1295619 /*87*/].f_19.f_20);
				func_180(897, sVar0, 0);
			}
		}
	}
}

void func_84()
{
	if (func_90(1))
	{
		if (!func_178(899))
		{
			if (func_177(Global_33, Global_1297553[Global_1295619 /*87*/].f_19.f_22, 1, 0))
			{
				func_172(899, 0);
			}
		}
	}
}

int func_85(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return iVar0;
	}
	return Global_1297015;
}

void func_86()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = Global_1297553[Global_1295619 /*87*/].f_19.f_15;
	iVar2 = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(3.112906E-09f, 0.1173447f);
	iVar3 = Global_1297553[Global_1295619 /*87*/].f_19.f_16;
	iVar4 = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(-1.787514E+19f, 49.24386f);
	iVar5 = Global_1297553[Global_1295619 /*87*/].f_19.f_17;
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_20))
	{
		Global_1297015.f_20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Moonshine_ProgressBars");
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_21))
	{
		Global_1297015.f_21 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297015.f_20, "MoonshineMashValue", iVar1);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_22))
	{
		Global_1297015.f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297015.f_20, "MoonshineMashMaximum", iVar2);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_23))
	{
		iVar7 = func_174(iVar0);
		Global_1297015.f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297015.f_20, "MoonshineMashColorID", iVar7);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_24))
	{
		Global_1297015.f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297015.f_20, "MoonshineBottlesValue", iVar3);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_25))
	{
		Global_1297015.f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297015.f_20, "MoonshineBottlesMaximum", iVar4);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_26))
	{
		Global_1297015.f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297015.f_20, "MoonshineBottlesThresholdValue", 100);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_27))
	{
		iVar6 = func_175(iVar5);
		Global_1297015.f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297015.f_20, "MoonshineFlavor", iVar6);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_28))
	{
		Global_1297015.f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1297015.f_20, "MoonshineFlavorTimeMeterShowLabel", false);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_29))
	{
		Global_1297015.f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297015.f_20, "FlavoringTimeMeterValue", 0);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_30))
	{
		Global_1297015.f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1297015.f_20, "FlavoringTimeMeterMaximum", 600);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1297015.f_31))
	{
		Global_1297015.f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1297015.f_20, "MoonshineShowCash", false);
	}
}

void func_87()
{
	int iVar0;

	iVar0 = func_169();
	if (iVar0 != 0)
	{
		func_97(64);
	}
	Global_1297015.f_33 = 0;
}

void func_88()
{
	int iVar0;
	int iVar1;

	iVar0 = func_181();
	iVar1 = func_182();
	if (iVar0 == 3.112906E-09f || iVar1 == -1.787514E+19f)
	{
		func_183(3.112906E-09f);
		func_97(1024);
	}
	else if (iVar0 == -2.142218E+09f || iVar1 == 6.166539E+16f)
	{
		func_183(-2.142218E+09f);
		func_97(2048);
	}
	else if (iVar0 == 2.180447E+07f || iVar1 == 1.255573E+28f)
	{
		func_183(1.255573E+28f);
		func_97(4096);
	}
}

void func_89()
{
	if (Global_1297553[Global_1295619 /*87*/].f_19.f_16 == 20)
	{
		func_97(524288);
	}
}

bool func_90(bool bParam0)
{
	if (bParam0)
	{
		return func_140(Global_1297394.f_157, 3.85186E-34f);
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(-2.345347E+27f) && func_128(&(Global_1297394.f_62)))
	{
		return true;
	}
	return false;
}

void func_91(int iParam0)
{
	Global_1297015 = iParam0;
}

void func_92(var uParam0, int iParam1)
{
	func_184(uParam0, iParam1);
}

bool func_93(float fParam0)
{
	struct<12> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_168(Global_1297394.f_62, 49.24386f, &Var0, 0, 1))
	{
		if (IntToFloat(Var0.f_11) >= (fParam0 * BUILTIN::TO_FLOAT(INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(Var0.f_4, 49.24386f))))
		{
			return true;
		}
	}
	return false;
}

bool func_94()
{
	int iVar0;

	if (!func_128(&(Global_1297394.f_62)))
	{
		return false;
	}
	iVar0 = func_129(Global_1297394.f_62, 0.1173447f, 0, 1);
	if ((iVar0 == 3.112906E-09f || iVar0 == -2.142218E+09f) || iVar0 == 2.180447E+07f)
	{
		return true;
	}
	return false;
}

void func_95()
{
	func_112(256);
	func_97(4);
	func_185();
	Global_1297015.f_33 = 0;
	Global_1297553[Global_1295619 /*87*/].f_19.f_18 = 0;
	Global_1297553[Global_1295619 /*87*/].f_19.f_20 = 0;
}

bool func_96(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_140(Global_1297553[iParam0 /*87*/].f_19, iParam1);
}

void func_97(int iParam0)
{
	if (!func_140(Global_1297553[Global_1295619 /*87*/].f_19, iParam0))
	{
		func_92(&(Global_1297553[Global_1295619 /*87*/].f_19), iParam0);
	}
}

int func_98(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1297553[iVar0 /*87*/].f_19.f_15;
}

int func_99(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1297553[iVar0 /*87*/].f_19.f_16;
}

void func_100()
{
	struct<12> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_168(Global_1297394.f_62, 0.1173447f, &Var0, 0, 1))
	{
		return;
	}
	if (func_168(Global_1297394.f_62, 49.24386f, &Var0, 0, 1))
	{
		func_186(Var0.f_4, Var0.f_11, 9.275179E-19f, 1, 1);
	}
}

bool func_101()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<12> Var5;
	struct<12> Var23;

	if (func_108(&(Global_1297015.f_9)))
	{
		return false;
	}
	bVar0 = func_187();
	if (!func_188(bVar0, 0))
	{
		return false;
	}
	if (!func_128(&(Global_1297394.f_62)))
	{
		return false;
	}
	if (func_189(&(Global_1297394.f_62), 0.1173447f, 1) > 0)
	{
		return false;
	}
	else if (func_189(&(Global_1297394.f_62), 49.24386f, 1) > 0)
	{
		return false;
	}
	bVar1 = false;
	iVar2 = 0;
	iVar3 = func_190(bVar0, 0, 1, -1, 1);
	iVar4 = func_191(bVar0, iVar3, 1, 0, 1, 0);
	if (func_192(bVar0, &bVar1, &iVar2, 0) && func_193(bVar1, iVar2, 0, 1) < iVar4)
	{
		Var5.f_9 = 1;
		Var5.f_11 = -5.45926E-19f;
		if (!func_194(&(Global_1297015.f_9), bVar1, &Var5, 1, iVar2, -1, 0))
		{
			return false;
		}
		Global_1297015.f_19 = func_193(bVar1, iVar2, 0, 1);
		return true;
	}
	Var23.f_9 = 1;
	Var23.f_11 = -5.45926E-19f;
	if (!func_195(&(Global_1297015.f_9), bVar0, Global_1297394.f_62, 0.1173447f, 1, &Var23, 1, iVar3, -1, 1))
	{
		return false;
	}
	Global_1297015.f_19 = iVar4;
	return true;
}

int func_102(int* iParam0)
{
	return func_196(iParam0->f_1);
}

void func_103()
{
	int iVar0;

	iVar0 = func_181();
	Global_1297553[Global_1295619 /*87*/].f_19.f_19 = iVar0;
}

void func_104(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	float fVar12;
	var uVar13;
	var uVar14;

	func_197(iParam0, &uVar0);
	iVar4 = Global_1297553[Global_1295619 /*87*/].f_5.f_12;
	fVar5 = func_198(iVar4);
	if (bParam1)
	{
		fVar6 = 7.50474E+16f;
	}
	else
	{
		fVar6 = 1.282877E-12f;
	}
	if (bParam1)
	{
		uVar7 = Global_1297015.f_19;
	}
	uVar8 = Global_1297553[Global_1295619 /*87*/].f_19.f_19;
	uVar9 = Global_1297553[Global_1295619 /*87*/].f_19.f_17;
	uVar10 = Global_1297553[Global_1295619 /*87*/].f_19.f_18;
	uVar11 = Global_1297015.f_33;
	fVar12 = func_199();
	uVar13 = Global_1297553[Global_1295619 /*87*/].f_19.f_16;
	uVar14 = Global_1297553[Global_1295619 /*87*/].f_5[0];
	TELEMETRY::_TELEMETRY_MOONSHINE_BREW(&uVar0, fVar5, fVar6, uVar7, uVar8, uVar9, uVar10, uVar11, fVar12, uVar13, uVar14);
}

void func_105()
{
	if (!func_96(Global_1295619, 4))
	{
		func_88();
		func_97(4);
	}
}

float func_106(var uParam0)
{
	if (!func_200(uParam0))
	{
		return 0f;
	}
	return (BUILTIN::TO_FLOAT(func_201(uParam0)) * 981668463);
}

bool func_107()
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;

	if (func_108(&(Global_1297015.f_9)))
	{
		return false;
	}
	if (!func_128(&(Global_1297394.f_62)))
	{
		return false;
	}
	iVar0 = func_129(Global_1297394.f_62, 0.1173447f, 0, 1);
	bVar1 = false;
	if (iVar0 == 2.180447E+07f)
	{
		bVar1 = 1.255573E+28f;
	}
	else if (iVar0 == -2.142218E+09f)
	{
		bVar1 = 6.166539E+16f;
	}
	else if (iVar0 == 3.112906E-09f)
	{
		bVar1 = -1.787514E+19f;
	}
	else
	{
		bVar1 = -1.787514E+19f;
	}
	Var2.f_9 = 1;
	Var2.f_11 = -5.45926E-19f;
	if (func_195(&(Global_1297015.f_9), bVar1, Global_1297394.f_62, 49.24386f, 1, &Var2, 1, -1.926391E+21f, -1, 1))
	{
		return true;
	}
	return false;
}

bool func_108(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_102(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_109()
{
	if (func_200(&(Global_1297015.f_5)))
	{
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_111(var uParam0)
{
	func_202(uParam0, 0);
}

void func_112(int iParam0)
{
	if (func_140(Global_1297553[Global_1295619 /*87*/].f_19, iParam0))
	{
		func_159(&(Global_1297553[Global_1295619 /*87*/].f_19), iParam0);
	}
}

void func_113()
{
	bool bVar0;

	bVar0 = func_169();
	if (func_203(bVar0, 1.14802E+11f))
	{
		func_205(func_204(-1.073421E-07f, -8.312081E+23f), 1);
	}
	else if (func_203(bVar0, -2.358938E+13f))
	{
		func_205(func_204(-1.073421E-07f, -1.669962E+07f), 1);
	}
	else if (func_203(bVar0, 0.0001233087f))
	{
		func_205(func_204(-1.073421E-07f, -2.013867E+35f), 1);
	}
}

void func_114()
{
	struct<22> Var0;

	if (!func_206())
	{
		return;
	}
	Var0.f_8 = 27.64779f;
	Var0.f_11 = 27.64779f;
	Var0.f_12 = 8000;
	Var0.f_13 = 1.051843E+16f;
	Var0.f_15 = 1.608566E+13f;
	Var0.f_21 = 1;
	Var0 = 5;
	Var0.f_2 = MISC::VAR_STRING(2, "MOONSHINE_TITLE");
	Var0.f_3 = MISC::VAR_STRING(2, "MOONSHINE_PRODUCTION_COMPLETE");
	Var0.f_7 = 1.615834E+10f;
	Var0.f_6 = -4.185603E-24f;
	Var0.f_8 = 27.64779f;
	Var0.f_4 = "MOONSHINE_HOLD_INPUT_FOR_CAMP";
	Var0.f_18 = 0;
	Var0.f_17 = 0;
	Var0.f_13 = 1.344289E+37f;
	Var0.f_16 = 0;
	Var0.f_14 = 0;
	func_207(&Var0);
}

void func_115()
{
	Global_1297015.f_4 = 0f;
	func_110(&(Global_1297015.f_1));
	func_110(&(Global_1297015.f_5));
	func_112(32);
	func_112(2048);
	func_112(1024);
	func_112(4096);
	func_112(64);
	func_112(128);
	func_112(2);
	func_112(512);
	func_112(65536);
}

bool func_116()
{
	if (func_98(Global_1295619.f_5) == 0 && func_99(Global_1295619.f_5) == 0)
	{
		return true;
	}
	return false;
}

bool func_117(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_118(iParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_118(int iParam0, int iParam1)
{
	return (Global_1051832.f_92[iParam0 /*75*/].f_49 && iParam1) != 0;
}

bool func_119(int iParam0, float fParam1)
{
	return (Global_1051832.f_92[iParam0 /*75*/].f_1 && fParam1) != 0;
}

void func_120(int iParam0, float fParam1)
{
	if (func_119(iParam0, fParam1))
	{
	}
	Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && fParam1));
}

var func_121(int iParam0)
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

void func_122(int iParam0)
{
	if (func_208(iParam0) && func_209())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_123(int iParam0)
{
}

void func_124(int iParam0)
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
}

bool func_125(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_210(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Global_1051832.f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051832.f_41)
	{
		if (iParam0 == Global_1051832[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051832.f_41 = (Global_1051832.f_41 - 1);
	if (Global_1051832.f_41 < 0)
	{
		Global_1051832.f_41 = 0;
	}
	Global_1051832[iVar1] = Global_1051832[Global_1051832.f_41];
}

void func_127()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;

	iVar0 = func_64(PLAYER::GET_PLAYER_INDEX(), 1);
	iVar1 = -1;
	iVar4 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_8632.f_1);
	iVar5 = 0;
	iVar6 = -1;
	iVar8 = func_211();
	iVar9 = func_212();
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		iVar6 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_1556.f_8632.f_274[iVar5]);
		iVar1 = iVar6;
		bVar2 = func_213(iVar1);
		iVar3 = func_190(bVar2, 0, 1, -1, 1);
		bVar7 = func_214(bVar2, 1, iVar3, 0);
		if (iVar8 && iVar9)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_8, -6.803155E+08f);
		}
		else if (func_215(iVar3))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_8, -2.512381E+16f);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_8, 5.425547E+13f);
		}
		if (iVar0 != -1)
		{
			if (iVar0 == iVar1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_22, true);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_10, false);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_22, false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_10, bVar7);
			}
		}
		iVar5++;
	}
}

bool func_128(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_129(struct<4> Param0, float fParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_168(Param0, fParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -2.097883E-16f;
		case 2:
			return -2.718455E-10f;
		case 3:
			return -3.637621E+12f;
		case 4:
			return 3.077226E+22f;
		case 5:
			return -11903.19f;
		case 6:
			return 1.334234E-15f;
		case 7:
			return 1.464907E-27f;
		case 8:
			return 3.545345E+37f;
		case 9:
			return 4.410467E+27f;
		default:
			break;
	}
	return 0;
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -4.386831E+18f;
				case 1:
					return -7.890581E+31f;
				case 2:
					return -1.082204E-20f;
				case 3:
					return -1.844202E+19f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -9.193918E+26f;
				case 1:
					return 1.652573E+07f;
				case 2:
					return -4.584958E-10f;
				case 3:
					return -1.308009E+30f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1.522398E-23f;
				case 1:
					return 6.000514E+18f;
				case 2:
					return 6.5686E+09f;
				case 3:
					return -1.29502E+29f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 2.903373E-11f;
				case 1:
					return -1.255973E+22f;
				case 2:
					return -3.492436E+24f;
				case 3:
					return -4.323653E-06f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1.590671E-35f;
				case 1:
					return -0.005893386f;
				case 2:
					return 8.095878E-36f;
				case 3:
					return 5.308375E-24f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -6.491092E+22f;
				case 1:
					return -3.39337E-34f;
				case 2:
					return -2.827399E+13f;
				case 3:
					return 2.786047E+38f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -0.003760975f;
				case 1:
					return 2.548126E-24f;
				case 2:
					return -1.797413E+11f;
				case 3:
					return -1.161223E+24f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1.154749E-17f;
				case 1:
					return 3.23344E-24f;
				case 2:
					return -5.209391E+29f;
				case 3:
					return 3.148779E+16f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -1.741973E+17f;
				case 1:
					return 1.418071E+25f;
				case 2:
					return -2.259112E-30f;
				case 3:
					return 8.278385E-06f;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_132(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_216(&uParam0, iParam4, bParam5, iParam6);
}

int func_133()
{
	if (func_128(&(Global_1297394.f_62)))
	{
		if (func_217(-2.260494E-34f, &(Global_1297394.f_62), 3.418802E-35f, 1, 0))
		{
			return 3;
		}
		else if (func_217(1529875f, &(Global_1297394.f_62), 3.418802E-35f, 1, 0))
		{
			return 3;
		}
		else if (func_217(-9.072185E-10f, &(Global_1297394.f_62), 3.418802E-35f, 1, 0))
		{
			return 3;
		}
	}
	return 0;
}

int func_134()
{
	if (func_128(&(Global_1297394.f_62)))
	{
		if (func_217(-1.252478E-19f, &(Global_1297394.f_62), 3.418802E-35f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135()
{
	if (func_128(&(Global_1297394.f_62)))
	{
		if (func_217(-1.089572E+15f, &(Global_1297394.f_62), 3.418802E-35f, 1, 0))
		{
			return 2;
		}
		else if (func_217(-54555.18f, &(Global_1297394.f_62), 3.418802E-35f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_136()
{
	if (func_128(&(Global_1297394.f_62)))
	{
		switch (func_132(Global_1297394.f_62, -4.70781E-18f, 1, -1))
		{
			case 1612330162:
				return 1;
			case -1832936964:
				return 2;
			case -998343303:
				return 3;
			case -126163595:
				return 4;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_05"):
				return 5;
			case -589877714:
				return 6;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_07"):
				return 7;
			case -147791143:
				return 8;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_09"):
				return 9;
			case -361084332:
				return 10;
			case -1779654346:
				return 11;
			case -535382643:
				return 12;
			case joaat("UPGRADE_MOONSHINER_BAR_PHOTO_13"):
				return 13;
			case 275125803:
				return 14;
			case 713312871:
				return 15;
			case -1589105439:
				return 16;
			case -1267969239:
				return 17;
			default:
				break;
		}
	}
	return 0;
}

int func_137(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	Global_1297553[PLAYER::PLAYER_ID() /*87*/].f_5[iParam0] = iParam1;
	return 1;
}

bool func_138()
{
	if (!func_218())
	{
		return false;
	}
	return func_140(Global_1901671.f_45.f_5, 8);
}

void func_139()
{
	if (!func_74(1))
	{
		return;
	}
	Global_1297394.f_44 = 1;
}

bool func_140(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_141(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_142()
{
	int iVar0;

	if (Global_1297394.f_156 == 0)
	{
		Global_1297394.f_156 = MISC::GET_SYSTEM_TIME();
	}
	else if ((MISC::GET_SYSTEM_TIME() - Global_1297394.f_156) > 1000)
	{
		Global_1297394.f_156 = MISC::GET_SYSTEM_TIME();
	}
	else
	{
		return func_140(Global_1297394.f_157, 256);
	}
	if (func_219())
	{
		func_92(&(Global_1297394.f_157), 256);
		return true;
	}
	if (func_220(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_92(&(Global_1297394.f_157), 256);
		return true;
	}
	if (!Global_1297015.f_44)
	{
		func_92(&(Global_1297394.f_157), 256);
		return true;
	}
	if (func_158(func_221(0)))
	{
		func_92(&(Global_1297394.f_157), 256);
		return true;
	}
	if (func_222(0))
	{
		func_92(&(Global_1297394.f_157), 256);
		return true;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		func_92(&(Global_1297394.f_157), 256);
		return true;
	}
	iVar0 = func_223(1.038497E+13f, PLAYER::PLAYER_ID(), 0, 1);
	if (func_224(iVar0))
	{
		func_92(&(Global_1297394.f_157), 256);
		return true;
	}
	if (func_157())
	{
		func_92(&(Global_1297394.f_157), 256);
		return true;
	}
	func_159(&(Global_1297394.f_157), 256);
	return false;
}

bool func_143()
{
	return Global_1072759.f_7;
}

void func_144(int iParam0)
{
	func_92(&(Global_1297553[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

bool func_145(int iParam0)
{
	return func_225(1, iParam0);
}

int func_146(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar5;
	int iVar6;
	char* sVar7;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_226(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar5 = func_227(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar5);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_228(iParam1, iParam2, 0);
						return 1;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1)))
					{
						func_228(iParam1, iParam2, 3);
					}
					else
					{
						func_228(iParam1, iParam2, 4);
					}
					func_229(iParam1, iParam2, iVar1);
					break;
				case 3:
					iVar1 = func_230(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_228(iParam1, iParam2, 0);
						return 1;
					}
					iVar6 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar6)
					{
						case 0:
							func_228(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_228(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_230(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_228(iParam1, iParam2, 0);
						return 1;
					}
					sVar7 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar7))
					{
						return 3;
					}
					func_228(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_230(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_228(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_147(int iParam0)
{
	struct<4> Var0;

	Var0.f_3 = 0;
	Var0.f_1 = 1;
	Var0 = 2;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Var0.f_2), iParam0);
	func_231(&Var0);
}

void func_148(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_149(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_150(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam2 == -1)
		{
			return 5.316992E+14f;
		}
		else
		{
			return 4.279651E-16f;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 4.279651E-16f;
	}
	iVar2 = iParam0;
	if (func_232(func_221(0)) && func_233(func_221(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(Global_3145858.f_6[iVar4], iVar5);
	}
	if (Global_1072759.f_21353.f_1[iVar2 /*8*/].f_5 != 0)
	{
		return Global_1072759.f_21353.f_1[iVar2 /*8*/].f_5;
	}
	if (bParam3 && Global_1072759.f_21353.f_1[iVar2 /*8*/].f_6 != 0)
	{
		return Global_1072759.f_21353.f_1[iVar2 /*8*/].f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_234(iParam0);
			if (iVar6 == -64.26542f && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return 27.64779f;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_235(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_140(Global_1072759.f_21353.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return -4.19002E+20f;
	}
	iVar7 = func_236(iParam0, 1);
	if (!bVar0)
	{
		if (func_237(iParam0, bParam1))
		{
			return func_235(iParam0);
		}
		else if (func_238(iParam0, bParam1))
		{
			if (func_239(iParam0, bParam1))
			{
				return 4.709691E+29f;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -1.403075E+23f;
				}
				else if (iVar7 > 3)
				{
					return -1.403075E+23f;
				}
				else if (iVar7 > 1)
				{
					return 80048.15f;
				}
				return 1.150299E-36f;
			}
		}
	}
	else if (bVar1)
	{
		return func_234(iParam0);
	}
	else if (func_237(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return 27.64779f;
		}
		else if (func_241(func_240(func_221(0)), 1) == 9.256025E-25f)
		{
			return func_235(iParam0);
		}
		else
		{
			return func_235(iParam0);
		}
	}
	else if (func_238(iParam0, bParam1))
	{
		return 4.709691E+29f;
	}
	return 3.737303E-09f;
}

char* func_151(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_242(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_152(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_243();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_25);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1940239.f_245.f_1308++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940239.f_245.f_1308, 64);
	func_244(&(Global_1940239.f_245.f_14[iVar0 /*43*/]), Global_1940239.f_245.f_4, cVar3, Param0);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_39 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(88), Global_1940239.f_245.f_1308);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_41 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(89), true);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_42 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(90), false);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(78), Param0.f_32);
	if (Param0.f_32)
	{
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(76), Param0.f_31);
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(79), Param0.f_30);
	}
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(91), Param0.f_26);
	bVar15 = false;
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940239.f_245.f_14[iVar0 /*43*/], 1.46912E-13f, bVar15);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(53), Param0.f_27);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(54), Param0.f_27.f_1);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(92), Param0.f_27.f_2);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(93), iVar2);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(94), Param0.f_24);
	func_246(Global_1940239.f_245.f_1306 + 1);
	if (Global_1940239.f_245.f_1308 == NaNf)
	{
		Global_1940239.f_245.f_1308 = 0;
	}
	if (func_247(Param0.f_26))
	{
		Param0.f_33 = 5;
		Param0.f_33.f_1 = 1;
		Param0.f_33.f_13 = 5.395881E-11f;
		Param0.f_33.f_14 = Global_1940239.f_245.f_14[iVar0 /*43*/];
		iVar16 = func_207(&(Param0.f_33));
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_40 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_245(95), iVar16);
	}
	iVar17 = func_248();
	if (iVar17 == 0 || Param0.f_24 == iVar17)
	{
		Global_1940239.f_245.f_1307++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_245.f_5, 0, "pm_invite_item", Global_1940239.f_245.f_14[iVar0 /*43*/]);
	}
	return Global_1940239.f_245.f_14[iVar0 /*43*/];
}

bool func_153(int iParam0, int iParam1)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1297182.f_3.f_2[iVar0 /*4*/] == iParam1)
		{
			Global_1297182.f_3.f_2[iVar0 /*4*/].f_1 = iParam0;
			func_148(&(Global_1297182.f_3.f_2[iVar0 /*4*/].f_3), 4);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_154()
{
	struct<4> Var0;
	int iVar4;

	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= (Global_1297182.f_3.f_2 - 1))
	{
		Global_1297182.f_3.f_2[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
	Global_1297182.f_3.f_1 = 0;
	Global_1297182.f_3 = 0;
}

bool func_155(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1297182.f_3.f_132[iParam0 /*2*/]) && func_249(Global_1297182.f_3.f_132[iParam0 /*2*/]))
	{
		return true;
	}
	return false;
}

void func_156(int iParam0)
{
	Global_1297394.f_66 = iParam0;
}

bool func_157()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_158(struct<2> Param0)
{
	if (!func_250(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_251(Param0))
	{
		return false;
	}
	return true;
}

void func_159(var uParam0, int iParam1)
{
	func_252(uParam0, iParam1);
}

bool func_160(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (Global_1297553[iVar0 /*87*/].f_1 == -1)
	{
		return false;
	}
	*uParam1 = Global_1297553[iVar0 /*87*/].f_1;
	*uParam2 = Global_1297553[iVar0 /*87*/].f_3;
	return true;
}

bool func_161(int iParam0, bool bParam1)
{
	return func_51(iParam0, bParam1) != -1;
}

bool func_162(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = func_253(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar0))
	{
		return false;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sVar0))
	{
		return false;
	}
	iVar1 = Global_1297182.f_201.f_1[iParam0 /*4*/].f_2;
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar0, iVar1, true, 0))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	iVar2 = func_255(func_254(iParam0));
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iVar2) <= 0)
	{
		return false;
	}
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		return false;
	}
	return true;
}

void func_163(int iParam0)
{
	char* sVar0;

	sVar0 = func_253(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar0))
	{
		return;
	}
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
}

bool func_164(int iParam0, var uParam1)
{
	func_256(iParam0, uParam1);
	if (SCRIPTS::DOES_THREAD_EXIST(*uParam1))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_253(iParam0));
		return true;
	}
	return false;
}

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_257(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

void func_166(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901671.f_812.f_5)
	{
		iParam0 = Global_1901671.f_812.f_5;
	}
	if (Global_1297553[Global_1295619 /*87*/].f_19.f_15 != iParam0)
	{
		Global_1297553[Global_1295619 /*87*/].f_19.f_15 = iParam0;
	}
}

void func_167(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (Global_1297553[Global_1295619 /*87*/].f_19.f_16 != iParam0)
	{
		Global_1297553[Global_1295619 /*87*/].f_19.f_16 = iParam0;
	}
}

bool func_168(var uParam0, float fParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_258(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_169()
{
	int iVar0;

	if (!func_128(&(Global_1297394.f_62)))
	{
		return 0;
	}
	iVar0 = func_129(Global_1297394.f_62, -1.533738E+29f, 0, 1);
	return iVar0;
}

void func_170(int iParam0)
{
	if (iParam0 != 0 && Global_1297553[Global_1295619 /*87*/].f_19.f_17 != iParam0)
	{
		Global_1297553[Global_1295619 /*87*/].f_19.f_18 = Global_1297553[Global_1295619 /*87*/].f_19.f_17;
	}
	if (Global_1297553[Global_1295619 /*87*/].f_19.f_17 != iParam0)
	{
		Global_1297553[Global_1295619 /*87*/].f_19.f_17 = iParam0;
		func_97(1048576);
	}
	if ((iParam0 != 0 && iParam0 != Global_1297553[Global_1295619 /*87*/].f_19.f_20) && !func_200(&(Global_1297015.f_5)))
	{
		Global_1297553[Global_1295619 /*87*/].f_19.f_20 = iParam0;
	}
}

void func_171()
{
	int iVar0;
	int iVar1;

	iVar0 = func_181();
	iVar1 = func_182();
	if (iVar0 == 3.112906E-09f || iVar1 == -1.787514E+19f)
	{
		if (!func_96(Global_1295619, 1024))
		{
			func_97(1024);
		}
	}
	else if (iVar0 == -2.142218E+09f || iVar1 == 6.166539E+16f)
	{
		if (!func_96(Global_1295619, 2048))
		{
			func_97(2048);
		}
	}
	else if (iVar0 == 2.180447E+07f || iVar1 == 1.255573E+28f)
	{
		if (!func_96(Global_1295619, 4096))
		{
			func_97(4096);
		}
	}
}

void func_172(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_259(iParam0, &iVar0, &iVar1);
	if (!func_260(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_261(iVar0, iVar1);
}

void func_173(var uParam0, bool bParam1)
{
	if (bParam1 || !func_200(uParam0))
	{
		func_111(uParam0);
	}
}

int func_174(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (func_96(iVar0, 256))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_175(int iParam0)
{
	int iVar0;

	if (iParam0 == 1.178746E+32f)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 1.92898E-26f)
	{
		iVar0 = 2;
	}
	else if (iParam0 == -3.104195E+09f)
	{
		iVar0 = 3;
	}
	else if (iParam0 == -8.900185E+16f)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 1.880115E+37f)
	{
		iVar0 = 5;
	}
	else if (iParam0 == -2.75919E+16f)
	{
		iVar0 = 6;
	}
	else if (iParam0 == 1.697274E+24f)
	{
		iVar0 = 7;
	}
	else if (iParam0 == -1.172875E-15f)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 7.306129E-23f)
	{
		iVar0 = 9;
	}
	else if (iParam0 == -6.022286E-08f)
	{
		iVar0 = 10;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_176()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (func_262())
	{
		return false;
	}
	if (func_263() != 2)
	{
		return false;
	}
	return true;
}

bool func_177(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

bool func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17418.f_2585[iVar1], iVar2);
}

char* func_179(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER";
			break;
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK"):
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK";
			break;
		default:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_UNFLAVORED";
			break;
	}
	return sVar0;
}

void func_180(int iParam0, char* sParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	func_264(iParam0, MISC::GET_HASH_KEY(sParam1), bParam2);
}

int func_181()
{
	int iVar0;

	if (!func_128(&(Global_1297394.f_62)))
	{
		return 0;
	}
	iVar0 = func_129(Global_1297394.f_62, 0.1173447f, 0, 1);
	return iVar0;
}

int func_182()
{
	int iVar0;

	if (!func_128(&(Global_1297394.f_62)))
	{
		return 0;
	}
	iVar0 = func_129(Global_1297394.f_62, 49.24386f, 0, 1);
	return iVar0;
}

void func_183(float fParam0)
{
	Global_1297553[Global_1295619 /*87*/].f_19.f_19 = fParam0;
}

void func_184(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_185()
{
	int iVar0;
	int iVar1;

	if (!func_128(&(Global_1297394.f_62)))
	{
		return;
	}
	iVar0 = func_129(Global_1297394.f_62, 0.1173447f, 0, 1);
	iVar1 = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(iVar0, 0.1173447f);
	if (iVar0 == 2.180447E+07f)
	{
		Global_1297015.f_4 = ((Global_1901671.f_812.f_2 / BUILTIN::TO_FLOAT(iVar1)) * 1114636288);
	}
	else if (iVar0 == -2.142218E+09f)
	{
		Global_1297015.f_4 = ((Global_1901671.f_812.f_1 / BUILTIN::TO_FLOAT(iVar1)) * 1114636288);
	}
	else if (iVar0 == 3.112906E-09f)
	{
		Global_1297015.f_4 = ((Global_1901671.f_812 / BUILTIN::TO_FLOAT(iVar1)) * 1114636288);
	}
	else
	{
		Global_1297015.f_4 = ((Global_1901671.f_812 / BUILTIN::TO_FLOAT(iVar1)) * 1114636288);
	}
	if (func_265(15) >= 15)
	{
		Global_1297015.f_4 = (Global_1297015.f_4 * 1061997773);
	}
	func_173(&(Global_1297015.f_1), 0);
}

bool func_186(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_188(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_266(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_267(bParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_268(bParam0, bParam4, 0) };
	Var6 = { func_269(bParam0, Var1, Var1.f_4, bParam4) };
	return func_270(bParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_187()
{
	if (func_96(Global_1295619, 1024))
	{
		return 3.112906E-09f;
	}
	else if (func_96(Global_1295619, 2048))
	{
		return -2.142218E+09f;
	}
	else if (func_96(Global_1295619, 4096))
	{
		return 2.180447E+07f;
	}
	return 0;
}

bool func_188(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_189(int iParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_258(bParam2), iParam0, iParam1);
}

int func_190(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_188(bParam0, 0))
	{
		return 0;
	}
	if (func_271(bParam0) || func_203(bParam0, 2.791187f))
	{
		return func_274(func_272(bParam0, 0), iParam1, bParam2, iParam3, func_273(bParam0));
	}
	if (func_275(bParam0, bParam4) || func_276(bParam0))
	{
		iParam1 = 0.003804697f;
	}
	else if (func_273(bParam0) && (func_277(bParam0, &iVar0) || func_278(bParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_279(bParam0, -2.401104E+18f);
		bVar2 = func_279(bParam0, -982726.7f);
		if (bVar1 && !bVar2)
		{
			iParam1 = -2.401104E+18f;
		}
		else if (bVar2 && bVar1)
		{
			if (func_280())
			{
				iParam1 = -2.401104E+18f;
			}
			else
			{
				iParam1 = -982726.7f;
			}
		}
		else if (bVar2)
		{
			iParam1 = -982726.7f;
		}
		else if (func_281(15) && func_279(bParam0, 1.109321E-25f))
		{
			iParam1 = 1.109321E-25f;
		}
		else
		{
			iParam1 = 0;
		}
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

int func_191(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -982726.7f) && func_279(bParam0, 8.497754E-37f))
	{
		bParam1 = 8.497754E-37f;
	}
	if (func_271(bParam0) || func_203(bParam0, 2.791187f))
	{
		return func_193(func_272(bParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_282(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 3.996812E+36f || Var0[iVar32 /*2*/] == 3.414007E-11f)
		{
			if (iParam5 != 0 && Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32 /*2*/].f_1;
				Jump @221; //curOff = 205
				if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

bool func_192(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_188(bParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	*iParam1 = 0;
	iVar0 = func_283(4.251998E-09f, 1, 0, 1);
	iVar1 = func_283(1.964835E+32f, 1, 0, 1);
	bVar2 = UNLOCK::UNLOCK_IS_UNLOCKED(-1.346359E+18f);
	if (bParam3)
	{
		iVar0 = 4;
		iVar1 = 0;
	}
	if (iVar1 == 0)
	{
		if (bVar2)
		{
			if (bParam0 == 2.180447E+07f)
			{
				*iParam1 = 2.081615E+25f;
			}
			else if (bParam0 == -2.142218E+09f)
			{
				*iParam1 = 3.724136E+22f;
			}
			else
			{
				*iParam1 = -7.012991E-34f;
			}
		}
		else if (bParam0 == 2.180447E+07f)
		{
			*iParam1 = -2.230239E-32f;
		}
		else if (bParam0 == -2.142218E+09f)
		{
			*iParam1 = 2.336099E-35f;
		}
		else
		{
			*iParam1 = 0.1094965f;
		}
		switch (iVar0)
		{
			case 1:
				*iParam2 = 2.273041E-17f;
				break;
			case 2:
				*iParam2 = 4.176112E-12f;
				break;
			case 3:
				*iParam2 = 6.34797E-21f;
				break;
			case 4:
				*iParam2 = -8.333964E+08f;
				break;
		}
	}
	else if (iVar0 == 0)
	{
		if (bVar2)
		{
			if (bParam0 == 2.180447E+07f)
			{
				*iParam1 = 1.093947E+14f;
			}
			else if (bParam0 == -2.142218E+09f)
			{
				*iParam1 = -2.108069E+35f;
			}
			else
			{
				*iParam1 = 5.060719E-34f;
			}
		}
		else if (bParam0 == 2.180447E+07f)
		{
			*iParam1 = 9.811576E-20f;
		}
		else if (bParam0 == -2.142218E+09f)
		{
			*iParam1 = 4.94751E+07f;
		}
		else
		{
			*iParam1 = 0.006453077f;
		}
		switch (iVar1)
		{
			case 1:
				*iParam2 = 2.273041E-17f;
				break;
			case 2:
				*iParam2 = 4.176112E-12f;
				break;
			case 3:
				*iParam2 = 6.34797E-21f;
				break;
			case 4:
				*iParam2 = -8.333964E+08f;
				break;
		}
	}
	else
	{
		if (bVar2)
		{
			if (bParam0 == 2.180447E+07f)
			{
				*iParam1 = 2.159478E-14f;
			}
			else if (bParam0 == -2.142218E+09f)
			{
				*iParam1 = 2.841082E-34f;
			}
			else
			{
				*iParam1 = -6.048625E+28f;
			}
		}
		else if (bParam0 == 2.180447E+07f)
		{
			*iParam1 = -4.328759E+36f;
		}
		else if (bParam0 == -2.142218E+09f)
		{
			*iParam1 = 2.876887E-32f;
		}
		else
		{
			*iParam1 = -1.340476E-37f;
		}
		if (iVar0 == 1)
		{
			switch (iVar1)
			{
				case 1:
					*iParam2 = 2.273041E-17f;
					break;
				case 2:
					*iParam2 = 4.176112E-12f;
					break;
				case 3:
					*iParam2 = 6.34797E-21f;
					break;
			}
		}
		else if (iVar0 == 2)
		{
			if (iVar1 == 1)
			{
				*iParam2 = -8.333964E+08f;
			}
			else
			{
				*iParam2 = 4.431614E+14f;
			}
		}
		else
		{
			*iParam2 = -1.926391E+21f;
		}
	}
	if ((iVar0 == 0 && iVar1 == 0) && bVar2)
	{
		if (bParam0 == 2.180447E+07f)
		{
			*iParam1 = 2.159478E-14f;
		}
		else if (bParam0 == -2.142218E+09f)
		{
			*iParam1 = 2.841082E-34f;
		}
		else
		{
			*iParam1 = -6.048625E+28f;
		}
		*iParam2 = -982726.7f;
	}
	if (!func_284(*iParam1) || *iParam2 == 0)
	{
		return false;
	}
	return true;
}

int func_193(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_285(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == 3.996812E+36f || Var0[iVar32 /*2*/] == 3.414007E-11f) || Var0[iVar32 /*2*/] == -2.399649E-08f)
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_194(int* iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_274(bParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_287(bParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_17 = bParam1;
	uParam2->f_8 = bParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 3787186f;
	if (!func_288(iParam0, *uParam2, 1.704487E-19f, iParam3))
	{
		return false;
	}
	if (COLLECTION::_0x9ADEE485726025D4(bParam1) != 0)
	{
		if (Global_1292096.f_20.f_422 != -1)
		{
		}
		Global_1292096.f_20.f_422.f_1 = bParam1;
		Global_1292096.f_20.f_422 = iParam0->f_1;
	}
	return true;
}

bool func_195(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	struct<17> Var0;
	struct<18> Var17;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_190(bParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_289(iParam0, bParam1, Param2, fParam6, iParam10, iParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_290(bParam1, Param2, fParam6, iParam7, bParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 3787186f;
	*iParam8 = { Var0 };
	if (func_291(bParam1) == -42.1084f)
	{
		Var17.f_9 = 1;
		Var17.f_11 = -5.45926E-19f;
		Var17 = { Var0 };
		if (!func_292(iParam0, Var17, 4.059549E+37f, iParam9, -1))
		{
			return false;
		}
	}
	else if (!func_293(iParam0, Var0, 4.059549E+37f, iParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_196(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_294(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_295(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_295(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_197(int iParam0, var uParam1)
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(iParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

float func_198(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 8.064298E+34f;
		case 0:
			return 8.587614E+11f;
		case 1:
			return 1.27119E-14f;
		case 2:
			return -1.505023E+29f;
		case 3:
			return -2.128319E-14f;
		case 4:
			return 4.960456E+34f;
		default:
			break;
	}
	return 8.064298E+34f;
}

float func_199()
{
	bool bVar0;
	float fVar1;

	if (!func_128(&(Global_1297394.f_62)))
	{
		return 0;
	}
	bVar0 = func_129(Global_1297394.f_62, -1.533738E+29f, 0, 1);
	if (func_203(bVar0, 1.14802E+11f))
	{
		fVar1 = 1.14802E+11f;
	}
	else if (func_203(bVar0, -2.358938E+13f))
	{
		fVar1 = -2.358938E+13f;
	}
	else if (func_203(bVar0, 0.0001233087f))
	{
		fVar1 = 0.0001233087f;
	}
	return fVar1;
}

bool func_200(var uParam0)
{
	return func_296(*uParam0, 1);
}

int func_201(var uParam0)
{
	if (!func_200(uParam0))
	{
		return 0;
	}
	if (func_297(uParam0))
	{
		return uParam0->f_2;
	}
	return func_298(uParam0->f_1);
}

void func_202(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_299(uParam0, 1);
	func_300(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_203(bool bParam0, int iParam1)
{
	if (!func_188(bParam0, 0))
	{
		return func_302(func_301(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return true;
	}
	return false;
}

struct<2> func_204(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_205(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_206()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (func_262())
	{
		return false;
	}
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.175061E+08f))
	{
		return false;
	}
	if (Global_1072759.f_28761)
	{
		return false;
	}
	if (Global_1572887.f_10)
	{
		return false;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-2.345347E+27f))
	{
		return false;
	}
	if (func_303())
	{
		return false;
	}
	return true;
}

int func_207(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 5.395881E-11f)
	{
		if (Global_1896762.f_354)
		{
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_305(func_304(uParam0->f_2, 4.808429E-35f), func_304(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_306(func_304(uParam0->f_2, 4.808429E-35f), func_304(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_307(func_304(uParam0->f_2, 4.808429E-35f), func_304(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_308(func_304(uParam0->f_2, 4.808429E-35f), func_304(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_309(func_304(uParam0->f_2, 4.808429E-35f), func_304(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_310(func_304(uParam0->f_2, 4.808429E-35f), func_304(uParam0->f_3, 4.808429E-35f), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_311(func_304(uParam0->f_2, 4.808429E-35f), func_304(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

bool func_208(int iParam0)
{
	if (func_312(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_209()
{
	return true;
}

bool func_210(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_211()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = 2.884954E+11f;
	if (func_128(&(Global_1297394.f_62)))
	{
		bVar0 = 1.007909E-10f;
	}
	iVar1 = func_190(bVar0, 0, 1, -1, 1);
	iVar2 = 0;
	if (iVar1 == -2.401104E+18f || func_313(bVar0, 3.414007E-11f, iVar1, 1, 1) > 0)
	{
		iVar2 = 1;
	}
	return iVar2;
}

int func_212()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = 2.884954E+11f;
	if (func_128(&(Global_1297394.f_62)))
	{
		bVar0 = 1.007909E-10f;
	}
	iVar1 = func_190(bVar0, 0, 1, -1, 1);
	iVar2 = 0;
	if (func_314(iVar1))
	{
		iVar2 = 1;
	}
	return iVar2;
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3.279005E+18f;
		case 1:
			return 1.007909E-10f;
		case 3:
			return 3.021994E+07f;
		case 2:
			return -1.907884E+34f;
		case 4:
			return 8.209366E+14f;
		default:
			break;
	}
	return 0;
}

int func_214(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar2;

	return func_315(bParam0, iParam1, iParam2, &uVar0, &uVar2, 0, bParam3, 0);
}

bool func_215(int iParam0)
{
	switch (iParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_216(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_316(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_217(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_317(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_218()
{
	int iVar0;

	if (Global_1901671.f_45.f_2 == 9.232306E+25f)
	{
		iVar0 = Global_1295619.f_16;
		if (iVar0 > Global_1901671.f_45.f_3 && iVar0 < Global_1901671.f_45.f_4)
		{
			return true;
		}
	}
	return false;
}

bool func_219()
{
	return (Global_1295611.f_2.f_1 == 2 || Global_1295611.f_2.f_1 == 1);
}

bool func_220(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_318(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_14 != -1)
	{
		if (iParam0 == Global_1295619.f_5)
		{
			if (!Global_1295619.f_6)
			{
				return false;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return false;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 9.534398E+10f)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return true;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::ARE_WITNESSES_ACTIVE(iParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(iParam0, false, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return true;
			}
		}
	}
	return false;
}

struct<2> func_221(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_222(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

int func_223(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1235672[iVar0 /*697*/].f_571 != iParam0)
		{
		}
		else if (bParam2 && !func_319(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && Global_1225084[iVar0 /*28*/].f_15 != iParam1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_224(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_225(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_320(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_321())
	{
		return func_320(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_320(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

int func_226(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return Global_1149417.f_5087[iParam0 /*10*/].f_5[iParam1];
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1149417.f_5087[iParam0 /*10*/].f_5[iParam1] = iParam2;
}

void func_229(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1149417.f_5087[iParam0 /*10*/][iParam1] = iParam2;
}

int func_230(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1149417.f_5087[iParam0 /*10*/][iParam1];
}

void func_231(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	struct<8> Var7;
	struct<8> Var15;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_322(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_SET_ALL_PLAYER_BITS(&(vVar0.f_2));
			func_322(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var7.f_4 = 0;
				Var7.f_6 = uParam0->f_1;
				Var7.f_5 = *uParam0;
				Var7.f_7 = uVar5;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar3]))
					{
					}
					else if (Global_1295619.f_149[iVar3] == Global_1295619.f_5)
					{
					}
					else
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, Global_1295619.f_149[iVar3]);
					}
					iVar3++;
				}
				func_323(&Var7, uVar6);
				Jump @464; //curOff = 221
				if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(uParam0->f_2)))
				{
					return;
				}
				bVar4 = false;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_2), iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar3]))
					{
						bVar4 = true;
					}
					else
					{
						iVar3++;
					}
				}
				if (!bVar4)
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_322(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var15.f_4 = 0;
					Var15.f_6 = uParam0->f_1;
					Var15.f_5 = *uParam0;
					Var15.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar3]))
						{
						}
						else if (Global_1295619.f_149[iVar3] == Global_1295619.f_5)
						{
						}
						else
						{
							SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, Global_1295619.f_149[iVar3]);
						}
						iVar3++;
					}
					func_323(&Var15, uVar6);
				}
			}
			default:
				break;
	}
}

bool func_232(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_324(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_233(var uParam0, var uParam1)
{
	return uParam0;
}

float func_234(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -8.998766E+28f;
		case 1:
			return -6.580683E-18f;
		case 2:
			return -2.691543E+12f;
		case 3:
			return 2.986218E-33f;
		case 4:
			return 8.281546E-06f;
		case 5:
			return -2.792393E+27f;
		case 6:
			return 2.121323E-22f;
		case 7:
			return 6.18127E+26f;
		case 8:
			return 1.990545E+23f;
		default:
			break;
	}
	return -64.26542f;
}

float func_235(int iParam0)
{
	if (GANG::NETWORK_GET_GANG_ID(iParam0) != Global_1295619.f_10 && !func_69())
	{
		return 4.279651E-16f;
	}
	return -18751.78f;
}

int func_236(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_325(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1101558[iVar3 /*38*/].f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901671.f_737.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901671.f_737.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901671.f_737.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901671.f_737.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901671.f_737.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901671.f_737.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_237(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == Global_1295619.f_5)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1295619.f_17[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1295619.f_5);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_NETWORK_IS_IN_MY_GANG(iParam0))
	{
		return true;
	}
	return false;
}

bool func_238(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return true;
		}
	}
	if (func_326(iParam0))
	{
		return true;
	}
	return !func_237(iParam0, 0);
}

bool func_239(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return true;
		}
	}
	if (func_327(iParam0))
	{
		return false;
	}
	if (func_326(iParam0))
	{
		return false;
	}
	if (func_328(iParam0))
	{
		return true;
	}
	return func_329(iParam0);
}

int func_240(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_330(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_241(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -5.544348E+20f;
		case 1:
			return 9.256025E-25f;
		case 2:
			return -218565.1f;
		case 3:
			return 1.294398E-25f;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

char* func_242(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_243()
{
	int iVar0;
	int iVar1;
	struct<43> Var2;
	int iVar45;

	iVar1 = Global_1295619.f_16;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { Global_1940239.f_245.f_14[iVar0 /*43*/] };
		iVar45 = DATABINDING::DATABINDING_READ_INT(Var2.f_29);
		if (iVar45 < iVar1)
		{
			if (func_331(Var2))
			{
				func_332(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_333();
}

void func_244(var uParam0, int iParam1, char[32] cParam2, struct<24> Param10)
{
	func_334(uParam0, iParam1, cParam2, Param10);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_245(15), Param10.f_16);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_245(17), Param10.f_17);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(3), Param10.f_18);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(4), Param10.f_19);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(5), Param10.f_20);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(6), Param10.f_21);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_245(98), Param10.f_22);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_245(99), Param10.f_23);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_245(100), Param10.f_23);
}

char* func_245(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_end_img_left_texture_dic";
		case 25:
			return "dynamic_list_item_end_img_left_texture";
		case 26:
			return "dynamic_list_item_end_img_left_visible";
		case 27:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 28:
			return "dynamic_list_item_corner_end_img_texture";
		case 29:
			return "dynamic_list_item_corner_end_img_visible";
		case 30:
			return "dynamic_list_item_entry_player_index";
		case 31:
			return "dynamic_list_item_entry_friend_index";
		case 32:
			return "dynamic_list_item_player_gamer_handle";
		case 33:
			return "dynamic_list_item_option_stepper_visible";
		case 34:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 35:
			return "dynamic_list_item_option_stepper_items";
		case 36:
			return "dynamic_list_item_option_stepper_current_hash";
		case 37:
			return "dynamic_list_item_option_stepper_current_index";
		case 38:
			return "dynamic_list_item_option_stepper_max_index";
		case 39:
			return "dynamic_list_item_left_chevron_enabled";
		case 40:
			return "dynamic_list_item_right_chevron_enabled";
		case 41:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 42:
			return "dynamic_list_item_main_fill_maximum";
		case 43:
			return "dynamic_list_item_main_fill_value";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 47:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 48:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 49:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 50:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 51:
			return "dynamic_list_item_extra_img_one_texture";
		case 52:
			return "dynamic_list_item_extra_img_one_visible";
		case 53:
			return "dynamic_list_item_extra_int_field_one_value";
		case 54:
			return "dynamic_list_item_extra_int_field_two_value";
		case 55:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 56:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 57:
			return "dynamic_list_item_link";
		case 58:
			return "dynamic_list_item_event_channel_hash";
		case 59:
			return "dynamic_list_item_focus_hash";
		case 60:
			return "dynamic_list_item_select_hash";
		case 61:
			return "dynamic_list_item_prompt_text";
		case 62:
			return "dynamic_list_item_prompt_text_raw";
		case 63:
			return "dynamic_list_item_prompt_enabled";
		case 64:
			return "dynamic_list_item_prompt_visible";
		case 68:
			return "dynamic_list_item_prompt_option_text";
		case 69:
			return "dynamic_list_item_prompt_option_enabled";
		case 70:
			return "dynamic_list_item_prompt_option_visible";
		case 71:
			return "dynamic_list_item_prompt_option_select_hash";
		case 72:
			return "dynamic_list_item_prompt_toggle_text";
		case 73:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 74:
			return "dynamic_list_item_prompt_toggle_visible";
		case 75:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 76:
			return "dynamic_list_item_prompt_r3_text";
		case 77:
			return "dynamic_list_item_prompt_r3_enabled";
		case 78:
			return "dynamic_list_item_prompt_r3_visible";
		case 79:
			return "dynamic_list_item_select_r3_select_hash";
		case 80:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 81:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 82:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 83:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 84:
			return "mount_collection_index";
		case 85:
			return "dynamic_list_item_rename_prompt_enabled";
		case 86:
			return "dynamic_list_item_rename_prompt_visible";
		case 87:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 88:
			return "invite_unique_id";
		case 89:
			return "invite_tracked";
		case 90:
			return "invite_processed";
		case 91:
			return "invite_script_type";
		case 92:
			return "invite_gang_id";
		case 93:
			return "invite_expiration_time";
		case 94:
			return "invite_filter_type";
		case 95:
			return "invite_feed_message_id";
		case 96:
			return "invite_all_enabled";
		case 97:
			return "invite_all_visible";
		case 98:
			return "dynamic_list_item_overlay_tick_visible";
		case 99:
			return "dynamic_list_item_overlay_time_visible";
		case 100:
			return "dynamic_list_item_overlay_new_visible";
		default:
			break;
	}
	return "null";
}

void func_246(int iParam0)
{
	Global_1940239.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940239.f_245.f_1306), 0));
}

bool func_247(var uParam0)
{
	return true;
}

var func_248()
{
	return Global_1940239.f_245.f_1305;
}

bool func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_160(iParam0, &iVar0, &iVar1, 1);
	bVar2 = ((bVar2 && iVar0 == Global_1297553[PLAYER::PLAYER_ID() /*87*/].f_1) && iVar1 == Global_1297553[PLAYER::PLAYER_ID() /*87*/]);
	return bVar2;
}

bool func_250(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
		case 3:
			return Global_1072759.f_573.f_2103;
		case 4:
			return Global_1072759.f_573.f_12605;
		case 5:
			return Global_1072759.f_573.f_12907;
		case 6:
			return Global_1072759.f_573.f_15909;
		case 7:
			return Global_1072759.f_573.f_16511;
		case 8:
			return Global_1072759.f_573.f_18913;
		default:
			break;
	}
	return -1;
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "net_moonshine_entrance";
		case 1:
			return "net_moonshine_property";
		default:
			break;
	}
	return "";
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -2.473435E-08f;
		case 0:
			return 8.695165E-28f;
		default:
			break;
	}
	return 0.001024828f;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MICRO"):
			return 128;
		case joaat("NET_FETCH_HIDEOUT_LEADER"):
			return 200;
		case joaat("STABLE_MOUNT"):
			return 400;
		case joaat("MINI"):
			return 512;
		case joaat("CAMP_DOG"):
			return 600;
		case joaat("ABILITY_CARD_EVENTS"):
			return 800;
		case joaat("DEFAULT"):
			return 1024;
		case joaat("HUB_EVENTS"):
			return 1026;
		case joaat("UPDATE"):
			return 1300;
		case joaat("MATCHMAKING"):
			return 1301;
		case joaat("PLAYER_MENU_SCRIPT"):
			return 1400;
		case joaat("POSSE_VERSUS_RACE"):
			return 1600;
		case joaat("POSSE_FEUD"):
			return 1800;
		case joaat("PAUSE_MENU_SCRIPT"):
			return 2000;
		case joaat("SAVE_MENU_EVENTS"):
			return 2024;
		case joaat("SATCHEL_EVENTS"):
			return 2025;
		case joaat("MAP_EVENTS"):
			return 2026;
		case joaat("SHOP_EVENTS"):
			return 2027;
		case joaat("BACKGROUND_SCRIPT"):
			return 2047;
		case joaat("ROLE_PROGRESSION_EVENTS"):
			return 2048;
		case joaat("REWARDS_EVENTS"):
			return 2549;
		case joaat("NET_SYSTEM_EXTENDED"):
			return 2050;
		case joaat("NET_CUTSCENE"):
			return 2051;
		case joaat("NET_BEAT"):
			return 2452;
		case joaat("COUPONS_EVENTS"):
			return 2053;
		case joaat("FME_PV_SMALL"):
			return 3000;
		case joaat("FME_THM_SMALL"):
			return 3001;
		case joaat("FME_STD_SMALL"):
			return 3002;
		case joaat("CAMPWORKS"):
			return 3081;
		case joaat("MP_MISSION_DOWNLOADER"):
			return 3088;
		case joaat("NET_GUN_FOR_HIRE_ONLINE"):
			return 3090;
		case joaat("NET_BEAT_MANAGER"):
			return 3500;
		case joaat("SCRIPT_XML"):
			return 4592;
		case joaat("PAUSE_MENU_EVENT_SCRIPT"):
			return 4700;
		case joaat("CAMP"):
			return 5000;
		case joaat("STRANGER_MISSION_NON_FETCH"):
			return 5001;
		case joaat("DB_MEGA"):
			return 5400;
		case joaat("FME_PV_MEDIUM"):
			return 5500;
		case joaat("FME_THM_MEDIUM"):
			return 5501;
		case joaat("FME_STD_MEDIUM"):
			return 5502;
		case joaat("REGION"):
			return 5503;
		case joaat("SHOWS"):
			return 5504;
		case joaat("FISHING"):
			return 5505;
		case joaat("ENDFLOW"):
			return 5506;
		case joaat("MISSION_INTRO"):
			return 6000;
		case joaat("MINIGAME_INTRO"):
			return 6001;
		case joaat("NET_MAIN"):
			return 6002;
		case joaat("SHOP"):
			return 6005;
		case joaat("NET_GUN_FOR_HIRE_OFFLINE"):
			return 6010;
		case joaat("MINIGAME"):
			return 6500;
		case joaat("CAMP_ITEM"):
			return 6700;
		case joaat("FME_PV_LARGE"):
			return 7000;
		case joaat("FME_THM_LARGE"):
			return 7001;
		case joaat("FME_STD_LARGE"):
			return 7002;
		case joaat("MISSION_TUTORIAL"):
			return 7300;
		case joaat("AUTOSTART"):
			return 7301;
		case joaat("STRANGER_MISSION_FETCH"):
			return 10000;
		case joaat("MP_MISSION_LOBBY"):
			return 10001;
		case joaat("CHARACTER_REROLL"):
			return 10003;
		case joaat("MP_UGC_TRANSITION"):
			return 14335;
		case joaat("TRANSITION"):
			return 25500;
		case joaat("MISSION_CREATOR"):
			return 40500;
		case joaat("MISSION"):
			return 45000;
		case joaat("INSTANCED_CONTENT"):
			return 75000;
		case joaat("NET_BACKGROUND"):
			return 1631;
		case joaat("NET_MOONSHINE_PROPERTY"):
			return 3982;
		case joaat("SOAK_TEST"):
			return 4088;
		case joaat("NETWORK_BOT"):
			return 4096;
		case joaat("DEBUG_SCRIPT"):
			return 4080;
		case joaat("DEBUG_MENU"):
			return 50000;
		case joaat("TOOL_MEGA"):
			return 65536;
		case joaat("DEBUG_MP_STEAL_VEHICLE"):
			return 32768;
		case joaat("VIRTUALIZATION_UNIT_TEST_SUPPORT"):
			return 129;
		default:
			break;
	}
	return 0;
}

void func_256(int iParam0, var uParam1)
{
	struct<5> Var0;

	Var0 = { func_335(iParam0) };
	uParam1->f_1 = Var0.f_1;
	uParam1->f_2 = uParam1->f_1;
	*uParam1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_253(iParam0), &Var0, 5, func_255(func_254(iParam0)));
}

bool func_257(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

int func_258(bool bParam0)
{
	if (func_38() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

void func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_260(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_336(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_337(iParam0))
	{
		return false;
	}
	if (func_338(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_339(iParam0, 1)) || func_340(32768))
	{
		if (!func_339(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_341())
	{
		return false;
	}
	return true;
}

void func_261(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_262()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

int func_263()
{
	if (!func_210(Global_1572887.f_196.f_43, 8))
	{
		return 2;
	}
	if (Global_1572887.f_196.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887.f_196 > 7 && Global_1572887.f_196 < 23)
	{
		return 0;
	}
	return 2;
}

void func_264(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_259(iParam0, &iVar0, &iVar1);
	if (!func_260(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_339(iParam0, 1024))
	{
		return;
	}
	func_261(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

int func_265(int iParam0)
{
	int iVar0;

	if (!func_342(iParam0))
	{
		return 0;
	}
	iVar0 = func_343(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_344(iParam0, 1);
	}
	return 0;
}

int func_266(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_345(func_301(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_267(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_346(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_266(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_347(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_348(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_349(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_350(7.184882E+22f, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var82.f_7 = -5.149929E+33f;
			Var82.f_16 = -1;
			Var82 = iParam3;
			Var82.f_7 = iParam2;
			func_351(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_258(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_268(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_352(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_291(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_269(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_353(bParam1) };
			if (iParam2 && func_354(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_217(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_217(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_355(bParam0, &Var6, 6.282013E+23f))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else
				{
					Var0.f_4 = -3.587391E+15f;
				}
			}
			else
			{
				Var0.f_4 = 6.282013E+23f;
			}
			break;
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 5.573986E+25f;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -5.45926E-19f;
			Var0 = { func_356(bParam1) };
			switch (func_357(bParam0))
			{
				case -1070622585:
					Var0.f_4 = NaNf;
					break;
				case -1057349201:
					Var0.f_4 = 4.57813E+14f;
					break;
				case 874188557:
					Var0.f_4 = -1.48142E+30f;
					break;
				case -2101244071:
					Var0.f_4 = -1.644837E+29f;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_358(bParam0, -2.580501E-27f))
			{
				Var0 = { func_269(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_358(bParam0, -4.220332E-15f))
			{
				Var0 = { func_269(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_269(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_358(bParam0, -3.171238E-21f))
			{
				Var0 = { func_269(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.884954E+11f);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 4.978612f))
			{
				Var0.f_4 = 4.978612f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 0.08386164f))
			{
				Var0.f_4 = 0.08386164f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -8.915019E+08f))
			{
				Var28.f_9 = -5.45926E-19f;
				if (!func_359(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -8.915019E+08f;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.194466E+13f))
			{
				Var0.f_4 = -1.194466E+13f;
			}
			else if (func_358(bParam0, -3.171238E-21f))
			{
				Var0 = { func_269(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.884954E+11f);
			}
			else
			{
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.982335E+09f);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_269(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_188(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_258(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_270(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_346(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_359(*iParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_347(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_38() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_350(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_351(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_258(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_271(bool bParam0)
{
	if (func_203(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_272(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_188(bParam0, 0))
	{
		return func_360(func_301(bParam0), bParam1);
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0) || Var0.f_5 == 0)
	{
		return false;
	}
	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(Var0.f_5))
	{
		return false;
	}
	return Var0.f_5;
}

bool func_273(bool bParam0)
{
	if (!func_361() && func_362())
	{
		return true;
	}
	return func_203(bParam0, 1.931199E+13f);
}

int func_274(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_284(bParam0))
	{
		return 0;
	}
	bVar1 = func_210(iParam3, 2);
	bVar2 = func_363(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_363(bParam0, -982726.7f, bVar1);
	if (func_363(bParam0, 0.003804697f, bVar1))
	{
		iParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_364(bParam0, &fVar0) || func_365(bParam0, &fVar0)))
	{
		iParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_280())
		{
			iParam1 = -2.401104E+18f;
		}
		else
		{
			iParam1 = -982726.7f;
		}
	}
	else if (bVar3)
	{
		iParam1 = -982726.7f;
	}
	else if (func_281(15) && func_363(bParam0, 1.109321E-25f, bVar1))
	{
		iParam1 = 1.109321E-25f;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

bool func_275(bool bParam0, bool bParam1)
{
	return (func_279(bParam0, 0.003804697f) && !func_366(bParam0, 0.003804697f, bParam1));
}

bool func_276(bool bParam0)
{
	bool bVar0;

	bVar0 = func_272(bParam0, 1);
	if (bVar0 != 0 && func_363(bVar0, 0.003804697f, 0))
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.382125E-27f))
		{
			return true;
		}
	}
	return false;
}

bool func_277(bool bParam0, int iParam1)
{
	*iParam1 = func_367(bParam0, 1);
	return *iParam1 != 0;
}

bool func_278(bool bParam0, int iParam1)
{
	*iParam1 = func_368(bParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_279(bool bParam0, int iParam1)
{
	if (!func_188(bParam0, 0))
	{
		return false;
	}
	if (func_271(bParam0) || func_203(bParam0, 2.791187f))
	{
		return func_363(func_272(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

bool func_280()
{
	return Global_1915643.f_22477;
}

bool func_281(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_222(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_282(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_188(bParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_369(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

int func_283(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_370(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_258(bParam1), iParam0, bParam3);
}

bool func_284(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_285(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_284(bParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_371(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_286(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return false;
		}
	}
	if (func_372(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(4.059549E+37f))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(-3.415538E-09f))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(-4.99669E-06f))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(7.184882E+22f))
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	if (NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return false;
	}
	return true;
}

int func_287(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_363(bParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_210(iParam2, 2))
	{
		if (func_373(bParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 0;
	}
	if (func_210(iParam2, 8))
	{
		return func_374(bParam0, iParam1);
	}
	return 1;
}

bool func_288(int* iParam0, struct<18> Param1, int iParam19, bool bParam20)
{
	if (iParam19 != 1.704487E-19f)
	{
		return false;
	}
	if (!func_375(Param1))
	{
		return false;
	}
	if (!func_376(iParam0, iParam19))
	{
		return false;
	}
	if (func_377(*iParam0, iParam19, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_378(iParam0, bParam20);
}

int func_289(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	bool bVar0;

	if (func_379(bParam1))
	{
		bVar0 = func_301(bParam1);
		return func_380(iParam0, bVar0, bParam7, iParam8, iParam9);
	}
	if (func_210(iParam9, 32))
	{
		if (!func_381(bParam1, Param2, iParam6))
		{
			return 0;
		}
	}
	if (!func_382(bParam1, bParam7, iParam9))
	{
		return 0;
	}
	if (func_210(iParam9, 4))
	{
		if (!func_383(iParam0, bParam1, Param2, iParam6, bParam7, iParam8, 0, bParam10))
		{
			return 0;
		}
	}
	if (func_210(iParam9, 8))
	{
		return func_384(iParam0, bParam1, bParam7, iParam8);
	}
	return 1;
}

struct<17> func_290(bool bParam0, struct<4> Param1, float fParam5, int iParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_269(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_266(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_385() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_291(bool bParam0)
{
	vector3 vVar0;

	if (!func_188(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_292(int* iParam0, var uParam1, float fParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, bool bParam20, int iParam21)
{
	if ((iParam19 != 4.059549E+37f && iParam19 != -3.415538E-09f) && iParam19 != -4.99669E-06f)
	{
		return false;
	}
	if (!func_386(iParam19, &uParam1, iParam21))
	{
		return false;
	}
	if (!func_376(iParam0, iParam19))
	{
		return false;
	}
	if (func_387(*iParam0, iParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_378(iParam0, bParam20);
}

bool func_293(int* iParam0, var uParam1, float fParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((((iParam18 != 4.059549E+37f && iParam18 != -3.415538E-09f) && iParam18 != -4.99669E-06f) && iParam18 != 7.184882E+22f) && iParam18 != -2.328868E-12f)
	{
		return false;
	}
	if (!func_386(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_376(iParam0, iParam18))
	{
		return false;
	}
	if (func_388(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_378(iParam0, bParam19);
}

int func_294(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			return Global_1292096.f_20.f_1[iVar0 /*21*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_295(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_389(iParam0, iParam1, iParam2, iParam3);
}

bool func_296(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_297(var uParam0)
{
	return func_296(*uParam0, 2);
}

int func_298(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_299(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_300(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_301(bool bParam0)
{
	return bParam0;
}

int func_302(bool bParam0, int iParam1)
{
	if (!func_345(bParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return 1;
	}
	return 0;
}

bool func_303()
{
	struct<2> Var0;

	Var0 = { func_221(0) };
	if (func_158(Var0))
	{
		if ((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 7)
		{
			return true;
		}
	}
	return false;
}

char* func_304(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_242(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_305(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14, var uParam15, var uParam16)
{
	struct<10> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam13, bParam14);
	return iVar21;
}

int func_306(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> Var0;
	struct<10> Var13;
	int iVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	iVar23 = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(&Var0, &Var13, iParam16, iParam17);
	return iVar23;
}

int func_307(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam12, bParam13);
	return iVar21;
}

int func_308(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> Var0;
	struct<10> Var13;
	int iVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	iVar23 = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(&Var0, &Var13, iParam15, iParam16);
	return iVar23;
}

int func_309(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam13, bParam14);
	return iVar21;
}

int func_310(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_RANKUP_TOAST(&Var0, &Var13, iParam13, iParam14);
	return iVar21;
}

int func_311(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam4;
	Var0.f_1 = uParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = uParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam9, bParam10);
	return iVar21;
}

bool func_312(int iParam0)
{
	return iParam0 != 0;
}

int func_313(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (func_271(bParam0) || func_203(bParam0, 2.791187f))
	{
		return func_390(func_272(bParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_282(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == iParam1)
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam4)
	{
	}
	return 0;
}

bool func_314(int iParam0)
{
	return (func_391(iParam0) || func_215(iParam0));
}

bool func_315(bool bParam0, int iParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;

	if (func_271(bParam0) || func_203(bParam0, 2.791187f))
	{
		return func_392(func_272(bParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_282(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_347(0)) && !func_393());
	iVar37 = -1;
	if (Global_1915643.f_20638)
	{
		iVar37 = Global_1915643.f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 3.078375E+12f)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && (bParam7 || func_394(iVar32)))
			{
				Jump @499; //curOff = 215
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && (bParam7 || func_395(iVar32)))
			{
			}
			else
			{
				iVar36 = func_396(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_397(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_398(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_399(Var0[iVar34 /*2*/]) || func_400(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_401(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_402(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @483; //curOff = 439
							if (bParam5 && ((iVar33 + func_403(7, Var0[iVar34 /*2*/])) + func_404(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_316(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_258(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_405(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_317(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_188(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_266(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_269(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_258(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_258(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_318(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940186.f_12)
	{
		if ((bParam2 || Global_1940186.f_13 > 0) || Global_1940186.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940186.f_9 == 9.534398E+10f)
	{
		return 0;
	}
	if (Global_1940186.f_14 > 0 || (bParam2 && Global_1940186.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940186.f_7)
		{
			if (bParam2 || Global_1940186.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_319(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_406(iParam0) && func_210(Global_1225672[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

bool func_320(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_321()
{
	return Global_1102813.f_3672;
}

void func_322(vector3 vParam0)
{
	if (Global_1149417.f_5087.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	Global_1149417.f_5087.f_326[Global_1149417.f_5087.f_324 /*3*/] = { vParam0 };
	Global_1149417.f_5087.f_324 = (Global_1149417.f_5087.f_324 + 1 % 50);
	Global_1149417.f_5087.f_325++;
}

void func_323(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 189;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
}

int func_324(struct<2> Param0)
{
	int iVar0;

	if (!func_158(Param0))
	{
		return -1;
	}
	iVar0 = func_407(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

float func_325(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return 0f;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		return Global_17418.f_2641;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iParam0)) > 1 && bParam1) && Global_1101558[iVar0 /*38*/].f_18 >= Global_1101558[iVar0 /*38*/].f_30)
	{
		return Global_1101558[iVar0 /*38*/].f_18;
	}
	return Global_1101558[iVar0 /*38*/].f_30;
}

bool func_326(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iParam0))
	{
		return true;
	}
	return false;
}

bool func_327(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

bool func_328(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iParam0))
	{
		return true;
	}
	return false;
}

bool func_329(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_408(iParam0);
		return false;
	}
	if (func_328(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 2)
		{
			func_409(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1295619.f_5, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 2);
}

bool func_330(struct<2> Param0, bool bParam2)
{
	if (!func_158(Param0))
	{
		return false;
	}
	func_410(bParam2);
	switch (Param0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_331(struct<42> Param0, var uParam42)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Param0.f_41))
	{
		return DATABINDING::DATABINDING_IS_ENTRY_VALID(Param0);
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_41);
}

void func_332(int iParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940239.f_245.f_5, iParam0);
	func_411(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_246((Global_1940239.f_245.f_1306 - 1));
}

int func_333()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[0 /*43*/].f_29);
	iVar5 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[0 /*43*/].f_39);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iVar0 /*43*/].f_29);
		iVar2 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iVar0 /*43*/].f_39);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_332(Global_1940239.f_245.f_14[iVar3 /*43*/]);
	return iVar3;
}

void func_334(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_245(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_245(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(57), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(58), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(60), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(59), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -5.222598E+14f;
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(61), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_245(62), "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_245(63), Param10.f_8);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_245(64), Param10.f_9);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(65), Param10.f_10);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(71), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(66), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -5.222598E+14f;
	}
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_245(68), Param10.f_13);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_245(69), Param10.f_14);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_245(70), Param10.f_15);
}

struct<5> func_335(var uParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = func_22();
	Var1.f_1 = func_51(iVar0, 1);
	Var1.f_2 = func_64(iVar0, 1);
	Var1 = uParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		Var1.f_3 = { func_412(iVar0) };
	}
	return Var1;
}

bool func_336(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_337(int iParam0)
{
	if (func_339(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_38.f_3542)
	{
		if (Global_38.f_3542[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_38.f_3542[iVar0 /*3*/]);
			if (Global_38.f_3542[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904398.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_339(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_340(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_341()
{
	if (!func_361())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

bool func_342(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 36)
	{
		return false;
	}
	return true;
}

int func_343(int iParam0)
{
	if (!func_342(iParam0))
	{
		return 0;
	}
	return Global_1292096.f_3024[iParam0];
}

int func_344(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_342(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		bVar0 = func_413(iParam0);
		if (func_188(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_414(255);
			}
			else
			{
				iVar1 = func_317(bVar0, func_352(1), -2.696814E-33f, 1, 0, 0);
			}
			Global_1292096.f_3024[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		bVar0 = func_415(iParam0);
		if (func_188(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_317(bVar0, func_352(1), -2.696814E-33f, 1, 0, 0);
			}
			Global_1292096.f_2986[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_345(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_346(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_347(bool bParam0)
{
	if (func_38() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_258(bParam0));
}

bool func_348(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_266(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_416(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_349(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_269(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_350(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_417(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_418(func_388(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_419(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_351(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

struct<4> func_352(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_258(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_269(2.982335E+09f, func_385(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_269(2.982335E+09f, func_385(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_269(2.982335E+09f, func_385(), -5.45926E-19f, bParam0);
}

struct<4> func_353(bool bParam0)
{
	int iVar0;

	iVar0 = func_258(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_269(8.681942E-06f, func_352(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_269(8.681942E-06f, func_352(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_269(8.681942E-06f, func_352(bParam0), -1.942248E+12f, 0);
}

int func_354(bool bParam0, bool bParam1)
{
	if (func_357(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_420();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_355(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_421(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_356(bool bParam0)
{
	int iVar0;

	iVar0 = func_258(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_269(3.507197E-29f, func_352(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_269(3.507197E-29f, func_352(bParam0), 12999093, 0);
}

int func_357(bool bParam0)
{
	struct<2> Var0;

	if (!func_188(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_358(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_357(bParam0);
	if (iVar1 == -252.4155f)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_422(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_359(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_405(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_360(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_345(bParam0, 2))
	{
		return false;
	}
	bVar0 = false;
	if ((bVar0 != 0 && bParam1) && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0))
	{
		return false;
	}
	return bVar0;
}

bool func_361()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_362()
{
	return func_423(func_221(0));
}

bool func_363(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_284(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_373(bParam0, bParam1);
	}
	return true;
}

bool func_364(bool bParam0, float fParam1)
{
	*fParam1 = func_424(bParam0, 1);
	return *fParam1 != 0;
}

bool func_365(bool bParam0, float fParam1)
{
	*fParam1 = func_425(bParam0, 1, 0);
	return *fParam1 != 0;
}

bool func_366(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_188(bParam0, 0))
	{
		return func_426(func_301(bParam0), bParam1, bParam2);
	}
	if (func_271(bParam0) || func_203(bParam0, 2.791187f))
	{
		return func_373(func_272(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_38() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return true;
	}
	if (!func_427(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_367(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_428(iVar0, 1, 0);
		if (!func_282(bParam0, bVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_429(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_398(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return bVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_368(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	bool bVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar40 = func_428(iVar0, 0, 1);
		if (!func_282(bParam0, bVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_430(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_398(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == 3.996812E+36f || Var9[iVar41 /*2*/] == 3.414007E-11f)
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == 3.996812E+36f) || (!bParam2 && Var9[iVar41 /*2*/] == 3.414007E-11f))
					{
						if (bVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							bVar5 = bVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (bVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						bVar5 = bVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && bVar5 != 0)
			{
				bVar4 = bVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return bVar4;
}

void func_369(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if ((*uParam2)[iVar0 /*2*/] == 3.414007E-11f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_357((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_370(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_371(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if ((*uParam2)[iVar0 /*2*/] == 3.414007E-11f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_357((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_372(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_373(bool bParam0, bool bParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(bParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == bParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

int func_374(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam1 == -2.401104E+18f)
	{
		iVar0 = func_193(bParam0, -2.401104E+18f, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_395(iVar0))
		{
			if (Global_1915643.f_20644)
			{
				func_432(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_431(iVar0)));
			}
			return 0;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		iVar1 = func_193(bParam0, -982726.7f, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_394(iVar1))
		{
			if (Global_1915643.f_20644)
			{
				func_432("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return 1;
	}
	if (!func_392(bParam0, bParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_375(struct<18> Param0)
{
	if (!func_284(Param0.f_17))
	{
		return false;
	}
	return true;
}

bool func_376(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_433(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_434(iParam0))
		{
			return false;
		}
		if (!func_433(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_377(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_378(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_434(iParam0);
	}
	return true;
}

bool func_379(bool bParam0)
{
	bool bVar0;

	bVar0 = func_301(bParam0);
	if (func_345(bVar0, 2))
	{
		return true;
	}
	return false;
}

int func_380(int* iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar4;
	struct<5> Var5[16];
	bool bVar86;
	struct<4> Var87;
	int iVar91;

	if (!func_345(bParam1, 2))
	{
		return 0;
	}
	uVar2 = 1;
	func_435(bParam1, &uVar2, &uVar1, &Var5, &iVar0);
	if (func_210(iParam4, 8) && !func_436(bParam1, bParam2, iParam3))
	{
		return 0;
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (Var5[iVar4 /*5*/].f_1 == -5.45926E-19f)
		{
			bVar86 = Var5[iVar4 /*5*/];
			if (func_210(iParam4, 4))
			{
				if (!func_383(iParam0, bVar86, Var87, iVar91, bParam2, (iParam3 * Var5[iVar4 /*5*/].f_4), 1, 1))
				{
					return 0;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

bool func_381(bool bParam0, struct<4> Param1, int iParam5)
{
	struct<10> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_359(Param1, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_422(bParam0, func_357(Var0.f_4), iParam5))
	{
		return false;
	}
	return true;
}

bool func_382(bool bParam0, bool bParam1, int iParam2)
{
	if (func_210(iParam2, 1))
	{
		if (!func_437(bParam0))
		{
			return false;
		}
	}
	if (func_210(iParam2, 2))
	{
		if (func_366(bParam0, bParam1, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_383(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param2))
	{
		return false;
	}
	Var0.f_4 = fParam6;
	Var0 = { Param2 };
	iVar5 = func_317(bParam1, Param2, fParam6, 1, !bParam10, 0);
	iVar6 = func_438(bParam1, &Var0, !bParam10, 1);
	if (bParam9)
	{
		iVar7 = 1;
	}
	else if (func_439(bParam1, bParam7, &iVar7, 0))
	{
	}
	iVar8 = (func_440(iParam0, bParam1) * iVar7);
	if (iVar8 > 0)
	{
	}
	if (iVar6 >= 0)
	{
		iVar9 = (iVar6 - (iVar5 + iVar8));
		iVar10 = (iParam8 * iVar7);
		if (iVar10 > iVar6)
		{
			iVar10 = iVar6;
		}
		if (iVar9 <= 0)
		{
			return false;
		}
		else if ((iVar10 - iVar9) >= iVar7)
		{
			return false;
		}
	}
	return true;
}

int func_384(int* iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_441(bParam1, 1) && !func_442(bParam1, 1))
	{
		if (Global_1915643.f_20644)
		{
			func_432(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -2.401104E+18f)
	{
		iVar0 = func_191(bParam1, -2.401104E+18f, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_395((iVar1 + func_443(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_432(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -982726.7f)
	{
		iVar2 = func_191(bParam1, -982726.7f, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_394((iVar3 + func_443(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_432("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 0.003804697f)
	{
		return 1;
	}
	if (func_345(func_301(bParam1), 2))
	{
		if (!func_444(func_301(bParam1), iParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_188(bParam1, 0))
	{
		if (!func_315(bParam1, iParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

struct<4> func_385()
{
	struct<4> Var0;

	return Var0;
}

bool func_386(int iParam0, int iParam1, int iParam2)
{
	if (iParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_188(iParam1->f_8, 0) && !func_345(func_301(iParam1->f_8), 2))
	{
		return false;
	}
	if (func_210(iParam2, 128))
	{
		if (!func_345(func_301(iParam1->f_8), 2))
		{
			if (func_357(iParam1->f_8) == 0)
			{
				return false;
			}
		}
	}
	if (func_210(iParam2, 16))
	{
		if (!func_417(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_387(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_388(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1292096.f_20 < 20)
	{
		Global_1292096.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_20.f_1[iVar0 /*21*/] = { Global_1292096.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_445(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_390(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_285(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == iParam1)
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1354270243:
		case -1251985981:
		case -1197011183:
		case 75922725:
		case 975507354:
		case 1070046552:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_392(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_285(bParam0, bParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915643.f_20638)
	{
		iVar34 = Global_1915643.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (Var0[iVar32 /*2*/] == 3.996812E+36f)
			{
				if (!bParam4 && !func_394(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_395(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_396(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_397(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_398(Var0[iVar32 /*2*/], 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32 /*2*/].f_1)
				{
					*uParam2 = { Var0[iVar32 /*2*/] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_393()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

bool func_394(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_38() == 0)
	{
		return func_446(iParam0);
	}
	return iParam0 <= func_447();
}

bool func_395(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_396(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_203(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_397(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_188(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_352(0) };
	Var0.f_4 = func_448(iParam1);
	Var5 = { func_269(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_258(0), &Var5, false);
	return iVar9;
}

int func_398(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_188(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_291(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_449(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_450(bParam0, 0);
	}
	if (func_266(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_258(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_451(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_258(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_399(bool bParam0)
{
	if (!func_188(bParam0, 0))
	{
		return false;
	}
	if (func_203(bParam0, -1.051639E+07f))
	{
		return true;
	}
	return func_400(bParam0);
}

bool func_400(bool bParam0)
{
	if (!func_188(bParam0, 0))
	{
		return false;
	}
	if (func_203(bParam0, -5.092244E+08f))
	{
		return true;
	}
	return false;
}

int func_401(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_452(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_188(bParam1, 0))
	{
		return 0;
	}
	if (!func_453(iParam0))
	{
		return 0;
	}
	iVar0 = func_454(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_455(iVar28))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), true, true, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == bParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_402(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_188(bParam0, 0))
	{
		return 0;
	}
	if (!func_399(bParam0) && !func_400(bParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_456(bParam0, 5.339713E+22f);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_457(-5.45926E-19f, -5.45926E-19f, 0, 1.659074E-30f, 0, 0, -1, iVar13, 0) };
	if (func_458(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			bVar14 = func_459(iVar15, iVar1);
			if (func_188(bVar14, 0) && bParam0 != bVar14)
			{
				iVar16 = func_460(bVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_397(bVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_462(iVar16, func_461(bVar14), bParam0)));
					}
				}
			}
			iVar15++;
		}
		func_463(iVar1);
	}
	return iVar0;
}

int func_403(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_452(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_188(bParam1, 0))
	{
		return 0;
	}
	if (!func_453(iParam0))
	{
		return 0;
	}
	iVar0 = func_454(iParam0);
	bVar1 = bParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_GET_PELT_FROM_HORSE(iVar0, iVar3) != bVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_404(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_188(bParam0, 0))
	{
		return 0;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (bParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_405(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_258(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_406(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

int func_407(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1072759.f_19487 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_330(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_330(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

void func_408(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_464(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_409(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_465(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1295619.f_17[iVar0])
		{
			func_408(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1072759.f_21353.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1295619 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_NETWORK_IS_IN_MY_GANG(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::NETWORK_IS_IN_SAME_GANG(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_409(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_466(&Var6, uVar4);
		}
	}
}

void func_410(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

void func_411(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_245(95));
	if (func_467(iVar0))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iVar0, true);
	}
}

struct<2> func_412(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -6.681918E+13f;
		case 7:
			return -946.1746f;
		case 12:
			return 2.49117E-34f;
		case 11:
			return -4.236482E-12f;
		case 13:
			return 1.219836E-13f;
		case 14:
			return -8.626482E+21f;
		case 15:
			return 9.89104E+10f;
		case 16:
			return 7.705457E+14f;
		case 17:
			return -5.487948E+32f;
		case 18:
			return -1.680517E+28f;
		case 19:
			return -1.650525E+18f;
		case 20:
			return 5.588182E+10f;
		case 21:
			return 1.849123E+31f;
		case 22:
			return -7.550397E+25f;
		case 23:
			return -2.852199E+07f;
		case 24:
			return -1.371075E-22f;
		case 25:
			return -4.225895E-11f;
		case 26:
			return -8.368383E+34f;
		case 27:
			return -2.806178E+34f;
		case 28:
			return -5.453132E-37f;
		case 29:
			return -6.749805E+25f;
		case 30:
			return -1.188034E+30f;
		case 31:
			return 9.316118E+08f;
		case 32:
			return -1.309857E+19f;
		case 33:
			return 4.886178E-05f;
		case 34:
			return 6.747306E+18f;
		case 35:
			return 4.66604E-13f;
		case 36:
			return 1.182982E+08f;
		default:
			break;
	}
	return 0;
}

int func_414(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

int func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1387.259f;
		case 7:
			return -7.269578E+24f;
		case 12:
			return -0.1123552f;
		case 11:
			return -1.825874E+15f;
		case 13:
			return -7.688707E+33f;
		case 14:
			return -1.036406E-27f;
		case 15:
			return -1.593099E-34f;
		case 16:
			return 2.135512E-13f;
		case 17:
			return -1.266827E+21f;
		case 18:
			return -3.254795E+24f;
		case 19:
			return 1.097937E+13f;
		case 20:
			return -3.331883E-09f;
		case 21:
			return 7.472092E-07f;
		case 22:
			return -1.384808E+32f;
		case 23:
			return 1.187948E-35f;
		case 24:
			return NaNf;
		case 25:
			return 0.02791043f;
		case 26:
			return 9.834264E-23f;
		case 27:
			return -1.650117E+25f;
		case 28:
			return -2.281791E-36f;
		case 29:
			return -3.724133E+22f;
		case 30:
			return -6.204737E-11f;
		case 31:
			return -1.286095E+12f;
		case 32:
			return 9.732989E-28f;
		case 33:
			return -4.955405f;
		case 34:
			return 3.41779E-37f;
		case 35:
			return -4.213494E-08f;
		case 36:
			return 0.04164011f;
		default:
			break;
	}
	return 0;
}

bool func_416(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_468(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_385() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

bool func_417(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_469(iParam1->f_8, iParam0, iVar0, 2048) || func_469(iParam1->f_8, iParam0, iVar0, 32768)) || func_469(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_469(iParam1->f_8, iParam0, iVar0, 4) || func_469(iParam1->f_8, iParam0, iVar0, 256)) || func_469(iParam1->f_8, iParam0, iVar0, 65536)) || func_469(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_469(iParam1->f_8, iParam0, iVar0, 1) || func_469(iParam1->f_8, iParam0, iVar0, 8)) || func_469(iParam1->f_8, iParam0, iVar0, 65536)) || func_469(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_469(iParam1->f_8, iParam0, iVar0, 1) || func_469(iParam1->f_8, iParam0, iVar0, 16)) || func_469(iParam1->f_8, iParam0, iVar0, 2)) || func_469(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_469(iParam1->f_8, iParam0, iVar0, 8) || func_469(iParam1->f_8, iParam0, iVar0, 4096)) || func_469(iParam1->f_8, iParam0, iVar0, 256)) || func_469(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

int func_418(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_295(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_295(iParam1, 2, 0, 0);
	return -1;
}

int func_419(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_295(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_420()
{
	if (func_283(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_421(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_258(0);
	*iParam1 = { func_269(bParam0, func_353(0), fParam3, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam1, iParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_422(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1.821884E-21f)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, -3.294982E+22f) == -5.586199E-31f)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iParam2);
}

bool func_423(struct<2> Param0)
{
	return func_470(Param0, 5, 8);
}

bool func_424(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_428(iVar0, 1, 0);
		if (!func_285(bParam0, bVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_429(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_398(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return bVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_425(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	bool bVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar40 = func_428(iVar0, 0, 1);
		if (!func_285(bParam0, bVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_430(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_398(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == 3.996812E+36f || Var9[iVar41 /*2*/] == 3.414007E-11f)
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == 3.996812E+36f) || (!bParam2 && Var9[iVar41 /*2*/] == 3.414007E-11f))
					{
						if (bVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							bVar5 = bVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (bVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						bVar5 = bVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && bVar5 != 0)
			{
				bVar4 = bVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return bVar4;
}

int func_426(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_345(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_38() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_471(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_427(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_188(bParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_428(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 1.50231E-31f;
			case 1:
				return 7.482014E-08f;
			case 2:
				return -0.1784743f;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 3.161818E-36f;
			case 1:
				return 1.559489f;
			case 2:
				return -4.89907E-28f;
			case 3:
				return -2.939334E-18f;
			case 4:
				return -7.965987E-05f;
			default:
				break;
		}
	}
	return 0;
}

bool func_429(bool bParam0)
{
	return func_357(bParam0) == 4.029065E+31f;
}

bool func_430(bool bParam0)
{
	return func_357(bParam0) == -1.955052E+34f;
}

int func_431(int iParam0)
{
	return (iParam0 / 100);
}

void func_432(char* sParam0)
{
	Global_1915643.f_22470 = func_472(sParam0, 10000, 0, 0, 0, 1);
}

bool func_433(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 2.249603E-13f, iParam1))
	{
		return false;
	}
	return true;
}

bool func_434(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_295(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_295(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_295(*iParam0, 2, 0, 0);
		return false;
	}
	func_295(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 4.059549E+37f || iVar0 == 1.704487E-19f)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

int func_435(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	struct<5> Var0;
	bool bVar5;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!func_345(bParam0, 2))
	{
		return 0;
	}
	if (*uParam2 > *uParam1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < *uParam1)
	{
		iVar12++;
	}
	iVar14 = ITEMDATABASE::_0x799FCD53358ED5FA(bParam0, uParam1);
	iVar13 = 0;
	while (iVar13 < iVar14)
	{
		if (ITEMDATABASE::_0xC4146375D8A0B374(bParam0, uParam1, iVar13, &Var0))
		{
			if ((*uParam1)[0] == 0)
			{
				(*uParam1)[0] = Var0;
			}
			else
			{
				*uParam2++;
				(*uParam1)[*uParam2] = Var0;
			}
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(Var0, &bVar5))
			{
				if (func_188(bVar5, 0))
				{
					if (*iParam4 >= 0 && *iParam4 < *uParam3)
					{
						*(uParam3[*iParam4 /*5*/]) = { Var0 };
						*iParam4++;
					}
					else
					{
						return 0;
					}
				}
			}
			(*uParam1)[*uParam2] = 0;
			if (*uParam2 > 0)
			{
				*uParam2 = (*uParam2 - 1);
			}
		}
		iVar13++;
	}
	return 1;
}

bool func_436(bool bParam0, bool bParam1, int iParam2)
{
	struct<37> Var0;
	var uVar47;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	func_473(bParam0, bParam1, &Var0);
	if (bParam1 == -2.401104E+18f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_395((Var0.f_3 * iParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_432(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_431((Var0.f_3 * iParam2))));
			}
			return false;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_394((Var0.f_3 * iParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_432("SHOP_H_TOO_POOR");
			}
			return false;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return true;
	}
	if (!func_444(bParam0, iParam2, bParam1, &uVar47, 1))
	{
		return false;
	}
	return true;
}

bool func_437(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_38() == -1)
	{
		if (func_474(bParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
			bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(bParam0);
	}
	return bVar0;
}

int func_438(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_188(bParam0, 0))
	{
		if (func_345(func_301(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_291(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_266(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_258(bParam3), bParam0);
}

bool func_439(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_188(bParam0, 0) && !func_345(func_301(bParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_440(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -5.45926E-19f;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != bParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_441(bool bParam0, bool bParam1)
{
	if (!func_203(bParam0, 5.908991E-05f))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_203(bParam0, -0.4876374f))
		{
			return func_272(bParam0, 1) != 0;
		}
		if ((func_366(bParam0, -982726.7f, 0) || func_366(bParam0, 2.273041E-17f, 0)) || func_366(bParam0, -2.401104E+18f, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_442(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;

	bVar0 = func_475(bParam0, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (func_373(bVar0, -8.816258E-39f))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_392(bVar0, -8.816258E-39f, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_443(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -5.45926E-19f;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_191(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_444(bool bParam0, int iParam1, bool bParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_476(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_347(0)) && !func_393());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 3.078375E+12f)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && func_394(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && func_395(iVar32))
			{
			}
			else
			{
				iVar33 = func_398(Var0[iVar34 /*2*/], 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { Var0[iVar34 /*2*/] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

void func_445(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_477(&(uParam0->f_4));
}

bool func_446(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_447()
{
	if (func_38() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

float func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4.978612f;
		case 1:
			return -1.082716E-10f;
		default:
			break;
	}
	return 4.978612f;
}

bool func_449(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_188(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_291(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_203(bParam0, 9.811189E+11f))
	{
		func_478(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_450(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_479(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_480(&Var0, func_353(0));
	}
	if (!func_481(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_482(iVar18);
	return iVar19;
}

struct<4> func_451(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_268(bParam0, bParam1, 0) };
	return func_269(bParam0, Var0, Var0.f_4, bParam1);
}

int func_452(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

bool func_453(int iParam0)
{
	iParam0 = func_452(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1902883[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

int func_454(int iParam0)
{
	iParam0 = func_452(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1902883[iParam0 /*43*/];
}

bool func_455(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::GET_IS_ANIMAL(iVar0))
	{
		return false;
	}
	if (FLOCK::_GET_ANIMAL_RARITY(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(iParam0))
	{
		return false;
	}
	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(iParam0))
	{
		return false;
	}
	return true;
}

int func_456(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_457(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -5.45926E-19f)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -5.45926E-19f)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_458(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_459(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_460(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = -7.823627E-38f;
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = 2.350962E+15f;
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = 1.880478E-29f;
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = 9.844682E+16f;
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = -1.122826E+28f;
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = 1.572265E-34f;
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = -2.021815E+13f;
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = -1.247056E-17f;
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = 6.240494E-14f;
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = 1.386534E-13f;
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = 1.60476E-20f;
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = 3.562316E+28f;
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = 1.854381E-37f;
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = 2.425197E-21f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = 9.798023E-15f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = 3.93545E+18f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = -271915.8f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = 6.892114E+25f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = -2.123363E+28f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = -1.573697E-17f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = -5.304321E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = 2.102341E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = -1.260301E-08f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = 2.994223E+24f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = 6.094814E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = 2.117028E+37f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = 0.001931463f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = -2.58118E-05f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = -1.917655E-30f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = -91.68214f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = 2.383896E+14f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = 5.051445E+15f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = 1.242729E-20f;
			break;
	}
	return iVar0;
}

int func_461(bool bParam0)
{
	if (func_203(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_203(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_203(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

int func_462(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_188(uVar0[iVar17], 0) && bParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_463(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_464(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_465(int iParam0, int iParam1, int iParam2)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = Global_1295619.f_16;
		}
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = Global_1295619.f_16;
		return true;
	}
	return false;
}

void func_466(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_483(*uParam0);
}

bool func_467(int iParam0)
{
	return iParam0 != 0;
}

bool func_468(var uParam0)
{
	if (!func_128(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_469(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_140(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_470(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_158(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_484(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_471(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_345(bParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_473(bParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_472(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar15 = UIFEED::_UI_FEED_POST_HELP_TEXT(&Var0, &Var13, bParam5);
	return iVar15;
}

bool func_473(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(bParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(bParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_474(bool bParam0)
{
	return func_291(bParam0) == -3.265313E+23f;
}

bool func_475(bool bParam0, bool bParam1)
{
	if (!func_441(bParam0, bParam1))
	{
		return false;
	}
	if (bParam0 == 5.725531E+31f)
	{
		return func_272(1.90694E+21f, 1);
	}
	else if (bParam0 == 3.260984E-38f)
	{
		return func_272(0.0002301198f, 1);
	}
	else if (bParam0 == 1.541746E-27f)
	{
		return func_272(-1.766809E-31f, 1);
	}
	else if (bParam0 == -1.84846E-25f)
	{
		return func_272(-3.589852E-30f, 1);
	}
	else if (bParam0 == 1.806564E-25f)
	{
		return func_272(-6.181976E+29f, 1);
	}
	else if (bParam0 == -6.888817E-09f)
	{
		return func_272(-7.708751E+16f, 1);
	}
	return func_272(bParam0, 1);
}

bool func_476(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_345(bParam0, 2))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(bParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_485(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

void func_477(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -5.149929E+33f;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

void func_478(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = 2.868836E+26f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = -6.44427E+07f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = -1.5597E+17f;
			*uParam2 = 984456.8f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = -1.340805E-26f;
			*uParam2 = -1.163197E-36f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = -0.0004557966f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = -7.543728E-18f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = -4.09862E-21f;
			*uParam2 = 6.597174E-09f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = -1.78904E-16f;
			*uParam2 = -1.54477E-12f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = -4.051864E-08f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = 6.371044E+11f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = -2.04749E+08f;
			*uParam2 = 1.48591E+21f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = 3.971968E-06f;
			*uParam2 = 3.147558E+28f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = -9.057481E+30f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = 2.184573E-20f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = -9.738313E+24f;
			*uParam2 = -1.21702E+18f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = 39255.64f;
			*uParam2 = 1.256526E-30f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = 0.0001116685f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = -1.441753E-05f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = -8.900574E-37f;
			*uParam2 = 1.249562E-27f;
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = -4.758429E+16f;
			*uParam2 = 4.067655E+37f;
			break;
	}
}

struct<18> func_479(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<18> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	if (bParam0 != 0)
	{
		Var0 = bParam0;
	}
	if (iParam1 != 0 && iParam1 != -5.45926E-19f)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -5.45926E-19f)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -5.45926E-19f)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

void func_480(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_481(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_258(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_482(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_483(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_484(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_240(Param0);
	}
	return -1;
}

void func_485(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if ((*uParam2)[iVar0 /*2*/] == 3.414007E-11f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_357((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

