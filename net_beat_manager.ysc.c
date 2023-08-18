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
	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4();
	func_5();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_2()
{
	if (func_11(0, 0))
	{
		return true;
	}
	return false;
}

void func_3()
{
	if (!func_12())
	{
		return;
	}
	if (func_13() || Global_1048585)
	{
		return;
	}
	func_14();
	func_15();
	func_16();
	if (func_17())
	{
		func_18();
	}
	else
	{
		Global_1260791.f_3363 = 1;
		Global_1260791.f_3364 = 0;
	}
	func_19();
}

void func_4()
{
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_7()
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
			func_5();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_5();
		}
		if (func_20() == 0)
		{
			if (func_21())
			{
				func_5();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	return 1;
}

bool func_8()
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

void func_9()
{
	func_22();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1254978, 2516, 46);
	if (!func_23(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1254978), 2516, "g_mpBeatManagerHostData"))
	{
	}
	func_24();
	func_25();
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1257494, 3297, 47);
	if (!func_26(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1257494[0 /*103*/])), 3297, "g_mpBeatManagerPlayerData"))
	{
	}
	if (!func_27())
	{
		func_28();
	}
}

void func_10(bool bParam0)
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
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
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
			func_5();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_11(bool bParam0, bool bParam1)
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

bool func_12()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_13()
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
	if (!func_29(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_30(Global_1260791.f_3351[iVar0]))
		{
			if (func_31(Global_1260791.f_3351[iVar0]) >= func_32(iVar0))
			{
				func_33(&(Global_1260791.f_3351[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_15()
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	MISC::GET_CURR_WEATHER_STATE(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 1056964608)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (func_34(iVar3))
	{
		iVar4 |= 1;
	}
	if (func_35(iVar3))
	{
		iVar4 |= 2;
	}
	if (func_36(iVar3))
	{
		iVar4 |= 4;
	}
	if (func_37(iVar3))
	{
		iVar4 |= 8;
	}
	if (func_38(iVar3))
	{
		iVar4 |= 16;
	}
	if (func_39(iVar3))
	{
		iVar4 |= 32;
	}
	if (func_40(iVar3))
	{
		iVar4 |= 64;
	}
	Global_1260791.f_3485 = iVar4;
}

void func_16()
{
	bool bVar0;
	struct<2> Var1;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (!func_41(0))
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(-0.002971241f))
		{
			func_42(0);
		}
	}
	else
	{
		if (!func_41(1))
		{
			if (UNLOCK::UNLOCK_IS_UNLOCKED(3.178325E+31f))
			{
				func_42(1);
			}
		}
		if (!func_41(2))
		{
			if (UNLOCK::UNLOCK_IS_UNLOCKED(8.70445E-29f))
			{
				func_42(2);
			}
		}
	}
	if (!func_41(6))
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(145315.3f))
		{
			func_42(6);
		}
	}
	if (!func_41(7))
	{
		if (func_43(9))
		{
			func_42(7);
		}
	}
	bVar0 = true;
	Var1 = { func_44() };
	if (!func_29(Var1))
	{
		bVar0 = false;
	}
	else
	{
		iVar3 = func_45(Var1);
		switch (func_46(iVar3))
		{
			case 195932838:
				break;
			default:
				bVar0 = false;
				break;
		}
	}
	if (bVar0 != func_41(3))
	{
		if (bVar0)
		{
			func_42(3);
		}
		else
		{
			func_47(3);
		}
	}
	bVar4 = func_48();
	if (bVar4 != func_41(4))
	{
		if (bVar4)
		{
			func_42(4);
		}
		else
		{
			func_47(4);
		}
	}
	iVar5 = func_49();
	if (func_50(iVar5))
	{
		if (Global_1260791.f_3499 != iVar5 || !func_41(5))
		{
			if (func_51(iVar5, &(Global_1260791.f_3493), &(Global_1260791.f_3496)))
			{
				func_42(5);
				Global_1260791.f_3499 = iVar5;
			}
			else if (func_41(5))
			{
				func_47(5);
				Global_1260791.f_3499 = -1;
			}
		}
	}
	else if (func_41(5))
	{
		func_47(5);
		Global_1260791.f_3499 = -1;
	}
}

bool func_17()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[15], false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_beat_manager", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[15]);
}

void func_18()
{
	switch (Global_1260791.f_3363)
	{
		case 0:
			func_52();
			break;
		case 1:
			func_53();
			break;
		case 2:
			func_54();
			break;
		case 3:
			func_55();
			break;
	}
}

void func_19()
{
	switch (Global_1260791.f_3349)
	{
		case 0:
			func_56();
			break;
		case 1:
			func_57();
			break;
		case 2:
			func_58();
			break;
		case 3:
			func_59();
			break;
	}
}

int func_20()
{
	return Global_1572887.f_14;
}

bool func_21()
{
	return Global_1051645.f_8;
}

void func_22()
{
	func_60();
	func_61();
}

bool func_23(int iParam0, int iParam1, char* sParam2)
{
	return true;
}

void func_24()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_62(iVar0);
		iVar0++;
	}
}

void func_25()
{
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 34)
	{
		Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[iVar0] = func_63(iVar0);
		iVar0++;
	}
}

bool func_26(int iParam0, int iParam1, char* sParam2)
{
	return true;
}

bool func_27()
{
	return !Global_1572887.f_10;
}

void func_28()
{
	func_64(&Global_1260791);
	Global_1260791.f_3349 = 0;
	func_65();
}

bool func_29(struct<2> Param0)
{
	if (!func_66(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_67(Param0))
	{
		return false;
	}
	return true;
}

bool func_30(int iParam0)
{
	return iParam0 != 0;
}

int func_31(int iParam0)
{
	return (Global_1295619.f_16 - iParam0) * 1000;
}

int func_32(int iParam0)
{
	return Global_1260791.f_3357[iParam0];
}

void func_33(var uParam0)
{
	*uParam0 = 0;
}

bool func_34(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("HIGHPRESSURE"):
		case joaat("OVERCASTDARK"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_35(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_36(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_37(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_38(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_39(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SANDSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_41(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1260791.f_3486, iParam0);
}

void func_42(int iParam0)
{
	MISC::SET_BIT(&(Global_1260791.f_3486), iParam0);
}

bool func_43(int iParam0)
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
	iVar0 = func_68(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		bVar1 = func_69(1, iParam0);
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

struct<2> func_44()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_70(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_70(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

int func_45(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_71(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_46(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_72(&Var1, iParam0))
	{
		func_73(Var1, 3.520859E+19f, &uVar0, 1);
	}
	return uVar0;
}

void func_47(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1260791.f_3486), iParam0);
}

bool func_48()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

int func_49()
{
	int iVar0;
	int iVar5;

	if (STATS::_0x3AEABAE3F3C7600C() && STATS::_0xA2E2BEA4E83F6270(-3.335061E+35f) > 0)
	{
		STATS::_0xB5E2EDA2135E0FA1(-3.335061E+35f, 0, &iVar0);
	}
	else
	{
		return -1;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar5 = func_74(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

bool func_50(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

bool func_51(int iParam0, Vector3* vParam1, var uParam2)
{
	struct<4> Var0;
	float fVar5;

	Var0 = Global_1072759.f_28418[48 /*4*/].f_3;
	Var0.f_2 = -2.13205E+12f;
	Var0.f_3 = func_75(iParam0);
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -1.822079E+35f;
	Var0.f_3 = MISC::GET_HASH_KEY("vPropPos");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam1, &Var0);
	fVar5 = 0f;
	Var0.f_2 = 0.6744412f;
	Var0.f_3 = MISC::GET_HASH_KEY("fPropHead");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&fVar5, &Var0);
	uParam2->f_2 = fVar5;
	return true;
}

void func_52()
{
	if (Global_1260791.f_3349 > 0)
	{
		func_76(1);
	}
}

void func_53()
{
	if (func_77())
	{
		func_78();
		func_79();
		Global_1260791.f_3364 = 0;
		func_80();
		func_81(2, 0);
		func_76(2);
	}
}

void func_54()
{
	struct<29> Var0;
	int iVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	struct<2> Var36;
	int iVar40;
	int iVar41;
	int iVar42;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	if (!func_82(2))
	{
		func_83(0, Global_1260791.f_3364);
		func_84(2, 0);
	}
	if (!func_85())
	{
		return;
	}
	if (!func_86(&iVar31, &uVar32, &iVar33, &iVar34))
	{
		func_76(1);
		return;
	}
	func_87(&Var0, iVar31, iVar33, -1, 255);
	if (func_88(Var0.f_11, 5f, 1116471296 /* Float: 70f */))
	{
		func_76(1);
		func_89(Var0.f_5, 0);
		return;
	}
	if (Var0.f_6 == 2)
	{
		iVar35 = func_90(iVar31);
		if (Var0.f_7 == 3)
		{
			Var36.f_1 = -1;
			if (!func_91(iVar35, iVar33, Var0.f_5, &Var36))
			{
				func_76(1);
				func_89(Var0.f_5, 1);
				return;
			}
			func_92(&Var36, iVar35, iVar33, 32, -1);
		}
		else
		{
			func_93(iVar35, iVar33, 32);
		}
	}
	else if (Var0.f_6 == 1)
	{
		iVar40 = PLAYER::INT_TO_PLAYERINDEX(iVar34);
		iVar41 = func_94(iVar31, iVar33, &Var0, iVar40);
		iVar42 = func_95(iVar31, iVar33, iVar41);
		if (!func_96(iVar31, iVar33, iVar41, iVar42, iVar40))
		{
			func_76(1);
			func_89(Var0.f_5, 2);
			return;
		}
	}
	func_76(3);
}

void func_55()
{
	if (!func_30(Global_1254978.f_2512.f_3))
	{
		func_97(&(Global_1254978.f_2512.f_3));
		return;
	}
	if (func_31(Global_1254978.f_2512.f_3) >= Global_1901671.f_242.f_68)
	{
		func_33(&(Global_1254978.f_2512.f_3));
		func_76(1);
	}
}

void func_56()
{
	if (Global_1245159.f_9816 != 2)
	{
		return;
	}
	func_98();
	func_99(1);
}

void func_57()
{
	if (Global_1245159.f_9816 != 2)
	{
		return;
	}
	if (Global_1260791.f_3350 == 0)
	{
		Global_1260791.f_3350 = func_100();
	}
	func_101(1);
	func_99(2);
}

void func_58()
{
	bool bVar0;

	if (func_30(Global_1254978.f_2512.f_3))
	{
		func_102(1, 0);
		func_99(3);
		return;
	}
	if (func_41(3))
	{
		func_101(1);
		func_102(1, 1);
		return;
	}
	if (func_103(&bVar0))
	{
		if (!bVar0)
		{
			func_104(1, 0);
		}
		else
		{
			func_102(1, 0);
		}
	}
}

void func_59()
{
	if (!func_30(Global_1254978.f_2512.f_3))
	{
		func_99(1);
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_76(1);
		}
	}
	else
	{
		func_76(3);
	}
}

void func_60()
{
	vector3 vVar0;
	int iVar3;

	vVar0.f_2 = -15;
	iVar3 = 0;
	while (iVar3 <= 836)
	{
		Global_1254978[iVar3 /*3*/] = { vVar0 };
		iVar3++;
	}
}

void func_61()
{
	struct<4> Var0;

	Global_1254978.f_2512 = { Var0 };
}

void func_62(int iParam0)
{
	struct<103> Var0;

	Var0 = 28;
	Var0.f_29 = 28;
	Var0.f_58 = 35;
	Var0.f_94 = -1;
	Var0.f_97 = 5;
	Global_1257494[iParam0 /*103*/] = { Var0 };
}

int func_63(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_105(iParam0, 1.309684E+10f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_64(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar5;

	iVar0 = 0;
	while (iVar0 < 837)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam0[iVar0 /*4*/], &uVar1, 4);
		iVar0++;
	}
	uParam0->f_3349 = 0;
	uParam0->f_3350 = 0;
	uParam0->f_3363 = 0;
	uParam0->f_3364 = 0;
	uParam0->f_3431 = 0;
	uParam0->f_3480 = 0;
	uParam0->f_3481 = 0;
	uParam0->f_3482 = 0;
	uParam0->f_3483 = -1;
	uParam0->f_3484 = 0f;
	uParam0->f_3485 = 0;
	uParam0->f_3486 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3365[iVar0] = 0;
		uParam0->f_3398[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_3351[iVar0] = 0;
		uParam0->f_3357[iVar0] = 0;
		uParam0->f_3487[iVar0] = 0;
		iVar0++;
	}
	uVar5 = 47;
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_3432), &uVar5, 48);
}

void func_65()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = 0;
	while (iVar4 <= 836)
	{
		Global_1260791[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

bool func_66(int iParam0)
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

int func_67(int iParam0)
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

int func_68(int iParam0)
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

int func_69(int iParam0, int iParam1)
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

struct<2> func_70(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_71(struct<2> Param0, bool bParam2)
{
	if (!func_29(Param0))
	{
		return false;
	}
	func_106(bParam2);
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

bool func_72(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_73(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = fParam5;
	uVar0 = *iParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPSW_LOCATION_00"):
			return 0;
		case joaat("MPSW_LOCATION_01"):
			return 1;
		case joaat("MPSW_LOCATION_02"):
			return 2;
		case joaat("MPSW_LOCATION_03"):
			return 3;
		case joaat("MPSW_LOCATION_04"):
			return 4;
		case joaat("MPSW_LOCATION_05"):
			return 5;
		case joaat("MPSW_LOCATION_06"):
			return 6;
		case joaat("MPSW_LOCATION_07"):
			return 7;
		case joaat("MPSW_LOCATION_08"):
			return 8;
		case joaat("MPSW_LOCATION_09"):
			return 9;
		case joaat("MPSW_LOCATION_10"):
			return 10;
		case joaat("MPSW_LOCATION_11"):
			return 11;
		default:
			break;
	}
	return 0;
}

int func_75(int iParam0)
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

void func_76(int iParam0)
{
	if (Global_1260791.f_3363 != iParam0)
	{
		Global_1260791.f_3363 = iParam0;
	}
}

bool func_77()
{
	return func_107(1);
}

void func_78()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1260791.f_3365[iVar0] != -1)
		{
			Global_1260791.f_3365[iVar0] = -1;
			Global_1260791.f_3398[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_79()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1260791.f_3350 - 1))
	{
		if (Global_1254978[iVar0 /*3*/].f_1 != 0)
		{
			Global_1254978[iVar0 /*3*/].f_1 = 0;
		}
		iVar0++;
	}
}

void func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = Global_1257494[iVar0 /*103*/].f_94;
			if (!func_108(iVar1))
			{
				Global_1260791.f_3365[iVar2] = iVar1;
				Global_1260791.f_3398[iVar2] = Global_1257494[iVar0 /*103*/].f_95;
				iVar2++;
			}
		}
		iVar0++;
	}
}

void func_81(int iParam0, bool bParam1)
{
	if (func_82(iParam0))
	{
		if (bParam1)
		{
		}
		func_109(&(Global_1254978.f_2512.f_1), iParam0);
	}
}

bool func_82(int iParam0)
{
	return func_110(Global_1254978.f_2512.f_1, iParam0);
}

void func_83(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1260791.f_3365[iVar1] == -1)
		{
		}
		else
		{
			iVar2 = Global_1260791.f_3365[iVar1];
			if (iVar2 >= 0)
			{
				if (bParam0)
				{
					func_111(&iVar0, iVar2, iParam1);
				}
				else
				{
					func_112(&iVar0, iVar2);
				}
				if (iVar0 != 0)
				{
					Global_1260791.f_3365[iVar1] = -2;
				}
			}
			iVar1++;
		}
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (!func_82(iParam0))
	{
		if (bParam1)
		{
		}
		func_113(&(Global_1254978.f_2512.f_1), iParam0);
	}
}

bool func_85()
{
	int iVar0;

	while (iVar0 < 1)
	{
		func_83(1, Global_1260791.f_3364);
		iVar0++;
		Global_1260791.f_3364++;
		if (Global_1260791.f_3364 >= 32)
		{
		}
	else
	{
		}
	}
	if (Global_1260791.f_3364 < 32)
	{
		return false;
	}
	else
	{
		Global_1260791.f_3364 = 0;
	}
	return true;
}

bool func_86(var uParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	int iVar1;

	*uParam2 = -1;
	*uParam1 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1260791.f_3365[iVar1] >= 0)
		{
			if (Global_1260791.f_3398[iVar1] > fVar0)
			{
				*uParam1 = Global_1260791.f_3365[iVar1];
				fVar0 = Global_1260791.f_3398[iVar1];
				*uParam3 = iVar1;
			}
		}
		else if (Global_1260791.f_3365[iVar1] == -1)
		{
		}
		else
		{
			iVar1++;
		}
	}
	if (*uParam1 >= 0 && *uParam1 < Global_1260791.f_3350)
	{
		func_114(*uParam1, uParam0, uParam2);
		if (*uParam0 != 0)
		{
			return true;
		}
	}
	return false;
}

void func_87(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	MISC::COPY_SCRIPT_STRUCT(bParam0, &Var0, 31);
	iVar31 = 0;
	while (iVar31 < 2)
	{
		bParam0->f_28[iVar31] = 0;
		iVar31++;
	}
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*bParam0 = 0;
			bParam0->f_1 = 0;
			bParam0->f_2 = 0;
			break;
		case 1:
			func_115(bParam0, iParam2);
			break;
		case 2:
			func_116(bParam0, iParam2);
			break;
		case 3:
			func_117(bParam0, iParam2);
			break;
		case 4:
			func_118(bParam0, iParam2);
			break;
		case 12:
			func_119(bParam0, iParam2);
			break;
		case 6:
			func_120(bParam0, iParam2);
			break;
		case 7:
			func_121(bParam0, iParam2, iParam3);
			break;
		case 5:
			func_122(bParam0, iParam2);
			break;
		case 11:
			func_123(bParam0, iParam2);
			break;
		case 9:
			func_124(bParam0, iParam2, iParam3);
			break;
		case 10:
			func_125(bParam0, iParam2);
			break;
		case 8:
			func_126(bParam0, iParam2);
			break;
		case 13:
			func_127(bParam0, iParam2, iParam4);
			break;
		case 14:
			func_128(bParam0, iParam2, iParam3);
			break;
		case 15:
			func_129(bParam0, iParam2);
			break;
		case 16:
			func_130(bParam0, iParam2, iParam3);
			break;
		case 31:
			func_131(bParam0, iParam2);
			break;
		case 21:
			func_132(bParam0, iParam2);
			break;
		case 28:
			func_133(bParam0, iParam2);
			break;
		case 25:
			func_134(bParam0, iParam2);
			break;
		case 24:
			func_135(bParam0, iParam2);
			break;
		case 22:
			func_136(bParam0, iParam2);
			break;
		case 23:
			func_137(bParam0, iParam2);
			break;
		case 29:
			func_138(bParam0, iParam2);
			break;
		case 26:
			func_139(bParam0, iParam2);
			break;
		case 30:
			func_140(bParam0, iParam2);
			break;
		case 27:
			func_141(bParam0, iParam2);
			break;
		case 32:
			func_142(bParam0, iParam2, iParam3);
			break;
		case 33:
			func_143(bParam0, iParam2, iParam3);
			break;
		case 34:
			func_144(bParam0, iParam2);
			break;
		case 17:
			func_145(bParam0, iParam2);
			break;
		case 18:
			func_146(bParam0, iParam2);
			break;
		case 19:
			func_147(bParam0, iParam2);
			break;
		case 20:
			func_148(bParam0, iParam2);
			break;
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
		case 45:
		case 46:
			func_149(bParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

bool func_88(vector3 vParam0, float fParam3, float fParam4)
{
	bool bVar0;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_150(PLAYER::PLAYER_ID()), vParam0, true) <= (fParam4 + fParam3))
	{
		bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
	}
	if (!bVar0)
	{
		bVar0 = NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam0, fParam3, (fParam4 + fParam3));
	}
	return bVar0;
}

void func_89(int iParam0, int iParam1)
{
	func_151(iParam0, 1, iParam1, 255);
}

int func_90(int iParam0)
{
	return Global_1260791.f_3432[iParam0];
}

bool func_91(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0[4];
	struct<2> Var5;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0[0] = 1;
	iVar0[1] = 2;
	iVar0[2] = 4;
	iVar0[3] = 6;
	Var5 = { func_152(iParam0, iParam1) };
	iVar7 = func_45(Var5);
	iVar8 = func_153(iVar7, uParam2);
	iVar9 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, 4)];
	return func_154(uParam3, iVar9, -1, iVar8);
}

void func_92(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<22> Var0;

	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_155(&Var0, iParam1, iParam2, iParam3, iParam4);
	MISC::COPY_SCRIPT_STRUCT(&(Var0.f_14), bParam0, 4);
	func_156(&Var0);
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	struct<22> Var0;

	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_155(&Var0, iParam0, iParam1, iParam2, -1);
	func_156(&Var0);
}

int func_94(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_157(uParam2, 16))
	{
		return func_158(iParam0, uParam2, iParam3);
	}
	return func_159(iParam0, iParam1, uParam2);
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	struct<29> Var0;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_87(&Var0, iParam0, iParam1, iParam2, 255);
	return func_160(Var0.f_4, Var0.f_2, 1, 0);
}

bool func_96(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<24> Var0;
	struct<29> Var40;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_23.f_13 = -1;
	Var40.f_10 = 30f;
	Var40.f_15 = 4;
	Var40.f_20 = 4;
	Var40.f_26 = -1;
	Var40.f_28 = 2;
	func_87(&Var40, iParam0, iParam1, -1, 255);
	func_161(&(Var0.f_8.f_5), Var40.f_5);
	Var0.f_2 = 7;
	Var0.f_5 = 0;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = 2;
	Var0.f_8.f_2 = { Var40.f_11 };
	Var0.f_23 = func_162(iParam0);
	Var0.f_23.f_1 = func_163(iParam0);
	Var0.f_23.f_5 = iParam4;
	Var0.f_23.f_14 = iParam1;
	Var0.f_23.f_15 = iParam2;
	Var0.f_23.f_16 = iParam3;
	Var0.f_23.f_7 = 1;
	Var0.f_23.f_8[0 /*4*/].f_3 = BUILTIN::FLOOR(Global_1901671.f_242.f_64);
	Var0.f_23.f_2 = BUILTIN::FLOOR(Global_1901671.f_242.f_65);
	Var0.f_23.f_8[0 /*4*/] = func_164(Var40.f_11);
	Var0.f_23.f_6 = 7601;
	if (func_165(&(Global_1210470[Global_1295619 /*204*/])))
	{
		return false;
	}
	if (!func_166(&(Global_1210470[Global_1295619 /*204*/]), &Var0, 0, 0, 0, 0, 0))
	{
		return false;
	}
	func_167(&Var0);
	return true;
}

void func_97(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

void func_98()
{
	int iVar0;
	struct<29> Var1;
	int iVar32;

	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar32 = 0;
	while (iVar32 <= 46)
	{
		func_87(&Var1, iVar32, -1, -1, 255);
		if (Var1.f_6 == 2)
		{
			func_168(Var1.f_8);
			iVar0 = func_168(Var1.f_8);
			Global_1260791.f_3432[iVar32] = iVar0;
		}
		iVar32++;
	}
}

void func_99(int iParam0)
{
	if (Global_1260791.f_3349 != iParam0)
	{
		Global_1260791.f_3349 = iParam0;
	}
}

int func_100()
{
	struct<29> Var0;
	int iVar31;
	int iVar32;
	int iVar33;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 46)
	{
		iVar31 = iVar33;
		func_87(&Var0, iVar31, -1, -1, 255);
		iVar32 = (iVar32 + Var0);
		iVar33++;
	}
	return iVar32;
}

void func_101(bool bParam0)
{
	Global_1260791.f_3482 = 0;
	Global_1260791.f_3481 = 0;
	Global_1260791.f_3480 = 1;
	Global_1260791.f_3483 = -1;
	Global_1260791.f_3484 = 0f;
	if (bParam0)
	{
		Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_94 = -1;
		Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_95 = 0f;
	}
}

void func_102(int iParam0, bool bParam1)
{
	if (func_169(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_109(&(Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_96), iParam0);
	}
}

bool func_103(var uParam0)
{
	int iVar0;
	struct<29> Var1;
	bool bVar32;

	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	while (iVar0 < 3)
	{
		func_87(&Var1, Global_1260791.f_3480, Global_1260791.f_3481, -1, 255);
		if (Var1 <= 0)
		{
			func_170(&bVar32);
		}
		else
		{
			func_171(Global_1260791.f_3480, Global_1260791.f_3481, Global_1260791.f_3482, &Var1);
			iVar0++;
			Global_1260791.f_3481++;
			Global_1260791.f_3482++;
			if (Global_1260791.f_3482 == 836)
			{
				bVar32 = true;
			}
			else
			{
				if (Var1 == Global_1260791.f_3481)
				{
					func_170(&bVar32);
				}
			}
		}
	}
	if (!bVar32)
	{
		return false;
	}
	if (Global_1260791.f_3483 != -1)
	{
		Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_94 = Global_1260791.f_3483;
		Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_95 = Global_1260791.f_3484;
	}
	else
	{
		Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_94 = -1;
		Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_95 = 0f;
		*uParam0 = 1;
	}
	func_101(0);
	return true;
}

void func_104(int iParam0, bool bParam1)
{
	if (!func_169(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_113(&(Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_96), iParam0);
	}
}

struct<2> func_105(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_172(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_173(iParam1, iVar4) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_106(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

int func_107(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_169(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_108(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1260791.f_3365[iVar0] == iParam0)
		{
			return true;
		}
		else if (Global_1260791.f_3365[iVar0] == -1)
		{
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_109(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_110(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_111(var uParam0, int iParam1, int iParam2)
{
	func_174(uParam0, iParam1, iParam2);
	func_175(uParam0, iParam1, iParam2);
}

void func_112(var uParam0, int iParam1)
{
	func_176(uParam0, iParam1);
}

void func_113(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_114(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 46)
	{
		*uParam1 = iVar1;
		func_87(&Var2, *uParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*uParam2 = 0;
			while (*uParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*uParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_115(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 7;
	func_177(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -9.014004E-27f;
			bParam0->f_11 = { 1158047227, 1155008223, 1123710573 };
			break;
		case 1:
			bParam0->f_5 = -5.520074E-18f;
			bParam0->f_11 = { 1158164914, -1043662687, 1112372884 };
			break;
		case 2:
			bParam0->f_5 = -1.289561E+13f;
			bParam0->f_11 = { -997982511, -1002007626, 1114441436 };
			break;
		case 3:
			bParam0->f_5 = -3.198053E-35f;
			bParam0->f_11 = { -997145985, -1021633233, 1118947115 };
			break;
		case 4:
			bParam0->f_5 = -2.764777E-05f;
			bParam0->f_11 = { -995404091, -1006571710, 1123715252 };
			break;
		case 5:
			bParam0->f_5 = 2.06353E+23f;
			bParam0->f_11 = { -998199583, -1007274928, 1120542589 };
			break;
		case 6:
			bParam0->f_5 = 2.336091E+07f;
			bParam0->f_11 = { -1012939165, 1129044142, 1115189962 };
			break;
		case 7:
			bParam0->f_5 = 4.413785E-13f;
			bParam0->f_11 = { -1006603469, 1135384986 /* Float: 345.2f */, 1111987192 };
			break;
		case 8:
			bParam0->f_5 = 3.850579E+15f;
			bParam0->f_11 = { -996518584, -995395355, 1117886349 };
			break;
		case 9:
			bParam0->f_5 = -4.036937E-17f;
			bParam0->f_11 = { -994138817, 1154964357, 1131357929 };
			break;
	}
}

void func_116(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = 5.413756E-29f;
			bParam0->f_11 = { -990860554, -989563552, 1112583527 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = 2.106363E+21f;
			bParam0->f_11 = { 1124617288, 1108172700, 1120571160 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = 2.111024E+08f;
			bParam0->f_11 = { -1000099991, 1146566170, 1124510273 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = 5.018388E+37f;
			bParam0->f_11 = { 1160662133, 1149675795, 1114109612 };
			break;
		case 4:
			func_179(bParam0);
			bParam0->f_5 = 15.72851f;
			bParam0->f_11 = { 1155202369, -997476443, 1109576938 };
			break;
		case 5:
			func_179(bParam0);
			bParam0->f_5 = 7.778285E-25f;
			bParam0->f_11 = { 1151421903, -1001312602, 1117451139 };
			break;
		case 6:
			func_179(bParam0);
			bParam0->f_5 = 3.906421E-32f;
			bParam0->f_11 = { 1134169754, 1150581207, 1127492786 };
			break;
		case 7:
			func_179(bParam0);
			bParam0->f_5 = -2.006564E+35f;
			bParam0->f_11 = { -992054984, -1016372307, 1127560180 };
			break;
		case 8:
			func_179(bParam0);
			bParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			bParam0->f_11 = { -996062015, -996972965, 1116777288 };
			break;
		case 9:
			func_179(bParam0);
			bParam0->f_5 = -6.409571f;
			bParam0->f_11 = { -988795329, -993966426, 1125647559 };
			break;
		case 10:
			func_179(bParam0);
			bParam0->f_5 = 1.863479E-14f;
			bParam0->f_11 = { -987084972, -987916189, 1115784641 };
			break;
		case 11:
			func_179(bParam0);
			bParam0->f_5 = 1.021696E+23f;
			bParam0->f_11 = { -980717807, -984844394, 1097381540 };
			break;
		case 12:
			func_179(bParam0);
			bParam0->f_5 = -1.082996E+28f;
			bParam0->f_11 = { -980371346, -987027526, -1052628128 };
			break;
		case 13:
			func_179(bParam0);
			bParam0->f_5 = 1.561827E+30f;
			bParam0->f_11 = { -978226670, -985207032, -1045081746 };
			break;
		case 14:
			func_179(bParam0);
			bParam0->f_5 = -0.02038603f;
			bParam0->f_11 = { -992797751, -988937868, 1110473601 };
			break;
		case 15:
			func_179(bParam0);
			bParam0->f_5 = 8.753591E+18f;
			bParam0->f_11 = { -993346216, 1154188969, 1131149034 };
			break;
		case 16:
			func_179(bParam0);
			bParam0->f_5 = 2.603904E-14f;
			bParam0->f_11 = { 1137847938, 1157405979, 1130787128 };
			break;
		case 17:
			func_179(bParam0);
			bParam0->f_5 = -3.46549E+29f;
			bParam0->f_11 = { -1006543492, 1140802678, 1120695837 };
			break;
		case 18:
			func_179(bParam0);
			bParam0->f_5 = 1.179074E+08f;
			bParam0->f_11 = { 1155396410, 1141414078, 1121272906 };
			break;
		case 19:
			func_179(bParam0);
			bParam0->f_5 = 1.866136E-26f;
			bParam0->f_11 = { 1154059592, -992580426, 1112778641 };
			break;
	}
}

void func_117(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 8;
	bParam0->f_2 = 1;
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 5);
			bParam0->f_5 = 9.836368E+13f;
			bParam0->f_11 = { 1158463633, 1151850133, 1118379350 };
			break;
		case 1:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 5);
			bParam0->f_5 = 543.1066f;
			bParam0->f_11 = { 1158581043, 1154029896, 1118348247 /* Float: 84.32f */ };
			break;
		case 2:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 5);
			bParam0->f_5 = 1.269733E-08f;
			bParam0->f_11 = { 1159227851, 1148195910, 1116877134 };
			break;
		case 3:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			func_180(bParam0, 7);
			bParam0->f_5 = -2.228004E-19f;
			bParam0->f_11 = { 1150112082, 1141895886, 1118655292 };
			break;
		case 4:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 5);
			func_180(bParam0, 7);
			bParam0->f_5 = -3192329f;
			bParam0->f_11 = { -1002661653, -1010332030, 1109614411 };
			break;
		case 5:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 5);
			func_180(bParam0, 7);
			bParam0->f_5 = 1.530311E+38f;
			bParam0->f_11 = { -1009953158, -1031815037, 1109596884 };
			break;
		case 6:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			func_180(bParam0, 6);
			bParam0->f_5 = 671977.6f;
			bParam0->f_11 = { -989701008, -1021188067, 1129320500 };
			break;
		case 7:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			func_180(bParam0, 6);
			bParam0->f_5 = -123672.6f;
			bParam0->f_11 = { -992884296, -1006537328, 1124916724 };
			break;
		case 8:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			func_180(bParam0, 6);
			bParam0->f_5 = -5.227074E+13f;
			bParam0->f_11 = { -987492840, -1012276717, 1124978537 };
			break;
		case 9:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			bParam0->f_5 = 3.83512E-24f;
			bParam0->f_11 = { -999840598, -999875151, 1109701978 };
			break;
		case 10:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			func_180(bParam0, 5);
			func_180(bParam0, 7);
			bParam0->f_5 = -6.19582E+25f;
			bParam0->f_11 = { -1003176727, -992552468, 1109763031 /* Float: 41.41f */ };
			break;
		case 11:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			bParam0->f_5 = -2211.382f;
			bParam0->f_11 = { -997874236, -990907462, 1110008057 };
			break;
		case 12:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			func_180(bParam0, 6);
			bParam0->f_5 = 5.813065E-27f;
			bParam0->f_11 = { 1154561405, 1152647541, 1125258684 };
			break;
		case 13:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			bParam0->f_5 = -2.743283E+37f;
			bParam0->f_11 = { 1153650150, 1152690073, 1125206209 };
			break;
		case 14:
			func_180(bParam0, 3);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			func_180(bParam0, 6);
			bParam0->f_5 = 9.295132E-10f;
			bParam0->f_11 = { 1151049129, 1150494730, 1125442231 };
			break;
		case 15:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 5);
			func_180(bParam0, 7);
			bParam0->f_5 = -0.0750034f;
			bParam0->f_11 = { 1156634238, -1011536767, 1110045203 };
			break;
		case 16:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 3);
			func_180(bParam0, 5);
			func_180(bParam0, 7);
			bParam0->f_5 = 0.2697543f;
			bParam0->f_11 = { 1158219730, -1012979473, 1109582991 };
			break;
		case 17:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 3);
			func_180(bParam0, 5);
			func_180(bParam0, 7);
			bParam0->f_5 = 5.456239E+10f;
			bParam0->f_11 = { 1159104295, -1007338908, 1109635708 };
			break;
		case 18:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 5);
			bParam0->f_5 = -1.648444E-05f;
			bParam0->f_11 = { -984958968, -985189821, -1055587094 };
			break;
		case 19:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			bParam0->f_5 = 1.11035E+30f;
			bParam0->f_11 = { -992337834, -986246592, -1052418507 };
			break;
		case 20:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 5);
			bParam0->f_5 = 2.464876E+21f;
			bParam0->f_11 = { -992419265, -988502609, 1109731312 };
			break;
	}
}

void func_118(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 2;
	func_178(bParam0);
	bParam0->f_15[0] = -6.738816E-37f;
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = 2.528791E+11f;
			bParam0->f_11 = { -1016809403, 1145965509, 1123457683 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = -1.155725E-33f;
			bParam0->f_11 = { 1151292035, -996652760, 1117867160 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = 4.112297E-07f;
			bParam0->f_11 = { -999383477, -996775968, 1113200814 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = -1.046268E-07f;
			bParam0->f_11 = { -978709429, -986347484, -1115107728 };
			break;
		case 4:
			func_179(bParam0);
			bParam0->f_5 = 2.409888E+18f;
			bParam0->f_11 = { -980764861, -987213526, -1052735701 };
			break;
		case 5:
			func_179(bParam0);
			bParam0->f_5 = -2.574967E+30f;
			bParam0->f_11 = { -984565348, -986491770, -1059165150 };
			break;
		case 6:
			func_179(bParam0);
			bParam0->f_5 = -1.470611E-19f;
			bParam0->f_11 = { 1152287867, -1004483776, 1116534446 };
			break;
		case 7:
			func_179(bParam0);
			bParam0->f_5 = -1.322399E-31f;
			bParam0->f_11 = { 1155070895, -1009556623, 1111263779 };
			break;
		case 8:
			func_179(bParam0);
			bParam0->f_5 = -3.836814E+24f;
			bParam0->f_11 = { 1157058569, -991046472, 1109668318 };
			break;
		case 9:
			func_179(bParam0);
			bParam0->f_5 = -5.760947E+24f;
			bParam0->f_11 = { 1160536058, -997796525, 1110937567 };
			break;
		case 10:
			func_179(bParam0);
			bParam0->f_5 = 1.106632E-33f;
			bParam0->f_11 = { -992197716, -1016202310, 1127610456 };
			break;
	}
}

void func_119(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = 3690385f;
			bParam0->f_11 = { 1160614818, 1139258245, 1115848717 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = 8.158911E+30f;
			bParam0->f_11 = { 1152555558, -991780903, 1113947856 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = 2.669717E-17f;
			bParam0->f_11 = { 1159802443, -1001056348, 1109736240 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = -7.255729E-07f;
			bParam0->f_11 = { 1160700391, 1152583160, 1117482104 };
			break;
		case 4:
			func_179(bParam0);
			bParam0->f_5 = 6.041506E+07f;
			bParam0->f_11 = { 1151037068, 1141089509, 1118757017 };
			break;
		case 5:
			func_179(bParam0);
			bParam0->f_5 = -1.38438E-11f;
			bParam0->f_11 = { -1041918727, 1149953882, 1126694549 };
			break;
		case 6:
			func_179(bParam0);
			bParam0->f_5 = 4.212033E-16f;
			bParam0->f_11 = { -1006065924, -1013638573, 1112688063 };
			break;
		case 7:
			func_179(bParam0);
			bParam0->f_5 = 2.536912E+12f;
			bParam0->f_11 = { -995133944, 1136648213, 1120698001 };
			break;
		case 8:
			func_179(bParam0);
			bParam0->f_5 = -2.534091E+12f;
			bParam0->f_11 = { -994262090, -1000541027, 1118925984 };
			break;
		case 9:
			func_179(bParam0);
			bParam0->f_5 = 6.148389E+24f;
			bParam0->f_11 = { -994674669, -990940346, 1112260071 };
			break;
		case 10:
			func_179(bParam0);
			bParam0->f_5 = -7.930857E-27f;
			bParam0->f_11 = { -988127157, -988303389, 1114412365 };
			break;
		case 11:
			func_179(bParam0);
			bParam0->f_5 = 2.27023E-35f;
			bParam0->f_11 = { -985575689, -985274257, -1079057014 };
			break;
		case 12:
			func_179(bParam0);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -983148035, -986901517, -1049467415 };
			break;
		case 13:
			func_179(bParam0);
			bParam0->f_5 = -1528.504f;
			bParam0->f_11 = { -980293646, -983061220, 1095283266 };
			break;
		case 14:
			func_179(bParam0);
			bParam0->f_5 = 1.014443E-13f;
			bParam0->f_11 = { -979217442, -986431844, 1075102750 };
			break;
	}
}

void func_120(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 16;
	bParam0->f_1 = 2;
	bParam0->f_2 = 8;
	func_181(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			func_180(bParam0, 0);
			bParam0->f_5 = -4.776145E+35f;
			bParam0->f_11 = { 1140422199, 1150609617, 1127448684 };
			break;
		case 1:
			func_180(bParam0, 1);
			bParam0->f_5 = -5.717982E-16f;
			bParam0->f_11 = { 1122352497, 1149842964, 1127348306 };
			break;
		case 2:
			func_180(bParam0, 0);
			bParam0->f_5 = 1.479809E-33f;
			bParam0->f_11 = { 1158544398, -1008974965, 1109608434 };
			break;
		case 3:
			func_180(bParam0, 1);
			bParam0->f_5 = -1.539734E+36f;
			bParam0->f_11 = { 1157239438, -1007056794, 1109661975 };
			break;
		case 4:
			func_180(bParam0, 0);
			bParam0->f_5 = -1.203898E-08f;
			bParam0->f_11 = { 1158659316, -1000302158, 1109667175 };
			break;
		case 5:
			func_180(bParam0, 1);
			bParam0->f_5 = 2.760309E+36f;
			bParam0->f_11 = { 1158943917, -1003981380, 1109751992 };
			break;
		case 6:
			func_180(bParam0, 0);
			bParam0->f_5 = -1.209803E+10f;
			bParam0->f_11 = { 1153395345, 1153784522, 1125345306 };
			break;
		case 7:
			func_180(bParam0, 1);
			bParam0->f_5 = -3.374709E-37f;
			bParam0->f_11 = { 1147949926, 1150210383, 1125350172 };
			break;
		case 8:
			func_180(bParam0, 0);
			bParam0->f_5 = -3201.431f;
			bParam0->f_11 = { -997404924, 1145821314, 1122717347 };
			break;
		case 9:
			func_180(bParam0, 1);
			bParam0->f_5 = 8.817295E-33f;
			bParam0->f_11 = { -989790972, 1147786383, 1125323950 };
			break;
		case 10:
			func_180(bParam0, 0);
			bParam0->f_5 = -1.197698E+14f;
			bParam0->f_11 = { -993610239, -994956749, 1117827845 };
			break;
		case 11:
			func_180(bParam0, 1);
			bParam0->f_5 = -5.118974E+24f;
			bParam0->f_11 = { -1000106720, -991758352, 1115085186 };
			break;
		case 12:
			func_180(bParam0, 0);
			bParam0->f_5 = 6.017953E+25f;
			bParam0->f_11 = { -987225687, -986396153, 1115781541 };
			break;
		case 13:
			func_180(bParam0, 1);
			bParam0->f_5 = -5.803788E-28f;
			bParam0->f_11 = { -986306439, -987762824, 1115073303 };
			break;
		case 14:
			func_180(bParam0, 0);
			bParam0->f_5 = -5.365581E-31f;
			bParam0->f_11 = { -980546023, -983195925, 1099892030 };
			break;
		case 15:
			func_180(bParam0, 1);
			bParam0->f_5 = -3.021498E-30f;
			bParam0->f_11 = { -980187462, -984494082 /* Float: -3357f */, 1091166483 };
			break;
	}
}

void func_121(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 12;
	bParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 9);
			func_180(bParam0, 10);
			func_180(bParam0, 11);
			func_182(bParam0, iParam2);
			bParam0->f_5 = 5.128504E-15f;
			bParam0->f_11 = { 1139431610, 1114658544, 1124498253 };
			break;
		case 1:
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 8);
			func_180(bParam0, 9);
			func_180(bParam0, 10);
			func_180(bParam0, 11);
			func_182(bParam0, iParam2);
			bParam0->f_5 = 791.1281f;
			bParam0->f_11 = { -1010017488, 1125782274, 1109614988 };
			break;
		case 2:
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			func_180(bParam0, 6);
			func_180(bParam0, 9);
			func_180(bParam0, 10);
			func_180(bParam0, 11);
			func_182(bParam0, iParam2);
			bParam0->f_5 = -0.0004251206f;
			bParam0->f_11 = { -990825227, -995587373, 1121168922 };
			break;
		case 3:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 9);
			func_180(bParam0, 10);
			func_180(bParam0, 11);
			func_182(bParam0, iParam2);
			bParam0->f_5 = -8619264f;
			bParam0->f_11 = { -990216659, -989404632, 1113123743 };
			break;
		case 4:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 9);
			func_180(bParam0, 10);
			func_180(bParam0, 11);
			func_182(bParam0, iParam2);
			bParam0->f_5 = -0.005462102f;
			bParam0->f_11 = { -996210888, 1120072685, 1116540769 };
			break;
		case 5:
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 4);
			func_180(bParam0, 7);
			func_180(bParam0, 8);
			func_180(bParam0, 9);
			func_180(bParam0, 10);
			func_180(bParam0, 11);
			func_182(bParam0, iParam2);
			bParam0->f_5 = -2.245529E+29f;
			bParam0->f_11 = { -988615224, -1011630570, 1125105495 };
			break;
		case 6:
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			func_180(bParam0, 6);
			func_180(bParam0, 7);
			func_180(bParam0, 9);
			func_180(bParam0, 10);
			func_180(bParam0, 11);
			func_182(bParam0, iParam2);
			bParam0->f_5 = -4.391075E+18f;
			bParam0->f_11 = { -992405448, 1134109594, 1121469791 };
			break;
		case 7:
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			func_180(bParam0, 6);
			func_180(bParam0, 9);
			func_180(bParam0, 10);
			func_180(bParam0, 11);
			func_182(bParam0, iParam2);
			bParam0->f_5 = -2.699646E+09f;
			bParam0->f_11 = { -979688450, -984318406, 1090462878 };
			break;
		case 8:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 9);
			func_180(bParam0, 10);
			func_180(bParam0, 11);
			func_182(bParam0, iParam2);
			bParam0->f_5 = -1.638996E+35f;
			bParam0->f_11 = { -989262621, -986861661, 1116341763 };
			break;
		case 9:
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			func_180(bParam0, 5);
			func_180(bParam0, 9);
			func_180(bParam0, 10);
			func_180(bParam0, 11);
			func_182(bParam0, iParam2);
			bParam0->f_5 = 1.589723E-25f;
			bParam0->f_11 = { -980428461, -987179279, -1054740411 };
			break;
	}
}

void func_122(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = -5.854213E-18f;
			bParam0->f_11 = { 1152747524, -992746571, 1115811584 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = 4.557484E-23f;
			bParam0->f_11 = { 1150382492, -1012793061, 1120024280 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = 4.01839E+37f;
			bParam0->f_11 = { 1160225193, 1146526876, 1118555495 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = 5.824172E-31f;
			bParam0->f_11 = { 1151593125, 1150549473, 1125619200 };
			break;
		case 4:
			func_179(bParam0);
			bParam0->f_5 = 5.430638E-08f;
			bParam0->f_11 = { 1109653594, 1155703308, 1128104303 };
			break;
		case 5:
			func_179(bParam0);
			bParam0->f_5 = 2.382815E-29f;
			bParam0->f_11 = { 1121706451, 1151354930, 1127238337 };
			break;
		case 6:
			func_179(bParam0);
			bParam0->f_5 = 2.897605E-21f;
			bParam0->f_11 = { -994747520, 1154664578, 1132413098 };
			break;
		case 7:
			func_179(bParam0);
			bParam0->f_5 = -2.927825E+12f;
			bParam0->f_11 = { 1116066881, -1008809581, 1116753124 };
			break;
		case 8:
			func_179(bParam0);
			bParam0->f_5 = 3.772562E+33f;
			bParam0->f_11 = { -992722651, 1136545533, 1121200712 };
			break;
		case 9:
			func_179(bParam0);
			bParam0->f_5 = 1.272773E+27f;
			bParam0->f_11 = { -990114947, -1000118817, 1118426030 };
			break;
		case 10:
			func_179(bParam0);
			bParam0->f_5 = 4.63641E+15f;
			bParam0->f_11 = { -995474709, -996248581, 1118099174 };
			break;
		case 11:
			func_179(bParam0);
			bParam0->f_5 = -0.1827223f;
			bParam0->f_11 = { -988213038, -994689497, 1125430392 };
			break;
		case 12:
			func_179(bParam0);
			bParam0->f_5 = -2.482818E+25f;
			bParam0->f_11 = { -993858852, -990816433, 1112274782 };
			break;
		case 13:
			func_179(bParam0);
			bParam0->f_5 = 2.143608f;
			bParam0->f_11 = { -992178631, -987112374, 1115373995 };
			break;
		case 14:
			func_179(bParam0);
			bParam0->f_5 = 1.36093E+11f;
			bParam0->f_11 = { -989271882, -989231971, 1115740351 };
			break;
		case 15:
			func_179(bParam0);
			bParam0->f_5 = 4.013596E+22f;
			bParam0->f_11 = { -986762200, -985373528, 1086075133 };
			break;
		case 16:
			func_179(bParam0);
			bParam0->f_5 = 2.682644E+25f;
			bParam0->f_11 = { -985238862, -988404666, 1102433228 };
			break;
		case 17:
			func_179(bParam0);
			bParam0->f_5 = 1.035866E+21f;
			bParam0->f_11 = { -981211932, -987225547, 1059637386 };
			break;
		case 18:
			func_179(bParam0);
			bParam0->f_5 = 1.368246E-33f;
			bParam0->f_11 = { -980900620, -984833824, 1101141922 };
			break;
		case 19:
			func_179(bParam0);
			bParam0->f_5 = 1.311447E+15f;
			bParam0->f_11 = { -978679968, -983651352, -1045894686 };
			break;
		case 20:
			func_179(bParam0);
			bParam0->f_5 = 7.540535E-37f;
			bParam0->f_11 = { -977985082, -987389357, -1048217424 };
			break;
	}
}

void func_123(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	func_178(bParam0);
	func_183(bParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = -2.304212E-21f;
			bParam0->f_11 = { 1148175340, 1136654365, 1121850609 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = -2.163551E-07f;
			bParam0->f_11 = { 1152856182, -1001569757, 1112077029 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = 8.612687E+30f;
			bParam0->f_11 = { -997766499, -1003605937, 1116542494 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = -2.993282E+36f;
			bParam0->f_11 = { -994648458, -990823555, 1111600320 };
			break;
		case 4:
			func_179(bParam0);
			bParam0->f_5 = 1.481728E+24f;
			bParam0->f_11 = { -979639716, -982260342, -1123641291 };
			break;
		case 5:
			func_179(bParam0);
			bParam0->f_5 = 0.01074426f;
			bParam0->f_11 = { -986896496, -986216424, 1115795354 };
			break;
		case 6:
			func_179(bParam0);
			bParam0->f_5 = -6.736074E-18f;
			bParam0->f_11 = { -996723831, -991787701, 1114960149 };
			break;
		case 7:
			func_179(bParam0);
			bParam0->f_5 = 1.163363E-22f;
			bParam0->f_11 = { -992649275, -1005503634, 1125510675 };
			break;
		case 8:
			func_179(bParam0);
			bParam0->f_5 = 1.052811E-10f;
			bParam0->f_11 = { 1145618525, -1005440328, 1117693265 };
			break;
		case 9:
			func_179(bParam0);
			bParam0->f_5 = 1.748911E+21f;
			bParam0->f_11 = { 1155418000, -992449668, 1111562786 };
			break;
	}
}

void func_124(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 4;
	bParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_184(bParam0, iParam2);
			bParam0->f_5 = 1.854114E+09f;
			bParam0->f_11 = { -997137488, 1137085242, 1114766128 };
			break;
		case 1:
			func_184(bParam0, iParam2);
			bParam0->f_5 = -6.807417E-16f;
			bParam0->f_11 = { -996160647, 1133622801, 1117344917 };
			break;
		case 2:
			func_184(bParam0, iParam2);
			bParam0->f_5 = -6.2312E-08f;
			bParam0->f_11 = { -995399437, 1133360297, 1118569942 };
			break;
		case 3:
			func_184(bParam0, iParam2);
			bParam0->f_5 = -3.003877E-37f;
			bParam0->f_11 = { -997476867, 1137399507, 1113422063 };
			break;
		case 4:
			func_184(bParam0, iParam2);
			bParam0->f_5 = 2.880072E-29f;
			bParam0->f_11 = { -996079017, 1125417039, 1116705443 };
			break;
		case 5:
			func_184(bParam0, iParam2);
			bParam0->f_5 = 8.670444E+18f;
			bParam0->f_11 = { -993128883, -1025132724, 1126829287 };
			break;
		case 6:
			func_184(bParam0, iParam2);
			bParam0->f_5 = 1.065102E+27f;
			bParam0->f_11 = { -997775860, -1010137639, 1120012245 };
			break;
		case 7:
			func_184(bParam0, iParam2);
			bParam0->f_5 = 3.879419E+31f;
			bParam0->f_11 = { 1129240415, -1020633724, 1124239173 };
			break;
		case 8:
			func_184(bParam0, iParam2);
			bParam0->f_5 = 8.235938E+25f;
			bParam0->f_11 = { -1004843341, 1127929951, 1109727406 };
			break;
		case 9:
			func_184(bParam0, iParam2);
			bParam0->f_5 = 1.792932E-19f;
			bParam0->f_11 = { 1110541179, 1136795179, 1124193318 };
			break;
		case 10:
			func_184(bParam0, iParam2);
			bParam0->f_5 = 9.895492E+15f;
			bParam0->f_11 = { 1144798960, -1033341947, 1126016477 };
			break;
		case 11:
			func_184(bParam0, iParam2);
			bParam0->f_5 = -2.926217E-34f;
			bParam0->f_11 = { 1145859682, 1141741071, 1122287761 };
			break;
	}
}

void func_125(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = -1.916865E+25f;
			bParam0->f_11 = { -989814252, -988032438, 1115557402 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = 5.481727E+08f;
			bParam0->f_11 = { -994006196, -988681787, 1110206545 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = -70.68216f;
			bParam0->f_11 = { -984086977, -988977810, 1015351744 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = 3.920366E+24f;
			bParam0->f_11 = { -983073949, -983522409, 1110753891 };
			break;
		case 4:
			func_179(bParam0);
			bParam0->f_5 = -1.284236E-09f;
			bParam0->f_11 = { -993676893, -993064731, 1117586734 };
			break;
		case 5:
			func_179(bParam0);
			bParam0->f_5 = 6.689618E-31f;
			bParam0->f_11 = { -996505258, -997469797, 1116285923 };
			break;
		case 6:
			func_179(bParam0);
			bParam0->f_5 = 1.261534f;
			bParam0->f_11 = { -996277247, -1002353267, 1119333330 };
			break;
		case 7:
			func_179(bParam0);
			bParam0->f_5 = -4.792435E+22f;
			bParam0->f_11 = { -995044497, -1016449446, 1120302095 };
			break;
		case 8:
			func_179(bParam0);
			bParam0->f_5 = -5.891382E-23f;
			bParam0->f_11 = { -992531234, 1141532263 /* Float: 553.6f */, 1122045003 };
			break;
		case 9:
			func_179(bParam0);
			bParam0->f_5 = 4.285148E+18f;
			bParam0->f_11 = { -1007524280, -1030963963, 1110164746 };
			break;
		case 10:
			func_179(bParam0);
			bParam0->f_5 = -2.152774E+35f;
			bParam0->f_11 = { -1008383298, -1012053816, 1117869252 };
			break;
		case 11:
			func_179(bParam0);
			bParam0->f_5 = -4.120438E+35f;
			bParam0->f_11 = { 1149776553, 1102972358, 1118859600 };
			break;
		case 12:
			func_179(bParam0);
			bParam0->f_5 = 7.080043E-12f;
			bParam0->f_11 = { 1148848228, 1137757089, 1121440001 };
			break;
		case 13:
			func_179(bParam0);
			bParam0->f_5 = 0.0005734964f;
			bParam0->f_11 = { 1144155884, 1102854928, 1125651561 };
			break;
		case 14:
			func_179(bParam0);
			bParam0->f_5 = -2.95344E+10f;
			bParam0->f_11 = { 1115625368, 1149230895, 1128921492 };
			break;
		case 15:
			func_179(bParam0);
			bParam0->f_5 = -8.519349E-14f;
			bParam0->f_11 = { 1136088416, 1152390468, 1127157629 };
			break;
		case 16:
			func_179(bParam0);
			bParam0->f_5 = -6.511829E+17f;
			bParam0->f_11 = { 1155481063, 1153318988, 1125852394 };
			break;
		case 17:
			func_179(bParam0);
			bParam0->f_5 = 7.159146E-31f;
			bParam0->f_11 = { 1151328826, 1150391732, 1125466165 };
			break;
		case 18:
			func_179(bParam0);
			bParam0->f_5 = -0.0003355019f;
			bParam0->f_11 = { 1157867338, 1129291248, 1116823860 };
			break;
		case 19:
			func_179(bParam0);
			bParam0->f_5 = 3518021f;
			bParam0->f_11 = { 1160198343, 1127479094, 1113101642 };
			break;
	}
}

void func_126(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 9;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_178(bParam0);
	bParam0->f_10 = 1114636288; /* Float: 60f */
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = 0.0005758301f;
			bParam0->f_11 = { 1153648607, -989860561, 1111318751 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = -17030.08f;
			bParam0->f_11 = { 1152155222, -992737288, 1116059878 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = -5.323573E+13f;
			bParam0->f_11 = { 1154135704, -993113154, 1113595852 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = -9.14138E+21f;
			bParam0->f_11 = { 1153178567, -994590515, 1116652531 };
			break;
		case 4:
			func_179(bParam0);
			bParam0->f_5 = -1.558658E+30f;
			bParam0->f_11 = { 1149720044, -996262068, 1116152319 };
			break;
		case 5:
			func_179(bParam0);
			bParam0->f_5 = 3.547867E+31f;
			bParam0->f_11 = { 1143646282, -998764357, 1112649420 };
			break;
		case 6:
			func_179(bParam0);
			bParam0->f_5 = -5.639034E-38f;
			bParam0->f_11 = { 1144058230, -1000510924, 1111559286 };
			break;
		case 7:
			func_179(bParam0);
			bParam0->f_5 = -2.603637E-21f;
			bParam0->f_11 = { 1146873879, -1006208396, 1118835253 };
			break;
		case 8:
			func_179(bParam0);
			bParam0->f_5 = -6.531104E-13f;
			bParam0->f_11 = { 1149047964, -1010487362, 1119149678 };
			break;
	}
}

void func_127(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 1;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	func_178(bParam0);
	func_183(bParam0, 1);
	func_183(bParam0, 4);
	func_183(bParam0, 8);
	func_183(bParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = -4.117585E-20f;
			bParam0->f_11 = { func_186(func_185(iParam2)) };
			break;
	}
}

void func_128(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 5;
	bParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_187(bParam0, iParam2);
			bParam0->f_5 = -4.144115E-32f;
			bParam0->f_11 = { -1012024832, 1144600400, 1122560233 };
			break;
		case 1:
			func_187(bParam0, iParam2);
			bParam0->f_5 = 1.159463E-07f;
			bParam0->f_11 = { -1011592405, 1145963032, 1122432036 };
			break;
		case 2:
			func_187(bParam0, iParam2);
			bParam0->f_5 = -1.15123E+13f;
			bParam0->f_11 = { 1161352091, 1141055007, 1110354478 };
			break;
		case 3:
			func_187(bParam0, iParam2);
			bParam0->f_5 = -4.764357E+21f;
			bParam0->f_11 = { 1161428522, 1141263967, 1110028140 };
			break;
		case 4:
			func_187(bParam0, iParam2);
			bParam0->f_5 = 2.851511E-33f;
			bParam0->f_11 = { 1152685125, -995016853, 1117549030 };
			break;
		case 5:
			func_187(bParam0, iParam2);
			bParam0->f_5 = 2.691375E-18f;
			bParam0->f_11 = { 1152271722, -994976941, 1117647735 };
			break;
		case 6:
			func_187(bParam0, iParam2);
			bParam0->f_5 = -8.662306E+07f;
			bParam0->f_11 = { 1161511505, 1151924702, 1110169294 };
			break;
		case 7:
			func_187(bParam0, iParam2);
			bParam0->f_5 = -5.357437E+16f;
			bParam0->f_11 = { 1161182181, 1150942838, 1110331674 };
			break;
		case 8:
			func_187(bParam0, iParam2);
			bParam0->f_5 = -1.278147E+09f;
			bParam0->f_11 = { -1001364507, -993985196, 1114538613 };
			break;
		case 9:
			func_187(bParam0, iParam2);
			bParam0->f_5 = -2.465434E+17f;
			bParam0->f_11 = { -998315786, -997302732, 1113690370 };
			break;
	}
}

void func_129(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = 2.848424E+38f;
			bParam0->f_11 = { 1158286001, -1011910128, 1109783478 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = 4.950299E+31f;
			bParam0->f_11 = { 1155054987, -1003099378, 1109629233 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = 2.368803E-22f;
			bParam0->f_11 = { -990018183, 1137892770, 1123441718 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = -4.61136E+32f;
			bParam0->f_11 = { 1131335818, 1151032549, 1127862573 };
			break;
		case 4:
			func_179(bParam0);
			bParam0->f_5 = 0.9061007f;
			bParam0->f_11 = { 1143046242, 1151540655, 1128361925 };
			break;
		case 5:
			func_179(bParam0);
			bParam0->f_5 = -1.810033E+29f;
			bParam0->f_11 = { 1138457552, 1146079004, 1125234016 };
			break;
		case 6:
			func_179(bParam0);
			bParam0->f_5 = -0.0002372616f;
			bParam0->f_11 = { -1006079803, 1136971576, 1118700516 };
			break;
		case 7:
			func_179(bParam0);
			bParam0->f_5 = -2.273169E+07f;
			bParam0->f_11 = { 1149130670, 1149553230, 1126102794 };
			break;
		case 8:
			func_179(bParam0);
			bParam0->f_5 = 3.949332E+16f;
			bParam0->f_11 = { 1158357864, -1015502465, 1110060066 };
			break;
		case 9:
			func_179(bParam0);
			bParam0->f_5 = -6.086829E+07f;
			bParam0->f_11 = { 1159753291, -1030868474, 1111840077 };
			break;
		case 10:
			func_179(bParam0);
			bParam0->f_5 = 2.206825E-28f;
			bParam0->f_11 = { 1152229966, -989246687, 1111577251 };
			break;
		case 11:
			func_179(bParam0);
			bParam0->f_5 = 1.03376E-22f;
			bParam0->f_11 = { 1147320836, -998849882, 1113839370 /* Float: 56.96f */ };
			break;
	}
}

void func_130(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 2;
	bParam0->f_2 = 4;
	func_188(bParam0, iParam2);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -8.240641f;
			bParam0->f_11 = { 1160773263, -996614562, 1111104160 };
			break;
		case 1:
			bParam0->f_5 = -2.133177E-08f;
			bParam0->f_11 = { 1159898907, -996093376, 1112344284 };
			break;
		case 2:
			bParam0->f_5 = -3.522412E-21f;
			bParam0->f_11 = { 1160139780, -996781261, 1112612091 };
			break;
		case 3:
			bParam0->f_5 = -9.385189E-33f;
			bParam0->f_11 = { 1160505455, -996751008, 1111589310 };
			break;
		case 4:
			bParam0->f_5 = 6.306923E+32f;
			bParam0->f_11 = { 1159605792, -997217284, 1111754067 };
			break;
		case 5:
			bParam0->f_5 = 1.74872E+24f;
			bParam0->f_11 = { 1160357417, -996531233, 1111797793 };
			break;
		case 6:
			bParam0->f_5 = -7.354034E+10f;
			bParam0->f_11 = { 1160051872, -995023864, 1110802694 };
			break;
		case 7:
			bParam0->f_5 = -204.3683f;
			bParam0->f_11 = { 1160311874, -996925759, 1112241603 };
			break;
		case 8:
			bParam0->f_5 = -3.486445E-08f;
			bParam0->f_11 = { 1160632394, -996158104, 1111078732 };
			break;
		case 9:
			bParam0->f_5 = -7.297855E-22f;
			bParam0->f_11 = { 1159860898, -996741247, 1112620715 };
			break;
		case 10:
			bParam0->f_5 = 353.0674f;
			bParam0->f_11 = { 1160175944, -997513355, 1111897407 };
			break;
		case 11:
			bParam0->f_5 = -6.366626E-31f;
			bParam0->f_11 = { 1159405928, -994625864, 1110753988 };
			break;
		case 12:
			bParam0->f_5 = -0.3776834f;
			bParam0->f_11 = { -1002048438, -995892453, 1110081012 };
			break;
		case 13:
			bParam0->f_5 = -5.704767E+10f;
			bParam0->f_11 = { -1002259038, -996310237, 1110086255 };
			break;
		case 14:
			bParam0->f_5 = 1.236228E-14f;
			bParam0->f_11 = { -1001197103, -996125378, 1110012959 };
			break;
	}
}

void func_131(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 15;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -0.8817953f;
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_27 = 8;
	}
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -5.322689E+14f;
			bParam0->f_11 = { 1158061201, -992888888, 1109541939 };
			break;
		case 1:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -4.244014E+24f;
			bParam0->f_11 = { 1158203738, -993561462, 1109548335 };
			break;
		case 2:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -2.455464E-06f;
			bParam0->f_11 = { 1157752578, -992748284, 1109574183 };
			break;
		case 3:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -8059160f;
			bParam0->f_11 = { 1157705048, -992155204, 1109424420 };
			break;
		case 4:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -1.142636E-18f;
			bParam0->f_11 = { 1157970814, -991349475, 1109415349 };
			break;
		case 5:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 2.602319E-24f;
			bParam0->f_11 = { 1158207949, -1004305669, 1109540943 };
			break;
		case 6:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -1.098314E-10f;
			bParam0->f_11 = { 1158709142, -1006060415, 1109540943 };
			break;
		case 7:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -1.790267f;
			bParam0->f_11 = { 1158301428, -1005197425, 1109540943 };
			break;
		case 8:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -3.506853E+11f;
			bParam0->f_11 = { 1158550900, -1003652067, 1109540943 };
			break;
		case 9:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 8.968142E+11f;
			bParam0->f_11 = { 1158720140, -1005197527, 1109540943 };
			break;
		case 10:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -1.055209E+16f;
			bParam0->f_11 = { 1160600510, -1004983139, 1109559581 };
			break;
		case 11:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -225603.3f;
			bParam0->f_11 = { 1160708629, -1003110233, 1109553735 };
			break;
		case 12:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -2.767887E-05f;
			bParam0->f_11 = { 1160405518, -1004165304, 1109531899 };
			break;
		case 13:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -1.401141E-16f;
			bParam0->f_11 = { 1160340020, -1006263429, 1109554627 };
			break;
		case 14:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -5.535239E+22f;
			bParam0->f_11 = { 1160413896, -1008062097, 1109596412 };
			break;
	}
}

void func_132(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 13;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 8.004635E-22f;
	if (iParam1 > 7)
	{
		bParam0->f_27 = 18;
		bParam0->f_20[0] = 4.27551E+12f;
	}
	else
	{
		bParam0->f_27 = 1;
		bParam0->f_20[0] = 1.124298E+33f;
	}
	switch (iParam1)
	{
		case 0:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -2.038598E+37f;
			bParam0->f_11 = { -992608256 /* Float: -1712f */, 1143013376 /* Float: 644f */, 1123391898 /* Float: 122.8f */ };
			break;
		case 1:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -9.659467E+26f;
			bParam0->f_11 = { -987852390, 1146452378 /* Float: 853.9f */, 1125941248 /* Float: 156.5f */ };
			break;
		case 2:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -8.923116E+15f;
			bParam0->f_11 = { -987960525, 1140968653 /* Float: 519.2f */, 1124859904 /* Float: 140f */ };
			break;
		case 3:
			func_190(bParam0, iParam1);
			bParam0->f_5 = 176098.3f;
			bParam0->f_11 = { -990905958, 1144768102 /* Float: 751.1f */, 1125548032 /* Float: 150.5f */ };
			break;
		case 4:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -9.05571E+28f;
			bParam0->f_11 = { -990057264, 1143319567, 1123007883 };
			break;
		case 5:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -1.786527E-35f;
			bParam0->f_11 = { -988268782, 1146028892, 1124790790 };
			break;
		case 6:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -4.511086E-25f;
			bParam0->f_11 = { -988056648, 1137647573, 1125402359 };
			break;
		case 7:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -5.512158E-19f;
			bParam0->f_11 = { -987680690, 1135288051, 1125486979 };
			break;
		case 8:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -0.001709003f;
			bParam0->f_11 = { -995344834, 1132765728, 1117548970 };
			break;
		case 9:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -5.630045E+34f;
			bParam0->f_11 = { -996727087, 1126975655, 1109523798 };
			break;
		case 10:
			func_190(bParam0, iParam1);
			bParam0->f_5 = 1.106593E-18f;
			bParam0->f_11 = { -997693950, -1038792419, 1109531191 };
			break;
		case 11:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -4.837103E+08f;
			bParam0->f_11 = { -1000809505, 1141231781, 1114093833 };
			break;
		case 12:
			func_190(bParam0, iParam1);
			bParam0->f_5 = -2.169674E-36f;
			bParam0->f_11 = { -1002040451, 1143064686, 1118902642 };
			break;
	}
}

void func_133(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 1.825672E+26f;
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 0;
	}
	else
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 18;
	}
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			bParam0->f_5 = -8.612918E+14f;
			bParam0->f_11 = { -988725982, -1008850803, 1125072214 };
			break;
		case 1:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			bParam0->f_5 = -274406f;
			bParam0->f_11 = { -988464002, -1012496948, 1125049277 };
			break;
		case 2:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -987502590, -1012179590, 1124960272 };
			break;
		case 3:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			bParam0->f_5 = -5.418765E-15f;
			bParam0->f_11 = { -986938083, -1029981707, 1125637043 };
			break;
		case 4:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			bParam0->f_5 = -4.266224E-27f;
			bParam0->f_11 = { -988930966, -1007885147, 1124752530 };
			break;
		case 5:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			bParam0->f_5 = -980838.1f;
			bParam0->f_11 = { 1159267230, 1141537636, 1115958804 /* Float: 66.09f */ };
			break;
		case 6:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			bParam0->f_5 = 9.562718E+30f;
			bParam0->f_11 = { 1158487625, 1132486158, 1110351780 };
			break;
		case 7:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			bParam0->f_5 = 2.717809E+31f;
			bParam0->f_11 = { 1158761782, 1147136169, 1116686923 };
			break;
		case 8:
			func_180(bParam0, 1);
			bParam0->f_5 = -9.354164E+14f;
			bParam0->f_11 = { 1159003386, 1149732085, 1118559705 };
			break;
		case 9:
			func_180(bParam0, 1);
			bParam0->f_5 = 3.485359E-26f;
			bParam0->f_11 = { 1159063676, 1145135174, 1116079378 };
			break;
	}
}

void func_134(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 3.134018E-27f;
	func_178(bParam0);
	if (iParam1 > 4)
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_180(bParam0, 0);
			bParam0->f_5 = -120.0375f;
			bParam0->f_11 = { -991423617, 1155620198, 1131040276 };
			break;
		case 1:
			func_180(bParam0, 0);
			bParam0->f_5 = -2.660786E+15f;
			bParam0->f_11 = { -991714079, 1153682243, 1131138698 };
			break;
		case 2:
			func_180(bParam0, 0);
			bParam0->f_5 = 1.184275E-30f;
			bParam0->f_11 = { -989767363, 1155701240, 1131810272 };
			break;
		case 3:
			func_180(bParam0, 0);
			bParam0->f_5 = -2.187653E+19f;
			bParam0->f_11 = { -990805961, 1158058868, 1134648430 };
			break;
		case 4:
			func_180(bParam0, 0);
			bParam0->f_5 = 7.970961E-07f;
			bParam0->f_11 = { -992277732, 1156836304, 1132740906 };
			break;
		case 5:
			func_180(bParam0, 1);
			bParam0->f_5 = 3.86703E+21f;
			bParam0->f_11 = { 1148176957, 1142602926, 1120107626 };
			break;
		case 6:
			func_180(bParam0, 1);
			bParam0->f_5 = 9.622145E+12f;
			bParam0->f_11 = { 1148782335, 1140850721, 1120049798 };
			break;
		case 7:
			func_180(bParam0, 1);
			bParam0->f_5 = -7.549088E+09f;
			bParam0->f_11 = { 1150806073, 1141598568, 1118713020 };
			break;
		case 8:
			func_180(bParam0, 1);
			bParam0->f_5 = -14.39795f;
			bParam0->f_11 = { 1151102691, 1135372616, 1119368577 };
			break;
		case 9:
			func_180(bParam0, 1);
			bParam0->f_5 = -2.34765E-12f;
			bParam0->f_11 = { 1147420824, 1122179167, 1122539930 /* Float: 116.3f */ };
			break;
	}
}

void func_135(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 11;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -3.239727E-28f;
	func_178(bParam0);
	if (iParam1 > 5)
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_27 = 9;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 18;
	}
	switch (iParam1)
	{
		case 0:
			func_180(bParam0, 0);
			bParam0->f_5 = -2.380014E-24f;
			bParam0->f_11 = { -995552140, -987798002, 1117123733 };
			break;
		case 1:
			func_180(bParam0, 0);
			bParam0->f_5 = -1.78623E+10f;
			bParam0->f_11 = { -990956493, -989177591, 1109931275 };
			break;
		case 2:
			func_180(bParam0, 0);
			bParam0->f_5 = 4.690053E-36f;
			bParam0->f_11 = { -992330680, -988459800, 1110132785 };
			break;
		case 3:
			func_180(bParam0, 1);
			bParam0->f_5 = 1.948744E+32f;
			bParam0->f_11 = { -993582233, -988610888, 1110185843 };
			break;
		case 4:
			func_180(bParam0, 1);
			bParam0->f_5 = 8.647611E+23f;
			bParam0->f_11 = { -991882023, -993157580, 1119974693 };
			break;
		case 5:
			func_180(bParam0, 1);
			bParam0->f_5 = -6.423808E-24f;
			bParam0->f_11 = { -993294617, -990711368, 1112058652 };
			break;
		case 6:
			func_180(bParam0, 2);
			bParam0->f_5 = -1.791026E-06f;
			bParam0->f_11 = { 1159248741, -1046889733, 1110236227 };
			break;
		case 7:
			func_180(bParam0, 2);
			bParam0->f_5 = 7.396245E+34f;
			bParam0->f_11 = { 1160363664, -1023361339, 1109921550 };
			break;
		case 8:
			func_180(bParam0, 2);
			bParam0->f_5 = 7.494099E-32f;
			bParam0->f_11 = { 1158921326, 1095914802, 1109741326 };
			break;
		case 9:
			func_180(bParam0, 2);
			bParam0->f_5 = 1.342886E+08f;
			bParam0->f_11 = { 1158886759, -1015588513, 1109801723 };
			break;
		case 10:
			func_180(bParam0, 2);
			bParam0->f_5 = 1.503919E+19f;
			bParam0->f_11 = { 1159894572, -1017870706, 1110384627 };
			break;
	}
}

void func_136(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 20;
	bParam0->f_1 = 4;
	bParam0->f_2 = 2;
	bParam0->f_28[0] = 1.777506E-22f;
	switch (iParam1)
	{
		case 0:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 0.0009226644f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977418783, -983523996, -1064595096 };
			break;
		case 1:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 400348.8f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977155092, -983077929, -1064761630 };
			break;
		case 2:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 1.816392E+09f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978445599, -982307471, -1040579926 };
			break;
		case 3:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 2.952954E+17f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977323950, -982706913, -1039934161 };
			break;
		case 4:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 3.670386E+30f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977549271, -982846915, -1043804979 /* Float: -25.1f */ };
			break;
		case 5:
			func_191(bParam0, iParam1);
			bParam0->f_5 = -8.686904E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977780292, -982630996, -1040579874 };
			break;
		case 6:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 2.642126E-14f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -976830080, -984312220, -1049936318 };
			break;
		case 7:
			func_191(bParam0, iParam1);
			bParam0->f_5 = -1.378686E-16f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977072919, -984193168, 1069253919 /* Float: 1.465f */ };
			break;
		case 8:
			func_191(bParam0, iParam1);
			bParam0->f_5 = -1.230984E-26f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977380271, -984323986, 1099912027 };
			break;
		case 9:
			func_191(bParam0, iParam1);
			bParam0->f_5 = -6.553197E-35f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977456769, -983523121, -1063541906 };
			break;
		case 10:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 8.637232E-13f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978366554, -982756861, -1044300772 };
			break;
		case 11:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 1.752292E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978254555, -983655521, -1044299645 };
			break;
		case 12:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 1.670123f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977954760, -982722422, -1042385260 };
			break;
		case 13:
			func_191(bParam0, iParam1);
			bParam0->f_5 = -0.602618f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977759215, -983824648, -1044300169 };
			break;
		case 14:
			func_191(bParam0, iParam1);
			bParam0->f_5 = -1.833368E+12f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978071834, -984716182, -1044299435 };
			break;
		case 15:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 3.26606E+37f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -999665125, -991067580, 1112228039 };
			break;
		case 16:
			func_191(bParam0, iParam1);
			bParam0->f_5 = -5.374648E+10f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -997944773, -992452114, 1117191947 };
			break;
		case 17:
			func_191(bParam0, iParam1);
			bParam0->f_5 = -1.878287E+19f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -998009571, -992010712, 1115281487 };
			break;
		case 18:
			func_191(bParam0, iParam1);
			bParam0->f_5 = 2.573031E-25f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -999292823, -993021026, 1116192584 };
			break;
		case 19:
			func_191(bParam0, iParam1);
			bParam0->f_5 = -1772.994f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -995724411, -991128144, 1114745707 };
			break;
	}
}

void func_137(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 15;
	bParam0->f_1 = 5;
	bParam0->f_2 = 2;
	bParam0->f_28[0] = 4.242694E-36f;
	switch (iParam1)
	{
		case 0:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 3.918093E+24f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1153029020, -989478362, 1111263331 };
			break;
		case 1:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -1.092243E-15f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1152320247, -989371098, 1111316916 };
			break;
		case 2:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 1.756841E+34f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150925192, -989638649, 1113899821 };
			break;
		case 3:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 0.01141832f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1149342358, -989449118, 1110418915 };
			break;
		case 4:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 2.219954E+08f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150606075, -989156405, 1113924200 };
			break;
		case 5:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 0.0009091725f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1158499475, -1011192224, 1109620320 };
			break;
		case 6:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 7.177287E+13f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1154223442, -1004918764, 1110145185 };
			break;
		case 7:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -2.752983E-12f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157954043, -1000154145, 1109563592 };
			break;
		case 8:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -0.0005524897f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157428810, -998356438, 1110022501 };
			break;
		case 9:
			func_192(bParam0, iParam1);
			bParam0->f_5 = NaNf;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157816127, -1002908413, 1109728847 };
			break;
		case 10:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 25235.61f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1158183074, -1017816200, 1110843877 };
			break;
		case 11:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 9.829717E-32f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1158191810, -1037171163, 1112596493 };
			break;
		case 12:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 1.242477E-37f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1159264072, -1034149534, 1110360116 };
			break;
		case 13:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -1.672978E-23f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1155861872, -1013011186, 1110889726 };
			break;
		case 14:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -3.673748E-34f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1156223241, -1008548397, 1110250488 };
			break;
	}
}

void func_138(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 6.995461E-38f;
	func_178(bParam0);
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_20[1] = -7.232669E-38f;
		bParam0->f_27 = 0;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_180(bParam0, 3);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			bParam0->f_5 = -4.286879E+09f;
			bParam0->f_11 = { -987243245, -987194041, 1116719088 };
			break;
		case 1:
			func_180(bParam0, 3);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			bParam0->f_5 = -1899.75f;
			bParam0->f_11 = { -986605684, -986590464, 1118613838 };
			break;
		case 2:
			func_180(bParam0, 3);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			bParam0->f_5 = 3.146079E+11f;
			bParam0->f_11 = { -985776553, -989418570, 1114616784 };
			break;
		case 3:
			func_180(bParam0, 3);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			bParam0->f_5 = 6.593053E+11f;
			bParam0->f_11 = { -987375265, -989464530, 1117252747 };
			break;
		case 4:
			func_180(bParam0, 3);
			func_180(bParam0, 4);
			func_180(bParam0, 5);
			bParam0->f_5 = -1.312522E-18f;
			bParam0->f_11 = { -985019226, -988272544, 1104503741 };
			break;
		case 5:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			bParam0->f_5 = 2.867698E+08f;
			bParam0->f_11 = { -996986113, -1002752333, 1116184379 };
			break;
		case 6:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			bParam0->f_5 = -6.92375E-06f;
			bParam0->f_11 = { -992414219, -1004726909, 1125195750 };
			break;
		case 7:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			bParam0->f_5 = -3.40923E+18f;
			bParam0->f_11 = { -993747441, -1012637008, 1126210594 };
			break;
		case 8:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			bParam0->f_5 = 1.232282E+31f;
			bParam0->f_11 = { -994642775, -1007637411, 1124203803 };
			break;
		case 9:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			bParam0->f_5 = 2.032195E-23f;
			bParam0->f_11 = { -994132108, -1000009956, 1118852848 };
			break;
	}
}

void func_139(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 20;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.631132E+22f;
	if (iParam1 < 10)
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 57;
	}
	else
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_193(bParam0, iParam1);
			bParam0->f_5 = 3.646808E-23f;
			bParam0->f_11 = { 1150683855, -1005713036, 1116128910 };
			break;
		case 1:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -7.877037E+07f;
			bParam0->f_11 = { 1150993217, -1006063437, 1116018901 };
			break;
		case 2:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -1.005039E-10f;
			bParam0->f_11 = { 1151451230, -1004746306, 1114369085 };
			break;
		case 3:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -1.785908E+20f;
			bParam0->f_11 = { 1151746969, -1003404036, 1115786943 };
			break;
		case 4:
			func_193(bParam0, iParam1);
			bParam0->f_5 = 3.983027E+21f;
			bParam0->f_11 = { 1150468175, -1006492490, 1116347446 };
			break;
		case 5:
			func_193(bParam0, iParam1);
			bParam0->f_5 = 9.595287E-17f;
			bParam0->f_11 = { 1142739862, -998127987, 1109931092 };
			break;
		case 6:
			func_193(bParam0, iParam1);
			bParam0->f_5 = 4.824729E-06f;
			bParam0->f_11 = { 1143530648, -997446161, 1112212583 };
			break;
		case 7:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -2.555951E-17f;
			bParam0->f_11 = { 1145558704, -996876822, 1110177926 };
			break;
		case 8:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -1.385647E-16f;
			bParam0->f_11 = { 1144808753, -998900395, 1111449194 };
			break;
		case 9:
			func_193(bParam0, iParam1);
			bParam0->f_5 = 5765001;
			bParam0->f_11 = { 1144681982, -997458662, 1113462643 };
			break;
		case 10:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -3.727919E+33f;
			bParam0->f_11 = { -999235848, 1158407363, 1135288923 };
			break;
		case 11:
			func_193(bParam0, iParam1);
			bParam0->f_5 = 2.834275E-37f;
			bParam0->f_11 = { -997616521, 1157762749, 1136059217 };
			break;
		case 12:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -2.125516E+37f;
			bParam0->f_11 = { -996725295, 1159158302, 1134227512 };
			break;
		case 13:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -6.073288E+28f;
			bParam0->f_11 = { -996139521, 1159254566, 1134068335 };
			break;
		case 14:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -9.716002E+15f;
			bParam0->f_11 = { -995651811, 1158654911, 1134189992 };
			break;
		case 15:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -2.14266E-06f;
			bParam0->f_11 = { -997133115, 1158828474, 1134675008 };
			break;
		case 16:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -5.611622E-15f;
			bParam0->f_11 = { -995741939, 1158524377, 1134203093 };
			break;
		case 17:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -8.89924E-28f;
			bParam0->f_11 = { -996781341, 1158214044, 1135003058 };
			break;
		case 18:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -2.426253E-36f;
			bParam0->f_11 = { -997034512, 1158656755, 1134669408 };
			break;
		case 19:
			func_193(bParam0, iParam1);
			bParam0->f_5 = 2.138536f;
			bParam0->f_11 = { -995210082, 1159048551, 1134176138 };
			break;
	}
}

void func_140(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.451719E-37f;
	func_178(bParam0);
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 0;
	}
	switch (iParam1)
	{
		case 0:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			bParam0->f_5 = 1.556235f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 1:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			bParam0->f_5 = -3.54697E+20f;
			bParam0->f_11 = { 1160742329, 1158620392, 1125895471 };
			break;
		case 2:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			bParam0->f_5 = -7.010831E+29f;
			bParam0->f_11 = { 1158759424, 1158020974, 1129532155 };
			break;
		case 3:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			bParam0->f_5 = 0.5552369f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 4:
			func_180(bParam0, 2);
			func_180(bParam0, 3);
			bParam0->f_5 = 5.641576E-08f;
			bParam0->f_11 = { 1159436980, 1158518524, 1127193084 };
			break;
		case 5:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			bParam0->f_5 = -0.2321862f;
			bParam0->f_11 = { -999341769, 1153549610, 1131245824 };
			break;
		case 6:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			bParam0->f_5 = -1.205842E+25f;
			bParam0->f_11 = { -998248058, 1153643433, 1131245044 };
			break;
		case 7:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			bParam0->f_5 = -3.072352E+30f;
			bParam0->f_11 = { -998853848, 1154255222, 1131245044 };
			break;
		case 8:
			func_180(bParam0, 1);
			bParam0->f_5 = -1.409052E+17f;
			bParam0->f_11 = { -1000688253, 1153133963, 1131787328 };
			break;
		case 9:
			func_180(bParam0, 1);
			bParam0->f_5 = 5.022592E+20f;
			bParam0->f_11 = { -999960935, 1152995163, 1131748019 };
			break;
	}
}

void func_141(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 25;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -4.400322E+15f;
	if (iParam1 < 10)
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = 4.27551E+12f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -6.309624E-30f;
			bParam0->f_11 = { 1154364192, 1151788160, 1125180460 };
			break;
		case 1:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 7.606064E+25f;
			bParam0->f_11 = { 1154869233, 1152846377, 1125278476 };
			break;
		case 2:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 2.218614E+17f;
			bParam0->f_11 = { 1153706225, 1152094345, 1125190297 };
			break;
		case 3:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -1.157902E+13f;
			bParam0->f_11 = { 1152541464, 1154788643, 1128653927 };
			break;
		case 4:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -2.208555E-05f;
			bParam0->f_11 = { 1153908388, 1154337653, 1125090682 };
			break;
		case 5:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -6.017928E-08f;
			bParam0->f_11 = { 1154735909, 1155106681, 1128038151 };
			break;
		case 6:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -1.237041E-16f;
			bParam0->f_11 = { 1153040328, 1149590831, 1127637621 };
			break;
		case 7:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 5.533065E-30f;
			bParam0->f_11 = { 1152335237, 1151709616, 1126430749 };
			break;
		case 8:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 9885199;
			bParam0->f_11 = { 1155699398, 1150631311, 1129836629 };
			break;
		case 9:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 9.559201E+09f;
			bParam0->f_11 = { 1156747148, 1152229918, 1127341831 };
			break;
		case 10:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -4.436288E-35f;
			bParam0->f_11 = { 1124022813, 1155799348, 1128746117 };
			break;
		case 11:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -1.112515E-34f;
			bParam0->f_11 = { 1126222909, 1155178095, 1128302759 };
			break;
		case 12:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 8.374794E+15f;
			bParam0->f_11 = { 1124085524, 1156180820, 1128849369 };
			break;
		case 13:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 1.249266E+27f;
			bParam0->f_11 = { 1127834989, 1155794550, 1128809025 };
			break;
		case 14:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 4.025592E+09f;
			bParam0->f_11 = { 1128547897, 1155183043, 1128488488 };
			break;
		case 15:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 1.084824E-19f;
			bParam0->f_11 = { 1131359109, 1156530293, 1129108052 };
			break;
		case 16:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 2.098147E-10f;
			bParam0->f_11 = { 1140864727, 1156629084, 1128739524 };
			break;
		case 17:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 3.394846E-38f;
			bParam0->f_11 = { 1134731044, 1156432553, 1128796586 };
			break;
		case 18:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 1.905542E-27f;
			bParam0->f_11 = { 1135884150, 1155955537, 1127818507 };
			break;
		case 19:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 346.6985f;
			bParam0->f_11 = { 1140660978, 1156284065, 1128919446 };
			break;
		case 20:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 5.304888E+32f;
			bParam0->f_11 = { 1132321512, 1154821639, 1127963630 };
			break;
		case 21:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -1.086162E-34f;
			bParam0->f_11 = { 1134575491, 1155073307, 1128286637 };
			break;
		case 22:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 8.374264E+35f;
			bParam0->f_11 = { -1041303234, 1154911538, 1127437946 };
			Jump @1287; //curOff = 1202
			func_194(bParam0, iParam1);
			bParam0->f_5 = -1.348186E-11f;
			bParam0->f_11 = { -1046114730, 1154224028, 1126303511 };
			Jump @1287; //curOff = 1243
			func_194(bParam0, iParam1);
			bParam0->f_5 = -2.126682E-19f;
			bParam0->f_11 = { 1139806290, 1157718932, 1131095196 };
		}

void func_142(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 3;
	bParam0->f_2 = 2;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -6.410587E+31f;
	bVar0 = iParam1 >= 5;
	if (!bVar0)
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 1;
	}
	else
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_27 = 1;
	}
	func_195(bParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -8.485796E-24f;
			bParam0->f_11 = { 1132641849, -1005864187, 1114940268 };
			break;
		case 1:
			bParam0->f_5 = -2.34139E-33f;
			bParam0->f_11 = { 1139713409, -1014549655, 1125059997 };
			break;
		case 2:
			bParam0->f_5 = 7.108457E+35f;
			bParam0->f_11 = { 1127372406, -1019166966, 1123884849 };
			break;
		case 3:
			bParam0->f_5 = 9.424543E+32f;
			bParam0->f_11 = { -1022746812, -1045739062, 1119759685 };
			break;
		case 4:
			bParam0->f_5 = 2.14284E+19f;
			bParam0->f_11 = { 1145380361, -1011643053, 1118834350 };
			break;
		case 5:
			bParam0->f_5 = 7.742558E+18f;
			bParam0->f_11 = { -989618530, -993044008, 1124809462 };
			break;
		case 6:
			bParam0->f_5 = 2.403053E+11f;
			bParam0->f_11 = { -988729976, -993469028, 1125354812 };
			break;
		case 7:
			bParam0->f_5 = -4.366903E-09f;
			bParam0->f_11 = { -988712577, -995155559, 1125018469 };
			break;
		case 8:
			bParam0->f_5 = 9.101715E-25f;
			bParam0->f_11 = { -990212108, -995766511, 1122424082 };
			break;
		case 9:
			bParam0->f_5 = 9.554399E-36f;
			bParam0->f_11 = { -987869409, -995083456, 1125213686 };
			break;
	}
}

void func_143(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 3;
	bParam0->f_2 = 2;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = 0.0004024806f;
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_20[1] = 1.124298E+33f;
		bParam0->f_27 = 57;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_20[1] = -7.232669E-38f;
		bParam0->f_27 = 57;
	}
	func_196(bParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -1.847485E+37f;
			bParam0->f_11 = { -979847736, -983254584, 1102849880 };
			break;
		case 1:
			bParam0->f_5 = -2.051303E-29f;
			bParam0->f_11 = { -983064392, -983656830, 1111283728 };
			break;
		case 2:
			bParam0->f_5 = -8.891987E-14f;
			bParam0->f_11 = { -981869006, -982910158, 1109234549 };
			break;
		case 3:
			bParam0->f_5 = -0.002836091f;
			bParam0->f_11 = { -980572006, -982838118, 1096614098 };
			break;
		case 4:
			bParam0->f_5 = 1.590995E-26f;
			bParam0->f_11 = { -981324875, -983440745, 1111891876 };
			break;
		case 5:
			bParam0->f_5 = -1.540604E-29f;
			bParam0->f_11 = { 1154057929, 1157898625, 1134404600 };
			break;
		case 6:
			bParam0->f_5 = 6.382076E+10f;
			bParam0->f_11 = { 1156246072, 1157637798, 1132918646 };
			break;
		case 7:
			bParam0->f_5 = 1.774902E+24f;
			bParam0->f_11 = { 1153322754, 1158221229, 1135011758 };
			break;
		case 8:
			bParam0->f_5 = -8.16591E+23f;
			bParam0->f_11 = { 1143828549, 1158343595, 1130284253 };
			break;
		case 9:
			bParam0->f_5 = -0.0002165433f;
			bParam0->f_11 = { 1144859700, 1157515820, 1132803552 };
			break;
	}
}

void func_144(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -1.997944E+24f;
	func_178(bParam0);
	if (iParam1 < 5)
	{
		bParam0->f_27 = 24;
		bParam0->f_20[0] = -1.674072E+32f;
	}
	else
	{
		bParam0->f_27 = 24;
		bParam0->f_20[0] = 3.441672E-37f;
		bParam0->f_20[1] = -6.738816E-37f;
	}
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -4.178853E+33f;
			bParam0->f_11 = { 1138874207, 1149483180, 1128618223 };
			func_180(bParam0, 0);
			break;
		case 1:
			bParam0->f_5 = 1.370795E+25f;
			bParam0->f_11 = { 1141419185, 1147851535, 1126274761 };
			func_180(bParam0, 0);
			break;
		case 2:
			bParam0->f_5 = 9.042136E+19f;
			bParam0->f_11 = { -1022449556, 1150936087, 1126466414 };
			func_180(bParam0, 0);
			break;
		case 3:
			bParam0->f_5 = 2.160843E+11f;
			bParam0->f_11 = { 1137552143, 1151738464, 1127506903 };
			func_180(bParam0, 0);
			break;
		case 4:
			bParam0->f_5 = -3.011542E-17f;
			bParam0->f_11 = { 1139597577, 1149032461, 1127027612 };
			func_180(bParam0, 0);
			break;
		case 5:
			bParam0->f_5 = -4.446832E-24f;
			bParam0->f_11 = { -981235030, -987276933, 1085129989 };
			func_180(bParam0, 1);
			break;
		case 6:
			bParam0->f_5 = -4.622995E+21f;
			bParam0->f_11 = { -981130001, -988364378, 1102909800 };
			func_180(bParam0, 1);
			break;
		case 7:
			bParam0->f_5 = -1.802733E+33f;
			bParam0->f_11 = { -980393105, -987348890, -1061350801 };
			func_180(bParam0, 1);
			break;
		case 8:
			bParam0->f_5 = 1.967467f;
			bParam0->f_11 = { -980903801, -985394196, -1071267185 /* Float: -2.59f */ };
			func_180(bParam0, 1);
			break;
		case 9:
			bParam0->f_5 = -7.983214E+29f;
			bParam0->f_11 = { -981449811, -989801596, 1083838982 };
			func_180(bParam0, 1);
			break;
	}
}

void func_145(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = -2.764938E+31f;
			bParam0->f_11 = { -987648316, -1014741896, 1126279879 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = -3.932373E-38f;
			bParam0->f_11 = { -987684123, 1136819136, 1125408578 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = -4.217522E-34f;
			bParam0->f_11 = { -989247175, 1139436460, 1122968220 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = 4.754441E-35f;
			bParam0->f_11 = { -993221014, -994236548, 1118131821 };
			break;
		case 4:
			func_179(bParam0);
			bParam0->f_5 = 5.129355E-24f;
			bParam0->f_11 = { -1001499710, -991846804, 1114382349 };
			break;
		case 5:
			func_179(bParam0);
			bParam0->f_5 = 277.6303f;
			bParam0->f_11 = { 1155489095, 1153867170, 1126659935 };
			break;
		case 6:
			func_179(bParam0);
			bParam0->f_5 = 7.336496E+37f;
			bParam0->f_11 = { 1156906141, 1152215046, 1127467319 };
			break;
		case 7:
			func_179(bParam0);
			bParam0->f_5 = 3.488513E-14f;
			bParam0->f_11 = { 1142908396, 1157838665, 1130235875 };
			break;
		case 8:
			func_179(bParam0);
			bParam0->f_5 = -3.891272E+29f;
			bParam0->f_11 = { 1151470150, 1150367213, 1125524301 };
			break;
		case 9:
			func_179(bParam0);
			bParam0->f_5 = 2.633142E+37f;
			bParam0->f_11 = { -989641739, -995386273, 1124039697 };
			break;
		case 10:
			func_179(bParam0);
			bParam0->f_5 = -6.725374E-15f;
			bParam0->f_11 = { -989212607, -993655646, 1125410037 };
			break;
	}
}

void func_146(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = -9.677925E+28f;
			bParam0->f_11 = { -997542154, 1157860159, 1135917033 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = 1.15976E+21f;
			bParam0->f_11 = { -981047785, -984131167, 1107628138 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = -1.475104E+12f;
			bParam0->f_11 = { -982288543, -988035027, -1053212300 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = -5.826799E-05f;
			bParam0->f_11 = { -989272033, -986500208, 1103839767 };
			break;
		case 4:
			func_179(bParam0);
			bParam0->f_5 = -104.3275f;
			bParam0->f_11 = { -989708727, -995061336, 1124326316 };
			break;
		case 5:
			func_179(bParam0);
			bParam0->f_5 = -214.0117f;
			bParam0->f_11 = { -1000315293, 1141241518, 1114173656 };
			break;
		case 6:
			func_179(bParam0);
			bParam0->f_5 = 4.977976E-28f;
			bParam0->f_11 = { 1133271944, 1132722864, 1122092791 };
			break;
		case 7:
			func_179(bParam0);
			bParam0->f_5 = 2.99861E+07f;
			bParam0->f_11 = { 1153532590, 1151951645, 1125256770 };
			break;
		case 8:
			func_179(bParam0);
			bParam0->f_5 = -54188.87f;
			bParam0->f_11 = { 1160105939, 1150595099, 1122854935 };
			break;
		case 9:
			func_179(bParam0);
			bParam0->f_5 = -1482332f;
			bParam0->f_11 = { 1153213250, -989636818, 1110786284 };
			break;
	}
}

void func_147(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 7;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_178(bParam0);
	switch (iParam1)
	{
		case 0:
			func_179(bParam0);
			bParam0->f_5 = -1.026791E+10f;
			bParam0->f_11 = { -994349899, -1005945697, 1124323804 };
			break;
		case 1:
			func_179(bParam0);
			bParam0->f_5 = -2.105499E+09f;
			bParam0->f_11 = { -992210537, 1132875754, 1122853826 };
			break;
		case 2:
			func_179(bParam0);
			bParam0->f_5 = -1.206049E-09f;
			bParam0->f_11 = { -986930676, -1021440920, 1125574076 };
			break;
		case 3:
			func_179(bParam0);
			bParam0->f_5 = -1.383321E-18f;
			bParam0->f_11 = { -1003232130, -1002620434, 1111966032 };
			break;
		case 4:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			bParam0->f_5 = -1.482653E+35f;
			bParam0->f_11 = { 1148051879, -996406306, 1113029141 };
			break;
		case 5:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			bParam0->f_5 = 2.080852E-36f;
			bParam0->f_11 = { 1149765967, -995011794, 1113468586 };
			break;
		case 6:
			func_180(bParam0, 0);
			func_180(bParam0, 2);
			bParam0->f_5 = 5.81204E-20f;
			bParam0->f_11 = { 1151415856, -993495414, 1115716307 };
			break;
	}
}

void func_148(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 8;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -6.868404E+23f;
			bParam0->f_11 = { -989719630, -986879604, 1117463288 };
			break;
		case 1:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -0.02577076f;
			bParam0->f_11 = { -988991611, -986448994, 1103674055 };
			break;
		case 2:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -2.063277E-28f;
			bParam0->f_11 = { -986263483, -986898915, 1119832166 };
			break;
		case 3:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 6.326727E-20f;
			bParam0->f_11 = { -987396588, -986047399, 1117313263 };
			break;
		case 4:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -3.354263E+31f;
			bParam0->f_11 = { -988725571, -989745785, 1118847028 };
			break;
		case 5:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -1.882589E-31f;
			bParam0->f_11 = { -984090304, -988968142, 1083628218 };
			break;
		case 6:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 2.757583E+32f;
			bParam0->f_11 = { -983575685, -983290305, -1051860245 };
			break;
		case 7:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -3.447738E-37f;
			bParam0->f_11 = { -979094448, -981654036, -1066910142 };
			break;
	}
}

void func_149(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam1)
	{
		case 35:
			bParam0->f_8 = -1.07135E+22f;
			break;
		case 36:
			bParam0->f_8 = 50.20924f;
			break;
		case 37:
			bParam0->f_8 = 3.224022E-15f;
			break;
		case 38:
			bParam0->f_8 = 1.124335E-06f;
			break;
		case 39:
			bParam0->f_8 = 0.001659534f;
			break;
		case 40:
			bParam0->f_8 = -3.304058E+27f;
			break;
		case 41:
			bParam0->f_8 = -7.373806E+33f;
			break;
		case 42:
			bParam0->f_8 = 2.287571E+19f;
			break;
		case 43:
			bParam0->f_8 = 6.454911E-26f;
			break;
		case 44:
			bParam0->f_8 = -4.007869E-37f;
			break;
		case 45:
			bParam0->f_8 = -6.391861E-27f;
			break;
		case 46:
			bParam0->f_8 = 5.878796E-06f;
			break;
	}
	iVar0 = func_90(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if ((iParam1 == 41 || iParam1 == 42) || iParam1 == 40)
	{
		bParam0->f_7 = 1;
	}
	else if (iParam1 == 43)
	{
		bParam0->f_7 = 2;
	}
	else if (iParam1 == 44)
	{
		bParam0->f_7 = 3;
	}
	else if (iParam1 == 45 || iParam1 == 46)
	{
		bParam0->f_7 = 4;
	}
	*bParam0 = func_198(iVar0);
	bParam0->f_1 = 0;
	bParam0->f_6 = 2;
	func_183(bParam0, 32);
	if (iParam2 != -1)
	{
		bParam0->f_9 = func_200(func_199(iVar0), iParam2);
		bParam0->f_15[0] = func_201(func_199(iVar0), iParam2);
		bParam0->f_5 = func_202(iVar0, iParam2);
		bParam0->f_11 = { func_203(iVar0, iParam2) };
	}
}

Vector3 func_150(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam3 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	iVar2 = func_204(iParam1);
	iVar1 = iParam2;
	if ((iVar2 && iVar1) != 0)
	{
	}
	TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(iParam0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false, false), (iVar2 || iVar1));
}

struct<2> func_152(int iParam0, int iParam1)
{
	var uVar0;
	struct<33> Var1;
	struct<2> Var34;

	uVar0 = func_205(func_199(iParam0), iParam1);
	Var1 = { func_206(uVar0, 1, iParam0, iParam1) };
	if (Var1.f_3 != 0)
	{
		Var34 = { func_207(Var1.f_3, 4) };
		if (!func_29(Var34))
		{
			return func_208();
		}
		return Var34;
	}
	return func_208();
}

int func_153(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_72(&Var1, iParam0) && func_209(&Var1, uParam1))
	{
		func_73(Var1, 1.728613E+24f, &iVar0, 0);
	}
	return iVar0;
}

bool func_154(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;

	iVar3 = func_210(0);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
	iVar2 = 0;
	while (iVar2 <= (iVar3 - 1))
	{
		iVar0 = ((iVar1 + iVar2) % iVar3);
		iVar15 = func_211(0, iVar0);
		if (iVar15 == 9.903063E+30f)
		{
		}
		else
		{
			iVar7 = func_212(0, iVar15);
			iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
			iVar6 = 0;
			while (iVar6 <= (iVar7 - 1))
			{
				iVar4 = ((iVar5 + iVar6) % iVar7);
				iVar16 = func_213(0, iVar15, iVar4);
				if (iVar16 == 0)
				{
				}
				else
				{
					iVar8 = func_214(iVar16);
					if (iVar8 <= 0)
					{
						Jump @384; //curOff = 139
					}
					else if (iParam1 > 0)
					{
						if (iVar8 != iParam1)
						{
						}
						else
						{
							iVar9 = func_215(iVar16, 0, 0);
							iVar11 = (BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar9))) - 1);
							iVar10 = func_216(iVar16);
							if ((iVar11 && iVar10) == iVar11)
							{
								Jump @384; //curOff = 208
							}
							else if (iVar17 == 0)
							{
								bVar20 = true;
							}
							else
							{
								bVar20 = false;
							}
							if (iParam2 != -1)
							{
								iVar19 = func_217(iVar16);
								if (iVar19 == iParam2)
								{
									if (!bVar20)
									{
										if (iVar17 != 0)
										{
											if (iParam2 != func_217(iVar17) && (iParam3 == 0 || (iParam3 != 0 && iParam3 == iVar15)))
											{
												iVar17 = iVar16;
											}
										}
									}
								}
								else
								{
									if (bVar20)
									{
										iVar17 = iVar16;
									}
								}
								else if (iParam3 != 0)
								{
									if (iParam3 == iVar15)
									{
										if (!bVar20)
										{
											if (iVar17 != 0)
											{
												if (iParam3 != func_218(iVar17))
												{
													iVar17 = iVar16;
												}
											}
										}
									}
									else
									{
										if (bVar20)
										{
											iVar17 = iVar16;
										}
									}
									else
									{
										iVar18 = iVar16;
									}
									else
									{
										iVar6++;
									}
									if (iVar18 != 0)
									{
									}
									else
									{
										iVar2++;
									}
									if (iVar18 == 0)
									{
										iVar18 = iVar17;
									}
									if (iVar18 != 0)
									{
										*uParam0 = iVar18;
										uParam0->f_2 = func_219(iVar18);
										iVar9 = func_215(iVar18, 0, 0);
										iVar10 = func_216(iVar18);
										iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
										iVar14 = 0;
										while (iVar14 <= (iVar9 - 1))
										{
											iVar12 = ((iVar13 + iVar14) % iVar9);
											if (MISC::IS_BIT_SET(iVar10, iVar12))
											{
											}
											else
											{
												uParam0->f_1 = iVar12;
											}
											else
											{
												iVar14++;
											}
										}
									}
									return *uParam0 != 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_155(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = 1;
	uParam0->f_6 = iParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	uParam0->f_21[0 /*3*/] = { Global_34 };
	uParam0->f_7 = iParam3;
}

void func_156(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051645.f_16[13] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[13]))
	{
		return;
	}
	*uParam0 = 178;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 40, 5, Global_1051645.f_16[13]);
	func_220(uParam0, uParam0->f_1);
}

bool func_157(int iParam0, int iParam1)
{
	return func_221(iParam0->f_25, iParam1);
}

int func_158(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0;
	iVar1 = func_222(uParam1->f_3, Global_1257494[iParam2 /*103*/].f_58[iVar0]);
	if (iVar1 == 0)
	{
		iVar2 = (uParam1->f_1 - 1);
		while (iVar2 >= 0)
		{
			if (MISC::IS_BIT_SET(uParam1->f_3, iVar2))
			{
				return iVar2;
			}
			iVar2 = (iVar2 + -1);
		}
		return 0;
	}
	return func_223(iVar1);
}

int func_159(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;

	iVar0 = iParam0;
	iVar19 = -1;
	iVar20 = 0;
	while (iVar20 <= 31)
	{
		iVar22 = PLAYER::INT_TO_PLAYERINDEX(iVar20);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22))
		{
		}
		else if (func_224(func_150(iVar22), uParam2->f_11) > Global_1901671.f_242.f_64)
		{
		}
		else
		{
			iVar21 = func_222(uParam2->f_3, Global_1257494[iVar20 /*103*/].f_58[iVar0]);
			iVar19 = (iVar19 && iVar21);
			iVar18 = func_225(iVar21, 0);
			if (iVar18 != -1)
			{
				uVar1[iVar18]++;
			}
		}
		iVar20++;
	}
	if (func_226(iVar19) > 0)
	{
		iVar23 = func_160(iVar19, uParam2->f_1, 1, 0);
		return iVar23;
	}
	else
	{
		iVar24 = -1;
		iVar25 = -1;
		iVar18 = 0;
		while (iVar18 <= 15)
		{
			if (uVar1[iVar18] == 0)
			{
			}
			else if (uVar1[iVar18] > iVar25)
			{
				iVar24 = iVar18;
				iVar25 = uVar1[iVar18];
			}
			iVar18++;
		}
		if (iVar24 != -1)
		{
			return iVar24;
		}
	}
	return func_227(iParam0, iParam1);
}

int func_160(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[32];

	if (iParam1 > 32)
	{
	}
	iVar1 = func_228(iParam3);
	if (iParam2 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iParam1);
		return iVar0;
	}
	iVar2 = iVar1;
	while (iVar2 <= ((iVar1 + iParam1) - 1))
	{
		if ((iParam2 == 1 && MISC::IS_BIT_SET(iParam0, iVar2)) || (iParam2 == 2 && !MISC::IS_BIT_SET(iParam0, iVar2)))
		{
			iVar4[iVar3] = iVar2;
			iVar3++;
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		return -1;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
	return iVar4[iVar0];
}

void func_161(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_207(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1.976466E+29f;
		case 2:
			return 2.828335E+24f;
		case 3:
			return -1.880124E+31f;
		case 4:
			return -5.326636E+26f;
		case 6:
			return -3.151219E-38f;
		case 7:
			return -2.883699E-16f;
		case 5:
			return -6.112184E+24f;
		case 11:
			return -1.706216E+38f;
		case 8:
			return -2.513311E-05f;
		case 9:
			return -2.554111E-20f;
		case 10:
			return -10.51987f;
		case 12:
			return -2.857678E-15f;
		case 13:
			return 1.184543E+30f;
		case 14:
			return 1.128346E+20f;
		case 15:
			return -6.115504E+12f;
		case 16:
			return 3.056045E-06f;
		case 17:
			return 8.84035E-27f;
		case 18:
			return -6.083075E-30f;
		case 19:
			return 1.23234E+29f;
		case 20:
			return 2.398261E-20f;
		case 31:
			return 1.830987E-14f;
		case 21:
			return 2.909889E-24f;
		case 28:
			return -3.058544E-29f;
		case 24:
			return -3.329474E+20f;
		case 25:
			return 5.050762E+17f;
		case 22:
			return -3.08498E-10f;
		case 23:
			return 1.659243E-18f;
		case 29:
			return 9.031094E-17f;
		case 26:
			return -8.582618E+12f;
		case 30:
			return -6.426222E+20f;
		case 27:
			return 1.2504E+17f;
		case 32:
			return 2.685182E+25f;
		case 33:
			return -2.845505E-05f;
		case 34:
			return 1.451477E-06f;
		default:
			break;
	}
	return 0;
}

int func_163(int iParam0)
{
	return 2452;
}

var func_164(struct<2> Param0, var uParam2)
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

bool func_165(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

bool func_166(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_165(uParam0))
	{
		return false;
	}
	if (!func_229(&(uParam1->f_8)))
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = PLAYER::PLAYER_ID();
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	iVar0 = func_230(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return false;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_231(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return false;
			}
			break;
	}
	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	uParam0->f_3[iVar1 /*40*/] = { *uParam1 };
	func_232(&(uParam0->f_3[iVar1 /*40*/]), 0);
	*uParam0++;
	return true;
}

void func_167(var uParam0)
{
	struct<6> Var0;

	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_2 = -1;
	Var0.f_5.f_3 = 255;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_8 = 2;
	Var0.f_5.f_8.f_1 = -1;
	Var0.f_5.f_8.f_5 = -1;
	Var0.f_5.f_8.f_5.f_1 = -1;
	Var0.f_5.f_8.f_5.f_3 = -1;
	Var0.f_5.f_8.f_5.f_4 = -1;
	Var0.f_5.f_8.f_5.f_5 = -1;
	Var0.f_5.f_8.f_5.f_6 = -1;
	Var0.f_5.f_8.f_5.f_6.f_1 = -1;
	Var0.f_5.f_8.f_5.f_9 = 2;
	Var0.f_5.f_23.f_1 = 1024;
	Var0.f_5.f_23.f_4 = -15;
	Var0.f_5.f_23.f_5 = 255;
	Var0.f_5.f_23.f_8 = 1;
	Var0.f_5.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_5.f_23.f_13 = -1;
	Var0.f_5 = { *uParam0 };
	Var0.f_4 = 0;
	func_234(&Var0, func_233(0, 8));
}

int func_168(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_72(&Var1, uParam0))
	{
		iVar0 = ((func_235() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_169(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return func_110(Global_1257494[iParam1 /*103*/].f_96, iParam0);
}

void func_170(int iParam0)
{
	int iVar0;

	Global_1260791.f_3481 = 0;
	iVar0 = Global_1260791.f_3480;
	iVar0++;
	if (iVar0 == 47)
	{
		*iParam0 = 1;
	}
	else
	{
		Global_1260791.f_3480 = iVar0;
	}
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = iVar2;
	fVar0 = (fVar0 + func_236(&iVar1, iParam0, iParam1, iParam2, iParam3));
	if (iVar1 != 0)
	{
		if (func_237(iVar1))
		{
			iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
			if (Global_1257494[iVar3 /*103*/].f_97[iParam3->f_7] < func_238(iParam3->f_7))
			{
				if (!func_30(Global_1260791.f_3487[iParam3->f_7]) || func_31(Global_1260791.f_3487[iParam3->f_7]) >= Global_1901671.f_242.f_73)
				{
					Global_1257494[iVar3 /*103*/].f_97[iParam3->f_7]++;
					func_97(&(Global_1260791.f_3487[iParam3->f_7]));
				}
			}
		}
		fVar0 = -1f;
	}
	else if (fVar0 > Global_1260791.f_3484)
	{
		Global_1260791.f_3484 = fVar0;
		Global_1260791.f_3483 = iParam2;
	}
	Global_1260791[iParam2 /*4*/].f_3 = iVar1;
	if (Global_1260791[iParam2 /*4*/].f_1 < Global_1295619.f_16)
	{
		func_239(iParam2);
		Global_1260791[iParam2 /*4*/].f_1 = 0;
		Global_1260791[iParam2 /*4*/].f_2 = 0;
	}
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -4.965126E+35f;
		case 2:
			return 8.168326E+07f;
		case 14:
			return 1.620656E+33f;
		case 4:
			return 1.244255E+11f;
		case 5:
			return 9.428104E+32f;
		case 6:
			return -3.8492E+32f;
		case 7:
			return -4.777519E-18f;
		case 8:
			return 3.851762E+09f;
		case 9:
			return 6.790077E-13f;
		case 10:
			return joaat("NET_BEAT_TREE_MAP");
		case 11:
			return -1.157693E+32f;
		case 12:
			return -1.338171E-17f;
		case 13:
			return 4.652846E+25f;
		case 3:
			return 1.196945f;
		case 15:
			return -2.378889E+11f;
		case 16:
			return 8.906811E-29f;
		case 17:
			return 23624.72f;
		case 18:
			return 5.653363E-14f;
		case 19:
			return 8.253E+18f;
		case 20:
			return 3.013693E+08f;
		case 31:
			return -1.53937E-17f;
		case 21:
			return -1.101959E-07f;
		case 28:
			return -1.452968E+38f;
		case 25:
			return 2.671046E+27f;
		case 24:
			return -1.027782E-21f;
		case 32:
			return -6.556114E+11f;
		case 22:
			return -1.11631E-37f;
		case 29:
			return -4.074666E-33f;
		case 26:
			return -1.084153E+21f;
		case 30:
			return -3.581337E-11f;
		case 27:
			return -1.713659E-35f;
		case 33:
			return -1.560962E+29f;
		case 34:
			return -2.264373E-35f;
		case 23:
			return 1.091982E-29f;
		default:
			break;
	}
	return 0;
}

struct<2> func_173(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_174(var uParam0, int iParam1, int iParam2)
{
	if (func_240(iParam1, iParam2))
	{
		func_241(uParam0, iParam1, 8192, "host");
	}
}

void func_175(var uParam0, int iParam1, int iParam2)
{
	if (func_242(iParam1, iParam2))
	{
		Global_1254978[iParam1 /*3*/].f_1++;
	}
	if (Global_1254978[iParam1 /*3*/].f_1 > 7)
	{
		func_241(uParam0, iParam1, 4096, "host");
	}
}

void func_176(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;

	fVar0 = Global_1901671.f_242.f_62;
	if (fVar0 < 1f)
	{
		fVar2 = 0f;
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
			{
			}
			else if (Global_1257494[iVar1 /*103*/].f_94 == iParam1)
			{
				fVar2 = Global_1257494[iVar1 /*103*/].f_95;
			}
			else
			{
				iVar1++;
			}
		}
		if (func_30(Global_1254978[iParam1 /*3*/]) && func_31(Global_1254978[iParam1 /*3*/]) < Global_1901671.f_242.f_58)
		{
			func_241(uParam0, iParam1, 32, "host");
			func_97(&(Global_1254978[iParam1 /*3*/]));
			return;
		}
		fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		fVar4 = func_243(0f, 1f, (fVar2 / 1069547520));
		fVar5 = (fVar0 + (fVar4 * (1f - fVar0)));
		if (fVar2 < 1069547520 && fVar3 > fVar5)
		{
			Global_1254978.f_2512.f_2++;
			if (Global_1254978.f_2512.f_2 < 10)
			{
				func_241(uParam0, iParam1, 32, "host");
				func_97(&(Global_1254978[iParam1 /*3*/]));
			}
			else
			{
				func_33(&(Global_1254978[iParam1 /*3*/]));
				Global_1254978.f_2512.f_2 = 0;
			}
		}
		else
		{
			func_33(&(Global_1254978[iParam1 /*3*/]));
			Global_1254978.f_2512.f_2 = 0;
		}
	}
}

void func_177(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_244(bParam0);
			break;
		case 1:
			func_244(bParam0);
			break;
		case 2:
			func_244(bParam0);
			break;
		case 3:
			func_245(bParam0);
			break;
		case 4:
			func_244(bParam0);
			break;
		case 5:
			func_244(bParam0);
			break;
		case 6:
			func_245(bParam0);
			break;
		case 7:
			func_245(bParam0);
			break;
		case 8:
			func_245(bParam0);
			break;
		case 9:
			func_244(bParam0);
			break;
		default:
			func_179(bParam0);
			func_178(bParam0);
			break;
	}
}

void func_178(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_2 - 1))
	{
		func_246(bParam0, iVar0);
		iVar0++;
	}
}

void func_179(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_1 - 1))
	{
		func_180(bParam0, iVar0);
		iVar0++;
	}
}

void func_180(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_3), iParam1);
}

void func_181(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
		case 14:
			func_247(bParam0);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_248(bParam0);
			break;
		default:
			func_179(bParam0);
			func_178(bParam0);
			break;
	}
}

void func_182(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_246(bParam0, 0);
			break;
		case 1:
		case 2:
			func_246(bParam0, 1);
			func_246(bParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_246(bParam0, 0);
			func_246(bParam0, 2);
			break;
		case 8:
			func_246(bParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_246(bParam0, 1);
			break;
		default:
			func_178(bParam0);
			break;
	}
}

void func_183(bool bParam0, int iParam1)
{
	func_249(&(bParam0->f_25), iParam1);
}

void func_184(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_250(bParam0);
			break;
		case 1:
			func_251(bParam0);
			break;
		case 2:
			func_252(bParam0);
			break;
		case 3:
			func_253(bParam0);
			break;
		default:
			func_179(bParam0);
			func_178(bParam0);
			break;
	}
}

int func_185(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

Vector3 func_186(int iParam0)
{
	if (!func_254(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

void func_187(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_255(bParam0);
			break;
		case 1:
		case 2:
			func_256(bParam0);
			break;
		case 3:
		case 4:
			func_257(bParam0);
			break;
		default:
			func_178(bParam0);
			break;
	}
	func_179(bParam0);
}

void func_188(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_246(bParam0, 0);
			func_246(bParam0, 2);
			break;
		case 1:
			func_246(bParam0, 1);
			func_246(bParam0, 3);
			break;
		default:
			func_179(bParam0);
			func_178(bParam0);
			break;
	}
}

void func_189(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_180(bParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_180(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_180(bParam0, 0);
			break;
		default:
			func_180(bParam0, 0);
			break;
	}
	func_178(bParam0);
}

void func_190(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_180(bParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_180(bParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_180(bParam0, 2);
			break;
		default:
			func_179(bParam0);
			break;
	}
	func_178(bParam0);
}

void func_191(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_180(bParam0, 0);
			func_246(bParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_180(bParam0, 1);
			func_246(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_180(bParam0, 2);
			func_246(bParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_180(bParam0, 3);
			func_246(bParam0, 0);
			break;
	}
}

void func_192(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_180(bParam0, 0);
			func_246(bParam0, 0);
			break;
		case 2:
			func_180(bParam0, 1);
			func_246(bParam0, 0);
			break;
		case 3:
		case 4:
			func_180(bParam0, 2);
			func_246(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_180(bParam0, 3);
			func_246(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_180(bParam0, 4);
			func_246(bParam0, 1);
			break;
	}
}

void func_193(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_180(bParam0, 3);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			break;
		default:
			func_179(bParam0);
			break;
	}
	func_178(bParam0);
}

void func_194(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_180(bParam0, 3);
			break;
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			break;
		default:
			func_179(bParam0);
			break;
	}
	func_178(bParam0);
}

void func_195(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_246(bParam0, 0);
			func_180(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_246(bParam0, 1);
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			func_180(bParam0, 2);
			break;
		default:
			func_246(bParam0, 0);
			func_180(bParam0, 0);
			break;
	}
}

void func_196(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_246(bParam0, 0);
			func_180(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_246(bParam0, 1);
			func_180(bParam0, 0);
			func_180(bParam0, 1);
			break;
		default:
			func_246(bParam0, 0);
			func_180(bParam0, 0);
			break;
	}
}

void func_197(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_178(bParam0);
			func_179(bParam0);
			break;
		default:
			func_178(bParam0);
			func_179(bParam0);
			break;
	}
}

int func_198(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_3;
}

int func_199(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

var func_200(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_72(&Var1, iParam0) && func_258(&Var1, iParam1))
	{
		func_73(Var1, 16.1929f, &uVar0, 0);
	}
	return uVar0;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_72(&Var1, iParam0) && func_258(&Var1, iParam1))
	{
		func_73(Var1, -12.40885f, &iVar0, 0);
	}
	return iVar0;
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_259(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

Vector3 func_203(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_259(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

int func_204(int iParam0)
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

var func_205(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_72(&Var1, iParam0) && func_258(&Var1, iParam1))
	{
		func_73(Var1, -1.432632E-25f, &uVar0, 0);
	}
	return uVar0;
}

struct<33> func_206(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<33> Var0;

	if (!func_260(4, iParam0, &Var0))
	{
	}
	return Var0;
}

struct<2> func_207(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_261(iParam0, &(Global_1072759.f_573), func_67(iParam1));
			break;
		case 3:
			Var0.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_602), func_67(iParam1));
			break;
		case 4:
			Var0.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_2104), func_67(iParam1));
			break;
		case 5:
			Var0.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_12606), func_67(iParam1));
			break;
		case 6:
			Var0.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_12908), func_67(iParam1));
			break;
		case 7:
			Var0.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_15910), func_67(iParam1));
			break;
		case 8:
			Var0.f_1 = func_261(iParam0, &(Global_1072759.f_573.f_16512), func_67(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_208();
	}
	return Var0;
}

struct<2> func_208()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_209(bool bParam0, var uParam1)
{
	bParam0->f_2 = 4.206815E-11f;
	bParam0->f_3 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_210(int iParam0)
{
	var uVar0;

	if (!func_262(&uVar0))
	{
		return 0;
	}
	if (!func_263(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 8, func_264(iParam0), 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 12, 0, 0, 1))
	{
		return 0;
	}
	return func_265(&uVar0, 2);
}

var func_211(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_262(&uVar0))
	{
		return 0;
	}
	if (!func_263(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 8, func_264(iParam0), 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 12, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 15, iParam1, 0, 1))
	{
		return 0;
	}
	return func_266(&uVar0, 1);
}

int func_212(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_262(&uVar0))
	{
		return 0;
	}
	if (!func_263(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 8, func_264(iParam0), 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 12, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 13, iParam1, 0, 0))
	{
		return 0;
	}
	if (!func_263(&uVar0, 9, 0, 0, 1))
	{
		return 0;
	}
	return func_265(&uVar0, 0);
}

var func_213(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_262(&uVar0))
	{
		return 0;
	}
	if (!func_263(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 8, func_264(iParam0), 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 12, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 13, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 9, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 11, iParam2, 0, 1))
	{
		return 0;
	}
	return func_267(&uVar0, 1);
}

int func_214(int iParam0)
{
	var uVar0;
	int iVar5;

	iVar5 = func_268(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_262(&uVar0))
	{
		return 0;
	}
	if (!func_263(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 8, func_264(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 9, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 10, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 17, 0, 0, 0))
	{
		return 1;
	}
	return func_265(&uVar0, 0) + 1;
}

int func_215(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar5;

	iVar5 = func_268(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_262(&uVar0))
	{
		return 0;
	}
	if (!func_263(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 8, func_264(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 9, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 10, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 21, func_269(iParam1), 0, 1))
	{
		return 0;
	}
	if (!func_263(&uVar0, 22, func_270(iParam2), 0, 1))
	{
		return 0;
	}
	return func_265(&uVar0, 1);
}

int func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	while (iVar0 <= (func_271() - 1))
	{
		iVar3 = iVar0;
		iVar1 = 0;
		while (iVar1 <= (3 - 1))
		{
			iVar4 = iVar1;
			iVar5 = func_272(iVar3, iVar4);
			if (iParam0 != iVar5)
			{
			}
			else
			{
				MISC::SET_BIT(&uVar2, func_273(iVar3, iVar4));
			}
			iVar1++;
		}
		iVar0++;
	}
	return uVar2;
}

int func_217(int iParam0)
{
	var uVar0;
	int iVar5;

	iVar5 = func_268(iParam0);
	if (iVar5 == -1)
	{
		return -1;
	}
	if (!func_262(&uVar0))
	{
		return -1;
	}
	if (!func_263(&uVar0, 5, 0, 0, 1))
	{
		return -1;
	}
	if (!func_263(&uVar0, 6, 0, 0, 1))
	{
		return -1;
	}
	if (!func_263(&uVar0, 8, func_264(iVar5), 0, 1))
	{
		return -1;
	}
	if (!func_263(&uVar0, 9, 0, 0, 1))
	{
		return -1;
	}
	if (!func_263(&uVar0, 10, iParam0, 0, 1))
	{
		return -1;
	}
	if (!func_263(&uVar0, 16, 0, 0, 1))
	{
		return -1;
	}
	return func_274(&uVar0, 1);
}

int func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar7;
	var uVar8;
	var uVar9;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar7 = func_268(iParam0);
	if (iVar7 == -1)
	{
		return 0;
	}
	if (!func_262(&Var2))
	{
		return 0;
	}
	if (!func_263(&Var2, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&Var2, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&Var2, 8, func_264(iVar7), 0, 1))
	{
		return 0;
	}
	if (!func_263(&Var2, 12, 0, 0, 1))
	{
		return 0;
	}
	uVar8 = Var2.f_1;
	iVar1 = func_265(&Var2, 2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var2.f_1 = uVar8;
		if (!func_263(&Var2, 15, iVar0, 0, 1))
		{
		}
		else
		{
			uVar9 = Var2.f_1;
			if (!func_263(&Var2, 9, 0, 0, 1))
			{
			}
			else if (!func_263(&Var2, 10, iParam0, 0, 0))
			{
			}
			else
			{
				Var2.f_1 = uVar9;
				return func_266(&Var2, 1);
			}
		}
		iVar0++;
	}
	return 0;
}

int func_219(int iParam0)
{
	struct<2> Var0;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	var uVar9;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar5 = func_268(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_262(&Var0))
	{
		return 0;
	}
	if (!func_263(&Var0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&Var0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_263(&Var0, 8, func_264(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_263(&Var0, 12, 0, 0, 1))
	{
		return 0;
	}
	uVar9 = Var0.f_1;
	iVar8 = func_265(&Var0, 2);
	iVar7 = 0;
	while (iVar7 <= (iVar8 - 1))
	{
		Var0.f_1 = uVar9;
		if (!func_263(&Var0, 15, iVar7, 0, 1))
		{
		}
		else
		{
			uVar6 = func_266(&Var0, 1);
			if (!func_263(&Var0, 9, 0, 0, 1))
			{
			}
			else if (!func_263(&Var0, 10, iParam0, 0, 0))
			{
			}
			else
			{
				return uVar6;
			}
		}
		iVar7++;
	}
	return 0;
}

void func_220(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_275(iVar0);
		if (func_110(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		iVar2++;
	}
}

bool func_221(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_222(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = (uParam1 && iParam0);
	return iVar0 ^ iParam0;
}

int func_223(int iParam0)
{
	iParam0 = (iParam0 && -iParam0);
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 0;
		case 2:
			return 1;
		case 4:
			return 2;
		case 8:
			return 3;
		case 16:
			return 4;
		case 32:
			return 5;
		case 64:
			return 6;
		case 128:
			return 7;
		case 256:
			return 8;
		case 512:
			return 9;
		case 1024:
			return 10;
		case 2048:
			return 11;
		case 4096:
			return 12;
		case 8192:
			return 13;
		case 16384:
			return 14;
		case 32768:
			return 15;
		case 65536:
			return 16;
		case 131072:
			return 17;
		case 262144:
			return 18;
		case 524288:
			return 19;
		case 1048576:
			return 20;
		case 2097152:
			return 21;
		case 4194304:
			return 22;
		case 8388608:
			return 23;
		case 16777216:
			return 24;
		case 33554432:
			return 25;
		case 67108864:
			return 26;
		case 134217728:
			return 27;
		case 268435456:
			return 28;
		case 536870912:
			return 29;
		case 1073741824:
			return 30;
	}
	return -1;
}

float func_224(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_225(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	while (iVar0 <= 31)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_226(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_227(int iParam0, int iParam1)
{
	struct<29> Var0;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_87(&Var0, iParam0, iParam1, -1, 255);
	return func_160(Var0.f_3, Var0.f_1, 1, 0);
}

int func_228(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	if (MISC::IS_BIT_SET(iParam0, 31))
	{
		iVar0++;
		iParam0 ^= -1;
	}
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

bool func_229(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_276(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

int func_230(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_277(uParam1, &(uParam0->f_3[iVar1 /*40*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_231(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<29> Var0;
	struct<2> Var33;
	bool bVar35;
	int iVar36[4];
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;

	Var33 = -1;
	Var33.f_1 = -1;
	if (func_29(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_29(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_278(uParam0->f_8.f_2))
	{
		bVar35 = true;
	}
	else
	{
		bVar35 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_280(func_279(Var33), &Var0))
	{
		return false;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar36[0] = 0;
	}
	else
	{
		iVar36[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar36[1] = 0;
	}
	else
	{
		iVar36[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar36[2] = 0;
	}
	else
	{
		iVar36[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar36[3] = 0;
	}
	else
	{
		iVar36[3] = 1;
	}
	if (bVar35)
	{
		iVar43 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		iVar44 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		iVar45 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		iVar46 = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
	}
	else
	{
		NETWORK::GET_RESERVED_MISSION_ENTITIES_IN_AREA(uParam0->f_8.f_2, false, &iVar43, &iVar44, &iVar45, &iVar46);
	}
	iVar41 = 0;
	while (iVar41 < 4)
	{
		iVar47 = iVar41;
		if (iVar47 == -1)
		{
		}
		else if (!iVar36[iVar41])
		{
		}
		else
		{
			switch (iVar47)
			{
				case 0:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_PEDS() - iVar43);
					if (iVar42 < Var0.f_25)
					{
						return false;
					}
					break;
					break;
				case 1:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - iVar44);
					if (iVar42 < Var0.f_26)
					{
						return false;
					}
					break;
					break;
				case 2:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - iVar45);
					if (iVar42 < Var0.f_27)
					{
						return false;
					}
					break;
					break;
				case 3:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - iVar46);
					if (iVar42 < Var0.f_28)
					{
						return false;
					}
					break;
					break;
			}
		}
		iVar41++;
	}
	return true;
}

void func_232(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

var func_233(int iParam0, int iParam1)
{
	return func_281(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_234(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 45, 37, &uParam1);
}

int func_235()
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

float func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;

	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar1 = (fVar1 + func_282(iParam0, iParam1, iParam2, iParam3, iParam4, iVar0));
		if (!func_283(iParam0))
		{
		}
		else
		{
			iVar0++;
		}
	}
	func_284(iParam0, iParam3, iParam1, iParam4);
	return fVar1;
}

bool func_237(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 32:
		case 64:
		case 128:
		case 4096:
		case 65536:
		case 131072:
		case 524288:
		case 1048576:
			return true;
		default:
			break;
	}
	return false;
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_242.f_72;
		default:
			break;
	}
	return -1;
}

void func_239(int iParam0)
{
	func_285(&(Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_29), iParam0, 28);
}

bool func_240(int iParam0, int iParam1)
{
	return func_286(&(Global_1257494[iParam1 /*103*/].f_29), iParam0, 28);
}

void func_241(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!func_110(*iParam0, iParam2))
	{
		func_287(iParam1, iParam2);
		func_113(iParam0, iParam2);
	}
}

bool func_242(int iParam0, int iParam1)
{
	return func_286(&(Global_1257494[iParam1 /*103*/].f_29), iParam0, 28);
}

float func_243(float fParam0, float fParam1, float fParam2)
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

void func_244(bool bParam0)
{
	func_180(bParam0, 0);
	func_180(bParam0, 1);
	func_180(bParam0, 3);
	func_178(bParam0);
}

void func_245(bool bParam0)
{
	func_179(bParam0);
	func_288(bParam0, 0, 3);
}

void func_246(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_4), iParam1);
}

void func_247(bool bParam0)
{
	func_180(bParam0, 0);
	func_246(bParam0, 0);
	func_246(bParam0, 1);
	func_246(bParam0, 4);
	func_246(bParam0, 5);
}

void func_248(bool bParam0)
{
	func_180(bParam0, 1);
	func_246(bParam0, 2);
	func_246(bParam0, 3);
	func_246(bParam0, 6);
	func_246(bParam0, 7);
	func_183(bParam0, 2);
}

void func_249(var uParam0, int iParam1)
{
	func_289(uParam0, iParam1);
}

void func_250(bool bParam0)
{
	func_180(bParam0, 0);
	func_246(bParam0, 0);
	func_246(bParam0, 1);
	func_246(bParam0, 2);
}

void func_251(bool bParam0)
{
	func_180(bParam0, 1);
	func_178(bParam0);
}

void func_252(bool bParam0)
{
	func_180(bParam0, 2);
	func_246(bParam0, 3);
}

void func_253(bool bParam0)
{
	func_180(bParam0, 3);
	func_246(bParam0, 4);
}

bool func_254(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_255(bool bParam0)
{
	func_246(bParam0, 0);
	func_246(bParam0, 1);
}

void func_256(bool bParam0)
{
	func_246(bParam0, 2);
	func_246(bParam0, 3);
}

void func_257(bool bParam0)
{
	func_246(bParam0, 4);
	func_246(bParam0, 5);
}

bool func_258(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_259(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

bool func_260(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!func_290(iParam0))
	{
		return false;
	}
	if (func_291(iParam0, iParam1, &uVar0))
	{
		func_292(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_261(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

bool func_262(bool bParam0)
{
	var uVar0;
	int iVar5;

	iVar5 = Global_1072759.f_28418[31 /*4*/].f_3;
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iVar5))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar5))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, 5);
	*bParam0 = iVar5;
	return true;
}

bool func_263(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	bParam0->f_3 = iParam2;
	bParam0->f_4 = iParam3;
	uVar0 = bParam0->f_1;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		bParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1.753214E+27f;
		case 1:
			return -5.320678E-10f;
		case 2:
			return 5.234738E-28f;
		case 3:
			return 1.14228E+13f;
		case 4:
			return -2.315855E+13f;
		default:
			break;
	}
	return 0;
}

int func_265(bool bParam0, int iParam1)
{
	int iVar0;

	bParam0->f_2 = iParam1;
	iVar0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
	return iVar0;
}

int func_266(bool bParam0, int iParam1)
{
	return func_293(bParam0, 31, iParam1);
}

int func_267(bool bParam0, int iParam1)
{
	return func_293(bParam0, 31, iParam1);
}

int func_268(int iParam0)
{
	var uVar0;

	if (!func_262(&uVar0))
	{
		return -1;
	}
	if (!func_263(&uVar0, 5, 0, 0, 1))
	{
		return -1;
	}
	if (!func_263(&uVar0, 7, 0, 0, 1))
	{
		return -1;
	}
	if (!func_263(&uVar0, 9, 0, 0, 1))
	{
		return -1;
	}
	if (!func_263(&uVar0, 10, iParam0, 0, 1))
	{
		return -1;
	}
	return func_294(&uVar0, 1);
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -6101652f;
		case 1:
			return -1.238837E-34f;
		default:
			break;
	}
	return 0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1.241192E-29f;
		case 0:
			return 6.959811E+35f;
		case 1:
			return 0.008961897f;
		case 3:
			return -2787.5f;
		case 4:
			return 1.752895E+14f;
		default:
			break;
	}
	return 0;
}

int func_271()
{
	return Global_1140755.f_235;
}

int func_272(int iParam0, int iParam1)
{
	return Global_1140755[iParam0 /*18*/].f_2[iParam1 /*5*/];
}

var func_273(int iParam0, int iParam1)
{
	return Global_1140755[iParam0 /*18*/].f_2[iParam1 /*5*/].f_2;
}

int func_274(bool bParam0, int iParam1)
{
	return func_295(func_293(bParam0, 39, iParam1));
}

int func_275(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_276(var uParam0)
{
	if (func_29(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_277(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return false;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return false;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return false;
	}
	if (!func_296(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return false;
	}
	return true;
}

bool func_278(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_279(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_71(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_280(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = { func_297(iParam0) };
	if (!func_29(Var0))
	{
		return false;
	}
	func_260(Var0, iParam0, uParam1);
	return true;
}

var func_281(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_298() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_299());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_299());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_299());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_300(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_301(iVar2))
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
				if (iVar9 & 8192 != 0 && func_302(iVar2) != 1)
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
					if (!func_303(iVar10))
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

float func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam5)
	{
		case 0:
			return func_304(iParam0, iParam1, iParam2, iParam3, iParam4);
		case 1:
			return func_305(iParam0, iParam3);
		case 2:
			return func_306(iParam0, iParam3, iParam4);
		case 3:
			return func_307(iParam0, iParam1, iParam2, iParam3, iParam4);
		case 4:
			return func_308(iParam0, iParam3, iParam4);
		case 5:
			return func_309(iParam0, iParam3, iParam4);
		case 6:
			return func_310(iParam0, iParam1, iParam3, iParam4);
		case 8:
			return func_311(iParam0, iParam4->f_7, iParam3);
		case 14:
			return func_312(iParam0, iParam1, iParam3, iParam4);
		case 9:
			return func_313(iParam0, iParam3, iParam4);
		case 10:
			return func_314(iParam0, iParam3, iParam4);
		case 11:
			return func_315(iParam0, iParam1, iParam3, iParam4);
		case 12:
			return func_316(iParam0, iParam3);
		case 13:
			return func_317(iParam0, iParam1, iParam3, iParam4);
		default:
			break;
	}
	return 0f;
}

bool func_283(int iParam0)
{
	return *iParam0 == 0;
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (*iParam0 == 0)
	{
		return;
	}
	fVar0 = 5.793523E-24f;
	if (func_110(*iParam0, fVar0))
	{
		return;
	}
	if (*iParam0 == Global_1260791[iParam1 /*4*/].f_3)
	{
		return;
	}
	func_318(iParam3->f_5, *iParam0);
}

bool func_285(var uParam0, int iParam1, int iParam2)
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

bool func_286(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam1)
	{
		case 2:
			if (Global_1260791[iParam0 /*4*/].f_2 == 1)
			{
				func_239(iParam0);
				Global_1260791[iParam0 /*4*/].f_1 = 0;
				Global_1260791[iParam0 /*4*/].f_2 = 0;
			}
			break;
	}
	iVar0 = func_319(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = (Global_1295619.f_16 + (iVar0 / 1000));
		if (Global_1260791[iParam0 /*4*/].f_1 == 0 || Global_1260791[iParam0 /*4*/].f_1 < iVar1)
		{
			func_320(iParam0);
			Global_1260791[iParam0 /*4*/].f_1 = iVar1;
			Global_1260791[iParam0 /*4*/].f_2 = iParam1;
		}
	}
}

void func_288(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (bParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_246(bParam0, iVar0);
		iVar0++;
	}
}

void func_289(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_290(int iParam0)
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

bool func_291(int iParam0, int iParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_321(iParam0);
	bParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_292(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_322(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_323(iVar0);
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
			uParam2->f_5 = func_324(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_325(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_326(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_327(iVar0);
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

int func_293(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

int func_294(bool bParam0, int iParam1)
{
	return func_328(func_293(bParam0, 40, iParam1));
}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TOWNSFOLK"):
			return 0;
		case joaat("AGGRESSIVE"):
			return 1;
		case joaat("UNI_CRIMINAL"):
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_296(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

struct<2> func_297(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_207(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_207(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_207(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_207(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_207(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_207(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_207(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_208();
}

int func_298()
{
	return Global_1051645.f_12;
}

char* func_299()
{
	return "unnamed";
}

int func_300(int iParam0)
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

bool func_301(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_329(36, iParam0);
}

int func_302(int iParam0)
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

bool func_303(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_330(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_331(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

float func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	vVar0 = { iParam4->f_11 };
	if (func_157(iParam4, 1) && func_278(vVar0))
	{
		func_241(iParam0, iParam3, 256, 0);
		return -1f;
	}
	if (func_332(vVar0, &bVar3))
	{
		func_333(iParam3);
		if (bVar3)
		{
			func_241(iParam0, iParam3, 1, 0);
			return -1f;
		}
		bVar4 = true;
	}
	if (iParam4->f_6 == 2)
	{
		iVar5 = func_90(iParam1);
		iVar6 = func_334(iVar5, iParam2);
		if (iVar6 > 0)
		{
			iVar7 = 0;
			while (iVar7 <= (iVar6 - 1))
			{
				vVar0 = { func_335(func_199(iVar5), iParam2, iVar7) };
				if (func_332(vVar0, &bVar3))
				{
					func_333(iParam3);
					if (bVar3)
					{
						func_241(iParam0, iParam3, 1, 0);
						return -1f;
					}
					bVar4 = true;
				}
				iVar7++;
			}
		}
	}
	if (bVar4)
	{
		return (1048576000 + func_336());
	}
	func_337(iParam3);
	func_241(iParam0, iParam3, 2, 0);
	return -1f;
}

float func_305(int iParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_241(iParam0, iParam1, 131072, 0);
		return 0f;
	}
	return 0f;
}

float func_306(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_157(iParam2, 1))
	{
		return 0f;
	}
	iVar0 = func_185(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
	if (!func_254(iVar0))
	{
		func_241(iParam0, iParam1, 256, 0);
		return 0f;
	}
	if (func_338(iVar0))
	{
		func_241(iParam0, iParam1, 524288, 0);
		return 0f;
	}
	return 0f;
}

float func_307(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	vVar1 = { iParam4->f_11 };
	iVar5 = 0;
	while (iVar5 <= 12)
	{
		if (Global_1225084[iVar5 /*28*/].f_2 != -1)
		{
			fVar0 = func_224(vVar1, func_339(iVar5));
			if (fVar0 < Global_1901671.f_242.f_66)
			{
				func_241(iParam0, iParam3, 64, 0);
				return 0f;
			}
			if (iParam4->f_6 == 2)
			{
				iVar4 = func_90(iParam1);
				iVar6 = func_334(iVar4, iParam2);
				if (iVar6 > 0)
				{
					iVar7 = 0;
					while (iVar7 <= (iVar6 - 1))
					{
						vVar1 = { func_335(func_199(iVar4), iParam2, iVar7) };
						fVar0 = func_224(vVar1, Global_1235672[iVar5 /*697*/].f_617[iVar7 /*3*/]);
						if (fVar0 < Global_1901671.f_242.f_66)
						{
							func_241(iParam0, iParam3, 64, 0);
							return 0f;
						}
						iVar7++;
					}
				}
			}
		}
		iVar5++;
	}
	if (func_340(vVar1, 2, Global_1901671.f_242.f_66))
	{
		func_241(iParam0, iParam3, 64, 0);
		return 0f;
	}
	if (func_41(5))
	{
		if (BUILTIN::VDIST(vVar1, Global_1260791.f_3493) < Global_1901671.f_242.f_66)
		{
			func_241(iParam0, iParam3, 64, 0);
			return 0f;
		}
	}
	return 0f;
}

float func_308(int iParam0, int iParam1, int iParam2)
{
	if (func_30(Global_1260791.f_3351[iParam2->f_7]))
	{
		func_241(iParam0, iParam1, 2097152, 0);
		return 0f;
	}
	if (func_341(iParam2->f_7))
	{
		func_241(iParam0, iParam1, 2097152, 0);
		return 0f;
	}
	return 0f;
}

float func_309(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_342(iParam2);
	if (iVar0 == -1)
	{
		return 0f;
	}
	if (func_30(Global_1260791[iParam1 /*4*/]) && func_31(Global_1260791[iParam1 /*4*/]) < iVar0)
	{
		func_241(iParam0, iParam1, 8, 0);
		return 0f;
	}
	iVar1 = func_344(func_343(2.053409E-33f));
	if (iVar1 == iParam2->f_5)
	{
		iVar2 = func_344(func_343(3.713784E-31f));
		if (iVar2 != 0 && (Global_1295619.f_16 - iVar2) < (iVar0 / 1000))
		{
			func_241(iParam0, iParam1, 8, 0);
			return 0f;
		}
	}
	iVar3 = func_344(func_343(5.118777E-05f));
	if (iParam2->f_9 == iVar3)
	{
		iVar4 = func_344(func_343(5.331718E-07f));
		if (iVar4 != 0 && (Global_1295619.f_16 - iVar4) < (iVar0 / 1000))
		{
			func_241(iParam0, iParam1, 262144, 0);
			return 0f;
		}
	}
	return 0f;
}

float func_310(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_157(iParam3, 32))
	{
		return 0f;
	}
	iVar0 = func_345(iParam1);
	if (func_346(iParam1, iVar0))
	{
		func_241(iParam0, iParam2, 16, 0);
		return 0f;
	}
	return 0f;
}

float func_311(int iParam0, int iParam1, int iParam2)
{
	if (func_30(Global_1254978[iParam2 /*3*/]) && func_31(Global_1254978[iParam2 /*3*/]) < Global_1901671.f_242.f_58)
	{
		func_241(iParam0, iParam2, 32, 0);
		return 0f;
	}
	return (func_347(iParam1) * func_348(iParam1));
}

float func_312(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam3->f_6 == 2)
	{
		iVar0 = func_90(iParam1);
		iVar1 = func_349(iVar0);
		if (iVar1 == -3.863288E-07f && PLAYER::GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(PLAYER::PLAYER_ID(), Global_1901671.f_242.f_29, false))
		{
			func_241(iParam0, iParam2, 65536, 0);
			return 0f;
		}
	}
	return 0f;
}

float func_313(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;

	bVar3 = true;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iParam2->f_15[iVar0] != 0)
		{
			func_350(iParam2->f_15[iVar0], &iVar1, &iVar2);
			if (iVar1 == -1 || iVar2 == -1)
			{
			}
			else
			{
				bVar3 = false;
			}
			else
			{
				iVar0++;
			}
			if (!bVar3)
			{
				bVar3 = func_351(iVar1, iVar2);
			}
			bVar4 = (bVar3 && func_352(iParam2->f_26));
			if (bVar3 && bVar4)
			{
				fVar5 = 1048576000; /* Float: 0.25f */
				if (iParam2->f_27 != 0)
				{
					if (func_352(iParam2->f_27))
					{
						fVar5 = (fVar5 + 1048576000);
					}
				}
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (iParam2->f_20[iVar0] != 0)
					{
						func_350(iParam2->f_20[iVar0], &iVar1, &iVar2);
						if (iVar1 == -1 || iVar2 == -1)
						{
						}
						else if (func_351(iVar1, iVar2))
						{
							fVar5 = (fVar5 + 1048576000);
						}
						else
						{
							iVar0++;
						}
						return fVar5;
						func_241(iParam0, iParam1, 128, 0);
						return 0f;
					}
				}
			}
		}
	}
}

float func_314(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_14 == 0)
	{
		return 0f;
	}
	if (func_353(0) == iParam2->f_14)
	{
		return 1048576000 /* Float: 0.25f */;
	}
	func_241(iParam0, iParam1, 512, 0);
	return 0f;
}

float func_315(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3->f_6 == 2)
	{
		iVar0 = func_90(iParam1);
		if (func_354(iVar0))
		{
			func_241(iParam0, iParam2, 16384, 0);
		}
	}
	return 0f;
}

float func_316(int iParam0, int iParam1)
{
	if (func_355(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_241(iParam0, iParam1, 32768, 0);
	}
	return 0f;
}

float func_317(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;

	if (func_41(4))
	{
		if (!func_157(iParam3, 64))
		{
			func_241(iParam0, iParam2, 64, 0);
			return 0f;
		}
	}
	if (Global_1254978[iParam2 /*3*/].f_2 != -15 && !func_357(func_356(), Global_1254978[iParam2 /*3*/].f_2, 1))
	{
		func_241(iParam0, iParam2, 1024, 0);
		return 0f;
	}
	if (!func_358(iParam1, iParam3->f_6, iParam3->f_7, &iVar2, &uVar3))
	{
		func_241(iParam0, iParam2, iVar2, 0);
		return 0f;
	}
	if (iParam3->f_6 == 2)
	{
		iVar4 = func_90(iParam1);
		iVar5 = func_349(iVar4);
		iVar1 = func_359(iVar4, iParam3->f_5, iVar5, Global_34, 1, 0, 0, -1f);
		iVar2 = func_360(iVar1);
		if (iVar2 != 0)
		{
			func_241(iParam0, iParam2, iVar2, 0);
			return 0f;
		}
	}
	else if (iParam3->f_6 == 1)
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(iParam3->f_5))
		{
			func_241(iParam0, iParam2, 2.524355E-29f, 0);
			return 0f;
		}
		if (func_157(iParam3, 8) && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_241(iParam0, iParam2, 1048576, 0);
			return 0f;
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam3->f_28[iVar0] != 0)
		{
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(iParam3->f_28[iVar0]))
			{
				func_241(iParam0, iParam2, 2.524355E-29f, 0);
				return 0f;
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_318(int iParam0, int iParam1)
{
	func_151(iParam0, 0, iParam1, 255);
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1901671.f_242;
		case 2:
			return Global_1901671.f_242.f_1;
		case 4:
			return Global_1901671.f_242.f_2;
		case 8:
			return Global_1901671.f_242.f_3;
		case 16:
			return Global_1901671.f_242.f_4;
		case 32:
			return Global_1901671.f_242.f_5;
		case 64:
			return Global_1901671.f_242.f_13;
		case 128:
			return Global_1901671.f_242.f_14;
		case 256:
			return Global_1901671.f_242.f_15;
		case 512:
			return Global_1901671.f_242.f_16;
		case 1024:
			return Global_1901671.f_242.f_17;
		case 2048:
			return Global_1901671.f_242.f_18;
		case 4096:
			return Global_1901671.f_242.f_19;
		case 8192:
			return Global_1901671.f_242.f_20;
		case 16384:
			return Global_1901671.f_242.f_22;
		case 32768:
			return Global_1901671.f_242.f_23;
		case 65536:
			return Global_1901671.f_242.f_24;
		case 131072:
			return Global_1901671.f_242.f_25;
		case 524288:
			return Global_1901671.f_242.f_26;
		case 1048576:
			return Global_1901671.f_242.f_27;
		case 268435456:
			return Global_1901671.f_242.f_12;
		case 2097152:
			return Global_1901671.f_242.f_28;
		case 4194304:
			return Global_1901671.f_242.f_6;
		case 8388608:
			return Global_1901671.f_242.f_7;
		case 16777216:
			return Global_1901671.f_242.f_8;
		case 33554432:
			return Global_1901671.f_242.f_9;
		case 67108864:
			return Global_1901671.f_242.f_10;
		case 134217728:
			return Global_1901671.f_242.f_11;
		case 536870912:
			return Global_1901671.f_242.f_21;
		default:
			break;
	}
	return 0;
}

void func_320(int iParam0)
{
	func_361(&(Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_29), iParam0, 28);
}

int func_321(int iParam0)
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

int func_322(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_362(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_323(int iParam0)
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

int func_324(int iParam0)
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

int func_325(int iParam0)
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

int func_326(int iParam0)
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

int func_327(int iParam0)
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

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BOUNTY"):
			return 0;
		case -1340981006:
			return 1;
		case joaat("MOONSHINE"):
			return 2;
		case joaat("MOONSHINE_RECIPE"):
			return 3;
		case joaat("LEGENDARY_ANIMAL"):
			return 4;
		default:
			break;
	}
	return -1;
}

bool func_329(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_286(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_363())
	{
		return func_286(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_286(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_330(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_331(int iParam0)
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
		func_364(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_365(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_332(vector3 vParam0, bool bParam3)
{
	float fVar0;

	fVar0 = func_224(Global_34, vParam0);
	if (fVar0 < Global_1901671.f_242.f_63)
	{
		*bParam3 = 1;
		return true;
	}
	if (fVar0 < Global_1901671.f_242.f_64)
	{
		return true;
	}
	return false;
}

void func_333(int iParam0)
{
	func_361(&(Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/]), iParam0, 28);
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_259(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_6;
}

Vector3 func_335(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_72(&Var3, iParam0) && func_258(&Var3, iParam1)) && func_366(&Var3, iParam2))
	{
		func_367(Var3, 7.506326E+22f, &vVar0, 0);
	}
	return vVar0;
}

float func_336()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.1f);
}

void func_337(int iParam0)
{
	func_285(&(Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/]), iParam0, 28);
}

bool func_338(int iParam0)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	return (func_368(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
}

Vector3 func_339(int iParam0)
{
	return Global_1235672[iParam0 /*697*/].f_614;
}

bool func_340(vector3 vParam0, int iParam3, float fParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	iVar1 = func_369(iParam3);
	iVar2 = ((iVar1 + Global_1207465.f_3[iParam3]) - 1);
	iVar6 = iVar1;
	while (iVar6 <= iVar2)
	{
		if (Global_1207465.f_231.f_1066[iVar6 /*17*/].f_13 != 1 && Global_1207465.f_231.f_1066[iVar6 /*17*/].f_13 != 2)
		{
		}
		else
		{
			iVar7 = 0;
			while (iVar7 <= (Global_1207465.f_231.f_1066[iVar6 /*17*/].f_7 - 1))
			{
				vVar3 = { func_370(iVar6, iVar7) };
				if (func_278(vVar3))
				{
				}
				else
				{
					if (fParam4 == -1f)
					{
						fVar0 = BUILTIN::TO_FLOAT(func_371(iVar6, iVar7));
						if (fVar0 == BUILTIN::TO_FLOAT(NaNf))
						{
							return true;
						}
					}
					else
					{
						fVar0 = fParam4;
					}
					if (func_224(vParam0, vVar3) < fVar0)
					{
						return true;
					}
				}
				iVar7++;
			}
		}
		iVar6++;
	}
	return false;
}

bool func_341(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_372(iParam0, &iVar0, &iVar1) && iParam0 != 0)
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (iVar1 < func_373(iParam0))
	{
		return true;
	}
	return false;
}

int func_342(int iParam0)
{
	switch (iParam0->f_6)
	{
		case 2:
			return Global_1901671.f_242.f_48;
		case 1:
			return Global_1901671.f_242.f_49;
	}
	return -1;
}

struct<2> func_343(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

int func_344(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_345(int iParam0)
{
	int iVar0;

	iVar0 = (Global_1901671.f_242.f_50 / 1000);
	return BUILTIN::CEIL((IntToFloat(iVar0) * func_374(iParam0)));
}

bool func_346(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_105(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	if (iVar2 != 0 && (Global_1295619.f_16 - iVar2) < iParam1)
	{
		return true;
	}
	return false;
}

float func_347(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_238(iParam0);
	if (iVar0 < 1)
	{
		return 0f;
	}
	iVar1 = Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_97[iParam0];
	return func_243((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar0)), 0f, 1f);
}

float func_348(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1f;
		default:
			break;
	}
	return 0f;
}

int func_349(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

void func_350(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1991225883:
			*iParam1 = 4;
			*iParam2 = 6;
			break;
		case joaat("6_TO_10"):
			*iParam1 = 6;
			*iParam2 = 10;
			break;
		case joaat("10_TO_14"):
			*iParam1 = 10;
			*iParam2 = 14;
			break;
		case joaat("14_TO_18"):
			*iParam1 = 14;
			*iParam2 = 18;
			break;
		case joaat("18_TO_22"):
			*iParam1 = 18;
			*iParam2 = 22;
			break;
		case joaat("0_TO_6"):
			*iParam1 = 0;
			*iParam2 = 6;
			break;
		case joaat("6_TO_12"):
			*iParam1 = 6;
			*iParam2 = 12;
			break;
		case joaat("12_TO_18"):
			*iParam1 = 12;
			*iParam2 = 18;
			break;
		case joaat("18_TO_0"):
			*iParam1 = 18;
			*iParam2 = 0;
			break;
		case joaat("22_TO_4"):
			*iParam1 = 22;
			*iParam2 = 4;
			break;
		case joaat("6_TO_14"):
			*iParam1 = 6;
			*iParam2 = 14;
			break;
		case joaat("14_TO_22"):
			*iParam1 = 14;
			*iParam2 = 22;
			break;
		case joaat("0_TO_12"):
			*iParam1 = 0;
			*iParam2 = 12;
			break;
		case joaat("6_TO_18"):
			*iParam1 = 6;
			*iParam2 = 18;
			break;
		case joaat("12_TO_0"):
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case joaat("18_TO_6"):
			*iParam1 = 18;
			*iParam2 = 6;
			break;
		case -2117802919:
			*iParam1 = 18;
			*iParam2 = 21;
			break;
		case -35871888:
			*iParam1 = 6;
			*iParam2 = 9;
			break;
		case joaat("DAY"):
			*iParam1 = 9;
			*iParam2 = 18;
			break;
		case joaat("NIGHT"):
			*iParam1 = 21;
			*iParam2 = 6;
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
}

bool func_351(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iParam0 < iParam1)
	{
		if (iVar0 >= iParam0 && iVar0 < iParam1)
		{
			return true;
		}
	}
	else if (iParam0 > iParam1)
	{
		if (iVar0 >= iParam1 && iVar0 < iParam0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_352(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 == -1)
	{
		return true;
	}
	if ((Global_1260791.f_3485 && iParam0) != 0)
	{
		return true;
	}
	return false;
}

int func_353(int iParam0)
{
	return Global_1148491.f_2[iParam0 /*18*/].f_1;
}

bool func_354(int iParam0)
{
	return false;
}

int func_355(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_375(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_14 != -1)
	{
		if (iParam0 == Global_1295619.f_5)
		{
			if (!Global_1295619.f_6)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 9.534398E+10f)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
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
				return 1;
			}
		}
	}
	return 0;
}

int func_356()
{
	return Global_1902565;
}

bool func_357(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_376(iParam1) || !func_376(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_358(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*uParam4 = 0f;
	switch (iParam2)
	{
		case 1:
			if (func_377(1, PLAYER::PLAYER_ID(), 1, 0) != -1)
			{
				*iParam3 = 8388608;
				return false;
			}
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(3.470251E-33f))
			{
				*iParam3 = 2.524355E-29f;
				return false;
			}
			break;
		case 2:
			if (!func_41(0))
			{
				*iParam3 = 2.524355E-29f;
				return false;
			}
			switch (iParam1)
			{
				case 1:
					if (func_41(1))
					{
						*uParam4 = 1056964608; /* Float: 0.5f */
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 43:
							if (!func_41(2))
							{
								*iParam3 = 2.524355E-29f;
								return false;
							}
							else
							{
								*uParam4 = 1048576000; /* Float: 0.25f */
							}
							break;
					}
					break;
			}
			if (func_377(2, PLAYER::PLAYER_ID(), 1, 0) != -1)
			{
				*iParam3 = 8388608;
				return false;
			}
			break;
		case 3:
			if (!func_41(6))
			{
				*iParam3 = 2.524355E-29f;
				return false;
			}
			break;
		case 4:
			if (!func_41(7))
			{
				*iParam3 = 2.524355E-29f;
				return false;
			}
			break;
	}
	return true;
}

int func_359(int iParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	vector3 vVar8;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 112)
	{
		return 11;
	}
	if (!func_378())
	{
		return 2;
	}
	iVar1 = func_199(iParam0);
	iVar2 = func_379(iVar1, uParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_380(iParam0, iVar2, bParam8, &bVar3))
	{
		if (bVar3)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	if (func_381(iVar1, uParam1) && !bParam7)
	{
		vVar4 = { func_382(iVar1, uParam1) };
		iVar7 = func_383(iVar1, iVar2);
		if (!func_384(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_385(iParam2) == -1)
	{
		return 6;
	}
	if (fParam9 >= 0f && !func_278(vParam3))
	{
		vVar8 = { func_203(iParam0, iVar2) };
		if (BUILTIN::VDIST(vParam3, vVar8) > fParam9)
		{
			return 12;
		}
	}
	if (func_386(iParam2))
	{
		iVar11 = func_185(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		if (!func_254(iVar11))
		{
			return 13;
		}
		if (func_338(iVar11))
		{
			return 14;
		}
	}
	if (func_387(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != 2.684408E+23f && func_388(func_208(), func_208(), 0, bParam7))
		{
			return 3;
		}
		bVar12 = false;
		if (!bVar12)
		{
			iVar13 = func_202(iParam0, iVar2);
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
			{
				return 8;
			}
			if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar13))
			{
				return 7;
			}
			iVar14 = func_389(iParam0, iVar2);
			if (iVar14 != 0)
			{
				if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar14))
				{
					return 10;
				}
				if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar14))
				{
					return 9;
				}
			}
		}
	}
	return 0;
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 4194304;
		case 3:
			return 8388608;
		case 4:
			return 2.350989E-38f;
		case 5:
			return 9.403955E-38f;
		case 6:
			return 1.504633E-36f;
		case 7:
		case 9:
			return 3.85186E-34f;
		case 8:
		case 10:
			return 2.524355E-29f;
		case 11:
			return 1.084202E-19f;
		case 12:
			return 2f;
		case 13:
			return 256;
		case 14:
			return 524288;
		case 15:
			return 32768;
		default:
			break;
	}
	return 0;
}

bool func_361(var uParam0, int iParam1, int iParam2)
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

bool func_362(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_390(iParam0, uParam1, &uVar0))
	{
		func_391(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_363()
{
	return Global_1102813.f_3672;
}

void func_364(int iParam0)
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
	func_365(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_365(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_366(bool bParam0, int iParam1)
{
	bParam0->f_2 = 6.31371E+22f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_367(vector3 vParam0, int iParam3, var uParam4, float fParam5, Vector3* vParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_368(int iParam0)
{
	int iVar0;

	if (!func_254(iParam0))
	{
		return false;
	}
	iVar0 = func_392(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

Vector3 func_370(int iParam0, int iParam1)
{
	return func_393(Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/]);
}

var func_371(int iParam0, int iParam1)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_3;
}

bool func_372(int iParam0, int* iParam1, int iParam2)
{
	struct<2> Var0;

	*iParam1 = 0;
	*iParam2 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_394(iParam0) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return false;
	}
	if (!STATS::STAT_ID_GET_INT(&Var0, iParam1))
	{
		return false;
	}
	if (*iParam1 > 0)
	{
		*iParam2 = (Global_1295619.f_16 - *iParam1) * 1000;
	}
	return true;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1901671.f_242.f_51;
		case 2:
			return Global_1901671.f_242.f_52;
		case 3:
			return Global_1901671.f_242.f_53;
		case 4:
			return Global_1901671.f_242.f_54;
		default:
			break;
	}
	return 0;
}

float func_374(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return Global_1901671.f_242.f_30;
		case 20:
			return Global_1901671.f_242.f_31;
		default:
			break;
	}
	return 1f;
}

int func_375(bool bParam0, bool bParam1, bool bParam2)
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

bool func_376(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_395(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_396(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_397(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_398(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_399(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_400(iParam0);
	if (iVar5 < 1 || iVar5 > func_401(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_377(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	iVar1 = 0;
	while (iVar1 <= 12)
	{
		iVar0 = Global_1235672[iVar1 /*697*/].f_571;
		switch (iParam0)
		{
			case 1:
				if (!func_402(iVar0))
				{
				}
				else
				{
					Jump @139; //curOff = 88
					if (!func_403(iVar0))
					{
					}
					else
					{
						Jump @139; //curOff = 104
						if (!func_404(iVar0))
						{
						}
						else
						{
							Jump @139; //curOff = 120
							if (!func_386(iVar0))
							{
							}
							else if (bParam2 && !func_405(iVar1, 32, iParam1))
							{
							}
							else if (bParam3 && Global_1225084[iVar1 /*28*/].f_15 != iParam1)
							{
							}
							else
							{
								return iVar1;
							}
						}
					}
				}
				iVar1++;
				return -1;
				default:
					break;
		}
	}
}

bool func_378()
{
	if (func_13())
	{
		return false;
	}
	return true;
}

int func_379(int iParam0, var uParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_72(&Var1, iParam0) && func_209(&Var1, uParam1))
	{
		iVar0 = ((func_406(iParam0) - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_380(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;

	bVar0 = func_407(iParam0, iParam1, 2);
	if (func_408(iParam0, iParam1, bVar0))
	{
		return true;
	}
	vVar1 = { func_203(iParam0, iParam1) };
	if (func_278(vVar1))
	{
		return false;
	}
	fVar4 = func_409(func_199(iParam0), iParam1);
	if ((bParam2 && func_407(iParam0, iParam1, 1)) && func_410(vVar1, fVar4))
	{
		*bParam3 = 1;
		return true;
	}
	return func_411(vVar1, fVar4, bVar0);
}

bool func_381(int iParam0, var uParam1)
{
	bool bVar0;
	struct<5> Var1;

	bVar0 = false;
	if (func_72(&Var1, iParam0) && func_209(&Var1, uParam1))
	{
		func_412(Var1, -7.526388E+19f, &bVar0, 0);
	}
	return bVar0;
}

Vector3 func_382(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_72(&Var3, iParam0) && func_209(&Var3, uParam1))
	{
		func_367(Var3, -3.659237E+25f, &vVar0, 1);
	}
	return vVar0;
}

int func_383(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 0;
	if (func_72(&Var1, iParam0))
	{
		if (func_258(&Var1, iParam1))
		{
			func_73(Var1, 8.85758E+09f, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_413(iVar0);
	}
	return iVar6;
}

bool func_384(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_278(vParam1))
	{
		return false;
	}
	if (func_414(iParam0))
	{
		return false;
	}
	if (func_415(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_416(iParam0);
	if (fVar1 > 1133903872)
	{
		fVar1 = 1133903872; /* Float: 300f */
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, fVar0, fVar1))
	{
		return false;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, fVar0, fVar1))
	{
		return false;
	}
	fVar1 = (fVar1 * 1061158912);
	if (fVar1 < 1125515264)
	{
		fVar1 = 1125515264; /* Float: 150f */
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_417(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

int func_385(int iParam0)
{
	int iVar0;

	if (!func_418(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_419(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_386(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_387(int iParam0)
{
	struct<2> Var0[7];
	int iVar15;
	int iVar16;
	int iVar17;

	if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(iParam0)))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(iParam0))
	{
		return false;
	}
	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iParam0), &Var0);
	iVar15 = 0;
	while (iVar15 <= (iVar16 - 1))
	{
		iVar17 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar15 /*2*/]));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar17) || PLAYER::IS_PLAYER_DEAD(iVar17))
		{
		}
		else if (func_420(1048576, iVar17))
		{
			return true;
		}
		iVar15++;
	}
	return false;
}

bool func_388(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!bParam4)
	{
		if (func_13())
		{
			return true;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_29(Param2))
	{
		Var0 = { func_421() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_29(Var0)) && !func_296(Var0, Param0))
	{
		return true;
	}
	Var2 = { func_44() };
	if (func_29(Var2) && (!func_29(Var2) || !func_296(Param0, Var2)))
	{
		return true;
	}
	return false;
}

int func_389(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_259(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_1;
}

bool func_390(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_321(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_391(bool bParam0, int iParam1, var uParam2)
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

int func_392(int iParam0)
{
	if (!func_254(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

Vector3 func_393(int iParam0)
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

struct<2> func_394(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_343(-1.11244E+21f);
		case 2:
			return func_343(-0.03766548f);
		case 3:
			return func_343(20967.98f);
		case 4:
			return func_343(20967.98f);
	}
	return Var0;
}

int func_395(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_396(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_397(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_398(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_422(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_399(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_400(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_401(int iParam0, int iParam1)
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

bool func_402(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MOONSHINE_RAID"):
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_403(int iParam0)
{
	switch (iParam0)
	{
		case -1086711901:
		case -697789102:
		case 195932838:
			return true;
	}
	return false;
}

bool func_404(int iParam0)
{
	switch (iParam0)
	{
		case -2096602762:
		case joaat("BOUNTY_BOARD"):
		case joaat("BOUNTY_PLAYER"):
			return true;
	}
	return false;
}

bool func_405(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_423(iParam0) && func_110(Global_1225672[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

int func_406(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_72(&vVar1, iParam0))
	{
		vVar1.f_2 = 8.002737E-08f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

bool func_407(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_259(iParam0, iParam1);
	return func_221(Global_1245159.f_566[iVar0 /*7*/].f_2, iParam2);
}

bool func_408(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	iVar0 = 0;
	while (iVar0 <= (func_334(iParam0, iParam1) - 1))
	{
		vVar1 = { func_335(func_199(iParam0), iParam1, iVar0) };
		fVar4 = func_424(func_199(iParam0), iParam1, iVar0);
		if (func_278(vVar1))
		{
		}
		else
		{
			if (func_411(vVar1, fVar4, bParam2))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

float func_409(int iParam0, int iParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = Global_1901671.f_170.f_34;
	if (func_72(&Var1, iParam0) && func_258(&Var1, iParam1))
	{
		func_425(Var1, -6.034118E+25f, &fVar0, 0);
	}
	return fVar0;
}

bool func_410(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false, false), vParam0) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_411(vector3 vParam0, float fParam3, bool bParam4)
{
	float fVar0;

	if (!bParam4)
	{
		fVar0 = 2.706126E-18f;
	}
	return VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam0, fParam3, false, 0, fVar0);
}

int func_412(vector3 vParam0, int iParam3, var uParam4, float fParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PRIMARY"):
			return 0;
		case joaat("SECONDARY"):
			return 1;
		case joaat("TROLLEY"):
			return 2;
	}
	return 0;
}

int func_414(int iParam0)
{
	return func_426(iParam0, 4);
}

bool func_415(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1149020.f_2[iParam0 /*43*/].f_11 == iVar0 || Global_1149020.f_2[iParam0 /*43*/].f_11 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1138819072 /* Float: 450f */;
		case 1:
			return 1138819072 /* Float: 450f */;
		case 2:
			return 1132068864 /* Float: 250f */;
		default:
			break;
	}
	return 1138819072 /* Float: 450f */;
}

bool func_417(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1149020.f_2[iParam0 /*43*/].f_9 == iVar0 || Global_1149020.f_2[iParam0 /*43*/].f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_418(int iParam0)
{
	int iVar0;

	iVar0 = func_427(iParam0);
	if (iVar0 != 0 && func_428(iVar0))
	{
		return false;
	}
	if (iParam0 == 2.684408E+23f)
	{
		return func_429();
	}
	return true;
}

bool func_419(int iParam0)
{
	return Global_1225084[iParam0 /*28*/] == -1;
}

bool func_420(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

struct<2> func_421()
{
	return Global_1051268;
}

int func_422(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_423(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

float func_424(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = Global_1901671.f_170.f_35;
	if ((func_72(&Var1, iParam0) && func_258(&Var1, iParam1)) && func_366(&Var1, iParam2))
	{
		func_425(Var1, -6.034118E+25f, &fVar0, 0);
	}
	return fVar0;
}

int func_425(vector3 vParam0, int iParam3, var uParam4, float fParam5, float* fParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_426(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_221(Global_1148603[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_427(int iParam0)
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
		case joaat("BOUNTY_PLAYER"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("DYNAMIC"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return 1;
		case -2096602762:
		case -1812122325:
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("HIDEOUT"):
		case 918897273:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_428(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_429()
{
	return func_430(func_70(0));
}

bool func_430(struct<2> Param0)
{
	return func_431(Param0, 1, 4);
}

bool func_431(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_29(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_432(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_432(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_45(Param0);
	}
	return -1;
}

