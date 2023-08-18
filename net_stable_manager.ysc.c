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
	while (!func_2(0, 0))
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}
	func_4();
}

void func_1()
{
	int iVar0;
	int iVar1;

	Global_1291892.f_3 = 0;
	iVar0 = MISC::GET_GAME_TIMER();
	func_5(32, -1);
	func_6();
	if (func_7())
	{
		func_4();
	}
	func_8(&Global_1289627);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1289627, 1, 50);
	if (!func_9(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1289627), 1, "g_mpStableHostData"))
	{
	}
	iVar1 = func_10();
	if ((func_11() && iVar1 > -1) && iVar1 < 32)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_1290237, &(Global_1289628[iVar1 /*19*/]), 19);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289628, 609, 51);
		if (!func_12(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1289628[0 /*19*/])), 609, "g_mpStablePlayerData"))
		{
		}
		MISC::COPY_SCRIPT_STRUCT(&(Global_1289628[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*19*/]), &Global_1290237, 19);
	}
	else
	{
		func_13(&Global_1289628);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289628, 609, 51);
		if (!func_12(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1289628[0 /*19*/])), 609, "g_mpStablePlayerData"))
		{
		}
	}
	if (!func_11())
	{
		func_14(&Global_1290256);
	}
	func_15(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(16);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(16);
	Global_1291892.f_3 = 1;
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

void func_3()
{
	int iVar0;
	int iVar1;

	func_16();
	func_17();
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			func_18(iVar1, iVar0);
		}
		iVar0++;
	}
}

void func_4()
{
	Global_1291892.f_3 = 0;
	func_19();
}

void func_5(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_19();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_6()
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
			func_19();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_19();
					break;
				case 2:
					func_19();
					break;
				case 4:
					func_19();
					break;
				case 3:
					func_19();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_19();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_19();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_19();
		}
		if (func_20() == 0)
		{
			if (func_21())
			{
				func_19();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_19();
	}
	return 1;
}

bool func_7()
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

void func_8(var uParam0)
{
	*uParam0 = 0;
}

bool func_9(int iParam0, int iParam1, char* sParam2)
{
	return true;
}

var func_10()
{
	return Global_1102813.f_3672;
}

bool func_11()
{
	return !Global_1572887.f_10;
}

bool func_12(int iParam0, int iParam1, char* sParam2)
{
	return true;
}

void func_13(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_22(uParam0[iVar0 /*19*/]);
		iVar0++;
	}
}

void func_14(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_10 = 0;
	func_23(&(uParam0->f_11));
	func_24(&(uParam0->f_782));
	func_25(&(uParam0->f_1073));
	func_26(&(uParam0->f_1120));
	func_27(&(uParam0->f_1129));
	func_28(&(uParam0->f_1130));
	uParam0->f_1607 = 0;
	func_29(&(uParam0->f_1608));
	func_30(&(uParam0->f_1628));
	func_31(&(uParam0->f_1634));
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
					func_19();
					break;
				case 2:
					func_19();
					break;
				case 4:
					func_19();
					break;
				case 3:
					func_19();
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
			func_19();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_16()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (Global_1289628[Global_1295619 /*19*/].f_9 & 1 != 0)
	{
		Global_1289628[Global_1295619 /*19*/].f_13 = Global_1290256.f_11.f_51;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_13 = -1;
	}
	if (Global_1289628[Global_1295619 /*19*/].f_9 & 2 != 0)
	{
		if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Global_1289628[Global_1295619 /*19*/].f_2, Global_1289628[Global_1295619 /*19*/].f_3, Global_1289628[Global_1295619 /*19*/].f_9 & 4 != 0, 0))
		{
			func_32(2);
			Global_1289628[Global_1295619 /*19*/].f_2 = 0;
			Global_1289628[Global_1295619 /*19*/].f_3 = -1;
		}
	}
	if (Global_1289628[Global_1295619 /*19*/].f_9 & 16 != 0)
	{
		if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Global_1289628[Global_1295619 /*19*/].f_2, Global_1289628[Global_1295619 /*19*/].f_3, true, 0))
		{
			func_32(16);
			Global_1289628[Global_1295619 /*19*/].f_2 = 0;
			Global_1289628[Global_1295619 /*19*/].f_3 = -1;
		}
	}
	if (Global_1289628[Global_1295619 /*19*/].f_10 & 1 != 0)
	{
		Global_1289628[Global_1295619 /*19*/].f_14 = Global_1290256.f_782.f_46;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_14 = -1;
	}
	if (Global_1289628[Global_1295619 /*19*/].f_10 & 8 != 0)
	{
		if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Global_1289628[Global_1295619 /*19*/].f_4, Global_1289628[Global_1295619 /*19*/].f_5, Global_1289628[Global_1295619 /*19*/].f_10 & 16 != 0, 0))
		{
			func_33(8);
			Global_1289628[Global_1295619 /*19*/].f_4 = 0;
			Global_1289628[Global_1295619 /*19*/].f_5 = -1;
		}
	}
	if (func_34(54))
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 262144;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 262144);
	}
	if (func_34(55))
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 256;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 256);
	}
	if (func_34(56))
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 512;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 512);
	}
	if (func_34(57))
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 64;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 64);
	}
	if (func_34(58))
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 32;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 32);
	}
	if (func_34(59))
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 128;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 128);
	}
	if (func_34(60))
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 1024;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 1024);
	}
	if (func_34(61))
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 2048;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 2048);
	}
	if (func_34(67))
	{
		bVar0 = true;
		if (Global_1290256.f_11.f_306 == 0)
		{
			bVar0 = false;
		}
		if (bVar0 && !SCRIPTS::DOES_THREAD_EXIST(Global_1290256.f_11.f_306))
		{
			bVar0 = false;
		}
		if (bVar0 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1290256.f_11.f_306, false))
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			Global_1290256.f_11.f_306 = 0;
			func_35(67);
		}
	}
	if (func_34(67))
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 8;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 8);
	}
	if (func_34(68))
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 16384;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 16384);
	}
	if (Global_17418.f_55.f_61.f_602 & 262144 != 0)
	{
		Global_1289628[Global_1295619 /*19*/].f_9 |= 8192;
	}
	else
	{
		Global_1289628[Global_1295619 /*19*/].f_9 = (Global_1289628[Global_1295619 /*19*/].f_9 - Global_1289628[Global_1295619 /*19*/].f_9 & 8192);
	}
	if ((((func_34(9) || func_34(10)) || func_34(11)) || func_34(12)) || func_34(13))
	{
		if (func_34(9))
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 1;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 1);
		}
		if (func_34(10))
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 2;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 2);
		}
		if (func_34(11))
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 4;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 4);
		}
		if (func_34(12))
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 8;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 8);
		}
		if (func_34(13))
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 16;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 16);
		}
	}
	else
	{
		if (Global_17418.f_55.f_61.f_602 & 1 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 1;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 1);
		}
		if (Global_17418.f_55.f_61.f_602 & 2 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 2;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 2);
		}
		if (Global_17418.f_55.f_61.f_602 & 4 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 4;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 4);
		}
		if (Global_17418.f_55.f_61.f_602 & 8 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 8;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 8);
		}
		if (Global_17418.f_55.f_61.f_602 & 16 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 16;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 16);
		}
	}
	iVar1 = Global_1289628[Global_1295619 /*19*/].f_11;
	bVar2 = (Global_1901671.f_698.f_35 && func_36());
	if (((((func_34(19) || func_34(20)) || func_34(21)) || func_34(22)) || func_34(23)) || bVar2)
	{
		if (bVar2 || func_34(19))
		{
			Global_1289628[Global_1295619 /*19*/].f_11 |= 1;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_11 = (Global_1289628[Global_1295619 /*19*/].f_11 - Global_1289628[Global_1295619 /*19*/].f_11 & 1);
		}
		if (!bVar2)
		{
			if (func_34(20))
			{
				Global_1289628[Global_1295619 /*19*/].f_11 |= 2;
			}
			else
			{
				Global_1289628[Global_1295619 /*19*/].f_11 = (Global_1289628[Global_1295619 /*19*/].f_11 - Global_1289628[Global_1295619 /*19*/].f_11 & 2);
			}
			if (func_34(21))
			{
				Global_1289628[Global_1295619 /*19*/].f_11 |= 4;
			}
			else
			{
				Global_1289628[Global_1295619 /*19*/].f_11 = (Global_1289628[Global_1295619 /*19*/].f_11 - Global_1289628[Global_1295619 /*19*/].f_11 & 4);
			}
			if (func_34(22))
			{
				Global_1289628[Global_1295619 /*19*/].f_11 |= 8;
			}
			else
			{
				Global_1289628[Global_1295619 /*19*/].f_11 = (Global_1289628[Global_1295619 /*19*/].f_11 - Global_1289628[Global_1295619 /*19*/].f_11 & 8);
			}
			if (func_34(23))
			{
				Global_1289628[Global_1295619 /*19*/].f_11 |= 16;
			}
			else
			{
				Global_1289628[Global_1295619 /*19*/].f_11 = (Global_1289628[Global_1295619 /*19*/].f_11 - Global_1289628[Global_1295619 /*19*/].f_11 & 16);
			}
		}
	}
	else
	{
		if (Global_17418.f_55.f_61.f_602 & 524288 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_11 |= 1;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_11 = (Global_1289628[Global_1295619 /*19*/].f_11 - Global_1289628[Global_1295619 /*19*/].f_11 & 1);
		}
		if (Global_17418.f_55.f_61.f_602 & 1048576 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_11 |= 2;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_11 = (Global_1289628[Global_1295619 /*19*/].f_11 - Global_1289628[Global_1295619 /*19*/].f_11 & 2);
		}
		if (Global_17418.f_55.f_61.f_602 & 2097152 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_11 |= 4;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_11 = (Global_1289628[Global_1295619 /*19*/].f_11 - Global_1289628[Global_1295619 /*19*/].f_11 & 4);
		}
		if (Global_17418.f_55.f_61.f_602 & 4194304 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_11 |= 8;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_11 = (Global_1289628[Global_1295619 /*19*/].f_11 - Global_1289628[Global_1295619 /*19*/].f_11 & 8);
		}
		if (Global_17418.f_55.f_61.f_602 & 8388608 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_11 |= 16;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_11 = (Global_1289628[Global_1295619 /*19*/].f_11 - Global_1289628[Global_1295619 /*19*/].f_11 & 16);
		}
	}
	if (iVar1 != Global_1289628[Global_1295619 /*19*/].f_11)
	{
		func_37();
	}
	if ((((func_34(14) || func_34(15)) || func_34(16)) || func_34(17)) || func_34(18))
	{
		if (func_34(14))
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 32;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 32);
		}
		if (func_34(15))
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 64;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 64);
		}
		if (func_34(16))
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 128;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 128);
		}
		if (func_34(17))
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 256;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 256);
		}
		if (func_34(18))
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 512;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 512);
		}
	}
	else
	{
		if (Global_17418.f_55.f_61.f_602 & 32 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 32;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 32);
		}
		if (Global_17418.f_55.f_61.f_602 & 64 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 64;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 64);
		}
		if (Global_17418.f_55.f_61.f_602 & 128 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 128;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 128);
		}
		if (Global_17418.f_55.f_61.f_602 & 256 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 256;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 256);
		}
		if (Global_17418.f_55.f_61.f_602 & 512 != 0)
		{
			Global_1289628[Global_1295619 /*19*/].f_8 |= 512;
		}
		else
		{
			Global_1289628[Global_1295619 /*19*/].f_8 = (Global_1289628[Global_1295619 /*19*/].f_8 - Global_1289628[Global_1295619 /*19*/].f_8 & 512);
		}
	}
	Global_1290256.f_1120.f_2++;
	Global_1290256.f_1120.f_2 = (Global_1290256.f_1120.f_2 % 32);
}

void func_17()
{
	int iVar0;
	int iVar1;

	func_38();
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_1290256.f_11.f_322 >= 32)
		{
			Global_1290256.f_11.f_322 = 0;
		}
		iVar0 = Global_1290256.f_11.f_322;
		func_39(iVar0, &(Global_1290256.f_11.f_484[iVar0 /*7*/]), Global_1290256.f_11.f_770);
		func_40(iVar0, &(Global_1290256.f_11.f_323[iVar0 /*5*/]), Global_1290256.f_11.f_770);
		Global_1290256.f_11.f_322++;
		iVar1++;
	}
	Global_1290256.f_11.f_770 = 0;
	func_41();
}

void func_18(int iParam0, int iParam1)
{
	var uVar0;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return;
	}
	iVar8 = PLAYER::PLAYER_ID();
	iVar9 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
	{
		if (func_42(iVar8, iParam0, -1))
		{
			func_43(iParam0);
		}
		return;
	}
	iVar10 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
	}
	else
	{
		iVar11 = PLAYER::PLAYER_PED_ID();
		iVar12 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			iVar12 = PED::_0x4642182A298187D0(iVar11, 5, &uVar0, 4, 2);
			if (iVar12 == 0)
			{
				iVar12 = PED::_0x4642182A298187D0(iVar11, 7, &uVar0, 4, 2);
			}
		}
		if (iVar12 != 0)
		{
			if (func_44(iVar9, &uVar0))
			{
				if (!func_42(iVar8, iParam0, -1))
				{
					iVar13 = 0;
					while (iVar13 < 3)
					{
						if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var4, iVar9, func_45(iVar13), 0))
						{
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Var4.f_3))
						{
						}
						else
						{
							iVar14 = iVar13;
						}
						else
						{
							iVar13++;
						}
					}
					func_46(iParam0, iVar14);
				}
			}
			else if (func_42(iVar8, iParam0, -1))
			{
				func_43(iParam0);
			}
		}
		else if (func_42(iVar8, iParam0, -1))
		{
			func_43(iParam0);
		}
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar16 = false;
		iVar15 = 0;
		while (iVar15 < 32)
		{
			if (func_42(iVar8, PLAYER::INT_TO_PLAYERINDEX(iVar15), -1))
			{
				bVar16 = true;
			}
			iVar15++;
		}
		if (bVar16)
		{
			if (!func_47(Global_1289628[iVar10 /*19*/].f_9, 65536))
			{
				func_48(&(Global_1289628[iVar10 /*19*/].f_9), 65536);
			}
			PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 33, 2, true);
		}
		else
		{
			if (func_47(Global_1289628[iVar10 /*19*/].f_9, 65536))
			{
				func_49(&(Global_1289628[iVar10 /*19*/].f_9), 65536);
			}
			PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 33, 2, false);
		}
	}
}

void func_19()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_20()
{
	return Global_1572887.f_14;
}

bool func_21()
{
	return Global_1051645.f_8;
}

void func_22(var uParam0)
{
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = 0;
	uParam0->f_11 = 0;
	uParam0->f_13 = -1;
	uParam0->f_14 = -1;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_23(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_50(&(uParam0->f_3));
	func_51(&(uParam0->f_18));
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_51 = -1;
	uParam0->f_52 = -1;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = 0f;
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = func_52(2880);
	uParam0->f_62 = -1;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	func_53(&(uParam0->f_65));
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = { 0f, 0f, 0f };
	uParam0->f_77 = 0f;
	func_54(&(uParam0->f_78));
	uParam0->f_102 = 0;
	uParam0->f_103 = 0;
	uParam0->f_105 = 0;
	func_53(&(uParam0->f_106));
	StringCopy(&(uParam0->f_110), "", 64);
	uParam0->f_118 = 0;
	uParam0->f_122 = 0;
	func_53(&(uParam0->f_123));
	uParam0->f_127 = -1;
	func_54(&(uParam0->f_128));
	uParam0->f_152 = 0;
	uParam0->f_153 = 0;
	uParam0->f_303 = 0f;
	iVar0 = 0;
	while (iVar0 < uParam0->f_162)
	{
		func_55(&(uParam0->f_162[iVar0 /*7*/]));
		iVar0++;
	}
}

void func_24(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	func_50(&(uParam0->f_2));
	func_51(&(uParam0->f_17));
	uParam0->f_45 = 0;
	uParam0->f_46 = -1;
	uParam0->f_47 = -1;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = { 0f, 0f, 0f };
	uParam0->f_53 = 0f;
	uParam0->f_54 = 0;
	uParam0->f_55 = -1;
	uParam0->f_56 = 0;
	func_53(&(uParam0->f_57));
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_65 = -1;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = 0f;
	func_53(&(uParam0->f_77));
	uParam0->f_81 = -1;
	func_54(&(uParam0->f_82));
	uParam0->f_106 = 0;
	uParam0->f_220 = 0;
	uParam0->f_221 = 0;
	func_53(&(uParam0->f_222));
	StringCopy(&(uParam0->f_226), "", 64);
	uParam0->f_235 = 0;
	func_53(&(uParam0->f_236));
	uParam0->f_240 = -1;
	func_54(&(uParam0->f_241));
	uParam0->f_265 = 0;
	uParam0->f_269 = 0;
	uParam0->f_280 = 0;
	uParam0->f_281 = 0;
	uParam0->f_282 = 0;
	uParam0->f_283 = -1;
	uParam0->f_284 = 0;
	uParam0->f_285 = 0;
	uParam0->f_285.f_1 = 0;
	uParam0->f_285.f_2 = 0;
	uParam0->f_285.f_3 = 0;
	if (MAP::DOES_BLIP_EXIST(uParam0->f_289))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_289));
	}
	if (uParam0->f_290 != 0)
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(uParam0->f_290, false);
		uParam0->f_290 = 0;
	}
}

void func_25(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_56(&(uParam0->f_4));
}

void func_26(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	uParam0->f_8 = 0;
}

void func_27(var uParam0)
{
	*uParam0 = -1;
}

void func_28(var uParam0)
{
	func_53(uParam0);
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
}

void func_29(var uParam0)
{
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_9 = -1;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0f;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_18 = -15;
	uParam0->f_19 = 0;
}

void func_30(var uParam0)
{
	int iVar0;

	func_57(uParam0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3[iVar0] = 0f;
		iVar0++;
	}
}

void func_31(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_32(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289628[iVar0 /*19*/].f_9 = (Global_1289628[iVar0 /*19*/].f_9 - (Global_1289628[iVar0 /*19*/].f_9 && iParam0));
}

void func_33(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289628[iVar0 /*19*/].f_10 = (Global_1289628[iVar0 /*19*/].f_10 - (Global_1289628[iVar0 /*19*/].f_10 && iParam0));
}

bool func_34(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_1903834.f_496[iVar0], iVar1);
}

void func_35(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_58(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

var func_36()
{
	return Global_1896762.f_352;
}

void func_37()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (Global_1289628[iVar1 /*19*/].f_11 & 1 == 0)
	{
		if (Global_1289628[iVar1 /*19*/].f_11 & 2 != 0)
		{
			iVar0 |= 4;
		}
		if (Global_1289628[iVar1 /*19*/].f_11 & 4 != 0)
		{
			iVar0 |= 8;
		}
		if (Global_1289628[iVar1 /*19*/].f_11 & 8 != 0)
		{
			iVar0 |= 16;
		}
		if (Global_1289628[iVar1 /*19*/].f_11 & 16 != 0)
		{
			iVar0 = 2;
		}
	}
	PLAYER::_0x4EC8BE63B8A5D4EF(PLAYER::PLAYER_ID(), iVar0);
}

void func_38()
{
	NETWORK::_GET_RESERVED_MISSION_ENTITIES_FOR_THREAD(SCRIPTS::GET_ID_OF_THIS_THREAD(), &(Global_1290256.f_11.f_709), &(Global_1290256.f_11.f_709.f_1), &(Global_1290256.f_11.f_709.f_2), &(Global_1290256.f_11.f_709.f_3), &(Global_1290256.f_11.f_709.f_4), &(Global_1290256.f_11.f_709.f_5));
}

int func_39(int iParam0, var uParam1, var uParam2)
{
	if (!MISC::IS_BIT_SET(Global_1290256.f_11.f_321, iParam0))
	{
		return 0;
	}
	if (!func_59(uParam1, uParam2))
	{
		return 0;
	}
	uParam1->f_3 = 0;
	uParam1->f_4 = 0;
	uParam1->f_4.f_1 = 0;
	if (func_60(uParam1))
	{
		func_57(uParam1);
	}
	MISC::CLEAR_BIT(&(Global_1290256.f_11.f_321), iParam0);
	if ((uParam1->f_6 && Global_1291892.f_2) && Global_1291892 == iParam0)
	{
		Global_1291892 = -1;
		Global_1291892.f_2 = 0;
	}
	func_38();
	return 1;
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(Global_1290256.f_11.f_320, iParam0))
	{
		return 0;
	}
	if (!func_61(bParam1, bParam2))
	{
		return 0;
	}
	iVar0 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(bParam1->f_2) && func_47(bParam1->f_4, 2))
	{
		switch (bParam1->f_3)
		{
			case 0:
			case 1:
				if (!func_62(bParam1, &iVar0))
				{
					return 0;
				}
				break;
		}
	}
	if (func_47(bParam1->f_4, 8))
	{
		switch (bParam1->f_3)
		{
			case 0:
			case 1:
				if (iVar0 != -1)
				{
					Global_1291892 = iVar0;
					Global_1291892.f_2 = 1;
				}
				else
				{
					Global_1291892 = -1;
					Global_1291892.f_2 = 0;
				}
				break;
			case 2:
			case 3:
				Global_1291892.f_1 = -1;
				break;
		}
	}
	bParam1->f_2 = 0;
	bParam1->f_3 = -1;
	bParam1->f_4 = 0;
	*bParam1 = 0;
	bParam1->f_1 = 0;
	MISC::CLEAR_BIT(&(Global_1290256.f_11.f_320), iParam0);
	func_38();
	return 1;
}

void func_41()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = func_63();
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar0)))
	{
		if (Global_1901671.f_698.f_37)
		{
		}
		else
		{
			func_64();
		}
	}
}

bool func_42(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;

	if (!func_65())
	{
		return false;
	}
	if (!func_66(iParam1, &uVar0) || !func_66(iParam0, &iVar1))
	{
		return false;
	}
	return (Global_1289628[iVar1 /*19*/].f_6 == iParam1 && (iParam2 == -1 || Global_1289628[iVar1 /*19*/].f_7 == iParam2));
}

int func_43(int iParam0)
{
	var uVar0;
	int iVar1;

	if (!func_65())
	{
		return 0;
	}
	if (!func_66(iParam0, &uVar0))
	{
		return 0;
	}
	if (!func_66(PLAYER::PLAYER_ID(), &iVar1))
	{
		return 0;
	}
	Global_1289628[iVar1 /*19*/].f_6 = 255;
	Global_1289628[iVar1 /*19*/].f_7 = -1;
	return 1;
}

bool func_44(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && ENTITY::IS_ENTITY_A_PED(uParam1->f_1))
	{
		if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1))
		{
			return true;
		}
	}
	return false;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!func_65())
	{
		return 0;
	}
	if (!func_66(iParam0, &uVar0))
	{
		return 0;
	}
	if (!func_66(PLAYER::PLAYER_ID(), &iVar1))
	{
		return 0;
	}
	Global_1289628[iVar1 /*19*/].f_6 = iParam0;
	Global_1289628[iVar1 /*19*/].f_7 = iParam1;
	return 1;
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_49(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_50(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_67(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

void func_51(var uParam0)
{
	func_68(uParam0);
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = -1;
	uParam0->f_9 = 10;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_13 = 0f;
	uParam0->f_14 = 0f;
	uParam0->f_15 = 0f;
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0;
	uParam0->f_23 = -1;
	uParam0->f_24 = { 0f, 0f, 0f };
	uParam0->f_27 = 0f;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 <= 0)
	{
		return 0;
	}
	CLOCK::GET_POSIX_TIME(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + MISC::GET_RANDOM_INT_IN_RANGE(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

void func_53(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_54(var uParam0)
{
	func_53(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_69() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

void func_55(var uParam0)
{
	*uParam0 = { func_69() };
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
}

void func_56(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_70(uParam0[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_58(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

bool func_59(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return true;
	}
	if (!func_60(uParam0))
	{
		func_71(uParam0);
	}
	iVar0 = 255;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_4)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam0->f_4));
	}
	bVar1 = (uParam1 && uParam0->f_6);
	if (!bVar1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (!func_72(uParam0, 1106247680 /* Float: 30f */))
			{
				return false;
			}
			else if (uParam0->f_6)
			{
				if (!NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3))
				{
					return false;
				}
			}
		}
	}
	else if (!NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return false;
	}
	if (!func_73(uParam0->f_3))
	{
		return false;
	}
	ENTITY::DELETE_ENTITY(&(uParam0->f_3));
	return false;
}

bool func_60(var uParam0)
{
	return func_74(*uParam0, 1);
}

bool func_61(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0->f_2))
	{
		return true;
	}
	if (!func_47(bParam0->f_4, 16))
	{
		bParam0->f_4 |= 16;
	}
	switch (bParam0->f_3)
	{
		case -1:
		case 6:
			if (!func_75(bParam0))
			{
				return false;
			}
			break;
		case 2:
		case 3:
			if (!func_76(bParam0))
			{
				return false;
			}
			break;
		case 0:
		case 1:
			if (!func_77(bParam0, bParam1))
			{
				return false;
			}
			break;
		case 4:
			break;
	}
	return true;
}

bool func_62(bool bParam0, int iParam1)
{
	int iVar0;

	*iParam1 = -1;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0->f_2))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_1290256.f_11.f_321, iVar0))
		{
			Global_1290256.f_11.f_484[iVar0 /*7*/].f_3 = bParam0->f_2;
			Global_1290256.f_11.f_484[iVar0 /*7*/].f_4 = { *bParam0 };
			Global_1290256.f_11.f_484[iVar0 /*7*/].f_6 = func_47(bParam0->f_4, 8);
			func_71(&(Global_1290256.f_11.f_484[iVar0 /*7*/]));
			MISC::SET_BIT(&(Global_1290256.f_11.f_321), iVar0);
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_63()
{
	if (Global_1291892 < 0 || Global_1291892 >= 32)
	{
		return 0;
	}
	if (Global_1291892.f_2)
	{
		if (!MISC::IS_BIT_SET(Global_1290256.f_11.f_321, Global_1291892))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1290256.f_11.f_484[Global_1291892 /*7*/].f_3))
		{
			return 0;
		}
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1290256.f_11.f_484[Global_1291892 /*7*/].f_3);
	}
	if (!MISC::IS_BIT_SET(Global_1290256.f_11.f_320, Global_1291892))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1290256.f_11.f_323[Global_1291892 /*5*/].f_2))
	{
		return 0;
	}
	return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1290256.f_11.f_323[Global_1291892 /*5*/].f_2);
}

void func_64()
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	struct<11> Var98;
	int iVar194;
	var uVar195;
	int iVar199;
	bool bVar200;
	bool bVar201;
	bool bVar202;
	bool bVar203;
	int iVar204;

	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar0 = func_63();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	Var2.f_10 = 10;
	Var98.f_10 = 10;
	bVar200 = true;
	bVar201 = false;
	bVar202 = false;
	bVar203 = ((PED::IS_PED_RAGDOLL(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || TASK::IS_PED_IN_WRITHE(iVar0));
	iVar199 = 0;
	while (iVar199 < 3)
	{
		iVar1 = iVar199;
		iVar194 = func_45(iVar199);
		func_78(&Var2);
		if (bVar203 || func_79(iVar0, iVar199, iVar194, &bVar201, &bVar202, &bVar200))
		{
			if (!Global_1903834.f_112 || bVar202)
			{
			}
			else
			{
				if (Global_1903834.f_113[iVar1 /*96*/].f_1 != 0)
				{
					Global_1940239.f_5 = 1;
					if (func_80(iVar0, Global_1903834.f_113[iVar1 /*96*/].f_1, iVar199))
					{
						func_81(iVar0, Global_1903834.f_113[iVar1 /*96*/].f_1, 1, !bVar201, -5.149929E+33f);
					}
				}
				Global_1290256.f_1139.f_241[iVar199] = 0;
				Global_1290256.f_1139.f_258[iVar199] = 0;
				MISC::COPY_SCRIPT_STRUCT(&(Global_1290256.f_1139.f_245[iVar199 /*4*/]), &uVar195, 4);
				func_82(&Var98, &(Global_1903834.f_113[iVar1 /*96*/]));
				Jump @615; //curOff = 323
				Jump @615; //curOff = 326
				if (bVar202)
				{
				}
				else
				{
					iVar204 = Global_1290256.f_1139.f_245[iVar199 /*4*/].f_3;
					if (ENTITY::DOES_ENTITY_EXIST(iVar204))
					{
						Global_1290256.f_1139.f_258[iVar199] = (!ENTITY::_GET_ENTITY_CARRYING_FLAG(iVar204, 2) || ENTITY::_GET_ENTITY_CARRYING_FLAG(iVar204, 27));
					}
					func_83(iVar204, &Var2);
					if (Global_1903834.f_113[iVar1 /*96*/].f_1 != 0)
					{
						if (Global_1903834.f_113[iVar1 /*96*/].f_1 != Var2.f_1)
						{
							if (func_80(iVar0, Global_1903834.f_113[iVar1 /*96*/].f_1, iVar199))
							{
								func_81(iVar0, Global_1903834.f_113[iVar1 /*96*/].f_1, 1, !bVar201, -5.149929E+33f);
								if (Var2.f_1 != 0)
								{
									if (func_84(iVar0, Var2.f_1, iVar199))
									{
										func_85(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), Var2.f_1, 1);
										Global_1903834.f_113[iVar1 /*96*/].f_1 = Var2.f_1;
									}
								}
								Global_1940239.f_5 = 1;
							}
						}
					}
					else if (func_84(iVar0, Var2.f_1, iVar199))
					{
						func_85(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), Var2.f_1, 1);
						Global_1940239.f_5 = 1;
					}
					func_82(&Var2, &(Global_1903834.f_113[iVar1 /*96*/]));
				}
			}
			iVar199++;
			if ((!Global_1903834.f_112 && Global_1903834.f_111) && bVar200)
			{
				Global_1903834.f_112 = 1;
			}
		}
	}
}

bool func_65()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[18], false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_stable_manager", -1, true, 0))
	{
		return false;
	}
	return Global_1291892.f_3;
}

bool func_66(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	*iParam1 = iParam0;
	return (*iParam1 > -1 && *iParam1 < 32);
}

void func_67(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

void func_68(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

struct<4> func_69()
{
	struct<4> Var0;

	return Var0;
}

void func_70(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_71(var uParam0)
{
	func_86(uParam0, 0f);
}

bool func_72(var uParam0, float fParam1)
{
	if (!func_60(uParam0))
	{
		return false;
	}
	if (func_87(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_73(int iParam0)
{
	if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return true;
	}
	switch (ENTITY::GET_ENTITY_TYPE(iParam0))
	{
		case 1:
			if (!func_88())
			{
				return false;
			}
			break;
		case 2:
			if (!func_89())
			{
				return false;
			}
			break;
		case 3:
			break;
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return true;
	}
	return false;
}

bool func_74(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_75(var uParam0)
{
	bool bVar0;
	var uVar1;

	bVar0 = func_47(uParam0->f_4, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		return true;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_2))
	{
		return false;
	}
	if (!func_73(uParam0->f_2))
	{
		return false;
	}
	if (bVar0)
	{
		if (!func_90(uParam0->f_2, uParam0->f_3))
		{
			return false;
		}
		else
		{
			uVar1 = uParam0->f_2;
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar1);
			return true;
		}
	}
	else
	{
		ENTITY::DELETE_ENTITY(&(uParam0->f_2));
	}
	return false;
}

bool func_76(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_47(uParam0->f_4, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_2))
	{
		if (func_75(uParam0))
		{
			return true;
		}
		return false;
	}
	iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return true;
	}
	if (VEHICLE::_IS_VEHICLE_FADING_OUT(iVar1))
	{
		return true;
	}
	if (func_91(iVar1))
	{
		return true;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_2))
	{
		return false;
	}
	if (!func_73(iVar1))
	{
		return false;
	}
	AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar1, 17, true);
	if (!bVar0)
	{
		func_92(iVar1, 0);
	}
	else
	{
		func_92(iVar1, 1);
		TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(iVar1, false);
	}
	if (bVar0)
	{
		if (!func_90(iVar1, uParam0->f_3))
		{
			return false;
		}
		else
		{
			TASK::_TASK_VEHICLE_FLEE_ON_CLEANUP(iVar1, 0f, 0f, 0f, 8f, 1008.149f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
			return true;
		}
	}
	else
	{
		VEHICLE::_FADE_AND_DESTROY_VEHICLE(&iVar1);
	}
	return false;
}

bool func_77(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_47(bParam0->f_4, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0->f_2))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0->f_2))
	{
		return func_75(bParam0);
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return true;
	}
	bVar2 = func_93(iVar1);
	if (bParam1 && func_47(bParam0->f_4, 8))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
		bVar0 = false;
	}
	else if (bVar0 && func_91(iVar1))
	{
		return true;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return false;
	}
	if (PED::_IS_PED_QUEUED_FOR_DELETION(iVar1))
	{
		return false;
	}
	PED::SET_PED_RESET_FLAG(iVar1, 105, true);
	if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(iVar1, 34))
	{
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 34, true);
	}
	if (!func_73(iVar1))
	{
		return false;
	}
	if (!bVar2)
	{
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
	PED::SET_LOOTING_FLAG(iVar1, 4, false);
	PED::SET_LOOTING_FLAG(iVar1, 0, false);
	PED::SET_LOOTING_FLAG(iVar1, 1, false);
	PED::SET_PED_CONFIG_FLAG(iVar1, 136, true);
	PED::SET_PED_CONFIG_FLAG(iVar1, 288, true);
	PED::SET_PED_CONFIG_FLAG(iVar1, 211, false);
	PED::SET_PED_CONFIG_FLAG(iVar1, 297, false);
	PED::SET_PED_CONFIG_FLAG(iVar1, 400, false);
	PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
	AITRANSPORT::SET_TRANSPORT_ACCESSIBLE_SEAT_FLAGS(iVar1, 0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 34, true);
	PED::_SET_PED_TO_BE_REMOVED(iVar1, 20f, 150f, 30000, 5000);
	if (!ENTITY::IS_ENTITY_DEAD(iVar1) && TASK::IS_PED_IN_WRITHE(iVar1))
	{
		ENTITY::SET_ENTITY_HEALTH(iVar1, 0, 0);
	}
	if (bVar0)
	{
		if (!func_90(bParam0->f_2, bParam0->f_3))
		{
			return false;
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				iVar3 = 255;
				if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam0))
				{
					iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam0);
				}
				iVar4 = 0;
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
				{
					iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					TASK::TASK_FLEE_COORD(iVar1, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 4, 24832, 20000f, -1, 0);
				}
				else
				{
					TASK::TASK_FLEE_PED(iVar1, iVar4, 4, 24832, 20000f, -1, 0);
				}
			}
			PED::_SET_REMOVE_PED_NETWORKED(iVar1, -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			return true;
		}
	}
	else
	{
		PED::FADE_AND_DESTROY_PED(&iVar1);
	}
	return false;
}

void func_78(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		uParam0->f_10[iVar0 /*8*/].f_1 = 0;
		uParam0->f_10[iVar0 /*8*/].f_2 = 0;
		uParam0->f_10[iVar0 /*8*/].f_3 = 0;
		uParam0->f_10[iVar0 /*8*/].f_4 = 0;
		uParam0->f_10[iVar0 /*8*/].f_5 = 0;
		uParam0->f_10[iVar0 /*8*/].f_6 = 0;
		uParam0->f_10[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

bool func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;

	*iParam3 = 0;
	*iParam4 = 0;
	iVar4 = Global_1290256.f_1139.f_245[iParam1 /*4*/].f_3;
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var0, iParam0, iParam2, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			Global_1290256.f_1139.f_258[iParam1] = (!ENTITY::_GET_ENTITY_CARRYING_FLAG(iVar4, 2) || ENTITY::_GET_ENTITY_CARRYING_FLAG(iVar4, 27));
		}
		if (Global_1290256.f_1139.f_258[iParam1])
		{
			if (Global_1901671.f_698.f_36)
			{
			}
			else
			{
				*iParam4 = 1;
				return false;
			}
		}
		return true;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_1290256.f_1139.f_245[iParam1 /*4*/]), &Var0, 4);
	iVar5 = Var0.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		if (iVar4 != iVar5)
		{
			*iParam3 = 1;
			return true;
		}
		else if (ENTITY::IS_ENTITY_A_PED(iVar4) && PED::_IS_PED_QUEUED_FOR_DELETION(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4)))
		{
			*iParam4 = 1;
			return false;
		}
	}
	iVar6 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar5);
	if (iVar6 != 7)
	{
		*iParam5 = 0;
		if (Global_1290256.f_1139.f_241[iParam1] == 7)
		{
			*iParam3 = 1;
		}
		Global_1290256.f_1139.f_241[iParam1] = iVar6;
		return true;
	}
	Global_1290256.f_1139.f_241[iParam1] = iVar6;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar5) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5)))
	{
		return true;
	}
	return false;
}

bool func_80(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	switch (iParam2)
	{
		case 0:
			if (Global_1903834.f_113[1 /*96*/].f_1 == bParam1)
			{
				iVar0++;
			}
			if (Global_1903834.f_113[2 /*96*/].f_1 == bParam1)
			{
				iVar0++;
			}
			break;
		case 1:
			if (Global_1903834.f_113[0 /*96*/].f_1 == bParam1)
			{
				iVar0++;
			}
			if (Global_1903834.f_113[2 /*96*/].f_1 == bParam1)
			{
				iVar0++;
			}
			break;
		case 2:
			if (Global_1903834.f_113[1 /*96*/].f_1 == bParam1)
			{
				iVar0++;
			}
			if (Global_1903834.f_113[0 /*96*/].f_1 == bParam1)
			{
				iVar0++;
			}
			break;
	}
	if (func_94(bParam1))
	{
		iVar0 = (iVar0 + func_95(bParam1));
	}
	iVar1 = func_96(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
	if ((iVar1 - 1) < iVar0)
	{
		return false;
	}
	return true;
}

int func_81(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_97(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1, iParam2, bParam3, iParam4);
}

void func_82(bool bParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, bParam0, 96);
}

void func_83(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	*uParam1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uParam1->f_1 = func_98(iParam0);
	uParam1->f_2 = ENTITY::_0xD21C7418C590BB40(iParam0);
	uParam1->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iParam0);
	uParam1->f_93 = ENTITY::_0xB16C780C51E51E2B(iParam0);
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		uParam1->f_95 = 0;
		uParam1->f_92 = 0;
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		uParam1->f_95 = 0;
		uParam1->f_92 = 0;
		return;
	}
	uParam1->f_4 = PED::_GET_PED_QUALITY(iVar0);
	uParam1->f_9 = PED::_GET_NUM_COMPONENTS_IN_PED(iVar0);
	uParam1->f_6 = PED::_GET_PED_DAMAGE_CLEANLINESS(iVar0);
	uParam1->f_7 = PED::_GET_PED_DAMAGED(iVar0);
	uParam1->f_94 = ENTITY::_0x37B01666BAE8F7EF(iVar0);
	uParam1->f_91 = PERSISTENCE::_0x2E545965DF98D476(iParam0);
	uParam1->f_8 = PED::_GET_PED_META_OUTFIT_HASH(iVar0);
	if (uParam1->f_9 < 1)
	{
		uParam1->f_9 = 0;
	}
	else if (uParam1->f_9 >= 10)
	{
		uParam1->f_9 = 9;
	}
	if (uParam1->f_9 > 0)
	{
		iVar1 = 0;
		while (iVar1 < uParam1->f_9)
		{
			if (PED::GET_META_PED_ASSET_GUIDS(iVar0, iVar1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				uParam1->f_10[iVar1 /*8*/] = uVar2;
				uParam1->f_10[iVar1 /*8*/].f_1 = uVar3;
				uParam1->f_10[iVar1 /*8*/].f_2 = uVar4;
				uParam1->f_10[iVar1 /*8*/].f_3 = uVar5;
			}
			if (PED::GET_META_PED_ASSET_TINT(iVar0, iVar1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				uParam1->f_10[iVar1 /*8*/].f_4 = uVar2;
				uParam1->f_10[iVar1 /*8*/].f_5 = uVar3;
				uParam1->f_10[iVar1 /*8*/].f_6 = uVar4;
				uParam1->f_10[iVar1 /*8*/].f_7 = uVar5;
			}
			iVar1++;
		}
	}
	if (!func_99(uParam1->f_1))
	{
		uParam1->f_95 = 0;
		uParam1->f_92 = 0;
	}
	else
	{
		uParam1->f_95 = TASK::_0x7CB99FADDE73CD1B(iVar0);
		uParam1->f_92 = (PED::_IS_META_PED_USING_COMPONENT(iVar0, 2.205541E-37f) || ENTITY::_IS_ENTITY_FULLY_LOOTED(iParam0));
	}
}

bool func_84(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (Global_1903834.f_113[1 /*96*/].f_1 != bParam1)
	{
		iVar0++;
	}
	if (Global_1903834.f_113[2 /*96*/].f_1 != bParam1)
	{
		iVar0++;
	}
	if (Global_1903834.f_113[0 /*96*/].f_1 != bParam1)
	{
		iVar0++;
	}
	iVar1 = func_96(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
	if (func_94(bParam1))
	{
		iVar1 = (iVar1 - func_95(bParam1));
	}
	if (iVar1 < iVar0)
	{
		return true;
	}
	return false;
}

int func_85(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_100(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_101(iParam0) };
	Var5 = { func_102(iParam0, bParam1, Var0, Var0.f_4) };
	if (INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(iParam0, &Var5, &Var0, bParam1, Var0.f_4, iParam2, 6.028273E-12f))
	{
		return 1;
	}
	return 0;
}

void func_86(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_103() - fParam1);
	func_104(uParam0, 1);
	func_105(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_87(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_106(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_103() - uParam0->f_1);
}

bool func_88()
{
	return Global_1290256.f_11.f_709.f_3 < Global_1290256.f_11.f_709;
}

bool func_89()
{
	return Global_1290256.f_11.f_709.f_4 < Global_1290256.f_11.f_709.f_1;
}

bool func_90(int iParam0, int iParam1)
{
	bool bVar0;

	if (func_91(iParam0))
	{
		return true;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	bVar0 = true;
	if (iParam1 == -1)
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			iParam1 = 2;
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iParam1 = 0;
		}
		else
		{
			return true;
		}
	}
	switch (iParam1)
	{
		case 0:
		case 1:
			bVar0 = (func_108(iParam0, func_107()) && bVar0);
			bVar0 = (func_108(iParam0, func_109()) && bVar0);
			bVar0 = (func_108(iParam0, func_110()) && bVar0);
			bVar0 = (func_108(iParam0, func_111()) && bVar0);
			bVar0 = (func_108(iParam0, func_112()) && bVar0);
			bVar0 = (func_108(iParam0, "loot_long_custom_anim_data_set") && bVar0);
			bVar0 = (func_108(iParam0, "HorseCamp") && bVar0);
			bVar0 = (func_108(iParam0, "HorseCompanion") && bVar0);
			bVar0 = (func_108(iParam0, "CaravanCommonHorse") && bVar0);
			bVar0 = (func_108(iParam0, "CaravanLivestock") && bVar0);
			bVar0 = (func_108(iParam0, "StableOwnedHorse") && bVar0);
			bVar0 = (func_108(iParam0, "HorseMission") && bVar0);
			bVar0 = (func_108(iParam0, "bHorseHasBeenStolen") && bVar0);
			bVar0 = (func_108(iParam0, "HorseGender") && bVar0);
			break;
		case 2:
		case 3:
		case 4:
			bVar0 = (func_108(iParam0, "SyncedFlags01") && bVar0);
			bVar0 = (func_108(iParam0, "SummonPosXY") && bVar0);
			bVar0 = (func_108(iParam0, "SummonPosZ") && bVar0);
			break;
		case 5:
			return true;
	}
	if (bVar0)
	{
		if (func_108(iParam0, "bHasScriptBrain"))
		{
			return true;
		}
	}
	return false;
}

bool func_91(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "bHasScriptBrain"))
	{
		return true;
	}
	return false;
}

void func_92(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_113(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 9)
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (!bParam1 || ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::_WARP_PED_OUT_OF_VEHICLE(iVar0);
					}
				}
			}
			iVar1++;
		}
	}
}

int func_93(int iParam0)
{
	var uVar0[3];
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_114(iParam0))
	{
		return 1;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return 1;
	}
	iVar4 = func_115(iParam0, &uVar0, 3);
	iVar5 = 0;
	iVar6 = 0;
	while (iVar6 < iVar4)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar0[iVar6]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar6]) || (ENTITY::IS_ENTITY_A_PED(uVar0[iVar6]) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar0[iVar6]))))
			{
				PED::DETACH_CARRIABLE_ENTITY(uVar0[iVar6], false, false);
				iVar5++;
			}
			else
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uVar0[iVar6], 2, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uVar0[iVar6], 27, true);
				iVar5++;
			}
		}
		else if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(uVar0[iVar6], 2))
		{
			if (ENTITY::_GET_ENTITY_CARRYING_FLAG(uVar0[iVar6], 27))
			{
				iVar5++;
			}
		}
		iVar6++;
	}
	if (iVar4 == iVar5)
	{
		return 1;
	}
	return 0;
}

bool func_94(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_116(bParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_117(iVar0, 1);
		iVar2 = iVar1;
		if (bParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_95(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_100(bParam0, 0))
	{
		return 0;
	}
	if (!func_94(bParam0))
	{
		return 0;
	}
	bVar0 = func_118(bParam0);
	iVar1 = func_119(bVar0, 1);
	return Global_1903834.f_402[iVar1];
}

int func_96(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_100(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_120(iParam0, bParam1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &Var0, false);
	return iVar4;
}

int func_97(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_100(bParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 9.275179E-19f;
	bVar1 = iParam4 == 1.994827E+33f;
	bVar2 = iParam4 == -1.202057E-11f;
	if (!func_121(iParam0, bParam1, 1))
	{
		return 0;
	}
	Var3 = { func_122(bParam1) };
	if (STATS::STAT_ID_IS_VALID(&Var3))
	{
		if ((func_96(iParam0, bParam1) - iParam2) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var3, iParam2);
		}
		else if ((func_96(iParam0, bParam1) - iParam2) < 0)
		{
			func_97(iParam0, bParam1, func_123(bParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_124(iParam0, bParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && bParam1 != 6.236711E+08f)
	{
		func_125(bParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_98(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam0) || ENTITY::_GET_IS_BIRD(iParam0))
	{
		bVar0 = func_126(&iParam0);
		if (!func_100(bVar0, 0))
		{
			bVar0 = func_127(iParam0);
		}
	}
	else
	{
		bVar0 = func_127(iParam0);
	}
	return bVar0;
}

bool func_99(bool bParam0)
{
	if (!func_100(bParam0, 0))
	{
	}
	if (func_128(bParam0, 9.077182E+07f))
	{
		return true;
	}
	return false;
}

bool func_100(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

struct<5> func_101(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_102(iParam0, 2.982335E+09f, func_69(), -5.45926E-19f) };
	Var0.f_4 = 4.978612f;
	return Var0;
}

struct<4> func_102(int iParam0, bool bParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_100(bParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &Var0);
	return Var0;
}

float func_103()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_104(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_105(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_106(var uParam0)
{
	return func_74(*uParam0, 2);
}

char* func_107()
{
	return "NetStableMount";
}

bool func_108(int iParam0, char* sParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sParam1))
	{
		return true;
	}
	return DECORATOR::DECOR_REMOVE(iParam0, sParam1);
}

char* func_109()
{
	return "NetStableGUID1";
}

char* func_110()
{
	return "NetStableGUID2";
}

char* func_111()
{
	return "NetStableGUID3";
}

char* func_112()
{
	return "NetStableGUID4";
}

bool func_113(int iParam0)
{
	int iVar0;

	iVar0 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

bool func_114(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

int func_115(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*uParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iVar4;
		}
	}
}

bool func_116(bool bParam0)
{
	if (!func_100(bParam0, 0))
	{
		return false;
	}
	return (func_128(bParam0, 2.062334E+22f) || INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(bParam0));
}

int func_117(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.194836E+10f;
		case 1:
			return 4.055176E+26f;
		case 2:
			return -3.457366E-20f;
		case 3:
			return -8.795801E-36f;
		case 4:
			return -3.308018E-18f;
		case 5:
			return 2.795243E-08f;
		case 6:
			return 5.734056E+37f;
		case 7:
			return 3853674f;
		case 8:
			return -1.461989E-28f;
		case 9:
			return -4.858591E+07f;
		case 10:
			return 2.221196E+19f;
		case 11:
			return -4.295577E+13f;
		case 12:
			return 1.911961E-22f;
		case 13:
			return 3.139678E+30f;
		case 14:
			return -3.728146E-26f;
		case 15:
			return 1231.501f;
		case 16:
			return -8.745965E-18f;
		case 17:
			return -2.258776E+10f;
		case 18:
			return -1.94087E-27f;
		case 19:
			return -1.195941E+15f;
		case 20:
			return -49.82191f;
		case 21:
			return 2.302372E-30f;
		case 22:
			return 7.905129E+20f;
		case 23:
			return 5.728365E-21f;
		case 24:
			return 1.460571E+23f;
		case 25:
			return 8.215854E-14f;
		case 26:
			return -5.073168E-21f;
		case 27:
			return -2.286124E-11f;
		case 28:
			return -1.972748E+35f;
		case 29:
			return 1.734036E+32f;
		case 30:
			return 1.771673E+35f;
		case 31:
			return -4.437462E+24f;
		case 32:
			return 4.342694E+18f;
		case 33:
			return 2.829782E+32f;
		case 34:
			return -6.2863E+36f;
		case 35:
			return -5.785817E+27f;
		case 36:
			return -0.1998578f;
		case 37:
			return 4.817691E-19f;
		case 38:
			return -3574.054f;
		case 39:
			return -2.672498E-17f;
		case 40:
			return -5.907457E+21f;
		case 41:
			return 1.708896E+26f;
		case 42:
			return 1.699111E+26f;
		case 43:
			return -3.646661E-09f;
		case 44:
			return 7.410287E+23f;
		case 45:
			return 2.503326E+14f;
		case 46:
			return 812.7377f;
		case 47:
			return 7.134456E-36f;
		case 48:
			return 1.679955E-15f;
		case 49:
			return 1.428375E-34f;
		case 50:
			return -6.520972E+29f;
		case 51:
			return -4.967419E-26f;
		case 52:
			return -2.712444E-18f;
		case 53:
			return -9.707605E-07f;
		case 54:
			return -126944f;
		case 55:
			return -6.237682E+27f;
		case 56:
			return -1.328089E-05f;
		case 57:
			return 8.244146E-06f;
		case 58:
			return 4.499003E-09f;
		case 59:
			return 1.188311E-24f;
		case 60:
			return 4.739307E-31f;
		case 61:
			return -5.902858f;
		case 62:
			return 6.596709E+23f;
		case 63:
			return 0.01076391f;
		case 64:
			return 3.785639E+07f;
		case 65:
			return -3.701612E-07f;
		case 66:
			return -19631.1f;
		case 67:
			return 5.404696E+36f;
		case 68:
			return 6.272749E-09f;
		case 69:
			return 1.6529E+19f;
		case 70:
			return -4.269119E+14f;
		case 71:
			return -2076914f;
		case 72:
			return -4.169777E+17f;
		case 73:
			return -9.517757E-32f;
		case 74:
			return -1.997975E-17f;
		case 75:
			return -1921687f;
		case 76:
			return 0;
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

bool func_118(bool bParam0)
{
	if (!func_94(bParam0))
	{
		return false;
	}
	return bParam0;
}

int func_119(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BEAVER_FUR"):
			return 3;
		case -1946740647:
			return 73;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 8;
		case joaat("PROVISION_DEER_HIDE"):
			return 18;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
		case -1787430524:
			return 51;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 26;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 2;
		case -1572330336:
			return 52;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 4;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 16;
		case -1548204069:
			return 74;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 39;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 27;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 43;
		case -1262044528:
			return 65;
		case -1249752300:
			return 53;
		case -1218522879:
			return 56;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 36;
		case -1061362634:
			return 61;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 20;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 38;
		case -963027403:
			return 66;
		case -940052481:
			return 54;
		case -907373381:
			return 75;
		case -906131571:
			return 71;
		case joaat("PROVISION_BUCK_FUR"):
			return 9;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 0;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 17;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 11;
		case -675142890:
			return 70;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 19;
		case -591844128:
			return 72;
		case joaat("PROVISION_RAM_HIDE"):
			return 40;
		case joaat("PROVISION_PANTHER_FUR"):
			return 31;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 35;
		case -308200059:
			return 55;
		case -251416414:
			return 50;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 28;
		case joaat("PROVISION_PIG_SKIN"):
			return 34;
		case 0:
			return 76;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 47;
		case 121494806:
			return 49;
		case 219794592:
			return 60;
		case joaat("PROVISION_FOX_FUR"):
			return 21;
		case 397926876:
			return 59;
		case joaat("PROVISION_COUGAR_FUR"):
			return 12;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 23;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 37;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 48;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 25;
		case 832214437:
			return 58;
		case 836208559:
			return 68;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 5;
		case 923422806:
			return 57;
		case 1009802015:
			return 63;
		case joaat("PROVISION_WOLF_FUR"):
			return 46;
		case joaat("PROVISION_COYOTE_FUR"):
			return 15;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 7;
		case 1276143905:
			return 64;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 45;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 32;
		case 1600479946:
			return 69;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 10;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 22;
		case joaat("PROVISION_GOAT_HAIR"):
			return 24;
		case 1728819413:
			return 62;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 44;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 42;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 41;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 29;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 33;
		case joaat("PROVISION_LOANSHARK_SKINS"):
			return 30;
		case 2088901891:
			return 67;
		case joaat("PROVISION_BOAR_SKIN"):
			return 6;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

struct<4> func_120(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_101(iParam0) };
	return func_102(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_121(int iParam0, bool bParam1, int iParam2)
{
	if (!func_100(bParam1, 0))
	{
		return false;
	}
	return func_96(iParam0, bParam1) >= iParam2;
}

struct<2> func_122(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_100(bParam0, 0))
	{
		return Var0;
	}
	if (func_128(bParam0, -8.087424E+27f))
	{
		if (func_20() == -1)
		{
			if (func_128(bParam0, -3.480943E+19f))
			{
				return func_129(4.052717E-32f);
			}
			else
			{
				return func_129(9918.3f);
			}
		}
	}
	else if (func_128(bParam0, -3.480943E+19f))
	{
		return func_129(-18395.16f);
	}
	if (func_128(bParam0, 4.091206E+36f))
	{
		return func_129(3.674458E+22f);
	}
	return Var2;
}

int func_123(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_100(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_130(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_131(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_132(bParam0, 0);
	}
	if (func_133(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_134(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_135(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_134(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_124(int iParam0, bool bParam1, int iParam2, int iParam3, var uParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_100(bParam1, 0))
	{
		return false;
	}
	if (iParam2 < 1)
	{
		return false;
	}
	Var0 = { func_101(iParam0) };
	Var5 = { func_102(iParam0, bParam1, Var0, Var0.f_4) };
	return func_136(iParam0, bParam1, &Var5, iParam2, iParam3, uParam4);
}

void func_125(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	float fVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_100(bParam0, 0))
	{
		return;
	}
	else if (bParam0 == 4.553053E+26f)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_137() || bParam6)
	{
		func_138(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_139(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_139(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_140(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_130(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_128(bParam0, -5.215192E-33f)) && !func_128(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_141(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_142(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 1.435927E-34f)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	fVar13 = 4.808429E-35f;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		fVar13 = 1.058639E-16f;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_128(bParam0, 6.834376E-22f))
	{
		sVar17 = func_143(bParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			fVar13 = -1.284544E+08f;
		}
		else
		{
			fVar13 = -2.926177E-30f;
		}
	}
	if (func_128(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_144(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			fVar13 = -1.101616E-25f;
		}
		else
		{
			fVar13 = -2.926177E-30f;
		}
	}
	bVar18 = func_145(bParam0, 0);
	if ((func_146(iVar12) && func_128(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_147(bParam0);
	}
	else if (func_130(bParam0) == -42.1084f)
	{
		bVar19 = func_148(bParam0);
		if (func_100(bVar19, 0))
		{
			bVar18 = func_145(bVar19, 0);
		}
	}
	if (func_149(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_150(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_151(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_152(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_153(bParam0, &cVar22))
		{
			sVar21 = func_155(func_154(cVar22), 4.808429E-35f);
		}
	}
	func_156(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

float func_126(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_157(iVar0);
}

int func_127(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0) && TASK::_0x6DAC799857EF3F11(PLAYER::PLAYER_PED_ID(), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::_GET_CARRIABLE_FROM_ENTITY(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = func_157(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

bool func_128(bool bParam0, int iParam1)
{
	if (!func_100(bParam0, 0))
	{
		return func_159(func_158(bParam0), iParam1);
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

struct<2> func_129(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

int func_130(bool bParam0)
{
	vector3 vVar0;

	if (!func_100(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_131(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_100(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_130(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_128(bParam0, 9.811189E+11f))
	{
		func_160(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_132(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_161(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_163(&Var0, func_162(0));
	}
	if (!func_164(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_165(iVar18);
	return iVar19;
}

int func_133(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_166(func_158(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_134(bool bParam0)
{
	if (func_20() == -1)
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

struct<4> func_135(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_167(bParam0, bParam1, 0) };
	return func_168(bParam0, Var0, Var0.f_4, bParam1);
}

int func_136(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_169(bParam1))
	{
		return 0;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_170(iParam0, *iParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, iParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_137()
{
	return !Global_1913431;
}

void func_138(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913431.f_3)
	{
		if ((((Global_1913431.f_4[iVar0 /*6*/] == bParam0 && Global_1913431.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913431.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913431.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913431.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913431.f_4[iVar0 /*6*/].f_1 = (Global_1913431.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913431.f_3 < 19)
	{
		Global_1913431.f_4[Global_1913431.f_3 /*6*/] = bParam0;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_1 = iParam1;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_2 = bParam2;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_3 = bParam3;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_4 = bParam4;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_5 = bParam5;
		Global_1913431.f_3++;
	}
}

char* func_139(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_140(bool bParam0, int iParam1)
{
	if (!func_100(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

int func_141(bool bParam0)
{
	struct<2> Var0;

	if (!func_100(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_142(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_143(bool bParam0)
{
	if (func_128(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_128(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_128(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_128(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_128(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_128(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_128(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_128(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_128(bParam0, -1.58908E+26f) || func_128(bParam0, -3.503386E-34f)) || func_128(bParam0, -1.887503E+19f)) || func_128(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_144(bool bParam0)
{
	if (func_128(bParam0, -1.15596E+32f))
	{
		if (((func_171(bParam0, -9.979451E-09f) || func_171(bParam0, 2.758862E+11f)) || func_171(bParam0, 1.868312E+36f)) || func_171(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_128(bParam0, -6.231785E+11f) || func_128(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

bool func_145(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_100(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_172(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

bool func_146(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_147(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_100(bParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

bool func_148(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_173(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_174(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_175(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_176(bVar14))
			{
				func_177(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_177(iVar11);
	}
	return false;
}

bool func_149(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, -60352.49f))
	{
		return true;
	}
	return false;
}

int func_150(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_100(bParam0, 0) && !func_166(func_158(bParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

char* func_151(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_152(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_178(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_153(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_100(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_179(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_180(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_181(bParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_154(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_155(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_151(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_156(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	int iVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = fParam4;
	Var13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&Var0, &Var13, bParam8);
	func_182(sParam0, sParam1, iParam2);
	return iVar20;
}

float func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = PED::_GET_PED_DAMAGE_CLEANLINESS(iVar0);
	iVar2 = func_183(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (TASK::_0x7CB99FADDE73CD1B(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(iVar0, 2.205541E-37f) || ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar0))
		{
			iVar6 = func_184(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return -1.013623E+11f;
		case 1:
			return 2.192584E+23f;
		case 0:
			return -1.656824E+37f;
		default:
			break;
	}
	return -1.656824E+37f;
}

bool func_158(bool bParam0)
{
	return bParam0;
}

int func_159(bool bParam0, int iParam1)
{
	if (!func_166(bParam0, 2))
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

void func_160(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_161(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_162(bool bParam0)
{
	int iVar0;

	iVar0 = func_134(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_168(8.681942E-06f, func_185(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_168(8.681942E-06f, func_185(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_168(8.681942E-06f, func_185(bParam0), -1.942248E+12f, 0);
}

void func_163(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_164(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_134(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_165(int iParam0)
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

bool func_166(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

struct<5> func_167(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_185(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_130(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_168(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_162(bParam1) };
			if (iParam2 && func_186(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_187(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_187(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_188(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_189(bParam1) };
			switch (func_141(bParam0))
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
			if (func_190(bParam0, -2.580501E-27f))
			{
				Var0 = { func_168(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_190(bParam0, -4.220332E-15f))
			{
				Var0 = { func_168(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_168(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_190(bParam0, -3.171238E-21f))
			{
				Var0 = { func_168(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_191(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_190(bParam0, -3.171238E-21f))
			{
				Var0 = { func_168(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_168(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_100(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_134(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_169(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_170(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, iParam5, !bParam6))
	{
		return false;
	}
	return true;
}

int func_171(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 512441.5f))
	{
		return 1;
	}
	return 0;
}

int func_172(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
		case 239629152:
			if (bParam1)
			{
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			}
			break;
	}
	return 0;
}

int func_173(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_100(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, -9.085264E+22f, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_174(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_175(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_176(bool bParam0)
{
	if (!func_100(bParam0, 0))
	{
	}
	if (func_128(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_177(int iParam0)
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

int func_178(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_179(bool bParam0)
{
	bool bVar0;

	if (!func_100(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_145(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

bool func_180(bool bParam0)
{
	if (func_141(bParam0) == -1.955052E+34f || func_141(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_181(bool bParam0)
{
	int iVar0;

	if (!func_100(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_147(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

void func_182(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

int func_183(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_GET_PED_QUALITY(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return 1.946198E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -1.13228E-37f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -1.612481E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return -2.15947E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 1.486582E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return -8.369188E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -8.479E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return 1.092612E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return 1.00121E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -3.393869E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return -2.146483E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1.683324E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -1.714903E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return 3.540045E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return 1.908759E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 1.743886E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return -3.998961E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return -787154.6f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -68183.73f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -4.330628E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return 1.05915E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return -9.463173E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return -6.04593E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 1.562307E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return -6.101661E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return 1.544066E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return -1.101024E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 9.614223E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return -5.945581E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return -7.624627E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return -1.048603E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return -1.548875E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 6.419786E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return 3.365025E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return 4.561484E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -5.029276f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return 8.230158E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -4.423507E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -3.922512E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return -8.041976E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return 6.922288E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return 87714.4f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 2.34674E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return -3.27273E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 4.017762E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return -7.379082E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -2.435618E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -1.037538E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -5.282553E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -1.146312E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -1.007456E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return 9.076408E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return 1.910371E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -9.992345E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -1.87771E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -5.195334E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -3.404239E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return 4.073091E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -4.270719E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -2.752362E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return -1.683097E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return -2.766552E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return -3.151777E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -8.062062E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return 1.658628E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -8221445f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1.393733E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return 3.947672E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -8.46789E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return -2.123979E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return -8.137937E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return -1.644345E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 6.45222E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 2.504758E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 1.085857E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 9.136372E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return -3.877198E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return -1.342214E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -7.090169E-39f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return 4.143414E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -1.39452E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 0.02198075f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return -1.867976E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return -1.162543E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return 3.744237E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return 474666.2f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return 3.030501E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return 3.285981E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -7.461215E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return -1622.647f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -1.155258E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return 6.490077E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return 7.368477E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 7007593f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 2.184331E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return -14.30725f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return 4.696913E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -8.604818E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -8.782748E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 0.02174423f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return 5.848209E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return -1.152293E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return 1.493672E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return NaNf;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -3.204001E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -1.026548E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -4.013387E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return 8.375437E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return 4.880811E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return 2.935504E-10f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -3.735768E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 1.453916E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 0.01160014f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 2.602576E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return -3.201256E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 7.892923f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return -1.042475E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return -4.447418f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return -6.24208E-37f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return -1.065758E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return 4.592079E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -4.950221E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -3.410696E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return 7.360676E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -3.305857E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -37031.14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return 1.444135E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return 4.992244E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -3.810507E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return -8.230556E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return -1.052088E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 5.016784E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 2.512069E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -3.301344E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 4.516673E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return -1.981305E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return -70.37913f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 6.824345E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return -2.852172E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return 2.059936E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return -5.844419E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return 2.295032E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return 2.53068E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -2.798365E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 178.8635f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 4.611995E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 2.766804E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 2745580f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return -5.381378E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return -7.374872E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -0.0003792866f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return 6606.792f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -4.355492E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 4.258855E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 2.034721E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 0.001643663f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -4.363519E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -1.788412E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -6.498311E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -5.709893E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return 8.275908E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return 2.568957E-14f;
		case -827518870:
			return -8.486406E-38f;
		case 1367447057:
			return -1.337399E-29f;
		case -2092697195:
			return 4.953773E-11f;
		case -2043601589:
			return 8.819021E+26f;
		case 1758585485:
			return 1.924374E+16f;
		case 1527400190:
			return 0.025452f;
		case 1493601140:
			return -1.320131E+23f;
		case -885592109:
			return -1.304414E+34f;
		case -1282621313:
			return 2.858739E+23f;
		case -70954328:
			return 8.122941E-17f;
		case -1378208045:
			return 4.927081E+18f;
		case 1450608653:
			return 5.233933E+29f;
		case 1543592331:
			return 5.000713E+30f;
		case 1842740532:
			return 1.622289E+22f;
		case 2004357248:
			return 1.838733E-24f;
		case -229670230:
			return -1.502759E+26f;
		case 546758456:
			return 2.022833E+15f;
		case 1888419655:
			return -3.684036f;
		case -2040849706:
			return -2.4275E+25f;
		case 2014346813:
			return -1.598358E+35f;
		case -1638839614:
			return 2.96459E-31f;
		case 1705186999:
			return 9.861011E-07f;
		case -1821314478:
			return 348.9258f;
		case -1434083213:
			return -7.565593E-22f;
		default:
			break;
	}
	return 0;
}

struct<4> func_185(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_134(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_168(2.982335E+09f, func_69(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_168(2.982335E+09f, func_69(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_168(2.982335E+09f, func_69(), -5.45926E-19f, bParam0);
}

int func_186(bool bParam0, bool bParam1)
{
	if (func_141(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_192();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_187(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_193(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_188(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_194(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_189(bool bParam0)
{
	int iVar0;

	iVar0 = func_134(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_168(3.507197E-29f, func_185(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_168(3.507197E-29f, func_185(bParam0), 12999093, 0);
}

bool func_190(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_141(bParam0);
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
			if (func_195(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_191(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_196(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_192()
{
	if (func_197(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_193(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_100(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_133(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_168(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_134(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_134(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_194(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_134(0);
	*iParam1 = { func_168(bParam0, func_162(0), fParam3, 0) };
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

bool func_195(bool bParam0, int iParam1, int iParam2)
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

int func_196(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_134(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_197(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_198(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_134(bParam1), iParam0, bParam3);
}

bool func_198(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

