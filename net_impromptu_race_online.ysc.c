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
	struct<49> Local_16 = { 0, 0, 0, 7, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255 } ;
	var uLocal_65 = 255;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	struct<13> Local_74[7];
	struct<1262> Local_166 = { 0, 0, 0, 0, 32, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_1428 = -1;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, -1, -1, 255 } ;
#endregion

void __EntryFunction__()
{
	struct<2> Var0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(ScriptParam_0);
	Local_166.f_2 = 0;
	Local_166 = ScriptParam_0;
	Local_166.f_1213 = ScriptParam_0.f_9;
	Local_166.f_1 = ScriptParam_0;
	func_2(6);
	Var0 = { ScriptParam_0.f_7 };
	func_3(Var0);
	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/].f_6 = { ScriptParam_0.f_1 };
	}
	while (!func_4())
	{
		func_5(&Local_16, &Local_74, &Local_166);
		BUILTIN::WAIT(0);
	}
	func_6(&Local_16, Var0, Local_16.f_48 == PLAYER::PLAYER_ID(), Local_16.f_48 == 255);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_7(&Local_16);
	}
	func_8(&Local_16, &Local_166);
	func_9();
}

void func_1(int iParam0)
{
	func_10(7, iParam0);
	func_11();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_16, 58, 42);
	func_12(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_16), 58, "m_IRON_HostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_74, 92, 43);
	func_13(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_74[0 /*13*/])), 92, "m_IRON_PlayerData");
	func_14(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(2);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

void func_2(int iParam0)
{
	if (Global_1108965.f_775.f_28 != iParam0)
	{
		Global_1108965.f_775.f_28 = iParam0;
	}
}

void func_3(struct<2> Param0)
{
	func_15(Param0, 1, 1, 1);
}

bool func_4()
{
	if (Local_166.f_2 >= 15)
	{
		return true;
	}
	if (func_16(0, 0))
	{
		return true;
	}
	if (func_17(Local_166.f_1261, 1, 0))
	{
		return true;
	}
	if (SCRIPTS::_GET_THREAD_EXIT_REASON() != 0)
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_18(), -1, true, 0))
	{
		return true;
	}
	return false;
}

void func_5(var uParam0, var uParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_19(uParam0, uParam1, iParam2);
	}
	func_20(uParam0, uParam1, iParam2);
	func_21(uParam0, uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/], iParam2);
	func_22(uParam0, uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/], iParam2, 0);
	func_23(iParam2);
	func_24();
}

void func_6(var uParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_25(Param1, 0, 2, 0, 0);
	}
	else if (bParam3)
	{
		func_25(Param1, 0, 0, 0, 0);
	}
	else
	{
		func_25(Param1, 0, 1, 0, 0);
	}
	if (func_26() || func_27())
	{
		func_29(func_28(Param1), 7, 0, 255);
	}
	else if (func_30(uParam0, 64))
	{
		func_29(func_28(Param1), 7, 1, 255);
	}
	else
	{
		func_29(func_28(Param1), 7, 2, 255);
	}
	if (func_31(Param1))
	{
		func_32(Param1);
	}
}

void func_7(var uParam0)
{
	if (PATHFIND::_SIMULATED_ROUTE_EXISTS(uParam0->f_34))
	{
		PATHFIND::_SIMULATED_ROUTE_DELETE(uParam0->f_34);
	}
}

void func_8(var uParam0, int iParam1)
{
	func_33();
	func_34();
	func_35(iParam1);
	func_36(iParam1);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	NETWORK::_0x455156F47DC6B78C(true);
	func_37(&(iParam1->f_167), 1);
	func_38(&(iParam1->f_182));
	func_39(&(iParam1->f_1174), 1, 1);
	MISC::CLEAR_BIT(&(iParam1->f_182.f_11.f_159), 13);
	func_40(0);
	func_41(1);
	if (func_42(3))
	{
		func_43(0);
	}
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);
	PED::SET_PED_RESET_FLAG(func_44(PLAYER::PLAYER_PED_ID()), 105, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_44(PLAYER::PLAYER_PED_ID()), false, true);
	func_45();
	func_46();
	if (PATHFIND::_SIMULATED_ROUTE_EXISTS(iParam1->f_1271))
	{
		PATHFIND::_SIMULATED_ROUTE_DELETE(iParam1->f_1271);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam1->f_1214))
	{
		VOLUME::DELETE_VOLUME(iParam1->f_1214);
	}
	if (MAP::DOES_BLIP_EXIST(iParam1->f_1244))
	{
		MAP::REMOVE_BLIP(&(iParam1->f_1244));
	}
	if (MAP::DOES_BLIP_EXIST(iParam1->f_1245))
	{
		MAP::REMOVE_BLIP(&(iParam1->f_1245));
	}
	func_47(iParam1);
	func_48(0);
	Global_1108965.f_775.f_22 = 0;
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1108965.f_19, false))
	{
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1108965.f_19);
	}
	func_49();
	if (!func_30(uParam0, 64))
	{
		func_50(6);
	}
}

void func_9()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_10(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_9();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_11()
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
			func_9();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_9();
					break;
				case 2:
					func_9();
					break;
				case 4:
					func_9();
					break;
				case 3:
					func_9();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_9();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_9();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_9();
		}
		if (func_51() == 0)
		{
			if (func_52())
			{
				func_9();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_9();
	}
	return 1;
}

int func_12(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_13(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_14(bool bParam0)
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
					func_9();
					break;
				case 2:
					func_9();
					break;
				case 4:
					func_9();
					break;
				case 3:
					func_9();
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
			func_9();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_15(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_53(Param0))
	{
		return;
	}
	if (!func_31(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_54(Param0);
	}
	if (!func_53(func_55(0)))
	{
		func_56(Param0, 3);
		func_57(bParam3);
		func_58(!bParam4);
		func_59(Param0, -1);
		if (bParam2 && !func_60(2))
		{
			func_61(&Global_0, 1024);
		}
		func_62(1);
	}
	else
	{
		func_59(Param0, -1);
		func_56(Param0, 4);
		func_63(Param0, 0);
	}
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_64(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_65(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
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

bool func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_53(Global_1051268) && !func_66(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_67(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_68(iParam3, 255))
	{
		Global_1072759.f_28307 = 4;
		return true;
	}
	if (Global_263042[Global_1295619 /*65*/] > 2)
	{
		Global_1072759.f_28307 = 5;
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1072759.f_28307 = 6;
		return true;
	}
	if (func_69())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_53(Global_1051268))
		{
			Global_1072759.f_28307 = 8;
			return true;
		}
	}
	if (Global_265213.f_122646 != 0 && SCRIPTS::DOES_THREAD_EXIST(Global_265213.f_122646))
	{
		Global_1072759.f_28307 = 9;
		return true;
	}
	Global_1072759.f_28307 = 0;
	return false;
}

char* func_18()
{
	return "net_main_online";
}

void func_19(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 > 0)
	{
		if ((!GANG::NETWORK_IS_GANG_ACTIVE(uParam0->f_37) || !GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_37)) || func_70(uParam1, 4))
		{
			func_71(uParam0, 64);
			func_72(uParam0, 9);
		}
	}
	if ((*uParam0 > 3 && *uParam0 < 7) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < 2)
	{
		func_71(uParam0, 64);
		func_72(uParam0, 9);
	}
	switch (*uParam0)
	{
		case 0:
			func_73(&(uParam0->f_45), 0);
			uParam0->f_37 = Global_1295619.f_10;
			func_72(uParam0, 2);
			break;
		case 2:
			if (!func_74(uParam0, uParam1))
			{
				if (func_75(&(uParam0->f_45)) > 15000)
				{
					func_71(uParam0, 64);
					func_71(uParam0, 128);
					func_72(uParam0, 9);
				}
				return;
			}
			if (!func_76(&(uParam0->f_45)))
			{
				func_73(&(uParam0->f_45), 0);
			}
			if (func_75(&(uParam0->f_45)) < 15000)
			{
				return;
			}
			if (func_77(uParam1))
			{
				return;
			}
			uParam0->f_43 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			if (func_78(uParam0))
			{
				uParam0->f_33 = 0;
			}
			else
			{
				uParam0->f_33++;
				return;
			}
			func_72(uParam0, 3);
			break;
		case 3:
			if (func_75(&(uParam0->f_45)) < 15000)
			{
				return;
			}
			if (func_77(uParam1))
			{
				return;
			}
			uParam0->f_32 = func_79(uParam1, 4);
			if (uParam0->f_32 > 1)
			{
				if (!PATHFIND::_SIMULATED_ROUTE_EXISTS(uParam0->f_34))
				{
					func_80(uParam0, uParam1);
				}
				else
				{
					func_81(uParam0);
				}
				if (func_30(uParam0, 1))
				{
					func_72(uParam0, 5);
					uParam0->f_42 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
			else
			{
				func_71(uParam0, 64);
				func_72(uParam0, 9);
				func_71(uParam0, 512);
			}
			break;
		case 5:
			if (func_82(uParam0))
			{
				uParam0->f_35 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_72(uParam0, 6);
			}
			break;
		case 6:
			func_83(uParam0, uParam1);
			if (func_84(uParam1, 2.350989E-38f, 9.403955E-38f))
			{
				func_72(uParam0, 7);
			}
			break;
		case 7:
			func_85(uParam0, uParam1);
			uParam0->f_40 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_72(uParam0, 8);
			break;
		case 8:
			if (func_86(uParam0))
			{
				func_72(uParam0, 11);
			}
			break;
		case 9:
			func_71(uParam0, 64);
			break;
		case 11:
			break;
	}
}

void func_20(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar1 = PLAYER::PLAYER_ID();
	if (*uParam0 > 0 && uParam0->f_37 != Global_1295619.f_10)
	{
		if (!func_87(iParam2))
		{
			return;
		}
		func_88(iParam2, 11);
	}
	if (func_30(uParam0, 64))
	{
		if (!func_87(iParam2))
		{
			return;
		}
		func_88(iParam2, 11);
	}
	switch (iParam2->f_2)
	{
		case 0:
			if (!func_89(uParam1[iVar0 /*13*/], iParam2))
			{
				return;
			}
			if (func_76(&(uParam0->f_45)) && func_75(&(uParam0->f_45)) > 15000)
			{
				func_88(iParam2, 12);
			}
			func_90();
			func_91(Global_33, 9.692295E-08f, 3.392982E+32f);
			(uParam1[iVar0 /*13*/])->f_12 = GANG::NETWORK_IS_GANG_LEADER(iVar1);
			func_92(uParam1[iVar0 /*13*/], 4);
			if ((uParam1[iVar0 /*13*/])->f_12)
			{
				(uParam1[iVar0 /*13*/])->f_6 = { MAP::_GET_WAYPOINT_COORDS() };
				NETWORK::_0x455156F47DC6B78C(false);
				func_93();
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				if (iParam2->f_182.f_244[iVar2 /*23*/].f_14 == 255)
				{
					iParam2->f_182.f_244[iVar2 /*23*/].f_1 = 1259902591;
					iParam2->f_182.f_244[iVar2 /*23*/].f_2 = 1259902591;
					iParam2->f_182.f_244[iVar2 /*23*/].f_5 = 1259902591;
				}
				iVar2++;
			}
			func_95(func_94(1.039154E+16f, -4.537018E+10f), 1);
			func_96(8);
			func_88(iParam2, 5);
			break;
		case 5:
			if (*uParam0 >= 5)
			{
				func_88(iParam2, 6);
				func_97("MP_HORSE_RACE_START", 1, 0);
			}
			break;
		case 6:
			func_98(iParam2);
			if (*uParam0 > 5 || func_82(uParam0))
			{
				func_99();
				func_39(&(iParam2->f_1174), 1, 1);
				func_100(1, 2);
				iParam2->f_1216 = { Global_34 };
				(uParam1[iVar0 /*13*/])->f_10 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_48(1);
				func_88(iParam2, 7);
			}
			break;
		case 7:
			func_101(uParam0, uParam1[iVar0 /*13*/], iParam2);
			func_102(uParam0, iParam2);
			func_98(iParam2);
			func_103();
			func_104();
			func_105();
			func_106(uParam0, uParam1[iVar0 /*13*/], iParam2);
			if (func_107(uParam1[iVar0 /*13*/], 2.350989E-38f) || func_107(uParam1[iVar0 /*13*/], 9.403955E-38f))
			{
				func_48(0);
				func_37(&(iParam2->f_167), 1);
				func_97("MP_HORSE_RACE_END", 1, 1);
				func_88(iParam2, 8);
			}
			break;
		case 8:
			if (!func_107(uParam1[iVar0 /*13*/], 2f))
			{
				func_108(uParam1[iVar0 /*13*/], 131072);
			}
			func_35(iParam2);
			if (*uParam0 > 7)
			{
				Global_1108965.f_775.f_22 = 1;
				func_37(&(iParam2->f_167), 1);
				func_109(uParam0, uParam1, iParam2);
				func_88(iParam2, 9);
			}
			break;
		case 9:
			if (!MISC::IS_BIT_SET(iParam2->f_182.f_11.f_159, 13))
			{
				MISC::SET_BIT(&(iParam2->f_182.f_11.f_159), 13);
			}
			func_110(iParam2);
			if (!func_111(&(iParam2->f_1268)))
			{
				func_112(&(iParam2->f_1268), 0);
			}
			if (*uParam0 > 8 && func_113(&(iParam2->f_1268)) > 2000)
			{
				func_88(iParam2, 10);
			}
			break;
		case 10:
			if (func_107(uParam1[iVar0 /*13*/], 1))
			{
				func_88(iParam2, 14);
				return;
			}
			func_114(uParam0, iParam2);
			if (uParam0->f_48 == PLAYER::PLAYER_ID())
			{
				func_95(func_94(-8.839952E-30f, -2.476369E+14f), 1);
				func_95(func_94(-8.839952E-30f, -4.537018E+10f), 1);
				func_95(func_115(59.71727f), 1);
			}
			else
			{
				func_95(func_94(1.255702E+11f, -2.476369E+14f), 1);
				func_95(func_94(1.255702E+11f, -4.537018E+10f), 1);
			}
			func_88(iParam2, 14);
			break;
		case 12:
			if (iParam2->f_1273 != 0)
			{
				UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iParam2->f_1273, true);
				iParam2->f_1273 = 0;
			}
			if (!func_107(uParam1[iVar0 /*13*/], 1))
			{
				func_37(&(iParam2->f_167), 1);
				func_100(1, 2);
				PED::SET_PED_RESET_FLAG(func_44(PLAYER::PLAYER_PED_ID()), 105, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_44(PLAYER::PLAYER_PED_ID()), false, true);
				UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
				func_92(uParam1[iVar0 /*13*/], 1);
			}
			if (Global_1295619.f_10 != uParam0->f_37)
			{
				func_88(iParam2, 11);
			}
			if (*uParam0 > 7)
			{
				func_109(uParam0, uParam1, iParam2);
				Global_1108965.f_775.f_22 = 1;
				func_88(iParam2, 9);
				func_37(&(iParam2->f_167), 1);
			}
			break;
		case 14:
			if (*uParam0 == 11)
			{
				func_88(iParam2, 15);
			}
			break;
		case 11:
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			if (!func_116(iParam2, 64))
			{
				return;
			}
			func_97("MP_HORSE_RACE_FAIL", 1, 1);
			func_45();
			func_92(uParam1[iVar0 /*13*/], 1);
			func_88(iParam2, 15);
			break;
		case 15:
			break;
	}
}

void func_21(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char[] cVar3[8];

	if (!func_87(iParam2))
	{
		return;
	}
	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3);
	iVar1 = 0;
	if ((((iVar0 == 0 || iVar0 != iParam2->f_1272) || iParam2->f_2 != iParam2->f_1274) || iParam2->f_3 != iParam2->f_1275) || iParam2->f_1277)
	{
		bVar2 = true;
		iParam2->f_1277 = 0;
	}
	switch (iParam2->f_2)
	{
		case 0:
			break;
		case 6:
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			cVar3 = (6500 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_42, NETWORK::GET_NETWORK_TIME_ACCURATE()));
			if (cVar3 < 6500)
			{
				func_37(&(iParam2->f_167), 1);
				if (cVar3 < 6000)
				{
					cVar3 = (cVar3 / 1000);
				}
				else
				{
					cVar3 = 5;
				}
				func_117(&(iParam2->f_1174), cVar3, 1, 0, 1);
			}
			break;
		case 7:
			if (func_30(uParam0, 16))
			{
				func_37(&(iParam2->f_167), 1);
			}
			else
			{
				func_118(&(iParam2->f_167), (uParam0->f_36 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_35, NETWORK::GET_NETWORK_TIME_ACCURATE())) + 1, 0, 30000, 0);
			}
			if (bVar2)
			{
				if (func_116(iParam2, 65536))
				{
					iParam2->f_1272 = func_119("IRON_NEED_OWN_HORSE_OBJ", -1, 0, 0, 1);
				}
				else
				{
					iParam2->f_1272 = func_119("IRON_RACE_OBJ", -1, 0, 0, 1);
				}
			}
			break;
		case 8:
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);
			break;
		case 9:
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			break;
		case 10:
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			break;
		case 12:
			func_37(&(iParam2->f_167), 1);
			if (!func_116(iParam2, 4) && !func_120(255))
			{
				if (func_122(func_121(), 10000, 0, 0, 0, 1) != 0)
				{
					func_123(iParam2, 4);
				}
			}
			if (func_107(uParam1, 65536) && !func_120(255))
			{
				func_124("IRON_DECLINE_ATTACK_TITLE", "IRON_DECLINE_ATTACK_BODY", -2, 0, 0, 0, 1, 1);
				func_108(uParam1, 65536);
			}
			if (bVar2)
			{
				iParam2->f_1272 = func_119("IRON_SPECTATE_OBJ", -1, 0, 0, 1);
			}
			break;
		case 11:
			func_37(&(iParam2->f_167), 1);
			if (!func_116(iParam2, 64))
			{
				if (func_30(uParam0, 1024))
				{
					iVar1 = func_124("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_LEADER_NO_MONEY", -2, 0, 0, 0, 1, 1);
				}
				else if (func_30(uParam0, 128))
				{
					iVar1 = func_124("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_FINISH", -2, 0, 0, 0, 1, 1);
				}
				else if (func_30(uParam0, 256))
				{
					iVar1 = func_124("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_BET", -2, 0, 0, 0, 1, 1);
				}
				else if (func_30(uParam0, 512))
				{
					iVar1 = func_124("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_PLAYERS", -2, 0, 0, 0, 1, 1);
				}
				else
				{
					iVar1 = func_124("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_CANCELED", -2, 0, 0, 0, 1, 1);
				}
				if (iVar1 != 0)
				{
					func_123(iParam2, 64);
				}
			}
			break;
		case 13:
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			break;
		case 14:
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			break;
		case 15:
			func_37(&(iParam2->f_167), 1);
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			break;
	}
	if (iParam2->f_1272 != 0)
	{
		iParam2->f_1274 = iParam2->f_2;
	}
}

void func_22(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_87(iParam2))
	{
		return;
	}
	if (iParam3 == 0 && func_125())
	{
		return;
	}
	if (iParam2->f_2 >= 0 && !func_116(iParam2, 128))
	{
		if (func_124("IRON_SHARD_INTRO_ONE", "IRON_SHARD_INTRO_TWO", -2, 0, 0, 0, 1, 1) != 0)
		{
			func_123(iParam2, 128);
		}
		return;
	}
	if (iParam2->f_2 >= 9 && !func_116(iParam2, 256))
	{
		if (!func_111(&(iParam2->f_1268)))
		{
			func_112(&(iParam2->f_1268), 0);
		}
		if (func_113(&(iParam2->f_1268)) > 2000)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(11, true, false);
			if (!func_107(uParam1, 1))
			{
				if (func_30(uParam0, 2))
				{
					if (uParam0->f_48 == PLAYER::PLAYER_ID())
					{
						if (func_126("IRON_SHARD_PASS_ONE", "GEIRON_SHOW_SCORES", "", (2 - iParam3)) != 0)
						{
							func_123(iParam2, 256);
						}
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_48))
					{
						if (func_126("IRON_SHARD_FAIL_ONE", "GEIRON_SHOW_SCORES", "", (2 - iParam3)) != 0)
						{
							func_123(iParam2, 256);
						}
					}
					else if (func_126("IRON_SHARD_FAIL_ONE", MISC::VAR_STRING(10, "IRON_SHARD_FAIL_TWO", func_128(PLAYER::GET_PLAYER_NAME(uParam0->f_48), func_127(uParam0->f_48, 1, -1, 0))), "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
					{
						func_123(iParam2, 256);
					}
				}
				else if (func_126("IRON_SHARD_OVER_ONE", "IRON_TIME_LIMIT_EXPIRED", "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
				{
					func_123(iParam2, 256);
				}
			}
			else if (func_126("IRON_SHARD_OVER_ONE", "GEIRON_SHOW_SCORES", "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
			{
				func_123(iParam2, 256);
			}
			return;
		}
	}
}

void func_23(int iParam0)
{
	if (func_129(0, 0, 0))
	{
		if (!func_111(&(iParam0->f_1263)))
		{
			func_112(&(iParam0->f_1263), 1);
			func_40(1);
		}
		else if (func_113(&(iParam0->f_1263)) <= 45000)
		{
			LAW::_0xBD944A3D36E992DE();
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::GET_PLAYER_INDEX());
		}
	}
	else if (func_111(&(iParam0->f_1263)))
	{
		func_130(&(iParam0->f_1263));
	}
}

void func_24()
{
	func_131();
}

void func_25(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_53(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_132(Param0) && !func_31(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_133(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_134(Param0) == 3)
		{
			func_135(1, -4.059512E-23f);
		}
		else if (func_134(Param0) == 4)
		{
			func_135(0, -4.059512E-23f);
		}
	}
	if ((func_134(Param0) == 3 || func_134(Param0) == 1) || ((bParam5 && func_134(Param0) == 4) && STATS::STATSTRACKER_IS_INITIALIZED(func_133(Param0))))
	{
		if (iParam3 != -1)
		{
			func_136(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_136(Param0, 2, iParam4, 255, 0);
		}
	}
	func_56(Param0, 0);
	if (func_66(func_55(0), Param0))
	{
		func_57(1);
		func_58(0);
		func_137(0);
		func_62(1);
	}
	func_138(Param0);
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_64(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

bool func_26()
{
	return Global_1572887.f_196 > 0;
}

bool func_27()
{
	return func_139() > 11;
}

int func_28(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_140(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_29(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam3 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	iVar2 = func_141(iParam1);
	iVar1 = iParam2;
	if ((iVar2 && iVar1) != 0)
	{
	}
	TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(iParam0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false, false), (iVar2 || iVar1));
}

bool func_30(var uParam0, int iParam1)
{
	return func_142(uParam0->f_1, iParam1);
}

bool func_31(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_134(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_32(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900530 <= 0)
	{
		return;
	}
	if (!func_53(Param0))
	{
		return;
	}
	if (func_31(Param0))
	{
		func_25(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_143(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1900530 > 1)
	{
		Global_1900531[iVar1 /*2*/] = { Global_1900531[(Global_1900530 - 1) /*2*/] };
		Global_1900562[iVar1 /*2*/] = { Global_1900562[(Global_1900530 - 1) /*2*/] };
		func_144(&(Global_1900531[(Global_1900530 - 1) /*2*/]));
		Global_1900562[(Global_1900530 - 1) /*2*/] = { Var2 };
	}
	else
	{
		func_144(&(Global_1900531[iVar1 /*2*/]));
		Global_1900562[iVar1 /*2*/] = { Var2 };
	}
	Global_1900530 = (Global_1900530 - 1);
	if (Global_1900530 < 0)
	{
		Global_1900530 = 0;
	}
}

void func_33()
{
	Global_1109780[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/].f_1 = -1;
	Global_1109780[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/].f_2 = 255;
	func_146(&(Global_1109780[func_145() /*6*/]), 4);
	func_147(&Global_1108965, 8);
	func_147(&Global_1108965, 4);
	func_148(&Global_1108965, 16);
}

void func_34()
{
	func_147(&Global_1108965, 32);
}

void func_35(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(iParam0->f_1244))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_1244));
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_1245))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_1245));
	}
}

void func_36(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_1279))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_1279, true);
	}
	if (PROPSET::DOES_PROP_SET_EXIST(iParam0->f_1280))
	{
		PROPSET::_DELETE_PROP_SET(iParam0->f_1280, true, true);
	}
}

void func_37(bool bParam0, bool bParam1)
{
	struct<14> Var0;

	if (bParam0->f_2 > 0)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(12, true, false);
		if (bParam1)
		{
			func_149(bParam0);
			func_150();
		}
		func_151(bParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(bParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(bParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(bParam0->f_4));
		bParam0->f_9 = 0;
		func_152(0);
		func_153(0);
		UIFEED::UI_FEED_CLEAR_CHANNEL(2, true, false);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::COPY_SCRIPT_STRUCT(bParam0, &Var0, 15);
	}
}

void func_38(bool bParam0)
{
	struct<15> Var0;
	int iVar23;

	if (bParam0->f_11.f_2 != 0)
	{
		func_154(&(bParam0->f_11));
		func_155(bParam0);
		func_156(&(bParam0->f_11), 1);
		Global_1940072.f_110 = 0;
		Var0.f_1 = -1f;
		Var0.f_2 = -1f;
		Var0.f_3 = -1f;
		Var0.f_4 = -1f;
		Var0.f_5 = -1f;
		Var0.f_14 = 255;
		func_157(&(bParam0->f_11));
		iVar23 = 0;
		while (iVar23 <= 31)
		{
			MISC::COPY_SCRIPT_STRUCT(&(bParam0->f_244[iVar23 /*23*/]), &Var0, 23);
			iVar23++;
		}
		bParam0->f_982 = 0;
	}
}

void func_39(int iParam0, bool bParam1, bool bParam2)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*iParam0))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(iParam0);
	}
	if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(4.148054E-32f))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(4.148054E-32f);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_2);
		iParam0->f_2 = 0;
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_3, false);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_3);
		iParam0->f_3 = 0;
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_1);
		iParam0->f_1 = 0;
	}
	if (bParam2)
	{
		if (iParam0->f_4 >= 0)
		{
			if (!AUDIO::_HAS_SOUND_ID_FINISHED(iParam0->f_4))
			{
				AUDIO::_STOP_SOUND_WITH_ID(iParam0->f_4);
			}
			AUDIO::RELEASE_SOUND_ID(iParam0->f_4);
			iParam0->f_4 = -1;
		}
		if (iParam0->f_5 >= 0)
		{
			if (!AUDIO::_HAS_SOUND_ID_FINISHED(iParam0->f_5))
			{
				AUDIO::_STOP_SOUND_WITH_ID(iParam0->f_5);
			}
			AUDIO::RELEASE_SOUND_ID(iParam0->f_5);
			iParam0->f_5 = -1;
		}
	}
	if (bParam1)
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_158()))
		{
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_158());
			HUD::_DISABLE_HUD_CONTEXT(-4.163976E-38f);
			GRAPHICS::_0x981C7D863980FA51();
		}
	}
}

void func_40(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_41(bool bParam0)
{
	func_159(58, !bParam0);
}

bool func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			if ((Global_1900412.f_1 == 1 || Global_1900412.f_1 == 3) || Global_1900412.f_1 == 4)
			{
				return true;
			}
			break;
		case 2:
			if ((((Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5) || Global_1900412.f_1 == 1) || Global_1900412.f_1 == 3) || Global_1900412.f_1 == 4)
			{
				return true;
			}
			break;
		case 5:
			if (((Global_1900412.f_1 == 5 || Global_1900412.f_1 == 1) || Global_1900412.f_1 == 3) || Global_1900412.f_1 == 4)
			{
				return true;
			}
			break;
		case 3:
			if (Global_1900412.f_1 == 3 || Global_1900412.f_1 == 4)
			{
				return true;
			}
			break;
		case 4:
			if (Global_1900412.f_1 == 4)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_43(bool bParam0)
{
	int iVar0;

	if (Global_1900412.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_51() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900412.f_2 == 4 && Global_1900412.f_12 != Global_1900412.f_13) && !bParam0)
	{
		Global_1900412.f_1 = Global_1900412.f_2;
		Global_1900412.f_12 = Global_1900412.f_13;
		func_160(iVar0, Global_1900412.f_12);
	}
	else
	{
		Global_1900412.f_1 = 0;
		Global_1900412.f_7 = iVar0;
		Global_1900412.f_8 = func_161();
		Global_1900412.f_9 = func_162(Global_1893611.f_2);
		Global_1900412.f_11 = func_163(Global_1896646.f_41);
		if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
		{
			func_164(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
		else if (Global_1900412.f_11 != -1)
		{
			func_164(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
		}
		else
		{
			func_164(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
	}
	Global_1900412.f_2 = 0;
}

int func_44(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_45()
{
	if (!Global_1896762.f_353)
	{
	}
	Global_1896762.f_353 = 1;
}

void func_46()
{
	if (!Global_1072759.f_2)
	{
		func_165();
	}
}

void func_47(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (MAP::DOES_BLIP_EXIST(iParam0->f_1246[iVar0]))
		{
			MAP::REMOVE_BLIP(&(iParam0->f_1246[iVar0]));
		}
		iVar0++;
	}
}

void func_48(bool bParam0)
{
	if (bParam0)
	{
		func_166(49);
	}
	else
	{
		func_167(49);
	}
}

void func_49()
{
	if (Global_1108965.f_775.f_28 != -1)
	{
		Global_1108965.f_775.f_28 = -1;
	}
}

void func_50(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 11)
	{
		Global_1108965.f_775.f_5[iParam0] = Global_1295619.f_16;
	}
}

int func_51()
{
	return Global_1572887.f_14;
}

bool func_52()
{
	return Global_1051645.f_8;
}

bool func_53(struct<2> Param0)
{
	if (!func_168(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_169(Param0))
	{
		return false;
	}
	return true;
}

void func_54(struct<2> Param0)
{
	struct<32> Var0;

	if (func_133(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_133(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_133(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_65(Param0, &Var0))
		{
			if (Var0.f_29 == -2.476369E+14f)
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, -5.802101E-13f);
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

struct<2> func_55(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_56(struct<2> Param0, int iParam2)
{
	if (!func_53(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_170(Param0);
	}
	else
	{
		func_171(Param0, iParam2);
	}
	func_172();
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_173(&Global_1940186, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_174(&Global_1940186, 8388608);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_58(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_175(iVar0, 1);
		if ((iVar1 == -4.356636E+32f || iVar1 == -1.514687E+13f) || iVar1 == 3.829501E+32f)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_176(cVar2);
			}
			else
			{
				func_177();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_59(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_178(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900460.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900460.f_66;
	func_179(Param0, iVar0);
	Global_1900460.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
	{
		return iVar0;
	}
	func_180(iVar0, iParam2);
	return iParam2;
}

bool func_60(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_61(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_62(int iParam0)
{
	Global_1900460 = (Global_1900460 || iParam0);
}

int func_63(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_53(Param0))
	{
		return 0;
	}
	iVar0 = func_178(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_181(Param0, func_55(0), iParam2))
	{
		func_56(func_55(0), 3);
		func_56(func_55(iVar0), 4);
		return 0;
	}
	func_180(iVar0, 0);
	func_56(func_55(0), 3);
	func_56(func_55(1), 4);
	return 1;
}

int func_64(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_65(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_140(Param0, &vVar0);
	if (func_182(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_66(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_67(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_68(int iParam0, int iParam1)
{
	if (!Global_1072759.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1206939[iParam1 /*12*/] && iParam0) != 0;
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
	if (!func_53(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_70(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!(uParam0[iVar0 /*13*/])->f_12)
		{
		}
		else if (func_142((uParam0[iVar0 /*13*/])->f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_71(var uParam0, int iParam1)
{
	func_183(&(uParam0->f_1), iParam1);
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_73(var uParam0, bool bParam1)
{
	if (bParam1 || !func_76(uParam0))
	{
		func_184(uParam0);
	}
}

bool func_74(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(uParam0->f_37);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	if (!func_185(iVar1))
	{
		return false;
	}
	if (func_186((uParam1[iVar2 /*13*/])->f_6))
	{
		return false;
	}
	uParam0->f_50 = { func_187(iVar0) };
	uParam0->f_53 = { (uParam1[iVar2 /*13*/])->f_6 };
	uParam0->f_53.f_2 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(uParam0->f_53, uParam0->f_53.f_1);
	STREAMING::REQUEST_COLLISION_AT_COORD(uParam0->f_53);
	if (!ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(uParam0->f_53))
	{
		return false;
	}
	if (!func_188(&(uParam0->f_53), 1176255488 /* Float: 9999f */))
	{
		return false;
	}
	return true;
}

int func_75(var uParam0)
{
	if (!func_76(uParam0))
	{
		return 0;
	}
	if (func_189(uParam0))
	{
		return uParam0->f_2;
	}
	return func_190(uParam0->f_1);
}

bool func_76(var uParam0)
{
	return func_191(*uParam0, 1);
}

bool func_77(var uParam0)
{
	if (func_79(uParam0, 64) > 0)
	{
		return true;
	}
	return false;
}

bool func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	uParam0->f_56 = 1325400064;
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(uParam0->f_33);
	if (!func_185(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1))
	{
		return false;
	}
	fVar2 = func_192(func_187(iVar1), uParam0->f_53);
	if (fVar2 < uParam0->f_56)
	{
		uParam0->f_56 = fVar2;
	}
	return uParam0->f_33 >= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1);
}

int func_79(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (!func_185(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
		}
		else if (func_107(uParam0[iVar1 /*13*/], iParam1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_80(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar0 = 0f;
	iVar2 = 0;
	while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (func_107(uParam1[iVar2 /*13*/], 1))
		{
		}
		else
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
			if (!func_185(iVar3))
			{
			}
			else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
			}
			else
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar4) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar4))
				{
				}
				else
				{
					fVar1 = func_192(func_187(iVar4), uParam0->f_53);
					if (fVar1 > fVar0)
					{
						fVar0 = fVar1;
						uParam0->f_50 = { func_187(iVar4) };
					}
				}
			}
		}
		iVar2++;
	}
	uParam0->f_34 = PATHFIND::_SIMULATED_ROUTE_CREATE(uParam0->f_50, uParam0->f_53, 0);
}

void func_81(var uParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (PATHFIND::_SIMULATED_ROUTE_EXISTS(uParam0->f_34))
	{
		if (PATHFIND::SIMULATED_ROUTE_IS_LOADED(uParam0->f_34))
		{
			PATHFIND::SIMULATED_ROUTE_TRAVEL_TO_POINT(uParam0->f_34, 1f, 5f);
			uParam0->f_36 = BUILTIN::CEIL(((PATHFIND::SIMULATED_ROUTE_GET_ETA(uParam0->f_34) * 1148846080) * 1069547520));
			fVar0 = func_192(uParam0->f_50, uParam0->f_53);
			fVar1 = 5f;
			iVar2 = BUILTIN::CEIL((fVar0 / fVar1)) * 1000;
			if (uParam0->f_36 < iVar2)
			{
				uParam0->f_36 = BUILTIN::CEIL(((fVar0 * 1069547520) / fVar1)) * 1000;
			}
			if ((uParam0->f_36 % 60000) > 0)
			{
				uParam0->f_36 = (uParam0->f_36 + (60000 - (uParam0->f_36 % 60000)));
			}
			Global_1108965.f_23 = uParam0->f_35;
			Global_1108965.f_24 = uParam0->f_36;
			func_71(uParam0, 1);
		}
	}
}

bool func_82(var uParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_42, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 6500;
}

void func_83(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 255;
	if (!func_30(uParam0, 2))
	{
		iVar0 = func_193(uParam1, 2.350989E-38f);
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_194(uParam0);
			func_71(uParam0, 2);
			uParam0->f_49 = iVar0;
		}
	}
	if (func_30(uParam0, 2) && !func_30(uParam0, 16))
	{
		func_195(uParam0);
		func_196(uParam0, uParam1);
		func_71(uParam0, 16);
	}
	if (!func_30(uParam0, 16))
	{
		iVar1 = (uParam0->f_36 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_35, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	else
	{
		iVar1 = (3000 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_38, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	if (iVar1 <= 0)
	{
		func_71(uParam0, 32);
		if (!func_30(uParam0, 16))
		{
			func_196(uParam0, uParam1);
		}
	}
}

bool func_84(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_107(uParam0[iVar0 /*13*/], 1))
			{
				if (!(func_107(uParam0[iVar0 /*13*/], iParam1) || func_107(uParam0[iVar0 /*13*/], iParam2)))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_85(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	bVar2 = false;
	iVar3 = 255;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (func_107(uParam1[iVar1 /*13*/], 2.350989E-38f))
			{
				iVar4 = NETWORK::GET_TIME_DIFFERENCE((uParam1[iVar1 /*13*/])->f_10, (uParam1[iVar1 /*13*/])->f_9);
				if (!bVar2 || iVar4 < iVar0)
				{
					bVar2 = true;
					iVar0 = iVar4;
					iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
				}
			}
		}
		iVar1++;
	}
	uParam0->f_48 = iVar3;
}

bool func_86(var uParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_40, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 20000;
}

bool func_87(int iParam0)
{
	if (iParam0->f_1278)
	{
		return true;
	}
	if (!func_116(iParam0, 0f))
	{
		HUD::TEXT_BLOCK_REQUEST("GEIRONMP");
		func_123(iParam0, 0f);
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("GEIRONMP"))
	{
		if (!HUD::_TEXT_BLOCK_IS_STREAMED("GEIRONMP"))
		{
			HUD::TEXT_BLOCK_REQUEST("GEIRONMP");
		}
		return false;
	}
	iParam0->f_1278 = 1;
	return true;
}

void func_88(int iParam0, int iParam1)
{
	iParam0->f_2 = iParam1;
}

bool func_89(var uParam0, int iParam1)
{
	if (!func_116(iParam1, 0f))
	{
		HUD::TEXT_BLOCK_REQUEST("GEIRONMP");
		func_123(iParam1, 0f);
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("GEIRONMP"))
	{
		if (!HUD::_TEXT_BLOCK_IS_STREAMED("GEIRONMP"))
		{
			HUD::TEXT_BLOCK_REQUEST("GEIRONMP");
		}
		return false;
	}
	if (!PROPSET::_HAS_PROP_SET_LOADED_2(func_197()) || !PROPSET::_HAS_PROP_SET_LOADED(func_197()))
	{
		func_198();
		return false;
	}
	STREAMING::REQUEST_PTFX_ASSET();
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return false;
	}
	if (func_199())
	{
		if (!func_200())
		{
			func_201(1);
		}
		func_92(uParam0, 64);
		return false;
	}
	func_108(uParam0, 64);
	uParam0->f_11 = 0;
	iParam1->f_1254 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	func_41(0);
	iParam1->f_1278 = 1;
	return true;
}

void func_90()
{
	func_202(3);
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_WHISTLE_ANIM(iParam0, iParam1, iParam2);
}

void func_92(var uParam0, int iParam1)
{
	func_183(uParam0, iParam1);
}

void func_93()
{
	if (MAP::IS_WAYPOINT_ACTIVE())
	{
		MAP::CLEAR_GPS_PLAYER_WAYPOINT();
		MAP::SET_WAYPOINT_OFF();
	}
}

struct<2> func_94(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_96(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5) || Global_1900412.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_51() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_162(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = iVar0;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = iVar1;
	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
	{
		func_164(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}
	else if (Global_1900412.f_11 != -1)
	{
		func_164(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
	}
}

int func_97(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1072759.f_22943.f_1 || Global_1072759.f_22943.f_1 == 0) || iParam1 > Global_1072759.f_22943) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::COPY_SCRIPT_STRUCT(&(Global_1072759.f_22943), &uVar1, 2);
		}
		else
		{
			Global_1072759.f_22943.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_1072759.f_22943 = iParam1;
		}
		if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
		{
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	if (func_203())
	{
		iParam0->f_166 = 1;
	}
	else if (iParam0->f_166)
	{
		func_97("MP_HORSE_RACE_START", 1, 0);
		iParam0->f_166 = 0;
	}
}

void func_99()
{
	func_148(&Global_1108965, 32);
}

void func_100(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_204(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_205(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_101(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	if (func_107(uParam1, 131072))
	{
		return;
	}
	if (func_186(uParam0->f_53))
	{
		return;
	}
	if (func_192(Global_34, uParam0->f_53) > 1137180672)
	{
		return;
	}
	vVar0 = { uParam0->f_53 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	PATHFIND::_0xCF213A5FC3ABFC08(vVar0.x, vVar0.y, (1112014848 * 2f));
	if (!ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(vVar0))
	{
		PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar0 + Vector(1112014848, 1112014848, 1112014848), vVar0 - Vector(1112014848, 1112014848, 1112014848));
		return;
	}
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(vVar0, false, &vVar0, 2))
	{
		vVar0 = { uParam0->f_53 };
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam2->f_1279))
		{
			iParam2->f_1279 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_206(), uParam0->f_53, 0f, 0f, 0f, 1.5f, false, false, false, true);
		}
	}
	if (PROPSET::_HAS_PROP_SET_LOADED_2(func_197()))
	{
		func_188(&vVar0, 1176255488 /* Float: 9999f */);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam2->f_1279))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iParam2->f_1279, true);
		}
		iParam2->f_1279 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_206(), vVar0, 0f, 0f, 0f, 1.5f, false, false, false, true);
		iParam2->f_1280 = PROPSET::_CREATE_PROP_SET(func_197(), vVar0, 0, 0f, 9999f, false, true);
		if (!func_107(uParam1, 131072))
		{
			func_92(uParam1, 131072);
		}
	}
	if (func_107(uParam1, 2f))
	{
		func_108(uParam1, 2f);
	}
}

void func_102(var uParam0, int iParam1)
{
	if (BUILTIN::VDIST(Global_34, uParam0->f_53) < 1125515264)
	{
		return;
	}
	if (!func_186(uParam0->f_53))
	{
		func_207(&(iParam1->f_1255), uParam0->f_53, 1, -1f);
	}
}

void func_103()
{
	struct<30> Var0;
	struct<9> Var30;

	if (!func_208(Global_33, 1))
	{
		if (PED::_GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME(Global_33))
		{
			func_209(0);
		}
		return;
	}
	if (!func_210(255) || !func_211(255))
	{
		return;
	}
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED(9, true);
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(15, false, 0.75f);
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(19, true, 0.05f);
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED(3, false);
	func_212(func_187(PLAYER::PLAYER_ID()), 2f, 7f, &Var0, &Var30);
	func_213(1, 0);
	func_214(Var0, Var30, 1, 1, 1);
}

void func_104()
{
	func_183(&(Global_1072759.f_22945.f_3), 4);
}

void func_105()
{
	func_183(&(Global_1072759.f_22945.f_3), 16);
}

void func_106(var uParam0, var uParam1, int iParam2)
{
	float fVar0;

	func_101(uParam0, uParam1, iParam2);
	func_215(iParam2);
	if ((!func_116(iParam2, 262144) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_49)) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(uParam0->f_49))
	{
		func_216("IRON_TICKER_WINNER_VALID", uParam0->f_49, -18751.78f);
		func_123(iParam2, 262144);
	}
	if (func_30(uParam0, 32) && !uParam1->f_11)
	{
		func_92(uParam1, 9.403955E-38f);
		return;
	}
	fVar0 = func_217(PLAYER::PLAYER_PED_ID(), uParam0->f_53, 0);
	if ((fVar0 <= 1107558400 && !uParam1->f_11) && !func_116(iParam2, 65536))
	{
		uParam1->f_11 = 1;
		uParam1->f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_92(uParam1, 2.350989E-38f);
	}
	if (fVar0 > 1107558400)
	{
		if (!func_107(uParam1, 3.85186E-34f) && MAP::IS_WAYPOINT_ACTIVE())
		{
			MAP::CLEAR_GPS_PLAYER_WAYPOINT();
			MAP::SET_WAYPOINT_OFF();
			func_92(uParam1, 3.85186E-34f);
		}
		if (!MAP::DOES_BLIP_EXIST(iParam2->f_1244))
		{
			iParam2->f_1244 = MAP::BLIP_ADD_FOR_COORDS(-5.138841E+28f, uParam0->f_53);
			MAP::BLIP_ADD_MODIFIER(iParam2->f_1244, -2.727505E-29f);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam2->f_1244, "IRON_WAYPOINT_NAME");
		}
		if (!MAP::DOES_BLIP_EXIST(iParam2->f_1245))
		{
			iParam2->f_1245 = MAP::_BLIP_ADD_FOR_AREA(3681776f, uParam0->f_53, 45f, 45f, 45f, 0);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam2->f_1244, "IRON_AREA_NAME");
		}
	}
}

bool func_107(var uParam0, int iParam1)
{
	return func_142(*uParam0, iParam1);
}

void func_108(var uParam0, int iParam1)
{
	func_218(uParam0, iParam1);
}

void func_109(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar2 = 0;
	while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
		}
		else if (func_107(uParam1[iVar2 /*13*/], 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if ((uParam1[iVar2 /*13*/])->f_11)
			{
				iVar3 = NETWORK::GET_TIME_DIFFERENCE((uParam1[iVar2 /*13*/])->f_10, (uParam1[iVar2 /*13*/])->f_9);
				fVar4 = 0f;
				func_219(&(iParam2->f_182), BUILTIN::TO_FLOAT(iVar3), iVar1, &(iParam2->f_1180[iVar2]), 0, 0f, 0, 0, 0, 0);
			}
			else
			{
				iVar3 = uParam0->f_36 + 3000;
				fVar4 = func_220(uParam0, iVar1);
				func_219(&(iParam2->f_182), -1f, iVar1, &(iParam2->f_1180[iVar2]), 0, fVar4, 0, 0, 0, 0);
			}
		}
		iVar2++;
	}
	func_221(&(iParam2->f_182));
}

void func_110(int iParam0)
{
	var uVar0;

	uVar0 = 1;
	func_222(&(iParam0->f_167), &(iParam0->f_182), &uVar0, 10241, 0);
}

bool func_111(var uParam0)
{
	return func_191(*uParam0, 1);
}

void func_112(var uParam0, bool bParam1)
{
	if (bParam1 || !func_111(uParam0))
	{
		func_223(uParam0);
	}
}

int func_113(var uParam0)
{
	if (!func_111(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1148846080));
	}
	if (func_224(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1148846080));
	}
	return (func_225() - BUILTIN::ROUND((uParam0->f_1 * 1148846080)));
}

void func_114(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;

	fVar0 = BUILTIN::VDIST(iParam1->f_1216, uParam0->f_53);
	fVar1 = BUILTIN::VDIST(Global_34, uParam0->f_53);
	fVar2 = (fVar0 - fVar1);
	bVar3 = 7.296474E+25f;
	iVar4 = func_226(fVar2);
	Var5.f_1 = 11;
	func_227(&Var5, iVar4);
	if (uParam0->f_48 == PLAYER::PLAYER_ID())
	{
		bVar3 = 2.886543E+10f;
	}
	func_228(fVar2);
	func_229(bVar3, &Var5, 0, 255, 0, 0);
}

struct<2> func_115(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

bool func_116(int iParam0, float fParam1)
{
	return func_142(iParam0->f_1276, fParam1);
}

int func_117(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	if (func_230(iParam0, sParam1, &bVar0, 0, vVar2, 0, 0))
	{
		func_231(iParam0, sParam1, bParam2, bParam3, bParam4);
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (bVar0)
	{
		func_39(iParam0, 1, 1);
	}
	return iVar1;
}

void func_118(bool bParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	bool bVar0;

	if ((func_232(bParam0, &bVar0) && func_233(bParam0)) && func_234(bParam0, -6.67918E-23f, &bVar0))
	{
		func_235(bParam0, iParam1, bParam2, iParam3, sParam4);
	}
	if (bVar0)
	{
		func_37(bParam0, 1);
	}
}

int func_119(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	return func_236(sParam0, iParam1, iParam2, iParam3, 0, bParam4);
}

bool func_120(int iParam0)
{
	return func_237(1, iParam0);
}

char* func_121()
{
	return "IRON_SPECTATE_HELP";
}

int func_122(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_123(int iParam0, float fParam1)
{
	func_183(&(iParam0->f_1276), fParam1);
}

int func_124(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	int iVar20;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	iVar20 = UIFEED::_UI_FEED_POST_TWO_TEXT_SHARD(&Var0, &vVar13, bParam6, bParam7);
	return iVar20;
}

bool func_125()
{
	if (func_199())
	{
		return true;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 9.155838E-30f))
	{
		return true;
	}
	if (func_203())
	{
		return true;
	}
	return false;
}

int func_126(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	switch (iParam3)
	{
		case 3:
			iVar0 = func_238(sParam0, sParam1, sParam2, -2, 0, 0, 0, 1, 1, 1);
			break;
		case 2:
			iVar0 = func_124(sParam0, sParam1, -2, 0, 0, 0, 1, 1);
			break;
		case 1:
			iVar0 = func_239(sParam0, -2, 0, 0, 0, 1);
			break;
	}
	return iVar0;
}

float func_127(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_132(func_55(0)) && func_64(func_55(0)) == 7)
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
			iVar6 = func_240(iParam0);
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
			return func_241(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_242(Global_1072759.f_21353.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return -4.19002E+20f;
	}
	iVar7 = func_243(iParam0, 1);
	if (!bVar0)
	{
		if (func_244(iParam0, bParam1))
		{
			return func_241(iParam0);
		}
		else if (func_245(iParam0, bParam1))
		{
			if (func_246(iParam0, bParam1))
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
		return func_240(iParam0);
	}
	else if (func_244(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return 27.64779f;
		}
		else if (func_248(func_247(func_55(0)), 1) == 9.256025E-25f)
		{
			return func_241(iParam0);
		}
		else
		{
			return func_241(iParam0);
		}
	}
	else if (func_245(iParam0, bParam1))
	{
		return 4.709691E+29f;
	}
	return 3.737303E-09f;
}

char* func_128(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_249(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_129(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940186.f_12)
	{
		if ((bParam2 || Global_1940186.f_13 > 0) || Global_1940186.f_11 > 0)
		{
			return true;
		}
	}
	else if (bParam1 && !Global_1940186.f_9 == 9.534398E+10f)
	{
		return false;
	}
	if (Global_1940186.f_14 > 0 || (bParam2 && Global_1940186.f_14 > -1))
	{
		return true;
	}
	if (bParam0)
	{
		if (Global_1940186.f_7)
		{
			if (bParam2 || Global_1940186.f_15 > 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_130(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_131()
{
	Global_1149417.f_5568.f_22 = MISC::GET_FRAME_COUNT();
}

bool func_132(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_134(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_133(struct<2> Param0)
{
	return func_28(Param0);
}

int func_134(struct<2> Param0)
{
	int iVar0;

	if (!func_53(Param0))
	{
		return -1;
	}
	iVar0 = func_250(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

int func_135(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_251())
	{
		return 0;
	}
	if (!func_252())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_61(&Global_0, 8);
	}
	func_61(&Global_0, 1);
	return 1;
}

void func_136(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_253(func_64(Param0));
	iVar1 = func_133(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_51() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_254(Param0, &Var2, iParam2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	if (Global_1072759.f_16.f_1)
	{
		Var2.f_6 = 1;
	}
	Var2.f_5 = Global_1072759.f_16.f_2;
	STATS::_STATSTRACKER_DEED_STATUS(iVar0, iVar1, iParam2, &Var2);
}

int func_137(bool bParam0)
{
	if (!bParam0 && func_255(1.600127E-25f))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(6.069634E-12f, bParam0, 0);
	return 1;
}

int func_138(struct<2> Param0)
{
	return func_256(func_178(Param0));
}

int func_139()
{
	return Global_1572887.f_72.f_40;
}

bool func_140(struct<2> Param0, bool bParam2)
{
	if (!func_53(Param0))
	{
		return false;
	}
	func_257(bParam2);
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

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return 2f;
		case 2:
			return 3.689349E+19f;
		case 3:
			return 1.584563E+29f;
		case 4:
			return 1.038459E+34f;
		case 5:
			return 4.656613E-10f;
		case 7:
			return 3.051758E-05f;
		case 6:
			return 2.524355E-29f;
		case 8:
			return 3.85186E-34f;
		default:
			break;
	}
	return 0;
}

bool func_142(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_143(struct<2> Param0)
{
	int iVar0;

	if (Global_1900530 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1900530 - 1))
	{
		if (func_66(Global_1900531[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_144(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_145()
{
	return Global_1102813.f_3672;
}

void func_146(var uParam0, int iParam1)
{
	func_183(uParam0, iParam1);
}

void func_147(var uParam0, int iParam1)
{
	func_218(&(uParam0->f_18), iParam1);
}

void func_148(var uParam0, int iParam1)
{
	func_183(&(uParam0->f_18), iParam1);
}

void func_149(bool bParam0)
{
	if (bParam0->f_11 >= 0)
	{
		if (!AUDIO::_HAS_SOUND_ID_FINISHED(bParam0->f_11))
		{
			AUDIO::_STOP_SOUND_WITH_ID(bParam0->f_11);
		}
		AUDIO::RELEASE_SOUND_ID(bParam0->f_11);
		bParam0->f_11 = -1;
	}
}

void func_150()
{
	AUDIO::_RELEASE_SHARD_SOUNDS(func_258(), func_259());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_260(), func_259());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_261(), func_259());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_262(), func_259());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_263(), func_264());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_265(), func_266());
}

void func_151(bool bParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(bParam0->f_3))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(bParam0->f_3));
	}
	if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(2.040361E+17f))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(2.040361E+17f);
	}
}

void func_152(int iParam0)
{
	if (Global_1902880.f_1 != iParam0)
	{
		Global_1902880.f_1 = iParam0;
	}
}

void func_153(int iParam0)
{
	Global_1902880 = iParam0;
}

void func_154(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar0], "Position", "");
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar0], "GamertagColor", 0);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar0], "StatPriority", "");
		iVar0++;
	}
}

void func_155(bool bParam0)
{
	int iVar0;
	var uVar1;

	if ((*bParam0)[0 /*5*/] != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((*bParam0)[iVar0 /*5*/]);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((bParam0[iVar0 /*5*/])->f_1);
			iVar0++;
		}
		uVar1 = 2;
		MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar1, 11);
	}
}

void func_156(var uParam0, bool bParam1)
{
	int iVar0;

	UIAPPS::_CLOSE_UIAPP_BY_HASH(1.355797E-17f);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_142))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_143[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_143[iVar0]);
		}
		iVar0++;
	}
	AUDIO::_RELEASE_SOUNDSET("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_267(&(uParam0->f_162));
	}
	func_152(0);
}

void func_157(var uParam0)
{
	int iVar0;
	var uVar1;
	struct<34> Var3;

	iVar0 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_142 = 0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		uParam0->f_3[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		uParam0->f_12[iVar0] = 0;
		uParam0->f_45[iVar0 /*3*/][0] = 0;
		uParam0->f_45[iVar0 /*3*/][1] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		uParam0->f_143[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_149 = 0;
	uParam0->f_150 = 0;
	uParam0->f_151 = 0;
	uParam0->f_158 = 0;
	uParam0->f_159 = 0;
	uParam0->f_160 = 0;
	uParam0->f_161 = -1;
	uParam0->f_232 = 0;
	uParam0->f_152 = 0;
	uParam0->f_157 = 0;
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_153), &uVar1, 2);
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_155), &uVar1, 2);
	Var3 = 32;
	Var3.f_33 = 32;
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_162), &Var3, 70);
}

char* func_158()
{
	return "MP_OutofAreaDirectional";
}

void func_159(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(iParam0);
	}
	else
	{
		func_268(iParam0);
	}
}

void func_160(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_161()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 1008981770)
	{
		return 19;
	}
	if (fVar0 < 1042536202)
	{
		return 15;
	}
	if (fVar0 < 1050589266)
	{
		return 17;
	}
	if (fVar0 < 1055622431)
	{
		return 16;
	}
	if (fVar0 < 1058810102)
	{
		return 18;
	}
	return 0;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_164(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_165()
{
	if (Global_1572887.f_14 == -1)
	{
		return;
	}
	Global_1072759.f_2 = 0;
}

int func_166(int iParam0)
{
	if (func_269(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0)
{
	if (func_270(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_168(int iParam0)
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

int func_169(int iParam0)
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

int func_170(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_250(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_271(iVar0);
}

int func_171(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1072759.f_19487 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_140(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1072759.f_19487 == 0)
	{
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { vVar6 };
		Global_1072759.f_19487++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1072759.f_19487)
	{
		func_140(Global_1072759.f_19487.f_1[iVar9 /*3*/], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			Global_1072759.f_19487.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_272(iVar9);
			Global_1072759.f_19487.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1072759.f_19487 < 31)
	{
		iVar9 = Global_1072759.f_19487;
		Global_1072759.f_19487.f_1[iVar9 /*3*/] = { vVar6 };
		Global_1072759.f_19487++;
		if (Global_1072759.f_19487 > 32)
		{
			Global_1072759.f_19487 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_172()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (func_140(Global_1072759.f_19487.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_174(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_175(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 2.78249E+24f;
		case 1:
			return 6.693887E-32f;
		case 2:
			return 5.643845E-24f;
		case 3:
			return 9.359187E+08f;
		case 4:
			return -973.5235f;
		case 5:
			return -2.181735E+14f;
		case 6:
			return -1.183841E+08f;
		case 7:
			return 4.680602E+25f;
		case 8:
			return -1.773479E-16f;
		case 9:
			return -6.913617E-18f;
		case 10:
			return 9.795292E+09f;
		case 11:
			return 0.3642137f;
		case 12:
			return -5.126168E-25f;
		case 13:
			return 8.819365E+14f;
		case 14:
			return -1.83749E+38f;
		case 15:
			return 3.763102E-35f;
		case 16:
			return -4.525156E-37f;
		case 17:
			return -3.642462E-37f;
		case 18:
			return 3.67809E+26f;
		case 19:
			return 1.223265E-27f;
		case 20:
			return -6.437393E-24f;
		case 21:
			return -2.015906E+37f;
		case 22:
			return 1.310424E+14f;
		case 23:
			return 1.225001E-21f;
		case 24:
			return 2.004928E+23f;
		case 25:
			return 2.380052E+13f;
		case 26:
			return -1.317158E+21f;
		case 27:
			return 502995.2f;
		case 28:
			return -42525.47f;
		case 29:
			return 6.165362E+33f;
		case 30:
			return -4.72096E-26f;
		case 31:
			return 8.031629E+11f;
		case 32:
			return -1.552719E+19f;
		case 33:
			return -2.069399E-17f;
		case 34:
			return -5.058464E+36f;
		case 35:
			return -6.146416E-23f;
		case 36:
			return 6.888527E+30f;
		case 37:
			return -0.1819772f;
		case 38:
			return -1.749466E-35f;
		case 39:
			return 339.8487f;
		case 40:
			return -7.906033E-27f;
		case 41:
			return NaNf;
		case 42:
			return 1.868031E+22f;
		case 43:
			return 7015.23f;
		case 44:
			return -1.772112E+29f;
		case 45:
			return -1.012065E-10f;
		case 46:
			return 2.050823E+10f;
		case 47:
			return -2.330589E-38f;
		case 48:
			return -1.505282E+35f;
		case 49:
			return 5.785034E+12f;
		case 50:
			return -2.038869E-23f;
		case 51:
			return -1.280143E+15f;
		case 52:
			return -1.23064E-10f;
		case 53:
			return -3.291576E-28f;
		case 54:
			return -4.356636E+32f;
		case 55:
			return -1.514687E+13f;
		case 56:
			return -0.05713905f;
		case 57:
			return 3.829501E+32f;
		case 58:
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

void func_176(char[12] cParam0)
{
	Global_1939089.f_75.f_67 = { cParam0 };
}

void func_177()
{
	StringCopy(&(Global_1939089.f_75.f_67), "", 24);
}

int func_178(struct<2> Param0)
{
	int iVar0;

	if (!func_53(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_66(Global_1900460.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_179(struct<2> Param0, int iParam2)
{
	if (!func_53(Param0))
	{
		func_144(&(Global_1900460.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900460.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_273(Param0, 0, 1, -1);
}

void func_180(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_274((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_274(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_53(Global_1900460.f_1[0 /*2*/]))
	{
		func_56(Global_1900460.f_1[0 /*2*/], 3);
	}
}

bool func_181(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_53(Param0))
	{
		return false;
	}
	if (!func_53(Param2))
	{
		return true;
	}
	iVar0 = func_64(Param0);
	iVar1 = func_64(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_182(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_275(iParam0))
	{
		return false;
	}
	if (func_276(iParam0, uParam1, &uVar0))
	{
		func_277(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_183(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0)
{
	func_278(uParam0, 0);
}

int func_185(int iParam0)
{
	return func_279(iParam0);
}

bool func_186(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_187(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_188(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return true;
	}
	return false;
}

bool func_189(var uParam0)
{
	return func_191(*uParam0, 2);
}

int func_190(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

bool func_191(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_192(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_193(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_107(uParam0[iVar0 /*13*/], iParam1))
			{
				return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			}
		}
		iVar0++;
	}
	return 255;
}

void func_194(var uParam0)
{
	uParam0->f_38 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_195(var uParam0)
{
	uParam0->f_38 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_196(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar2 = 0;
	while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
		}
		else if (func_107(uParam1[iVar2 /*13*/], 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			fVar3 = BUILTIN::VDIST(func_187(iVar1), uParam0->f_53);
			uParam0->f_3[iVar2 /*4*/] = iVar1;
			uParam0->f_3[iVar2 /*4*/].f_3 = fVar3;
		}
		iVar2++;
	}
}

int func_197()
{
	return joaat("PG_MP_CAMPFIRE02X");
}

void func_198()
{
	PROPSET::_REQUEST_PROP_SET_2(func_197());
	PROPSET::_REQUEST_PROP_SET(func_197());
}

bool func_199()
{
	return (func_280() != 0 || func_281(1));
}

bool func_200()
{
	return func_282() != 0;
}

int func_201(int iParam0)
{
	if (func_200())
	{
		return 0;
	}
	if (!func_199())
	{
		return 0;
	}
	if (func_283())
	{
		func_284(2);
	}
	else
	{
		func_284(1);
	}
	func_285(iParam0);
	return 1;
}

void func_202(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_286(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

bool func_203()
{
	return func_237(1, 255);
}

void func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 12, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_287();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_205(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 12, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

char* func_206()
{
	return "scr_net_imp_race_smoke";
}

int func_207(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	char* sVar0;

	if (func_142(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (func_142(uParam0->f_1, 16))
			{
				func_288(uParam0, vParam1, iParam4, fParam5);
			}
			else
			{
				func_289(uParam0, vParam1, iParam4, fParam5);
			}
		}
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(-2.564408E+22f);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(-2.564408E+22f))
	{
		if (!func_142(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_290(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = func_292(func_291(iParam4));
				if (uParam0->f_3 > 1092616192)
				{
					uParam0->f_3 = 1092616192; /* Float: 10f */
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_293(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 1097859072)), BUILTIN::FLOOR((uParam0->f_5 + 1097859072))));
				uParam0->f_5 = (uParam0->f_5 / 1132396544);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, func_294(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (func_295(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 1097859072))
				{
					GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_183(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_183(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

bool func_208(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

void func_209(bool bParam0)
{
	if (bParam0)
	{
		func_166(113);
		if (!Global_1295619.f_7)
		{
			func_296(16);
		}
	}
	else
	{
		func_167(113);
		if (!Global_1295619.f_7)
		{
			func_296(16);
		}
	}
}

bool func_210(int iParam0)
{
	return func_237(48, iParam0);
}

bool func_211(int iParam0)
{
	return func_237(49, iParam0);
}

void func_212(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6)
{
	uParam5->f_5 = 2;
	uParam5->f_1 = { vParam0 };
	uParam5->f_17.f_6 = { vParam0 };
	uParam5->f_17 = { fParam3, fParam3, fParam3 };
	if (fParam3 > 1106247680)
	{
		uParam5->f_17 = { fParam3, fParam3, 1106247680 /* Float: 30f */ };
	}
	uParam5->f_17.f_9 = -2.19652E+23f;
	uParam5->f_6.f_6 = { vParam0 };
	uParam5->f_6 = { fParam4, fParam4, 0f };
	uParam5->f_6.f_9 = -2.19652E+23f;
	uParam5->f_16 = 1;
	uParam6->f_5 = 2;
	uParam6->f_1 = { vParam0 };
	uParam6->f_6 = { vParam0 };
}

void func_213(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_166(66);
		if (bParam1)
		{
			func_166(73);
		}
	}
	else
	{
		func_167(66);
		func_167(50);
		func_167(73);
	}
}

int func_214(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_210(255))
	{
		if ((Param0.f_17.f_9 != -9.406495E-20f && Param0.f_17.f_9 != -2.19652E+23f) && Param0.f_17.f_9 != 4.795139E-15f)
		{
			Param0.f_17.f_9 = -2.19652E+23f;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -9.406495E-20f && Param0.f_6.f_9 != -2.19652E+23f) && Param0.f_6.f_9 != 4.795139E-15f)
			{
				Param0.f_6.f_9 = -2.19652E+23f;
			}
		}
		func_297(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = { Param0 };
		func_298(&(Global_1102813.f_3878));
		Global_1102813.f_3878 = { Param30 };
		Global_1102813.f_3909 = iParam39;
		Global_1102813.f_3910 = iParam40;
		Global_1102813.f_3911 = iParam41;
		func_299(Global_1102813.f_3839, 36);
		func_300(Global_1102813.f_3878, 36);
		func_167(48);
		return 1;
	}
	return 0;
}

void func_215(int iParam0)
{
	int iVar0;

	iVar0 = func_44(Global_33);
	if ((func_301(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !func_116(iParam0, 65536))
	{
		func_90();
		func_123(iParam0, 65536);
		iParam0->f_1277 = 1;
	}
	else if ((!func_301(iVar0) || !ENTITY::DOES_ENTITY_EXIST(iVar0)) && func_116(iParam0, 65536))
	{
		func_302(iParam0, 65536);
		iParam0->f_1277 = 1;
	}
}

int func_216(char* sParam0, int iParam1, int iParam2)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	if (iParam1 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return 0;
	}
	StringCopy(&cVar0, PLAYER::GET_PLAYER_NAME(iParam1), 64);
	sVar8 = MISC::VAR_STRING(10, sParam0, func_128(&cVar0, iParam2));
	iVar9 = func_303(sVar8, -2, 0, 0, 0, 1);
	return iVar9;
}

float func_217(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_219(var uParam0, float fParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;

	if ((*uParam3 >= 0 && *uParam3 < 32) && uParam0->f_244[*uParam3 /*23*/].f_14 != 255)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_244[*uParam3 /*23*/].f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_244[*uParam3 /*23*/].f_14))
		{
			func_304(uParam0, *uParam3);
		}
	}
	if (iParam2 == 255)
	{
		return 0;
	}
	iVar0 = *uParam3;
	if (((iVar0 < 0 || uParam0->f_244[iVar0 /*23*/].f_14 != iParam2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_244[iVar0 /*23*/].f_14)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_244[iVar0 /*23*/].f_14))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (uParam0->f_244[iVar1 /*23*/].f_14 != 255)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_244[iVar1 /*23*/].f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_244[iVar1 /*23*/].f_14))
				{
					func_305(uParam0);
					func_304(uParam0, iVar1);
				}
			}
			if (uParam0->f_244[iVar1 /*23*/].f_14 == iParam2)
			{
				func_305(uParam0);
				iVar0 = iVar1;
				Jump @336; //curOff = 286
			}
			else if (uParam0->f_244[iVar1 /*23*/].f_14 == 255 && iVar0 == -1)
			{
				func_305(uParam0);
				iVar0 = iVar1;
			}
			iVar1++;
		}
	}
	if (iVar0 >= 0)
	{
		if (bParam4)
		{
			func_305(uParam0);
			func_304(uParam0, iVar0);
			*uParam3 = 0;
		}
		else
		{
			if ((uParam0->f_244[iVar0 /*23*/].f_5 != fParam1 || uParam0->f_244[iVar0 /*23*/].f_1 != fParam5) || uParam0->f_244[iVar0 /*23*/].f_2 != fParam6)
			{
				func_306(uParam0);
			}
			uParam0->f_244[iVar0 /*23*/].f_14 = iParam2;
			uParam0->f_244[iVar0 /*23*/].f_5 = fParam1;
			uParam0->f_244[iVar0 /*23*/].f_1 = fParam5;
			uParam0->f_244[iVar0 /*23*/].f_2 = fParam6;
			uParam0->f_244[iVar0 /*23*/].f_3 = iParam8;
			uParam0->f_244[iVar0 /*23*/].f_4 = iParam9;
			uParam0->f_244[iVar0 /*23*/] = iParam7;
			*uParam3 = iVar0;
		}
	}
	return 1;
}

float func_220(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (uParam0->f_3[iVar0 /*4*/] == iParam1)
		{
			return uParam0->f_3[iVar0 /*4*/].f_3;
		}
		iVar0++;
	}
	return BUILTIN::VDIST(func_187(iParam1), uParam0->f_53);
}

void func_221(var uParam0)
{
	NETWORK::_0x7E300B5B86AB1D1A(&(uParam0->f_244), uParam0->f_244, 23, 1, 2, 0, 5, 2, 0, 0, 0, 0, 0, 0, 0);
}

void func_222(bool bParam0, bool bParam1, var uParam2, int iParam3, int iParam4)
{
	bool bVar0;

	iParam3 |= 8;
	if (func_232(bParam0, &bVar0) && func_307(bParam0, bParam1, iParam3, 3.661866E-19f, 4.465091E-08f, 27.64779f, 27.64779f, iParam4))
	{
		func_308(bParam1, uParam2, iParam3 | 8, 3.661866E-19f, 4.465091E-08f, 4.808429E-35f, 4.808429E-35f, iParam4);
	}
	if (bVar0)
	{
		func_38(bParam1);
		func_37(bParam0, 1);
	}
}

void func_223(var uParam0)
{
	func_309(uParam0, 0f);
}

bool func_224(var uParam0)
{
	return func_191(*uParam0, 2);
}

int func_225()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_226(float fParam0)
{
	if (fParam0 >= 1175846912)
	{
		return 1.203159E+10f;
	}
	else if (fParam0 >= 1175027712)
	{
		return 5.163968E-21f;
	}
	else if (fParam0 >= 1174011904)
	{
		return 8.054569E-17f;
	}
	else if (fParam0 >= 1172373504)
	{
		return 4.195699E+14f;
	}
	else if (fParam0 >= 1170735104)
	{
		return -2.365619E-39f;
	}
	else if (fParam0 >= 1169096704)
	{
		return -4.265863E+27f;
	}
	else if (fParam0 >= 1167458304)
	{
		return 4.993816E-29f;
	}
	else if (fParam0 >= 1165623296)
	{
		return -1.428604E-29f;
	}
	else if (fParam0 >= 1162346496)
	{
		return 5.459524E-37f;
	}
	else if (fParam0 >= 1159069696)
	{
		return 1.902259E-21f;
	}
	else if (fParam0 >= 1153957888)
	{
		return -7.290795E-23f;
	}
	return 0;
}

void func_227(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_228(float fParam0)
{
	struct<2> Var0;
	float fVar2;

	Var0 = { func_94(-1.864693E+24f, 2.172585E+11f) };
	fVar2 = func_310(Var0);
	if (fParam0 > 0f && fParam0 > fVar2)
	{
		STATS::STAT_ID_SET_FLOAT(&Var0, fParam0, true);
	}
}

int func_229(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	return func_311(bParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

bool func_230(int iParam0, char* sParam1, bool bParam2, bool bParam3, vector3 vParam4, float fParam7, bool bParam8)
{
	bool bVar0;

	if (!func_312() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		*bParam2 = 1;
		return false;
	}
	if (iParam0->f_1 == 0)
	{
		iParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MPCountdown");
		iParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_1, "Timer", MISC::VAR_STRING(2, "FME_COUNTDOWN", sParam1));
		iParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iParam0->f_1, "showTimer", true);
		if ((bParam3 && !func_186(vParam4)) && fParam7 > 0f)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(func_158());
			HUD::_ENABLE_HUD_CONTEXT(-4.163976E-38f);
			fParam7 = func_313(fParam7, 0f, 1148846080 /* Float: 1000f */);
			if (bParam8 == 0 || !VOLUME::DOES_VOLUME_EXIST(bParam8))
			{
				bVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam4, 0f, 0f, 0f, fParam7, fParam7, fParam7);
				GRAPHICS::_0x735762E8D7573E42(1, bVar0, 5f);
				VOLUME::DELETE_VOLUME(bVar0);
			}
			else
			{
				GRAPHICS::_0x735762E8D7573E42(1, bParam8, 5f);
			}
		}
	}
	return true;
}

void func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2))
	{
		if (bParam2 && iParam1 < 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_2, MISC::VAR_STRING(2, "GEIRON_RACE_GO"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_2, MISC::VAR_STRING(2, "FME_COUNTDOWN", iParam1));
		}
		if (bParam3)
		{
			if (iParam0->f_5 < 0)
			{
				if (iParam0->f_4 >= 0)
				{
					if (!AUDIO::_HAS_SOUND_ID_FINISHED(iParam0->f_4))
					{
						AUDIO::_STOP_SOUND_WITH_ID(iParam0->f_4);
					}
					AUDIO::RELEASE_SOUND_ID(iParam0->f_4);
					iParam0->f_4 = -1;
				}
				func_314(iParam0);
			}
		}
		else if (bParam4)
		{
			if (iParam0->f_4 < 0)
			{
				iParam0->f_4 = AUDIO::GET_SOUND_ID();
				AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(iParam0->f_4, func_262(), func_259(), true);
				AUDIO::_SET_VARIABLE_ON_SOUND_WITH_ID(iParam0->f_4, "Time", BUILTIN::TO_FLOAT(iParam1));
			}
		}
	}
}

int func_232(bool bParam0, bool bParam1)
{
	if (!func_312())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (bParam0->f_2)
	{
		case 0:
			if (func_315())
			{
				bParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-3.715775E+34f);
				func_153(1);
				func_316(bParam0, 1);
			}
			return 0;
		case 1:
			if (!func_317())
			{
				return 0;
			}
			func_316(bParam0, 2);
			break;
	}
	Global_1940072.f_110 = 1;
	return 1;
}

int func_233(bool bParam0)
{
	if (bParam0->f_5 == 0)
	{
		bParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "centralInfoDatastore");
		func_318(bParam0->f_5, &(bParam0->f_6), 0);
		func_318(bParam0->f_5, &(bParam0->f_7), 1);
		func_318(bParam0->f_5, &(bParam0->f_8), 37);
		func_319(bParam0->f_8, 1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(bParam0->f_5, "timerMessageString", "");
		return 0;
	}
	return 1;
}

int func_234(bool bParam0, int iParam1, bool bParam2)
{
	switch (bParam0->f_1)
	{
		case 0:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(bParam0->f_3))
			{
				func_320(bParam0, 1);
			}
			break;
		case 1:
			*bParam0 = iParam1;
			if (*bParam0 != 0)
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(bParam0->f_3, *bParam0);
				UISTATEMACHINE::UI_STATE_MACHINE_CREATE(2.040361E+17f, bParam0->f_3);
			}
			func_320(bParam0, 2);
			break;
		case 2:
			if (iParam1 != *bParam0)
			{
				func_320(bParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(2.040361E+17f) && UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(2.040361E+17f))
			{
				UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_EXIT(2.040361E+17f, 0);
				func_320(bParam0, 4);
			}
			else
			{
				func_320(bParam0, 0);
			}
			break;
		case 4:
			if (!UISTATEMACHINE::_UI_STATE_MACHINE_IS_EXITED(2.040361E+17f))
			{
				*bParam2 = 1;
				func_320(bParam0, 0);
			}
			break;
	}
	return 0;
}

void func_235(bool bParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	bool bVar1;

	sVar0 = func_321(iParam1, bParam2, 3, 0, 0, 0);
	if (bParam0->f_13 != iParam1)
	{
		func_322(bParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (bParam0->f_14 != bVar1)
	{
		func_319(bParam0->f_7, bVar1);
		bParam0->f_14 = bVar1;
	}
	func_323(bParam0, iParam1, sParam4);
	func_324(bParam0, iParam1);
	bParam0->f_13 = iParam1;
}

int func_236(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
	iVar15 = UIFEED::_UI_FEED_POST_OBJECTIVE(&Var0, &Var13, bParam5);
	return iVar15;
}

bool func_237(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_325(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_145())
	{
		return func_325(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_325(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

int func_238(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<4> Var0;
	struct<4> Var13;
	int iVar20;

	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = iParam4;
	Var0.f_2 = iParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	iVar20 = UIFEED::_UI_FEED_POST_THREE_TEXT_SHARD(&Var0, &Var13, bParam7, bParam8, bParam9);
	return iVar20;
}

int func_239(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar20;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar20 = UIFEED::_UI_FEED_POST_ONE_TEXT_SHARD(&Var0, &Var13, bParam5);
	return iVar20;
}

float func_240(int iParam0)
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

float func_241(int iParam0)
{
	if (GANG::NETWORK_GET_GANG_ID(iParam0) != Global_1295619.f_10 && !func_69())
	{
		return 4.279651E-16f;
	}
	return -18751.78f;
}

bool func_242(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_243(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_326(iParam0, bParam1));
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

bool func_244(int iParam0, bool bParam1)
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

bool func_245(int iParam0, bool bParam1)
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
	if (func_327(iParam0))
	{
		return true;
	}
	return !func_244(iParam0, 0);
}

bool func_246(int iParam0, bool bParam1)
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
	if (func_328(iParam0))
	{
		return false;
	}
	if (func_327(iParam0))
	{
		return false;
	}
	if (func_329(iParam0))
	{
		return true;
	}
	return func_330(iParam0);
}

int func_247(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_140(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_248(int iParam0, int iParam1)
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

char* func_249(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_250(struct<2> Param0)
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
	if (!func_140(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_140(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
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

bool func_251()
{
	return !Global_1572887.f_10;
}

bool func_252()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1.517571E-22f;
		case 3:
			return 8.881306E+07f;
		case 4:
			return -3.626336E+26f;
		case 5:
			return 488.7555f;
		case 8:
			return 3.590393E-16f;
		case 7:
			return -1.702224E-36f;
		case 6:
			return -3.570683E+33f;
		default:
			break;
	}
	return 0;
}

void func_254(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_64(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_331(func_247(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_332(iVar5) == func_247(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_333(iVar4);
			if (!func_334(iVar6, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1107816.f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107816.f_33[iVar2 /*16*/].f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	iParam2->f_2 = Global_1114878[iVar0 /*70*/];
}

bool func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_335(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_336(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_337(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

int func_256(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900460.f_66 == 0)
	{
		return 0;
	}
	if (Global_1900460.f_66 == 1)
	{
		Global_1900460.f_66 = 0;
		func_144(&(Global_1900460.f_1[0 /*2*/]));
		return 1;
	}
	func_144(&(Global_1900460.f_1[iParam0 /*2*/]));
	Global_1900460.f_66 = (Global_1900460.f_66 - 1);
	func_180(iParam0, Global_1900460.f_66);
	return 1;
}

void func_257(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

char* func_258()
{
	return "Match_End_Timer";
}

char* func_259()
{
	return "RDRO_Countdown_Sounds";
}

char* func_260()
{
	return "Round_End_Timer";
}

char* func_261()
{
	return "10S";
}

char* func_262()
{
	return "Out_Of_Bounds";
}

char* func_263()
{
	return "321_Countdown";
}

char* func_264()
{
	return "HUD_MP_FREE_MODE";
}

char* func_265()
{
	return "target_spawn";
}

char* func_266()
{
	return "MP005_OBHELT_sounds";
}

void func_267(var uParam0)
{
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_268(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_286(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

bool func_269(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

bool func_270(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

int func_271(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1072759.f_19487.f_1[iVar0 /*3*/] = { Global_1072759.f_19487.f_1[iVar0 + 1 /*3*/] };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1072759.f_19487 < 32)
	{
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { vVar1 };
	}
	Global_1072759.f_19487 = (Global_1072759.f_19487 - 1);
	if (Global_1072759.f_19487 < 0)
	{
		Global_1072759.f_19487 = 0;
	}
	return 1;
}

int func_272(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1072759.f_19487 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1072759.f_19487.f_1[iVar0 + 1 /*3*/] = { Global_1072759.f_19487.f_1[iVar0 /*3*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1072759.f_19487.f_1[iParam0 /*3*/] = { vVar1 };
	Global_1072759.f_19487++;
	if (Global_1072759.f_19487 > 32)
	{
		Global_1072759.f_19487 = 32;
	}
	return 1;
}

int func_273(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_338(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_28(Param0);
	Var0.f_3 = iParam3;
	func_339(&Var0, bParam2, iParam4);
	return 1;
}

void func_274(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { Var0 };
}

bool func_275(int iParam0)
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

bool func_276(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_340(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_277(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_341(iParam0, uParam2->f_1);
	bParam1->f_2 = -9.223824E-39f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_2 = iVar0;
	bParam1->f_2 = -9.223824E-39f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_9), bParam1);
	bParam1->f_2 = 1.375422E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_17), bParam1);
	if (*uParam2 == 3)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_342(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_343(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_344(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_345(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_346(iVar0);
	bParam1->f_2 = 0.7275926f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_8), bParam1);
	bParam1->f_2 = 4.168656E-33f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	bParam1->f_2 = -3.435564E+12f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_25), bParam1);
	bParam1->f_2 = 2.963616E-21f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_26), bParam1);
	bParam1->f_2 = -5.234699E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_27), bParam1);
	bParam1->f_2 = -7.178136E+15f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_28), bParam1);
	iVar0 = 0;
	bParam1->f_2 = -1.430733E-34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.513029E-27f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.293884E-33f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.998338E+12f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_32 = iVar0;
}

void func_278(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_347(uParam0, 1);
	func_348(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_279(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

int func_280()
{
	return Global_1300340.f_150;
}

bool func_281(int iParam0)
{
	return (Global_1300340.f_288.f_2 && iParam0) != 0;
}

int func_282()
{
	return Global_1300340.f_288;
}

bool func_283()
{
	int iVar0;

	iVar0 = func_349();
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(iVar0, false);
}

void func_284(int iParam0)
{
	Global_1300340.f_288 = iParam0;
}

void func_285(int iParam0)
{
	Global_1300340.f_288.f_1 = iParam0;
}

bool func_286(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_287()
{
	if (!Global_1102813.f_16)
	{
		return;
	}
	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
}

void func_288(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;

	fParam5 = func_350(vParam1, fParam5);
	fVar0 = func_351(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(*uParam0, uParam0->f_3);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar0);
	}
}

void func_289(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = (IntToFloat((MISC::GET_FRAME_COUNT() - uParam0->f_4)) / 1125515264);
	if (fVar0 >= 1f)
	{
		func_183(&(uParam0->f_1), 16);
		func_288(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_350(vParam1, fParam5);
		fVar1 = func_351(fParam5, iParam4);
		fVar3 = func_352(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_352(0f, fVar1, fVar0);
	}
	GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(*uParam0, fVar3);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar2);
}

int func_290(float fParam0)
{
	int iVar0;

	iVar0 = func_353(fParam0);
	return iVar0;
}

float func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 1133903872 /* Float: 300f */;
		case 2:
			return 1148846080 /* Float: 1000f */;
		default:
			break;
	}
	return 1133903872 /* Float: 300f */;
}

int func_292(float fParam0)
{
	int iVar0;

	iVar0 = func_353(fParam0);
	return iVar0;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1103626240 /* Float: 25f */;
		case 1:
			return 1109393408 /* Float: 40f */;
		case 3:
			return 1128792064 /* Float: 200f */;
		case 4:
			return 1127481344 /* Float: 180f */;
		case 2:
			return 1125515264 /* Float: 150f */;
		default:
			break;
	}
	return 1124073472 /* Float: 128f */;
}

float func_294(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 1061997773 /* Float: 0.8f */;
		case 4:
			return 1056964608 /* Float: 0.5f */;
		case 0:
			return 1058642330 /* Float: 0.6f */;
		case 2:
			return 1063675494 /* Float: 0.9f */;
		default:
			break;
	}
	return 1f;
}

float func_295(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_354(0) };
	vVar3 = { func_355(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

int func_296(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_IS_BIT_FLAG_SET(&(Global_1156096.f_2166), iParam0))
	{
		return 1;
	}
	if (Global_1156096.f_2165 >= 21)
	{
		return 0;
	}
	Global_1156096.f_2143[Global_1156096.f_2165] = iParam0;
	Global_1156096.f_2165++;
	return 1;
}

void func_297(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_298(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_299(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_300(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_301(int iParam0)
{
	return AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(iParam0, -1) != PLAYER::PLAYER_PED_ID();
}

void func_302(int iParam0, int iParam1)
{
	func_218(&(iParam0->f_1276), iParam1);
}

int func_303(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar17 = UIFEED::_UI_FEED_POST_FEED_TICKER(&Var0, &Var13, bParam5);
	return iVar17;
}

void func_304(var uParam0, int iParam1)
{
	uParam0->f_244[iParam1 /*23*/].f_14 = 255;
	uParam0->f_244[iParam1 /*23*/].f_5 = -1f;
	uParam0->f_244[iParam1 /*23*/].f_1 = -1f;
	uParam0->f_244[iParam1 /*23*/].f_2 = -1f;
}

void func_305(bool bParam0)
{
	bParam0->f_982 = 1;
}

void func_306(bool bParam0)
{
	bParam0->f_981 = 1;
}

int func_307(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;

	if (bParam1->f_11.f_2 == 0)
	{
		bParam1->f_983 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		if (!func_142(iParam2, 8))
		{
			bVar0 = func_142(iParam2, 128);
			func_356(bParam0, bParam1, iParam2, bVar0, iParam3, iParam4, iParam5, iParam6);
		}
		if (!func_142(iParam2, 4))
		{
			func_357(bParam1, iParam2, iParam7);
		}
	}
	return 1;
}

void func_308(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12[8];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	bVar0 = func_142(iParam2, 8);
	bVar1 = func_142(iParam2, 128);
	bVar2 = func_142(iParam2, 1024);
	bVar3 = func_142(iParam2, 4096);
	bVar4 = func_142(iParam2, 8192);
	bVar5 = func_142(iParam2, 256);
	bVar6 = iParam7 > 1;
	iVar21 = 0;
	while (iVar21 < 8)
	{
		iVar12[iVar21] = iVar21;
		iVar21++;
	}
	iVar22 = PLAYER::PLAYER_ID();
	if (bVar3)
	{
		if (bParam0->f_983 != MISC::_SHOULD_USE_METRIC_WEIGHT())
		{
			func_306(bParam0);
			func_305(bParam0);
			bParam0->f_983 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		}
	}
	else if (bVar4)
	{
		if (bParam0->f_983 != MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2())
		{
			func_306(bParam0);
			func_305(bParam0);
			bParam0->f_983 = MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2();
		}
	}
	if (bParam0->f_982 || bParam0->f_981)
	{
		iVar11 = 0;
		while (iVar11 <= 31)
		{
			if (bParam0->f_244[iVar11 /*23*/].f_14 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0->f_244[iVar11 /*23*/].f_14))
			{
				if (bVar6)
				{
					iVar9 = bParam0->f_244[iVar11 /*23*/];
					if (iVar9 == PLAYER::GET_PLAYER_TEAM(iVar22))
					{
						fVar7 = (*uParam1)[iVar9];
					}
					else if ((*uParam1)[iVar9] > fVar8)
					{
						fVar8 = (*uParam1)[iVar9];
					}
				}
				else if (bParam0->f_244[iVar11 /*23*/].f_14 == PLAYER::PLAYER_ID())
				{
					fVar7 = bParam0->f_244[iVar11 /*23*/].f_5;
				}
				else if (!bVar10)
				{
					fVar8 = bParam0->f_244[iVar11 /*23*/].f_5;
					bVar10 = true;
				}
				StringCopy(&(bParam0->f_244[iVar11 /*23*/].f_14.f_1), PLAYER::GET_PLAYER_NAME(bParam0->f_244[iVar11 /*23*/].f_14), 64);
			}
			iVar11++;
		}
		if (!bVar0)
		{
			func_358(bParam0, iParam2, fVar7, fVar8, bVar1, bVar2, bVar3, iParam3, iParam4, iParam5, iParam6, bParam0->f_982);
		}
		if (bParam0->f_981)
		{
			iVar24 = 0;
			while (iVar24 <= 31)
			{
				if (bParam0->f_244[iVar24 /*23*/].f_14 == PLAYER::PLAYER_ID())
				{
					iVar23 = iVar24;
				}
				else
				{
					iVar24++;
				}
			}
			func_359(&(bParam0->f_11), &(bParam0->f_244), PLAYER::GET_PLAYER_TEAM(iVar22), bVar6, &iVar12, 0, iVar23);
			bParam0->f_981 = 0;
		}
	}
	if (bVar5)
	{
		MISC::SET_BIT(&(bParam0->f_11.f_158), 18);
	}
	if (!func_142(iParam2, 4))
	{
		func_360(&(bParam0->f_11), &(bParam0->f_244), &iVar22, bParam0->f_982, &iVar12, bVar6, 0, 0);
		bParam0->f_982 = 0;
	}
}

void func_309(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_361() - fParam1);
	func_347(uParam0, 1);
	func_348(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_310(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

int func_311(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_227(iParam2, -3.005759E+25f);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_362(uParam1, bParam0, Var3);
	return 1;
}

bool func_312()
{
	return true;
}

float func_313(float fParam0, float fParam1, float fParam2)
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

void func_314(int iParam0)
{
	if (iParam0->f_5 < 0)
	{
		iParam0->f_5 = AUDIO::GET_SOUND_ID();
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(iParam0->f_5, func_263(), func_264(), true);
	}
}

bool func_315()
{
	return (!Global_1902880 && MISC::ABSI((MISC::GET_FRAME_COUNT() - Global_1902880.f_2)) >= 5);
}

void func_316(bool bParam0, int iParam1)
{
	if (bParam0->f_2 != iParam1)
	{
		bParam0->f_2 = iParam1;
	}
}

bool func_317()
{
	int iVar0;

	iVar0 = 1;
	if ((((((!AUDIO::PREPARE_SOUND(func_258(), func_259(), -2) || !AUDIO::PREPARE_SOUND(func_260(), func_259(), -2)) || !AUDIO::PREPARE_SOUND(func_261(), func_259(), -2)) || !AUDIO::PREPARE_SOUND(func_363(), func_259(), -2)) || !AUDIO::PREPARE_SOUND(func_262(), func_259(), -2)) || !AUDIO::PREPARE_SOUND(func_263(), func_264(), -2)) || !AUDIO::PREPARE_SOUND(func_265(), func_266(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_318(int iParam0, var uParam1, int iParam2)
{
	switch (func_364(iParam2))
	{
		case 0:
			func_365(iParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_366(iParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_367(iParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_368(iParam0, uParam1, iParam2, -1f);
			break;
		case 4:
			func_369(iParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_319(int iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0, bParam1);
}

void func_320(bool bParam0, int iParam1)
{
	if (bParam0->f_1 != iParam1)
	{
		bParam0->f_1 = iParam1;
	}
}

char* func_321(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1148846080);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_370((iVar5 / 60), 0, 180);
	iVar7 = func_370((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_GET_TEXT_SUBSTRING_2(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_GET_TEXT_SUBSTRING_2(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_322(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0, sParam1);
}

void func_323(bool bParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 10000)
	{
		if ((bParam0->f_13 > iParam1 && bParam0->f_13 > 10000) && bParam0->f_11 < 0)
		{
			bParam0->f_11 = AUDIO::GET_SOUND_ID();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || MISC::ARE_STRINGS_EQUAL(sParam2, func_261()))
			{
				AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(bParam0->f_11, func_261(), func_259(), true);
			}
			else
			{
				AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(bParam0->f_11, sParam2, func_259(), true);
				AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("Time", 10f, sParam2, func_259());
			}
		}
	}
	else
	{
		func_149(bParam0);
	}
}

void func_324(bool bParam0, int iParam1)
{
	if (iParam1 <= 0 && bParam0->f_12 < 0)
	{
		bParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(bParam0->f_12, func_363(), func_259(), true);
	}
}

bool func_325(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

float func_326(int iParam0, bool bParam1)
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

bool func_327(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iParam0))
	{
		return true;
	}
	return false;
}

bool func_328(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

bool func_329(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iParam0))
	{
		return true;
	}
	return false;
}

bool func_330(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_371(iParam0);
		return false;
	}
	if (func_329(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 2)
		{
			func_372(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1295619.f_5, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 2);
}

int func_331(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_373(&Var1, iParam0))
	{
		iVar0 = ((func_374() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_332(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

int func_333(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_334(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("OUTLAW"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_335(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_336(int iParam0)
{
	int iVar0;

	iVar0 = func_375(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_337(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

int func_338(struct<2> Param0)
{
	int iVar0;

	if (Global_1205789.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1205789.f_129)
	{
		if (func_66(Global_1205789[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_339(var uParam0, bool bParam1, int iParam2)
{
	func_376(uParam0, iParam2);
	if (Global_1205789.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_377(func_338(uParam0->f_1));
	}
	else
	{
		func_378();
	}
}

int func_340(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -4.585506E-21f;
			break;
		case -3:
			iVar0 = 2.741749E+08f;
			break;
		case 1:
			iVar0 = -6.049365E-28f;
			break;
		case -2:
			iVar0 = 1.540051E+08f;
			break;
		case 2:
			iVar0 = -2.882769E-19f;
			break;
		case 3:
			iVar0 = 3.67675E+19f;
			break;
		case 4:
			iVar0 = 2.694446E+36f;
			break;
		case 5:
			iVar0 = 32.15498f;
			break;
		case 6:
			iVar0 = -8.391956E-09f;
			break;
		case 7:
			iVar0 = 61686.1f;
			break;
		case 8:
			iVar0 = 5.182694E+24f;
			break;
		case 9:
			iVar0 = -5.243371E-15f;
			break;
		case 10:
			iVar0 = 5.863398E+29f;
			break;
		case 11:
			iVar0 = 6.767836E+30f;
			break;
		case 12:
			iVar0 = -1.287736E+17f;
			break;
		case 13:
			iVar0 = 5713673f;
			break;
		case 14:
			iVar0 = -3.715131E-31f;
			break;
		case 15:
			iVar0 = 3.998251E+09f;
			break;
		case 16:
			iVar0 = 2.816196E+24f;
			break;
		case 17:
			iVar0 = 3.266747E+28f;
			break;
		case 18:
			iVar0 = 1347.951f;
			break;
		case 19:
			iVar0 = -4.200322E+27f;
			break;
	}
	return iVar0;
}

int func_341(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_379(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		case 434282564:
			return 11;
		case 1228993410:
			return 12;
		default:
			break;
	}
	return 0;
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		case -862833187:
			return 23;
		case -89188661:
			return 24;
		case 1792833819:
			return 25;
		case 696644969:
			return 26;
		case -1317631038:
			return 27;
		case 1539627774:
			return 28;
		case 591458137:
			return 29;
		case 1837071987:
			return 30;
		case 67219675:
			return 31;
		case 1885832251:
			return 32;
		case -171568028:
			return 33;
		case -1968391995:
			return 34;
		case 2042305612:
			return 35;
		case -1797632736:
			return 36;
		default:
			break;
	}
	return -1;
}

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_349()
{
	return Global_1300340.f_150.f_4;
}

float func_350(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam0, true);
}

float func_351(float fParam0, int iParam1)
{
	float fVar0;

	fVar0 = (2f * BUILTIN::SIN((1127481344 * (fParam0 / func_291(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_352(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_353(float fParam0)
{
	int iVar0;

	if (fParam0 < 1132068864)
	{
		if (fParam0 < 1112014848)
		{
			iVar0 = 1048576000; /* Float: 0.25f */
		}
		else if (fParam0 < 1120403456)
		{
			iVar0 = 1056964608; /* Float: 0.5f */
		}
		else if (fParam0 < 1125515264)
		{
			iVar0 = 1f;
		}
		else if (fParam0 < 1128792064)
		{
			iVar0 = 1069547520; /* Float: 1.5f */
		}
		else if (fParam0 < 1132068864)
		{
			iVar0 = 2f;
		}
	}
	else if (fParam0 < 1140457472)
	{
		if (fParam0 < 1133903872)
		{
			iVar0 = 1075838976; /* Float: 2.5f */
		}
		else if (fParam0 < 1135542272)
		{
			iVar0 = 3f;
		}
		else if (fParam0 < 1137180672)
		{
			iVar0 = 1080033280; /* Float: 3.5f */
		}
		else if (fParam0 < 1138819072)
		{
			iVar0 = 4f;
		}
		else if (fParam0 < 1140457472)
		{
			iVar0 = 1083179008; /* Float: 4.5f */
		}
	}
	else if (fParam0 < 1144750080)
	{
		if (fParam0 < 1141473280)
		{
			iVar0 = 5f;
		}
		else if (fParam0 < 1142292480)
		{
			iVar0 = 1085276160; /* Float: 5.5f */
		}
		else if (fParam0 < 1143111680)
		{
			iVar0 = 6f;
		}
		else if (fParam0 < 1143930880)
		{
			iVar0 = 1087373312; /* Float: 6.5f */
		}
		else if (fParam0 < 1144750080)
		{
			iVar0 = 7f;
		}
	}
	else if (fParam0 < 1148846080)
	{
		if (fParam0 < 1145569280)
		{
			iVar0 = 1089470464; /* Float: 7.5f */
		}
		else if (fParam0 < 1146388480)
		{
			iVar0 = 1090519040; /* Float: 8f */
		}
		else if (fParam0 < 1147207680)
		{
			iVar0 = 1091043328; /* Float: 8.5f */
		}
		else if (fParam0 < 1148026880)
		{
			iVar0 = 1091567616; /* Float: 9f */
		}
		else if (fParam0 < 1148846080)
		{
			iVar0 = 1092091904; /* Float: 9.5f */
		}
	}
	else
	{
		iVar0 = 1092616192; /* Float: 10f */
	}
	return iVar0;
}

Vector3 func_354(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_355((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_355(vector3 vParam0)
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

int func_356(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if ((*bParam1)[0 /*5*/] == 0)
	{
		iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(bParam0->f_5, "score");
		func_366(iVar0, bParam1[0 /*5*/], 2, "0");
		func_366(iVar0, bParam1[1 /*5*/], 8, "0");
		bVar1 = !func_142(iParam2, 16);
		bVar2 = !func_142(iParam2, 32);
		func_369(iVar0, &((bParam1[0 /*5*/])->f_3), 5, bVar1, 0);
		func_365(iVar0, &((bParam1[0 /*5*/])->f_1), 3, iParam4);
		func_365(iVar0, &((bParam1[0 /*5*/])->f_2), 4, iParam6);
		func_369(iVar0, &((bParam1[1 /*5*/])->f_3), 11, bVar2, 0);
		func_365(iVar0, &((bParam1[1 /*5*/])->f_1), 9, iParam5);
		func_365(iVar0, &((bParam1[1 /*5*/])->f_2), 10, iParam7);
	}
	return 1;
}

int func_357(bool bParam0, int iParam1, int iParam2)
{
	if (func_142(iParam1, 262144))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 6);
	}
	else if (func_142(iParam1, 65536))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 3);
	}
	else if (func_142(iParam1, 131072))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 4);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 18);
	}
	else if (func_142(iParam1, 1048576))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 8);
	}
	else
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 6);
	}
	if (func_142(iParam1, 64))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 0);
	}
	if (func_142(iParam1, 2048))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 7);
	}
	if (func_142(iParam1, 1024))
	{
		bParam0->f_11.f_151 = 2;
		MISC::SET_BIT(&(bParam0->f_11.f_159), 31);
	}
	if (func_142(iParam1, 4096))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 9);
	}
	if (func_142(iParam1, 16384))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 18);
	}
	if (func_142(iParam1, 4194304))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 11);
	}
	if (func_142(iParam1, 8388608))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 12);
	}
	if (func_142(iParam1, 8192))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 10);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 18);
	}
	if (func_142(iParam1, 32768))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 22);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 23);
	}
	if (func_142(iParam1, 524288))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 7);
	}
	if (func_142(iParam1, 2097152))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(bParam0->f_11.f_160), 9);
	}
	if (func_142(iParam1, 2.350989E-38f))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 0);
		MISC::SET_BIT(&(bParam0->f_11.f_160), 13);
	}
	func_380(&(bParam0->f_11));
	func_305(bParam0);
	if (iParam2 > 1)
	{
		bParam0->f_11.f_150 = iParam2;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(bParam0->f_984)))
	{
		func_381(&(bParam0->f_11), &(bParam0->f_984));
	}
	return 1;
}

void func_358(bool bParam0, int iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	char cVar0[32];
	char cVar4[32];
	char cVar8[32];
	var uVar12;
	char cVar16[32];
	char cVar20[32];
	char cVar24[32];
	var uVar28;
	bool bVar32;
	bool bVar33;

	if ((bParam0[0 /*5*/])->f_4 != fParam2 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar0, func_382(fParam2), 32);
			func_322((*bParam0)[0 /*5*/], &cVar0);
		}
		else if (bParam4)
		{
			StringCopy(&cVar4, func_383(fParam2), 32);
			func_322((*bParam0)[0 /*5*/], &cVar4);
		}
		else if (bParam5)
		{
			StringCopy(&cVar8, MISC::_GET_STRING_FROM_FLOAT(fParam2, 2), 32);
			func_322((*bParam0)[0 /*5*/], &cVar8);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam2), "%i", &uVar12);
			func_322((*bParam0)[0 /*5*/], &uVar12);
		}
		(bParam0[0 /*5*/])->f_4 = fParam2;
	}
	if ((bParam0[1 /*5*/])->f_4 != fParam3 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar16, func_382(fParam3), 32);
			func_322((*bParam0)[1 /*5*/], &cVar16);
		}
		else if (bParam4)
		{
			StringCopy(&cVar20, func_383(fParam3), 32);
			func_322((*bParam0)[1 /*5*/], &cVar20);
		}
		else if (bParam5)
		{
			StringCopy(&cVar24, MISC::_GET_STRING_FROM_FLOAT(fParam3, 2), 32);
			func_322((*bParam0)[1 /*5*/], &cVar24);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam3), "%i", &uVar28);
			func_322((*bParam0)[1 /*5*/], &uVar28);
		}
		(bParam0[1 /*5*/])->f_4 = fParam3;
	}
	bVar32 = !func_142(iParam1, 16);
	bVar33 = !func_142(iParam1, 32);
	func_384((bParam0[0 /*5*/])->f_1, iParam7);
	func_384((bParam0[0 /*5*/])->f_2, iParam9);
	func_319((bParam0[0 /*5*/])->f_3, bVar32);
	func_384((bParam0[1 /*5*/])->f_1, iParam8);
	func_384((bParam0[1 /*5*/])->f_2, iParam10);
	func_319((bParam0[1 /*5*/])->f_3, bVar33);
}

void func_359(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	if (func_385(0))
	{
		func_386(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	}
	else
	{
		func_387(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	}
	func_388(uParam0, uParam1, bParam3, iParam2, iParam4, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam6);
}

void func_360(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = -1;
	if (!MISC::IS_BIT_SET(uParam0->f_159, 1))
	{
		iVar2 = PLAYER::GET_PLAYER_TEAM(*iParam2);
		iVar3 = func_389();
		bVar4 = func_390();
		bVar5 = func_391();
		bVar6 = MISC::IS_BIT_SET(uParam0->f_158, 18);
		if (uParam0->f_152 != Global_1940072.f_111)
		{
			if (uParam0->f_152)
			{
				bVar1 = true;
			}
			uParam0->f_152 = Global_1940072.f_111;
			bParam3 = true;
		}
		func_392(uParam0, uParam1, iParam2, &iVar0, iVar2);
		if (!MISC::IS_BIT_SET(uParam0->f_158, 1))
		{
			if (!bVar5 && !bParam7)
			{
				if ((iVar3 != -1 || bVar4) || bVar6)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_158, 0))
					{
						func_380(uParam0);
						func_393(uParam0, uParam1, iParam4, 0, 1, bParam5, iVar2, -1, bParam6, 0, iVar0);
						MISC::SET_BIT(&(uParam0->f_158), 0);
					}
					else
					{
						func_359(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
					}
					MISC::CLEAR_BIT(&(uParam0->f_158), 13);
					MISC::SET_BIT(&(uParam0->f_158), 1);
				}
			}
		}
		else if ((((iVar3 == -1 && !bVar4) && !bVar6) || bVar5) || bParam7)
		{
			if (!bVar1)
			{
				MISC::SET_BIT(&(uParam0->f_158), 13);
			}
			PAD::ENABLE_CONTROL_ACTION(0, -6.00134E-14f, true);
			PAD::ENABLE_CONTROL_ACTION(0, -1.422437E+11f, true);
			PAD::ENABLE_CONTROL_ACTION(1, -6.00134E-14f, true);
			PAD::ENABLE_CONTROL_ACTION(1, -1.422437E+11f, true);
			PAD::ENABLE_CONTROL_ACTION(0, 0.07516246f, true);
			PAD::ENABLE_CONTROL_ACTION(0, -1.909881f, true);
			PAD::ENABLE_CONTROL_ACTION(1, 0.07516246f, true);
			PAD::ENABLE_CONTROL_ACTION(1, -1.909881f, true);
			MISC::CLEAR_BIT(&(uParam0->f_158), 1);
			if (bVar5)
			{
				Global_1940072.f_5 = 0;
			}
		}
		else
		{
			if (!Global_1940072.f_111)
			{
				PAD::DISABLE_CONTROL_ACTION(0, -6.00134E-14f, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1.422437E+11f, false);
				PAD::DISABLE_CONTROL_ACTION(1, -6.00134E-14f, false);
				PAD::DISABLE_CONTROL_ACTION(1, -1.422437E+11f, false);
				PAD::DISABLE_CONTROL_ACTION(0, 0.07516246f, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1.909881f, false);
				PAD::DISABLE_CONTROL_ACTION(1, 0.07516246f, false);
				PAD::DISABLE_CONTROL_ACTION(1, -1.909881f, false);
			}
			if (bParam3)
			{
				func_359(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
			}
			else if (!Global_1940072.f_111)
			{
				func_394(uParam0, uParam1);
				func_395(uParam0, uParam1, 0);
			}
		}
		if (!Global_1940072.f_111)
		{
			if ((MISC::IS_BIT_SET(uParam0->f_158, 1) || MISC::IS_BIT_SET(uParam0->f_158, 13)) || uParam0->f_232 < 2)
			{
				func_396(uParam0, 1);
			}
			func_397(uParam0);
		}
	}
}

float func_361()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_362(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_398(uParam0))
	{
		return;
	}
	if (Global_1292096.f_2012 < 20)
	{
		Global_1292096.f_2012++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_2012.f_1[iVar0 /*24*/] = { Global_1292096.f_2012.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = bParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1292096.f_2012.f_1[(Global_1292096.f_2012 - 1) /*24*/] = { Var1 };
}

char* func_363()
{
	return "countdown_final_thud";
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_365(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_399(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iParam0, func_400(iParam2), iParam3);
}

void func_366(int iParam0, var uParam1, int iParam2, char* sParam3)
{
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sParam3 = func_401(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0, func_400(iParam2), sParam3);
}

void func_367(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_402(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(iParam0, func_400(iParam2), iParam3);
}

void func_368(int iParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_403(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_FLOAT(iParam0, func_400(iParam2), fParam3);
}

void func_369(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam4)
	{
		bParam3 = func_404(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iParam0, func_400(iParam2), bParam3);
}

int func_370(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_371(int iParam0)
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
	func_405(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_372(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_406(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1295619.f_17[iVar0])
		{
			func_371(iParam0);
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
						func_372(iVar3, iParam1, 0, 1, 0, 0);
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
			func_407(&Var6, uVar4);
		}
	}
}

bool func_373(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_374()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1245159.f_9818;
	vVar1.f_2 = -28.97993f;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_375(int iParam0)
{
	return func_408(iParam0) + 30;
}

void func_376(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1205789.f_129 >= 32)
	{
		Global_1205789.f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1205789.f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		Global_1205789[Global_1205789.f_129 /*4*/] = { *uParam0 };
		Global_1205789.f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1205789.f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { Global_1205789[iVar1 /*4*/] };
		Global_1205789[iVar1 /*4*/] = { Global_1205789[iVar1 + 1 /*4*/] };
		Global_1205789[iVar1 + 1 /*4*/] = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	Global_1205789[iParam1 /*4*/] = { *uParam0 };
	Global_1205789.f_129++;
}

void func_377(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1205789.f_129)
	{
		return;
	}
	Global_1205789.f_130 = iParam0;
	Global_1205789.f_131 = Global_1205789[iParam0 /*4*/];
}

void func_378()
{
	if (Global_1205789.f_131 == 0)
	{
		return;
	}
	Global_1205789.f_130 = func_409(Global_1205789.f_131);
	if (Global_1205789.f_130 < 0)
	{
		Global_1205789.f_131 = 0;
	}
}

bool func_379(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_410(iParam0, uParam1, &uVar0))
	{
		func_411(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_380(var uParam0)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Title");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
	uParam0->f_142 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
}

void func_381(var uParam0, char* sParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_158, 7))
	{
		MISC::SET_BIT(&(uParam0->f_158), 7);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Heading", sParam1);
	}
}

char* func_382(char* sParam0)
{
	return MISC::VAR_STRING(6, "FM_WEIGHT", sParam0);
}

char* func_383(float fParam0)
{
	return MISC::VAR_STRING(2, "FM_PERCENT", BUILTIN::FLOOR((fParam0 * 1120403456)));
}

void func_384(int iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(iParam0, iParam1);
}

bool func_385(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return false;
	}
	return Global_3145858.f_61223[iParam0 /*3*/].f_1 != 0;
}

void func_386(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	if (Global_1940072.f_111)
	{
		if (func_412())
		{
			func_413(uParam0, uParam1, iParam2, iParam7, iParam8);
		}
		else
		{
			func_414(uParam0, uParam1, iParam2, iParam7, iParam8);
		}
	}
	else
	{
		func_394(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_415(&((uParam1[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_416(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_417(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", iVar1);
				}
				bVar3 = iVar2 == (uParam1[iVar0 /*23*/])->f_14;
				fVar4 = func_418(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_419(uParam0, uParam1, iVar0, bParam3, fVar4);
					}
				}
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", fVar4);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_420());
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_421((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_422())
					{
						if (func_423((uParam1[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_424((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_425(uParam1[iVar0 /*23*/], uParam0->f_159);
				fVar6 = func_426(uParam1[iVar0 /*23*/], uParam0->f_159);
				fVar7 = func_427(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = func_428(uParam1[iVar0 /*23*/]);
				if (Global_1049307[0 /*3*/].f_1 != 0)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_GET_STRING_FROM_FLOAT(fVar5, 0));
				}
				if (Global_1049307[1 /*3*/].f_1 != 0 && fVar6 != -1f)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT(fVar6, 0));
				}
				if (Global_1049307[2 /*3*/].f_1 != 0)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(fVar7, 0));
				}
				if (Global_1049307[3 /*3*/].f_1 != 0)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "StatRounds", MISC::_GET_STRING_FROM_FLOAT(fVar8, 0));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && (uParam1[iVar0 /*23*/])->f_13)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", -1.101616E-25f);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", fVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_387(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	bool bVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;

	if (Global_1940072.f_111)
	{
		func_414(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_394(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_415(&((uParam1[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_416(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_417(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", iVar1);
				}
				bVar8 = iVar7 == (uParam1[iVar0 /*23*/])->f_14;
				fVar9 = func_418(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_419(uParam0, uParam1, iVar0, bParam3, fVar9);
					}
				}
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", fVar9);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_420());
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_421((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_422())
					{
						if (func_423((uParam1[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_424((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (func_429(uParam0->f_159))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else if (func_430(uParam0->f_159))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar0 /*23*/])->f_8, 0));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar2 = BUILTIN::ROUND(func_426(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = BUILTIN::ROUND(func_425(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_431(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((uParam1[iVar0 /*23*/])->f_1 == 1286243416)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = func_432(iVar2, iVar11, 0);
					}
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_GET_STRING_FROM_FLOAT(func_425(uParam1[iVar0 /*23*/], uParam0->f_159), func_433(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(func_427(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(func_426(uParam1[iVar0 /*23*/], uParam0->f_159));
					}
					if (func_431(iVar3))
					{
						sVar6 = func_321(iVar3, 1, 2, 0, 0, 0);
					}
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_427(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_426(uParam1[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar13, MISC::_GET_STRING_FROM_FLOAT(fVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !func_430(uParam0->f_159)) && !func_434(uParam0->f_159))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT(func_426(uParam1[iVar0 /*23*/], uParam0->f_159), func_433(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_382(func_427(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = func_427(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_321(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(func_427(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_432(iVar2, uParam0->f_159, 0);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", sVar5);
					}
					else
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(func_427(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), func_433(uParam0, 3)));
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && (uParam1[iVar0 /*23*/])->f_13)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", -1.101616E-25f);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", fVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_388(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1940072.f_111)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_435(iParam4, &uVar4, uParam0->f_150, bVar16);
			func_436(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_437(uParam0->f_2, uParam0->f_143[iVar0], "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_438(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_415(&((uParam1[iVar2 /*23*/])->f_14)) && iVar0 < 5)
					{
						func_437(uParam0->f_2, uParam0->f_143[iVar0], "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_435(iParam4, &uVar4, uParam0->f_150, bVar16);
		func_439(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_437(uParam0->f_2, uParam0->f_3[iVar19], "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == (*uParam1)[iVar2 /*23*/] && func_415(&((uParam1[iVar2 /*23*/])->f_14)))
						{
							func_437(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_415(&((uParam1[iVar2 /*23*/])->f_14)))
			{
				func_437(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_437(uParam0->f_2, uParam0->f_12[31], "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

int func_389()
{
	if (Global_1940072.f_20)
	{
		if (Global_1940072.f_5 == 1)
		{
			return 1;
		}
		if (Global_1940072.f_5 == 2)
		{
			return 2;
		}
	}
	return -1;
}

bool func_390()
{
	if (Global_1102813.f_26.f_3440.f_4 && !func_422())
	{
		Global_1102813.f_26.f_3440.f_4 = 0;
	}
	return Global_1102813.f_26.f_3440.f_4;
}

bool func_391()
{
	return (func_440(2) && func_441());
}

void func_392(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_158, 17))
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 22))
		{
			Global_1940072.f_112 = 1;
		}
		else
		{
			Global_1940072.f_112 = 0;
		}
		MISC::SET_BIT(&(uParam0->f_158), 17);
	}
	if (Global_1940072.f_111)
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 28))
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_150 - 1))
			{
				if (iVar0 == iParam4)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((uParam1[iVar0 /*23*/])->f_14 == *iParam2)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_393(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_442(uParam0, uParam1, iParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_388(uParam0, uParam1, bParam5, iParam6, iParam2, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam10);
}

void func_394(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else if (func_415(&((uParam1[iVar0 /*23*/])->f_14)))
		{
			func_443(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_395(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else
		{
			func_416(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_396(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_444(16);
	switch (uParam0->f_232)
	{
		case 0:
			func_152(1);
			func_445(&(uParam0->f_232), 1);
			break;
		case 1:
			AUDIO::PREPARE_SOUNDSET("MP_Leaderboard_Sounds", true);
			func_445(&(uParam0->f_232), 2);
			break;
		case 2:
			iVar1 = UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(1.355797E-17f, func_446(bParam1));
			if (iVar1 == 0)
			{
				func_445(&(uParam0->f_232), 3);
			}
			else if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.355797E-17f))
			{
				func_445(&(uParam0->f_232), 3);
			}
			break;
		case 3:
			if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.355797E-17f))
			{
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(1.355797E-17f, func_447());
				func_445(&(uParam0->f_232), 4);
			}
			else if (func_448())
			{
				func_445(&(uParam0->f_232), 2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_158, 13))
			{
				if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.355797E-17f))
				{
					if (!bVar0)
					{
						AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					UIAPPS::_CLOSE_UIAPP_BY_HASH(1.355797E-17f);
					func_445(&(uParam0->f_232), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				MISC::CLEAR_BIT(&(uParam0->f_158), 13);
				func_445(&(uParam0->f_232), 1);
			}
			else
			{
				func_445(&(uParam0->f_232), 6);
			}
			break;
		case 6:
			func_156(uParam0, bParam1);
			break;
	}
}

void func_397(var uParam0)
{
	func_449(&(uParam0->f_162));
	if ((MISC::IS_BIT_SET(uParam0->f_158, 14) || MISC::IS_BIT_SET(uParam0->f_158, 15)) || MISC::IS_BIT_SET(uParam0->f_158, 16))
	{
		return;
	}
	func_450(&(uParam0->f_162), 0);
	MISC::SET_BIT(&(uParam0->f_158), 14);
}

bool func_398(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_451();
		case 4:
			return 4.808429E-35f;
		case 9:
			return func_452();
		case 10:
			return 4.808429E-35f;
		case 23:
			return 6.6361E+21f;
		case 22:
			return -180.0783f;
		case 24:
			return NaNf;
		case 18:
			return 4.808429E-35f;
		case 25:
			return func_452();
		case 30:
			return func_452();
		default:
			break;
	}
	return 0;
}

char* func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_402(int iParam0)
{
	return 0;
}

float func_403(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_405(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_406(int iParam0, int iParam1, int iParam2)
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

void func_407(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_453(*uParam0);
}

int func_408(int iParam0)
{
	return iParam0 * 31;
}

int func_409(int iParam0)
{
	int iVar0;

	if (Global_1205789.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1205789.f_129)
	{
		if (Global_1205789[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_410(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_340(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_411(bool bParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	bParam0->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam0);
	bParam0->f_2 = -9.223824E-39f;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
		uParam2->f_2 = uVar0;
	}
	bParam0->f_2 = -9.223824E-39f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), bParam0);
	bParam0->f_2 = 1.375422E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), bParam0);
	bParam0->f_2 = 1165207f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), bParam0);
}

bool func_412()
{
	return Global_3145858.f_61251[0 /*3*/].f_1 != 0;
}

void func_413(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<8> Var7;
	char[] cVar15[8];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	float fVar21[8];
	var uVar30[8];
	int iVar39;
	float fVar40;
	bool bVar41;
	float fVar42;
	char* sVar43;

	iVar4 = 0;
	iVar5 = 32;
	iVar6 = PLAYER::PLAYER_ID();
	bVar16 = Global_1049333[0 /*3*/].f_1 == -0.02260292f;
	bVar17 = Global_1049333[0 /*3*/].f_1 == 3.077718E+22f;
	bVar18 = Global_1049333[0 /*3*/].f_1 == 2.175983E+37f;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Position", "");
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar2], "GamertagColor", 0);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "StatPriority", "");
		iVar2++;
	}
	bVar19 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_454() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = BUILTIN::TO_FLOAT(Global_1051030[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0 /*23*/] != -1 && (*uParam1)[iVar0 /*23*/] < 8)
				{
					if (func_455(uParam1[iVar0 /*23*/], 0) != -1f)
					{
						fVar21[(*uParam1)[iVar0 /*23*/]] = (fVar21[(*uParam1)[iVar0 /*23*/]] + func_455(uParam1[iVar0 /*23*/], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_435(iParam2, &uVar30, uParam0->f_150, bVar19);
		func_436(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						Var7 = { func_456(iVar39) };
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var7);
						fVar40 = func_457(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39, MISC::IS_BIT_SET(uParam0->f_160, 14));
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", fVar40);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", MISC::_GET_STRING_FROM_FLOAT(fVar21[iVar39], uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_438(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_415(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar41 = iVar6 == (uParam1[iVar1 /*23*/])->f_14;
						fVar42 = func_418(uParam0, uParam1, iVar1, iVar6, bVar41);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", fVar42);
						sVar43 = "";
						sVar43 = MISC::_GET_STRING_FROM_FLOAT(func_455(uParam1[iVar1 /*23*/], 0), 0);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

void func_414(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	struct<8> Var14;
	char[] cVar22[8];
	bool bVar23;
	bool bVar24;
	float fVar25[8];
	var uVar34[8];
	int iVar43;
	float fVar44;
	bool bVar45;
	float fVar46;
	char* sVar47;
	int iVar48;

	iVar5 = 0;
	iVar6 = 32;
	bVar7 = MISC::IS_BIT_SET(uParam0->f_159, 3);
	bVar8 = MISC::IS_BIT_SET(uParam0->f_159, 23);
	bVar9 = MISC::IS_BIT_SET(uParam0->f_159, 24);
	bVar10 = MISC::IS_BIT_SET(uParam0->f_159, 25);
	bVar11 = MISC::IS_BIT_SET(uParam0->f_160, 10);
	bVar12 = MISC::IS_BIT_SET(uParam0->f_159, 28);
	iVar13 = PLAYER::PLAYER_ID();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Position", "");
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar2], "GamertagColor", 0);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "StatPriority", "");
		iVar2++;
	}
	bVar23 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_454() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = BUILTIN::TO_FLOAT(Global_1051030[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0 /*23*/] != -1 && (*uParam1)[iVar0 /*23*/] < 8)
				{
					if (bVar9)
					{
						if ((uParam1[iVar0 /*23*/])->f_1 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_1);
						}
					}
					else if (bVar8)
					{
						if ((uParam1[iVar0 /*23*/])->f_5 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_5);
						}
					}
					else if (bVar11)
					{
						if ((uParam1[iVar0 /*23*/])->f_8 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_8);
						}
					}
					else if ((uParam1[iVar0 /*23*/])->f_1 != -1f)
					{
						fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_435(iParam2, &uVar34, uParam0->f_150, bVar23);
		func_436(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						Var14 = { func_456(iVar43) };
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var14);
						fVar44 = func_457(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43, MISC::IS_BIT_SET(uParam0->f_160, 14));
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", fVar44);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", MISC::_GET_STRING_FROM_FLOAT(fVar25[iVar43], uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_438(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_415(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar45 = iVar13 == (uParam1[iVar1 /*23*/])->f_14;
						fVar46 = func_418(uParam0, uParam1, iVar1, iVar13, bVar45);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", fVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 26))
							{
								if (MISC::IS_BIT_SET(uParam0->f_159, 0))
								{
									sVar47 = MISC::_GET_STRING_FROM_FLOAT(func_427(uParam1[iVar1 /*23*/], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = MISC::_GET_STRING_FROM_FLOAT(func_426(uParam1[iVar1 /*23*/], uParam0->f_159), 0);
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_159, 27))
							{
								iVar4 = BUILTIN::ROUND(func_425(uParam1[iVar1 /*23*/], uParam0->f_159));
								sVar47 = " ";
								if (func_431(iVar4))
								{
									iVar48 = uParam0->f_159;
									if ((uParam1[iVar1 /*23*/])->f_1 == 1286243416)
									{
										MISC::CLEAR_BIT(&iVar48, 12);
									}
									sVar47 = func_432(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = MISC::_GET_STRING_FROM_FLOAT(func_425(uParam1[iVar1 /*23*/], uParam0->f_159), func_433(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar1 /*23*/])->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 9))
							{
								sVar47 = func_382((uParam1[iVar1 /*23*/])->f_5);
							}
							else
							{
								sVar47 = MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar1 /*23*/])->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar1 /*23*/])->f_8, 0);
						}
						else
						{
							sVar47 = MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar1 /*23*/])->f_1, 0);
						}
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_415(var uParam0)
{
	if (*uParam0 != 255)
	{
		return true;
	}
	else if (Global_2883584 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return true;
	}
	return false;
}

void func_416(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	bVar2 = iVar1 == (uParam1[iParam2 /*23*/])->f_14;
	iVar0 = func_418(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam1[iParam2 /*23*/])->f_14) && VOICE::_0x919AF2D93E9AA89D((uParam1[iParam2 /*23*/])->f_14))
	{
		bVar3 = VOICE::_0xEF6F2A35FAAF2ED7((uParam1[iParam2 /*23*/])->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_12[iParam2], "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowBlip", false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowBlip", true);
	}
}

int func_417(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if ((*uParam0)[iParam1 /*23*/] == (*uParam0)[iVar0 /*23*/] && func_415(&((uParam0[iVar0 /*23*/])->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

float func_418(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;

	if (MISC::IS_BIT_SET(uParam0->f_159, 11))
	{
		fVar0 = func_458((*uParam1)[iParam2 /*23*/], PLAYER::GET_PLAYER_TEAM(iParam3), uParam0->f_150, MISC::IS_BIT_SET(uParam0->f_159, 5), bParam4, MISC::IS_BIT_SET(uParam0->f_160, 14));
	}
	else if (MISC::IS_BIT_SET(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			fVar0 = 4.808429E-35f;
		}
		else
		{
			fVar0 = func_127((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
		}
	}
	else
	{
		fVar0 = func_127((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
	}
	return fVar0;
}

void func_419(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch ((uParam1[iParam2 /*23*/])->f_10)
	{
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iParam2], "SetOverlayImg", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", false);
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_12[iParam2], "CrossColor", iParam4);
	}
}

char* func_420()
{
	return "RSN";
}

char* func_421(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::VAR_STRING(2, "NUMBER", Global_1155135[iParam0 /*30*/]);
}

bool func_422()
{
	if (Global_1102813.f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102813.f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102813.f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_459(2048))
	{
		return true;
	}
	if (func_460(1))
	{
		return true;
	}
	if (Global_1102813.f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_423(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_461()));
	return iParam0 == iVar0;
}

char* func_424(int iParam0)
{
	if (iParam0 != 0)
	{
		return STATS::_0xB112B9262EC29C20(1.861746E+28f, iParam0);
	}
	return "";
}

float func_425(var uParam0, int iParam1)
{
	if (func_385(0))
	{
		return func_462(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

float func_426(var uParam0, int iParam1)
{
	if (func_385(0))
	{
		return func_462(uParam0, 1);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		if (MISC::IS_BIT_SET(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_429(iParam1) || MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (MISC::IS_BIT_SET(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

float func_427(var uParam0, int iParam1, int iParam2)
{
	if (func_385(0))
	{
		return func_462(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 0) && !MISC::IS_BIT_SET(iParam1, 17))
	{
		if (MISC::IS_BIT_SET(iParam1, 3) && (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (MISC::IS_BIT_SET(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_430(iParam1))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (MISC::IS_BIT_SET(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

float func_428(var uParam0)
{
	if (func_385(3))
	{
		return func_462(uParam0, 3);
	}
	return -1f;
}

bool func_429(int iParam0)
{
	if ((func_430(iParam0) || func_434(iParam0)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17))
	{
		return true;
	}
	return false;
}

bool func_430(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 0) && MISC::IS_BIT_SET(iParam0, 17));
}

bool func_431(int iParam0)
{
	if ((iParam0 != 7.82218E-36f || iParam0 == 0) || iParam0 == BUILTIN::ROUND(-3f))
	{
		return true;
	}
	return false;
}

char* func_432(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[32];

	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 0.004723787f || iParam0 == 9.25711E-36f) || iParam0 == 2.52543E-36f) || iParam0 == 8.539645E-36f) || iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_321(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	else if ((MISC::IS_BIT_SET(iParam1, 3) || MISC::IS_BIT_SET(iParam1, 4)) || MISC::IS_BIT_SET(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POS_LEAD");
		}
		else if (iParam0 == 9.25711E-36f || iParam0 == 2.52543E-36f)
		{
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POS_DNF");
		}
		else if (iParam0 == 8.539645E-36f)
		{
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POS_ELIM");
		}
		else if (iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_321(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 0.004723787f)
		{
			return "--:--:--";
		}
		else
		{
			return func_321(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_463(&cVar0);
}

int func_433(var uParam0, int iParam1)
{
	if (iParam1 == 1 && MISC::IS_BIT_SET(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && MISC::IS_BIT_SET(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && MISC::IS_BIT_SET(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

bool func_434(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 18) && MISC::IS_BIT_SET(iParam0, 17));
}

void func_435(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = (*iParam0)[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && (*uParam1)[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = (*uParam1)[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_436(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == (*uParam2)[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_437(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(iParam0, iParam4))
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(iParam0, iParam1);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iParam0, iParam4, sParam2, iParam1);
	}
}

void func_438(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_415(&((uParam0[iVar1 /*23*/])->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_439(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2[4];
	char cVar7[64];
	bool bVar15;
	int iVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	vector3 vVar20[24];
	float fVar23;

	bVar15 = func_385(0);
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar7, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar7, "0", 64);
		}
		StringIntConCat(&cVar7, iVar0, 64);
		uParam0->f_3[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar7);
		cVar7 = { func_456(iVar0) };
		fVar2[0] = 0f;
		fVar2[1] = 0f;
		fVar2[2] = 0f;
		fVar2[3] = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 != (*uParam1)[iVar1 /*23*/] || !func_415(&((uParam1[iVar1 /*23*/])->f_14)))
			{
			}
			else if (bVar15)
			{
				iVar16 = 0;
				while (iVar16 < 4)
				{
					fVar2[iVar16] = (fVar2[iVar16] + func_462(uParam1[iVar1 /*23*/], iVar16));
					iVar16++;
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_159, 19))
			{
				if ((uParam1[iVar1 /*23*/])->f_6 != -1f && fVar2[0] == 0f)
				{
					fVar2[0] = (fVar2[0] + (uParam1[iVar1 /*23*/])->f_6);
				}
				if ((uParam1[iVar1 /*23*/])->f_1 != -1f)
				{
					fVar2[1] = (fVar2[1] + (uParam1[iVar1 /*23*/])->f_1);
				}
				if ((uParam1[iVar1 /*23*/])->f_5 != -1f)
				{
					fVar2[2] = (fVar2[2] + (uParam1[iVar1 /*23*/])->f_5);
				}
			}
			else
			{
				if ((uParam1[iVar1 /*23*/])->f_1 != -1f)
				{
					fVar2[0] = (fVar2[0] + (uParam1[iVar1 /*23*/])->f_1);
				}
				if ((uParam1[iVar1 /*23*/])->f_2 != -1f)
				{
					fVar2[1] = (fVar2[1] + (uParam1[iVar1 /*23*/])->f_2);
				}
				if ((uParam1[iVar1 /*23*/])->f_5 != -1f)
				{
					fVar2[2] = (fVar2[2] + (uParam1[iVar1 /*23*/])->f_5);
				}
			}
			iVar1++;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_159, 19))
		{
			if (MISC::IS_BIT_SET(uParam0->f_159, 25) || MISC::IS_BIT_SET(uParam0->f_159, 23))
			{
				if (func_454() == 0)
				{
					fVar2[2] = BUILTIN::TO_FLOAT(Global_1051030[iVar0]);
				}
			}
		}
		fVar17 = func_457(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0, MISC::IS_BIT_SET(uParam0->f_160, 14));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "HeadingColor", fVar17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Heading", &cVar7);
		if (bVar15)
		{
			iVar18 = (4 - func_464());
			iVar19 = iVar18;
			while (iVar19 <= 3)
			{
				if (!func_385(iVar19))
				{
				}
				else
				{
					StringCopy(&cVar20, "Stat", 24);
					if (iVar19 == 3)
					{
						StringConCat(&cVar20, "Rounds", 24);
					}
					else
					{
						StringIntConCat(&cVar20, iVar19, 24);
					}
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], &cVar20, MISC::_GET_STRING_FROM_FLOAT(fVar2[iVar19], uParam0->f_151));
					StringConCat(&cVar20, "Color", 24);
					DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], &cVar20, fVar17);
				}
				iVar19++;
			}
		}
		else if (MISC::IS_BIT_SET(uParam0->f_159, 6))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(fVar2[2], uParam0->f_151));
		}
		else if (func_429(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat2Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT(fVar2[0], uParam0->f_151));
			fVar23 = fVar2[1];
			if (MISC::IS_BIT_SET(uParam0->f_159, 17))
			{
				fVar23 = fVar2[2];
			}
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(fVar23, uParam0->f_151));
		}
		else if (func_430(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(fVar2[2], uParam0->f_151));
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat1Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat1", MISC::_GET_STRING_FROM_FLOAT(fVar2[0], uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat2Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT(fVar2[1], uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(fVar2[2], uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_440(int iParam0)
{
	return (Global_1102813.f_3520 && iParam0) != 0;
}

bool func_441()
{
	return func_440(4);
}

void func_442(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	char cVar1[32];

	if (bParam4)
	{
		if (func_385(0))
		{
			func_465(uParam0);
		}
		else
		{
			func_466(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (MISC::IS_BIT_SET(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "Position", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_143[iVar0], "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "Position", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowCross", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_12[iVar0], "CrossColor", 4.465091E-08f);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowCrewTag", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "CrewTag", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowRank", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Rank", "0");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "Spectating", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat0", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat2", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat3", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", func_467());
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "BlipColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "isHighlighted", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "HeadsetIconVisible", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_12[iVar0], "HeadsetIconColor", 4.808429E-35f);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_06", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_07", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_08", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_06", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_07", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_08", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "SetOverlayImg", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowOverlay", false);
		func_443(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_385(0))
	{
		func_386(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_387(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_443(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;

	if (func_468() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_469(uParam0, *uParam1)}, 8);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var16) && !MISC::ARE_STRINGS_EQUAL(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][0], &cVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][1], &cVar8);
	}
	else
	{
		uParam0->f_45[iParam2 /*3*/][0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iParam2], "AvatarDictionary", &cVar0);
		uParam0->f_45[iParam2 /*3*/][1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iParam2], "AvatarTexture", &cVar8);
	}
}

bool func_444(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_445(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_446(bool bParam0)
{
	if (bParam0)
	{
		return 0.03028275f;
	}
	return -2518.559f;
}

float func_447()
{
	return 1.432296E-31f;
}

bool func_448()
{
	if (Global_1940072.f_20 && Global_1940072.f_5 == 1)
	{
		return true;
	}
	return false;
}

void func_449(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[128];

	if (uParam0->f_69 == 0 && uParam0->f_66 == uParam0->f_67)
	{
		return;
	}
	iVar0 = uParam0->f_68;
	uParam0->f_68++;
	if (uParam0->f_68 >= 32)
	{
		uParam0->f_68 = 0;
		if (uParam0->f_69 != 0 && func_468() < 50)
		{
			func_470(uParam0, uParam0->f_69, 0);
			uParam0->f_69 = 0;
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_67, iVar0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_66, iVar0))
	{
		return;
	}
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_471(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			MISC::SET_BIT(&(uParam0->f_67), iVar0);
			break;
		case 3:
			break;
		case 1:
			if (uParam0->f_67 == 0)
			{
				return;
			}
			if (uParam0->f_33[iVar0] >= Global_1901671.f_316.f_17)
			{
				return;
			}
			uParam0->f_33[iVar0]++;
			func_472(iVar0, 1);
			MISC::SET_BIT(&(uParam0->f_69), iVar0);
			break;
		case 2:
			if (uParam0->f_33[iVar0] >= Global_1901671.f_316.f_17)
			{
				return;
			}
			uParam0->f_33[iVar0]++;
			func_472(iVar0, 1);
			MISC::SET_BIT(&(uParam0->f_69), iVar0);
			break;
		case 0:
			break;
	}
}

void func_450(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_473(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_66), iVar4);
		}
		iVar4++;
	}
}

float func_451()
{
	return -9.513237E-21f;
}

float func_452()
{
	return 1.958777E+31f;
}

void func_453(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_454()
{
	int iVar0;

	if (func_444(16))
	{
		iVar0 = Global_1050074.f_12;
	}
	else
	{
		iVar0 = func_474();
	}
	return iVar0;
}

float func_455(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

struct<8> func_456(int iParam0)
{
	char cVar0[64];

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1051039[iParam0 /*8*/])))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar0), 64);
		return cVar0;
	}
	return Global_1051039[iParam0 /*8*/];
}

float func_457(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	return func_458(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5);
}

float func_458(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
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
				default:
					break;
			}
			return 27.64779f;
		}
		if (iParam1 == iParam0)
		{
			return 1.392783E+25f;
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return 27.64779f;
		}
		else
		{
			return 1.392783E+25f;
		}
	}
	else if (bParam5)
	{
		return 1.392783E+25f;
	}
	return -64.26542f;
}

bool func_459(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_460(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

var func_461()
{
	return Global_1102813.f_26.f_3341;
}

float func_462(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

char* func_463(char* sParam0)
{
	return HUD::_GET_TEXT_SUBSTRING_2(sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0));
}

int func_464()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_3145858.f_61223[iVar1 /*3*/].f_1 != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_465(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	sVar0 = func_475(uParam0->f_159, uParam0->f_160);
	sVar1 = func_476(uParam0->f_159, uParam0->f_160);
	sVar2 = func_477(uParam0->f_159, uParam0->f_160);
	sVar3 = func_478();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", sVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", 27.64779f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", 27.64779f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", sVar2);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", 27.64779f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "StatRounds", sVar3);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "StatRoundsColor", 27.64779f);
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", 27.64779f);
}

void func_466(var uParam0, bool bParam1, bool bParam2)
{
	if (func_434(uParam0->f_159) || func_430(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", "");
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat0", HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat0Color", 27.64779f);
			}
		}
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", func_475(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", 27.64779f);
	}
	else if (func_430(uParam0->f_159))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", 27.64779f);
			}
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LDR_RNDW"));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", 27.64779f);
		}
	}
	if (!func_430(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", func_476(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", 27.64779f);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 3) || MISC::IS_BIT_SET(uParam0->f_159, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", func_477(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", 27.64779f);
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", 27.64779f);
}

int func_467()
{
	return 1;
}

int func_468()
{
	return Global_1149417.f_5087.f_325;
}

struct<16> func_469(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_471(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_472(iVar16, 1);
			break;
		case 2:
			func_472(iVar16, 1);
			func_479(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

void func_470(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_473(&Var0);
	uParam0->f_66 = (uParam0->f_66 || iParam1);
}

int func_471(char* sParam0, int iParam1, int iParam2)
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
	iVar2 = func_480(iParam1, iParam2);
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
					iVar5 = func_481(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar5);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_482(iParam1, iParam2, 0);
						return 1;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1)))
					{
						func_482(iParam1, iParam2, 3);
					}
					else
					{
						func_482(iParam1, iParam2, 4);
					}
					func_483(iParam1, iParam2, iVar1);
					break;
				case 3:
					iVar1 = func_484(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_482(iParam1, iParam2, 0);
						return 1;
					}
					iVar6 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar6)
					{
						case 0:
							func_482(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_482(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_484(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_482(iParam1, iParam2, 0);
						return 1;
					}
					sVar7 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar7))
					{
						return 3;
					}
					func_482(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_484(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_482(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_472(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_480(iParam0, iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_483(iParam0, iParam1, 0);
			func_482(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_484(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
			}
			func_482(iParam0, iParam1, 0);
			break;
	}
}

void func_473(var uParam0)
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
			func_485(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_SET_ALL_PLAYER_BITS(&(vVar0.f_2));
			func_485(vVar0);
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
				func_486(&Var7, uVar6);
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
				func_485(vVar0);
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
					func_486(&Var15, uVar6);
				}
			}
			default:
				break;
	}
}

int func_474()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(8.360127E+26f) != 0)
	{
		return 0;
	}
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-4.947796E+13f) != 0)
	{
		return 1;
	}
	return 2;
}

char* func_475(int iParam0, int iParam1)
{
	if (func_385(0))
	{
		return func_487(0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::VAR_STRING(2, "FM_WP_LEADERBOARD_PHOTOS_TAKEN");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		return MISC::VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		return MISC::VAR_STRING(2, "UIC_LB_TIME");
	}
	else if (MISC::IS_BIT_SET(iParam0, 19))
	{
		return MISC::VAR_STRING(2, "UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::VAR_STRING(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::VAR_STRING(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return MISC::VAR_STRING(2, "UIC_LB_KILLS");
}

char* func_476(int iParam0, int iParam1)
{
	if (func_385(0))
	{
		if (func_385(1))
		{
			return func_487(1);
		}
		else
		{
			return "";
		}
	}
	else if (func_430(iParam0) || func_434(iParam0))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 1))
	{
		return MISC::VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::VAR_STRING(2, "FM_WP_LEADERBOARD_BEST_PHOTO");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return MISC::VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_TIME");
		}
		else
		{
			return func_488(iParam0);
		}
	}
	else if (func_429(iParam0) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 8))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_VAL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 20))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_ACC");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::VAR_STRING(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::VAR_STRING(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_DEATHS");
}

char* func_477(int iParam0, int iParam1)
{
	if (func_385(0))
	{
		if (func_385(2))
		{
			return func_487(2);
		}
		else
		{
			return "";
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 13))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::VAR_STRING(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 7))
	{
		return MISC::VAR_STRING(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (MISC::IS_BIT_SET(iParam1, 11))
	{
		return MISC::VAR_STRING(2, "FME_AT_SCORE_TAG");
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::VAR_STRING(2, "FM_WP_LEADERBOARD_POINTS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam1, 13))
		{
			return MISC::VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return MISC::VAR_STRING(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3) && MISC::IS_BIT_SET(iParam0, 0))
	{
		return func_488(iParam0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) && !MISC::IS_BIT_SET(iParam0, 17)) && !func_434(iParam0))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_DEATHS");
	}
	else if (func_430(iParam0) && !func_434(iParam0))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 2) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_CAPS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 2))
	{
		return MISC::VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 14))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam0, 21))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_TA");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::VAR_STRING(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_SCORE");
}

char* func_478()
{
	if (func_385(0))
	{
		return func_487(3);
	}
	return "";
}

void func_479(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	MISC::SET_BIT(&iVar1, iVar0);
	func_470(uParam0, iVar1, iParam2);
}

int func_480(int iParam0, int iParam1)
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

int func_481(int iParam0)
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

void func_482(int iParam0, int iParam1, int iParam2)
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

void func_483(int iParam0, int iParam1, int iParam2)
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

int func_484(int iParam0, int iParam1)
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

void func_485(vector3 vParam0)
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

void func_486(var uParam0, var uParam1)
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

char* func_487(int iParam0)
{
	if (Global_3145858.f_61223[iParam0 /*3*/] > -1)
	{
		if (func_489(Global_3145858.f_61223[iParam0 /*3*/]))
		{
			return MISC::VAR_STRING(2, &(Global_3145858.f_52507[Global_3145858.f_61223[iParam0 /*3*/] /*18*/]));
		}
		return func_490(&(Global_3145858.f_52507[Global_3145858.f_61223[iParam0 /*3*/] /*18*/]));
	}
	return "";
}

char* func_488(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0, 4))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_BLAP");
	}
	if (MISC::IS_BIT_SET(iParam0, 15))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_CPCO");
	}
	return "";
}

bool func_489(int iParam0)
{
	return func_491(Global_3145858.f_52507[iParam0 /*18*/].f_17, 0);
}

var func_490(var uParam0)
{
	return uParam0;
}

bool func_491(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

