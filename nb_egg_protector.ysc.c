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
	struct<8> Local_14 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = -1;
	var uLocal_33 = -1;
	var uLocal_34 = 0;
	struct<4> Local_35[32];
	struct<52> Local_164 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 1 } ;
	var uLocal_216 = 1;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	float fLocal_225 = 0f;
	float fLocal_226 = 0f;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_225 = 1f;
	fLocal_226 = 1f;
	iVar0 = iScriptParam_0;
	func_1(iVar0);
	func_2(&iScriptParam_0);
	while (!func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_14, 21, 54);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_14), 21, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_35, 129, 55);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_35[0 /*4*/])), 129, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

void func_2(bool bParam0)
{
	if (Local_14 == 6)
	{
		return;
	}
	func_13(bParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

bool func_3()
{
	if (func_16(0, 0))
	{
		return true;
	}
	else if (func_17(Local_164.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_164.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_164.f_12), Local_164.f_9))
	{
		return true;
	}
	else if (Local_164.f_8 == 6)
	{
		return true;
	}
	return false;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
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
		if (func_28() == 0)
		{
			if (func_29())
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

void func_9()
{
}

int func_10(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
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

void func_13(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<29> Var3;

	iVar0 = 255;
	MISC::COPY_SCRIPT_STRUCT(&Local_164, bParam0, 5);
	iVar2 = func_30(&bVar1, Local_164.f_1, Local_164.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_164.f_12 = iVar2;
	iVar0 = Global_1207465.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 30f;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_31(&Var3, Local_164.f_1, Local_164.f_2, Local_164.f_3, iVar0);
	Local_164.f_9 = { func_32(Var3.f_5, 8) };
	Local_164.f_14 = Var3.f_5;
	Local_164.f_15 = { Var3.f_11 };
	Local_164.f_18 = Var3.f_7;
	func_33();
	func_34();
}

void func_14()
{
	func_35();
}

void func_15()
{
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
	if (func_36(Global_1051268) && !func_21(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_37(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_38(iParam3, 255))
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
	if (func_39())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_36(Global_1051268))
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

bool func_18()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return Global_1219580.f_1[iParam0 /*10*/].f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_14 <= 5)
	{
		func_40();
	}
	switch (Local_14)
	{
		case 0:
			func_41();
			break;
		case 1:
			func_42();
			break;
		case 2:
			func_43();
			break;
		case 3:
			func_44();
			break;
		case 4:
			func_45();
			break;
		case 5:
			func_46();
			break;
	}
}

void func_23()
{
	func_47();
	func_48();
	if (Local_164.f_8 <= 5)
	{
		func_49();
	}
	switch (Local_164.f_8)
	{
		case 0:
			func_50();
			break;
		case 1:
			func_51();
			break;
		case 2:
			func_52();
			break;
		case 3:
			func_53();
			break;
		case 4:
			func_54();
			break;
		case 5:
			func_55();
			break;
	}
}

void func_24()
{
}

void func_25()
{
	if (func_56())
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_14.f_3.f_1))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(Local_14.f_3.f_1);
		}
	}
	func_57();
}

void func_26()
{
	func_58();
}

void func_27()
{
	if (Local_164.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_59(Local_164.f_12, 4);
		}
	}
	func_60();
	if (func_61(64))
	{
		func_62(Local_14.f_6);
	}
	func_63();
}

int func_28()
{
	return Global_1572887.f_14;
}

bool func_29()
{
	return Global_1051645.f_8;
}

int func_30(var uParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<29> Var26;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	Var26.f_10 = 30f;
	Var26.f_15 = 4;
	Var26.f_20 = 4;
	Var26.f_26 = -1;
	Var26.f_28 = 2;
	func_31(&Var26, iParam1, iParam2, -1, 255);
	func_64(&Var0, Var26.f_5);
	iVar25 = func_65(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_66(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_31(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			func_67(bParam0, iParam2);
			break;
		case 2:
			func_68(bParam0, iParam2);
			break;
		case 3:
			func_69(bParam0, iParam2);
			break;
		case 4:
			func_70(bParam0, iParam2);
			break;
		case 12:
			func_71(bParam0, iParam2);
			break;
		case 6:
			func_72(bParam0, iParam2);
			break;
		case 7:
			func_73(bParam0, iParam2, iParam3);
			break;
		case 5:
			func_74(bParam0, iParam2);
			break;
		case 11:
			func_75(bParam0, iParam2);
			break;
		case 9:
			func_76(bParam0, iParam2, iParam3);
			break;
		case 10:
			func_77(bParam0, iParam2);
			break;
		case 8:
			func_78(bParam0, iParam2);
			break;
		case 13:
			func_79(bParam0, iParam2, iParam4);
			break;
		case 14:
			func_80(bParam0, iParam2, iParam3);
			break;
		case 15:
			func_81(bParam0, iParam2);
			break;
		case 16:
			func_82(bParam0, iParam2, iParam3);
			break;
		case 31:
			func_83(bParam0, iParam2);
			break;
		case 21:
			func_84(bParam0, iParam2);
			break;
		case 28:
			func_85(bParam0, iParam2);
			break;
		case 25:
			func_86(bParam0, iParam2);
			break;
		case 24:
			func_87(bParam0, iParam2);
			break;
		case 22:
			func_88(bParam0, iParam2);
			break;
		case 23:
			func_89(bParam0, iParam2);
			break;
		case 29:
			func_90(bParam0, iParam2);
			break;
		case 26:
			func_91(bParam0, iParam2);
			break;
		case 30:
			func_92(bParam0, iParam2);
			break;
		case 27:
			func_93(bParam0, iParam2);
			break;
		case 32:
			func_94(bParam0, iParam2, iParam3);
			break;
		case 33:
			func_95(bParam0, iParam2, iParam3);
			break;
		case 34:
			func_96(bParam0, iParam2);
			break;
		case 17:
			func_97(bParam0, iParam2);
			break;
		case 18:
			func_98(bParam0, iParam2);
			break;
		case 19:
			func_99(bParam0, iParam2);
			break;
		case 20:
			func_100(bParam0, iParam2);
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
			func_101(bParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

struct<2> func_32(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_103(iParam0, &(Global_1072759.f_573), func_102(iParam1));
			break;
		case 3:
			Var0.f_1 = func_103(iParam0, &(Global_1072759.f_573.f_602), func_102(iParam1));
			break;
		case 4:
			Var0.f_1 = func_103(iParam0, &(Global_1072759.f_573.f_2104), func_102(iParam1));
			break;
		case 5:
			Var0.f_1 = func_103(iParam0, &(Global_1072759.f_573.f_12606), func_102(iParam1));
			break;
		case 6:
			Var0.f_1 = func_103(iParam0, &(Global_1072759.f_573.f_12908), func_102(iParam1));
			break;
		case 7:
			Var0.f_1 = func_103(iParam0, &(Global_1072759.f_573.f_15910), func_102(iParam1));
			break;
		case 8:
			Var0.f_1 = func_103(iParam0, &(Global_1072759.f_573.f_16512), func_102(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_104();
	}
	return Var0;
}

void func_33()
{
}

void func_34()
{
	HUD::TEXT_BLOCK_REQUEST("NBEGP");
	TASK::_REQUEST_HERB_COMPOSITE_ASSET(func_105());
	func_107(0, 0, func_106(), 5f, -1, 1, 0);
	STREAMING::REQUEST_COLLISION_AT_COORD(func_106());
	STREAMING::REQUEST_PTFX_ASSET();
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

void func_35()
{
	func_108();
}

bool func_36(struct<2> Param0)
{
	if (!func_109(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_102(Param0))
	{
		return false;
	}
	return true;
}

bool func_37(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_38(int iParam0, int iParam1)
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

bool func_39()
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
	if (!func_36(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_40()
{
}

void func_41()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1207465.f_231.f_1066[Local_164.f_12 /*17*/].f_5;
	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_31(&Var1, Local_164.f_1, Local_164.f_2, Local_164.f_3, iVar0);
	if (!func_110(&Var1, 1))
	{
		func_111(1);
		return;
	}
	Local_14.f_6 = func_112(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0)));
	func_113(256);
	if (func_114(Local_14.f_6))
	{
		func_115(5);
		func_111(6);
	}
	else
	{
		func_111(1);
	}
}

void func_42()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, Local_164.f_1, Local_164.f_2, -1, 255);
	if (func_110(&Var0, 1))
	{
		func_111(2);
		return;
	}
	if (func_116(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_164.f_15, Var0.f_10, 2442122);
		func_111(2);
	}
	else if (bVar31)
	{
		func_115(3);
		func_111(6);
	}
	if (!func_117(Local_14.f_3.f_2))
	{
		func_118(&(Local_14.f_3.f_2));
	}
	else if (func_119(Local_14.f_3.f_2) > 45000)
	{
		func_115(4);
		func_111(6);
	}
}

void func_43()
{
	if (func_120(1, 255))
	{
		if (!func_121(1))
		{
			if (func_122())
			{
				func_113(1);
			}
		}
		else
		{
			func_123();
			func_111(3);
		}
	}
}

void func_44()
{
	bool bVar0;

	if (func_120(2, 255))
	{
		if (!func_121(2))
		{
			bVar0 = true;
			if (!func_124())
			{
				bVar0 = false;
			}
			if (!func_125())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_113(2);
			}
		}
		else
		{
			func_126();
			func_111(4);
		}
	}
}

void func_45()
{
	func_127();
	func_128();
	func_129();
	if (func_130() || Local_14.f_2 != 0)
	{
		func_131();
		func_111(5);
	}
}

void func_46()
{
	if (func_120(4, 255))
	{
		if (func_132())
		{
			func_113(4);
			func_111(6);
		}
	}
}

void func_47()
{
	if (!func_121(256))
	{
		return;
	}
	if (func_121(512))
	{
		if (func_61(64) && func_112(PLAYER::PLAYER_ID()) == Local_14.f_6)
		{
			func_62(Local_14.f_6);
			func_133(64);
		}
	}
	else if (!func_61(64))
	{
		if (func_112(PLAYER::PLAYER_ID()) == Local_14.f_6)
		{
			func_134(Local_14.f_6, 1, 1);
			func_135(64);
		}
	}
	else if (func_112(PLAYER::PLAYER_ID()) != Local_14.f_6)
	{
		func_62(Local_14.f_6);
		func_133(64);
	}
}

void func_48()
{
	if (!Global_13)
	{
		if (func_120(8192, 255))
		{
			func_136(8192);
		}
	}
	else if (!func_120(8192, 255))
	{
		func_137(8192);
	}
}

void func_49()
{
	func_138();
}

void func_50()
{
	if (Local_14 == 6)
	{
		func_139(6);
	}
	else if (Local_14 > 0)
	{
		func_47();
		func_139(1);
	}
}

void func_51()
{
	if (Local_14 == 6)
	{
		func_139(6);
	}
	else if (Local_14 > 1)
	{
		func_139(2);
	}
}

void func_52()
{
	bool bVar0;
	int iVar1;

	if (!func_120(1, 255))
	{
		bVar0 = true;
		if (!func_140())
		{
			bVar0 = false;
		}
		if (!func_141())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_137(1);
		}
		else
		{
			iVar1 = Global_1901671.f_242.f_70;
			if (!func_117(Local_164.f_11))
			{
				func_118(&(Local_164.f_11));
			}
			if (func_119(Local_164.f_11) >= iVar1)
			{
				func_139(6);
			}
		}
	}
	else if (Local_14 > 2)
	{
		func_142(&(Local_164.f_11));
		func_143();
		func_139(3);
	}
}

void func_53()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_120(2, 255))
	{
		iVar0 = func_144();
		iVar1 = func_145();
		if (iVar0 && iVar1)
		{
			func_137(2);
		}
		else
		{
			iVar2 = Global_1901671.f_242.f_70;
			if (!func_117(Local_164.f_11))
			{
				func_118(&(Local_164.f_11));
			}
			if (func_146(Local_164.f_11) >= iVar2)
			{
				func_139(6);
			}
		}
	}
	else if (Local_14 > 3)
	{
		func_142(&(Local_164.f_11));
		func_147();
		func_148();
		func_149();
		func_150();
		func_139(4);
	}
}

void func_54()
{
	if (Local_14 >= 5)
	{
		func_151();
		func_139(5);
		return;
	}
	func_152();
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
	func_158();
}

void func_55()
{
	if (!func_120(4, 255))
	{
		if (func_159())
		{
			func_160();
			func_59(Local_164.f_12, 4);
			func_137(4);
		}
	}
	else if (Local_14 > 5)
	{
		func_139(6);
	}
}

bool func_56()
{
	return (func_121(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_57()
{
}

void func_58()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_161(Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/].f_3))
			{
				if (func_162(&(Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/])))
				{
					GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/]), 1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_59(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_163(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

void func_60()
{
	int iVar0;
	bool bVar1;

	if (!func_61(1))
	{
		return;
	}
	if (func_61(4))
	{
		return;
	}
	if (!func_61(2))
	{
		iVar0 = -1;
	}
	else if (!func_61(8))
	{
		iVar0 = 2;
	}
	else if (func_61(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_61(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_164(Local_164.f_9, iVar0, 0, 255, 0);
	func_135(4);
	if (bVar1)
	{
		func_165(Local_164.f_1, Local_164.f_2);
		if (!func_61(256))
		{
			if (iVar0 == 1)
			{
				func_166(Local_164.f_18, 1);
			}
			else
			{
				func_166(Local_164.f_18, 0);
			}
			func_135(256);
		}
		func_167(Local_164.f_18);
	}
	else
	{
		func_166(Local_164.f_18, 2);
	}
}

bool func_61(int iParam0)
{
	return func_168(Local_164.f_7, iParam0);
}

void func_62(int iParam0)
{
	int iVar0;

	if (!func_169(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_70 = iParam0;
	Global_1144511[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_63()
{
	func_170(0);
}

void func_64(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_65(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_171(uParam0))
	{
		return -1;
	}
	iVar0 = func_172(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_172(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_66(int iParam0)
{
	struct<15> Var0;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return Global_1207465.f_231[iParam0 /*15*/];
}

void func_67(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 7;
	func_173(bParam0, iParam1);
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

void func_68(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = 5.413756E-29f;
			bParam0->f_11 = { -990860554, -989563552, 1112583527 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = 2.106363E+21f;
			bParam0->f_11 = { 1124617288, 1108172700, 1120571160 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = 2.111024E+08f;
			bParam0->f_11 = { -1000099991, 1146566170, 1124510273 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = 5.018388E+37f;
			bParam0->f_11 = { 1160662133, 1149675795, 1114109612 };
			break;
		case 4:
			func_175(bParam0);
			bParam0->f_5 = 15.72851f;
			bParam0->f_11 = { 1155202369, -997476443, 1109576938 };
			break;
		case 5:
			func_175(bParam0);
			bParam0->f_5 = 7.778285E-25f;
			bParam0->f_11 = { 1151421903, -1001312602, 1117451139 };
			break;
		case 6:
			func_175(bParam0);
			bParam0->f_5 = 3.906421E-32f;
			bParam0->f_11 = { 1134169754, 1150581207, 1127492786 };
			break;
		case 7:
			func_175(bParam0);
			bParam0->f_5 = -2.006564E+35f;
			bParam0->f_11 = { -992054984, -1016372307, 1127560180 };
			break;
		case 8:
			func_175(bParam0);
			bParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			bParam0->f_11 = { -996062015, -996972965, 1116777288 };
			break;
		case 9:
			func_175(bParam0);
			bParam0->f_5 = -6.409571f;
			bParam0->f_11 = { -988795329, -993966426, 1125647559 };
			break;
		case 10:
			func_175(bParam0);
			bParam0->f_5 = 1.863479E-14f;
			bParam0->f_11 = { -987084972, -987916189, 1115784641 };
			break;
		case 11:
			func_175(bParam0);
			bParam0->f_5 = 1.021696E+23f;
			bParam0->f_11 = { -980717807, -984844394, 1097381540 };
			break;
		case 12:
			func_175(bParam0);
			bParam0->f_5 = -1.082996E+28f;
			bParam0->f_11 = { -980371346, -987027526, -1052628128 };
			break;
		case 13:
			func_175(bParam0);
			bParam0->f_5 = 1.561827E+30f;
			bParam0->f_11 = { -978226670, -985207032, -1045081746 };
			break;
		case 14:
			func_175(bParam0);
			bParam0->f_5 = -0.02038603f;
			bParam0->f_11 = { -992797751, -988937868, 1110473601 };
			break;
		case 15:
			func_175(bParam0);
			bParam0->f_5 = 8.753591E+18f;
			bParam0->f_11 = { -993346216, 1154188969, 1131149034 };
			break;
		case 16:
			func_175(bParam0);
			bParam0->f_5 = 2.603904E-14f;
			bParam0->f_11 = { 1137847938, 1157405979, 1130787128 };
			break;
		case 17:
			func_175(bParam0);
			bParam0->f_5 = -3.46549E+29f;
			bParam0->f_11 = { -1006543492, 1140802678, 1120695837 };
			break;
		case 18:
			func_175(bParam0);
			bParam0->f_5 = 1.179074E+08f;
			bParam0->f_11 = { 1155396410, 1141414078, 1121272906 };
			break;
		case 19:
			func_175(bParam0);
			bParam0->f_5 = 1.866136E-26f;
			bParam0->f_11 = { 1154059592, -992580426, 1112778641 };
			break;
	}
}

void func_69(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 8;
	bParam0->f_2 = 1;
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 5);
			bParam0->f_5 = 9.836368E+13f;
			bParam0->f_11 = { 1158463633, 1151850133, 1118379350 };
			break;
		case 1:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 5);
			bParam0->f_5 = 543.1066f;
			bParam0->f_11 = { 1158581043, 1154029896, 1118348247 /* Float: 84.32f */ };
			break;
		case 2:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 5);
			bParam0->f_5 = 1.269733E-08f;
			bParam0->f_11 = { 1159227851, 1148195910, 1116877134 };
			break;
		case 3:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			func_176(bParam0, 7);
			bParam0->f_5 = -2.228004E-19f;
			bParam0->f_11 = { 1150112082, 1141895886, 1118655292 };
			break;
		case 4:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 5);
			func_176(bParam0, 7);
			bParam0->f_5 = -3192329f;
			bParam0->f_11 = { -1002661653, -1010332030, 1109614411 };
			break;
		case 5:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 5);
			func_176(bParam0, 7);
			bParam0->f_5 = 1.530311E+38f;
			bParam0->f_11 = { -1009953158, -1031815037, 1109596884 };
			break;
		case 6:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			func_176(bParam0, 6);
			bParam0->f_5 = 671977.6f;
			bParam0->f_11 = { -989701008, -1021188067, 1129320500 };
			break;
		case 7:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			func_176(bParam0, 6);
			bParam0->f_5 = -123672.6f;
			bParam0->f_11 = { -992884296, -1006537328, 1124916724 };
			break;
		case 8:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			func_176(bParam0, 6);
			bParam0->f_5 = -5.227074E+13f;
			bParam0->f_11 = { -987492840, -1012276717, 1124978537 };
			break;
		case 9:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			bParam0->f_5 = 3.83512E-24f;
			bParam0->f_11 = { -999840598, -999875151, 1109701978 };
			break;
		case 10:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			func_176(bParam0, 5);
			func_176(bParam0, 7);
			bParam0->f_5 = -6.19582E+25f;
			bParam0->f_11 = { -1003176727, -992552468, 1109763031 /* Float: 41.41f */ };
			break;
		case 11:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			bParam0->f_5 = -2211.382f;
			bParam0->f_11 = { -997874236, -990907462, 1110008057 };
			break;
		case 12:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			func_176(bParam0, 6);
			bParam0->f_5 = 5.813065E-27f;
			bParam0->f_11 = { 1154561405, 1152647541, 1125258684 };
			break;
		case 13:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			bParam0->f_5 = -2.743283E+37f;
			bParam0->f_11 = { 1153650150, 1152690073, 1125206209 };
			break;
		case 14:
			func_176(bParam0, 3);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			func_176(bParam0, 6);
			bParam0->f_5 = 9.295132E-10f;
			bParam0->f_11 = { 1151049129, 1150494730, 1125442231 };
			break;
		case 15:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 5);
			func_176(bParam0, 7);
			bParam0->f_5 = -0.0750034f;
			bParam0->f_11 = { 1156634238, -1011536767, 1110045203 };
			break;
		case 16:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 3);
			func_176(bParam0, 5);
			func_176(bParam0, 7);
			bParam0->f_5 = 0.2697543f;
			bParam0->f_11 = { 1158219730, -1012979473, 1109582991 };
			break;
		case 17:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 3);
			func_176(bParam0, 5);
			func_176(bParam0, 7);
			bParam0->f_5 = 5.456239E+10f;
			bParam0->f_11 = { 1159104295, -1007338908, 1109635708 };
			break;
		case 18:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 5);
			bParam0->f_5 = -1.648444E-05f;
			bParam0->f_11 = { -984958968, -985189821, -1055587094 };
			break;
		case 19:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			bParam0->f_5 = 1.11035E+30f;
			bParam0->f_11 = { -992337834, -986246592, -1052418507 };
			break;
		case 20:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 5);
			bParam0->f_5 = 2.464876E+21f;
			bParam0->f_11 = { -992419265, -988502609, 1109731312 };
			break;
	}
}

void func_70(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 2;
	func_174(bParam0);
	bParam0->f_15[0] = -6.738816E-37f;
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = 2.528791E+11f;
			bParam0->f_11 = { -1016809403, 1145965509, 1123457683 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = -1.155725E-33f;
			bParam0->f_11 = { 1151292035, -996652760, 1117867160 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = 4.112297E-07f;
			bParam0->f_11 = { -999383477, -996775968, 1113200814 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = -1.046268E-07f;
			bParam0->f_11 = { -978709429, -986347484, -1115107728 };
			break;
		case 4:
			func_175(bParam0);
			bParam0->f_5 = 2.409888E+18f;
			bParam0->f_11 = { -980764861, -987213526, -1052735701 };
			break;
		case 5:
			func_175(bParam0);
			bParam0->f_5 = -2.574967E+30f;
			bParam0->f_11 = { -984565348, -986491770, -1059165150 };
			break;
		case 6:
			func_175(bParam0);
			bParam0->f_5 = -1.470611E-19f;
			bParam0->f_11 = { 1152287867, -1004483776, 1116534446 };
			break;
		case 7:
			func_175(bParam0);
			bParam0->f_5 = -1.322399E-31f;
			bParam0->f_11 = { 1155070895, -1009556623, 1111263779 };
			break;
		case 8:
			func_175(bParam0);
			bParam0->f_5 = -3.836814E+24f;
			bParam0->f_11 = { 1157058569, -991046472, 1109668318 };
			break;
		case 9:
			func_175(bParam0);
			bParam0->f_5 = -5.760947E+24f;
			bParam0->f_11 = { 1160536058, -997796525, 1110937567 };
			break;
		case 10:
			func_175(bParam0);
			bParam0->f_5 = 1.106632E-33f;
			bParam0->f_11 = { -992197716, -1016202310, 1127610456 };
			break;
	}
}

void func_71(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = 3690385f;
			bParam0->f_11 = { 1160614818, 1139258245, 1115848717 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = 8.158911E+30f;
			bParam0->f_11 = { 1152555558, -991780903, 1113947856 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = 2.669717E-17f;
			bParam0->f_11 = { 1159802443, -1001056348, 1109736240 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = -7.255729E-07f;
			bParam0->f_11 = { 1160700391, 1152583160, 1117482104 };
			break;
		case 4:
			func_175(bParam0);
			bParam0->f_5 = 6.041506E+07f;
			bParam0->f_11 = { 1151037068, 1141089509, 1118757017 };
			break;
		case 5:
			func_175(bParam0);
			bParam0->f_5 = -1.38438E-11f;
			bParam0->f_11 = { -1041918727, 1149953882, 1126694549 };
			break;
		case 6:
			func_175(bParam0);
			bParam0->f_5 = 4.212033E-16f;
			bParam0->f_11 = { -1006065924, -1013638573, 1112688063 };
			break;
		case 7:
			func_175(bParam0);
			bParam0->f_5 = 2.536912E+12f;
			bParam0->f_11 = { -995133944, 1136648213, 1120698001 };
			break;
		case 8:
			func_175(bParam0);
			bParam0->f_5 = -2.534091E+12f;
			bParam0->f_11 = { -994262090, -1000541027, 1118925984 };
			break;
		case 9:
			func_175(bParam0);
			bParam0->f_5 = 6.148389E+24f;
			bParam0->f_11 = { -994674669, -990940346, 1112260071 };
			break;
		case 10:
			func_175(bParam0);
			bParam0->f_5 = -7.930857E-27f;
			bParam0->f_11 = { -988127157, -988303389, 1114412365 };
			break;
		case 11:
			func_175(bParam0);
			bParam0->f_5 = 2.27023E-35f;
			bParam0->f_11 = { -985575689, -985274257, -1079057014 };
			break;
		case 12:
			func_175(bParam0);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -983148035, -986901517, -1049467415 };
			break;
		case 13:
			func_175(bParam0);
			bParam0->f_5 = -1528.504f;
			bParam0->f_11 = { -980293646, -983061220, 1095283266 };
			break;
		case 14:
			func_175(bParam0);
			bParam0->f_5 = 1.014443E-13f;
			bParam0->f_11 = { -979217442, -986431844, 1075102750 };
			break;
	}
}

void func_72(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 16;
	bParam0->f_1 = 2;
	bParam0->f_2 = 8;
	func_177(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			func_176(bParam0, 0);
			bParam0->f_5 = -4.776145E+35f;
			bParam0->f_11 = { 1140422199, 1150609617, 1127448684 };
			break;
		case 1:
			func_176(bParam0, 1);
			bParam0->f_5 = -5.717982E-16f;
			bParam0->f_11 = { 1122352497, 1149842964, 1127348306 };
			break;
		case 2:
			func_176(bParam0, 0);
			bParam0->f_5 = 1.479809E-33f;
			bParam0->f_11 = { 1158544398, -1008974965, 1109608434 };
			break;
		case 3:
			func_176(bParam0, 1);
			bParam0->f_5 = -1.539734E+36f;
			bParam0->f_11 = { 1157239438, -1007056794, 1109661975 };
			break;
		case 4:
			func_176(bParam0, 0);
			bParam0->f_5 = -1.203898E-08f;
			bParam0->f_11 = { 1158659316, -1000302158, 1109667175 };
			break;
		case 5:
			func_176(bParam0, 1);
			bParam0->f_5 = 2.760309E+36f;
			bParam0->f_11 = { 1158943917, -1003981380, 1109751992 };
			break;
		case 6:
			func_176(bParam0, 0);
			bParam0->f_5 = -1.209803E+10f;
			bParam0->f_11 = { 1153395345, 1153784522, 1125345306 };
			break;
		case 7:
			func_176(bParam0, 1);
			bParam0->f_5 = -3.374709E-37f;
			bParam0->f_11 = { 1147949926, 1150210383, 1125350172 };
			break;
		case 8:
			func_176(bParam0, 0);
			bParam0->f_5 = -3201.431f;
			bParam0->f_11 = { -997404924, 1145821314, 1122717347 };
			break;
		case 9:
			func_176(bParam0, 1);
			bParam0->f_5 = 8.817295E-33f;
			bParam0->f_11 = { -989790972, 1147786383, 1125323950 };
			break;
		case 10:
			func_176(bParam0, 0);
			bParam0->f_5 = -1.197698E+14f;
			bParam0->f_11 = { -993610239, -994956749, 1117827845 };
			break;
		case 11:
			func_176(bParam0, 1);
			bParam0->f_5 = -5.118974E+24f;
			bParam0->f_11 = { -1000106720, -991758352, 1115085186 };
			break;
		case 12:
			func_176(bParam0, 0);
			bParam0->f_5 = 6.017953E+25f;
			bParam0->f_11 = { -987225687, -986396153, 1115781541 };
			break;
		case 13:
			func_176(bParam0, 1);
			bParam0->f_5 = -5.803788E-28f;
			bParam0->f_11 = { -986306439, -987762824, 1115073303 };
			break;
		case 14:
			func_176(bParam0, 0);
			bParam0->f_5 = -5.365581E-31f;
			bParam0->f_11 = { -980546023, -983195925, 1099892030 };
			break;
		case 15:
			func_176(bParam0, 1);
			bParam0->f_5 = -3.021498E-30f;
			bParam0->f_11 = { -980187462, -984494082 /* Float: -3357f */, 1091166483 };
			break;
	}
}

void func_73(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 12;
	bParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 9);
			func_176(bParam0, 10);
			func_176(bParam0, 11);
			func_178(bParam0, iParam2);
			bParam0->f_5 = 5.128504E-15f;
			bParam0->f_11 = { 1139431610, 1114658544, 1124498253 };
			break;
		case 1:
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 8);
			func_176(bParam0, 9);
			func_176(bParam0, 10);
			func_176(bParam0, 11);
			func_178(bParam0, iParam2);
			bParam0->f_5 = 791.1281f;
			bParam0->f_11 = { -1010017488, 1125782274, 1109614988 };
			break;
		case 2:
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			func_176(bParam0, 6);
			func_176(bParam0, 9);
			func_176(bParam0, 10);
			func_176(bParam0, 11);
			func_178(bParam0, iParam2);
			bParam0->f_5 = -0.0004251206f;
			bParam0->f_11 = { -990825227, -995587373, 1121168922 };
			break;
		case 3:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 9);
			func_176(bParam0, 10);
			func_176(bParam0, 11);
			func_178(bParam0, iParam2);
			bParam0->f_5 = -8619264f;
			bParam0->f_11 = { -990216659, -989404632, 1113123743 };
			break;
		case 4:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 9);
			func_176(bParam0, 10);
			func_176(bParam0, 11);
			func_178(bParam0, iParam2);
			bParam0->f_5 = -0.005462102f;
			bParam0->f_11 = { -996210888, 1120072685, 1116540769 };
			break;
		case 5:
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 4);
			func_176(bParam0, 7);
			func_176(bParam0, 8);
			func_176(bParam0, 9);
			func_176(bParam0, 10);
			func_176(bParam0, 11);
			func_178(bParam0, iParam2);
			bParam0->f_5 = -2.245529E+29f;
			bParam0->f_11 = { -988615224, -1011630570, 1125105495 };
			break;
		case 6:
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			func_176(bParam0, 6);
			func_176(bParam0, 7);
			func_176(bParam0, 9);
			func_176(bParam0, 10);
			func_176(bParam0, 11);
			func_178(bParam0, iParam2);
			bParam0->f_5 = -4.391075E+18f;
			bParam0->f_11 = { -992405448, 1134109594, 1121469791 };
			break;
		case 7:
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			func_176(bParam0, 6);
			func_176(bParam0, 9);
			func_176(bParam0, 10);
			func_176(bParam0, 11);
			func_178(bParam0, iParam2);
			bParam0->f_5 = -2.699646E+09f;
			bParam0->f_11 = { -979688450, -984318406, 1090462878 };
			break;
		case 8:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 9);
			func_176(bParam0, 10);
			func_176(bParam0, 11);
			func_178(bParam0, iParam2);
			bParam0->f_5 = -1.638996E+35f;
			bParam0->f_11 = { -989262621, -986861661, 1116341763 };
			break;
		case 9:
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			func_176(bParam0, 5);
			func_176(bParam0, 9);
			func_176(bParam0, 10);
			func_176(bParam0, 11);
			func_178(bParam0, iParam2);
			bParam0->f_5 = 1.589723E-25f;
			bParam0->f_11 = { -980428461, -987179279, -1054740411 };
			break;
	}
}

void func_74(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = -5.854213E-18f;
			bParam0->f_11 = { 1152747524, -992746571, 1115811584 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = 4.557484E-23f;
			bParam0->f_11 = { 1150382492, -1012793061, 1120024280 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = 4.01839E+37f;
			bParam0->f_11 = { 1160225193, 1146526876, 1118555495 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = 5.824172E-31f;
			bParam0->f_11 = { 1151593125, 1150549473, 1125619200 };
			break;
		case 4:
			func_175(bParam0);
			bParam0->f_5 = 5.430638E-08f;
			bParam0->f_11 = { 1109653594, 1155703308, 1128104303 };
			break;
		case 5:
			func_175(bParam0);
			bParam0->f_5 = 2.382815E-29f;
			bParam0->f_11 = { 1121706451, 1151354930, 1127238337 };
			break;
		case 6:
			func_175(bParam0);
			bParam0->f_5 = 2.897605E-21f;
			bParam0->f_11 = { -994747520, 1154664578, 1132413098 };
			break;
		case 7:
			func_175(bParam0);
			bParam0->f_5 = -2.927825E+12f;
			bParam0->f_11 = { 1116066881, -1008809581, 1116753124 };
			break;
		case 8:
			func_175(bParam0);
			bParam0->f_5 = 3.772562E+33f;
			bParam0->f_11 = { -992722651, 1136545533, 1121200712 };
			break;
		case 9:
			func_175(bParam0);
			bParam0->f_5 = 1.272773E+27f;
			bParam0->f_11 = { -990114947, -1000118817, 1118426030 };
			break;
		case 10:
			func_175(bParam0);
			bParam0->f_5 = 4.63641E+15f;
			bParam0->f_11 = { -995474709, -996248581, 1118099174 };
			break;
		case 11:
			func_175(bParam0);
			bParam0->f_5 = -0.1827223f;
			bParam0->f_11 = { -988213038, -994689497, 1125430392 };
			break;
		case 12:
			func_175(bParam0);
			bParam0->f_5 = -2.482818E+25f;
			bParam0->f_11 = { -993858852, -990816433, 1112274782 };
			break;
		case 13:
			func_175(bParam0);
			bParam0->f_5 = 2.143608f;
			bParam0->f_11 = { -992178631, -987112374, 1115373995 };
			break;
		case 14:
			func_175(bParam0);
			bParam0->f_5 = 1.36093E+11f;
			bParam0->f_11 = { -989271882, -989231971, 1115740351 };
			break;
		case 15:
			func_175(bParam0);
			bParam0->f_5 = 4.013596E+22f;
			bParam0->f_11 = { -986762200, -985373528, 1086075133 };
			break;
		case 16:
			func_175(bParam0);
			bParam0->f_5 = 2.682644E+25f;
			bParam0->f_11 = { -985238862, -988404666, 1102433228 };
			break;
		case 17:
			func_175(bParam0);
			bParam0->f_5 = 1.035866E+21f;
			bParam0->f_11 = { -981211932, -987225547, 1059637386 };
			break;
		case 18:
			func_175(bParam0);
			bParam0->f_5 = 1.368246E-33f;
			bParam0->f_11 = { -980900620, -984833824, 1101141922 };
			break;
		case 19:
			func_175(bParam0);
			bParam0->f_5 = 1.311447E+15f;
			bParam0->f_11 = { -978679968, -983651352, -1045894686 };
			break;
		case 20:
			func_175(bParam0);
			bParam0->f_5 = 7.540535E-37f;
			bParam0->f_11 = { -977985082, -987389357, -1048217424 };
			break;
	}
}

void func_75(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	func_174(bParam0);
	func_179(bParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = -2.304212E-21f;
			bParam0->f_11 = { 1148175340, 1136654365, 1121850609 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = -2.163551E-07f;
			bParam0->f_11 = { 1152856182, -1001569757, 1112077029 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = 8.612687E+30f;
			bParam0->f_11 = { -997766499, -1003605937, 1116542494 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = -2.993282E+36f;
			bParam0->f_11 = { -994648458, -990823555, 1111600320 };
			break;
		case 4:
			func_175(bParam0);
			bParam0->f_5 = 1.481728E+24f;
			bParam0->f_11 = { -979639716, -982260342, -1123641291 };
			break;
		case 5:
			func_175(bParam0);
			bParam0->f_5 = 0.01074426f;
			bParam0->f_11 = { -986896496, -986216424, 1115795354 };
			break;
		case 6:
			func_175(bParam0);
			bParam0->f_5 = -6.736074E-18f;
			bParam0->f_11 = { -996723831, -991787701, 1114960149 };
			break;
		case 7:
			func_175(bParam0);
			bParam0->f_5 = 1.163363E-22f;
			bParam0->f_11 = { -992649275, -1005503634, 1125510675 };
			break;
		case 8:
			func_175(bParam0);
			bParam0->f_5 = 1.052811E-10f;
			bParam0->f_11 = { 1145618525, -1005440328, 1117693265 };
			break;
		case 9:
			func_175(bParam0);
			bParam0->f_5 = 1.748911E+21f;
			bParam0->f_11 = { 1155418000, -992449668, 1111562786 };
			break;
	}
}

void func_76(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 4;
	bParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_180(bParam0, iParam2);
			bParam0->f_5 = 1.854114E+09f;
			bParam0->f_11 = { -997137488, 1137085242, 1114766128 };
			break;
		case 1:
			func_180(bParam0, iParam2);
			bParam0->f_5 = -6.807417E-16f;
			bParam0->f_11 = { -996160647, 1133622801, 1117344917 };
			break;
		case 2:
			func_180(bParam0, iParam2);
			bParam0->f_5 = -6.2312E-08f;
			bParam0->f_11 = { -995399437, 1133360297, 1118569942 };
			break;
		case 3:
			func_180(bParam0, iParam2);
			bParam0->f_5 = -3.003877E-37f;
			bParam0->f_11 = { -997476867, 1137399507, 1113422063 };
			break;
		case 4:
			func_180(bParam0, iParam2);
			bParam0->f_5 = 2.880072E-29f;
			bParam0->f_11 = { -996079017, 1125417039, 1116705443 };
			break;
		case 5:
			func_180(bParam0, iParam2);
			bParam0->f_5 = 8.670444E+18f;
			bParam0->f_11 = { -993128883, -1025132724, 1126829287 };
			break;
		case 6:
			func_180(bParam0, iParam2);
			bParam0->f_5 = 1.065102E+27f;
			bParam0->f_11 = { -997775860, -1010137639, 1120012245 };
			break;
		case 7:
			func_180(bParam0, iParam2);
			bParam0->f_5 = 3.879419E+31f;
			bParam0->f_11 = { 1129240415, -1020633724, 1124239173 };
			break;
		case 8:
			func_180(bParam0, iParam2);
			bParam0->f_5 = 8.235938E+25f;
			bParam0->f_11 = { -1004843341, 1127929951, 1109727406 };
			break;
		case 9:
			func_180(bParam0, iParam2);
			bParam0->f_5 = 1.792932E-19f;
			bParam0->f_11 = { 1110541179, 1136795179, 1124193318 };
			break;
		case 10:
			func_180(bParam0, iParam2);
			bParam0->f_5 = 9.895492E+15f;
			bParam0->f_11 = { 1144798960, -1033341947, 1126016477 };
			break;
		case 11:
			func_180(bParam0, iParam2);
			bParam0->f_5 = -2.926217E-34f;
			bParam0->f_11 = { 1145859682, 1141741071, 1122287761 };
			break;
	}
}

void func_77(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = -1.916865E+25f;
			bParam0->f_11 = { -989814252, -988032438, 1115557402 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = 5.481727E+08f;
			bParam0->f_11 = { -994006196, -988681787, 1110206545 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = -70.68216f;
			bParam0->f_11 = { -984086977, -988977810, 1015351744 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = 3.920366E+24f;
			bParam0->f_11 = { -983073949, -983522409, 1110753891 };
			break;
		case 4:
			func_175(bParam0);
			bParam0->f_5 = -1.284236E-09f;
			bParam0->f_11 = { -993676893, -993064731, 1117586734 };
			break;
		case 5:
			func_175(bParam0);
			bParam0->f_5 = 6.689618E-31f;
			bParam0->f_11 = { -996505258, -997469797, 1116285923 };
			break;
		case 6:
			func_175(bParam0);
			bParam0->f_5 = 1.261534f;
			bParam0->f_11 = { -996277247, -1002353267, 1119333330 };
			break;
		case 7:
			func_175(bParam0);
			bParam0->f_5 = -4.792435E+22f;
			bParam0->f_11 = { -995044497, -1016449446, 1120302095 };
			break;
		case 8:
			func_175(bParam0);
			bParam0->f_5 = -5.891382E-23f;
			bParam0->f_11 = { -992531234, 1141532263 /* Float: 553.6f */, 1122045003 };
			break;
		case 9:
			func_175(bParam0);
			bParam0->f_5 = 4.285148E+18f;
			bParam0->f_11 = { -1007524280, -1030963963, 1110164746 };
			break;
		case 10:
			func_175(bParam0);
			bParam0->f_5 = -2.152774E+35f;
			bParam0->f_11 = { -1008383298, -1012053816, 1117869252 };
			break;
		case 11:
			func_175(bParam0);
			bParam0->f_5 = -4.120438E+35f;
			bParam0->f_11 = { 1149776553, 1102972358, 1118859600 };
			break;
		case 12:
			func_175(bParam0);
			bParam0->f_5 = 7.080043E-12f;
			bParam0->f_11 = { 1148848228, 1137757089, 1121440001 };
			break;
		case 13:
			func_175(bParam0);
			bParam0->f_5 = 0.0005734964f;
			bParam0->f_11 = { 1144155884, 1102854928, 1125651561 };
			break;
		case 14:
			func_175(bParam0);
			bParam0->f_5 = -2.95344E+10f;
			bParam0->f_11 = { 1115625368, 1149230895, 1128921492 };
			break;
		case 15:
			func_175(bParam0);
			bParam0->f_5 = -8.519349E-14f;
			bParam0->f_11 = { 1136088416, 1152390468, 1127157629 };
			break;
		case 16:
			func_175(bParam0);
			bParam0->f_5 = -6.511829E+17f;
			bParam0->f_11 = { 1155481063, 1153318988, 1125852394 };
			break;
		case 17:
			func_175(bParam0);
			bParam0->f_5 = 7.159146E-31f;
			bParam0->f_11 = { 1151328826, 1150391732, 1125466165 };
			break;
		case 18:
			func_175(bParam0);
			bParam0->f_5 = -0.0003355019f;
			bParam0->f_11 = { 1157867338, 1129291248, 1116823860 };
			break;
		case 19:
			func_175(bParam0);
			bParam0->f_5 = 3518021f;
			bParam0->f_11 = { 1160198343, 1127479094, 1113101642 };
			break;
	}
}

void func_78(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 9;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_174(bParam0);
	bParam0->f_10 = 1114636288; /* Float: 60f */
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = 0.0005758301f;
			bParam0->f_11 = { 1153648607, -989860561, 1111318751 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = -17030.08f;
			bParam0->f_11 = { 1152155222, -992737288, 1116059878 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = -5.323573E+13f;
			bParam0->f_11 = { 1154135704, -993113154, 1113595852 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = -9.14138E+21f;
			bParam0->f_11 = { 1153178567, -994590515, 1116652531 };
			break;
		case 4:
			func_175(bParam0);
			bParam0->f_5 = -1.558658E+30f;
			bParam0->f_11 = { 1149720044, -996262068, 1116152319 };
			break;
		case 5:
			func_175(bParam0);
			bParam0->f_5 = 3.547867E+31f;
			bParam0->f_11 = { 1143646282, -998764357, 1112649420 };
			break;
		case 6:
			func_175(bParam0);
			bParam0->f_5 = -5.639034E-38f;
			bParam0->f_11 = { 1144058230, -1000510924, 1111559286 };
			break;
		case 7:
			func_175(bParam0);
			bParam0->f_5 = -2.603637E-21f;
			bParam0->f_11 = { 1146873879, -1006208396, 1118835253 };
			break;
		case 8:
			func_175(bParam0);
			bParam0->f_5 = -6.531104E-13f;
			bParam0->f_11 = { 1149047964, -1010487362, 1119149678 };
			break;
	}
}

void func_79(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 1;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	func_174(bParam0);
	func_179(bParam0, 1);
	func_179(bParam0, 4);
	func_179(bParam0, 8);
	func_179(bParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = -4.117585E-20f;
			bParam0->f_11 = { func_181(func_112(iParam2)) };
			break;
	}
}

void func_80(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 5;
	bParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_182(bParam0, iParam2);
			bParam0->f_5 = -4.144115E-32f;
			bParam0->f_11 = { -1012024832, 1144600400, 1122560233 };
			break;
		case 1:
			func_182(bParam0, iParam2);
			bParam0->f_5 = 1.159463E-07f;
			bParam0->f_11 = { -1011592405, 1145963032, 1122432036 };
			break;
		case 2:
			func_182(bParam0, iParam2);
			bParam0->f_5 = -1.15123E+13f;
			bParam0->f_11 = { 1161352091, 1141055007, 1110354478 };
			break;
		case 3:
			func_182(bParam0, iParam2);
			bParam0->f_5 = -4.764357E+21f;
			bParam0->f_11 = { 1161428522, 1141263967, 1110028140 };
			break;
		case 4:
			func_182(bParam0, iParam2);
			bParam0->f_5 = 2.851511E-33f;
			bParam0->f_11 = { 1152685125, -995016853, 1117549030 };
			break;
		case 5:
			func_182(bParam0, iParam2);
			bParam0->f_5 = 2.691375E-18f;
			bParam0->f_11 = { 1152271722, -994976941, 1117647735 };
			break;
		case 6:
			func_182(bParam0, iParam2);
			bParam0->f_5 = -8.662306E+07f;
			bParam0->f_11 = { 1161511505, 1151924702, 1110169294 };
			break;
		case 7:
			func_182(bParam0, iParam2);
			bParam0->f_5 = -5.357437E+16f;
			bParam0->f_11 = { 1161182181, 1150942838, 1110331674 };
			break;
		case 8:
			func_182(bParam0, iParam2);
			bParam0->f_5 = -1.278147E+09f;
			bParam0->f_11 = { -1001364507, -993985196, 1114538613 };
			break;
		case 9:
			func_182(bParam0, iParam2);
			bParam0->f_5 = -2.465434E+17f;
			bParam0->f_11 = { -998315786, -997302732, 1113690370 };
			break;
	}
}

void func_81(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = 2.848424E+38f;
			bParam0->f_11 = { 1158286001, -1011910128, 1109783478 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = 4.950299E+31f;
			bParam0->f_11 = { 1155054987, -1003099378, 1109629233 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = 2.368803E-22f;
			bParam0->f_11 = { -990018183, 1137892770, 1123441718 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = -4.61136E+32f;
			bParam0->f_11 = { 1131335818, 1151032549, 1127862573 };
			break;
		case 4:
			func_175(bParam0);
			bParam0->f_5 = 0.9061007f;
			bParam0->f_11 = { 1143046242, 1151540655, 1128361925 };
			break;
		case 5:
			func_175(bParam0);
			bParam0->f_5 = -1.810033E+29f;
			bParam0->f_11 = { 1138457552, 1146079004, 1125234016 };
			break;
		case 6:
			func_175(bParam0);
			bParam0->f_5 = -0.0002372616f;
			bParam0->f_11 = { -1006079803, 1136971576, 1118700516 };
			break;
		case 7:
			func_175(bParam0);
			bParam0->f_5 = -2.273169E+07f;
			bParam0->f_11 = { 1149130670, 1149553230, 1126102794 };
			break;
		case 8:
			func_175(bParam0);
			bParam0->f_5 = 3.949332E+16f;
			bParam0->f_11 = { 1158357864, -1015502465, 1110060066 };
			break;
		case 9:
			func_175(bParam0);
			bParam0->f_5 = -6.086829E+07f;
			bParam0->f_11 = { 1159753291, -1030868474, 1111840077 };
			break;
		case 10:
			func_175(bParam0);
			bParam0->f_5 = 2.206825E-28f;
			bParam0->f_11 = { 1152229966, -989246687, 1111577251 };
			break;
		case 11:
			func_175(bParam0);
			bParam0->f_5 = 1.03376E-22f;
			bParam0->f_11 = { 1147320836, -998849882, 1113839370 /* Float: 56.96f */ };
			break;
	}
}

void func_82(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 2;
	bParam0->f_2 = 4;
	func_183(bParam0, iParam2);
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

void func_83(bool bParam0, int iParam1)
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
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -5.322689E+14f;
			bParam0->f_11 = { 1158061201, -992888888, 1109541939 };
			break;
		case 1:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -4.244014E+24f;
			bParam0->f_11 = { 1158203738, -993561462, 1109548335 };
			break;
		case 2:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -2.455464E-06f;
			bParam0->f_11 = { 1157752578, -992748284, 1109574183 };
			break;
		case 3:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -8059160f;
			bParam0->f_11 = { 1157705048, -992155204, 1109424420 };
			break;
		case 4:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -1.142636E-18f;
			bParam0->f_11 = { 1157970814, -991349475, 1109415349 };
			break;
		case 5:
			func_184(bParam0, iParam1);
			bParam0->f_5 = 2.602319E-24f;
			bParam0->f_11 = { 1158207949, -1004305669, 1109540943 };
			break;
		case 6:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -1.098314E-10f;
			bParam0->f_11 = { 1158709142, -1006060415, 1109540943 };
			break;
		case 7:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -1.790267f;
			bParam0->f_11 = { 1158301428, -1005197425, 1109540943 };
			break;
		case 8:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -3.506853E+11f;
			bParam0->f_11 = { 1158550900, -1003652067, 1109540943 };
			break;
		case 9:
			func_184(bParam0, iParam1);
			bParam0->f_5 = 8.968142E+11f;
			bParam0->f_11 = { 1158720140, -1005197527, 1109540943 };
			break;
		case 10:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -1.055209E+16f;
			bParam0->f_11 = { 1160600510, -1004983139, 1109559581 };
			break;
		case 11:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -225603.3f;
			bParam0->f_11 = { 1160708629, -1003110233, 1109553735 };
			break;
		case 12:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -2.767887E-05f;
			bParam0->f_11 = { 1160405518, -1004165304, 1109531899 };
			break;
		case 13:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -1.401141E-16f;
			bParam0->f_11 = { 1160340020, -1006263429, 1109554627 };
			break;
		case 14:
			func_184(bParam0, iParam1);
			bParam0->f_5 = -5.535239E+22f;
			bParam0->f_11 = { 1160413896, -1008062097, 1109596412 };
			break;
	}
}

void func_84(bool bParam0, int iParam1)
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
			func_185(bParam0, iParam1);
			bParam0->f_5 = -2.038598E+37f;
			bParam0->f_11 = { -992608256 /* Float: -1712f */, 1143013376 /* Float: 644f */, 1123391898 /* Float: 122.8f */ };
			break;
		case 1:
			func_185(bParam0, iParam1);
			bParam0->f_5 = -9.659467E+26f;
			bParam0->f_11 = { -987852390, 1146452378 /* Float: 853.9f */, 1125941248 /* Float: 156.5f */ };
			break;
		case 2:
			func_185(bParam0, iParam1);
			bParam0->f_5 = -8.923116E+15f;
			bParam0->f_11 = { -987960525, 1140968653 /* Float: 519.2f */, 1124859904 /* Float: 140f */ };
			break;
		case 3:
			func_185(bParam0, iParam1);
			bParam0->f_5 = 176098.3f;
			bParam0->f_11 = { -990905958, 1144768102 /* Float: 751.1f */, 1125548032 /* Float: 150.5f */ };
			break;
		case 4:
			func_185(bParam0, iParam1);
			bParam0->f_5 = -9.05571E+28f;
			bParam0->f_11 = { -990057264, 1143319567, 1123007883 };
			break;
		case 5:
			func_185(bParam0, iParam1);
			bParam0->f_5 = -1.786527E-35f;
			bParam0->f_11 = { -988268782, 1146028892, 1124790790 };
			break;
		case 6:
			func_185(bParam0, iParam1);
			bParam0->f_5 = -4.511086E-25f;
			bParam0->f_11 = { -988056648, 1137647573, 1125402359 };
			break;
		case 7:
			func_185(bParam0, iParam1);
			bParam0->f_5 = -5.512158E-19f;
			bParam0->f_11 = { -987680690, 1135288051, 1125486979 };
			break;
		case 8:
			func_185(bParam0, iParam1);
			bParam0->f_5 = -0.001709003f;
			bParam0->f_11 = { -995344834, 1132765728, 1117548970 };
			break;
		case 9:
			func_185(bParam0, iParam1);
			bParam0->f_5 = -5.630045E+34f;
			bParam0->f_11 = { -996727087, 1126975655, 1109523798 };
			break;
		case 10:
			func_185(bParam0, iParam1);
			bParam0->f_5 = 1.106593E-18f;
			bParam0->f_11 = { -997693950, -1038792419, 1109531191 };
			break;
		case 11:
			func_185(bParam0, iParam1);
			bParam0->f_5 = -4.837103E+08f;
			bParam0->f_11 = { -1000809505, 1141231781, 1114093833 };
			break;
		case 12:
			func_185(bParam0, iParam1);
			bParam0->f_5 = -2.169674E-36f;
			bParam0->f_11 = { -1002040451, 1143064686, 1118902642 };
			break;
	}
}

void func_85(bool bParam0, int iParam1)
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
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			bParam0->f_5 = -8.612918E+14f;
			bParam0->f_11 = { -988725982, -1008850803, 1125072214 };
			break;
		case 1:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			bParam0->f_5 = -274406f;
			bParam0->f_11 = { -988464002, -1012496948, 1125049277 };
			break;
		case 2:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -987502590, -1012179590, 1124960272 };
			break;
		case 3:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			bParam0->f_5 = -5.418765E-15f;
			bParam0->f_11 = { -986938083, -1029981707, 1125637043 };
			break;
		case 4:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			bParam0->f_5 = -4.266224E-27f;
			bParam0->f_11 = { -988930966, -1007885147, 1124752530 };
			break;
		case 5:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			bParam0->f_5 = -980838.1f;
			bParam0->f_11 = { 1159267230, 1141537636, 1115958804 /* Float: 66.09f */ };
			break;
		case 6:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			bParam0->f_5 = 9.562718E+30f;
			bParam0->f_11 = { 1158487625, 1132486158, 1110351780 };
			break;
		case 7:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			bParam0->f_5 = 2.717809E+31f;
			bParam0->f_11 = { 1158761782, 1147136169, 1116686923 };
			break;
		case 8:
			func_176(bParam0, 1);
			bParam0->f_5 = -9.354164E+14f;
			bParam0->f_11 = { 1159003386, 1149732085, 1118559705 };
			break;
		case 9:
			func_176(bParam0, 1);
			bParam0->f_5 = 3.485359E-26f;
			bParam0->f_11 = { 1159063676, 1145135174, 1116079378 };
			break;
	}
}

void func_86(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 3.134018E-27f;
	func_174(bParam0);
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
			func_176(bParam0, 0);
			bParam0->f_5 = -120.0375f;
			bParam0->f_11 = { -991423617, 1155620198, 1131040276 };
			break;
		case 1:
			func_176(bParam0, 0);
			bParam0->f_5 = -2.660786E+15f;
			bParam0->f_11 = { -991714079, 1153682243, 1131138698 };
			break;
		case 2:
			func_176(bParam0, 0);
			bParam0->f_5 = 1.184275E-30f;
			bParam0->f_11 = { -989767363, 1155701240, 1131810272 };
			break;
		case 3:
			func_176(bParam0, 0);
			bParam0->f_5 = -2.187653E+19f;
			bParam0->f_11 = { -990805961, 1158058868, 1134648430 };
			break;
		case 4:
			func_176(bParam0, 0);
			bParam0->f_5 = 7.970961E-07f;
			bParam0->f_11 = { -992277732, 1156836304, 1132740906 };
			break;
		case 5:
			func_176(bParam0, 1);
			bParam0->f_5 = 3.86703E+21f;
			bParam0->f_11 = { 1148176957, 1142602926, 1120107626 };
			break;
		case 6:
			func_176(bParam0, 1);
			bParam0->f_5 = 9.622145E+12f;
			bParam0->f_11 = { 1148782335, 1140850721, 1120049798 };
			break;
		case 7:
			func_176(bParam0, 1);
			bParam0->f_5 = -7.549088E+09f;
			bParam0->f_11 = { 1150806073, 1141598568, 1118713020 };
			break;
		case 8:
			func_176(bParam0, 1);
			bParam0->f_5 = -14.39795f;
			bParam0->f_11 = { 1151102691, 1135372616, 1119368577 };
			break;
		case 9:
			func_176(bParam0, 1);
			bParam0->f_5 = -2.34765E-12f;
			bParam0->f_11 = { 1147420824, 1122179167, 1122539930 /* Float: 116.3f */ };
			break;
	}
}

void func_87(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 11;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -3.239727E-28f;
	func_174(bParam0);
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
			func_176(bParam0, 0);
			bParam0->f_5 = -2.380014E-24f;
			bParam0->f_11 = { -995552140, -987798002, 1117123733 };
			break;
		case 1:
			func_176(bParam0, 0);
			bParam0->f_5 = -1.78623E+10f;
			bParam0->f_11 = { -990956493, -989177591, 1109931275 };
			break;
		case 2:
			func_176(bParam0, 0);
			bParam0->f_5 = 4.690053E-36f;
			bParam0->f_11 = { -992330680, -988459800, 1110132785 };
			break;
		case 3:
			func_176(bParam0, 1);
			bParam0->f_5 = 1.948744E+32f;
			bParam0->f_11 = { -993582233, -988610888, 1110185843 };
			break;
		case 4:
			func_176(bParam0, 1);
			bParam0->f_5 = 8.647611E+23f;
			bParam0->f_11 = { -991882023, -993157580, 1119974693 };
			break;
		case 5:
			func_176(bParam0, 1);
			bParam0->f_5 = -6.423808E-24f;
			bParam0->f_11 = { -993294617, -990711368, 1112058652 };
			break;
		case 6:
			func_176(bParam0, 2);
			bParam0->f_5 = -1.791026E-06f;
			bParam0->f_11 = { 1159248741, -1046889733, 1110236227 };
			break;
		case 7:
			func_176(bParam0, 2);
			bParam0->f_5 = 7.396245E+34f;
			bParam0->f_11 = { 1160363664, -1023361339, 1109921550 };
			break;
		case 8:
			func_176(bParam0, 2);
			bParam0->f_5 = 7.494099E-32f;
			bParam0->f_11 = { 1158921326, 1095914802, 1109741326 };
			break;
		case 9:
			func_176(bParam0, 2);
			bParam0->f_5 = 1.342886E+08f;
			bParam0->f_11 = { 1158886759, -1015588513, 1109801723 };
			break;
		case 10:
			func_176(bParam0, 2);
			bParam0->f_5 = 1.503919E+19f;
			bParam0->f_11 = { 1159894572, -1017870706, 1110384627 };
			break;
	}
}

void func_88(bool bParam0, int iParam1)
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
			func_186(bParam0, iParam1);
			bParam0->f_5 = 0.0009226644f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977418783, -983523996, -1064595096 };
			break;
		case 1:
			func_186(bParam0, iParam1);
			bParam0->f_5 = 400348.8f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977155092, -983077929, -1064761630 };
			break;
		case 2:
			func_186(bParam0, iParam1);
			bParam0->f_5 = 1.816392E+09f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978445599, -982307471, -1040579926 };
			break;
		case 3:
			func_186(bParam0, iParam1);
			bParam0->f_5 = 2.952954E+17f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977323950, -982706913, -1039934161 };
			break;
		case 4:
			func_186(bParam0, iParam1);
			bParam0->f_5 = 3.670386E+30f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977549271, -982846915, -1043804979 /* Float: -25.1f */ };
			break;
		case 5:
			func_186(bParam0, iParam1);
			bParam0->f_5 = -8.686904E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977780292, -982630996, -1040579874 };
			break;
		case 6:
			func_186(bParam0, iParam1);
			bParam0->f_5 = 2.642126E-14f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -976830080, -984312220, -1049936318 };
			break;
		case 7:
			func_186(bParam0, iParam1);
			bParam0->f_5 = -1.378686E-16f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977072919, -984193168, 1069253919 /* Float: 1.465f */ };
			break;
		case 8:
			func_186(bParam0, iParam1);
			bParam0->f_5 = -1.230984E-26f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977380271, -984323986, 1099912027 };
			break;
		case 9:
			func_186(bParam0, iParam1);
			bParam0->f_5 = -6.553197E-35f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977456769, -983523121, -1063541906 };
			break;
		case 10:
			func_186(bParam0, iParam1);
			bParam0->f_5 = 8.637232E-13f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978366554, -982756861, -1044300772 };
			break;
		case 11:
			func_186(bParam0, iParam1);
			bParam0->f_5 = 1.752292E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978254555, -983655521, -1044299645 };
			break;
		case 12:
			func_186(bParam0, iParam1);
			bParam0->f_5 = 1.670123f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977954760, -982722422, -1042385260 };
			break;
		case 13:
			func_186(bParam0, iParam1);
			bParam0->f_5 = -0.602618f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977759215, -983824648, -1044300169 };
			break;
		case 14:
			func_186(bParam0, iParam1);
			bParam0->f_5 = -1.833368E+12f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978071834, -984716182, -1044299435 };
			break;
		case 15:
			func_186(bParam0, iParam1);
			bParam0->f_5 = 3.26606E+37f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -999665125, -991067580, 1112228039 };
			break;
		case 16:
			func_186(bParam0, iParam1);
			bParam0->f_5 = -5.374648E+10f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -997944773, -992452114, 1117191947 };
			break;
		case 17:
			func_186(bParam0, iParam1);
			bParam0->f_5 = -1.878287E+19f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -998009571, -992010712, 1115281487 };
			break;
		case 18:
			func_186(bParam0, iParam1);
			bParam0->f_5 = 2.573031E-25f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -999292823, -993021026, 1116192584 };
			break;
		case 19:
			func_186(bParam0, iParam1);
			bParam0->f_5 = -1772.994f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -995724411, -991128144, 1114745707 };
			break;
	}
}

void func_89(bool bParam0, int iParam1)
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
			func_187(bParam0, iParam1);
			bParam0->f_5 = 3.918093E+24f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1153029020, -989478362, 1111263331 };
			break;
		case 1:
			func_187(bParam0, iParam1);
			bParam0->f_5 = -1.092243E-15f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1152320247, -989371098, 1111316916 };
			break;
		case 2:
			func_187(bParam0, iParam1);
			bParam0->f_5 = 1.756841E+34f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150925192, -989638649, 1113899821 };
			break;
		case 3:
			func_187(bParam0, iParam1);
			bParam0->f_5 = 0.01141832f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1149342358, -989449118, 1110418915 };
			break;
		case 4:
			func_187(bParam0, iParam1);
			bParam0->f_5 = 2.219954E+08f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150606075, -989156405, 1113924200 };
			break;
		case 5:
			func_187(bParam0, iParam1);
			bParam0->f_5 = 0.0009091725f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1158499475, -1011192224, 1109620320 };
			break;
		case 6:
			func_187(bParam0, iParam1);
			bParam0->f_5 = 7.177287E+13f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1154223442, -1004918764, 1110145185 };
			break;
		case 7:
			func_187(bParam0, iParam1);
			bParam0->f_5 = -2.752983E-12f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157954043, -1000154145, 1109563592 };
			break;
		case 8:
			func_187(bParam0, iParam1);
			bParam0->f_5 = -0.0005524897f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157428810, -998356438, 1110022501 };
			break;
		case 9:
			func_187(bParam0, iParam1);
			bParam0->f_5 = NaNf;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157816127, -1002908413, 1109728847 };
			break;
		case 10:
			func_187(bParam0, iParam1);
			bParam0->f_5 = 25235.61f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1158183074, -1017816200, 1110843877 };
			break;
		case 11:
			func_187(bParam0, iParam1);
			bParam0->f_5 = 9.829717E-32f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1158191810, -1037171163, 1112596493 };
			break;
		case 12:
			func_187(bParam0, iParam1);
			bParam0->f_5 = 1.242477E-37f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1159264072, -1034149534, 1110360116 };
			break;
		case 13:
			func_187(bParam0, iParam1);
			bParam0->f_5 = -1.672978E-23f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1155861872, -1013011186, 1110889726 };
			break;
		case 14:
			func_187(bParam0, iParam1);
			bParam0->f_5 = -3.673748E-34f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1156223241, -1008548397, 1110250488 };
			break;
	}
}

void func_90(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 6.995461E-38f;
	func_174(bParam0);
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
			func_176(bParam0, 3);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			bParam0->f_5 = -4.286879E+09f;
			bParam0->f_11 = { -987243245, -987194041, 1116719088 };
			break;
		case 1:
			func_176(bParam0, 3);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			bParam0->f_5 = -1899.75f;
			bParam0->f_11 = { -986605684, -986590464, 1118613838 };
			break;
		case 2:
			func_176(bParam0, 3);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			bParam0->f_5 = 3.146079E+11f;
			bParam0->f_11 = { -985776553, -989418570, 1114616784 };
			break;
		case 3:
			func_176(bParam0, 3);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			bParam0->f_5 = 6.593053E+11f;
			bParam0->f_11 = { -987375265, -989464530, 1117252747 };
			break;
		case 4:
			func_176(bParam0, 3);
			func_176(bParam0, 4);
			func_176(bParam0, 5);
			bParam0->f_5 = -1.312522E-18f;
			bParam0->f_11 = { -985019226, -988272544, 1104503741 };
			break;
		case 5:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			bParam0->f_5 = 2.867698E+08f;
			bParam0->f_11 = { -996986113, -1002752333, 1116184379 };
			break;
		case 6:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			bParam0->f_5 = -6.92375E-06f;
			bParam0->f_11 = { -992414219, -1004726909, 1125195750 };
			break;
		case 7:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			bParam0->f_5 = -3.40923E+18f;
			bParam0->f_11 = { -993747441, -1012637008, 1126210594 };
			break;
		case 8:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			bParam0->f_5 = 1.232282E+31f;
			bParam0->f_11 = { -994642775, -1007637411, 1124203803 };
			break;
		case 9:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			bParam0->f_5 = 2.032195E-23f;
			bParam0->f_11 = { -994132108, -1000009956, 1118852848 };
			break;
	}
}

void func_91(bool bParam0, int iParam1)
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
			func_188(bParam0, iParam1);
			bParam0->f_5 = 3.646808E-23f;
			bParam0->f_11 = { 1150683855, -1005713036, 1116128910 };
			break;
		case 1:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -7.877037E+07f;
			bParam0->f_11 = { 1150993217, -1006063437, 1116018901 };
			break;
		case 2:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -1.005039E-10f;
			bParam0->f_11 = { 1151451230, -1004746306, 1114369085 };
			break;
		case 3:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -1.785908E+20f;
			bParam0->f_11 = { 1151746969, -1003404036, 1115786943 };
			break;
		case 4:
			func_188(bParam0, iParam1);
			bParam0->f_5 = 3.983027E+21f;
			bParam0->f_11 = { 1150468175, -1006492490, 1116347446 };
			break;
		case 5:
			func_188(bParam0, iParam1);
			bParam0->f_5 = 9.595287E-17f;
			bParam0->f_11 = { 1142739862, -998127987, 1109931092 };
			break;
		case 6:
			func_188(bParam0, iParam1);
			bParam0->f_5 = 4.824729E-06f;
			bParam0->f_11 = { 1143530648, -997446161, 1112212583 };
			break;
		case 7:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -2.555951E-17f;
			bParam0->f_11 = { 1145558704, -996876822, 1110177926 };
			break;
		case 8:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -1.385647E-16f;
			bParam0->f_11 = { 1144808753, -998900395, 1111449194 };
			break;
		case 9:
			func_188(bParam0, iParam1);
			bParam0->f_5 = 5765001;
			bParam0->f_11 = { 1144681982, -997458662, 1113462643 };
			break;
		case 10:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -3.727919E+33f;
			bParam0->f_11 = { -999235848, 1158407363, 1135288923 };
			break;
		case 11:
			func_188(bParam0, iParam1);
			bParam0->f_5 = 2.834275E-37f;
			bParam0->f_11 = { -997616521, 1157762749, 1136059217 };
			break;
		case 12:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -2.125516E+37f;
			bParam0->f_11 = { -996725295, 1159158302, 1134227512 };
			break;
		case 13:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -6.073288E+28f;
			bParam0->f_11 = { -996139521, 1159254566, 1134068335 };
			break;
		case 14:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -9.716002E+15f;
			bParam0->f_11 = { -995651811, 1158654911, 1134189992 };
			break;
		case 15:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -2.14266E-06f;
			bParam0->f_11 = { -997133115, 1158828474, 1134675008 };
			break;
		case 16:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -5.611622E-15f;
			bParam0->f_11 = { -995741939, 1158524377, 1134203093 };
			break;
		case 17:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -8.89924E-28f;
			bParam0->f_11 = { -996781341, 1158214044, 1135003058 };
			break;
		case 18:
			func_188(bParam0, iParam1);
			bParam0->f_5 = -2.426253E-36f;
			bParam0->f_11 = { -997034512, 1158656755, 1134669408 };
			break;
		case 19:
			func_188(bParam0, iParam1);
			bParam0->f_5 = 2.138536f;
			bParam0->f_11 = { -995210082, 1159048551, 1134176138 };
			break;
	}
}

void func_92(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.451719E-37f;
	func_174(bParam0);
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
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			bParam0->f_5 = 1.556235f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 1:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			bParam0->f_5 = -3.54697E+20f;
			bParam0->f_11 = { 1160742329, 1158620392, 1125895471 };
			break;
		case 2:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			bParam0->f_5 = -7.010831E+29f;
			bParam0->f_11 = { 1158759424, 1158020974, 1129532155 };
			break;
		case 3:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			bParam0->f_5 = 0.5552369f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 4:
			func_176(bParam0, 2);
			func_176(bParam0, 3);
			bParam0->f_5 = 5.641576E-08f;
			bParam0->f_11 = { 1159436980, 1158518524, 1127193084 };
			break;
		case 5:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			bParam0->f_5 = -0.2321862f;
			bParam0->f_11 = { -999341769, 1153549610, 1131245824 };
			break;
		case 6:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			bParam0->f_5 = -1.205842E+25f;
			bParam0->f_11 = { -998248058, 1153643433, 1131245044 };
			break;
		case 7:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			bParam0->f_5 = -3.072352E+30f;
			bParam0->f_11 = { -998853848, 1154255222, 1131245044 };
			break;
		case 8:
			func_176(bParam0, 1);
			bParam0->f_5 = -1.409052E+17f;
			bParam0->f_11 = { -1000688253, 1153133963, 1131787328 };
			break;
		case 9:
			func_176(bParam0, 1);
			bParam0->f_5 = 5.022592E+20f;
			bParam0->f_11 = { -999960935, 1152995163, 1131748019 };
			break;
	}
}

void func_93(bool bParam0, int iParam1)
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
			func_189(bParam0, iParam1);
			bParam0->f_5 = -6.309624E-30f;
			bParam0->f_11 = { 1154364192, 1151788160, 1125180460 };
			break;
		case 1:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 7.606064E+25f;
			bParam0->f_11 = { 1154869233, 1152846377, 1125278476 };
			break;
		case 2:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 2.218614E+17f;
			bParam0->f_11 = { 1153706225, 1152094345, 1125190297 };
			break;
		case 3:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -1.157902E+13f;
			bParam0->f_11 = { 1152541464, 1154788643, 1128653927 };
			break;
		case 4:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -2.208555E-05f;
			bParam0->f_11 = { 1153908388, 1154337653, 1125090682 };
			break;
		case 5:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -6.017928E-08f;
			bParam0->f_11 = { 1154735909, 1155106681, 1128038151 };
			break;
		case 6:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -1.237041E-16f;
			bParam0->f_11 = { 1153040328, 1149590831, 1127637621 };
			break;
		case 7:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 5.533065E-30f;
			bParam0->f_11 = { 1152335237, 1151709616, 1126430749 };
			break;
		case 8:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 9885199;
			bParam0->f_11 = { 1155699398, 1150631311, 1129836629 };
			break;
		case 9:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 9.559201E+09f;
			bParam0->f_11 = { 1156747148, 1152229918, 1127341831 };
			break;
		case 10:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -4.436288E-35f;
			bParam0->f_11 = { 1124022813, 1155799348, 1128746117 };
			break;
		case 11:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -1.112515E-34f;
			bParam0->f_11 = { 1126222909, 1155178095, 1128302759 };
			break;
		case 12:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 8.374794E+15f;
			bParam0->f_11 = { 1124085524, 1156180820, 1128849369 };
			break;
		case 13:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 1.249266E+27f;
			bParam0->f_11 = { 1127834989, 1155794550, 1128809025 };
			break;
		case 14:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 4.025592E+09f;
			bParam0->f_11 = { 1128547897, 1155183043, 1128488488 };
			break;
		case 15:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 1.084824E-19f;
			bParam0->f_11 = { 1131359109, 1156530293, 1129108052 };
			break;
		case 16:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 2.098147E-10f;
			bParam0->f_11 = { 1140864727, 1156629084, 1128739524 };
			break;
		case 17:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 3.394846E-38f;
			bParam0->f_11 = { 1134731044, 1156432553, 1128796586 };
			break;
		case 18:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 1.905542E-27f;
			bParam0->f_11 = { 1135884150, 1155955537, 1127818507 };
			break;
		case 19:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 346.6985f;
			bParam0->f_11 = { 1140660978, 1156284065, 1128919446 };
			break;
		case 20:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 5.304888E+32f;
			bParam0->f_11 = { 1132321512, 1154821639, 1127963630 };
			break;
		case 21:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -1.086162E-34f;
			bParam0->f_11 = { 1134575491, 1155073307, 1128286637 };
			break;
		case 22:
			func_189(bParam0, iParam1);
			bParam0->f_5 = 8.374264E+35f;
			bParam0->f_11 = { -1041303234, 1154911538, 1127437946 };
			break;
		case 23:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -1.348186E-11f;
			bParam0->f_11 = { -1046114730, 1154224028, 1126303511 };
			break;
		case 24:
			func_189(bParam0, iParam1);
			bParam0->f_5 = -2.126682E-19f;
			bParam0->f_11 = { 1139806290, 1157718932, 1131095196 };
			break;
	}
}

void func_94(bool bParam0, int iParam1, int iParam2)
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
	func_190(bParam0, iParam1, iParam2);
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

void func_95(bool bParam0, int iParam1, int iParam2)
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
	func_191(bParam0, iParam1, iParam2);
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

void func_96(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -1.997944E+24f;
	func_174(bParam0);
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
			func_176(bParam0, 0);
			break;
		case 1:
			bParam0->f_5 = 1.370795E+25f;
			bParam0->f_11 = { 1141419185, 1147851535, 1126274761 };
			func_176(bParam0, 0);
			break;
		case 2:
			bParam0->f_5 = 9.042136E+19f;
			bParam0->f_11 = { -1022449556, 1150936087, 1126466414 };
			func_176(bParam0, 0);
			break;
		case 3:
			bParam0->f_5 = 2.160843E+11f;
			bParam0->f_11 = { 1137552143, 1151738464, 1127506903 };
			func_176(bParam0, 0);
			break;
		case 4:
			bParam0->f_5 = -3.011542E-17f;
			bParam0->f_11 = { 1139597577, 1149032461, 1127027612 };
			func_176(bParam0, 0);
			break;
		case 5:
			bParam0->f_5 = -4.446832E-24f;
			bParam0->f_11 = { -981235030, -987276933, 1085129989 };
			func_176(bParam0, 1);
			break;
		case 6:
			bParam0->f_5 = -4.622995E+21f;
			bParam0->f_11 = { -981130001, -988364378, 1102909800 };
			func_176(bParam0, 1);
			break;
		case 7:
			bParam0->f_5 = -1.802733E+33f;
			bParam0->f_11 = { -980393105, -987348890, -1061350801 };
			func_176(bParam0, 1);
			break;
		case 8:
			bParam0->f_5 = 1.967467f;
			bParam0->f_11 = { -980903801, -985394196, -1071267185 /* Float: -2.59f */ };
			func_176(bParam0, 1);
			break;
		case 9:
			bParam0->f_5 = -7.983214E+29f;
			bParam0->f_11 = { -981449811, -989801596, 1083838982 };
			func_176(bParam0, 1);
			break;
	}
}

void func_97(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = -2.764938E+31f;
			bParam0->f_11 = { -987648316, -1014741896, 1126279879 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = -3.932373E-38f;
			bParam0->f_11 = { -987684123, 1136819136, 1125408578 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = -4.217522E-34f;
			bParam0->f_11 = { -989247175, 1139436460, 1122968220 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = 4.754441E-35f;
			bParam0->f_11 = { -993221014, -994236548, 1118131821 };
			break;
		case 4:
			func_175(bParam0);
			bParam0->f_5 = 5.129355E-24f;
			bParam0->f_11 = { -1001499710, -991846804, 1114382349 };
			break;
		case 5:
			func_175(bParam0);
			bParam0->f_5 = 277.6303f;
			bParam0->f_11 = { 1155489095, 1153867170, 1126659935 };
			break;
		case 6:
			func_175(bParam0);
			bParam0->f_5 = 7.336496E+37f;
			bParam0->f_11 = { 1156906141, 1152215046, 1127467319 };
			break;
		case 7:
			func_175(bParam0);
			bParam0->f_5 = 3.488513E-14f;
			bParam0->f_11 = { 1142908396, 1157838665, 1130235875 };
			break;
		case 8:
			func_175(bParam0);
			bParam0->f_5 = -3.891272E+29f;
			bParam0->f_11 = { 1151470150, 1150367213, 1125524301 };
			break;
		case 9:
			func_175(bParam0);
			bParam0->f_5 = 2.633142E+37f;
			bParam0->f_11 = { -989641739, -995386273, 1124039697 };
			break;
		case 10:
			func_175(bParam0);
			bParam0->f_5 = -6.725374E-15f;
			bParam0->f_11 = { -989212607, -993655646, 1125410037 };
			break;
	}
}

void func_98(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = -9.677925E+28f;
			bParam0->f_11 = { -997542154, 1157860159, 1135917033 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = 1.15976E+21f;
			bParam0->f_11 = { -981047785, -984131167, 1107628138 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = -1.475104E+12f;
			bParam0->f_11 = { -982288543, -988035027, -1053212300 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = -5.826799E-05f;
			bParam0->f_11 = { -989272033, -986500208, 1103839767 };
			break;
		case 4:
			func_175(bParam0);
			bParam0->f_5 = -104.3275f;
			bParam0->f_11 = { -989708727, -995061336, 1124326316 };
			break;
		case 5:
			func_175(bParam0);
			bParam0->f_5 = -214.0117f;
			bParam0->f_11 = { -1000315293, 1141241518, 1114173656 };
			break;
		case 6:
			func_175(bParam0);
			bParam0->f_5 = 4.977976E-28f;
			bParam0->f_11 = { 1133271944, 1132722864, 1122092791 };
			break;
		case 7:
			func_175(bParam0);
			bParam0->f_5 = 2.99861E+07f;
			bParam0->f_11 = { 1153532590, 1151951645, 1125256770 };
			break;
		case 8:
			func_175(bParam0);
			bParam0->f_5 = -54188.87f;
			bParam0->f_11 = { 1160105939, 1150595099, 1122854935 };
			break;
		case 9:
			func_175(bParam0);
			bParam0->f_5 = -1482332f;
			bParam0->f_11 = { 1153213250, -989636818, 1110786284 };
			break;
	}
}

void func_99(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 7;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_174(bParam0);
	switch (iParam1)
	{
		case 0:
			func_175(bParam0);
			bParam0->f_5 = -1.026791E+10f;
			bParam0->f_11 = { -994349899, -1005945697, 1124323804 };
			break;
		case 1:
			func_175(bParam0);
			bParam0->f_5 = -2.105499E+09f;
			bParam0->f_11 = { -992210537, 1132875754, 1122853826 };
			break;
		case 2:
			func_175(bParam0);
			bParam0->f_5 = -1.206049E-09f;
			bParam0->f_11 = { -986930676, -1021440920, 1125574076 };
			break;
		case 3:
			func_175(bParam0);
			bParam0->f_5 = -1.383321E-18f;
			bParam0->f_11 = { -1003232130, -1002620434, 1111966032 };
			break;
		case 4:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			bParam0->f_5 = -1.482653E+35f;
			bParam0->f_11 = { 1148051879, -996406306, 1113029141 };
			break;
		case 5:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			bParam0->f_5 = 2.080852E-36f;
			bParam0->f_11 = { 1149765967, -995011794, 1113468586 };
			break;
		case 6:
			func_176(bParam0, 0);
			func_176(bParam0, 2);
			bParam0->f_5 = 5.81204E-20f;
			bParam0->f_11 = { 1151415856, -993495414, 1115716307 };
			break;
	}
}

void func_100(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 8;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -6.868404E+23f;
			bParam0->f_11 = { -989719630, -986879604, 1117463288 };
			break;
		case 1:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -0.02577076f;
			bParam0->f_11 = { -988991611, -986448994, 1103674055 };
			break;
		case 2:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -2.063277E-28f;
			bParam0->f_11 = { -986263483, -986898915, 1119832166 };
			break;
		case 3:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 6.326727E-20f;
			bParam0->f_11 = { -987396588, -986047399, 1117313263 };
			break;
		case 4:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -3.354263E+31f;
			bParam0->f_11 = { -988725571, -989745785, 1118847028 };
			break;
		case 5:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -1.882589E-31f;
			bParam0->f_11 = { -984090304, -988968142, 1083628218 };
			break;
		case 6:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 2.757583E+32f;
			bParam0->f_11 = { -983575685, -983290305, -1051860245 };
			break;
		case 7:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -3.447738E-37f;
			bParam0->f_11 = { -979094448, -981654036, -1066910142 };
			break;
	}
}

void func_101(bool bParam0, int iParam1, int iParam2)
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
	iVar0 = func_193(iParam1);
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
	*bParam0 = func_194(iVar0);
	bParam0->f_1 = 0;
	bParam0->f_6 = 2;
	func_179(bParam0, 32);
	if (iParam2 != -1)
	{
		bParam0->f_9 = func_196(func_195(iVar0), iParam2);
		bParam0->f_15[0] = func_197(func_195(iVar0), iParam2);
		bParam0->f_5 = func_198(iVar0, iParam2);
		bParam0->f_11 = { func_199(iVar0, iParam2) };
	}
}

int func_102(int iParam0)
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

int func_103(int iParam0, var uParam1, int iParam2)
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

struct<2> func_104()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_105()
{
	switch (func_200())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 1.227979E-22f;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -1.083228E-13f;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return -463049.2f;
		default:
			break;
	}
	return 0;
}

Vector3 func_106()
{
	switch (func_200())
	{
		case 0:
			return 1158463633, 1151850133, 1118379350;
		case 1:
			return 1158581043, 1154029896, 1118348247 /* Float: 84.32f */;
		case 2:
			return 1159227851, 1148195910, 1116877134;
		case 3:
			return 1150112082, 1141895886, 1118655292;
		case 4:
			return -1002661653, -1010332030, 1109614411;
		case 5:
			return -1009953158, -1031815037, 1109596884;
		case 6:
			return -989701008, -1021188067, 1129320500;
		case 7:
			return -992884296, -1006537328, 1124916724;
		case 8:
			return -987492840, -1012276717, 1124978537;
		case 9:
			return -999840598, -999875151, 1109701978;
		case 10:
			return -1003176727, -992552468, 1109763031 /* Float: 41.41f */;
		case 11:
			return -997874236, -990907462, 1110008057;
		case 12:
			return 1154561405, 1152647541, 1125258684;
		case 13:
			return 1153650150, 1152690073, 1125206209;
		case 14:
			return 1151049129, 1150494730, 1125402909;
		case 15:
			return 1156634238, -1011536767, 1110045203;
		case 16:
			return 1158219730, -1012979473, 1109582991;
		case 17:
			return 1159104295, -1007338908, 1109635708;
		case 18:
			return -984958968, -985189821, -1055587094;
		case 19:
			return -992337834, -986246592, -1052418507;
		case 20:
			return -992419265, -988502609, 1109731312;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_107(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8)
{
	Local_164.f_51[iParam0 /*9*/][iParam1 /*8*/].f_1 = iParam6;
	Local_164.f_51[iParam0 /*9*/][iParam1 /*8*/].f_2 = iParam7;
	Local_164.f_51[iParam0 /*9*/][iParam1 /*8*/].f_3 = { vParam2 };
	Local_164.f_51[iParam0 /*9*/][iParam1 /*8*/].f_6 = fParam5;
	Local_164.f_51[iParam0 /*9*/][iParam1 /*8*/].f_7 = iParam8;
}

void func_108()
{
	switch (func_201())
	{
		case 0:
			Local_14.f_7.f_9 = 2.102341E-35f;
			break;
		case 1:
			Local_14.f_7.f_9 = 27.04357f;
			break;
		case 2:
			Local_14.f_7.f_9 = 1.317046E+14f;
			break;
		case 3:
			Local_14.f_7.f_9 = 1.103265E-21f;
			break;
		case 4:
			Local_14.f_7.f_9 = -0.006625873f;
			break;
		case 5:
			Local_14.f_7.f_9 = 7.071548E-30f;
			break;
		case 6:
			Local_14.f_7.f_9 = 1.059505E-35f;
			break;
		case 7:
			Local_14.f_7.f_9 = 3.82694E+34f;
			break;
	}
}

bool func_109(int iParam0)
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

bool func_110(var uParam0, int iParam1)
{
	return func_202(uParam0->f_25, iParam1);
}

void func_111(int iParam0)
{
	if (Local_14 != iParam0)
	{
		Local_14 = iParam0;
	}
}

int func_112(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_113(int iParam0)
{
	if (!func_121(iParam0))
	{
		func_203(&(Local_14.f_1), iParam0);
	}
}

bool func_114(int iParam0)
{
	if (!func_169(iParam0))
	{
		return false;
	}
	return (func_204(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_115(int iParam0)
{
	if (Local_14.f_2 != iParam0)
	{
		Local_14.f_2 = iParam0;
	}
}

bool func_116(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_14.f_3.f_1))
	{
		return true;
	}
	if (func_161(Local_164.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Local_14.f_3))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(Local_164.f_15, Param0.f_10, false, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_205(&uVar1, Param0);
		Local_14.f_3 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&uVar1);
		func_137(128);
	}
	else if (!func_120(128, 255))
	{
		Local_14.f_3.f_1 = func_206(Param0);
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_14.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Local_14.f_3);
	switch (iVar0)
	{
		case 3:
			Local_14.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_14.f_3);
			return true;
		case 4:
			Local_14.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_117(int iParam0)
{
	return iParam0 != 0;
}

void func_118(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

int func_119(int iParam0)
{
	return (Global_1295619.f_16 - iParam0) * 1000;
}

bool func_120(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_207(&iParam1))
		{
			return false;
		}
	}
	return func_168(Local_35[iParam1 /*4*/], iParam0);
}

bool func_121(int iParam0)
{
	return func_168(Local_14.f_1, iParam0);
}

bool func_122()
{
	int iVar0;

	iVar0 = 1;
	if (!func_209(func_208()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_123()
{
}

bool func_124()
{
	int iVar0;

	iVar0 = 1;
	if (!func_210())
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_125()
{
	return true;
}

void func_126()
{
}

void func_127()
{
	if (!func_121(32) && func_211(32))
	{
		func_113(32);
	}
	if (!func_121(64) && func_211(64))
	{
		func_113(64);
	}
	if (!func_121(16) && func_212(16))
	{
		func_113(16);
	}
	if ((!func_121(2048) && func_211(2048)) && !func_211(4096))
	{
		func_113(2048);
	}
}

void func_128()
{
	bool bVar0;

	if (!bVar0 && func_121(16))
	{
		func_115(1);
		return;
	}
	if (func_121(2048) && !func_211(4096))
	{
		func_115(6);
		return;
	}
}

void func_129()
{
}

bool func_130()
{
	return func_213();
}

void func_131()
{
}

bool func_132()
{
	return true;
}

void func_133(int iParam0)
{
	if (func_61(iParam0))
	{
		func_214(&(Local_164.f_7), iParam0);
	}
}

int func_134(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_169(iParam0))
	{
		return 0;
	}
	iVar0 = func_215(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1144511[iVar1 /*83*/].f_70 = iParam0;
	Global_1144511[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_216(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_217(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_135(int iParam0)
{
	if (!func_61(iParam0))
	{
		func_203(&(Local_164.f_7), iParam0);
	}
}

void func_136(int iParam0)
{
	if (func_168(Local_35[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/], iParam0))
	{
		func_214(&(Local_35[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]), iParam0);
	}
}

void func_137(int iParam0)
{
	if (!func_120(iParam0, 255))
	{
		func_203(&(Local_35[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]), iParam0);
	}
}

void func_138()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_218(iVar0);
				break;
			case -1315570756:
				func_219(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_220(iVar0);
		iVar0++;
	}
}

void func_139(int iParam0)
{
	if (Local_164.f_8 != iParam0)
	{
		Local_164.f_8 = iParam0;
	}
}

bool func_140()
{
	if (!HUD::TEXT_BLOCK_IS_LOADED("NBEGP"))
	{
		return false;
	}
	if (!TASK::ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(func_105()))
	{
		return false;
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return false;
	}
	return true;
}

bool func_141()
{
	bool bVar0;

	bVar0 = false;
	return !bVar0;
}

void func_142(var uParam0)
{
	*uParam0 = 0;
}

void func_143()
{
}

int func_144()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_164.f_19.f_17))
	{
		iVar1 = func_221();
		if (iVar1 == 0)
		{
		}
		Local_164.f_19.f_17 = TASK::CREATE_SCENARIO_POINT_HASH(iVar1, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_106(), func_222(), func_223()), func_222(), 0f, 0f, true);
		iVar0 = 0;
	}
	return iVar0;
}

int func_145()
{
	return 1;
}

int func_146(int iParam0)
{
	return (iParam0 - Global_1295619.f_16) * 1000;
}

void func_147()
{
	if (!func_61(1))
	{
		func_224(Local_164.f_9);
		func_135(1);
	}
}

void func_148()
{
	func_225();
}

void func_149()
{
	func_226();
	Local_164.f_19.f_18 = func_227(func_106(), 2f, 2f, 2f);
}

void func_150()
{
}

void func_151()
{
}

void func_152()
{
	float fVar0;

	if (func_161(Local_164.f_15))
	{
		return;
	}
	if (func_228())
	{
		return;
	}
	if (func_229(Local_164.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_164.f_15);
		if (fVar0 < 1128792064)
		{
			func_137(4096);
		}
		else if (fVar0 < 1137180672)
		{
			func_136(4096);
			func_137(2048);
		}
		else
		{
			func_136(4096);
			func_136(2048);
		}
	}
}

void func_153()
{
	func_230();
	func_231();
}

void func_154()
{
	if (func_232())
	{
		func_137(8);
	}
	else
	{
		func_136(8);
	}
}

void func_155()
{
	func_233();
}

void func_156()
{
	if (!func_120(8, 255))
	{
		func_137(16);
	}
	else
	{
		func_136(16);
	}
}

void func_157()
{
	int iVar0;

	Local_164.f_6 = -1;
	Local_164.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_164.f_5 = (Local_164.f_5 || Local_35[iVar0 /*4*/]);
			Local_164.f_6 = (Local_164.f_6 && Local_35[iVar0 /*4*/]);
		}
		iVar0++;
	}
}

void func_158()
{
	if ((func_61(1024) && !func_120(16384, 255)) && !(SAVE::SAVEGAME_IS_SAVE_PENDING() || func_234(&Global_0, 1)))
	{
		func_137(16384);
	}
}

bool func_159()
{
	return true;
}

void func_160()
{
}

bool func_161(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_162(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_163(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

void func_164(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_236(func_235(Param0));
	iVar1 = func_237(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_238(Param0, &Var2, iParam2);
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

void func_165(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_239(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_240(iVar0);
}

void func_166(int iParam0, int iParam1)
{
	func_118(&(Global_1260791.f_3351[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1260791.f_3357[iParam0] = func_241(iParam0);
			break;
		case 1:
			Global_1260791.f_3357[iParam0] = func_242(iParam0);
			break;
		case 2:
			Global_1260791.f_3357[iParam0] = func_243(iParam0);
			break;
	}
}

void func_167(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!func_18())
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	Var0 = { func_244(iParam0) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1295619.f_16;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_168(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_169(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_170(bool bParam0)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_14.f_7.f_13))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_164.f_19.f_8))
		{
			if (func_245())
			{
				TASK::TASK_FLEE_COORD(Local_164.f_19.f_8, func_106(), 3, 0, -1f, -1, 0);
				PED::SET_PED_KEEP_TASK(Local_164.f_19.f_8, true);
			}
			else
			{
				TASK::TASK_WANDER_IN_AREA(Local_164.f_19.f_8, ENTITY::GET_ENTITY_COORDS(Local_164.f_19.f_8, true, false), 200f, 3f, 6f, 0);
				PED::SET_PED_KEEP_TASK(Local_164.f_19.f_8, true);
			}
		}
		if (bParam0)
		{
			func_246(&(Local_14.f_7.f_13), 0);
		}
		else
		{
			func_247(&(Local_14.f_7.f_13));
		}
	}
	TASK::_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(Local_164.f_19.f_10, true);
	if (MAP::DOES_BLIP_EXIST(Local_164.f_19.f_9))
	{
		MAP::REMOVE_BLIP(&(Local_164.f_19.f_9));
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_164.f_19.f_17))
	{
		TASK::_DELETE_SCENARIO_POINT(Local_164.f_19.f_17);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_164.f_19.f_18, false);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

bool func_171(var uParam0)
{
	if (func_36(*uParam0))
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

int func_172(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_248(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_249(iParam1)) - 1);
	}
	bVar2 = func_36(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21(Global_1207465.f_231[iVar6 /*15*/].f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_173(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_250(bParam0);
			break;
		case 1:
			func_250(bParam0);
			break;
		case 2:
			func_250(bParam0);
			break;
		case 3:
			func_251(bParam0);
			break;
		case 4:
			func_250(bParam0);
			break;
		case 5:
			func_250(bParam0);
			break;
		case 6:
			func_251(bParam0);
			break;
		case 7:
			func_251(bParam0);
			break;
		case 8:
			func_251(bParam0);
			break;
		case 9:
			func_250(bParam0);
			break;
		default:
			func_175(bParam0);
			func_174(bParam0);
			break;
	}
}

void func_174(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_2 - 1))
	{
		func_252(bParam0, iVar0);
		iVar0++;
	}
}

void func_175(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_1 - 1))
	{
		func_176(bParam0, iVar0);
		iVar0++;
	}
}

void func_176(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_3), iParam1);
}

void func_177(bool bParam0, int iParam1)
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
			func_253(bParam0);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_254(bParam0);
			break;
		default:
			func_175(bParam0);
			func_174(bParam0);
			break;
	}
}

void func_178(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_252(bParam0, 0);
			break;
		case 1:
		case 2:
			func_252(bParam0, 1);
			func_252(bParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_252(bParam0, 0);
			func_252(bParam0, 2);
			break;
		case 8:
			func_252(bParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_252(bParam0, 1);
			break;
		default:
			func_174(bParam0);
			break;
	}
}

void func_179(bool bParam0, int iParam1)
{
	func_216(&(bParam0->f_25), iParam1);
}

void func_180(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_255(bParam0);
			break;
		case 1:
			func_256(bParam0);
			break;
		case 2:
			func_257(bParam0);
			break;
		case 3:
			func_258(bParam0);
			break;
		default:
			func_175(bParam0);
			func_174(bParam0);
			break;
	}
}

Vector3 func_181(int iParam0)
{
	if (!func_169(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

void func_182(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_259(bParam0);
			break;
		case 1:
		case 2:
			func_260(bParam0);
			break;
		case 3:
		case 4:
			func_261(bParam0);
			break;
		default:
			func_174(bParam0);
			break;
	}
	func_175(bParam0);
}

void func_183(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_252(bParam0, 0);
			func_252(bParam0, 2);
			break;
		case 1:
			func_252(bParam0, 1);
			func_252(bParam0, 3);
			break;
		default:
			func_175(bParam0);
			func_174(bParam0);
			break;
	}
}

void func_184(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_176(bParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_176(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_176(bParam0, 0);
			break;
		default:
			func_176(bParam0, 0);
			break;
	}
	func_174(bParam0);
}

void func_185(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_176(bParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_176(bParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_176(bParam0, 2);
			break;
		default:
			func_175(bParam0);
			break;
	}
	func_174(bParam0);
}

void func_186(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_176(bParam0, 0);
			func_252(bParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_176(bParam0, 1);
			func_252(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_176(bParam0, 2);
			func_252(bParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_176(bParam0, 3);
			func_252(bParam0, 0);
			break;
	}
}

void func_187(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_176(bParam0, 0);
			func_252(bParam0, 0);
			break;
		case 2:
			func_176(bParam0, 1);
			func_252(bParam0, 0);
			break;
		case 3:
		case 4:
			func_176(bParam0, 2);
			func_252(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_176(bParam0, 3);
			func_252(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_176(bParam0, 4);
			func_252(bParam0, 1);
			break;
	}
}

void func_188(bool bParam0, int iParam1)
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
			func_176(bParam0, 3);
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
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			break;
		default:
			func_175(bParam0);
			break;
	}
	func_174(bParam0);
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
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_176(bParam0, 3);
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
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			break;
		default:
			func_175(bParam0);
			break;
	}
	func_174(bParam0);
}

void func_190(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_252(bParam0, 0);
			func_176(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_252(bParam0, 1);
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			func_176(bParam0, 2);
			break;
		default:
			func_252(bParam0, 0);
			func_176(bParam0, 0);
			break;
	}
}

void func_191(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_252(bParam0, 0);
			func_176(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_252(bParam0, 1);
			func_176(bParam0, 0);
			func_176(bParam0, 1);
			break;
		default:
			func_252(bParam0, 0);
			func_176(bParam0, 0);
			break;
	}
}

void func_192(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_174(bParam0);
			func_175(bParam0);
			break;
		default:
			func_174(bParam0);
			func_175(bParam0);
			break;
	}
}

int func_193(int iParam0)
{
	return Global_1260791.f_3432[iParam0];
}

int func_194(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_3;
}

int func_195(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

var func_196(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_262(&Var1, iParam0) && func_263(&Var1, iParam1))
	{
		func_264(Var1, 16.1929f, &uVar0, 0);
	}
	return uVar0;
}

int func_197(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_262(&Var1, iParam0) && func_263(&Var1, iParam1))
	{
		func_264(Var1, -12.40885f, &iVar0, 0);
	}
	return iVar0;
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_265(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

Vector3 func_199(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_265(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

int func_200()
{
	return func_266();
}

int func_201()
{
	return func_267();
}

bool func_202(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_203(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_204(int iParam0)
{
	int iVar0;

	if (!func_169(iParam0))
	{
		return false;
	}
	iVar0 = func_268(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_205(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -2.405123E+15f;
	uParam0->f_7 = Param1.f_5;
}

int func_206(struct<31> Param0)
{
	var uVar0;

	func_205(&uVar0, Param0);
	return VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&uVar0);
}

bool func_207(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_269(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_208()
{
	return Local_14.f_7.f_9;
}

bool func_209(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_210()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_14.f_7.f_13) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_14.f_7.f_13)))
	{
		return true;
	}
	if (!func_272(&(Local_14.f_7.f_13), func_208(), func_270(), func_271(), 1, 0, 1, 1, 1))
	{
		return false;
	}
	PED::_SET_PED_QUALITY(NETWORK::NET_TO_PED(Local_14.f_7.f_13), 2);
	PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_14.f_7.f_13), 297, true);
	return true;
}

bool func_211(int iParam0)
{
	return func_168(Local_164.f_5, iParam0);
}

bool func_212(int iParam0)
{
	return func_168(Local_164.f_6, iParam0);
}

int func_213()
{
	func_273();
	func_274();
	if (func_275())
	{
		if (Local_14.f_7 != 4)
		{
			func_276(4);
		}
	}
	switch (Local_14.f_7)
	{
		case 0:
			if (func_277())
			{
				func_276(1);
			}
			break;
		case 1:
			if (func_278())
			{
				func_276(2);
			}
			break;
		case 2:
			if (func_279())
			{
				func_276(3);
			}
			break;
		case 3:
			if (func_280())
			{
				func_276(4);
			}
			break;
		case 4:
			if (func_281())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_214(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_215(int iParam0)
{
	if (!func_169(iParam0))
	{
		return 0;
	}
	if (!func_204(iParam0))
	{
		return 0;
	}
	return Global_1141317[iParam0 /*27*/].f_18.f_1;
}

void func_216(var uParam0, int iParam1)
{
	func_282(uParam0, iParam1);
}

void func_217(var uParam0, int iParam1)
{
	func_283(uParam0, iParam1);
}

void func_218(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 185:
			if (func_284(&Var0, iParam0))
			{
				func_285(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_219(int iParam0)
{
}

void func_220(int iParam0)
{
}

int func_221()
{
	switch (func_208())
	{
		case joaat("A_C_CROW_01"):
			return 2.636476E-20f;
		case joaat("A_C_RACCOON_01"):
			return 0.345318f;
		case joaat("A_C_FOX_01"):
			return 1.800495E+31f;
		case joaat("A_C_BOAR_01"):
			return -1.147249E-20f;
		case joaat("A_C_VULTURE_01"):
			return -1.167397E-12f;
		case joaat("A_C_COYOTE_01"):
			return -6.212107E-17f;
		case joaat("A_C_WOLF"):
			return 4.63971E+32f;
		case joaat("A_C_COUGAR_01"):
			return -19541.47f;
		default:
			break;
	}
	return 0;
}

float func_222()
{
	float fVar0;

	fVar0 = -1f;
	switch (func_200())
	{
		case 0:
			fVar0 = 1124925440; /* Float: 141f */
			break;
		case 1:
			fVar0 = 1116300902; /* Float: 68.7f */
			break;
		case 2:
			fVar0 = 1123208397; /* Float: 121.4f */
			break;
		case 3:
			fVar0 = 1133002752; /* Float: 272.5f */
			break;
		case 4:
			fVar0 = 1131413504; /* Float: 240f */
			break;
		case 5:
			fVar0 = 1114741146; /* Float: 60.4f */
			break;
		case 6:
			fVar0 = 1124814029; /* Float: 139.3f */
			break;
		case 7:
			fVar0 = 1127546880; /* Float: 181f */
			break;
		case 8:
			fVar0 = 1128457830; /* Float: 194.9f */
			break;
		case 9:
			fVar0 = 1130600858; /* Float: 227.6f */
			break;
		case 10:
			fVar0 = 1134536294; /* Float: 319.3f */
			break;
		case 11:
			fVar0 = 1133382861; /* Float: 284.1f */
			break;
		case 12:
			fVar0 = 1123090432; /* Float: 120.5f */
			break;
		case 13:
			fVar0 = 1134808269; /* Float: 327.6f */
			break;
		case 14:
			fVar0 = 1129644032; /* Float: 213f */
			break;
		case 15:
			fVar0 = 1130889216; /* Float: 232f */
			break;
		case 16:
			fVar0 = 1133402522; /* Float: 284.7f */
			break;
		case 17:
			fVar0 = 1128392294; /* Float: 193.9f */
			break;
		case 18:
			fVar0 = 1126655590; /* Float: 167.4f */
			break;
		case 19:
			fVar0 = 1133664666; /* Float: 292.7f */
			break;
		case 20:
			fVar0 = 1134074266; /* Float: 305.2f */
			break;
	}
	return fVar0;
}

Vector3 func_223()
{
	switch (func_208())
	{
		case joaat("A_C_CROW_01"):
			return -1124744561 /* Float: -0.03f */, -1107967345 /* Float: -0.12f */, 0f;
		case joaat("A_C_RACCOON_01"):
			return 0f, -1098236559 /* Float: -0.27f */, 0f;
		case joaat("A_C_FOX_01"):
			return 0f, -1092398088, 0f;
		case joaat("A_C_BOAR_01"):
			return 0f, -1086995825 /* Float: -0.71f */, 0f;
		case joaat("A_C_VULTURE_01"):
			return 1022739087 /* Float: 0.03f */, -1102263091 /* Float: -0.2f */, 0f;
		case joaat("A_C_COYOTE_01"):
			return 1025758986 /* Float: 0.04f */, -1094545572 /* Float: -0.38f */, 0f;
		case joaat("A_C_WOLF"):
			return 0f, -1091190129 /* Float: -0.48f */, 0f;
		case joaat("A_C_COUGAR_01"):
			return 0f, -1088338002 /* Float: -0.63f */, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_224(struct<2> Param0)
{
	if (func_237(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_237(Param0)))
	{
		STATS::_0x99230691875FC218(func_235(Param0), func_237(Param0), Global_34);
	}
}

void func_225()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!func_161(Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/].f_3))
			{
				if (!func_162(&(Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/])))
				{
					if (Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/].f_7)
					{
						vVar2 = { Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/].f_3 };
					}
					else
					{
						vVar2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_164.f_15, 0f, Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/].f_3) };
					}
					Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vVar2, Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/].f_6, Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/].f_2, Local_164.f_51[iVar0 /*9*/][iVar1 /*8*/].f_1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_226()
{
	Local_164.f_19.f_8 = NETWORK::NET_TO_PED(Local_14.f_7.f_13);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_14.f_7.f_13))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_164.f_19.f_8, true);
	}
}

int func_227(vector3 vParam0, vector3 vParam3)
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), false, 15);
}

bool func_228()
{
	return (func_121(32) || func_120(32, 255));
}

bool func_229(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_286(iParam0, 12648.71f) };
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

void func_230()
{
}

void func_231()
{
}

bool func_232()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Local_164.f_14))
	{
		return false;
	}
	if (func_287())
	{
		return false;
	}
	if (func_288(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_233()
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	if ((!func_289(1) && func_290(PLAYER::PLAYER_PED_ID(), func_106(), 1120403456 /* Float: 100f */, 0, 0)) && func_291())
	{
		func_292();
		func_293(1);
	}
	func_294();
	switch (Local_35[iVar0 /*4*/].f_1)
	{
		case 0:
			if (func_295())
			{
				func_296(1);
			}
			break;
		case 1:
			if (func_297())
			{
				func_296(2);
			}
			break;
		case 2:
			if (func_298())
			{
				func_296(3);
			}
			break;
		case 3:
			if (func_299())
			{
				func_296(4);
			}
			break;
		case 4:
			break;
	}
}

bool func_234(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_235(var uParam0, var uParam1)
{
	return uParam0;
}

int func_236(int iParam0)
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

int func_237(struct<2> Param0)
{
	return func_300(Param0);
}

void func_238(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_235(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_302(func_301(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_195(iVar5) == func_301(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_303(iVar4);
			if (!func_304(iVar6, 0))
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

int func_239(int iParam0, int iParam1)
{
	int iVar0;
	struct<29> Var1;
	int iVar32;
	int iVar33;

	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 46)
	{
		iVar32 = iVar33;
		if (iVar32 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_31(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_240(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_305(&Var0);
}

var func_241(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_242.f_59;
		default:
			break;
	}
	return Global_1901671.f_242.f_55;
}

var func_242(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_242.f_61;
		default:
			break;
	}
	return Global_1901671.f_242.f_57;
}

var func_243(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_242.f_60;
		default:
			break;
	}
	return Global_1901671.f_242.f_56;
}

struct<2> func_244(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_306(-1.11244E+21f);
		case 2:
			return func_306(-0.03766548f);
		case 3:
			return func_306(20967.98f);
		case 4:
			return func_306(20967.98f);
	}
	return Var0;
}

bool func_245()
{
	switch (func_208())
	{
		case joaat("A_C_CROW_01"):
		case joaat("A_C_VULTURE_01"):
			return true;
		default:
			break;
	}
	return false;
}

void func_246(var uParam0, bool bParam1)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
			if (bParam1)
			{
				return;
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		if (DECORATOR::DECOR_EXIST_ON(iVar0, "MC_EntityID"))
		{
			DECORATOR::DECOR_REMOVE_ALL(iVar0);
		}
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_247(var uParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		if (DECORATOR::DECOR_EXIST_ON(iVar0, "MC_EntityID"))
		{
			DECORATOR::DECOR_REMOVE_ALL(iVar0);
		}
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_248(int iParam0)
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

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (Global_1207465.f_3[iParam0] * 2 <= 32)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (Global_1207465.f_3[iParam0] * 2 <= 20)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (Global_1207465.f_3[iParam0] * 2 <= 16)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_250(bool bParam0)
{
	func_176(bParam0, 0);
	func_176(bParam0, 1);
	func_176(bParam0, 3);
	func_174(bParam0);
}

void func_251(bool bParam0)
{
	func_175(bParam0);
	func_307(bParam0, 0, 3);
}

void func_252(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_4), iParam1);
}

void func_253(bool bParam0)
{
	func_176(bParam0, 0);
	func_252(bParam0, 0);
	func_252(bParam0, 1);
	func_252(bParam0, 4);
	func_252(bParam0, 5);
}

void func_254(bool bParam0)
{
	func_176(bParam0, 1);
	func_252(bParam0, 2);
	func_252(bParam0, 3);
	func_252(bParam0, 6);
	func_252(bParam0, 7);
	func_179(bParam0, 2);
}

void func_255(bool bParam0)
{
	func_176(bParam0, 0);
	func_252(bParam0, 0);
	func_252(bParam0, 1);
	func_252(bParam0, 2);
}

void func_256(bool bParam0)
{
	func_176(bParam0, 1);
	func_174(bParam0);
}

void func_257(bool bParam0)
{
	func_176(bParam0, 2);
	func_252(bParam0, 3);
}

void func_258(bool bParam0)
{
	func_176(bParam0, 3);
	func_252(bParam0, 4);
}

void func_259(bool bParam0)
{
	func_252(bParam0, 0);
	func_252(bParam0, 1);
}

void func_260(bool bParam0)
{
	func_252(bParam0, 2);
	func_252(bParam0, 3);
}

void func_261(bool bParam0)
{
	func_252(bParam0, 4);
	func_252(bParam0, 5);
}

bool func_262(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

bool func_263(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_264(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
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

int func_265(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

var func_266()
{
	return Local_164.f_2;
}

var func_267()
{
	return Local_164.f_3;
}

int func_268(int iParam0)
{
	if (!func_169(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

bool func_269(int iParam0, bool bParam1)
{
	if (iParam0 > -1 && iParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bParam1)
		{
			return true;
		}
		return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	}
	return false;
}

Vector3 func_270()
{
	vector3 vVar0[3];
	vector3 vVar10;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	int iVar17;

	if (func_245())
	{
		switch (func_200())
		{
			case 0:
			case 1:
			case 14:
			case 15:
				return 0f, 0f, 0f;
			case 2:
				return 1159479006, 1147567717, 1117018784;
			case 3:
				return 1150198718, 1142980760, 1119672205;
			case 4:
				return -1002741372, -1013685748, 1110278432;
			case 5:
				return -1012628734, -1034793596, 1110925692;
			case 6:
				return -989832169, -1024875744, 1130761172;
			case 7:
				return -992685221, -1007693067, 1125274996;
			case 8:
				return -987337732, -1013268582, 1125605409;
			case 9:
				return -998961883, -1000584557, 1109824215;
			case 10:
				return -1002635225, -993099514, 1112697602;
			case 11:
				return -997253177, -991052488, 1110324963;
			case 12:
				return 1154904463, 1152586260, 1125458595;
			case 13:
				return 1153229766, 1152851479, 1125474651;
			case 16:
				return 1158052175, -1012776698, 1109714718;
			case 17:
				return 1159143445, -1008505890, 1109785628;
			case 18:
				return -985049719, -985305688, -1080097033;
			case 19:
				return -991707548, -986051053, -1052926752;
			case 20:
				return -991986259, -988379481, 1110127568;
			default:
				break;
		}
	}
	vVar0[0 /*3*/] = { 0f, 0f, 0f };
	switch (func_200())
	{
		case 0:
			vVar0[0 /*3*/] = { 1158402428, 1152163272, 1118464259 };
			vVar0[1 /*3*/] = { 1158583744, 1151760738, 1118759499 };
			vVar0[2 /*3*/] = { 1158583744, 1151760738, 1118759499 };
			break;
		case 1:
			vVar0[0 /*3*/] = { 1158698526, 1153961076, 1118529113 };
			vVar0[1 /*3*/] = { 1158698526, 1153961076, 1118529113 };
			vVar0[2 /*3*/] = { 1158571404, 1153818849, 1119125570 };
			break;
		case 2:
			vVar0[0 /*3*/] = { 1159479006, 1147567717, 1117018784 };
			vVar0[1 /*3*/] = { 1159479006, 1147567717, 1117018784 };
			vVar0[2 /*3*/] = { 1159479006, 1147567717, 1117018784 };
			break;
		case 3:
			vVar0[0 /*3*/] = { 1149541742, 1141992110, 1120012363 };
			vVar0[1 /*3*/] = { 1149541742, 1141992110, 1120012363 };
			vVar0[2 /*3*/] = { 1149541742, 1141992110, 1120012363 };
			break;
		case 4:
			vVar0[0 /*3*/] = { -1002743872, -1011385850, 1109678935 };
			vVar0[1 /*3*/] = { -1002743872, -1011385850, 1109678935 };
			vVar0[2 /*3*/] = { -1002743872, -1011385850, 1109678935 };
			break;
		case 5:
			vVar0[0 /*3*/] = { -1010646604, -1051365212, 1109694349 };
			vVar0[1 /*3*/] = { -1008307166, -1021779273, 1109654425 };
			vVar0[2 /*3*/] = { -1010432767, -1021112641, 1111613322 };
			break;
		case 6:
			vVar0[0 /*3*/] = { -989592729, -1019790872, 1129125485 };
			vVar0[1 /*3*/] = { -989704297, -1022677516, 1129904249 };
			vVar0[2 /*3*/] = { -989704297, -1022677516, 1129904249 };
			break;
		case 7:
			vVar0[0 /*3*/] = { -992875099, -1008050366, 1125708150 };
			vVar0[1 /*3*/] = { -992875099, -1008050366, 1125708150 };
			vVar0[2 /*3*/] = { -992673458, -1008199605, 1125358823 };
			break;
		case 8:
			vVar0[0 /*3*/] = { -987309828, -1012591834, 1124989148 };
			vVar0[1 /*3*/] = { -987650772, -1013331821, 1125543169 };
			vVar0[2 /*3*/] = { -987471622, -1014817486, 1126380850 };
			break;
		case 9:
			vVar0[0 /*3*/] = { -998782034, -1000300354, 1110534835 };
			vVar0[1 /*3*/] = { -998782034, -1000300354, 1110534835 };
			vVar0[2 /*3*/] = { -998782034, -1000300354, 1110534835 };
			break;
		case 10:
			vVar0[0 /*3*/] = { -1002601778, -992607285, 1110259820 };
			vVar0[1 /*3*/] = { -1002601778, -992607285, 1110259820 };
			vVar0[2 /*3*/] = { -1002834357, -992353712, 1110388664 };
			break;
		case 12:
			vVar0[0 /*3*/] = { 1154930911, 1153240773, 1125333493 };
			vVar0[1 /*3*/] = { 1155266457, 1152747627, 1125951301 };
			vVar0[2 /*3*/] = { 1154904463, 1152586260, 1125458595 };
			break;
		case 14:
			vVar0[0 /*3*/] = { 1150832531, 1150816892, 1125892758 };
			vVar0[1 /*3*/] = { 1150832531, 1150816892, 1125892758 };
			vVar0[2 /*3*/] = { 1150832531, 1150816892, 1125892758 };
			break;
		case 15:
			vVar0[0 /*3*/] = { 1156402579, -1011184343, 1110005069 };
			vVar0[1 /*3*/] = { 1156402579, -1011184343, 1110005069 };
			vVar0[2 /*3*/] = { 1156402579, -1011184343, 1110005069 };
			break;
		case 16:
			vVar0[0 /*3*/] = { 1158052175, -1012776698, 1109714718 };
			vVar0[1 /*3*/] = { 1158150278, -1013858550, 1109830926 };
			vVar0[2 /*3*/] = { 1158261372, -1011818535, 1109923568 };
			break;
		case 17:
			vVar0[0 /*3*/] = { 1159143445, -1008505890, 1109785628 };
			vVar0[1 /*3*/] = { 1159143445, -1008505890, 1109785628 };
			vVar0[2 /*3*/] = { 1159143445, -1008505890, 1109785628 };
			break;
		case 18:
			vVar0[0 /*3*/] = { -984935390, -985412327, -1058886648 };
			vVar0[1 /*3*/] = { -985049719, -985305688, -1080097033 };
			vVar0[2 /*3*/] = { -985103301, -985242967, -1059955147 };
			break;
		case 20:
			vVar0[0 /*3*/] = { -992298928, -988599988, 1109869593 };
			vVar0[1 /*3*/] = { -992376814, -988298057, 1109730132 };
			vVar0[2 /*3*/] = { -991986259, -988379481, 1110127568 };
			break;
	}
	if (func_308(vVar0[0 /*3*/], 0f, 0f, 0f))
	{
		return 0f, 0f, 0f;
	}
	vVar10 = { 0f, 0f, 0f };
	iVar13 = 0;
	while (iVar13 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar13)) && func_290(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar13))), func_106(), 1128792064 /* Float: 200f */, 0, 1))
		{
			vVar10 = { vVar10 + ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar13))), true, false) };
			iVar14++;
		}
		iVar13++;
	}
	vVar10 = { vVar10 / FtoV(IntToFloat(iVar14)) };
	fVar15 = 0f;
	fVar16 = 0f;
	iVar17 = -1;
	iVar13 = 0;
	while (iVar13 <= 2)
	{
		fVar15 = BUILTIN::VDIST2(vVar0[iVar13 /*3*/], vVar10);
		if (fVar15 > fVar16)
		{
			fVar16 = fVar15;
			iVar17 = iVar13;
		}
		iVar13++;
	}
	return vVar0[iVar17 /*3*/];
}

float func_271()
{
	return 0f;
}

bool func_272(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return false;
	}
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_209(iParam1))
	{
		return false;
	}
	iVar0 = func_309(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iVar0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_273()
{
	int iVar0;

	Local_164.f_19.f_1++;
	if (Local_164.f_19.f_1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_164.f_19.f_1 = 0;
	}
	iVar0 = Local_164.f_19.f_1;
	if (!func_310(4) && func_311(iVar0, 1))
	{
		func_312(4);
	}
	if (!func_310(16) && func_311(iVar0, 2))
	{
		func_312(16);
	}
	if (!func_310(32) && func_311(iVar0, 4))
	{
		func_312(32);
	}
	if (Local_14.f_7 == 2 && Local_35[iVar0 /*4*/].f_1 == 4)
	{
		func_276(4);
	}
}

void func_274()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		iVar0++;
	}
}

bool func_275()
{
	if (func_310(16) && Local_14.f_7.f_10 != 9)
	{
		func_313(9);
	}
	switch (Local_14.f_7.f_10)
	{
		case 0:
			func_313(1);
			break;
		case 1:
			if (func_310(4))
			{
				func_313(2);
			}
			break;
		case 2:
			if (func_245())
			{
				if (func_290(Local_164.f_19.f_8, func_314(), 5f, 1, 1) || func_315(16))
				{
					func_313(3);
				}
			}
			else if (func_290(Local_164.f_19.f_8, func_314(), 1092616192 /* Float: 10f */, 1, 1) || func_315(16))
			{
				func_313(3);
			}
			break;
		case 3:
			if (func_245())
			{
				func_313(4);
			}
			else if (func_290(Local_164.f_19.f_8, func_314(), 4f, 1, 1) || func_315(32))
			{
				func_313(4);
			}
			break;
		case 4:
			if (func_290(Local_164.f_19.f_8, TASK::_GET_SCENARIO_POINT_COORDS(Local_164.f_19.f_17, true), 2f, 1, 1) && PED::IS_PED_USING_ANY_SCENARIO(Local_164.f_19.f_8))
			{
				func_313(5);
			}
			break;
		case 5:
			if (Local_14.f_7 >= 4)
			{
				if (func_316(&(Local_14.f_7.f_6), 3000))
				{
					func_317();
					func_313(8);
				}
			}
			else if (func_316(&(Local_14.f_7.f_6), 30000))
			{
				func_317();
				func_313(8);
			}
			break;
		case 6:
			break;
		case 7:
			if (func_316(&(Local_14.f_7.f_6), 10000))
			{
				func_313(9);
			}
			break;
		case 8:
			return true;
		case 9:
			break;
	}
	return false;
}

void func_276(int iParam0)
{
	if (Local_14.f_7 == iParam0)
	{
		return;
	}
	Local_14.f_7 = iParam0;
	func_318(&(Local_14.f_7.f_3));
}

bool func_277()
{
	return true;
}

bool func_278()
{
	if (func_310(4))
	{
		return true;
	}
	return false;
}

bool func_279()
{
	if (func_310(32))
	{
		return true;
	}
	return false;
}

bool func_280()
{
	if (func_315(8))
	{
		return true;
	}
	return false;
}

bool func_281()
{
	return true;
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_283(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_284(var uParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, uParam0, 15))
	{
		return false;
	}
	if (uParam0->f_4.f_1 != Local_164.f_1)
	{
		return false;
	}
	if (uParam0->f_4 != Local_164)
	{
		return false;
	}
	if (uParam0->f_4.f_2 != Local_164.f_2)
	{
		return false;
	}
	if (uParam0->f_4.f_3 != Local_164.f_3)
	{
		return false;
	}
	return true;
}

void func_285(var uParam0)
{
	int iVar0;
	bool bVar1;

	if (!func_207(&iVar0))
	{
		return;
	}
	switch (uParam0->f_9)
	{
		case -713336544:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (Local_14.f_7.f_11 == -1)
				{
					Local_14.f_7.f_11 = uParam0->f_11;
					func_319();
				}
			}
			break;
		case -1213418800:
			if (NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID()) == uParam0->f_11)
			{
				func_293(32);
			}
			else
			{
				func_293(64);
			}
			if (func_289(8))
			{
				func_320(8);
			}
			break;
		case 851346657:
			if (func_289(64))
			{
				func_320(64);
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_14.f_7.f_11 = -1;
			}
			break;
		case -1571564170:
			if (ENTITY::DOES_ENTITY_EXIST(Local_164.f_19.f_11[0]))
			{
				func_321();
			}
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_egg_break", func_106(), func_322(), 1f, false, false, false);
			break;
		case 1241867137:
			if (!func_311(iVar0, 4))
			{
				func_293(2);
				func_323();
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (Local_14.f_7.f_12 == -1)
				{
					Local_14.f_7.f_12 = uParam0->f_11;
				}
			}
			break;
		case 1649314687:
			bVar1 = func_324();
			Local_164.f_19.f_7 = uParam0->f_1;
			if (bVar1)
			{
				Local_164.f_19.f_9 = MAP::BLIP_ADD_FOR_ENTITY(4.085619E-09f, Local_164.f_19.f_8);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_164.f_19.f_8))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_164.f_19.f_8))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_164.f_19.f_8);
				}
				if (bVar1)
				{
					TASK::TASK_COMBAT_PED(Local_164.f_19.f_8, PLAYER::GET_PLAYER_PED(Local_164.f_19.f_7), 0, 0);
				}
				else
				{
					TASK::TASK_FLEE_PED(Local_164.f_19.f_8, PLAYER::GET_PLAYER_PED(Local_164.f_19.f_7), 3, 0, -1f, -1, 0);
				}
			}
			func_293(4);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_312(8);
				if (bVar1)
				{
					func_313(7);
				}
				else
				{
					func_313(6);
				}
			}
			break;
	}
}

struct<2> func_286(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_325(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_326(iParam1, iVar4) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

bool func_287()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_288(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_327(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_289(int iParam0)
{
	return func_202(Local_164.f_19, iParam0);
}

bool func_290(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_328(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_291()
{
	var uVar0;

	Local_164.f_19.f_10 = TASK::_CREATE_HERB_COMPOSITES(func_105(), func_106(), 0f, 0, &uVar0, -1);
	return true;
}

void func_292()
{
	int iVar0;
	int iVar1[1];
	var uVar3[1];

	iVar1[0] = func_329();
	if (func_331(&(Local_164.f_19.f_11), &iVar1, func_330(), func_106(), 5f) > 0)
	{
		iVar0 = 0;
		while (iVar0 < func_330())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_164.f_19.f_11[iVar0]))
			{
				MAP::_0x7563CBCA99253D1A(Local_164.f_19.f_11[iVar0], 3.474616E-32f);
				PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), Local_164.f_19.f_11[iVar0], false);
				PLAYER::_0x6ECFC621A168424C(Local_164.f_19.f_11[iVar0], Local_164.f_19.f_11[iVar0], 0, 0f);
			}
			iVar0++;
		}
	}
	iVar1[0] = func_332();
	if (func_331(&uVar3, &iVar1, 1, func_106(), 5f) > 0)
	{
		MAP::_0x7563CBCA99253D1A(uVar3[0], 3.474616E-32f);
	}
}

void func_293(int iParam0)
{
	func_216(&(Local_164.f_19), iParam0);
}

void func_294()
{
	int iVar0;
	bool bVar1;

	if (!func_207(&iVar0))
	{
		return;
	}
	bVar1 = Local_164.f_19.f_6 != Local_14.f_7.f_10;
	Local_164.f_19.f_6 = Local_14.f_7.f_10;
	func_333(bVar1);
	if ((!func_289(4) && !func_310(8)) && func_334())
	{
		func_293(4);
		func_335();
	}
	if ((Local_14.f_7.f_10 == 4 || Local_14.f_7.f_10 == 5) || Local_14.f_7.f_10 == 8)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Local_164.f_19.f_8);
		func_336(Local_164.f_19.f_8);
	}
	if ((Local_14.f_7.f_10 == 6 && !func_337(PLAYER::PLAYER_PED_ID(), Local_164.f_19.f_8, 1112014848 /* Float: 50f */, 1, 1)) && MAP::DOES_BLIP_EXIST(Local_164.f_19.f_9))
	{
		MAP::REMOVE_BLIP(&(Local_164.f_19.f_9));
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_164.f_19.f_8))
	{
		return;
	}
	if (!func_311(iVar0, 2) && ENTITY::IS_ENTITY_DEAD(Local_164.f_19.f_8))
	{
		if (MAP::DOES_BLIP_EXIST(Local_164.f_19.f_9))
		{
			MAP::REMOVE_BLIP(&(Local_164.f_19.f_9));
		}
		func_338(2);
	}
	switch (Local_14.f_7.f_10)
	{
		case 0:
			break;
		case 1:
			if (func_245())
			{
				if (!func_339(Local_164.f_19.f_8, 7.35123E-22f))
				{
					TASK::TASK_FLYING_CIRCLE(Local_164.f_19.f_8, 1f, func_270() + Vector(1109393408, 0f, 0f), 0f, 2f);
				}
			}
			else if (!func_339(Local_164.f_19.f_8, 8.333317E-06f))
			{
				TASK::TASK_WANDER_IN_AREA(Local_164.f_19.f_8, ENTITY::GET_ENTITY_COORDS(Local_164.f_19.f_8, true, false), 10f, 3f, 6f, 0);
			}
			break;
		case 2:
			if (bVar1)
			{
				if (func_245())
				{
					TASK::TASK_FLY_TO_COORD(Local_164.f_19.f_8, func_340(), func_314(), true, false);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_164.f_19.f_8, func_314(), func_340(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_290(Local_164.f_19.f_8, func_314(), 5f, 1, 1) && (MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				if (func_245())
				{
					if (!func_339(Local_164.f_19.f_8, -2.802152E+13f))
					{
						TASK::TASK_FLY_TO_COORD(Local_164.f_19.f_8, func_340(), func_314(), true, false);
					}
				}
				else if (!func_339(Local_164.f_19.f_8, 2.446422E-13f))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_164.f_19.f_8, func_314(), func_340(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_311(iVar0, 16) && func_290(Local_164.f_19.f_8, func_314(), 1092616192 /* Float: 10f */, 1, 1))
			{
				func_338(16);
			}
			break;
		case 3:
			if (bVar1)
			{
				if (!func_245())
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_164.f_19.f_8, func_314(), func_341(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_311(iVar0, 32) && func_290(Local_164.f_19.f_8, func_314(), 4f, 1, 1))
			{
				func_338(32);
			}
			break;
		case 4:
			if (bVar1)
			{
				TASK::TASK_USE_SCENARIO_POINT(Local_164.f_19.f_8, Local_164.f_19.f_17, 0, 0, true, false, 0, false, -1f, false);
			}
			break;
		case 5:
			if (bVar1)
			{
			}
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_164.f_19.f_8))
			{
				func_247(&(Local_14.f_7.f_13));
			}
			break;
		case 9:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_164.f_19.f_8))
			{
				func_247(&(Local_14.f_7.f_13));
			}
			break;
	}
}

bool func_295()
{
	return true;
}

void func_296(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	if (Local_35[iVar0 /*4*/].f_1 == iParam0)
	{
		return;
	}
	Local_35[iVar0 /*4*/].f_1 = iParam0;
	func_318(&(Local_164.f_19.f_2));
}

bool func_297()
{
	if (func_290(PLAYER::PLAYER_PED_ID(), func_106(), 1114636288 /* Float: 60f */, 1, 1))
	{
		func_338(1);
		return true;
	}
	return false;
}

bool func_298()
{
	int iVar0;
	bool bVar1;

	if (!func_207(&iVar0))
	{
		return false;
	}
	if (!func_289(2) && Local_14.f_7.f_10 == 8)
	{
		if (!func_289(256))
		{
			if (func_342(3) < 3)
			{
				func_343("NBEGP_H_FAIL");
			}
			func_293(256);
		}
		func_293(2);
	}
	if (!func_311(iVar0, 4) && !func_289(2))
	{
		func_344(&(Local_164.f_19.f_19), func_106(), 1, 1, 1, 0);
		if (func_290(Global_33, func_106(), 7f, 1, 1))
		{
			func_345(&(Local_164.f_19.f_31));
		}
		if ((MISC::GET_FRAME_COUNT() % 5) == 0)
		{
			bVar1 = ((Global_1940186.f_38 == 1.171813E+21f && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || func_346());
			func_347(bVar1);
		}
	}
	if (!func_289(16))
	{
		if (((func_337(PLAYER::PLAYER_PED_ID(), Local_164.f_19.f_11[0], 1106247680 /* Float: 30f */, 1, 1) && !ENTITY::IS_ENTITY_OCCLUDED(Local_164.f_19.f_11[0])) || (func_337(PLAYER::PLAYER_PED_ID(), Local_164.f_19.f_8, 1106247680 /* Float: 30f */, 1, 1) && !ENTITY::IS_ENTITY_OCCLUDED(Local_164.f_19.f_8))) || func_337(PLAYER::PLAYER_PED_ID(), Local_164.f_19.f_11[0], 3f, 1, 1))
		{
			func_348();
			func_349();
			func_293(16);
		}
	}
	func_350();
	if (func_289(2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_164.f_19.f_11[0]))
		{
			func_321();
		}
	}
	if (!func_289(2) && func_351())
	{
		if (!func_311(iVar0, 4) && !func_289(2))
		{
			func_352();
			return true;
		}
	}
	return false;
}

bool func_299()
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return false;
	}
	if (!func_311(iVar0, 8) && func_315(8))
	{
		func_323();
		func_321();
	}
	if (!func_311(iVar0, 8) && NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID()) == Local_14.f_7.f_12)
	{
		func_353(1);
		func_355(func_354(), 0);
		func_338(8);
		return true;
	}
	return false;
}

int func_300(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_356(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_301(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_356(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_302(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_262(&Var1, iParam0))
	{
		iVar0 = ((func_357() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_303(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_304(int iParam0, int iParam1)
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

void func_305(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051645.f_16[15] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[15]))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 22, Global_1051645.f_16[15]);
	func_358(uParam0, uParam0->f_1);
}

struct<2> func_306(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_307(bool bParam0, int iParam1, int iParam2)
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
		func_252(bParam0, iVar0);
		iVar0++;
	}
}

bool func_308(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_309(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

bool func_310(int iParam0)
{
	return func_202(Local_14.f_7.f_1, iParam0);
}

bool func_311(int iParam0, int iParam1)
{
	return func_202(Local_35[iParam0 /*4*/].f_1.f_1, iParam1);
}

void func_312(int iParam0)
{
	func_216(&(Local_14.f_7.f_1), iParam0);
}

void func_313(int iParam0)
{
	if (Local_14.f_7.f_10 == iParam0)
	{
		return;
	}
	Local_14.f_7.f_10 = iParam0;
}

Vector3 func_314()
{
	vector3 vVar0;
	var uVar3;

	if (func_245())
	{
		vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_106(), func_359(), 4f, 0f, 10f) };
	}
	else
	{
		vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_106(), func_359(), 8f, 0f, 10f) };
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		vVar0 = { vVar0.x, vVar0.y, uVar3 };
	}
	return vVar0;
}

bool func_315(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && func_311(iVar0, iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_316(var uParam0, int iParam1)
{
	if (!func_360(uParam0))
	{
		func_361(uParam0, 0);
		return false;
	}
	if (func_362(uParam0, iParam1))
	{
		func_363(uParam0);
		return true;
	}
	return false;
}

void func_317()
{
	struct<15> Var0;

	Var0 = { func_364(-2.870884E-18f) };
	Var0.f_11 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	func_365(&Var0);
}

void func_318(var uParam0)
{
	func_366(uParam0, 0);
}

void func_319()
{
	struct<15> Var0;

	Var0 = { func_364(-2.058726E-05f) };
	Var0.f_11 = Local_14.f_7.f_11;
	func_365(&Var0);
}

void func_320(int iParam0)
{
	func_217(&(Local_164.f_19), iParam0);
}

void func_321()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_330())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_164.f_19.f_11[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_164.f_19.f_11[iVar0]));
		}
		iVar0++;
	}
}

Vector3 func_322()
{
	return 0f, 0f, 0f;
}

void func_323()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_330())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_164.f_19.f_11[iVar0]))
		{
			PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), Local_164.f_19.f_11[iVar0]);
			PLAYER::_0xDC5E09D012D759C4(Local_164.f_19.f_11[iVar0], Local_164.f_19.f_11[iVar0], 0);
		}
		iVar0++;
	}
}

bool func_324()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	switch (func_208())
	{
		case joaat("A_C_CROW_01"):
		case joaat("A_C_FOX_01"):
		case joaat("A_C_VULTURE_01"):
		case joaat("A_C_RACCOON_01"):
		case joaat("A_C_BOAR_01"):
			return false;
		case joaat("A_C_COYOTE_01"):
			return iVar0 < 50;
		case joaat("A_C_WOLF"):
			return iVar0 < 100;
		case joaat("A_C_COUGAR_01"):
			return iVar0 < 100;
		default:
			break;
	}
	return false;
}

int func_325(int iParam0)
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

struct<2> func_326(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_327(int iParam0, var uParam1, var uParam2, bool bParam3)
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

float func_328(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_329()
{
	switch (func_200())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return -74098.65f;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return 4.746679E+11f;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 7.333329E-12f;
		default:
			break;
	}
	return 0;
}

int func_330()
{
	switch (func_200())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 5;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return 4;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 3;
		default:
			break;
	}
	return 1;
}

int func_331(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_367(uParam0, iParam1, iVar0, iParam2);
	func_368(iVar0);
	return iVar1;
}

int func_332()
{
	switch (func_200())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 7.303385E-24f;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -2.480061E-27f;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return -2.429711E+30f;
		default:
			break;
	}
	return 0;
}

void func_333(bool bParam0)
{
	if (bParam0)
	{
		if ((Local_14.f_7.f_10 == 2 || Local_14.f_7.f_10 == 4) || Local_14.f_7.f_10 == 5)
		{
			if (!func_289(128))
			{
				if (func_342(3) < 3)
				{
					func_343("NBEGP_H_INVESTIGATE");
				}
				func_293(128);
			}
			func_348();
			func_369(-3.689187E+26f, Local_164.f_19.f_8, 1);
		}
	}
	if (Local_14.f_7.f_10 == 5)
	{
		if (func_360(&(Local_14.f_7.f_6)) && func_370(&(Local_14.f_7.f_6)) > (4000 * Local_164.f_19.f_5 + 1))
		{
			Local_164.f_19.f_5++;
			func_369(-3.689187E+26f, Local_164.f_19.f_8, 1);
		}
	}
}

bool func_334()
{
	if (!func_337(PLAYER::PLAYER_PED_ID(), Local_164.f_19.f_8, 1117126656 /* Float: 75f */, 1, 1))
	{
		return false;
	}
	if (func_337(PLAYER::PLAYER_PED_ID(), Local_164.f_19.f_8, 4f, 1, 1))
	{
		return true;
	}
	if ((!func_245() && func_337(PLAYER::PLAYER_PED_ID(), Local_164.f_19.f_8, 1090519040 /* Float: 8f */, 1, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_164.f_19.f_8, PLAYER::PLAYER_PED_ID(), 17))
	{
		return true;
	}
	if (PED::TIME_SINCE_PED_LAST_SHOT(PLAYER::PLAYER_PED_ID()) < 1056964608)
	{
		if (func_245())
		{
			return true;
		}
		else if (func_337(PLAYER::PLAYER_PED_ID(), Local_164.f_19.f_8, 1114636288 /* Float: 60f */, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_335()
{
	struct<15> Var0;

	Var0 = { func_364(9.525203E+20f) };
	func_365(&Var0);
}

void func_336(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

bool func_337(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_328(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_338(int iParam0)
{
	int iVar0;

	if (!func_207(&iVar0))
	{
		return;
	}
	func_216(&(Local_35[iVar0 /*4*/].f_1.f_1), iParam0);
}

bool func_339(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_340()
{
	switch (func_201())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			return 1069547520 /* Float: 1.5f */;
		case 2:
		case 5:
			return 2f;
		default:
			break;
	}
	return 1069547520 /* Float: 1.5f */;
}

float func_341()
{
	switch (func_201())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			return 1f;
		case 2:
		case 5:
			return 1069547520 /* Float: 1.5f */;
		default:
			break;
	}
	return 1f;
}

int func_342(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_286(iParam0, -2.211749E-26f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

int func_343(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return 0;
	}
	return func_371(sParam0, 10000, 0, 0, 0, 1);
}

void func_344(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_161(Global_1222308))
	{
		if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_10 == -1f)
		{
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1222308, vParam1, true);
		}
		if (uParam0->f_10 <= 5f)
		{
			bVar0 = true;
		}
	}
	bVar1 = func_372(uParam0, bParam4, bVar0);
	if (!bVar1)
	{
		if (uParam0->f_8)
		{
			uParam0->f_8 = 0;
		}
	}
	if (uParam0->f_11 < 8)
	{
		uParam0->f_11++;
	}
	else
	{
		uParam0->f_11 = 0;
	}
	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
		{
			uParam0->f_8 = 1;
		}
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_9 == -1f)
	{
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);
	}
	fVar2 = 1092616192; /* Float: 10f */
	fVar2 = (fVar2 * (1f + func_373()));
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
						if (Global_1940186.f_38 != -8.284301E+07f)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", false, 0, bParam6);
						}
						func_374(uParam0, 1);
					}
				}
				else
				{
					func_374(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((1140457472 * ((fVar2 - uParam0->f_9) / fVar2)));
			iVar4 = BUILTIN::FLOOR((1132462080 * ((fVar2 - uParam0->f_9) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = MISC::ABSI(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (uParam0->f_9 < 3f && bParam7)
			{
				func_375(250);
			}
			PAD::SET_CONTROL_SHAKE(0, iVar3, iVar4);
			func_376(&(uParam0->f_1));
			func_374(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_377(uParam0);
				}
				func_374(uParam0, 0);
			}
			else if (func_378(&(uParam0->f_1)) >= 2f)
			{
				func_374(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_375(250);
			}
			break;
	}
}

void func_345(var uParam0)
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (HUD::UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(5.822005E-15f))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

bool func_346()
{
	return Global_1156096.f_21645[53 /*209*/].f_208;
}

void func_347(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_330())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_164.f_19.f_11[iVar0]))
		{
			if (bParam0)
			{
				PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(Local_164.f_19.f_11[iVar0], 500f);
			}
			else
			{
				PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(Local_164.f_19.f_11[iVar0], 100f);
			}
		}
		iVar0++;
	}
}

void func_348()
{
	int iVar0;

	if (!func_120(32, 255))
	{
		func_379(Local_164.f_1, Local_164.f_3);
		if (!func_120(1024, 255))
		{
			func_380(Local_164.f_1);
			func_137(1024);
		}
		iVar0 = func_239(Local_164.f_1, Local_164.f_2);
		func_381(iVar0);
		func_382(iVar0);
		func_135(2);
		func_383(Local_164.f_9);
		func_384(Local_164.f_1);
		func_385(Local_164.f_1, Local_164.f_2, Local_164.f_3);
		if (func_386(Local_164.f_1))
		{
			func_387(0, 3.031687E-09f);
			func_135(1024);
		}
		func_137(32);
	}
}

void func_349()
{
	if (!func_61(2))
	{
		return;
	}
	func_135(8);
}

void func_350()
{
	if ((!func_289(32) && !func_289(64)) && !func_289(8))
	{
		if (func_388())
		{
			func_389();
			func_293(8);
		}
	}
	if (func_289(32) && !func_388())
	{
		func_390();
		func_320(32);
	}
	if (func_289(64) || func_289(2))
	{
		MISC::_0x082C043C7AFC3747(Local_164.f_19.f_10, true);
	}
}

bool func_351()
{
	var uVar0;

	if (ENTITY::GET_ENTITY_MODEL(func_391(PLAYER::PLAYER_PED_ID(), 0)) != func_332())
	{
		return false;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(PLAYER::PLAYER_PED_ID(), 0, &uVar0, 1, 1) != 8)
	{
		return false;
	}
	return true;
}

void func_352()
{
	struct<15> Var0;

	func_338(4);
	Var0 = { func_364(2185440f) };
	Var0.f_11 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	func_365(&Var0);
}

void func_353(bool bParam0)
{
	if (!func_61(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_61(256))
		{
			func_166(Local_164.f_18, 0);
			func_135(256);
		}
	}
	func_135(16);
}

int func_354()
{
	switch (func_200())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 1.005541E+16f;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -9.308872E-12f;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 1.919674E+27f;
		default:
			break;
	}
	return 0;
}

int func_355(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_392(&Var4, 2.95884E+10f);
	return func_393(iParam0, &Var4, &uVar0, iParam1, 0);
}

bool func_356(struct<2> Param0, bool bParam2)
{
	if (!func_36(Param0))
	{
		return false;
	}
	func_394(bParam2);
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

int func_357()
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

void func_358(var uParam0, var uParam1)
{
}

float func_359()
{
	return (func_222() - 1119092736);
}

bool func_360(var uParam0)
{
	return func_395(*uParam0, 1);
}

void func_361(var uParam0, bool bParam1)
{
	if (bParam1 || !func_360(uParam0))
	{
		func_318(uParam0);
	}
}

bool func_362(var uParam0, int iParam1)
{
	if (!func_360(uParam0))
	{
		return false;
	}
	if (func_370(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

void func_363(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

struct<15> func_364(float fParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::COPY_SCRIPT_STRUCT(&(Var0.f_4), &Local_164, 5);
	Var0.f_9 = fParam0;
	Var0 = 185;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_365(var uParam0)
{
	func_397(uParam0, func_396(4, 117));
}

void func_366(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_398(uParam0, 1);
	func_399(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_367(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *iParam1)
			{
				if ((*iParam1)[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*iParam1)[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_368(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_369(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

int func_370(var uParam0)
{
	if (!func_360(uParam0))
	{
		return 0;
	}
	if (func_400(uParam0))
	{
		return uParam0->f_2;
	}
	return func_401(uParam0->f_1);
}

int func_371(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_372(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_402(-4.629755E-24f, 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_403(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_404())
			{
				return 0;
			}
			break;
		case 3:
			if (Global_1048576)
			{
				return 0;
			}
			break;
		case 4:
			if (func_287())
			{
				return 0;
			}
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				return 0;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
			{
				return 0;
			}
			break;
		case 7:
			if (!bParam1 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		case 8:
			if (bParam2 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		default:
			uParam0->f_11 = 0;
			break;
	}
	return 1;
}

float func_373()
{
	return Global_1156096.f_2169[89 /*205*/].f_201;
}

void func_374(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_375(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

void func_376(var uParam0)
{
	func_405(uParam0, 0f);
}

void func_377(var uParam0)
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_CONTROL_SHAKE(0);
		uParam0->f_4 = -1;
	}
	AUDIO::_RELEASE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

float func_378(var uParam0)
{
	if (!func_406(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_407(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_408() - uParam0->f_1);
}

void func_379(int iParam0, int iParam1)
{
	struct<29> Var0;
	struct<2> Var31;
	int iVar33;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_286(iParam0, 1.309684E+10f) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_110(&Var0, 4) && func_409(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[iParam0] = iVar33;
}

void func_380(int iParam0)
{
	func_410(iParam0);
}

void func_381(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_117(Global_1260791[iParam0 /*4*/]))
	{
		return;
	}
	func_411(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_118(&(Global_1260791[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_306(2.053409E-33f) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_306(3.713784E-31f) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1295619.f_16, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_306(5.118777E-05f) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_306(5.331718E-07f) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1295619.f_16, true);
	}
}

void func_382(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_305(&Var0);
}

void func_383(struct<2> Param0)
{
	struct<32> Var0;

	if (func_237(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_237(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_237(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_412(Param0, &Var0))
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

void func_384(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_286(iParam0, -2.211749E-26f) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_385(int iParam0, int iParam1, int iParam2)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	iVar31 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar31 > -1 && iVar31 < 32)
	{
		func_31(&Var0, iParam0, iParam1, iParam2, 255);
		if (Var0.f_7 < 5 && Var0.f_7 >= 0)
		{
			Global_1257494[iVar31 /*103*/].f_97[Var0.f_7] = 0;
		}
	}
}

bool func_386(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return true;
		default:
			break;
	}
	return false;
}

int func_387(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_413())
	{
		return 0;
	}
	if (!func_18())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_414(&Global_0, 8);
	}
	func_414(&Global_0, 1);
	return 1;
}

bool func_388()
{
	int iVar0;
	int iVar1;

	iVar1 = PED::_REFRESH_LOOT_STATE_FOR_PED(PLAYER::PLAYER_PED_ID(), 0, &iVar0, 1, 0);
	if (ENTITY::GET_ENTITY_MODEL(iVar0) != func_332())
	{
		return false;
	}
	if ((iVar1 != 4 && iVar1 != 6) && iVar1 != 8)
	{
		return false;
	}
	return true;
}

void func_389()
{
	struct<15> Var0;

	Var0 = { func_364(-1.727251E+13f) };
	Var0.f_11 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	func_365(&Var0);
}

void func_390()
{
	struct<15> Var0;

	Var0 = { func_364(2.217934E-08f) };
	func_365(&Var0);
}

int func_391(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar1 = PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, iParam1, &uVar0, 1, 0);
	if (iVar1 != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_392(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == 8.967694E-17f || uParam0->f_1[iVar1] == 1.721179E-28f)
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == 2.95884E+10f || uParam0->f_1[iVar1] == 2.575707E+29f)
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == 2.770086E+17f || uParam0->f_1[iVar1] == -2.793692E-28f) || uParam0->f_1[iVar1] == 1.982896E+31f)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_393(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_415(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_416(uParam2, iParam0, Var1);
	return 1;
}

void func_394(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_395(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_396(int iParam0, int iParam1)
{
	return func_417(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_397(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

void func_398(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_399(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_400(var uParam0)
{
	return func_395(*uParam0, 2);
}

int func_401(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_402(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_418(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_419(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_420(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_421(bParam0, 0);
	}
	if (func_422(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_423(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_424(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_423(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_403(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_404()
{
	return func_425() != -1;
}

void func_405(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_408() - fParam1);
	func_398(uParam0, 1);
	func_399(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_406(var uParam0)
{
	return func_395(*uParam0, 1);
}

bool func_407(var uParam0)
{
	return func_395(*uParam0, 2);
}

float func_408()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

int func_409(int iParam0)
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

void func_410(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1295619.f_16;
	Var1 = { func_286(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_411(int iParam0, var uParam1, var uParam2)
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
		func_31(&Var2, *uParam1, -1, -1, 255);
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

bool func_412(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_356(Param0, &vVar0);
	if (func_426(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_413()
{
	return !Global_1572887.f_10;
}

void func_414(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_415(var uParam0)
{
	func_392(uParam0, 8.505438E-34f);
	if (func_427() == 3.272964E+34f)
	{
		func_392(uParam0, 8.967694E-17f);
	}
	else
	{
		func_392(uParam0, 1.721179E-28f);
	}
}

void func_416(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_428(uParam0))
	{
		return;
	}
	if (Global_1292096.f_2539 < 20)
	{
		Global_1292096.f_2539++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_2539.f_1[iVar0 /*22*/] = { Global_1292096.f_2539.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1292096.f_2539.f_1[(Global_1292096.f_2539 - 1) /*22*/] = { Var1 };
}

var func_417(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_429() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_430());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_430());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_430());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_431(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_432(iVar2))
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
				if (iVar9 & 8192 != 0 && func_433(iVar2) != 1)
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
					if (!func_434(iVar10))
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

bool func_418(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_419(bool bParam0)
{
	vector3 vVar0;

	if (!func_418(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_420(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_418(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_419(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_435(bParam0, 9.811189E+11f))
	{
		func_436(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_421(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_437(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_439(&Var0, func_438(0));
	}
	if (!func_440(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_441(iVar18);
	return iVar19;
}

int func_422(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_443(func_442(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_423(bool bParam0)
{
	if (func_28() == -1)
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

struct<4> func_424(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_444(bParam0, bParam1, 0) };
	return func_445(bParam0, Var0, Var0.f_4, bParam1);
}

int func_425()
{
	return Global_1149157.f_137;
}

bool func_426(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_446(iParam0))
	{
		return false;
	}
	if (func_447(iParam0, uParam1, &uVar0))
	{
		func_448(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_427()
{
	return Global_1953279.f_1;
}

bool func_428(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_429()
{
	return Global_1051645.f_12;
}

char* func_430()
{
	return "unnamed";
}

int func_431(int iParam0)
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

bool func_432(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_449(36, iParam0);
}

int func_433(int iParam0)
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

bool func_434(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_450(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_451(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

int func_435(bool bParam0, int iParam1)
{
	if (!func_418(bParam0, 0))
	{
		return func_452(func_442(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return 1;
	}
	return 0;
}

void func_436(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_437(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_438(bool bParam0)
{
	int iVar0;

	iVar0 = func_423(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_445(8.681942E-06f, func_453(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_445(8.681942E-06f, func_453(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_445(8.681942E-06f, func_453(bParam0), -1.942248E+12f, 0);
}

void func_439(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_440(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_423(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_441(int iParam0)
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

bool func_442(bool bParam0)
{
	return bParam0;
}

bool func_443(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

struct<5> func_444(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_453(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_419(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_445(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_438(bParam1) };
			if (iParam2 && func_454(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_455(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_455(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_456(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_457(bParam1) };
			switch (func_458(bParam0))
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
			if (func_459(bParam0, -2.580501E-27f))
			{
				Var0 = { func_445(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_459(bParam0, -4.220332E-15f))
			{
				Var0 = { func_445(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_445(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_459(bParam0, -3.171238E-21f))
			{
				Var0 = { func_445(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_460(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_459(bParam0, -3.171238E-21f))
			{
				Var0 = { func_445(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_445(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_418(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_423(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_446(int iParam0)
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

bool func_447(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_461(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_448(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_462(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_463(iVar0);
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
			uParam2->f_5 = func_464(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_465(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_466(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_467(iVar0);
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

bool func_449(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_468(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_469())
	{
		return func_468(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_468(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_450(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_451(int iParam0)
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
		func_470(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_471(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

int func_452(bool bParam0, int iParam1)
{
	if (!func_443(bParam0, 2))
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

struct<4> func_453(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_423(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_445(2.982335E+09f, func_472(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_445(2.982335E+09f, func_472(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_445(2.982335E+09f, func_472(), -5.45926E-19f, bParam0);
}

int func_454(bool bParam0, bool bParam1)
{
	if (func_458(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_473();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_455(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_474(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_456(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_475(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_457(bool bParam0)
{
	int iVar0;

	iVar0 = func_423(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_445(3.507197E-29f, func_453(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_445(3.507197E-29f, func_453(bParam0), 12999093, 0);
}

int func_458(bool bParam0)
{
	struct<2> Var0;

	if (!func_418(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_459(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_458(bParam0);
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
			if (func_476(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_460(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_477(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_461(int iParam0)
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

int func_462(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_478(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_463(int iParam0)
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

int func_464(int iParam0)
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

int func_465(int iParam0)
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

int func_466(int iParam0)
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

int func_467(int iParam0)
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

bool func_468(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_469()
{
	return Global_1102813.f_3672;
}

void func_470(int iParam0)
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
	func_471(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_471(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

struct<4> func_472()
{
	struct<4> Var0;

	return Var0;
}

int func_473()
{
	if (func_479(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_474(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_418(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_422(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_445(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_423(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_423(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_475(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_423(0);
	*iParam1 = { func_445(bParam0, func_438(0), fParam3, 0) };
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

bool func_476(bool bParam0, int iParam1, int iParam2)
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

int func_477(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_423(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_478(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_480(iParam0, uParam1, &uVar0))
	{
		func_481(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_479(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_482(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_423(bParam1), iParam0, bParam3);
}

bool func_480(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_461(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_481(bool bParam0, int iParam1, var uParam2)
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

bool func_482(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

