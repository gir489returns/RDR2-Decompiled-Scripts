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
	func_4();
	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		func_5();
		BUILTIN::WAIT(0);
	}
	func_6();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_7(32, -1);
	func_8();
	if (func_9())
	{
		func_6();
	}
	func_10();
	func_11(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
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
	bool bVar0;

	bVar0 = func_12();
	if (func_13())
	{
		func_14();
	}
	func_15(bVar0);
}

void func_4()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (MAP::DOES_BLIP_EXIST(func_16(Global_1142409.f_1[iVar0 /*63*/].f_5)))
		{
			func_17(&(Global_1142409.f_1[iVar0 /*63*/].f_5), 0);
		}
		iVar0++;
	}
	func_18();
	Global_1142409.f_2018 = 0;
	Global_1142409.f_2041 = 0;
	Global_1142409 = 0;
}

void func_5()
{
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1142409.f_2055) && !SCRIPTS::DOES_THREAD_EXIST(Global_1142409.f_2057))
	{
		return;
	}
	if (!Global_1142409.f_2059)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1142409.f_2055))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1142409.f_2055);
		}
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1142409.f_2057))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1142409.f_2057);
		}
		Global_1142409.f_2059 = 1;
	}
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
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
			func_6();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_19() == 0)
		{
			if (func_20())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

bool func_9()
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

void func_10()
{
	func_21(&Global_1141317);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1141317, 1092, 44);
	func_22(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1141317), 1092, "g_mpHostNetCamp");
	func_23(&Global_1144511);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1144511, 2657, 45);
	func_24(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1144511[0 /*83*/])), 2657, "g_mpPlayerNetCamp");
	func_25(&Global_1142409);
	func_26(&Global_1144470);
}

void func_11(bool bParam0)
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
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
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
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_12()
{
	if (func_27())
	{
		func_28(16);
		return false;
	}
	if (func_29())
	{
		func_28(16);
		return false;
	}
	if (func_30(16))
	{
		func_28(16);
		return false;
	}
	func_31(16);
	return true;
}

bool func_13()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[9], false))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[9]);
}

void func_14()
{
	switch (Global_1141317.f_1090)
	{
		case 0:
			func_32();
			break;
		case 1:
			func_33();
			break;
		case 2:
			func_34();
			break;
	}
}

void func_15(bool bParam0)
{
	switch (Global_1142409)
	{
		case 0:
			func_35();
			break;
		case 1:
			func_36();
			break;
		case 2:
			func_37(bParam0);
			break;
	}
	Global_1142409.f_2040 = 0;
}

int func_16(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17088)
	{
		return Global_17088[iParam0];
	}
	return 0;
}

void func_17(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_38(*uParam0, -1);
		func_39(*uParam0, 0);
		func_40(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_17088[*uParam0]))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(Global_17088[*uParam0]);
			}
			MAP::REMOVE_BLIP(&(Global_17088[*uParam0]));
		}
	}
	*uParam0 = -1;
}

void func_18()
{
	int iVar0;
	var uVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144511[iVar0 /*83*/].f_38.f_23.f_1))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1144511[iVar0 /*83*/].f_38.f_23.f_1);
	}
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144511[iVar0 /*83*/].f_38.f_23))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1144511[iVar0 /*83*/].f_38.f_23);
	}
	Global_1144511[iVar0 /*83*/].f_38.f_23.f_1 = uVar1;
	Global_1144511[iVar0 /*83*/].f_38.f_23 = uVar1;
}

int func_19()
{
	return Global_1572887.f_14;
}

bool func_20()
{
	return Global_1051645.f_8;
}

void func_21(var uParam0)
{
	struct<27> Var0;
	int iVar27;
	struct<7> Var28;
	var uVar35;
	var uVar36;

	Var0.f_9 = 255;
	Var0.f_10 = 7;
	Var0.f_10.f_1 = 255;
	Var0.f_10.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	iVar27 = 0;
	while (iVar27 <= 31)
	{
		*(uParam0[iVar27 /*27*/]) = { Var0 };
		iVar27++;
	}
	Var28.f_4 = -1;
	iVar27 = 0;
	while (iVar27 <= 31)
	{
		uParam0->f_865[iVar27 /*7*/] = { Var28 };
		iVar27++;
	}
	uParam0->f_1090 = uVar35;
	uParam0->f_1091 = uVar36;
}

int func_22(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_23(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_41(uParam0[iVar0 /*83*/]);
		iVar0++;
	}
}

int func_24(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_25(var uParam0)
{
	var uVar0;
	int iVar1;
	struct<63> Var2;
	var uVar65;
	struct<9> Var66;

	*uParam0 = uVar0;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_13 = 7;
	Var2.f_49 = 7;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		uParam0->f_1[iVar1 /*63*/] = { Var2 };
		iVar1++;
	}
	uParam0->f_2018 = uVar65;
	Var66.f_4 = -15;
	uParam0->f_2027 = { Var66 };
	uParam0->f_2019 = 0;
	uParam0->f_2054 = -2.984298E+23f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		uParam0->f_2020[iVar1] = 0;
		iVar1++;
	}
	uParam0->f_2041 = 0;
	uParam0->f_2042 = 0;
	uParam0->f_2043 = 0;
	uParam0->f_2044 = 0;
	uParam0->f_2049 = 0;
	uParam0->f_2059 = 0;
	uParam0->f_2050 = 0;
}

void func_26(var uParam0)
{
}

bool func_27()
{
	return Global_263042[Global_1295619 /*65*/] > 2;
}

void func_28(int iParam0)
{
	if (func_42(iParam0))
	{
		func_43(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73), iParam0);
	}
}

bool func_29()
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
	if (!func_44(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_30(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

void func_31(int iParam0)
{
	if (!func_42(iParam0))
	{
		func_45(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73), iParam0);
	}
}

void func_32()
{
	func_46(1);
}

void func_33()
{
	if (func_42(1))
	{
		func_46(2);
	}
}

void func_34()
{
	int iVar0;
	var uVar1;

	while (iVar0 < 10)
	{
		iVar0++;
		Global_1142409.f_2044++;
		if (Global_1142409.f_2044 >= 32)
		{
			Global_1142409.f_2044 = 0;
		}
		func_47(Global_1142409.f_2044, &uVar1);
		func_48(Global_1142409.f_2044);
	}
}

void func_35()
{
	if (Global_1141317.f_1090 > 0)
	{
		if (func_49())
		{
			func_50();
			func_51(1);
		}
	}
}

void func_36()
{
	if (!func_42(1))
	{
		if (func_52())
		{
			func_53();
			func_31(1);
		}
	}
	else if (Global_1141317.f_1090 > 1)
	{
		if (func_54() == 0)
		{
			func_55(1);
		}
		func_51(2);
	}
}

void func_37(bool bParam0)
{
	int iVar0;

	if (!func_42(64) && func_56())
	{
		func_31(64);
	}
	while (iVar0 < 10)
	{
		iVar0++;
		Global_1142409.f_2043++;
		if (Global_1142409.f_2043 >= 32)
		{
			Global_1142409.f_2043 = 0;
		}
		func_57(Global_1142409.f_2043);
	}
	func_58();
	if (bParam0)
	{
		func_59();
		func_60();
		func_61();
		func_62();
	}
	else if (Global_1142409.f_2019 != 1)
	{
		func_63(1);
	}
}

void func_38(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_3655[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_25038[iParam0 /*4*/] = iParam1;
	return;
}

void func_39(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_3655[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_25038[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_40(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_3655[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_25038[iParam0 /*4*/].f_2 = iParam1;
	return;
}

void func_41(var uParam0)
{
	struct<83> Var0;

	Var0 = 32;
	Var0.f_33.f_3 = -1;
	Var0.f_38.f_3 = -1;
	Var0.f_38.f_7 = -1;
	Var0.f_38.f_25 = -1;
	Var0.f_38.f_28.f_1 = 0.2143147f;
	Var0.f_38.f_28.f_2 = 255;
	Var0.f_38.f_28.f_3 = -1;
	Var0.f_74.f_7 = -1;
	*uParam0 = { Var0 };
	func_64(&(uParam0->f_38));
}

bool func_42(int iParam0)
{
	return func_65(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

void func_43(var uParam0, int iParam1)
{
	func_66(uParam0, iParam1);
}

bool func_44(struct<2> Param0)
{
	if (!func_67(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_68(Param0))
	{
		return false;
	}
	return true;
}

void func_45(var uParam0, int iParam1)
{
	func_69(uParam0, iParam1);
}

void func_46(int iParam0)
{
	if (Global_1141317.f_1090 != iParam0)
	{
		Global_1141317.f_1090 = iParam0;
	}
}

void func_47(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar12;
	struct<24> Var13;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return;
	}
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (Global_1141317.f_865[iVar1 /*7*/].f_4 != Global_1144511[iParam0 /*83*/].f_33.f_3 && Global_1144511[iParam0 /*83*/].f_33.f_3 != -1)
	{
		func_70(iVar1, Global_1144511[iParam0 /*83*/].f_33.f_3);
		func_71(iVar1, Global_1144511[iParam0 /*83*/].f_33);
		func_72(iVar1, 0);
	}
	iVar2 = GANG::NETWORK_GET_GANG_ID(iVar0);
	iVar3 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar2);
	vVar9 = { Global_1141317.f_865[iVar1 /*7*/].f_1 };
	bVar12 = func_65(Global_1141317.f_865[iVar1 /*7*/].f_5, 2);
	switch (Global_1141317.f_865[iVar1 /*7*/])
	{
		case 0:
			Global_1141317.f_865[iVar1 /*7*/].f_5 = Global_1144511[iParam0 /*83*/].f_33.f_4;
			bVar12 = func_65(Global_1141317.f_865[iVar1 /*7*/].f_5, 2);
			if (vVar9.z == 0)
			{
				iVar7 = func_73(iVar0);
				if (func_74(iVar7))
				{
					if (GANG::NETWORK_IS_GANG_LEADER(iVar0))
					{
						func_75(iVar7, 3);
					}
				}
				if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1141317.f_1091), iVar0))
				{
					SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1141317.f_1091), iVar0);
				}
				func_72(iVar1, 6);
			}
			else if (vVar9.z < 0)
			{
				if (func_76(iParam0))
				{
					func_72(iVar1, 3);
				}
				else
				{
					func_72(iVar1, 4);
				}
			}
			else
			{
				if (*uParam1)
				{
					return;
				}
				*uParam1 = 1;
				func_77(vVar9, &vVar4);
				if (!func_78(vVar9, iParam0, vVar4, iVar3, 1, 0, bVar12))
				{
					func_72(iVar1, 4);
					return;
				}
				func_72(iVar1, 1);
			}
			break;
		case 1:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			if (func_65(Global_1144511[iParam0 /*83*/].f_33.f_4, 8))
			{
				func_72(iVar1, 2);
			}
			break;
		case 2:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			func_77(vVar9, &vVar4);
			iVar7 = func_73(iVar0);
			if (func_74(iVar7))
			{
				func_75(iVar7, 3);
			}
			Var13.f_9 = 255;
			Var13.f_10 = 7;
			Var13.f_10.f_1 = 255;
			Var13.f_10.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_9 = iVar0;
			Var13.f_1 = vVar9.x;
			Var13.f_1.f_1 = vVar9.y;
			Var13.f_1.f_2 = vVar9.z;
			Var13.f_20 = { vVar4 };
			Var13.f_23.f_1 = Global_1144511[iParam0 /*83*/].f_38.f_23.f_1;
			Var13.f_23 = Global_1144511[iParam0 /*83*/].f_38.f_23;
			Var13 = 1;
			iVar7 = func_79(&Var13);
			if (!func_74(iVar7))
			{
				return;
			}
			if (!func_65(Global_1141317.f_865[iVar1 /*7*/].f_5, 4))
			{
				func_80(iVar7, 16);
			}
			if (func_65(Global_1141317.f_865[iVar1 /*7*/].f_5, 1))
			{
				func_80(iVar7, 512);
			}
			func_72(iVar1, 6);
			break;
		case 3:
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 < 32)
			{
				if (Global_1141317[iVar7 /*27*/].f_9 == iVar0)
				{
					Global_1141317[iVar7 /*27*/].f_1 = Global_1144511[iParam0 /*83*/].f_33;
				}
				else
				{
					iVar7++;
				}
			}
			func_72(iVar1, 6);
			break;
		case 4:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			vVar9.f_2 = -2;
			if (func_81(iVar2, &vVar9, bVar12, &iVar8, &(Global_1141317.f_865[iVar1 /*7*/].f_6)))
			{
				Global_1141317.f_865[iVar1 /*7*/].f_6 = 0;
				func_71(iVar1, vVar9);
				func_72(iVar1, 1);
			}
			else if (Global_1141317.f_865[iVar1 /*7*/].f_6 >= 10 || iVar8 == 1)
			{
				func_45(&(Global_1141317.f_865[iVar1 /*7*/].f_5), 16);
				func_72(iVar1, 5);
			}
			break;
		case 5:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			vVar9.f_2 = -1;
			if (func_81(iVar2, &vVar9, bVar12, &iVar8, &(Global_1141317.f_865[iVar1 /*7*/].f_6)))
			{
				Global_1141317.f_865[iVar1 /*7*/].f_6 = 0;
				func_71(iVar1, vVar9);
				func_72(iVar1, 1);
			}
			else if (Global_1141317.f_865[iVar1 /*7*/].f_6 >= 15 || iVar8 == 1)
			{
				func_72(iVar1, 6);
				func_45(&(Global_1141317.f_865[iVar1 /*7*/].f_5), 32);
			}
			break;
		case 6:
			break;
	}
}

void func_48(int iParam0)
{
	func_82(iParam0);
	if (Global_1141317[iParam0 /*27*/] == 0)
	{
		return;
	}
	if (Global_1141317[iParam0 /*27*/] != 3)
	{
		func_83(iParam0);
		func_84(iParam0);
		func_85(iParam0);
	}
	switch (Global_1141317[iParam0 /*27*/])
	{
		case 1:
			func_86(iParam0);
			break;
		case 2:
			func_87(iParam0);
			break;
		case 3:
			func_88(iParam0);
			break;
	}
}

bool func_49()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_4;
}

void func_50()
{
	func_64(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_38));
	func_89();
	func_90();
}

void func_51(int iParam0)
{
	if (Global_1142409 != iParam0)
	{
		Global_1142409 = iParam0;
	}
}

bool func_52()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1147168.f_361[iVar0]) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1147168.f_361[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_53()
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Var1 = { func_92(-7.437896E-28f, func_91(0), 4.978612f, 1) };
	func_93(Var1);
	func_94();
	iVar5 = func_95(Var1, -5.136048E+23f, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -6.968705E-29f;
	}
	func_96(iVar5, iVar0);
	iVar5 = func_95(Var1, 954422.3f, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -4.709552E+33f;
	}
	func_97(iVar5, iVar0);
	iVar5 = func_95(Var1, 0.1775953f, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -5.249429E+09f;
	}
	func_98(iVar5, iVar0);
	iVar5 = func_95(Var1, 7.75648E-34f, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -6.234102E+13f;
	}
	func_99(iVar5, iVar0);
	func_100(0, iVar0);
}

int func_54()
{
	return Global_1142409.f_2018;
}

void func_55(int iParam0)
{
	if (Global_1142409.f_2018 != iParam0)
	{
		Global_1142409.f_2018 = iParam0;
	}
}

bool func_56()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

void func_57(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_101(iParam0);
	bVar1 = (bVar0 && Global_1141317[iParam0 /*27*/].f_1.f_2 != Global_1142409.f_1[iParam0 /*63*/].f_2);
	iVar2 = Global_1142409.f_1[iParam0 /*63*/].f_3;
	if (!bVar0)
	{
		if (iVar2 == 0)
		{
			return;
		}
		else if (iVar2 == 2 || iVar2 == 1)
		{
			func_102(iParam0, Global_1147168.f_9[iParam0 /*10*/].f_2);
			func_103(iParam0, 3);
		}
	}
	if ((iVar2 == 0 && Global_1141317[iParam0 /*27*/] != 0) || bVar1)
	{
		func_104(iParam0, Global_1141317[iParam0 /*27*/].f_1, Global_1141317[iParam0 /*27*/].f_9);
		if (func_105(Global_1142409.f_1[iParam0 /*63*/].f_5))
		{
			func_17(&(Global_1142409.f_1[iParam0 /*63*/].f_5), 0);
		}
		if (func_105(Global_1142409.f_1[iParam0 /*63*/].f_6))
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_6), 7148155);
			func_17(&(Global_1142409.f_1[iParam0 /*63*/].f_6), 0);
		}
		func_106(&(Global_1142409.f_1[iParam0 /*63*/]));
		Global_1142409.f_1[iParam0 /*63*/] = { Global_1141317[iParam0 /*27*/].f_1 };
		func_103(iParam0, 1);
	}
	func_107(iParam0, bVar0);
	func_108(iParam0, bVar0);
	func_109(iParam0);
	switch (Global_1142409.f_1[iParam0 /*63*/].f_3)
	{
		case 1:
			func_110(iParam0);
			break;
		case 2:
			func_111(iParam0);
			break;
		case 3:
			func_112(iParam0);
			break;
	}
}

void func_58()
{
	int iVar0;
	int iVar1;

	if (func_42(256))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (func_113(iVar0, 1))
			{
				iVar1 = 1;
			}
			else
			{
				iVar0++;
			}
		}
		if (iVar1 == 0)
		{
			func_28(256);
		}
	}
}

void func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	iVar0 = PLAYER::PLAYER_ID();
	func_114(iVar0);
	iVar1 = Global_1144511[iVar0 /*83*/].f_38.f_3;
	bVar3 = func_74(iVar1);
	bVar4 = GANG::NETWORK_IS_GANG_LEADER(iVar0);
	switch (Global_1142409.f_2019)
	{
		case 0:
			if (bVar4)
			{
				if (bVar3)
				{
					func_63(20);
				}
				else
				{
					vVar8 = { func_115() };
					func_116(vVar8);
					if (vVar8.z != 0)
					{
						Global_1142409.f_2036 = { vVar8 };
						Global_1142409.f_2036.f_3 = 0;
						func_63(5);
					}
					else
					{
						func_63(4);
					}
				}
			}
			else
			{
				func_63(22);
			}
			break;
		case 1:
			func_63(0);
			break;
		case 2:
			if (!bVar3)
			{
				if (func_117())
				{
					func_118(0);
				}
				func_18();
				Global_1142409.f_2046 = 0;
				func_116(vVar8);
				func_119();
				func_120();
				func_121();
				func_63(3);
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar4)
				{
					func_119();
					func_63(20);
				}
				else
				{
					func_63(21);
				}
			}
			else
			{
				func_63(4);
			}
			break;
		case 4:
			if (bVar4)
			{
				if (bVar3)
				{
					func_119();
					func_63(20);
				}
				else if (((func_122(32) && !func_123()) && !func_124(255)) && !ENTITY::IS_ENTITY_DEAD(Global_33))
				{
					func_121();
					func_125(32);
				}
			}
			else if (bVar3)
			{
				func_63(21);
			}
			break;
		case 5:
			if (func_126(Global_1142409.f_2036, Global_1142409.f_2036.f_3))
			{
				if (func_76(iVar0))
				{
					func_63(12);
				}
				else
				{
					func_63(6);
				}
			}
			else
			{
				func_116(vVar8);
				func_63(4);
			}
			break;
		case 6:
			if (func_76(iVar0))
			{
				func_63(12);
				return;
			}
			iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
			if (Global_1141317.f_865[iVar2 /*7*/].f_4 == Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_33.f_3)
			{
				if (Global_1142409.f_2049 == 0)
				{
					Global_1142409.f_2049 = MISC::GET_SYSTEM_TIME();
				}
				else if ((MISC::GET_SYSTEM_TIME() - Global_1142409.f_2049) > Global_1901671.f_601.f_14)
				{
					Global_1142409.f_2049 = 0;
					func_18();
					func_127();
				}
			}
			if (func_65(Global_1141317.f_865[iVar2 /*7*/].f_5, 32) && Global_1141317.f_865[iVar2 /*7*/].f_4 == Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_33.f_3)
			{
				Global_1142409.f_2049 = 0;
				func_63(13);
				return;
			}
			if (func_65(Global_1141317.f_865[iVar2 /*7*/].f_5, 16) && Global_1142409.f_2027.f_5 != 0)
			{
				func_128(0);
			}
			if (Global_1141317.f_865[iVar2 /*7*/] != 1)
			{
				return;
			}
			if (Global_1141317.f_865[iVar2 /*7*/].f_1.f_2 == 0)
			{
				return;
			}
			if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_38.f_23.f_1))
			{
				return;
			}
			if (!func_129())
			{
				Global_1142409.f_2049 = 0;
				func_18();
				func_127();
				return;
			}
			vVar8 = { Global_1141317.f_865[iVar2 /*7*/].f_1 };
			func_77(vVar8, &vVar5);
			func_130(vVar8, vVar5);
			Global_1142409.f_2049 = 0;
			func_63(7);
			break;
		case 7:
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Global_1142409.f_2052.f_1))
			{
				Global_1142409.f_2046++;
				func_63(6);
				return;
			}
			iVar11 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Global_1142409.f_2052.f_1);
			switch (iVar11)
			{
				case 4:
					func_63(8);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_131(VOLUME::_0x351D71B8B72B858B(Global_1142409.f_2052.f_1));
					func_63(9);
					break;
			}
			break;
		case 8:
			if (!func_129())
			{
				func_18();
				func_127();
				func_128(0);
				return;
			}
			if (Global_1142409.f_2047 == 0)
			{
				Global_1142409.f_2047 = MISC::GET_GAME_TIMER();
				Global_1142409.f_2046++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1142409.f_2047) > 2000)
			{
				Global_1142409.f_2047 = 0;
				func_120();
				func_18();
				Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_2 = -2;
				Global_1142409.f_2036 = { Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 };
				func_63(5);
			}
			break;
		case 9:
			iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
			if (Global_1141317.f_865[iVar2 /*7*/].f_1.f_2 == 0)
			{
				return;
			}
			if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_38.f_23))
			{
				return;
			}
			if (!func_129())
			{
				func_18();
				func_127();
				return;
			}
			vVar8 = { Global_1141317.f_865[iVar2 /*7*/].f_1 };
			func_77(vVar8, &vVar5);
			func_132(vVar8, vVar5);
			func_63(10);
			break;
		case 10:
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Global_1142409.f_2052))
			{
				Global_1142409.f_2046++;
				func_63(9);
				return;
			}
			iVar12 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Global_1142409.f_2052);
			switch (iVar12)
			{
				case 4:
					func_63(11);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_133(VOLUME::_0x351D71B8B72B858B(Global_1142409.f_2052));
					func_134(8);
					func_63(12);
					break;
			}
			break;
		case 11:
			if (!func_129())
			{
				func_18();
				func_127();
				func_128(0);
				return;
			}
			if (Global_1142409.f_2047 == 0)
			{
				Global_1142409.f_2047 = MISC::GET_GAME_TIMER();
				Global_1142409.f_2046++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1142409.f_2047) > 2000)
			{
				Global_1142409.f_2047 = 0;
				func_120();
				func_18();
				Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_2 = -2;
				Global_1142409.f_2036 = { Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 };
				func_63(5);
			}
			break;
		case 12:
			if (!bVar4)
			{
				func_63(21);
				Global_1142409.f_2049 = 0;
				Global_1142409.f_2046 = 0;
			}
			else if (func_135(&bVar13))
			{
				Global_1142409.f_2046 = 0;
				Global_1142409.f_2049 = 0;
				func_136();
				func_119();
				func_63(20);
			}
			else if (bVar13)
			{
				Global_1142409.f_2046 = 0;
				Global_1142409.f_2049 = 0;
				func_18();
				func_121();
				func_120();
				func_63(4);
			}
			break;
		case 13:
			if ((!func_123() && CAM::IS_SCREEN_FADED_IN()) && !func_124(255))
			{
				func_137("NET_CAMP_HELP_PLACEMENT_FAIL", 10000, 0, 0, 0, 1);
				func_128(0);
				if (bVar3)
				{
					func_63(14);
				}
				else
				{
					func_63(4);
				}
			}
			break;
		case 14:
			if (bVar3)
			{
				vVar8 = { Global_1141317[Global_1144511[iVar0 /*83*/].f_38.f_3 /*27*/].f_1 };
				func_77(vVar8, &vVar5);
				func_130(vVar8, vVar5);
				func_63(15);
			}
			else
			{
				func_127();
			}
			break;
		case 15:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Global_1142409.f_2052.f_1))
			{
				Global_1142409.f_2046++;
				func_63(14);
				return;
			}
			iVar14 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Global_1142409.f_2052.f_1);
			switch (iVar14)
			{
				case 4:
					func_63(16);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_131(VOLUME::_0x351D71B8B72B858B(Global_1142409.f_2052.f_1));
					func_63(17);
					break;
			}
			break;
		case 16:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (Global_1142409.f_2047 == 0)
			{
				Global_1142409.f_2047 = MISC::GET_GAME_TIMER();
				Global_1142409.f_2046++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1142409.f_2047) > 2000)
			{
				Global_1142409.f_2047 = 0;
				func_18();
				func_63(14);
			}
			break;
		case 17:
			if (bVar3)
			{
				vVar8 = { Global_1141317[Global_1144511[iVar0 /*83*/].f_38.f_3 /*27*/].f_1 };
				func_77(vVar8, &vVar5);
				func_132(vVar8, vVar5);
				func_63(18);
			}
			else
			{
				func_127();
			}
			break;
		case 18:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Global_1142409.f_2052))
			{
				Global_1142409.f_2046++;
				func_63(17);
				return;
			}
			iVar15 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Global_1142409.f_2052);
			switch (iVar15)
			{
				case 4:
					func_63(19);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_133(VOLUME::_0x351D71B8B72B858B(Global_1142409.f_2052));
					func_134(128);
					func_119();
					func_63(20);
					break;
			}
			break;
		case 19:
			if (!func_129())
			{
				func_127();
				return;
			}
			if (Global_1142409.f_2047 == 0)
			{
				Global_1142409.f_2047 = MISC::GET_GAME_TIMER();
				Global_1142409.f_2046++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1142409.f_2047) > 2000)
			{
				Global_1142409.f_2047 = 0;
				func_18();
				func_63(14);
			}
			break;
		case 20:
			if (!bVar3)
			{
				if (bVar4)
				{
					Global_1142409.f_2036 = { func_115() };
					Global_1142409.f_2036.f_3 = 0;
					func_63(5);
				}
				else
				{
					func_63(21);
				}
			}
			else if (bVar4)
			{
				if (func_138(Global_1144511[iVar0 /*83*/].f_38))
				{
					func_137("GC_CAMP_LOCK", 10000, 0, 0, 0, 1);
					func_120();
					Global_1142409.f_2036 = { func_115() };
					Global_1142409.f_2036.f_3 = 0;
					func_63(5);
				}
				else
				{
					func_139(iVar1);
				}
			}
			else
			{
				func_63(21);
			}
			break;
		case 21:
			if (func_140(iVar1))
			{
				func_119();
				func_63(22);
			}
			break;
		case 22:
			if (bVar4)
			{
				Global_1142409.f_2036 = { func_115() };
				Global_1142409.f_2036.f_3 = 0;
				func_63(5);
			}
			else
			{
				func_141();
			}
			break;
	}
}

void func_60()
{
	bool bVar0;
	struct<2> Var1;

	Var1 = { func_142() };
	bVar0 = func_44(Var1);
	if (bVar0)
	{
		func_31(1024);
	}
	else
	{
		func_28(1024);
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<17> Var4;
	var uVar21;
	struct<5> Var25;
	struct<14> Var46;
	var uVar62;

	func_143();
	func_144();
	func_145();
	func_146();
	iVar3 = func_147(Global_1295619.f_149[Global_1295619]);
	if (((iVar3 != 9 && iVar3 > 0) && GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10)) && !GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
	{
		func_148(0);
		func_149(9);
	}
	switch (iVar3)
	{
		case 0:
			func_150();
			if (func_151(Global_1295619.f_149[Global_1295619]))
			{
				if (func_152())
				{
					func_149(7);
				}
				else
				{
					func_149(2);
				}
			}
			else
			{
				func_149(1);
			}
			break;
		case 1:
			if (func_151(Global_1295619.f_149[Global_1295619]))
			{
				func_153(&(Global_1144470.f_15), 0);
				func_149(2);
			}
			break;
		case 2:
			if (func_154())
			{
				if (!func_155(Global_1295619, 64))
				{
					func_148(1);
				}
			}
			else if (func_155(Global_1295619, 64))
			{
				func_148(0);
			}
			if (func_156(PLAYER::PLAYER_ID()) == 0 && !func_155(Global_1295619, 128))
			{
				func_157("TRADER_HALT_REASON_RESUPPLY", 3.848825E+20f);
				func_148(0);
				func_158(8);
				func_149(4);
			}
			iVar1 = (Global_1901671.f_601.f_11 * 60000);
			if (func_159(&(Global_1144470.f_15)) && func_160(&(Global_1144470.f_15)) > iVar1)
			{
				if (func_161())
				{
					func_149(3);
				}
			}
			break;
		case 3:
			if (func_162(&Global_1144470) == 3)
			{
				func_149(2);
			}
			break;
		case 4:
			if (func_155(Global_1295619, 256))
			{
				if (func_155(Global_1295619, 16384))
				{
					if (func_163(&Global_1144470))
					{
						return;
					}
					if (!func_152())
					{
						iVar0 = func_164(1.436185E+38f, 0, 1, -1, 1);
						if (!func_165(&Global_1144470, 1.436185E+38f, 1, 1, iVar0, -1, 1))
						{
							return;
						}
						Global_1144470.f_39 = func_166(1.436185E+38f, iVar0, 0);
						if (Global_1144470.f_39 != 0)
						{
							Var4.f_7 = -5.149929E+33f;
							Var4.f_16 = -1;
							Var4.f_16 = func_167(Global_1144470.f_39);
							func_168(Global_1144470.f_1, Var4);
						}
					}
					func_169(955, 1);
					func_149(5);
				}
				else if (func_155(Global_1295619, 256))
				{
					func_171(func_170(3.838462E-06f, func_91(1), 6.727819E+25f, 1, 0, 0));
					func_172(256);
					func_172(8);
					func_149(2);
				}
			}
			break;
		case 5:
			if (func_152())
			{
				Var25 = -1;
				Var25.f_4.f_7 = -5.149929E+33f;
				Var25.f_4.f_16 = -1;
				if (Global_1144470.f_39 != 0 && func_173(Global_1144470.f_1, &uVar21))
				{
					func_174(Global_1144470.f_1, &Var25);
					TELEMETRY::_TELEMETRY_COUPON(&uVar21, func_175(Global_1144470.f_39), Global_1144470.f_39, Var25.f_4.f_16, 1.436185E+38f, func_176(154));
				}
				func_153(&(Global_1144470.f_18), 0);
				func_149(6);
			}
			break;
		case 6:
			iVar2 = (Global_1901671.f_601.f_13 * 60000);
			if (func_159(&(Global_1144470.f_18)) && func_160(&(Global_1144470.f_18)) > iVar2)
			{
				func_149(7);
			}
			break;
		case 7:
			if (func_155(Global_1295619, 16384))
			{
				if (func_163(&Global_1144470))
				{
					return;
				}
			}
			if (func_159(&(Global_1144470.f_18)))
			{
				func_177(&(Global_1144470.f_18));
			}
			iVar0 = func_178(-7.714925E-11f, 0, 1, -1, 1);
			if (!func_179(&Global_1144470, -7.714925E-11f, 1, 1, 1, 0, iVar0, -1, 0))
			{
				func_149(2);
				return;
			}
			func_169(956, 1);
			func_172(16384);
			func_172(256);
			func_172(8);
			func_149(8);
			break;
		case 8:
			if (func_163(&Global_1144470))
			{
				return;
			}
			Var46.f_8 = func_180(-7.714925E-11f, 2.726986E-11f);
			Var46.f_6 = func_180(-7.714925E-11f, 3.838462E-06f);
			Var46.f_13 = 1;
			TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(Global_1144470.f_1, &uVar62);
			TELEMETRY::_TELEMETRY_ROLE_TRADER(&Var46, &uVar62);
			func_171(func_170(3.838462E-06f, func_91(1), 6.727819E+25f, 1, 0, 0));
			func_149(2);
			break;
		case 9:
			if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10) && GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
			{
				if (func_151(Global_1295619.f_149[Global_1295619]))
				{
					func_149(2);
				}
				else
				{
					func_149(1);
				}
			}
			break;
	}
}

void func_62()
{
	int iVar0;

	if ((MISC::GET_FRAME_COUNT() % 45) == 0)
	{
		iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (Global_1147168.f_339.f_16 != 0 && (Global_1147168.f_339.f_16 != func_181(iVar0) || Global_1147168.f_339.f_16 == func_182(iVar0)))
		{
			UILOG::_UILOG_REMOVE_ENTRY(7, Global_1147168.f_339.f_16);
			Global_1147168.f_339.f_16 = 0;
		}
		else if (func_183(Global_1147168.f_339.f_18, 2))
		{
			func_184(&(Global_1147168.f_339.f_18), 2);
			func_185();
		}
	}
}

void func_63(int iParam0)
{
	Global_1142409.f_2019 = iParam0;
}

void func_64(var uParam0)
{
	struct<32> Var0;

	Var0.f_3 = -1;
	Var0.f_7 = -1;
	Var0.f_25 = -1;
	Var0.f_28.f_1 = 0.2143147f;
	Var0.f_28.f_2 = 255;
	Var0.f_28.f_3 = -1;
	*uParam0 = { Var0 };
}

bool func_65(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_67(int iParam0)
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

int func_68(int iParam0)
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

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_70(int iParam0, int iParam1)
{
	if (Global_1141317.f_865[iParam0 /*7*/].f_4 != iParam1)
	{
		Global_1141317.f_865[iParam0 /*7*/].f_4 = iParam1;
	}
}

void func_71(int iParam0, vector3 vParam1)
{
	Global_1141317.f_865[iParam0 /*7*/].f_1 = { vParam1 };
}

void func_72(int iParam0, int iParam1)
{
	if (Global_1141317.f_865[iParam0 /*7*/] != iParam1)
	{
		Global_1141317.f_865[iParam0 /*7*/] = iParam1;
	}
}

int func_73(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -1;
	}
	if (!func_49())
	{
		return -1;
	}
	if (iParam0 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1141317[iVar0 /*27*/].f_9 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_74(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_75(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (Global_1141317[iParam0 /*27*/] != iParam1)
	{
		Global_1141317[iParam0 /*27*/] = iParam1;
	}
}

bool func_76(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1141317[iVar1 /*27*/].f_9 == iVar0)
		{
			return Global_1141317[iVar1 /*27*/].f_1.f_1 == Global_1144511[iParam0 /*83*/].f_33.f_1;
		}
		iVar1++;
	}
	return false;
}

bool func_77(vector3 vParam0, Vector3* vParam3)
{
	struct<5> Var0;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 3.010387E+29f;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -7.694432E-13f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam3, &Var0);
		return true;
	}
	return false;
}

bool func_78(vector3 vParam0, bool bParam3, vector3 vParam4, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (func_42(32))
	{
		if (func_187(vParam0.z))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_42(64))
	{
		iVar0 = func_188(vParam0);
		if (iVar0 == 0)
		{
			return false;
		}
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
		{
			return false;
		}
	}
	if (func_189(vParam0, iParam7))
	{
		return false;
	}
	if (!bParam9 && VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam4, Global_1901671.f_601.f_5, false, 0, 0))
	{
		return false;
	}
	if (!bParam9 && VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam4, Global_1901671.f_601.f_4, false, func_190(), 0))
	{
		return false;
	}
	if (bParam10 == 0 && func_191(vParam4))
	{
		return false;
	}
	if (bParam10 == 0 && func_192(vParam4, bParam3))
	{
		return false;
	}
	return true;
}

int func_79(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1141317[iVar0 /*27*/].f_1.f_2 == 0 || (Global_1141317[iVar0 /*27*/].f_9 == iParam0->f_9 && iParam0->f_9 != 255))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 32)
	{
		return -1;
	}
	Global_1141317[iVar0 /*27*/] = { *iParam0 };
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1141317.f_1091), Global_1141317[iVar0 /*27*/].f_9);
	return iVar0;
}

void func_80(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_193(iParam0, iParam1))
	{
		func_45(&(Global_1141317[iParam0 /*27*/].f_7), iParam1);
	}
}

bool func_81(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4)
{
	vector3 vVar0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return false;
	}
	vVar0 = { *uParam1 };
	if (func_194(&vVar0, iParam0, bParam2, iParam3, uParam4))
	{
		*uParam1 = { vVar0 };
		return true;
	}
	return false;
}

void func_82(int iParam0)
{
	int iVar0;

	if (Global_1141317[iParam0 /*27*/] == 0)
	{
		return;
	}
	iVar0 = func_195(iParam0, 0);
	if (!func_101(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_75(iParam0, 3);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		func_75(iParam0, 3);
		return;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(iVar0))
	{
		func_75(iParam0, 3);
	}
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = NETWORK::GET_NETWORK_TIME();
	if (Global_1141317[iParam0 /*27*/].f_26 == 0)
	{
		Global_1141317[iParam0 /*27*/].f_26 = iVar0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(Global_1141317[iParam0 /*27*/].f_26, iVar0) > 12000)
	{
		Global_1141317[iParam0 /*27*/].f_26 = iVar0;
	}
	else
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141317[iParam0 /*27*/].f_9))
	{
		return;
	}
	if (func_65(Global_1144511[Global_1141317[iParam0 /*27*/].f_9 /*83*/].f_33.f_4, 128))
	{
		iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(Global_1141317[iParam0 /*27*/].f_9);
		if (!func_65(Global_1141317.f_865[iVar1 /*7*/].f_5, 128))
		{
			Global_1141317[iParam0 /*27*/].f_23.f_1 = Global_1144511[Global_1141317[iParam0 /*27*/].f_9 /*83*/].f_38.f_23.f_1;
			Global_1141317[iParam0 /*27*/].f_23 = Global_1144511[Global_1141317[iParam0 /*27*/].f_9 /*83*/].f_38.f_23;
			Global_1141317[iParam0 /*27*/].f_25 = 0;
			func_45(&(Global_1141317.f_865[iVar1 /*7*/].f_5), 128);
		}
	}
	iVar2 = GANG::NETWORK_GET_GANG_ID(Global_1141317[iParam0 /*27*/].f_9);
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar4)))
		{
			if (GANG::NETWORK_GET_GANG_ID(PLAYER::INT_TO_PLAYERINDEX(iVar4)) != iVar2)
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&iVar3, iVar4);
			}
		}
		iVar4++;
	}
	if ((iVar3 != Global_1141317[iParam0 /*27*/].f_25 && VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1141317[iParam0 /*27*/].f_23.f_1)) && VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1141317[iParam0 /*27*/].f_23))
	{
		Global_1141317[iParam0 /*27*/].f_25 = iVar3;
		VOLUME::_0xEBA87B9273835CF3(Global_1141317[iParam0 /*27*/].f_23.f_1, &iVar3);
		VOLUME::_0xEBA87B9273835CF3(Global_1141317[iParam0 /*27*/].f_23, &iVar3);
	}
}

void func_84(int iParam0)
{
	int iVar0;
	struct<2> Var1[7];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141317[iParam0 /*27*/].f_9))
	{
		return;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(Global_1141317[iParam0 /*27*/].f_9);
	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(iVar0, &Var1);
	if (iVar16 > Global_1141317[iParam0 /*27*/].f_1)
	{
		return;
	}
	iVar18 = 0;
	while (iVar18 <= (Global_1141317[iParam0 /*27*/].f_1 - 1))
	{
		if (Global_1141317[iParam0 /*27*/].f_10[iVar18] != 255)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141317[iParam0 /*27*/].f_10[iVar18]))
			{
				Global_1141317[iParam0 /*27*/].f_10[iVar18] = 255;
			}
			else if (GANG::NETWORK_GET_GANG_ID(Global_1141317[iParam0 /*27*/].f_10[iVar18]) != iVar0)
			{
				Global_1141317[iParam0 /*27*/].f_10[iVar18] = 255;
			}
		}
		else if (iVar18 >= iVar16)
		{
		}
		else
		{
			iVar20 = 0;
			while (iVar20 <= iVar18)
			{
				if (func_196(Var1[iVar20 /*2*/]))
				{
					iVar17 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[iVar20 /*2*/]));
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar17))
					{
						bVar21 = true;
						iVar19 = 0;
						while (iVar19 <= (Global_1141317[iParam0 /*27*/].f_1 - 1))
						{
							if (Global_1141317[iParam0 /*27*/].f_10[iVar19] == iVar17)
							{
								bVar21 = false;
							}
							else
							{
								iVar19++;
							}
						}
					}
				}
				if (bVar21 == 1)
				{
				}
				else
				{
					iVar20++;
				}
			}
			if (bVar21)
			{
				Global_1141317[iParam0 /*27*/].f_10[iVar18] = iVar17;
			}
		}
		iVar18++;
	}
}

void func_85(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar2)) && Global_1144511[iVar2 /*83*/].f_70.f_2 != 0) && Global_1144511[iVar2 /*83*/].f_70 == iParam0)
		{
			bVar0 = true;
			iVar1 = Global_1144511[iVar2 /*83*/].f_70.f_2;
			Global_1141317[iParam0 /*27*/].f_18 = (Global_1141317[iParam0 /*27*/].f_18 || Global_1144511[iVar2 /*83*/].f_70.f_1);
		}
		iVar2++;
	}
	if (bVar0)
	{
		if (Global_1141317[iParam0 /*27*/].f_18.f_1 != iVar1)
		{
			Global_1141317[iParam0 /*27*/].f_18.f_1 = iVar1;
		}
	}
	else if (Global_1141317[iParam0 /*27*/].f_18.f_1 != 0)
	{
		Global_1141317[iParam0 /*27*/].f_18.f_1 = 0;
		Global_1141317[iParam0 /*27*/].f_18 = 0;
	}
}

void func_86(int iParam0)
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_197(), iParam0, false, 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_198(), iParam0, false, 0))
	{
		func_75(iParam0, 2);
	}
}

void func_87(int iParam0)
{
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_197(), iParam0, false, 0))
	{
		func_75(iParam0, 1);
	}
}

void func_88(int iParam0)
{
	if (Global_1901671.f_601.f_15)
	{
		func_199(iParam0);
	}
	func_200(&(Global_1141317[iParam0 /*27*/]));
	func_75(iParam0, 0);
}

void func_89()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1144470.f_40 = 0;
	Global_1144511[iVar0 /*83*/].f_74 = Global_1144470.f_32;
	Global_1144511[iVar0 /*83*/].f_74.f_1 = Global_1144470.f_33;
}

void func_90()
{
	if (func_122(512))
	{
		func_31(65536);
	}
	else if (func_122(256))
	{
		func_31(32768);
	}
}

struct<4> func_91(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_201(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_92(2.982335E+09f, func_202(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_92(2.982335E+09f, func_202(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_92(2.982335E+09f, func_202(), -5.45926E-19f, bParam0);
}

struct<4> func_92(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_203(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_201(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

void func_93(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bool bVar0;
	int iVar1;

	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	bVar0 = -1.597318E-12f;
	if (func_204(bVar0, 1))
	{
		Global_1144511[iVar1 /*83*/].f_38.f_12.f_3 = bVar0;
	}
	bVar0 = 5.145434E+20f;
	if (func_204(bVar0, 1))
	{
		Global_1144511[iVar1 /*83*/].f_38.f_12.f_1 = bVar0;
	}
	bVar0 = -2.919324E+23f;
	if (func_204(bVar0, 1))
	{
		Global_1144511[iVar1 /*83*/].f_38.f_12 = bVar0;
	}
	bVar0 = -5.540291E-12f;
	if (func_204(bVar0, 1))
	{
		Global_1144511[iVar1 /*83*/].f_38.f_12.f_6 = bVar0;
	}
	bVar0 = 3.535815E-06f;
	if (func_204(bVar0, 1))
	{
		Global_1144511[iVar1 /*83*/].f_38.f_12.f_2 = bVar0;
	}
	bVar0 = 5.590594E+14f;
	if (func_204(bVar0, 1))
	{
		Global_1144511[iVar1 /*83*/].f_38.f_12.f_2 = bVar0;
	}
	bVar0 = -2.265613E-15f;
	if (func_204(bVar0, 1))
	{
		Global_1144511[iVar1 /*83*/].f_38.f_12.f_2 = bVar0;
	}
}

void func_94()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_204(-1.64867E-18f, 1))
	{
		if (func_204(4.00045E+25f, 1))
		{
			Global_1144511[iVar0 /*83*/].f_38.f_26 = 11;
		}
		else if (func_204(2.112099E+27f, 1))
		{
			Global_1144511[iVar0 /*83*/].f_38.f_26 = 10;
		}
		else
		{
			Global_1144511[iVar0 /*83*/].f_38.f_26 = 9;
		}
	}
	else if (func_204(-3.768857E+26f, 1))
	{
		if (func_204(4.00045E+25f, 1))
		{
			Global_1144511[iVar0 /*83*/].f_38.f_26 = 8;
		}
		else if (func_204(2.112099E+27f, 1))
		{
			Global_1144511[iVar0 /*83*/].f_38.f_26 = 7;
		}
		else
		{
			Global_1144511[iVar0 /*83*/].f_38.f_26 = 6;
		}
	}
	else if (func_204(4.046162E+37f, 1))
	{
		if (func_204(4.00045E+25f, 1))
		{
			Global_1144511[iVar0 /*83*/].f_38.f_26 = 5;
		}
		else if (func_204(2.112099E+27f, 1))
		{
			Global_1144511[iVar0 /*83*/].f_38.f_26 = 4;
		}
		else
		{
			Global_1144511[iVar0 /*83*/].f_38.f_26 = 3;
		}
	}
	else if (func_204(4.00045E+25f, 1))
	{
		Global_1144511[iVar0 /*83*/].f_38.f_26 = 2;
	}
	else if (func_204(2.112099E+27f, 1))
	{
		Global_1144511[iVar0 /*83*/].f_38.f_26 = 1;
	}
	else
	{
		Global_1144511[iVar0 /*83*/].f_38.f_26 = 0;
	}
}

int func_95(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_205(&uParam0, iParam4, bParam5, iParam6);
}

void func_96(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Global_1144511[iParam1 /*83*/].f_38.f_12.f_4 != iParam0)
	{
		Global_1144511[iParam1 /*83*/].f_38.f_12.f_4 = iParam0;
	}
}

void func_97(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Global_1144511[iParam1 /*83*/].f_38.f_12.f_5 != iParam0)
	{
		Global_1144511[iParam1 /*83*/].f_38.f_12.f_5 = iParam0;
	}
}

void func_98(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Global_1144511[iParam1 /*83*/].f_38.f_12.f_7 != iParam0)
	{
		Global_1144511[iParam1 /*83*/].f_38.f_12.f_7 = iParam0;
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			func_31(8192);
		}
	}
}

void func_99(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Global_1144511[iParam1 /*83*/].f_38.f_12.f_8 != iParam0)
	{
		Global_1144511[iParam1 /*83*/].f_38.f_12.f_8 = iParam0;
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			func_31(8192);
		}
	}
}

void func_100(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Global_1144511[iParam1 /*83*/].f_38.f_12.f_9 != iParam0)
	{
		Global_1144511[iParam1 /*83*/].f_38.f_12.f_9 = iParam0;
		if (iParam1 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			func_31(8192);
		}
	}
}

bool func_101(int iParam0)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return (Global_1141317[iParam0 /*27*/] != 0 && Global_1141317[iParam0 /*27*/] != 3);
}

void func_102(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;

	Var0.f_2 = 255;
	Global_1147168.f_9[iParam0 /*10*/] = { Var0 };
	iVar10 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if ((GANG::NETWORK_IS_GANG_ID_VALID(iVar10) && iParam1 == GANG::NETWORK_GET_GANG_LEADER(iVar10)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		Global_1147168.f_330.f_3 = { Var0.f_4 };
	}
}

void func_103(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (Global_1142409.f_1[iParam0 /*63*/].f_3 != iParam1)
	{
		Global_1142409.f_1[iParam0 /*63*/].f_3 = iParam1;
	}
}

void func_104(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;

	Global_1147168.f_9[iParam0 /*10*/].f_7 = { func_206(iParam0) };
	Global_1147168.f_9[iParam0 /*10*/].f_4 = { vParam1 };
	Global_1147168.f_9[iParam0 /*10*/].f_2 = iParam4;
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if ((GANG::NETWORK_IS_GANG_ID_VALID(iVar0) && iParam4 == GANG::NETWORK_GET_GANG_LEADER(iVar0)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Global_1147168.f_330.f_7 = iParam4;
		Global_1147168.f_330.f_3 = { vParam1 };
	}
}

bool func_105(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17088)
	{
		return MAP::DOES_BLIP_EXIST(Global_17088[iParam0]);
	}
	return false;
}

void func_106(var uParam0)
{
	struct<63> Var0;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_13 = 7;
	Var0.f_49 = 7;
	*uParam0 = { Var0 };
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!bParam1)
	{
		func_17(&(Global_1142409.f_1[iParam0 /*63*/].f_5), 0);
		return;
	}
	if (!func_207(iParam0))
	{
		func_17(&(Global_1142409.f_1[iParam0 /*63*/].f_5), 0);
		return;
	}
	if (!func_42(16))
	{
		func_17(&(Global_1142409.f_1[iParam0 /*63*/].f_5), 0);
		return;
	}
	iVar0 = func_208(iParam0, 0);
	iVar1 = Global_1295619.f_10;
	bVar2 = (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && Global_1141317[iParam0 /*27*/].f_9 == PLAYER::PLAYER_ID());
	bVar3 = ((!bVar2 && iVar0 == iVar1) && GANG::NETWORK_IS_GANG_LEADER(Global_1141317[iParam0 /*27*/].f_9));
	bVar4 = func_105(Global_1142409.f_1[iParam0 /*63*/].f_5);
	if ((!bVar2 && !bVar3) && BUILTIN::VDIST(Global_34, func_206(iParam0)) > 1117126656)
	{
		if (bVar4)
		{
			func_17(&(Global_1142409.f_1[iParam0 /*63*/].f_5), 0);
		}
		return;
	}
	bVar5 = func_42(1024);
	bVar6 = func_209(1);
	if (!bVar4)
	{
		if (((bVar2 || bVar3) && Global_1142409.f_2045 != iParam0) && Global_1142409.f_2045 != -1)
		{
			func_17(&(Global_1142409.f_1[Global_1142409.f_2045 /*63*/].f_5), 0);
		}
		if (bVar2 || bVar3)
		{
			func_210(iParam0);
		}
		if (bVar5)
		{
			if (bVar2 || bVar3)
			{
				if (!bVar6)
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
		iVar7 = Global_1141317[iParam0 /*27*/].f_1.f_1;
		Global_1142409.f_1[iParam0 /*63*/].f_5 = func_213(func_211(func_206(iParam0), 1), func_212((bVar2 || bVar3)), func_206(iParam0), -1);
		if (Global_1142409.f_1[iParam0 /*63*/].f_5 == -1)
		{
			return;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), "NET_CAMP_BLIP_POSSE");
		MAP::SET_BLIP_FLASH_TIMER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), func_212((bVar2 || bVar3)), func_214(iVar7, (bVar2 || bVar3), bVar2));
		if (func_42(512))
		{
			if (bVar5 == 0)
			{
				MAP::BLIP_ADD_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), 4.185971E-18f);
				MAP::BLIP_ADD_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), 6.46396E+25f);
				Global_1142409.f_1[iParam0 /*63*/].f_62 = MISC::GET_GAME_TIMER();
			}
			func_28(512);
		}
	}
	else
	{
		if (Global_1142409.f_2045 == iParam0)
		{
			if ((Global_1142409.f_2045 != -1 && !bVar2) && !bVar3)
			{
				func_17(&(Global_1142409.f_1[iParam0 /*63*/].f_5), 0);
				return;
			}
		}
		else if (Global_1142409.f_2045 != -1 && (bVar2 || bVar3))
		{
			func_17(&(Global_1142409.f_1[iParam0 /*63*/].f_5), 0);
			return;
		}
		if (!bVar2 && !bVar3)
		{
			if (func_113(iParam0, 2))
			{
				MAP::BLIP_ADD_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), 5.342282E+18f);
			}
			else
			{
				MAP::BLIP_ADD_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), 2.920891E+20f);
			}
		}
		if (func_215(iParam0) && (!(bVar3 || bVar2) || !bVar5))
		{
			MAP::BLIP_ADD_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), 6.677019E-07f);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), 6.677019E-07f);
		}
		if (bVar5 && (!(bVar3 || bVar2) || !bVar6))
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), 4.185971E-18f);
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), 6.46396E+25f);
			Global_1142409.f_1[iParam0 /*63*/].f_62 = 0;
			MAP::BLIP_ADD_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), -1.825973E+31f);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), -1.825973E+31f);
		}
		if (Global_1142409.f_1[iParam0 /*63*/].f_62 != 0 && (MISC::GET_GAME_TIMER() - Global_1142409.f_1[iParam0 /*63*/].f_62) > 20000)
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_5), 6.46396E+25f);
			Global_1142409.f_1[iParam0 /*63*/].f_62 = 0;
		}
	}
}

void func_108(int iParam0, bool bParam1)
{
	struct<2> Var0;

	if (!bParam1)
	{
		return;
	}
	if (!func_74(iParam0))
	{
		return;
	}
	if (!GANG::_NETWORK_IS_GANG_MEMBER(func_208(iParam0, 0), PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_216(PLAYER::PLAYER_ID()) == iParam0 && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		Var0 = { func_217(0) };
		if (func_44(Var0))
		{
			if ((((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 8) || Var0 == 7) || Var0 == 6)
			{
				if (!func_193(iParam0, 32) && !func_113(iParam0, 4096))
				{
					if (func_113(iParam0, 16))
					{
						func_218(iParam0, 2048);
					}
					else
					{
						func_219(iParam0, 2048);
					}
					func_220(iParam0);
					func_218(iParam0, 4096);
				}
			}
		}
		else if (func_193(iParam0, 32))
		{
			if (func_113(iParam0, 4096))
			{
				func_221(iParam0);
				func_219(iParam0, 4096);
				if (func_113(iParam0, 2048))
				{
					func_222(iParam0);
					func_219(iParam0, 2048);
				}
			}
		}
	}
	if (func_215(iParam0))
	{
		if (func_122(16))
		{
			func_125(16);
		}
	}
	else if (!func_122(16))
	{
		func_223(16);
	}
}

void func_109(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!func_105(Global_1142409.f_1[iParam0 /*63*/].f_5))
	{
		if (func_105(Global_1142409.f_1[iParam0 /*63*/].f_6))
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_6), 7148155);
			func_17(&(Global_1142409.f_1[iParam0 /*63*/].f_6), 0);
			Global_1142409.f_1[iParam0 /*63*/].f_6 = -1;
		}
		return;
	}
	iVar0 = func_208(iParam0, 0);
	iVar1 = Global_1295619.f_10;
	bVar2 = (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && Global_1141317[iParam0 /*27*/].f_9 == PLAYER::PLAYER_ID());
	bVar3 = ((!bVar2 && iVar0 == iVar1) && GANG::NETWORK_IS_GANG_LEADER(Global_1141317[iParam0 /*27*/].f_9));
	if (!bVar2 && !bVar3)
	{
		if (func_105(Global_1142409.f_1[iParam0 /*63*/].f_6))
		{
			MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_6), 7148155);
			func_17(&(Global_1142409.f_1[iParam0 /*63*/].f_6), 0);
			Global_1142409.f_1[iParam0 /*63*/].f_6 = -1;
		}
		return;
	}
	if (func_105(Global_1142409.f_1[iParam0 /*63*/].f_6))
	{
		return;
	}
	if (func_105(Global_1142409.f_1[Global_1142409.f_2051 /*63*/].f_6))
	{
		MAP::BLIP_REMOVE_MODIFIER(func_16(Global_1142409.f_1[Global_1142409.f_2051 /*63*/].f_6), 7148155);
		func_17(&(Global_1142409.f_1[Global_1142409.f_2051 /*63*/].f_6), 0);
		Global_1142409.f_1[Global_1142409.f_2051 /*63*/].f_6 = -1;
	}
	iVar4 = Global_1141317[iParam0 /*27*/].f_1.f_1;
	Global_1142409.f_1[iParam0 /*63*/].f_6 = func_213(func_211(func_206(iParam0), 1), 101, func_206(iParam0), -1);
	if (Global_1142409.f_1[iParam0 /*63*/].f_6 == -1 || !func_105(Global_1142409.f_1[iParam0 /*63*/].f_6))
	{
		return;
	}
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(func_16(Global_1142409.f_1[iParam0 /*63*/].f_6), "NET_CAMP_BLIP_POSSE");
	MAP::SET_BLIP_FLASH_TIMER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_6), func_212((bVar2 || bVar3)), func_214(iVar4, (bVar2 || bVar3), bVar2));
	MAP::BLIP_ADD_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_6), 7148155);
	MAP::BLIP_ADD_MODIFIER(func_16(Global_1142409.f_1[iParam0 /*63*/].f_6), -0.0001894792f);
	Global_1142409.f_2051 = iParam0;
}

void func_110(int iParam0)
{
	if (!func_12())
	{
		return;
	}
	if (func_42(4))
	{
		return;
	}
	if (!func_224(iParam0, 8))
	{
		func_225(iParam0);
		func_226(iParam0);
		func_227(iParam0);
		func_228(iParam0);
		func_229(iParam0);
		func_230(iParam0);
		func_231(iParam0, 8);
	}
	if (BUILTIN::VDIST(Global_34, func_206(iParam0)) >= Global_1901671.f_601)
	{
		return;
	}
	if (Global_1142409.f_1[iParam0 /*63*/].f_4 == 0)
	{
		func_232(iParam0, 1);
	}
	switch (Global_1142409.f_1[iParam0 /*63*/].f_4)
	{
		case 0:
			func_232(iParam0, 1);
			break;
		case 1:
			if (func_233(iParam0))
			{
				func_218(iParam0, 1);
				func_31(256);
				func_232(iParam0, 2);
			}
			break;
		case 2:
			if (func_234(iParam0))
			{
				func_232(iParam0, 3);
			}
			break;
		case 3:
			func_218(iParam0, 1);
			func_31(256);
			func_103(iParam0, 2);
			break;
	}
}

void func_111(int iParam0)
{
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1142409.f_2055) || Global_1142409.f_2056 != iParam0)
	{
		func_219(iParam0, 1);
		func_219(iParam0, 2);
		func_232(iParam0, 0);
		func_103(iParam0, 1);
	}
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1142409.f_2057) || Global_1142409.f_2058 != iParam0)
	{
		func_219(iParam0, 1024);
	}
}

void func_112(int iParam0)
{
	if ((func_113(iParam0, 1) && SCRIPTS::DOES_THREAD_EXIST(Global_1142409.f_2055)) && Global_1142409.f_2056 == iParam0)
	{
		return;
	}
	func_235(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0]));
	func_106(&(Global_1142409.f_1[iParam0 /*63*/]));
	func_103(iParam0, 0);
	func_232(iParam0, 0);
}

bool func_113(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return func_65(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0], iParam1);
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((MISC::GET_FRAME_COUNT() % 3) != 0)
	{
		return;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	iVar1 = GANG::NETWORK_GET_GANG_LEADER(iVar0);
	iVar2 = func_236(iVar1);
	if (iVar2 != func_216(PLAYER::PLAYER_ID()))
	{
		func_237(iVar2);
	}
}

Vector3 func_115()
{
	vector3 vVar0;
	struct<20> Var3;

	Var3 = { func_238(0) };
	if (Var3.f_8 != -7.437896E-28f)
	{
	}
	if (((Var3.f_17 == 0 && Var3.f_19 == 0) && Global_17418.f_55.f_4.f_2 != 0) && Global_17418.f_55.f_4 >= 4)
	{
		vVar0 = { Global_17418.f_55.f_4 };
	}
	else
	{
		vVar0.x = Var3.f_17;
		vVar0.f_1 = Var3.f_18;
		vVar0.f_2 = Var3.f_19;
	}
	return vVar0;
}

void func_116(vector3 vParam0)
{
	Global_1144511[func_239() /*83*/].f_38 = { vParam0 };
	func_240(vParam0);
}

bool func_117()
{
	return Global_1142409.f_2027.f_7 == 3;
}

void func_118(int iParam0)
{
	Global_1142409.f_2027.f_7 = iParam0;
}

void func_119()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_38.f_7 = -1;
	Global_1144511[iVar0 /*83*/].f_38.f_8 = { 0f, 0f, 0f };
}

void func_120()
{
	if (func_65(Global_1147168.f_8, 2))
	{
		func_43(&(Global_1147168.f_8), 2);
	}
}

void func_121()
{
	if ((Global_1147168.f_382 < 3 && func_42(64)) && !func_123())
	{
		func_137("NET_CAMP_HELP_NO_CAMP", 10000, 0, 0, 0, 1);
		Global_1147168.f_382++;
	}
}

bool func_122(int iParam0)
{
	return func_65(Global_1147168.f_8, iParam0);
}

bool func_123()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_124(int iParam0)
{
	return func_241(1, iParam0);
}

void func_125(int iParam0)
{
	func_43(&(Global_1147168.f_8), iParam0);
}

bool func_126(vector3 vParam0, bool bParam3)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { vParam0 };
	if ((func_49() && func_42(64)) && func_242(0, 1))
	{
		if (vVar1.z != 0)
		{
			if (func_243())
			{
				if (func_244(vVar1, 1))
				{
					iVar0 = 1;
				}
			}
			else
			{
				if (!func_245(Global_1295619.f_10))
				{
				}
				if (bParam3)
				{
					if (!func_246(vVar1, 1))
					{
						iVar0 = 0;
					}
					else if (func_244(vVar1, 0))
					{
						iVar0 = 1;
						func_128(1);
					}
				}
				else if (func_244(vVar1, 0))
				{
					iVar0 = 1;
				}
			}
		}
	}
	return iVar0;
}

int func_127()
{
	vector3 vVar0;

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	func_63(2);
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_2 = 0;
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_247();
	func_248(vVar0);
	return 1;
}

void func_128(int iParam0)
{
	Global_1142409.f_2027.f_5 = iParam0;
}

bool func_129()
{
	return Global_1142409.f_2046 < 10;
}

void func_130(vector3 vParam0, vector3 vParam3)
{
	struct<8> Var0;

	Var0 = { vParam3 };
	Var0.f_4 = Global_1901671.f_601.f_5;
	Var0.f_5 = 544;
	Var0.f_6 = func_249();
	Var0.f_7 = func_188(vParam0);
	Global_1142409.f_2052.f_1 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&Var0);
}

void func_131(int iParam0)
{
	if (Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_38.f_23.f_1 != iParam0)
	{
		Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_38.f_23.f_1 = iParam0;
	}
}

void func_132(vector3 vParam0, vector3 vParam3)
{
	struct<8> Var0;

	Var0 = { vParam3 + Vector(1f, 0f, 0f) };
	Var0.f_4 = Global_1901671.f_601.f_4;
	Var0.f_5 = 552;
	Var0.f_6 = func_190();
	Var0.f_7 = func_188(vParam0);
	Global_1142409.f_2052 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&Var0);
}

void func_133(int iParam0)
{
	if (Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_38.f_23 != iParam0)
	{
		Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_38.f_23 = iParam0;
	}
}

void func_134(int iParam0)
{
	func_45(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

bool func_135(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (Global_1142409.f_2049 == 0)
	{
		Global_1142409.f_2049 = MISC::GET_SYSTEM_TIME();
	}
	else if ((MISC::GET_SYSTEM_TIME() - Global_1142409.f_2049) > Global_1901671.f_601.f_14)
	{
		*uParam0 = 1;
		Global_1142409.f_2049 = 0;
		return false;
	}
	if (Global_1141317.f_865[iVar1 /*7*/].f_4 != Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3)
	{
		return false;
	}
	if (func_65(Global_1141317.f_865[iVar1 /*7*/].f_5, 32))
	{
		*uParam0 = 1;
		Global_1142409.f_2049 = 0;
		return false;
	}
	if (Global_1141317.f_865[iVar1 /*7*/] != 6)
	{
		return false;
	}
	iVar2 = func_236(iVar0);
	if (func_74(iVar2))
	{
		vVar3 = { Global_1141317[iVar2 /*27*/].f_1 };
		vVar6 = { func_206(iVar2) };
		func_116(vVar3);
		func_250(vVar6);
		iVar9 = func_211(vVar6, 1);
		func_251(iVar9);
		func_248(vVar3);
		TELEMETRY::_TELEMETRY_NET_CAMP(vVar3.x, vVar3.z, vVar3.y, func_252(PLAYER::NETWORK_PLAYER_ID_TO_INT()), vVar6);
		if (GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_253(Global_1295619.f_10, vVar3.x);
			POSSE::_0xC08AFF658B2E51DA(&iVar10);
			if (iVar10 != 0)
			{
				Global_1203937.f_14.f_2 = iVar10;
				Global_1203937.f_14.f_4 = Global_1295619.f_10;
				Global_1203937.f_14.f_7 = vVar3.x;
				Global_1203937.f_14.f_8 = vVar3.y;
				Global_1203937.f_1 = 10;
			}
		}
		if (func_42(64))
		{
			if (Global_1142409.f_2027.f_4 == -15)
			{
				Global_1142409.f_2027.f_4 = func_254();
			}
		}
		func_237(iVar2);
		return true;
	}
	return false;
}

void func_136()
{
	if (!func_65(Global_1147168.f_8, 2))
	{
		func_45(&(Global_1147168.f_8), 2);
	}
}

int func_137(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_138(vector3 vParam0)
{
	int iVar0;

	if (!func_42(64))
	{
		return false;
	}
	iVar0 = func_188(vParam0);
	if (iVar0 != 0 && !UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

void func_139(int iParam0)
{
	if ((iParam0 < 0 || iParam0 >= 32) || Global_1141317[iParam0 /*27*/].f_9 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (Global_1144511[func_239() /*83*/].f_38.f_2 != Global_1141317[iParam0 /*27*/].f_1.f_2)
	{
		func_116(Global_1141317[iParam0 /*27*/].f_1);
	}
	func_255();
	func_256(iParam0);
	func_257(iParam0, Global_1141317[iParam0 /*27*/].f_1);
	func_258(iParam0);
	func_259(iParam0);
}

bool func_140(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	func_18();
	if (Global_1141317[iParam0 /*27*/].f_9 == 255)
	{
		return false;
	}
	if (Global_1141317[iParam0 /*27*/].f_9 != GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	vVar0 = { Global_1141317[iParam0 /*27*/].f_1 };
	func_116(vVar0);
	func_31(4096);
	if (func_117())
	{
		func_118(0);
	}
	func_120();
	return true;
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar1 = iVar0;
		iVar2 = PLAYER::PLAYER_ID();
		if ((((iVar1 < 32 && iVar1 >= 0) && iVar2 < 32) && iVar2 >= 0) && (Global_1144511[iVar2 /*83*/].f_38.f_2 != Global_1144511[iVar1 /*83*/].f_38.f_2 || Global_1144511[iVar2 /*83*/].f_38 != Global_1144511[iVar1 /*83*/].f_38))
		{
			func_116(Global_1144511[iVar1 /*83*/].f_38);
		}
	}
	if (((func_42(4096) && !func_260()) && CAM::IS_SCREEN_FADED_IN()) && !func_124(255))
	{
		iVar3 = func_216(PLAYER::PLAYER_ID());
		if (func_74(iVar3))
		{
			if (func_105(Global_1142409.f_1[iVar3 /*63*/].f_5) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141317[iVar3 /*27*/].f_9))
			{
				sVar4 = MISC::VAR_STRING(10, "GC_CAMP_MERGE", func_262(func_261(Global_1141317[iVar3 /*27*/].f_9), -18751.78f), func_16(Global_1142409.f_1[iVar3 /*63*/].f_5));
				UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, true);
				Global_1147168.f_375 = func_137(sVar4, 10000, 0, 0, 0, 1);
				Global_1147168.f_376 = Global_1295619.f_10;
				func_28(4096);
			}
		}
	}
	func_255();
}

struct<2> func_142()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_217(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_217(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

void func_143()
{
	int iVar0;

	if (Global_1144470.f_40 == 0)
	{
		Global_1144470.f_40++;
	}
	else if (Global_1144470.f_40 >= 60)
	{
		Global_1144470.f_40 = 0;
		return;
	}
	else
	{
		Global_1144470.f_40++;
		return;
	}
	if (func_263())
	{
		if (!func_155(Global_1295619, 1))
		{
			func_158(1);
		}
	}
	else if (func_155(Global_1295619, 1))
	{
		func_172(1);
	}
	func_264(func_170(2.726986E-11f, func_91(1), 6.727819E+25f, 1, 0, 0));
	func_265(func_170(-2.933081E+12f, func_91(1), 6.727819E+25f, 1, 0, 0));
	func_171(func_170(3.838462E-06f, func_91(1), 6.727819E+25f, 1, 0, 0));
	if (func_266() == -2.265613E-15f)
	{
		iVar0 = 100;
	}
	else if (func_266() == 5.590594E+14f)
	{
		iVar0 = 50;
	}
	else
	{
		iVar0 = 25;
	}
	func_267(iVar0);
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_21))
	{
		return;
	}
	iVar3 = GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	iVar4 = func_268(iVar3);
	iVar5 = func_269(iVar3);
	iVar6 = 0;
	if (Global_1940239.f_11588 != 0)
	{
		iVar7 = func_270(Global_1940239.f_11588);
	}
	if (func_271(iVar7))
	{
		iVar6 = func_180(iVar7, 2.726986E-11f);
		if (func_272(Global_1940239.f_11588, 0.9368603f))
		{
			if (func_273())
			{
				iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 1067450368));
			}
		}
		else if ((INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(Global_1940239.f_11588, 2.524355E-29f) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(Global_1940239.f_11588, 3.85186E-34f)) || func_272(Global_1940239.f_11588, 3.750005E+29f))
		{
			iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 1053609165));
		}
		else
		{
			iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 1058642330));
		}
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_23))
	{
		if ((func_274(29) && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(NaNf)) && Global_1940239.f_41.f_203 > 0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144470.f_23, (iVar6 + iVar4));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144470.f_23, 0);
		}
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_22))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144470.f_22, iVar4);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_24))
	{
		iVar0 = func_275(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144470.f_24, iVar0);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_26))
	{
		if (func_183(Global_1147168.f_339.f_18, 1))
		{
			iVar1 = func_276(iVar3);
			func_184(&(Global_1147168.f_339.f_18), 1);
		}
		else
		{
			iVar1 = func_277(iVar3);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144470.f_26, iVar1);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_27))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144470.f_27, iVar5);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_28))
	{
		iVar0 = func_278(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144470.f_28, iVar0);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_29))
	{
		iVar2 = func_279(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1144470.f_29, iVar2);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_31))
	{
		if (func_155(iVar3, 32) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(NaNf))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1144470.f_31, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1144470.f_31, false);
		}
	}
}

void func_145()
{
	if (func_280())
	{
		if (!func_155(Global_1295619, 4096))
		{
			HUD::_DISABLE_HUD_CONTEXT(2.215357E+36f);
			HUD::_ENABLE_HUD_CONTEXT(-5.908025E+10f);
			func_158(4096);
		}
	}
	else if (func_155(Global_1295619, 4096))
	{
		HUD::_DISABLE_HUD_CONTEXT(-5.908025E+10f);
		func_172(4096);
	}
}

void func_146()
{
	var uVar0;
	struct<14> Var4;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) || !GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
	{
		return;
	}
	if (Global_1144470.f_34 != 255)
	{
		iVar19 = Global_1144470.f_34;
		if ((((iVar19 >= 0 && iVar19 < 32) && Global_1144511[iVar19 /*83*/].f_74.f_6 > 0) && Global_1144511[iVar19 /*83*/].f_74.f_7 == Global_1144470.f_37) && Global_1144470.f_37 != -1)
		{
			return;
		}
		else
		{
			Global_1144470.f_34 = 255;
		}
	}
	if (!func_281(1))
	{
		return;
	}
	iVar21 = 0;
	while (iVar21 <= 31)
	{
		iVar20 = PLAYER::INT_TO_PLAYERINDEX(iVar21);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar20) && GANG::_NETWORK_IS_IN_MY_GANG(iVar20))
		{
			if (Global_1144511[iVar21 /*83*/].f_74.f_8 != 0 && Global_1144511[iVar21 /*83*/].f_74.f_6 > 0)
			{
				if (func_282(&uVar0, Global_1144511[iVar21 /*83*/].f_74.f_8, Global_1144511[iVar21 /*83*/].f_74.f_6, 0))
				{
					SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar18, iVar21);
					Global_1144470.f_34 = iVar20;
					Global_1144470.f_37 = Global_1144511[iVar21 /*83*/].f_74.f_7;
					func_283(19, Var4, uVar18);
				}
			}
			else
			{
				iVar21++;
			}
		}
	}
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return iVar0;
	}
	iVar1 = iParam0;
	return Global_1144511[iVar1 /*83*/].f_74.f_1;
}

void func_148(bool bParam0)
{
	if (bParam0)
	{
		func_284(&(Global_1144470.f_15));
		func_158(64);
	}
	else
	{
		func_177(&(Global_1144470.f_15));
		func_172(64);
	}
}

void func_149(int iParam0)
{
	Global_1144511[Global_1295619 /*83*/].f_74.f_1 = iParam0;
	Global_1144470.f_33 = Global_1144511[Global_1295619 /*83*/].f_74.f_1;
}

void func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar3 = GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	iVar4 = func_268(iVar3);
	iVar5 = func_269(iVar3);
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_21))
	{
		Global_1144470.f_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Trader_ProgressBars");
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_22))
	{
		Global_1144470.f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144470.f_21, "TraderMaterialsValue", iVar4);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_23))
	{
		Global_1144470.f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144470.f_21, "TraderMaterialsDeltaValue", 0);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_25))
	{
		Global_1144470.f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144470.f_21, "TraderMaterialsMaximum", Global_1901671.f_601.f_9);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_24))
	{
		iVar0 = func_275(iVar3);
		Global_1144470.f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144470.f_21, "TraderMaterialsColorID", iVar0);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_26))
	{
		iVar1 = func_277(iVar3);
		Global_1144470.f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144470.f_21, "ProductionOperational", iVar1);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_27))
	{
		Global_1144470.f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144470.f_21, "TraderGoodsValue", iVar5);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_30))
	{
		Global_1144470.f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144470.f_21, "TraderGoodsMaximum", Global_1901671.f_601.f_10);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_28))
	{
		iVar0 = func_278(iVar3);
		Global_1144470.f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144470.f_21, "TraderGoodsColorID", iVar0);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_29))
	{
		iVar2 = func_279(iVar3);
		Global_1144470.f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1144470.f_21, "TraderGoodsThresholdValue", iVar2);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1144470.f_31))
	{
		Global_1144470.f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1144470.f_21, "TraderGoodsShowCash", false);
	}
}

bool func_151(int iParam0)
{
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && func_155(iParam0, 1));
}

bool func_152()
{
	int iVar0;

	iVar0 = func_178(-7.714925E-11f, 0, 1, -1, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	return func_285(-7.714925E-11f, iVar0, 0);
}

void func_153(var uParam0, bool bParam1)
{
	if (bParam1 || !func_159(uParam0))
	{
		func_284(uParam0);
	}
}

bool func_154()
{
	int iVar0;

	if (!func_286())
	{
		func_158(4);
	}
	else
	{
		func_172(4);
	}
	if (func_268(PLAYER::PLAYER_ID()) < 200)
	{
		if (!func_155(Global_1295619, 2))
		{
			func_157("TRADER_HALT_REASON_MATERIALS_EMPTY", 1.190467E-33f);
			func_158(2);
		}
	}
	else
	{
		func_172(2);
	}
	if (func_269(PLAYER::PLAYER_ID()) >= Global_1901671.f_601.f_10)
	{
		if (!func_155(Global_1295619, 128))
		{
			func_157("TRADER_HALT_REASON_SELL_GOODS", 5.116903E-35f);
			func_158(128);
		}
	}
	else
	{
		func_172(128);
	}
	iVar0 = func_216(PLAYER::PLAYER_ID());
	if (func_193(iVar0, 512))
	{
		if (!func_155(Global_1295619, 16))
		{
			func_157("TRADER_HALT_REASON_CRIPPS_INJURED", 3.848825E+20f);
			func_158(16);
		}
	}
	else
	{
		func_172(16);
	}
	if (((func_155(Global_1295619, 4) || func_155(Global_1295619, 2)) || func_155(Global_1295619, 128)) || func_155(Global_1295619, 16))
	{
		return false;
	}
	return true;
}

bool func_155(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_65(Global_1144511[iParam0 /*83*/].f_74, iParam1);
}

int func_156(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1144511[iVar0 /*83*/].f_74.f_5;
}

void func_157(char* sParam0, float fParam1)
{
	struct<22> Var0;

	if (!func_287())
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
	Var0.f_2 = MISC::VAR_STRING(2, "TRADER_CRIPPS_TITLE");
	Var0.f_3 = MISC::VAR_STRING(2, sParam0);
	Var0.f_7 = fParam1;
	Var0.f_6 = -4.185603E-24f;
	Var0.f_8 = 27.64779f;
	Var0.f_4 = "TRADER_HOLD_INPUT_FOR_CAMP";
	Var0.f_18 = 0;
	Var0.f_17 = 0;
	Var0.f_13 = 5.608729E-08f;
	Var0.f_16 = 0;
	Var0.f_14 = 0;
	func_288(&Var0);
}

void func_158(int iParam0)
{
	if (!func_65(Global_1144511[Global_1295619 /*83*/].f_74, iParam0))
	{
		func_45(&(Global_1144511[Global_1295619 /*83*/].f_74), iParam0);
		Global_1144470.f_32 = Global_1144511[Global_1295619 /*83*/].f_74;
	}
}

bool func_159(var uParam0)
{
	return func_289(*uParam0, 1);
}

int func_160(var uParam0)
{
	if (!func_159(uParam0))
	{
		return 0;
	}
	if (func_290(uParam0))
	{
		return uParam0->f_2;
	}
	return func_291(uParam0->f_1);
}

bool func_161()
{
	if (func_165(&Global_1144470, -2.933081E+12f, 1, 1, -1.926391E+21f, -1, 1))
	{
		if (func_163(&Global_1144470))
		{
			TELEMETRY::_TELEMETRY_SET_SHOP_FOR_TRANSACTION(Global_1144470.f_1, 3.648399E+12f, 1.567787E-33f);
			func_153(&(Global_1144470.f_15), 1);
			return true;
		}
	}
	return false;
}

int func_162(int* iParam0)
{
	return func_292(iParam0->f_1);
}

bool func_163(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_162(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_164(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_203(bParam0, 0))
	{
		return false;
	}
	if (func_293(bParam0) || func_272(bParam0, 2.791187f))
	{
		return func_178(func_294(bParam0, 0), bParam1, bParam2, iParam3, func_295(bParam0));
	}
	if (func_296(bParam0, bParam4) || func_297(bParam0))
	{
		bParam1 = 0.003804697f;
	}
	else if (func_295(bParam0) && (func_298(bParam0, &iVar0) || func_299(bParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else
	{
		bVar1 = func_300(bParam0, -2.401104E+18f);
		bVar2 = func_300(bParam0, -982726.7f);
		if (bVar1 && !bVar2)
		{
			bParam1 = -2.401104E+18f;
		}
		else if (bVar2 && bVar1)
		{
			if (func_301())
			{
				bParam1 = -2.401104E+18f;
			}
			else
			{
				bParam1 = -982726.7f;
			}
		}
		else if (bVar2)
		{
			bParam1 = -982726.7f;
		}
		else if (func_302(15) && func_300(bParam0, 1.109321E-25f))
		{
			bParam1 = 1.109321E-25f;
		}
		else
		{
			bParam1 = false;
		}
	}
	if (bParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return bParam1;
}

bool func_165(int* iParam0, bool bParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	struct<17> Var0;
	struct<5> Var17;
	bool bVar22;

	func_303(&bParam1);
	if (func_293(bParam1))
	{
		return func_179(iParam0, func_294(bParam1, 1), 1, 1, fParam3, 0, iParam4, iParam5, func_295(bParam1));
	}
	else if (bParam1 == 9.27052E-12f)
	{
		return func_179(iParam0, 3.517294E+25f, 1, 1, fParam3, 0, -2.401104E+18f, iParam5, func_295(bParam1));
	}
	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var17 = { func_304(bParam1, 1, 1) };
	if (func_305(bParam1, &bVar22))
	{
		return func_179(iParam0, bVar22, iParam2, 1, fParam3, 0, 0, iParam5, 0);
	}
	if (func_306(bParam1))
	{
		if (!func_307(iParam0, bParam1, Var17, iParam2, &Var0, iParam4, iParam5, fParam3))
		{
			return false;
		}
	}
	else if (!func_308(iParam0, bParam1, Var17, Var17.f_4, iParam2, &Var0, fParam3, iParam4, iParam5, iParam6))
	{
		return false;
	}
	func_309(Var0);
	return true;
}

int func_166(bool bParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_310(bParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_311(Var0[iVar32 /*2*/]))
		{
			return Var0[iVar32 /*2*/];
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

int func_167(bool bParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	iVar0 = -1;
	if (!func_311(bParam0))
	{
		return iVar0;
	}
	iVar0 = 2.799884E-36f;
	Var1 = { func_304(bParam0, 0, 0) };
	Var6 = { func_92(bParam0, Var1, Var1.f_4, 0) };
	if (!func_312(&Var6))
	{
		return -1;
	}
	if (func_313(Var6))
	{
		iVar0 = 1.074468E-35f;
	}
	return iVar0;
}

void func_168(int iParam0, struct<17> Param1)
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

void func_169(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_314(iParam0, &iVar0, &iVar1);
	if (!func_315(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_316(iVar0, iVar1);
}

int func_170(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_203(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_317(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_92(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_201(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_201(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

void func_171(int iParam0)
{
	if (Global_1144511[Global_1295619 /*83*/].f_74.f_5 != iParam0)
	{
		Global_1144511[Global_1295619 /*83*/].f_74.f_5 = iParam0;
	}
}

void func_172(int iParam0)
{
	if (func_65(Global_1144511[Global_1295619 /*83*/].f_74, iParam0))
	{
		func_43(&(Global_1144511[Global_1295619 /*83*/].f_74), iParam0);
		Global_1144470.f_32 = Global_1144511[Global_1295619 /*83*/].f_74;
	}
}

bool func_173(int iParam0, var uParam1)
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(iParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_174(int iParam0, var uParam1)
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
			*uParam1 = { Global_1292096.f_20.f_1[iVar0 /*21*/] };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_175(bool bParam0)
{
	return func_318(bParam0);
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -6.678279E+09f;
		case 6:
			return 5.092616E-23f;
		case 7:
			return 0.08901188f;
		case 8:
			return -1958.136f;
		case 19:
			return 1.757544E+13f;
		case 13:
			return 3.930592E-06f;
		case 14:
			return 5.223587E-29f;
		case 15:
			return -1.052651E+23f;
		case 12:
			return -5.816004E-34f;
		case 122:
			return 6.001663E+28f;
		case 123:
			return -5.778385E+09f;
		case 5:
			return 7.941624E+18f;
		case 9:
			return -5.145404E-15f;
		case 10:
			return -4.620579E+31f;
		case 11:
			return -2023770f;
		case 16:
			return 2.931569E-07f;
		case 17:
			return 1.092197E+32f;
		case 18:
			return 2.132098E+27f;
		case 23:
			return 2.946846E-31f;
		case 24:
			return 3.221863E-32f;
		case 25:
			return -1.071896E-20f;
		case 22:
			return 2836841f;
		case 26:
			return -1.583762E+32f;
		case 45:
			return -559756.6f;
		case 48:
			return 1.891847E-07f;
		case 46:
			return 3.209415E-27f;
		case 49:
			return -0.001697428f;
		case 42:
			return 3.415819E-32f;
		case 43:
			return 2.619793E-33f;
		case 44:
			return 0.0001756163f;
		case 50:
			return -1.314186E+17f;
		case 51:
			return -13861.96f;
		case 52:
			return 7.656175E-30f;
		case 53:
			return -8.745837E+37f;
		case 63:
			return -1.646639E+21f;
		case 56:
			return 1.11115E+13f;
		case 57:
			return -2.158932E+24f;
		case 60:
			return -2.074173E-38f;
		case 124:
			return 7.61699E+14f;
		case 125:
			return -1.392405E-19f;
		case 54:
			return 6.589171E+22f;
		case 55:
			return 1.156345E-20f;
		case 59:
			return -1.659592E-06f;
		case 58:
			return 3.946506E-35f;
		case 61:
			return -5.605502E-10f;
		case 62:
			return -3.081603E-38f;
		case 27:
			return -1.891411E+11f;
		case 28:
			return -4.238571E-26f;
		case 33:
			return 0.001610436f;
		case 31:
			return 1.055256E-27f;
		case 34:
			return 2.704235E-11f;
		case 35:
			return 1.446313E-28f;
		case 30:
			return 1.328889E-24f;
		case 39:
			return -1.990651E-06f;
		case 126:
			return 2.271166E+18f;
		case 29:
			return -4.124625E-13f;
		case 36:
			return 5.755767E-28f;
		case 37:
			return -6.40899E+13f;
		case 38:
			return -1430.345f;
		case 68:
			return 2.766683E+36f;
		case 69:
			return 7.8227E-06f;
		case 70:
			return 5.290563E+31f;
		case 71:
			return 1.985556E-17f;
		case 74:
			return -6.774944E+25f;
		case 127:
			return -3.091904E+32f;
		case 75:
			return -2.34763E-33f;
		case 72:
			return -9.884961E+18f;
		case 73:
			return 2.526965E+12f;
		case 83:
			return 9.748861E-16f;
		case 84:
			return -1.269082E+11f;
		case 85:
			return 4.319876E+13f;
		case 78:
			return 1.85519E-13f;
		case 87:
			return 1.119544E-12f;
		case 86:
			return 2.286067E-24f;
		case 82:
			return -1.186129E-24f;
		case 88:
			return 3.414019E+18f;
		case 81:
			return 139.4352f;
		case 91:
			return 7.167645E+19f;
		case 90:
			return -9.661501E+22f;
		case 120:
			return 3.526101E+21f;
		case 121:
			return 7.501371E-10f;
		case 77:
			return 2980.293f;
		case 79:
			return -1.801417E+24f;
		case 80:
			return -2.879967E-28f;
		case 89:
			return 1.105674E-10f;
		case 41:
			return 2.930603E+16f;
		case 98:
			return -3.188065E+25f;
		case 97:
			return 7.757542E-31f;
		case 93:
			return 2.462378E+13f;
		case 96:
			return -6.893608E-07f;
		case 94:
			return 3.550023E+16f;
		case 95:
			return 4.790249E-22f;
		case 128:
			return 8.133306E-16f;
		case 129:
			return -3.93835E-33f;
		case 0:
			return 80.73424f;
		case 1:
			return 1.347958E-16f;
		case 2:
			return -2.773782E-31f;
		case 101:
			return 1.558923E-35f;
		case 99:
			return 2.294131E-19f;
		case 100:
			return 1.213295E+29f;
		case 119:
			return -1.091912E-28f;
		case 133:
			return -1.264382f;
		case 152:
			return -3.515305E-20f;
		case 176:
			return 1.64784E+23f;
		case 177:
			return 5.003018f;
		case 178:
			return -2.562252E-20f;
		case 153:
			return 41.27814f;
		case 154:
			return 1.567787E-33f;
		case 147:
			return 4.415405E-32f;
		case 135:
			return 2.550329E+22f;
		case 136:
			return 2.77422E-16f;
		case 137:
			return 5.798392E+08f;
		case 138:
			return -1.004019E-28f;
		case 139:
			return -2.627055E+13f;
		case 140:
			return -4.514173E+36f;
		case 141:
			return -5.76357E-22f;
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
		case 143:
			return -4.480066E+07f;
		case 144:
			return 3.128354E+36f;
		case 145:
			return 4.82799E-20f;
		case 146:
			return 6.391131E+21f;
		case 47:
			return 0.03729688f;
		case 32:
			return 0.03729688f;
		case 21:
			return 0.03729688f;
		case 115:
			return 0.03729688f;
		case 92:
			return 0.03729688f;
		case 131:
			return 0.03729688f;
		case 20:
			return 0.03729688f;
		case 134:
			return -2.455795E+11f;
		case 179:
			return 2766996f;
		case 155:
			return -1.587301E+29f;
		case 156:
			return -4.606836E+28f;
		case 157:
			return 3.452008E-36f;
		case 158:
			return NaNf;
		case 67:
			return 4.921621E+16f;
		case 159:
			return 99.39199f;
		case 160:
			return -6.702547E-32f;
		case 161:
			return 6.240672E+34f;
		case 162:
			return 6.10996E-29f;
		case 65:
			return 4.325683E+11f;
		case 164:
			return 2.713322E+14f;
		case 165:
			return -14.89222f;
		case 166:
			return 9475.513f;
		case 167:
			return 5.074196E+37f;
		case 64:
			return 2.039205E-07f;
		case 168:
			return -3.945631E+20f;
		case 169:
			return -2.244019E+15f;
		case 170:
			return 1.756121E+18f;
		case 171:
			return 4.81626E+24f;
		case 172:
			return -9.719926E-38f;
		case 173:
			return 6.080284E+09f;
		case 174:
			return -2.116756E+30f;
		case 175:
			return 9.219983E-29f;
		case 66:
			return -2.27383E-36f;
		case 163:
			return -2.288724E+21f;
		case 108:
			return -2.075817E-25f;
		case 110:
			return -1.942438E-14f;
		case 109:
			return -4.915344E+09f;
		case 111:
			return 9.586019E+08f;
		case 112:
			return 9.236639E-23f;
		case 113:
			return -6.715591E-15f;
		case 114:
			return -0.01589598f;
		case 102:
			return -1.566179E-15f;
		case 105:
			return -1.044305E-38f;
		case 106:
			return NaNf;
		case 103:
			return -1.510513E-27f;
		case 104:
			return 3.068801E-32f;
		case 107:
			return -1.991238E-18f;
		case 116:
			return 6.552451f;
		case 130:
			return -1.047896E+19f;
		case 117:
			return 4.402083E-23f;
		case 118:
			return 1.206669E+09f;
		case 3:
			return 3.046649E-19f;
		case 4:
			return 3.120933E-30f;
		case 40:
			return -8.109014E+27f;
		case 76:
			return 0.009586659f;
		case 148:
			return 1852492f;
		case 149:
			return 2.747603E+32f;
		case 150:
			return 1.447315E-27f;
		case 151:
			return 6.372948E+12f;
		default:
			break;
	}
	return 0;
}

void func_177(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_178(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_319(bParam0))
	{
		return false;
	}
	bVar1 = func_183(iParam3, 2);
	bVar2 = func_320(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_320(bParam0, -982726.7f, bVar1);
	if (func_320(bParam0, 0.003804697f, bVar1))
	{
		bParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_321(bParam0, &fVar0) || func_322(bParam0, &fVar0)))
	{
		bParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		bParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_301())
		{
			bParam1 = -2.401104E+18f;
		}
		else
		{
			bParam1 = -982726.7f;
		}
	}
	else if (bVar3)
	{
		bParam1 = -982726.7f;
	}
	else if (func_302(15) && func_320(bParam0, 1.109321E-25f, bVar1))
	{
		bParam1 = 1.109321E-25f;
	}
	if (bParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return bParam1;
}

bool func_179(int* iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<18> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_323(iParam0, bParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return false;
	}
	func_324(Var0);
	return true;
}

int func_180(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(iParam0))
	{
		return 0;
	}
	if (!func_203(bParam1, 0))
	{
		return 0;
	}
	iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(iParam0, iVar0, &Var1))
		{
		}
		else if (Var1 == bParam1)
		{
			return Var1.f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_181(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1144511[iParam0 /*83*/].f_38.f_28;
}

int func_182(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1144511[iParam0 /*83*/].f_38.f_28.f_1;
}

bool func_183(float fParam0, int iParam1)
{
	return (fParam0 && iParam1) != 0;
}

void func_184(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

void func_185()
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	bool bVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	char* sVar38;

	if (Global_1147168.f_339.f_16 == 0 || !UILOG::_UILOG_IS_ENTRY_REGISTERED(7, Global_1147168.f_339.f_16))
	{
		Global_1147168.f_339.f_16 = 0;
		return;
	}
	func_310(Global_1147168.f_339.f_16, Global_1147168.f_339.f_17, &Var2, &iVar0, 1, 0);
	iVar33 = 0;
	while (iVar33 < iVar0)
	{
		if (iVar33 >= 15)
		{
		}
		else
		{
			bVar34 = Var2[iVar33 /*2*/];
			if (func_203(bVar34, 0))
			{
				iVar36 = func_325(bVar34, 0, 0, 0);
				sVar35 = MISC::VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, Var2[iVar33 /*2*/].f_1, MISC::VAR_STRING(0, bVar34));
				bVar37 = func_204(bVar34, Var2[iVar33 /*2*/].f_1);
				if (bVar37)
				{
					iVar1++;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, Global_1147168.f_339.f_16, bVar34, sVar35, bVar37, true, true);
			}
			iVar33++;
		}
	}
	sVar38 = MISC::VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar1, iVar0);
	UILOG::_0x763637F9B838B0A7(7, Global_1147168.f_339.f_16, sVar38);
}

bool func_186(bool bParam0, struct<2> Param1, var uParam3)
{
	int iVar0;

	if (Param1.f_1 == 0)
	{
		return false;
	}
	iVar0 = func_326(Param1.f_1);
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iVar0) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar0))
	{
		return false;
	}
	*bParam0 = iVar0;
	bParam0->f_2 = -9.105385E+35f;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		return false;
	}
	return true;
}

bool func_187(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1142409.f_2020[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_188(vector3 vParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!func_186(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 1.826498E+14f;
	Var0.f_3 = vParam0.z;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1.132726E-11f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	}
	return uVar5;
}

bool func_189(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = iParam0;
	return iParam3 > iVar0;
	return false;
}

float func_190()
{
	return -1.39614E-20f;
}

bool func_191(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (func_327(iVar1) == 4)
			{
			}
			else if (BUILTIN::VDIST(vParam0, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) < Global_1901671.f_601)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_192(vector3 vParam0, bool bParam3)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;

	if (func_328(vParam0))
	{
		return true;
	}
	if (bParam3 >= 0 && bParam3 < 32)
	{
		iVar5 = Global_1144511[bParam3 /*83*/].f_33.f_3;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_328(Global_1141317[iVar0 /*27*/].f_20))
		{
			fVar1 = BUILTIN::VDIST(Global_1141317[iVar0 /*27*/].f_20, vParam0);
			if (fVar1 <= Global_1901671.f_601.f_3)
			{
				return true;
			}
		}
		if (((Global_1141317.f_865[iVar0 /*7*/].f_4 != iVar5 && (Global_1141317.f_865[iVar0 /*7*/].f_1.f_2 > 0 || Global_1141317.f_865[iVar0 /*7*/].f_1.f_2 < -2)) && Global_1141317.f_865[iVar0 /*7*/] != -1) && Global_1141317.f_865[iVar0 /*7*/] != 6)
		{
			if (func_77(Global_1141317.f_865[iVar0 /*7*/].f_1, &vVar2) && !func_328(vVar2))
			{
				fVar1 = BUILTIN::VDIST(vVar2, vParam0);
				if (fVar1 <= Global_1901671.f_601.f_3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_193(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return func_65(Global_1141317[iParam0 /*27*/].f_7, iParam1);
}

bool func_194(var uParam0, int iParam1, bool bParam2, int iParam3, var uParam4)
{
	int iVar0;
	var uVar1;
	int iVar202;
	int iVar203;
	int iVar204;

	iVar0 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(iParam1);
	uVar1 = 50;
	if (*uParam0 < 4)
	{
		*uParam0 = 4;
	}
	else if (*uParam0 > 7)
	{
		*uParam0 = 7;
	}
	if (uParam0->f_2 == -2)
	{
		func_329(iParam1, *uParam0, uParam0->f_1, &uVar1, bParam2);
		uParam0->f_2 = func_330(&uVar1);
	}
	else
	{
		iVar202 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		uParam0->f_1 = func_331(iVar202, 1);
		func_329(iParam1, *uParam0, uParam0->f_1, &uVar1, bParam2);
		uParam0->f_2 = func_330(&uVar1);
	}
	*iParam3 = 0;
	iVar203 = 0;
	iVar204 = GANG::NETWORK_GET_GANG_LEADER(iParam1);
	if (func_332(*uParam0, iVar204, iVar0, bParam2))
	{
		iVar203 = 1;
	}
	else
	{
		*uParam4++;
	}
	return iVar203;
}

int func_195(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		if (iParam1 == 0)
		{
		}
		return 255;
	}
	return Global_1141317[iParam0 /*27*/].f_9;
}

bool func_196(var uParam0, var uParam1)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

char* func_197()
{
	return "net_camp";
}

char* func_198()
{
	return "gfh_campworks";
}

void func_199(int iParam0)
{
	var uVar0;

	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141317[iParam0 /*27*/].f_9) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Global_1141317[iParam0 /*27*/].f_9)) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Global_1141317[iParam0 /*27*/].f_9)))
	{
		Global_1141317[iParam0 /*27*/].f_23.f_1 = uVar0;
		Global_1141317[iParam0 /*27*/].f_23 = uVar0;
		return;
	}
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1141317[iParam0 /*27*/].f_23.f_1))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1141317[iParam0 /*27*/].f_23.f_1);
	}
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1141317[iParam0 /*27*/].f_23))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1141317[iParam0 /*27*/].f_23);
	}
	Global_1141317[iParam0 /*27*/].f_23.f_1 = uVar0;
	Global_1141317[iParam0 /*27*/].f_23 = uVar0;
}

void func_200(var uParam0)
{
	struct<27> Var0;

	Var0.f_9 = 255;
	Var0.f_10 = 7;
	Var0.f_10.f_1 = 255;
	Var0.f_10.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	*uParam0 = { Var0 };
}

int func_201(bool bParam0)
{
	if (func_19() == -1)
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

struct<4> func_202()
{
	struct<4> Var0;

	return Var0;
}

bool func_203(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_204(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_203(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_333(bParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_334(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_335(bParam0))
			{
				return true;
			}
			break;
	}
	return func_325(bParam0, 0, 0, 0) >= iParam1;
}

int func_205(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_336(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

Vector3 func_206(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

bool func_207(int iParam0)
{
	return !func_113(iParam0, 8);
}

int func_208(int iParam0, bool bParam1)
{
	if (!func_74(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141317[iParam0 /*27*/].f_9))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	return GANG::NETWORK_GET_GANG_ID(Global_1141317[iParam0 /*27*/].f_9);
}

bool func_209(int iParam0)
{
	return func_65(Global_1142409.f_2040, iParam0);
}

void func_210(int iParam0)
{
	Global_1142409.f_2045 = iParam0;
}

int func_211(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_337();
	if (func_338(iVar0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar0 /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_339(vParam0, iParam3);
}

int func_212(bool bParam0)
{
	if (bParam0)
	{
		return 98;
	}
	return 97;
}

int func_213(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_328(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_340(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_17088)
	{
		if (func_341(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_341(iVar0) == iParam1 && func_342(iVar0) == iParam0) && iVar2 == func_343(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_38(iVar1, iParam0);
		func_39(iVar1, iParam1);
		func_40(iVar1, iVar2);
		func_344(iVar1, iParam5);
		func_345(iVar1);
		MAP::SET_BLIP_FLASH_TIMER(Global_17088[iVar1], iParam1, func_346(iParam0, 0));
		return iVar1;
	}
	return -1;
}

int func_214(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case joaat("GRIZZLIES_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return 5.623982E-10f;
				}
				return 1.416279E+29f;
			}
			return -1.231133E-19f;
		case joaat("BAYOU_NAWAS_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return 1.752622E+09f;
				}
				return -1.209011E+14f;
			}
			return -4.561911E-20f;
		case joaat("BIG_VALLEY_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return 5.531491E-07f;
				}
				return 2.968196E-26f;
			}
			return -1.705568E+13f;
		case joaat("CHOLLA_SPRINGS_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return -1.247579E+27f;
				}
				return -9.994637E-21f;
			}
			return 2.135307E-27f;
		case joaat("CUMBERLAND_FOREST_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return -3217334f;
				}
				return 93552.74f;
			}
			return 5.43815E+07f;
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return 2.787423E-33f;
				}
				return -3.09056E-13f;
			}
			return 8.455519E-09f;
		case joaat("GREAT_PLAINS_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return -6.118638E-10f;
				}
				return -2.965766E-37f;
			}
			return 4.551335E+18f;
		case joaat("HEARTLAND_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return -4261202f;
				}
				return -6.968989E+27f;
			}
			return -3.225643E+13f;
		case joaat("HENNIGANS_STEAD_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return -1.300645E+26f;
				}
				return -3.671079E-37f;
			}
			return -0.03464094f;
		case joaat("RIO_BRAVO_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return 1.432435E+17f;
				}
				return 6.625716E-12f;
			}
			return -6.52243E+07f;
		case joaat("ROANOKE_RIDGE_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return 9.171867E-16f;
				}
				return 1.017497E+21f;
			}
			return -1.554601E+12f;
		case joaat("SCARLETT_MEADOWS_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return 1.414659E-13f;
				}
				return -4.544517E+36f;
			}
			return 3.125406E-25f;
		case joaat("TALL_TREES_CAMP"):
			if (bParam1)
			{
				if (bParam2)
				{
					return 6.647725E-36f;
				}
				return -4.544517E+36f;
			}
			return 3.125406E-25f;
		default:
			break;
	}
	return 0;
}

bool func_215(int iParam0)
{
	return (func_193(iParam0, 16) && !func_193(iParam0, 32));
}

int func_216(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

struct<2> func_217(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_218(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_113(iParam0, iParam1))
	{
		func_45(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0]), iParam1);
	}
}

void func_219(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (func_113(iParam0, iParam1))
	{
		func_43(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/][iParam0]), iParam1);
	}
}

void func_220(int iParam0)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_347(iParam0, 1);
}

void func_221(int iParam0)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_347(iParam0, 0);
}

void func_222(int iParam0)
{
	struct<14> Var0;

	func_125(8);
	func_223(4);
	Var0.f_8 = iParam0;
	func_283(3, Var0, func_348(0, 8));
}

void func_223(int iParam0)
{
	func_45(&(Global_1147168.f_8), iParam0);
}

bool func_224(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return func_65(Global_1142409.f_1[iParam0 /*63*/].f_61, iParam1);
}

void func_225(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1141317[iParam0 /*27*/].f_1 };
	if (!func_349(vVar0, &(Global_1142409.f_1[iParam0 /*63*/].f_7), &(Global_1142409.f_1[iParam0 /*63*/].f_47)))
	{
	}
	if (!func_350(vVar0, &(Global_1142409.f_1[iParam0 /*63*/].f_10), &(Global_1142409.f_1[iParam0 /*63*/].f_48)))
	{
	}
}

void func_226(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1141317[iParam0 /*27*/].f_1 };
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		if (!func_351(vVar0, iVar3, &(Global_1142409.f_1[iParam0 /*63*/].f_13[iVar3 /*3*/]), &(Global_1142409.f_1[iParam0 /*63*/].f_49[iVar3])))
		{
		}
		iVar3++;
	}
}

void func_227(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1141317[iParam0 /*27*/].f_1 };
	if (!func_352(vVar0, &(Global_1142409.f_1[iParam0 /*63*/].f_35), &(Global_1142409.f_1[iParam0 /*63*/].f_57)))
	{
	}
}

void func_228(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1141317[iParam0 /*27*/].f_1 };
	if (!func_353(vVar0, &(Global_1142409.f_1[iParam0 /*63*/].f_38), &(Global_1142409.f_1[iParam0 /*63*/].f_58)))
	{
	}
}

void func_229(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1141317[iParam0 /*27*/].f_1 };
	if (!func_354(vVar0, &(Global_1142409.f_1[iParam0 /*63*/].f_41), &(Global_1142409.f_1[iParam0 /*63*/].f_59)))
	{
	}
}

void func_230(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { Global_1141317[iParam0 /*27*/].f_1 };
	if (!func_355(vVar0, &(Global_1142409.f_1[iParam0 /*63*/].f_44), &(Global_1142409.f_1[iParam0 /*63*/].f_60)))
	{
	}
}

void func_231(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_65(Global_1142409.f_1[iParam0 /*63*/].f_61, iParam1))
	{
		func_45(&(Global_1142409.f_1[iParam0 /*63*/].f_61), iParam1);
	}
}

void func_232(int iParam0, int iParam1)
{
	if (func_74(iParam0))
	{
		Global_1142409.f_1[iParam0 /*63*/].f_4 = iParam1;
	}
}

bool func_233(int iParam0)
{
	vector3 vVar0;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_197(), iParam0, true, 0))
	{
		return true;
	}
	if (SCRIPTS::DOES_THREAD_EXIST(Global_1142409.f_2055) || SCRIPTS::IS_THREAD_ACTIVE(Global_1142409.f_2055, false))
	{
		return false;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6700) <= 0)
	{
		return false;
	}
	vVar0.f_3 = iParam0;
	vVar0 = { func_356(iParam0) };
	SCRIPTS::REQUEST_SCRIPT(func_197());
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_197()))
	{
		return false;
	}
	Global_1142409.f_2055 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_197(), &vVar0, 4, 6700);
	Global_1142409.f_2056 = iParam0;
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_197());
	return true;
}

bool func_234(int iParam0)
{
	vector3 vVar0;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_198(), iParam0, true, 0))
	{
		return true;
	}
	if (SCRIPTS::DOES_THREAD_EXIST(Global_1142409.f_2057) || SCRIPTS::IS_THREAD_ACTIVE(Global_1142409.f_2057, false))
	{
		return false;
	}
	vVar0.f_3 = iParam0;
	vVar0 = { func_356(iParam0) };
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(3081) <= 0)
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(func_198());
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_198()))
	{
		return false;
	}
	Global_1142409.f_2057 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_198(), &vVar0, 4, 3081);
	Global_1142409.f_2058 = iParam0;
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_198());
	return true;
}

void func_235(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

int func_236(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1141317.f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1141317[iVar0 /*27*/].f_9 == iParam0 && Global_1141317[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_237(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_38.f_3 = iParam0;
}

struct<20> func_238(bool bParam0)
{
	struct<20> Var0;
	struct<4> Var20;
	struct<17> Var24;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var20 = { func_92(-7.437896E-28f, func_91(1), 4.978612f, 1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var20))
	{
		return Var0;
	}
	Var24.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_201(1), &Var20, &Var24, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_357(&Var24, bParam0) };
	Var0.f_18 = Var24.f_15;
	Var0.f_19 = Var24.f_16;
	Var0.f_17 = Var24.f_14;
	return Var0;
}

int func_239()
{
	return Global_1102813.f_3672;
}

void func_240(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_44.f_66, func_358(Param0.f_1, 0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_44.f_67, MISC::VAR_STRING(2, "NM_CAMP_SIZE_VALUE", Param0));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_44.f_68, func_359(Param0));
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar1 = DATABINDING::_DATABINDING_READ_HASH(Global_1940239.f_1556.f_2385.f_50[iVar0 /*27*/]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_50[iVar0 /*27*/].f_1.f_22, iVar1 == Param0.f_1);
		iVar0++;
	}
}

bool func_241(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_360(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_239())
	{
		return func_360(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_360(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_242(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_361() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_42(16))
	{
		return false;
	}
	if (func_56())
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.406766E+36f))
		{
			return false;
		}
	}
	if (!func_362())
	{
		return false;
	}
	if (func_30(16))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_65(Global_1147168.f_8, 1))
	{
		return false;
	}
	if (func_363())
	{
		return false;
	}
	return true;
}

bool func_243()
{
	return func_65(Global_1147168.f_8, 2);
}

bool func_244(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_242(0, 1))
	{
		return false;
	}
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 = { vParam0 };
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_247();
	if (iParam3 == 1)
	{
		func_134(2);
	}
	else
	{
		Global_1147168.f_330.f_6 = 1;
		func_364(2);
	}
	if (!func_76(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_364(8);
		func_18();
	}
	if (!func_122(4) && (func_122(8) || func_122(16)))
	{
		func_134(4);
	}
	else
	{
		func_364(4);
	}
	if (func_65(Global_1147168.f_8, 1))
	{
		func_134(1);
	}
	else
	{
		func_364(1);
	}
	func_63(6);
	return true;
}

bool func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<10> Var4;
	int iVar14;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_365(iVar0) };
			iVar14 = 0;
			while (iVar14 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar14, &Var4) && Var4 != 0) && Var4.f_9 == 1)
				{
					return true;
				}
				iVar14++;
			}
		}
	}
	return false;
}

bool func_246(struct<2> Param0, var uParam2, int iParam3)
{
	if (func_366())
	{
		return false;
	}
	if (func_367(Param0.f_1, Param0))
	{
		return false;
	}
	if (!func_242(iParam3, 1))
	{
		return false;
	}
	if (func_117())
	{
		return false;
	}
	if (func_42(64))
	{
		if (!func_369(func_368(Param0), 1, 8.497754E-37f))
		{
			return false;
		}
	}
	return true;
}

void func_247()
{
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4 = 0;
}

void func_248(vector3 vParam0)
{
	vector3 vVar0;

	Global_17418.f_55.f_4 = vParam0.x;
	Global_17418.f_55.f_4.f_1 = vParam0.y;
	Global_17418.f_55.f_4.f_2 = vParam0.z;
	if (!func_204(-7.437896E-28f, 1))
	{
		return;
	}
	if (vParam0.z != 0 && vParam0.x > 0)
	{
		vVar0 = { func_115() };
		if ((vVar0.z == vParam0.z && vVar0.y == vParam0.y) && vVar0.x == vParam0.x)
		{
			return;
		}
		if (func_370(vParam0, 1) == -1)
		{
		}
	}
}

float func_249()
{
	return -6.889442E-24f;
}

void func_250(vector3 vParam0)
{
	Global_1144511[func_239() /*83*/].f_38.f_4 = { vParam0 };
}

void func_251(int iParam0)
{
	Global_1144511[func_239() /*83*/].f_38.f_11 = iParam0;
}

int func_252(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1144511[iParam0 /*83*/].f_38.f_12.f_10;
}

void func_253(int iParam0, int iParam1)
{
	if (iParam1 > 7)
	{
		return;
	}
	if ((GANG::NETWORK_IS_GANG_ID_VALID(iParam0) && GANG::NETWORK_IS_GANG_ACTIVE(iParam0)) && GANG::NETWORK_GET_GANG_LEADER(iParam0) == PLAYER::PLAYER_ID())
	{
		if (GANG::_NETWORK_GET_GANG_SIZE(iParam0) == iParam1)
		{
			return;
		}
		GANG::_NETWORK_SET_GANG_SIZE(iParam1);
	}
}

var func_254()
{
	return Global_1902565;
}

void func_255()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (Global_1142409.f_2048 < 10)
	{
		Global_1142409.f_2048++;
	}
	else
	{
		Global_1142409.f_2048 = 0;
		iVar0 = PLAYER::PLAYER_ID();
		iVar1 = func_216(iVar0);
		if (iVar1 >= 0 && iVar1 <= 31)
		{
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < Global_1144511[iVar0 /*83*/].f_38)
			{
				if (Global_1141317[iVar1 /*27*/].f_10[iVar2] == iVar0)
				{
					bVar3 = true;
				}
				else
				{
					iVar2++;
				}
			}
			if (bVar3)
			{
				if (iVar2 != Global_1144511[iVar0 /*83*/].f_38.f_7)
				{
					func_371(iVar2, Global_1142409.f_1[iVar1 /*63*/].f_13[iVar2 /*3*/]);
					func_31(16384);
				}
				else if (func_42(8192))
				{
					func_371(iVar2, Global_1142409.f_1[iVar1 /*63*/].f_13[iVar2 /*3*/]);
					func_31(16384);
					func_28(8192);
				}
			}
		}
	}
}

void func_256(int iParam0)
{
	vector3 vVar0;
	bool bVar3;

	if (Global_1142409.f_2027.f_5 == 0)
	{
		return;
	}
	if (!func_42(64))
	{
		if (Global_1142409.f_2027.f_5 != 0)
		{
			func_128(0);
		}
	}
	else if (func_74(iParam0))
	{
		vVar0 = { Global_1141317[iParam0 /*27*/].f_1 };
	}
	else if (Global_1142409.f_2027.f_5 != 0)
	{
		func_128(0);
	}
	switch (Global_1142409.f_2027.f_5)
	{
		case 1:
			bVar3 = func_368(vVar0.x);
			if (!func_369(bVar3, 1, 8.497754E-37f))
			{
				func_127();
				func_128(0);
			}
			else
			{
				func_128(2);
			}
			break;
		case 2:
			bVar3 = func_368(vVar0.x);
			if (!func_372(Global_1142409.f_2027.f_6))
			{
				Global_1142409.f_2027.f_6 = func_373(bVar3, "NET_CAMP_PC", 1, 1, 0, 8.497754E-37f);
				func_128(3);
			}
			break;
		case 3:
			if (!func_372(Global_1142409.f_2027.f_6))
			{
				func_374(iParam0);
				func_128(0);
			}
			break;
	}
}

void func_257(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	int iVar1;

	if (func_241(146, PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar1 = func_254();
	switch (Global_1142409.f_2027.f_7)
	{
		case 0:
			if (!func_42(64))
			{
				func_118(4);
				return;
			}
			if (Global_1141317[iParam0 /*27*/].f_9 == PLAYER::PLAYER_ID() && Global_1142409.f_2027.f_4 != -15)
			{
				if (func_375(iVar1) != func_375(Global_1142409.f_2027.f_4))
				{
					if (func_376(iVar1) >= func_376(Global_1142409.f_2027.f_4))
					{
						func_118(1);
					}
				}
			}
			break;
		case 1:
			bVar0 = func_377(iParam1);
			if (func_369(bVar0, 1, 8.497754E-37f))
			{
				if (!func_372(Global_1142409.f_2027.f_8))
				{
					func_382(&(Global_1142409.f_2027.f_4), func_378(iVar1), func_379(iVar1), func_376(iVar1), func_375(iVar1), func_380(iVar1), func_381(iVar1));
					Global_1142409.f_2027.f_8 = func_373(bVar0, "NET_CAMP_DC", 1, 1, 0, 8.497754E-37f);
					func_118(2);
				}
			}
			else
			{
				func_137("NET_CAMP_DF", 10000, 0, 0, 0, 1);
				func_118(3);
			}
			break;
		case 2:
			if (!func_372(Global_1142409.f_2027.f_8))
			{
				func_118(0);
			}
			break;
		case 3:
			bVar0 = func_377(iParam1);
			if (func_369(bVar0, 1, 8.497754E-37f) && !func_372(Global_1142409.f_2027.f_8))
			{
				func_118(1);
			}
			break;
		case 4:
			if (func_42(64))
			{
				Global_1142409.f_2027.f_4 = iVar1;
				func_118(0);
			}
			break;
	}
}

void func_258(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	int iVar8;
	int iVar9;
	struct<5> Var10;
	struct<10> Var17;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	if (Global_1141317[iParam0 /*27*/].f_9 != PLAYER::PLAYER_ID())
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (Global_1144511[iVar0 /*83*/].f_38.f_28 != Global_1147168.f_339)
	{
		Global_1144511[iVar0 /*83*/].f_38.f_28 = Global_1147168.f_339;
	}
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var1);
	if ((MISC::GET_FRAME_COUNT() % 60) == 0)
	{
		iVar8 = func_383();
		iVar9 = func_384();
		if (iVar8 != 255)
		{
			if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8) || GANG::NETWORK_GET_GANG_ID(iVar8) != GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) || (iVar9 != -1 && (MISC::GET_GAME_TIMER() - iVar9) > 5000))
			{
				func_385(PLAYER::PLAYER_ID(), 1);
			}
		}
	}
	if (Global_1147168.f_339.f_2 != -1 && !func_386(Var1, Global_1147168.f_339.f_2))
	{
		return;
	}
	Var10.f_3 = 2;
	Var10.f_4 = 24;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&Var1, &Var10, &Var1);
	Global_1147168.f_339.f_2 = { Var1 };
	Var17 = { func_387(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, -4.733674E-34f, 0) };
	if (func_388(Var17, &iVar27, &iVar28, 0))
	{
		iVar29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar28);
		iVar30 = func_389(iVar29, iVar27);
		if (iVar30 == func_181(iVar0))
		{
			iVar29 = func_390(0, iVar28, iVar29);
			iVar30 = func_389(iVar29, iVar27);
		}
		func_391(iVar0, iVar30);
		func_392(iVar27);
	}
}

void func_259(int iParam0)
{
	int iVar0;
	struct<7> Var1;

	if (Global_1141317[iParam0 /*27*/].f_9 != PLAYER::PLAYER_ID())
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (Global_1144511[iVar0 /*83*/].f_38.f_28.f_1 != Global_1147168.f_339.f_1)
	{
		Global_1144511[iVar0 /*83*/].f_38.f_28.f_1 = Global_1147168.f_339.f_1;
	}
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var1);
	if (Global_1147168.f_339.f_9 == -1 || !func_386(Var1, Global_1147168.f_339.f_9))
	{
		return;
	}
	Global_1147168.f_339.f_9 = -1;
	Global_1144511[iVar0 /*83*/].f_38.f_28.f_1 = 0.2143147f;
	Global_1147168.f_339.f_1 = 0.2143147f;
}

bool func_260()
{
	return Global_1896762.f_352;
}

char* func_261(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_393(iVar0);
}

char* func_262(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_394(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_263()
{
	return func_204(-2.919324E+23f, 1);
}

void func_264(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901671.f_601.f_9)
	{
		iParam0 = Global_1901671.f_601.f_9;
	}
	if (Global_1144511[Global_1295619 /*83*/].f_74.f_2 != iParam0)
	{
		Global_1144511[Global_1295619 /*83*/].f_74.f_2 = iParam0;
	}
}

void func_265(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901671.f_601.f_10)
	{
		iParam0 = Global_1901671.f_601.f_10;
	}
	if (Global_1144511[Global_1295619 /*83*/].f_74.f_3 != iParam0)
	{
		Global_1144511[Global_1295619 /*83*/].f_74.f_3 = iParam0;
	}
}

int func_266()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (func_204(-2.265613E-15f, 1))
	{
		iVar0 = -2.265613E-15f;
	}
	else if (func_204(5.590594E+14f, 1))
	{
		iVar0 = 5.590594E+14f;
	}
	else if (func_204(3.535815E-06f, 1))
	{
		iVar0 = 3.535815E-06f;
	}
	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		if (GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
		{
			iVar2 = GANG::NETWORK_GET_GANG_LEADER(iVar1);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				iVar3 = iVar2;
				iVar0 = Global_1144511[iVar3 /*83*/].f_38.f_12.f_2;
			}
		}
	}
	return iVar0;
}

void func_267(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1901671.f_601.f_10)
	{
		iParam0 = 0;
	}
	if (Global_1144511[Global_1295619 /*83*/].f_74.f_4 != iParam0)
	{
		Global_1144511[Global_1295619 /*83*/].f_74.f_4 = iParam0;
	}
}

int func_268(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1144511[iVar0 /*83*/].f_74.f_2;
}

int func_269(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1144511[iVar0 /*83*/].f_74.f_3;
}

int func_270(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_FAT"):
			return -8.964615E-36f;
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return -1.368313E-35f;
		case joaat("PROVISION_BUCK_ANTLERS"):
			return -1.368313E-35f;
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return -8.200028E+28f;
		case joaat("PROVISION_ELK_ANTLERS"):
			return -8.200028E+28f;
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return 7.547379E+25f;
		case joaat("PROVISION_MOOSE_ANTLER"):
			return 7.547379E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -5.957865E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -5.957865E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -5.957865E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return -2.544349E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -2.544349E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -2.544349E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 2.735548E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return 2.735548E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 2.735548E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return -1.514158E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return -1.514158E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -1.514158E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return -2.43318E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return -2.43318E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -2.43318E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return -1.979807E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1.979807E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -1.979807E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 6.260363E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return 6.260363E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return 6.260363E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return 2.58263E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 2.58263E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 2.58263E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -1.921098E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return -1.921098E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -1.921098E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1.558373E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 1.558373E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return 1.558373E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -4.196911E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -4.196911E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return -4.196911E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return 6.003454E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 6.003454E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 6.003454E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -7.074241E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -7.074241E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return -7.074241E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return NaNf;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return NaNf;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return NaNf;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return 1.822221E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 1.822221E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 1.822221E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return 10369.4f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 10369.4f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return 10369.4f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return -1.319894E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -1.319894E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return -1.319894E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return -2.682988E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -2.682988E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return -2.682988E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 2.258195E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 2.258195E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 2.258195E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -8751.434f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -8751.434f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return -8751.434f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -4.426206E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -4.426206E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return -4.426206E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 3.343144E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 3.343144E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 3.343144E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -4.217508E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -4.217508E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return -4.217508E+21f;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return -4.648415E-30f;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
			return 0.003555405f;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return -2.903561E+27f;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return -0.0003503272f;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
			return 3.651668E-37f;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
			return 1.877095E+28f;
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return -6.829444E+16f;
		case joaat("PROVISION_FISH_MUSKIE"):
			return 0.004006243f;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
			return -0.0002076071f;
		case joaat("PROVISION_FISH_PERCH"):
			return 2.844331E+19f;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return 1.149057E-17f;
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return 0.005388449f;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return -1.78329E-38f;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return 2.03336E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -1.023319E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -1.023319E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -1.023319E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 5.302107E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 5.302107E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 5.302107E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -2.097627E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -2.097627E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return -2.097627E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -2.160691E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -2.160691E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -2.160691E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -1.419396E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -1.419396E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return -1.419396E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 2.21944E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return 2.21944E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 2.21944E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return -2.057714E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -2.057714E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -2.057714E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -1.518196E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -1.518196E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1.518196E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 6.068627E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return 6.068627E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return 6.068627E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 7.959494E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 7.959494E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 7.959494E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -1.981656E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return -1.981656E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -1.981656E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -4.557902E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -4.557902E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -4.557902E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return 7.677466E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return 7.677466E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 7.677466E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1.630691E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -1.630691E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -1.630691E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -1.658924E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return -1.658924E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -1.658924E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return -1.45862E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -1.45862E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -1.45862E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 1.982745E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 1.982745E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 1.982745E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 6.2198E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 6.2198E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return 6.2198E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 4.619531E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return 4.619531E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 4.619531E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -4.356489E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return -4.356489E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -4.356489E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return 2.414424E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 2.414424E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 2.414424E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -2.309997E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return -2.309997E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -2.309997E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return -1.121962E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -1.121962E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return -1.121962E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -0.02881889f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return -0.02881889f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -0.02881889f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return 1.720751E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 1.720751E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return 1.720751E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 2.701955E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 2.701955E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 2.701955E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 6.148143E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 6.148143E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 6.148143E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -1.490406E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -1.490406E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return -1.490406E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return 2.918754E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 2.918754E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return 2.918754E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -1.372539E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -1.372539E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return -1.372539E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -7.022999E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return -7.022999E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -7.022999E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -1.509555E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -1.509555E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -1.509555E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 9.762601E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 9.762601E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 9.762601E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 4.157188E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 4.157188E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 4.157188E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return 1.203942E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 1.203942E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 1.203942E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 2.835134E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 2.835134E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 2.835134E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return 4.075995E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return 4.075995E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 4.075995E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return 1.69722E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return 1.69722E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return 1.69722E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -1.353994E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -1.353994E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return -1.353994E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return 2.639697E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
			return 2.639697E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return 2.639697E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 1.071753E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return 1.071753E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 1.071753E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -5.925587E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -5.925587E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -5.925587E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 1.70489E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 1.70489E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 1.70489E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -3.595999E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -3.595999E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -3.595999E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return -1.100747E+27f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -1.100747E+27f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -1.100747E+27f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return 1.027098E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return 1.027098E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return 1.027098E-26f;
		case joaat("PROVISION_BADGER_CLAW"):
			return 765920.4f;
		case joaat("PROVISION_BEAR_CLAW"):
			return -1.212519E-24f;
		case joaat("PROVISION_BLACK_BEAR_CLAW"):
			return -1.623716E+11f;
		case joaat("PROVISION_COUGAR_FANG"):
			return -4.063096E-25f;
		case joaat("PROVISION_BLUEJAY_FEATHER"):
			return -3.676324E+31f;
		case joaat("PROVISION_CONDOR_FEATHER"):
			return -1.678128E+27f;
		case joaat("PROVISION_CARDINAL_FEATHER"):
			return 5.318575E-31f;
		case joaat("PROVISION_PARAKEET_FEATHER"):
			return 3.586706E+35f;
		case joaat("PROVISION_CEDARWAXWING_FEATHER"):
			return 2.663073E+11f;
		case joaat("PROVISION_CHICKEN_FEATHER"):
			return -7.31679E+13f;
		case joaat("PROVISION_CORMORANT_FEATHER"):
			return 4.891507E+28f;
		case joaat("PROVISION_WHOOPING_CRANE_FEATHER"):
			return 4.326327E-34f;
		case joaat("PROVISION_CROW_FEATHER"):
			return -2.00086E-11f;
		case joaat("PROVISION_DUCK_FEATHER"):
			return 4.45066E+30f;
		case joaat("PROVISION_EAGLE_FEATHER"):
			return 2.754242E+19f;
		case joaat("PROVISION_EGRET_FEATHER"):
			return 7.007388E-05f;
		case joaat("PROVISION_GOOSE_FEATHER"):
			return 2.707001E+09f;
		case joaat("PROVISION_HAWK_FEATHER"):
			return -4.317683E+23f;
		case joaat("PROVISION_HERON_FEATHER"):
			return -3.240263E+09f;
		case joaat("PROVISION_LOON_FEATHER"):
			return 2.014568E+09f;
		case joaat("PROVISION_ORIOLE_FEATHER"):
			return -2.434338E-24f;
		case joaat("PROVISION_OWL_FEATHER"):
			return -0.07351525f;
		case joaat("PROVISION_PARROT_FEATHER"):
			return 203.4203f;
		case joaat("PROVISION_PELICAN_FEATHER"):
			return 2.788297E-36f;
		case joaat("PROVISION_PHEASANT_FEATHER"):
			return -1.979387E-22f;
		case joaat("PROVISION_PIGEON_FEATHER"):
			return -1.117136E-37f;
		case joaat("PROVISION_QUAIL_FEATHER"):
			return -0.0003277016f;
		case joaat("PROVISION_RAVEN_FEATHER"):
			return -1.199246E-25f;
		case joaat("PROVISION_BOOBY_FEATHER"):
			return -3.03836E+23f;
		case joaat("PROVISION_ROBIN_FEATHER"):
			return -8.225103E+07f;
		case joaat("PROVISION_ROOSTER_FEATHER"):
			return -2.271486E+33f;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 1.450216E+32f;
		case joaat("PROVISION_SEAGULL_FEATHER"):
			return -3.635405E-13f;
		case joaat("PROVISION_SONGBIRD_FEATHER"):
			return 6.28938E-16f;
		case joaat("PROVISION_SPARROW_FEATHER"):
			return 0.01499322f;
		case joaat("PROVISION_TURKEY_FEATHER"):
			return -5943.149f;
		case joaat("PROVISION_VULTURE_FEATHER"):
			return 6.8498E-12f;
		case joaat("PROVISION_WOODPECKER_FEATHER"):
			return 0.0006060972f;
		case joaat("PROVISION_WOLF_HEART"):
			return -1.665665E+12f;
		case joaat("PROVISION_BIGHORN_HORN"):
			return 0.005678486f;
		case joaat("PROVISION_BUFFALO_HORN"):
			return 0.0004059694f;
		case joaat("PROVISION_BULL_HORNS"):
			return 3.633672E-06f;
		case joaat("PROVISION_OXEN_HORN"):
			return 3.929254E+12f;
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 2833330f;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 2.270019E-27f;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return -1.180315E-36f;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 1.825239E-13f;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1.825239E-13f;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 1.825239E-13f;
		case -1475338121:
			return 1.014904E+36f;
		case -1243878166:
			return 1.014904E+36f;
		case -2102079544:
			return 1.014904E+36f;
		case joaat("PROVISION_ARMADILLO_SKIN_PRISTINE"):
			return 9.454974E-34f;
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return 9.454974E-34f;
		case joaat("PROVISION_ARMADILLO_SKIN"):
			return 9.454974E-34f;
		case joaat("PROVISION_BADGER_PELT_PRISTINE"):
			return -1.083137E+36f;
		case joaat("PROVISION_BADGER_PELT_POOR"):
			return -1.083137E+36f;
		case joaat("PROVISION_BADGER_PELT"):
			return -1.083137E+36f;
		case joaat("PROVISION_BEAR_FUR_PRISTINE"):
			return 0.0001234104f;
		case joaat("PROVISION_BEAR_FUR_POOR"):
			return 0.0001234104f;
		case joaat("PROVISION_BEAR_FUR"):
			return 0.0001234104f;
		case joaat("PROVISION_BLACK_BEAR_FUR_PRISTINE"):
			return -1.869287E-19f;
		case joaat("PROVISION_BLACK_BEAR_FUR_POOR"):
			return -1.869287E-19f;
		case joaat("PROVISION_BLACK_BEAR_FUR"):
			return -1.869287E-19f;
		case joaat("PROVISION_BEAVER_FUR"):
			return -1.108274E-18f;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return -1.108274E-18f;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return -1.108274E-18f;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 2.465592E+33f;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 2.465592E+33f;
		case joaat("PROVISION_RAM_HIDE"):
			return 2.465592E+33f;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 3.557977E-23f;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 3.557977E-23f;
		case joaat("PROVISION_BOAR_SKIN"):
			return 3.557977E-23f;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 1.534238f;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 1.534238f;
		case joaat("PROVISION_BUCK_FUR"):
			return 1.534238f;
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -5.392892E-16f;
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return -5.392892E-16f;
		case joaat("PROVISION_BUFFALO_FUR"):
			return -5.392892E-16f;
		case joaat("PROVISION_BULL_HIDE_PRISTINE"):
			return 2.706776E-08f;
		case joaat("PROVISION_BULL_HIDE_POOR"):
			return 2.706776E-08f;
		case joaat("PROVISION_BULL_HIDE"):
			return 2.706776E-08f;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 2.673106E+14f;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 2.673106E+14f;
		case joaat("PROVISION_COUGAR_FUR"):
			return 2.673106E+14f;
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return 1.71562E+09f;
		case joaat("PROVISION_COW_HIDE_POOR"):
			return 1.71562E+09f;
		case joaat("PROVISION_COW_HIDE"):
			return 1.71562E+09f;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 2.010074E-13f;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 2.010074E-13f;
		case joaat("PROVISION_COYOTE_FUR"):
			return 2.010074E-13f;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return -8.849146E-10f;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return -8.849146E-10f;
		case joaat("PROVISION_DEER_HIDE"):
			return -8.849146E-10f;
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return 6.393751E+37f;
		case joaat("PROVISION_ELK_FUR_POOR"):
			return 6.393751E+37f;
		case joaat("PROVISION_ELK_FUR"):
			return 6.393751E+37f;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 3.967567E+29f;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 3.967567E+29f;
		case joaat("PROVISION_FOX_FUR"):
			return 3.967567E+29f;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 1.714561E+22f;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 1.714561E+22f;
		case joaat("PROVISION_GOAT_HAIR"):
			return 1.714561E+22f;
		case joaat("PROVISION_GILA_SKIN_PRISTINE"):
			return 1.209463E+25f;
		case joaat("PROVISION_GILA_SKIN_POOR"):
			return 1.209463E+25f;
		case joaat("PROVISION_GILA_SKIN"):
			return 1.209463E+25f;
		case joaat("PROVISION_IGUANA_SKIN_PRISTINE"):
			return 2.420359E+27f;
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return 2.420359E+27f;
		case joaat("PROVISION_IGUANA_SKIN"):
			return 2.420359E+27f;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 1.366728E-26f;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 1.366728E-26f;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 1.366728E-26f;
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return -3.718776E-29f;
		case joaat("PROVISION_MOOSE_FUR_POOR"):
			return -3.718776E-29f;
		case joaat("PROVISION_MOOSE_FUR"):
			return -3.718776E-29f;
		case joaat("PROVISION_MUSKRAT_FUR_PRISTINE"):
			return -1.40663E-07f;
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -1.40663E-07f;
		case joaat("PROVISION_MUSKRAT_FUR"):
			return -1.40663E-07f;
		case joaat("PROVISION_OXEN_HIDE_PRISTINE"):
			return -5.012106E+08f;
		case joaat("PROVISION_OXEN_HIDE_POOR"):
			return -5.012106E+08f;
		case joaat("PROVISION_OXEN_HIDE"):
			return -5.012106E+08f;
		case joaat("PROVISION_OPOSSUM_FUR_PRISTINE"):
			return -2.679421E+24f;
		case joaat("PROVISION_OPOSSUM_FUR_POOR"):
			return -2.679421E+24f;
		case joaat("PROVISION_OPOSSUM_FUR"):
			return -2.679421E+24f;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return -3.950437E-37f;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return -3.950437E-37f;
		case joaat("PROVISION_PANTHER_FUR"):
			return -3.950437E-37f;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 8.820292E+28f;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 8.820292E+28f;
		case joaat("PROVISION_PIG_SKIN"):
			return 8.820292E+28f;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -90.41954f;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -90.41954f;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return -90.41954f;
		case joaat("PROVISION_RABBIT_PELT_PRISTINE"):
			return 9.782294E-33f;
		case joaat("PROVISION_RABBIT_PELT_POOR"):
			return 9.782294E-33f;
		case joaat("PROVISION_RABBIT_PELT"):
			return 9.782294E-33f;
		case joaat("PROVISION_RACCOON_FUR_PRISTINE"):
			return 2.586945E-31f;
		case joaat("PROVISION_RACCOON_FUR_POOR"):
			return 2.586945E-31f;
		case joaat("PROVISION_RACCOON_FUR"):
			return 2.586945E-31f;
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return -8.185097E+18f;
		case joaat("PROVISION_RAT_FUR_POOR"):
			return -8.185097E+18f;
		case joaat("PROVISION_RAT_FUR"):
			return -8.185097E+18f;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return -6.210808E-30f;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return -6.210808E-30f;
		case joaat("PROVISION_SHEEP_WOOL"):
			return -6.210808E-30f;
		case joaat("PROVISION_SKUNK_FUR_PRISTINE"):
			return 2.030934E+28f;
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 2.030934E+28f;
		case joaat("PROVISION_SKUNK_FUR"):
			return 2.030934E+28f;
		case joaat("PROVISION_SNAKE_SKIN_PRISTINE"):
			return 2.820378E+22f;
		case joaat("PROVISION_SNAKE_SKIN_POOR"):
			return 2.820378E+22f;
		case joaat("PROVISION_SNAKE_SKIN"):
			return 2.820378E+22f;
		case joaat("PROVISION_SQUIRREL_PELT_PRISTINE"):
			return -1.214548E+07f;
		case joaat("PROVISION_SQUIRREL_PELT_POOR"):
			return -1.214548E+07f;
		case joaat("PROVISION_SQUIRREL_PELT"):
			return -1.214548E+07f;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return -6.825549E-31f;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return -6.825549E-31f;
		case joaat("PROVISION_WOLF_FUR"):
			return -6.825549E-31f;
		case joaat("PROVISION_SQUIRREL_TAIL"):
			return -9.139641E+21f;
		case joaat("PROVISION_EAGLE_TALON"):
			return -1.851623f;
		case joaat("PROVISION_ALLIGATOR_TOOTH"):
			return -28.42846f;
		case joaat("PROVISION_BOAR_TUSK"):
			return 1217893f;
		case joaat("PROVISION_BAT_WING"):
			return -4.413682E+17f;
		case joaat("PROVISION_ANIMAL_SCENT_GLAND"):
			return 7.383978E+36f;
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			return -3.755499E-30f;
		case -827518870:
			return -9.786971E+26f;
		case 1367447057:
			return -1.147401E+18f;
		case -2092697195:
			return -1.776579E-29f;
		case -2043601589:
			return 2.261653E+35f;
		case 1758585485:
			return -8.122389E-32f;
		case 1527400190:
			return -2.32885E+13f;
		case 1493601140:
			return 2436054f;
		case -885592109:
			return -0.000707854f;
		case -1282621313:
			return -5.116076E+24f;
		case -70954328:
			return 5.611895E-35f;
		case -1378208045:
			return -5.196847E+14f;
		case 1450608653:
			return -6.10413E+25f;
		case 1543592331:
			return 7.069192E+23f;
		case 1842740532:
			return 0.0002296823f;
		case 2004357248:
			return -2.35703E-37f;
		case -229670230:
			return 2.506524E+13f;
		case 546758456:
			return -4.878261E-32f;
		case 1888419655:
			return 2.065692E-06f;
		case -2040849706:
			return 1.584387E+38f;
		case 2014346813:
			return 7.493217E-19f;
		case -1638839614:
			return 7.208587E-08f;
		case 1705186999:
			return 8.078103E-25f;
		case -1821314478:
			return 2.183145E-14f;
		case -1434083213:
			return -1.85333E+35f;
		case 1785697286:
			return 7.687588E+28f;
		case 1891164848:
			return -9.251071E+15f;
		case -1283104686:
			return -0.002208837f;
		case -1182590809:
			return 7.637123E+18f;
		case 1011908603:
			return 7.642166E+19f;
		case 1202949852:
			return -3.548749E+36f;
		case -1220574585:
			return -9.114262E-28f;
		case 1739856087:
			return 7.327412E-36f;
		case -1932727774:
			return -2.73148E-21f;
		case 258865203:
			return -2.55071E-32f;
		case 1097274212:
			return 1.360305E-30f;
		case 448991078:
			return 64172.85f;
		case -1624242931:
			return -2.237113E-26f;
		case -1924159110:
			return 8.276289E+35f;
		case -1621144167:
			return 2.062755E+27f;
		case -1061253029:
			return 9.344131E+18f;
		case 1181154860:
			return -7.665853E-06f;
		case 1418435161:
			return -2.011853E-18f;
		case 1511236969:
			return 1.869483E-10f;
		case 121494806:
			return 1.485306E-06f;
		case -251416414:
			return -6.158417E+25f;
		case -1787430524:
			return -1.34631E+17f;
		case -260181673:
			return 1.194161E-12f;
		case -1087205695:
			return -5.302291E+13f;
		case -857265622:
			return -244519.2f;
		case -1572330336:
			return 5.892992E-12f;
		case -1249752300:
			return -6.19143E-12f;
		case -940052481:
			return -1.320794E+16f;
		case -308200059:
			return -1.75818E+08f;
		case -1218522879:
			return -4.427098E+16f;
		case 923422806:
			return -1.908815E-08f;
		case 832214437:
			return 2.333881E+27f;
		case 397926876:
			return 2.431961E+38f;
		case 219794592:
			return 1.58105E+10f;
		case -1061362634:
			return 3.720968E+08f;
		case 1728819413:
			return 8.336822E-25f;
		case 1009802015:
			return 2898363f;
		case -420237085:
			return 8.643324E-35f;
		case -1195518864:
			return -1.903248E+32f;
		case -159428614:
			return 3.353755E+35f;
		case 1276143905:
			return -5.316205E-35f;
		case -1262044528:
			return -2.05927E-26f;
		case -963027403:
			return 1.169666E-07f;
		case 739090883:
			return -3.00706E+07f;
		case 1043121665:
			return 1.650815E-26f;
		case -634716689:
			return -3.285082E+23f;
		case 2088901891:
			return 7.593936E-09f;
		case 836208559:
			return 0.004319382f;
		case 1600479946:
			return 2.792942E+08f;
		case -675142890:
			return 747.6562f;
		case -906131571:
			return 2.126119E-07f;
		case -591844128:
			return 1.671649E-13f;
		case -1946740647:
			return 8.731031E-14f;
		case -1548204069:
			return -1.512649E-29f;
		case -907373381:
			return 9.086703E+36f;
		default:
			break;
	}
	return 0;
}

bool func_271(int iParam0)
{
	return iParam0 != 0;
}

bool func_272(bool bParam0, int iParam1)
{
	if (!func_203(bParam0, 0))
	{
		return func_396(func_395(bParam0), iParam1);
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

bool func_273()
{
	return Global_1156096.f_21645[64 /*209*/].f_208;
}

bool func_274(int iParam0)
{
	if (func_397())
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_275(int iParam0)
{
	int iVar0;

	iVar0 = func_268(iParam0);
	if (iVar0 < 2500)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_276(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 2;
	}
	return func_398(Global_1144511[iVar0 /*83*/].f_38.f_28.f_1);
}

int func_277(int iParam0)
{
	if (func_155(iParam0, 64))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_278(int iParam0)
{
	int iVar0;

	iVar0 = func_269(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_279(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1144511[iVar0 /*83*/].f_74.f_4;
}

bool func_280()
{
	vector3 vVar0;
	var uVar3;

	if (func_399(11, func_216(PLAYER::PLAYER_ID()), &vVar0, &uVar3, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			if (func_400(Global_33, vVar0, 1) > 1091567616)
			{
				return false;
			}
		}
	}
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (func_401())
	{
		return false;
	}
	if (func_402())
	{
		return false;
	}
	if (func_155(Global_1295619, 8192) == 0)
	{
		return false;
	}
	return true;
}

bool func_281(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1142409.f_2050 == 0 || (MISC::GET_SYSTEM_TIME() - Global_1142409.f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1142409.f_2050 == 0)
	{
		Global_1142409.f_2050 = MISC::GET_SYSTEM_TIME();
	}
	else if ((MISC::GET_SYSTEM_TIME() - Global_1142409.f_2050) >= 1000)
	{
		Global_1142409.f_2050 = MISC::GET_SYSTEM_TIME();
	}
	else
	{
		return false;
	}
	return true;
}

bool func_282(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	struct<2> Var1;
	struct<13> Var4;
	int iVar17;
	struct<13> Var18;
	int iVar31;

	if (func_203(bParam1, 0))
	{
		if (func_272(bParam1, 1.026869E-32f) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam1, 4))
		{
			func_158(0f);
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		if (bParam3)
		{
			func_403(bParam1, iParam2);
		}
		func_404(bParam1, iParam2);
		return true;
	}
	bVar0 = func_270(bParam1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (!func_405(bParam1, &Var1, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		Var1 = "TRANSACTION_CAMP_GANG";
		Var1.f_1 = "ITEMTYPE_TEXTURES";
	}
	func_406(MISC::VAR_STRING(2, "TRANSACTION_DONATED"), Var1.f_1, MISC::GET_HASH_KEY(Var1), 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	Var4.f_1 = 11;
	if (((func_272(bParam1, 0.9368603f) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam1, 2f)) || func_272(bParam1, -5.258498E-07f)) || func_272(bParam1, 1.026869E-32f))
	{
		if (func_273())
		{
			func_407(&Var4, 4.226306E+12f);
		}
	}
	else if ((INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam1, 2.524355E-29f) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam1, 3.85186E-34f)) || func_272(bParam1, 3.750005E+29f))
	{
		func_407(&Var4, -1.39127E+14f);
	}
	else
	{
		func_407(&Var4, 4.917722E-38f);
	}
	iVar17 = iParam2;
	if (iVar17 > 10)
	{
		Var18 = { Var4 };
		func_407(&Var18, 0.0002407697f);
		while (iVar17 > 10)
		{
			if (!func_408(bVar0, uParam0, &Var18, 0, 255, 0, 0))
			{
				return false;
			}
			iVar17 = (iVar17 - 10);
		}
	}
	iVar31 = 0;
	switch (iVar17)
	{
		case 2:
			iVar31 = 117440.9f;
			break;
		case 3:
			iVar31 = 0.2584051f;
			break;
		case 4:
			iVar31 = 4.730831E+33f;
			break;
		case 5:
			iVar31 = 1.006404E+16f;
			break;
		case 6:
			iVar31 = -1.772731E+13f;
			break;
		case 7:
			iVar31 = -3.737296E-05f;
			break;
		case 8:
			iVar31 = -1.003723E+30f;
			break;
		case 9:
			iVar31 = -9.615781E+23f;
			break;
		case 10:
			iVar31 = 0.0002407697f;
			break;
	}
	if (iVar31 != 0)
	{
		func_407(&Var4, iVar31);
	}
	if (!func_408(bVar0, uParam0, &Var4, 0, 255, 0, 0))
	{
		return false;
	}
	if (bParam3)
	{
		func_403(bParam1, iParam2);
	}
	return true;
}

void func_283(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam15))
	{
		return;
	}
	if (!func_281(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 6, &uParam15);
}

void func_284(var uParam0)
{
	func_409(uParam0, 0);
}

int func_285(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	return func_410(bParam0, iParam1, &uVar0, bParam2, 0);
}

bool func_286()
{
	if (GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
	{
		return true;
	}
	return false;
}

bool func_287()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (func_401())
	{
		return false;
	}
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.281581E-36f))
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
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(2.084373E+09f))
	{
		return false;
	}
	if (func_411())
	{
		return false;
	}
	return true;
}

int func_288(var uParam0)
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
		return func_413(func_412(uParam0->f_2, 4.808429E-35f), func_412(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_414(func_412(uParam0->f_2, 4.808429E-35f), func_412(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_415(func_412(uParam0->f_2, 4.808429E-35f), func_412(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_416(func_412(uParam0->f_2, 4.808429E-35f), func_412(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_417(func_412(uParam0->f_2, 4.808429E-35f), func_412(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_418(func_412(uParam0->f_2, 4.808429E-35f), func_412(uParam0->f_3, 4.808429E-35f), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_419(func_412(uParam0->f_2, 4.808429E-35f), func_412(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

bool func_289(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_290(var uParam0)
{
	return func_289(*uParam0, 2);
}

int func_291(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_292(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_420(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_421(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_421(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

bool func_293(bool bParam0)
{
	if (func_272(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_294(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_203(bParam0, 0))
	{
		return func_422(func_395(bParam0), bParam1);
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

bool func_295(bool bParam0)
{
	if (!func_56() && func_423())
	{
		return true;
	}
	return func_272(bParam0, 1.931199E+13f);
}

bool func_296(bool bParam0, bool bParam1)
{
	return (func_300(bParam0, 0.003804697f) && !func_424(bParam0, 0.003804697f, bParam1));
}

bool func_297(bool bParam0)
{
	bool bVar0;

	bVar0 = func_294(bParam0, 1);
	if (bVar0 != 0 && func_320(bVar0, 0.003804697f, 0))
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.382125E-27f))
		{
			return true;
		}
	}
	return false;
}

bool func_298(bool bParam0, int iParam1)
{
	*iParam1 = func_425(bParam0, 1);
	return *iParam1 != 0;
}

bool func_299(bool bParam0, int iParam1)
{
	*iParam1 = func_426(bParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_300(bool bParam0, int iParam1)
{
	if (!func_203(bParam0, 0))
	{
		return false;
	}
	if (func_293(bParam0) || func_272(bParam0, 2.791187f))
	{
		return func_320(func_294(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

bool func_301()
{
	return Global_1915643.f_22477;
}

bool func_302(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_427(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_303(bool bParam0)
{
	if (!func_203(*bParam0, 0))
	{
		return 0;
	}
	if (!func_428(*bParam0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = -7.975852E-25f;
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = -1.072744E-16f;
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = 1.62503E-31f;
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = -1.6957E+27f;
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = -1.177047E+07f;
			break;
		default:
			return 0;
	}
	return 1;
}

struct<5> func_304(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_91(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_333(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_92(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_429(bParam1) };
			if (iParam2 && func_430(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_431(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_431(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_432(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_433(bParam1) };
			switch (func_434(bParam0))
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
			if (func_435(bParam0, -2.580501E-27f))
			{
				Var0 = { func_92(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_435(bParam0, -4.220332E-15f))
			{
				Var0 = { func_92(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_92(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_435(bParam0, -3.171238E-21f))
			{
				Var0 = { func_92(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_436(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_435(bParam0, -3.171238E-21f))
			{
				Var0 = { func_92(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

bool func_305(bool bParam0, bool bParam1)
{
	bool bVar0;
	struct<5> Var1;

	*bParam1 = 0;
	if (!func_203(bParam0, 0))
	{
		return false;
	}
	if (!func_272(bParam0, 2.791187f))
	{
		if (func_437(bParam0))
		{
			return false;
		}
	}
	if (func_272(bParam0, 5.144831E-36f) || func_272(bParam0, 8.874786E+09f))
	{
		return false;
	}
	if (func_293(bParam0))
	{
		return false;
	}
	bVar0 = func_294(bParam0, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (!func_320(bVar0, -2.401104E+18f, 0))
	{
		return false;
	}
	if (Global_1915643.f_22504.f_2 == 1)
	{
		Var1 = { func_304(bParam0, 0, 0) };
		if (Var1.f_4 == 4.978612f)
		{
			return false;
		}
	}
	*bParam1 = bVar0;
	return true;
}

bool func_306(bool bParam0)
{
	return func_272(bParam0, 4186.055f);
}

bool func_307(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, float fParam7, int iParam8, float fParam9, bool bParam10)
{
	bool bVar0;
	struct<17> Var1;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	var uVar23;
	struct<4> Var28;
	struct<4> Var32;
	struct<4> Var36;
	bool bVar40;
	bool bVar41;
	struct<11> Var42;
	int iVar56;
	int iVar57;

	if (!func_203(bParam1, 0))
	{
		return false;
	}
	if (!func_438(iParam0, 0))
	{
		return false;
	}
	if (iParam8 == 0)
	{
		iParam8 = func_164(bParam1, iParam8, 1, -1, 1);
	}
	bVar0 = false;
	if (func_302(15))
	{
		bVar0 = true;
	}
	func_184(&fParam9, 32);
	func_184(&fParam9, 64);
	func_184(&fParam9, 4);
	func_184(&fParam9, 128);
	if (iParam6 < 1)
	{
		iParam6 = 1;
	}
	if (!func_439(iParam0, bParam1, Param2, -5.45926E-19f, iParam8, iParam6, fParam9, 1))
	{
		return false;
	}
	Var1 = { func_440(bParam1, Param2, 4.978612f, iParam6, 0) };
	Var1.f_13 = iParam8;
	Var1.f_12 = 3787186f;
	*fParam7 = { Var1 };
	if (!func_441(iParam0, 7.184882E+22f))
	{
		return false;
	}
	bVar18 = false;
	bVar19 = false;
	bVar20 = Global_1915643.f_20241.f_49;
	iVar21 = Global_1915643.f_20241.f_50;
	Var42.f_9 = -5.45926E-19f;
	iVar56 = 0;
	while (iVar56 < 16)
	{
		if (!func_203(Global_1051832.f_47[iVar56], 0))
		{
		}
		else if (!func_442(Global_1051832.f_47[iVar56], bVar20, &fVar22, &Var32, &uVar23, 1, iVar21))
		{
		}
		else
		{
			Var28 = { func_92(Global_1051832.f_47[iVar56], Var32, fVar22, 0) };
			if (func_443(Global_1051832.f_47[iVar56]))
			{
				if (!func_431(Global_1051832.f_47[iVar56], &Var32, fVar22, 0, 0))
				{
					if (!Global_1051832.f_47.f_17[iVar56])
					{
					}
					else if (func_444(Global_1051832.f_47[iVar56]))
					{
					}
					else
					{
						bVar41 = iParam8;
						if (func_300(Global_1051832.f_47[iVar56], 0.003804697f))
						{
							bVar41 = 0.003804697f;
						}
						if (bVar0 && bVar41 != 0.003804697f)
						{
							if (!func_445(iParam0, Global_1051832.f_47[iVar56], Var32, fVar22, 1, &Var1, 0, bVar41, fParam9, 1))
							{
								bVar18 = false;
								Jump @824; //curOff = 507
							}
							else
							{
								bVar19 = true;
							}
						}
						else if (!bVar0 || bVar41 == 0.003804697f)
						{
							if (!func_446(iParam0, Global_1051832.f_47[iVar56], Var32, fVar22, !bVar0, &Var1, 0, bVar41, 0, fParam9, 0))
							{
								bVar18 = false;
								Jump @824; //curOff = 580
							}
							else
							{
								bVar19 = true;
							}
						}
						else
						{
							bVar18 = false;
						}
						else
						{
							bVar18 = true;
							Jump @815; //curOff = 601
							if (!bVar0)
							{
								if (!Global_1051832.f_47.f_17[iVar56])
								{
									bVar40 = func_95(Var32, fVar22, 0, -1);
									if (!func_203(bVar40, 0))
									{
									}
									else
									{
										Var36 = { func_92(bVar40, Var36, fVar22, 0) };
										if (!func_447(Var36, Global_1051832.f_47.f_17[iVar56], 0))
										{
											if (!func_436(Var36, &Var42, 1, 0, -1))
											{
											}
											if (Var42.f_10 == Global_1051832.f_47.f_17[iVar56])
											{
												bVar18 = true;
											}
											else
											{
												bVar18 = false;
											}
											else
											{
												Jump @750; //curOff = 744
												bVar18 = true;
												Jump @815; //curOff = 750
												if (!func_436(Var28, &Var42, 1, 0, -1))
												{
												}
												if (Var42.f_10 != Global_1051832.f_47.f_17[iVar56])
												{
													if (!func_447(Var28, 1, 0))
													{
														bVar18 = false;
													}
													else
													{
														Jump @815; //curOff = 809
														bVar18 = true;
														iVar56++;
													}
													if (!bVar18)
													{
														func_448(iParam0);
														return false;
													}
													if (bVar19)
													{
														if (bParam10 && !func_449(iParam0))
														{
															return false;
														}
														else
														{
															iVar57 = WEAPON::_GET_WEAPONTYPE_SLOT(bVar20);
															if (!MISC::IS_BIT_SET(Global_1051832.f_4481[(func_450(iVar57, 1) / 32)], (func_450(iVar57, 1) % 32)))
															{
																func_452(func_451(404.3656f, 3.049929E+30f), 1);
																MISC::SET_BIT(&(Global_1051832.f_4481[(func_450(iVar57, 1) / 32)]), (func_450(iVar57, 1) % 32));
															}
														}
													}
													return true;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_308(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12)
{
	struct<17> Var0;
	struct<18> Var17;

	if (!func_438(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_164(bParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_439(iParam0, bParam1, Param2, fParam6, iParam10, iParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_440(bParam1, Param2, fParam6, iParam7, bParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 3787186f;
	*iParam8 = { Var0 };
	if (func_333(bParam1) == -42.1084f)
	{
		Var17.f_9 = 1;
		Var17.f_11 = -5.45926E-19f;
		Var17 = { Var0 };
		if (!func_453(iParam0, Var17, 4.059549E+37f, fParam9, -1))
		{
			return false;
		}
	}
	else if (!func_454(iParam0, Var0, 4.059549E+37f, fParam9, iParam11))
	{
		return false;
	}
	return true;
}

void func_309(struct<14> Param0, var uParam14, var uParam15, var uParam16)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = Param0.f_8;
	iVar1 = Param0.f_13;
	if (func_455(bVar0, 3.414007E-11f, iVar1, 1, 0) > 0)
	{
		func_456("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else if (INVENTORY::_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(bVar0, 0))
	{
		iVar2 = func_457(bVar0, 0);
		if (!AUDIO::_IS_SCRIPTED_AUDIO_CUSTOM(iVar2, -2.291973E+37f))
		{
			AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		}
		else
		{
			AUDIO::_PLAY_SOUND_FROM_ITEM(iVar2, -2.291973E+37f, 0);
		}
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

bool func_310(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_203(bParam0, 0))
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
		func_458(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_311(bool bParam0)
{
	if (func_434(bParam0) == -1.955052E+34f || func_434(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

bool func_312(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_313(struct<4> Param0)
{
	if (!func_312(&Param0))
	{
		return false;
	}
	if (func_459(&Param0))
	{
		return false;
	}
	return func_461(func_460(Param0));
}

void func_314(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_315(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_462(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_463(iParam0))
	{
		return false;
	}
	if (func_464(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_465(iParam0, 1)) || func_466(32768))
	{
		if (!func_465(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_467())
	{
		return false;
	}
	return true;
}

void func_316(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_317(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_468(func_395(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

float func_318(bool bParam0)
{
	if (!func_311(bParam0))
	{
		return 0;
	}
	if (func_469(bParam0))
	{
		return -4.07217E-32f;
	}
	if (func_272(bParam0, -3.639815E-14f))
	{
		return -6.335257E+35f;
	}
	if (func_272(bParam0, -3.567722E+12f))
	{
		return -5.414914E+13f;
	}
	if (func_272(bParam0, 2.768968E+15f))
	{
		return 5.15176E-06f;
	}
	if (func_272(bParam0, 5.250853E+36f))
	{
		return -1.128444E-20f;
	}
	return 1.335924E-32f;
}

bool func_319(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_320(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_319(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_470(bParam0, bParam1);
	}
	return true;
}

bool func_321(bool bParam0, float fParam1)
{
	*fParam1 = func_471(bParam0, 1);
	return *fParam1 != 0;
}

bool func_322(bool bParam0, float fParam1)
{
	*fParam1 = func_472(bParam0, 1, 0);
	return *fParam1 != 0;
}

bool func_323(int* iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_438(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_178(bParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_473(bParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_17 = bParam1;
	uParam2->f_8 = bParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 3787186f;
	if (!func_474(iParam0, *uParam2, 1.704487E-19f, iParam3))
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

void func_324(struct<18> Param0)
{
	bool bVar0;
	int iVar1;

	bVar0 = Param0.f_17;
	iVar1 = Param0.f_13;
	if (func_475(bVar0, 3.414007E-11f, iVar1, 0, 1) > 0)
	{
		func_456("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

int func_325(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_203(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_333(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_476(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_477(bParam0, 0);
	}
	if (func_317(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_201(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_478(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_201(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_326(int iParam0)
{
	int iVar0;
	var uVar1;

	switch (iParam0)
	{
		case joaat("HENNIGANS_STEAD_CAMP"):
		case joaat("RIO_BRAVO_CAMP"):
		case joaat("ROANOKE_RIDGE_CAMP"):
		case joaat("GREAT_PLAINS_CAMP"):
		case joaat("CUMBERLAND_FOREST_CAMP"):
		case joaat("TALL_TREES_CAMP"):
		case joaat("CHOLLA_SPRINGS_CAMP"):
		case joaat("GRIZZLIES_CAMP"):
		case joaat("GAPTOOTH_RIDGE_CAMP"):
		case joaat("BAYOU_NAWAS_CAMP"):
		case joaat("SCARLETT_MEADOWS_CAMP"):
		case joaat("HEARTLAND_CAMP"):
		case joaat("BIG_VALLEY_CAMP"):
			iVar0 = func_479(iParam0, 1);
			return Global_1147168.f_361[iVar0];
		default:
			break;
	}
	return uVar1;
}

int func_327(int iParam0)
{
	if (iParam0 >= 0)
	{
		return Global_1056554[iParam0 /*491*/];
	}
	return -1;
}

bool func_328(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_329(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	struct<2> Var18[7];
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	vVar0.x = uParam1;
	vVar0.f_1 = uParam2;
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return;
	}
	iVar3 = -999;
	iVar4 = 100;
	iVar5 = 200;
	iVar6 = 100;
	iVar7 = 50;
	fVar8 = 1145569280; /* Float: 800f */
	fVar9 = 1152319488; /* Float: 1400f */
	fVar10 = 1157234688; /* Float: 2000f */
	iVar33 = GANG::_NETWORK_GET_GANG_MEMBERS(iParam0, &Var18);
	iVar34 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	iVar36 = func_480(vVar0);
	iVar37 = 0;
	while (iVar37 <= (iVar36 - 1))
	{
		(uParam3[iVar37 /*4*/])->f_1 = uParam1;
		(uParam3[iVar37 /*4*/])->f_1.f_1 = uParam2;
		(uParam3[iVar37 /*4*/])->f_1.f_2 = func_481(iVar37, vVar0);
		if (func_332((uParam3[iVar37 /*4*/])->f_1, iVar34, iVar33, bParam4))
		{
			(*uParam3)[iVar37 /*4*/] = ((*uParam3)[iVar37 /*4*/] + iVar4);
			if (!func_77((uParam3[iVar37 /*4*/])->f_1, &vVar15))
			{
			}
			else
			{
				iVar38 = 0;
				while (iVar38 <= (iVar33 - 1))
				{
					iVar35 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var18[iVar38 /*2*/]));
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar35))
					{
						vVar12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar35), false, false) };
						fVar11 = BUILTIN::VDIST(vVar12, vVar15);
						if (fVar11 < fVar8)
						{
							(*uParam3)[iVar37 /*4*/] = ((*uParam3)[iVar37 /*4*/] + iVar5);
						}
						else if (fVar11 < fVar9)
						{
							(*uParam3)[iVar37 /*4*/] = ((*uParam3)[iVar37 /*4*/] + iVar6);
						}
						else if (fVar11 < fVar10)
						{
							(*uParam3)[iVar37 /*4*/] = ((*uParam3)[iVar37 /*4*/] + iVar7);
						}
					}
					iVar38++;
				}
				Jump @376; //curOff = 365
				(*uParam3)[iVar37 /*4*/] = iVar3;
			}
			iVar37++;
		}
	}
}

int func_330(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	NETWORK::_0x7E300B5B86AB1D1A(uParam0, *uParam0, 4, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar3 = (*uParam0)[0 /*4*/];
	if (iVar3 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= (*uParam0 - 1))
	{
		if ((*uParam0)[iVar1 /*4*/] == iVar3)
		{
			iVar2 = iVar1;
		}
	else
	{
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 > 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
	}
	else
	{
		iVar1 = 0;
	}
	uVar0 = (uParam0[iVar1 /*4*/])->f_1.f_2;
	return uVar0;
}

int func_331(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return NaNf;
		case 1:
			return 3.068815E+10f;
		case 2:
			return 3.438718E+18f;
		case 3:
			return -1.358141E+31f;
		case 4:
			return -2733.137f;
		case 5:
			return 6.497398E-07f;
		case 6:
			return -1.1942E-17f;
		case 7:
			return 9.93596E+16f;
		case 8:
			return -2.334456E-33f;
		case 9:
			return -1.777127E-29f;
		case 10:
			return -4.821723E-29f;
		case 11:
			return 1.058431E+15f;
		case 12:
			return -7.163212E+12f;
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

bool func_332(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	vector3 vVar0;

	if (vParam0.z == 0)
	{
		return false;
	}
	if (!func_77(vParam0, &vVar0))
	{
		return false;
	}
	if (func_78(vParam0, bParam3, vVar0, bParam4, 1, 0, bParam5))
	{
		return true;
	}
	return false;
}

int func_333(bool bParam0)
{
	vector3 vVar0;

	if (!func_203(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_334(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_203(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_476(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_482("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_483(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_484(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_485(iVar1);
				return true;
			}
			iVar3++;
		}
		func_485(iVar1);
	}
	return false;
}

bool func_335(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_203(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_434(bParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_486(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_487(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_488(bParam0);
	iVar2 = func_487(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

bool func_336(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_201(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_489(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_337()
{
	return Global_1893611.f_2;
}

bool func_338(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_339(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_490(vParam0);
	iVar1 = -1;
	if (Global_1893594[iVar0] > 0)
	{
		iVar2 = (Global_1893594[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1892777[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar4 /*36*/].f_4))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887363[iVar4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_340(struct<2> Param0, var uParam2)
{
	var uVar0;

	uVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		uVar0 = (uVar0 || 2f);
	}
	if (Param0.f_1 > 0f)
	{
		uVar0 = (uVar0 || 0f);
	}
	return uVar0;
}

int func_341(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return Global_38.f_3655[iParam0 /*4*/].f_1;
	}
	return Global_25038[iParam0 /*4*/].f_1;
}

int func_342(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return Global_38.f_3655[iParam0 /*4*/];
	}
	return Global_25038[iParam0 /*4*/];
}

int func_343(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return Global_38.f_3655[iParam0 /*4*/].f_2;
	}
	return Global_25038[iParam0 /*4*/].f_2;
}

void func_344(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_3655[iParam0 /*4*/].f_3 = iParam1;
		return;
	}
	Global_25038[iParam0 /*4*/].f_3 = iParam1;
	return;
}

void func_345(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_491(func_343(iParam0)) };
	Global_17088[iParam0] = MAP::BLIP_ADD_FOR_COORDS(func_492(func_341(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(Global_17088[iParam0], func_493(func_341(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(Global_17088[iParam0], func_341(iParam0), iParam0);
}

int func_346(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return NaNf;
		case 1:
			return 1.049338E+18f;
		case 2:
			return 1.498895E-22f;
		case 3:
			return -1.702218E-25f;
		case 4:
			return 2.047014E+29f;
		case 5:
			return 2.102611E-13f;
		case 6:
			return -1.094444E+23f;
		case 7:
			return -8.246098E-11f;
		case 8:
			return 0.0003337624f;
		case 9:
			return -1.945498E-13f;
		case 10:
			return -8.558729E-19f;
		case 11:
			return 2.354955E-38f;
		case 12:
			return 8.457601E+13f;
		case 13:
			return 3.274443E-19f;
		case 14:
			return 0.0005826025f;
		case 15:
			return 6.104771E-23f;
		case 16:
			return -3.247849E-35f;
		case 17:
			return 6.796195E-24f;
		case 18:
			return -4.880347E-24f;
		case 19:
			return 1.469572E+26f;
		case 20:
			return 6.687569E+34f;
		case 21:
			return 2.750939E-11f;
		case 22:
			return -0.1062356f;
		case 24:
			return -1.784405f;
		case 23:
			return -1.21609f;
		case 25:
			return 3.29758E+38f;
		case 26:
			return 14587.68f;
		case 27:
			return 8.223601E-11f;
		case 28:
			return 3197.742f;
		case 30:
			return -5.451207E+32f;
		case 29:
			return 2.46961E+34f;
		case 31:
			return 8.012324E+07f;
		case 32:
			return -6.24719E-28f;
		case 33:
			return 8.781186E-12f;
		case 34:
			return 2.666268E+20f;
		case 35:
			return 5.365568E-25f;
		case 36:
			return 9.694758f;
		case 37:
			return 3.661959E-22f;
		case 38:
			return -8.077674E-12f;
		case 39:
			return -2.423394E+33f;
		case 40:
			return 5.494265E+13f;
		case 41:
			return 1.934011E-33f;
		case 42:
			return 4.019232E+08f;
		case 43:
			return 2.296171f;
		case 53:
			return 6.549141f;
		case 54:
			return -2.545939E-25f;
		case 44:
			return 341095f;
		case 55:
			return -1.732738E-13f;
		case 45:
			return -6.015189E-35f;
		case 56:
			return -2.592482E+17f;
		case 46:
			return 4.27727E-10f;
		case 57:
			return -1.441672E+16f;
		case 47:
			return -15159.68f;
		case 48:
			return 9.085946E-29f;
		case 49:
			return -1.725231E+22f;
		case 50:
			return -2.348099E+36f;
		case 51:
			return -8.518072E-29f;
		case 58:
			return -3.843981E-31f;
		case 59:
			return -6.084368E+13f;
		case 60:
			return -0.003789695f;
		case 52:
			return 2.81243E-25f;
		case 61:
			return -2.810075E+07f;
		case 62:
			return 2.66865E-24f;
		case 63:
			return -2.399166E+33f;
		case 64:
			return -5.385402E-22f;
		case 65:
			return 2.6504E+31f;
		case 66:
			return 1.120495E+28f;
		case 67:
			return 2.302714E-06f;
		case 69:
			return 2.022597E+27f;
		case 70:
			return 8.50011E+35f;
		case 71:
			return -1.834545E+31f;
		case 72:
			return 2.681125E+26f;
		case 73:
			return NaNf;
		case 74:
			return 1.94863E+28f;
		case 75:
			return -2.233904E-18f;
		case 76:
			return 2.177862E+38f;
		case 77:
			return -1.372755E-12f;
		case 78:
			return 3.486547E-10f;
		case 79:
			return 1.805301E+38f;
		case 80:
			return 1.290267E+23f;
		case 81:
			return joaat("REGION_HRT_VALENTINE");
		case 82:
			return 3.541437E+37f;
		case 83:
			return 1.340204E-32f;
		case 84:
			return 12823.88f;
		case 68:
			return 2.498765E-17f;
		case 85:
			return 2.724825E-19f;
		case 86:
			return -4.018006E-17f;
		case 87:
			return -1.794133E-19f;
		case 88:
			return -1.311699E+07f;
		case 89:
			return -7.308199E-13f;
		case 90:
			return 0.01935584f;
		case 91:
			return -4.311316E-05f;
		case 92:
			return -4.75276E-20f;
		case 93:
			return -2.51251E+22f;
		case 94:
			return -504140.1f;
		case 95:
			return -1.291509E+14f;
		case 97:
			return 2.353091E-37f;
		case 98:
			return 1.686618E+10f;
		case 96:
			return 1.087588E-16f;
		case 99:
			return -4.384771E+36f;
		case 100:
			return -6.742055E+12f;
		case 101:
			return -1.641191E+11f;
		case 102:
			return 1.774577E+09f;
		case 103:
			return -1.986649E+22f;
		case 104:
			return -5.46941E-14f;
		case 105:
			return 1.061583E-32f;
		case 106:
			return -3.406536E-22f;
		case 107:
			return 2.459217E-13f;
		case 108:
			return -5.444849E+37f;
		case 109:
			return -1.291923E-23f;
		case 110:
			return -5.755611E+19f;
		case 111:
			return -2.08496E+12f;
		case 112:
			return -4.807343E-05f;
		case 113:
			return -9.123408E-32f;
		case 115:
			return -1.759319E-08f;
		case 116:
			return -3.056887E+17f;
		case 117:
			return 3.529603E-07f;
		case 118:
			return NaNf;
		case 114:
			return -14.87718f;
		case 119:
			return -1.840224E-13f;
		case 135:
			return 8.661269E-15f;
		case 136:
			return 1.384722E-08f;
		case 137:
			return 1.920854E+23f;
		case 138:
			return -2.45758E-18f;
		case 127:
			return 8.848738E+10f;
		case 128:
			return -2.729886E+12f;
		case 129:
			return 1.278004E+19f;
		case 131:
			return -1.288943E+33f;
		case 130:
			return -1.683166E-13f;
		case 132:
			return -1.461573E+35f;
		case 133:
			return 1.183602E-14f;
		case 134:
			return 7.453607E+28f;
		case 120:
			return -8.878077E+35f;
		case 121:
			return 8.947486E-31f;
		case 122:
			return 2.254247E+37f;
		case 123:
			return -2.125533E-11f;
		case 124:
			return -6.859215E-38f;
		case 125:
			return -6.28234E+18f;
		case 126:
			return 7.715836E+17f;
		case 139:
			return 2.629307E-15f;
		default:
			break;
	}
	if (bParam1)
	{
		return 7.087189E+24f;
	}
	return 0;
}

void func_347(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;

	Var0.f_8 = iParam0;
	if (bParam1)
	{
		iVar14 = 5;
	}
	else
	{
		iVar14 = 6;
	}
	func_283(iVar14, Var0, func_348(0, 8));
}

var func_348(int iParam0, int iParam1)
{
	return func_494(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

bool func_349(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -2.056375E+30f;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -7.694432E-13f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1.979704f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam4, &Var5);
		return true;
	}
	return false;
}

bool func_350(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	int iVar13;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -2.406367E+24f;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var0.f_2 = -7.694432E-13f;
		if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam3, &Var0))
		{
			return false;
		}
		iVar13 = 0;
		while (iVar13 <= 50)
		{
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(*vParam3, iVar13, &vVar10, 17, 3f, 0))
			{
				*fParam4 = func_495(*vParam3, vVar10, 1);
				return true;
			}
			iVar13++;
		}
		Var5 = { Var0 };
		Var5.f_2 = 1.979704f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam4, &Var5);
	}
	return false;
}

bool func_351(vector3 vParam0, int iParam3, Vector3* vParam4, float* fParam5)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -3.761158E-25f;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = iParam3;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -7.694432E-13f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam4, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1.979704f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam5, &Var5);
		return true;
	}
	return false;
}

bool func_352(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 9.512887E-05f;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -7.694432E-13f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1.979704f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam4, &Var5);
		return true;
	}
	return false;
}

bool func_353(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -1.257113E+22f;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -7.694432E-13f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1.979704f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam4, &Var5);
		return true;
	}
	return false;
}

bool func_354(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -2.31854E-20f;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -7.694432E-13f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1.979704f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam4, &Var5);
		return true;
	}
	return false;
}

bool func_355(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_186(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 3.036969f;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -7.694432E-13f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1.979704f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam4, &Var5);
		return true;
	}
	return false;
}

Vector3 func_356(int iParam0)
{
	vector3 vVar0;

	if (!func_74(iParam0))
	{
		return vVar0;
	}
	return Global_1141317[iParam0 /*27*/].f_1;
}

struct<17> func_357(var uParam0, bool bParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_317(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_202() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

char* func_358(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case joaat("GRIZZLIES_CAMP"):
				return "GC_GRIZZLIES_DIST";
			case joaat("BAYOU_NAWAS_CAMP"):
				return "GC_BAYOU_DIST";
			case joaat("BIG_VALLEY_CAMP"):
				return "GC_BIG_VALLEY_DIST";
			case joaat("CUMBERLAND_FOREST_CAMP"):
				return "GC_CUMBERLAND_FOREST_DIST";
			case joaat("GREAT_PLAINS_CAMP"):
				return "GC_GREAT_PLAINS_DIST";
			case joaat("HEARTLAND_CAMP"):
				return "GC_HEARTLANDS_DIST";
			case joaat("ROANOKE_RIDGE_CAMP"):
				return "GC_ROANOKE_RIDGE_DIST";
			case joaat("SCARLETT_MEADOWS_CAMP"):
				return "GC_SCARLETT_MEADOWS_DIST";
			case joaat("TALL_TREES_CAMP"):
				return "GC_TALL_TREES_DIST";
			case joaat("GAPTOOTH_RIDGE_CAMP"):
				return "GC_GAPTOOTH_RIDGE_DIST";
			case joaat("RIO_BRAVO_CAMP"):
				return "GC_RIO_BRAVO_DIST";
			case joaat("CHOLLA_SPRINGS_CAMP"):
				return "GC_CHOLLA_SPRINGS_DIST";
			case joaat("HENNIGANS_STEAD_CAMP"):
				return "GC_HENNIGANS_STEAD_DIST";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("GRIZZLIES_CAMP"):
				return "GRIZZLIES_DIST";
			case joaat("BAYOU_NAWAS_CAMP"):
				return "BAY";
			case joaat("BIG_VALLEY_CAMP"):
				return "BGV";
			case joaat("CUMBERLAND_FOREST_CAMP"):
				return "CML";
			case joaat("GREAT_PLAINS_CAMP"):
				return "GRT";
			case joaat("HEARTLAND_CAMP"):
				return "HRT";
			case joaat("ROANOKE_RIDGE_CAMP"):
				return "ROA";
			case joaat("SCARLETT_MEADOWS_CAMP"):
				return "SCM";
			case joaat("TALL_TREES_CAMP"):
				return "TAL";
			case joaat("GAPTOOTH_RIDGE_CAMP"):
				return "GAP";
			case joaat("RIO_BRAVO_CAMP"):
				return "RIO";
			case joaat("CHOLLA_SPRINGS_CAMP"):
				return "CHO";
			case joaat("HENNIGANS_STEAD_CAMP"):
				return "HEN";
			default:
				break;
		}
	}
	return "NM_GC_TEXT_CAMP_NONE";
}

int func_359(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_377(iParam0);
	if (!func_203(bVar0, 0))
	{
		return 0;
	}
	iVar1 = func_496(bVar0, 0, 8.497754E-37f);
	return iVar1;
}

bool func_360(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_361()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_3;
}

bool func_362()
{
	return !func_42(2);
}

bool func_363()
{
	int iVar0;

	iVar0 = func_216(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1141317[iVar0 /*27*/].f_18.f_1 != 0 && func_65(Global_1141317[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_364(int iParam0)
{
	func_43(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

struct<2> func_365(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_366()
{
	bool bVar0;

	bVar0 = (((Global_1142409.f_2019 == 2 || (Global_1142409.f_2019 >= 6 && Global_1142409.f_2019 <= 11)) || Global_1142409.f_2019 == 12) || (Global_1142409.f_2019 >= 13 && Global_1142409.f_2019 <= 19));
	return bVar0;
}

bool func_367(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	vVar1 = { func_356(func_497(iVar0)) };
	return (vVar1.y == iParam0 && iParam1 == vVar1.x);
}

bool func_368(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -9.070907E-33f;
		case 7:
			return -5.155609E+33f;
		default:
			break;
	}
	return false;
}

bool func_369(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = (func_496(bParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_498(iVar0);
	}
	return bVar1;
}

int func_370(vector3 vParam0, bool bParam3)
{
	int iVar0;
	struct<20> Var1;

	iVar0 = -1;
	Var1 = { func_238(0) };
	Var1.f_18 = vParam0.y;
	Var1.f_19 = vParam0.z;
	Var1.f_17 = vParam0.x;
	iVar0 = func_499(-4.99669E-06f, &Var1, bParam3);
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

void func_371(int iParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_38.f_7 = iParam0;
	Global_1144511[iVar0 /*83*/].f_38.f_8 = { vParam1 };
}

bool func_372(int iParam0)
{
	int iVar0;

	iVar0 = func_420(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

int func_373(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar53;
	struct<17> Var54;

	if (!func_203(bParam0, 0))
	{
		return -1;
	}
	if (func_333(bParam0) != 5.407193E-38f)
	{
		return -1;
	}
	if (func_500())
	{
		bParam3 = true;
	}
	if (iParam5 == -2.401104E+18f || iParam5 == -982726.7f)
	{
		iVar0 = (func_501(bParam0, iParam5, 1, 0, 1, 3.996812E+36f) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_501(bParam0, iParam5, 1, 0, 1, 3.414007E-11f) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_310(bParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_325(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_502(0))
	{
		if (iVar0 > 0)
		{
			func_503(3.996812E+36f, iVar0, -5.149929E+33f, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_503(3.414007E-11f, iVar1, -5.149929E+33f, 0, 0);
		}
		else if (func_504(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_503(Var2[iVar35 /*2*/], iVar34, -5.149929E+33f, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -5.45926E-19f;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -5.149929E+33f;
	iVar53 = func_505(-2.328868E-12f, &Var36, bParam4);
	if (iVar53 == -1)
	{
	}
	else
	{
		Var54.f_7 = -5.149929E+33f;
		Var54.f_16 = -1;
		StringCopy(&(Var54.f_12), sParam1, 32);
		func_168(iVar53, Var54);
	}
	return iVar53;
}

void func_374(int iParam0)
{
	struct<14> Var0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	Var0.f_5 = { Global_1141317[iParam0 /*27*/].f_1 };
	func_283(11, Var0, func_506(GANG::NETWORK_GET_GANG_ID(Global_1141317[iParam0 /*27*/].f_9)));
}

int func_375(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_376(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 3.970603f;
		case 7:
			return -2.762223E-09f;
		default:
			break;
	}
	return 0;
}

int func_378(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_379(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_380(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_381(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_507(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

void func_382(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_508(uParam0, iParam6);
	func_509(uParam0, iParam5);
	func_510(uParam0, iParam4);
	func_511(uParam0, iParam3);
	func_512(uParam0, iParam2);
	func_513(uParam0, iParam1);
}

int func_383()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_28.f_2;
	}
	return 255;
}

int func_384()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_28.f_3;
	}
	return -1;
}

void func_385(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1144511[iVar0 /*83*/].f_38.f_28.f_2) || Global_1144511[iVar0 /*83*/].f_38.f_28.f_2 == iParam0) || bParam1)
		{
			Global_1144511[iVar0 /*83*/].f_38.f_28.f_2 = 255;
			Global_1144511[iVar0 /*83*/].f_38.f_28.f_3 = -1;
		}
	}
}

bool func_386(struct<7> Param0, struct<7> Param7)
{
	if (Param0 > Param7)
	{
		return true;
	}
	else if (Param7 > Param0)
	{
		return false;
	}
	if (Param0.f_1 > Param7.f_1)
	{
		return true;
	}
	else if (Param7.f_1 > Param0.f_1)
	{
		return false;
	}
	if (Param0.f_2 > Param7.f_2)
	{
		return true;
	}
	else if (Param7.f_2 > Param0.f_2)
	{
		return false;
	}
	if (Param0.f_3 > Param7.f_3)
	{
		return true;
	}
	else if (Param7.f_3 > Param0.f_3)
	{
		return false;
	}
	if (Param0.f_4 > Param7.f_4)
	{
		return true;
	}
	else if (Param7.f_4 > Param0.f_4)
	{
		return false;
	}
	if (Param0.f_5 > Param7.f_5)
	{
		return true;
	}
	else if (Param7.f_5 > Param0.f_5)
	{
		return false;
	}
	if (Param0.f_6 > Param7.f_6)
	{
		return true;
	}
	else if (Param7.f_6 > Param0.f_6)
	{
		return false;
	}
	return false;
}

struct<10> func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_388(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_389(int iParam0, int iParam1)
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

int func_390(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_514())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_507(func_514(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_391(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	Global_1144511[iParam0 /*83*/].f_38.f_28 = iParam1;
	Global_1147168.f_339 = iParam1;
}

int func_392(int iParam0)
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

char* func_393(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_241(40, iParam0))
		{
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1102813.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102813.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1295619.f_17[iParam0])
	{
		return sVar0;
	}
	if (func_241(40, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1101558[iParam0 /*38*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1101558[iParam0 /*38*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1295619.f_149[iParam0]);
}

char* func_394(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_395(bool bParam0)
{
	return bParam0;
}

int func_396(bool bParam0, int iParam1)
{
	if (!func_468(bParam0, 2))
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

bool func_397()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

int func_398(bool bParam0)
{
	if (!func_203(bParam0, 0))
	{
		return 2;
	}
	switch (bParam0)
	{
		case 1046181202:
			return 2;
		case 1856073229:
			return 3;
		case -1612693182:
			return 4;
		case 1689071181:
			return 5;
		case -1171462349:
			return 6;
		default:
			break;
	}
	if (func_272(bParam0, -4.733674E-34f))
	{
		return 7;
	}
	return 2;
}

bool func_399(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_74(iParam1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			*uParam2 = { Global_1141317[iParam1 /*27*/].f_20 };
			*uParam3 = 0f;
			break;
		case 9:
			*uParam2 = { Global_1142409.f_1[iParam1 /*63*/].f_41 };
			*uParam3 = Global_1142409.f_1[iParam1 /*63*/].f_59;
			break;
		case 10:
			if (iParam4 < 0 || iParam4 >= 7)
			{
				return false;
			}
			*uParam2 = { Global_1142409.f_1[iParam1 /*63*/].f_13[iParam4 /*3*/] };
			*uParam3 = Global_1142409.f_1[iParam1 /*63*/].f_49[iParam4];
			break;
		case 7:
			*uParam2 = { Global_1142409.f_1[iParam1 /*63*/].f_38 };
			*uParam3 = Global_1142409.f_1[iParam1 /*63*/].f_58;
			break;
		case 13:
			*uParam2 = { Global_1142409.f_1[iParam1 /*63*/].f_35 };
			*uParam3 = Global_1142409.f_1[iParam1 /*63*/].f_57;
			break;
		case 14:
			*uParam2 = { Global_1142409.f_1[iParam1 /*63*/].f_7 };
			*uParam3 = Global_1142409.f_1[iParam1 /*63*/].f_47;
			break;
		case 15:
			*uParam2 = { Global_1142409.f_1[iParam1 /*63*/].f_10 };
			*uParam3 = Global_1142409.f_1[iParam1 /*63*/].f_47;
			break;
		case 11:
			*uParam2 = { Global_1142409.f_1[iParam1 /*63*/].f_44 };
			*uParam3 = Global_1142409.f_1[iParam1 /*63*/].f_60;
			break;
		default:
			return false;
	}
	return true;
}

float func_400(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_515(vVar0, vParam1);
}

bool func_401()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

bool func_402()
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1.201345E-07f) > 0;
}

int func_403(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var15;

	iVar1 = iParam1;
	if (iParam1 == 1)
	{
	}
	if (func_272(bParam0, -6.231785E+11f))
	{
		bVar0 = -4.549368E-30f;
	}
	else
	{
		bVar0 = -2.253136E-14f;
	}
	Var2.f_1 = 11;
	while (iVar1 > 10)
	{
		func_407(&Var2, 0.0002407697f);
		if (!func_516(bVar0, &Var2, 0, 255, 0, 0))
		{
			return 0;
		}
		iVar1 = (iVar1 - 10);
	}
	Var15.f_1 = 11;
	switch (iVar1)
	{
		case 2:
			func_407(&Var15, 117440.9f);
			break;
		case 3:
			func_407(&Var15, 0.2584051f);
			break;
		case 4:
			func_407(&Var15, 4.730831E+33f);
			break;
		case 5:
			func_407(&Var15, 1.006404E+16f);
			break;
		case 6:
			func_407(&Var15, -1.772731E+13f);
			break;
		case 7:
			func_407(&Var15, -3.737296E-05f);
			break;
		case 8:
			func_407(&Var15, -1.003723E+30f);
			break;
		case 9:
			func_407(&Var15, -9.615781E+23f);
			break;
		case 10:
			func_407(&Var15, 0.0002407697f);
			break;
	}
	if (!func_516(bVar0, &Var15, 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_404(bool bParam0, int iParam1)
{
	if (Global_1144511[Global_1295619 /*83*/].f_74.f_8 != 0)
	{
		return 0;
	}
	Global_1144511[Global_1295619 /*83*/].f_74.f_8 = bParam0;
	Global_1144511[Global_1295619 /*83*/].f_74.f_6 = iParam1;
	Global_1144511[Global_1295619 /*83*/].f_74.f_7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	return 1;
}

bool func_405(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_406(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_517(sParam0, sParam1, iParam2);
	return iVar20;
}

void func_407(int iParam0, int iParam1)
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

int func_408(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_518(bParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

void func_409(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_519(uParam0, 1);
	func_520(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_410(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_521(bParam0, bParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_498(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_522(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_523(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_524(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_325(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

bool func_411()
{
	struct<2> Var0;

	Var0 = { func_217(0) };
	if (func_44(Var0))
	{
		if ((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 7)
		{
			return true;
		}
	}
	return false;
}

char* func_412(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_394(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_413(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14, var uParam15, var uParam16)
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

int func_414(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
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

int func_415(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, bool bParam12, bool bParam13)
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

int func_416(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
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

int func_417(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14)
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

int func_418(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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

int func_419(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, bool bParam9, bool bParam10)
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

int func_420(int iParam0)
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

void func_421(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_525(iParam0, iParam1, iParam2, iParam3);
}

bool func_422(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_468(bParam0, 2))
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

bool func_423()
{
	return func_526(func_217(0));
}

bool func_424(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_203(bParam0, 0))
	{
		return func_527(func_395(bParam0), bParam1, bParam2);
	}
	if (func_293(bParam0) || func_272(bParam0, 2.791187f))
	{
		return func_470(func_294(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_19() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return true;
	}
	if (!func_528(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_425(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_529(iVar0, 1, 0);
		if (!func_310(bParam0, bVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_530(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_325(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

bool func_426(bool bParam0, bool bParam1, bool bParam2)
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
		bVar40 = func_529(iVar0, 0, 1);
		if (!func_310(bParam0, bVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_469(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_325(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

bool func_427(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_428(bool bParam0)
{
	return func_272(bParam0, 5.168749E+07f);
}

struct<4> func_429(bool bParam0)
{
	int iVar0;

	iVar0 = func_201(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_92(8.681942E-06f, func_91(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_92(8.681942E-06f, func_91(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_92(8.681942E-06f, func_91(bParam0), -1.942248E+12f, 0);
}

int func_430(bool bParam0, bool bParam1)
{
	if (func_434(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_531();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_431(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_170(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_432(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_532(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_433(bool bParam0)
{
	int iVar0;

	iVar0 = func_201(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_92(3.507197E-29f, func_91(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_92(3.507197E-29f, func_91(bParam0), 12999093, 0);
}

int func_434(bool bParam0)
{
	struct<2> Var0;

	if (!func_203(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_435(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_434(bParam0);
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
			if (func_533(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_436(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_489(&uParam0, iParam4, bParam5, bParam6, iParam7);
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
	if (func_19() == -1)
	{
		if (func_534(bParam0))
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

bool func_438(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_163(iParam0))
		{
			return false;
		}
	}
	if (func_535(&(iParam0->f_6)))
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

int func_439(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	bool bVar0;

	if (func_536(bParam1))
	{
		bVar0 = func_395(bParam1);
		return func_537(iParam0, bVar0, bParam7, bParam8, iParam9);
	}
	if (func_183(iParam9, 32))
	{
		if (!func_538(bParam1, Param2, fParam6))
		{
			return 0;
		}
	}
	if (!func_539(bParam1, bParam7, iParam9))
	{
		return 0;
	}
	if (func_183(iParam9, 4))
	{
		if (!func_540(iParam0, bParam1, Param2, fParam6, bParam7, bParam8, 0, bParam10))
		{
			return 0;
		}
	}
	if (func_183(iParam9, 8))
	{
		return func_541(iParam0, bParam1, bParam7, bParam8);
	}
	return 1;
}

struct<17> func_440(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_92(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_317(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_202() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_441(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 2.249603E-13f, iParam1))
	{
		return false;
	}
	return true;
}

bool func_442(bool bParam0, bool bParam1, float fParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (bParam0 != 0 && bParam1 != 0)
	{
		iVar1 = func_434(bParam1);
		iVar5 = func_542(bParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (func_533(bParam0, iVar1, iVar2))
				{
					*uParam4 = { func_304(bParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_92(bParam1, *uParam4, uParam4->f_4, 0) };
					*fParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -5.45926E-19f;
			Var20.f_9 = -5.45926E-19f;
			iVar34 = func_201(0);
			Var37 = { func_304(bParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_92(bParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_434(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (func_533(bParam0, iVar1, iVar2))
							{
								if (func_543(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*fParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*fParam2 = 0;
	return false;
}

bool func_443(bool bParam0)
{
	int iVar0;

	iVar0 = func_333(bParam0);
	if (iVar0 == -287.6557f || iVar0 == 2.678246E-15f)
	{
		return true;
	}
	return false;
}

bool func_444(bool bParam0)
{
	return func_272(bParam0, 6.170743E+07f);
}

bool func_445(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, bool bParam7, float fParam8, bool bParam9, bool bParam10, float fParam11, bool bParam12)
{
	struct<17> Var0;

	if (!func_438(iParam0, 0))
	{
		return false;
	}
	if (!func_439(iParam0, bParam1, Param2, fParam6, bParam10, bParam7, fParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_440(bParam1, Param2, fParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 3787186f;
	*fParam8 = { Var0 };
	if (!func_544(iParam0, &Var0, 4.059549E+37f, bParam9, fParam11))
	{
		return false;
	}
	return true;
}

bool func_446(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13)
{
	struct<17> Var0;

	if (!func_438(iParam0, 0))
	{
		return false;
	}
	if (bParam10 == 0)
	{
		bParam10 = func_164(bParam1, bParam10, 1, iParam12, 1);
	}
	if (!func_545(iParam0, bParam1, Param2, fParam6, bParam10, iParam12))
	{
		return false;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_8 = bParam1;
	Var0.f_9 = 1;
	Var0.f_13 = bParam10;
	Var0.f_12 = 3787186f;
	Var0.f_4 = { Param2 };
	Var0.f_11 = fParam6;
	Var0.f_10 = bParam7;
	Var0.f_14 = iParam11;
	if (bParam13)
	{
		Var0.f_15 = func_317(bParam1, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_202() };
			Var0.f_11 = 0;
		}
	}
	*iParam8 = { Var0 };
	if (!func_454(iParam0, Var0, 4.059549E+37f, iParam9, iParam12))
	{
		return false;
	}
	return true;
}

bool func_447(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_502(0))
	{
		return func_546(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_436(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_201(bParam5), &Param0, bParam4))
	{
		return false;
	}
	return true;
}

void func_448(int* iParam0)
{
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_421(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

bool func_449(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_421(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_421(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_421(*iParam0, 2, 0, 0);
		return false;
	}
	func_421(*iParam0, 1, 0, 0);
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

int func_450(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2141145462:
			return 54;
		case -2139497371:
			return 79;
		case -2073547330:
			return 51;
		case -2066076661:
			return 101;
		case -2048056274:
			return 28;
		case -2038873145:
			return 57;
		case -1988984077:
			return 45;
		case -1976230089:
			return 71;
		case -1948083328:
			return 116;
		case -1915486054:
			return 39;
		case -1914604474:
			return 61;
		case -1894256235:
			return 11;
		case -1882615108:
			return 83;
		case -1879729569:
			return 7;
		case -1827447245:
			return 25;
		case -1816811601:
			return 78;
		case -1812870325:
			return 107;
		case -1672929718:
			return 110;
		case -1604265010:
			return 24;
		case -1549775456:
			return 23;
		case -1533288167:
			return 86;
		case -1461871483:
			return 75;
		case -1327698122:
			return 58;
		case -1309844859:
			return 81;
		case -1271310569:
			return 74;
		case -1239377811:
			return 76;
		case -1221836150:
			return 95;
		case -1190908814:
			return 47;
		case -1169075737:
			return 50;
		case -1157194180:
			return 37;
		case -1151085798:
			return 38;
		case -1019271530:
			return 17;
		case -944178516:
			return 33;
		case -937655290:
			return 60;
		case -936508922:
			return 109;
		case -907971236:
			return 72;
		case -875426853:
			return 5;
		case -863017340:
			return 99;
		case -835345303:
			return 64;
		case -832908671:
			return 55;
		case -759061492:
			return 26;
		case -692335380:
			return 90;
		case -675093902:
			return 3;
		case -638835602:
			return 2;
		case -596510485:
			return 103;
		case -585098035:
			return 53;
		case -520556863:
			return 92;
		case -378561682:
			return 67;
		case -377574959:
			return 40;
		case -367868014:
			return 22;
		case -353010695:
			return 89;
		case -350556716:
			return 88;
		case -102827824:
			return 41;
		case -102545856:
			return 82;
		case -82191741:
			return 94;
		case 0:
			return 119;
		case 7562841:
			return 112;
		case 41932468:
			return 42;
		case 72801698:
			return 85;
		case 104820669:
			return 84;
		case 175025255:
			return 100;
		case 205166155:
			return 62;
		case 214785091:
			return 49;
		case 229544920:
			return 96;
		case 253727941:
			return 73;
		case 266787856:
			return 98;
		case 358997942:
			return 70;
		case 530671939:
			return 21;
		case 558731558:
			return 65;
		case 693005399:
			return 14;
		case 709801630:
			return 105;
		case 713508039:
			return 93;
		case 744226541:
			return 20;
		case 745945503:
			return 102;
		case 757105507:
			return 6;
		case 787316203:
			return 8;
		case 790678034:
			return 15;
		case 805845691:
			return 48;
		case 911414965:
			return 31;
		case 978801228:
			return 80;
		case 992695664:
			return 59;
		case 1062881804:
			return 32;
		case 1105471824:
			return 27;
		case 1128086492:
			return 115;
		case 1131758526:
			return 69;
		case 1139025222:
			return 114;
		case 1183803081:
			return 18;
		case 1190538002:
			return 106;
		case 1250977037:
			return 113;
		case 1261138928:
			return 10;
		case 1261539922:
			return 46;
		case 1285391378:
			return 13;
		case 1306457250:
			return 68;
		case 1314299724:
			return 118;
		case 1338756401:
			return 19;
		case 1400887301:
			return 34;
		case 1423490462:
			return 97;
		case 1437199060:
			return 43;
		case 1440632655:
			return 36;
		case 1472024063:
			return 52;
		case 1504223919:
			return 91;
		case 1562378696:
			return 111;
		case 1639899405:
			return 77;
		case 1706052688:
			return 12;
		case 1741725206:
			return 29;
		case 1747661667:
			return 1;
		case 1753192824:
			return 108;
		case 1780028424:
			return 63;
		case 1848029806:
			return 4;
		case 1865339861:
			return 35;
		case 1901448492:
			return 30;
		case 1921351553:
			return 66;
		case 1961205920:
			return 56;
		case 1985273028:
			return 44;
		case joaat("SLOT_UNARMED"):
			return 117;
		case 1995043222:
			return 104;
		case 2031132011:
			return 16;
		case 2041846130:
			return 87;
		case 2069893421:
			return 0;
		case 2129028479:
			return 9;
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

struct<2> func_451(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_452(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_453(int* iParam0, var uParam1, float fParam2, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, bool bParam20, int iParam21)
{
	if ((iParam19 != 4.059549E+37f && iParam19 != -3.415538E-09f) && iParam19 != -4.99669E-06f)
	{
		return false;
	}
	if (!func_547(iParam19, &uParam1, iParam21))
	{
		return false;
	}
	if (!func_548(iParam0, iParam19))
	{
		return false;
	}
	if (func_549(*iParam0, iParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_550(iParam0, bParam20);
}

bool func_454(int* iParam0, var uParam1, float fParam2, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((((iParam18 != 4.059549E+37f && iParam18 != -3.415538E-09f) && iParam18 != -4.99669E-06f) && iParam18 != 7.184882E+22f) && iParam18 != -2.328868E-12f)
	{
		return false;
	}
	if (!func_547(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_548(iParam0, iParam18))
	{
		return false;
	}
	if (func_551(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_550(iParam0, bParam19);
}

int func_455(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (func_293(bParam0) || func_272(bParam0, 2.791187f))
	{
		return func_475(func_294(bParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_310(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
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

void func_456(char* sParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(iVar0, sParam0, sParam1, bParam2);
		Global_1958629[Global_1958629.f_25] = iVar0;
		Global_1958629.f_25 = (Global_1958629.f_25 + 1 % 24);
	}
}

int func_457(bool bParam0, int iParam1)
{
	if (!func_203(bParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(bParam0, iParam1))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_SOUND(bParam0, iParam1);
}

void func_458(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_434((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_459(var uParam0)
{
	if (!func_312(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_460(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_312(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

bool func_461(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_552()) > iParam0;
}

bool func_462(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_463(int iParam0)
{
	if (func_465(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_464(int iParam0)
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

bool func_465(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_466(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_467()
{
	if (!func_56())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

bool func_468(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_469(bool bParam0)
{
	return func_434(bParam0) == -1.955052E+34f;
}

bool func_470(bool bParam0, bool bParam1)
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

int func_471(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_529(iVar0, 1, 0);
		if (!func_521(bParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_530(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_325(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
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
	return 0;
}

int func_472(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_529(iVar0, 0, 1);
		if (!func_521(bParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_469(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_325(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == 3.996812E+36f || Var9[iVar41 /*2*/] == 3.414007E-11f)
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == 3.996812E+36f) || (!bParam2 && Var9[iVar41 /*2*/] == 3.414007E-11f))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
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
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_473(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_320(bParam0, bParam1, 0))
	{
		return 0;
	}
	if (func_183(iParam2, 2))
	{
		if (func_470(bParam0, bParam1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 0;
	}
	if (func_183(iParam2, 8))
	{
		return func_553(bParam0, bParam1);
	}
	return 1;
}

bool func_474(int* iParam0, struct<18> Param1, int iParam19, bool bParam20)
{
	if (iParam19 != 1.704487E-19f)
	{
		return false;
	}
	if (!func_554(Param1))
	{
		return false;
	}
	if (!func_548(iParam0, iParam19))
	{
		return false;
	}
	if (func_555(*iParam0, iParam19, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_550(iParam0, bParam20);
}

int func_475(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_521(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
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

bool func_476(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_203(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_333(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_272(bParam0, 9.811189E+11f))
	{
		func_556(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_477(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_557(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_558(&Var0, func_429(0));
	}
	if (!func_559(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_485(iVar18);
	return iVar19;
}

struct<4> func_478(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_304(bParam0, bParam1, 0) };
	return func_92(bParam0, Var0, Var0.f_4, bParam1);
}

int func_479(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HENNIGANS_STEAD_CAMP"):
			return 8;
		case joaat("RIO_BRAVO_CAMP"):
			return 9;
		case joaat("ROANOKE_RIDGE_CAMP"):
			return 10;
		case joaat("GREAT_PLAINS_CAMP"):
			return 6;
		case joaat("CUMBERLAND_FOREST_CAMP"):
			return 4;
		case joaat("TALL_TREES_CAMP"):
			return 12;
		case joaat("CHOLLA_SPRINGS_CAMP"):
			return 3;
		case joaat("GRIZZLIES_CAMP"):
			return 0;
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			return 5;
		case joaat("BAYOU_NAWAS_CAMP"):
			return 1;
		case joaat("SCARLETT_MEADOWS_CAMP"):
			return 11;
		case joaat("HEARTLAND_CAMP"):
			return 7;
		case joaat("BIG_VALLEY_CAMP"):
			return 2;
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

int func_480(vector3 vParam0)
{
	struct<4> Var0;
	int iVar5;

	if (!func_186(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -2.06732E+29f;
	Var0.f_3 = 0;
	iVar5 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
	return iVar5;
}

int func_481(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	if (!func_186(&Var2, vParam1))
	{
		return 0;
	}
	Var2.f_2 = -2.06732E+29f;
	Var2.f_3 = iParam0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = 1.071636E-19f;
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar1, &Var2))
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

bool func_482(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_201(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, iParam0))
	{
		return false;
	}
	return true;
}

bool func_484(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_485(int iParam0)
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

int func_486(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 2.772874E-30f;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 2.355696E+27f;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 3.107044E+08f;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -1.10511E-35f;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 0.01603136f;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -4.314404E+26f;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -2.677414E+07f;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -1.864473E+11f;
		case -28107610:
			return -7.008358E-38f;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 8.452614E+07f;
		case -643819742:
			return -6.237061E+18f;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -0.0003051266f;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -2.292356E+21f;
		case 1687431937:
			return -6.600012E-27f;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 3.05881E+28f;
		default:
			break;
	}
	return 0;
}

int func_487(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_488(bool bParam0)
{
	int iVar0;

	iVar0 = func_434(bParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -1.10511E-35f;
		case 1216664798:
			return 0.01603136f;
		case 829857647:
			return -4.314404E+26f;
		case -636562458:
			return -2.677414E+07f;
		case 252325943:
			return -1.864473E+11f;
		case 1115104855:
			return -7.008358E-38f;
		default:
			break;
	}
	return 0;
}

bool func_489(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_201(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_490(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_560(vParam0, 0f, 0f, 0, 2);
	return func_560(vParam0, Global_1892764[iVar0 /*3*/].f_1, Global_1892764[iVar0 /*3*/].f_2, Global_1892764[iVar0 /*3*/], 4);
}

Vector3 func_491(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if ((iParam0 && 2f) == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if ((iParam0 && 0f) == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 46:
		case 57:
		case 58:
		case 59:
		case 67:
		case 68:
		case 69:
			return -3.228393E+14f;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return -182751.1f;
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 47:
		case 48:
		case 50:
		case 51:
		case 52:
		case 53:
		case 99:
			return 6.398934E-33f;
		case 49:
			return -1.061794E+14f;
		case 45:
			return -6.675766E-31f;
		case 54:
		case 55:
		case 56:
			return -8301.517f;
		case 60:
		case 97:
			return 5.991511E+17f;
		case 61:
		case 62:
		case 63:
		case 64:
			return -1.177039E+21f;
		case 65:
			return -4.542821E+20f;
		case 66:
			return -7.005805E-10f;
		case 71:
			return -1.21845E+25f;
		case 101:
			return -1.21845E+25f;
		case 98:
			return 4.405368E-11f;
		default:
			break;
	}
	return 0;
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2676202f;
		case 1:
			return 1.425643E-17f;
		case 2:
			return -4.232426E-21f;
		case 4:
			return 4.596379E+32f;
		case 5:
			return 3.174712f;
		case 6:
			return 4.081212E-19f;
		case 7:
			return -0.0003478785f;
		case 8:
			return -1.320839E-18f;
		case 9:
			return -1.267825E+37f;
		case 10:
			return -1.747363E+25f;
		case 11:
			return 0.01671035f;
		case 12:
			return 2.025433E-34f;
		case 14:
			return -1161.058f;
		case 13:
			return 9.710699E-24f;
		case 16:
			return -1.270147E-20f;
		case 17:
			return 0.01296469f;
		case 18:
			return -7.208583E+29f;
		case 19:
			return 5.814673E+34f;
		case 20:
			return 5.456665E+14f;
		case 21:
			return 7.220942E-20f;
		case 22:
			return 5.582437E-30f;
		case 23:
			return -4.182747E+33f;
		case 24:
			return -2.859898E-33f;
		case 25:
			return -2.668781E-24f;
		case 26:
			return 50529.92f;
		case 28:
			return -4.188132E+11f;
		case 29:
			return 1.335609E+17f;
		case 33:
			return 3.663698E+28f;
		case 34:
			return 5.289896E+14f;
		case 30:
			return 3.218722E-35f;
		case 31:
			return -6.756673E-37f;
		case 32:
			return -1.24225E-21f;
		case 35:
			return -1.885682E+08f;
		case 36:
			return -2.342029E-12f;
		case 51:
			return -215.8892f;
		case 37:
			return 2.273519E+31f;
		case 38:
			return -3.996842E-14f;
		case 39:
			return 4.268117E-22f;
		case 27:
			return 1.624593E+29f;
		case 40:
			return -1.805599E+31f;
		case 41:
			return 5.514676E+10f;
		case 52:
			return 3.27807E+15f;
		case 53:
			return -1.698204E+36f;
		case 54:
			return 5.066242E+18f;
		case 55:
			return -1.191429E-15f;
		case 56:
			return 5.066242E+18f;
		case 57:
			return 6.668328E-21f;
		case 58:
			return 5.774536E-28f;
		case 59:
			return -7.118256E+23f;
		case 60:
			return -1.638896E-19f;
		case 61:
			return 1.304759E+30f;
		case 62:
			return -2.782993E-33f;
		case 63:
			return -2.207395E+21f;
		case 64:
			return -1.193193E-31f;
		case 65:
			return -2.814595E+23f;
		case 66:
			return 5.066242E+18f;
		case 67:
			return -2.03717E-18f;
		case 68:
			return -7.118256E+23f;
		case 69:
			return -7.118256E+23f;
		case 71:
			return -4.6872E-07f;
		case 42:
			return -3.581338E-19f;
		case 47:
			return 5.582437E-30f;
		case 48:
			return -2.229326E-17f;
		case 43:
			return -2.585228E-21f;
		case 44:
			return 8.982486E+10f;
		case 45:
			return 4.456046E+25f;
		case 46:
			return -7.118256E+23f;
		case 97:
			return 3.240722E-27f;
		case 98:
			return 3.240722E-27f;
		case 99:
			return 2.273838E-05f;
		case 50:
			return 4.19369E-19f;
		case 49:
			return 1.509491E+32f;
		case 101:
			return -4.6872E-07f;
		default:
			break;
	}
	return 0;
}

var func_494(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_561() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1295619.f_5;
	iVar6 = Global_1295619.f_10;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_562());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_562());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_562());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_563(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar2]))
		{
			iVar10 = Global_1295619.f_149[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_564(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1295619.f_83[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_565(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::IS_PED_INCAPACITATED(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::NETWORK_GET_GANG_ID(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_566(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::IS_POINT_IN_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

float func_495(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -1028390912; /* Float: -90f */
	}
	else
	{
		fVar0 = 1119092736; /* Float: 90f */
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 1135869952);
		}
	}
	return fVar0;
}

int func_496(bool bParam0, bool bParam1, int iParam2)
{
	if (!func_203(bParam0, 0))
	{
		return 0;
	}
	return func_501(bParam0, iParam2, 1, bParam1, 1, 0);
}

int func_497(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		return func_216(PLAYER::PLAYER_ID());
	}
	return func_236(GANG::NETWORK_GET_GANG_LEADER(iParam0));
}

bool func_498(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_19() == 0)
	{
		return func_567(iParam0);
	}
	return iParam0 <= func_568();
}

int func_499(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 != -4.99669E-06f)
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_570(func_569(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_571(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 20), iVar0, iParam1);
	}
	return -1;
}

bool func_500()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_501(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -982726.7f) && func_300(bParam0, 8.497754E-37f))
	{
		bParam1 = 8.497754E-37f;
	}
	if (func_293(bParam0) || func_272(bParam0, 2.791187f))
	{
		return func_572(func_294(bParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_310(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_502(bool bParam0)
{
	if (func_19() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_201(bParam0));
}

bool func_503(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_203(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_317(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_573(bParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_304(bParam0, bParam4, 0) };
	Var6 = { func_92(bParam0, Var1, Var1.f_4, bParam4) };
	return func_574(bParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_504(int iParam0)
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

int func_505(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_575(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_570(func_551(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_571(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

var func_506(int iParam0)
{
	struct<2> Var0[7];
	var uVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(iParam0, &Var0);
	if (iVar16 == 0)
	{
		return uVar15;
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 <= (iVar16 - 1))
	{
		iVar18 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar17 /*2*/]));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar18))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar15, iVar18);
		}
		iVar17++;
	}
	return uVar15;
}

int func_507(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_508(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && 2.658456E+36f));
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 = (*uParam0 || 0f);
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - (*uParam0 && 0f));
	}
}

void func_509(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && 1.128475E-36f));
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_510(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_380(*uParam0);
	iVar1 = func_381(*uParam0);
	if (iParam1 < 1 || iParam1 > func_576(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_511(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_512(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_513(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_514()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

float func_515(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_516(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	return func_518(bParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

void func_517(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

int func_518(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_407(iParam2, -3.005759E+25f);
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
	func_577(uParam1, bParam0, Var3);
	return 1;
}

void func_519(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_520(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_521(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_319(bParam0))
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
		func_578(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_522(int iParam0)
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

int func_523(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_272(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_524(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_203(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_91(0) };
	Var0.f_4 = func_579(iParam1);
	Var5 = { func_92(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_201(0), &Var5, false);
	return iVar9;
}

void func_525(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_580(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_526(struct<2> Param0)
{
	return func_581(Param0, 5, 8);
}

int func_527(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_468(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_19() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_582(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_528(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_203(bParam0, 0))
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

int func_529(int iParam0, bool bParam1, bool bParam2)
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

bool func_530(bool bParam0)
{
	return func_434(bParam0) == 4.029065E+31f;
}

int func_531()
{
	if (func_583(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_532(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_201(0);
	*iParam1 = { func_92(bParam0, func_429(0), fParam3, 0) };
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

bool func_533(bool bParam0, int iParam1, int iParam2)
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

bool func_534(bool bParam0)
{
	return func_333(bParam0) == -3.265313E+23f;
}

bool func_535(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_536(bool bParam0)
{
	bool bVar0;

	bVar0 = func_395(bParam0);
	if (func_468(bVar0, 2))
	{
		return true;
	}
	return false;
}

int func_537(int* iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar4;
	struct<5> Var5[16];
	bool bVar86;
	struct<4> Var87;
	float fVar91;

	if (!func_468(bParam1, 2))
	{
		return 0;
	}
	uVar2 = 1;
	func_584(bParam1, &uVar2, &uVar1, &Var5, &iVar0);
	if (func_183(iParam4, 8) && !func_585(bParam1, bParam2, bParam3))
	{
		return 0;
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (Var5[iVar4 /*5*/].f_1 == -5.45926E-19f)
		{
			bVar86 = Var5[iVar4 /*5*/];
			if (func_183(iParam4, 4))
			{
				if (!func_540(iParam0, bVar86, Var87, fVar91, bParam2, (bParam3 * Var5[iVar4 /*5*/].f_4), 1, 1))
				{
					return 0;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

bool func_538(bool bParam0, struct<4> Param1, int iParam5)
{
	struct<10> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_436(Param1, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_533(bParam0, func_434(Var0.f_4), iParam5))
	{
		return false;
	}
	return true;
}

bool func_539(bool bParam0, bool bParam1, int iParam2)
{
	if (func_183(iParam2, 1))
	{
		if (!func_437(bParam0))
		{
			return false;
		}
	}
	if (func_183(iParam2, 2))
	{
		if (func_424(bParam0, bParam1, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_540(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	iVar5 = func_170(bParam1, Param2, fParam6, 1, !bParam10, 0);
	iVar6 = func_586(bParam1, &Var0, !bParam10, 1);
	if (bParam9)
	{
		iVar7 = 1;
	}
	else if (func_587(bParam1, bParam7, &iVar7, 0))
	{
	}
	iVar8 = (func_588(iParam0, bParam1) * iVar7);
	if (iVar8 > 0)
	{
	}
	if (iVar6 >= 0)
	{
		iVar9 = (iVar6 - (iVar5 + iVar8));
		iVar10 = (bParam8 * iVar7);
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

int func_541(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_589(bParam1, 1) && !func_590(bParam1, 1))
	{
		if (Global_1915643.f_20644)
		{
			func_591(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -2.401104E+18f)
	{
		iVar0 = func_501(bParam1, -2.401104E+18f, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_522((iVar1 + func_592(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_591(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -982726.7f)
	{
		iVar2 = func_501(bParam1, -982726.7f, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_498((iVar3 + func_592(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_591("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 0.003804697f)
	{
		return 1;
	}
	if (func_468(func_395(bParam1), 2))
	{
		if (!func_593(func_395(bParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_203(bParam1, 0))
	{
		if (!func_594(bParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_542(bool bParam0)
{
	int iVar0;

	if (!func_203(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_434(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_543(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_336(&uParam0, iParam4, iParam5, bParam6, iParam7);
}

bool func_544(int* iParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_310(iParam1->f_8, iParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_595(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 2:
			return func_596(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 3:
			return func_597(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 4:
			return func_598(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 5:
			return func_599(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 6:
			return func_600(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 7:
			return func_601(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 8:
			return func_602(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 9:
			return func_603(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 10:
			return func_604(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 11:
			return func_605(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 12:
			return func_606(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 13:
			return func_607(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 14:
			return func_608(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 15:
			return func_609(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		default:
			break;
	}
	return false;
}

bool func_545(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, bool bParam7, float fParam8)
{
	if (!func_439(iParam0, bParam1, Param2, fParam6, bParam7, 1, fParam8, 1))
	{
		return false;
	}
	if (func_183(fParam8, 4) && func_431(bParam1, &Param2, fParam6, 1, 0))
	{
		return false;
	}
	return true;
}

int func_546(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<29> Var16;
	struct<26> Var45;
	struct<18> Var71;
	struct<17> Var89;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -5.45926E-19f;
	if (!func_436(*iParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == bParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_333(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_610(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_611(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_612(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_613(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_614(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_615(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_357(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_505(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_547(int iParam0, int iParam1, int iParam2)
{
	if (iParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_203(iParam1->f_8, 0) && !func_468(func_395(iParam1->f_8), 2))
	{
		return false;
	}
	if (func_183(iParam2, 128))
	{
		if (!func_468(func_395(iParam1->f_8), 2))
		{
			if (func_434(iParam1->f_8) == 0)
			{
				return false;
			}
		}
	}
	if (func_183(iParam2, 16))
	{
		if (!func_575(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_548(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_441(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_449(iParam0))
		{
			return false;
		}
		if (!func_441(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_549(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_550(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_449(iParam0);
	}
	return true;
}

bool func_551(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_552()
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, 4.380664E-34f))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-6.484858E+21f, 4.380664E-34f, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

int func_553(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam1 == -2.401104E+18f)
	{
		iVar0 = func_572(bParam0, -2.401104E+18f, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_522(iVar0))
		{
			if (Global_1915643.f_20644)
			{
				func_591(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_616(iVar0)));
			}
			return 0;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		iVar1 = func_572(bParam0, -982726.7f, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_498(iVar1))
		{
			if (Global_1915643.f_20644)
			{
				func_591("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return 1;
	}
	if (!func_410(bParam0, bParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_554(struct<18> Param0)
{
	if (!func_319(Param0.f_17))
	{
		return false;
	}
	return true;
}

bool func_555(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

void func_556(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_557(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_558(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_559(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_201(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_560(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_561()
{
	return Global_1051645.f_12;
}

char* func_562()
{
	return "unnamed";
}

int func_563(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_564(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_241(36, iParam0);
}

int func_565(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1295619.f_17[iParam0])
	{
		return Global_1101558[iParam0 /*38*/].f_1;
	}
	return 26;
}

bool func_566(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_617(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_618(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_567(int iParam0)
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

int func_568()
{
	if (func_19() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_569(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 20, iParam2, 0);
}

int func_570(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_421(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_421(iParam1, 2, 0, 0);
	return -1;
}

int func_571(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_421(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_572(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_521(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_573(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_619(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_317(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_502(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_620(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_621(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_505(7.184882E+22f, &Var65, 1);
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
			func_168(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_201(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_574(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_619(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_436(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_502(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_19() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_505(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_168(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_201(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_575(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_622(iParam1->f_8, iParam0, iVar0, 2048) || func_622(iParam1->f_8, iParam0, iVar0, 32768)) || func_622(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_622(iParam1->f_8, iParam0, iVar0, 4) || func_622(iParam1->f_8, iParam0, iVar0, 256)) || func_622(iParam1->f_8, iParam0, iVar0, 65536)) || func_622(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_622(iParam1->f_8, iParam0, iVar0, 1) || func_622(iParam1->f_8, iParam0, iVar0, 8)) || func_622(iParam1->f_8, iParam0, iVar0, 65536)) || func_622(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_622(iParam1->f_8, iParam0, iVar0, 1) || func_622(iParam1->f_8, iParam0, iVar0, 16)) || func_622(iParam1->f_8, iParam0, iVar0, 2)) || func_622(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_622(iParam1->f_8, iParam0, iVar0, 8) || func_622(iParam1->f_8, iParam0, iVar0, 4096)) || func_622(iParam1->f_8, iParam0, iVar0, 256)) || func_622(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

int func_576(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_577(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_535(uParam0))
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

void func_578(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_434((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

float func_579(int iParam0)
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

void func_580(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_623(&(uParam0->f_4));
}

bool func_581(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_44(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_624(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_582(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_468(bParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_625(bParam0, bParam1, &Var0))
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

int func_583(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_626(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_201(bParam1), iParam0, bParam3);
}

int func_584(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	struct<5> Var0;
	bool bVar5;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!func_468(bParam0, 2))
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
				if (func_203(bVar5, 0))
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

bool func_585(bool bParam0, bool bParam1, bool bParam2)
{
	struct<37> Var0;
	var uVar47;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	func_625(bParam0, bParam1, &Var0);
	if (bParam1 == -2.401104E+18f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_522((Var0.f_3 * bParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_591(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_616((Var0.f_3 * bParam2))));
			}
			return false;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_498((Var0.f_3 * bParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_591("SHOP_H_TOO_POOR");
			}
			return false;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return true;
	}
	if (!func_593(bParam0, bParam2, bParam1, &uVar47, 1))
	{
		return false;
	}
	return true;
}

int func_586(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_203(bParam0, 0))
	{
		if (func_468(func_395(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_333(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_317(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_201(bParam3), bParam0);
}

bool func_587(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_203(bParam0, 0) && !func_468(func_395(bParam0), 2))
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

int func_588(int* iParam0, bool bParam1)
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

bool func_589(bool bParam0, bool bParam1)
{
	if (!func_272(bParam0, 5.908991E-05f))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_272(bParam0, -0.4876374f))
		{
			return func_294(bParam0, 1) != 0;
		}
		if ((func_424(bParam0, -982726.7f, 0) || func_424(bParam0, 2.273041E-17f, 0)) || func_424(bParam0, -2.401104E+18f, 0))
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

bool func_590(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;

	bVar0 = func_627(bParam0, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (func_470(bVar0, -8.816258E-39f))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_410(bVar0, -8.816258E-39f, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_591(char* sParam0)
{
	Global_1915643.f_22470 = func_137(sParam0, 10000, 0, 0, 0, 1);
}

int func_592(int* iParam0, bool bParam1)
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
				iVar0 = (iVar0 + (func_501(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_593(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_628(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_502(0)) && !func_500());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 3.078375E+12f)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && func_498(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && func_522(iVar32))
			{
			}
			else
			{
				iVar33 = func_325(Var0[iVar34 /*2*/], 0, !bVar35, 0);
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

bool func_594(bool bParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
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

	if (func_293(bParam0) || func_272(bParam0, 2.791187f))
	{
		return func_410(func_294(bParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_310(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_502(0)) && !func_500());
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
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && (bParam7 || func_498(iVar32)))
			{
				Jump @499; //curOff = 215
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && (bParam7 || func_522(iVar32)))
			{
			}
			else
			{
				iVar36 = func_523(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_524(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_325(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_629(Var0[iVar34 /*2*/]) || func_630(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_631(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_632(Var0[iVar34 /*2*/], iVar36);
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
							if (bParam5 && ((iVar33 + func_633(7, Var0[iVar34 /*2*/])) + func_634(Var0[iVar34 /*2*/])) >= iVar32)
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

bool func_595(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_596(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_597(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_598(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_599(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_600(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_601(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_602(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_603(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_604(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_605(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_606(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_607(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_608(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_609(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_635(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

struct<29> func_610(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<29> Var0;
	struct<29> Var29;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var29.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_201(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_357(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_611(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_575(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_570(func_636(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_571(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

struct<26> func_612(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<26> Var0;
	struct<24> Var26;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var26.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_201(bParam4), &uParam0, &Var26, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_357(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_613(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_570(func_637(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_571(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

struct<18> func_614(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var18.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_201(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_357(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_615(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_575(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_570(func_549(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_571(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	return -1;
}

int func_616(int iParam0)
{
	return (iParam0 / 100);
}

bool func_617(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_618(int iParam0)
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
	if (!Global_1295619.f_17[iVar0])
	{
		func_638(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_639(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_619(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_620(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_317(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_640(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_621(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_92(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_622(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_65(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_623(var uParam0)
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

int func_624(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_641(Param0);
	}
	return -1;
}

bool func_625(bool bParam0, bool bParam1, var uParam2)
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

bool func_626(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_627(bool bParam0, bool bParam1)
{
	if (!func_589(bParam0, bParam1))
	{
		return false;
	}
	if (bParam0 == 5.725531E+31f)
	{
		return func_294(1.90694E+21f, 1);
	}
	else if (bParam0 == 3.260984E-38f)
	{
		return func_294(0.0002301198f, 1);
	}
	else if (bParam0 == 1.541746E-27f)
	{
		return func_294(-1.766809E-31f, 1);
	}
	else if (bParam0 == -1.84846E-25f)
	{
		return func_294(-3.589852E-30f, 1);
	}
	else if (bParam0 == 1.806564E-25f)
	{
		return func_294(-6.181976E+29f, 1);
	}
	else if (bParam0 == -6.888817E-09f)
	{
		return func_294(-7.708751E+16f, 1);
	}
	return func_294(bParam0, 1);
}

bool func_628(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_468(bParam0, 2))
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
		func_642(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_629(bool bParam0)
{
	if (!func_203(bParam0, 0))
	{
		return false;
	}
	if (func_272(bParam0, -1.051639E+07f))
	{
		return true;
	}
	return func_630(bParam0);
}

bool func_630(bool bParam0)
{
	if (!func_203(bParam0, 0))
	{
		return false;
	}
	if (func_272(bParam0, -5.092244E+08f))
	{
		return true;
	}
	return false;
}

int func_631(int iParam0, bool bParam1, int iParam2)
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

	iParam0 = func_643(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_203(bParam1, 0))
	{
		return 0;
	}
	if (!func_644(iParam0))
	{
		return 0;
	}
	iVar0 = func_645(iParam0);
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
		if (!func_646(iVar28))
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

int func_632(bool bParam0, int iParam1)
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

	if (!func_203(bParam0, 0))
	{
		return 0;
	}
	if (!func_629(bParam0) && !func_630(bParam0))
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
	iVar13 = func_647(bParam0, 5.339713E+22f);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_387(-5.45926E-19f, -5.45926E-19f, 0, 1.659074E-30f, 0, 0, -1, iVar13, 0) };
	if (func_388(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			bVar14 = func_389(iVar15, iVar1);
			if (func_203(bVar14, 0) && bParam0 != bVar14)
			{
				iVar16 = func_648(bVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_524(bVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_650(iVar16, func_649(bVar14), bParam0)));
					}
				}
			}
			iVar15++;
		}
		func_392(iVar1);
	}
	return iVar0;
}

int func_633(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_643(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_203(bParam1, 0))
	{
		return 0;
	}
	if (!func_644(iParam0))
	{
		return 0;
	}
	iVar0 = func_645(iParam0);
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

int func_634(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_203(bParam0, 0))
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

bool func_635(int* iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, float fParam7)
{
	int iVar0;

	if (*iParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_651((*uParam3)[iVar0 /*2*/], ((uParam3[iVar0 /*2*/])->f_1 * iParam1->f_9), iParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_652(iParam0, iParam1, iParam5, iParam2, bParam6, fParam7);
}

bool func_636(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

bool func_637(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

void func_638(int iParam0)
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
	func_639(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_639(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_640(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_459(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_202() };
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

int func_641(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_653(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_642(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_434((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_643(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

bool func_644(int iParam0)
{
	iParam0 = func_643(iParam0);
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

int func_645(int iParam0)
{
	iParam0 = func_643(iParam0);
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

bool func_646(int iParam0)
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

int func_647(bool bParam0, int iParam1)
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

int func_648(bool bParam0)
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

int func_649(bool bParam0)
{
	if (func_272(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_272(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_272(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

int func_650(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_203(uVar0[iVar17], 0) && bParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_651(bool bParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7[10];
	int iVar68;
	int iVar69;

	*uParam2 = bParam0;
	if (func_427(0))
	{
		iVar5 = func_523(func_654(), bParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_91(1) };
			Var0.f_4 = func_579(iVar5);
			uParam2->f_1[0 /*4*/] = { func_92(bParam0, Var0, Var0.f_4, 1) };
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[0 /*4*/])))
			{
				return true;
			}
		}
	}
	iVar6 = func_317(bParam0, -3.294982E+22f);
	if (iVar6 != 0)
	{
		if (!func_620(&Var7, &iVar68, bParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			uParam2->f_1[iVar69 /*4*/] = { func_92(bParam0, Var7[iVar69 /*6*/], Var7[iVar69 /*6*/].f_4, 1) };
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[iVar69 /*4*/])))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_304(bParam0, 1, 0) };
	uParam2->f_1[0 /*4*/] = { func_92(bParam0, Var0, Var0.f_4, 1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[0 /*4*/])))
	{
		return false;
	}
	return true;
}

bool func_652(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, float fParam5)
{
	if ((iParam3 != 4.059549E+37f && iParam3 != -3.415538E-09f) && iParam3 != 7.184882E+22f)
	{
		return false;
	}
	if (!func_547(iParam3, iParam1, fParam5))
	{
		return false;
	}
	if (!func_548(iParam0, iParam3))
	{
		return false;
	}
	if (func_655(*iParam0, iParam3, iParam1, iParam2))
	{
	}
	else
	{
		return false;
	}
	return func_550(iParam0, bParam4);
}

bool func_653(struct<2> Param0, bool bParam2)
{
	if (!func_44(Param0))
	{
		return false;
	}
	func_656(bParam2);
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

int func_654()
{
	return Global_1915643.f_20241;
}

bool func_655(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam3, *iParam3);
}

void func_656(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

