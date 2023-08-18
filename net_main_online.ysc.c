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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	char* sLocal_28 = NULL;
	char* sLocal_29 = NULL;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_28 = "props_misc@campfires@5_logs";
	sLocal_29 = "Script_PropCampfire";
	uLocal_31 = uLocal_31;
	func_1("START THREAD");
	iVar0 = MISC::GET_GAME_TIMER();
	func_2();
	func_3();
	func_1("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - before");
	if (func_4(9.403955E-38f))
	{
		func_5(9.403955E-38f);
		func_6();
	}
	func_1("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - after");
	func_1("Main loop start");
	if (!func_7(0, 0))
	{
		func_8();
		func_9();
	}
	while (!func_7(0, 0))
	{
		func_10();
		switch (func_11(PLAYER::PLAYER_ID()))
		{
			case 0:
				if (func_12() > 0)
				{
					if (func_13() && func_14())
					{
						func_15();
					}
					else if (Global_1572887.f_72.f_9 == -1 && Global_1572887.f_72.f_13 != 3)
					{
						func_16();
					}
					else if (Global_1572887.f_72.f_9 == -1 && Global_1572887.f_72.f_13 == 3)
					{
						func_15();
					}
					else if (func_17())
					{
						func_16();
					}
					else if (!func_18(Global_1572887.f_72.f_11))
					{
						func_15();
					}
					else
					{
						switch (func_19(Global_1572887.f_72.f_11))
						{
							case joaat("MPFBLA"):
							case joaat("MPCVAL"):
							case joaat("MPIBLA"):
							case joaat("MPFVAL"):
							case joaat("MPIOL2"):
							case joaat("MPCRHO"):
							case joaat("MPFOL2"):
							case joaat("MPIRHO"):
							case joaat("MPIVAL"):
							case joaat("MPFRHO"):
							case joaat("MPCOL2"):
							case joaat("MPCBLA"):
								func_16();
								break;
							default:
								func_15();
								break;
						}
					}
					func_20(1);
					if (!func_21())
					{
						func_22(1);
					}
					else
					{
						func_22(2);
					}
				}
				break;
			case 1:
				if (func_23() != -14.49531f)
				{
				}
				else
				{
					func_24();
				}
				func_22(2);
				break;
			case 2:
				if (func_25())
				{
					func_22(3);
				}
				break;
			case 3:
				if (func_21())
				{
					func_22(8);
				}
				else if (func_23() == -1.30071E-09f && !func_21())
				{
					func_22(7);
				}
				else if (!func_26())
				{
					func_22(7);
				}
				else if (func_27(1.652875E-19f))
				{
					iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
					STATS::_0x218F7710A139D012();
					func_22(5);
				}
				else
				{
					func_22(4);
				}
				break;
			case 4:
				switch (func_28(uLocal_32))
				{
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 4:
						func_29(32);
						break;
					case 3:
						func_22(6);
						break;
					case 5:
						func_22(6);
						break;
				}
				break;
			case 5:
				if (func_30() != -1)
				{
					func_22(7);
				}
				if ((iVar1 - NETWORK::GET_CLOUD_TIME_AS_INT()) > 60)
				{
					func_22(7);
				}
				break;
			case 6:
				if (func_13())
				{
					if (func_31())
					{
						func_22(7);
					}
				}
				else
				{
					func_22(7);
				}
				break;
			case 7:
				func_32();
				func_22(8);
				break;
			case 8:
				func_33();
				func_34();
				func_35();
				func_36(1);
				func_37(&(Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_204.f_10), 1);
				func_22(9);
				break;
			case 9:
				func_38(&uLocal_30);
				func_39();
				func_40();
				break;
			case 10:
				func_41();
				func_42();
				if (NETWORK::NETWORK_CAN_SESSION_END() && NETWORK::NETWORK_IS_SESSION_STARTED())
				{
					PLAYER::FORCE_CLEANUP(523);
					NETWORK::NETWORK_SESSION_LEAVE_SESSION();
				}
				break;
			default:
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_12())
			{
				case 0:
					func_43(9);
					break;
				case 9:
					func_44();
					func_45("MP_GAME_STATE_MAIN_UPDATE", 8);
					break;
				case 10:
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_41();
	func_42();
	func_46();
	while (func_47())
	{
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}
	func_48();
}

void func_1(char* sParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_SYSTEM_TIME();
	iVar1 = MISC::GET_FRAME_COUNT();
	Global_1572887.f_2 = MISC::GET_FRAME_COUNT();
	Global_1572887.f_3 = MISC::GET_SYSTEM_TIME();
}

void func_2()
{
	SCRIPTS::REQUEST_SCRIPT("net_train_manager");
	SCRIPTS::REQUEST_SCRIPT("net_fme_manager");
	SCRIPTS::REQUEST_SCRIPT("net_gangfeud_manager");
	SCRIPTS::REQUEST_SCRIPT("net_ugc_global_loader");
	SCRIPTS::REQUEST_SCRIPT("net_camp_manager");
	SCRIPTS::REQUEST_SCRIPT("net_camp_dog_manager");
	SCRIPTS::REQUEST_SCRIPT("net_player_camp_manager");
	SCRIPTS::REQUEST_SCRIPT("net_ace_thread_manager");
	SCRIPTS::REQUEST_SCRIPT("net_fetch_manager");
	SCRIPTS::REQUEST_SCRIPT("net_crew_manager");
	SCRIPTS::REQUEST_SCRIPT("net_beat_manager");
	SCRIPTS::REQUEST_SCRIPT("net_scan_manager");
}

void func_3()
{
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - start");
	func_49();
	func_50();
	func_51();
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_52();
	if (func_53())
	{
	}
	func_1("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - before");
	func_54();
	func_1("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - after");
	func_55(0);
	func_1("WAIT_FOR_FIRST_NETWORK_BROADCAST");
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
	if (!func_21())
	{
		func_56();
	}
	func_22(0);
	func_57();
	Global_1051645.f_13 = 0;
	func_58();
	Global_1051608.f_36 = 0;
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - end");
}

bool func_4(float fParam0)
{
	return (Global_1572887.f_72.f_15 && fParam0) != 0;
}

void func_5(float fParam0)
{
	func_59(&(Global_1572887.f_72.f_15), fParam0);
}

void func_6()
{
	int iVar0;

	if (func_60() == -1)
	{
		return;
	}
	iVar0 = Global_1295619;
	if (func_61(Global_1572887.f_8, 1))
	{
		func_37(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 4);
	}
	else
	{
		func_59(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 4);
	}
	Global_1056554[iVar0 /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[iVar0 /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[iVar0 /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[iVar0 /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[iVar0 /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[iVar0 /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[iVar0 /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;
	if (func_4(1024))
	{
		func_37(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 2);
	}
	else
	{
		func_59(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 2);
	}
}

bool func_7(bool bParam0, bool bParam1)
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

void func_8()
{
	func_62();
	func_63(-1, 0, 1);
	func_64();
	if ((func_27(2.146061E+14f) || func_27(16.12665f)) || func_27(9.285563E-08f))
	{
		Global_1102813.f_3969.f_5 = 1;
	}
}

void func_9()
{
	Global_1072759.f_4 = 1;
	Global_1051645.f_42 = (MISC::GET_GAME_TIMER() - Global_1051645.f_40);
}

void func_10()
{
	func_65();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/] < 8)
		{
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
	}
	func_62();
	func_66();
}

int func_11(int iParam0)
{
	if (iParam0 >= 0)
	{
		return Global_1056554[iParam0 /*491*/];
	}
	return -1;
}

int func_12()
{
	return Global_1072758;
}

bool func_13()
{
	return Global_1572887.f_196 > 0;
}

bool func_14()
{
	struct<11> Var0;
	int iVar11;
	int iVar12;

	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0 = { func_67() };
	iVar11 = func_68();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar11))
	{
		iVar12 = iVar11;
		Var0.f_10 = func_69(iVar12);
		Var0 = func_70(iVar12);
		Var0.f_1 = func_71(iVar12);
		Var0.f_2 = func_72(iVar12);
		Var0.f_3 = { func_73(iVar12) };
	}
	if (Var0.f_3 == 6)
	{
		return false;
	}
	if (!func_61(Var0.f_10, 4))
	{
		return false;
	}
	switch (Var0)
	{
		case 2:
			if (func_74(iVar11, 4096))
			{
				return false;
			}
			break;
		case 0:
			if (Var0.f_1 >= 34 && Var0.f_1 <= 42)
			{
				return false;
			}
			break;
	}
	return true;
}

void func_15()
{
	Global_1051645.f_15 = 1;
}

void func_16()
{
	Global_1051645.f_15 = 0;
}

bool func_17()
{
	if (func_75() != 0)
	{
		return false;
	}
	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
	{
		return false;
	}
	return true;
}

bool func_18(struct<2> Param0)
{
	if (!func_76(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_77(Param0))
	{
		return false;
	}
	return true;
}

int func_19(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_78(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_20(bool bParam0)
{
	if (func_79())
	{
		if ((!Global_1051645.f_15 || ((Global_1048577 || Global_1048581) && !Global_1049295)) && func_26())
		{
			func_80();
			func_81(bParam0);
			func_82(16);
		}
		else if (Global_1049295)
		{
			if (func_83(15))
			{
				func_82(15);
				func_84(16);
			}
		}
	}
	else
	{
		func_86((func_85() && func_83(16)));
		if (func_83(16))
		{
			func_82(16);
		}
	}
}

bool func_21()
{
	return !Global_1572887.f_10;
}

void func_22(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255 || iVar0 >= 32)
	{
	}
	else
	{
		Global_1056554[iVar0 /*491*/] = iParam0;
		Global_1056554[iVar0 /*491*/].f_1++;
		func_1(func_87(Global_1056554[iVar0 /*491*/]));
	}
}

int func_23()
{
	return Global_1572887.f_300;
}

void func_24()
{
	if (!Global_1572887.f_7)
	{
		Global_1572887.f_7 = 1;
		TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_START();
	}
}

bool func_25()
{
	bool bVar0;

	bVar0 = false;
	if (func_88(1))
	{
		if (func_89("net_train_manager", 3, 1024))
		{
			func_37(&(Global_1051645.f_13), 1);
		}
		bVar0 = true;
	}
	if (func_88(2))
	{
		if (func_89("net_fme_manager", 4, 1024))
		{
			func_37(&(Global_1051645.f_13), 2);
		}
		bVar0 = true;
	}
	if (func_88(32))
	{
		if (func_89("net_gangfeud_manager", 8, 1024))
		{
			func_37(&(Global_1051645.f_13), 32);
		}
		bVar0 = true;
	}
	if (func_88(4))
	{
		if (func_89("net_ugc_global_loader", 5, 3088))
		{
			func_37(&(Global_1051645.f_13), 4);
		}
		bVar0 = true;
	}
	if (func_88(64))
	{
		if (func_89("net_camp_manager", 9, 1024))
		{
			func_37(&(Global_1051645.f_13), 64);
		}
		bVar0 = true;
	}
	if (func_88(128))
	{
		if (func_89("net_camp_dog_manager", 10, 1024))
		{
			func_37(&(Global_1051645.f_13), 128);
		}
		bVar0 = true;
	}
	if (func_88(16384))
	{
		if (func_89("net_player_camp_manager", 11, 1024))
		{
			func_37(&(Global_1051645.f_13), 16384);
		}
		bVar0 = true;
	}
	if (func_88(256))
	{
		if (func_89("net_ace_thread_manager", 12, 1024))
		{
			func_37(&(Global_1051645.f_13), 256);
		}
		bVar0 = true;
	}
	if (func_88(512))
	{
		if (func_89("net_fetch_manager", 13, 2050))
		{
			func_37(&(Global_1051645.f_13), 512);
		}
		bVar0 = true;
	}
	if (func_88(1024))
	{
		if (func_89("net_crew_manager", 14, 1024))
		{
			func_37(&(Global_1051645.f_13), 1024);
		}
		bVar0 = true;
	}
	if (func_88(2048))
	{
		if (func_89("net_beat_manager", 15, 3500))
		{
			func_37(&(Global_1051645.f_13), 2048);
		}
		bVar0 = true;
	}
	if (func_88(4096))
	{
		if (func_89("net_scan_manager", 16, 512))
		{
			func_37(&(Global_1051645.f_13), 4096);
		}
		bVar0 = true;
	}
	if (func_88(8192))
	{
		if (func_89("net_moonshine_manager", 17, 1024))
		{
			func_37(&(Global_1051645.f_13), 8192);
		}
		bVar0 = true;
	}
	if (func_88(32768))
	{
		if (func_89("flow_controller", 19, 1024))
		{
			func_37(&(Global_1051645.f_13), 32768);
		}
		bVar0 = true;
	}
	if (func_88(65536))
	{
		if (func_89("net_stable_manager", 18, 1024))
		{
			func_37(&(Global_1051645.f_13), 65536);
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_26()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_27(int iParam0)
{
	return func_91(func_90(iParam0));
}

int func_28(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	switch (Global_1142409.f_2018)
	{
		case 1:
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.406766E+36f))
			{
			}
			else
			{
				vVar1 = { func_92() };
				if (vVar1.z != 0)
				{
					if (func_93(64))
					{
						vVar1.f_2 = -2;
					}
					if (func_94(Global_1295619.f_10))
					{
						func_95(vVar1);
					}
					else
					{
						func_95(vVar1);
					}
					func_96(2);
				}
				else
				{
					func_96(4);
				}
				Jump @234; //curOff = 141
				if ((Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 != -1 && Global_1141317.f_865[iVar0 /*7*/].f_4 == Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3) && Global_1141317.f_865[iVar0 /*7*/] == 6)
				{
					func_96(3);
					return 3;
				}
				Jump @234; //curOff = 223
				func_96(3);
			}
			if (Global_1142409.f_2041 == 0)
			{
				Global_1142409.f_2041 = MISC::GET_SYSTEM_TIME();
			}
			else if ((MISC::GET_SYSTEM_TIME() - Global_1142409.f_2041) >= Global_1901671.f_601.f_2)
			{
				return 5;
			}
			return func_97();
			default:
				break;
	}
}

void func_29(int iParam0)
{
	func_98(&(Global_1147168.f_8), iParam0);
}

int func_30()
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
	iVar5 = func_99(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

bool func_31()
{
	return Global_1572887.f_196 > 19;
}

void func_32()
{
	float fVar0;
	struct<18> Var1;
	struct<7> Var31;

	fVar0 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	func_100(0);
	Global_1102813.f_3594 = 1;
	if (((func_101(Global_17418.f_55.f_1) || func_102(Global_17418.f_55.f_1) == -1) || func_102(Global_17418.f_55.f_1) == 8) || func_103(Global_17418.f_55) == 8)
	{
		if (!func_104(&(Global_17418.f_55.f_1), &fVar0))
		{
			Global_17418.f_55.f_1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
			fVar0 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
		}
		Global_17418.f_55 = func_105(Global_17418.f_55.f_1, 1);
	}
	if (func_23() == -1.30071E-09f)
	{
		func_106(1);
		func_107(1);
		func_108(122, 0);
	}
	else if (func_26())
	{
		func_109(1, 1);
		if (NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING() || func_13())
		{
			func_110(64);
			func_110(256);
		}
		else if (Global_1572887.f_300.f_6 != -1)
		{
			func_108(Global_1572887.f_300.f_6, 0);
			func_111();
		}
		else if (Global_1572887.f_300.f_7 != -1)
		{
			func_108(Global_1102813.f_25, 0);
			func_111();
		}
		else if (Global_1572887.f_300.f_8 != -1)
		{
			func_108(Global_1102813.f_25, 0);
			func_111();
		}
		else if ((func_27(2.146061E+14f) || func_27(16.12665f)) || func_27(9.285563E-08f))
		{
			func_112(&(Global_1102813.f_3969.f_6), &(Global_1102813.f_3969.f_36), 1, 1, 1);
			if (Global_1102813.f_3969.f_45)
			{
				func_113();
			}
			if (Global_1102813.f_3969.f_46)
			{
				func_114(1, 0);
			}
			Global_1102813.f_3969.f_5 = 0;
			Global_1102813.f_3969 = 0;
		}
		else if (func_27(-2.446956E-29f))
		{
			func_115(1);
			func_116();
			func_109(0, -1);
			func_117(0);
		}
		else if (func_27(4.255667E+29f))
		{
			func_118(1);
			func_116();
			func_109(0, -1);
			func_117(0);
		}
		else if (func_27(4.176504E-24f))
		{
			func_119(1);
			func_116();
			func_109(0, -1);
			func_117(0);
		}
		else if (func_27(1.329101E-05f))
		{
			func_120(1);
			func_116();
			func_109(0, -1);
			func_117(0);
		}
		else if (func_27(2.544501E+38f))
		{
			func_116();
			func_109(0, -1);
			func_117(0);
		}
		else if (func_27(1.125065E+24f))
		{
			func_121();
			func_109(0, -1);
			func_117(0);
		}
		else if (func_27(-4.97355E+28f))
		{
			func_122(&Var1);
			func_123(&Var31);
			Var1.f_17.f_9 = -2.19652E+23f;
			Var1.f_17.f_6 = { func_124() };
			Var1.f_17 = { 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */ };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1069547520 /* Float: 1.5f */, 1069547520 /* Float: 1.5f */, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_125(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_112(&Var1, &Var31, 1, 1, 1);
			func_113();
		}
		else if (func_27(-2.812082E+38f))
		{
			func_108(Global_1102813.f_25, 0);
			func_111();
		}
		else if (func_27(-5.648891E-09f))
		{
			func_108(Global_17418.f_55, 0);
			func_111();
		}
		else if (func_27(-4.556427E+36f))
		{
			func_126(Global_17418.f_55.f_1, fVar0, -1f, 1117126656 /* Float: 75f */, 1, 1, 1);
			func_111();
		}
		else if (func_27(-7.497932E+34f) && func_127())
		{
			func_128();
		}
		else if (func_27(1.426619E+24f) && func_127())
		{
			func_128();
		}
		else if (func_27(-8.871581E-27f))
		{
			if (BUILTIN::VDIST(func_129(1), 0f, 0f, 0f) < 2f)
			{
				func_126(Global_17418.f_55.f_1, fVar0, -1f, 1117126656 /* Float: 75f */, 1, 1, 1);
			}
			else
			{
				func_122(&Var1);
				func_123(&Var31);
				Var1.f_17.f_9 = -2.19652E+23f;
				Var1.f_17.f_6 = { func_129(1) };
				Var1.f_17 = { 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */ };
				Var1.f_16 = 1;
				Var1.f_6 = { Var1.f_17 };
				Var1.f_6 = { 1069547520 /* Float: 1.5f */, 1069547520 /* Float: 1.5f */, 5f };
				Var1.f_1 = { Var1.f_17.f_6 };
				Var1.f_5 = 2;
				Var31.f_5 = 1;
				if (!func_125(Var1.f_17.f_6, &(Var31.f_6), &Var31))
				{
					Var31.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
					Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
				}
				func_112(&Var1, &Var31, 1, 1, 1);
				func_113();
			}
		}
		else if (func_27(-1.964215E-28f))
		{
			func_122(&Var1);
			func_123(&Var31);
			Var1.f_17.f_9 = -2.19652E+23f;
			Var1.f_17.f_6 = { func_130(Global_17418.f_55.f_1, -8.282245E+21f) };
			Var1.f_17 = { 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */ };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1069547520 /* Float: 1.5f */, 1069547520 /* Float: 1.5f */, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_125(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_112(&Var1, &Var31, 1, 1, 1);
			func_113();
		}
		else if (func_27(1.088823E-27f))
		{
			func_122(&Var1);
			func_123(&Var31);
			Var1.f_17.f_9 = -2.19652E+23f;
			if (func_131(3, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -992517545, -1009305692, 1125581580 };
			}
			Var1.f_17 = { 1112014848 /* Float: 50f */, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */ };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_125(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_112(&Var1, &Var31, 1, 1, 1);
			func_113();
		}
		else if (func_27(1.652875E-19f))
		{
			func_122(&Var1);
			func_123(&Var31);
			Var1.f_17.f_9 = -2.19652E+23f;
			if (func_131(4, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -992517545, -1009305692, 1125581580 };
			}
			Var1.f_17 = { 1112014848 /* Float: 50f */, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */ };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_125(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_112(&Var1, &Var31, 1, 1, 1);
			func_113();
		}
		else if (func_27(7.677955E-06f))
		{
			func_122(&Var1);
			func_123(&Var31);
			Var1.f_17.f_9 = -2.19652E+23f;
			if (NETWORK::_0xD7D0DF27CB1765B5(1))
			{
				Var1.f_17.f_6 = { Global_1102813.f_4076 };
			}
			else if (func_131(2, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -1019326313, 1142940036, 1122010844 };
			}
			Var1.f_17 = { 1112014848 /* Float: 50f */, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */ };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_125(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_112(&Var1, &Var31, 1, 1, 1);
			func_113();
		}
		else if (func_27(2.406373E+08f))
		{
			func_122(&Var1);
			if (func_131(5, &(Var1.f_17.f_6)))
			{
				func_123(&Var31);
				Var1.f_17.f_9 = -2.19652E+23f;
				Var1.f_17 = { 1112014848 /* Float: 50f */, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */ };
				Var1.f_16 = 1;
				Var1.f_6 = { Var1.f_17 };
				Var1.f_6 = { 1069547520 /* Float: 1.5f */, 1069547520 /* Float: 1.5f */, 5f };
				Var1.f_1 = { Var1.f_17.f_6 };
				Var1.f_5 = 2;
				Var31.f_5 = 1;
				if (!func_125(Var1.f_17.f_6, &(Var31.f_6), &Var31))
				{
					Var31.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
					Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
				}
				func_112(&Var1, &Var31, 1, 1, 1);
				func_113();
			}
			else
			{
				func_122(&Var1);
				func_126(Global_17418.f_55.f_1, fVar0, -1f, 1117126656 /* Float: 75f */, 1, 1, 1);
				func_111();
				func_132(904, 1);
			}
		}
		else if (func_27(5.878643E+22f))
		{
			func_122(&Var1);
			func_123(&Var31);
			Var1.f_17.f_9 = -2.19652E+23f;
			if (func_131(6, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -1019326313, 1142940036, 1122010844 };
			}
			Var1.f_17 = { 1112014848 /* Float: 50f */, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */ };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1069547520 /* Float: 1.5f */, 1069547520 /* Float: 1.5f */, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_125(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_112(&Var1, &Var31, 1, 1, 1);
			func_113();
		}
		else if (func_27(6.02041E-08f))
		{
			func_122(&Var1);
			func_123(&Var31);
			Var1.f_17.f_9 = -2.19652E+23f;
			if (func_131(7, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -1019326313, 1142940036, 1122010844 };
			}
			Var1.f_17 = { 1112014848 /* Float: 50f */, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */ };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_125(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_112(&Var1, &Var31, 1, 1, 1);
			func_113();
		}
		else if (func_27(-3.157196E-38f))
		{
			func_122(&Var1);
			func_123(&Var31);
			Var1.f_17.f_9 = -2.19652E+23f;
			if (func_131(8, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -1019326313, 1142940036, 1122010844 };
			}
			Var1.f_17 = { 1112014848 /* Float: 50f */, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */ };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1069547520 /* Float: 1.5f */, 1069547520 /* Float: 1.5f */, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_125(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_112(&Var1, &Var31, 1, 1, 1);
			func_113();
		}
		else if (func_27(-1.570301E+18f))
		{
			func_106(1);
			func_133(1);
			func_134(-1005823590, -982750822, 1131256218 /* Float: 237.6f */, 1126616269 /* Float: 166.8f */, 1);
			Global_1072759.f_28760 |= 1;
		}
		else
		{
			func_126(Global_17418.f_55.f_1, fVar0, -1f, 1117126656 /* Float: 75f */, 1, 1, 1);
		}
		Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 = 1;
	}
	else if (!func_135())
	{
		func_106(1);
		func_133(1);
		func_126(func_136(33, 1), 0f, -1f, -1f, 1, 1, 1);
	}
	else if (!func_137())
	{
		func_106(1);
		func_133(1);
		func_116();
	}
	else
	{
		func_106(1);
		func_133(1);
		func_126(func_136(func_138(Global_1072759.f_28295.f_2), 1), 0f, -1f, -1f, 1, 1, 1);
	}
	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_482 = NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1);
}

void func_33()
{
	func_139();
	func_140();
	NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT(true);
	if (func_21())
	{
		return;
	}
	if (func_141())
	{
		return;
	}
	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	func_142(-1);
	func_143();
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
	func_144(3);
	func_145();
	func_146();
	func_147();
	func_148();
	SCRIPTS::_0x11B0A0B282FA9B10(true);
	SCRIPTS::_0x6F700A4BF7C3331B(true);
	SCRIPTS::_0xF9E951A1E5517C06();
	STATS::_0x218F7710A139D012();
	func_149();
	func_150();
	Global_1072759.f_21626.f_262 = 1;
	Global_1572887.f_72.f_70 = 0;
	Global_1149417.f_5568 = 1;
	func_151(0);
	NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(func_152(PLAYER::PLAYER_ID(), 0, 1));
	func_153(1, 6);
}

void func_34()
{
	if (func_141())
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	if (func_60() != 0)
	{
		return;
	}
	func_154();
	func_155();
}

void func_35()
{
	if (!Global_1572887.f_10)
	{
		return;
	}
	NETWORK::_0x2CD41AC000E6F611();
	Global_1572887.f_10 = 0;
}

void func_36(bool bParam0)
{
	NETWORK::_0x704F92B3AF20D857(bParam0);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_38(var uParam0)
{
	struct<19> Var0;

	if (*uParam0)
	{
		return;
	}
	if (func_156(255) != 1)
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_4 = 0;
	func_158(Var0, func_157(3, 8), 0, 0);
	*uParam0 = 1;
}

void func_39()
{
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
	func_164();
	func_165();
	func_166();
	func_167();
	func_168();
	func_169();
	func_170();
	func_171();
}

void func_40()
{
	if (func_60() != 0)
	{
		return;
	}
	switch (Global_1051608.f_36)
	{
		case 0:
			break;
		case 1:
			func_172();
			break;
	}
	Global_1051608.f_36++;
	if (Global_1051608.f_36 >= 3)
	{
		Global_1051608.f_36 = 0;
	}
	func_173();
	func_174();
	func_175();
	func_176();
	func_177();
	func_178();
	func_159();
	func_179();
	func_180();
}

void func_41()
{
	func_181();
}

void func_42()
{
	func_182();
	func_49();
	func_50();
	func_51();
}

void func_43(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Global_1072758 = iParam0;
	}
}

void func_44()
{
	Global_1295252 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_183();
	func_184();
}

void func_45(char* sParam0, int iParam1)
{
	iParam1 = iParam1;
	sParam0 = sParam0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

void func_46()
{
	func_49();
	func_50();
	func_51();
	func_185();
	func_16();
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		func_186();
	}
	func_187();
}

bool func_47()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 != 0)
		{
			if (Global_1051645.f_16[iVar0] != 0)
			{
				if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[iVar0]))
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_48()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_49()
{
	Global_1072759.f_5 = 0;
}

void func_50()
{
	Global_1072759.f_4 = 0;
}

void func_51()
{
	Global_1072759.f_3 = 0;
}

int func_52()
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
			func_48();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_48();
					break;
				case 2:
					func_48();
					break;
				case 4:
					func_48();
					break;
				case 3:
					func_48();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_48();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_48();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_48();
		}
		if (func_60() == 0)
		{
			if (func_188())
			{
				func_48();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_48();
	}
	return 1;
}

bool func_53()
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

void func_54()
{
	bool bVar0;

	Global_1072759.f_13 = 0;
	bVar0 = false;
	while (!func_7(0, 0) && !bVar0)
	{
		switch (Global_1072759.f_13)
		{
			case 0:
				func_189(&Global_1072758);
				NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1072758, 1, 82);
				func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1072758), 1, "g_mpHostData");
				if (func_21())
				{
					Global_1072267 = { Global_1056554[func_191() /*491*/] };
					func_192(&Global_1056554);
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1056554, 15713, 83);
					func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1056554[0 /*491*/])), 15713, "g_mpPlayerData");
					Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/] = { Global_1072267 };
				}
				else
				{
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1056554, 15713, 83);
					func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1056554[0 /*491*/])), 15713, "g_mpPlayerData");
				}
				Global_1072759.f_13++;
				break;
			case 1:
				func_194();
				Global_1072759.f_13++;
				break;
			case 2:
				func_195();
				Global_1072759.f_13++;
				break;
			case 3:
				func_196();
				Global_1072759.f_13++;
				break;
			case 4:
				func_197();
				Global_1072759.f_13++;
				break;
			case 5:
				func_198();
				Global_1072759.f_13++;
				break;
			case 6:
				func_199();
				Global_1072759.f_13++;
				break;
			case 7:
				func_200();
				Global_1072759.f_13++;
				break;
			case 8:
				func_201();
				Global_1072759.f_13++;
				break;
			case 9:
				func_202();
				Global_1072759.f_13++;
				break;
			case 10:
				func_203();
				Global_1072759.f_13++;
				break;
			case 11:
				func_204();
				Global_1072759.f_13++;
				break;
			case 12:
				func_205();
				Global_1072759.f_13++;
				break;
			case 13:
				bVar0 = true;
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_206();
}

void func_55(bool bParam0)
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
					func_48();
					break;
				case 2:
					func_48();
					break;
				case 4:
					func_48();
					break;
				case 3:
					func_48();
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
			func_48();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_56()
{
	func_207();
}

void func_57()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1072759.f_23.f_5[iVar0 /*30*/] = 0;
		iVar0++;
	}
	Global_1072759.f_23 = 0;
}

void func_58()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 17)
	{
		iVar2 = Global_1072759.f_19585[iVar1];
		Global_1072759.f_19585[iVar1] = Global_38.f_118[iVar1];
		Global_1056554[iVar0 /*491*/].f_443[iVar1] = Global_38.f_118[iVar1];
		Global_1056554[iVar0 /*491*/].f_443.f_19[iVar1] = -1;
		func_208(iVar1, iVar2, iVar0);
		iVar1++;
	}
	func_209(iVar0, Global_1072759.f_19585.f_21);
	Global_1072759.f_19585.f_21 = 0;
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_60()
{
	return Global_1572887.f_14;
}

bool func_61(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_62()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	if (Global_1102813.f_3672 != iVar0)
	{
		Global_1102813.f_3672 = iVar0;
	}
}

int func_63(int iParam0, bool bParam1, bool bParam2)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == iParam0 && !bParam2)
	{
		return 1;
	}
	if (!(iParam0 >= -1 && iParam0 <= 7))
	{
		return 0;
	}
	PLAYER::SET_PLAYER_TEAM(PLAYER::PLAYER_ID(), iParam0, bParam1);
	if (!bParam1)
	{
		func_210();
	}
	return 1;
}

void func_64()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	func_211(&(Global_1295252.f_25), 1, 1);
	func_211(&(Global_1295252.f_26), 1, 1);
	if (iVar0 != 255)
	{
		Global_1295185[iVar0 /*2*/] = 0;
	}
	func_212(1);
}

void func_65()
{
	Global_1051645.f_38 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
}

void func_66()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<35> Var3;
	struct<15> Var38;
	int iVar219;
	int iVar220;
	int iVar221;
	int iVar222;
	bool bVar223;
	struct<8> Var224;
	int iVar232;
	struct<30> Var233;
	char cVar263[64];

	bVar0 = false;
	iVar1 = 12;
	if (func_213(&iVar1))
	{
		bVar0 = true;
	}
	while (iVar1 != 12)
	{
		if (func_213(&iVar1))
		{
			bVar0 = true;
		}
	}
	if (Global_1051645.f_45.f_1)
	{
		iVar2 = 0;
		if (func_214(&iVar2))
		{
			bVar0 = true;
		}
		while (iVar2 != 0)
		{
			if (func_214(&iVar2))
			{
				bVar0 = true;
			}
		}
		Global_1051645.f_45.f_1 = 0;
	}
	else if (func_214(&(Global_1051645.f_45)))
	{
		bVar0 = true;
	}
	Var3 = { Global_1051645.f_45 };
	Var38 = 12;
	Var38.f_1.f_4 = 10;
	Var38.f_1.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	iVar219 = 0;
	while (iVar219 < 12)
	{
		Var38[iVar219 /*15*/] = 15;
		iVar219++;
	}
	iVar220 = 0;
	iVar222 = 0;
	bVar223 = true;
	if (Var3.f_2[0] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 0;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		Var38[iVar220 /*15*/].f_4[0] = func_216(func_215(0));
		iVar220++;
	}
	if (Var3.f_2[1] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 1;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		if ((SCRIPTS::DOES_THREAD_EXIST(Global_1142409.f_2055) && SCRIPTS::IS_THREAD_ACTIVE(Global_1142409.f_2055, false)) && Global_1142409.f_2056 != -1)
		{
			Var38[iVar220 /*15*/].f_4[0] = MISC::_GET_STRING_FROM_VECTOR(Global_1141317[Global_1142409.f_2056 /*27*/].f_20);
		}
		else if (func_217(16))
		{
			Var38[iVar220 /*15*/].f_4[0] = func_219(func_218(PLAYER::PLAYER_ID(), 1));
		}
		iVar220++;
	}
	if (Var3.f_2[2] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 2;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		iVar221 = 0;
		iVar222 = (func_220() - 1);
		iVar221 = 0;
		while (iVar221 <= iVar222)
		{
			Var224 = { Global_1051645.f_80[iVar221 /*10*/] };
			StringConCat(&Var224, " ", 64);
			StringIntConCat(&Var224, Global_1051645.f_80[iVar221 /*10*/].f_9, 64);
			Var38[iVar220 /*15*/].f_4[iVar221] = func_221(Var224);
			iVar221++;
		}
		iVar220++;
	}
	if (Var3.f_2[3] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 3;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		Var38[iVar220 /*15*/].f_4[0] = func_223(func_222(255));
		iVar220++;
	}
	if (Var3.f_2[4] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 4;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_224()))
		{
			if (func_225())
			{
				Var38[iVar220 /*15*/].f_4[0] = func_226();
			}
		}
		else
		{
			Var38[iVar220 /*15*/].f_4[0] = func_224();
		}
		iVar220++;
	}
	if (Var3.f_2[6] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 6;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		iVar221 = 0;
		if (func_227(0, Global_1295619))
		{
			Var38[iVar220 /*15*/].f_4[iVar221] = func_228(0);
			iVar221++;
		}
		if (func_227(1, Global_1295619))
		{
			Var38[iVar220 /*15*/].f_4[iVar221] = func_228(1);
			iVar221++;
		}
		if (func_227(2, Global_1295619))
		{
			Var38[iVar220 /*15*/].f_4[iVar221] = func_228(2);
			iVar221++;
		}
		iVar220++;
	}
	if (Var3.f_2[7] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 7;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		Var38[iVar220 /*15*/].f_4[0] = func_229();
		iVar220++;
	}
	if (Var3.f_2[8] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 8;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		iVar221 = 0;
		Var233.f_3 = -1;
		Var233.f_3.f_1 = -1;
		Var233.f_11.f_12 = -1;
		Var233.f_11.f_12.f_1 = -1;
		Var233.f_11.f_14 = 255;
		Var233.f_11.f_15 = 255;
		iVar232 = 0;
		while (iVar232 < 10)
		{
			if (iVar221 >= 10)
			{
			}
			else
			{
				Var233 = { func_230(iVar232) };
				if (!func_231(&Var233))
				{
				}
				else
				{
					StringCopy(&cVar263, "Invite - ", 64);
					StringIntConCat(&cVar263, iVar232, 64);
					Var38[iVar220 /*15*/].f_4[iVar221] = func_221(cVar263);
					iVar221++;
				}
				iVar232++;
			}
		}
		iVar220++;
	}
	if (Var3.f_2[9] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 9;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		Var38[iVar220 /*15*/].f_4[0] = "Matchmaking Hack";
		iVar220++;
	}
	if (Var3.f_2[10] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 10;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		Var38[iVar220 /*15*/].f_4[0] = func_232(PLAYER::PLAYER_ID());
		iVar220++;
	}
	if (Var3.f_2[11] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 11;
		Var38[iVar220 /*15*/].f_1 = { func_233() };
		Var38[iVar220 /*15*/].f_4[0] = func_234();
		iVar220++;
	}
	if (Var3.f_2[12] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 12;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		iVar220++;
	}
	if (Var3.f_2[13] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 13;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		iVar220++;
	}
	if (Var3.f_2[14] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 14;
		Var38[iVar220 /*15*/].f_1 = { Global_1295619.f_12 };
		iVar220++;
	}
	if (!bVar223)
	{
		if (NETWORK::NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE() || bVar0)
		{
			NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(false, &Var38, iVar220);
		}
		if (((Var3.f_2[12] || Var3.f_2[13]) || Var3.f_2[14]) || Var3.f_2[0])
		{
			if (NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED())
			{
				NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(false);
			}
		}
		else if (!NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED())
		{
			NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(true);
		}
	}
	else
	{
		if (!NETWORK::NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE())
		{
			NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(true, &Var38, -1);
		}
		if (!NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED())
		{
			NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(true);
		}
	}
}

struct<11> func_67()
{
	return Global_1572887.f_196.f_30;
}

var func_68()
{
	return Global_1572887.f_196.f_41;
}

var func_69(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_10;
}

var func_70(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204;
}

var func_71(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_1;
}

var func_72(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_2;
}

struct<2> func_73(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_3;
}

bool func_74(int iParam0, int iParam1)
{
	return (Global_263042[iParam0 /*65*/].f_63 && iParam1) != 0;
}

int func_75()
{
	return Global_1572887.f_72;
}

bool func_76(int iParam0)
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

int func_77(int iParam0)
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

bool func_78(struct<2> Param0, bool bParam2)
{
	if (!func_18(Param0))
	{
		return false;
	}
	func_235(bParam2);
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

bool func_79()
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

void func_80()
{
	int iVar0;
	int iVar1;

	if (!func_83(1))
	{
		return;
	}
	MISC::_GET_FORCED_WEATHER(&iVar0, &iVar1);
	if (iVar0 != 0 || iVar1 != 0)
	{
		if ((Global_1295619.f_16 % 239) != 0)
		{
			return;
		}
	}
	func_237(func_236(), func_85());
}

void func_81(bool bParam0)
{
	float fVar0;

	if (!func_79())
	{
		return;
	}
	if (func_238() || func_239())
	{
		if (!func_83(1) || bParam0)
		{
			fVar0 = 2.726818E-17f;
			if (func_238())
			{
				fVar0 = -1.132327E+29f;
			}
			func_237(fVar0, func_85());
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_RDRO_X18", true, true);
			POPULATION::_0xEC116EDB683AD479(true);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("MP_reduceGlobalTemperature");
			func_84(1);
		}
		if (func_85() || bParam0)
		{
			if (func_238())
			{
				if (!func_83(4))
				{
					GRAPHICS::_SET_SNOW_COVERAGE_TYPE(3);
					func_84(4);
					func_82(2);
				}
			}
			else if (!func_83(2))
			{
				GRAPHICS::_SET_SNOW_COVERAGE_TYPE(2);
				func_84(2);
				func_82(4);
			}
		}
	}
	if (func_240())
	{
		if (((!func_83(8) && !STREAMING::IS_LOAD_SCENE_ACTIVE()) && !func_241(-5.976561E-18f)) || bParam0)
		{
			func_242(-5.976561E-18f);
			func_84(8);
		}
	}
}

void func_82(int iParam0)
{
	Global_1939583.f_84 = (Global_1939583.f_84 - (Global_1939583.f_84 && iParam0));
}

bool func_83(int iParam0)
{
	return (Global_1939583.f_84 && iParam0) != 0;
}

void func_84(int iParam0)
{
	Global_1939583.f_84 = (Global_1939583.f_84 || iParam0);
}

bool func_85()
{
	return (SCRIPTS::IS_LOADING_SCREEN_VISIBLE() || CAM::IS_SCREEN_FADED_OUT());
}

void func_86(bool bParam0)
{
	if (func_83(1) || bParam0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		AUDIO::CLEAR_AMBIENT_ZONE_LIST_STATE("AZL_RDRO_X18", true);
		POPULATION::_0xEC116EDB683AD479(false);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		func_82(1);
	}
	if ((func_83(6) && func_85()) || bParam0)
	{
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		func_82(2);
		func_82(4);
	}
	if (((func_83(8) && !STREAMING::IS_LOAD_SCENE_ACTIVE()) && !func_241(-5.976561E-18f)) || bParam0)
	{
		func_243(-5.976561E-18f);
		func_82(8);
	}
}

int func_87(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = "MP_GAME_STATE_INVALID";
			break;
		case 0:
			iVar0 = "MP_GAME_STATE_GAME_INIT";
			break;
		case 1:
			iVar0 = "MP_GAME_STATE_LOAD_INIT_THREADS";
			break;
		case 2:
			iVar0 = "MP_GAME_STATE_LOAD_MAIN_THREADS";
			break;
		case 3:
			iVar0 = "MP_GAME_STATE_ROUTE_TRANSITION";
			break;
		case 4:
			iVar0 = "MP_GAME_STATE_CREATE_PLAYER_CAMP";
			break;
		case 5:
			iVar0 = "MP_GAME_STATE_VERIFY_MADAM_NAZAR";
			break;
		case 6:
			iVar0 = "MP_GAME_STATE_CHECK_FOR_INVITE";
			break;
		case 7:
			iVar0 = "MP_GAME_STATE_SPAWN_PLAYER";
			break;
		case 8:
			iVar0 = "MP_GAME_STATE_MAIN_UPDATE_FIRST_FRAME";
			break;
		case 9:
			iVar0 = "MP_GAME_STATE_MAIN_UPDATE";
			break;
		case 10:
			iVar0 = "MP_GAME_STATE_END";
			break;
		case 11:
			iVar0 = "MP_GAME_STATE_ALL_LEAVE";
			break;
	}
	return iVar0;
}

bool func_88(int iParam0)
{
	if (Global_1051645.f_15 && func_61(Global_1051645.f_14, iParam0))
	{
		return false;
	}
	if (func_61(Global_1051645.f_13, iParam0))
	{
		return false;
	}
	return true;
}

bool func_89(char* sParam0, int iParam1, int iParam2)
{
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sParam0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iParam2) > 0)
	{
		Global_1051645.f_16[iParam1] = SCRIPTS::START_NEW_SCRIPT(sParam0, iParam2);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return true;
	}
	return false;
}

int func_90(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case joaat("NEW_GAME"):
			iVar0 = 1;
			break;
		case joaat("INTRO_NOT_DONE"):
			iVar0 = 2;
			break;
		case joaat("FOLLOW_INVITE"):
			iVar0 = 3;
			break;
		case -1480790826:
			iVar0 = 4;
			break;
		case joaat("SHIFT_F"):
			iVar0 = 5;
			break;
		case joaat("BG_CUSTOM_1"):
			iVar0 = 6;
			break;
		case joaat("BG_CUSTOM_2"):
			iVar0 = 7;
			break;
		case joaat("BG_CUSTOM_3"):
			iVar0 = 8;
			break;
		case joaat("OPEN_POSSE"):
			iVar0 = 9;
			break;
		case joaat("NEAR_POSSE"):
			iVar0 = 10;
			break;
		case joaat("RANDOM_REGION"):
			iVar0 = 11;
			break;
		case joaat("LAST_REGION"):
			iVar0 = 12;
			break;
		case joaat("LAST_LOCATION"):
			iVar0 = 13;
			break;
		case joaat("LAST_MISSION"):
			iVar0 = 14;
			break;
		case joaat("RANDOM_POKER"):
			iVar0 = 15;
			break;
		case joaat("CCHAR"):
			iVar0 = 16;
			break;
		case joaat("CAMP"):
			iVar0 = 17;
			break;
		case 1735278055:
			iVar0 = 18;
			break;
		case -283069378:
			iVar0 = 19;
			break;
		case joaat("TRADE_1"):
			iVar0 = 20;
			break;
		case joaat("TRADE_2"):
			iVar0 = 21;
			break;
		case joaat("TRADE_3"):
			iVar0 = 22;
			break;
		case joaat("TRADE_4"):
			iVar0 = 23;
			break;
		case joaat("TRADE_5"):
			iVar0 = 24;
			break;
		case joaat("TRADE_6"):
			iVar0 = 25;
			break;
		case joaat("TRADE_7"):
			iVar0 = 26;
			break;
		case 1449824096:
			iVar0 = 27;
			break;
		case -1369260209:
			iVar0 = 28;
			break;
		case joaat("COUPON"):
			iVar0 = 29;
			break;
		case joaat("HUB"):
			iVar0 = 30;
			break;
		case 413241879:
			iVar0 = 31;
			break;
		case 928971890:
			iVar0 = 32;
			break;
	}
	return iVar0;
}

bool func_91(int iParam0)
{
	return func_244(&(Global_1572887.f_300.f_1), iParam0, 3);
}

Vector3 func_92()
{
	vector3 vVar0;
	struct<20> Var3;

	Var3 = { func_245(0) };
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

bool func_93(int iParam0)
{
	return func_246(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_94(int iParam0)
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
			Var2 = { func_247(iVar0) };
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

int func_95(vector3 vParam0)
{
	if (!func_248(vParam0, 0))
	{
		return 0;
	}
	func_249(64);
	return 1;
}

void func_96(int iParam0)
{
	if (Global_1142409.f_2018 != iParam0)
	{
		Global_1142409.f_2018 = iParam0;
	}
}

var func_97()
{
	return Global_1142409.f_2018;
}

void func_98(var uParam0, int iParam1)
{
	func_250(uParam0, iParam1);
}

int func_99(int iParam0)
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

void func_100(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_FRAME_COUNT();
	iVar1 = MISC::GET_SYSTEM_TIME();
	Global_1102813 = iParam0;
	Global_1102813.f_3571 = iVar1;
	Global_1102813.f_3572 = iVar0;
	Global_1102813.f_3573 = 0;
}

bool func_101(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_102(vector3 vParam0)
{
	return func_251(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_103(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

bool func_104(Vector3* vParam0, float* fParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/];
	iVar1 = func_252(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_253(uVar0, iVar2, vParam0, fParam1))
		{
			return true;
		}
	}
	return false;
}

int func_105(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_254();
	if (func_255(iVar0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar0 /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_256(vParam0, iParam3);
}

void func_106(bool bParam0)
{
	if (!bParam0)
	{
		func_257(18);
	}
	else
	{
		func_258(18);
	}
}

void func_107(bool bParam0)
{
	if (!bParam0)
	{
		func_257(24);
	}
	else
	{
		func_258(24);
	}
}

void func_108(int iParam0, bool bParam1)
{
	var uVar0;
	struct<7> Var30;

	if (!func_104(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
		Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_258(92);
	if (func_259(iParam0, &uVar0))
	{
		func_112(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_257(0);
		}
		return;
	}
	func_126(Var30.f_6, Var30, -1f, -1f, 1, 1, 1);
	if (bParam1)
	{
		func_257(0);
	}
}

void func_109(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (iParam1 != -1)
		{
			Global_1102813.f_3799 = 0;
		}
		else
		{
			Global_1102813.f_3799 = 1;
		}
		func_258(62);
		Global_1102813.f_3798 = iParam1;
	}
	else
	{
		func_257(62);
	}
}

void func_110(int iParam0)
{
	func_37(&(Global_1572887.f_196.f_43), iParam0);
}

void func_111()
{
	func_258(94);
}

void func_112(var uParam0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_156(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_101(uParam0->f_17.f_6))
		{
			return;
		}
		if (BUILTIN::VMAG(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901671.f_51.f_1;
			uParam0->f_17.f_1 = Global_1901671.f_51.f_1;
			uParam0->f_17.f_2 = Global_1901671.f_51.f_1;
		}
	}
	if (func_101(fParam1->f_6))
	{
		return;
	}
	if (uParam0->f_16)
	{
		if (BUILTIN::VMAG(uParam0->f_6) < 1f)
		{
			return;
		}
		if (BUILTIN::VMAG(uParam0->f_17) < BUILTIN::VMAG(uParam0->f_6))
		{
			uParam0->f_16 = 0;
		}
	}
	func_258(0);
	func_258(3);
	Global_1102813.f_3909 = iParam2;
	Global_1102813.f_3910 = bParam3;
	Global_1102813.f_3911 = iParam4;
	func_122(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = { *uParam0 };
	func_123(&(Global_1102813.f_3878));
	Global_1102813.f_3878 = { *fParam1 };
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_260(Global_1102813.f_3839, 36);
	func_261(Global_1102813.f_3878, 36);
}

void func_113()
{
	func_258(93);
	func_258(92);
}

void func_114(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_258(70);
		if (bParam1)
		{
			func_258(73);
		}
	}
	else
	{
		func_257(70);
		func_257(73);
	}
}

void func_115(bool bParam0)
{
	if (bParam0)
	{
		func_258(52);
	}
	else
	{
		func_257(52);
	}
}

void func_116()
{
	func_262(1);
	func_263(1, 1);
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
		func_258(60);
	}
	else
	{
		func_257(60);
	}
}

void func_118(bool bParam0)
{
	if (bParam0)
	{
		func_258(54);
	}
	else
	{
		func_257(54);
	}
}

void func_119(bool bParam0)
{
	if (bParam0)
	{
		func_258(56);
	}
	else
	{
		func_257(56);
	}
}

void func_120(bool bParam0)
{
	if (bParam0)
	{
		func_258(58);
	}
	else
	{
		func_257(58);
	}
}

void func_121()
{
	func_264(1);
	func_263(1, 1);
}

void func_122(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_123(float fParam0)
{
	struct<9> Var0;

	*fParam0 = { Var0 };
}

Vector3 func_124()
{
	int iVar0;

	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 4);
	switch (iVar0)
	{
		case 0:
			return 1156246583, 1133072413, 1117281701;
		case 1:
			return -988574597, -993607270, 1125643846;
		case 2:
			return 1150039982, -995856138, 1115731984;
		case 3:
			return -984217928, -984735416, -1059318787;
		default:
			break;
	}
	return 1156246583, 1133072413, 1117281701;
}

bool func_125(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1072759.f_23824.f_383[func_265(vParam0) /*272*/];
	iVar1 = func_252(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_253(uVar0, iVar2, vParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_126(vector3 vParam0, float fParam3, float fParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_125(Global_1295619.f_12, &vVar0, &fVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_266(vParam0, fParam3, vVar0, fVar3, fParam4, fParam5, iParam6, fParam7, fParam8, 1);
}

bool func_127()
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = GANG::NETWORK_GET_GANG_LEADER(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
	{
		return false;
	}
	if (iVar1 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	return true;
}

void func_128()
{
	int iVar0;
	struct<18> Var1;
	struct<7> Var31;

	iVar0 = PLAYER::GET_PLAYER_PED(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
	Var1.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	Var1.f_17 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */ };
	Var1.f_17.f_9 = -2.19652E+23f;
	Var1.f_4 = iVar0;
	Var1.f_5 = 3;
	func_104(&(Var31.f_6), &Var31);
	Var31.f_5 = 1;
	func_112(&Var1, &Var31, 1, 1, 1);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_114(1, 0);
	}
}

Vector3 func_129(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_17418.f_2964[1 /*3*/];
		default:
			break;
	}
	return func_267();
}

Vector3 func_130(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5[5];
	struct<10> Var21;

	if (iParam3 == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar3 = -1;
	if (iParam3 == -8.282245E+21f)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar0 = iVar1;
			Var21 = { func_268(iVar0) };
			vVar5[iVar1 /*3*/] = { Var21.f_5 };
			iVar2++;
			iVar1++;
		}
	}
	else
	{
		return 0f, 0f, 0f;
	}
	if (!iVar2 == 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar2 - 1))
		{
			if (iVar3 == -1)
			{
				iVar3 = iVar1;
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5[iVar1 /*3*/], true);
			}
			else if (fVar4 > MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5[iVar1 /*3*/], true))
			{
				iVar3 = iVar1;
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5[iVar1 /*3*/], true);
			}
			iVar1++;
		}
		return vVar5[iVar3 /*3*/];
	}
	return 0f, 0f, 0f;
}

bool func_131(int iParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	var uVar7;

	*uParam1 = { func_267() };
	switch (iParam0)
	{
		case 1:
			*uParam1 = { -1000764464, -996174887, 1109979745 };
			break;
		case 2:
		case 7:
			*uParam1 = { 1151934055, -995931268, 1117246102 };
			break;
		case 3:
			vVar0 = { func_92() };
			switch (vVar0.y)
			{
				case joaat("CUMBERLAND_FOREST_CAMP"):
				case joaat("GRIZZLIES_CAMP"):
				case joaat("HEARTLAND_CAMP"):
				case joaat("BIG_VALLEY_CAMP"):
				default:
					*uParam1 = { -1012949320, 1145520783, 1122617262 };
					break;
					*uParam1 = { -1012949320, 1145520783, 1122617262 };
					break;
				case joaat("HENNIGANS_STEAD_CAMP"):
				case joaat("RIO_BRAVO_CAMP"):
				case joaat("GREAT_PLAINS_CAMP"):
				case joaat("TALL_TREES_CAMP"):
				case joaat("CHOLLA_SPRINGS_CAMP"):
				case joaat("GAPTOOTH_RIDGE_CAMP"):
					*uParam1 = { -983177871, -987498250, -1050421494 };
					break;
				case joaat("ROANOKE_RIDGE_CAMP"):
				case joaat("BAYOU_NAWAS_CAMP"):
				case joaat("SCARLETT_MEADOWS_CAMP"):
					*uParam1 = { 1160801321, -995876864 /* Float: -1313f */, 1111055401 /* Float: 46.34f */ };
					break;
			}
			break;
		case 4:
			iVar3 = func_30();
			if (iVar3 != -1)
			{
				if (func_269(iVar3, &vVar4, &uVar7))
				{
					*uParam1 = { vVar4 };
				}
			}
			break;
		case 5:
			if (func_270())
			{
				*uParam1 = { 1152648299, 1136175694, 1118832689 };
			}
			break;
		case 6:
			*uParam1 = { -991969512, -1011218042, 1126094288 };
			break;
		case 8:
			*uParam1 = { 1159565722, -996466688 /* Float: -1241f */, 1112276992 /* Float: 51f */ };
			break;
	}
	return !func_101(*uParam1);
}

void func_132(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_271(iParam0, &iVar0, &iVar1);
	if (!func_272(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_273(iVar0, iVar1);
}

void func_133(bool bParam0)
{
	if (!bParam0)
	{
		func_257(20);
	}
	else
	{
		func_258(20);
	}
}

void func_134(vector3 vParam0, int iParam3, bool bParam4)
{
	if (func_274(vParam0, iParam3))
	{
		func_263(1, bParam4);
	}
}

bool func_135()
{
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (Global_1149417.f_4920[iVar0 /*3*/].f_1 && !Global_1149417.f_4920[iVar0 /*3*/].f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_136(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_255(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_4))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Global_1887363[iParam0 /*36*/].f_4) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

bool func_137()
{
	int iVar0;

	iVar0 = 9;
	while (iVar0 <= 12)
	{
		if (Global_1149417.f_4920[iVar0 /*3*/].f_1 && !Global_1149417.f_4920[iVar0 /*3*/].f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 111;
		case 1:
			return 81;
		case 2:
			return 40;
		case 3:
			return 121;
		default:
			break;
	}
	return 111;
}

void func_139()
{
	Global_1072759.f_5 = 1;
	Global_1051645.f_43 = (MISC::GET_GAME_TIMER() - Global_1051645.f_40);
}

void func_140()
{
	func_275(256);
}

bool func_141()
{
	return false;
}

void func_142(int iParam0)
{
	Global_1896646.f_41 = iParam0;
}

void func_143()
{
	func_276();
	func_277();
	func_278();
	func_279();
}

void func_144(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956862.f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956862.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956862.f_5.f_7, iParam0);
		if (iVar0 == Global_1956862.f_5.f_14[iParam0 /*102*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956862.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956862.f_5.f_14[iParam0 /*102*/]);
}

void func_145()
{
	int iVar0;

	func_280();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_281(iVar0)))
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_281(iVar0)));
		}
		iVar0++;
	}
}

void func_146()
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(1);
}

void func_147()
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(4);
}

void func_148()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

void func_149()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	iVar0 = func_282();
	iVar1 = func_283();
	Var2 = 7;
	Var2.f_1 = 10;
	Var2.f_1.f_11 = 10;
	Var2.f_1.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 - 1);
		func_284(&iVar0, 0, 0, 0, 1, 0, 0);
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		Global_1296492.f_34[iVar1 /*10*/] = { func_285(iVar0, iVar1, &Var2) };
		func_286(&iVar0, 0, 0, 0, 1, 0, 0, 0);
		iVar1++;
	}
}

void func_150()
{
	LAW::CLEAR_WANTED_SCORE(PLAYER::PLAYER_ID());
	LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
}

void func_151(bool bParam0)
{
	int iVar0;

	iVar0 = MAP::GET_MAIN_PLAYER_BLIP_ID();
	if (func_287(PLAYER::PLAYER_ID(), 1) && !bParam0)
	{
		MAP::BLIP_ADD_MODIFIER(iVar0, -2.105079E+17f);
		MAP::BLIP_REMOVE_MODIFIER(iVar0, -3.092454E+13f);
	}
	else if (func_288(PLAYER::PLAYER_ID(), 1) && !bParam0)
	{
		MAP::BLIP_REMOVE_MODIFIER(iVar0, -2.105079E+17f);
		MAP::BLIP_ADD_MODIFIER(iVar0, -3.092454E+13f);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(iVar0, -2.105079E+17f);
		MAP::BLIP_REMOVE_MODIFIER(iVar0, -3.092454E+13f);
	}
}

bool func_152(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return false;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		return ((Global_17418.f_2641.f_2 == 2 || (bParam1 && Global_17418.f_2641.f_2 == 1)) || (bParam2 && Global_17418.f_2641.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((Global_1101558[iVar0 /*38*/].f_33 == 2 || (bParam1 && Global_1101558[iVar0 /*38*/].f_33 == 1)) || (bParam2 && Global_1101558[iVar0 /*38*/].f_33 == 3));
}

void func_153(int iParam0, int iParam1)
{
	if (Global_1051829.f_1)
	{
	}
	Global_1051829.f_1 = iParam0;
	if (!func_289(iParam1))
	{
		return;
	}
	Global_1051829.f_2 = 0;
	Global_1051829 = Global_1901671.f_45;
	SCRIPTS::_BG_RELOAD_ALL_BACKGROUND_SCRIPTS();
	if (!Global_1051829.f_1)
	{
		func_290("BGS_CONFIRM", 15000, 0, 0, 0, 1);
	}
	Global_1051829.f_1 = 0;
}

void func_154()
{
	Global_1072759.f_23824.f_383.f_4084 = -1;
	Global_1072759.f_23824 = 1;
}

void func_155()
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS((1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false)));
}

int func_156(int iParam0)
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

var func_157(int iParam0, int iParam1)
{
	return func_291(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_158(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_292(&(Global_1072759.f_22981), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 7, &uParam19);
}

void func_159()
{
	struct<2> Var0;

	Var0 = { func_215(0) };
	if (func_18(Var0))
	{
		Global_1056554[Global_1295619 /*491*/].f_2 = { func_215(0) };
	}
	else
	{
		func_293(&(Global_1056554[Global_1295619 /*491*/].f_2));
	}
}

void func_160()
{
	var uVar0;

	if (!func_294())
	{
		return;
	}
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&uVar0);
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1155135[PLAYER::PLAYER_ID() /*30*/].f_1)) || !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1155135[PLAYER::PLAYER_ID() /*30*/].f_1), &uVar0))
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1155135[PLAYER::PLAYER_ID() /*30*/].f_1), &uVar0, 2);
	}
}

void func_161()
{
	Global_1155135[Global_1295619 /*30*/] = NETWORK::_NETWORK_GET_RANK();
}

void func_162()
{
	int iVar0;

	if (!Global_1572887.f_10)
	{
		return;
	}
	Global_1289593[Global_1295619] = Global_1072759.f_21353.f_1[Global_1295619 /*8*/].f_7;
	Global_1056554[Global_1295619 /*491*/].f_10 = Global_1072759.f_21353.f_259;
	Global_1056554[Global_1295619 /*491*/].f_9 = Global_1072759.f_21353.f_258;
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_259));
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == Global_1295619)
		{
		}
		else if (!Global_1295619.f_17[iVar0])
		{
		}
		else if (func_295(Global_1295619.f_149[iVar0], 0))
		{
			if (func_246(Global_1289593[iVar0], 16))
			{
				SCRIPTS::_0xFFDDF802279BE128(&(Global_1056554[iVar0 /*491*/].f_9), &(Global_1072759.f_21353.f_259), &(Global_1072759.f_21353.f_259));
			}
		}
		iVar0++;
	}
}

void func_163()
{
	struct<30> Var0;

	Var0 = { func_230(0) };
	if (Var0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Var0.f_11.f_2) > Global_1901671.f_2.f_25)
		{
			func_296();
			func_297(&Var0);
		}
	}
	func_298();
	func_300((func_299() + 1 % 10));
	func_301();
}

void func_164()
{
}

void func_165()
{
	if (!func_61(Global_1572887.f_8, 2f))
	{
		return;
	}
	func_59(&(Global_1572887.f_8), 2f);
	if (func_302())
	{
		if (func_17())
		{
			func_303();
		}
		else if (func_75() == 3)
		{
			func_304();
		}
		else
		{
			func_305();
		}
	}
	else
	{
		func_306();
	}
}

void func_166()
{
	func_307();
	if (!func_289(9))
	{
		return;
	}
	func_153(0, 6);
}

void func_167()
{
	Global_1295252 = NETWORK::GET_NETWORK_TIME();
	switch (Global_1295252.f_1)
	{
		case 0:
			func_308();
			break;
		case 1:
			func_309();
			break;
		case 2:
			func_310();
			break;
		case 3:
			func_311();
			break;
		case 4:
			func_312();
			break;
		case 5:
			func_313();
			break;
		case 6:
			func_314();
			break;
	}
	Global_1295252.f_27 = Global_1295252;
}

void func_168()
{
	if (Global_1102813.f_26.f_3345)
	{
		if (func_315())
		{
			Global_1102813.f_26.f_3345 = 0;
		}
	}
	if (Global_1102813.f_26.f_3346)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
		{
			ENTITY::SET_ENTITY_COORDS(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3348, false, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3354, 2, false);
		}
		Global_1102813.f_26.f_3346 = 0;
	}
	if (Global_1102813.f_26.f_3347)
	{
		if (!func_316())
		{
			func_317();
			Global_1102813.f_26.f_3347 = 0;
		}
	}
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = Global_1203856[iVar0 /*8*/];
		if (Global_1203856[iVar0 /*8*/].f_6)
		{
			iVar2 = Global_1203856[iVar0 /*8*/].f_1;
			iVar3 = Global_1203856[iVar0 /*8*/].f_2;
			iVar4 = Global_1203856[iVar0 /*8*/].f_3;
			bVar5 = Global_1203856[iVar0 /*8*/].f_4;
			if (iVar3 != 0)
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(func_281(iVar3));
			}
			if (Global_1203856[iVar0 /*8*/].f_3 >= 0)
			{
				if (!bVar5)
				{
					iVar1 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_318(iVar2), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, iVar4, 1f, false, false, false);
				}
				else
				{
					iVar1 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_318(iVar2), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, iVar4, 1f, false, false, false);
				}
			}
			else if (!bVar5)
			{
				iVar1 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(func_318(iVar2), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			}
			else
			{
				iVar1 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(func_318(iVar2), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			}
			Global_1203856[iVar0 /*8*/] = iVar1;
			Global_1203856[iVar0 /*8*/].f_6 = 0;
		}
		else if (Global_1203856[iVar0 /*8*/].f_7)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iVar1))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iVar1, false);
			}
			Global_1203856[iVar0 /*8*/].f_7 = 0;
		}
		iVar0++;
	}
}

void func_170()
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	vector3 vVar10;
	struct<2> Var13;
	int iVar15;

	func_319();
	switch (func_320())
	{
		case 0:
			if (!func_321())
			{
			}
			else if (!func_322())
			{
			}
			else
			{
				func_323(1);
				Jump @109; //curOff = 64
				if (!func_324())
				{
				}
				else
				{
					func_325();
					func_326();
					func_327();
					func_323(2);
					Jump @109; //curOff = 95
					func_328(2);
				}
			}
			iVar0 = func_329();
			if (func_330(iVar0))
			{
				func_331(13);
			}
			switch (iVar0)
			{
				case 0:
					if (!Global_1048577)
					{
					}
					else
					{
						func_331(1);
						Jump @1111; //curOff = 250
						if (Global_1295619 < 0 || Global_1295619 >= 32)
						{
						}
						else if (func_332(Global_1295619) == 0)
						{
							if (func_18(func_215(0)))
							{
								func_331(2);
							}
						}
						else
						{
							func_331(2);
							Jump @1111; //curOff = 315
							if (Global_1295619 < 0 || Global_1295619 >= 32)
							{
							}
							else
							{
								func_333(func_332(Global_1295619));
								if (func_334(func_332(Global_1295619)))
								{
									func_331(3);
								}
								else
								{
									func_335(1);
									func_331(4);
								}
								Jump @1111; //curOff = 388
								if (!func_18(func_215(0)))
								{
								}
								else
								{
									func_331(5);
									Jump @1111; //curOff = 412
									if (func_18(func_215(0)))
									{
									}
									else
									{
										func_331(15);
										Jump @1111; //curOff = 436
										func_337(func_336());
										func_331(6);
										Jump @1111; //curOff = 453
										if (!func_338(1))
										{
										}
										else
										{
											if (func_338(4))
											{
												func_331(8);
											}
											else
											{
												func_331(7);
											}
											Jump @1111; //curOff = 490
											func_331(9);
											Jump @1111; //curOff = 499
											func_339(4);
											func_331(9);
											Jump @1111; //curOff = 513
											if (!func_338(2))
											{
											}
											else
											{
												if (func_338(8))
												{
													func_331(11);
												}
												else
												{
													func_331(10);
												}
												Jump @1111; //curOff = 552
												switch (func_340(PLAYER::PLAYER_ID()))
												{
													case 10:
														func_341(4);
														func_331(12);
														break;
													case 2:
													case 15:
														func_331(11);
														break;
													default:
														break;
												}
												Jump @1111; //curOff = 613
												func_342();
												func_331(13);
												Jump @1111; //curOff = 626
												func_339(2);
												func_331(6);
												Jump @1111; //curOff = 639
												if (func_74(PLAYER::PLAYER_ID(), 1024))
												{
													func_331(0);
												}
												else if (!CAM::IS_SCREEN_FADED_IN())
												{
												}
												else if (func_343())
												{
												}
												else if (Global_1048577)
												{
												}
												else if (Global_1048584)
												{
												}
												else
												{
													iVar9 = func_345(func_344(0));
													switch (iVar9)
													{
														case 9:
															Var1 = { func_347(func_346(0)) };
															if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_348(Var1)))
															{
																AUDIO::PREPARE_MUSIC_EVENT(func_348(Var1));
															}
															break;
													}
													func_331(14);
													Jump @1111; //curOff = 784
													iVar9 = func_345(func_344(0));
													switch (iVar9)
													{
														case 9:
															if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
															{
																if (UNLOCK::UNLOCK_IS_UNLOCKED(-2.345347E+27f))
																{
																	func_349(-3.027463E-05f);
																}
																else if (func_218(PLAYER::PLAYER_ID(), 1) != -1)
																{
																	func_350(2048);
																}
																else
																{
																	func_349(-1.042496E-05f);
																}
															}
															Var1 = { func_347(func_346(0)) };
															if (!MISC::IS_STRING_NULL_OR_EMPTY(func_348(Var1)))
															{
																AUDIO::TRIGGER_MUSIC_EVENT(func_348(Var1));
															}
															break;
														case 12:
															vVar10 = -1;
															vVar10.f_1 = -1;
															vVar10.f_2 = -1;
															vVar10.x = func_346(0);
															vVar10.f_1 = func_351(0);
															vVar10.f_2 = func_352(0);
															if (func_352(0) == 2 && func_338(8))
															{
																Var13 = { func_353(func_346(0), func_351(0), 6.082515E+33f, 0) };
																if (STATS::STAT_ID_IS_VALID(&Var13))
																{
																	STATS::STAT_ID_GET_INT(&Var13, &iVar15);
																	if (iVar15 <= 0)
																	{
																		func_349(0.5448782f);
																		func_354(&vVar10);
																	}
																}
															}
															else
															{
																func_349(150590.7f);
																func_354(&vVar10);
															}
															break;
													}
													func_331(15);
													Jump @1111; //curOff = 1089
													func_355();
													func_356();
													func_331(0);
												}
											}
										}
									}
								}
							}
						}
					}
					default:
						break;
			}
			default:
				break;
	}
}

void func_171()
{
	int iVar0;
	int iVar1;

	switch (Global_1901671)
	{
		case 0:
			if (func_357())
			{
				return;
			}
			if (!func_358())
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 <= 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (iVar1 == PLAYER::PLAYER_ID())
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
				}
				else if (Global_1072759.f_28766[iVar0])
				{
				}
				else if (Global_1056554[iVar0 /*491*/].f_484 == 0)
				{
				}
				else
				{
					Global_1072759.f_28766[iVar0] = 1;
					if (Global_1056554[iVar0 /*491*/].f_484 == Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_484)
					{
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CLOUD_TUNABLES();
						Global_1901671 = 1;
					}
				}
				iVar0++;
			}
			break;
		case 1:
			if (NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING())
			{
				return;
			}
			func_359();
			Global_1901671 = 2;
			break;
		case 2:
			if (func_357())
			{
				return;
			}
			Global_1901671 = 0;
			Global_1056554[iVar0 /*491*/].f_485 = NETWORK::GET_CLOUD_TIME_AS_INT();
			Global_1056554[iVar0 /*491*/].f_484 = NETWORK::NETWORK_GET_TUNABLE_CLOUD_CRC();
			break;
	}
}

void func_172()
{
	switch (func_360())
	{
		case -1:
			break;
		case 0:
			break;
		case 1:
			func_361();
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_173()
{
	Global_1108965.f_34.f_612 = (Global_1108965.f_34.f_612 + 1 % 32);
}

void func_174()
{
	int iVar0;
	int iVar1;

	if (func_60() != 0)
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	if (func_362() || Global_1048585)
	{
		func_363();
	}
	iVar1 = Global_1072759.f_19585.f_21;
	Global_1056554[iVar0 /*491*/].f_443[iVar1] = Global_38.f_118[iVar1];
	if (func_364(iVar1, iVar0))
	{
		Global_1072759.f_19585.f_21++;
		if (Global_1072759.f_19585.f_21 > 17)
		{
			Global_1072759.f_19585.f_21 = 0;
		}
		func_209(iVar0, Global_1072759.f_19585.f_21);
	}
	func_365();
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1072759.f_28295.f_1 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1072759.f_28295.f_1 = iVar0;
	if (func_366(Global_1835011[iVar0 /*72*/].f_32))
	{
		return;
	}
	func_367();
	if (Global_1149417.f_4920[iVar0 /*3*/].f_2)
	{
		if (!func_368(iVar0, PLAYER::GET_PLAYER_INDEX()))
		{
			func_369();
		}
		func_370(iVar0);
	}
	else
	{
		func_371(iVar0);
	}
	if (Global_1835011[iVar0 /*72*/].f_3 == 0)
	{
		return;
	}
	if (!func_18(Global_1835011[iVar0 /*72*/].f_1))
	{
		return;
	}
	iVar1 = GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	iVar2 = func_372(Global_1835011[iVar0 /*72*/].f_1);
	if (!func_368(iVar0, iVar1))
	{
		if (iVar2 == 1)
		{
			func_373(iVar0, -1, 0, 0, 1, 0, 0);
			return;
		}
		return;
	}
	switch (iVar2)
	{
		case 3:
		case 4:
			return;
		case 1:
		case 2:
			return;
		default:
			break;
	}
	func_374(Global_1835011[iVar0 /*72*/].f_1);
}

void func_176()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;

	if (Global_1295802.f_540)
	{
		return;
	}
	func_375();
	iVar0 = func_376();
	if (iVar0 > 0 && iVar0 < 7)
	{
		if (func_377(4))
		{
			if (!Global_1048577)
			{
				func_378(12);
			}
		}
		else if (Global_1048577)
		{
			func_379(4);
		}
	}
	if (func_380())
	{
		if ((iVar0 > 0 && iVar0 < 12) && func_381())
		{
			func_382(1);
			func_383();
		}
	}
	switch (iVar0)
	{
		case 0:
			if (!Global_1048577)
			{
			}
			else if (Global_1295619 < 0 || Global_1295619 >= 32)
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Global_1295619.f_11)))
			{
			}
			else
			{
				if (func_332(Global_1295619.f_11) != 0)
				{
					func_384();
					func_378(3);
				}
				Jump @1233; //curOff = 277
				if (!func_385(PLAYER::PLAYER_ID(), 1))
				{
				}
				else
				{
					if (func_380())
					{
						func_378(4);
					}
					else
					{
						func_378(6);
					}
					Jump @1233; //curOff = 316
					if (func_386())
					{
						func_350(8192);
						func_387(0, -1, 0, 1);
						func_388(1);
						func_378(12);
					}
					else
					{
						if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1)
						{
							if (!BOUNTY::BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION_FOR_POSSE(&(Global_1295802.f_492.f_6), func_390(func_389()), func_392(func_391())))
							{
								func_378(6);
							}
							else
							{
								Jump @472; //curOff = 412
								if (BOUNTY::_0x86EC5F83867C4B70(&uVar3))
								{
									BOUNTY::_BOUNTY_CANCEL_LEGENDARY_MISSION();
								}
								else if (!BOUNTY::BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION(&(Global_1295802.f_492.f_6), func_390(func_389()), func_392(func_391())))
								{
									func_378(6);
								}
								else
								{
									func_393(MISC::GET_GAME_TIMER());
									func_379(1);
									func_378(5);
									Jump @1233; //curOff = 490
									if (func_377(1.084202E-19f))
									{
										func_393(MISC::GET_GAME_TIMER());
										func_382(4);
										func_378(6);
										func_394();
									}
									else if (func_377(2f))
									{
										func_378(6);
										func_394();
									}
									else if (func_377(2.524355E-29f))
									{
										func_378(6);
										func_394();
									}
									Jump @1233; //curOff = 575
									if (func_395(4))
									{
										func_379(8);
									}
									if (!func_396())
									{
									}
									else
									{
										func_378(8);
										Jump @1233; //curOff = 609
										if (func_377(8))
										{
											func_398(func_397());
											func_401(func_400(3.414007E-11f, func_399(1), 4.978612f, 1, 0, 0));
											func_403(func_402(0));
											func_404(func_402(7));
											func_405();
											BOUNTY::_BOUNTY_REQUEST_COMPLETE_LEGENDARY_MISSION(&(Global_1295802.f_492.f_6), &(Global_1295802.f_492.f_16.f_1));
											func_379(32);
											func_393(MISC::GET_GAME_TIMER());
											func_379(2);
											func_378(9);
										}
										else
										{
											func_378(12);
										}
										Jump @1233; //curOff = 736
										if (func_377(1.584563E+29f))
										{
											func_378(7);
											func_406();
											func_394();
											BOUNTY::_BOUNTY_CANCEL_LEGENDARY_MISSION();
										}
										Jump @1233; //curOff = 768
										if (!CAM::IS_SCREEN_FADED_IN())
										{
										}
										else if (func_343())
										{
										}
										else if (Global_1048577)
										{
										}
										else if (Global_1048584)
										{
										}
										else
										{
											func_378(10);
											Jump @1233; //curOff = 818
											if (!func_407())
											{
												if (func_377(32))
												{
													func_408();
													func_409(32);
												}
											}
											iVar1 = (func_397() - func_410());
											if (iVar1 > 0)
											{
												func_411(MISC::VAR_STRING(2, "FEED_MONEY_EARN", iVar1), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
											}
											iVar1 = (func_400(3.414007E-11f, func_399(1), 4.978612f, 1, 0, 0) - func_412());
											if (iVar1 > 0)
											{
												fVar2 = (IntToFloat(func_413(iVar1)) + (IntToFloat(func_414(iVar1, 1)) * (1f / 1120403456)));
												func_411(MISC::VAR_STRING(6, "SHOP_GOLD_PRICE_READ", fVar2), "ITEMTYPE_TEXTURES", -3.368264E-32f, 0, 1.719275E+22f, 0, 0, 0, 1);
											}
											iVar1 = (func_402(0) - func_415());
											if (iVar1 > 0)
											{
												func_411(MISC::VAR_STRING(2, "PLAYER_RPG_XP_GAIN", iVar1), "itemtype_textures", 7.110984f, 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
											}
											iVar1 = (func_402(7) - func_416());
											if (iVar1 > 0)
											{
												func_411(MISC::VAR_STRING(2, "NET_TRADE_BOUNTY_HUNTER_XP", iVar1), "itemtype_textures", 7.110984f, 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
											}
											if (func_391() != 0)
											{
												func_378(12);
											}
											else
											{
												if (func_417() == 4)
												{
													func_418(1);
												}
												else if (func_417() < 4 && func_377(16))
												{
													func_418(2);
												}
												func_418(4);
												func_378(12);
												Jump @1233; //curOff = 1183
												BOUNTY::_BOUNTY_CANCEL_LEGENDARY_MISSION();
												func_419();
												func_420();
												func_421();
												func_378(13);
												Jump @1233; //curOff = 1208
												if (func_395(1))
												{
												}
												else
												{
													func_378(0);
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
			default:
				break;
	}
}

void func_177()
{
	switch (Global_1940239.f_11600)
	{
		case 0:
			func_422();
			func_423(-1);
			break;
		case 2:
			func_424(Global_1940239.f_11606);
			func_425();
			break;
		case 3:
			func_422();
			Global_1940239.f_11600 = -1;
			break;
	}
}

void func_178()
{
	func_426();
}

void func_179()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar1 = func_427();
	switch (func_428(iVar1))
	{
		case 0:
			func_429();
			break;
		case 2:
			func_430();
			break;
		case 3:
			func_431();
			break;
		case 1:
			break;
		default:
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = iVar0;
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (iVar3 == iVar2)
		{
			func_432((iVar1 + 1 % 32));
		}
		else
		{
			switch (func_428(iVar1))
			{
				case 0:
					break;
				case 2:
					break;
				case 3:
					break;
				case 1:
					func_433();
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
	func_432((iVar1 + 1 % 32));
}

void func_180()
{
	if (func_362())
	{
		return;
	}
	if (Global_1220746[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] != Global_1220811.f_1.f_8 || Global_1220746[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1 != Global_1220811.f_1.f_9)
	{
		Global_1220746[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = Global_1220811.f_1.f_8;
		Global_1220746[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1 = Global_1220811.f_1.f_9;
	}
	if (Global_1220811.f_1200 >= 32)
	{
		Global_1220811.f_1200 = 0;
	}
	func_434(Global_1220811.f_1200);
	Global_1220811.f_1200++;
}

void func_181()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_435(iVar0);
		iVar0++;
	}
}

void func_182()
{
	func_436();
	func_317();
	Global_1102813.f_26.f_3347 = 0;
	Global_1102813.f_26.f_3345 = 0;
}

void func_183()
{
	func_437(Global_1295252.f_31, Global_1295252.f_32);
	Global_1295252.f_31++;
	if (Global_1295252.f_31 >= 1)
	{
		Global_1295252.f_31 = 0;
		Global_1295252.f_32++;
		Global_1295252.f_32 = (Global_1295252.f_32 % 32);
	}
}

void func_184()
{
	Global_1295252.f_33++;
	if (Global_1295252.f_33 >= Global_1295158.f_22)
	{
		Global_1295252.f_33 = 0;
		Global_1295252.f_34++;
		Global_1295252.f_34 = (Global_1295252.f_34 % 32);
	}
	if (Global_1295252.f_33 >= Global_1295158.f_22)
	{
		return;
	}
	switch (Global_1295158.f_3[Global_1295252.f_33 /*6*/].f_1)
	{
		case 0:
			func_438(&(Global_1295158.f_3[Global_1295252.f_33 /*6*/]));
			break;
		case 1:
			func_439(&(Global_1295158.f_3[Global_1295252.f_33 /*6*/]));
			break;
		case 2:
			func_440(&(Global_1295158.f_3[Global_1295252.f_33 /*6*/]), Global_1295252.f_33);
			break;
	}
}

void func_185()
{
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_train_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_train_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_fme_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fme_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_gangfeud_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_gangfeud_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ugc_global_loader"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ugc_global_loader");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_camp_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_camp_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_camp_dog_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_camp_dog_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_player_camp_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_player_camp_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ace_thread_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ace_thread_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_fetch_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fetch_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_crew_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_crew_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_beat_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_beat_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_scan_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_scan_manager");
	}
}

void func_186()
{
	func_441(256);
}

void func_187()
{
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_10));
}

bool func_188()
{
	return Global_1051645.f_8;
}

void func_189(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

int func_190(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_191()
{
	return Global_1102813.f_3672;
}

void func_192(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_442(uParam0[iVar0 /*491*/]);
		iVar0++;
	}
}

int func_193(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_194()
{
	if (func_21())
	{
		Global_1102775 = { Global_1101558[func_191() /*38*/] };
		func_443(&Global_1101558);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1101558, 1217, 72);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1101558[0 /*38*/])), 1217, "g_mpPlayerStatusSyncData");
		Global_1101558[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*38*/] = { Global_1102775 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1101558, 1217, 72);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1101558[0 /*38*/])), 1217, "g_mpPlayerStatusSyncData");
	}
}

void func_195()
{
	if (func_21())
	{
		func_444(&Global_1155135);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1155135, 961, 67);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1155135[0 /*30*/])), 961, "g_mpPlayerPersona");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1155135, 961, 67);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1155135[0 /*30*/])), 961, "g_mpPlayerPersona");
	}
	func_161();
	func_160();
}

void func_196()
{
	func_445(&Global_1107816);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1107816, 33, 51);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1107816), 33, "g_mpHostJobData.sGangImpromptuRaceData");
	if (func_21())
	{
		Global_1110230 = { Global_1109780[func_191() /*6*/] };
		func_446(&Global_1109780);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1109780, 193, 52);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1109780[0 /*6*/])), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
		Global_1109780[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/] = { Global_1110230 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1109780, 193, 52);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1109780[0 /*6*/])), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
	}
}

void func_197()
{
	func_447(&Global_1206939);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1206939, 385, 46);
	func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1206939[0 /*12*/])), 385, "g_mpSessionManagerPlayerData");
	func_207();
}

void func_198()
{
	func_448(&Global_1283534);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1283534, 181, 44);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1283534), 181, "g_mpShopManagerHostData");
	if (func_21())
	{
		Global_1283780 = { Global_1283715[func_191() /*2*/] };
		func_449(&Global_1283715);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1283715, 65, 45);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1283715[0 /*2*/])), 65, "g_mpShopManagerPlayerData");
		Global_1283715[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = { Global_1283780 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1283715, 65, 45);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1283715[0 /*2*/])), 65, "g_mpShopManagerPlayerData");
	}
}

void func_199()
{
	if (func_21())
	{
		Global_1289626 = Global_1289593[Global_1102813.f_3672];
		func_450(&Global_1289593);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289593, 33, 4);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1289593[0])), 33, "g_mpPlayerNetHudData");
		Global_1289593[PLAYER::NETWORK_PLAYER_ID_TO_INT()] = Global_1289626;
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289593, 33, 4);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1289593[0])), 33, "g_mpPlayerNetHudData");
	}
}

void func_200()
{
	func_451(&(Global_1107816.f_33));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107816.f_33), 717, 75);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&(Global_1107816.f_33)), 717, "g_mpHostJobData.sGunForHireMissionData");
	func_452(&(Global_1107816.f_750));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107816.f_750), 2, 76);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&(Global_1107816.f_750)), 2, "g_mpHostJobData.sGunForHireLocationGiverData");
	if (func_21())
	{
		func_453(&(Global_1138658[func_191() /*56*/]));
		func_454(&Global_1138658);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1138658, 1793, 77);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1138658[0 /*56*/])), 1793, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		func_455(&(Global_1140451[func_191() /*8*/]));
		func_456(&Global_1140451);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1140451, 257, 78);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1140451[0 /*8*/])), 257, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1138658, 1793, 77);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1138658[0 /*56*/])), 1793, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1140451, 257, 78);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1140451[0 /*8*/])), 257, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	func_457(1);
	func_458();
	func_459();
	func_460(4);
}

void func_201()
{
	func_461(&(Global_1107816.f_752));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107816.f_752), 397, 30);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&(Global_1107816.f_752)), 397, "g_mpHostJobData.sPosseVersusData");
	if (func_21())
	{
		Global_1110230.f_6 = { Global_1109780.f_193[func_191() /*8*/] };
		func_462(&(Global_1109780.f_193));
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1109780.f_193), 257, 31);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1109780.f_193[0 /*8*/])), 257, "g_mpPlayerJobData.sPosseVersusData");
		Global_1109780.f_193[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/] = { Global_1110230.f_6 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1109780.f_193), 257, 31);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1109780.f_193[0 /*8*/])), 257, "g_mpPlayerJobData.sPosseVersusData");
	}
}

void func_202()
{
	func_463(&Global_1295158);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1295158, 27, 68);
	func_190(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1295158), 27, "g_mpStoryCoopTransitionHostData");
	if (func_21())
	{
		Global_1295250 = { Global_1295185[func_191() /*2*/] };
		func_464(&(Global_1295185[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/]));
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1295185, 65, 69);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1295185[0 /*2*/])), 65, "g_mpStoryCoopTransitionPlayerData");
		Global_1295185[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = { Global_1295250 };
	}
	else
	{
		func_465(&Global_1295252);
		func_466(&Global_1295185);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1295185, 65, 69);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1295185[0 /*2*/])), 65, "g_mpStoryCoopTransitionPlayerData");
	}
}

void func_203()
{
	func_467();
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1220746, 65, 79);
	func_193(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&(Global_1220746[0 /*2*/])), 65, "g_mpAbandonedLootPlayerData");
}

void func_204()
{
	if (func_21())
	{
		Global_1289403 = { Global_1287258[func_191() /*67*/] };
		func_468(&Global_1287258);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1287258, 2145, 11);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1287258[0 /*67*/])), 2145, "g_mpParleyPlayerData");
		Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/] = { Global_1289403 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1287258, 2145, 11);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1287258[0 /*67*/])), 2145, "g_mpParleyPlayerData");
	}
}

void func_205()
{
	if (func_21())
	{
		func_469(&(Global_1222019[func_191() /*9*/]));
		func_470(&Global_1222019);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1222019, 289, 27);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1222019[0 /*9*/])), 289, "g_mpCollectiblePlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1222019, 289, 27);
		func_193(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1222019[0 /*9*/])), 289, "g_mpCollectiblePlayerData");
	}
}

void func_206()
{
	Global_1072759.f_3 = 1;
	Global_1051645.f_41 = (MISC::GET_GAME_TIMER() - Global_1051645.f_40);
}

void func_207()
{
	Global_1206939[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/] = 0;
	Global_1206939[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/].f_2 = 0;
	Global_1207324.f_1 = 0;
	Global_1207324.f_1.f_1 = 1;
}

void func_208(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_471(iParam0);
	if (iVar2 != -1)
	{
		iVar0 = iVar2;
		while (iVar0 <= 31)
		{
			iVar1 = (iParam0 * 31 + iVar0);
			if (iVar1 >= 545)
			{
			}
			else
			{
				if (MISC::IS_BIT_SET(iParam1, iVar0) && !func_472(iVar1))
				{
					MISC::SET_BIT(&(Global_1056554[iParam2 /*491*/].f_443[iParam0]), iVar0);
				}
				iVar0++;
			}
		}
		Global_1072759.f_19585[iParam0] = (Global_1072759.f_19585[iParam0] || Global_1056554[iParam2 /*491*/].f_443[iParam0]);
	}
}

void func_209(int iParam0, int iParam1)
{
	Global_1072759.f_19585.f_19 = 0;
	Global_1072759.f_19585.f_20 = Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1];
	Global_1072759.f_19585.f_22 = 0;
	Global_1072759.f_19585.f_23 = 0;
}

void func_210()
{
	float fVar0;
	int iVar1;

	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	switch (iVar1)
	{
		case -1:
			fVar0 = func_473(PLAYER::NETWORK_PLAYER_ID_TO_INT());
			break;
		case 0:
			fVar0 = 2.180808E+32f;
			break;
		case 1:
			fVar0 = -0.001095409f;
			break;
		case 2:
			fVar0 = -2.44377E-12f;
			break;
		case 3:
			fVar0 = 6.557825E-07f;
			break;
		case 4:
			fVar0 = 1.727169E-18f;
			break;
		case 5:
			fVar0 = 5.197468E+26f;
			break;
		case 6:
			fVar0 = 21077.97f;
			break;
		case 7:
			fVar0 = -4.184273E-30f;
			break;
		case 8:
			fVar0 = 1.155403E+37f;
			break;
		default:
			return;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), fVar0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), func_474());
	}
}

void func_211(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_475(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_476(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_477(iVar0);
	*uParam0 = 0;
}

void func_212(int iParam0)
{
	Global_1295252.f_1 = iParam0;
}

bool func_213(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	switch (*iParam0)
	{
		case 12:
			bVar0 = !func_478(255);
			iVar1 = 13;
			break;
		case 13:
			bVar0 = !func_135();
			iVar1 = 14;
			break;
		case 14:
			bVar0 = !func_479();
			iVar1 = 12;
			break;
	}
	bVar2 = Global_1051645.f_45.f_2[*iParam0] != bVar0;
	Global_1051645.f_45.f_2[*iParam0] = bVar0;
	*iParam0 = iVar1;
	return bVar2;
}

bool func_214(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	switch (*iParam0)
	{
		case 0:
			bVar0 = (!Global_1207324.f_1 & 3 != 0 && func_480());
			iVar1 = 4;
			break;
		case 4:
			bVar0 = (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || func_225());
			iVar1 = 6;
			break;
		case 6:
			bVar0 = (!Global_1207324.f_1 & 64 != 0 && func_481(PLAYER::NETWORK_PLAYER_ID_TO_INT()));
			iVar1 = 7;
			break;
		case 7:
			bVar0 = func_482(255);
			iVar1 = 8;
			break;
		case 8:
			bVar0 = func_483() > 0;
			iVar1 = 9;
			break;
		case 9:
			bVar0 = func_484() != true;
			iVar1 = 2;
			break;
		case 2:
			bVar0 = (!Global_1207324.f_1 & 3 != 0 && func_485());
			iVar1 = 1;
			break;
		case 1:
			bVar0 = ((!Global_1207324.f_1 & 16 != 0 && (func_486() || func_487())) || (!Global_1207324.f_1 & 512 != 0 && func_217(16)));
			iVar1 = 10;
			break;
		case 10:
			bVar0 = func_488();
			iVar1 = 11;
			break;
		case 11:
			bVar0 = func_489();
			iVar1 = 0;
			break;
	}
	bVar2 = Global_1051645.f_45.f_2[*iParam0] != bVar0;
	Global_1051645.f_45.f_2[*iParam0] = bVar0;
	*iParam0 = iVar1;
	return bVar2;
}

struct<2> func_215(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

char* func_216(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_490(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (func_18(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, func_19(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return HUD::_GET_TEXT_SUBSTRING_2(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

bool func_217(int iParam0)
{
	return func_246(Global_1297394.f_157, iParam0);
}

int func_218(int iParam0, bool bParam1)
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

char* func_219(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_220()
{
	return Global_1051645.f_80.f_102;
}

char* func_221(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_222(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_10;
	}
	return Global_1101558[iParam0 /*38*/].f_10;
}

char* func_223(int iParam0)
{
	if (!func_255(iParam0))
	{
		return "Wilderness";
	}
	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
		case 1:
			return "MacombsEnd";
		case 2:
			return "MerkinsWaller";
		case 3:
			return "Lagras";
		case 4:
			return "Lakay";
		case 5:
			return "SaintDenis";
		case 6:
			return "OrangePlantation";
		case 7:
			return "SerialKiller";
		case 8:
			return "Serendipity";
		case 9:
			return "ShadyBelle";
		case 10:
			return "SiltwaterStrand";
		case 11:
			return "AppleseedTimberCo";
		case 12:
			return "BerylsDream";
		case 13:
			return "BigValleyTrapper";
		case 14:
			return "DakotaRiverTrapper";
		case 15:
			return "FortRiggsHoldingCamp";
		case 16:
			return "HangingDogRanch";
		case 17:
			return "LoneMuleStead";
		case 18:
			return "MissingHusband";
		case 19:
			return "MontoRest";
		case 20:
			return "OwanjilaDam";
		case 21:
			return "PaintedSky";
		case 22:
			return "PronghornRanch";
		case 23:
			return "RiggsStation";
		case 24:
			return "BigvalleyShack";
		case 25:
			return "ShepherdsRise";
		case 26:
			return "Strawberry";
		case 27:
			return "ValleyView";
		case 28:
			return "WallaceStation";
		case 30:
			return "WatsonsCabin";
		case 29:
			return "BigValleyOldManJones";
		case 31:
			return "Canebreak Manor";
		case 32:
			return "Copperhead";
		case 33:
			return "SisikaPenitentiary";
		case 34:
			return "BluewaterTravelSales";
		case 35:
			return "BacchuBridge";
		case 36:
			return "DinoLady";
		case 37:
			return "OldFortWallace";
		case 38:
			return "SixPointCabin";
		case 39:
			return "BeechersHope";
		case 40:
			return "Blackwater";
		case 41:
			return "QuakersCove";
		case 42:
			return "AdlerRanch";
		case 43:
			return "DeadRival";
		case 53:
			return "CalumetRavine";
		case 54:
			return "CivilWarBride";
		case 44:
			return "ChezPorter";
		case 55:
			return "Cohutta";
		case 45:
			return "Colter";
		case 56:
			return "CotorraSprings";
		case 46:
			return "FrozenExplorer";
		case 57:
			return "GunFight";
		case 47:
			return "MillesaniClaim";
		case 49:
			return "MountHagenPeak";
		case 48:
			return "MountainMan";
		case 50:
			return "StarvingChildren";
		case 51:
			return "TempestRim";
		case 58:
			return "TheLoft";
		case 59:
			return "Veteran";
		case 60:
			return "Wapiti";
		case 52:
			return "WinterMiningTown";
		case 61:
			return "GrizzliesTravelSales";
		case 62:
			return "AguasDulces";
		case 63:
			return "GuarmaCamp";
		case 64:
			return "CincoTorres";
		case 65:
			return "LaCapilla";
		case 66:
			return "Manicato";
		case 67:
			return "Abandoned Mill";
		case 69:
			return "CarmodyDell";
		case 70:
			return "CornwallKerosene";
		case 71:
			return "CropFarm";
		case 72:
			return "CumberlandFalls";
		case 73:
			return "DownsRanch";
		case 74:
			return "EmeraldRanch";
		case 75:
			return "GrangersHoggery";
		case 76:
			return "HorseshoeOverlook";
		case 77:
			return "LarnedSod";
		case 78:
			return "LoonyCult";
		case 79:
			return "LuckysCabin";
		case 80:
			return "SwansonsStation";
		case 81:
			return "Valentine";
		case 82:
			return "AberdeenPigFarm";
		case 83:
			return "Annesburg";
		case 68:
			return "BeechersC";
		case 84:
			return "BeaverHollow";
		case 85:
			return "BlackBalsamRise";
		case 86:
			return "BrandywineDrop";
		case 87:
			return "ButcherCreek";
		case 88:
			return "Doverhill";
		case 89:
			return "HappyFamily";
		case 90:
			return "Isolationist";
		case 91:
			return "MacLeansHouse";
		case 92:
			return "MossyFlats";
		case 93:
			return "RoanokeValley";
		case 94:
			return "RockySeven";
		case 95:
			return "RoanokeTrapper";
		case 97:
			return "VanHornMansion";
		case 98:
			return "VanHornTradingPost";
		case 96:
			return "RoanokeOldManJones";
		case 99:
			return "BraithewaiteManor";
		case 100:
			return "BulgerGlade";
		case 101:
			return "CaligaHall";
		case 102:
			return "CatfishJacksons";
		case 103:
			return "ClemensCove";
		case 104:
			return "ClemensPoint";
		case 105:
			return "CompsonsStead";
		case 106:
			return "Dairy Farm";
		case 107:
			return "ScarletMeadowsHorseShop";
		case 108:
			return "LonniesShack";
		case 109:
			return "LoveTriangle";
		case 110:
			return "Radleys Pasture";
		case 111:
			return "Rhodes";
		case 112:
			return "SlavePen";
		case 113:
			return "AuroraBasinShack";
		case 114:
			return "DeadSettler";
		case 115:
			return "Cochinay";
		case 116:
			return "ManzanitaPost";
		case 117:
			return "PacificUnionRailroad";
		case 118:
			return "TannersReach";
		case 119:
			return "TallTreesTrapper";
		case 135:
			return "MacFarlanesRanch";
		case 136:
			return "ThievesLanding";
		case 137:
			return "HenniganTravelSales";
		case 138:
			return "HenniganHarriet";
		case 127:
			return "Armadillo";
		case 128:
			return "CootsChapel";
		case 129:
			return "DonJulioHouse";
		case 131:
			return "RidgewoodFarm";
		case 130:
			return "RileysCharge";
		case 132:
			return "TwinRocks";
		case 133:
			return "ChollaTravelSales";
		case 134:
			return "ChollaTrapper";
		case 120:
			return "Gaptooth Breach";
		case 121:
			return "Tumbleweed";
		case 122:
			return "Rathskeller Fork";
		case 123:
			return "BenedictPoint";
		case 124:
			return "FortMercer";
		case 125:
			return "Plainview";
		case 126:
			return "RioBravoTravelSales";
		case 139:
			return "CentralUnionRRCamp";
		default:
			break;
	}
	return "Wilderness";
}

char* func_224()
{
	if (func_491())
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&Global_26575, HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_26575));
	}
	return "";
}

bool func_225()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_492(iVar0))
		{
		}
		else if (!func_493(iVar0))
		{
		}
		else if (func_494(&(Global_1291896.f_22[iVar0 /*11*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_226()
{
	char cVar0[128];
	int iVar16;
	int iVar17;

	StringCopy(&cVar0, "[", 128);
	iVar17 = 0;
	iVar16 = 0;
	while (iVar16 < 10)
	{
		if (!func_492(iVar16))
		{
		}
		else if (!func_493(iVar16))
		{
		}
		else if (!func_494(&(Global_1291896.f_22[iVar16 /*11*/])))
		{
		}
		else
		{
			if (iVar17 > 0)
			{
				StringConCat(&cVar0, ",", 128);
			}
			StringConCat(&cVar0, "'", 128);
			StringIntConCat(&cVar0, Global_1291896.f_22[iVar16 /*11*/].f_1, 128);
			StringConCat(&cVar0, "'", 128);
			iVar17++;
		}
		iVar16++;
	}
	if (iVar17 <= 0)
	{
		StringCopy(&cVar0, "[NONE]", 128);
	}
	else
	{
		StringConCat(&cVar0, "]", 128);
	}
	return func_495(&cVar0);
}

bool func_227(int iParam0, int iParam1)
{
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)) && func_496(iParam0, 4, iParam1));
}

char* func_228(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Primary";
		case 1:
			return "Secondary";
		case 2:
			return "Trolley";
		default:
			break;
	}
	return "undefined";
}

char* func_229()
{
	return HUD::_GET_TEXT_SUBSTRING_2(&(Global_263042[Global_1295619 /*65*/].f_1.f_22), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_263042[Global_1295619 /*65*/].f_1.f_22)));
}

struct<30> func_230(int iParam0)
{
	struct<30> Var0;

	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_11.f_12 = -1;
	Var0.f_11.f_12.f_1 = -1;
	Var0.f_11.f_14 = 255;
	Var0.f_11.f_15 = 255;
	if (Global_1072759.f_23 > 0)
	{
		return Global_1072759.f_23.f_5[iParam0 /*30*/];
	}
	return Var0;
}

bool func_231(var uParam0)
{
	if (!*uParam0)
	{
		return false;
	}
	switch (uParam0->f_11.f_4)
	{
		case 68:
		case 72:
		case 74:
		case 75:
			return true;
		default:
			break;
	}
	return false;
}

char* func_232(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	iVar0 = func_497(iParam0);
	if (!func_498(iVar0))
	{
		return "NoSlot";
	}
	Var1 = -1;
	Var1.f_1 = -1;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		Var1 = { func_499(iVar3) };
		if (func_18(Var1))
		{
		}
		else
		{
			iVar3++;
		}
	}
	return func_216(Var1);
}

Vector3 func_233()
{
	if (Global_1235672.f_9478 == -1)
	{
		return 0f, 0f, 0f;
	}
	return Global_1235672[Global_1235672.f_9478 /*697*/].f_614;
}

char* func_234()
{
	char cVar0[64];

	StringCopy(&cVar0, "DynamicNearby", 64);
	return func_500(cVar0);
}

void func_235(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

int func_236()
{
	int iVar0;

	if (Global_1295619.f_16 < 79)
	{
		return 2.726818E-17f;
	}
	iVar0 = ((Global_1295619.f_16 % 79) * 100 / 79);
	if (func_238())
	{
		switch (Global_1939583.f_85)
		{
			case joaat("WHITEOUT"):
				if (iVar0 < 10)
				{
					return 6.826002E-13f;
				}
				else
				{
					return 6.49915E-15f;
				}
				break;
			case joaat("BLIZZARD"):
				if (iVar0 < 5)
				{
					return 6.826002E-13f;
				}
				else if (iVar0 < 25)
				{
					return 6.49915E-15f;
				}
				else
				{
					return -1.132327E+29f;
				}
				break;
			case joaat("SNOW"):
				if (iVar0 < 10)
				{
					return 6.49915E-15f;
				}
				else if (iVar0 < 55)
				{
					return -1.132327E+29f;
				}
				else
				{
					return 2.726818E-17f;
				}
				break;
			case joaat("SNOWLIGHT"):
				if (iVar0 < 50)
				{
					return -1.132327E+29f;
				}
				else
				{
					return 2.726818E-17f;
				}
				break;
		}
	}
	else
	{
		switch (Global_1939583.f_85)
		{
			case joaat("WHITEOUT"):
				if (iVar0 < 10)
				{
					return 6.826002E-13f;
				}
				else
				{
					return 6.49915E-15f;
				}
				break;
			case joaat("BLIZZARD"):
				if (iVar0 < 2)
				{
					return 6.826002E-13f;
				}
				else if (iVar0 < 25)
				{
					return 6.49915E-15f;
				}
				else
				{
					return -1.132327E+29f;
				}
				break;
			case joaat("SNOW"):
				if (iVar0 < 3)
				{
					return 6.49915E-15f;
				}
				else if (iVar0 < 55)
				{
					return -1.132327E+29f;
				}
				else
				{
					return 2.726818E-17f;
				}
				break;
			case joaat("SNOWLIGHT"):
				if (iVar0 < 22)
				{
					return 2.726818E-17f;
				}
				else if (iVar0 < 44)
				{
					return -1.132327E+29f;
				}
				else
				{
					return 1.845801E-09f;
				}
				break;
			case joaat("FOG"):
			case joaat("HIGHPRESSURE"):
			case joaat("CLOUDS"):
			case joaat("MISTY"):
			case joaat("SUNNY"):
				if (iVar0 < 25)
				{
					return 2.726818E-17f;
				}
				else if (iVar0 < 39)
				{
					return 4.308498E+15f;
				}
				else if (iVar0 < 45)
				{
					return -4.284445E+13f;
				}
				else if (iVar0 < 53)
				{
					return -4.271526E+32f;
				}
				else if (iVar0 < 75)
				{
					return 2.330323E+20f;
				}
				else
				{
					return 1.845801E-09f;
				}
				break;
		}
	}
	return 2.726818E-17f;
}

void func_237(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_WEATHER_TYPE(iParam0, true, true, false, 0f, false);
	}
	else
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		MISC::SET_WEATHER_TYPE(iParam0, true, true, true, 119f, false);
	}
	Global_1939583.f_85 = iParam0;
}

bool func_238()
{
	if (!func_79())
	{
		return false;
	}
	return func_246(Global_1901671.f_45.f_5, 32);
}

bool func_239()
{
	if (!func_79())
	{
		return false;
	}
	return func_246(Global_1901671.f_45.f_5, 2);
}

bool func_240()
{
	if (!func_79())
	{
		return false;
	}
	return func_246(Global_1901671.f_45.f_5, 64);
}

bool func_241(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	return STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(iParam0, Global_34);
}

void func_242(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		func_501(iParam0);
	}
}

void func_243(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		func_502(iParam0);
	}
}

bool func_244(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

struct<20> func_245(bool bParam0)
{
	struct<20> Var0;
	struct<4> Var20;
	struct<17> Var24;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var20 = { func_503(-7.437896E-28f, func_399(1), 4.978612f, 1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var20))
	{
		return Var0;
	}
	Var24.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_504(1), &Var20, &Var24, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_505(&Var24, bParam0) };
	Var0.f_18 = Var24.f_15;
	Var0.f_19 = Var24.f_16;
	Var0.f_17 = Var24.f_14;
	return Var0;
}

bool func_246(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<2> func_247(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_248(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_506(0, 1))
	{
		return false;
	}
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 = { vParam0 };
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_507();
	if (iParam3 == 1)
	{
		func_249(2);
	}
	else
	{
		Global_1147168.f_330.f_6 = 1;
		func_508(2);
	}
	if (!func_509(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_508(8);
		func_510();
	}
	if (!func_511(4) && (func_511(8) || func_511(16)))
	{
		func_249(4);
	}
	else
	{
		func_508(4);
	}
	if (func_246(Global_1147168.f_8, 1))
	{
		func_249(1);
	}
	else
	{
		func_508(1);
	}
	func_512(6);
	return true;
}

void func_249(int iParam0)
{
	func_98(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

void func_250(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

int func_252(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 9.201076E+18f;
	Var0.f_3 = uParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
}

bool func_253(var uParam0, int iParam1, Vector3* vParam2, float* fParam3)
{
	struct<5> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 3.36884E-33f;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 2.195196E+18f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam2, &Var0);
		Var0.f_2 = -7.369599E+36f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam3, &Var0);
		return true;
	}
	return false;
}

int func_254()
{
	return Global_1893611.f_2;
}

bool func_255(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_256(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_513(vParam0);
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

int func_257(int iParam0)
{
	if (func_514(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0)
{
	if (func_515(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_259(int iParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (!func_255(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_4))
	{
		return false;
	}
	uParam1->f_17.f_6 = { VOLUME::GET_VOLUME_COORDS(Global_1887363[iParam0 /*36*/].f_4) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam1->f_17.f_6, &uVar0, false))
	{
		uParam1->f_17.f_6.f_2 = uVar0;
	}
	uParam1->f_17 = Global_1901671.f_51.f_1;
	uParam1->f_17.f_1 = Global_1901671.f_51.f_1;
	uParam1->f_17.f_2 = Global_1901671.f_51.f_1;
	vVar1 = { VOLUME::GET_VOLUME_SCALE(Global_1887363[iParam0 /*36*/].f_4) };
	fVar4 = (((vVar1.x + vVar1.y) + vVar1.z) * 1051371084);
	if (fVar4 < Global_1901671.f_51)
	{
		fVar4 = Global_1901671.f_51;
	}
	if (fVar4 > Global_1901671.f_51.f_1)
	{
		fVar4 = Global_1901671.f_51.f_1;
	}
	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = fVar4;
	uParam1->f_17.f_1 = fVar4;
	uParam1->f_17.f_2 = fVar4;
	uParam1->f_17.f_9 = -2.19652E+23f;
	return true;
}

void func_260(struct<29> Param0, var uParam29, int iParam30)
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

void func_261(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_262(bool bParam0)
{
	if (!bParam0)
	{
		func_257(5);
	}
	else
	{
		if (func_156(255) == 4)
		{
			return;
		}
		func_258(5);
	}
}

void func_263(bool bParam0, bool bParam1)
{
	if (func_156(255) == 4)
	{
		return;
	}
	if (func_101(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_257(0);
	}
	else
	{
		if (bParam1)
		{
			func_516(0, 0, 0, 1);
		}
		func_258(0);
		func_122(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_123(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_260(Global_1102813.f_3839, 36);
	func_261(Global_1102813.f_3878, 36);
}

void func_264(bool bParam0)
{
	if (!bParam0)
	{
		func_257(6);
	}
	else
	{
		if (func_156(255) == 4)
		{
			return;
		}
		func_258(6);
	}
}

int func_265(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = BUILTIN::VDIST(vParam0, Global_1072759.f_23824.f_383[iVar0 /*272*/].f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

void func_266(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, float fParam11, float fParam12, int iParam13)
{
	if (func_156(255) == 4)
	{
		return;
	}
	if (func_101(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}
	if (bParam10)
	{
		func_516(0, 0, 0, 1);
	}
	func_258(0);
	func_258(3);
	Global_1102813.f_3909 = fParam11;
	Global_1102813.f_3910 = fParam12;
	Global_1102813.f_3911 = iParam13;
	func_122(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = fParam3;
	Global_1102813.f_3839.f_5 = 1;
	Global_1102813.f_3839.f_17.f_6 = { vParam0 };
	Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102813.f_3839.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
	if (fParam8 > 1f)
	{
		Global_1102813.f_3839.f_16 = 1;
		Global_1102813.f_3839.f_6.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3839.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102813.f_3839.f_6.f_9 = -2.19652E+23f;
	}
	func_123(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { vParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_260(Global_1102813.f_3839, 36);
	func_261(Global_1102813.f_3878, 36);
}

Vector3 func_267()
{
	return 0f, 0f, 0f;
}

struct<10> func_268(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	func_518(func_517(iParam0), &Var0);
	return Var0;
}

bool func_269(int iParam0, Vector3* vParam1, var uParam2)
{
	struct<4> Var0;
	float fVar5;

	Var0 = Global_1072759.f_28418[48 /*4*/].f_3;
	Var0.f_2 = -2.13205E+12f;
	Var0.f_3 = func_519(iParam0);
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

bool func_270()
{
	int iVar0;

	iVar0 = func_520(-2.180913E-37f, 1.310923E-34f);
	if (iVar0 > 0)
	{
		return true;
	}
	if (!UNLOCK::UNLOCK_IS_VISIBLE(-2.942762E-10f))
	{
		return false;
	}
	return true;
}

void func_271(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_272(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_521(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_522(iParam0))
	{
		return false;
	}
	if (func_523(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_524(iParam0, 1)) || func_525(32768))
	{
		if (!func_524(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_526())
	{
		return false;
	}
	return true;
}

void func_273(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_274(vector3 vParam0, int iParam3)
{
	if (func_101(vParam0))
	{
		return false;
	}
	if (func_156(255) == 4)
	{
		return false;
	}
	if (func_527(4, 255))
	{
	}
	func_258(4);
	func_528(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { vParam0 };
	Global_1102813.f_3869 = iParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_529(Global_1102813.f_3869, 36);
	return true;
}

void func_275(int iParam0)
{
	Global_1893611 = (Global_1893611 - (Global_1893611 && iParam0));
}

void func_276()
{
	func_530();
	func_531();
	func_532();
	func_533();
	func_534();
}

void func_277()
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("dewclm_nav_camp_00"))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP("dewclm_nav_camp_00");
	}
	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("shb_nav_camp_00"))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP("shb_nav_camp_00");
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar9 = 0;
		while (iVar9 <= 2)
		{
			if (func_535(iVar0, iVar9))
			{
				Var1 = { func_536(iVar0, iVar9) };
				if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(&Var1))
				{
					PATHFIND::_NAVMESH_DEACTIVATE_SWAP(&Var1);
				}
			}
			iVar9++;
		}
		iVar0++;
	}
}

void func_278()
{
	float fVar0[3];
	int iVar4;

	fVar0[0] = 1.520627E-36f;
	fVar0[1] = -2.59532E-21f;
	fVar0[2] = -8.001054E-22f;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::IS_IPL_ACTIVE_HASH(fVar0[iVar4]))
		{
			func_502(fVar0[iVar4]);
		}
		iVar4++;
	}
}

void func_279()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_538(iVar0, func_537(iVar0), 0, 0);
		iVar0++;
	}
}

void func_280()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = Global_1203856[iVar0 /*8*/];
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iVar1))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iVar1, false);
		}
		iVar0++;
	}
}

char* func_281(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "scr_deadeye";
		default:
			break;
	}
	return "";
}

var func_282()
{
	var uVar0;
	struct<6> Var1;

	CLOCK::GET_POSIX_TIME(&Var1, &(Var1.f_1), &(Var1.f_2), &(Var1.f_3), &(Var1.f_4), &(Var1.f_5));
	func_539(&uVar0, Var1.f_5);
	func_540(&uVar0, Var1.f_4);
	func_541(&uVar0, Var1.f_3);
	func_542(&uVar0, Var1.f_2);
	func_543(&uVar0, (Var1.f_1 - 1));
	func_544(&uVar0, (Var1 - 100));
	return uVar0;
}

int func_283()
{
	struct<6> Var0;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	iVar7 = Var0.f_2;
	iVar8 = Var0.f_1;
	iVar9 = Var0;
	if (iVar8 <= 2)
	{
		iVar8 += 12;
		iVar9 = (iVar9 - 1);
	}
	iVar10 = (iVar9 % 100);
	iVar11 = (iVar9 / 100);
	iVar12 = (((((iVar7 + ((13 * iVar8 + 1) / 5)) + iVar10) + (iVar10 / 4)) + (iVar11 / 4)) + (5 * iVar11));
	iVar13 = (iVar12 + 6 % 7);
	return iVar13;
}

void func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_545(*uParam0);
	iVar1 = func_546(*uParam0);
	iVar2 = func_547(*uParam0);
	iVar3 = func_548(*uParam0);
	iVar4 = func_549(*uParam0);
	iVar5 = func_550(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_551(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_552(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

struct<10> func_285(int iParam0, int iParam1, var uParam2)
{
	struct<10> Var0;
	var uVar10;
	var uVar11;
	var uVar12;

	func_553(iParam0, iParam1, &uVar10, &uVar11, &uVar12);
	func_554(uParam2, iParam1, 0, &uVar10, &uVar11, &uVar12);
	func_554(uParam2, iParam1, 1, &uVar10, &uVar11, &uVar12);
	func_554(uParam2, iParam1, 2, &uVar10, &uVar11, &uVar12);
	func_554(uParam2, iParam1, 3, &uVar10, &uVar11, &uVar12);
	func_554(uParam2, iParam1, 4, &uVar10, &uVar11, &uVar12);
	func_554(uParam2, iParam1, 5, &uVar10, &uVar11, &uVar12);
	func_554(uParam2, iParam1, 6, &uVar10, &uVar11, &uVar12);
	func_554(uParam2, iParam1, 7, &uVar10, &uVar11, &uVar12);
	func_554(uParam2, iParam1, 8, &uVar10, &uVar11, &uVar12);
	func_554(uParam2, iParam1, 9, &uVar10, &uVar11, &uVar12);
	Var0 = func_555((*uParam2[iParam1 /*11*/])[0]);
	Var0.f_1 = func_556((*uParam2[iParam1 /*11*/])[1]);
	Var0.f_8 = func_557((*uParam2[iParam1 /*11*/])[2]);
	Var0.f_3 = func_558((*uParam2[iParam1 /*11*/])[3]);
	Var0.f_6 = func_559((*uParam2[iParam1 /*11*/])[4]);
	Var0.f_7 = func_560((*uParam2[iParam1 /*11*/])[5]);
	Var0.f_4 = func_561((*uParam2[iParam1 /*11*/])[6]);
	Var0.f_5 = func_562((*uParam2[iParam1 /*11*/])[7]);
	Var0.f_2 = func_563((*uParam2[iParam1 /*11*/])[8]);
	Var0.f_9 = func_564((*uParam2[iParam1 /*11*/])[9]);
	return Var0;
}

void func_286(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_545(*iParam0);
	iVar1 = func_546(*iParam0);
	iVar2 = func_547(*iParam0);
	iVar3 = func_548(*iParam0);
	iVar4 = func_549(*iParam0);
	iVar5 = func_550(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_551(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_551(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_552(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_287(int iParam0, bool bParam1)
{
	return func_565(iParam0, bParam1) >= 4;
}

bool func_288(int iParam0, bool bParam1)
{
	return (func_565(iParam0, bParam1) >= 2 && func_565(iParam0, bParam1) < 4);
}

bool func_289(int iParam0)
{
	int iVar0;

	if (Global_1051829.f_1)
	{
		return true;
	}
	if (Global_1901671.f_45.f_1 == 0)
	{
		return false;
	}
	if (Global_1901671.f_45 == 0)
	{
		return false;
	}
	if (Global_1051829 != Global_1901671.f_45)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901671.f_45.f_1);
		if (iVar0 > 0)
		{
			return true;
		}
	}
	return false;
}

int func_290(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

var func_291(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_566() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_567());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_567());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_567());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_568(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_569(iVar2))
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
				if (iVar9 & 8192 != 0 && func_156(iVar2) != 1)
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
					if (!func_570(iVar10))
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

int func_292(var uParam0, struct<21> Param1)
{
	if (!func_571(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

void func_293(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

bool func_294()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_3;
}

bool func_295(int iParam0, bool bParam1)
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

struct<30> func_296()
{
	vector3 vVar0;
	struct<30> Var4;
	int iVar34;

	Var4.f_3 = -1;
	Var4.f_3.f_1 = -1;
	Var4.f_11.f_12 = -1;
	Var4.f_11.f_12.f_1 = -1;
	Var4.f_11.f_14 = 255;
	Var4.f_11.f_15 = 255;
	Var4.f_11.f_1 = 255;
	Var4.f_11.f_2 = vVar0.z;
	func_293(&(Var4.f_3));
	if (Global_1072759.f_23 > 0)
	{
		Global_1072759.f_23 = (Global_1072759.f_23 - 1);
		if (func_572() == Global_1072759.f_23)
		{
			func_573();
		}
		Var4 = { Global_1072759.f_23.f_5[Global_1072759.f_23 /*30*/] };
		Global_1072759.f_23.f_5[Global_1072759.f_23 /*30*/] = 0;
	}
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 <= 8)
	{
		if (func_572() == iVar34 + 1)
		{
			func_574(iVar34);
		}
		Global_1072759.f_23.f_5[iVar34 /*30*/] = { Global_1072759.f_23.f_5[iVar34 + 1 /*30*/] };
		Global_1072759.f_23.f_5[iVar34 + 1 /*30*/] = 0;
		iVar34++;
	}
	return Var4;
}

void func_297(var uParam0)
{
}

void func_298()
{
	struct<30> Var0;

	Var0 = { func_230(func_299()) };
	if (!Var0)
	{
		return;
	}
}

int func_299()
{
	return Global_1072759.f_23.f_1;
}

void func_300(int iParam0)
{
	Global_1072759.f_23.f_1 = iParam0;
}

void func_301()
{
	if (func_572() == -1)
	{
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_1072759.f_23.f_2.f_2) > (Global_1901671.f_2.f_25 / 2))
	{
		func_573();
		return;
	}
}

bool func_302()
{
	return func_61(Global_1572887.f_8, 1);
}

void func_303()
{
	func_575(1);
	func_575(2);
	func_575(4);
	func_575(8);
	func_575(16);
	func_575(256);
	func_575(512);
	func_575(1024);
	func_575(4096);
	func_575(8192);
}

void func_304()
{
	func_575(1);
	func_575(2);
	func_575(4);
	func_575(8);
	func_575(16);
	func_575(64);
	func_575(128);
	func_575(256);
	func_575(512);
	func_575(1024);
	func_575(4096);
}

void func_305()
{
	func_575(1);
	func_575(2);
	func_575(8);
	func_575(16);
	func_575(64);
	func_575(128);
	func_575(256);
	func_575(512);
	func_575(1024);
	func_575(2048);
	func_575(4096);
	func_575(8192);
}

void func_306()
{
	func_576(1);
	func_576(2);
	func_576(4);
	func_576(8);
	func_576(16);
	func_576(32);
	func_576(64);
	func_576(128);
	func_576(256);
	func_576(512);
	func_576(1024);
	func_576(2048);
	func_576(4096);
	func_576(8192);
}

void func_307()
{
	int iVar0;

	if (Global_1901671.f_45.f_1 == 0)
	{
		return;
	}
	if (Global_1901671.f_45 == 0)
	{
		return;
	}
	iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901671.f_45.f_1);
	if (iVar0 < func_577(1))
	{
		func_578(1, 1022);
	}
	else if (iVar0 < func_577(2))
	{
		func_578(2, 1020);
	}
	else if (iVar0 < func_577(4))
	{
		func_578(4, 1016);
	}
	else if (iVar0 < func_577(8))
	{
		func_578(8, 1008);
	}
	else if (iVar0 < func_577(16))
	{
		func_578(16, 992);
	}
	else if (iVar0 < func_577(32))
	{
		func_578(32, 960);
	}
	else if (iVar0 < func_577(64))
	{
		func_578(64, 896);
	}
	else if (iVar0 < func_577(128))
	{
		func_578(128, 768);
	}
	else if (iVar0 < func_577(256))
	{
		func_578(256, 512);
	}
	else if (iVar0 < func_577(512))
	{
		func_578(512, 512);
	}
}

void func_308()
{
	func_64();
}

void func_309()
{
	if (!func_579(1, Global_1295619))
	{
		return;
	}
	if (func_579(2, 255))
	{
		func_580(8);
		func_212(3);
	}
	else
	{
		func_212(2);
	}
}

void func_310()
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295158.f_2), Global_1295619))
	{
		func_211(&(Global_1295252.f_25), 1, 1);
		func_211(&(Global_1295252.f_26), 1, 1);
		func_212(3);
		return;
	}
	if (!func_579(1, Global_1295619))
	{
		func_212(0);
		return;
	}
	if (func_579(8, 255))
	{
		func_211(&(Global_1295252.f_25), 1, 1);
		if (!func_475(Global_1295252.f_26))
		{
			Global_1295252.f_26 = func_581("STORY_COOP_TRANSITION_CANCEL", 0.00251415f, 2, 0, 1, 4, 570, 4000, 10, 2f, 8.750548E+22f, 0);
		}
		if (func_582(Global_1295252.f_26, 1))
		{
			func_583(8);
		}
		return;
	}
	func_211(&(Global_1295252.f_26), 1, 1);
	if (!func_584(Global_1295619))
	{
		return;
	}
	if (!func_475(Global_1295252.f_25))
	{
		Global_1295252.f_25 = func_581("STORY_COOP_TRANSITION_CONFIRM", -7.068217E+21f, 2, 0, 1, 4, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	}
	if (func_582(Global_1295252.f_25, 1))
	{
		func_580(8);
	}
}

void func_311()
{
	int iVar0;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295158.f_2), Global_1295619))
	{
		if (!func_579(1, Global_1295619))
		{
			func_212(0);
			return;
		}
		return;
	}
	Global_1295252.f_28 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1295158.f_22)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295158.f_3[iVar0 /*6*/].f_2), Global_1295619))
		{
			Global_1295252.f_28 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (Global_1295252.f_28 == -1)
	{
		return;
	}
	func_212(4);
}

void func_312()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(2000);
		}
		return;
	}
	func_580(16);
	func_585(0);
	func_212(5);
}

void func_313()
{
	if (Global_1295158.f_3[Global_1295252.f_28 /*6*/].f_1 >= 2)
	{
		func_212(6);
		return;
	}
	switch (Global_1295252.f_29)
	{
		case 0:
			if (Global_1295158.f_3[Global_1295252.f_28 /*6*/].f_3 != Global_1295619.f_5)
			{
				return;
			}
			if (Global_1295252.f_30 >= 15)
			{
				func_580(64);
				return;
			}
			if (!NETWORK::NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION(&(Global_1295158.f_3[Global_1295252.f_28 /*6*/].f_2)))
			{
				return;
			}
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
			if (!NETWORK::NETWORK_AUTO_SESSION_SPLIT_SESSION(1, 32, 0, -1))
			{
				return;
			}
			func_585(1);
			break;
		case 1:
			if (NETWORK::_NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT())
			{
				return;
			}
			if (!NETWORK::_NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL())
			{
				Global_1295252.f_30++;
				func_585(0);
				return;
			}
			if (!NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION())
			{
				Global_1295252.f_30++;
				func_585(0);
				return;
			}
			if (!NETWORK::_0x0B6B4507AC5EA8B8())
			{
				if (!NETWORK::NETWORK_IS_RESETTING_POPULATION())
				{
					NETWORK::NETWORK_RESET_POPULATION(false, 0);
				}
			}
			func_585(2);
			break;
		case 2:
			func_580(32);
			break;
	}
}

void func_314()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295158.f_2), iVar0))
	{
		func_64();
		return;
	}
	func_580(128);
}

bool func_315()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
	{
		ENTITY::SET_ENTITY_COORDS(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3348, false, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3354, 2, false);
		ENTITY::SET_ENTITY_VISIBLE(Global_1102813.f_26.f_3344, false);
		ENTITY::SET_ENTITY_COLLISION(Global_1102813.f_26.f_3344, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1102813.f_26.f_3344, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_1102813.f_26.f_3344, true);
		ENTITY::FREEZE_ENTITY_POSITION(Global_1102813.f_26.f_3344, true);
		NETWORK::SET_NETWORK_ID_STOP_CLONING(NETWORK::PED_TO_NET(Global_1102813.f_26.f_3344), true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 301, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 277, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 417, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 394, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1102813.f_26.f_3344, true);
		TASK::TASK_PLAY_ANIM(Global_1102813.f_26.f_3344, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
		Global_1102813.f_26.f_3357 = { Global_1102813.f_26.f_3354 };
		return true;
	}
	STREAMING::REQUEST_MODEL(-8.696768E+07f, false);
	if (!STREAMING::HAS_MODEL_LOADED(-8.696768E+07f))
	{
		return false;
	}
	STREAMING::REQUEST_ANIM_DICT("CREATURES_BIRD@OWL@NORMAL@DEAD");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_BIRD@OWL@NORMAL@DEAD"))
	{
		return false;
	}
	if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS((1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false)));
	}
	else
	{
		return false;
	}
	PED::_0xC6136B40FFFB778B(true);
	Global_1102813.f_26.f_3344 = PED::CREATE_PED(-8.696768E+07f, Global_1102813.f_26.f_3348, 0f, true, false, true, false);
	ENTITY::SET_ENTITY_COORDS(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3348, false, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3354, 2, false);
	ENTITY::SET_ENTITY_VISIBLE(Global_1102813.f_26.f_3344, false);
	ENTITY::SET_ENTITY_COLLISION(Global_1102813.f_26.f_3344, false, false);
	ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1102813.f_26.f_3344, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_1102813.f_26.f_3344, true);
	ENTITY::FREEZE_ENTITY_POSITION(Global_1102813.f_26.f_3344, true);
	NETWORK::SET_NETWORK_ID_STOP_CLONING(NETWORK::PED_TO_NET(Global_1102813.f_26.f_3344), true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 301, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 277, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 417, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 394, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 253, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1102813.f_26.f_3344, true);
	TASK::TASK_PLAY_ANIM(Global_1102813.f_26.f_3344, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
	Global_1102813.f_26.f_3357 = { Global_1102813.f_26.f_3354 };
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-8.696768E+07f);
	PED::_0xC6136B40FFFB778B(false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_1102813.f_26.f_3344, "Hide_and_Mute_Entity_group", 0f);
	AUDIO::START_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	return true;
}

bool func_316()
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
	if (func_586(2048))
	{
		return true;
	}
	if (func_587(1))
	{
		return true;
	}
	if (Global_1102813.f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

void func_317()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
	{
		return;
	}
	AUDIO::STOP_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	PED::DELETE_PED(&(Global_1102813.f_26.f_3344));
	Global_1102813.f_26.f_3345 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-8.696768E+07f);
}

char* func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "scr_de_slippery_haze_head";
		case 1:
			return "scr_de_slippery_haze_torso";
		case 2:
			return "scr_de_slippery_haze_limb";
		case 3:
			return "scr_de_recuperate_wisps";
		case 4:
			return "scr_de_steady_smoke_torso";
		default:
			break;
	}
	return "";
}

void func_319()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!CAM::IS_SCREEN_FADED_IN() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	func_588();
	func_589();
	if (func_590() != 0)
	{
		if (!func_592(func_591()))
		{
			iVar3 = func_593(func_590());
			if (func_594() < iVar3)
			{
				if (!func_595())
				{
					func_597(func_596());
					return;
				}
			}
			else
			{
				func_598(func_590());
				func_599();
				func_600(0);
			}
		}
		else
		{
			func_600(func_594() + 1);
			func_597(0);
			func_601();
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 0)
		{
			if (func_602(iVar1) == 0)
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 31)
				{
					iVar0 = func_603((iVar1 * 32 + iVar2), 1);
					if (!func_604(iVar0))
					{
					}
					else
					{
						func_605(iVar0);
					}
					else
					{
						iVar2++;
					}
				}
				if (func_590() != 0)
				{
				}
				else
				{
					iVar1++;
				}
			}
		}
	}
}

int func_320()
{
	return Global_1296343;
}

bool func_321()
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[29 /*4*/].f_3))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[29 /*4*/].f_3))
	{
		return false;
	}
	return true;
}

bool func_322()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	struct<6> Var9;

	Var9 = -1;
	Var9.f_1 = -1;
	Var9.f_2 = -1;
	Var9.f_4 = -1;
	Var9.f_5 = -1;
	iVar1 = func_606();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var9.f_3 = 1;
		Var9 = iVar0;
		iVar4 = func_607(&Var9);
		iVar3 = func_608(iVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			Var5 = { func_609(iVar0, iVar2) };
			func_610(&Var5, iVar4);
			iVar2++;
		}
		iVar0++;
	}
	return true;
}

void func_323(int iParam0)
{
	Global_1296343 = iParam0;
}

bool func_324()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_611(iVar0, &uVar1);
		if (func_612(&uVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_325()
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
	bool bVar9;
	bool bVar10;

	iVar1 = func_606();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = iVar0;
		iVar3 = func_613(iVar6);
		bVar10 = false;
		if (func_614(iVar6) > 0)
		{
			if (func_615(iVar6, -4.142373E-07f))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= (iVar3 - 1))
				{
					iVar7 = iVar2;
					iVar5 = func_616(iVar6, iVar7);
					bVar9 = false;
					iVar4 = 0;
					while (iVar4 <= (iVar5 - 1))
					{
						iVar8 = iVar4;
						if (!func_617(iVar6, iVar7, iVar8, 3))
						{
						}
						else
						{
							func_618(iVar6, iVar7, iVar4);
							bVar9 = true;
						}
						else
						{
							iVar4++;
						}
					}
					if (iVar5 <= 0)
					{
						func_618(iVar6, iVar7, -1);
					}
					else if (!bVar9)
					{
						func_618(iVar6, iVar7, 15);
					}
					if ((iVar4 == 0 && bVar9) && !bVar10)
					{
						func_619(iVar6, iVar2);
						bVar10 = true;
					}
					iVar2++;
				}
				if (iVar3 <= 0)
				{
					func_619(iVar6, -1);
				}
				else if (!bVar10)
				{
					func_619(iVar6, 15);
				}
			}
			iVar0++;
		}
	}
}

void func_326()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	bool bVar10;
	int iVar11;

	iVar1 = func_606();
	func_620(iVar1);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = iVar0;
		iVar3 = func_613(iVar6);
		func_621(iVar6, iVar3);
		uVar4 = func_622(iVar6);
		func_623(iVar6, uVar4);
		Var8 = { func_624(iVar6, -9.257147E-31f) };
		func_625(iVar6, Var8);
		bVar10 = func_626(iVar6);
		func_627(iVar6, bVar10);
		iVar11 = func_628(iVar6, 0);
		func_629(iVar6, iVar11);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar7 = iVar2;
			iVar5 = func_630(iVar6, iVar7);
			func_631(iVar6, iVar7, iVar5);
			iVar2++;
		}
		iVar0++;
	}
}

void func_327()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (func_632() - 1))
	{
		iVar1 = (iVar1 + func_633(iVar0));
		iVar0++;
	}
	func_634();
	func_328(iVar1);
}

void func_328(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	int iVar16;

	iVar9 = PLAYER::PLAYER_ID();
	iVar11 = GANG::NETWORK_GET_GANG_ID(iVar9);
	iVar10 = GANG::NETWORK_GET_GANG_LEADER(iVar11);
	iVar1 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar11);
	bVar8 = ((iVar9 == iVar10 && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar9)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9));
	iVar5 = Global_1295619.f_16;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		iVar6 = func_635();
		if (!func_636(iVar6))
		{
		}
		else
		{
			iVar7 = func_637();
			iVar2 = func_638(iVar6, iVar7);
			iVar3 = func_639(iVar6);
			Var14 = { func_640(iVar6) };
			STATS::STAT_ID_GET_INT(&Var14, &iVar4);
			if (func_636(iVar6))
			{
				if (MISSIONDATA::MISSIONDATA_IS_VALID(iVar2))
				{
					iVar12 = MISSIONDATA::MISSIONDATA_GET_REPLAY_STATE(iVar2);
					iVar13 = func_641(iVar6);
					iVar16 = func_642(iVar6);
					if ((func_343() || Global_1048577) || Global_1048584)
					{
						if (iVar12 != 2)
						{
							MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(iVar2, 2);
						}
					}
					else if (bVar8)
					{
						if (iVar1 <= 4)
						{
							if (iVar4 == 0 || (iVar4 + iVar3) <= iVar5)
							{
								if (iVar13 == 15)
								{
									if (iVar12 != 0)
									{
										MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(iVar2, 0);
									}
								}
								else if (iVar13 > iVar7)
								{
									if (iVar12 != 0)
									{
										MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(iVar2, 0);
									}
								}
								else if (iVar12 != 3)
								{
									MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(iVar2, 3);
								}
							}
							else if (iVar12 != 1)
							{
								MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(iVar2, 1);
							}
						}
						else if (iVar12 != 2)
						{
							MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(iVar2, 2);
						}
					}
					else if (iVar12 != 6)
					{
						MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(iVar2, 6);
					}
				}
				if (iVar13 == 15)
				{
					if (MISSIONDATA::_MISSIONDATA_IS_REPLAY_CATEGORY_LOCKED(iVar16))
					{
						MISSIONDATA::MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(iVar16, false);
					}
				}
				else if (!MISSIONDATA::_MISSIONDATA_IS_REPLAY_CATEGORY_LOCKED(iVar16))
				{
					MISSIONDATA::MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(iVar16, true);
				}
			}
			else
			{
				iVar7 = (func_633(iVar6) - 1);
			}
			iVar7 = (iVar7 + 1 % func_633(iVar6));
			func_643(iVar7);
			if (iVar7 == 0)
			{
				iVar6 = (iVar6 + 1 % func_632());
				func_644(iVar6);
			}
		}
		iVar0++;
	}
}

var func_329()
{
	return Global_1296343.f_58;
}

bool func_330(int iParam0)
{
	if (Global_1048577)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
		case 13:
		case 14:
		case 15:
			return false;
		default:
			break;
	}
	return true;
}

void func_331(int iParam0)
{
	Global_1296343.f_58 = iParam0;
}

int func_332(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_9;
}

void func_333(int iParam0)
{
	Global_1296343.f_58.f_1 = iParam0;
}

bool func_334(int iParam0)
{
	struct<6> Var0;

	Var0 = { func_645(iParam0) };
	if (Var0.f_3 != 1)
	{
		return false;
	}
	return func_646(Var0, Var0.f_1) != 0;
}

void func_335(int iParam0)
{
	Global_1296343.f_58.f_1.f_2 = (Global_1296343.f_58.f_1.f_2 || iParam0);
}

var func_336()
{
	return Global_1296343.f_58.f_1;
}

int func_337(var uParam0)
{
	struct<2> Var0;
	int iVar10;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3.f_5 = -1;
	Var0.f_9 = -1;
	Var0.f_3 = { func_645(uParam0) };
	iVar10 = func_646(Var0.f_3, Var0.f_3.f_1);
	if (iVar10 == 0)
	{
		return 0;
	}
	Var0 = { func_647(iVar10, 7) };
	Var0.f_2 = MISC::GET_GAME_TIMER();
	if (!func_18(Var0))
	{
		return 0;
	}
	func_648(0, &Var0);
	return 1;
}

bool func_338(int iParam0)
{
	return (Global_1296343.f_58.f_1.f_1 && iParam0) != 0;
}

void func_339(int iParam0)
{
	Global_1296343.f_58.f_1.f_1 = (Global_1296343.f_58.f_1.f_1 - (Global_1296343.f_58.f_1.f_1 && iParam0));
}

int func_340(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1295619.f_5;
	}
	return Global_263042[iParam0 /*65*/];
}

void func_341(int iParam0)
{
	Global_1296343.f_58.f_1.f_1 = (Global_1296343.f_58.f_1.f_1 || iParam0);
}

void func_342()
{
	int iVar0;

	iVar0 = func_336();
	func_649(iVar0);
}

bool func_343()
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

struct<2> func_344(int iParam0)
{
	return Global_1296343.f_58.f_4[iParam0 /*10*/];
}

int func_345(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_78(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_346(int iParam0)
{
	return Global_1296343.f_58.f_4[iParam0 /*10*/].f_3;
}

struct<8> func_347(int iParam0)
{
	var uVar0;
	struct<8> Var5;

	if (!func_650(&uVar0))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 58, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 59, 0, 0, 1))
	{
		return Var5;
	}
	return func_652(&uVar0, 67, 1);
}

char* func_348(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_349(int iParam0)
{
	func_515(&(Global_1296343.f_50.f_3), func_653(iParam0, 1), 1);
}

void func_350(int iParam0)
{
	func_37(&(Global_1572887.f_72.f_16), iParam0);
}

int func_351(int iParam0)
{
	return Global_1296343.f_58.f_4[iParam0 /*10*/].f_3.f_1;
}

int func_352(int iParam0)
{
	return Global_1296343.f_58.f_4[iParam0 /*10*/].f_3.f_2;
}

struct<2> func_353(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<2> Var5;
	var uVar7;
	var uVar8;

	if (!func_650(&uVar0))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 23, iParam1, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 36, 0, 0, iParam3))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 37, iParam2, 0, iParam3))
	{
		return Var5;
	}
	uVar7 = func_654(&uVar0);
	uVar8 = func_655(&uVar0);
	return func_656(uVar7, uVar8);
}

void func_354(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1296343.f_50.f_5), bParam0, 3);
}

void func_355()
{
	struct<10> Var0;

	Var0 = { func_657(0) };
	if (func_658(1))
	{
		return;
	}
	Var0.f_2 = MISC::GET_GAME_TIMER();
	if (func_338(8))
	{
		Var0.f_9 = 0;
	}
	else
	{
		Var0.f_9 = 1;
	}
	func_659(0);
	func_648(1, &Var0);
}

void func_356()
{
	var uVar0;

	MISC::COPY_SCRIPT_STRUCT(&(Global_1296343.f_58.f_1), &uVar0, 3);
}

bool func_357()
{
	return Global_1901671.f_1 != -1;
}

bool func_358()
{
	if (NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING())
	{
		func_660();
		return false;
	}
	return true;
}

void func_359()
{
	Global_1572887.f_9 = 0;
	func_660();
}

int func_360()
{
	return func_661();
}

void func_361()
{
	func_663(func_662(1));
	func_664(Global_1107816.f_33[func_662(2) /*16*/].f_1, -1);
	if (NETWORK::NETWORK_IS_HOST())
	{
		func_665();
	}
	if (func_666())
	{
		func_667(&(Global_1107816.f_33.f_513), &(Global_1110244.f_10));
		func_668(func_662(0));
		func_669(func_662(3));
		func_670(func_662(0));
		func_671();
	}
	func_672();
	func_673();
	func_674();
	func_675();
	func_676();
	func_677();
	func_678();
	func_679();
	func_680();
	func_681();
	func_682();
	if (Global_1110244.f_15)
	{
		func_683();
		Global_1110244.f_15 = 0;
	}
	func_684();
}

bool func_362()
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
	if (!func_18(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_363()
{
	bool bVar0;

	Global_1072759.f_19585.f_24 = 1;
	if (Global_1072759.f_19585.f_25 != -1)
	{
		bVar0 = true;
	}
	Global_1072759.f_19585.f_25 = MISC::GET_FRAME_COUNT();
	if (!bVar0)
	{
		func_685();
	}
}

bool func_364(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_686(iParam0))
	{
		return true;
	}
	switch (Global_1072759.f_19585.f_23)
	{
		case 0:
			func_687(iParam0, &iVar0);
			break;
		case 1:
			func_688(iParam1, iParam0);
			break;
		case 2:
			Global_1072759.f_19585[iParam0] = func_689(Global_1072759.f_19585.f_19, Global_1072759.f_19585.f_20);
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_365()
{
	if (Global_1072759.f_19585.f_25 == MISC::GET_FRAME_COUNT())
	{
		return;
	}
	if (Global_1072759.f_19585.f_24)
	{
		Global_1072759.f_19585.f_24 = 0;
	}
	else if (Global_1072759.f_19585.f_25 != -1)
	{
		Global_1072759.f_19585.f_25 = -1;
		func_685();
	}
}

bool func_366(int iParam0)
{
	int iVar0;

	if (!func_690(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1292096.f_459.f_44[iVar0 /*30*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_367()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(Global_1295619.f_5);
	if (Global_1295619.f_10 != iVar0)
	{
		Global_1295619.f_10 = iVar0;
	}
	if (Global_1072759.f_28295 != Global_1295619.f_10)
	{
		Global_1072759.f_28295 = Global_1295619.f_10;
	}
}

bool func_368(int iParam0, int iParam1)
{
	if (!func_691(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam1))
	{
		return false;
	}
	return MISC::_IS_BIT_FLAG_SET(&(Global_1056554[iParam1 /*491*/].f_15.f_21), iParam0);
}

void func_369()
{
	Global_1960733 = 0;
}

void func_370(int iParam0)
{
	int iVar0;

	if (!func_691(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	if (func_368(iParam0, iVar0))
	{
		return;
	}
	MISC::_SET_BIT_FLAG(&(Global_1056554[iVar0 /*491*/].f_15.f_21), iParam0);
}

void func_371(int iParam0)
{
	int iVar0;

	if (!func_691(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	if (!func_368(iParam0, iVar0))
	{
		return;
	}
	MISC::_CLEAR_BIT_FLAG(&(Global_1056554[iVar0 /*491*/].f_15.f_21), iParam0);
}

int func_372(struct<2> Param0)
{
	int iVar0;

	if (!func_18(Param0))
	{
		return -1;
	}
	iVar0 = func_692(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

void func_373(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_693(iParam1))
	{
		iParam1 = func_695(func_694(iParam0));
		if (!func_693(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*72*/].f_28));
		Global_1835011[iParam0 /*72*/].f_66 = 0;
	}
	else if (bParam2 && !Global_26688)
	{
		func_696(iParam0, iParam5, iParam1);
	}
	if (func_697(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*72*/].f_13));
	}
	Var0 = { Global_1835011[iParam0 /*72*/].f_13 };
	if ((bParam3 && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*72*/].f_17, false))
	{
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1835011[iParam0 /*72*/].f_17);
	}
	if (bParam4)
	{
		func_698(Global_1835011[iParam0 /*72*/].f_1);
	}
	else
	{
		func_699(iParam1, 3831);
	}
	Global_1835011[iParam0 /*72*/].f_71 = 0;
}

int func_374(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900530 == 15)
	{
		return -1;
	}
	if (!func_700(Param0))
	{
		return -1;
	}
	iVar1 = func_695(Param0);
	if (iVar1 >= 0)
	{
		func_701(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = Global_1900530;
		Global_1900531[iVar0 /*2*/] = { Param0 };
		Global_1900562[iVar0 /*2*/] = { Var2 };
		func_701(Param0, 1);
		Global_1900530++;
		if (Global_1900530 > 15)
		{
			Global_1900530 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_375()
{
	int iVar0;
	int iVar1;

	iVar0 = func_702();
	if (iVar0 == 0)
	{
		func_703();
	}
	else
	{
		if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1) == iVar0)
		{
			return;
		}
		iVar1 = func_704();
		if (MAP::DOES_BLIP_EXIST(iVar1))
		{
			MAP::REMOVE_BLIP(&iVar1);
			func_705(0);
		}
		func_706(0);
	}
}

var func_376()
{
	return Global_1295802.f_492;
}

bool func_377(int iParam0)
{
	return (Global_1295802.f_492.f_1 && iParam0) != 0;
}

void func_378(int iParam0)
{
	Global_1295802.f_492 = iParam0;
}

void func_379(int iParam0)
{
	Global_1295802.f_492.f_1 = (Global_1295802.f_492.f_1 || iParam0);
}

bool func_380()
{
	return func_707() == PLAYER::PLAYER_ID();
}

bool func_381()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_389();
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_708() == 14)
	{
		return false;
	}
	if (func_417() == 6)
	{
		return false;
	}
	iVar1 = func_391();
	if (iVar1 == -1)
	{
		return false;
	}
	iVar2 = func_709(iVar0, iVar1);
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar2))
	{
		return false;
	}
	if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar2))
	{
		return false;
	}
	iVar3 = func_711(func_710(iVar0, iVar1));
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar3))
	{
		return false;
	}
	if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar3))
	{
		return false;
	}
	return true;
}

void func_382(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (func_707() != iVar0)
	{
		return;
	}
	Global_1056554[PLAYER::PLAYER_ID() /*491*/].f_436 = (Global_1056554[PLAYER::PLAYER_ID() /*491*/].f_436 || iParam0);
}

void func_383()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	func_712(func_389());
	func_713(func_708());
	func_714(func_417());
	func_715(func_391());
}

void func_384()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	func_717(func_716(iVar0));
	func_719(func_718(iVar0));
	func_721(func_720(iVar0));
	func_723(func_722(iVar0));
}

bool func_385(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	return (Global_1056554[iParam0 /*491*/].f_436.f_1 && iParam1) != 0;
}

bool func_386()
{
	int iVar0;

	if (!BOUNTY::BOUNTY_GET_COOLDOWN_COLLECTION(&iVar0))
	{
		return true;
	}
	return Global_1295619.f_16 < iVar0;
}

void func_387(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_724(1);
		Global_1072759.f_28644.f_8 = iParam1;
	}
	else
	{
		func_724(2);
		if (bParam2)
		{
			func_724(4);
		}
		else
		{
			func_725(4);
		}
		if (bParam3)
		{
			func_724(256);
		}
		else
		{
			func_725(256);
		}
	}
}

void func_388(int iParam0)
{
	func_726(0, 0, iParam0, 129, -1, 0, -1);
}

int func_389()
{
	return Global_1295802.f_492.f_2;
}

var func_390(int iParam0)
{
	return Global_1295802[iParam0 /*37*/].f_8;
}

int func_391()
{
	return Global_1295802.f_492.f_5;
}

int func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_393(int iParam0)
{
	Global_1295802.f_492.f_10 = iParam0;
}

void func_394()
{
	var uVar0;

	func_409(1.084202E-19f);
	func_409(2f);
	func_409(2.524355E-29f);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1295802.f_492.f_6), &uVar0, 4);
}

bool func_395(int iParam0)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	return (Global_1056554[iVar0 /*491*/].f_436 && iParam0) != 0;
}

bool func_396()
{
	return Global_1295802.f_492.f_29;
}

int func_397()
{
	if (func_60() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_398(int iParam0)
{
	Global_1295802.f_492.f_14 = iParam0;
}

struct<4> func_399(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_504(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_503(2.982335E+09f, func_727(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_503(2.982335E+09f, func_727(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_503(2.982335E+09f, func_727(), -5.45926E-19f, bParam0);
}

int func_400(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_728(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_729(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_503(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_504(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_504(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

void func_401(int iParam0)
{
	Global_1295802.f_492.f_15 = iParam0;
}

int func_402(int iParam0)
{
	int iVar0;

	if (!func_730(iParam0))
	{
		return 0;
	}
	iVar0 = func_731(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_732(iParam0, 0);
	}
	return 0;
}

void func_403(int iParam0)
{
	Global_1295802.f_492.f_12 = iParam0;
}

void func_404(int iParam0)
{
	Global_1295802.f_492.f_13 = iParam0;
}

void func_405()
{
	Global_1913431 = 1;
}

void func_406()
{
	struct<2> Var0;

	Var0.f_1 = 11;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1295802.f_492.f_16), &Var0, 13);
}

bool func_407()
{
	return !Global_1913431;
}

void func_408()
{
	Global_1913431 = 0;
}

void func_409(float fParam0)
{
	Global_1295802.f_492.f_1 = (Global_1295802.f_492.f_1 - (Global_1295802.f_492.f_1 && fParam0));
}

int func_410()
{
	return Global_1295802.f_492.f_14;
}

int func_411(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	int iVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = fParam4;
	Var13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&Var0, &Var13, bParam8);
	func_733(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_412()
{
	return Global_1295802.f_492.f_15;
}

int func_413(int iParam0)
{
	return (iParam0 / 100);
}

int func_414(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return ((iParam0 % 100) / 1);
	}
	return (iParam0 / 1);
}

int func_415()
{
	return Global_1295802.f_492.f_12;
}

int func_416()
{
	return Global_1295802.f_492.f_13;
}

int func_417()
{
	return Global_1295802.f_492.f_4;
}

void func_418(int iParam0)
{
	Global_1295802.f_537 = (Global_1295802.f_537 || iParam0);
}

void func_419()
{
	int iVar0;
	int iVar1;

	if (func_707() == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	iVar1 = func_391();
	if (iVar1 == -1)
	{
		return;
	}
	func_734(iVar0, iVar1, func_389());
	func_735(iVar0, iVar1, MISC::GET_GAME_TIMER());
	func_736(iVar0, iVar1, func_417());
}

void func_420()
{
	struct<17> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = 14;
	Var0.f_4 = 6;
	Var0.f_5 = -1;
	Var0.f_16.f_1 = 11;
	Var0 = func_376();
	MISC::COPY_SCRIPT_STRUCT(&(Global_1295802.f_492), &Var0, 30);
}

void func_421()
{
	struct<6> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = 14;
	Var0.f_4 = 6;
	Var0.f_5 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1056554[PLAYER::PLAYER_ID() /*491*/].f_436), &Var0, 7);
}

void func_422()
{
	int iVar0;
	int iVar1;

	iVar0 = func_737();
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = func_738(iVar0);
	if (func_739())
	{
		return;
	}
	func_740(Global_265213.f_107995.f_14228[iVar1], 0, 255, 0, 0);
}

void func_423(int iParam0)
{
	Global_1940239.f_11600 = iParam0;
}

void func_424(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_738(func_737());
	iVar1 = 0;
	while (iVar1 < 31)
	{
		if (Global_265213.f_107995.f_1028[iVar0 /*194*/][iVar1 /*6*/] == Global_265213.f_122484.f_80.f_12)
		{
		}
		else
		{
			iVar1++;
		}
	}
	switch (iParam0)
	{
		case 0:
			func_740(Global_265213.f_107995.f_1028[iVar0 /*194*/][iVar1 /*6*/].f_3, 0, 255, 0, 0);
			break;
		case 1:
			func_740(Global_265213.f_107995.f_1028[iVar0 /*194*/][iVar1 /*6*/].f_4, 0, 255, 0, 0);
			break;
	}
}

void func_425()
{
	func_423(3);
}

void func_426()
{
	Global_1207324.f_1 = 0;
	if (Global_1295619.f_17[0])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[0 /*12*/]);
	}
	if (Global_1295619.f_17[1])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[1 /*12*/]);
	}
	if (Global_1295619.f_17[2])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[2 /*12*/]);
	}
	if (Global_1295619.f_17[3])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[3 /*12*/]);
	}
	if (Global_1295619.f_17[4])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[4 /*12*/]);
	}
	if (Global_1295619.f_17[5])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[5 /*12*/]);
	}
	if (Global_1295619.f_17[6])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[6 /*12*/]);
	}
	if (Global_1295619.f_17[7])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[7 /*12*/]);
	}
	if (Global_1295619.f_17[8])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[8 /*12*/]);
	}
	if (Global_1295619.f_17[9])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[9 /*12*/]);
	}
	if (Global_1295619.f_17[10])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[10 /*12*/]);
	}
	if (Global_1295619.f_17[11])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[11 /*12*/]);
	}
	if (Global_1295619.f_17[12])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[12 /*12*/]);
	}
	if (Global_1295619.f_17[13])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[13 /*12*/]);
	}
	if (Global_1295619.f_17[14])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[14 /*12*/]);
	}
	if (Global_1295619.f_17[15])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[15 /*12*/]);
	}
	if (Global_1295619.f_17[16])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[16 /*12*/]);
	}
	if (Global_1295619.f_17[17])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[17 /*12*/]);
	}
	if (Global_1295619.f_17[18])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[18 /*12*/]);
	}
	if (Global_1295619.f_17[19])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[19 /*12*/]);
	}
	if (Global_1295619.f_17[20])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[20 /*12*/]);
	}
	if (Global_1295619.f_17[21])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[21 /*12*/]);
	}
	if (Global_1295619.f_17[22])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[22 /*12*/]);
	}
	if (Global_1295619.f_17[23])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[23 /*12*/]);
	}
	if (Global_1295619.f_17[24])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[24 /*12*/]);
	}
	if (Global_1295619.f_17[25])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[25 /*12*/]);
	}
	if (Global_1295619.f_17[26])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[26 /*12*/]);
	}
	if (Global_1295619.f_17[27])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[27 /*12*/]);
	}
	if (Global_1295619.f_17[28])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[28 /*12*/]);
	}
	if (Global_1295619.f_17[29])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[29 /*12*/]);
	}
	if (Global_1295619.f_17[30])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[30 /*12*/]);
	}
	if (Global_1295619.f_17[31])
	{
		Global_1207324.f_1 = (Global_1207324.f_1 || Global_1206939[31 /*12*/]);
	}
	if (!Global_1207324)
	{
		if (func_741(8192))
		{
			POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
		}
		else
		{
			POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
		}
		Global_1207324 = 1;
	}
}

var func_427()
{
	return Global_1300340.f_155;
}

int func_428(int iParam0)
{
	return Global_1300340.f_155.f_4[iParam0 /*4*/];
}

void func_429()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = func_427();
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	if (!func_742(iVar1, 2))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	fVar4 = func_743(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), ENTITY::GET_ENTITY_COORDS(iVar3, true, false));
	if (fVar4 > func_744())
	{
		func_745(iVar0, 2);
	}
	else
	{
		func_746(iVar0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		func_745(iVar0, 1);
	}
}

void func_430()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = func_427();
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		return;
	}
	if (!func_742(iVar1, 2))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		return;
	}
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	fVar4 = func_743(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), ENTITY::GET_ENTITY_COORDS(iVar3, true, false));
	if (fVar4 > func_744())
	{
		return;
	}
	func_746(iVar0, NETWORK::GET_NETWORK_TIME_ACCURATE());
	func_745(iVar0, 1);
}

void func_431()
{
	int iVar0;
	int iVar1;

	iVar0 = func_427();
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		return;
	}
	if (!func_742(iVar1, 2))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		return;
	}
}

void func_432(int iParam0)
{
	Global_1300340.f_155 = iParam0;
}

void func_433()
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
	float fVar12;
	float fVar13;

	iVar0 = func_427();
	iVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar6))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		func_748(iVar6);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		func_748(iVar6);
		return;
	}
	if (!func_742(iVar6, 2))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		func_748(iVar6);
		return;
	}
	iVar8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar7 = func_749(iVar6);
	iVar9 = func_750(iVar0);
	iVar2 = NETWORK::GET_TIME_DIFFERENCE(iVar7, iVar8);
	iVar3 = NETWORK::GET_TIME_DIFFERENCE(iVar9, iVar8);
	iVar4 = NETWORK::GET_TIME_DIFFERENCE(iVar7, iVar9);
	iVar10 = PLAYER::GET_PLAYER_PED(iVar6);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		func_747(iVar0);
		func_745(iVar0, 0);
		func_748(iVar6);
		return;
	}
	iVar11 = ENTITY::GET_ENTITY_MODEL(iVar10);
	if (iVar11 != -4.902749E+32f && iVar11 != -4.860776E-15f)
	{
		iVar5 = func_752((func_751() - iVar4), 1, func_751());
		fVar12 = (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar5));
		fVar13 = func_753(fVar12, 0f, 1f);
		iVar1 = BUILTIN::FLOOR(func_754(1111490560 /* Float: 48f */, 1132396544 /* Float: 255f */, (1f - fVar13)));
		ENTITY::SET_ENTITY_ALPHA(iVar10, iVar1, false);
		func_755(iVar6, iVar1);
		func_756(iVar6);
	}
	NETWORK::NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES(iVar10, false);
	if (iVar2 > func_751())
	{
		func_745(iVar0, 3);
		func_748(iVar6);
	}
}

void func_434(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == Global_1295619)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_435(iParam0);
		return;
	}
	iVar1 = Global_1220746[iParam0 /*2*/];
	iVar2 = Global_1220746[iParam0 /*2*/].f_1;
	if (iVar1 == -1 || iVar2 == -1)
	{
		func_435(iParam0);
		return;
	}
	if (iVar1 == Global_1220746[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] && iVar2 == Global_1220746[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1)
	{
		func_435(iParam0);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1220811.f_48[iVar1 /*21*/][iVar2 /*4*/]))
	{
		func_435(iParam0);
		return;
	}
	if (BUILTIN::VDIST(Global_34, Global_1220811.f_48[iVar1 /*21*/][iVar2 /*4*/].f_1) > 1120403456)
	{
		func_435(iParam0);
		return;
	}
	func_757(iParam0, iVar1, iVar2);
}

void func_435(int iParam0)
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1220811.f_1099[iParam0 /*3*/]))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1220811.f_1099[iParam0 /*3*/], false);
	}
}

void func_436()
{
	Global_1102813.f_26.f_3348 = { 0f, 0f, 0f };
	Global_1102813.f_26.f_3354 = { 0f, 0f, 0f };
	Global_1102813.f_26.f_3347 = 1;
}

void func_437(int iParam0, int iParam1)
{
	if (func_758(iParam1, iParam0))
	{
		if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Global_1295158.f_23[iParam0 /*3*/])))
		{
			Global_1295158.f_23[iParam0 /*3*/].f_1 = Global_1295252;
			Global_1295158.f_23[iParam0 /*3*/].f_2 = 4000;
		}
		else if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295158.f_23[iParam0 /*3*/]), iParam1))
		{
			Global_1295158.f_23[iParam0 /*3*/].f_1 = Global_1295252;
			Global_1295158.f_23[iParam0 /*3*/].f_2 += 2000;
			if (Global_1295158.f_23[iParam0 /*3*/].f_2 > 5000)
			{
				Global_1295158.f_23[iParam0 /*3*/].f_2 = 5000;
			}
		}
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1295158.f_23[iParam0 /*3*/]), iParam1);
	}
	else
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1295158.f_23[iParam0 /*3*/]), iParam1);
	}
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Global_1295158.f_23[iParam0 /*3*/])))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_1295158.f_23[iParam0 /*3*/].f_1, Global_1295252)) < Global_1295158.f_23[iParam0 /*3*/].f_2)
			{
				return;
			}
			break;
	}
	if (!func_759(Global_1295158.f_23[iParam0 /*3*/], iParam0))
	{
		return;
	}
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1295158.f_23[iParam0 /*3*/]));
}

void func_438(var uParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1295252.f_34);
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(uParam0->f_2)))
	{
		func_760(uParam0, 2);
		return;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_2), Global_1295252.f_34))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_761(uParam0, iVar0, Global_1295252.f_34);
		}
		else if (func_579(16, Global_1295252.f_34))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(uParam0->f_4), Global_1295252.f_34);
		}
	}
	if (SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_4)) < SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_2)))
	{
		return;
	}
	func_760(uParam0, 1);
}

void func_439(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(uParam0->f_3))
	{
		uParam0->f_3 = 255;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_2), iVar0))
			{
			}
			else
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1))
				{
					func_761(uParam0, iVar1, iVar0);
				}
				else if (func_579(64, iVar0))
				{
				}
				else
				{
					uParam0->f_3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
				else
				{
					iVar0++;
				}
				if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_3))
				{
					func_760(uParam0, 2);
				}
				return;
				iVar2 = uParam0->f_3;
				if (func_579(64, iVar2))
				{
					uParam0->f_3 = 255;
					return;
				}
				if (!func_579(32, iVar2))
				{
					return;
				}
				func_760(uParam0, 2);
			}
		}
	}
}

void func_440(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1295252.f_34);
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_2), Global_1295252.f_34))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_761(uParam0, iVar0, Global_1295252.f_34);
		}
		else if (func_579(128, Global_1295252.f_34))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(uParam0->f_5), Global_1295252.f_34);
		}
	}
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(uParam0->f_2)))
	{
		if (SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_5)) < SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_2)))
		{
			return;
		}
	}
	func_762(iParam1);
}

void func_441(int iParam0)
{
	Global_1893611 = (Global_1893611 || iParam0);
}

void func_442(var uParam0)
{
	struct<491> Var0;
	int iVar491;

	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_5 = 255;
	Var0.f_11 = 3;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = 10;
	Var0.f_15.f_13 = 7;
	Var0.f_15.f_21 = 2;
	Var0.f_42.f_1 = 10;
	Var0.f_42.f_1.f_1.f_1 = -1;
	Var0.f_42.f_1.f_1.f_2 = -1;
	Var0.f_42.f_1.f_1.f_3 = 7;
	Var0.f_42.f_1.f_1.f_11 = 2;
	Var0.f_42.f_1.f_1.f_16.f_1 = -1;
	Var0.f_42.f_1.f_1.f_16.f_2 = -1;
	Var0.f_42.f_1.f_1.f_16.f_3 = 7;
	Var0.f_42.f_1.f_1.f_16.f_11 = 2;
	Var0.f_42.f_1.f_1.f_16.f_16.f_1 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_2 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_3 = 7;
	Var0.f_42.f_1.f_1.f_16.f_16.f_11 = 2;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_204.f_1 = -1;
	Var0.f_204.f_2 = -1;
	Var0.f_204.f_3 = -1;
	Var0.f_204.f_3.f_1 = -1;
	Var0.f_204.f_11 = 4;
	Var0.f_204.f_36 = 32;
	Var0.f_204.f_36.f_193 = NaNf;
	Var0.f_436.f_2 = -1;
	Var0.f_436.f_3 = 14;
	Var0.f_436.f_4 = 6;
	Var0.f_436.f_5 = -1;
	Var0.f_443 = 18;
	Var0.f_443.f_19 = 18;
	Var0.f_486 = 4;
	iVar491 = 0;
	while (iVar491 < 7)
	{
		Var0.f_15.f_13[iVar491] = 255;
		iVar491++;
	}
	*uParam0 = { Var0 };
	func_763(&(uParam0->f_15));
	func_764(&(uParam0->f_42));
}

void func_443(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_765(uParam0[iVar0 /*38*/]);
		iVar0++;
	}
}

void func_444(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_766(uParam0[iVar0 /*30*/]);
		iVar0++;
	}
}

void func_445(var uParam0)
{
	struct<33> Var0;
	int iVar33;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	*uParam0 = { Var0 };
	iVar33 = 0;
	while (iVar33 < 10)
	{
		uParam0->f_11[iVar33] = 0;
		(*uParam0)[iVar33] = 0;
		uParam0->f_22[iVar33] = 255;
		iVar33++;
	}
}

void func_446(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_767(uParam0[iVar0 /*6*/]);
		iVar0++;
	}
}

void func_447(var uParam0)
{
	struct<12> Var0;
	int iVar12;

	Var0.f_1 = 1;
	Var0.f_2.f_1 = 1;
	Var0.f_4 = 7;
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 <= 31)
	{
		*(uParam0[iVar12 /*12*/]) = { Var0 };
		iVar12++;
	}
}

void func_448(var uParam0)
{
	struct<181> Var0;

	Var0 = 180;
	*uParam0 = { Var0 };
}

void func_449(var uParam0)
{
	struct<2> Var0;
	int iVar2;

	Var0 = -1;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		*(uParam0[iVar2 /*2*/]) = { Var0 };
		iVar2++;
	}
}

void func_450(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_768(uParam0[iVar0]);
		iVar0++;
	}
}

void func_451(var uParam0)
{
	struct<717> Var0;

	Var0 = 32;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3 = -1;
	Var0.f_1.f_3.f_5 = -1;
	Var0.f_1.f_3.f_5.f_1 = -1;
	Var0.f_1.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_1 = -1;
	Var0.f_1.f_16.f_2 = -1;
	Var0.f_1.f_16.f_3 = -1;
	Var0.f_1.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_513.f_2 = 5;
	Var0.f_513.f_3 = 5;
	Var0.f_513.f_3.f_1 = -1;
	Var0.f_513.f_3.f_1.f_1 = -1;
	Var0.f_513.f_3.f_1.f_2 = -1;
	Var0.f_513.f_3.f_1.f_3 = 255;
	Var0.f_513.f_3.f_1.f_4 = -1;
	Var0.f_513.f_3.f_1.f_5 = -1;
	Var0.f_513.f_3.f_1.f_6 = -1;
	Var0.f_513.f_3.f_1.f_8 = 2;
	Var0.f_513.f_3.f_1.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_513.f_3.f_1.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_513.f_3.f_1.f_40.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	*uParam0 = { Var0 };
}

void func_452(var uParam0)
{
	struct<2> Var0;

	*uParam0 = { Var0 };
}

void func_453(var uParam0)
{
	struct<56> Var0;

	Var0 = -1;
	Var0.f_1 = 32;
	Var0.f_35 = 2;
	Var0.f_38 = 3;
	Var0.f_43 = 2;
	Var0.f_49 = 3;
	*uParam0 = { Var0 };
}

void func_454(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_453(uParam0[iVar0 /*56*/]);
		iVar0++;
	}
}

void func_455(var uParam0)
{
	struct<8> Var0;

	Var0 = 2;
	Var0.f_3 = 4;
	*uParam0 = { Var0 };
}

void func_456(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_455(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_457(int iParam0)
{
	Global_1107816.f_750 = iParam0;
}

void func_458()
{
	Global_1107816.f_750.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_459()
{
	Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_49.f_4 = 1;
}

void func_460(int iParam0)
{
	Global_1110244.f_4607.f_2 = (Global_1110244.f_4607.f_2 || iParam0);
}

void func_461(var uParam0)
{
	struct<397> Var0;

	Var0 = 32;
	Var0.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_2.f_1 = -1;
	Var0.f_1.f_2.f_1.f_1 = -1;
	Var0.f_1.f_2.f_3 = -1;
	Var0.f_1.f_6 = -1;
	Var0.f_1.f_6.f_2 = -1;
	Var0.f_1.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_193.f_2 = 5;
	Var0.f_193.f_3 = 5;
	Var0.f_193.f_3.f_1 = -1;
	Var0.f_193.f_3.f_1.f_1 = -1;
	Var0.f_193.f_3.f_1.f_2 = -1;
	Var0.f_193.f_3.f_1.f_3 = 255;
	Var0.f_193.f_3.f_1.f_4 = -1;
	Var0.f_193.f_3.f_1.f_5 = -1;
	Var0.f_193.f_3.f_1.f_6 = -1;
	Var0.f_193.f_3.f_1.f_8 = 2;
	Var0.f_193.f_3.f_1.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_193.f_3.f_1.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_193.f_3.f_1.f_40.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	*uParam0 = { Var0 };
}

void func_462(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_769(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_463(var uParam0)
{
	struct<27> Var0;

	Var0.f_3 = 3;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_1.f_3 = 255;
	Var0.f_3.f_1.f_6 = -1;
	Var0.f_3.f_1.f_6.f_3 = 255;
	Var0.f_3.f_1.f_6.f_6 = -1;
	Var0.f_3.f_1.f_6.f_6.f_3 = 255;
	Var0.f_23 = 1;
	*uParam0 = { Var0 };
}

void func_464(var uParam0)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_465(var uParam0)
{
	struct<35> Var0;

	Var0.f_3.f_3 = -1;
	Var0.f_3.f_3.f_1 = -1;
	Var0.f_3.f_5 = 1;
	Var0.f_3.f_6 = 7;
	Var0.f_28 = -1;
	*uParam0 = { Var0 };
}

void func_466(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_464(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
}

void func_467()
{
	func_770(&Global_1220746);
}

void func_468(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_771(uParam0[iVar0 /*67*/]);
		iVar0++;
	}
}

void func_469(bool bParam0)
{
	struct<9> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_8 = -1f;
	MISC::COPY_SCRIPT_STRUCT(bParam0, &Var0, 9);
}

void func_470(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_469(uParam0[iVar0 /*9*/]);
		iVar0++;
	}
}

int func_471(int iParam0)
{
	if (!func_686(iParam0))
	{
		return -1;
	}
	if (func_772(iParam0) >= 336)
	{
		return 0;
	}
	return (30 - (func_773(iParam0) - 336));
}

bool func_472(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_774(iParam0, 1);
	if (iVar0 == -1)
	{
		return true;
	}
	if (Global_1072759.f_19585.f_24 && !func_775(iVar0))
	{
		return true;
	}
	switch (iVar0)
	{
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			if (!func_776(-0.005809053f) && func_777(-1002510791, -996286033, 1110186268, 1120403456 /* Float: 100f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			if (!func_776(-3.242665E-35f) && func_777(-1002510791, -996286033, 1110186268, 1120403456 /* Float: 100f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			if (!func_776(3.991759E-22f) && func_777(1159475387, -995919004, 1111479222, 1120403456 /* Float: 100f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			if (!func_776(8.740328E-18f) && func_777(1159475387, -995919004, 1111479222, 1120403456 /* Float: 100f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			if (!func_776(0.0002667577f) && func_777(-991793187, -1011870570, 1126202394, 1120403456 /* Float: 100f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			if (!func_776(-1.481287E+16f) && func_777(-991793187, -1011870570, 1126202394, 1120403456 /* Float: 100f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			if (!func_776(-6.533963E+28f) && func_777(-1014465678, 1145734008, 1122813022, 1120403456 /* Float: 100f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			if (!func_776(-2.006529E+31f) && func_777(-1014465678, 1145734008, 1122813022, 1120403456 /* Float: 100f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (func_777(1135451800, 1153062584, 1127386776, 1120403456 /* Float: 100f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			if (!func_778(-9.740245E+23f, 100f, 275f))
			{
				return false;
			}
			break;
		case -1344601768:
			if (!func_778(8.3199E-13f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			if (!func_778(-8.445406E-27f, 100f, 275f))
			{
				return false;
			}
			else if (func_779())
			{
				return false;
			}
			break;
		case -460024530:
			if (!func_778(9.917841f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			if (!func_778(-1.79919E-35f, 100f, 275f))
			{
				return false;
			}
			break;
		case 1698972798:
			if (!func_778(-1.994217E-12f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			if (!func_778(-7.373508E+16f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			if (!func_778(-9.810364E-33f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			if (!func_778(6639.993f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			if (!func_778(2.452691E-24f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			if (!func_778(5.250041E+15f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			if (!func_778(-0.003270739f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			if (!func_778(4.946341E+32f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			if (!func_778(1.102706E-20f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			if (!func_778(-2.478842E+08f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			if (!func_778(3.895931E-09f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			if (!func_778(-1.240567E+20f, 100f, 275f))
			{
				return false;
			}
			break;
		case 1881028477:
			if (!func_778(-2.357562E-37f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			if (!func_778(2.960372E-11f, 100f, 275f))
			{
				return false;
			}
			break;
		case -1209597203:
			if (!func_778(8.538889E-07f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			if (!func_778(7618003f, 100f, 275f))
			{
				return false;
			}
			break;
		case 929582877:
			if (!func_778(-2.649738E-31f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			if (!func_778(0.002787285f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			if (!func_778(2.93803E+15f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			if (!func_778(0.0003386005f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			if (!func_778(-1.193793E+11f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			if (!func_778(-7.52249E-20f, 100f, 275f))
			{
				return false;
			}
			break;
		case -396624371:
			if (!func_778(-7.276065E+25f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			if (!func_778(-2.321388E-09f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			if (!func_778(-1.749338E-16f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			if (!func_778(-1.409092E+13f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			if (!func_778(-1.40118E-35f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			if (!func_778(1.49104E-25f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			if (!func_778(-5.906794E-17f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			if (!func_778(-1.548615E-34f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			if (!func_778(-1.067721E+37f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			if (!func_778(1.074092E-19f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			if (!func_778(1.022745E+36f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			if (!func_778(-1.445212E+18f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			if (!func_778(7.949502E-31f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			if (!func_778(7.731684E-22f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			if (!func_778(2.567707E+28f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			if (!func_778(1.493975E-18f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			if (!func_778(27.27159f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			if (!func_778(9.215664E-22f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			if (!func_778(8.952779E+31f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			if (!func_778(-3.321316E-05f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			if (!func_778(-4.388047E+34f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			if (!func_778(-1.284048E+17f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			if (!func_778(-1.763204E+35f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			if (!func_778(-2.234448E+27f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			if (!func_778(2.797251E-38f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			if (!func_778(-8.830105E+26f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			if (!func_778(2.23866E-34f, 100f, 275f))
			{
				return false;
			}
			break;
		case 526003171:
			if (!func_778(-2.4764E-36f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			if (!func_778(-6.715098E-06f, 100f, 275f) || !func_778(-5.694108E+33f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			if (!func_778(-1.042491E-32f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			if (!func_778(1.144084E+23f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			if (!func_778(2.476077E+29f, 100f, 275f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
		case -2141419899:
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
		case -1939389836:
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
		case -1808329564:
		case -1753769127:
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
		case -1556041029:
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
		case -1387772214:
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
		case -1181950077:
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
		case -1095341658:
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
		case -947815572:
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
		case -489737721:
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
		case -102827640:
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
		case 16844748:
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
		case 831940854:
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
		case 943561238:
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
		case 1248935549:
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
		case 1421300489:
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			iVar1 = func_780(iVar0);
			if (iVar1 != -1.166624E-17f)
			{
				if (!func_778(iVar1, 100f, 275f))
				{
					return false;
				}
			}
			else
			{
				return BUILTIN::VDIST(Global_34, func_781(iVar0)) > 1120403456;
			}
			break;
		case -812641169:
			if (!func_778(3.447478E-35f, 100f, 275f))
			{
				return false;
			}
			break;
		case -554519756:
			if (!func_778(3.056829E-13f, 100f, 275f))
			{
				return false;
			}
			break;
		case 865557632:
			if (!func_778(-3454263f, 100f, 275f))
			{
				return false;
			}
			break;
		case 1112996351:
			if (!func_778(-6.303423E-05f, 100f, 275f))
			{
				return false;
			}
			break;
		case -1608141409:
			if (!func_778(2.465312E-19f, 100f, 275f))
			{
				return false;
			}
			break;
		case -311373772:
			if (!func_778(-3.969605E-06f, 100f, 275f))
			{
				return false;
			}
			break;
		case 61537448:
			if (!func_778(3.935032E-28f, 100f, 275f))
			{
				return false;
			}
			break;
		case -925071604:
			if (!func_778(1.542558E+22f, 100f, 275f))
			{
				return false;
			}
			break;
		case 1195508693:
			if (!func_778(-6.050742E+15f, 100f, 275f))
			{
				return false;
			}
			break;
	}
	return true;
}

float func_473(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = func_191();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 1.526336E-16f;
	}
	return func_782(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(Global_1295619.f_149[iParam0]));
}

int func_474()
{
	return PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}

bool func_475(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951897[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3);
}

int func_476(int iParam0)
{
	return iParam0;
}

void func_477(int iParam0)
{
	if (!func_783(iParam0))
	{
		return;
	}
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_DELETE(Global_1951897[iParam0 /*23*/].f_3);
	}
	Global_1951897[iParam0 /*23*/].f_4 = 0;
	Global_1951897[iParam0 /*23*/] = 1;
	Global_1951897[iParam0 /*23*/].f_16 = 0;
	Global_1951897[iParam0 /*23*/].f_1 = 0;
	Global_1951897[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_9 = 0f;
	Global_1951897[iParam0 /*23*/].f_10 = 0;
	Global_1951897[iParam0 /*23*/].f_11 = 0;
	Global_1951897[iParam0 /*23*/].f_2 = 1;
	Global_1951897[iParam0 /*23*/].f_15 = -1f;
}

bool func_478(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return Global_1101558[iParam0 /*38*/].f_16;
}

bool func_479()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_5;
}

bool func_480()
{
	return Global_1900460.f_67;
}

bool func_481(int iParam0)
{
	return ((func_227(0, iParam0) || func_227(1, iParam0)) || func_227(2, iParam0));
}

int func_482(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = iParam0;
	if (func_340(iParam0) > 2)
	{
		return 1;
	}
	if (Global_263042[iVar0 /*65*/].f_1.f_11 != 0)
	{
		return 1;
	}
	if (Global_263042[iVar0 /*65*/].f_1 != 255)
	{
		return 1;
	}
	if (Global_263042[iVar0 /*65*/].f_1.f_13 != NaNf)
	{
		return 1;
	}
	return 0;
}

int func_483()
{
	int iVar0;
	int iVar1;
	struct<30> Var2;

	iVar0 = 0;
	Var2.f_3 = -1;
	Var2.f_3.f_1 = -1;
	Var2.f_11.f_12 = -1;
	Var2.f_11.f_12.f_1 = -1;
	Var2.f_11.f_14 = 255;
	Var2.f_11.f_15 = 255;
	iVar1 = 0;
	while (iVar1 < Global_1072759.f_23)
	{
		Var2 = { func_230(iVar1) };
		if (!func_231(&Var2))
		{
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_484()
{
	return Global_1572887.f_72.f_40;
}

bool func_485()
{
	return Global_1051645.f_80.f_102 > 0;
}

bool func_486()
{
	return Global_1142409.f_2042 > 0;
}

bool func_487()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1148170)
	{
		if ((Global_1148170[iVar0 /*10*/].f_4 && !func_101(Global_1148170[iVar0 /*10*/])) && BUILTIN::VDIST(Global_1148170[iVar0 /*10*/], Global_34) <= 1106247680)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_488()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1107816.f_33[iVar0 /*16*/] != 0)
		{
			if (GANG::NETWORK_IS_GANG_IN_SESSION(Global_1107816.f_33[iVar0 /*16*/]))
			{
				if (Global_1107816.f_33[iVar0 /*16*/] == Global_1295619.f_10)
				{
					if (func_18(Global_1107816.f_33[iVar0 /*16*/].f_3.f_5))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_489()
{
	return Global_1235672.f_9478 != -1;
}

char* func_490(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Stry";
		case 3:
			return "Proc";
		case 4:
			return "Fetch";
		case 5:
			return "Mini";
		case 8:
			return "Beat";
		case 7:
			return "UGC";
		case 6:
			return "FMA";
		default:
			break;
	}
	return "Unknown";
}

bool func_491()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

bool func_492(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 10)
	{
		return false;
	}
	return true;
}

bool func_493(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1291896[iParam0] == iParam0;
}

bool func_494(var uParam0)
{
	if (SCRIPTS::DOES_THREAD_EXIST(uParam0->f_3))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_3, false))
		{
			return true;
		}
	}
	return false;
}

char[] func_495(char[4] cParam0)
{
	return cParam0;
}

bool func_496(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return false;
	}
	return func_246(Global_1148603[iParam2 /*13*/][iParam0 /*4*/], iParam1);
}

var func_497(int iParam0)
{
	return Global_1138658[iParam0 /*56*/];
}

bool func_498(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

struct<2> func_499(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_5;
}

char* func_500(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_501(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		return 1;
	}
	if (func_784())
	{
		return 0;
	}
	STREAMING::REQUEST_IPL_HASH(iParam0);
	return 0;
}

int func_502(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		return 1;
	}
	if (func_784())
	{
		return 0;
	}
	STREAMING::REMOVE_IPL_HASH(iParam0);
	return 0;
}

struct<4> func_503(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_728(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_504(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_504(bool bParam0)
{
	if (func_60() == -1)
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

struct<17> func_505(var uParam0, bool bParam1)
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
		Var0.f_15 = func_729(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_727() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_506(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_294() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_93(16))
	{
		return false;
	}
	if (func_26())
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.406766E+36f))
		{
			return false;
		}
	}
	if (!func_785())
	{
		return false;
	}
	if (func_741(16))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_246(Global_1147168.f_8, 1))
	{
		return false;
	}
	if (func_786())
	{
		return false;
	}
	return true;
}

void func_507()
{
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4 = 0;
}

void func_508(int iParam0)
{
	func_787(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

bool func_509(int iParam0)
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

void func_510()
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

bool func_511(int iParam0)
{
	return func_246(Global_1147168.f_8, iParam0);
}

void func_512(int iParam0)
{
	Global_1142409.f_2019 = iParam0;
}

int func_513(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_788(vParam0, 0f, 0f, 0, 2);
	return func_788(vParam0, Global_1892764[iVar0 /*3*/].f_1, Global_1892764[iVar0 /*3*/].f_2, Global_1892764[iVar0 /*3*/], 4);
}

bool func_514(var uParam0, int iParam1, int iParam2)
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

bool func_515(var uParam0, int iParam1, int iParam2)
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

void func_516(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_789(iParam0);
	if (!func_587(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_586(128) && !func_790(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_791() == 4)
	{
		func_257(18);
	}
	func_792(1024);
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 10;
		case 2:
			return 11;
		case 3:
			return 12;
		case 4:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_518(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1140457472; /* Float: 500f */
			uParam1->f_5 = { -1001696508, -995784419, 1111199580 /* Float: 46.89f */ };
			uParam1->f_8 = 1049918177; /* Float: 0.29f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 111;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1137180672; /* Float: 400f */
			uParam1->f_5 = { 1151824376, -995392116, 1118214121 };
			uParam1->f_8 = 1117782016; /* Float: 80f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1133903872; /* Float: 300f */
			uParam1->f_5 = { 1161275727, 1140992536, 1110531428 };
			uParam1->f_8 = 1123929293; /* Float: 126.9f */
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 1;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1128792064; /* Float: 200f */
			uParam1->f_5 = { -999670160, -995245390, 1111904145 };
			uParam1->f_8 = -1020369961;
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 4:
			uParam1->f_1 = 1;
			uParam1->f_2 = 74;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1120403456; /* Float: 100f */
			uParam1->f_5 = { 1153318951, 1138203345, 1119050662 };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 5:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1125515264; /* Float: 150f */
			uParam1->f_5 = { 1159543435, -996427832, 1111903620 };
			uParam1->f_8 = -1036779520; /* Float: -45f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 6:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -991672606, -1009189926, 1126153491 };
			uParam1->f_8 = 1126000230; /* Float: 157.4f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 7:
			uParam1->f_1 = 3;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1015825983, 1145098579, 1122747665 };
			uParam1->f_8 = -1031022838;
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 8:
			uParam1->f_1 = 3;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { 1161307932, 1140461253, 1110845682 };
			uParam1->f_8 = -1029160305;
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 9:
			uParam1->f_1 = 2;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1140457472; /* Float: 500f */
			uParam1->f_5 = { -1001697857, -995847804, 1110095613 };
			uParam1->f_8 = 1114636288; /* Float: 60f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 10:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1140457472; /* Float: 500f */
			uParam1->f_5 = { 1160014807, -996587516, 1112638593 };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 11:
			uParam1->f_1 = 2;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1132068864; /* Float: 250f */
			uParam1->f_5 = { -1012673148, -1011685917, 1118706729 };
			uParam1->f_8 = -1032060928; /* Float: -63f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 12:
			uParam1->f_1 = 2;
			uParam1->f_2 = 121;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1128792064; /* Float: 200f */
			uParam1->f_5 = { -978570456, -986309576, 1059234565 };
			uParam1->f_8 = 1119092736; /* Float: 90f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 13:
			uParam1->f_1 = 2;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1132068864; /* Float: 250f */
			uParam1->f_5 = { -1013431167, 1145587879, 1122759934 };
			uParam1->f_8 = 1124532224; /* Float: 135f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_519(int iParam0)
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

var func_520(float fParam0, float fParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_656(fParam0, fParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_521(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_522(int iParam0)
{
	if (func_524(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_523(int iParam0)
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

bool func_524(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_525(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_526()
{
	if (!func_26())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

bool func_527(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_244(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_191())
	{
		return func_244(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_244(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

void func_528(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_529(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_530()
{
	func_793(-1.934466E-22f);
	func_793(1.070457E+32f);
	func_793(-9.374635E+07f);
	func_793(-1.221471E-32f);
	func_793(-4.610623E-13f);
	func_793(-0.07187833f);
	func_793(-3.02429E+27f);
	func_793(-2.477221E-32f);
	func_793(1.927684E+10f);
	func_793(3.769085E-28f);
	func_793(-4.613804E-26f);
	func_793(1979.44f);
	func_793(5.481499E+14f);
	func_793(2.274292E+34f);
	func_793(0.0004255835f);
	func_793(-0.0003955741f);
	func_793(-1.054242E-19f);
	func_794(6.78848E-23f);
}

void func_531()
{
	func_793(147597.6f);
	func_793(-5.941225E-39f);
	func_793(1.22175E-20f);
	func_793(-5.226814E+15f);
	func_793(1.799168E-28f);
	func_793(6.553484E+22f);
	func_793(1.640172f);
	func_793(1.133466E+07f);
	func_793(-8.122878E+34f);
	func_793(1.305998E+12f);
	func_793(2.859113E+26f);
	func_793(-3.070365E-14f);
	func_793(2.843597E+37f);
	func_794(2.859113E+26f);
	func_794(-1.234287E-33f);
}

void func_532()
{
	func_793(-4.20811E-06f);
	func_793(1.586371E+12f);
	func_793(-5.886836E-12f);
}

void func_533()
{
	func_793(4.721209E-24f);
	func_793(6.354704E-19f);
	func_793(-1.080277E+24f);
	func_794(2.859113E+26f);
	func_794(4.721209E-24f);
}

void func_534()
{
	func_793(7.116812E-20f);
	func_793(1.507664f);
	func_793(23.12498f);
	func_793(2.454639E-37f);
	func_793(-6.037666E-29f);
	func_793(5.419813E-10f);
	func_793(7.52009E+08f);
	func_793(-0.001414506f);
}

bool func_535(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return false;
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
	}
	return true;
}

struct<8> func_536(int iParam0, int iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, func_795(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, func_796(iParam1), 64);
	return cVar0;
}

int func_537(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 84;
		case 0:
			return 45;
		case 2:
			return 104;
		case 4:
			return 63;
		case 1:
			return 76;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 39;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_538(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_797(iParam1, iVar0, iVar1, bParam2, bParam3);
			iVar1++;
		}
		iVar0++;
	}
}

void func_539(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_540(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_541(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_542(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_546(*iParam0);
	iVar1 = func_545(*iParam0);
	if (iParam1 < 1 || iParam1 > func_551(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_543(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_544(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 2.658456E+36f));
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 = (*iParam0 || 0f);
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - (*iParam0 && 0f));
	}
}

int func_545(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_798(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_546(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_547(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_548(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_549(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_550(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_551(int iParam0, int iParam1)
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

void func_552(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_544(iParam0, iParam6);
	func_543(iParam0, iParam5);
	func_542(iParam0, iParam4);
	func_541(iParam0, iParam3);
	func_540(iParam0, iParam2);
	func_539(iParam0, iParam1);
}

void func_553(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = ((func_545(iParam0) + func_546(iParam0)) + func_547(iParam0));
	*uParam3 = uParam1;
	*uParam4 = func_547(iParam0);
}

void func_554(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	iVar0 = (func_799(uParam3, uParam4, uParam5) % 6);
	if (0 == iParam1)
	{
		iVar0 = (iVar0 % 3);
	}
	else
	{
		if (6 == iParam1)
		{
			iVar0 = (iVar0 % 3) + 3;
		}
		if (iVar0 == (*uParam0[(iParam1 - 1) /*11*/])[iParam2])
		{
			iVar0 = (iVar0 + 1 % 6);
			if (6 == iParam1 && iVar0 < 3)
			{
				iVar0 = 3;
			}
		}
	}
	(*uParam0[iParam1 /*11*/])[iParam2] = iVar0;
}

float func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.584594E-29f;
		case 1:
			return -7.975623E-29f;
		case 2:
			return -2.469943E-37f;
		case 3:
			return -1.101283E-14f;
		case 4:
			return -2.613662E-23f;
		case 5:
			return 6.228717E+16f;
		default:
			break;
	}
	return 1.584594E-29f;
}

float func_556(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1.349064E-28f;
		case 1:
			return 3.740475E-22f;
		case 2:
			return 2.719092E-31f;
		case 3:
			return -8.328606E+33f;
		case 4:
			return -4.917585E+25f;
		case 5:
			return -6.200374E-32f;
		default:
			break;
	}
	return -1.349064E-28f;
}

float func_557(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2.282257E+11f;
		case 1:
			return 1.123792E+17f;
		case 2:
			return -2.643827E-37f;
		case 3:
			return 8.551175E-32f;
		case 4:
			return 1.870153E+14f;
		case 5:
			return 2.82605E+29f;
		default:
			break;
	}
	return 2.282257E+11f;
}

float func_558(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5.327474E-08f;
		case 1:
			return -9568140f;
		case 2:
			return -2.459856E-05f;
		case 3:
			return -0.06113086f;
		case 4:
			return 8.850972E+08f;
		case 5:
			return 6.187846E+20f;
		default:
			break;
	}
	return -5.327474E-08f;
}

float func_559(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6.709234E+17f;
		case 1:
			return 342661.9f;
		case 2:
			return 1.590009E+16f;
		case 3:
			return 9.845674E+32f;
		case 4:
			return -3.966525E-34f;
		case 5:
			return -1.547311E-24f;
		default:
			break;
	}
	return 6.709234E+17f;
}

float func_560(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.665014E-37f;
		case 1:
			return -8.194959E-19f;
		case 2:
			return -1.559599E-10f;
		case 3:
			return -0.0004550244f;
		case 4:
			return -2.322629E+07f;
		case 5:
			return 455.2814f;
		default:
			break;
	}
	return 1.665014E-37f;
}

float func_561(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1.362157E+33f;
		case 1:
			return 1.1794E-33f;
		case 2:
			return -2.33966E+21f;
		case 3:
			return 3.889308E-07f;
		case 4:
			return -4.444096E-26f;
		case 5:
			return -6.697537E-20f;
		default:
			break;
	}
	return -1.362157E+33f;
}

float func_562(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1.265535E-12f;
		case 1:
			return -1.74357E+21f;
		case 2:
			return 1.503785E-26f;
		case 3:
			return -3.82813E+18f;
		case 4:
			return 2.321137E-29f;
		case 5:
			return 102.8944f;
		default:
			break;
	}
	return -1.265535E-12f;
}

float func_563(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -6.491602E+34f;
		case 1:
			return 1.830641E+26f;
		case 2:
			return -1.78269E-27f;
		case 3:
			return 1.38176E+32f;
		case 4:
			return -6.373155E-09f;
		case 5:
			return -3.217312E-17f;
		default:
			break;
	}
	return -6.491602E+34f;
}

float func_564(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.655092E-26f;
		case 1:
			return 5.696205E-36f;
		case 2:
			return -4.2326E+33f;
		case 3:
			return 2.624902E+31f;
		case 4:
			return 4.98721E+17f;
		case 5:
			return 6.369521E+08f;
		default:
			break;
	}
	return 1.655092E-26f;
}

int func_565(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_800(iParam0, bParam1));
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

int func_566()
{
	return Global_1051645.f_12;
}

char* func_567()
{
	return "unnamed";
}

int func_568(int iParam0)
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

bool func_569(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_527(36, iParam0);
}

bool func_570(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_801(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_802(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_571(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

int func_572()
{
	return Global_1072759.f_23.f_2;
}

void func_573()
{
	vector3 vVar0;

	if (func_572() == -1)
	{
		return;
	}
	func_803(Global_1072759.f_23.f_2.f_1);
	vVar0 = -1;
	Global_1072759.f_23.f_2 = { vVar0 };
}

void func_574(int iParam0)
{
	Global_1072759.f_23.f_2 = iParam0;
}

void func_575(int iParam0)
{
	if (!Global_1072759.f_3)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!func_61(Global_1206939[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], iParam0))
	{
		func_37(&(Global_1206939[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/]), iParam0);
		Global_1051645.f_45.f_1 = 1;
	}
}

void func_576(int iParam0)
{
	if (!Global_1072759.f_3)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (func_61(Global_1206939[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], iParam0))
	{
		func_59(&(Global_1206939[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/]), iParam0);
		Global_1051645.f_45.f_1 = 1;
	}
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 60;
		case 2:
			return 300;
		case 4:
			return 600;
		case 8:
			return 1800;
		case 16:
			return 3600;
		case 32:
			return 7200;
		case 64:
			return 10800;
		case 128:
			return 14400;
		case 256:
			return 18000;
		case 512:
			return 21600;
		default:
			break;
	}
	return 0;
}

void func_578(int iParam0, int iParam1)
{
	if (func_61(Global_1051829.f_2, iParam0))
	{
		return;
	}
	func_37(&(Global_1051829.f_2), (iParam0 || iParam1));
}

bool func_579(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1295185[iParam1 /*2*/] && iParam0) != 0;
}

void func_580(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	Global_1295185[iVar0 /*2*/] = (Global_1295185[iVar0 /*2*/] || iParam0);
}

int func_581(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_804(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_805(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1f, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_582(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_475(iParam0))
	{
		return false;
	}
	iVar0 = func_476(iParam0);
	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		if (Global_1951897[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::GET_SYSTEM_TIME();
		}
		fVar2 = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951897[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951897[iVar0 /*23*/].f_18) * (1f - Global_1951897[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951897[iVar0 /*23*/].f_21 = iVar1;
			Global_1951897[iVar0 /*23*/].f_22 = fVar2;
		}
	}
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_583(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	Global_1295185[iVar0 /*2*/] = (Global_1295185[iVar0 /*2*/] - (Global_1295185[iVar0 /*2*/] && iParam0));
}

bool func_584(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295158.f_2), iParam0))
	{
		return false;
	}
	return true;
}

void func_585(int iParam0)
{
	Global_1295252.f_29 = iParam0;
}

bool func_586(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_587(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

void func_588()
{
	int iVar0;

	if (!func_806(2))
	{
		return;
	}
	if (func_807())
	{
		return;
	}
	if (func_346(0) != -1)
	{
		return;
	}
	iVar0 = func_346(1);
	if (iVar0 != -1 && !func_808(iVar0))
	{
		func_809(2);
		func_349(-2.755526E+25f);
	}
}

void func_589()
{
	vector3 vVar0;

	if (!func_604(150590.7f) && !func_604(0.5448782f))
	{
		return;
	}
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_810(&vVar0);
	if (vVar0.x == -1)
	{
		func_598(150590.7f);
		func_598(0.5448782f);
		func_601();
		return;
	}
	if (vVar0.y == -1)
	{
		func_598(150590.7f);
		func_598(0.5448782f);
		func_601();
		return;
	}
	if (func_604(150590.7f))
	{
		if (!func_811(150590.7f))
		{
			func_598(150590.7f);
		}
	}
	if (func_604(0.5448782f))
	{
		if (!func_811(0.5448782f))
		{
			func_598(0.5448782f);
		}
	}
	if (!func_604(150590.7f) && !func_604(0.5448782f))
	{
		func_601();
	}
}

int func_590()
{
	return Global_1296343.f_50;
}

int func_591()
{
	return Global_1296343.f_50.f_1;
}

bool func_592(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (iVar0 == iParam0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

int func_593(int iParam0)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 43, iParam0, 0, 1))
	{
		return 0;
	}
	return func_812(&uVar0, 7);
}

int func_594()
{
	return Global_1296343.f_50.f_2;
}

bool func_595()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

int func_596()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	vector3 vVar4;
	struct<2> Var7;
	int iVar9;

	vVar4 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	sVar0 = func_813(func_590(), func_594());
	switch (func_590())
	{
		case 1057717540:
			func_810(&vVar4);
			if (vVar4.y == -1)
			{
				return 0;
			}
			if (vVar4.x == -1)
			{
				return 0;
			}
			iVar1 = func_814(func_630(vVar4.x, vVar4.y));
			if (iVar1 == -1)
			{
				return 0;
			}
			bVar2 = func_815(vVar4.x, vVar4.y, 1.108004E+32f);
			sVar3 = MISC::VAR_STRING(8, sVar0, MISC::VAR_STRING(0, func_816(bVar2, 0)));
			break;
		case 1209208750:
			func_810(&vVar4);
			if (vVar4.y == -1)
			{
				return 0;
			}
			if (vVar4.x == -1)
			{
				return 0;
			}
			iVar1 = func_814(func_630(vVar4.x, vVar4.y));
			if (iVar1 == -1)
			{
				return 0;
			}
			bVar2 = func_815(vVar4.x, vVar4.y, 1.108004E+32f);
			sVar3 = MISC::VAR_STRING(168, sVar0, func_817(&(Global_265213.f_4[iVar1 /*46*/].f_7), 4.808429E-35f), MISC::VAR_STRING(0, -1.288591E+21f), MISC::VAR_STRING(0, func_816(bVar2, 0)));
			break;
		default:
			sVar3 = MISC::VAR_STRING(0, sVar0);
			break;
	}
	iVar9 = func_290(sVar3, 10000, 0, 0, 0, 1);
	if (iVar9 != 0)
	{
		switch (func_590())
		{
			case 1057717540:
				func_810(&vVar4);
				Var7 = { func_353(vVar4.x, vVar4.y, 6.082515E+33f, 1) };
				STATS::_STAT_ID_INCREMENT_INT(&Var7, 1);
				break;
		}
	}
	return iVar9;
}

void func_597(int iParam0)
{
	Global_1296343.f_50.f_1 = iParam0;
}

void func_598(int iParam0)
{
	func_514(&(Global_1296343.f_50.f_3), func_653(iParam0, 1), 1);
}

void func_599()
{
	var uVar0;

	Global_1296343.f_50 = uVar0;
}

void func_600(int iParam0)
{
	Global_1296343.f_50.f_2 = iParam0;
}

void func_601()
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_354(&vVar0);
}

int func_602(int iParam0)
{
	return Global_1296343.f_50.f_3[iParam0];
}

int func_603(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -8.282824E+14f;
		case 1:
			return -5.717594E-27f;
		case 2:
			return -1.021894E+07f;
		case 3:
			return -1.042496E-05f;
		case 4:
			return -3.027463E-05f;
		case 5:
			return -1.206389E+19f;
		case 6:
			return -2.755526E+25f;
		case 7:
			return 0.5448782f;
		case 8:
			return 150590.7f;
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

bool func_604(int iParam0)
{
	return func_244(&(Global_1296343.f_50.f_3), func_653(iParam0, 1), 1);
}

void func_605(int iParam0)
{
	Global_1296343.f_50 = iParam0;
}

int func_606()
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	return func_812(&uVar0, 0);
}

int func_607(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = (32 - func_818());
	iVar0 = (5 - 1);
	while (iVar0 >= 0)
	{
		iVar6 = iVar0;
		iVar2 = func_819(iParam0->f_3, iVar6, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			if (iVar0 != (5 - 1))
			{
				iVar1 = BUILTIN::SHIFT_LEFT(iVar1, iVar2);
				iVar3 = (iVar3 + iVar2);
				if (iVar3 > 32)
				{
					return 0;
				}
			}
			iVar1 = (iVar1 || func_820(iParam0->f_3, iVar6, iParam0));
		}
		iVar0 = (iVar0 + -1);
	}
	if (iParam0->f_3 == 0)
	{
		return 0;
	}
	iVar5 = iParam0->f_3;
	iVar5 = BUILTIN::SHIFT_LEFT(iVar5, iVar4);
	iVar1 = (iVar1 || iVar5);
	return iVar1;
}

int func_608(int iParam0)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 38, 0, 0, 0))
	{
		return 0;
	}
	return func_812(&uVar0, 8);
}

struct<4> func_609(int iParam0, int iParam1)
{
	var uVar0;
	struct<4> Var5;
	int iVar9;

	if (!func_650(&uVar0))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 38, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 39, iParam1, 0, 1))
	{
		return Var5;
	}
	iVar9 = func_821(&uVar0);
	return func_822(iVar9);
}

void func_610(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_823(uParam0, iParam1))
	{
		return;
	}
	iVar0 = func_824();
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_825(*uParam0, &uVar1, 1, 255, 0, 0))
	{
		return;
	}
	func_826(iVar0, &uVar1, iParam1, uParam0->f_3);
}

void func_611(int iParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, &(Global_1296343.f_118[iParam0 /*6*/]), 4);
}

bool func_612(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_613(int iParam0)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	return func_812(&uVar0, 1);
}

int func_614(int iParam0)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 31, 0, 0, 0))
	{
		return 0;
	}
	return func_812(&uVar0, 5);
}

bool func_615(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return false;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_651(&uVar0, 31, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(&uVar0, 35, iParam1, 0, 0))
	{
		return false;
	}
	return true;
}

int func_616(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 24, 0, 0, 0))
	{
		return 0;
	}
	return func_812(&uVar0, 2);
}

bool func_617(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<7> Var0;
	struct<5> Var7;
	var uVar12;
	int iVar13;
	int iVar14;

	if (!func_650(&Var7))
	{
		return false;
	}
	if (!func_651(&Var7, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(&Var7, 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(&Var7, 19, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_651(&Var7, 20, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(&Var7, 23, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_651(&Var7, 45, 0, 0, 0))
	{
		if (func_651(&Var7, 24, 0, 0, 0))
		{
			if (!func_651(&Var7, 25, iParam2, 0, 1))
			{
				return false;
			}
			if (!func_651(&Var7, 45, 0, 0, 1))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	uVar12 = Var7.f_1;
	iVar14 = func_812(&Var7, 9);
	iVar13 = 0;
	while (iVar13 <= (iVar14 - 1))
	{
		Var7.f_1 = uVar12;
		if (!func_651(&Var7, 46, iVar13, 0, 1))
		{
			return false;
		}
		Var0 = { func_827(Var7) };
		if (!func_828(&Var0, iParam3))
		{
			return false;
		}
		iVar13++;
	}
	return true;
}

void func_618(int iParam0, int iParam1, int iParam2)
{
	Global_1296343.f_83[iParam0 /*17*/].f_1[iParam1] = iParam2;
}

void func_619(int iParam0, int iParam1)
{
	Global_1296343.f_83[iParam0 /*17*/] = iParam1;
}

void func_620(int iParam0)
{
	Global_1296343.f_2.f_45 = iParam0;
}

void func_621(int iParam0, int iParam1)
{
	Global_1296343.f_2[iParam0 /*22*/].f_16 = iParam1;
}

var func_622(int iParam0)
{
	var uVar0;

	if (!func_829(&uVar0, iParam0, -5.54501E+26f))
	{
		return 0;
	}
	return func_830(&uVar0);
}

void func_623(int iParam0, var uParam1)
{
	Global_1296343.f_2[iParam0 /*22*/].f_17 = uParam1;
}

struct<2> func_624(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var5;
	var uVar7;
	var uVar8;

	if (!func_650(&uVar0))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 36, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 37, iParam1, 0, 0))
	{
		return Var5;
	}
	uVar7 = func_654(&uVar0);
	uVar8 = func_655(&uVar0);
	return func_656(uVar7, uVar8);
}

void func_625(int iParam0, struct<2> Param1)
{
	Global_1296343.f_2[iParam0 /*22*/].f_18 = { Param1 };
}

bool func_626(int iParam0)
{
	return func_628(iParam0, 0) != 0;
}

void func_627(int iParam0, bool bParam1)
{
	Global_1296343.f_2[iParam0 /*22*/].f_20 = bParam1;
}

int func_628(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	return func_831(&uVar0, iParam1);
}

void func_629(int iParam0, int iParam1)
{
	Global_1296343.f_2[iParam0 /*22*/].f_21 = iParam1;
}

int func_630(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_832(&uVar0);
}

void func_631(int iParam0, int iParam1, int iParam2)
{
	Global_1296343.f_2[iParam0 /*22*/][iParam1] = iParam2;
}

int func_632()
{
	return Global_1296343.f_2.f_45;
}

int func_633(int iParam0)
{
	return Global_1296343.f_2[iParam0 /*22*/].f_16;
}

void func_634()
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

	iVar1 = func_606();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar5 = iVar0;
		iVar3 = func_613(iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar6 = iVar2;
			iVar7 = func_833(iVar5, iVar6);
			switch (iVar7)
			{
				case -1:
					iVar8 = 0;
					break;
				case 0:
					iVar8 = 0;
					break;
				case 15:
					iVar8 = 5;
					break;
				default:
					switch (iVar7)
					{
						case 1:
							iVar8 = 3;
							break;
						case 2:
							iVar8 = 4;
							break;
						default:
							iVar8 = 0;
							break;
					}
					break;
			}
			if (iVar8 == 0)
			{
			}
			else
			{
				iVar4 = func_630(iVar5, iVar6);
				MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(iVar4, iVar8);
			}
			iVar2++;
		}
		iVar0++;
	}
}

var func_635()
{
	return Global_1296343.f_48;
}

bool func_636(int iParam0)
{
	return Global_1296343.f_2[iParam0 /*22*/].f_20;
}

var func_637()
{
	return Global_1296343.f_48.f_1;
}

var func_638(int iParam0, int iParam1)
{
	return Global_1296343.f_2[iParam0 /*22*/][iParam1];
}

var func_639(int iParam0)
{
	return Global_1296343.f_2[iParam0 /*22*/].f_17 * 60;
}

struct<2> func_640(int iParam0)
{
	return Global_1296343.f_2[iParam0 /*22*/].f_18;
}

var func_641(int iParam0)
{
	return Global_1296343.f_83[iParam0 /*17*/];
}

var func_642(int iParam0)
{
	return Global_1296343.f_2[iParam0 /*22*/].f_21;
}

void func_643(int iParam0)
{
	Global_1296343.f_48.f_1 = iParam0;
}

void func_644(int iParam0)
{
	Global_1296343.f_48 = iParam0;
}

struct<6> func_645(int iParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_3 = func_834(iParam0);
	if (Var0.f_3 == 0)
	{
		return Var0;
	}
	iVar8 = iParam0;
	iVar6 = 0;
	while (iVar6 <= (5 - 1))
	{
		iVar9 = iVar6;
		iVar7 = func_819(Var0.f_3, iVar9, 1);
		if (iVar7 == -1)
		{
		}
		else
		{
			func_835(Var0.f_3, iVar9, &Var0, iVar8);
			iVar8 = BUILTIN::SHIFT_RIGHT(iVar8, iVar7);
		}
		iVar6++;
	}
	return Var0;
}

var func_646(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_836(&uVar0);
}

struct<2> func_647(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_837(iParam0, &(Global_1072759.f_573), func_77(iParam1));
			break;
		case 3:
			Var0.f_1 = func_837(iParam0, &(Global_1072759.f_573.f_602), func_77(iParam1));
			break;
		case 4:
			Var0.f_1 = func_837(iParam0, &(Global_1072759.f_573.f_2104), func_77(iParam1));
			break;
		case 5:
			Var0.f_1 = func_837(iParam0, &(Global_1072759.f_573.f_12606), func_77(iParam1));
			break;
		case 6:
			Var0.f_1 = func_837(iParam0, &(Global_1072759.f_573.f_12908), func_77(iParam1));
			break;
		case 7:
			Var0.f_1 = func_837(iParam0, &(Global_1072759.f_573.f_15910), func_77(iParam1));
			break;
		case 8:
			Var0.f_1 = func_837(iParam0, &(Global_1072759.f_573.f_16512), func_77(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_838();
	}
	return Var0;
}

void func_648(int iParam0, var uParam1)
{
	func_839(iParam0, uParam1->f_3.f_2);
	func_840(iParam0, uParam1->f_3.f_4);
	func_841(iParam0, uParam1->f_3.f_5);
	func_842(iParam0, uParam1->f_3);
	func_843(iParam0, uParam1->f_3.f_1);
	func_844(iParam0, *uParam1);
	func_845(iParam0, uParam1->f_2);
	func_846(iParam0, uParam1->f_9);
}

void func_649(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<6> Var6;
	struct<5> Var12;
	struct<10> Var17;

	Var17 = -1;
	Var17.f_1 = -1;
	Var17.f_3 = -1;
	Var17.f_3.f_1 = -1;
	Var17.f_3.f_2 = -1;
	Var17.f_3.f_4 = -1;
	Var17.f_3.f_5 = -1;
	Var17.f_9 = -1;
	Var17.f_3 = { func_645(iParam0) };
	iVar1 = func_847(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var6 = { func_848(Var17, iVar0) };
		func_849(&Var6, iParam0);
		iVar0++;
	}
	iVar1 = func_850(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var12 = { func_851(&Var17, iVar0) };
		func_852(&Var12, iParam0);
		iVar0++;
	}
	iVar1 = func_853(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var2 = { func_854(Var17, iVar0) };
		func_610(&Var2, iParam0);
		iVar0++;
	}
}

bool func_650(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1072759.f_28418[29 /*4*/].f_3;
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iVar0))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar0))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar1, 5);
	*bParam0 = iVar0;
	return true;
}

bool func_651(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uVar0 = bParam0->f_1;
	bParam0->f_2 = iParam1;
	bParam0->f_3 = iParam2;
	bParam0->f_4 = iParam3;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		bParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

struct<8> func_652(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&Var0, bParam0))
	{
	}
	return Var0;
}

int func_653(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HELP_TEXT_POST_COOP_MISSION_1"):
			return 1;
		case joaat("HELP_TEXT_POST_EXT_NO_GATING_ITEM"):
			return 3;
		case joaat("HELP_TEXT_POST_EXT_HAS_SETUP_MOON"):
			return 4;
		case joaat("HELP_TEXT_POST_COOP_MISSION_5"):
			return 2;
		case joaat("HELP_TEXT_WAIT_FOR_POSSE_LEADER"):
			return 0;
		case joaat("HELP_TEXT_BLOCK_ACCEPT_POSSE_TOO_LARGE"):
			return 5;
		case joaat("HELP_TEXT_COOP_COOLDOWN_DONE"):
			return 6;
		case 1057717540:
			return 7;
		case 1209208750:
			return 8;
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

var func_654(bool bParam0)
{
	return func_855(bParam0, 77, 1);
}

var func_655(bool bParam0)
{
	return func_855(bParam0, 78, 1);
}

struct<2> func_656(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

struct<10> func_657(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3.f_5 = -1;
	Var0.f_9 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var0, &(Global_1296343.f_58.f_4[iParam0 /*10*/]), 10);
	return Var0;
}

bool func_658(int iParam0)
{
	return (Global_1296343.f_58.f_1.f_2 && iParam0) != 0;
}

void func_659(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3.f_5 = -1;
	Var0.f_9 = -1;
	func_648(iParam0, &Var0);
}

void func_660()
{
	if (Global_1901671.f_1 == 0)
	{
		return;
	}
	Global_1901671.f_1 = 0;
}

var func_661()
{
	return Global_1110244.f_21;
}

int func_662(int iParam0)
{
	return Global_1110244[iParam0];
}

void func_663(int iParam0)
{
	if (Global_1110244.f_17)
	{
		func_856(iParam0);
	}
	else
	{
		func_857(iParam0);
	}
}

void func_664(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_858(iParam0, 1))
	{
		return;
	}
	bVar0 = func_859();
	func_860(iParam0);
	if (iParam1 == -1)
	{
		iVar1 = Global_1207465.f_231.f_1066[iParam0 /*17*/].f_7;
		if (iVar1 > 1)
		{
			iVar1 = 1;
		}
		iParam1 = 0;
		while (iParam1 < iVar1)
		{
			func_861(iParam0, iParam1, bVar0);
			iParam1++;
		}
	}
	else
	{
		func_861(iParam0, iParam1, bVar0);
	}
	if (bVar0)
	{
		func_862(iParam0);
	}
}

void func_665()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return;
	}
	if (Global_1140708.f_44)
	{
		iVar0 = NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS();
		iVar1 = 9;
		iVar2 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		if ((iVar0 && iVar1) != 0 && !func_863())
		{
			iVar3 = 0;
			while (iVar3 <= 31)
			{
				iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if ((iVar4 == PLAYER::PLAYER_ID() || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
				{
				}
				else
				{
					iVar5 = GANG::NETWORK_GET_GANG_ID(iVar4);
					if (iVar5 != iVar2 || (iVar5 == 0 && iVar2 == 0))
					{
						func_864();
						return;
					}
				}
				iVar3++;
			}
		}
	}
}

bool func_666()
{
	return func_865();
}

void func_667(var uParam0, var uParam1)
{
	int iVar0;
	struct<40> Var1;

	if (*uParam0 == 0)
	{
		return;
	}
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	iVar0 = ((uParam0->f_1 + *uParam1) % uParam0->f_2);
	Var1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = 255;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_8 = 2;
	Var1.f_8.f_1 = -1;
	Var1.f_8.f_5 = -1;
	Var1.f_8.f_5.f_1 = -1;
	Var1.f_8.f_5.f_3 = -1;
	Var1.f_8.f_5.f_4 = -1;
	Var1.f_8.f_5.f_5 = -1;
	Var1.f_8.f_5.f_6 = -1;
	Var1.f_8.f_5.f_6.f_1 = -1;
	Var1.f_8.f_5.f_9 = 2;
	Var1.f_23.f_1 = 1024;
	Var1.f_23.f_4 = -15;
	Var1.f_23.f_5 = 255;
	Var1.f_23.f_8 = 1;
	Var1.f_23.f_8.f_1.f_1 = NaNf;
	Var1.f_23.f_13 = -1;
	if (uParam0->f_3[iVar0 /*40*/].f_2 != -1)
	{
		Var1 = { func_866(&(Global_1207465.f_28), uParam0->f_3[iVar0 /*40*/]) };
		func_867(Var1, uParam0, &(uParam0->f_3[iVar0 /*40*/]));
	}
}

void func_668(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar11;

	iVar0 = func_868(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iVar0))
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_5 = -1;
		Var1.f_6 = -1;
		Var1.f_6.f_1 = -1;
		Var1.f_9 = 2;
		Var1 = { func_499(iParam0) };
		if (func_18(Var1))
		{
			iVar11 = func_869(&Var1);
			if (iVar11 != func_870(iParam0))
			{
				if (func_871(iVar11))
				{
					func_872(iParam0, iVar11);
				}
			}
		}
		func_873(iParam0);
	}
}

void func_669(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = func_874(iVar0, -1);
	iVar4 = GANG::NETWORK_GET_GANG_ID(iVar0);
	if (func_498(iVar1))
	{
		if (func_868(iVar1) == iVar4)
		{
			return;
		}
	}
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar5 = func_868(iVar2);
		if (func_875(iVar2) != -1)
		{
		}
		else
		{
			if (iVar5 == 0)
			{
				iVar3 = iVar2;
			}
			else if (!GANG::NETWORK_IS_GANG_IN_SESSION(iVar5))
			{
				iVar3 = iVar2;
			}
			else
			{
				if (iVar5 == iVar4)
				{
					return;
				}
				iVar2++;
			}
			if (iVar3 == -1)
			{
				return;
			}
			func_876(iVar3, iVar4);
		}
	}
}

void func_670(int iParam0)
{
	var uVar0;
	bool bVar1;

	switch (func_875(iParam0))
	{
		case -1:
			bVar1 = func_877(iParam0, &uVar0);
			break;
		case 0:
			bVar1 = func_878(iParam0, &uVar0);
			break;
		case 1:
			bVar1 = func_879(iParam0, &uVar0);
			break;
		case 2:
			bVar1 = func_880(iParam0, &uVar0);
			break;
		case 3:
			bVar1 = func_881(iParam0, &uVar0);
			break;
		case 4:
			bVar1 = func_882(iParam0, &uVar0);
			break;
		case 5:
			bVar1 = func_883(iParam0, &uVar0);
			break;
		case 6:
			bVar1 = func_884(iParam0, &uVar0);
			break;
		case 7:
			bVar1 = func_885(iParam0, &uVar0);
			break;
		case 9:
			bVar1 = func_886(iParam0, &uVar0);
			break;
		case 8:
			bVar1 = func_887(iParam0, &uVar0);
			break;
		default:
			break;
	}
	if (bVar1)
	{
		func_889(iParam0, uVar0, func_888(iParam0));
	}
}

void func_671()
{
	func_890(3, (func_662(3) + 1 % 32));
	func_890(0, (func_662(0) + 1 % 32));
}

void func_672()
{
	int iVar0;
	struct<13> Var1;
	struct<4> Var14;

	iVar0 = func_874(PLAYER::PLAYER_ID(), -1);
	if (!func_498(iVar0))
	{
		return;
	}
	Var1 = { func_891(iVar0) };
	if (!func_892(Var1.f_5, Var1.f_3))
	{
		return;
	}
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_3 = -1;
	Var14 = { Var1.f_5 };
	if (func_18(Var1.f_5))
	{
		Var14.f_3 = Var1.f_3;
		Var14.f_2 = func_19(Var1.f_5);
	}
	else
	{
		Var14.f_3 = -1;
		Var14.f_2 = 0;
	}
	func_893(&Var14);
}

void func_673()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;

	iVar8 = PLAYER::PLAYER_ID();
	bVar2 = func_894(iVar8, 1);
	bVar3 = func_894(iVar8, 2);
	bVar0 = func_894(iVar8, 4);
	bVar1 = func_894(iVar8, 8);
	bVar4 = func_894(iVar8, 32);
	bVar5 = (func_18(func_895()) && !func_18(func_896()));
	bVar7 = func_897() == true;
	bVar6 = (func_898() >= 24 || func_898() == 0);
	if (func_899() != GANG::NETWORK_GET_GANG_ID(iVar8) && (func_900() == 4 || (bVar4 && !func_901(255))))
	{
		if (bVar4)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(2000);
			}
		}
		func_902();
		return;
	}
	if (bVar4)
	{
		if ((func_903() == 0 && !bVar0) || bVar1)
		{
			if (CAM::IS_SCREEN_FADED_IN() && !func_901(255))
			{
				func_904(4);
				func_904(8);
				func_904(32);
				func_905(0);
				func_906(func_838());
			}
		}
	}
	if ((func_907() == -1 && !bVar5) && ((bVar7 && bVar6) || !bVar7))
	{
		if (bVar2)
		{
			func_902();
		}
		return;
	}
	iVar9 = func_874(iVar8, -1);
	if (!func_498(iVar9))
	{
		return;
	}
	if (((((!bVar5 && ((bVar7 && bVar6) || !bVar7)) && func_899() != GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && bVar3) && !bVar0) && func_900() != 2)
	{
		func_902();
		return;
	}
	if (!bVar2)
	{
		return;
	}
	if (!bVar5 && func_900() != 4)
	{
		if (func_907() != 4)
		{
			return;
		}
	}
	if (!bVar3)
	{
		switch (func_907())
		{
			case 4:
				if (!AUDIO::_IS_ANY_CONVERSATION_PLAYING(false))
				{
				}
				break;
			default:
				func_908(2);
				break;
		}
		return;
	}
	if (!bVar1)
	{
		return;
	}
	func_902();
}

void func_674()
{
	int iVar0;

	iVar0 = func_662(4);
	if (func_909(iVar0))
	{
		func_910(iVar0);
	}
	else
	{
		func_911(iVar0);
	}
}

void func_675()
{
	int iVar0;
	int iVar1;

	iVar0 = func_662(5);
	iVar1 = iVar0;
	if (func_912(iVar1))
	{
		func_913(iVar1);
	}
	else
	{
		func_914(iVar1);
	}
}

void func_676()
{
	if (func_915(255))
	{
		func_916(1);
	}
	else
	{
		func_916(2);
	}
}

void func_677()
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_917(iVar0, 1024))
	{
		return;
	}
	if (func_18(func_895()))
	{
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (func_918(131072))
	{
		if ((iVar1 - func_919()) < Global_1901671.f_316.f_40)
		{
			return;
		}
	}
	func_920(iVar0);
	func_921(iVar1);
	func_922(131072);
}

void func_678()
{
	int iVar0;
	struct<4> Var1;

	if (!func_923())
	{
		return;
	}
	if (GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) != func_924())
	{
		func_925();
		return;
	}
	iVar0 = func_926(func_924());
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_927(iVar0))
	{
		return;
	}
	if (func_875(iVar0) != 0)
	{
		return;
	}
	if (!func_929(func_928(), func_499(iVar0)) && func_18(func_499(iVar0)))
	{
		func_925();
		return;
	}
	if (func_930(iVar0, 2))
	{
		func_925();
		return;
	}
	Var1.f_1 = -1;
	func_931(&Var1);
	func_936(func_932(), func_933(), func_934(), func_935(), func_928(), Var1, 1);
	func_925();
}

void func_679()
{
	struct<5> Var0;
	int iVar5;

	Var0 = 3;
	iVar5 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar5) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
	{
		func_937(iVar5, &Var0);
		if (Var0.f_4)
		{
			func_938(&Var0);
		}
	}
	if (func_939(2))
	{
		func_940(&Var0);
		func_941(&Var0);
		func_942(2);
	}
}

void func_680()
{
	struct<4> Var0;
	int iVar4;

	Var0 = 2;
	iVar4 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar4) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
	{
		func_943(iVar4, &Var0);
		if (Var0.f_3)
		{
			func_944(&Var0);
		}
	}
	if (func_939(4))
	{
		func_945(&Var0);
		func_946(&Var0);
		func_942(4);
	}
}

void func_681()
{
	struct<5> Var0;
	var uVar5;
	int iVar10;
	int iVar11;

	Var0 = 3;
	uVar5 = 3;
	if (PLAYER::PLAYER_ID() == Global_1102813.f_3674)
	{
		iVar10 = 0;
		while (iVar10 <= 6)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1102813.f_3675[iVar10]))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1102813.f_3675[iVar10]))
			{
			}
			else
			{
				func_947(Global_1102813.f_3675[iVar10], &uVar5);
				if (!uVar5.f_4)
				{
				}
				else
				{
					iVar11 = 0;
					while (iVar11 <= 2)
					{
						Var0[iVar11] = (Var0[iVar11] || uVar5[iVar11]);
						iVar11++;
					}
				}
			}
			iVar10++;
		}
		Var0.f_4 = 1;
	}
	func_948(&Var0);
}

void func_682()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_662(6);
	iVar3 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == func_949(iVar1))
		{
			if (func_950(iVar1) != 0)
			{
				bVar2 = true;
			}
		}
	else
	{
		}
		iVar1++;
	}
	if (!bVar2)
	{
		if (func_951(iVar3, iVar0))
		{
			func_952(iVar0);
			return;
		}
	}
}

int func_683()
{
	if (!func_953())
	{
		return 0;
	}
	Global_1203937.f_399.f_4 = 0;
	return 1;
}

void func_684()
{
	func_890(1, (func_662(1) + 1 % 32));
	func_890(2, (func_662(2) + 1 % 32));
	func_890(4, (func_662(4) + 1 % 36));
	func_890(5, (func_662(5) + 1 % 104));
	func_890(6, (func_662(6) + 1 % 62));
}

void func_685()
{
	Global_1939583 = 3;
	Global_1939583.f_289 = 1;
}

bool func_686(int iParam0)
{
	int iVar0;

	iVar0 = func_773(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

void func_687(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1072759.f_19585.f_20;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (func_11(iVar2) != 9)
		{
		}
		else
		{
			Global_1072759.f_19585.f_19 = (Global_1072759.f_19585.f_19 || Global_1056554[iVar1 /*491*/].f_443[iParam0]);
			Global_1072759.f_19585.f_20 = (Global_1072759.f_19585.f_20 && Global_1056554[iVar1 /*491*/].f_443.f_19[iParam0]);
		}
		iVar1++;
	}
	func_954(iParam0);
	if (Global_1072759.f_19585.f_19 == Global_1072759.f_19585[iParam0] && iVar0 == Global_1072759.f_19585.f_20)
	{
		*uParam1 = 1;
	}
	else
	{
		Global_1072759.f_19585.f_23 = 1;
	}
}

void func_688(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = (Global_1072759.f_19585.f_22 + iVar1);
		if (iVar2 > 31)
		{
			bVar0 = true;
		}
		else
		{
			if (MISC::IS_BIT_SET(Global_1056554[iParam0 /*491*/].f_443[iParam1], iVar2))
			{
				MISC::CLEAR_BIT(&(Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1]), iVar2);
			}
			else if (!MISC::IS_BIT_SET(Global_1072759.f_19585[iParam1], iVar2))
			{
				MISC::SET_BIT(&(Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1]), iVar2);
			}
			else
			{
				iVar3 = (iParam1 * 31 + iVar2);
				if (iVar3 > 544)
				{
					bVar0 = true;
				}
				else
				{
					if (func_472(iVar3))
					{
						MISC::SET_BIT(&(Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1]), iVar2);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1]), iVar2);
					}
					iVar1++;
				}
				Global_1072759.f_19585.f_22 = iVar2 + 1;
				if (bVar0 || iVar2 == 31)
				{
					if (Global_1072759.f_19585.f_20 != Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1])
					{
						Global_1072759.f_19585.f_20 = (Global_1072759.f_19585.f_20 && Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1]);
					}
					Global_1072759.f_19585.f_23 = 2;
				}
			}
		}
	}
}

var func_689(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar1))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		else if (!MISC::IS_BIT_SET(iParam1, iVar1))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

bool func_690(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= NaNf)
	{
		return false;
	}
	return true;
}

bool func_691(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

int func_692(struct<2> Param0)
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
	if (!func_78(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_78(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
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

bool func_693(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

struct<2> func_694(int iParam0)
{
	if (!func_955(iParam0))
	{
		return func_838();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

int func_695(struct<2> Param0)
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
		if (func_929(Global_1900531[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_696(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_525(32768))
	{
		return 0;
	}
	iVar0 = func_60();
	if (func_956(&(Global_1835011[iParam0 /*72*/].f_30), 512) && !func_956(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
	{
		if (func_957())
		{
			return 0;
		}
	}
	if (Global_1835011[iParam0 /*72*/].f_67)
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		bVar3 = Global_1835011[iParam0 /*72*/].f_66;
		if (func_958(iParam0, iVar0))
		{
			vVar4 = { func_959(iParam0) };
			Global_1835011[iParam0 /*72*/].f_65 = VOLUME::CREATE_VOLUME_SPHERE(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (VOLUME::DOES_VOLUME_EXIST(Global_1835011[iParam0 /*72*/].f_65))
			{
				Global_1835011[iParam0 /*72*/].f_28 = MAP::_BLIP_ADD_FOR_VOLUME(6.79561E+21f, Global_1835011[iParam0 /*72*/].f_65);
			}
		}
		else if (bVar3)
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::BLIP_ADD_FOR_COORDS(6.79561E+21f, func_960(iParam0));
		}
		else
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::BLIP_ADD_FOR_COORDS(6.79561E+21f, func_961(iParam0));
		}
		Global_1835011[iParam0 /*72*/].f_29 = 6.79561E+21f;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_962(iParam2, 4194304);
			}
			else
			{
				func_699(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*72*/].f_28, 72, Global_1835011[iParam0 /*72*/].f_3);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		return 0;
	}
	func_963(iParam0);
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*72*/].f_28, Global_1835011[iParam0 /*72*/].f_27, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME(Global_1835011[iParam0 /*72*/].f_28, &(Global_1835011[iParam0 /*72*/].f_42));
		}
		if (!func_956(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, 4.185971E-18f);
			func_964(&(Global_1835011[iParam0 /*72*/].f_30), 1024);
		}
		if (func_956(&(Global_1835011[iParam0 /*72*/].f_30), 524288))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, -2.616704E+24f);
		}
		if (func_956(&(Global_1835011[iParam0 /*72*/].f_30), 1048576))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, -2.727505E-29f);
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, 1.231009E-30f);
		}
	}
	return 1;
}

bool func_697(int iParam0, int iParam1)
{
	return (func_693(iParam0) && (Global_1900562[iParam0 /*2*/].f_1 && iParam1) != 0);
}

void func_698(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900530 <= 0)
	{
		return;
	}
	if (!func_18(Param0))
	{
		return;
	}
	if (func_965(Param0))
	{
		func_966(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_695(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1900530 > 1)
	{
		Global_1900531[iVar1 /*2*/] = { Global_1900531[(Global_1900530 - 1) /*2*/] };
		Global_1900562[iVar1 /*2*/] = { Global_1900562[(Global_1900530 - 1) /*2*/] };
		func_293(&(Global_1900531[(Global_1900530 - 1) /*2*/]));
		Global_1900562[(Global_1900530 - 1) /*2*/] = { Var2 };
	}
	else
	{
		func_293(&(Global_1900531[iVar1 /*2*/]));
		Global_1900562[iVar1 /*2*/] = { Var2 };
	}
	Global_1900530 = (Global_1900530 - 1);
	if (Global_1900530 < 0)
	{
		Global_1900530 = 0;
	}
}

void func_699(int iParam0, int iParam1)
{
	if (!func_693(iParam0))
	{
		return;
	}
	Global_1900562[iParam0 /*2*/].f_1 = (Global_1900562[iParam0 /*2*/].f_1 - (Global_1900562[iParam0 /*2*/].f_1 && iParam1));
}

bool func_700(struct<2> Param0)
{
	return func_372(Param0) == 0;
}

void func_701(struct<2> Param0, bool bParam2)
{
	if (!func_18(Param0))
	{
		return;
	}
	if (!func_700(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_967(Param0);
	}
	func_968(Param0, 1);
	bParam2 = bParam2;
}

var func_702()
{
	return Global_1295802.f_537.f_1;
}

void func_703()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_969())
	{
		return;
	}
	if (!func_970())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = BUILTIN::SHIFT_LEFT(1, iVar0);
		iVar2 = iVar1;
		if (!func_971(iVar2))
		{
		}
		else if (!func_972(iVar2))
		{
		}
		else
		{
			func_973(iVar2);
		}
		else
		{
			iVar0++;
		}
	}
}

var func_704()
{
	return Global_1295802.f_537.f_2;
}

void func_705(int iParam0)
{
	Global_1295802.f_537.f_2 = iParam0;
}

void func_706(int iParam0)
{
	Global_1295802.f_537.f_1 = iParam0;
}

int func_707()
{
	return Global_1102813.f_3674;
}

int func_708()
{
	return Global_1295802.f_492.f_3;
}

var func_709(int iParam0, int iParam1)
{
	return Global_1295802[iParam0 /*37*/][iParam1];
}

int func_710(int iParam0, int iParam1)
{
	return Global_1295802[iParam0 /*37*/].f_3[iParam1];
}

var func_711(int iParam0)
{
	return Global_1295802.f_482[iParam0];
}

void func_712(var uParam0)
{
	struct<6> Var0;

	Var0 = { func_645(Global_1056554[Global_1295619 /*491*/].f_204.f_9) };
	Var0.f_1 = uParam0;
	func_607(&Var0);
}

void func_713(int iParam0)
{
	struct<6> Var0;

	Var0 = { func_645(Global_1056554[Global_1295619 /*491*/].f_204.f_9) };
	Var0.f_4 = iParam0;
	func_607(&Var0);
}

void func_714(int iParam0)
{
	struct<6> Var0;

	Var0 = { func_645(Global_1056554[Global_1295619 /*491*/].f_204.f_9) };
	Var0.f_2 = iParam0;
	func_607(&Var0);
}

void func_715(var uParam0)
{
	struct<6> Var0;

	Var0 = { func_645(Global_1056554[Global_1295619 /*491*/].f_204.f_9) };
	Var0.f_5 = uParam0;
	func_607(&Var0);
}

var func_716(int iParam0)
{
	struct<6> Var0;

	Var0 = { func_645(Global_1056554[iParam0 /*491*/].f_204.f_9) };
	return Var0.f_1;
}

void func_717(var uParam0)
{
	Global_1295802.f_492.f_2 = uParam0;
}

var func_718(int iParam0)
{
	struct<6> Var0;

	Var0 = { func_645(Global_1056554[iParam0 /*491*/].f_204.f_9) };
	return Var0.f_4;
}

void func_719(var uParam0)
{
	Global_1295802.f_492.f_3 = uParam0;
}

var func_720(int iParam0)
{
	struct<6> Var0;

	Var0 = { func_645(Global_1056554[iParam0 /*491*/].f_204.f_9) };
	return Var0.f_2;
}

void func_721(var uParam0)
{
	Global_1295802.f_492.f_4 = uParam0;
}

var func_722(int iParam0)
{
	struct<6> Var0;

	Var0 = { func_645(Global_1056554[iParam0 /*491*/].f_204.f_9) };
	return Var0.f_5;
}

void func_723(var uParam0)
{
	Global_1295802.f_492.f_5 = uParam0;
}

void func_724(int iParam0)
{
	func_98(&(Global_1072759.f_28644.f_8.f_1), iParam0);
}

void func_725(int iParam0)
{
	if (func_974(iParam0))
	{
		func_787(&(Global_1072759.f_28644.f_8.f_1), iParam0);
	}
}

void func_726(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;

	if (Global_1051194)
	{
		return;
	}
	Global_1051194.f_2 = iParam0;
	Global_1051194.f_3 = iParam1;
	Global_1051194.f_4 = iParam2;
	Global_1051194.f_6 = iParam3;
	Global_1051194.f_5 = iParam4;
	if (!bParam5)
	{
		iVar0 = SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
	}
	else
	{
		iVar0 = iParam6;
	}
	Global_1051194.f_1 = iVar0;
	Global_1051194 = 1;
}

struct<4> func_727()
{
	struct<4> Var0;

	return Var0;
}

bool func_728(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_729(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_976(func_975(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_730(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 36)
	{
		return false;
	}
	return true;
}

int func_731(int iParam0)
{
	if (!func_730(iParam0))
	{
		return 0;
	}
	return Global_1292096.f_2986[iParam0];
}

int func_732(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_730(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		bVar0 = func_977(iParam0);
		if (func_728(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_978(255);
			}
			else
			{
				iVar1 = func_400(bVar0, func_399(1), -2.696814E-33f, 1, 0, 0);
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
		bVar0 = func_979(iParam0);
		if (func_728(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_400(bVar0, func_399(1), -2.696814E-33f, 1, 0, 0);
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

void func_733(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

void func_734(int iParam0, int iParam1, int iParam2)
{
	Global_1295802.f_522[iParam0 /*7*/][iParam1 /*3*/].f_1 = iParam2;
}

void func_735(int iParam0, int iParam1, int iParam2)
{
	Global_1295802.f_522[iParam0 /*7*/][iParam1 /*3*/] = iParam2;
}

void func_736(int iParam0, int iParam1, int iParam2)
{
	Global_1295802.f_522[iParam0 /*7*/][iParam1 /*3*/].f_2 = iParam2;
}

int func_737()
{
	return Global_1940239.f_11605;
}

int func_738(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (iParam0 == Global_265213.f_107995.f_13575[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_739()
{
	bool bVar0;
	struct<4> Var3;
	int iVar7;

	iVar7 = func_738(func_737());
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(Global_265213.f_107995.f_14228[iVar7], 0, &bVar0))
	{
	}
	Var3 = { func_980(bVar0, 1) };
	if (func_981(bVar0, 0, 1, 0) > 0 && (func_982(Var3) - Global_1295619.f_16) > 0)
	{
		return true;
	}
	return false;
}

int func_740(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_983(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_741(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_742(int iParam0, int iParam1)
{
	return (Global_1101558[iParam0 /*38*/].f_36.f_1 && iParam1) != 0;
}

float func_743(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_744()
{
	return 1120403456 /* Float: 100f */;
}

void func_745(int iParam0, int iParam1)
{
	Global_1300340.f_155.f_4[iParam0 /*4*/] = iParam1;
}

void func_746(int iParam0, int iParam1)
{
	Global_1300340.f_155.f_4[iParam0 /*4*/].f_3 = iParam1;
}

void func_747(int iParam0)
{
	func_984(iParam0);
	func_985(iParam0);
	func_746(iParam0, 0);
}

void func_748(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;

	Var5 = -1;
	Var5.f_9 = -1f;
	func_986(iParam0);
	iVar4 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar3 = ENTITY::GET_ENTITY_MODEL(iVar4);
	iVar2 = func_987(iVar3);
	iVar1 = iParam0;
	if (func_988() <= 0)
	{
		if (func_989(1))
		{
			GRAPHICS::DISABLE_ENTITYMASK();
			func_990(1);
		}
		if (func_989(2))
		{
			iVar0 = 0;
			while (iVar0 <= (iVar2 - 1))
			{
				if (func_991(iVar1, iVar0))
				{
				}
				else if (!func_992(iVar3, iVar0, &Var5))
				{
				}
				else
				{
					GRAPHICS::ANIMPOSTFX_STOP(&(Var5.f_1));
				}
				iVar0++;
			}
			func_990(2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		GRAPHICS::_REMOVE_ENTITY_FROM_ENTITY_MASK(iVar4);
	}
}

var func_749(int iParam0)
{
	return Global_1101558[iParam0 /*38*/].f_36;
}

var func_750(int iParam0)
{
	return Global_1300340.f_155.f_4[iParam0 /*4*/].f_3;
}

int func_751()
{
	return 3000;
}

int func_752(int iParam0, int iParam1, int iParam2)
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

float func_753(float fParam0, float fParam1, float fParam2)
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

float func_754(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_755(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<34> Var5;

	Var5.f_26 = -1;
	Var5.f_27 = -1f;
	Var5.f_28 = -1;
	Var5.f_29 = -1;
	Var5.f_30 = -1;
	Var5.f_31 = -1;
	Var5.f_32 = -1;
	iVar1 = iParam0;
	iVar4 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar3 = ENTITY::GET_ENTITY_MODEL(iVar4);
	iVar2 = func_993(iVar3);
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (func_994(iVar1, iVar0))
		{
		}
		else if (!func_995(iVar3, iVar0, &Var5))
		{
		}
		else if (Var5.f_33 & 64 != 0)
		{
			if (iParam1 > Var5.f_32)
			{
			}
			else
			{
				STREAMING::REQUEST_NAMED_PTFX_ASSET(Var5.f_16);
				if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(Var5.f_16))
				{
				}
				else
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET(&(Var5.f_8));
					if (Var5.f_33 & 8 != 0)
					{
						GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(BUILTIN::TO_FLOAT(Var5.f_28), BUILTIN::TO_FLOAT(Var5.f_30), BUILTIN::TO_FLOAT(Var5.f_29));
					}
					if (Var5.f_33 & 16 != 0)
					{
						GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(BUILTIN::TO_FLOAT(Var5.f_31));
					}
					if (Var5.f_33 & 32 != 0)
					{
						GRAPHICS::_SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE(Var5.f_23);
					}
					GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(&Var5, iVar4, Var5.f_17, Var5.f_20, Var5.f_26, Var5.f_27, Var5.f_33 & 1 != 0, Var5.f_33 & 2 != 0, Var5.f_33 & 4 != 0);
					func_996(iVar1, iVar0);
				}
			}
			iVar0++;
		}
	}
}

void func_756(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;

	Var5 = -1;
	Var5.f_9 = -1f;
	func_997(iParam0);
	if (!func_989(1))
	{
		GRAPHICS::ENABLE_ENTITYMASK();
		func_998(1);
	}
	iVar4 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar3 = ENTITY::GET_ENTITY_MODEL(iVar4);
	iVar2 = func_987(iVar3);
	iVar1 = iParam0;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (func_991(iVar1, iVar0))
		{
		}
		else if (!func_992(iVar3, iVar0, &Var5))
		{
		}
		else
		{
			GRAPHICS::ANIMPOSTFX_PLAY(&(Var5.f_1));
			GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY(iVar4, Var5, Var5.f_9);
			func_999(iVar1, iVar0);
			func_998(2);
		}
		iVar0++;
	}
}

void func_757(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if ((!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1220811.f_1099[iParam0 /*3*/]) || Global_1220811.f_1099[iParam0 /*3*/].f_1 != iParam1) || Global_1220811.f_1099[iParam0 /*3*/].f_2 != iParam2)
	{
		func_435(iParam0);
		vVar0 = { Global_1220811.f_48[iParam1 /*21*/][iParam2 /*4*/].f_1 };
		vVar3 = { 2f, 2f, 2f };
		Global_1220811.f_1099[iParam0 /*3*/] = PED::ADD_SCENARIO_BLOCKING_AREA((vVar0.x - vVar3.x), (vVar0.y - vVar3.y), (vVar0.z - vVar3.z), (vVar0.x + vVar3.x), (vVar0.y + vVar3.y), (vVar0.z + vVar3.z), false, 16);
		Global_1220811.f_1099[iParam0 /*3*/].f_1 = iParam1;
		Global_1220811.f_1099[iParam0 /*3*/].f_2 = iParam2;
	}
}

bool func_758(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (Global_1295185[iParam0 /*2*/].f_1 != iParam1)
	{
		return false;
	}
	if (!func_579(1, iParam0))
	{
		return false;
	}
	if (!func_579(8, iParam0))
	{
		return false;
	}
	if (!func_579(4, iParam0))
	{
		return false;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295158.f_2), iParam0))
	{
		return false;
	}
	return true;
}

bool func_759(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (Global_1295158.f_22 >= 3)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&uParam0, iVar0))
		{
		}
		else if (!func_758(iVar0, iParam1))
		{
			SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&uParam0, iVar0);
		}
		iVar0++;
	}
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam0))
	{
		return true;
	}
	func_1000(&(Global_1295158.f_3[Global_1295158.f_22 /*6*/]));
	Global_1295158.f_3[Global_1295158.f_22 /*6*/] = iParam1;
	Global_1295158.f_3[Global_1295158.f_22 /*6*/].f_2 = uParam0;
	SCRIPTS::_0xFFDDF802279BE128(&(Global_1295158.f_2), &(Global_1295158.f_3[Global_1295158.f_22 /*6*/].f_2), &uVar1);
	Global_1295158.f_2 = uVar1;
	Global_1295158.f_22++;
	return true;
}

void func_760(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_761(var uParam0, int iParam1, int iParam2)
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1295158.f_2), iParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(uParam0->f_2), iParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(uParam0->f_4), iParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(uParam0->f_5), iParam2);
	if (uParam0->f_3 == iParam1)
	{
		uParam0->f_3 = 255;
	}
}

void func_762(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 < 0 || iParam0 >= 3)
	{
		return;
	}
	if (Global_1295158.f_22 <= 0)
	{
		return;
	}
	iVar0 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295158.f_2), 0);
	iVar1 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295158.f_2), 1);
	iVar2 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295158.f_3[iParam0 /*6*/].f_2), 0);
	iVar3 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295158.f_3[iParam0 /*6*/].f_2), 1);
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1295158.f_2), 0, (iVar0 - iVar2));
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1295158.f_2), 1, (iVar1 - iVar3));
	Global_1295158.f_22 = (Global_1295158.f_22 - 1);
	Global_1295158.f_3[iParam0 /*6*/] = { Global_1295158.f_3[Global_1295158.f_22 /*6*/] };
	func_1000(&(Global_1295158.f_3[Global_1295158.f_22 /*6*/]));
}

void func_763(var uParam0)
{
	struct<27> Var0;
	int iVar27;

	Var0 = -1;
	Var0.f_1 = 10;
	Var0.f_13 = 7;
	Var0.f_21 = 2;
	*uParam0 = { Var0 };
	iVar27 = 0;
	while (iVar27 <= 6)
	{
		uParam0->f_13[iVar27] = 255;
		iVar27++;
	}
}

void func_764(var uParam0)
{
	struct<162> Var0;
	int iVar162;
	int iVar163;

	Var0.f_1 = 10;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_2 = -1;
	Var0.f_1.f_1.f_3 = 7;
	Var0.f_1.f_1.f_11 = 2;
	Var0.f_1.f_1.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	*uParam0 = { Var0 };
	iVar163 = 0;
	while (iVar163 < 10)
	{
		iVar162 = 0;
		while (iVar162 <= 6)
		{
			uParam0->f_1[iVar163 /*16*/].f_3[iVar162] = 255;
			iVar162++;
		}
		iVar163++;
	}
}

void func_765(var uParam0)
{
	struct<38> Var0;

	Var0.f_4 = 5;
	Var0.f_19 = 255;
	*uParam0 = { Var0 };
}

void func_766(var uParam0)
{
	struct<30> Var0;

	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 4;
	Var0.f_5.f_1.f_1 = -1;
	Var0.f_5.f_1.f_3.f_1 = -1;
	Var0.f_5.f_1.f_3.f_3.f_1 = -1;
	Var0.f_5.f_1.f_3.f_3.f_3.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_767(var uParam0)
{
	struct<6> Var0;

	Var0.f_1 = -1;
	Var0.f_2 = 255;
	*uParam0 = { Var0 };
}

void func_768(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_769(var uParam0)
{
	struct<8> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_3 = -1;
	Var0.f_6 = -1;
	*uParam0 = { Var0 };
}

void func_770(var uParam0)
{
	struct<2> Var0;
	int iVar2;

	Var0 = -1;
	Var0.f_1 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		*(uParam0[iVar2 /*2*/]) = { Var0 };
		iVar2++;
	}
}

void func_771(var uParam0)
{
	struct<67> Var0;

	Var0 = 32;
	Var0.f_1 = 255;
	Var0.f_1.f_2 = 255;
	Var0.f_1.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	*uParam0 = { Var0 };
}

int func_772(int iParam0)
{
	return iParam0 * 31;
}

int func_773(int iParam0)
{
	return func_772(iParam0) + 30;
}

int func_774(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 0;
		case 2:
			return 6.018873E-22f;
		case 3:
			return -2.968788E-24f;
		case 4:
			return -5.768865E+13f;
		case 5:
			return 3.417947E+15f;
		case 6:
			return 1.394477E+34f;
		case 7:
			return 0.01177266f;
		case 8:
			return -6.601343E+20f;
		case 9:
			return 3.063895E+19f;
		case 10:
			return -2.326967E-28f;
		case 11:
			return -1.604673E+34f;
		case 12:
			return -2.481286E-13f;
		case 13:
			return -2.549313E-23f;
		case 14:
			return 4.806293E-32f;
		case 15:
			return 1.195099E-23f;
		case 16:
			return 3.438843E-32f;
		case 17:
			return 5.691045E-24f;
		case 18:
			return 1.512815E-10f;
		case 19:
			return 0.0002818887f;
		case 20:
			return 1.698109E+10f;
		case 21:
			return -5.469611E-07f;
		case 22:
			return -7.878068E-13f;
		case 23:
			return -1.47971E-23f;
		case 24:
			return -3.720052E+37f;
		case 25:
			return -3.875977E-36f;
		case 26:
			return -7.30401E-28f;
		case 27:
			return 492.721f;
		case 28:
			return -9.044586E+34f;
		case 29:
			return -0.03295568f;
		case 30:
			return -2.962387E+29f;
		case 31:
			return 3.857327E-23f;
		case 32:
			return -5.010316E-13f;
		case 33:
			return -1.155488E-21f;
		case 34:
			return 2.232951E-24f;
		case 35:
			return 8.771058E+15f;
		case 36:
			return -26799.71f;
		case 37:
			return -6.010485E-09f;
		case 38:
			return 11179.4f;
		case 39:
			return 7.17907E+36f;
		case 40:
			return -726455.8f;
		case 41:
			return -5.628425E-31f;
		case 42:
			return 7.6268E-24f;
		case 43:
			return 8.041465E+22f;
		case 44:
			return -132684.3f;
		case 45:
			return -0.0001690958f;
		case 46:
			return -0.0007157639f;
		case 47:
			return 3.830978E-26f;
		case 48:
			return 6.474655E-12f;
		case 49:
			return -4.819223E-35f;
		case 50:
			return 1.181223E+15f;
		case 51:
			return 2.571264E+29f;
		case 52:
			return 2.708598E-29f;
		case 53:
			return -6.023225E-22f;
		case 54:
			return -9.285142E-28f;
		case 55:
			return -7.477594E-28f;
		case 56:
			return -11.25667f;
		case 57:
			return -2.814439E-36f;
		case 58:
			return -1.785588E+12f;
		case 59:
			return -1.592343E-23f;
		case 60:
			return 2.039541E-31f;
		case 61:
			return 7.890838E+34f;
		case 62:
			return -2.278089E-24f;
		case 63:
			return -1.702943E+08f;
		case 64:
			return 4.336896E-27f;
		case 65:
			return -1.004257E+15f;
		case 66:
			return 3.129357E+22f;
		case 67:
			return -6.790747E+26f;
		case 68:
			return 6.625404E+28f;
		case 69:
			return -1.930895E+16f;
		case 70:
			return 4.10189E+15f;
		case 71:
			return -1.249687E-12f;
		case 72:
			return 1.456986E-37f;
		case 73:
			return 1.700162E+10f;
		case 74:
			return 5.439653E-37f;
		case 75:
			return 9.740657E-17f;
		case 76:
			return -9.433094E+11f;
		case 77:
			return -5.364916f;
		case 78:
			return -2.146849E+14f;
		case 79:
			return 4.036857E-29f;
		case 80:
			return 4.169699E+10f;
		case 81:
			return -1.15607E+08f;
		case 82:
			return -5.090899E+07f;
		case 83:
			return 114407.3f;
		case 84:
			return 1.937016E-33f;
		case 85:
			return 2.927928E+38f;
		case 86:
			return -1.721059E+10f;
		case 87:
			return -3.667E+36f;
		case 88:
			return 1.652391E-25f;
		case 89:
			return 8.784803E+32f;
		case 90:
			return -7.210558E-35f;
		case 91:
			return 3.715571E+21f;
		case 92:
			return 1.506289E+25f;
		case 93:
			return 7.384705E-29f;
		case 94:
			return 8.284682E+30f;
		case 95:
			return -2.75129E+33f;
		case 96:
			return -1.68381E-07f;
		case 97:
			return 1.057402E+28f;
		case 98:
			return -0.005638561f;
		case 99:
			return 4.076655E-35f;
		case 100:
			return 1.221281E+15f;
		case 101:
			return -1.118195E+26f;
		case 102:
			return -1.805279E-37f;
		case 103:
			return -2.531934E-12f;
		case 104:
			return -83.6352f;
		case 105:
			return 3.446141E+19f;
		case 106:
			return 3.67491E-23f;
		case 107:
			return 9.684985E-12f;
		case 108:
			return 0.9285743f;
		case 109:
			return -1.064755E+22f;
		case 110:
			return -1.942437E-34f;
		case 111:
			return -3.958189E-06f;
		case 112:
			return 7.402363E-34f;
		case 113:
			return 2.025378E-19f;
		case 114:
			return -7.424313E-17f;
		case 115:
			return -1.119322E+20f;
		case 116:
			return 1.39581E+20f;
		case 117:
			return 8.651038E-29f;
		case 118:
			return 2.570009E+14f;
		case 119:
			return -2.051815E+30f;
		case 120:
			return 0.01683277f;
		case 121:
			return -1.342511E-27f;
		case 122:
			return -0.00347666f;
		case 123:
			return 9.28535E+13f;
		case 124:
			return -9.098737E-06f;
		case 125:
			return 5.679467E+20f;
		case 126:
			return 2.660481E-16f;
		case 127:
			return -3.189977E+38f;
		case 128:
			return -4.857035E+19f;
		case 129:
			return -1.6901E-05f;
		case 130:
			return -5.241215E+29f;
		case 131:
			return 2.034718E-27f;
		case 132:
			return 3.234859E-14f;
		case 133:
			return 2797.674f;
		case 134:
			return -0.0003269404f;
		case 135:
			return 1.861606E+23f;
		case 136:
			return 3.613264E-28f;
		case 137:
			return -8.824338E+30f;
		case 138:
			return -1.447976E-09f;
		case 139:
			return -3.666951E-25f;
		case 140:
			return 6.975859E-31f;
		case 141:
			return -3.82801E+24f;
		case 142:
			return 2.269853f;
		case 143:
			return -5.729564E+35f;
		case 144:
			return -1.127967E-18f;
		case 145:
			return -1.490538E-18f;
		case 146:
			return 9.210851E-22f;
		case 147:
			return -9.576678E+31f;
		case 148:
			return 2.231703E+21f;
		case 149:
			return -5.051792f;
		case 150:
			return -57170.2f;
		case 151:
			return 2639906;
		case 152:
			return -9.310771E+35f;
		case 153:
			return -1.482966E-16f;
		case 154:
			return -3.719898E-05f;
		case 155:
			return -9.034405E+14f;
		case 156:
			return 3830.489f;
		case 157:
			return 5.015143E-20f;
		case 158:
			return 225353.9f;
		case 159:
			return 3.576063E+31f;
		case 160:
			return -1.816383E+26f;
		case 161:
			return 4.66574E+17f;
		case 162:
			return 5.58442E-30f;
		case 163:
			return -5.92338E-32f;
		case 164:
			return 1.632652E+13f;
		case 165:
			return -1.930863E+35f;
		case 166:
			return 1.20855E+16f;
		case 167:
			return 123956.7f;
		case 168:
			return -5.18465E-06f;
		case 169:
			return -9.78492E-08f;
		case 170:
			return -2.061071E-13f;
		case 171:
			return 2.538595E-24f;
		case 172:
			return -3.247475E+19f;
		case 173:
			return -3.245429E+19f;
		case 174:
			return -8.187954f;
		case 175:
			return -1.943739E+32f;
		case 176:
			return 1.158411E-13f;
		case 177:
			return 8.415453E-18f;
		case 178:
			return 7.67535E+33f;
		case 179:
			return 1.00052E+21f;
		case 180:
			return 9.229372E-31f;
		case 181:
			return 6.4567E-33f;
		case 182:
			return 40181.18f;
		case 183:
			return -8.200105E+15f;
		case 184:
			return -1.595292E+21f;
		case 185:
			return -4.520527E+16f;
		case 186:
			return 1.600127E-25f;
		case 187:
			return 1.796135E+34f;
		case 188:
			return -1.021722E+15f;
		case 189:
			return 3.245267E+37f;
		case 190:
			return 2.687742E+34f;
		case 191:
			return -1.518161f;
		case 192:
			return -2.839449E-37f;
		case 193:
			return 1.532131E+28f;
		case 194:
			return -9.948059E-36f;
		case 195:
			return 9.358984E-28f;
		case 196:
			return 2.386811E-23f;
		case 197:
			return 1.484916E+27f;
		case 198:
			return -9.517253E-20f;
		case 199:
			return 4.580068E+08f;
		case 200:
			return 7.177147E+31f;
		case 201:
			return -6.897735E+30f;
		case 202:
			return -2.123113E+24f;
		case 203:
			return 1.754884E+16f;
		case 204:
			return 3.541762E-14f;
		case 205:
			return -4.0553E-32f;
		case 206:
			return -1.403277E-16f;
		case 207:
			return 1.019519E+12f;
		case 208:
			return 3.219871E+13f;
		case 209:
			return 2.438279E+12f;
		case 210:
			return 1.524272E+11f;
		case 211:
			return 1.619427E-05f;
		case 212:
			return -1.802547E+23f;
		case 213:
			return 2.161028E+24f;
		case 214:
			return 8.562073E-23f;
		case 215:
			return -2.617699E+11f;
		case 216:
			return 4.914521E+31f;
		case 217:
			return 23806.65f;
		case 218:
			return 4.056427E-22f;
		case 219:
			return 7.745186E-22f;
		case 220:
			return -4.173283E-23f;
		case 221:
			return -0.001186175f;
		case 222:
			return -3.101512E-06f;
		case 223:
			return -1.936995E+07f;
		case 224:
			return 5.307078E-38f;
		case 225:
			return -2.273008E+20f;
		case 226:
			return -6.515336f;
		case 227:
			return 1.400969E-09f;
		case 228:
			return 8.023405E-32f;
		case 229:
			return -0.03129486f;
		case 230:
			return 4.826337E-37f;
		case 231:
			return -3.517893E+29f;
		case 232:
			return -5.348166E+09f;
		case 233:
			return 1.876642E-20f;
		case 234:
			return 5.266588E-05f;
		case 235:
			return -5.678037E+20f;
		case 236:
			return -4.63353E+10f;
		case 237:
			return -5321.269f;
		case 238:
			return 7.40001E-19f;
		case 239:
			return -3.80013E-27f;
		case 240:
			return -2.550436E+10f;
		case 241:
			return 1.384147E+38f;
		case 242:
			return 1263.089f;
		case 243:
			return -1.845624E-26f;
		case 244:
			return -1.404146E+36f;
		case 245:
			return 4561480f;
		case 246:
			return -1.372353E+09f;
		case 247:
			return -5.148128E+15f;
		case 248:
			return -3.258192E+10f;
		case 249:
			return 3.341225E+10f;
		case 250:
			return 5.415492E-13f;
		case 251:
			return -1.843849E-34f;
		case 252:
			return -2.274686E-27f;
		case 253:
			return -1.427858E+29f;
		case 254:
			return -1.499042E+22f;
		case 255:
			return -6.424243E-08f;
		case 256:
			return 2.154985E+10f;
		case 257:
			return -7.837845E+24f;
		case 258:
			return -2.879063E+30f;
		case 259:
			return 92664.8f;
		case 260:
			return 3.48638E-28f;
		case 261:
			return -8.06938E-32f;
		case 262:
			return -2.381681E-27f;
		case 263:
			return -2.300287E-34f;
		case 264:
			return 3.545379E-20f;
		case 265:
			return 2.697662E+16f;
		case 266:
			return 1.373216E-25f;
		case 267:
			return 2.632494E+36f;
		case 268:
			return 8.90138E-33f;
		case 269:
			return 0.2962695f;
		case 270:
			return 9.015451E-08f;
		case 271:
			return 1.774752E-30f;
		case 272:
			return 1.581516E-26f;
		case 273:
			return -282.7467f;
		case 274:
			return -6.344716E-28f;
		case 275:
			return -8.133852E+37f;
		case 276:
			return 1.489021E-35f;
		case 277:
			return -1.779388E-37f;
		case 278:
			return 3.024823E-24f;
		case 279:
			return 1.467581E-15f;
		case 280:
			return 1.596098E+15f;
		case 281:
			return 4.81334E-15f;
		case 282:
			return 8924991;
		case 283:
			return 1.848634E-05f;
		case 284:
			return 2.652232E+35f;
		case 285:
			return -1.94683E-06f;
		case 286:
			return -8.462241E-18f;
		case 287:
			return 4.574938E-23f;
		case 288:
			return 5.86613E-24f;
		case 289:
			return 3.942653E+18f;
		case 290:
			return 9.751463E-22f;
		case 291:
			return 2.127248E+36f;
		case 292:
			return 4770.254f;
		case 293:
			return 2.848056E+34f;
		case 294:
			return -2.041119E+33f;
		case 295:
			return 0.0006897121f;
		case 296:
			return -8.848268E-17f;
		case 297:
			return 4.345174E-15f;
		case 298:
			return -2.148294E+26f;
		case 299:
			return 3.388361E+25f;
		case 300:
			return -1.174137E+20f;
		case 301:
			return 7.912783E+18f;
		case 302:
			return -2.551227E+12f;
		case 303:
			return 6.795525E+14f;
		case 304:
			return -8.358771E+25f;
		case 305:
			return 2.752607E+34f;
		case 306:
			return -3.216764E+16f;
		case 307:
			return 7.861828E+31f;
		case 308:
			return -3.417384E-25f;
		case 309:
			return -1.270632E+36f;
		case 310:
			return 432557.3f;
		case 311:
			return -7.390744E+27f;
		case 312:
			return -3.514468E-28f;
		case 313:
			return -1.823707E+19f;
		case 314:
			return -1.179158f;
		case 315:
			return 3.63465E-07f;
		case 316:
			return 1.854668E-22f;
		case 317:
			return -6.830476E-23f;
		case 318:
			return 1.618459E+15f;
		case 319:
			return -1.281605E+28f;
		case 320:
			return -7.327206E+15f;
		case 321:
			return -8.338831E-14f;
		case 322:
			return 4.142775E-28f;
		case 323:
			return 5.199964E-38f;
		case 324:
			return 4.17653E+37f;
		case 325:
			return 2.406819E+17f;
		case 326:
			return -6.496393E+20f;
		case 327:
			return 1.059608E-30f;
		case 328:
			return -6.261367E+10f;
		case 329:
			return 1.220162E+23f;
		case 330:
			return 4387.152f;
		case 331:
			return 2.897249E-36f;
		case 332:
			return 3.766179E+18f;
		case 333:
			return -1.019144E+27f;
		case 334:
			return -7.967271E+26f;
		case 335:
			return 1.862696E+30f;
		case 336:
			return -8.470243E-19f;
		case 337:
			return -3.218709E+20f;
		case 338:
			return -3.242665E-35f;
		case 339:
			return -0.005809053f;
		case 340:
			return 8.740328E-18f;
		case 341:
			return 3.991759E-22f;
		case 342:
			return -1.481287E+16f;
		case 343:
			return 0.0002667577f;
		case 344:
			return -2.006529E+31f;
		case 345:
			return -6.533963E+28f;
		case 346:
			return 1668753f;
		case 347:
			return -3.983682E-10f;
		case 348:
			return 3.322521E+08f;
		case 349:
			return -2.192694E+22f;
		case 350:
			return -8.576926E+34f;
		case 351:
			return 5.792796E+22f;
		case 352:
			return -2.098746E-08f;
		case 353:
			return -6.14167E-08f;
		case 354:
			return -1.061366E-19f;
		case 355:
			return -9.071837E+13f;
		case 356:
			return 1.698467E+09f;
		case 357:
			return -4.464018E+36f;
		case 358:
			return 4.944663E-18f;
		case 359:
			return 1.351745E+31f;
		case 360:
			return 2498.163f;
		case 361:
			return 8.748928E-11f;
		case 362:
			return -5.676958E-10f;
		case 363:
			return 1.958629E+29f;
		case 364:
			return 8.016178E+22f;
		case 365:
			return -2.753871E-05f;
		case 366:
			return -4152059f;
		case 367:
			return 1.38467E-05f;
		case 368:
			return -1452505f;
		case 369:
			return -1.251346E+26f;
		case 370:
			return -4.068338E-14f;
		case 371:
			return -1.983992E+08f;
		case 372:
			return -3.190189E+12f;
		case 373:
			return -4.155539E+24f;
		case 374:
			return 3.797897E-07f;
		case 375:
			return 1.049532E-16f;
		case 376:
			return 2.362093E+24f;
		case 377:
			return 1.199864E-20f;
		case 378:
			return 3.684313E-07f;
		case 379:
			return -1.06285E+20f;
		case 380:
			return -1.112779E-28f;
		case 381:
			return 4.040528E-12f;
		case 382:
			return -28.50204f;
		case 383:
			return -4.179554E+17f;
		case 384:
			return 3.264599E-07f;
		case 385:
			return 6.322613E+17f;
		case 386:
			return 1.027896E+08f;
		case 387:
			return -1.313957E-31f;
		case 388:
			return -3.239443E+25f;
		case 389:
			return -8031577f;
		case 390:
			return 1.306222E-36f;
		case 391:
			return -0.001480579f;
		case 392:
			return 4.61996E-20f;
		case 393:
			return -5448066f;
		case 394:
			return -5.058997E-36f;
		case 395:
			return 1.446155E-35f;
		case 396:
			return 1.919886E+37f;
		case 397:
			return 6.734571E+26f;
		case 398:
			return -8.000608E-25f;
		case 399:
			return -66294.84f;
		case 400:
			return -0.0002686941f;
		case 401:
			return -1.91104E+21f;
		case 402:
			return -1.447189E+35f;
		case 403:
			return -2.65174E-30f;
		case 404:
			return -8.497122E-39f;
		case 405:
			return 2.369915E-38f;
		case 406:
			return 4.377507E-09f;
		case 407:
			return -1.13844E-11f;
		case 408:
			return -0.3562748f;
		case 409:
			return -3.243194E-28f;
		case 410:
			return -1.044619E-17f;
		case 411:
			return -9.24321E-27f;
		case 412:
			return 5.927617E+28f;
		case 413:
			return 6.298977E+12f;
		case 414:
			return 3952543f;
		case 415:
			return 4.520462E-05f;
		case 416:
			return -1.781559E-31f;
		case 417:
			return -1.268986E+30f;
		case 418:
			return -1.489747E+21f;
		case 419:
			return -5.061625E+08f;
		case 420:
			return 2.137965E+09f;
		case 421:
			return -4.374972E-23f;
		case 422:
			return -4.291775E+35f;
		case 423:
			return -3.478806E-07f;
		case 424:
			return -258991.4f;
		case 425:
			return 2.490861E+15f;
		case 426:
			return -4.384051E-08f;
		case 427:
			return 1.029925E+36f;
		case 428:
			return -3.112198E-31f;
		case 429:
			return -6.00059E+25f;
		case 430:
			return -7.663869E+34f;
		case 431:
			return -124.1179f;
		case 432:
			return -1.827831E+08f;
		case 433:
			return -1.522341E+28f;
		case 434:
			return -1.607069E-18f;
		case 435:
			return 1.759952E+16f;
		case 436:
			return 4.612022E+29f;
		case 437:
			return -3.089258E-09f;
		case 438:
			return -3.603072E-20f;
		case 439:
			return -1.432987E-30f;
		case 440:
			return -1.561556E+36f;
		case 441:
			return 5.490694E+07f;
		case 442:
			return 0.001127737f;
		case 443:
			return -0.0447596f;
		case 444:
			return 9.259761E+25f;
		case 445:
			return 0.0486636f;
		case 446:
			return -1.830109E-27f;
		case 447:
			return 1.257748E-18f;
		case 448:
			return 5.162743E+07f;
		case 449:
			return 8.334589E+14f;
		case 450:
			return 1.453513E-08f;
		case 451:
			return 1566.836f;
		case 452:
			return -2.085063E+36f;
		case 453:
			return 6.609273E-36f;
		case 454:
			return 2.935782E-10f;
		case 455:
			return 7.700718E-19f;
		case 456:
			return 2.487033E+36f;
		case 457:
			return 2.431699E+16f;
		case 458:
			return -3.337206E+14f;
		case 459:
			return -9.321057E+23f;
		case 460:
			return -656.4265f;
		case 461:
			return -3.281504E-08f;
		case 462:
			return -2.385422E-14f;
		case 463:
			return -1.973769E-29f;
		case 464:
			return -1.105355E-35f;
		case 465:
			return -1.136606E-13f;
		case 466:
			return -2.404253E-22f;
		case 467:
			return -3.092042E+37f;
		case 468:
			return 4.2744E-10f;
		case 469:
			return 6.021841E-16f;
		case 470:
			return -3.031179E-37f;
		case 471:
			return -1.387604E+17f;
		case 472:
			return -6.274337E-13f;
		case 473:
			return 2.925166E-09f;
		case 474:
			return 9.37709E-13f;
		case 475:
			return -2.358857E-11f;
		case 476:
			return -4.893247E-10f;
		case 477:
			return 1.03349E+36f;
		case 478:
			return -5.824456E-12f;
		case 479:
			return -1.200479E-24f;
		case 480:
			return 1030774f;
		case 481:
			return 7.241738E-16f;
		case 482:
			return -2.493038E+31f;
		case 483:
			return 3.006712E-13f;
		case 484:
			return 2.082402E-24f;
		case 485:
			return 166.0252f;
		case 486:
			return -1.341525E-21f;
		case 487:
			return -5.010468E-11f;
		case 488:
			return 1.094749E+34f;
		case 489:
			return 3.426977E-31f;
		case 490:
			return -4.031321E+35f;
		case 491:
			return -1.088854E+27f;
		case 492:
			return -1.78843E+18f;
		case 493:
			return -1.311089E+10f;
		case 494:
			return -1.677921E+16f;
		case 495:
			return 1.367317E+38f;
		case 496:
			return 4.828477E+10f;
		case 497:
			return 2.051753E+35f;
		case 498:
			return -1.554833E+35f;
		case 499:
			return 9.238222E-15f;
		case 500:
			return -5331037f;
		case 501:
			return 0.06989291f;
		case 502:
			return 4.311626E-10f;
		case 503:
			return -2.418136E-18f;
		case 504:
			return -5.705106E-28f;
		case 505:
			return -8948266f;
		case 506:
			return -8.565034E+17f;
		case 507:
			return -1.422571E+25f;
		case 508:
			return -1.295053E+36f;
		case 509:
			return 2.166862E-27f;
		case 510:
			return 9.05038E-07f;
		case 511:
			return -114477.2f;
		case 512:
			return -1.13808E+16f;
		case 513:
			return 2009.081f;
		case 514:
			return -1.638965E+10f;
		case 515:
			return -8.064149E+20f;
		case 516:
			return -1.802423E+31f;
		case 517:
			return 2.005556E-30f;
		case 518:
			return -2.150832E-17f;
		case 519:
			return -1.419641E-23f;
		case 520:
			return 1.789518E+19f;
		case 521:
			return -7.579384E-39f;
		case 522:
			return -5.146829E+30f;
		case 523:
			return -8.546294E-16f;
		case 524:
			return -1.23893E-24f;
		case 525:
			return 8.345417E+09f;
		case 526:
			return 4.05578E+21f;
		case 527:
			return -6.1148E-22f;
		case 528:
			return -9.877215E-14f;
		case 529:
			return 1.320348E-33f;
		case 530:
			return -4.465807E+12f;
		case 531:
			return -5.773161E+22f;
		case 532:
			return -5.936743E-10f;
		case 533:
			return -1.061074E+23f;
		case 534:
			return -4.834516E+09f;
		case 535:
			return -8.744189E+18f;
		case 536:
			return 7.048311E-08f;
		case 537:
			return 53.74414f;
		case 538:
			return -1.403614E-19f;
		case 539:
			return -4.658007E+27f;
		case 540:
			return 1.004971E-36f;
		case 541:
			return -451640.4f;
		case 542:
			return 49667.83f;
		case 543:
			return 2.871331E+25f;
		case 544:
			return 1.094871E-23f;
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

bool func_775(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

bool func_776(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1001(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_686(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_775(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

bool func_777(vector3 vParam0, float fParam3)
{
	return BUILTIN::VDIST(Global_34, vParam0) < fParam3;
}

bool func_778(int iParam0, float fParam1, float fParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		return true;
	}
	if (!STREAMING::_GET_IPL_BOUNDING_SPHERE(iParam0, &vVar0, &fVar3))
	{
		return false;
	}
	fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_33, true, false), vVar0);
	if (fVar4 <= fParam1)
	{
		return false;
	}
	if (fVar4 > fParam2)
	{
		return true;
	}
	if (CAM::IS_SPHERE_VISIBLE(vVar0, fVar3))
	{
		return false;
	}
	return true;
}

bool func_779()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_33);
		if (iVar0 != 0 && INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0) == 2.298547E-11f)
		{
			return true;
		}
	}
	return false;
}

float func_780(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 10.39483f;
		case -1753769127:
			return -6.021634E-13f;
		case -947815572:
			return 2.463351E+13f;
		case -1181950077:
			return -9.789377E-29f;
		case -489737721:
			return 3.438978E+24f;
		case -102827640:
			return -2.715627E+12f;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 3.527324E+15f;
		case -2141419899:
			return 8.931775E-36f;
		case 16844748:
			return 3.414631E-35f;
		case 831940854:
			return -1.309977E-35f;
		case -1387772214:
			return 2.031845E-37f;
		case -1095341658:
			return -61817.89f;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 2.165297E-07f;
		case -1556041029:
			return -7.526159E+11f;
		case -1808329564:
			return -6.693118E+07f;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 4.230495E+25f;
		case 1421300489:
			return 4.774409f;
		case 1248935549:
			return 1.182579E-09f;
		case 943561238:
			return 6.206867E+16f;
		case -1939389836:
			return 3.671904E+30f;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return -3.678597E+19f;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return -1.499713E-25f;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 0.004570915f;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return -13.16232f;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 3.731752E+08f;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return -1.602853E+20f;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 1.326189E-34f;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return -3.480751E-27f;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return -2.348639E-39f;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return -8.356298E+17f;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 13.54672f;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return -1.424349E+29f;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 2.919973E-30f;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 1.289289E-34f;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 1.376032E+38f;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return -7.467291E-21f;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return -3.170216E-25f;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 5.775917E+10f;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return -2.709375E+14f;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return -5.837948E+29f;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 2.400106E-06f;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 1.855959E+21f;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return -1.047808E-33f;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 36.28313f;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 3.757214E+21f;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return -8.808374E-08f;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return -5.761115E-39f;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return -8.850736E-08f;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return -4.902966E-32f;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 2.663387E-18f;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 1.413687E+26f;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return -2.755372E+08f;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return -75147.52f;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 1.59335E-36f;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 1.833625E+33f;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 1.454888E+08f;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return -2.891516E+30f;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return -4.283562E+28f;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 9.916502E+15f;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 8.374674E-17f;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return -8.462052E+37f;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return -7.090175f;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return -3.935926E-27f;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return -1.846074E+15f;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return -4.424457E-39f;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return -5.071125E+31f;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 5.378562E-10f;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 3.095459E+38f;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return -5.748269E+21f;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return -1.508671E-34f;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 1.064154E-19f;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 29.77784f;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return -3.880254E-13f;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 5.12374E+08f;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 76.13673f;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 1.745171E+20f;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return -4.976094E-27f;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 6.90861E+21f;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 3.126971E+26f;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 6.760547E+26f;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 6.771852E-22f;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 2.93055E-21f;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 6.757339E+31f;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return -4.128699E+27f;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 7.047541E+21f;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 1.572858E-18f;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return -3.954603E-20f;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return -1.787606E-31f;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return -9.643982E+07f;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return -1.434042E+24f;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return -1.898492E-10f;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 11141848;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 2.188182E-24f;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return -7.543013E-25f;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 64283.8f;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 3.844501E+08f;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 3.274457E-34f;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return -1.164128E-10f;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 8.658026E+12f;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 269388.8f;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return -5.472106E-16f;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 2.75971E+17f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 2.896847E-12f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 15.47588f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return -4.676435E-29f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return -4.720026E+17f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 7.568736E-38f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return -2.330465E-05f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 5.260598E+36f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return -2.09743E+38f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return -1.507449E+37f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return -1.496241E-28f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return -1.170409E+31f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return -3.176051E-13f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return -7.588614E-14f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return -6.2098E-21f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return -4.731215E-38f;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return -3.51125E+20f;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 2.876475E+28f;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return -8.980352E+24f;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 4.138973E+33f;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 6.84989E+07f;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 6.022484E-14f;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 5.954312E-18f;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 5.633233E-37f;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return -5840755f;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 2.796707E-26f;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return -8155.271f;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return -4.774777E+24f;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 4.140796E+07f;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return -1.545463E-06f;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 5.601683E-09f;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 5.228964E+12f;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return -1.798389E+25f;
		default:
			break;
	}
	return -1.166624E-17f;
}

Vector3 func_781(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return -1012605125, -1021859660, 1112162173;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return -994185257, 1144600412, 1123663217;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_782(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.001804403f;
		case 1:
			return 4.457278E-26f;
		case 2:
			return 1.405172E-36f;
		case 3:
			return 1.014458E-09f;
		case 4:
			return 2.634154E-20f;
		case 5:
			return -2.575919E-20f;
		case 6:
			return 4.630567E+07f;
		case 7:
			return 8.502138E+34f;
		case 8:
			return 2.081225E+24f;
		case 9:
			return -404.1522f;
		case 10:
			return 3.017142E-15f;
		case 11:
			return -9.616156E-08f;
		case 12:
			return -3.847611E+20f;
		case 13:
			return -5.020987E+30f;
		case 14:
			return 5.23669E+37f;
		case 15:
			return 2.960705E+15f;
		case 16:
			return 57000.35f;
		case 17:
			return 0.01703773f;
		case 18:
			return -4.796311E-08f;
		case 19:
			return -7.935022E-22f;
		case 20:
			return -8.708554E+23f;
		case 21:
			return -3.064678E-05f;
		case 22:
			return 4.50876E-21f;
		case 23:
			return 3.942434E-13f;
		case 24:
			return 2.2867E-37f;
		case 25:
			return 2.830387E-11f;
		case 26:
			return 3.354086E-38f;
		case 27:
			return 7.486236E-28f;
		case 28:
			return 5.08311E+19f;
		case 29:
			return 3.577089E+22f;
		case 30:
			return 251.6366f;
		case 31:
			return 9.686418E-08f;
		default:
			break;
	}
	return 1.526336E-16f;
}

bool func_783(int iParam0)
{
	return func_804(iParam0, 2);
}

bool func_784()
{
	return func_791() == 4;
}

bool func_785()
{
	return !func_93(2);
}

bool func_786()
{
	int iVar0;

	iVar0 = func_1002(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1141317[iVar0 /*27*/].f_18.f_1 != 0 && func_246(Global_1141317[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_787(var uParam0, int iParam1)
{
	func_1003(uParam0, iParam1);
}

int func_788(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_789(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_790(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

int func_791()
{
	if (Global_1102813 <= 5)
	{
		return Global_1102813;
	}
	if (Global_1102813 <= 22)
	{
		return 4;
	}
	if (Global_1102813 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_792(int iParam0)
{
	if (func_1004(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

void func_793(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		func_502(iParam0);
	}
}

void func_794(int iParam0)
{
	if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

char* func_795(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua";
	}
	return func_495(&(Global_1887363[func_537(iParam0) /*36*/].f_23));
}

char* func_796(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "setup";
		case 1:
			return "running";
		case 2:
			if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("bvh_nav_camp_teardown"))
			{
				PATHFIND::_NAVMESH_DEACTIVATE_SWAP("bvh_nav_camp_teardown");
			}
			if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("bvh_nav_camp_finale1"))
			{
				PATHFIND::_NAVMESH_DEACTIVATE_SWAP("bvh_nav_camp_finale1");
			}
			return "teardown";
	}
	return "";
}

void func_797(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> Var8;

	MemCopy(&cVar0, {Global_1887363[iParam0 /*36*/].f_23}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_1005(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_1006(iParam2), 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "_setup", 64);
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&Var8))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&Var8, bParam4);
	}
	else if (bParam4)
	{
		bParam3 = true;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&cVar0))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&cVar0, bParam3);
	}
}

int func_798(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_799(var uParam0, var uParam1, var uParam2)
{
	float fVar0;

	*uParam0 = ((171 * *uParam0) % 30269);
	*uParam1 = ((172 * *uParam1) % 30307);
	*uParam2 = ((170 * *uParam2) % 30323);
	fVar0 = (((BUILTIN::TO_FLOAT(*uParam0) / 1189902848) + (BUILTIN::TO_FLOAT(*uParam1) / 1189922304)) + (BUILTIN::TO_FLOAT(*uParam2) / 1189930496));
	*uParam0 = func_798(0 == *uParam0, 171, *uParam0);
	*uParam1 = func_798(0 == *uParam1, 172, *uParam1);
	*uParam2 = func_798(0 == *uParam2, 170, *uParam2);
	return BUILTIN::ROUND((1148846080 * fVar0));
}

float func_800(int iParam0, bool bParam1)
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

bool func_801(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_802(int iParam0)
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
		func_1007(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1008(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

void func_803(int iParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940239.f_245.f_5, iParam0);
	func_1009(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_1010((Global_1940239.f_245.f_1306 - 1));
}

bool func_804(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_805(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951897[iParam0 /*23*/].f_4 = iParam1;
	Global_1951897[iParam0 /*23*/] = iParam4;
	Global_1951897[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951897[iParam0 /*23*/].f_2 = iParam5;
	Global_1951897[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951897[iParam0 /*23*/].f_9 = fParam9;
	Global_1951897[iParam0 /*23*/].f_10 = iParam10;
	Global_1951897[iParam0 /*23*/].f_11 = iParam11;
	Global_1951897[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_5 = iParam12;
	Global_1951897[iParam0 /*23*/].f_1 = 2;
	Global_1951897[iParam0 /*23*/].f_17 = -1;
	Global_1951897[iParam0 /*23*/].f_18 = iParam16;
	Global_1951897[iParam0 /*23*/].f_19 = iParam15;
	Global_1951897[iParam0 /*23*/].f_20 = bParam25;
	Global_1951897[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951897[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951897[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UI_PROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	HUD::_UI_PROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, true);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, false);
			break;
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, true);
			break;
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0f, fParam19);
			break;
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0f, fParam19);
			break;
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(iVar0, fParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UI_PROMPT_REGISTER_END(iVar0);
	Global_1951897[iParam0 /*23*/].f_3 = iVar0;
	func_1011(iParam0, 1);
	func_1012(iParam0, 1);
	func_1013(iParam0, 128);
}

bool func_806(int iParam0)
{
	return (Global_1296343.f_1 && iParam0) != 0;
}

bool func_807()
{
	return Global_1048577;
}

bool func_808(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = Global_1295619.f_16;
	iVar1 = func_639(iParam0);
	Var3 = { func_640(iParam0) };
	STATS::STAT_ID_GET_INT(&Var3, &iVar2);
	if (iVar2 == 0 || (iVar2 + iVar1) > iVar0)
	{
		return true;
	}
	return false;
}

void func_809(int iParam0)
{
	Global_1296343.f_1 = (Global_1296343.f_1 - (Global_1296343.f_1 && iParam0));
}

void func_810(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(bParam0, &(Global_1296343.f_50.f_5), 3);
}

bool func_811(int iParam0)
{
	return func_1014(iParam0);
}

int func_812(bool bParam0, int iParam1)
{
	bParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
}

var func_813(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 43, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 44, iParam1, 0, 1))
	{
		return 0;
	}
	return func_1015(&uVar0);
}

int func_814(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_265213.f_2)
	{
		if (Global_265213.f_57505[iVar0 /*8*/] != iParam0 && Global_265213.f_4[iVar0 /*46*/].f_23 != iParam0)
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

bool func_815(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return false;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(&uVar0, 23, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_651(&uVar0, 65, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(&uVar0, 66, iParam2, 0, 1))
	{
		return false;
	}
	return func_1016(&uVar0);
}

bool func_816(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_728(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_1017(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

char* func_817(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_1018(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_818()
{
	return BUILTIN::FLOOR(func_1020(2f, BUILTIN::TO_FLOAT((func_1019() - 1)))) + 1;
}

int func_819(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_798(bParam2, 1, 0);
	iVar1 = func_1021(iParam0, iParam1);
	if (iVar1 == 0)
	{
		return 0;
	}
	return (BUILTIN::FLOOR(func_1020(2f, BUILTIN::TO_FLOAT((iVar1 - 1)))) + iVar0) + 1;
}

var func_820(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (func_819(iParam0, iParam1, 1) - 1);
	iVar3 = func_1022(iParam0, iParam1);
	iVar1 = func_1023(iParam1, iParam2);
	if (iVar1 == -1 || iVar1 > iVar3)
	{
		iVar1 = 0;
		iVar2 = 0;
	}
	else
	{
		iVar2 = BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar0)));
	}
	return (iVar1 || iVar2);
}

int func_821(bool bParam0)
{
	return func_855(bParam0, 79, 1);
}

struct<4> func_822(int iParam0)
{
	struct<5> Var0;
	struct<4> Var5;
	struct<4> Var9;

	if (!func_650(&Var0))
	{
		return Var9;
	}
	if (!func_651(&Var0, 13, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_651(&Var0, 14, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_651(&Var0, 40, iParam0, 0, 1))
	{
		return Var9;
	}
	Var5.f_3 = iParam0;
	Var5 = func_1024(&Var0);
	func_1025(Var0, &Var5);
	return Var5;
}

bool func_823(var uParam0, int iParam1)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3.f_5 = -1;
	Var0.f_9 = -1;
	Var0.f_3 = { func_645(iParam1) };
	if ((uParam0->f_1 && 0f) != 0)
	{
		return false;
	}
	if (uParam0->f_1 & 2 != 0)
	{
		if (func_320() != 0)
		{
			return false;
		}
	}
	if (uParam0->f_1 & 1 != 0)
	{
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(*uParam0))
		{
			return false;
		}
	}
	if (uParam0->f_1 & 4 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_338(8))
		{
			return false;
		}
	}
	if (uParam0->f_1 & 8 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_617(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return false;
		}
	}
	return true;
}

int func_824()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_611(iVar0, &uVar1);
		if (!func_612(&uVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_825(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var12;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_983(bParam0, uParam1, &Var12, &Var0, iParam2, iParam3, iParam4, bParam5);
}

void func_826(int iParam0, bool bParam1, int iParam2, var uParam3)
{
	func_1026(iParam0, bParam1);
	func_1027(iParam0, iParam2);
	func_1028(iParam0, uParam3);
}

struct<7> func_827(struct<5> Param0)
{
	struct<7> Var0;

	Var0 = func_1029(&Param0);
	Var0.f_1 = func_1030(&Param0);
	switch (Var0)
	{
		case joaat("SERVER"):
			Var0.f_2 = func_1031(&Param0);
			break;
		default:
			Var0.f_2 = func_1032(&Param0);
			break;
	}
	Var0.f_6 = func_1033(&Param0, Var0 == 1.296698E+09f);
	func_1034(Param0, &Var0);
	return Var0;
}

bool func_828(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	int iVar4;

	if (!func_1035(iParam1, uParam0->f_3))
	{
		return true;
	}
	switch (*uParam0)
	{
		case joaat("UNLOCK"):
			iVar0 = uParam0->f_1;
			return func_1036(iVar0, uParam0->f_2);
		case joaat("SERVER"):
			if (!BOUNTY::BOUNTY_GET_LEGENDARY_TARGET(uParam0->f_1, &Var2))
			{
				return false;
			}
			return Var2.f_1 >= uParam0->f_2;
		case joaat("AWARD"):
		case 1204986881:
			bVar1 = uParam0->f_1;
			return func_1037(bVar1, uParam0->f_2);
		case joaat("STAT"):
			if (!STATS::STAT_ID_IS_VALID(&(uParam0->f_4)))
			{
				return false;
			}
			STATS::STAT_ID_GET_INT(&(uParam0->f_4), &iVar4);
			switch (uParam0->f_2)
			{
				case joaat("LESS_THAN"):
					return iVar4 < uParam0->f_6;
				case -1750328213:
					return iVar4 <= uParam0->f_6;
				case joaat("GREATER_THAN"):
					return iVar4 > uParam0->f_6;
				case -555488925:
					return iVar4 >= uParam0->f_6;
				case -1485982111:
					return iVar4 == uParam0->f_6;
				case 1920326201:
					return iVar4 != uParam0->f_6;
				default:
					break;
			}
			return false;
		}

bool func_829(bool bParam0, int iParam1, int iParam2)
{
	if (!func_650(bParam0))
	{
		return false;
	}
	if (!func_651(bParam0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(bParam0, 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_651(bParam0, 19, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_651(bParam0, 13, 0, 0, 0))
	{
		return false;
	}
	if (!func_651(bParam0, 47, iParam2, 0, 1))
	{
		return false;
	}
	return true;
}

var func_830(bool bParam0)
{
	return func_1038(bParam0, 83, 1);
}

var func_831(bool bParam0, int iParam1)
{
	return func_855(bParam0, 93, iParam1);
}

var func_832(bool bParam0)
{
	return func_855(bParam0, 75, 1);
}

var func_833(int iParam0, int iParam1)
{
	return Global_1296343.f_83[iParam0 /*17*/].f_1[iParam1];
}

int func_834(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_818();
	iVar2 = iParam0;
	iVar2 = BUILTIN::SHIFT_RIGHT(iVar2, (32 - iVar1));
	iVar0 = func_1039();
	iVar2 = (iVar2 && iVar0);
	return iVar2;
}

void func_835(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_819(iParam0, iParam1, 0);
	iVar1 = func_1022(iParam0, iParam1);
	if (MISC::IS_BIT_SET(iParam3, iVar0))
	{
		iParam3 = (iParam3 && iVar1);
	}
	else
	{
		iParam3 = -1;
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_2 = iParam3;
					break;
				case 1:
					uParam2->f_4 = iParam3;
					break;
				case 2:
					uParam2->f_5 = iParam3;
					break;
				case 3:
					uParam2->f_1 = iParam3;
					break;
				case 4:
					*uParam2 = iParam3;
					break;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					uParam2->f_2 = iParam3;
					break;
				case 1:
					uParam2->f_4 = iParam3;
					break;
				case 2:
					uParam2->f_5 = iParam3;
					break;
				case 3:
					uParam2->f_1 = iParam3;
					break;
				case 4:
					*uParam2 = iParam3;
					break;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					uParam2->f_2 = iParam3;
					break;
				case 1:
					uParam2->f_4 = iParam3;
					break;
				case 2:
					uParam2->f_5 = iParam3;
					break;
				case 3:
					uParam2->f_1 = iParam3;
					break;
				case 4:
					*uParam2 = iParam3;
					break;
			}
			break;
		default:
			break;
	}
}

var func_836(bool bParam0)
{
	return func_855(bParam0, 67, 1);
}

int func_837(int iParam0, var uParam1, int iParam2)
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

struct<2> func_838()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_839(int iParam0, var uParam1)
{
	Global_1296343.f_58.f_4[iParam0 /*10*/].f_3.f_2 = uParam1;
}

void func_840(int iParam0, var uParam1)
{
	Global_1296343.f_58.f_4[iParam0 /*10*/].f_3.f_4 = uParam1;
}

void func_841(int iParam0, var uParam1)
{
	Global_1296343.f_58.f_4[iParam0 /*10*/].f_3.f_5 = uParam1;
}

void func_842(int iParam0, var uParam1)
{
	Global_1296343.f_58.f_4[iParam0 /*10*/].f_3 = uParam1;
}

void func_843(int iParam0, var uParam1)
{
	Global_1296343.f_58.f_4[iParam0 /*10*/].f_3.f_1 = uParam1;
}

void func_844(int iParam0, struct<2> Param1)
{
	Global_1296343.f_58.f_4[iParam0 /*10*/] = { Param1 };
}

void func_845(int iParam0, var uParam1)
{
	Global_1296343.f_58.f_4[iParam0 /*10*/].f_2 = uParam1;
}

void func_846(int iParam0, var uParam1)
{
	Global_1296343.f_58.f_4[iParam0 /*10*/].f_9 = uParam1;
}

int func_847(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 48, 0, 0, 0))
	{
		return 0;
	}
	return func_812(&uVar0, 10);
}

struct<6> func_848(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	var uVar0;
	struct<6> Var5;
	int iVar11;

	if (!func_650(&uVar0))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 19, Param0.f_3, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 23, Param0.f_3.f_1, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 25, Param0.f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 48, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 49, iParam10, 0, 1))
	{
		return Var5;
	}
	iVar11 = func_1040(&uVar0);
	return func_1041(iVar11);
}

void func_849(var uParam0, var uParam1)
{
	if (!func_1042(uParam0, uParam1))
	{
		return;
	}
	switch (uParam0->f_3)
	{
		case joaat("INT"):
			if (STATS::CHAL_IS_GOAL_ACTIVE(uParam0->f_1, uParam0->f_2))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(uParam0->f_1, uParam0->f_2, uParam0->f_4);
			}
			break;
		default:
			break;
	}
}

int func_850(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 61, 0, 0, 0))
	{
		return 0;
	}
	return func_812(&uVar0, 12);
}

struct<5> func_851(var uParam0, int iParam1)
{
	struct<5> Var0;
	struct<5> Var5;
	var uVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	var uVar14;

	if (!func_650(&Var0))
	{
		return Var5;
	}
	if (!func_651(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	uVar14 = Var0.f_1;
	if (!func_651(&Var0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&Var0, 19, uParam0->f_3, 0, 1))
	{
		return Var5;
	}
	uVar10 = func_831(&Var0, 1);
	if (!func_651(&Var0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&Var0, 23, uParam0->f_3.f_1, 0, 1))
	{
		return Var5;
	}
	uVar13 = func_832(&Var0);
	if (!func_651(&Var0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&Var0, 25, uParam0->f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&Var0, 61, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&Var0, 62, iParam1, 0, 1))
	{
		return Var5;
	}
	iVar12 = func_1043(&Var0);
	Var0.f_1 = uVar14;
	if (!func_651(&Var0, 60, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&Var0, 63, iVar12, 0, 1))
	{
		return Var5;
	}
	uVar11 = func_1044(&Var0);
	Var5 = iVar12;
	Var5.f_2 = uVar13;
	Var5.f_3 = uVar10;
	Var5.f_1 = uVar11;
	func_1045(Var0, &Var5);
	return Var5;
}

void func_852(var uParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;

	if (!func_1046(uParam0, uParam1))
	{
		return;
	}
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_3.f_1 = -1;
	Var1.f_3.f_2 = -1;
	Var1.f_3.f_4 = -1;
	Var1.f_3.f_5 = -1;
	Var1.f_9 = -1;
	Var1.f_3 = { func_645(uParam1) };
	switch (uParam0->f_1)
	{
		case joaat("MARK_AS_FINISHED"):
			MISSIONDATA::MISSIONDATA_WAS_COMPLETED(uParam0->f_2);
			switch (Var1.f_3.f_2)
			{
				case 0:
					iVar0 = 3;
					break;
				case 1:
					iVar0 = 4;
					break;
				case 2:
					iVar0 = 5;
					break;
			}
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(uParam0->f_2, iVar0);
			break;
		case joaat("UNLOCK_REPLAY"):
			MISSIONDATA::MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(uParam0->f_3, false);
			break;
		default:
			break;
	}
}

int func_853(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 38, 0, 0, 1))
	{
		return 0;
	}
	return func_812(&uVar0, 8);
}

struct<4> func_854(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	var uVar0;
	struct<4> Var5;
	int iVar9;

	if (!func_650(&uVar0))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 19, Param0.f_3, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 23, Param0.f_3.f_1, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 25, Param0.f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 38, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_651(&uVar0, 39, iParam10, 0, 1))
	{
		return Var5;
	}
	iVar9 = func_821(&uVar0);
	return func_822(iVar9);
}

int func_855(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

void func_856(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_1047(iVar0);
	if (!func_498(iVar1))
	{
		return;
	}
	if (iVar1 != iParam0)
	{
		func_1048(iParam0, 7);
		func_1048(iParam0, 8);
	}
	Var2 = { func_891(iVar1) };
	switch (func_1049(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(Var2.f_5))
			{
				if (!func_1050(iVar0, iVar1, 8) && func_930(iVar1, 1))
				{
					func_1051(Var2.f_5);
					func_1052(iVar1, 8);
				}
				if (func_1053(Var2.f_5))
				{
					func_1052(iVar1, 2);
					func_1048(iVar1, 5);
				}
				else if (func_965(Var2.f_5))
				{
					func_1052(iVar1, 1);
					func_1048(iVar1, 6);
				}
				else
				{
					func_1054(Var2);
					func_1052(iVar1, 4);
					func_1048(iVar1, 3);
				}
			}
			else
			{
				func_1048(iVar1, 7);
			}
			break;
		case 8:
			if (Global_1110244.f_19)
			{
				if (func_930(iVar1, 4))
				{
				}
				else
				{
					func_864();
				}
				func_1055(iVar1);
				func_1056(1);
				func_1056(0);
			}
			else
			{
				func_864();
				func_1055(iVar1);
				func_1056(1);
				func_1056(0);
			}
			break;
	}
}

void func_857(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_1047(iVar0);
	if (!func_498(iVar1))
	{
		return;
	}
	Var2 = { func_891(iParam0) };
	switch (func_1049(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(Var2.f_5))
			{
				if (!func_1050(iVar0, iParam0, 8) && func_930(iParam0, 1))
				{
					func_1051(Var2.f_5);
					func_1052(iParam0, 8);
				}
				if (func_1053(Var2.f_5))
				{
					func_1052(iParam0, 2);
					func_1048(iParam0, 5);
				}
				else if (func_965(Var2.f_5))
				{
					func_1052(iParam0, 1);
					func_1048(iParam0, 6);
				}
				else
				{
					func_1054(Var2);
					func_1052(iParam0, 4);
					func_1048(iParam0, 3);
				}
			}
			else
			{
				func_1048(iParam0, 7);
			}
			break;
		case 8:
			if (Global_1110244.f_19)
			{
				if (func_930(iVar1, 4))
				{
				}
				else
				{
					func_864();
				}
				func_1055(iVar1);
				func_1056(1);
				func_1056(0);
			}
			else
			{
				func_864();
				func_1055(iVar1);
				func_1056(1);
				func_1056(0);
			}
			break;
	}
}

bool func_858(int iParam0, int iParam1)
{
	return (Global_1207465.f_231.f_1066[iParam0 /*17*/].f_6 && iParam1) != 0;
}

bool func_859()
{
	if (!Global_1072759.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION() || func_188())
	{
		return false;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1219580, false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_ambient_content_evaluator", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219580);
}

void func_860(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = PLAYER::PLAYER_ID();
	Var1 = { func_1057(iParam0) };
	if (func_1058(iParam0) <= 0)
	{
		Var1 = { func_1059(iParam0) };
		if (func_18(Var1))
		{
			func_1060(iParam0);
			return;
		}
		return;
	}
	if (!func_18(Var1))
	{
		Var1 = { func_1059(iParam0) };
		if (func_18(Var1))
		{
			func_1060(iParam0);
			return;
		}
	}
	if (func_18(Var1))
	{
		if (!func_1061(iParam0, iVar0, 0))
		{
			func_1062(iParam0, Var1);
			func_1063(iParam0, 0);
			if (func_858(iParam0, 256))
			{
				func_1063(iParam0, 1);
			}
		}
		if (func_1053(Var1))
		{
			if (func_1064(iParam0, 4))
			{
				func_1065(iParam0, 0, 0);
				return;
			}
			else if (func_1064(iParam0, 5))
			{
				func_1066(iParam0, 0);
				return;
			}
		}
	}
	switch (func_1067(iParam0))
	{
		case 1:
			break;
		case 2:
			if (!func_858(iParam0, 2))
			{
				return;
			}
			if (!func_1068(iParam0))
			{
				func_1069(iParam0, 0);
				return;
			}
			if (!func_965(Var1) && !func_1053(Var1))
			{
				if (!func_1061(iParam0, iVar0, 2) && !func_1061(iParam0, iVar0, 3))
				{
					if (func_1064(iParam0, 3) || func_1070(iParam0) == Global_1295619.f_10)
					{
						func_1071(iParam0);
					}
				}
			}
			else if (!func_1064(iParam0, 3) && func_1070(iParam0) != Global_1295619.f_10)
			{
				func_1069(iParam0, 0);
			}
			break;
		case 4:
			if (!func_858(iParam0, 2))
			{
				if (func_858(iParam0, 2048))
				{
					func_1072(iParam0);
				}
				return;
			}
			if (func_965(Var1))
			{
				if (func_1064(iParam0, 4))
				{
					func_1073(iParam0, 0, 1, 1);
					func_1065(iParam0, 0, 0);
				}
				else
				{
					func_1073(iParam0, 0, 1, 1);
					func_1066(iParam0, 0);
				}
			}
			else if (func_1053(Var1))
			{
				func_1066(iParam0, 0);
			}
			else
			{
				func_1063(iParam0, 6);
			}
			if (func_1074(iParam0))
			{
				func_1072(iParam0);
			}
			break;
		case 5:
		case 6:
			if (func_1061(iParam0, iVar0, 0))
			{
				func_1060(iParam0);
			}
			break;
	}
}

void func_861(int iParam0, int iParam1, bool bParam2)
{
	func_1075(iParam0, iParam1);
	if (!bParam2)
	{
		func_1076(iParam0, iParam1);
	}
	else
	{
		func_1077(iParam0, iParam1);
		func_1078(iParam0, iParam1);
	}
}

void func_862(int iParam0)
{
	int iVar0;

	iVar0 = func_1067(iParam0);
	if (iVar0 > -1 && iVar0 < 5)
	{
		if (!func_18(func_1057(iParam0)))
		{
			func_1079(iParam0, 5);
			return;
		}
	}
	if (!func_1080(iParam0) && iVar0 < 5)
	{
		func_1081(iParam0);
		func_1079(iParam0, 5);
		return;
	}
	switch (iVar0)
	{
		case -1:
			if (!func_18(func_1057(iParam0)))
			{
				return;
			}
			if (func_858(iParam0, 32))
			{
				Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[0 /*4*/].f_1 = iParam0;
			}
			if (Global_1207465.f_231.f_1066[iParam0 /*17*/].f_5 != 255)
			{
				func_1082(iParam0, Global_1207465.f_231.f_1066[iParam0 /*17*/].f_5);
				func_1079(iParam0, 2);
			}
			else
			{
				func_1079(iParam0, 1);
			}
			break;
		case 0:
			break;
		case 1:
			if (func_1083(iParam0) != 255)
			{
				func_1079(iParam0, 2);
				return;
			}
			if (func_1084(iParam0, 3))
			{
				func_1079(iParam0, 2);
				return;
			}
			if (func_1085(iParam0))
			{
				func_1079(iParam0, 5);
				return;
			}
			break;
		case 2:
			if (func_1083(iParam0) == 255 && !func_1084(iParam0, 3))
			{
				func_1079(iParam0, 4);
				return;
			}
			if (func_1086(iParam0))
			{
				func_1079(iParam0, 5);
				return;
			}
			if (func_1084(iParam0, 4) || func_1084(iParam0, 5))
			{
				func_1079(iParam0, 3);
				return;
			}
			func_1087(iParam0);
			break;
		case 3:
			if (func_1088(iParam0))
			{
				return;
			}
			func_1079(iParam0, 4);
			break;
		case 4:
			if (!func_1086(iParam0))
			{
				return;
			}
			func_1079(iParam0, 5);
			break;
		case 5:
			if (!func_1086(iParam0))
			{
				return;
			}
			if (func_1058(iParam0) > 1)
			{
				func_1089(iParam0, 1);
			}
			func_1079(iParam0, 6);
			break;
		case 6:
			break;
	}
}

bool func_863()
{
	return func_18(Global_1051268);
}

void func_864()
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS();
	iVar1 |= 8;
	if (NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION())
	{
		NETWORK::NETWORK_AUTO_SESSION_FINISH_INSTANCE();
	}
	if ((iVar0 && iVar1) != 0)
	{
		iVar1 = (iVar1 && iVar0);
		NETWORK::NETWORK_SESSION_REMOVE_SESSION_FLAGS(iVar1);
	}
}

int func_865()
{
	if (Global_1572887.f_14 == -1)
	{
		return 0;
	}
	return Global_1051645.f_38;
}

struct<40> func_866(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
{
	struct<40> Var0;
	int iVar40;
	int iVar41;

	if (Param1.f_1 != -1)
	{
		return uParam0->f_2[Param1.f_1 /*40*/];
	}
	Var0 = -1;
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
	iVar40 = 0;
	while (iVar40 < *uParam0)
	{
		iVar41 = ((uParam0->f_1 + iVar40) % 5);
		if (uParam0->f_2[iVar41 /*40*/].f_2 != Param1.f_2)
		{
		}
		else if (uParam0->f_2[iVar41 /*40*/].f_3 != Param1.f_3)
		{
		}
		else if (uParam0->f_2[iVar41 /*40*/].f_4 != Param1.f_4)
		{
		}
		else
		{
			return uParam0->f_2[iVar41 /*40*/];
		}
		iVar40++;
	}
	return Var0;
}

void func_867(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_1090(uParam41))
	{
		case -1:
			func_1091(uParam40, uParam41->f_4);
			break;
		case 0:
			if (!func_1092(&Param0, uParam41))
			{
				if ((NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7) > 120000)
				{
					uParam41->f_6 = 2;
					func_1093(uParam41, 3);
				}
				return;
			}
			if (func_1094(&Param0) < 0)
			{
				return;
			}
			uParam41->f_1 = Param0.f_1;
			func_1093(uParam41, 1);
			break;
		case 1:
			if (!func_1092(&Param0, uParam41))
			{
				uParam41->f_6 = 2;
				func_1093(uParam41, 3);
				return;
			}
			if (func_1094(&Param0) < 1)
			{
				return;
			}
			uParam41->f_6 = Param0.f_6;
			func_1093(uParam41, 2);
			break;
		case 2:
			if (!func_1092(&Param0, uParam41))
			{
				if (uParam41->f_6 == -1)
				{
					uParam41->f_6 = 2;
				}
				func_1093(uParam41, 3);
				return;
			}
			if (func_1094(&Param0) < 3)
			{
				return;
			}
			func_1093(uParam41, 3);
			break;
		case 3:
			func_1093(uParam41, -1);
			break;
	}
}

int func_868(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/];
}

int func_869(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1095(uParam0))
	{
		return -1;
	}
	iVar0 = func_1096(uParam0, uParam0->f_9);
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
			iVar0 = func_1096(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_870(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_1;
}

bool func_871(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

void func_872(int iParam0, int iParam1)
{
	Global_1107816.f_33[iParam0 /*16*/].f_1 = iParam1;
}

void func_873(int iParam0)
{
	Global_1107816.f_33[iParam0 /*16*/] = 0;
}

int func_874(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (func_498(iParam1))
	{
		if (iVar0 == func_868(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_868(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_875(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_2;
}

void func_876(int iParam0, int iParam1)
{
	Global_1107816.f_33[iParam0 /*16*/] = iParam1;
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(GANG::NETWORK_GET_GANG_LEADER(iParam1)))
	{
	}
}

int func_877(int iParam0, var uParam1)
{
	if (!func_1097(iParam0))
	{
		return 0;
	}
	*uParam1 = 0;
	return 1;
}

int func_878(int iParam0, var uParam1)
{
	if (!func_1097(iParam0))
	{
		*uParam1 = 9;
		return 1;
	}
	if (!func_18(func_499(iParam0)))
	{
		return 0;
	}
	if (func_930(iParam0, 4))
	{
		func_1098(func_499(iParam0));
		*uParam1 = 6;
		return 1;
	}
	func_1099(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
	*uParam1 = 1;
	return 1;
}

int func_879(int iParam0, var uParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar12;
	int iVar13;

	if (!func_1097(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	Var0 = { func_499(iParam0) };
	if (!func_18(Var0))
	{
		*uParam1 = 6;
		return 1;
	}
	if (func_930(iParam0, 4))
	{
		func_1098(func_499(iParam0));
		*uParam1 = 6;
		return 1;
	}
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_6.f_1 = -1;
	Var2.f_9 = 2;
	Var2 = { Var0 };
	iVar12 = func_869(&Var2);
	if (func_871(iVar12))
	{
		func_872(iParam0, iVar12);
		func_1099(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		*uParam1 = 2;
		return 1;
	}
	iVar13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_1100(iParam0), iVar13) > func_1101())
	{
		if (func_1102(Var0, iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
		return 1;
	}
	return 0;
}

int func_880(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1097(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	iVar0 = func_1103(iParam0);
	if (iVar0 & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}
	if (iVar0 & 1 != 0)
	{
		*uParam1 = 3;
		return 1;
	}
	if (func_930(iParam0, 4))
	{
		func_1098(func_499(iParam0));
		*uParam1 = 6;
		return 1;
	}
	iVar1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_1100(iParam0), iVar1) > func_1101())
	{
		if (func_1102(func_499(iParam0), iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
		return 1;
	}
	return 0;
}

int func_881(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1103(iParam0);
	if (iVar0 & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}
	if (func_930(iParam0, 4))
	{
		func_1098(func_499(iParam0));
		*uParam1 = 6;
		return 1;
	}
	if (iVar0 & 1 != 0)
	{
		return 0;
	}
	if (func_1102(func_499(iParam0), iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		*uParam1 = 7;
	}
	return 1;
}

int func_882(int iParam0, var uParam1)
{
	int iVar0;

	if (!func_1097(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	iVar0 = func_1103(iParam0);
	if (iVar0 & 2 != 0)
	{
		return 0;
	}
	if (iVar0 & 1 != 0)
	{
		*uParam1 = 3;
		return 1;
	}
	if (func_930(iParam0, 4))
	{
		func_1098(func_499(iParam0));
		*uParam1 = 6;
		return 1;
	}
	if (Global_1110244.f_18)
	{
		if (func_1102(func_499(iParam0), iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
	}
	else
	{
		func_1102(func_499(iParam0), iParam0);
		*uParam1 = 6;
	}
	return 1;
}

int func_883(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1103(iParam0);
	if (iVar0 & 2 != 0)
	{
		return 0;
	}
	if (iVar0 & 1 != 0)
	{
		return 0;
	}
	if (func_1102(func_499(iParam0), iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		*uParam1 = 7;
	}
	return 1;
}

int func_884(int iParam0, var uParam1)
{
	struct<2> Var0;
	int iVar10;
	int iVar11;

	if (!func_18(func_499(iParam0)))
	{
		*uParam1 = 7;
		return 1;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var0 = { func_499(iParam0) };
	iVar10 = func_869(&Var0);
	if (!func_871(iVar10))
	{
		func_1104(iParam0);
		*uParam1 = 7;
		return 1;
	}
	iVar11 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_1100(iParam0), iVar11) > func_1105())
	{
		func_1098(Var0);
		func_1099(iParam0, iVar11);
	}
	return 0;
}

int func_885(int iParam0, var uParam1)
{
	if (func_1097(iParam0))
	{
		*uParam1 = 8;
		return 1;
	}
	else
	{
		*uParam1 = 9;
		return 1;
	}
	return 0;
}

int func_886(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	if (Global_1110244.f_19)
	{
		iVar0 = func_1106();
		if (iVar0 <= 1)
		{
			if (func_930(iParam0, 4))
			{
				bVar1 = false;
			}
			else
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0 && func_930(iParam0, 1))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(func_1107(), NETWORK::GET_NETWORK_TIME_ACCURATE()) > 5000)
			{
				func_1108();
				func_458();
			}
			return 0;
		}
	}
	func_1109(iParam0);
	*uParam1 = -1;
	return 1;
}

int func_887(int iParam0, var uParam1)
{
	switch (func_888(iParam0))
	{
		case 0:
			return func_1110(iParam0, uParam1);
		case 1:
			return func_1111(iParam0, uParam1);
		default:
			break;
	}
	return 0;
}

int func_888(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_2;
}

void func_889(int iParam0, var uParam1, int iParam2)
{
	Global_1107816.f_33[iParam0 /*16*/].f_2 = uParam1;
}

void func_890(int iParam0, int iParam1)
{
	Global_1110244[iParam0] = iParam1;
}

struct<13> func_891(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3;
}

bool func_892(struct<2> Param0, int iParam2)
{
	return (!func_929(func_1112(), Param0) || func_1113() != iParam2);
}

void func_893(var uParam0)
{
	Global_1110244.f_11 = { *uParam0 };
}

bool func_894(int iParam0, int iParam1)
{
	return (Global_1138658[iParam0 /*56*/].f_34 && iParam1) != 0;
}

struct<2> func_895()
{
	return Global_1140708.f_5.f_3;
}

struct<2> func_896()
{
	return Global_1110244.f_21.f_13.f_25;
}

int func_897()
{
	return Global_1140708.f_5.f_7;
}

int func_898()
{
	return Global_1140708.f_24;
}

int func_899()
{
	return Global_1110244.f_21.f_13.f_20;
}

int func_900()
{
	return Global_1110244.f_21.f_13.f_2;
}

bool func_901(int iParam0)
{
	return func_527(1, iParam0);
}

void func_902()
{
	func_1114(-1);
	func_1115(-1);
	func_1116(-1);
	func_1117();
	func_1118();
}

int func_903()
{
	return Global_1110244.f_21.f_13.f_8;
}

void func_904(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1138658[iVar0 /*56*/].f_34 = (Global_1138658[iVar0 /*56*/].f_34 - (Global_1138658[iVar0 /*56*/].f_34 && iParam0));
}

void func_905(int iParam0)
{
	Global_1110244.f_21.f_13.f_8 = iParam0;
}

void func_906(struct<2> Param0)
{
	Global_1110244.f_21.f_13.f_9 = { Param0 };
}

int func_907()
{
	return Global_1110244.f_21.f_13;
}

void func_908(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1138658[iVar0 /*56*/].f_34 = (Global_1138658[iVar0 /*56*/].f_34 || iParam0);
}

bool func_909(int iParam0)
{
	return func_244(&(Global_1110244.f_251.f_6), iParam0, 2);
}

void func_910(int iParam0)
{
	if (func_515(&(Global_1140451[PLAYER::PLAYER_ID() /*8*/]), iParam0, 2))
	{
	}
}

void func_911(int iParam0)
{
	if (func_514(&(Global_1140451[PLAYER::PLAYER_ID() /*8*/]), iParam0, 2))
	{
	}
}

bool func_912(int iParam0)
{
	return func_244(&(Global_1110244.f_251.f_12), iParam0, 4);
}

void func_913(int iParam0)
{
	if (func_515(&(Global_1140451[PLAYER::PLAYER_ID() /*8*/].f_3), iParam0, 4))
	{
	}
}

void func_914(int iParam0)
{
	if (func_514(&(Global_1140451[PLAYER::PLAYER_ID() /*8*/].f_3), iParam0, 4))
	{
	}
}

bool func_915(int iParam0)
{
	int iVar0;

	iVar0 = func_1119(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_1120(&(Global_1149417.f_11.f_3222.f_320[iVar0 /*4*/]), 1);
}

void func_916(int iParam0)
{
	if (Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_47 == iParam0)
	{
		return;
	}
	Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_47 = iParam0;
}

bool func_917(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	return (Global_1138658[iParam0 /*56*/].f_54.f_1 && iParam1) != 0;
}

bool func_918(int iParam0)
{
	return (Global_1140708.f_24.f_3 && iParam0) != 0;
}

int func_919()
{
	return Global_1140708.f_24.f_6;
}

void func_920(int iParam0)
{
	struct<28> Var0;
	var uVar31;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_4 = 15;
	Var0.f_10 = PLAYER::PLAYER_ID();
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar31, iParam0);
	func_1121(&Var0, uVar31);
}

void func_921(int iParam0)
{
	Global_1140708.f_24.f_6 = iParam0;
}

void func_922(int iParam0)
{
	Global_1140708.f_24.f_3 = (Global_1140708.f_24.f_3 || iParam0);
}

bool func_923()
{
	return Global_1110244.f_21.f_112.f_6;
}

int func_924()
{
	return Global_1110244.f_21.f_112.f_5;
}

void func_925()
{
	struct<2> Var0;

	func_1122(-1);
	func_1123(-1);
	func_1124(-1);
	func_1125(func_838());
	func_1126(0);
	func_1127(0);
	func_1128(0);
	func_1129(0);
	Var0.f_1 = -1;
	func_1130(&Var0);
}

int func_926(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_868(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_927(int iParam0)
{
	struct<2> Var0;

	if (!func_1131(func_933()))
	{
		if (func_1131(func_1132(iParam0)))
		{
			func_1122(func_1132(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!func_1133(func_932()))
	{
		if (func_1133(func_1134(iParam0)))
		{
			func_1123(func_1134(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!func_1135(func_935()))
	{
		if (func_1135(func_1136(iParam0)))
		{
			func_1124(func_1136(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!func_1137() && func_1139(func_1138(func_935())) == 7)
	{
		Var0.f_1 = -1;
		func_1140(iParam0, &Var0);
		if (Var0 == 0)
		{
		}
		else
		{
			func_1130(&Var0);
			func_1129(1);
		}
	}
	return true;
}

struct<2> func_928()
{
	return Global_1110244.f_21.f_112.f_3;
}

bool func_929(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_930(int iParam0, int iParam1)
{
	return (Global_1107816.f_33[iParam0 /*16*/].f_3.f_8 && iParam1) != 0;
}

void func_931(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(bParam0, &(Global_1110244.f_21.f_112.f_9), 4);
}

int func_932()
{
	return Global_1110244.f_21.f_112;
}

int func_933()
{
	return Global_1110244.f_21.f_112.f_1;
}

var func_934()
{
	return Global_1110244.f_21.f_112.f_7;
}

int func_935()
{
	return Global_1110244.f_21.f_112.f_2;
}

void func_936(int iParam0, int iParam1, var uParam2, int iParam3, struct<2> Param4, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	struct<28> Var0;
	var uVar31;
	vector3 vVar32;
	var uVar35;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar31 = func_157(0, 8);
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	Var0.f_4 = 3;
	Var0.f_9 = iParam3;
	Var0.f_14 = uParam2;
	Var0.f_7 = { Param4 };
	Var0.f_13 = iParam10;
	MISC::COPY_SCRIPT_STRUCT(&(Var0.f_27), &iParam6, 4);
	vVar32 = { func_1141(iParam0) };
	uVar35 = func_1142(iParam0);
	func_1143(&(Var0.f_19), Var0.f_11, vVar32, uVar35);
	func_1121(&Var0, uVar31);
}

void func_937(int iParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, &(Global_1138658[iParam0 /*56*/].f_38), 5);
}

void func_938(bool bParam0)
{
	func_1144(bParam0, 1);
}

bool func_939(int iParam0)
{
	return (Global_1110244.f_4607.f_2 && iParam0) != 0;
}

void func_940(bool bParam0)
{
	func_1145(bParam0, 0);
}

void func_941(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_38), bParam0, 5);
}

void func_942(int iParam0)
{
	Global_1110244.f_4607.f_2 = (Global_1110244.f_4607.f_2 - (Global_1110244.f_4607.f_2 && iParam0));
}

void func_943(int iParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, &(Global_1138658[iParam0 /*56*/].f_43), 4);
}

void func_944(bool bParam0)
{
	func_1146(bParam0, 1);
}

void func_945(bool bParam0)
{
	func_1147(bParam0, 0);
}

void func_946(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_43), bParam0, 4);
}

void func_947(int iParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, &(Global_1138658[iParam0 /*56*/].f_49), 5);
}

void func_948(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1110244.f_4607.f_22), bParam0, 5);
}

int func_949(int iParam0)
{
	return Global_1110244.f_150.f_84[iParam0 /*4*/];
}

int func_950(int iParam0)
{
	return Global_1110244.f_150.f_84[iParam0 /*4*/].f_2;
}

bool func_951(int iParam0, int iParam1)
{
	return func_244(&(Global_1138658[iParam0 /*56*/].f_49), iParam1, 3);
}

void func_952(int iParam0)
{
	if (func_514(&(Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_49), iParam0, 3))
	{
	}
}

bool func_953()
{
	return Global_1203937.f_399.f_4;
}

void func_954(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_471(iParam0);
	if (iVar0 == -1)
	{
		Global_1072759.f_19585.f_19 = Global_1072759.f_19585[iParam0];
		return;
	}
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (MISC::IS_BIT_SET(Global_38.f_118[iParam0], iVar1))
		{
			MISC::SET_BIT(&(Global_1072759.f_19585.f_19), iVar1);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1072759.f_19585.f_19), iVar1);
		}
		iVar1++;
	}
}

bool func_955(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_956(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_957()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_958(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_959(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_960(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_961(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

void func_962(int iParam0, int iParam1)
{
	if (!func_693(iParam0))
	{
		return;
	}
	Global_1900562[iParam0 /*2*/].f_1 = (Global_1900562[iParam0 /*2*/].f_1 || iParam1);
}

void func_963(int iParam0)
{
	if (func_60() == -1)
	{
		return;
	}
	if (Global_1835011[iParam0 /*72*/].f_3 != 0 && UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3))
	{
		UNLOCK::_UNLOCK_SET_NEW(Global_1835011[iParam0 /*72*/].f_3, false);
	}
	func_1148(iParam0);
}

void func_964(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_965(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_372(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_966(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_18(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_1053(Param0) && !func_965(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_1149(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_372(Param0) == 3)
		{
			func_1150(1, -4.059512E-23f);
		}
		else if (func_372(Param0) == 4)
		{
			func_1150(0, -4.059512E-23f);
		}
	}
	if ((func_372(Param0) == 3 || func_372(Param0) == 1) || ((bParam5 && func_372(Param0) == 4) && STATS::STATSTRACKER_IS_INITIALIZED(func_1149(Param0))))
	{
		if (iParam3 != -1)
		{
			func_1151(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_1151(Param0, 2, iParam4, 255, 0);
		}
	}
	func_968(Param0, 0);
	if (func_929(func_215(0), Param0))
	{
		func_1152(1);
		func_1153(0);
		func_1154(0);
		func_1155(1);
	}
	func_1156(Param0);
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_1157(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_967(struct<2> Param0)
{
	if (func_1149(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_1149(Param0)))
	{
		STATS::_0x99230691875FC218(func_1157(Param0), func_1149(Param0), Global_34);
	}
}

void func_968(struct<2> Param0, int iParam2)
{
	if (!func_18(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1158(Param0);
	}
	else
	{
		func_1159(Param0, iParam2);
	}
	func_1160();
}

bool func_969()
{
	return Global_1295802.f_537 != 0;
}

bool func_970()
{
	if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1) != 0)
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	return true;
}

bool func_971(int iParam0)
{
	return (Global_1295802.f_537 && iParam0) != 0;
}

bool func_972(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = func_1161(iParam0);
	iVar2 = func_1162(iParam0);
	iVar3 = func_704();
	switch (iVar2)
	{
		case 0:
			iVar0 = func_290(MISC::VAR_STRING(0, iVar1), 10000, 0, 0, 0, 1);
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(iVar3))
			{
				iVar3 = MAP::_BLIP_ADD_FOR_STYLE(5.844482E+22f);
				if (!MAP::DOES_BLIP_EXIST(iVar3))
				{
					return false;
				}
				MAP::SET_BLIP_SPRITE(iVar3, -1.270147E-20f, true);
				MAP::BLIP_ADD_MODIFIER(iVar3, -1.150843E+30f);
				func_705(iVar3);
			}
			iVar0 = func_290(MISC::VAR_STRING(0, iVar1, iVar3), 10000, 0, 0, 0, 1);
			break;
	}
	return iVar0 != 0;
}

void func_973(int iParam0)
{
	Global_1295802.f_537 = (Global_1295802.f_537 - (Global_1295802.f_537 && iParam0));
}

bool func_974(int iParam0)
{
	return func_246(Global_1072759.f_28644.f_8.f_1, iParam0);
}

bool func_975(bool bParam0)
{
	return bParam0;
}

bool func_976(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_977(int iParam0)
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

int func_978(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

int func_979(int iParam0)
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

struct<4> func_980(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_1163(bParam0, bParam1, 0) };
	return func_503(bParam0, Var0, Var0.f_4, bParam1);
}

int func_981(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_728(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_1164(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_1165(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_1166(bParam0, 0);
	}
	if (func_729(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_504(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_980(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_504(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_982(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_1167(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

int func_983(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1168(iParam2, -3.005759E+25f);
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
	func_1169(uParam1, bParam0, Var3);
	return 1;
}

void func_984(int iParam0)
{
	Global_1300340.f_155.f_4[iParam0 /*4*/].f_1 = 0;
}

void func_985(int iParam0)
{
	Global_1300340.f_155.f_4[iParam0 /*4*/].f_2 = 0;
}

void func_986(int iParam0)
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1300340.f_155.f_2), iParam0);
}

int func_987(int iParam0)
{
	var uVar0;

	if (!func_1170(&uVar0))
	{
		return 0;
	}
	if (!func_1171(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1171(&uVar0, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1171(&uVar0, 40, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1171(&uVar0, 53, 0, 0, 1))
	{
		return 0;
	}
	return func_1172(&uVar0, 11);
}

int func_988()
{
	return SCRIPTS::COUNT_PLAYER_BITS(&(Global_1300340.f_155.f_2));
}

bool func_989(int iParam0)
{
	return (Global_1300340.f_155.f_3 && iParam0) != 0;
}

void func_990(int iParam0)
{
	Global_1300340.f_155.f_3 = (Global_1300340.f_155.f_3 - (Global_1300340.f_155.f_3 && iParam0));
}

bool func_991(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1300340.f_155.f_4[iParam0 /*4*/].f_2, iParam1);
}

bool func_992(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_1170(&Var0))
	{
		return false;
	}
	if (!func_1171(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1171(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_1171(&Var0, 40, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1171(&Var0, 53, 0, 0, 1))
	{
		return false;
	}
	if (!func_1171(&Var0, 54, iParam1, 0, 1))
	{
		return false;
	}
	uParam2->f_1 = { func_1173(Var0) };
	*uParam2 = func_1174(Var0);
	uParam2->f_9 = func_1175(Var0);
	return true;
}

int func_993(int iParam0)
{
	var uVar0;

	if (!func_1170(&uVar0))
	{
		return 0;
	}
	if (!func_1171(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1171(&uVar0, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1171(&uVar0, 40, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1171(&uVar0, 51, 0, 0, 1))
	{
		return 0;
	}
	return func_1172(&uVar0, 10);
}

bool func_994(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1300340.f_155.f_4[iParam0 /*4*/].f_1, iParam1);
}

bool func_995(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_1170(&Var0))
	{
		return false;
	}
	if (!func_1171(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1171(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_1171(&Var0, 40, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1171(&Var0, 51, 0, 0, 1))
	{
		return false;
	}
	if (!func_1171(&Var0, 52, iParam1, 0, 1))
	{
		return false;
	}
	uParam2->f_33 = func_1176(Var0, -5.110156E-18f);
	*uParam2 = { func_1173(Var0) };
	uParam2->f_8 = { func_1177(Var0) };
	uParam2->f_16 = func_1178(Var0);
	uParam2->f_17 = { func_1179(Var0) };
	uParam2->f_20 = { func_1180(Var0) };
	uParam2->f_26 = func_1181(Var0);
	uParam2->f_27 = func_1182(Var0);
	if (uParam2->f_33 & 32 != 0)
	{
		uParam2->f_23 = { func_1183(Var0) };
	}
	if (uParam2->f_33 & 16 != 0)
	{
		uParam2->f_31 = func_1184(Var0);
	}
	if (uParam2->f_33 & 8 != 0)
	{
		uParam2->f_28 = func_1185(Var0);
		uParam2->f_29 = func_1186(Var0);
		uParam2->f_30 = func_1187(Var0);
	}
	if (uParam2->f_33 & 64 != 0)
	{
		uParam2->f_32 = func_1188(Var0);
	}
	return true;
}

void func_996(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1300340.f_155.f_4[iParam0 /*4*/].f_1), iParam1);
}

void func_997(int iParam0)
{
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1300340.f_155.f_2), iParam0);
}

void func_998(int iParam0)
{
	Global_1300340.f_155.f_3 = (Global_1300340.f_155.f_3 || iParam0);
}

void func_999(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1300340.f_155.f_4[iParam0 /*4*/].f_2), iParam1);
}

void func_1000(var uParam0)
{
	struct<6> Var0;

	Var0 = -1;
	Var0.f_3 = 255;
	*uParam0 = { Var0 };
}

int func_1001(int iParam0, int iParam1)
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

int func_1002(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_1003(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1004(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

char* func_1005(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

char* func_1006(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Morning";
		case 1:
			return "Day";
		case 2:
			return "LongDay";
		case 3:
			return "Afternoon";
		case 4:
			return "Evening";
		case 5:
			return "Night";
		default:
			break;
	}
	return "";
}

void func_1007(int iParam0)
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
	func_1008(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_1008(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_1009(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_1189(95));
	if (func_1190(iVar0))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iVar0, true);
	}
}

void func_1010(int iParam0)
{
	Global_1940239.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940239.f_245.f_1306), 0));
}

void func_1011(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_804(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_1012(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_1013(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_1014(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	struct<7> Var11;
	int iVar18;
	vector3 vVar19;

	vVar19 = -1;
	vVar19.f_1 = -1;
	vVar19.f_2 = -1;
	func_810(&vVar19);
	if (vVar19.x == -1)
	{
		return 0;
	}
	if (vVar19.y == -1)
	{
		return 0;
	}
	if (!func_650(&Var0))
	{
		return 0;
	}
	if (!func_651(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&Var0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&Var0, 43, iParam0, 0, 1))
	{
		return 0;
	}
	uVar9 = Var0.f_1;
	iVar6 = func_812(&Var0, 7);
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		Var0.f_1 = uVar9;
		if (!func_651(&Var0, 44, iVar5, 0, 1))
		{
			return 0;
		}
		if (!func_651(&Var0, 45, 0, 0, 0))
		{
		}
		else
		{
			uVar10 = Var0.f_1;
			iVar8 = func_812(&Var0, 9);
			iVar7 = 0;
			while (iVar7 <= (iVar8 - 1))
			{
				Var0.f_1 = uVar10;
				if (!func_651(&Var0, 46, iVar7, 0, 1))
				{
					return 0;
				}
				Var11 = { func_827(Var0) };
				switch (Var11)
				{
					case 1204986881:
						iVar18 = func_1191(vVar19.x, vVar19.y, Var11.f_1);
						Var11.f_1 = func_1192(iVar18);
						break;
					case joaat("STAT"):
						Var11.f_4 = { func_353(vVar19.x, vVar19.y, Var11.f_1, 1) };
						break;
				}
				if (!func_828(&Var11, 4))
				{
					return 0;
				}
				iVar7++;
			}
		}
		iVar5++;
	}
	return 1;
}

var func_1015(bool bParam0)
{
	return func_855(bParam0, 82, 1);
}

var func_1016(bool bParam0)
{
	return func_855(bParam0, 78, 1);
}

int func_1017(bool bParam0, bool bParam1)
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

char* func_1018(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1019()
{
	return 4;
}

float func_1020(float fParam0, float fParam1)
{
	return (BUILTIN::LOG10(fParam1) / BUILTIN::LOG10(fParam0));
}

int func_1021(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 13;
				case 2:
					return 2;
				case 3:
					return 15;
				case 4:
					return 2;
				default:
					break;
			}
			Jump @230; //curOff = 94
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 13;
				case 2:
					return 2;
				case 3:
					return 13;
				case 4:
					return 2;
				default:
					break;
			}
			Jump @230; //curOff = 160
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 0;
				case 2:
					return 2;
				case 3:
					return 0;
				case 4:
					return 0;
				default:
					break;
			}
			return 0;
		}

int func_1022(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_819(iParam0, iParam1, 0);
	return (BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar0))) - 1);
}

int func_1023(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return iParam1->f_2;
		case 1:
			return iParam1->f_4;
		case 2:
			return iParam1->f_5;
		case 3:
			return iParam1->f_1;
		case 4:
			return *iParam1;
		default:
			break;
	}
	return -1;
}

var func_1024(bool bParam0)
{
	return func_855(bParam0, 80, 1);
}

void func_1025(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_812(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_651(&Param0, 32, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1193(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("AWARD"):
				uParam5->f_1 = iVar2;
				break;
			case joaat("AWARD_PROCESS"):
				uParam5->f_2 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_1026(int iParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1296343.f_118[iParam0 /*6*/]), bParam1, 4);
}

void func_1027(int iParam0, int iParam1)
{
	Global_1296343.f_118[iParam0 /*6*/].f_4 = iParam1;
}

void func_1028(int iParam0, var uParam1)
{
	Global_1296343.f_118[iParam0 /*6*/].f_5 = uParam1;
}

var func_1029(bool bParam0)
{
	return func_855(bParam0, 70, 1);
}

var func_1030(bool bParam0)
{
	return func_855(bParam0, 71, 1);
}

var func_1031(bool bParam0)
{
	return func_1038(bParam0, 69, 1);
}

var func_1032(bool bParam0)
{
	return func_855(bParam0, 69, 1);
}

var func_1033(bool bParam0, bool bParam1)
{
	return func_1038(bParam0, 99, bParam1);
}

void func_1034(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_812(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_651(&Param0, 32, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1193(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("PREREQUISITE"):
				uParam5->f_3 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

bool func_1035(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return iParam1 & 2 == 0;
		case 3:
			return iParam1 & 1 == 0;
		case 4:
			return true;
		default:
			break;
	}
	return true;
}

bool func_1036(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 127786994:
			return (!UNLOCK::UNLOCK_IS_UNLOCKED(iParam0) && !UNLOCK::UNLOCK_IS_VISIBLE(iParam0));
		case 105823627:
			return (UNLOCK::UNLOCK_IS_UNLOCKED(iParam0) && !UNLOCK::UNLOCK_IS_VISIBLE(iParam0));
		case 848504716:
			return (!UNLOCK::UNLOCK_IS_UNLOCKED(iParam0) && UNLOCK::UNLOCK_IS_VISIBLE(iParam0));
		case 2078976555:
			return (UNLOCK::UNLOCK_IS_UNLOCKED(iParam0) && UNLOCK::UNLOCK_IS_VISIBLE(iParam0));
		case 1605840866:
			return (!UNLOCK::UNLOCK_IS_UNLOCKED(iParam0) || !UNLOCK::UNLOCK_IS_VISIBLE(iParam0));
		case -1989751792:
			return (UNLOCK::UNLOCK_IS_UNLOCKED(iParam0) || !UNLOCK::UNLOCK_IS_VISIBLE(iParam0));
		case 1699110072:
			return (!UNLOCK::UNLOCK_IS_UNLOCKED(iParam0) || UNLOCK::UNLOCK_IS_VISIBLE(iParam0));
		case 1916788071:
			return (UNLOCK::UNLOCK_IS_UNLOCKED(iParam0) || UNLOCK::UNLOCK_IS_VISIBLE(iParam0));
		case joaat("UNLOCKED"):
			return UNLOCK::UNLOCK_IS_UNLOCKED(iParam0);
		case joaat("VISIBLE"):
			return UNLOCK::UNLOCK_IS_VISIBLE(iParam0);
		case joaat("LOCKED"):
			return !UNLOCK::UNLOCK_IS_UNLOCKED(iParam0);
		case joaat("HIDDEN"):
			return !UNLOCK::UNLOCK_IS_VISIBLE(iParam0);
		default:
			break;
	}
	return false;
}

bool func_1037(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("CLAIMED"):
			return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0);
		case joaat("UNCLAIMED"):
			return !NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0);
		default:
			break;
	}
	return false;
}

var func_1038(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar0, bParam0))
	{
	}
	return uVar0;
}

int func_1039()
{
	int iVar0;

	iVar0 = func_818();
	return (BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar0))) - 1);
}

var func_1040(bool bParam0)
{
	return func_855(bParam0, 89, 1);
}

struct<6> func_1041(int iParam0)
{
	struct<5> Var0;
	struct<6> Var5;
	struct<6> Var11;

	if (!func_650(&Var0))
	{
		return Var11;
	}
	if (!func_651(&Var0, 13, 0, 0, 1))
	{
		return Var11;
	}
	if (!func_651(&Var0, 15, 0, 0, 1))
	{
		return Var11;
	}
	if (!func_651(&Var0, 50, iParam0, 0, 1))
	{
		return Var11;
	}
	Var5 = iParam0;
	Var5.f_1 = func_1194(&Var0);
	Var5.f_2 = func_1195(&Var0);
	Var5.f_3 = func_1196(&Var0);
	switch (Var5.f_3)
	{
		case joaat("INT"):
			Var5.f_4 = func_1197(&Var0);
			break;
		default:
			break;
	}
	func_1198(Var0, &Var5);
	return Var5;
}

bool func_1042(var uParam0, var uParam1)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3.f_5 = -1;
	Var0.f_9 = -1;
	Var0.f_3 = { func_645(uParam1) };
	if (uParam0->f_5 & 1 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_338(8))
		{
			return false;
		}
	}
	if (uParam0->f_5 & 2 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_617(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return false;
		}
	}
	return true;
}

var func_1043(bool bParam0)
{
	return func_855(bParam0, 67, 1);
}

var func_1044(bool bParam0)
{
	return func_855(bParam0, 94, 1);
}

void func_1045(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_812(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_651(&Param0, 32, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1193(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("REPLAY"):
				uParam5->f_4 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

bool func_1046(var uParam0, var uParam1)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3.f_5 = -1;
	Var0.f_9 = -1;
	Var0.f_3 = { func_645(uParam1) };
	if (uParam0->f_4 & 1 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_338(8))
		{
			return false;
		}
	}
	if (uParam0->f_4 & 2 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_617(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return false;
		}
	}
	return true;
}

int func_1047(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_497(iParam0);
	iVar1 = func_874(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_498(iVar1))
		{
			func_1199(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

void func_1048(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1138658[iVar0 /*56*/].f_1[iParam0] = (Global_1138658[iVar0 /*56*/].f_1[iParam0] - (Global_1138658[iVar0 /*56*/].f_1[iParam0] && iParam1));
}

int func_1049(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return func_875(iParam0);
}

bool func_1050(int iParam0, int iParam1, int iParam2)
{
	return (Global_1138658[iParam0 /*56*/].f_1[iParam1] && iParam2) != 0;
}

int func_1051(struct<2> Param0)
{
	if (func_863())
	{
		return 0;
	}
	if (!func_18(Param0))
	{
		return 0;
	}
	Global_1051268 = { Param0 };
	return 1;
}

void func_1052(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1138658[iVar0 /*56*/].f_1[iParam0] = (Global_1138658[iVar0 /*56*/].f_1[iParam0] || iParam1);
}

bool func_1053(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_372(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_1054(int iParam0)
{
	func_1200(iParam0);
}

void func_1055(int iParam0)
{
	if (!func_1050(PLAYER::PLAYER_ID(), iParam0, 8))
	{
		return;
	}
	func_1201();
	Global_1110244.f_15 = 1;
	func_1048(iParam0, 8);
}

void func_1056(int iParam0)
{
	func_1202(iParam0);
	func_1203(iParam0, 0);
}

struct<2> func_1057(int iParam0)
{
	if (iParam0 < 0)
	{
		return func_838();
	}
	return Global_1207465.f_231[iParam0 /*15*/].f_5;
}

int func_1058(int iParam0)
{
	if (!func_871(iParam0))
	{
		return -1;
	}
	return Global_1207465.f_231[iParam0 /*15*/].f_1;
}

struct<2> func_1059(int iParam0)
{
	return Global_1219580.f_1[iParam0 /*10*/].f_4;
}

void func_1060(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = Global_1207465.f_231.f_1066[iParam0 /*17*/].f_7;
	if (iVar1 > 1)
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_1204(iParam0, iVar0);
		func_1205(iParam0, iVar0);
		iVar0++;
	}
	func_1069(iParam0, 0);
	func_1206(iParam0);
	func_1072(iParam0);
}

bool func_1061(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

void func_1062(int iParam0, struct<2> Param1)
{
	Global_1219580.f_1[iParam0 /*10*/].f_4 = { Param1 };
	Global_1219580.f_1[iParam0 /*10*/].f_6 = func_19(Param1);
}

void func_1063(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_1061(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

bool func_1064(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1207())
	{
		iVar0 = func_1208(iVar1);
		if (func_1061(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return func_1061(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

void func_1065(int iParam0, bool bParam1, int iParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_1059(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_965(Var0))
	{
		return;
	}
	if (!func_1053(Var0))
	{
		return;
	}
	if (func_1061(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	if (bParam1)
	{
		bVar2 = 4;
	}
	else
	{
		bVar2 = false;
	}
	func_966(Var0, 0, bVar2, iParam2, 0);
	func_1063(iParam0, 4);
}

void func_1066(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_1059(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_965(Var0))
	{
		return;
	}
	if (!func_1053(Var0))
	{
		return;
	}
	if (func_1061(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_966(Var0, 0, 1, iParam1, 0);
	func_1063(iParam0, 5);
}

int func_1067(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_13;
}

bool func_1068(int iParam0)
{
	if (!func_1080(iParam0))
	{
		return false;
	}
	if (func_1067(iParam0) >= 5)
	{
		return false;
	}
	if (func_1067(iParam0) <= 0)
	{
		return false;
	}
	if (!func_1061(iParam0, PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	return true;
}

void func_1069(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_1059(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (!func_965(Var0) && !func_1053(Var0))
	{
		return;
	}
	func_1209(iParam0, 2);
	func_1209(iParam0, 3);
	func_1063(iParam0, 6);
	func_966(Var0, 0, 2, iParam1, 0);
}

int func_1070(int iParam0)
{
	return Global_1207465.f_2505[iParam0 /*6*/].f_4;
}

void func_1071(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_1059(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_965(Var0))
	{
		return;
	}
	if (func_1053(Var0))
	{
		return;
	}
	func_1063(iParam0, 2);
	func_1209(iParam0, 3);
	func_1209(iParam0, 6);
	func_374(Var0);
}

void func_1072(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	Global_1217203[iVar0 /*72*/][iParam0] = 0;
}

void func_1073(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_1059(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (!func_965(Var0))
	{
		return;
	}
	if (func_1053(Var0))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	}
	if (bParam1)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	func_1063(iParam0, 3);
	func_1210(Var0, 1, bParam2, bParam3);
}

bool func_1074(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	iVar1 = 0;
	while (iVar1 < func_1207())
	{
		iVar0 = func_1208(iVar1);
		if (func_1061(iParam0, iVar0, 2) && !((func_1061(iParam0, iVar0, 4) || func_1061(iParam0, iVar0, 5)) || func_1061(iParam0, iVar0, 6)))
		{
			return false;
		}
		iVar1++;
	}
	Var2 = { func_1059(iParam0) };
	return !(func_965(Var2) || func_1053(Var2));
}

void func_1075(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1211(iParam0);
	iVar1 = func_1212(iParam0, iParam1);
	iVar2 = func_1213(iParam0, iParam1);
	iVar3 = func_1067(iParam0);
	switch (func_1214(iParam0, iParam1))
	{
		case -1:
			if (!func_1068(iParam0))
			{
				return;
			}
			func_1215(iParam0, iParam1, 1);
			break;
		case 0:
			if (!func_1068(iParam0))
			{
				return;
			}
			func_1215(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_1068(iParam0))
			{
				func_1216(iParam0, iParam1);
				func_1215(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				return;
			}
			if (iVar2 >= 3)
			{
				return;
			}
			func_1215(iParam0, iParam1, 2);
			break;
		case 2:
			if (!func_1068(iParam0))
			{
				func_1216(iParam0, iParam1);
				func_1215(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_1215(iParam0, iParam1, 1);
				return;
			}
			if (iVar2 >= 3)
			{
				func_1215(iParam0, iParam1, 6);
				return;
			}
			if (!func_1217(iParam0, iParam1))
			{
				return;
			}
			func_1218(iParam0, iParam1, 0);
			func_1215(iParam0, iParam1, 3);
			break;
		case 3:
			if (!func_1068(iParam0))
			{
				func_1216(iParam0, iParam1);
				func_1215(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_1215(iParam0, iParam1, 7);
				return;
			}
			if (iVar2 >= 3)
			{
				func_1215(iParam0, iParam1, 6);
				return;
			}
			if (!func_1219(iParam0, iParam1))
			{
				return;
			}
			func_1215(iParam0, iParam1, 4);
			break;
		case 4:
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(iVar0, iVar1, true, 0))
			{
				if (!func_1220(iParam0, iParam1))
				{
					func_1221(iParam0, iParam1, 0);
					func_1222(iParam0, iParam1, 0);
					func_1215(iParam0, iParam1, 2);
				}
				return;
			}
			func_1215(iParam0, iParam1, 5);
			break;
		case 5:
			if ((func_1058(iParam0) <= 0 || iVar3 >= 5) || iVar3 < 1)
			{
				func_1204(iParam0, iParam1);
			}
			if (func_1223(iParam0, iParam1))
			{
				func_1204(iParam0, iParam1);
			}
			if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(iVar0, iVar1, true, 0))
			{
				return;
			}
			if (func_1220(iParam0, iParam1))
			{
				return;
			}
			func_1221(iParam0, iParam1, 0);
			if ((func_1084(iParam0, 4) || func_1084(iParam0, 5)) || (func_1067(iParam0) > 2 && iVar2 == 3))
			{
				func_1215(iParam0, iParam1, 6);
			}
			else
			{
				func_1222(iParam0, iParam1, 0);
				func_1215(iParam0, iParam1, 8);
			}
			break;
		case 6:
			if (!func_1074(iParam0))
			{
				return;
			}
			func_1215(iParam0, iParam1, 7);
			break;
		case 7:
			func_1216(iParam0, iParam1);
			func_1215(iParam0, iParam1, 8);
			break;
		case 8:
			func_1063(iParam0, 7);
			if (iVar2 == 2 || iVar2 == 3)
			{
				return;
			}
			func_1215(iParam0, iParam1, 1);
			func_1209(iParam0, 7);
			break;
	}
}

bool func_1076(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1224(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return true;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iVar0))
	{
		func_1225(iParam0, iParam1, 0);
		return true;
	}
	func_1225(iParam0, iParam1, 0);
	return true;
}

void func_1077(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_858(iParam0, 8))
	{
		return;
	}
	iVar0 = func_1226(iParam0, iParam1);
	iVar1 = func_1058(iParam0);
	if (!func_1080(iParam0) || func_1067(iParam0) >= 5)
	{
		if (iVar0 != 1)
		{
			func_1227(iParam0, iParam1);
			func_1228(iParam0, iParam1, 1);
		}
		return;
	}
	switch (iVar0)
	{
		case -2:
			break;
		case -1:
			if (!func_18(func_1057(iParam0)))
			{
				return;
			}
			if (func_1229(iParam0, iParam1) <= 0)
			{
				func_1228(iParam0, iParam1, 0);
				return;
			}
			else
			{
				if (iVar1 == 1)
				{
					func_1228(iParam0, iParam1, 5);
				}
				else
				{
					func_1228(iParam0, iParam1, 2);
				}
				return;
			}
			break;
		case 0:
			if (func_1229(iParam0, iParam1) > 0)
			{
				func_1228(iParam0, iParam1, 2);
				return;
			}
			break;
		case 1:
			func_1228(iParam0, iParam1, -1);
			break;
		case 2:
			if (func_1230(iParam0, iParam1) != 0)
			{
				func_1228(iParam0, iParam1, 4);
				return;
			}
			func_1231(iParam0, iParam1, 0);
			func_1228(iParam0, iParam1, 3);
			break;
		case 3:
			if (func_1224(iParam0, iParam1) == 0)
			{
				func_1228(iParam0, iParam1, 2);
				return;
			}
			if (func_1232(iParam0, iParam1))
			{
				func_1228(iParam0, iParam1, 4);
				return;
			}
			break;
		case 4:
			if (iVar1 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_1230(iParam0, iParam1), 160);
				func_1228(iParam0, iParam1, 7);
				return;
			}
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_1230(iParam0, iParam1)))
			{
				func_1233(iParam0, iParam1);
				func_1228(iParam0, iParam1, 2);
				return;
			}
			break;
		case 5:
			if ((func_1213(iParam0, iParam1) == 2 || func_1067(iParam0) == 2) || iVar1 > 1)
			{
				func_1228(iParam0, iParam1, 2);
				return;
			}
			break;
		case 6:
			if (func_1224(iParam0, iParam1) == 0)
			{
				func_1228(iParam0, iParam1, 5);
				return;
			}
			if ((func_1213(iParam0, iParam1) == 2 || func_1067(iParam0) == 2) || iVar1 > 1)
			{
				func_1076(iParam0, iParam1);
				func_1228(iParam0, iParam1, 2);
				return;
			}
			if (func_1232(iParam0, iParam1))
			{
				func_1228(iParam0, iParam1, 7);
				return;
			}
			break;
		case 7:
			if ((func_1213(iParam0, iParam1) == 2 || func_1067(iParam0) == 2) || iVar1 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_1230(iParam0, iParam1), 32);
				func_1228(iParam0, iParam1, 4);
				return;
			}
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_1230(iParam0, iParam1)))
			{
				func_1233(iParam0, iParam1);
				func_1228(iParam0, iParam1, 5);
				return;
			}
			break;
	}
}

void func_1078(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_858(iParam0, 16))
	{
		return;
	}
	iVar0 = func_1211(iParam0);
	iVar1 = func_1212(iParam0, iParam1);
	iVar3 = func_1213(iParam0, iParam1);
	if (iVar3 > 0)
	{
		if (!func_1080(iParam0))
		{
			func_1234(iParam0, iParam1, 0);
			return;
		}
	}
	switch (iVar3)
	{
		case -1:
			if (!func_18(func_1057(iParam0)))
			{
				return;
			}
			if (func_1235(iParam0, iParam1) <= 0)
			{
				func_1234(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_1234(iParam0, iParam1, 1);
				return;
			}
			break;
		case 0:
			if (!func_1080(iParam0))
			{
				return;
			}
			if (func_1235(iParam0, iParam1) <= 0)
			{
				return;
			}
			iVar2 = func_1236(iParam0);
			if (iVar2 != -15 && func_1237(iVar2))
			{
				return;
			}
			func_1234(iParam0, iParam1, 1);
			break;
		case 1:
			if (func_1238(iParam0, iParam1, 0))
			{
				func_1234(iParam0, iParam1, 2);
				func_1089(iParam0, 3);
				return;
			}
			break;
		case 2:
			if (!func_1238(iParam0, iParam1, 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(iVar0, iVar1, false, 0))
			{
				func_1234(iParam0, iParam1, 3);
				return;
			}
			if (func_1067(iParam0) >= 3)
			{
				func_1234(iParam0, iParam1, 3);
				return;
			}
			break;
		case 3:
			if (func_1067(iParam0) >= 3)
			{
				return;
			}
			if (!func_1239(iParam0, iParam1))
			{
				func_1234(iParam0, iParam1, 2);
				return;
			}
			if (func_1083(iParam0) != 255)
			{
				func_1089(iParam0, 2);
			}
			else
			{
				func_1089(iParam0, 1);
			}
			iVar2 = func_1236(iParam0);
			if (iVar2 != -15 && func_1237(iVar2))
			{
				func_1234(iParam0, iParam1, 0);
				return;
			}
			if (func_1067(iParam0) >= 4)
			{
				return;
			}
			if (func_1240(iParam0, 7))
			{
				return;
			}
			func_1234(iParam0, iParam1, 1);
			break;
	}
}

void func_1079(int iParam0, int iParam1)
{
	Global_1207465.f_231.f_1066[iParam0 /*17*/].f_13 = iParam1;
}

bool func_1080(int iParam0)
{
	bool bVar0;

	bVar0 = !func_1242(func_1059(iParam0), func_1241(iParam0), 0);
	return bVar0;
}

int func_1081(int iParam0)
{
	struct<15> Var0;
	struct<15> Var15;
	int iVar30;
	int iVar31;

	if (!func_871(iParam0))
	{
		return 0;
	}
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
	Var15 = { Global_1207465.f_231[iParam0 /*15*/] };
	Var0.f_1 = 0;
	Global_1207465.f_231[iParam0 /*15*/] = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1207465.f_13[iVar31] = (Global_1207465.f_13[iVar31] - 1);
	Global_1207465.f_8[iVar30] = (Global_1207465.f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1207465.f_18[iVar30] = (Global_1207465.f_18[iVar30] - 1);
	}
	if (func_1243(iParam0))
	{
		Global_1207465.f_23[iVar30] = (Global_1207465.f_23[iVar30] - 1);
	}
	return 1;
}

void func_1082(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	Global_1207465.f_2505[iParam0 /*6*/].f_4 = GANG::NETWORK_GET_GANG_ID(iParam1);
	Global_1207465.f_2505[iParam0 /*6*/].f_5 = iParam1;
}

int func_1083(int iParam0)
{
	return Global_1207465.f_2505[iParam0 /*6*/].f_5;
}

bool func_1084(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (func_1061(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_1085(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_858(iParam0, 512))
	{
		return false;
	}
	iVar0 = func_1244(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	uVar1 = func_291(func_1245(iParam0, 0), 0f, 0f, 0f, IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0 * 2), -2.19652E+23f, 0, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&uVar1) <= 0;
}

bool func_1086(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_1246(iParam0, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_1087(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1207465.f_231.f_1066[iParam0 /*17*/].f_6 & 4096 != 0)
	{
		return;
	}
	iVar0 = Global_1207465.f_2505[iParam0 /*6*/].f_5;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar2 = GANG::NETWORK_GET_GANG_ID(iVar0);
		if (Global_1207465.f_2505[iParam0 /*6*/].f_4 != iVar2)
		{
			if ((GANG::NETWORK_IS_GANG_ID_VALID(Global_1207465.f_2505[iParam0 /*6*/].f_4) && GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207465.f_2505[iParam0 /*6*/].f_4)) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1207465.f_2505[iParam0 /*6*/].f_4) > 0)
			{
				iVar1 = GANG::NETWORK_GET_GANG_LEADER(Global_1207465.f_2505[iParam0 /*6*/].f_4);
				func_1082(iParam0, iVar1);
			}
			else if (GANG::NETWORK_GET_GANG_LEADER(iVar2) == iVar0)
			{
				Global_1207465.f_2505[iParam0 /*6*/].f_4 = iVar2;
			}
			else
			{
				func_1247(iParam0);
			}
		}
		return;
	}
	if (Global_1207465.f_2505[iParam0 /*6*/].f_4 == 0)
	{
		func_1247(iParam0);
		return;
	}
	if (!GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207465.f_2505[iParam0 /*6*/].f_4))
	{
		func_1247(iParam0);
		return;
	}
	iVar1 = GANG::NETWORK_GET_GANG_LEADER(Global_1207465.f_2505[iParam0 /*6*/].f_4);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		func_1247(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_1247(iParam0);
		return;
	}
	func_1082(iParam0, iVar1);
}

bool func_1088(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (Global_1217203[iVar0 /*72*/][iParam0] > 127)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_1089(int iParam0, int iParam1)
{
	Global_1207465.f_231[iParam0 /*15*/].f_1 = iParam1;
}

int func_1090(var uParam0)
{
	return *uParam0;
}

struct<40> func_1091(var uParam0, int iParam1)
{
	struct<40> Var0;

	Var0 = { func_1248(uParam0, iParam1) };
	func_1249(uParam0, iParam1);
	return Var0;
}

bool func_1092(var uParam0, var uParam1)
{
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return false;
	}
	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
		{
			return true;
		}
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return false;
	}
	if (uParam0->f_7 != uParam1->f_7)
	{
		return false;
	}
	if (uParam0->f_8 != uParam1->f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
	{
		return false;
	}
	if (!func_929(uParam0->f_8.f_5, uParam1->f_8.f_5))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
	{
		return false;
	}
	if (!func_929(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	return true;
}

void func_1093(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1094(var uParam0)
{
	return *uParam0;
}

bool func_1095(var uParam0)
{
	if (func_18(*uParam0))
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

int func_1096(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_1250(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_1251(iParam1)) - 1);
	}
	bVar2 = func_18(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_929(Global_1207465.f_231[iVar6 /*15*/].f_5, *uParam0))
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

bool func_1097(int iParam0)
{
	int iVar0;

	iVar0 = func_868(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iVar0))
	{
		return false;
	}
	return true;
}

void func_1098(struct<2> Param0)
{
	struct<24> Var0;

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
	Var0.f_2 = 0;
	Var0.f_5 = 7;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = 1;
	Var0.f_8.f_5.f_9 = 1;
	Var0.f_8.f_5 = { Param0 };
	func_1252(&(Global_1107816.f_33.f_513), &Var0, 0, 0, 0, 0, 0);
}

void func_1099(int iParam0, int iParam1)
{
	Global_1107816.f_33[iParam0 /*16*/].f_3.f_7 = iParam1;
}

var func_1100(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_7;
}

int func_1101()
{
	return Global_1901671.f_316.f_45;
}

bool func_1102(struct<2> Param0, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_868(iParam2);
	bVar1 = (iVar0 != 0 && GANG::NETWORK_IS_GANG_IN_SESSION(iVar0));
	if (Global_1110244.f_18)
	{
		iVar2 = func_1253(Param0);
		if (func_1254(iVar2, bVar1))
		{
			func_1098(Param0);
			return true;
		}
	}
	else
	{
		func_1098(Param0);
		return true;
	}
	return false;
}

int func_1103(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (!Global_1295619.f_17[iVar1])
		{
		}
		else
		{
			iVar0 = (iVar0 || Global_1138658[iVar1 /*56*/].f_1[iParam0]);
		}
		iVar1++;
	}
	return iVar0;
}

void func_1104(int iParam0)
{
	Global_1107816.f_33[iParam0 /*16*/].f_1 = -1;
}

int func_1105()
{
	return Global_1901671.f_316.f_46;
}

int func_1106()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_868(iVar0) == 0)
		{
		}
		else if (!GANG::NETWORK_IS_GANG_IN_SESSION(func_868(iVar0)))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

var func_1107()
{
	return Global_1107816.f_750.f_1;
}

void func_1108()
{
	struct<28> Var0;
	var uVar31;
	int iVar32;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	if (!func_666())
	{
		return;
	}
	iVar32 = NETWORK::_NETWORK_GET_SESSION_HOST();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar32))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar32))
	{
		return;
	}
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar31, iVar32);
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = GANG::NETWORK_GET_GANG_ID(Var0.f_10);
	Var0.f_4 = 10;
	func_458();
	func_1121(&Var0, uVar31);
}

void func_1109(int iParam0)
{
	func_1255(iParam0);
	func_1104(iParam0);
	func_1256(iParam0);
}

int func_1110(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1103(iParam0);
	if (iVar0 & 8 != 0)
	{
		return 0;
	}
	if (Global_1110244.f_19)
	{
		if (!func_930(iParam0, 4))
		{
			if (NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0)
			{
				return 0;
			}
		}
	}
	else if (NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0)
	{
		return 0;
	}
	func_1256(iParam0);
	func_1104(iParam0);
	*uParam1 = 0;
	return 1;
}

int func_1111(int iParam0, var uParam1)
{
	func_1256(iParam0);
	func_1104(iParam0);
	*uParam1 = 0;
	return 1;
}

struct<2> func_1112()
{
	return Global_1110244.f_11;
}

int func_1113()
{
	return Global_1110244.f_11.f_3;
}

void func_1114(int iParam0)
{
	Global_1110244.f_21.f_13.f_1 = iParam0;
}

void func_1115(int iParam0)
{
	Global_1110244.f_21.f_13.f_2 = iParam0;
}

void func_1116(int iParam0)
{
	Global_1110244.f_21.f_13.f_3 = iParam0;
}

void func_1117()
{
	func_1257(&(Global_1110244.f_21.f_13));
}

void func_1118()
{
	Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_34 = 0;
}

int func_1119(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return Global_1155135[iParam0 /*30*/].f_3.f_1;
}

bool func_1120(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_1121(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 32, &uParam1);
}

void func_1122(int iParam0)
{
	Global_1110244.f_21.f_112.f_1 = iParam0;
}

void func_1123(int iParam0)
{
	Global_1110244.f_21.f_112 = iParam0;
}

void func_1124(int iParam0)
{
	Global_1110244.f_21.f_112.f_2 = iParam0;
}

void func_1125(struct<2> Param0)
{
	Global_1110244.f_21.f_112.f_3 = { Param0 };
}

void func_1126(int iParam0)
{
	Global_1110244.f_21.f_112.f_5 = iParam0;
}

void func_1127(int iParam0)
{
	Global_1110244.f_21.f_112.f_6 = iParam0;
}

void func_1128(int iParam0)
{
	Global_1110244.f_21.f_112.f_7 = iParam0;
}

void func_1129(int iParam0)
{
	Global_1110244.f_21.f_112.f_6 = iParam0;
}

void func_1130(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1110244.f_21.f_112.f_9), bParam0, 4);
}

bool func_1131(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_1132(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3;
}

bool func_1133(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

int func_1134(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_1;
}

bool func_1135(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 104);
}

int func_1136(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_3;
}

bool func_1137()
{
	return Global_1110244.f_21.f_112.f_8;
}

int func_1138(int iParam0)
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

int func_1139(int iParam0)
{
	return func_1258(iParam0);
}

void func_1140(int iParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, &(Global_1107816.f_33[iParam0 /*16*/].f_3.f_9), 4);
}

Vector3 func_1141(int iParam0)
{
	return Global_1114878[iParam0 /*70*/].f_7.f_1;
}

var func_1142(int iParam0)
{
	return Global_1114878[iParam0 /*70*/].f_7;
}

void func_1143(var uParam0, int iParam1, vector3 vParam2, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[7];
	int iVar12;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar12))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(iParam1, iVar12))
		{
		}
		else if (GANG::NETWORK_IS_GANG_LEADER(iVar12))
		{
			(*uParam0)[0] = iVar12;
			Jump @159; //curOff = 85
		}
		else if (func_1259(iVar12, vParam2, uParam5))
		{
			if (iVar0 + 1 < 7)
			{
				(*uParam0)[(1 + iVar0)] = iVar12;
				iVar0++;
			}
		}
		else if (iVar1 < 7)
		{
			iVar4[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar3 = iVar4[iVar2];
		iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (iVar0 + 1 < 7)
		{
			(*uParam0)[(1 + iVar0)] = iVar12;
			iVar0++;
		}
		iVar2++;
	}
}

void func_1144(bool bParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1110244.f_4607.f_3[iParam1 /*9*/]), bParam0, 5);
}

void func_1145(bool bParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam0, &(Global_1110244.f_4607.f_3[iParam1 /*9*/]), 5);
}

void func_1146(bool bParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1110244.f_4607.f_3[iParam1 /*9*/].f_5), bParam0, 4);
}

void func_1147(bool bParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam0, &(Global_1110244.f_4607.f_3[iParam1 /*9*/].f_5), 4);
}

void func_1148(int iParam0)
{
	Global_1149417.f_4920[iParam0 /*3*/] = UNLOCK::_UNLOCK_IS_NEW(Global_1835011[iParam0 /*72*/].f_3);
	Global_1149417.f_4920[iParam0 /*3*/].f_2 = UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*72*/].f_3);
	Global_1149417.f_4920[iParam0 /*3*/].f_1 = UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3);
}

int func_1149(struct<2> Param0)
{
	return func_19(Param0);
}

int func_1150(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_21())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_1260(&Global_0, 8);
	}
	func_1260(&Global_0, 1);
	return 1;
}

void func_1151(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_1261(func_1157(Param0));
	iVar1 = func_1149(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_60() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_1262(Param0, &Var2, iParam2);
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

void func_1152(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1263(&Global_1940186, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_1264(&Global_1940186, 8388608);
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

void func_1153(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1265(iVar0, 1);
		if ((iVar1 == -4.356636E+32f || iVar1 == -1.514687E+13f) || iVar1 == 3.829501E+32f)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1266(cVar2);
			}
			else
			{
				func_1267();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_1154(bool bParam0)
{
	if (!bParam0 && func_776(1.600127E-25f))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(6.069634E-12f, bParam0, 0);
	return 1;
}

void func_1155(int iParam0)
{
	Global_1900460 = (Global_1900460 || iParam0);
}

int func_1156(struct<2> Param0)
{
	return func_1269(func_1268(Param0));
}

int func_1157(var uParam0, var uParam1)
{
	return uParam0;
}

int func_1158(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_692(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1270(iVar0);
}

int func_1159(struct<2> Param0, int iParam2)
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
	if (!func_78(Param0, &vVar0))
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
		func_78(Global_1072759.f_19487.f_1[iVar9 /*3*/], &vVar3);
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
			func_1271(iVar9);
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

void func_1160()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (func_78(Global_1072759.f_19487.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

int func_1161(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40676.74f;
		case 2:
			return -4.143648E-10f;
		case 4:
			return -8.395991E+34f;
		default:
			break;
	}
	return 0;
}

int func_1162(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

struct<5> func_1163(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_399(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_1164(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_503(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_1272(bParam1) };
			if (iParam2 && func_1273(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_1274(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_1274(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_1275(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_1276(bParam1) };
			switch (func_1277(bParam0))
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
			if (func_1278(bParam0, -2.580501E-27f))
			{
				Var0 = { func_503(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_1278(bParam0, -4.220332E-15f))
			{
				Var0 = { func_503(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_503(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_1278(bParam0, -3.171238E-21f))
			{
				Var0 = { func_503(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_1279(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_1278(bParam0, -3.171238E-21f))
			{
				Var0 = { func_503(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

int func_1164(bool bParam0)
{
	vector3 vVar0;

	if (!func_728(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_1165(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_728(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_1164(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_1280(bParam0, 9.811189E+11f))
	{
		func_1281(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_1166(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_1282(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_1283(&Var0, func_1272(0));
	}
	if (!func_1284(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_1285(iVar18);
	return iVar19;
}

bool func_1167(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_1168(int iParam0, int iParam1)
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

void func_1169(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_612(uParam0))
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

bool func_1170(bool bParam0)
{
	var uVar0;

	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, 5);
	if (!func_1286(1))
	{
		return false;
	}
	*bParam0 = Global_1072759.f_28418[51 /*4*/].f_3;
	return true;
}

bool func_1171(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_1172(bool bParam0, int iParam1)
{
	bParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
}

struct<8> func_1173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1287(&uParam0, 69, 1);
}

var func_1174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1288(&uParam0, 93, 1, -1);
}

var func_1175(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1289(&uParam0, 94, 1);
}

int func_1176(struct<5> Param0, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (!func_1171(&Param0, 28, iParam5, 0, 1))
	{
		return 0;
	}
	iVar1 = func_1172(&Param0, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar2 = func_1290(Param0, iVar0);
		switch (iParam5)
		{
			case joaat("ANIM_SCENE"):
				iVar3 = func_1292(func_1291(iVar2));
				break;
			case -952694274:
				iVar3 = func_1292(func_1293(iVar2));
				break;
			case joaat("PARTICLE"):
				iVar3 = func_1292(func_1294(iVar2));
				break;
			case joaat("PLAYLIST"):
				iVar3 = func_1292(func_1295(iVar2));
				break;
			default:
				break;
		}
		uVar4 = (uVar4 || iVar3);
		iVar0++;
	}
	return uVar4;
}

struct<8> func_1177(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1287(&uParam0, 87, 1);
}

var func_1178(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1296(&uParam0, 87, 1);
}

Vector3 func_1179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1297(&uParam0, 88, 1);
}

Vector3 func_1180(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1297(&uParam0, 68, 1);
}

int func_1181(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1298(func_1296(&uParam0, 89, 1));
}

var func_1182(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1289(&uParam0, 90, 1);
}

Vector3 func_1183(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1297(&uParam0, 91, 1);
}

var func_1184(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1288(&uParam0, 86, 0, -1);
}

var func_1185(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1288(&uParam0, 83, 0, -1);
}

var func_1186(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1288(&uParam0, 85, 0, -1);
}

var func_1187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1288(&uParam0, 84, 0, -1);
}

var func_1188(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1288(&uParam0, 92, 1, -1);
}

char* func_1189(int iParam0)
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

bool func_1190(int iParam0)
{
	return iParam0 != 0;
}

var func_1191(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_650(&uVar0))
	{
		return 0;
	}
	if (!func_651(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 38, 0, 0, 1))
	{
		return 0;
	}
	if (!func_651(&uVar0, 40, iParam2, 0, 1))
	{
		return 0;
	}
	return func_821(&uVar0);
}

var func_1192(int iParam0)
{
	struct<4> Var0;

	Var0 = { func_822(iParam0) };
	return Var0;
}

int func_1193(struct<2> Param0, var uParam2, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;

	uVar5 = Param0.f_1;
	*iParam5 = func_1299(&Param0);
	iVar1 = func_812(&Param0, 5);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		if (!func_651(&Param0, 34, iVar0, 0, 1))
		{
		}
		else
		{
			iVar4 = func_855(&Param0, 67, 1);
			switch (*iParam5)
			{
				case joaat("AWARD"):
					iVar2 = func_1300(iVar4);
					break;
				case joaat("AWARD_PROCESS"):
					iVar2 = func_1301(iVar4);
					break;
				case joaat("PREREQUISITE"):
					iVar2 = func_1302(iVar4);
					break;
				case joaat("MATCHMAKING"):
					iVar2 = func_1303(iVar4);
					break;
				case joaat("CHALLENGE"):
					iVar2 = func_1304(iVar4);
					break;
				case joaat("REPLAY"):
					iVar2 = func_1305(iVar4);
					break;
				default:
					break;
			}
			uVar3 = (uVar3 || iVar2);
		}
		iVar0++;
	}
	return uVar3;
}

int func_1194(bool bParam0)
{
	return func_855(bParam0, 85, 1);
}

int func_1195(bool bParam0)
{
	return func_855(bParam0, 86, 1);
}

int func_1196(bool bParam0)
{
	return func_855(bParam0, 87, 1);
}

var func_1197(bool bParam0)
{
	return func_1038(bParam0, 88, 1);
}

void func_1198(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_812(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_651(&Param0, 32, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1193(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("CHALLENGE"):
				uParam5->f_5 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_1199(int iParam0)
{
	if (!func_498(iParam0))
	{
		return;
	}
	Global_1138658[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
}

void func_1200(int iParam0)
{
	if (!func_1131(iParam0))
	{
		return;
	}
	func_1306(iParam0);
}

void func_1201()
{
	if (!func_863())
	{
		return;
	}
	if (!func_18(Global_1051268))
	{
		return;
	}
	func_293(&Global_1051268);
}

void func_1202(int iParam0)
{
	if (func_514(&Global_1140708, iParam0, 1))
	{
	}
}

void func_1203(int iParam0, int iParam1)
{
	Global_1140708.f_2[iParam0] = iParam1;
}

void func_1204(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1220(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_1307(iParam0, iParam1);
	if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		return;
	}
	SCRIPTS::_REQUEST_THREAD_EXIT(iVar0);
}

void func_1205(int iParam0, int iParam1)
{
	func_1216(iParam0, iParam1);
	func_1215(iParam0, iParam1, -1);
}

void func_1206(int iParam0)
{
	func_293(&(Global_1219580.f_1[iParam0 /*10*/].f_4));
	Global_1219580.f_1[iParam0 /*10*/].f_6 = 0;
}

int func_1207()
{
	return Global_1102813.f_3673;
}

int func_1208(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return Global_1102813.f_3675[iParam0];
}

void func_1209(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

void func_1210(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_18(Param0))
	{
		return;
	}
	if (!func_965(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1308(Param0);
	}
	if (!func_18(func_215(0)))
	{
		func_968(Param0, 3);
		func_1152(bParam3);
		func_1153(!bParam4);
		func_1309(Param0, -1);
		if (bParam2 && !func_525(2))
		{
			func_1260(&Global_0, 1024);
		}
		func_1155(1);
	}
	else
	{
		func_1309(Param0, -1);
		func_968(Param0, 4);
		func_1310(Param0, 0);
	}
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_1157(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1311(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

var func_1211(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/];
}

var func_1212(int iParam0, int iParam1)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_1;
}

int func_1213(int iParam0, int iParam1)
{
	return Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_1214(int iParam0, int iParam1)
{
	return Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/];
}

void func_1215(int iParam0, int iParam1, int iParam2)
{
	Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/] = iParam2;
}

void func_1216(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_1222(iParam0, iParam1, iVar0);
		iVar0++;
	}
}

bool func_1217(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1235(iParam0, iParam1);
	if (iVar0 == NaNf)
	{
		return true;
	}
	vVar1 = { func_1312(PLAYER::PLAYER_ID()) };
	if (func_101(vVar1))
	{
		return false;
	}
	return func_743(vVar1, func_1245(iParam0, iParam1)) < IntToFloat(iVar0);
}

void func_1218(int iParam0, int iParam1, int iParam2)
{
	func_1063(iParam0, func_1313(iParam1, iParam2));
}

bool func_1219(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	struct<5> Var13;
	var uVar18;

	iVar0 = func_1212(iParam0, iParam1);
	iVar1 = func_1211(iParam0);
	if (func_1220(iParam0, iParam1))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(iVar1, iVar0, true, 0))
	{
		return false;
	}
	if (func_858(iParam0, 8))
	{
		if (func_1226(iParam0, iParam1) != 4)
		{
			return false;
		}
	}
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_1314(iParam0)) <= 0)
		{
			return false;
		}
		if (func_858(iParam0, 64))
		{
			Var3.f_7 = -1;
			Var3.f_7.f_1 = -1;
			Var3.f_9 = 255;
			Var3 = iVar0;
			Var3.f_9 = func_1083(iParam0);
			Var3.f_1 = { func_1245(iParam0, iParam1) };
			Var3.f_5 = iParam0;
			Var3.f_7 = { func_1059(iParam0) };
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var3, 10, func_1314(iParam0));
		}
		else if (func_858(iParam0, 128))
		{
			Var13 = iVar0;
			Var13.f_1 = func_1315(iVar1);
			Var13.f_2 = Global_1207465.f_231.f_1066[iParam0 /*17*/].f_14;
			Var13.f_3 = Global_1207465.f_231.f_1066[iParam0 /*17*/].f_15;
			Var13.f_4 = Global_1207465.f_231.f_1066[iParam0 /*17*/].f_16;
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var13, 5, func_1314(iParam0));
		}
		else
		{
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar18, 1, func_1314(iParam0));
		}
		func_1221(iParam0, iParam1, iVar2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
		func_1316(iVar1, iVar0);
		return true;
	}
	return false;
}

bool func_1220(int iParam0, int iParam1)
{
	return SCRIPTS::DOES_THREAD_EXIST(Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2);
}

void func_1221(int iParam0, int iParam1, int iParam2)
{
	Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2 = iParam2;
}

void func_1222(int iParam0, int iParam1, int iParam2)
{
	func_1209(iParam0, func_1313(iParam1, iParam2));
}

bool func_1223(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_858(iParam0, 1024))
	{
		return false;
	}
	iVar0 = func_1244(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	return func_743(Global_34, func_1245(iParam0, iParam1)) > IntToFloat(iVar0);
}

int func_1224(int iParam0, int iParam1)
{
	return Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1;
}

void func_1225(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam2))
	{
		Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = 0;
		return;
	}
	Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = iParam2;
}

int func_1226(int iParam0, int iParam1)
{
	return Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1;
}

void func_1227(int iParam0, int iParam1)
{
	func_1233(iParam0, iParam1);
	func_1076(iParam0, iParam1);
}

void func_1228(int iParam0, int iParam1, int iParam2)
{
	Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1 = iParam2;
}

int func_1229(int iParam0, int iParam1)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_2;
}

int func_1230(int iParam0, int iParam1)
{
	return Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2;
}

void func_1231(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var10;
	int iVar12;

	if (func_1224(iParam0, iParam1) != 0 && !func_1317(func_1224(iParam0, iParam1)))
	{
		return;
	}
	iVar0 = 96;
	if (!bParam2)
	{
		iVar0 += 128;
	}
	if (func_1076(iParam0, iParam1))
	{
		Var1 = { func_1245(iParam0, iParam1) };
		Var1.f_4 = BUILTIN::TO_FLOAT(func_1229(iParam0, iParam1));
		Var1.f_5 = iVar0;
		Var1.f_6 = func_1318(iParam0);
		Var10 = { func_1059(iParam0) };
		iVar12 = 0;
		if (func_18(Var10))
		{
			iVar12 = func_19(Var10);
		}
		if (iVar12 != 0)
		{
			Var1.f_7 = iVar12;
		}
		else
		{
			Var1.f_7 = -2.230381E-17f;
		}
		func_1225(iParam0, iParam1, VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&Var1));
	}
}

bool func_1232(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1230(iParam0, iParam1) != 0)
	{
		return true;
	}
	func_1319(iParam0, iParam1);
	func_1231(iParam0, iParam1, 1);
	iVar0 = func_1224(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_1320(iVar0))
	{
		return false;
	}
	func_1321(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_1224(iParam0, iParam1)));
	return true;
}

void func_1233(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1230(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar0))
	{
		func_1321(iParam0, iParam1, 0);
		return;
	}
	VOLUME::_RELEASE_LOCK_VOLUME(iVar0);
	func_1321(iParam0, iParam1, 0);
	func_1076(iParam0, iParam1);
}

void func_1234(int iParam0, int iParam1, int iParam2)
{
	Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/] = iParam2;
}

int func_1235(int iParam0, int iParam1)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_3;
}

int func_1236(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_4;
}

bool func_1237(int iParam0)
{
	return Global_1902565 > iParam0;
}

bool func_1238(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (func_1322(iParam0, iParam1, iVar0, iParam2))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_1239(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_1323(iParam0, iParam1, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_1240(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_1061(iParam0, iVar0, 2))
		{
		}
		else if (!func_1061(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_1241(int iParam0)
{
	if (!func_871(iParam0))
	{
		return 0;
	}
	return Global_1207465.f_231[iParam0 /*15*/].f_5.f_8;
}

bool func_1242(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_18(Global_1051268) && !func_929(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_741(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_1324(iParam3, 255))
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
	if (func_362())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_18(Global_1051268))
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

bool func_1243(int iParam0)
{
	if (iParam0 < 3)
	{
		return false;
	}
	if (iParam0 < (3 + Global_1207465.f_3[1]))
	{
		return false;
	}
	if (iParam0 < 35)
	{
		return true;
	}
	if (iParam0 < (35 + Global_1207465.f_3[2]))
	{
		return false;
	}
	if (iParam0 < (35 + Global_1207465.f_3[2]) + 16)
	{
		return false;
	}
	return true;
}

var func_1244(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_2;
}

Vector3 func_1245(int iParam0, int iParam1)
{
	return func_1325(Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/]);
}

bool func_1246(int iParam0, int iParam1)
{
	return Global_1217203[iParam1 /*72*/][iParam0] == 0;
}

void func_1247(int iParam0)
{
	Global_1207465.f_2505[iParam0 /*6*/].f_4 = 0;
	Global_1207465.f_2505[iParam0 /*6*/].f_5 = 255;
}

struct<40> func_1248(var uParam0, int iParam1)
{
	struct<40> Var0;
	struct<40> Var40;

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
	if (!func_1326(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { uParam0->f_3[iParam1 /*40*/] };
	uParam0->f_3[iParam1 /*40*/] = { Var0 };
	return Var40;
}

void func_1249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % uParam0->f_2);
			if (uParam0->f_3[iVar3 /*40*/] != -1)
			{
			}
			else
			{
				if (uParam0->f_3[iVar3 /*40*/].f_4 != -1)
				{
					func_1248(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % uParam0->f_2);
			if (uParam0->f_3[iVar4 /*40*/] != -1)
			{
			}
			else
			{
				func_1248(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

int func_1250(int iParam0)
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

int func_1251(int iParam0)
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

int func_1252(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_1327(uParam0))
	{
		return 0;
	}
	if (!func_1328(&(uParam1->f_8)))
	{
		return 0;
	}
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = PLAYER::PLAYER_ID();
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return 0;
	}
	iVar0 = func_1329(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return 0;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_1330(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return 0;
			}
			break;
	}
	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	uParam0->f_3[iVar1 /*40*/] = { *uParam1 };
	func_1093(&(uParam0->f_3[iVar1 /*40*/]), 0);
	*uParam0++;
	return 1;
}

int func_1253(struct<2> Param0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_18(Param0))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		Var0 = { func_499(iVar2) };
		if (func_929(Var0, Param0))
		{
			iVar4 = func_875(iVar2);
			iVar5 = func_868(iVar2);
			if (iVar4 >= 1 && iVar4 <= 4)
			{
				if (iVar5 != 0 && GANG::NETWORK_IS_GANG_IN_SESSION(iVar5))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	return iVar3;
}

bool func_1254(int iParam0, bool bParam1)
{
	if (iParam0 > 1)
	{
		return false;
	}
	if (iParam0 < 1)
	{
		return true;
	}
	if (bParam1)
	{
		return true;
	}
	return false;
}

void func_1255(int iParam0)
{
	Global_1107816.f_33[iParam0 /*16*/] = 0;
}

void func_1256(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_9.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1107816.f_33[iParam0 /*16*/].f_3), &Var0, 13);
}

void func_1257(var uParam0)
{
	struct<27> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_9 = -1;
	Var0.f_9.f_1 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = 7;
	Var0.f_12.f_1 = 255;
	Var0.f_12.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_25 = -1;
	Var0.f_25.f_1 = -1;
	*uParam0 = { Var0 };
}

var func_1258(int iParam0)
{
	return Global_1296597[iParam0 /*5*/].f_3;
}

bool func_1259(int iParam0, vector3 vParam1, float fParam4)
{
	return BUILTIN::VDIST(func_1312(iParam0), vParam1) <= fParam4;
}

void func_1260(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1261(int iParam0)
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

void func_1262(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_1157(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1331(func_345(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_1332(iVar5) == func_345(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_1333(iVar4);
			if (!func_1334(iVar6, 0))
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

void func_1263(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1264(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1265(int iParam0, int iParam1)
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

void func_1266(char[12] cParam0)
{
	Global_1939089.f_75.f_67 = { cParam0 };
}

void func_1267()
{
	StringCopy(&(Global_1939089.f_75.f_67), "", 24);
}

int func_1268(struct<2> Param0)
{
	int iVar0;

	if (!func_18(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_929(Global_1900460.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1269(int iParam0)
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
		func_293(&(Global_1900460.f_1[0 /*2*/]));
		return 1;
	}
	func_293(&(Global_1900460.f_1[iParam0 /*2*/]));
	Global_1900460.f_66 = (Global_1900460.f_66 - 1);
	func_1335(iParam0, Global_1900460.f_66);
	return 1;
}

int func_1270(int iParam0)
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

int func_1271(int iParam0)
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

struct<4> func_1272(bool bParam0)
{
	int iVar0;

	iVar0 = func_504(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_503(8.681942E-06f, func_399(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_503(8.681942E-06f, func_399(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_503(8.681942E-06f, func_399(bParam0), -1.942248E+12f, 0);
}

int func_1273(bool bParam0, bool bParam1)
{
	if (func_1277(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_1336();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_1274(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_400(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_1275(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_1337(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1276(bool bParam0)
{
	int iVar0;

	iVar0 = func_504(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_503(3.507197E-29f, func_399(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_503(3.507197E-29f, func_399(bParam0), 12999093, 0);
}

int func_1277(bool bParam0)
{
	struct<2> Var0;

	if (!func_728(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_1278(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_1277(bParam0);
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
			if (func_1338(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_1279(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1339(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1280(bool bParam0, int iParam1)
{
	if (!func_728(bParam0, 0))
	{
		return func_1340(func_975(bParam0), iParam1);
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

void func_1281(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_1282(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_1283(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1284(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_504(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1285(int iParam0)
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

bool func_1286(int iParam0)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[51 /*4*/].f_3))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[51 /*4*/].f_3))
	{
		return false;
	}
	return true;
}

struct<8> func_1287(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&Var0, bParam0))
	{
	}
	return Var0;
}

int func_1288(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar0, bParam0))
	{
		iVar0 = iParam3;
	}
	return iVar0;
}

var func_1289(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&uVar0, bParam0))
	{
	}
	return uVar0;
}

int func_1290(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!func_1171(&uParam0, 30, iParam5, 0, 1))
	{
		return 0;
	}
	return func_1296(&uParam0, 61, 1);
}

int func_1291(int iParam0)
{
	switch (iParam0)
	{
		case -1813649426:
			return 1;
		case -1728078503:
			return 2;
		case 664704845:
			return 4;
		case -656485570:
			return 8;
		case 856889675:
			return 16;
		case -40729341:
			return 32;
		case 513761045:
			return 64;
		case -608370326:
			return 128;
		case joaat("ASF_BLOCK_SKIPPING"):
			return 256;
		case -1138842803:
			return 512;
		case 1959327570:
			return 1024;
		case joaat("ASF_ENABLE_LETTER_BOX"):
			return 2048;
		case -1303182884:
			return 4096;
		case 1317645850:
			return 8192;
		case 2020911072:
			return 16384;
		case 1930555512:
			return 32768;
		default:
			break;
	}
	return 0;
}

int func_1292(int iParam0)
{
	return iParam0;
}

int func_1293(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ASSE_GIVE_OWNERSHIP"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1294(int iParam0)
{
	switch (iParam0)
	{
		case -1420685820:
			return 1;
		case -445480404:
			return 2;
		case -138533181:
			return 4;
		case 675169979:
			return 16;
		case 1324736666:
			return 8;
		case 74623641:
			return 64;
		default:
			break;
	}
	return 0;
}

int func_1295(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MALE"):
			return 1;
		case joaat("FEMALE"):
			return 2;
		case joaat("STANDING"):
			return 4;
		case joaat("CROUCHING"):
			return 8;
		default:
			break;
	}
	return 0;
}

int func_1296(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

Vector3 func_1297(bool bParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar0, bParam0))
	{
	}
	return vVar0;
}

int func_1298(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ID_SKEL_ROOT"):
			return 0;
		case joaat("ID_SKEL_SPINE_ROOT"):
			return 11569;
		case joaat("ID_SKEL_SPINE0"):
			return 14410;
		case joaat("ID_SKEL_SPINE1"):
			return 14411;
		case joaat("ID_SKEL_SPINE2"):
			return 14412;
		case joaat("ID_SKEL_SPINE3"):
			return 14413;
		case joaat("ID_SKEL_SPINE4"):
			return 14414;
		case joaat("ID_SKEL_SPINE5"):
			return 14415;
		case joaat("ID_SKEL_SPINE6"):
			return 14416;
		case joaat("ID_SKEL_NECK0"):
			return 14283;
		case joaat("ID_SKEL_NECK1"):
			return 14284;
		case joaat("ID_SKEL_NECK2"):
			return 14285;
		case joaat("ID_SKEL_HEAD"):
			return 21030;
		default:
			break;
	}
	return -1;
}

int func_1299(bool bParam0)
{
	return func_855(bParam0, 67, 1);
}

int func_1300(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CHECK_MAX_CLAIMS"):
			return 1;
		case joaat("ONLY_INIT"):
			return 2;
		case joaat("ONLY_ON_WIN"):
			return 4;
		case joaat("ONLY_UNLOCKED_IN_FLOW"):
			return 8;
		case 106596528:
			return 16;
		case -1093766591:
			return 0f;
		default:
			break;
	}
	return 0;
}

int func_1301(int iParam0)
{
	switch (iParam0)
	{
		case joaat("INCREMENT_DIFFICULTY"):
			return 2;
		case joaat("INCREMENT_MISSION"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1302(int iParam0)
{
	switch (iParam0)
	{
		case joaat("IGNORE_FOR_MISSION_SELECTION"):
			return 1;
		case joaat("IGNORE_FOR_REPLAY_AVAILABILITY"):
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1303(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOCKED_TO_GANG"):
			return 1;
		case 236229850:
			return 2;
		case joaat("EXCLUDE_IN_PROGRESS"):
			return 4;
		case joaat("UGC_SKIP_LOBBY"):
			return 1024;
		case joaat("HIDE_SIDEMENU"):
			return 2.524355E-29f;
		case joaat("HIDE_HELPTEXT_CANCEL_MSG"):
			return 1.084202E-19f;
		default:
			break;
	}
	return 0;
}

int func_1304(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ONLY_ON_WIN"):
			return 1;
		case joaat("ONLY_UNLOCKED_IN_FLOW"):
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1305(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ONLY_ON_WIN"):
			return 1;
		case joaat("ONLY_IN_FLOW"):
			return 2;
		default:
			break;
	}
	return 0;
}

void func_1306(int iParam0)
{
	func_293(&(Global_1119220[iParam0 /*35*/].f_16));
}

var func_1307(int iParam0, int iParam1)
{
	return Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2;
}

void func_1308(struct<2> Param0)
{
	struct<32> Var0;

	if (func_1149(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_1149(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_1149(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_1311(Param0, &Var0))
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

int func_1309(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_1268(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900460.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900460.f_66;
	func_1341(Param0, iVar0);
	Global_1900460.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
	{
		return iVar0;
	}
	func_1335(iVar0, iParam2);
	return iParam2;
}

int func_1310(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_18(Param0))
	{
		return 0;
	}
	iVar0 = func_1268(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1342(Param0, func_215(0), iParam2))
	{
		func_968(func_215(0), 3);
		func_968(func_215(iVar0), 4);
		return 0;
	}
	func_1335(iVar0, 0);
	func_968(func_215(0), 3);
	func_968(func_215(1), 4);
	return 1;
}

bool func_1311(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_78(Param0, &vVar0);
	if (func_1343(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

Vector3 func_1312(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_1313(int iParam0, int iParam1)
{
	return (8 + (iParam0 * 2 + iParam1));
}

var func_1314(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_1;
}

int func_1315(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case joaat("NB_ANIMAL_ATTACK"):
			return 1;
		case joaat("NB_ARROWHEAD_INJURY"):
			return 2;
		case joaat("NB_EGG_PROTECTOR"):
			return 3;
		case joaat("NB_GRAVEROBBER"):
			return 4;
		case joaat("NB_KIDNAPPED"):
			return 6;
		case joaat("NB_PHOTOGRAPHY"):
			return 7;
		case joaat("NB_RIVAL_COLLECTOR"):
			return 5;
		case joaat("NB_RUNAWAY_WAGON"):
			return 11;
		case joaat("NB_TIED_UP_PED"):
			return 8;
		case joaat("NB_TREASURE_HUNTER"):
			return 9;
		case joaat("NB_TREE_MAP"):
			return 10;
		case joaat("NB_HOBO_DOG"):
			return 12;
		case joaat("NB_WILDMAN"):
			return 13;
		case joaat("NB_DUEL"):
			return 14;
		case joaat("NB_MOONSHINE_CAMP"):
			return 15;
		case joaat("NB_BEGGAR"):
			return 16;
		case joaat("NB_STALKING_HUNTER"):
			return 17;
		case joaat("NB_SLUMPED_HUNTER"):
			return 18;
		case joaat("NB_CRASHED_WAGON"):
			return 19;
		case joaat("NB_SUSPENSION_TRAP"):
			return 20;
		case joaat("LA_ALLIGATOR"):
			return 31;
		case joaat("LA_BEAR"):
			return 21;
		case joaat("LA_BEAVER"):
			return 28;
		case joaat("LA_BOAR"):
			return 24;
		case joaat("LA_BISON"):
			return 25;
		case joaat("LA_COUGAR"):
			return 22;
		case 569695338:
			return 23;
		case joaat("LA_COYOTE"):
			return 29;
		case joaat("LA_FOX"):
			return 26;
		case joaat("LA_MOOSE"):
			return 30;
		case joaat("LA_WOLF"):
			return 27;
		case 1773252799:
			return 32;
		case -1209093440:
			return 33;
		case 901959776:
			return 34;
		default:
			break;
	}
	return 0;
}

void func_1316(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051645.f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_1344(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(&(Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/]), "HashOnlyScript", 64);
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_8 = iParam0;
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051645.f_80.f_101++;
	Global_1051645.f_45.f_1 = 1;
}

bool func_1317(int iParam0)
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
	{
		return true;
	}
	if (VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0) == 4)
	{
		return true;
	}
	return false;
}

var func_1318(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_3;
}

void func_1319(int iParam0, int iParam1)
{
	if (func_1224(iParam0, iParam1) != 0)
	{
		if (func_1317(func_1224(iParam0, iParam1)))
		{
			func_1233(iParam0, iParam1);
			func_1076(iParam0, iParam1);
		}
	}
}

bool func_1320(int iParam0)
{
	int iVar0;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
	{
		return false;
	}
	iVar0 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0);
	if (iVar0 == 3)
	{
		return true;
	}
	return false;
}

void func_1321(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iParam2))
	{
		Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = 0;
		return;
	}
	Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = iParam2;
}

bool func_1322(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_1061(iParam0, iParam2, func_1313(iParam1, iParam3));
}

bool func_1323(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_1322(iParam0, iParam1, iParam2, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1324(int iParam0, int iParam1)
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

Vector3 func_1325(int iParam0)
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

bool func_1326(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

bool func_1327(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

bool func_1328(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_1095(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

int func_1329(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_1345(uParam1, &(uParam0->f_3[iVar1 /*40*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1330(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_18(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_18(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_101(uParam0->f_8.f_2))
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
	else if (!func_1346(func_19(Var33), &Var0))
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

int func_1331(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1347(&Var1, iParam0))
	{
		iVar0 = ((func_1348() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1332(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

int func_1333(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_1334(int iParam0, int iParam1)
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

void func_1335(int iParam0, int iParam1)
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
			func_1349((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1349(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_18(Global_1900460.f_1[0 /*2*/]))
	{
		func_968(Global_1900460.f_1[0 /*2*/], 3);
	}
}

int func_1336()
{
	if (func_1350(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1337(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_504(0);
	*iParam1 = { func_503(bParam0, func_1272(0), fParam3, 0) };
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

bool func_1338(bool bParam0, int iParam1, int iParam2)
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

int func_1339(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_504(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_1340(bool bParam0, int iParam1)
{
	if (!func_976(bParam0, 2))
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

void func_1341(struct<2> Param0, int iParam2)
{
	if (!func_18(Param0))
	{
		func_293(&(Global_1900460.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900460.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_1351(Param0, 0, 1, -1);
}

bool func_1342(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_18(Param0))
	{
		return false;
	}
	if (!func_18(Param2))
	{
		return true;
	}
	iVar0 = func_1157(Param0);
	iVar1 = func_1157(Param2);
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

bool func_1343(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!func_1352(iParam0))
	{
		return false;
	}
	if (func_1353(iParam0, iParam1, &uVar0))
	{
		func_1354(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1344(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051645.f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1051645.f_80.f_101 - 1))
	{
		if (Global_1051645.f_80[iVar0 /*10*/].f_8 == iParam0 && Global_1051645.f_80[iVar0 /*10*/].f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1345(var uParam0, var uParam1)
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
	if (!func_929(uParam1->f_8.f_5, uParam0->f_8.f_5))
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

bool func_1346(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = { func_1355(iParam0) };
	if (!func_18(Var0))
	{
		return false;
	}
	func_1343(Var0, iParam0, uParam1);
	return true;
}

bool func_1347(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_1348()
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

void func_1349(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { Var0 };
}

int func_1350(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1356(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_504(bParam1), iParam0, bParam3);
}

int func_1351(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_1357(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_19(Param0);
	Var0.f_3 = iParam3;
	func_1358(&Var0, bParam2, iParam4);
	return 1;
}

bool func_1352(int iParam0)
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

bool func_1353(int iParam0, int iParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_1359(iParam0);
	bParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_1354(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_1360(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1361(iVar0);
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
			uParam2->f_5 = func_1362(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_1363(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_1364(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_1365(iVar0);
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

struct<2> func_1355(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_647(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_647(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_647(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_647(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_647(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_647(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_647(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_838();
}

bool func_1356(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_1357(struct<2> Param0)
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
		if (func_929(Global_1205789[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1358(var uParam0, bool bParam1, int iParam2)
{
	func_1366(uParam0, iParam2);
	if (Global_1205789.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1367(func_1357(uParam0->f_1));
	}
	else
	{
		func_1368();
	}
}

int func_1359(int iParam0)
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

int func_1360(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1369(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1361(int iParam0)
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

int func_1362(int iParam0)
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

int func_1363(int iParam0)
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

int func_1364(int iParam0)
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

int func_1365(int iParam0)
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

void func_1366(var uParam0, int iParam1)
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

void func_1367(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1205789.f_129)
	{
		return;
	}
	Global_1205789.f_130 = iParam0;
	Global_1205789.f_131 = Global_1205789[iParam0 /*4*/];
}

void func_1368()
{
	if (Global_1205789.f_131 == 0)
	{
		return;
	}
	Global_1205789.f_130 = func_1370(Global_1205789.f_131);
	if (Global_1205789.f_130 < 0)
	{
		Global_1205789.f_131 = 0;
	}
}

bool func_1369(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1371(iParam0, uParam1, &uVar0))
	{
		func_1372(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1370(int iParam0)
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

bool func_1371(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_1359(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_1372(bool bParam0, int iParam1, var uParam2)
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

