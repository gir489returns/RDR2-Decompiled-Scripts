#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 7;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = -1;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
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
	var uLocal_28 = 0;
	vector3 vLocal_29 = { 0f, 0f, 0f };
	struct<2> Local_32 = { 0, 0 } ;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 10;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar17;

	sLocal_0 = "";
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	Global_32 = -1;
	Global_17386 = { func_1() };
	func_2();
	func_3();
	BUILTIN::WAIT(0);
	func_4();
	uVar0 = 16;
	while (!func_5(&uVar0))
	{
		BUILTIN::WAIT(0);
	}
	func_6(1);
	if (!Global_38)
	{
	}
	func_7();
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	while (DLC::GET_IS_LOADING_SCREEN_ACTIVE() && func_8(&uLocal_35) < 2)
	{
		func_9();
		BUILTIN::WAIT(0);
	}
	NETWORK::_0xE5FF65CFF5160752();
	NETWORK::_0x603469298A4308AF(true);
	func_10(0);
	while (true)
	{
		if (func_11() == 0 && MISC::IS_ORBIS_VERSION())
		{
			if (!Global_1572887.f_11)
			{
				NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
			}
			if (!func_12())
			{
				if (!func_13())
				{
					NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
				}
			}
			if (func_14() > 3)
			{
				NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
			}
		}
		iVar17 = CLOCK::GET_CLOCK_HOURS();
		func_15(iVar17);
		func_16(iVar17);
		func_17(&uLocal_119);
		func_18(func_14() == 3);
		func_19(&Global_1901571);
		func_9();
		if (func_20(1024))
		{
			AUDIO::_STOP_AUDIO_SCENESET("Load_Menu_Scenes");
			func_21(1024);
		}
		switch (func_14())
		{
			case 0:
				if (Global_38)
				{
					func_22();
					func_21(4);
				}
				else if (MISC::_GAME_FRAMEWORK_MANAGER_GET_MODE() == 3.940538E-21f)
				{
					func_22();
					func_21(4);
				}
				else if (!func_23())
				{
					func_24(1);
				}
				if (func_25() == 1 || func_25() == 0)
				{
					func_26();
					func_10(1);
				}
				else
				{
					func_21(4);
					func_10(2);
				}
				break;
			case 1:
				if (func_27())
				{
					func_21(4);
					func_10(2);
				}
				break;
			case 2:
				func_28();
				if (func_29(func_25()))
				{
					func_10(3);
				}
				break;
			case 3:
				func_30();
				func_31();
				func_32();
				if (func_33())
				{
					func_34();
					func_10(4);
				}
				break;
			case 4:
				if (func_35())
				{
					func_36();
					func_21(4);
					func_37();
					func_38();
					if (func_25() == 1)
					{
						func_10(5);
						NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
						SCRIPTS::BAIL_TO_LANDING_PAGE(0);
					}
					else if (func_25() == 5)
					{
						func_10(2);
					}
					else if (func_39() != 1)
					{
						func_10(5);
						SCRIPTS::BAIL_WITH_PASS_THROUGH_PARAMS(func_40());
					}
					else
					{
						func_10(2);
					}
				}
				break;
			case 5:
				NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				SCRIPTS::BAIL_WITH_PASS_THROUGH_PARAMS(func_40());
				break;
		}
		BUILTIN::WAIT(0);
	}
}

struct<4> func_1()
{
	struct<4> Var0;

	return Var0;
}

void func_2()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::_0x3E74A687A73979C6(true);
	AUDIO::_START_AUDIO_SCENESET("Main_Menu", "Load_Menu_Scenes");
}

void func_3()
{
}

void func_4()
{
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	func_41();
	func_42();
	func_43();
}

bool func_5(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		if (func_44(iVar1))
		{
			if (!func_45(iVar1, uParam0[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		SCRIPTS::_SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED(true);
	}
	return bVar0;
}

void func_6(bool bParam0)
{
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(1, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9, bParam0);
}

void func_7()
{
	func_46();
	func_47();
	STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
	MAP::_SET_MINIMAP_ZONE(-6.06127E-29f);
	func_48();
}

int func_8(bool bParam0)
{
	return bParam0->f_76;
}

void func_9()
{
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		func_49(&uLocal_35);
	}
	else if (func_50(&uLocal_35))
	{
		func_51(&uLocal_35);
	}
}

void func_10(int iParam0)
{
	Local_32 = iParam0;
	Local_32.f_1 = MISC::GET_GAME_TIMER();
}

int func_11()
{
	return Global_1572887.f_14;
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
	return Global_1048577;
}

int func_14()
{
	return Local_32;
}

void func_15(int iParam0)
{
	if (iParam0 < 6)
	{
		Global_1902566 = 8;
		return;
	}
	if (iParam0 < 12)
	{
		Global_1902566 = 1;
		return;
	}
	if (iParam0 < 18)
	{
		Global_1902566 = 2;
		return;
	}
	Global_1902566 = 4;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = ((((BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_SECONDS(), 0) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MINUTES(), 6)) || BUILTIN::SHIFT_LEFT(iParam0, 12)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MONTH(), 22)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_DAY_OF_MONTH(), 17));
	iVar1 = CLOCK::GET_CLOCK_YEAR();
	if ((iVar1 < 0 || iVar1 > 1930) || iVar1 < 1866)
	{
		return;
	}
	if (iVar1 < 1898)
	{
		iVar0 = ((iVar0 || BUILTIN::SHIFT_LEFT((1898 - iVar1), 26)) || 0f);
	}
	else
	{
		iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((iVar1 - 1898), 26));
		iVar0 = (iVar0 - (iVar0 && 0f));
	}
	Global_1902565 = iVar0;
}

void func_17(var uParam0)
{
	bool bVar0;

	if (func_11() == -3)
	{
		return;
	}
	bVar0 = COMPAPP::_0x7AF1BB4504EA5ED9();
	if (Global_1958621 != bVar0)
	{
		Global_1958621 = bVar0;
		if (bVar0)
		{
			func_52("COMP_APP_CONNECT", 10000, 0, 0, 0, 1);
		}
		else
		{
			*uParam0 = 0;
			func_53(&(uParam0->f_1));
			func_52("COMP_APP_DISCONNECT", 10000, 0, 0, 0, 1);
		}
		func_54();
	}
	if (Global_1958621)
	{
		func_55(uParam0);
	}
	func_54();
}

void func_18(bool bParam0)
{
	int iVar0;

	func_56();
	func_57();
	if (!bParam0)
	{
		return;
	}
	func_58();
	func_59();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_60(&(Global_1072759.f_23.f_306[iVar0 /*59*/]));
		iVar0++;
	}
}

void func_19(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!MISC::IS_ORBIS_VERSION())
			{
				func_61(3);
			}
			if (func_62())
			{
				func_63(&(Global_1901571.f_1));
				func_61(1);
			}
			break;
		case 1:
			if (func_64(&(Global_1901571.f_1), 10000, 1))
			{
				func_61(2);
			}
			break;
		case 2:
			func_65();
			if (!func_62())
			{
				func_61(0);
			}
			break;
		case 3:
			if (func_62())
			{
				func_66();
			}
			break;
		default:
			func_61(0);
			break;
	}
}

bool func_20(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_21(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_22()
{
	func_67(4);
	func_68();
	func_24(2);
	func_69(7.01894E+25f, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

bool func_23()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

int func_25()
{
	return Global_1572864.f_1;
}

void func_26()
{
	vector3 vVar0;

	vLocal_29 = { vVar0 };
}

bool func_27()
{
	func_70();
	switch (func_71())
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				MISC::SET_FADE_IN_AFTER_LOAD(false);
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(2, 0);
				func_68();
				func_72(1);
				func_73(0);
				func_74();
				func_75(0);
				func_76();
				func_77(-1);
				NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
				func_78(1);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				PED::RESURRECT_PED(PLAYER::PLAYER_PED_ID());
			}
			break;
		case 1:
			if (func_79())
			{
				func_78(2);
			}
			else if (REPLAY::IS_VIDEO_EDITOR_RUNNING())
			{
				func_78(2);
				vLocal_29.f_2 = 5;
			}
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT() || func_80())
			{
				if (func_81())
				{
					func_82();
				}
				else
				{
					vLocal_29.f_2 = 1;
					func_67(4);
				}
				if (func_80())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_24(vLocal_29.z);
				AUDIO::TRIGGER_MUSIC_EVENT("stop_title_screen_music");
				NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
				PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(2);
				return true;
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			break;
	}
	return false;
}

void func_28()
{
	if (!func_20(64))
	{
		return;
	}
	switch (func_83())
	{
		case joaat("FREEROAM"):
			func_84(0);
			if (func_85(1.139197E+21f))
			{
				Global_28 = 1;
				Global_31 = 1;
			}
			if ((func_85(-9.34309E-35f) || func_85(1.426619E+24f)) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
			{
				Global_30 = 1;
			}
			else
			{
				Global_30 = 0;
			}
			if (func_85(-4.848466E+35f))
			{
				Global_27 = 1;
			}
			if (func_85(4.572338E+08f))
			{
			}
			if (func_85(-2.446956E-29f))
			{
			}
			if (func_85(4.255667E+29f))
			{
			}
			if (func_85(4.176504E-24f))
			{
			}
			if (func_85(1.329101E-05f))
			{
			}
			if (func_85(1.088823E-27f))
			{
				Global_32 = 0;
			}
			else if (func_85(1.652875E-19f))
			{
				Global_32 = 1;
			}
			else if (func_85(7.677955E-06f))
			{
				Global_32 = 2;
			}
			else if (func_85(2.406373E+08f))
			{
				Global_32 = 3;
			}
			else
			{
				Global_32 = -1;
			}
			break;
		case joaat("SERIES"):
			break;
		case joaat("MISSION"):
			break;
		case joaat("MISSION_CREATOR"):
			Global_29 = 1;
			Global_1572887.f_6 = 1;
			break;
	}
	func_21(64);
}

bool func_29(int iParam0)
{
	char* sVar0;
	int iVar1;

	iVar1 = 1024;
	switch (iParam0)
	{
		case 1:
			func_67(4);
			return true;
		case 2:
			sVar0 = func_86(2);
			iVar1 = 1024;
			break;
		case 3:
			sVar0 = func_86(3);
			iVar1 = 25500;
			break;
		case 4:
			sVar0 = func_86(4);
			iVar1 = 25500;
			break;
		case 5:
			sVar0 = func_86(5);
			iVar1 = 1024;
			break;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
	{
		func_87(iParam0);
		return true;
	}
	if (func_88(sVar0, iVar1))
	{
		func_87(iParam0);
		func_89(iParam0);
		func_36();
		return true;
	}
	return false;
}

void func_30()
{
}

void func_31()
{
}

void func_32()
{
}

bool func_33()
{
	if (func_39() != func_25())
	{
		return true;
	}
	if (func_20(4))
	{
		return true;
	}
	if (func_79())
	{
		func_81();
		CAM::DO_SCREEN_FADE_OUT(0);
		return true;
	}
	return false;
}

void func_34()
{
	func_41();
	func_21(4);
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0);
	if (func_39() == 3)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1572887.f_18))
		{
			func_67(2048);
		}
	}
	else if (func_39() == 4)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1572887.f_18))
		{
			func_67(2048);
		}
	}
	else
	{
		PLAYER::FORCE_CLEANUP(2);
	}
}

bool func_35()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = 1;
	while (SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		bVar3 = true;
		if (iVar0 == iVar1)
		{
			bVar3 = false;
		}
		else if (SCRIPTS::_IS_BACKGROUND_SCRIPT(iVar0))
		{
			bVar3 = false;
		}
		if (bVar3)
		{
			if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(iVar0))
			{
				SCRIPTS::_REQUEST_THREAD_EXIT(iVar0);
			}
			if (func_11() == -1)
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 2);
			}
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
			iVar2 = 0;
			BUILTIN::WAIT(0);
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
	return iVar2;
}

void func_36()
{
	if (func_39() != 2)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_86(2));
	}
	if (func_39() != 3)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_86(3));
	}
	if (func_39() != 4)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_86(4));
	}
	if (func_39() != 5)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_86(5));
	}
}

void func_37()
{
}

void func_38()
{
	if (Global_1572887.f_7)
	{
		Global_1572887.f_7 = 0;
		TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_END();
	}
}

int func_39()
{
	return Global_1572864;
}

char* func_40()
{
	char cVar0[64];
	struct<8> Var8[10];
	char cVar89[64];
	int iVar97;
	int iVar98;
	char cVar99[64];
	int iVar107;
	char cVar108[64];
	char cVar116[64];
	char cVar124[64];
	char cVar132[64];
	char cVar140[64];
	char cVar148[64];
	char cVar156[64];
	char cVar164[64];

	StringCopy(&cVar0, "-mode=", 64);
	StringConCat(&cVar0, func_90(func_83()), 64);
	StringCopy(&cVar89, "", 64);
	switch (func_83())
	{
		case joaat("SINGLE_PLAYER"):
			return MISC::VAR_STRING(10, "LAUNCH_PARAMS", &cVar0);
		case joaat("FREEROAM"):
			iVar97 = 0;
			iVar98 = 0;
			iVar97 = 0;
			while (iVar97 <= 32)
			{
				if (func_91(iVar97) && iVar98 < 10)
				{
					StringCopy(&(Var8[iVar98 /*8*/]), "-arg_", 64);
					StringIntConCat(&(Var8[iVar98 /*8*/]), iVar98, 64);
					StringConCat(&(Var8[iVar98 /*8*/]), "=", 64);
					StringConCat(&(Var8[iVar98 /*8*/]), func_93(func_92(iVar97)), 64);
					iVar98++;
				}
				iVar97++;
			}
			if (func_85(-5.243726E-15f))
			{
				StringCopy(&cVar99, "-series_id=", 64);
				StringConCat(&cVar99, func_94(Global_1572887.f_300.f_5), 64);
				if (Global_1572887.f_300.f_10 == 0)
				{
					return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &cVar0, &cVar99, &(Var8[0 /*8*/]), &(Var8[1 /*8*/]), &(Var8[2 /*8*/]), &(Var8[3 /*8*/]), &(Var8[4 /*8*/]));
				}
				iVar107 = func_95(Global_1572887.f_300.f_10);
				if (iVar107 == -1)
				{
					return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &cVar0, &cVar99, &(Var8[0 /*8*/]), &(Var8[1 /*8*/]), &(Var8[2 /*8*/]), &(Var8[3 /*8*/]), &(Var8[4 /*8*/]));
				}
				StringConCat(&cVar108, "-nominated_content_id=", 64);
				StringConCat(&cVar108, &(Global_265213.f_4[iVar107 /*46*/]), 64);
				return MISC::VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar99, &cVar108, &(Var8[0 /*8*/]), &(Var8[1 /*8*/]), &(Var8[2 /*8*/]), &(Var8[3 /*8*/]), &(Var8[4 /*8*/]));
			}
			if (Global_1572887.f_300.f_6 != -1)
			{
				StringCopy(&cVar116, "-region_id=", 64);
				StringConCat(&cVar116, func_96(Global_1572887.f_300.f_6), 64);
				return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &cVar0, &cVar116, &(Var8[0 /*8*/]), &(Var8[1 /*8*/]), &(Var8[2 /*8*/]), &(Var8[3 /*8*/]), &(Var8[4 /*8*/]));
			}
			else if (Global_1572887.f_300.f_7 != -1)
			{
				StringCopy(&cVar124, "-district_id=", 64);
				StringConCat(&cVar124, func_97(Global_1572887.f_300.f_7), 64);
				return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &cVar0, &cVar124, &(Var8[0 /*8*/]), &(Var8[1 /*8*/]), &(Var8[2 /*8*/]), &(Var8[3 /*8*/]), &(Var8[4 /*8*/]));
			}
			else if (Global_1572887.f_300.f_8 != -1)
			{
				StringCopy(&cVar132, "-state_id=", 64);
				StringConCat(&cVar132, func_98(Global_1572887.f_300.f_8), 64);
				return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &cVar0, &cVar132, &(Var8[0 /*8*/]), &(Var8[1 /*8*/]), &(Var8[2 /*8*/]), &(Var8[3 /*8*/]), &(Var8[4 /*8*/]));
			}
			else
			{
				return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &cVar0, &(Var8[0 /*8*/]), &(Var8[1 /*8*/]), &(Var8[2 /*8*/]), &(Var8[3 /*8*/]), &(Var8[4 /*8*/]), &cVar89);
			}
			if (func_85(1.329101E-05f))
			{
				StringCopy(&cVar140, "-letter_id=", 64);
				StringIntConCat(&cVar140, Global_1572887.f_300.f_15, 64);
				return MISC::VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &(Var8[0 /*8*/]), &cVar140);
			}
			break;
		case joaat("GOLDSTORE"):
			return MISC::VAR_STRING(10, "LAUNCH_PARAMS", &cVar0);
		case joaat("SERIES"):
			StringCopy(&cVar148, "-series_id=", 64);
			StringConCat(&cVar148, func_94(Global_1572887.f_300.f_5), 64);
			if (Global_1572887.f_300.f_10 == 0)
			{
				return MISC::VAR_STRING(42, "LAUNCH_PARAMS", &cVar0, &cVar148);
			}
			if (MISC::ARE_STRINGS_EQUAL(&(Global_1572887.f_300.f_11), ""))
			{
				return MISC::VAR_STRING(42, "LAUNCH_PARAMS", &cVar0, &cVar148);
			}
			StringConCat(&cVar156, "-nominated_content_id=", 64);
			StringConCat(&cVar156, &(Global_1572887.f_300.f_11), 64);
			return MISC::VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &cVar148, &cVar156);
		case joaat("MISSION"):
			StringCopy(&cVar164, "-mission_id=", 64);
			StringConCat(&cVar164, "", 64);
			return MISC::VAR_STRING(42, "LAUNCH_PARAMS", &cVar0, &cVar164);
		case joaat("MISSION_CREATOR"):
			return MISC::VAR_STRING(10, "LAUNCH_PARAMS", &cVar0);
	}
	return "";
}

void func_41()
{
	func_99();
	func_100();
	func_101();
	SCRIPTS::_0x11B0A0B282FA9B10(false);
}

void func_42()
{
	sLocal_0 = "startup";
	SAVE::_0xED4B0C1057892B2E(&Global_17418, 3118, 0, sLocal_0);
	func_102(&Global_17418, "g_mpSavedGlobals.herbs", 0);
	func_103(&(Global_17418.f_55), "g_mpSavedGlobals.sPersona");
	func_104(&(Global_17418.f_2585), "g_mpSavedGlobals.eTutorialsRun", 0);
	func_105(&(Global_17418.f_2618), "g_mpSavedGlobals.iTutorialBuffer");
	func_106(&(Global_17418.f_2641), "g_mpSavedGlobals.sNotoriety");
	func_107(&(Global_17418.f_2644), "g_mpSavedGlobals.sNotorietyTU004");
	func_108(&(Global_17418.f_2645), "g_mpSavedGlobals.sOutfitSaveDataTU004");
	func_109(&(Global_17418.f_2734), "g_mpSavedGlobals.sWebInboxData");
	func_110(&(Global_17418.f_2783), "g_mpSavedGlobals.todLastVisited");
	func_111(&(Global_17418.f_2964), "g_mpSavedGlobals.sFlowData");
	func_112(&(Global_17418.f_2992), "g_mpSavedGlobals.mpCollectiblesMapBlip");
	func_113(&(Global_17418.f_3015), "g_mpSavedGlobals.sMGRestrictData");
	func_114(&(Global_17418.f_3104), "g_mpSavedGlobals.sNetShopsTU006");
	func_115(&(Global_17418.f_3106));
	func_116(&(Global_17418.f_3116), "g_mpSaveGlobals.sSimpleTutorialData");
	SAVE::_0xE8346E62FD7FB962();
	SAVE::_0xC0ABF784590798A9(0);
}

void func_43()
{
	SCRIPTS::REQUEST_SCRIPT(func_86(2));
	SCRIPTS::REQUEST_SCRIPT(func_86(3));
	SCRIPTS::REQUEST_SCRIPT(func_86(4));
	SCRIPTS::REQUEST_SCRIPT(func_86(5));
	func_117();
}

bool func_44(int iParam0)
{
	if (iParam0 != 0 && iParam0 != 3)
	{
		return true;
	}
	return false;
}

bool func_45(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (func_118(iParam0, 1))
			{
				MISC::_SET_GLOBAL_BLOCK_IS_LOADED(iParam0, false);
				SCRIPTS::REQUEST_SCRIPT(func_119(iParam0));
				func_120(uParam1, 1, iParam0);
			}
			else
			{
				func_120(uParam1, 3, iParam0);
				return true;
			}
			break;
		case 1:
			if (SCRIPTS::HAS_SCRIPT_LOADED(func_119(iParam0)) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(512) > 0)
			{
				SCRIPTS::START_NEW_SCRIPT(func_119(iParam0), 512);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_119(iParam0));
				func_120(uParam1, 2, iParam0);
			}
			break;
		case 2:
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(func_119(iParam0))) == 0)
			{
				MISC::_SET_GLOBAL_BLOCK_IS_LOADED(iParam0, true);
				func_120(uParam1, 3, iParam0);
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_46()
{
	var uVar0;

	DECORATOR::DECOR_REGISTER("outfitChanged", 2);
	DECORATOR::DECOR_REGISTER("playerChangeOutfits", 2);
	DECORATOR::DECOR_REGISTER("HorseHitchRope", 3);
	DECORATOR::DECOR_REGISTER("Whistling", 2);
	DECORATOR::DECOR_REGISTER("Inspecting_Item", 2);
	DECORATOR::DECOR_REGISTER("JustSavedAtBed", 2);
	DECORATOR::DECOR_REGISTER("CookingMeat", 2);
	DECORATOR::DECOR_REGISTER("build_success", 2);
	DECORATOR::DECOR_REGISTER("RWARV_Dominoes", 2);
	DECORATOR::DECOR_REGISTER("Fishing_LaunchNow", 2);
	DECORATOR::DECOR_REGISTER("RKTTY_Asked", 2);
	DECORATOR::DECOR_REGISTER("RKTTY_Wagon", 2);
	DECORATOR::DECOR_REGISTER("iDamageFrame", 3);
	DECORATOR::DECOR_REGISTER("bIgnoreDamageChecking", 2);
	DECORATOR::DECOR_REGISTER("rev_comment", 2);
	DECORATOR::DECOR_REGISTER("camp_attacker", 2);
	DECORATOR::DECOR_REGISTER("HorseGender", 3);
	DECORATOR::DECOR_REGISTER("HorseCamp", 2);
	DECORATOR::DECOR_REGISTER("HorseCompanion", 2);
	DECORATOR::DECOR_REGISTER("CaravanCommonHorse", 2);
	DECORATOR::DECOR_REGISTER("CaravanLivestock", 2);
	DECORATOR::DECOR_REGISTER("StableOwnedHorse", 3);
	DECORATOR::DECOR_REGISTER("HorseMission", 2);
	DECORATOR::DECOR_REGISTER("bHorseHasBeenStolen", 2);
	DECORATOR::DECOR_REGISTER("bHasBeenLassoedFromHorse", 2);
	DECORATOR::DECOR_REGISTER("bHasBeenTrampledByHorse", 2);
	DECORATOR::DECOR_REGISTER("SyncedFlags01", 3);
	DECORATOR::DECOR_REGISTER("SummonPosXY", 3);
	DECORATOR::DECOR_REGISTER("SummonPosZ", 1);
	DECORATOR::DECOR_REGISTER("companion_manager_msg", 3);
	DECORATOR::DECOR_REGISTER("companion_manager_command", 3);
	DECORATOR::DECOR_REGISTER("companion_manager_watch_mode", 3);
	DECORATOR::DECOR_REGISTER("outfit_tags", 3);
	DECORATOR::DECOR_REGISTER("metaped_outfit_request", 3);
	DECORATOR::DECOR_REGISTER("metaped_outfit_request_name", 3);
	DECORATOR::DECOR_REGISTER("chinLong", 3);
	DECORATOR::DECOR_REGISTER("chopsLong", 3);
	DECORATOR::DECOR_REGISTER("stacheLong", 3);
	DECORATOR::DECOR_REGISTER("chinShort", 3);
	DECORATOR::DECOR_REGISTER("chopsShort", 3);
	DECORATOR::DECOR_REGISTER("stacheShort", 3);
	DECORATOR::DECOR_REGISTER("hairLong", 3);
	DECORATOR::DECOR_REGISTER("hairShort", 3);
	DECORATOR::DECOR_REGISTER("player_newWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newRevolverWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newRevolverWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newPistolWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newPistolWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newShotgunWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newShotgunWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newRifleWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newRifleWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("chest_open", 2);
	DECORATOR::DECOR_REGISTER("loot_money", 3);
	DECORATOR::DECOR_REGISTER("fLoot_money", 1);
	DECORATOR::DECOR_REGISTER("loot_item_type1", 3);
	DECORATOR::DECOR_REGISTER("loot_item_bone1", 3);
	DECORATOR::DECOR_REGISTER("loot_item_amt1", 3);
	DECORATOR::DECOR_REGISTER("loot_item_model1", 3);
	DECORATOR::DECOR_REGISTER("loot_item_offset1x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset1y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset1z", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient1x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient1y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient1z", 1);
	DECORATOR::DECOR_REGISTER("loot_item_type2", 3);
	DECORATOR::DECOR_REGISTER("loot_item_bone2", 3);
	DECORATOR::DECOR_REGISTER("loot_item_amt2", 3);
	DECORATOR::DECOR_REGISTER("loot_item_model2", 3);
	DECORATOR::DECOR_REGISTER("loot_item_offset2x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset2y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset2z", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient2x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient2y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient2z", 1);
	DECORATOR::DECOR_REGISTER("loot_ammo1_type", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo1_amt", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo2_type", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo2_amt", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo3_type", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo3_amt", 3);
	DECORATOR::DECOR_REGISTER("loot_weapon", 3);
	DECORATOR::DECOR_REGISTER("loot_empty", 2);
	DECORATOR::DECOR_REGISTER("lootable_interior", 3);
	DECORATOR::DECOR_REGISTER("scripted_loot_only", 2);
	DECORATOR::DECOR_REGISTER("got_loot", 2);
	DECORATOR::DECOR_REGISTER("ransack", 2);
	DECORATOR::DECOR_REGISTER("loot_long_custom_anim_data_set", 4);
	DECORATOR::DECOR_REGISTER("letter_item", 3);
	DECORATOR::DECOR_REGISTER("loot_allow_random", 2);
	DECORATOR::DECOR_REGISTER("loot_mp_mission_only", 2);
	DECORATOR::DECOR_REGISTER("chest_local_only", 2);
	DECORATOR::DECOR_REGISTER("bLostLogs", 2);
	DECORATOR::DECOR_REGISTER("bNoticePlayer", 2);
	DECORATOR::DECOR_REGISTER("bIgnoreThisPed", 2);
	DECORATOR::DECOR_REGISTER("bPedAlreadyCounted", 2);
	DECORATOR::DECOR_REGISTER("bCowering", 2);
	DECORATOR::DECOR_REGISTER("bChopDown", 2);
	DECORATOR::DECOR_REGISTER("bGPSEnabled", 2);
	DECORATOR::DECOR_REGISTER("interactNeg", 3);
	DECORATOR::DECOR_REGISTER("bOnBreak", 2);
	DECORATOR::DECOR_REGISTER("bScriptedILO", 2);
	DECORATOR::DECOR_REGISTER("bAmbientCoachLooted", 2);
	DECORATOR::DECOR_REGISTER("ValuableCoach", 2);
	DECORATOR::DECOR_REGISTER("Herd_Panicked_Member", 2);
	DECORATOR::DECOR_REGISTER("honor_bank", 3);
	DECORATOR::DECOR_REGISTER("honor_override", 3);
	DECORATOR::DECOR_REGISTER("not_enemy", 2);
	DECORATOR::DECOR_REGISTER("bleed_start_time", 3);
	DECORATOR::DECOR_REGISTER("instigated_by_player", 2);
	DECORATOR::DECOR_REGISTER("player_greeted", 2);
	DECORATOR::DECOR_REGISTER("player_antagonized", 2);
	DECORATOR::DECOR_REGISTER("was_antagonized", 2);
	DECORATOR::DECOR_REGISTER("injured_woman", 2);
	DECORATOR::DECOR_REGISTER("recently_punched", 2);
	DECORATOR::DECOR_REGISTER("was_hurt", 2);
	MemCopy(&uVar0, {func_121()}, 4);
	DECORATOR::DECOR_REGISTER(&uVar0, 3);
	DECORATOR::DECOR_REGISTER("pedRoam_bInPedRoam", 2);
	DECORATOR::DECOR_REGISTER("pedRoam_targetRegion", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_state", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_behavior", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_target", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_targetCoord", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_targetCoord_Z", 1);
	DECORATOR::DECOR_REGISTER("pedRoam_targetArea", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_hashKey", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_owner", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_flags", 3);
	DECORATOR::DECOR_REGISTER("register_open", 2);
	DECORATOR::DECOR_REGISTER("register_open_rdy", 2);
	DECORATOR::DECOR_REGISTER("camera_takingPic", 2);
	DECORATOR::DECOR_REGISTER("wearing_bandana", 2);
	DECORATOR::DECOR_REGISTER("temp_HorseBroken", 2);
	DECORATOR::DECOR_REGISTER("rcm_bnp_beauHogtie", 2);
	DECORATOR::DECOR_REGISTER("rcm_bnp_PenelopeHogtie", 2);
	DECORATOR::DECOR_REGISTER("rcm_elz1_elizaHogtie", 2);
	DECORATOR::DECOR_REGISTER("rcm_SerialKiller_hogtie", 2);
	DECORATOR::DECOR_REGISTER("proc_bounty_target", 2);
	DECORATOR::DECOR_REGISTER("rcm_f_acc_played", 2);
	DECORATOR::DECOR_REGISTER("rcm_f_acc_passed", 2);
	DECORATOR::DECOR_REGISTER("rcm_lakay_bounty_target", 2);
	DECORATOR::DECOR_REGISTER("LoanShark_Knowing", 2);
	DECORATOR::DECOR_REGISTER("LoanShark_Questioned", 2);
	DECORATOR::DECOR_REGISTER("player_crafting_active", 2);
	DECORATOR::DECOR_REGISTER("player_whittling_active", 2);
	DECORATOR::DECOR_REGISTER("bShowIsReady", 2);
	DECORATOR::DECOR_REGISTER("bShowIsPaidFor", 2);
	DECORATOR::DECOR_REGISTER("bUpdatedPlayer", 2);
	DECORATOR::DECOR_REGISTER("Global_Object_Unique_ID", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_PackedDeed", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_Value", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_ExpStart", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_ExpDuration", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_No_Blip", 2);
	DECORATOR::_DECOR_REGISTER_2(func_122(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_123(), 6, true);
	DECORATOR::_DECOR_REGISTER_2(func_124(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_125(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_126(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_127(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_128(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_129(), 2, true);
	DECORATOR::DECOR_REGISTER("iFmeLastEventPlayed", 3);
	DECORATOR::DECOR_REGISTER("bFmeSpecialAnimal", 2);
	DECORATOR::DECOR_REGISTER("bFmeIsAnimalKilled", 2);
	DECORATOR::_DECOR_REGISTER_2("iMinigameHash", 3, true);
	DECORATOR::_DECOR_REGISTER_2("iMinigameSeat", 3, true);
	DECORATOR::DECOR_REGISTER("Has_Voice", 2);
	DECORATOR::DECOR_REGISTER("bUnarmed", 2);
	DECORATOR::DECOR_REGISTER("RANSACK", 2);
	DECORATOR::DECOR_REGISTER("bIsCriminal", 2);
	DECORATOR::DECOR_REGISTER("bDeadOrAlive", 2);
	DECORATOR::DECOR_REGISTER("bReacted_To_Shocking_Event", 2);
	DECORATOR::DECOR_REGISTER("REDJ_Witness_Time", 1);
	DECORATOR::DECOR_REGISTER("SafeOpened", 2);
	DECORATOR::DECOR_REGISTER("TargetHit", 2);
	DECORATOR::DECOR_REGISTER("bIsSpecialPed", 2);
	DECORATOR::DECOR_REGISTER("iSpecialPedID", 3);
	DECORATOR::DECOR_REGISTER("bPickupThisCorpse", 2);
	DECORATOR::DECOR_REGISTER("last_gun_damage_time_in_ms", 3);
	DECORATOR::DECOR_REGISTER("DamagedByPlayer", 2);
	DECORATOR::DECOR_REGISTER("grapple_start_time", 3);
	DECORATOR::DECOR_REGISTER("grapple_tutorial_played", 2);
	DECORATOR::DECOR_REGISTER("worn_tutorial", 2);
	DECORATOR::DECOR_REGISTER("propsetName", 4);
	DECORATOR::DECOR_REGISTER("witnessCannotBeBribedOrThreatened", 2);
	DECORATOR::_DECOR_REGISTER_2("MP_HUD_Bits", 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_130(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_131(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_132(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_133(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_134(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_135(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_136(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_137(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_138(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_139(), 2, true);
	DECORATOR::DECOR_REGISTER("MC_EntityID", 3);
	DECORATOR::DECOR_REGISTER("MC_ChasePedID", 3);
	DECORATOR::DECOR_REGISTER("MC_EntityPropID", 3);
	DECORATOR::_DECOR_REGISTER_2("iCampFollowerCamp", 3, true);
	DECORATOR::_DECOR_REGISTER_2("fCampVehicleMaxSpeed", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Bluegill", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_BullheadCatfish", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_ChainPickerel", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_ChannelCatfish", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LakeSturgeon", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LargemouthBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LongnoseGar", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Muskie", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_NorthernPike", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Perch", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_RedfinPickerel", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_RockBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SmallmouthBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SockeyeSalmon", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SteelheadTrout", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Prevent_Tasking", 2, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Weight", 1, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Lives", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Time", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Laps", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Rounds", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Seated", 2, true);
	DECORATOR::_DECOR_REGISTER_2("PedSeatedForMinigame", 2, true);
	DECORATOR::_DECOR_REGISTER_2("MinigameObject", 2, true);
	DECORATOR::_DECOR_REGISTER_2("DontGrabThisPedForMinigame", 2, true);
	DECORATOR::_DECOR_REGISTER_2("MiniScenePedData", 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_140(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_141(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_142(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_143(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_144(), 3, true);
	DECORATOR::_DECOR_REGISTER_2("NetHorseFence_Sold", 2, true);
	DECORATOR::DECOR_REGISTER("wagonFenceValue", 3);
	DECORATOR::DECOR_REGISTER("ItemSetScriptIndex", 3);
	DECORATOR::DECOR_REGISTER("HorseTeamA", 2);
	DECORATOR::DECOR_REGISTER("HorseOwnerTeamA", 2);
	DECORATOR::DECOR_REGISTER("HorseTeamB", 2);
	DECORATOR::DECOR_REGISTER("HorseOwnerTeamB", 2);
	DECORATOR::DECOR_REGISTER("UsesTracker", 2);
	DECORATOR::DECOR_REGISTER("bValidRobber", 2);
	DECORATOR::DECOR_REGISTER("STORY_COOP_PED_ID", 3);
	DECORATOR::_DECOR_REGISTER_2(func_145(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_146(), 6, true);
	DECORATOR::_DECOR_REGISTER_2("fast_travel_camp_barker", 3, true);
	DECORATOR::_DECOR_REGISTER_2("DigSiteX", 1, true);
	DECORATOR::_DECOR_REGISTER_2("DigSiteY", 1, true);
	DECORATOR::_DECOR_REGISTER_2("DigSiteZ", 1, true);
	DECORATOR::_DECOR_REGISTER_2("EggBroken", 2, true);
	DECORATOR::_DECOR_REGISTER_2("ChestDugUp", 2, true);
	DECORATOR::_DECOR_REGISTER_2("RevivedOnce", 2, true);
	DECORATOR::_DECOR_REGISTER_2("ReputationFlags", 3, true);
	DECORATOR::_DECOR_REGISTER_2("loot_capitale", 2, true);
}

void func_47()
{
	func_147();
	func_148();
	func_149();
}

void func_48()
{
	STREAMING::_0xDEEE1F265B7ECEF5();
}

int func_49(bool bParam0)
{
	switch (func_8(bParam0))
	{
		case 0:
			if (func_150(bParam0))
			{
				bParam0->f_81 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "LoadingScreen");
				bParam0->f_82 = DATABINDING::_DATABINDING_ADD_DATA_STRING(bParam0->f_81, "TooltipText", "");
				bParam0->f_83 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(bParam0->f_81, "isVisible", true);
				func_151(bParam0, 1);
				func_152(bParam0, 1);
			}
			else
			{
				func_152(bParam0, 3);
			}
			break;
		case 1:
			bParam0->f_77 = MISC::GET_GAME_TIMER();
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(bParam0->f_82, &(bParam0->f_5[bParam0->f_78 /*7*/]));
			func_152(bParam0, 2);
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() >= (bParam0->f_77 + bParam0->f_5[bParam0->f_78 /*7*/].f_5))
			{
				bParam0->f_78++;
				if (bParam0->f_78 < 10)
				{
					func_152(bParam0, 1);
				}
				else
				{
					func_152(bParam0, 3);
				}
			}
			break;
		case 3:
			func_51(bParam0);
			return 1;
	}
	return 0;
}

bool func_50(var uParam0)
{
	return uParam0->f_80;
}

void func_51(bool bParam0)
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(bParam0->f_81))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(bParam0->f_81);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(bParam0->f_82))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(bParam0->f_82, "");
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(bParam0->f_82);
	}
	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(*bParam0))
	{
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(*bParam0);
	}
	func_151(bParam0, 0);
}

int func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_53(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_54()
{
	while (!QUEUE::_EVENT_QUEUE_IS_EMPTY(-2.621692E+10f))
	{
		QUEUE::_EVENT_QUEUE_POP(-2.621692E+10f);
	}
}

void func_55(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = false;
	if (func_153() || func_154())
	{
		bVar1 = true;
	}
	if (bVar1 != *uParam0)
	{
		*uParam0 = bVar1;
		if (!bVar1)
		{
			func_155(&(uParam0->f_1), 0);
		}
		else if (func_156(&(uParam0->f_1)))
		{
			func_53(&(uParam0->f_1));
		}
	}
	if (!bVar1 && func_156(&(uParam0->f_1)))
	{
		if (func_157(&(uParam0->f_1)) >= 1056964608)
		{
			func_53(&(uParam0->f_1));
		}
		else
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		MISC::SET_BIT(&iVar0, 6);
	}
	if (CAM::IS_GAMEPLAY_CAM_RENDERING() || CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&iVar0, 4);
		if (LAW::GET_WANTED_SCORE(PLAYER::PLAYER_ID()) > 0)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	func_158(iVar0);
}

void func_56()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		func_159(SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0), iVar0);
		iVar0++;
	}
}

void func_57()
{
	switch (Global_1572887.f_196.f_54)
	{
		case 0:
			func_160();
			break;
		case 1:
			func_161();
			break;
		case 2:
			func_162();
			break;
		case 3:
			func_163();
			break;
	}
}

void func_58()
{
	if (Global_1572887.f_196.f_52 == 0)
	{
		return;
	}
	switch (Global_1572887.f_196.f_52)
	{
		case 1:
			if (MISC::IS_PC_VERSION())
			{
				func_164(4);
			}
			else
			{
				func_164(2);
			}
			break;
		case 2:
			func_165();
			func_164(3);
			break;
		case 3:
			if (func_166() == 0)
			{
				return;
			}
			func_164(4);
			break;
		case 4:
			func_164(0);
			break;
	}
}

void func_59()
{
	if (func_20(4))
	{
		func_167();
	}
	switch (Global_1572887.f_196)
	{
		case 0:
			break;
		case 1:
			func_168();
			break;
		case 2:
			func_169();
			break;
		case 3:
			func_170();
			break;
		case 4:
			func_171();
			break;
		case 5:
			func_172();
			break;
		case 6:
			func_173();
			break;
		case 8:
			func_174();
			break;
		case 11:
			func_175();
			break;
		case 7:
			func_176();
			break;
		case 9:
			func_177();
			break;
		case 10:
			func_178();
			break;
		case 13:
			func_179();
			break;
		case 17:
			func_180();
			break;
		case 14:
			func_181();
			break;
		case 15:
			func_182();
			break;
		case 16:
			func_183();
			break;
		case 18:
			func_184();
			break;
		case 19:
			func_185();
			break;
		case 20:
			func_186();
			break;
		case 22:
			func_187();
			break;
		case 23:
			func_188();
			break;
	}
}

void func_60(bool bParam0)
{
	bool bVar0;
	char* sVar1;
	bool bVar2;
	struct<55> Var3;

	if (!bParam0->f_56 && !bParam0->f_57)
	{
		return;
	}
	bVar0 = (func_189(&(bParam0->f_45)) > 3000 && !bParam0->f_57);
	if (!bVar0)
	{
		sVar1 = func_190(bParam0, bParam0->f_58);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return;
		}
	}
	if (!bParam0->f_57)
	{
		if (bParam0->f_58 > 0)
		{
			func_191(bParam0, sVar1, bVar0);
		}
		else
		{
			func_192(bParam0, sVar1, bVar0);
		}
		bParam0->f_57 = 1;
		bParam0->f_54 = MISC::GET_GAME_TIMER();
	}
	bVar2 = (bParam0->f_54 != -1 && (MISC::GET_GAME_TIMER() - bParam0->f_54) > 15000);
	if (bParam0->f_55 == 0 || (bParam0->f_57 && (UIFEED::_UI_FEED_GET_MESSAGE_STATE(bParam0->f_55) == 6 || bVar2)))
	{
		Var3.f_12.f_3 = -1;
		Var3.f_12.f_3.f_1 = -1;
		Var3.f_12.f_11.f_12 = -1;
		Var3.f_12.f_11.f_12.f_1 = -1;
		Var3.f_12.f_11.f_14 = 255;
		Var3.f_12.f_11.f_15 = 255;
		Var3.f_52 = -1;
		Var3.f_52.f_1 = -1;
		Var3.f_54 = -1;
		MISC::COPY_SCRIPT_STRUCT(bParam0, &Var3, 59);
	}
}

void func_61(int iParam0)
{
	Global_1901571 = iParam0;
}

bool func_62()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1900598[iVar1 /*47*/] != 0)
		{
			Global_1901571.f_99 = iVar1;
			iVar0 = 1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_64(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_193(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_63(uParam0);
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_63(uParam0);
		return true;
	}
	return false;
}

void func_65()
{
	int iVar0;

	if (!MISC::IS_ORBIS_VERSION())
	{
		if (func_62())
		{
			func_66();
		}
		return;
	}
	if (Global_1901571.f_99 >= 20 || Global_1901571.f_99 < 0)
	{
		return;
	}
	iVar0 = Global_1901571.f_99;
	if (func_194(Global_1900598[iVar0 /*47*/]))
	{
		func_195(iVar0);
		Global_1900598[iVar0 /*47*/] = 0;
	}
	if (func_196(Global_1900598[iVar0 /*47*/]))
	{
		Global_1900598[iVar0 /*47*/] = 0;
	}
	if (Global_1900598[iVar0 /*47*/] != 0)
	{
		func_197(Global_1900598[iVar0 /*47*/], iVar0);
	}
	Global_1901571.f_99++;
	if (Global_1901571.f_99 == 31)
	{
		Global_1901571.f_99 = 0;
	}
}

void func_66()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_195(iVar0);
		iVar0++;
	}
	func_63(&(Global_1901571.f_1));
}

void func_67(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_68()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887.f_300.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_69(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887.f_300 = fParam0;
	if (iParam1 != 0)
	{
		func_198(iParam1);
	}
	if (iParam2 != 0)
	{
		func_198(iParam2);
	}
	if (iParam3 != 0)
	{
		func_198(iParam3);
	}
	if (iParam4 != 0)
	{
		func_198(iParam4);
	}
	if (iParam5 != 0)
	{
		func_198(iParam5);
	}
	if (iParam6 != 0)
	{
		func_198(iParam6);
	}
	if (iParam7 != 0)
	{
		func_198(iParam7);
	}
	if (iParam8 != 0)
	{
		func_198(iParam8);
	}
	if (iParam9 != 0)
	{
		func_198(iParam9);
	}
	if (iParam10 != 0)
	{
		func_198(iParam10);
	}
	func_199();
}

void func_70()
{
	PAD::DISABLE_CONTROL_ACTION(2, -7.654632E+14f, false);
	PAD::DISABLE_CONTROL_ACTION(2, 6.383648E+20f, false);
	PAD::DISABLE_CONTROL_ACTION(2, NaNf, false);
	if (func_71() != 0)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

int func_71()
{
	return vLocal_29.x;
}

void func_72(bool bParam0)
{
	NETWORK::_0x704F92B3AF20D857(bParam0);
}

void func_73(bool bParam0)
{
	int iVar0;
	bool bVar1;
	struct<26> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bVar1 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0)) == iVar0;
	}
	if (NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(&(Global_1572887.f_260)) && (bParam0 || bVar1))
	{
		NETWORK::_NETWORK_SESSION_CANCEL_REQUEST(&(Global_1572887.f_260));
	}
	Var2.f_5 = 2;
	Var2.f_17 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	Var2.f_24 = -1;
	Global_1572887.f_260 = { Var2 };
}

void func_74()
{
	func_200();
	func_201(-1);
	func_202(0);
	Global_1572887.f_196.f_43 = 0;
	Global_1572887.f_196.f_60 = 0;
	Global_1572887.f_196.f_1 = -1;
	if (Global_1572887.f_196.f_56 == 2)
	{
		Global_1572887.f_196.f_56 = 0;
	}
}

void func_75(int iParam0)
{
	Global_1572887.f_196.f_47 = iParam0;
}

void func_76()
{
	var uVar0;

	NETWORK::NETWORK_SET_RICH_PRESENCE(0, &uVar0, 1, 0);
}

void func_77(int iParam0)
{
	Global_1572887.f_14 = iParam0;
}

void func_78(int iParam0)
{
	vLocal_29.x = iParam0;
	vLocal_29.f_1 = MISC::GET_GAME_TIMER();
}

bool func_79()
{
	int iVar0;
	vector3 vVar1;

	if (func_203())
	{
		return false;
	}
	iVar0 = 0;
	while (UIEVENTS::EVENTS_UI_IS_PENDING(-948.9218f))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(-948.9218f, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					if (vVar1.z == -1.758433E+21f)
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_SP", "Load_Menu_Scenes");
						func_204(7.01894E+25f);
						iVar0 = 1;
					}
					else if (vVar1.z == NaNf)
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
						iVar0 = 1;
					}
					else if (vVar1.z == 9.325345E-26f)
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
						iVar0 = 1;
					}
					else if (vVar1.z == 1.199669E+09f)
					{
						AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
						func_204(-14.49531f);
						func_198(4.572338E+08f);
						iVar0 = 1;
					}
					else if (vVar1.z == 1.131876E-23f)
					{
						NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
					}
					else if (vVar1.z == 6.389203E-23f)
					{
						NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
					}
					else if (vVar1.z == 8.333659E-13f)
					{
						func_205();
					}
					break;
			}
		}
		UIEVENTS::EVENTS_UI_POP_MESSAGE(-948.9218f);
	}
	return iVar0;
}

bool func_80()
{
	return func_206() > 120000;
}

bool func_81()
{
	char* sVar0;
	int iVar1;
	char cVar2[64];

	if (!NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(2.821357E+24f)))
	{
		if (func_83() == 0)
		{
			func_204(7.01894E+25f);
			func_199();
			return true;
		}
		else
		{
			func_199();
			return true;
		}
	}
	func_208(&(Global_1572887.f_300));
	sVar0 = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(2.821357E+24f));
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (iVar1 != 0)
	{
		func_204(iVar1);
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(5.536972E-36f)))
	{
		sVar0 = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(5.536972E-36f));
		Global_1572887.f_300.f_6 = func_209(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(-5.086118E-31f)))
	{
		sVar0 = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(-5.086118E-31f));
		Global_1572887.f_300.f_7 = func_210(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(-2.662408E+11f)))
	{
		sVar0 = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(-2.662408E+11f));
		Global_1572887.f_300.f_8 = func_211(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(1.296619E-36f)))
	{
		sVar0 = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(1.296619E-36f));
		Global_1572887.f_300.f_5 = func_212(MISC::GET_HASH_KEY(sVar0));
		if (Global_1572887.f_300.f_5 <= -1)
		{
			func_213(49, -1);
		}
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(1.568E-12f)))
	{
		sVar0 = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(1.568E-12f));
		Global_1572887.f_300.f_9 = MISC::GET_HASH_KEY(sVar0);
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(-137.3746f)))
	{
		sVar0 = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(-137.3746f));
		StringCopy(&(Global_1572887.f_300.f_11), sVar0, 32);
		Global_1572887.f_300.f_10 = MISC::GET_HASH_KEY(sVar0);
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_207(2.518321E-33f)))
	{
		StringCopy(&cVar2, NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(2.518321E-33f)), 64);
		if (MISC::STRING_TO_INT(&cVar2, &(Global_1572887.f_300.f_15)))
		{
		}
	}
	func_214(-4.338585E+12f);
	func_214(-6.071033E+20f);
	func_214(3.462287E+28f);
	func_214(7.325416E+36f);
	func_214(-4.669769E-32f);
	func_214(-8.896094E-24f);
	func_214(0.4792396f);
	func_214(8.911728E+07f);
	func_214(4.618749E+16f);
	func_214(1.070652E+25f);
	NETWORK::CLEAR_SERVICE_EVENT_ARGUMENTS();
	func_199();
	return true;
}

void func_82()
{
	switch (func_83())
	{
		case joaat("SINGLE_PLAYER"):
			vLocal_29.f_2 = 2;
			break;
		case joaat("FREEROAM"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				vLocal_29.f_2 = 1;
				func_67(4);
				if (func_85(-9.34309E-35f) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				{
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				}
			}
			else
			{
				vLocal_29.f_2 = 3;
				func_67(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("GOLDSTORE"):
			break;
		case joaat("SERIES"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				vLocal_29.f_2 = 1;
				func_67(4);
				if (func_85(-9.34309E-35f) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				{
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				}
			}
			else
			{
				vLocal_29.f_2 = 3;
				func_67(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("MISSION"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				vLocal_29.f_2 = 1;
				func_67(4);
				if (func_85(-9.34309E-35f) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				{
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				}
			}
			else
			{
				vLocal_29.f_2 = 3;
				func_67(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("MISSION_CREATOR"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				vLocal_29.f_2 = 1;
				func_67(4);
				if (func_85(-9.34309E-35f) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				{
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				}
			}
			else
			{
				vLocal_29.f_2 = 3;
				func_67(68);
				AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("CLIP"):
			vLocal_29.f_2 = 5;
			func_67(4);
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_SP", "Load_Menu_Scenes");
			break;
	}
}

int func_83()
{
	return Global_1572887.f_300;
}

void func_84(int iParam0)
{
	Global_1572887.f_17 = iParam0;
}

bool func_85(int iParam0)
{
	return func_91(func_215(iParam0));
}

char* func_86(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "startup_sp";
		case 3:
			return "startup_mp";
		case 4:
			return "startup_tlg";
		case 5:
			return "startup_clip";
	}
	return "startup_sp";
}

void func_87(int iParam0)
{
	Global_1572864 = iParam0;
}

bool func_88(char* sParam0, int iParam1)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0) || MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iParam1) <= 0)
	{
		return false;
	}
	SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return true;
}

void func_89(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_SP", "Load_Menu_Scenes");
			break;
		case 3:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			break;
		case 4:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_MP", "Load_Menu_Scenes");
			break;
		case 5:
			AUDIO::_SET_AUDIO_SCENESET("Fade_To_Editor", "Load_Menu_Scenes");
			break;
	}
}

char* func_90(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("SINGLE_PLAYER"):
			sVar0 = "single_player";
			break;
		case joaat("FREEROAM"):
			sVar0 = "freeroam";
			break;
		case joaat("GOLDSTORE"):
			sVar0 = "goldstore";
			break;
		case joaat("SERIES"):
			sVar0 = "series";
			break;
		case joaat("MISSION"):
			sVar0 = "mission";
			break;
		case joaat("MISSION_CREATOR"):
			sVar0 = "mission_creator";
			break;
		case joaat("CLIP"):
			sVar0 = "clip";
			break;
	}
	return sVar0;
}

bool func_91(int iParam0)
{
	return func_216(&(Global_1572887.f_300.f_1), iParam0, 3);
}

int func_92(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = -4.848466E+35f;
			break;
		case 2:
			iVar0 = 4.572338E+08f;
			break;
		case 3:
			iVar0 = -9.34309E-35f;
			break;
		case 4:
			iVar0 = -5.243726E-15f;
			break;
		case 5:
			iVar0 = 1.139197E+21f;
			break;
		case 6:
			iVar0 = 2.146061E+14f;
			break;
		case 7:
			iVar0 = 16.12665f;
			break;
		case 8:
			iVar0 = 9.285563E-08f;
			break;
		case 9:
			iVar0 = -7.497932E+34f;
			break;
		case 10:
			iVar0 = 1.426619E+24f;
			break;
		case 11:
			iVar0 = -2.812082E+38f;
			break;
		case 12:
			iVar0 = -5.648891E-09f;
			break;
		case 13:
			iVar0 = -4.556427E+36f;
			break;
		case 14:
			iVar0 = -8.871581E-27f;
			break;
		case 15:
			iVar0 = -1.964215E-28f;
			break;
		case 16:
			iVar0 = -1.570301E+18f;
			break;
		case 17:
			iVar0 = 2.544501E+38f;
			break;
		case 18:
			iVar0 = 1.125065E+24f;
			break;
		case 19:
			iVar0 = -4.97355E+28f;
			break;
		case 20:
			iVar0 = 1.088823E-27f;
			break;
		case 21:
			iVar0 = 1.652875E-19f;
			break;
		case 22:
			iVar0 = 7.677955E-06f;
			break;
		case 23:
			iVar0 = 2.406373E+08f;
			break;
		case 24:
			iVar0 = 5.878643E+22f;
			break;
		case 25:
			iVar0 = 6.02041E-08f;
			break;
		case 26:
			iVar0 = -3.157196E-38f;
			break;
		case 27:
			iVar0 = 6.447538E+13f;
			break;
		case 28:
			iVar0 = -5.155637E-11f;
			break;
		case 29:
			iVar0 = -2.446956E-29f;
			break;
		case 30:
			iVar0 = 4.255667E+29f;
			break;
		case 31:
			iVar0 = 4.176504E-24f;
			break;
		case 32:
			iVar0 = 1.329101E-05f;
			break;
	}
	return iVar0;
}

char* func_93(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("NEW_GAME"):
			sVar0 = "new_game";
			break;
		case joaat("INTRO_NOT_DONE"):
			sVar0 = "intro_not_done";
			break;
		case joaat("FOLLOW_INVITE"):
			sVar0 = "follow_invite";
			break;
		case -1480790826:
			sVar0 = "async_mm";
			break;
		case joaat("SHIFT_F"):
			sVar0 = "shift_f";
			break;
		case joaat("BG_CUSTOM_1"):
			sVar0 = "bg_custom_1";
			break;
		case joaat("BG_CUSTOM_2"):
			sVar0 = "bg_custom_2";
			break;
		case joaat("BG_CUSTOM_3"):
			sVar0 = "bg_custom_3";
			break;
		case joaat("OPEN_POSSE"):
			sVar0 = "open_posse";
			break;
		case joaat("NEAR_POSSE"):
			sVar0 = "near_posse";
			break;
		case joaat("RANDOM_REGION"):
			sVar0 = "random_region";
			break;
		case joaat("LAST_REGION"):
			sVar0 = "last_region";
			break;
		case joaat("LAST_LOCATION"):
			sVar0 = "last_location";
			break;
		case joaat("LAST_MISSION"):
			sVar0 = "last_mission";
			break;
		case joaat("RANDOM_POKER"):
			sVar0 = "random_poker";
			break;
		case joaat("CCHAR"):
			sVar0 = "cchar";
			break;
		case joaat("CAMP"):
			sVar0 = "camp";
			break;
		case 1735278055:
			sVar0 = "my_moon";
			break;
		case -283069378:
			sVar0 = "near_lom";
			break;
		case joaat("TRADE_1"):
			sVar0 = "trade_1";
			break;
		case joaat("TRADE_2"):
			sVar0 = "trade_2";
			break;
		case joaat("TRADE_3"):
			sVar0 = "trade_3";
			break;
		case joaat("TRADE_4"):
			sVar0 = "trade_4";
			break;
		case joaat("TRADE_5"):
			sVar0 = "trade_5";
			break;
		case joaat("TRADE_6"):
			sVar0 = "trade_6";
			break;
		case joaat("TRADE_7"):
			sVar0 = "trade_7";
			break;
		case 1449824096:
			sVar0 = "trade_8";
			break;
		case -1369260209:
			sVar0 = "trade_9";
			break;
		case joaat("COUPON"):
			sVar0 = "coupon";
			break;
		case joaat("HUB"):
			sVar0 = "hub";
			break;
		case 413241879:
			sVar0 = "outlaw_pass";
			break;
		case 928971890:
			sVar0 = "mission_letter";
			break;
	}
	return sVar0;
}

char* func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NET_PLAYLIST_RACE_SERIES";
		case 1:
			return "NET_PLAYLIST_FEATURED_SERIES_001";
		case 2:
			return "NET_PLAYLIST_ADVERSARY_SMALL";
		case 3:
			return "NET_PLAYLIST_ADVERSARY_MEDIUM";
		case 4:
			return "NET_PLAYLIST_ADVERSARY_LARGE";
		case 5:
			return "NET_PLAYLIST_GUN_RUSH_TEAMS";
		case 6:
			return "NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL";
		case 7:
			return "NET_PLAYLIST_ELIMINATION_SMALL";
		case 8:
			return "NET_PLAYLIST_ELIMINATION_MEDIUM";
		case 9:
			return "NET_PLAYLIST_ELIMINATION_LARGE";
		case 10:
			return "NET_PLAYLIST_NOMINATED_SERIES";
		case 11:
			return "NET_PLAYLIST_NOMINATED_SERIES_SMALL";
		case 12:
			return "NET_PLAYLIST_NOMINATED_SERIES_MEDIUM";
		case 13:
			return "NET_PLAYLIST_NOMINATED_SERIES_LARGE";
		case 14:
			return "NET_PLAYLIST_PRIVATE_SERIES";
		case 15:
			return "NET_PLAYLIST_ORBIS_SERIES_1";
		case 16:
			return "NET_PLAYLIST_ORBIS_SERIES_2";
		case 17:
			return "NET_PLAYLIST_ORBIS_SERIES_3";
		case 18:
			return "NET_PLAYLIST_SHOOTOUT";
		case 19:
			return "NET_PLAYLIST_CAPTURE";
		default:
			break;
	}
	return "";
}

int func_95(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265213.f_2)
	{
		if (Global_265213.f_57505[iVar0 /*8*/] == iParam0)
		{
			return iVar0;
		}
		if (Global_265213.f_4[iVar0 /*46*/].f_23 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DISTRICT_BAYOU_NWA";
		case 1:
			return "DISTRICT_BIG_VALLEY";
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
		case 4:
			return "DISTRICT_GREAT_PLAINS";
		case 5:
			return "DISTRICT_GRIZZLIES";
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
		case 8:
			return "DISTRICT_GUAMA";
		case 9:
			return "DISTRICT_HEARTLAND";
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
		case 12:
			return "DISTRICT_TALL_TREES";
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
		case 14:
			return "DISTRICT_RIO_BRAVO";
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
		default:
			break;
	}
	return "";
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBARINO";
		case 1:
			return "LEMOYNE";
		case 2:
			return "NEWAUSTIN";
		case 3:
			return "NEWHANOVER";
		case 4:
			return "WESTELIZABETH";
		case 5:
			return "GUARMA";
		default:
			break;
	}
	return "";
}

void func_99()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_100()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(4);
}

void func_101()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

void func_102(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "herbs", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 55, &cVar1);
	iVar0 = 0;
	while (iVar0 < 54)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eHerbTypeFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(uParam0[iVar0], &Var17);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_103(var uParam0, char* sParam1)
{
	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 2530, "persona", 11);
	SAVE::_SAVEGAME_GET_INT_3(uParam0, "psna_eLastValidRegion");
	func_217(&(uParam0->f_1), "psna_vLastValidPosition");
	func_218(&(uParam0->f_4));
	func_219(&(uParam0->f_14));
	func_220(&(uParam0->f_61));
	func_221(&(uParam0->f_664));
	func_222(&(uParam0->f_2456));
	func_223(&(uParam0->f_2459));
	func_224(&(uParam0->f_2501));
	SAVE::_0xE0B45E983BFC0768();
}

void func_104(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	if (0 && !bParam2)
	{
	}
	StringCopy(&cVar1, "eTutorialsRun", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 33, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_SAVEGAME_GET_INT_3(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_105(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "iTutorialBuffer", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 23, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_SAVEGAME_GET_INT_2(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_106(var uParam0, char* sParam1)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 3, "psna_sNotoriety");
	SAVE::_SAVEGAME_GET_FLOAT(uParam0, "psna_sNotoriety_fNotoriety");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1), "psna_sNotoriety_iPosixTimeStampOfLastReason");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_2), "psna_sNotoriety_ePassive");
	SAVE::_0xE0B45E983BFC0768();
}

void func_107(var uParam0, char* sParam1)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, "psna_sNotoriety_TU004");
	SAVE::_SAVEGAME_GET_INT_2(uParam0, "iPosixTimeStampOfLastInfraction");
	SAVE::_0xE0B45E983BFC0768();
}

void func_108(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];

	StringCopy(&cVar1, "clothingTU004", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 89, &cVar1);
	StringConCat(&cVar1, "_OutfitArray", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 89, &cVar1);
	iVar0 = 0;
	while (iVar0 < 11)
	{
		StringCopy(&cVar1, "clothingTU004", 64);
		StringConCat(&cVar1, "_OutfitArray", 64);
		StringConCat(&cVar1, "_Element_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*8*/], 8, &cVar1);
		StringConCat(&cVar1, "_Name", 64);
		SAVE::_SAVEGAME_GET_TEXT_LABEL_63(uParam0[iVar0 /*8*/], &cVar1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_109(var uParam0, char* sParam1)
{
	char cVar0[64];
	struct<8> Var8;
	struct<8> Var16;
	int iVar24;

	SAVE::_0x443174C20B8B9E7F(uParam0, 49, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sGiftData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 46, &cVar0);
	iVar24 = 0;
	while (iVar24 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar24 /*3*/], 3, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".bNotificationPushed", 64);
		SAVE::_SAVEGAME_GET_BOOL(uParam0[iVar24 /*3*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iGiftItemHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&((uParam0[iVar24 /*3*/])->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iItemMailCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&((uParam0[iVar24 /*3*/])->f_2), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sOfferData", 64);
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_46), 3, &cVar0);
	Var16 = { cVar0 };
	StringConCat(&Var16, ".bNotificationPushed", 64);
	SAVE::_SAVEGAME_GET_BOOL(&(uParam0->f_46), &Var16);
	Var16 = { cVar0 };
	StringConCat(&Var16, ".iGiftItemHash", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_46.f_1), &Var16);
	Var16 = { cVar0 };
	StringConCat(&Var16, ".iItemMailCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_46.f_2), &Var16);
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xE0B45E983BFC0768();
}

void func_110(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, ".todLastVisited", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 181, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_SAVEGAME_GET_INT_3(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_111(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	StringCopy(&cVar1, "MpFlow", 128);
	SAVE::_0x443174C20B8B9E7F(uParam0, 28, &cVar1);
	StringConCat(&cVar1, ".LastPositionArray", 128);
	SAVE::_0x81F4E92BE3958364(uParam0, 28, &cVar1);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		StringCopy(&cVar1, "MpFlow.LastPositionArray.Strand.", 128);
		StringIntConCat(&cVar1, iVar0, 128);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*3*/], 3, &cVar1);
		StringConCat(&cVar1, ".vPos", 128);
		func_217(uParam0[iVar0 /*3*/], &cVar1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_112(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];

	StringCopy(&cVar1, sParam1, 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 23, "psna_blipsdatStruct");
	SAVE::_SAVEGAME_GET_INT_3(uParam0, "psna_sBlipsdatState");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1), 16, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "psna_itemDat", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_1[iVar0 /*5*/]), 16, &cVar1);
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "ItemPickedUp", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_BOOL(&(uParam0->f_1[iVar0 /*5*/]), &cVar1);
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "SearchVector", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_217(&(uParam0->f_1[iVar0 /*5*/].f_1), &cVar1);
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "Item", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_1[iVar0 /*5*/].f_4), &cVar1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_17), "psna_sBlipsdatCurrentMap");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_18), "psna_sBlipsdatPrevMap");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_19), "psna_sBlipsdatStartingScenarioGroup");
	SAVE::_SAVEGAME_GET_BOOL(&(uParam0->f_20), "psna_sBlipsdatStateChanged");
	SAVE::_SAVEGAME_GET_BOOL(&(uParam0->f_21), "psna_sBlipsdatActiveMapBlips");
	SAVE::_SAVEGAME_GET_BOOL(&(uParam0->f_22), "psna_sBlipsDataHasMapBeenClosed");
	SAVE::_0xE0B45E983BFC0768();
}

void func_113(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	SAVE::_0x443174C20B8B9E7F(uParam0, 89, sParam1);
	StringCopy(&cVar1, sParam1, 64);
	StringConCat(&cVar1, ".Record", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 85, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*3*/], 3, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iDate", 64);
		SAVE::_SAVEGAME_GET_INT_2(uParam0[iVar0 /*3*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGamblingSecs", 64);
		SAVE::_SAVEGAME_GET_INT_2(&((uParam0[iVar0 /*3*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGameSecs", 64);
		SAVE::_SAVEGAME_GET_INT_2(&((uParam0[iVar0 /*3*/])->f_2), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iQueueFront", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_85), &Var17);
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iQueueBack", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_86), &Var17);
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iQueueSize", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_87), &Var17);
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iLockdownDate", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_88), &Var17);
	SAVE::_0xE0B45E983BFC0768();
}

void func_114(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 2, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bCollectorBlipDiscovered", 64);
	SAVE::_SAVEGAME_GET_BOOL(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eCollectorCheckBlipShop", 64);
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_1), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_115(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 10, "psna_collGroup");
	SAVE::_SAVEGAME_GET_INT_3(uParam0, "psna_collGroupArrowhead");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_1), "psna_collGroupBottles");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_2), "psna_collGroupRandom");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_3), "psna_collGroupCoin");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_4), "psna_collGroupHeirloom");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_5), "psna_collGroupJewelry");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_6), "psna_collGroupEgg");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_7), "psna_collGroupFlower");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_8), "psna_collGroupCard");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_9), "psna_collGroupFossil");
	SAVE::_0xE0B45E983BFC0768();
}

void func_116(var uParam0, char* sParam1)
{
	char cVar0[64];
	int iVar8;

	SAVE::_0x443174C20B8B9E7F(uParam0, 2, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".FlagSet", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 2, &cVar0);
	iVar8 = 0;
	while (iVar8 < 1)
	{
		StringCopy(&cVar0, sParam1, 64);
		StringConCat(&cVar0, ".FlagSet", 64);
		StringIntConCat(&cVar0, iVar8, 64);
		SAVE::_SAVEGAME_GET_INT_3(uParam0[iVar8], &cVar0);
		iVar8++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_117()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_44(iVar0))
		{
			SCRIPTS::REQUEST_SCRIPT(func_119(iVar0));
		}
		iVar0++;
	}
}

bool func_118(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = (iParam0 >= 0 && iParam0 < 16);
	if (bParam1 && !bVar0)
	{
	}
	return bVar0;
}

char* func_119(int iParam0)
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "init_global_block_ugc";
		case 4:
			return "init_global_block_mp";
		case 3:
			return "init_global_block_profiler";
		case 5:
			return "init_global_block_sp";
		case 7:
			return "init_global_block_shared";
		case 6:
			return "init_global_block_transition";
		case 10:
			return "init_global_block_softsave";
		case 2:
			return "init_global_block_mc";
		case 9:
			return "init_global_block_mc_deathmatch";
		case 8:
			return "init_global_block_mc_race";
		case 11:
			return "init_global_block_creator";
		case 12:
			return "init_global_block_ugc_common";
		case 13:
			return "init_global_block_ugc_transition";
		case 14:
			return "init_global_block_ugc_cutscene";
		case 15:
			return "init_global_block_mc_subsys";
	}
	return uVar0;
}

void func_120(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

Vector3 func_121()
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "eDuelResult", 24);
	return cVar0;
}

char* func_122()
{
	return "brain_id";
}

char* func_123()
{
	return "brain_player";
}

char* func_124()
{
	return "brain_type";
}

char* func_125()
{
	return "brain_isHidden";
}

char* func_126()
{
	return "brain_isDisabled";
}

char* func_127()
{
	return "brain_timeStamp";
}

char* func_128()
{
	return "brain_value";
}

char* func_129()
{
	return "bHasScriptBrain";
}

char* func_130()
{
	return "MP_HUD_Local_Status_Icon";
}

char* func_131()
{
	return "MP_HUD_Local_Secondary_Icon";
}

char* func_132()
{
	return "MP_HUD_Local_Blip_Sprite";
}

char* func_133()
{
	return "MP_HUD_Hide_My_Blip_FOR_TEAMS";
}

char* func_134()
{
	return "MP_HUD_Force_My_Blip_Persistent_For_Teams";
}

char* func_135()
{
	return "MP_HUD_Force_Can_Hear_Teams";
}

char* func_136()
{
	return "fetch_entity_bitfield";
}

char* func_137()
{
	return "fetch_combat_config";
}

char* func_138()
{
	return "fetch_lockon_end_time";
}

char* func_139()
{
	return "chu_vip_ped";
}

char* func_140()
{
	return "NetStableMount";
}

char* func_141()
{
	return "NetStableGUID1";
}

char* func_142()
{
	return "NetStableGUID2";
}

char* func_143()
{
	return "NetStableGUID3";
}

char* func_144()
{
	return "NetStableGUID4";
}

char* func_145()
{
	return "NSS_PLAYER_FLAG";
}

char* func_146()
{
	return "NSS_PLAYER_BOUNTY_CUSTODIAN";
}

void func_147()
{
}

void func_148()
{
}

void func_149()
{
	BRAIN::REGISTER_OBJECT_SCRIPT_BRAIN("net_fast_travel_barker", 1.328024E-33f, 100, 20f, -1, 4);
}

bool func_150(bool bParam0)
{
	bool bVar0;
	vector3 vVar1[24];
	bool bVar4;
	int iVar5;
	struct<8> Var6;
	bool bVar14;
	var uVar15;
	var uVar16;
	int iVar24[100];
	int iVar125;
	int iVar126;
	int iVar127;
	struct<7> Var128;

	StringCopy(&cVar1, "loading_tips", 24);
	bVar0 = DATAFILE::PARSEDDATA_IS_FILE_VALID(*bParam0);
	if (!bVar0)
	{
		*bParam0 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(MISC::GET_HASH_KEY(&cVar1));
	}
	bVar4 = DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0);
	if (!bVar4)
	{
		return false;
	}
	func_225(bParam0);
	bParam0->f_79 = func_226(bParam0, 1);
	if (bParam0->f_79 <= 0)
	{
		return false;
	}
	uVar15 = bParam0->f_1;
	iVar5 = 0;
	while (iVar5 < bParam0->f_79)
	{
		iVar24[iVar5] = iVar5;
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= (bParam0->f_79 - 1))
	{
		iVar125 = MISC::GET_RANDOM_INT_IN_RANGE(iVar5, (bParam0->f_79 - 1));
		iVar126 = iVar24[iVar5];
		iVar24[iVar5] = iVar24[iVar125];
		iVar24[iVar125] = iVar126;
		iVar5++;
	}
	iVar127 = 0;
	while (iVar127 < 10)
	{
		bParam0->f_1 = uVar15;
		bParam0->f_3 = iVar24[iVar127];
		if (func_227(bParam0, 0))
		{
			if (func_228(bParam0, 2, &Var6))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
				{
					MemCopy(&Var128, {Var6}, 4);
					if (func_229(bParam0, 4, &bVar14))
					{
						if (bVar14)
						{
							func_230(&Var128, 1);
						}
					}
					if (func_229(bParam0, 5, &bVar14))
					{
						if (bVar14)
						{
							func_230(&Var128, 2);
						}
					}
					func_231(bParam0, 3, &(Var128.f_5));
					if (func_228(bParam0, 6, &uVar16))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar16))
						{
							Var128.f_6 = MISC::GET_HASH_KEY(&uVar16);
						}
					}
				}
			}
			if (Var128.f_6 == 0 || MISSIONDATA::MISSIONDATA_GET_RATING(Var128.f_6) >= 2)
			{
				bParam0->f_5[iVar127 /*7*/] = { Var128 };
				iVar127++;
			}
		}
	}
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(*bParam0);
	return true;
}

void func_151(bool bParam0, int iParam1)
{
	bParam0->f_80 = iParam1;
}

void func_152(bool bParam0, int iParam1)
{
	bParam0->f_76 = iParam1;
}

int func_153()
{
	if (!SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		return 1;
	}
	if (!SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(7))
	{
		return 1;
	}
	if (!SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(0))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1958621.f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1958621.f_1, 5))
	{
		return 1;
	}
	if (func_232(255))
	{
		return 1;
	}
	if (func_233(0))
	{
		return 1;
	}
	if (Global_13)
	{
		return 1;
	}
	if (CAM::HAS_LETTER_BOX())
	{
		if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
		{
			return 1;
		}
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
		{
			return 1;
		}
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (GRAPHICS::GET_TV_CHANNEL() != -1)
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
		{
			return 1;
		}
	}
	if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
	{
		if (HUD::IS_RADAR_HIDDEN())
		{
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				return 1;
			}
		}
	}
	if (func_234(255))
	{
		return 1;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	if (MISC::IS_BIT_SET(Global_1958621.f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1958621.f_1, 6))
	{
		return 1;
	}
	if (func_11() == -2)
	{
		return 1;
	}
	if (func_235(Global_1940186, 8192))
	{
		return 1;
	}
	if (func_235(Global_1940186, 4096))
	{
		return 1;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	if (STREAMING::_0x99F92061EFE908BA() || func_235(Global_1940186, 32768))
	{
		return 1;
	}
	if (Global_13 || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_GameIntro"))
	{
		return 1;
	}
	if (func_236())
	{
		if (HUD::IS_RADAR_HIDDEN())
		{
			return 1;
		}
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		if ((!CAM::_0x1204EB53A5FBC63D() && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !func_236())
		{
			return 1;
		}
	}
	if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
	{
		return 1;
	}
	if (func_11() == 0)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			if (func_237(255) > 2 && !func_238(Global_1295619.f_5, 8192))
			{
				return 1;
			}
			else if (func_239(16))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_155(var uParam0, bool bParam1)
{
	if (bParam1 || !func_156(uParam0))
	{
		func_240(uParam0);
	}
}

bool func_156(var uParam0)
{
	return func_241(*uParam0, 1);
}

float func_157(var uParam0)
{
	if (!func_156(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_242(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_243() - uParam0->f_1);
}

void func_158(int iParam0)
{
	if (iParam0 != Global_1958621.f_3)
	{
		COMPAPP::_0x74BCCEB233AD95B2(5.951027E-17f, iParam0);
		Global_1958621.f_3 = iParam0;
	}
}

void func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -725272239:
			func_244(iParam1);
			break;
		case 1121131740:
			func_245(iParam1);
			break;
		case 543140406:
			func_246(iParam1);
			break;
		case -2095977185:
			func_247(iParam1);
			break;
		case 809652668:
			func_248(iParam1);
			break;
		case 1860341470:
			func_249();
			break;
		case 516249386:
			func_250(iParam1);
			break;
		case 904577075:
			func_251(iParam1);
			break;
	}
}

void func_160()
{
	if (Global_1572887.f_196.f_44 != 0 && func_252())
	{
		func_253(1);
		return;
	}
	if (Global_1572887.f_196.f_56 > 2 && func_252())
	{
		func_253(1);
		return;
	}
	if (Global_1572887.f_196.f_46 != -1 && func_252())
	{
		func_253(1);
		return;
	}
	if (Global_1572887.f_196.f_58 != 0 && func_252())
	{
		func_253(1);
		return;
	}
	if (func_254(Global_1572887.f_196.f_58, 4194304) || func_254(Global_1572887.f_196.f_58, 2.350989E-38f))
	{
		func_255(16384);
	}
	Global_1572887.f_196.f_58 = 0;
}

void func_161()
{
	struct<8> Var0;
	struct<4> Var19;
	char cVar23[16];
	char cVar25[64];
	bool bVar33;
	char* sVar34;

	Global_1572887.f_196.f_61 = MISC::GET_GAME_TIMER();
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_2 = 0;
	func_256();
	if (func_257(256) || func_257(512))
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		Var0.f_7 = MISC::GET_HASH_KEY("IB_EXIT");
		Var0.f_7.f_1 = 0;
		Var0.f_7.f_2 = 0;
		Var0.f_7.f_3 = 0;
	}
	else if (func_257(1.084202E-19f))
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		Var0.f_7 = MISC::GET_HASH_KEY("IB_CANCEL");
		Var0.f_7.f_1 = 0;
		Var0.f_7.f_2 = 0;
		Var0.f_7.f_3 = 0;
	}
	else if (((((((((func_257(131072) || func_257(262144)) || func_257(524288)) || func_257(1048576)) || func_257(2097152)) || func_257(4194304)) || func_257(8388608)) || func_257(2.350989E-38f)) || func_257(9.403955E-38f)) || func_257(1.504633E-36f))
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_OK");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
	}
	else
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_EXIT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		func_255(512);
	}
	func_258(&Var0);
	Var19 = 0;
	Var19.f_2 = "SG_HDNG";
	StringCopy(&cVar23, "JAIL_ALT_BODY", 16);
	StringCopy(&cVar25, func_259(), 64);
	bVar33 = MISC::ARE_STRINGS_EQUAL(&cVar25, &cVar23);
	sVar34 = func_261(bVar33, Global_1295611.f_2.f_4, func_260());
	Var19.f_3 = MISC::VAR_STRING(2, &cVar25, sVar34);
	if (!bVar33)
	{
		NETWORK::_NETWORK_ALERT(0, MISC::GET_HASH_KEY(&cVar25), sVar34, 0);
	}
	Var19.f_1 = 2;
	Global_1572887.f_196.f_55 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(&Var0, &Var19, true);
	func_253(2);
	func_262(1);
}

void func_162()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	int iVar9;

	if (func_11() == 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1572887.f_18, false))
		{
			if (func_263() > 5)
			{
				if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_253(3);
				return;
			}
		}
	}
	while (UIEVENTS::EVENTS_UI_IS_PENDING(-1.366675E-05f))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(-1.366675E-05f, &vVar5))
		{
			switch (vVar5.x)
			{
				case -1203660660:
					if (vVar5.y == Global_1572887.f_196.f_55)
					{
						if (vVar5.z == 1.747161E+36f)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(-1.366675E-05f);
							bVar0 = true;
						}
						if (vVar5.z == 5.316989E-23f)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(-1.366675E-05f);
							bVar2 = true;
						}
						if (vVar5.z == 1.089574E+12f)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(-1.366675E-05f);
							bVar1 = true;
						}
					}
					break;
				case -445432096:
					if (vVar5.y == Global_1572887.f_196.f_55)
					{
						Global_1572887.f_196.f_55 = 0;
						bVar3 = true;
						UIEVENTS::EVENTS_UI_POP_MESSAGE(-1.366675E-05f);
					}
					break;
			}
		}
		UIEVENTS::EVENTS_UI_POP_MESSAGE(-1.366675E-05f);
	}
	iVar9 = (MISC::GET_GAME_TIMER() - Global_1572887.f_196.f_61);
	bVar4 = (iVar9 > Global_1901671.f_2.f_20 && Global_1572887.f_196.f_61 != -1);
	if ((((bVar4 || bVar0) || bVar1) || bVar2) || bVar3)
	{
		func_253(3);
		if (func_257(256) || func_257(512))
		{
			if (bVar0)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_264(1, 0, 0, 0, 1);
				func_255(8);
				if (func_257(512))
				{
					func_255(1024);
				}
			}
			else if ((bVar1 || bVar3) || bVar4)
			{
				func_255(16);
				func_255(2);
			}
		}
		else if (((((((((func_257(131072) || func_257(262144)) || func_257(524288)) || func_257(1048576)) || func_257(2097152)) || func_257(4194304)) || func_257(8388608)) || func_257(2.350989E-38f)) || func_257(9.403955E-38f)) || func_257(1.504633E-36f))
		{
			if (bVar0)
			{
				func_255(16);
				func_255(2);
			}
		}
		else if (func_257(1.084202E-19f))
		{
			if (bVar0)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_264(1, 0, 0, 0, 1);
				func_255(8);
			}
		}
	}
}

void func_163()
{
	int iVar0;

	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		if ((func_234(255) && !(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())) && !func_265(255))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	if (Global_1572887.f_196.f_55 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1572887.f_196.f_55);
	}
	if (Global_1572887.f_196.f_46 != -1)
	{
		iVar0 = (5.842172E-38f + Global_1572887.f_196.f_46);
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		NETWORK::CLEAR_SERVICE_EVENT_ARGUMENTS();
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
		SCRIPTS::BAIL_TO_LANDING_PAGE(iVar0);
	}
	AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
	Global_1572887.f_196.f_45 = Global_1572887.f_196.f_44;
	Global_1572887.f_196.f_57 = Global_1572887.f_196.f_56;
	Global_1572887.f_196.f_55 = 0;
	Global_1572887.f_196.f_44 = 0;
	Global_1572887.f_196.f_58 = 0;
	Global_1572887.f_196.f_56 = 0;
	Global_1572887.f_196.f_46 = -1;
	Global_1572887.f_196.f_61 = -1;
	func_253(0);
}

void func_164(int iParam0)
{
	Global_1572887.f_196.f_52 = iParam0;
}

void func_165()
{
	struct<2> Var0[2];

	Var0[0 /*2*/] = { Global_1572887.f_196.f_7 };
	Var0[1 /*2*/] = { Global_1572887.f_196.f_7.f_2 };
	Global_1572887.f_196.f_53 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var0, 2);
}

int func_166()
{
	struct<8> Var0[2];
	int iVar17;
	char* sVar18;
	char* sVar19;
	char* sVar20;
	char* sVar21;

	if (MISC::IS_PC_VERSION() || MISC::IS_STADIA_VERSION())
	{
		iVar17 = 0;
		if (!NETWORK::_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE(&(Global_1572887.f_196.f_7), &(Var0[0 /*8*/])))
		{
			iVar17 = -1;
		}
		else if (!NETWORK::_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE(&(Global_1572887.f_196.f_7.f_2), &(Var0[1 /*8*/])))
		{
			iVar17 = -1;
		}
	}
	else
	{
		iVar17 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Global_1572887.f_196.f_53, &Var0, 2);
	}
	if (iVar17 == -1)
	{
		return 2;
	}
	else if (iVar17 == 1)
	{
		return 0;
	}
	sVar18 = func_266(&(Var0[0 /*8*/]), 4.808429E-35f);
	sVar19 = func_266(&(Var0[1 /*8*/]), 4.808429E-35f);
	sVar20 = sVar19;
	sVar21 = "";
	if (Global_1572887.f_196.f_2 == 0 || Global_1572887.f_196.f_2 == 1)
	{
		if (func_254(Global_1572887.f_196.f_13.f_11, 2))
		{
			sVar21 = MISC::VAR_STRING(10, "NT_INV_JOIN_EXTENDED", sVar18);
		}
		else
		{
			sVar21 = MISC::VAR_STRING(10, "NT_INV_EXTENDED", sVar18);
		}
	}
	else if (Global_1572887.f_196.f_2 == 2 || Global_1572887.f_196.f_2 == 3)
	{
		if (func_254(Global_1572887.f_196.f_3.f_3, 2))
		{
			sVar21 = MISC::VAR_STRING(10, "NT_INV_JOIN_EXTENDED", sVar18);
		}
		else
		{
			sVar21 = MISC::VAR_STRING(10, "NT_INV_EXTENDED", sVar18);
		}
	}
	else if (Global_1572887.f_196.f_2 == 4)
	{
		if (func_254(Global_1572887.f_196.f_7.f_5, 2))
		{
			sVar21 = MISC::VAR_STRING(10, "NT_INV_JOIN_EXTENDED", sVar18);
		}
		else
		{
			sVar21 = MISC::VAR_STRING(10, "NT_INV_EXTENDED", sVar18);
		}
	}
	else
	{
		sVar21 = MISC::VAR_STRING(10, "NT_INV_EXTENDED", sVar18);
	}
	func_267(sVar20, sVar21, -1.391775E+23f, 16946.78f, 8000, 0, 0, 1, 0, 1, 1);
	return 1;
}

void func_167()
{
	NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
	func_262(1);
	func_72(0);
	func_74();
	if (Global_1572887.f_196.f_55 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1572887.f_196.f_55);
	}
	Global_1572887.f_196.f_54 = 0;
	Global_1572887.f_196.f_56 = 0;
	Global_1572887.f_196.f_57 = 0;
	Global_1572887.f_196.f_58 = 0;
	Global_1572887.f_196.f_59 = 0;
	Global_1572887.f_196.f_60 = 0;
	Global_1572887.f_196.f_61 = -1;
}

void func_168()
{
	bool bVar0;

	func_200();
	func_202(2);
	if (((func_268(Global_1572887.f_196.f_13, 131072) || func_269(64)) || func_269(128)) || Global_1572887.f_196.f_2 == 5)
	{
		func_255(8);
		return;
	}
	if (func_270())
	{
		func_271(1.084202E-19f);
		return;
	}
	if ((Global_1295619.f_9 && GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10) != Global_1295619.f_5) && Global_1572887.f_196.f_2 != 4)
	{
		func_271(512);
		return;
	}
	if ((func_272() || func_273()) && Global_1572887.f_196.f_2 != 4)
	{
		func_271(256);
		return;
	}
	if (func_274() == 2)
	{
		bVar0 = true;
	}
	if (!func_275(bVar0))
	{
		return;
	}
	Global_1572887.f_196.f_56 = 0;
	Global_1572887.f_196.f_57 = 0;
	func_255(8);
}

void func_169()
{
	if (func_276(1))
	{
		func_202(23);
	}
	if (func_269(16))
	{
		func_202(23);
		return;
	}
	if (!func_269(8))
	{
		return;
	}
	if (!func_277())
	{
		return;
	}
	if (func_269(1024))
	{
		func_278(1);
	}
	func_279();
	if (func_11() == -1)
	{
		func_202(8);
		return;
	}
	func_280();
	func_202(3);
}

void func_170()
{
	if (Global_1572887.f_196.f_54 != 0)
	{
		func_255(4);
		func_281();
		func_202(23);
		return;
	}
	if (CAM::IS_SCREEN_FADED_IN() && !func_282())
	{
		if (func_269(8192) && func_283())
		{
			func_284(8192);
			func_285(1, 1, 0, 0, 0, 0, 0, 0, 1);
		}
		else
		{
			func_285(1, 1, 0, 0, 0, 0, 1, 1, 0);
		}
		func_286(0, 0);
		func_202(4);
		return;
	}
	if (func_287())
	{
		func_288(18);
	}
	else
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		func_289(0, 5);
	}
	func_202(5);
}

void func_171()
{
	if (Global_1572887.f_196.f_54 != 0)
	{
		func_255(4);
		func_281();
		func_202(23);
		return;
	}
	if (!func_290() && !func_291())
	{
		return;
	}
	func_202(5);
}

void func_172()
{
	if (Global_1572887.f_196.f_54 != 0)
	{
		func_255(4);
		func_281();
		func_202(23);
		return;
	}
	func_292(1);
	if (func_233(0))
	{
		func_294(func_293(), 0);
	}
	func_295();
	func_202(6);
}

void func_173()
{
	struct<17> Var0;
	struct<4> Var17;

	if (Global_1572887.f_196.f_54 != 0)
	{
		func_255(4);
		func_202(23);
		return;
	}
	if (Global_1572887 != 39)
	{
		return;
	}
	Var17.f_1 = -1;
	Var17.f_2 = -1;
	Var17.f_3 = -1;
	Var17.f_3.f_1 = -1;
	if (!func_269(128))
	{
		switch (Global_1572887.f_196.f_2)
		{
			case 2:
			case 3:
				Global_1572887.f_196.f_1 = NETWORK::_NETWORK_GET_PLATFORM_INVITE_ID();
				if (!NETWORK::NETWORK_ACTION_PLATFORM_INVITE())
				{
					Global_1572887.f_196.f_1 = -1;
					func_202(23);
					return;
				}
				break;
			case 0:
				Var0 = { func_296() };
				NETWORK::_0xC0CFFDA87C2C163D(NETWORK::_0x27B1AE4D8C652F08(Var0.f_10), &Var17, 11);
				func_297(&Var17);
				Global_1572887.f_196.f_1 = NETWORK::_0x6C27442A225A241A(NETWORK::_0x27B1AE4D8C652F08(Var0.f_10));
				if (!NETWORK::NETWORK_ACCEPT_RS_INVITE(NETWORK::_0x27B1AE4D8C652F08(Var0.f_10)))
				{
					Global_1572887.f_196.f_1 = -1;
					func_202(23);
					return;
				}
				break;
			case 1:
				Global_1572887.f_196.f_1 = NETWORK::NETWORK_REQUEST_JOIN(&(Global_1572887.f_196.f_13));
				if (Global_1572887.f_196.f_1 == -1)
				{
					func_202(23);
					return;
				}
				break;
		}
	}
	else
	{
		func_75(0);
	}
	if (NETWORK::NETWORK_SESSION_GET_SESSION_TYPE() != 1)
	{
		func_255(2048);
	}
	func_298();
	if (func_299())
	{
		func_300(1);
		func_255(32768);
	}
	func_200();
	func_202(7);
}

void func_174()
{
	if (!func_301())
	{
		func_202(23);
		return;
	}
	func_302();
	func_202(11);
}

void func_175()
{
	struct<17> Var0;

	if (!func_303())
	{
		return;
	}
	if (func_274() == 2 || func_274() == 3)
	{
		NETWORK::NETWORK_ACTION_PLATFORM_INVITE();
	}
	else if (func_274() == 0 || func_274() == 1)
	{
		Var0 = { func_296() };
		NETWORK::NETWORK_ACCEPT_RS_INVITE(NETWORK::_0x27B1AE4D8C652F08(Var0.f_10));
	}
	func_202(7);
}

void func_176()
{
	if (!func_301())
	{
		func_255(4);
		func_202(23);
		return;
	}
	func_304();
	if (func_274() == 4 && SCRIPTS::IS_THREAD_ACTIVE(Global_265213.f_122725, false))
	{
		func_285(1, 0, 0, 1, 0, 0, 0, 0, 0);
	}
	func_73(0);
	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
	func_200();
	func_202(9);
}

void func_177()
{
	int iVar0;

	iVar0 = func_305();
	if (iVar0 == 1)
	{
		func_202(10);
	}
	else if (iVar0 == 2)
	{
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		if (Global_1572887.f_196.f_57 == 15 || Global_1572887.f_196.f_56 == 15)
		{
			func_271(2f);
		}
		func_306(256);
		func_255(4);
		func_202(23);
	}
}

void func_178()
{
	func_200();
	func_307(0, 0, 0, 1);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) || !func_308(255))
		{
			func_309(1);
			func_255(4096);
		}
	}
	if (func_310(9))
	{
		func_309(1);
	}
	func_304();
	func_202(13);
	func_311(1, 0, 0);
}

void func_179()
{
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
	}
	func_200();
	func_202(17);
}

void func_180()
{
	int iVar0;

	if (!PED::IS_PED_CARRYING_SOMETHING(Global_1295619.f_3) && !func_312(Global_1295619.f_3, -2.350014E+31f))
	{
		func_202(14);
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_33) && !func_312(Global_33, -2.350014E+31f))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295619.f_3);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			TASK::CLEAR_PED_TASKS(Global_1295619.f_3, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_1295619.f_3, iVar0, Global_1295619.f_12, 2f, 9);
		}
	}
}

void func_181()
{
	func_200();
	func_313();
	func_202(15);
}

void func_182()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	if (func_314())
	{
		func_200();
		func_315();
		func_202(16);
	}
	else if (func_276(0))
	{
		func_271(2048);
		func_202(23);
	}
}

void func_183()
{
	int iVar0;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	if (func_276(0))
	{
		func_271(4096);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_255(4);
		func_202(23);
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Global_1295619.f_3, 5.999514E-21f, true);
	if (iVar0 == 0 || iVar0 == 1)
	{
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_1295619.f_3))
	{
		func_295();
		return;
	}
	func_316(13, 0, 0, 1);
	func_317();
	func_318();
	func_202(18);
}

void func_184()
{
	struct<2> Var0;
	struct<2> Var17;
	struct<2> Var21;
	struct<2> Var27;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	func_315();
	if (func_276(0))
	{
		func_271(8192);
		func_319();
		return;
	}
	Var0 = { func_296() };
	Var17 = { func_320() };
	Var21 = { func_321() };
	switch (func_274())
	{
		case 0:
			Var27 = { Var0 };
			break;
		case 1:
			Var27 = { Var0 };
			break;
		case 2:
			Var27 = { Var17 };
			break;
		case 3:
			Var27 = { Var17 };
			break;
		case 4:
			Var27 = { Var21 };
			break;
		case 5:
			Var27 = { Var0 };
			break;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var27))
	{
		return;
	}
	func_200();
	func_202(19);
}

void func_185()
{
	struct<2> Var0;
	struct<2> Var17;
	struct<2> Var21;
	struct<2> Var27;
	int iVar29;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	func_315();
	if (func_276(0))
	{
		func_271(16384);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_255(4);
		func_202(23);
	}
	Var0 = { func_296() };
	Var17 = { func_320() };
	Var21 = { func_321() };
	switch (func_274())
	{
		case 0:
			Var27 = { Var0 };
			break;
		case 1:
			Var27 = { Var0 };
			break;
		case 2:
			Var27 = { Var17 };
			break;
		case 3:
			Var27 = { Var17 };
			break;
		case 4:
			Var27 = { Var21 };
			break;
		case 5:
			Var27 = { Var0 };
			break;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var27))
	{
		func_271(8);
		func_322();
		func_255(2);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_255(4);
		func_202(23);
	}
	iVar29 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var27);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar29))
	{
		return;
	}
	func_323(iVar29);
	NETWORK::_0x5A91BCEF74944E93(iVar29, 30f);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar29))
	{
		return;
	}
	func_200();
	func_202(20);
}

void func_186()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	func_315();
	if ((func_324() && func_325()) && (func_237(255) > 0 && func_326() > -1))
	{
		func_202(22);
	}
}

void func_187()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	func_315();
	if (func_276(0))
	{
		func_271(32768);
		func_202(23);
	}
	if (((CAM::IS_SCREEN_FADED_IN() && !SCRIPTS::IS_LOADING_SCREEN_VISIBLE()) && !func_327()) && !func_282())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_264(1, 0, 0, 0, 0);
	}
	iVar0 = Global_1572887.f_196.f_41;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_271(16);
		func_328(1);
		func_322();
		func_255(2);
		func_255(4);
		func_202(23);
	}
	if (func_237(iVar0) == 0)
	{
		return;
	}
	if (func_329() != 2 && func_234(255))
	{
		return;
	}
	bVar1 = func_330();
	iVar2 = func_331();
	if (iVar2 == 1)
	{
		func_332();
		UIAPPS::_CLOSE_ALL_UIAPPS();
		func_255(32);
		func_255(2);
		func_333(16384);
		func_202(23);
		if (func_334())
		{
			func_309(1);
			func_335(1);
			func_336(1);
		}
		if (bVar1)
		{
			func_337(iVar0, bVar1);
		}
		return;
	}
	else if (iVar2 == 0)
	{
		func_309(1);
		return;
	}
	else if (iVar2 == 2 && !func_269(4))
	{
		iVar3 = iVar0;
		switch (NETWORK::NETWORK_SESSION_GET_SESSION_TYPE())
		{
			case 4:
				func_271(3.85186E-34f);
				func_255(4);
				return;
			case 3:
				if (func_338(iVar3) == 3)
				{
					func_271(64);
					func_255(4);
				}
				break;
		}
	}
	if (func_314())
	{
		func_262(1);
		return;
	}
	if (!func_254(Global_1572887.f_196.f_60, 8) || bVar1)
	{
		func_337(iVar0, bVar1);
	}
	if (!func_339())
	{
		return;
	}
	if (func_269(256))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), false, false, true, true);
	}
	if (func_269(4096))
	{
		func_309(0);
	}
	if (func_327() || func_340(1))
	{
		func_341(512);
	}
	if (func_282())
	{
		func_264(1, 0, 0, 0, 1);
		Global_1072759.f_28644.f_66.f_36 = 1;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
	func_255(2);
	func_202(23);
}

void func_188()
{
	int iVar0;

	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_315();
	if (func_269(4))
	{
		if (Global_1572887.f_196.f_54 != 0)
		{
			return;
		}
		if (func_327())
		{
			func_341(32768);
		}
		if (func_342())
		{
			if (!Global_1295619.f_9 || Global_1295619.f_11 == Global_1295619)
			{
				func_343(0, 3, 0);
				func_255(2);
				func_328(0);
				func_344(1, 1);
			}
			else
			{
				func_343(0, 129, 0);
				func_255(2);
				func_328(0);
				func_344(1, 1);
			}
			if ((!func_269(2) && !func_234(255)) && !(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		else if (func_11() == 0)
		{
			iVar0 = 45;
			if (func_269(512) || func_269(16384))
			{
				iVar0 = 0;
			}
			if (func_329() == 0 || func_329() == 1)
			{
				func_213(iVar0, -1);
			}
			else if (func_329() == 2)
			{
				if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4) && SCRIPTS::IS_THREAD_ACTIVE(Global_265213.f_122725, false)) || Global_1572887 < 39)
				{
					func_213(iVar0, -1);
				}
			}
		}
	}
	if (!func_269(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		if (func_234(255))
		{
			return;
		}
		else if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			func_328(0);
			func_344(1, 1);
		}
		else
		{
			func_334();
		}
	}
	if (SCRIPTS::IS_LOADING_SCREEN_VISIBLE())
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !func_327())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	}
	if (Global_1572887.f_196.f_2 == 2 || Global_1572887.f_196.f_2 == 3)
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
	}
	if (!func_269(32))
	{
		if (!func_345(0, 255) && func_346(255) == 1)
		{
			func_285(0, 1, 0, 0, 0, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		else if (!func_269(2) && !func_269(32768))
		{
			func_328(1);
			func_347(1);
		}
	}
	if (!func_345(23, 255))
	{
		func_256();
	}
	if (!func_269(8))
	{
		func_348(25);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	func_349(0, 5, 0);
	AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
	func_350(0);
	func_351();
	func_352();
	func_75(2);
	func_74();
}

int func_189(var uParam0)
{
	if (!func_353(uParam0))
	{
		return 0;
	}
	if (func_354(uParam0))
	{
		return uParam0->f_2;
	}
	return func_355(uParam0->f_1);
}

char* func_190(bool bParam0, int iParam1)
{
	struct<16> Var0;
	struct<2> Var16;
	int iVar18;
	char* sVar19;

	sVar19 = "";
	switch (iParam1)
	{
		case 8:
		case 16:
		case 17:
		case 20:
			switch (func_356(&Var0, bParam0->f_43, 1))
			{
				case 1:
					return sVar19;
				case 2:
					if (!func_353(&(bParam0->f_48)) || (func_189(&(bParam0->f_48)) > 500 && func_357() == 0))
					{
						func_358(bParam0->f_43);
						func_359(&(bParam0->f_48), 1);
					}
					return sVar19;
				case 3:
					return sVar19;
				case 4:
					sVar19 = func_360(Var0);
					return sVar19;
				default:
					break;
			}
			break;
		case 1:
			iVar18 = NETWORK::_0x27B1AE4D8C652F08(bParam0->f_11);
			NETWORK::_0x16EFB123C4451032(iVar18, &Var16);
			if (!func_361(Var16))
			{
				return sVar19;
			}
			sVar19 = NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&Var16, 0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar19))
			{
				return sVar19;
			}
			return sVar19;
	}
	return sVar19;
}

void func_191(bool bParam0, char[4] cParam1, bool bParam2)
{
	struct<55> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = 27.64779f;
	Var0.f_19 = 27.64779f;
	Var0.f_25 = 300;
	Var0.f_33.f_8 = 27.64779f;
	Var0.f_33.f_11 = 27.64779f;
	Var0.f_33.f_12 = 8000;
	Var0.f_33.f_13 = 1.051843E+16f;
	Var0.f_33.f_15 = 1.608566E+13f;
	Var0.f_33.f_21 = 1;
	switch (bParam0->f_58)
	{
		case 8:
		case 16:
		case 17:
		case 20:
			if (Global_1072759.f_23 >= 10)
			{
				return;
			}
			func_362(bParam0, &Var0, bParam0->f_58, cParam1, bParam2);
			Global_1072759.f_23.f_5[Global_1072759.f_23 /*30*/] = { bParam0->f_12 };
			Global_1072759.f_23++;
			break;
		case 1:
			func_363(bParam0, &Var0, cParam1, bParam2);
			break;
	}
	Global_1072759.f_23.f_2.f_1 = func_364(Var0);
	bParam0->f_55 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1072759.f_23.f_2.f_1, func_365(95));
	func_366(bParam0, Global_1072759.f_23.f_2.f_1);
	if (func_367(&(bParam0->f_12)))
	{
		func_368(&(bParam0->f_12), Global_1072759.f_23);
	}
	if (func_369(&(bParam0->f_12)))
	{
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(bParam0->f_12.f_11.f_14) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0->f_12.f_11.f_14))
		{
			NETWORK::_0x5A91BCEF74944E93(bParam0->f_12.f_11.f_14, 30f);
		}
	}
}

void func_192(bool bParam0, char* sParam1, bool bParam2)
{
}

void func_193(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_194(int iParam0)
{
	if (iParam0 >= 31 || iParam0 <= 0)
	{
		return true;
	}
	return Global_1901539[iParam0] >= 1;
}

void func_195(int iParam0)
{
	int iVar0;

	if (iParam0 >= 0)
	{
		Global_1900598[iParam0 /*47*/] = 0;
		Global_1900598[iParam0 /*47*/].f_1 = 0;
		StringCopy(&(Global_1900598[iParam0 /*47*/].f_2), "", 24);
		StringCopy(&(Global_1900598[iParam0 /*47*/].f_18), "", 24);
		StringCopy(&(Global_1900598[iParam0 /*47*/].f_21), "", 24);
		StringCopy(&(Global_1900598[iParam0 /*47*/].f_24), "", 24);
		StringCopy(&(Global_1900598[iParam0 /*47*/].f_27), "", 24);
		StringCopy(&(Global_1900598[iParam0 /*47*/].f_30), "", 128);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			StringCopy(&(Global_1900598[iParam0 /*47*/].f_5[iVar0 /*3*/]), "", 24);
			iVar0++;
		}
	}
}

bool func_196(var uParam0)
{
	return false;
}

void func_197(struct<47> Param0, int iParam47)
{
	struct<2> Var0;
	int iVar2;

	if (!func_370(Param0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_18)) || MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_21)))
	{
		return;
	}
	MISC::ACTIVITY_FEED_CREATE(&(Param0.f_18), &(Param0.f_21));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_2)))
	{
		MISC::ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(&(Param0.f_2));
	}
	if (Param0.f_46)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_24)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_5[0 /*3*/])))
		{
			MISC::ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(&(Param0.f_5[0 /*3*/]), &(Param0.f_24));
			Var0 = { func_371(PLAYER::PLAYER_ID()) };
			if (func_361(Var0))
			{
				MISC::_0xAF530E56505D1BD6(&Var0);
			}
		}
		iVar2 = 1;
		while (iVar2 <= 3)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_5[iVar2 /*3*/])))
			{
				MISC::ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(&(Param0.f_5[iVar2 /*3*/]));
			}
			iVar2++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_30)))
	{
		MISC::_0xFF252E2BAFB7330F(&(Param0.f_30));
	}
	MISC::ACTIVITY_FEED_POST();
	func_195(iParam47);
	Global_1901539[Param0]++;
}

void func_198(int iParam0)
{
	func_372(&(Global_1572887.f_300.f_1), func_215(iParam0), 3);
}

void func_199()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (func_91(iVar0))
		{
		}
		iVar0++;
	}
	if (Global_1572887.f_300.f_5 != -1)
	{
	}
	if (Global_1572887.f_300.f_10 != 0)
	{
	}
	if (Global_1572887.f_300.f_6 != -1)
	{
	}
	if (Global_1572887.f_300.f_7 != -1)
	{
	}
	if (Global_1572887.f_300.f_8 != -1)
	{
	}
	if (Global_1572887.f_300.f_16 != -1)
	{
	}
	if (Global_1572887.f_300.f_9 != 0)
	{
	}
	if (Global_1572887.f_300.f_15 != 0)
	{
	}
}

void func_200()
{
	Global_1572887.f_196.f_42 = MISC::GET_GAME_TIMER();
}

void func_201(int iParam0)
{
	Global_1572887.f_196.f_2 = iParam0;
}

void func_202(int iParam0)
{
	Global_1572887.f_196 = iParam0;
}

bool func_203()
{
	return Global_1572887.f_196.f_61 != -1;
}

void func_204(float fParam0)
{
	Global_1572887.f_300 = fParam0;
}

void func_205()
{
	char* sVar0;
	int iVar1;

	sVar0 = NETWORK::GET_LAUNCH_PARAM_VALUE(func_207(-137.3746f));
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	func_373(2, iVar1, -1, -1);
	func_374(12, 20);
	NETWORK::CLEAR_SERVICE_EVENT_ARGUMENTS();
}

int func_206()
{
	return (MISC::GET_GAME_TIMER() - vLocal_29.y);
}

char* func_207(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case joaat("MODE"):
			sVar0 = "mode";
			break;
		case joaat("STATE_ID"):
			sVar0 = "state_id";
			break;
		case joaat("DISTRICT_ID"):
			sVar0 = "district_id";
			break;
		case joaat("REGION_ID"):
			sVar0 = "region_id";
			break;
		case joaat("SERIES_ID"):
			sVar0 = "series_id";
			break;
		case joaat("MISSION_ID"):
			sVar0 = "mission_id";
			break;
		case joaat("ARG_0"):
			sVar0 = "arg_0";
			break;
		case joaat("ARG_1"):
			sVar0 = "arg_1";
			break;
		case joaat("ARG_2"):
			sVar0 = "arg_2";
			break;
		case joaat("ARG_3"):
			sVar0 = "arg_3";
			break;
		case joaat("ARG_4"):
			sVar0 = "arg_4";
			break;
		case joaat("ARG_5"):
			sVar0 = "arg_5";
			break;
		case joaat("ARG_6"):
			sVar0 = "arg_6";
			break;
		case joaat("ARG_7"):
			sVar0 = "arg_7";
			break;
		case joaat("ARG_8"):
			sVar0 = "arg_8";
			break;
		case joaat("ARG_9"):
			sVar0 = "arg_9";
			break;
		case joaat("LAUNCHPRESET"):
			sVar0 = "launchPreset";
			break;
		case joaat("LAUNCHGENDER"):
			sVar0 = "launchGender";
			break;
		case -1022795800:
			sVar0 = "nominated_content_id";
			break;
		case 156317380:
			sVar0 = "letter_id";
			break;
	}
	return sVar0;
}

void func_208(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_10 = 0;
	StringCopy(&(uParam0->f_11), "", 32);
	uParam0->f_16 = -1;
	uParam0->f_17 = -1;
	uParam0->f_9 = 0;
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 30;
		case joaat("REGION_BGV_OLD_MAN_JONES"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 31;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 32;
		case joaat("REGION_BLU_SISIKA"):
			return 33;
		case joaat("REGION_BLU_TRAVELLING_SALESMAN"):
			return 34;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 35;
		case joaat("REGION_CML_DINO_LADY"):
			return 36;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 37;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 38;
		case joaat("REGION_GRT_BEECHERS"):
			return 39;
		case joaat("REGION_GRT_BLACKWATER"):
			return 40;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 41;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 42;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 43;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 53;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 54;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 44;
		case joaat("REGION_GRZ_COHUTTA"):
			return 55;
		case joaat("REGION_GRZ_COLTER"):
			return 45;
		case joaat("REGION_GRZ_COTORRA_SPRINGS"):
			return 56;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 46;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 57;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 47;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 48;
		case joaat("REGION_GRZ_MOUNT_HAGEN_PEAK"):
			return 49;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 50;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 51;
		case joaat("REGION_GRZ_THELOFT"):
			return 58;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 59;
		case joaat("REGION_GRZ_WAPITI"):
			return 60;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 52;
		case joaat("REGION_GRZ_TRAVELLING_SALESMAN"):
			return 61;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 62;
		case joaat("REGION_GUA_CAMP"):
			return 63;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 64;
		case joaat("REGION_GUA_LACAPILLA"):
			return 65;
		case joaat("REGION_GUA_MANICATO"):
			return 66;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 67;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 69;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 70;
		case joaat("REGION_HRT_CROP_FARM"):
			return 71;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 72;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 73;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 74;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 75;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 76;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 77;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 78;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 79;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 80;
		case joaat("REGION_HRT_VALENTINE"):
			return 81;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 82;
		case joaat("REGION_ROA_ANNESBURG"):
			return 83;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 68;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 84;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 85;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 86;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 87;
		case joaat("REGION_ROA_DOVERHILL"):
			return 88;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 89;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 90;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 91;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 92;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 93;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 94;
		case joaat("REGION_ROA_TRAPPER"):
			return 95;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 97;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 98;
		case joaat("REGION_ROA_OLD_MAN_JONES"):
			return 96;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 99;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 100;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 101;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 102;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 103;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 104;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 107;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 108;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 109;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 105;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 106;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 110;
		case joaat("REGION_SCM_RHODES"):
			return 111;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 112;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 113;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 114;
		case joaat("REGION_TAL_COCHINAY"):
			return 115;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 116;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 117;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 118;
		case joaat("REGION_TAL_TRAPPER"):
			return 119;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 135;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 136;
		case joaat("REGION_HEN_TRAVELLING_SALESMAN"):
			return 137;
		case -1573562784:
			return 138;
		case joaat("REGION_CHO_ARMADILLO"):
			return 127;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 128;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 129;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 131;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 130;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 132;
		case joaat("REGION_CHO_TRAVELLING_SALESMAN"):
			return 133;
		case 1869665995:
			return 134;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 120;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 121;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 122;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 123;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 124;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 125;
		case joaat("REGION_RIO_TRAVELLING_SALESMAN"):
			return 126;
		case joaat("REGION_CENTRALUNIONRR"):
			return 139;
		default:
			break;
	}
	return -1;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISTRICT_BAYOU_NWA"):
			return 0;
		case joaat("DISTRICT_BIG_VALLEY"):
			return 1;
		case joaat("DISTRICT_BLUEGILL_MARSH"):
			return 2;
		case joaat("DISTRICT_CUMBERLAND_FOREST"):
			return 3;
		case joaat("DISTRICT_GREAT_PLAINS"):
			return 4;
		case joaat("DISTRICT_GRIZZLIES"):
			return 5;
		case joaat("DISTRICT_GRIZZLIES_EAST"):
			return 6;
		case joaat("DISTRICT_GRIZZLIES_WEST"):
			return 7;
		case joaat("DISTRICT_GUAMA"):
			return 8;
		case joaat("DISTRICT_HEARTLAND"):
			return 9;
		case joaat("DISTRICT_ROANOKE_RIDGE"):
			return 10;
		case joaat("DISTRICT_SCARLETT_MEADOWS"):
			return 11;
		case joaat("DISTRICT_TALL_TREES"):
			return 12;
		case joaat("DISTRICT_GAPTOOTH_RIDGE"):
			return 13;
		case joaat("DISTRICT_RIO_BRAVO"):
			return 14;
		case joaat("DISTRICT_CHOLLA_SPRINGS"):
			return 15;
		case joaat("DISTRICT_HENNIGANS_STEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMBARINO"):
			return 0;
		case joaat("LEMOYNE"):
			return 1;
		case joaat("NEWAUSTIN"):
			return 2;
		case joaat("NEWHANOVER"):
			return 3;
		case joaat("WESTELIZABETH"):
			return 4;
		case joaat("GUARMA"):
			return 5;
		default:
			break;
	}
	return -1;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NET_PLAYLIST_RACE_SERIES"):
			return 0;
		case joaat("NET_PLAYLIST_FEATURED_SERIES_001"):
			return 1;
		case joaat("NET_PLAYLIST_ADVERSARY_SMALL"):
			return 2;
		case joaat("NET_PLAYLIST_ADVERSARY_MEDIUM"):
			return 3;
		case joaat("NET_PLAYLIST_ADVERSARY_LARGE"):
			return 4;
		case joaat("NET_PLAYLIST_GUN_RUSH_TEAMS"):
			return 5;
		case joaat("NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL"):
			return 6;
		case joaat("NET_PLAYLIST_ELIMINATION_SMALL"):
			return 7;
		case joaat("NET_PLAYLIST_ELIMINATION_MEDIUM"):
			return 8;
		case joaat("NET_PLAYLIST_ELIMINATION_LARGE"):
			return 9;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES"):
			return 10;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_SMALL"):
			return 11;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_MEDIUM"):
			return 12;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_LARGE"):
			return 13;
		case joaat("NET_PLAYLIST_PRIVATE_SERIES"):
			return 14;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_1"):
			return 15;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_2"):
			return 16;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_3"):
			return 17;
		case joaat("NET_PLAYLIST_SHOOTOUT"):
			return 18;
		case joaat("NET_PLAYLIST_CAPTURE"):
			return 19;
		case -1516590035:
			return 20;
		default:
			break;
	}
	return -1;
}

void func_213(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_375(iParam0, iParam1);
	}
	func_67(4);
	func_68();
	func_24(1);
}

void func_214(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	sVar0 = func_207(iParam0);
	if (!NETWORK::_GET_LAUNCH_PARAM_EXISTS(sVar0))
	{
		return;
	}
	sVar1 = NETWORK::GET_LAUNCH_PARAM_VALUE(sVar0);
	iVar2 = MISC::GET_HASH_KEY(sVar1);
	if (iVar2 == 0)
	{
		return;
	}
	func_198(iVar2);
}

int func_215(int iParam0)
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

bool func_216(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

void func_217(var uParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".x", 64);
	SAVE::_SAVEGAME_GET_FLOAT(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".y", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".z", 64);
	SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_2), &cVar0);
}

void func_218(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 10, "psna_sCamp");
	SAVE::_0x443174C20B8B9E7F(uParam0, 3, "psna_sCampLocation");
	SAVE::_SAVEGAME_GET_INT_2(uParam0, "psna_sCampiSize");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_1), "psna_sCampeDistrict");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_2), "psna_sCampeLocation");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_3), 7, "psna_sCampRecharge");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_3), "psna_sCampRechargeYear");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_3.f_1), "psna_sCampRechargeMonth");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_3.f_2), "psna_sCampRechargeDay");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_3.f_3), "psna_sCampRechargeHour");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_3.f_4), "psna_sCampRechargeMinute");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_3.f_5), "psna_sCampRechargeSecond");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_3.f_6), "psna_sCampRechargeMilliseconds");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xE0B45E983BFC0768();
}

void func_219(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char cVar9[64];
	struct<8> Var17;
	struct<8> Var25;

	SAVE::_0x443174C20B8B9E7F(uParam0, 47, "psna_sPosse");
	SAVE::_SAVEGAME_GET_TEXT_LABEL_31(uParam0, "psna_sPosse_txtGamertag");
	SAVE::_SAVEGAME_GET_INT(&(uParam0->f_4), "psna_sPosse_iLastPosseID");
	SAVE::_SAVEGAME_GET_BOOL(&(uParam0->f_5), "psna_sPosse_bPreferOpen");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_6), 41, "psna_sPosse_sPosseDataArray");
	StringCopy(&cVar9, "psna_sPosse_data_", 64);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Var1 = { cVar9 };
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_6[iVar0 /*8*/]), 8, &Var1);
		Var17 = { Var1 };
		StringConCat(&Var17, "_iPosseID", 64);
		SAVE::_SAVEGAME_GET_INT(&(uParam0->f_6[iVar0 /*8*/]), &Var17);
		Var17 = { Var1 };
		StringConCat(&Var17, "_sPosseLock", 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_6[iVar0 /*8*/].f_1), 7, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Year", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_6[iVar0 /*8*/].f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Month", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_6[iVar0 /*8*/].f_1.f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Day", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_6[iVar0 /*8*/].f_1.f_2), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Hour", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_6[iVar0 /*8*/].f_1.f_3), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Minute", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_6[iVar0 /*8*/].f_1.f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Second", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_6[iVar0 /*8*/].f_1.f_5), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Milliseconds", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_6[iVar0 /*8*/].f_1.f_6), &Var25);
		SAVE::_0xE0B45E983BFC0768();
		SAVE::_0xE0B45E983BFC0768();
		StringCopy(&Var17, "", 64);
		StringCopy(&Var25, "", 64);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_220(var uParam0)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 603, "nssd_sStable_Data");
	func_376(uParam0);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_41), 561, "nssd_sStableBonding_array");
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		StringCopy(&cVar1, "nssd_sStableBonding_array_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_377(&(uParam0->f_41[iVar0 /*56*/]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_602), "nssd_eSavedSystemFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_221(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char cVar9[64];

	StringCopy(&cVar9, "psna_sClothes", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1792, &cVar9);
	Var1 = { cVar9 };
	StringConCat(&Var1, "PortableWardrobe", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 33, &Var1);
	func_378(uParam0, Var1);
	SAVE::_0xE0B45E983BFC0768();
	StringCopy(&Var1, "psna_sClothes_OutfitList", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_33), 1321, &Var1);
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		func_379(&(uParam0->f_33[iVar0 /*120*/]), Var1, iVar0);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&Var1, "psna_sClothes_HeadOverlay", 64);
	func_380(&(uParam0->f_1354), Var1);
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_1734), "psna_sClothes_SystemFlags");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_1735), "psna_sClothes_PlayerType");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1736), 40, "psna_sClothes_fExpressions");
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Var1 = { cVar9 };
		StringConCat(&Var1, "_fExpression", 64);
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_1736[iVar0]), &Var1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_1776), "psna_sClothes_fEyeRedness");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1777), "psna_sClothes_iCurOutfit");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1778), "psna_sClothes_iWhistleStyle");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1779), "psna_sClothes_iWhistlePitch");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1780), "psna_sClothes_iWhistleClarity");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1781), "psna_sClothes_iDeathsWithPomade");
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_1782), "psna_sClothes_ePomadeLifetime");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1783), "psna_sClothes_iPreferredWalkStyle");
	SAVE::_SAVEGAME_GET_TEXT_LABEL_63(&(uParam0->f_1784), "psna_sClothes_tlPlayerSaveName");
	SAVE::_0xE0B45E983BFC0768();
}

void func_222(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char cVar9[64];

	StringCopy(&cVar9, "psna_sAbandonedLoot", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 3, &cVar9);
	SAVE::_0x81F4E92BE3958364(uParam0, 3, &Var1);
	Var1 = { cVar9 };
	StringIntConCat(&Var1, iVar0, 64);
	func_381(uParam0[0 /*2*/], Var1);
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_223(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	struct<8> Var10;
	char cVar18[64];

	StringCopy(&cVar18, "psna_sRpg", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 42, &cVar18);
	StringConCat(&cVar18, "psna_sAttributeData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 24, &cVar18);
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Var2 = { cVar18 };
		StringIntConCat(&Var2, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0], 1, &Var2);
		StringConCat(&Var2, "fAttributeXP", 64);
		SAVE::_SAVEGAME_GET_FLOAT(uParam0[iVar0], &Var2);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar18, "psna_sRpg", 64);
	StringConCat(&cVar18, "psna_sAttributeCoreData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_24), 10, &cVar18);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Var2 = { cVar18 };
		StringIntConCat(&Var2, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_24[iVar0 /*3*/]), 3, &Var2);
		Var10 = { Var2 };
		StringConCat(&Var10, "fCoreValue", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_24[iVar0 /*3*/]), &Var10);
		Var10 = { Var2 };
		StringConCat(&Var10, "todDegradeLastFixed", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_24[iVar0 /*3*/].f_1), &Var10);
		Var10 = { Var2 };
		StringConCat(&Var10, "iDegradeCount", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_24[iVar0 /*3*/].f_2), &Var10);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar18, "psna_sRpg", 64);
	StringConCat(&cVar18, "psna_sAttributeOverpoweredTime", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_34), 7, &cVar18);
	iVar1 = 0;
	while (iVar1 < uParam0->f_34)
	{
		Var2 = { cVar18 };
		StringIntConCat(&Var2, iVar1, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_34[iVar1 /*2*/]), 2, &Var2);
		Var10 = { Var2 };
		StringConCat(&Var10, "fTankTime", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_34[iVar1 /*2*/]), &Var10);
		Var10 = { Var2 };
		StringConCat(&Var10, "fCoreTime", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_34[iVar1 /*2*/].f_1), &Var10);
		SAVE::_0xE0B45E983BFC0768();
		iVar1++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar18, "psna_sRpg", 64);
	StringConCat(&cVar18, "iTimesEatenFood", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_41), &cVar18);
	SAVE::_0xE0B45E983BFC0768();
}

void func_224(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	int iVar16;

	StringCopy(&cVar0, "essd_emotes", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 29, &cVar0);
	StringConCat(&cVar0, ".sArr", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 29, &cVar0);
	iVar16 = 0;
	while (iVar16 <= (4 - 1))
	{
		Var8 = { cVar0 };
		StringConCat(&Var8, ".sCat", 64);
		StringIntConCat(&Var8, iVar16, 64);
		func_382(uParam0[iVar16 /*7*/], Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_225(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		DATAFILE::_PARSEDDATA_REGISTER_QUERY(*bParam0, iVar0, func_383(iVar0));
		iVar0++;
	}
}

int func_226(bool bParam0, int iParam1)
{
	int iVar0;

	bParam0->f_2 = iParam1;
	iVar0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
	return iVar0;
}

bool func_227(bool bParam0, int iParam1)
{
	bool bVar0;

	bParam0->f_2 = iParam1;
	bVar0 = DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_228(bool bParam0, int iParam1, char* sParam2)
{
	bool bVar0;

	bParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam2, bParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_229(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(bParam2, bParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_230(var uParam0, int iParam1)
{
	uParam0->f_4 = (uParam0->f_4 || iParam1);
}

int func_231(bool bParam0, int iParam1, int* iParam2)
{
	bool bVar0;

	bParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam2, bParam0);
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_232(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_3 & 32 != 0;
	}
	return func_384(32, iParam0);
}

bool func_233(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_234(int iParam0)
{
	return func_345(1, iParam0);
}

bool func_235(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_236()
{
	return func_385() != -1;
}

int func_237(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1295619.f_5;
	}
	return Global_263042[iParam0 /*65*/];
}

bool func_238(int iParam0, int iParam1)
{
	return (Global_263042[iParam0 /*65*/].f_63 && iParam1) != 0;
}

bool func_239(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_240(var uParam0)
{
	func_386(uParam0, 0f);
}

bool func_241(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_242(var uParam0)
{
	return func_241(*uParam0, 2);
}

float func_243()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_244(int iParam0)
{
	struct<17> Var0;
	int iVar17;
	struct<17> Var18;
	char* sVar35;
	struct<55> Var36;
	struct<4> Var91;
	int iVar102;
	int iVar103;
	int iVar104;
	char* sVar105;
	char* sVar106;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 17))
	{
		return;
	}
	if (func_11() != -1)
	{
		if (!func_12())
		{
			func_255(2);
			return;
		}
		if (Global_1072759.f_28761)
		{
			func_255(2);
			return;
		}
	}
	iVar17 = NETWORK::_0x27B1AE4D8C652F08(Var0.f_10);
	if (iVar17 == -1)
	{
		return;
	}
	if (func_387())
	{
		Var18 = { func_296() };
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var18, &Var0))
		{
			return;
		}
	}
	if (func_268(Var0, 131072))
	{
		func_388(Var0.f_10);
		func_201(0);
		func_255(8);
		func_389(0);
	}
	if ((func_268(Var0, 2048) && func_268(Var0, 32)) || func_390(255))
	{
		if (func_391())
		{
			Global_1572887.f_196.f_63 = 1;
		}
	}
	if (func_11() != -1)
	{
		if (func_392(Var0, 1))
		{
			return;
		}
	}
	sVar35 = func_266(NETWORK::_0xE59F4924BD3A718D(iVar17), 4.279651E-16f);
	Var36 = 1;
	Var36.f_1 = 1;
	Var36.f_2 = 27.64779f;
	Var36.f_4 = -1;
	Var36.f_5 = -1;
	Var36.f_6 = -1;
	Var36.f_10 = -1;
	Var36.f_11 = -1;
	Var36.f_12 = -1;
	Var36.f_18 = 27.64779f;
	Var36.f_19 = 27.64779f;
	Var36.f_25 = 300;
	Var36.f_33.f_8 = 27.64779f;
	Var36.f_33.f_11 = 27.64779f;
	Var36.f_33.f_12 = 8000;
	Var36.f_33.f_13 = 1.051843E+16f;
	Var36.f_33.f_15 = 1.608566E+13f;
	Var36.f_33.f_21 = 1;
	Var36.f_26 = 1;
	Var36.f_27 = Var0.f_10;
	Var36.f_16 = sVar35;
	Var36.f_20 = 6.522135E+22f;
	Var36.f_21 = 1.749576E+13f;
	Var36.f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
	Var36.f_31 = "IB_GAMERCARD";
	Var36.f_30 = 2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_12)))
	{
		Var91.f_1 = -1;
		Var91.f_2 = -1;
		Var91.f_3 = -1;
		Var91.f_3.f_1 = -1;
		NETWORK::_0xC0CFFDA87C2C163D(iVar17, &Var91, 11);
		if (Var91 == 3)
		{
			iVar102 = func_393(Var91.f_3);
			Var36.f_17 = MISC::VAR_STRING(10, "NT_INV_RCV_BODY_INFO", func_395(func_394(iVar102)));
			Var36.f_33.f_3 = MISC::VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", func_395(func_394(iVar102)));
			Var36.f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			Var36.f_17 = MISC::VAR_STRING(42, "NT_INV_BODY_INFO", func_266(&(Var0.f_2), 4.808429E-35f), "LANDING_FREEROAM_TITLE");
			Var36.f_33.f_3 = MISC::VAR_STRING(2, "NT_INV_FM_CONTENT");
			Var36.f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
	}
	else if (func_11() != -1)
	{
		iVar103 = func_95(MISC::GET_HASH_KEY(&(Var0.f_12)));
		if (iVar103 != -1)
		{
			iVar104 = Global_265213.f_4[iVar103 /*46*/].f_24;
			if (iVar104 == -5.544348E+20f)
			{
				sVar106 = func_396(Global_265213.f_4[iVar103 /*46*/].f_26);
			}
			else if (iVar104 == 9.256025E-25f)
			{
				sVar106 = func_397(Global_265213.f_4[iVar103 /*46*/].f_26);
			}
			else if (iVar104 == -218565.1f)
			{
				sVar106 = func_398(Global_265213.f_4[iVar103 /*46*/].f_26);
			}
			Var36.f_33.f_3 = MISC::VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", sVar106);
			sVar105 = MISC::VAR_STRING(2, sVar106);
			Var36.f_17 = MISC::VAR_STRING(10, "NT_INV_RCV_BODY_INFO", sVar105);
		}
	}
	else
	{
		Var36.f_17 = MISC::VAR_STRING(42, "NT_INV_BODY_INFO", func_266(&(Var0.f_2), 4.808429E-35f), "PRES_SET_MODE_MP");
		Var36.f_33.f_3 = MISC::VAR_STRING(2, "NT_INV_MP_PLAYER_JOIN");
	}
	Var36.f_33.f_2 = sVar35;
	Var36.f_33.f_6 = 6.522135E+22f;
	Var36.f_33.f_7 = 1.749576E+13f;
	Var36.f_33.f_17 = "HUD_Toast_Soundset";
	Var36.f_33.f_18 = "Toast_On";
	Var36.f_25 = Global_1901671.f_2.f_23;
	Var36.f_24 = 1;
	func_364(Var36);
}

void func_245(int iParam0)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		return;
	}
	if (func_387())
	{
		if (Global_1572887.f_196 > 6)
		{
			func_399(&Var0);
			return;
		}
		else
		{
			if (Global_1572887.f_196.f_55 != 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1572887.f_196.f_55);
			}
			func_74();
			func_163();
		}
	}
	if (Global_1572887.f_196.f_1 == -1)
	{
		Global_1572887.f_196.f_1 = Var0.f_4;
	}
	if (func_11() != -1)
	{
		if (!func_12())
		{
			func_271(2);
			func_255(2);
			func_202(23);
			return;
		}
		if (Global_1072759.f_28761)
		{
			func_271(2.524355E-29f);
			func_255(2);
			func_202(23);
			return;
		}
	}
	func_399(&Var0);
	func_400(&Var0);
	func_201(4);
	func_389(0);
	func_164(1);
}

void func_246(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 2))
	{
		return;
	}
	func_401(1, iVar0);
	func_402(&iVar0);
}

void func_247(int iParam0)
{
	struct<4> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		return;
	}
	if (func_387() && !func_269(16384))
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		func_403(&Var0);
		return;
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		func_271(128);
		return;
	}
	if (func_11() != -1)
	{
		if (!func_12())
		{
			func_271(2);
			func_255(2);
			func_202(23);
			NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			return;
		}
		if (Global_1072759.f_28761)
		{
			func_271(2.524355E-29f);
			func_255(2);
			func_202(23);
			NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
			return;
		}
	}
	if (!func_301())
	{
		func_255(4);
		return;
	}
	Global_1572887.f_196.f_1 = Var0.f_2;
	func_403(&Var0);
	func_404(&Var0);
	if (func_405(Var0, 2))
	{
		func_201(3);
	}
	else
	{
		func_201(2);
	}
	func_284(16384);
	func_389(0);
}

void func_248(int iParam0)
{
	struct<6> Var0;
	struct<2> Var7;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		return;
	}
	if (Global_1572887.f_196.f_1 != -1 && Global_1572887.f_196.f_1 != Var0.f_4)
	{
		return;
	}
	Var7 = { func_371(PLAYER::PLAYER_ID()) };
	if (func_254(Var0.f_5, 2) || func_254(Var0.f_5, 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var7) && !func_387())
		{
			return;
		}
	}
	else if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_2), &Var7) && !func_387())
	{
		return;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var7) && Var0.f_6 == 4)
	{
		return;
	}
	if (Global_1572887.f_196.f_1 != -1 && Global_1572887.f_196.f_1 != Var0.f_4)
	{
		return;
	}
	if (func_254(Var0.f_6, 4194304))
	{
		if (func_406() >= 3 && func_406() <= 5)
		{
			func_281();
		}
		func_255(4);
		func_255(16384);
		func_202(23);
	}
	Global_1572887.f_196.f_58 = Var0.f_6;
	Global_1572887.f_196.f_48 = { Var0 };
	Global_1572887.f_196.f_50 = { Var0.f_2 };
	Global_1572887.f_196.f_59 = Var0.f_5;
}

void func_249()
{
	if (MISC::IS_ORBIS_VERSION())
	{
		Global_1572887.f_196.f_46 = NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();
	}
}

void func_250(int iParam0)
{
	vector3 vVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &vVar0, 6))
	{
		return;
	}
	func_271(65536);
	Global_1572887.f_196.f_56 = 3;
	Global_1572887.f_196.f_48 = { vVar0 };
	Global_1572887.f_196.f_50 = { vVar0.f_2 };
}

void func_251(int iParam0)
{
	struct<7> Var0;
	struct<2> Var7;
	bool bVar9;
	struct<2> Var10;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		return;
	}
	if (Global_1572887.f_196.f_1 != -1 && Global_1572887.f_196.f_1 != Var0.f_4)
	{
		return;
	}
	Var7 = { func_371(PLAYER::PLAYER_ID()) };
	bVar9 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var7);
	if (func_254(Var0.f_6, 8) && bVar9)
	{
		return;
	}
	func_407(&Var0);
	Global_1572887.f_196.f_56 = Var0.f_5;
	Global_1572887.f_196.f_57 = Global_1572887.f_196.f_56;
	Global_1572887.f_196.f_48 = { Var0 };
	Global_1572887.f_196.f_50 = { Var0.f_2 };
	Global_1572887.f_196.f_60 = Var0.f_6;
	if (func_269(128))
	{
		Var10 = { Var0 };
		func_403(&Var10);
		func_404(&Var10);
		if (func_254(Var0.f_6, 8))
		{
			func_201(3);
		}
		else
		{
			func_201(2);
		}
	}
	if (Global_1572887.f_196.f_56 > 2 && !func_252())
	{
		Global_1572887.f_196.f_56 = 0;
		Global_1572887.f_196.f_57 = 0;
	}
	else if (Global_1572887.f_196.f_56 == 2 && bVar9)
	{
		Global_1572887.f_196.f_56 = 0;
		Global_1572887.f_196.f_57 = 0;
	}
}

bool func_252()
{
	struct<2> Var0;
	bool bVar2;
	struct<2> Var3;
	bool bVar5;
	bool bVar6;
	struct<2> Var7;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;

	if (Global_1572887.f_196.f_44 != 0)
	{
		return true;
	}
	if (Global_1572887.f_196.f_46 != -1)
	{
		return true;
	}
	if (Global_1572887.f_196.f_56 > 2)
	{
		Var0 = { func_371(PLAYER::PLAYER_ID()) };
		bVar2 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_196.f_50), &Var0);
		Var3 = { func_371(GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10)) };
		bVar5 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_196.f_50), &Var3);
		bVar6 = (bVar2 || bVar5);
		if (Global_1572887.f_196.f_56 == 3)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 4)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 5)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 6)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 7)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 8)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 9)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 10)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 11)
		{
			return false;
		}
		if (Global_1572887.f_196.f_56 == 12)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 13)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 14)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 15)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 16)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 17)
		{
			return false;
		}
		if (Global_1572887.f_196.f_56 == 18)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 19)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 20)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 21)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 22)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 23)
		{
			return bVar6;
		}
		if (Global_1572887.f_196.f_56 == 24)
		{
			return bVar6;
		}
	}
	if (Global_1572887.f_196.f_58 != 0)
	{
		Var7 = { func_371(PLAYER::PLAYER_ID()) };
		bVar9 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_196.f_50), &Var7);
		bVar10 = false;
		if (Global_1572887.f_196 > 0)
		{
			bVar10 = true;
		}
		bVar11 = !func_254(Global_1572887.f_196.f_59, 524288);
		bVar12 = !func_254(Global_1572887.f_196.f_59, 2);
		bVar13 = func_254(Global_1572887.f_196.f_59, 2);
		bVar14 = func_254(Global_1572887.f_196.f_59, 1);
		bVar15 = MISC::IS_DURANGO_VERSION();
		bVar16 = (bVar9 && (bVar10 || bVar14));
		bVar17 = (bVar16 && !bVar15);
		bVar18 = ((bVar11 && bVar12) && !bVar9);
		if (func_254(Global_1572887.f_196.f_58, 1))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 2))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 4))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 32))
		{
			return (bVar16 || bVar18);
		}
		if (func_254(Global_1572887.f_196.f_58, 64))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 8))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 16))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 128))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 512))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 8388608))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 1024))
		{
			return bVar17;
		}
		if (func_254(Global_1572887.f_196.f_58, 2048))
		{
			return bVar17;
		}
		if (func_254(Global_1572887.f_196.f_58, 4096))
		{
			return (bVar18 || bVar18);
		}
		if (func_254(Global_1572887.f_196.f_58, 8192))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 16384))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 32768))
		{
			return (bVar16 || bVar18);
		}
		if (func_254(Global_1572887.f_196.f_58, 65536))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 262144))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 524288))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 2097152))
		{
			return bVar16;
		}
		if (func_254(Global_1572887.f_196.f_58, 4194304))
		{
			return false;
		}
		if (func_254(Global_1572887.f_196.f_58, 2.350989E-38f))
		{
			return false;
		}
		if (func_254(Global_1572887.f_196.f_58, 256))
		{
			return false;
		}
		if (func_254(Global_1572887.f_196.f_58, 1048576))
		{
			return (bVar16 && bVar13);
		}
		if (func_254(Global_1572887.f_196.f_58, 131072))
		{
			return false;
		}
	}
	return false;
}

void func_253(int iParam0)
{
	Global_1572887.f_196.f_54 = iParam0;
}

bool func_254(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_255(int iParam0)
{
	func_408(&(Global_1572887.f_196.f_43), iParam0);
}

void func_256()
{
	Global_1940072.f_105 = -1;
	Global_1940072.f_105.f_1 = 0;
}

bool func_257(int iParam0)
{
	return func_254(Global_1572887.f_196.f_44, iParam0);
}

void func_258(var uParam0)
{
}

char* func_259()
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;

	Var0 = { func_371(PLAYER::PLAYER_ID()) };
	bVar2 = false;
	bVar3 = false;
	if (((Global_1572887.f_196.f_2 == 3 || Global_1572887.f_196.f_2 == 1) || func_254(Global_1572887.f_196.f_59, 2)) || func_254(Global_1572887.f_196.f_60, 8))
	{
		bVar2 = true;
	}
	if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1572887.f_196.f_48)) && NETWORK::NETWORK_IS_HANDLE_VALID(&Var0))
	{
		bVar3 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_196.f_48), &Var0);
	}
	if (func_257(1))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET";
	}
	if (func_257(2))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";
	}
	if (func_257(4))
	{
		return "NT_INV_INCOMPATIBLE_LOBBY_LOAD_FAILURE";
	}
	if (func_257(4096))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(8192))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(1024))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(16384))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(65536))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(2048))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(32768))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(64))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_257(8))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(16))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(32))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(128))
	{
		return func_409(bVar2, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (func_257(256))
	{
		return func_409(bVar2, "NT_INV_LEAVE_WARNING_JIP", "NT_INV_LEAVE_WARNING");
	}
	if (func_257(512))
	{
		return func_409(bVar2, "NT_INV_LEAVE_WARNING_POSSE_JIP", "NT_INV_LEAVE_WARNING_POSSE");
	}
	if (func_257(131072))
	{
		return "MG_NO_MONEY_INV";
	}
	if (func_257(262144))
	{
		return "MG_ALERT_GANGLF";
	}
	if (func_257(524288))
	{
		return "MG_ALERT_GANGBR";
	}
	if (func_257(1048576))
	{
		return "MG_ALERT_BANNED2";
	}
	if (func_257(2097152))
	{
		return "MG_ALERT_CAPPED";
	}
	if (func_257(4194304))
	{
		return "MG_ALERT_CAPPED";
	}
	if (func_257(8388608))
	{
		return "MG_ALERT_CAPPED";
	}
	if (func_257(2.350989E-38f))
	{
		return "MG_ALERT_PRIV_CAP";
	}
	if (func_257(9.403955E-38f))
	{
		return "MG_ALERT_INV_MAINT";
	}
	if (func_257(1.504633E-36f))
	{
		return "MG_ALERT_WANTED";
	}
	if (func_257(3.85186E-34f))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_257(2.524355E-29f))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_RE_ROLL";
	}
	if (func_257(1.084202E-19f))
	{
		return "JAIL_ALT_BODY";
	}
	if (func_257(2f))
	{
		return "MG_ALERT_GANGLF";
	}
	if (func_254(Global_1572887.f_196.f_58, 1))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_LOCKED";
	}
	if (func_254(Global_1572887.f_196.f_58, 1024))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_PRIVILEGE";
	}
	if (func_254(Global_1572887.f_196.f_58, 2048))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE";
	}
	if (func_254(Global_1572887.f_196.f_58, 4096))
	{
		return "NT_INV_INCOMPATIBLE_COMMUNICATION_PRIVILEGE";
	}
	if (func_254(Global_1572887.f_196.f_58, 8192))
	{
		return "NT_INV_INCOMPATIBLE_INACTIVE_PRIVILEGE";
	}
	if (func_254(Global_1572887.f_196.f_58, 16384))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE_REMOTE";
	}
	if (func_254(Global_1572887.f_196.f_58, 512))
	{
		return "NT_INV_INCOMPATIBLE";
	}
	if (func_254(Global_1572887.f_196.f_58, 8388608))
	{
		return "NT_INV_INCOMPATIBLE_AIM";
	}
	if (func_254(Global_1572887.f_196.f_58, 2))
	{
		return "NT_INV_INCOMPATIBLE_LOCAL_NOT_IN_MULTIPLAYER";
	}
	if (func_254(Global_1572887.f_196.f_58, 4))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_254(Global_1572887.f_196.f_58, 8))
	{
		return "NT_INV_POLICIES_NEED_ACCEPTING";
	}
	if (func_254(Global_1572887.f_196.f_58, 16))
	{
		return "NT_INV_POLICIES_DOWNLOAD_FAILED";
	}
	if (func_254(Global_1572887.f_196.f_58, 32))
	{
		return func_409(bVar3, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (func_254(Global_1572887.f_196.f_58, 64))
	{
		return func_409(bVar2, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINING_PLAYER", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (func_254(Global_1572887.f_196.f_58, 128))
	{
		return "NT_INV_INCOMPATIBLE_JOIN_TO_LOCAL";
	}
	if (func_254(Global_1572887.f_196.f_58, 32768))
	{
		return func_409(bVar3, "NT_INV_INCOMPATIBLE_REP_TARGET", "NT_INV_INCOMPATIBLE_REP_JOINER");
	}
	if (func_254(Global_1572887.f_196.f_58, 65536))
	{
		return func_409(bVar2, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (func_254(Global_1572887.f_196.f_58, 262144))
	{
		return "NT_INV_INCOMPATIBLE_NOT_FRIENDS";
	}
	if (func_254(Global_1572887.f_196.f_58, 524288))
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (func_254(Global_1572887.f_196.f_58, 2097152))
	{
		return "NT_INV_INCOMPATIBLE_IN_PUBLIC_POKER";
	}
	if (func_254(Global_1572887.f_196.f_58, 4194304))
	{
	}
	if (func_254(Global_1572887.f_196.f_58, 2.350989E-38f))
	{
	}
	if (func_254(Global_1572887.f_196.f_58, 256))
	{
	}
	if (func_254(Global_1572887.f_196.f_58, 1048576))
	{
		return "NT_INV_INCOMPATIBLE_BLOCKED_BY_JOIN_TARGET";
	}
	if (func_254(Global_1572887.f_196.f_58, 131072))
	{
	}
	if (Global_1572887.f_196.f_56 == 3)
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT_RESULT";
	}
	if (Global_1572887.f_196.f_56 == 4)
	{
		return func_409(bVar2, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (Global_1572887.f_196.f_56 == 5)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887.f_196.f_56 == 6)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887.f_196.f_56 == 7)
	{
		return "NT_INV_INCOMPATIBLE_DISCRIMINATOR";
	}
	if (Global_1572887.f_196.f_56 == 8)
	{
		return "NT_INV_INCOMPATIBLE_INSTANCED";
	}
	if (Global_1572887.f_196.f_56 == 9)
	{
		return "NT_INV_INCOMPATIBLE_VALIDATION_INVITEE";
	}
	if (Global_1572887.f_196.f_56 == 10)
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (Global_1572887.f_196.f_56 == 11)
	{
	}
	if (Global_1572887.f_196.f_56 == 12)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_BLOCKED";
	}
	if (Global_1572887.f_196.f_56 == 13)
	{
		return "NT_INV_INCOMPATIBLE_JOIN_BLOCKED";
	}
	if (Global_1572887.f_196.f_56 == 14)
	{
		return "NT_INV_INCOMPATIBLE_HOST_INVITES_ONLY";
	}
	if (Global_1572887.f_196.f_56 == 15)
	{
		return "NT_INV_FAILED_SESSION_FULL";
	}
	if (Global_1572887.f_196.f_56 == 16)
	{
		return "NT_INV_FAILED_INVITER_CLEANED_UP";
	}
	if (Global_1572887.f_196.f_56 == 17)
	{
	}
	if (Global_1572887.f_196.f_56 == 18)
	{
		return "NT_INV_FAILED_NO_LONGER_IN_GANG";
	}
	if (Global_1572887.f_196.f_56 == 19)
	{
		return "NT_INV_FAILED_ADD_TO_GANG";
	}
	if (Global_1572887.f_196.f_56 == 20)
	{
		return "NT_INV_FAILED_GANG_CHANGED";
	}
	if (Global_1572887.f_196.f_56 == 21)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887.f_196.f_56 == 22)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887.f_196.f_56 == 23)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887.f_196.f_56 == 24)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887.f_196.f_46 == 0)
	{
		return "NT_INV_INCOMPATIBLE_REASON_OTHER";
	}
	if (Global_1572887.f_196.f_46 == 1)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SYSTEM_UPDATE";
	}
	if (Global_1572887.f_196.f_46 == 2)
	{
		return "NT_INV_INCOMPATIBLE_REASON_GAME_UPDATE";
	}
	if (Global_1572887.f_196.f_46 == 3)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SIGNED_OUT";
	}
	if (Global_1572887.f_196.f_46 == 4)
	{
		return "NT_INV_INCOMPATIBLE_AGE";
	}
	if (Global_1572887.f_196.f_46 == 5)
	{
		return "NT_INV_INCOMPATIBLE_REASON_CONNECTION";
	}
	return "NT_INV_FAILED_GENERIC";
}

int func_260()
{
	if (func_257(4096))
	{
		return 5.786121E-38f;
	}
	if (func_257(8192))
	{
		return 5.791726E-38f;
	}
	if (func_257(1024))
	{
		return 5.797331E-38f;
	}
	if (func_257(16384))
	{
		return 5.802936E-38f;
	}
	if (func_257(65536))
	{
		return 5.808541E-38f;
	}
	if (func_257(2048))
	{
		return 5.814147E-38f;
	}
	if (func_257(32768))
	{
		return 5.819752E-38f;
	}
	if (func_257(8))
	{
		return 5.825357E-38f;
	}
	if (func_257(16))
	{
		return 5.830962E-38f;
	}
	if (func_257(32))
	{
		return 5.836567E-38f;
	}
	if (func_257(131072))
	{
		return 5.898224E-38f;
	}
	if (func_257(262144))
	{
		return 5.90383E-38f;
	}
	if (func_257(524288))
	{
		return 5.909435E-38f;
	}
	if (func_257(1048576))
	{
		return 5.91504E-38f;
	}
	if (func_257(2097152))
	{
		return 5.920645E-38f;
	}
	if (func_257(4194304))
	{
		return 5.92625E-38f;
	}
	if (func_257(8388608))
	{
		return 5.931856E-38f;
	}
	if (func_257(2.350989E-38f))
	{
		return 5.937461E-38f;
	}
	if (func_257(9.403955E-38f))
	{
		return 5.943066E-38f;
	}
	if (func_257(1.504633E-36f))
	{
		return 5.948671E-38f;
	}
	if (func_257(3.85186E-34f))
	{
		return 5.954276E-38f;
	}
	if (func_257(2f))
	{
		return 5.959882E-38f;
	}
	return -1;
}

int func_261(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_262(bool bParam0)
{
	if (Global_1072759.f_28756.f_1 != SCRIPTS::GET_ID_OF_THIS_THREAD() && !bParam0)
	{
		return;
	}
	if (Global_1072759.f_28756.f_1 == 0)
	{
		return;
	}
	func_408(&(Global_1072759.f_28756.f_2), 2);
}

int func_263()
{
	return Global_1051645.f_12;
}

void func_264(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam0)
	{
		func_341(1);
		if (bParam1)
		{
			func_341(4);
		}
		else
		{
			func_306(4);
		}
		if (bParam3)
		{
			func_341(8);
		}
		else
		{
			func_306(8);
		}
		if (bParam4)
		{
			func_341(16);
		}
		else
		{
			func_306(16);
		}
	}
	else
	{
		func_341(2);
		if (bParam1)
		{
			func_341(4);
		}
		else
		{
			func_306(4);
		}
		if (bParam3)
		{
			func_341(8);
		}
		else
		{
			func_306(8);
		}
		if (bParam2)
		{
			func_341(128);
		}
		else
		{
			func_306(128);
		}
	}
}

bool func_265(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_410();
	}
	return func_384(64, iParam0);
}

char* func_266(bool bParam0, int iParam1)
{
	bParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(bParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", bParam0);
	}
	return func_411(MISC::VAR_STRING(10, "PLAYER_STRING", bParam0), iParam1);
}

int func_267(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = fParam2;
	Var13.f_5 = fParam3;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam9, bParam10);
	return iVar21;
}

bool func_268(struct<12> Param0, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17)
{
	return func_254(Param0.f_11, iParam17);
}

bool func_269(int iParam0)
{
	return func_254(Global_1572887.f_196.f_43, iParam0);
}

bool func_270()
{
	return (Global_1295611.f_2.f_1 == 2 || Global_1295611.f_2.f_1 == 1);
}

void func_271(int iParam0)
{
	func_408(&(Global_1572887.f_196.f_44), iParam0);
}

bool func_272()
{
	return Global_1900460.f_67;
}

bool func_273()
{
	return Global_263042[Global_1295619 /*65*/] > 2;
}

int func_274()
{
	return Global_1572887.f_196.f_2;
}

bool func_275(bool bParam0)
{
	struct<17> Var0;
	struct<11> Var17;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;

	Var17.f_1 = -1;
	Var17.f_2 = -1;
	Var17.f_3 = -1;
	Var17.f_3.f_1 = -1;
	if (bParam0)
	{
		Var17 = { func_412() };
		iVar28 = func_413();
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar28))
		{
			iVar29 = iVar28;
			if (func_414(iVar29))
			{
				func_408(&(Var17.f_10), 4);
			}
			else
			{
				func_415(&(Var17.f_10), 4);
			}
			Var17 = func_338(iVar29);
			Var17.f_1 = func_416(iVar29);
			Var17.f_2 = func_417(iVar29);
			Var17.f_3 = { func_418(iVar29) };
		}
	}
	else
	{
		Var0 = { func_296() };
		if (NETWORK::_0xD1FFB246F4E088AC(Var0.f_10))
		{
			NETWORK::_0xC0CFFDA87C2C163D(NETWORK::_0x27B1AE4D8C652F08(Var0.f_10), &Var17, 11);
		}
	}
	iVar30 = func_393(Var17.f_3);
	Global_1149157.f_143 = iVar30;
	if (Var17 == 3)
	{
		func_255(8192);
		iVar31 = func_419(iVar30);
		if (!iVar31 == 0)
		{
			if (iVar31 == 5)
			{
				func_271(262144);
			}
			else if (iVar31 == 8)
			{
				func_271(1048576);
			}
			else if (iVar31 == 9)
			{
				func_271(2097152);
			}
			else if (iVar31 == 10)
			{
				func_271(4194304);
			}
			else if (iVar31 == 11)
			{
				func_271(8388608);
			}
			else if (iVar31 == 12)
			{
				func_271(2.350989E-38f);
			}
			else if (iVar31 == 14)
			{
				func_271(9.403955E-38f);
			}
			else if (iVar31 == 15)
			{
				func_271(1.504633E-36f);
			}
			else if (iVar31 == 6)
			{
				func_271(131072);
			}
			else if (iVar31 == 7)
			{
				func_271(524288);
			}
			return false;
		}
	}
	return true;
}

bool func_276(bool bParam0)
{
	int iVar0;

	iVar0 = func_261(bParam0, Global_1901671.f_2.f_22, Global_1901671.f_2.f_21);
	return (MISC::GET_GAME_TIMER() - Global_1572887.f_196.f_42) > iVar0;
}

bool func_277()
{
	int iVar0;

	if (Global_1051194)
	{
		return false;
	}
	if (func_420(&iVar0))
	{
		func_421(3, 0, 1, 0, -1, 1, iVar0);
		return false;
	}
	return true;
}

void func_278(bool bParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_408(&(Global_1203937.f_3), 32);
		func_408(&(Global_1203937.f_4), 12);
		Global_1203937.f_478 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_408(&(Global_1203937.f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1203937.f_5[5] = 0;
		func_408(&(Global_1203937.f_5[5]), 1);
	}
	Global_1203937.f_5[3] = 0;
	func_408(&(Global_1203937.f_5[3]), 1);
	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		func_408(&(Global_1203937.f_5[3]), 6);
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
	{
		func_408(&(Global_1203937.f_5[3]), 6);
		return;
	}
	GANG::_NETWORK_LEAVE_GANG(bParam0);
}

void func_279()
{
	Global_1572887.f_196.f_62 = 0;
}

void func_280()
{
	Global_1072759.f_28644.f_109 = MISC::GET_GAME_TIMER();
}

void func_281()
{
	if (!Global_1102813.f_16)
	{
		return;
	}
	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
}

bool func_282()
{
	return Global_1072759.f_28644.f_66.f_42 != 0;
}

bool func_283()
{
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(func_423(func_422())))
	{
		return true;
	}
	return false;
}

void func_284(int iParam0)
{
	func_415(&(Global_1572887.f_196.f_43), iParam0);
}

void func_285(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1072759.f_28644.f_66.f_28 = 1;
		Global_1072759.f_28644.f_66.f_29 = iParam3;
		Global_1072759.f_28644.f_66.f_26 = iParam6;
		Global_1072759.f_28644.f_66.f_27 = iParam8;
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1072759.f_28644.f_66.f_8), 18);
		}
	}
	else
	{
		Global_1072759.f_28644.f_66.f_30 = 1;
		Global_1072759.f_28644.f_66.f_33 = !bParam1;
		Global_1072759.f_28644.f_66.f_31 = iParam2;
		Global_1072759.f_28644.f_66.f_32 = iParam4;
		Global_1072759.f_28644.f_66.f_35 = iParam5;
		if (MISC::IS_BIT_SET(Global_1072759.f_28644.f_66.f_8, 18))
		{
			MISC::CLEAR_BIT(&(Global_1072759.f_28644.f_66.f_8), 18);
		}
	}
}

void func_286(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_1940239 = 1;
		Global_1940239.f_1 = iParam1;
	}
	else
	{
		Global_1940239 = 2;
	}
}

bool func_287()
{
	return func_345(1, 255);
}

int func_288(int iParam0)
{
	if (func_372(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_289(int iParam0, int iParam1)
{
	if (!func_424(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_425();
	}
}

bool func_290()
{
	if (Global_1072759.f_28644.f_66.f_42 >= 9)
	{
		return true;
	}
	return false;
}

bool func_291()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_1072759.f_28644.f_109);
	if (iVar1 < Global_1901671.f_2.f_39)
	{
		return false;
	}
	return true;
}

void func_292(bool bParam0)
{
	if (func_426())
	{
		Global_1958670 = 1;
	}
	if (func_427(-3.294948E+35f))
	{
	}
	if (bParam0 && (Global_1940186.f_38 == -230.1699f || Global_1940186.f_38 == 5.402792E-27f))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		Global_1940186.f_38 = -3.273909E-18f;
	}
}

int func_293()
{
	return Global_1915643.f_20241;
}

void func_294(int iParam0, bool bParam1)
{
	if (!func_428(iParam0))
	{
		return;
	}
	if ((bParam1 && func_429(iParam0, 512)) || (!bParam1 && !func_429(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_430(iParam0, 512);
	}
	else
	{
		func_431(iParam0, 512);
	}
	if (func_310(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

void func_295()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PED::GET_MOUNT(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		TASK::TASK_DISMOUNT_ANIMAL(iVar0, 0, 0, 0, 0, 0);
	}
}

struct<17> func_296()
{
	return Global_1572887.f_196.f_13;
}

void func_297(var uParam0)
{
	Global_1572887.f_196.f_30 = { *uParam0 };
}

void func_298()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iVar0 /*20*/].f_5))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1206482.f_78[iVar0 /*20*/].f_5);
		}
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iVar0 /*20*/].f_4))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1206482.f_78[iVar0 /*20*/].f_4);
		}
		iVar0++;
	}
}

bool func_299()
{
	return (func_432() != 0 || func_433(1));
}

int func_300(int iParam0)
{
	if (func_434())
	{
		return 0;
	}
	if (!func_299())
	{
		return 0;
	}
	if (func_435())
	{
		func_436(2);
	}
	else
	{
		func_436(1);
	}
	func_437(iParam0);
	return 1;
}

bool func_301()
{
	var uVar0;

	if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return false;
	}
	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&uVar0))
	{
		return false;
	}
	return true;
}

void func_302()
{
	func_67(64);
	func_68();
	func_69(-14.49531f, -9.34309E-35f, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_24(3);
	CAM::DO_SCREEN_FADE_OUT(0);
}

bool func_303()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_4;
}

void func_304()
{
	switch (Global_1572887.f_196.f_2)
	{
		case 0:
		case 2:
		case 4:
			func_438(2);
			break;
		case 1:
		case 3:
		case 5:
			func_438(3);
			break;
	}
}

int func_305()
{
	int iVar0;

	if (func_276(1))
	{
		func_271(1024);
		return 2;
	}
	if (!func_12())
	{
		func_271(2);
		func_255(2);
		func_75(0);
		return 2;
	}
	if (Global_1072759.f_28761)
	{
		func_271(2.524355E-29f);
		func_255(2);
		return 2;
	}
	if (func_269(16384))
	{
		return 2;
	}
	iVar0 = func_439();
	return iVar0;
}

void func_306(int iParam0)
{
	if (func_340(iParam0))
	{
		func_440(&(Global_1072759.f_28644.f_23.f_1), iParam0);
	}
}

void func_307(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_441(iParam0);
	if (!func_442(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_443(128) && !func_444(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_445() == 4)
	{
		func_348(18);
	}
	func_446(1024);
}

bool func_308(int iParam0)
{
	return !func_234(iParam0);
}

void func_309(bool bParam0)
{
	if (!bParam0)
	{
		func_348(18);
	}
	else
	{
		func_288(18);
	}
}

bool func_310(int iParam0)
{
	if (func_447())
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_311(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (func_303())
	{
		if (func_448(255))
		{
			if (!func_345(39, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_449(Global_1893611.f_2) && func_450(Global_1893611.f_2))
		{
			func_451(Global_1893611.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1893611.f_7 = iParam1;
				func_452(16);
			}
		}
		else if (func_449(Global_1893611.f_2) && !func_453(Global_1893611.f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1893611.f_7 = 0;
		func_454(16);
		func_455(bParam2);
		if (bVar0)
		{
			func_454(1);
		}
	}
}

bool func_312(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2.003139E+37f && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_313()
{
	if (Global_1072759.f_28756.f_1 != 0)
	{
		return;
	}
	func_408(&(Global_1072759.f_28756.f_2), 1);
	Global_1072759.f_28756.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_314()
{
	return Global_1072759.f_28756 >= 3;
}

void func_315()
{
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(1) && func_456(524288))
	{
		return;
	}
	PED::_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	PED::_SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
}

int func_316(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (func_457() && !bParam3)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_73(0);
	}
	func_458();
	if (func_459(255, 0))
	{
		if (GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) != PLAYER::PLAYER_ID())
		{
			if (!bParam2 && bParam1)
			{
				func_278(1);
			}
		}
	}
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(0);
	}
	func_460();
	func_461(21);
	iVar0 = func_463(func_462(Global_1572887.f_72.f_9));
	Global_1572887.f_72.f_60.f_1 = func_261(iVar0 != 0, iVar0, Global_1572887.f_72.f_9);
	Global_1572887.f_72.f_60.f_2 = iParam0;
	Global_1572887.f_72.f_60.f_4 = (MISC::GET_GAME_TIMER() - Global_1572887.f_72.f_41);
	func_464();
	return 1;
}

void func_317()
{
	func_415(&(Global_1572887.f_8), 1);
	func_408(&(Global_1572887.f_8), 2f);
	func_465();
}

void func_318()
{
	int iVar0;

	iVar0 = MISC::GET_HASH_KEY("net_ugc_end_flow");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(iVar0);
	iVar0 = MISC::GET_HASH_KEY("mc_transition_results");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(iVar0);
	iVar0 = MISC::GET_HASH_KEY("mc_transition_cutscene");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(iVar0);
	iVar0 = MISC::GET_HASH_KEY("net_mc_vs_mission_intro");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(iVar0);
	iVar0 = MISC::GET_HASH_KEY("net_mission_intro_story_gvo");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(iVar0);
}

void func_319()
{
	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	func_255(4);
	func_202(23);
}

struct<4> func_320()
{
	return Global_1572887.f_196.f_3;
}

struct<6> func_321()
{
	return Global_1572887.f_196.f_7;
}

void func_322()
{
	if (!func_334())
	{
		func_466(Global_1295619.f_12);
	}
}

void func_323(int iParam0)
{
	Global_1572887.f_196.f_41 = iParam0;
}

bool func_324()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_3;
}

bool func_325()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_5;
}

int func_326()
{
	return Global_262155;
}

bool func_327()
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

void func_328(bool bParam0)
{
	if (!bParam0)
	{
		func_348(19);
	}
	else
	{
		func_288(19);
	}
}

int func_329()
{
	return Global_1572887.f_196.f_47;
}

bool func_330()
{
	return func_467(1024);
}

int func_331()
{
	struct<11> Var0;
	bool bVar11;
	int iVar12;
	int iVar13;

	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0 = { func_412() };
	bVar11 = NETWORK::NETWORK_SESSION_GET_SESSION_TYPE() == 4;
	iVar12 = func_413();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
	{
		iVar13 = iVar12;
		Var0.f_10 = func_468(iVar13);
		Var0 = func_338(iVar13);
		Var0.f_1 = func_416(iVar13);
		Var0.f_2 = func_417(iVar13);
		Var0.f_3 = { func_418(iVar13) };
		Var0.f_8 = func_469(iVar13);
		Var0.f_9 = func_470(iVar13);
	}
	if (!func_254(Var0.f_10, 1))
	{
		return 0;
	}
	if ((Var0 == 0 && Var0.f_1 == -1) && !func_471(Var0.f_3))
	{
		return 2;
	}
	if (!func_254(Var0.f_10, 4) && !bVar11)
	{
		return 2;
	}
	switch (Var0)
	{
		case 3:
			if (func_274() == 2)
			{
				if (!func_472())
				{
					return 0;
				}
			}
			if (!func_275(1))
			{
				func_255(4);
				func_255(4096);
				return 2;
			}
			if (!func_473(Var0.f_3))
			{
				return 0;
			}
			break;
		case 2:
			if (func_238(iVar12, 4096))
			{
				return 2;
			}
			break;
	}
	switch (func_274())
	{
		case 0:
		case 2:
			func_474(4);
			break;
		case 1:
		case 3:
		case 5:
			func_474(9);
			break;
		case 4:
			func_474(8);
			break;
	}
	func_475(Var0, Var0.f_1, Var0.f_3, Var0.f_2, Var0.f_8, Var0.f_9);
	return 1;
}

void func_332()
{
	Global_1572887.f_196.f_62 = 1;
}

void func_333(int iParam0)
{
	func_408(&(Global_1572887.f_72.f_15), iParam0);
}

bool func_334()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_269(256))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), false, false, true, true);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar1 = func_476(iVar0);
	iVar2 = func_477(iVar1);
	func_478(iVar2, 0);
	return true;
}

void func_335(bool bParam0)
{
	if (!bParam0)
	{
		func_348(25);
	}
	else
	{
		func_288(25);
	}
}

void func_336(bool bParam0)
{
	if (!bParam0)
	{
		func_348(20);
	}
	else
	{
		func_288(20);
	}
}

void func_337(int iParam0, bool bParam1)
{
	bool bVar0;

	if (func_479(GANG::NETWORK_GET_GANG_ID(iParam0)))
	{
		bVar0 = func_480(iParam0);
	}
	else
	{
		bVar0 = GANG::_NETWORK_REQUEST_GANG_JOIN(GANG::NETWORK_GET_GANG_ID(iParam0));
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			func_350(1);
		}
		else
		{
			func_481();
		}
	}
}

int func_338(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204;
}

bool func_339()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	vector3 vVar8;
	float fVar11;

	iVar0 = PLAYER::GET_PLAYER_PED(Global_1572887.f_196.f_41);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (func_234(255))
	{
		func_309(1);
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	vVar1.f_2 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(vVar1.x, vVar1.y);
	vVar4 = { vVar1 };
	vVar4.f_2 = (vVar4.z + 7f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar7, false))
	{
		vVar1.f_2 = uVar7;
	}
	fVar11 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	if (!func_482(&vVar8, &fVar11))
	{
		vVar8 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
	}
	func_309(0);
	func_328(0);
	func_483(vVar1, fVar11, vVar8, fVar11, 5f, 1101004800 /* Float: 20f */, 1, 1, 1, 1);
	return true;
}

bool func_340(int iParam0)
{
	return func_484(Global_1072759.f_28644.f_23.f_1, iParam0);
}

void func_341(int iParam0)
{
	func_485(&(Global_1072759.f_28644.f_23.f_1), iParam0);
}

bool func_342()
{
	if (func_329() != 2)
	{
		return false;
	}
	if (!func_12())
	{
		return false;
	}
	if (func_269(2048))
	{
		return true;
	}
	if (func_254(Global_1572887.f_196.f_45, 8.590068E+09f))
	{
		return false;
	}
	if (Global_1572887.f_196.f_57 != 2 && Global_1572887.f_196.f_45 == 0)
	{
		return false;
	}
	if (func_254(Global_1572887.f_196.f_58, 65536))
	{
		return false;
	}
	if (Global_1572887 != 39)
	{
		return false;
	}
	return true;
}

int func_343(int iParam0, int iParam1, int iParam2)
{
	if (Global_1572887.f_260.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887.f_196 >= 6 && Global_1572887.f_196 < 23)
	{
		return 0;
	}
	Global_1572887.f_260.f_4 = 2;
	Global_1572887.f_260.f_5 = (Global_1572887.f_260.f_5 || iParam1);
	Global_1572887.f_260.f_6 = iParam0;
	Global_1572887.f_260.f_20 = iParam2;
	Global_1572887.f_260.f_21 = 0;
	if (func_254(iParam1, 128))
	{
		func_415(&(Global_1572887.f_260.f_5), 2);
	}
	return 1;
}

void func_344(bool bParam0, bool bParam1)
{
	if (func_346(255) == 4)
	{
		return;
	}
	if (func_486(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_348(0);
	}
	else
	{
		if (bParam1)
		{
			func_307(0, 0, 0, 1);
		}
		func_288(0);
		func_487(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_488(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_489(Global_1102813.f_3839, 36);
	func_490(Global_1102813.f_3878, 36);
}

bool func_345(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_216(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_491())
	{
		return func_216(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_216(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

int func_346(int iParam0)
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

void func_347(bool bParam0)
{
	if (!bParam0)
	{
		func_348(23);
	}
	else
	{
		func_288(23);
	}
}

int func_348(int iParam0)
{
	if (func_492(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_349(int iParam0, int iParam1, bool bParam2)
{
	if (func_424(iParam0, iParam1) && (!bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_425();
	}
}

void func_350(bool bParam0)
{
	struct<4> Var0;

	if (func_467(1024))
	{
		func_493(1, 1);
		func_494(1024);
		if (bParam0)
		{
			Var0.f_2 = 0;
			Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
			Var0.f_3.f_3 = 0;
			Global_1203937.f_111.f_1 = func_495(&Var0, "NG_PP_JOIN_FAIL_TITLE", "NG_PP_JOIN_FAIL_SUBH", 0, 0, 1);
		}
	}
}

void func_351()
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<43> Var4;
	int iVar47;

	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Var4 = { Global_1940239.f_245.f_14[iVar0 /*43*/] };
		iVar1 = DATABINDING::DATABINDING_READ_INT(Var4.f_30);
		if (iVar1 != 1)
		{
		}
		else
		{
			iVar47 = NETWORK::_0x27B1AE4D8C652F08(DATABINDING::DATABINDING_READ_INT(Var4.f_31));
			if (!NETWORK::_0x16EFB123C4451032(iVar47, &uVar2))
			{
			}
			else if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uVar2))
			{
				func_496(Var4);
			}
		}
		iVar0++;
	}
}

void func_352()
{
	func_497(0);
}

bool func_353(var uParam0)
{
	return func_241(*uParam0, 1);
}

bool func_354(var uParam0)
{
	return func_241(*uParam0, 2);
}

int func_355(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_356(char* sParam0, int iParam1, int iParam2)
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
	iVar2 = func_498(iParam1, iParam2);
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
					iVar5 = func_499(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar5);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_500(iParam1, iParam2, 0);
						return 1;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1)))
					{
						func_500(iParam1, iParam2, 3);
					}
					else
					{
						func_500(iParam1, iParam2, 4);
					}
					func_501(iParam1, iParam2, iVar1);
					break;
				case 3:
					iVar1 = func_502(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_500(iParam1, iParam2, 0);
						return 1;
					}
					iVar6 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar6)
					{
						case 0:
							func_500(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_500(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_502(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_500(iParam1, iParam2, 0);
						return 1;
					}
					sVar7 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar7))
					{
						return 3;
					}
					func_500(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_502(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_500(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

int func_357()
{
	return Global_1149417.f_5087.f_325;
}

void func_358(int iParam0)
{
	struct<4> Var0;

	Var0.f_3 = 0;
	Var0.f_1 = 1;
	Var0 = 2;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Var0.f_2), iParam0);
	func_503(&Var0);
}

void func_359(var uParam0, bool bParam1)
{
	if (bParam1 || !func_353(uParam0))
	{
		func_504(uParam0);
	}
}

char* func_360(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_361(var uParam0, var uParam1)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

void func_362(bool bParam0, var uParam1, int iParam2, char* sParam3, bool bParam4)
{
	char* sVar0;
	bool bVar1;
	int iVar2;

	bVar1 = true;
	iVar2 = MISC::GET_HASH_KEY(sParam3);
	switch (iParam2)
	{
		case 17:
			func_52(MISC::VAR_STRING(42, "GF_FEUD_HELP_MEMBER_REQUEST_PLF", func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_43), 4.808429E-35f), func_505(bParam0->f_42, 1, 0)), Global_1901671.f_316.f_176, 0, 0, 0, 1);
			if (bParam4)
			{
				uParam1->f_20 = 6.522135E+22f;
				uParam1->f_21 = 1.749576E+13f;
				uParam1->f_33.f_6 = 6.522135E+22f;
				uParam1->f_33.f_7 = 1.749576E+13f;
				uParam1->f_33.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = iVar2;
				uParam1->f_21 = iVar2;
				uParam1->f_33.f_6 = iVar2;
				uParam1->f_33.f_7 = iVar2;
				uParam1->f_33.f_21 = 0;
			}
			uParam1->f_27.f_2 = bParam0->f_42;
			uParam1->f_27.f_1 = bParam0->f_43;
			uParam1->f_26 = 17;
			uParam1->f_16 = MISC::VAR_STRING(10, "GF_FEUD_REQUEST_TITLE", func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_43), 4.808429E-35f));
			uParam1->f_17 = MISC::VAR_STRING(10, "GF_FEUD_REQUEST_LEADER_BODY", func_505(bParam0->f_42, 1, 0));
			uParam1->f_25 = 120;
			uParam1->f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
			uParam1->f_31 = "IB_GAMERCARD";
			uParam1->f_30 = 4;
			uParam1->f_33.f_2 = func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_43), 4.808429E-35f);
			uParam1->f_33.f_3 = MISC::VAR_STRING(10, "GF_FEUD_TOAST_OPT_IN_TITLE", "GF_FEUD_POSSE_LEADER_FEUD");
			uParam1->f_33.f_17 = "HUD_Toast_Soundset";
			uParam1->f_33.f_18 = "Toast_On";
			uParam1->f_24 = 1;
			break;
		case 16:
			func_52(MISC::VAR_STRING(42, "GF_FEUD_HELP_MEMBER_REQUEST_PF", func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_43), 4.808429E-35f), func_505(bParam0->f_42, 1, 0)), Global_1901671.f_316.f_176, 0, 0, 0, 1);
			if (bParam4)
			{
				uParam1->f_20 = 6.522135E+22f;
				uParam1->f_21 = 1.749576E+13f;
				uParam1->f_33.f_6 = 6.522135E+22f;
				uParam1->f_33.f_7 = 1.749576E+13f;
				uParam1->f_33.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = iVar2;
				uParam1->f_21 = iVar2;
				uParam1->f_33.f_6 = iVar2;
				uParam1->f_33.f_7 = iVar2;
				uParam1->f_33.f_21 = 0;
			}
			uParam1->f_27.f_2 = bParam0->f_42;
			uParam1->f_27.f_1 = bParam0->f_43;
			uParam1->f_26 = 16;
			uParam1->f_16 = MISC::VAR_STRING(10, "GF_FEUD_REQUEST_TITLE", func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_43), 4.808429E-35f));
			uParam1->f_17 = MISC::VAR_STRING(10, "GF_FEUD_REQUEST_BODY", func_505(bParam0->f_42, 1, 0));
			uParam1->f_25 = 120;
			uParam1->f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
			uParam1->f_31 = "IB_GAMERCARD";
			uParam1->f_30 = 4;
			uParam1->f_33.f_2 = func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_43), 4.808429E-35f);
			uParam1->f_33.f_3 = MISC::VAR_STRING(10, "GF_FEUD_TOAST_OPT_IN_TITLE", "GF_FEUD_POSSE_FEUD");
			uParam1->f_33.f_17 = "HUD_Toast_Soundset";
			uParam1->f_33.f_18 = "Toast_On";
			uParam1->f_24 = 1;
			break;
		case 8:
			sVar0 = func_506(bParam0->f_12.f_11.f_4, &bVar1);
			if (bVar1)
			{
				if (bParam4)
				{
					uParam1->f_20 = 6.522135E+22f;
					uParam1->f_21 = 1.749576E+13f;
					uParam1->f_33.f_6 = 6.522135E+22f;
					uParam1->f_33.f_7 = 1.749576E+13f;
					uParam1->f_33.f_21 = 1;
				}
				else
				{
					uParam1->f_20 = iVar2;
					uParam1->f_21 = iVar2;
					uParam1->f_33.f_6 = iVar2;
					uParam1->f_33.f_7 = iVar2;
					uParam1->f_33.f_21 = 0;
				}
				uParam1->f_26 = 8;
				uParam1->f_27 = Global_1072759.f_23;
				uParam1->f_27.f_1 = bParam0->f_43;
				uParam1->f_27.f_2 = bParam0->f_42;
				uParam1->f_16 = MISC::VAR_STRING(2, sVar0);
				uParam1->f_17 = func_508(MISC::VAR_STRING(10, "CHALLENGE_NOTICE_SUB_INFO", func_507(bParam0->f_43)), 4.808429E-35f);
				uParam1->f_25 = (Global_1901671.f_316.f_177 / 1000);
				uParam1->f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
				uParam1->f_31 = "IB_GAMERCARD";
				uParam1->f_30 = 4;
				uParam1->f_33.f_2 = func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_43), 4.808429E-35f);
				uParam1->f_33.f_3 = MISC::VAR_STRING(2, func_510(func_509(bParam0->f_12)));
				uParam1->f_33.f_17 = "HUD_Toast_Soundset";
				uParam1->f_33.f_18 = "Toast_On";
				uParam1->f_24 = 1;
			}
			break;
		case 20:
			if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(bParam0->f_44)) == 1)
			{
				func_52(MISC::VAR_STRING(10, "PARLEY_HELP_REQUESTED_SOLO", func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_43), 4.808429E-35f)), 10000, 0, 0, 0, 1);
			}
			else
			{
				func_52(MISC::VAR_STRING(10, "PARLEY_HELP_REQUESTED", func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_43), 4.808429E-35f)), 10000, 0, 0, 0, 1);
			}
			if (bParam4)
			{
				uParam1->f_20 = 6.522135E+22f;
				uParam1->f_21 = 1.749576E+13f;
				uParam1->f_33.f_6 = 6.522135E+22f;
				uParam1->f_33.f_7 = 1.749576E+13f;
				uParam1->f_33.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = iVar2;
				uParam1->f_21 = iVar2;
				uParam1->f_33.f_6 = iVar2;
				uParam1->f_33.f_7 = iVar2;
				uParam1->f_33.f_21 = 0;
			}
			uParam1->f_27 = bParam0->f_43;
			uParam1->f_27.f_1 = bParam0->f_44;
			uParam1->f_26 = 20;
			uParam1->f_16 = MISC::VAR_STRING(10, "PARLEY_REQUEST_TITLE", func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_43), 4.808429E-35f));
			if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(bParam0->f_44)) > 1)
			{
				uParam1->f_17 = MISC::VAR_STRING(10, "PARLEY_REQUEST_BODY_GANG", func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_44), 4.808429E-35f));
			}
			else
			{
				uParam1->f_17 = MISC::VAR_STRING(10, "PARLEY_REQUEST_BODY", func_266(PLAYER::GET_PLAYER_NAME(bParam0->f_44), 4.808429E-35f));
			}
			uParam1->f_25 = 120;
			uParam1->f_33.f_2 = MISC::VAR_STRING(2, "PARLEY_TOAST_OPT_IN");
			uParam1->f_33.f_3 = MISC::VAR_STRING(2, "PARLEY_TOAST_OPT_IN_BODY");
			uParam1->f_33.f_17 = "HUD_Toast_Soundset";
			uParam1->f_33.f_18 = "Toast_On";
			uParam1->f_24 = 1;
			break;
	}
}

void func_363(bool bParam0, var uParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	struct<4> Var3;
	int iVar14;
	int iVar15;
	int iVar16;
	char* sVar17;

	iVar0 = NETWORK::_0x27B1AE4D8C652F08(bParam0->f_11);
	sVar1 = func_266(NETWORK::_0xE59F4924BD3A718D(iVar0), 4.279651E-16f);
	iVar2 = MISC::GET_HASH_KEY(sParam2);
	uParam1->f_26 = 1;
	uParam1->f_27 = bParam0->f_11;
	uParam1->f_16 = sVar1;
	uParam1->f_32 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
	uParam1->f_31 = "IB_GAMERCARD";
	uParam1->f_30 = 2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(bParam0->f_8)))
	{
		Var3.f_1 = -1;
		Var3.f_2 = -1;
		Var3.f_3 = -1;
		Var3.f_3.f_1 = -1;
		NETWORK::_0xC0CFFDA87C2C163D(iVar0, &Var3, 11);
		if (Var3 == 3)
		{
			iVar14 = func_393(Var3.f_3);
			uParam1->f_17 = MISC::VAR_STRING(10, "NT_INV_RCV_BODY_INFO", func_395(func_394(iVar14)));
			uParam1->f_33.f_3 = MISC::VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", func_395(func_394(iVar14)));
			uParam1->f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam1->f_17 = MISC::VAR_STRING(42, "NT_INV_BODY_INFO", func_266(bParam0, 4.808429E-35f), "LANDING_FREEROAM_TITLE");
			uParam1->f_33.f_3 = MISC::VAR_STRING(2, "NT_INV_FM_CONTENT");
			uParam1->f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
	}
	else if (func_11() != -1)
	{
		iVar15 = func_95(MISC::GET_HASH_KEY(&(bParam0->f_8)));
		if (iVar15 != -1)
		{
			iVar16 = Global_265213.f_4[iVar15 /*46*/].f_24;
			if (iVar16 == -5.544348E+20f)
			{
				sVar17 = MISC::VAR_STRING(2, func_396(Global_265213.f_4[iVar15 /*46*/].f_26));
			}
			else if (iVar16 == 9.256025E-25f)
			{
				sVar17 = MISC::VAR_STRING(2, func_397(Global_265213.f_4[iVar15 /*46*/].f_26));
			}
			else if (iVar16 == -218565.1f)
			{
				sVar17 = MISC::VAR_STRING(2, func_398(Global_265213.f_4[iVar15 /*46*/].f_26));
			}
			uParam1->f_17 = MISC::VAR_STRING(10, "NT_INV_RCV_BODY_INFO", sVar17);
			uParam1->f_33.f_3 = MISC::VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", sVar17);
			uParam1->f_33.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
	}
	uParam1->f_33.f_2 = sVar1;
	uParam1->f_33.f_17 = "HUD_Toast_Soundset";
	uParam1->f_33.f_18 = "Toast_On";
	uParam1->f_25 = Global_1901671.f_2.f_23;
	uParam1->f_24 = 1;
	if (bParam3)
	{
		uParam1->f_20 = 6.522135E+22f;
		uParam1->f_21 = 1.749576E+13f;
		uParam1->f_33.f_6 = 6.522135E+22f;
		uParam1->f_33.f_7 = 1.749576E+13f;
		uParam1->f_33.f_21 = 1;
	}
	else
	{
		uParam1->f_20 = iVar2;
		uParam1->f_21 = iVar2;
		uParam1->f_33.f_6 = iVar2;
		uParam1->f_33.f_7 = iVar2;
		uParam1->f_33.f_21 = 0;
	}
}

var func_364(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_511();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_25);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1940239.f_245.f_1308++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940239.f_245.f_1308, 64);
	func_512(&(Global_1940239.f_245.f_14[iVar0 /*43*/]), Global_1940239.f_245.f_4, cVar3, Param0);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_39 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(88), Global_1940239.f_245.f_1308);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_41 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(89), true);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_42 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(90), false);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(78), Param0.f_32);
	if (Param0.f_32)
	{
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(76), Param0.f_31);
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(79), Param0.f_30);
	}
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(91), Param0.f_26);
	bVar15 = false;
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940239.f_245.f_14[iVar0 /*43*/], 1.46912E-13f, bVar15);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(53), Param0.f_27);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(54), Param0.f_27.f_1);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(92), Param0.f_27.f_2);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(93), iVar2);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(94), Param0.f_24);
	func_513(Global_1940239.f_245.f_1306 + 1);
	if (Global_1940239.f_245.f_1308 == NaNf)
	{
		Global_1940239.f_245.f_1308 = 0;
	}
	if (func_514(Param0.f_26))
	{
		Param0.f_33 = 5;
		Param0.f_33.f_1 = 1;
		Param0.f_33.f_13 = 5.395881E-11f;
		Param0.f_33.f_14 = Global_1940239.f_245.f_14[iVar0 /*43*/];
		iVar16 = func_515(&(Param0.f_33));
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_40 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_365(95), iVar16);
	}
	iVar17 = func_516();
	if (iVar17 == 0 || Param0.f_24 == iVar17)
	{
		Global_1940239.f_245.f_1307++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_245.f_5, 0, "pm_invite_item", Global_1940239.f_245.f_14[iVar0 /*43*/]);
	}
	return Global_1940239.f_245.f_14[iVar0 /*43*/];
}

char* func_365(int iParam0)
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

void func_366(bool bParam0, var uParam1)
{
	switch (bParam0->f_58)
	{
		case 8:
		case 16:
		case 17:
			Global_1287177.f_40[Global_1287177.f_73] = uParam1;
			Global_1287177.f_73 = (Global_1287177.f_73 + 1 % 32);
			break;
	}
}

bool func_367(var uParam0)
{
	if (!*uParam0)
	{
		return false;
	}
	switch (uParam0->f_11.f_4)
	{
		case 72:
		case 74:
			return true;
		default:
			break;
	}
	return false;
}

void func_368(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	func_517();
	Global_1072759.f_23.f_2 = iParam1;
	Global_1072759.f_23.f_2.f_2 = uParam0->f_11.f_2;
}

bool func_369(var uParam0)
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

bool func_370(int iParam0)
{
	if (!Global_1901571.f_66[iParam0])
	{
		if (!func_518(&(Global_1901571.f_3[iParam0 /*2*/])))
		{
			func_193(&(Global_1901571.f_3[iParam0 /*2*/]), 0, 0);
		}
		Global_1901571.f_66[iParam0] = 1;
	}
	else if (func_64(&(Global_1901571.f_3[iParam0 /*2*/]), func_519(iParam0), 0))
	{
		func_63(&(Global_1901571.f_3[iParam0 /*2*/]));
		return true;
	}
	return false;
}

struct<2> func_371(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_372(var uParam0, int iParam1, int iParam2)
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

void func_373(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_1056554[Global_1295619 /*491*/].f_204.f_11[iParam0 /*6*/] = iParam1;
	Global_1056554[Global_1295619 /*491*/].f_204.f_11[iParam0 /*6*/].f_1 = iParam2;
	Global_1056554[Global_1295619 /*491*/].f_204.f_11[iParam0 /*6*/].f_2 = iParam3;
}

void func_374(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_520(iParam0))
	{
	}
	iVar0 = 1;
	iVar1 = iParam0;
	if (iParam0 >= 10 && iParam0 <= 13)
	{
		iVar0 = 0;
	}
	if (iParam0 == 18)
	{
		iVar1 = 3;
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (Global_1901671.f_783.f_1)
		{
			iVar1 = func_521(iParam0);
		}
	}
	iVar2 = 0;
	if (((iVar1 == 6 || iVar1 == 5) || iVar1 == 8) || iVar1 == 9)
	{
		iVar2 = 2;
	}
	func_474(iParam1);
	func_524(1, 32, iVar0, func_522(iVar1), func_523(), iVar2, -1, 0, 0, 0);
}

void func_375(int iParam0, int iParam1)
{
	if (Global_1572864.f_17 != 0)
	{
		return;
	}
	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = iParam1;
}

void func_376(var uParam0)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 41, "nssd_sStableInventory");
	iVar0 = 0;
	SAVE::_0x81F4E92BE3958364(uParam0, 33, "nssd_MountItemGUID_array");
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		StringCopy(&cVar1, "nssd_StableMountGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*4*/], 4, &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data1", 64);
		SAVE::_SAVEGAME_GET_INT_2(uParam0[iVar0 /*4*/], &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data2", 64);
		SAVE::_SAVEGAME_GET_INT_2(&((uParam0[iVar0 /*4*/])->f_1), &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data3", 64);
		SAVE::_SAVEGAME_GET_INT_2(&((uParam0[iVar0 /*4*/])->f_2), &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data4", 64);
		SAVE::_SAVEGAME_GET_INT_2(&((uParam0[iVar0 /*4*/])->f_3), &cVar1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_33), "nssd_eFeeState");
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_34), "nssd_iFeesTimer");
	iVar0 = 0;
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_35), 6, "nssd_iReservedStats_array");
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		StringCopy(&cVar1, "nssd_iReservedStats_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_35[iVar0]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_377(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 56, sParam1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sStableBonding", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 4, &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data1", 64);
	SAVE::_SAVEGAME_GET_INT_2(uParam0, &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data2", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1), &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data3", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_2), &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data4", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_3), &cVar1);
	SAVE::_0xE0B45E983BFC0768();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_fHorseEventXP", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 25, &cVar1);
	iVar0 = 0;
	while (iVar0 < 24)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_fHorseEventXP_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_4[iVar0]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sCoreData_array", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_29), 11, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_29[iVar0 /*5*/]), 5, &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_iValue_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_29[iVar0 /*5*/]), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_fValueBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_29[iVar0 /*5*/].f_1), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_fDrainBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_29[iVar0 /*5*/].f_2), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_iLastGameTime_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_29[iVar0 /*5*/].f_3), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_fOverpowerDuration_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_29[iVar0 /*5*/].f_4), &cVar1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sEfficiencyData_array", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_40), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_40[iVar0 /*4*/]), 4, &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iValue_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_40[iVar0 /*4*/]), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fValueBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_40[iVar0 /*4*/].f_1), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fDrainBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_40[iVar0 /*4*/].f_2), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iLastGameTime_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_40[iVar0 /*4*/].f_3), &cVar1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_vLastHitch", 64);
	func_217(&(uParam0->f_53), &cVar1);
	SAVE::_0xE0B45E983BFC0768();
}

void func_378(var uParam0, struct<8> Param1)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;

	Var9 = { Param1 };
	StringConCat(&Var9, "PortableList", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 26, &Var9);
	iVar0 = 0;
	while (iVar0 < 25)
	{
		Var1 = { Var9 };
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_SAVEGAME_GET_INT_2(uParam0[iVar0], &Var1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	Var9 = { Param1 };
	StringConCat(&Var9, "PortableArraySize", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_26), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "OutfitSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_27), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iHatSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_28), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBigMaskSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_29), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iSmallMaskSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_30), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iGloveSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_31), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBadgeSlotCount", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_32), &Var9);
}

void func_379(var uParam0, struct<8> Param1, int iParam9)
{
	struct<8> Var0;
	struct<8> Var8;

	Var8 = { Param1 };
	StringConCat(&Var8, "Data", 64);
	StringIntConCat(&Var8, iParam9, 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 120, &Var8);
	Var0 = { Var8 };
	StringConCat(&Var0, "_eFlags", 64);
	SAVE::_SAVEGAME_GET_INT_3(uParam0, &Var0);
	Var0 = { Var8 };
	StringConCat(&Var0, "_Components", 64);
	func_525(&(uParam0->f_1), Var0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_380(var uParam0, struct<8> Param1)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;

	Var17 = { Param1 };
	SAVE::_0x443174C20B8B9E7F(uParam0, 380, &Param1);
	StringConCat(&Var17, "_BaseLayer", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 5, &Var17);
	Var1 = { Var17 };
	StringConCat(&Var1, "_drawable", 64);
	SAVE::_SAVEGAME_GET_INT_2(uParam0, &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_albedo", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_normal", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_2), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_material", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_3), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_tag", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_4), &Var1);
	SAVE::_0xE0B45E983BFC0768();
	Var17 = { Param1 };
	StringConCat(&Var17, "_Layers", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_5), 375, &Var17);
	iVar0 = 0;
	while (iVar0 < 22)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Layer", 64);
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x8E8FFB9E4AD051D2(&(uParam0->f_5[iVar0 /*17*/]), 17, &Var1, 17);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/]), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerPriority", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Albedo", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_2), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Normal", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_3), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Material", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_4), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_SheetGridIndex", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_5), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModTexture", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_6), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModChannel", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_7), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Palette", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_8), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint0", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_9), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint1", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_10), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint2", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_5[iVar0 /*17*/].f_11), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexAlpha", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_5[iVar0 /*17*/].f_12), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModAlpha", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_5[iVar0 /*17*/].f_13), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexRough", 64);
		SAVE::_SAVEGAME_GET_FLOAT(&(uParam0->f_5[iVar0 /*17*/].f_14), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_BlendType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_5[iVar0 /*17*/].f_15), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerType", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_5[iVar0 /*17*/].f_16), &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_381(var uParam0, struct<8> Param1)
{
	struct<8> Var0;
	struct<8> Var8;

	Var8 = { Param1 };
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, &Var8);
	Var0 = { Var8 };
	StringConCat(&Var0, "iLocationIndex", 64);
	SAVE::_SAVEGAME_GET_INT_2(uParam0, &Var0);
	Var0 = { Var8 };
	StringConCat(&Var0, "iVariation", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1), &Var0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_382(var uParam0, struct<8> Param1)
{
	struct<8> Var0;
	int iVar8;

	SAVE::_0x443174C20B8B9E7F(uParam0, 7, &Param1);
	Var0 = { Param1 };
	StringConCat(&Var0, ".iNxtIndex", 64);
	SAVE::_SAVEGAME_GET_INT_2(uParam0, &Var0);
	Var0 = { Param1 };
	StringConCat(&Var0, ".iFavEm", 64);
	SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1), &Var0);
	Var0 = { Param1 };
	StringConCat(&Var0, ".emArray", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2), 5, &Var0);
	iVar8 = 0;
	while (iVar8 <= 3)
	{
		Var0 = { Var0 };
		StringConCat(&Var0, ".em_", 64);
		StringIntConCat(&Var0, iVar8, 64);
		SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_2[iVar8]), &Var0);
		iVar8++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

char* func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "tooltips/tooltip(%i)";
		case 1:
			return "tooltips/tooltip";
		case 2:
			return ":label";
		case 3:
			return ":duration";
		case 4:
			return ":onlyInSP";
		case 5:
			return ":onlyInMP";
		case 6:
			return ":requiredMissionID";
	}
	return "";
}

bool func_384(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

int func_385()
{
	return Global_1149157.f_137;
}

void func_386(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_243() - fParam1);
	func_526(uParam0, 1);
	func_527(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_387()
{
	return Global_1572887.f_196 > 0;
}

void func_388(int iParam0)
{
	int iVar0;
	struct<17> Var1;

	iVar0 = NETWORK::_0x27B1AE4D8C652F08(iParam0);
	StringCopy(&(Var1.f_2), NETWORK::_0xE59F4924BD3A718D(iVar0), 64);
	NETWORK::_0x16EFB123C4451032(iVar0, &Var1);
	StringCopy(&(Var1.f_12), NETWORK::_0xE79BA3BC265895DA(iVar0), 24);
	Var1.f_10 = iParam0;
	Var1.f_16 = NETWORK::_0x5ED39DA62BEB1330(iVar0);
	func_528(&Var1);
}

void func_389(bool bParam0)
{
	if (bParam0)
	{
		func_255(128);
	}
	if (func_11() == 0)
	{
		func_75(2);
	}
	func_202(1);
}

bool func_390(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_345(36, iParam0);
}

bool func_391()
{
	return DLC::IS_DLC_PRESENT(-3.880369E-25f);
}

bool func_392(struct<13> Param0, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17)
{
	int iVar0;

	iVar0 = func_529();
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1072759.f_23.f_306[iVar0 /*59*/] = { Param0.f_2 };
	Global_1072759.f_23.f_306[iVar0 /*59*/].f_8 = { Param0.f_12 };
	Global_1072759.f_23.f_306[iVar0 /*59*/].f_11 = Param0.f_10;
	Global_1072759.f_23.f_306[iVar0 /*59*/].f_56 = 1;
	Global_1072759.f_23.f_306[iVar0 /*59*/].f_58 = iParam17;
	func_359(&(Global_1072759.f_23.f_306[iVar0 /*59*/].f_45), 1);
	return true;
}

int func_393(struct<2> Param0)
{
	if (func_530(Param0) != 5)
	{
		return -1;
	}
	return func_531(Param0);
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
		default:
			break;
	}
	return -1;
}

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

char* func_396(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case -318976023:
			return "UGC_MST_LGNDB";
		case 772881414:
			return "UGC_MST_MNSHN";
		case 31269700:
			return "UGC_MST_LETTR";
		case -133550749:
			return "UGC_MST_OUTLAW";
		case 603385332:
			return "UGC_MST_DEL";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case -777132493:
			return "UGC_MST_PDR";
		case -163684180:
			return "UGC_MST_SOW";
		case -1649482077:
			return "UGC_MST_UIS";
		case -698288936:
			return "UGC_MST_PROT";
		case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
			return "UGC_MST_PDH";
		case 604251967:
			return "UGC_MST_FOU";
		case 1078150940:
			return "UGC_MST_AWIP";
		case 482206342:
			return "UGC_MST_LEG";
		default:
			break;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_397(int iParam0)
{
	switch (iParam0)
	{
		case 1816768801:
			return "GST_DEATHMATCH";
		case -533426613:
			return "GST_DEATHMATCH_TEAM";
		case -1918441640:
			return "GST_DEATHMATCH_LTS";
		case -457802746:
			return "GST_DEATHMATCH_FTB";
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
		case 1153715636:
			return "GST_DEATHMATCH_LMS";
		case 424482930:
			return "GST_DEATHMATCH_MM";
		case 1272390114:
			return "GST_DEATHMATCH_WOC";
		case -1581094459:
			return "GST_DEATHMATCH_EXC";
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
		case -559809431:
			return "GST_DEATHMATCH_HT";
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
		case -1437925683:
			return "GST_DEATHMATCH_TWOC";
		case -548018579:
			return "GST_DEATHMATCH_EC";
		case 10577687:
			return "GST_DEATHMATCH_MC";
		case -222655798:
			return "GST_DEATHMATCH_GR";
		case -725256130:
			return "GST_DEATHMATCH_TGR";
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* func_398(int iParam0)
{
	switch (iParam0)
	{
		case -784189810:
			return "GST_RACE_STANDA";
		case 1579717899:
			return "GST_RACE_COMBAT";
		case -63669280:
			return "GST_RACE_DUALCO";
		case 851921060:
			return "GST_RACE_ELIM";
		case 2028478397:
			return "GST_RACE_SURVIV";
		case 1457860192:
			return "GST_RACE_TIMECP";
		case -79999383:
			return "GST_RACE_GOLDRU";
		case -1957416901:
			return "GST_RACE_RUNAWT";
		case 218185167:
			return "GST_RACE_TARRAC";
		case 1744858848:
			return "GST_RACE_OPERAC";
		case -1185533313:
			return "GST_RACE_OPTARA";
		default:
			break;
	}
	return "Invalid RACE_SUB_TYPE";
}

void func_399(var uParam0)
{
	func_532(uParam0);
	func_532(&(uParam0->f_2));
}

void func_400(var uParam0)
{
	Global_1572887.f_196.f_7 = { *uParam0 };
}

void func_401(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<43> Var2;
	int iVar45;

	iVar0 = 29;
	while (iVar0 >= 0)
	{
		Var2 = { Global_1940239.f_245.f_14[iVar0 /*43*/] };
		iVar1 = DATABINDING::DATABINDING_READ_INT(Var2.f_30);
		iVar45 = iVar1;
		if (iParam0 != iVar45)
		{
		}
		else
		{
			iVar1 = DATABINDING::DATABINDING_READ_INT(Var2.f_31);
			if (iParam1 != iVar1)
			{
			}
			else
			{
				func_496(Var2);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_402(int iParam0)
{
}

void func_403(var uParam0)
{
	func_532(uParam0);
}

void func_404(var uParam0)
{
	Global_1572887.f_196.f_3 = { *uParam0 };
}

bool func_405(struct<4> Param0, int iParam4)
{
	return func_254(Param0.f_3, iParam4);
}

int func_406()
{
	return Global_1572887.f_196;
}

void func_407(var uParam0)
{
}

void func_408(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_409(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_410()
{
	if (Global_1102813.f_26.f_3337 == 9)
	{
		return 0;
	}
	if (Global_1102813.f_26.f_3337 == 10)
	{
		return 0;
	}
	if (Global_1102813.f_26.f_3337 == 11)
	{
		return 0;
	}
	if (func_443(2048))
	{
		return 1;
	}
	if (func_442(1))
	{
		return 1;
	}
	if (Global_1102813.f_26.f_3337 != 0)
	{
		return 1;
	}
	return 0;
}

char* func_411(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

struct<11> func_412()
{
	return Global_1572887.f_196.f_30;
}

int func_413()
{
	return Global_1572887.f_196.f_41;
}

bool func_414(int iParam0)
{
	return func_254(Global_1056554[iParam0 /*491*/].f_204.f_10, 4);
}

void func_415(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_416(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_1;
}

var func_417(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_2;
}

struct<2> func_418(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_3;
}

int func_419(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_533())
	{
		return 2;
	}
	if (func_534(iParam0))
	{
	}
	Var0 = { func_535() };
	if (func_471(Var0))
	{
		return 4;
	}
	if (func_536(iParam0))
	{
		return 8;
	}
	if (func_537(iParam0))
	{
		return 11;
	}
	if (func_538(iParam0, 8.826884E-14f))
	{
		return 7;
	}
	else if (func_538(iParam0, -39.13577f))
	{
		return 10;
	}
	else if (func_538(iParam0, 1.190549E+15f))
	{
		return 9;
	}
	else if (func_538(iParam0, 1.708672E-23f))
	{
		return 12;
	}
	if (func_539(iParam0))
	{
		return 14;
	}
	if (func_540(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 15;
	}
	iVar2 = func_541(iParam0, 1);
	if (iVar2 <= 0)
	{
		return -1;
	}
	else if (!func_542(iVar2))
	{
		return 6;
	}
	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
	{
		if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > (func_543(func_394(iParam0)) - 1))
			{
				return 5;
			}
		}
	}
	return 0;
}

bool func_420(int iParam0)
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(8.360127E+26f) > 0)
	{
		*iParam0 = 8.360127E+26f;
		return true;
	}
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-4.200036E+09f) > 0)
	{
		*iParam0 = -4.200036E+09f;
		return true;
	}
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-4.947796E+13f) > 0)
	{
		*iParam0 = -4.947796E+13f;
		return true;
	}
	return false;
}

void func_421(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
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

int func_422()
{
	return Global_1149157.f_143;
}

Vector3 func_423(int iParam0)
{
	struct<10> Var0;

	if (iParam0 == -1)
	{
	}
	Var0 = { func_544(iParam0) };
	if (func_486(Var0.f_5))
	{
	}
	return Var0.f_5;
}

bool func_424(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_425()
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
}

bool func_426()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-3.294948E+35f) > 0)
	{
		return true;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1.201345E-07f) > 0)
	{
		return true;
	}
	return false;
}

bool func_427(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939421.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939421[iVar0 /*16*/].f_10)))
		{
			func_545(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_428(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_429(int iParam0, int iParam1)
{
	if (!func_428(iParam0))
	{
		return false;
	}
	if (func_11() == -1)
	{
		return (Global_1915643.f_3[iParam0 /*447*/].f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1) != 0;
	}
	return false;
}

void func_430(int iParam0, int iParam1)
{
	if (!func_428(iParam0))
	{
		return;
	}
	if (func_11() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 || iParam1);
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1);
	}
}

void func_431(int iParam0, int iParam1)
{
	if (!func_428(iParam0))
	{
		return;
	}
	if (func_11() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 - (Global_1915643.f_3[iParam0 /*447*/].f_6 && iParam1));
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1));
	}
}

int func_432()
{
	return Global_1300340.f_150;
}

bool func_433(int iParam0)
{
	return (Global_1300340.f_288.f_2 && iParam0) != 0;
}

bool func_434()
{
	return func_546() != 0;
}

bool func_435()
{
	int iVar0;

	iVar0 = func_547();
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(iVar0, false);
}

void func_436(int iParam0)
{
	Global_1300340.f_288 = iParam0;
}

void func_437(int iParam0)
{
	Global_1300340.f_288.f_1 = iParam0;
}

void func_438(int iParam0)
{
	int iVar0;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (SCRIPTS::DOES_THREAD_EXIST(Global_1940072.f_105.f_1) && Global_1940072.f_105.f_1 != iVar0)
	{
		return;
	}
	Global_1940072.f_105.f_1 = iVar0;
	Global_1940072.f_105 = iParam0;
}

int func_439()
{
	if (Global_1572887.f_196.f_58 != 0)
	{
		return 2;
	}
	if (Global_1572887.f_196.f_46 != -1)
	{
		return 2;
	}
	if (Global_1572887.f_196.f_56 > 2 || Global_1572887.f_196.f_57 > 2)
	{
		return 2;
	}
	if (Global_1572887.f_196.f_56 == 2)
	{
		Global_1572887.f_196.f_56 = 0;
		Global_1572887.f_196.f_57 = 0;
		return 1;
	}
	return 0;
}

void func_440(var uParam0, int iParam1)
{
	func_548(uParam0, iParam1);
}

void func_441(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_442(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_443(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_444(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

int func_445()
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

void func_446(int iParam0)
{
	if (func_549(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

bool func_447()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

bool func_448(int iParam0)
{
	return func_345(27, iParam0);
}

bool func_449(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_450(int iParam0)
{
	if (!func_449(iParam0))
	{
		return false;
	}
	return func_453(iParam0, 8);
}

void func_451(int iParam0, int iParam1)
{
	if (!func_449(iParam0))
	{
		return;
	}
	Global_1887363[iParam0 /*36*/].f_20 = iParam1;
}

void func_452(int iParam0)
{
	Global_1893611 = (Global_1893611 || iParam0);
}

bool func_453(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		return (Global_8130[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1072759.f_19611[iParam0 /*11*/] && iParam1) != 0;
}

void func_454(int iParam0)
{
	Global_1893611 = (Global_1893611 - (Global_1893611 && iParam0));
}

bool func_455(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_453(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1887363[iVar1 /*36*/].f_27)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1887363[iVar1 /*36*/].f_27));
			}
		}
		if (Global_1887363[iVar1 /*36*/].f_10 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1887363[iVar1 /*36*/].f_10, false))
			{
				if (func_11() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1887363[iVar1 /*36*/].f_10, 523);
				}
				else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1887363[iVar1 /*36*/].f_10))
				{
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1887363[iVar1 /*36*/].f_10);
				}
			}
			else if (func_453(iVar1, 2))
			{
				if (func_11() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1887363[iVar1 /*36*/].f_27), 523);
				}
				else
				{
					SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1887363[iVar1 /*36*/].f_27)));
				}
			}
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1887363[iVar1 /*36*/].f_10))
			{
				Global_1887363[iVar1 /*36*/].f_10 = 0;
				func_550(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		else if (bParam0)
		{
			if (func_453(iVar1, 1))
			{
				func_550(iVar1, 1);
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_456(int iParam0)
{
	return (Global_265213.f_122484.f_139 && iParam0) != 0;
}

bool func_457()
{
	return func_551() > 11;
}

void func_458()
{
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f) && !func_552(4096))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(1.608566E+13f);
	}
}

bool func_459(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_491();
	}
	else if (iParam0 == func_491())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1295619.f_9;
		}
	}
	if (!bVar0)
	{
		if (!Global_1295619.f_17[iParam0])
		{
			return false;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iParam0]))
		{
			return false;
		}
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(Global_1295619.f_149[iParam0])) <= 1)
	{
		return false;
	}
	return true;
}

void func_460()
{
	Global_1956862.f_1431.f_108 = 0;
	Global_1956862.f_1431.f_108.f_1 = 0f;
	Global_1956862.f_1431.f_108.f_3 = 0f;
	Global_1956862.f_1431.f_108.f_2 = 0f;
	Global_1956862.f_1431.f_108.f_4 = 0f;
	Global_1956862.f_1431.f_108.f_6 = 0f;
	Global_1956862.f_1431.f_108.f_5 = 0f;
}

void func_461(int iParam0)
{
	Global_1572887.f_72.f_40 = iParam0;
}

int func_462(int iParam0)
{
	int iVar0;
	int iVar1;

	if (6 == iParam0)
	{
		return 10;
	}
	if (5 == iParam0)
	{
		return 11;
	}
	if (7 == iParam0)
	{
		return 12;
	}
	if (8 == iParam0)
	{
		return 13;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (iParam0 != Global_265213.f_107995.f_13575[iVar0])
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 21)
			{
				if (Global_265213.f_107995.f_13510[iVar0] != Global_265189.f_1[iVar1])
				{
				}
				else
				{
					return iVar1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4.923836E-11f;
		case 1:
			return -1.183991E-26f;
		case 2:
			return 3.0585E+12f;
		case 3:
			return 6.504974E+36f;
		case 4:
			return -2.606333E-24f;
		case 5:
			return -1.032091E-38f;
		case 6:
			return -5.88325E+33f;
		case 7:
			return 6.631283E-35f;
		case 8:
			return -2.568551E-25f;
		case 9:
			return 5.038139E-36f;
		case 10:
			return 1.566288E-21f;
		case 11:
			return 3.508673E-32f;
		case 12:
			return -4.69489E+08f;
		case 13:
			return 8.416686E-10f;
		case 14:
			return 8.36175E-09f;
		case 15:
			return 3.880884E+24f;
		case 16:
			return 1.221154E+15f;
		case 17:
			return -4.49178E-32f;
		case 18:
			return -308.6616f;
		case 19:
			return 1.307238E-05f;
		case 20:
			return -2.683141E-16f;
		default:
			break;
	}
	return 0;
}

void func_464()
{
	if (Global_1572887.f_72.f_60)
	{
		return;
	}
	Global_1572887.f_72.f_60 = 1;
	TELEMETRY::_TELEMETRY_MATCH_QUEUE(Global_1572887.f_72.f_60.f_1, Global_1572887.f_72.f_60.f_2, Global_1572887.f_72.f_60.f_3, Global_1572887.f_72.f_60.f_4, Global_1572887.f_72.f_60.f_5, &(Global_1572887.f_72.f_60.f_6), Global_1572887.f_300.f_10 != 0);
}

void func_465()
{
	int iVar0;

	if (func_11() == -1)
	{
		return;
	}
	iVar0 = Global_1295619;
	if (func_254(Global_1572887.f_8, 1))
	{
		func_408(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 4);
	}
	else
	{
		func_415(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 4);
	}
	Global_1056554[iVar0 /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[iVar0 /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[iVar0 /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[iVar0 /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[iVar0 /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[iVar0 /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[iVar0 /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;
	if (func_552(1024))
	{
		func_408(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 2);
	}
	else
	{
		func_415(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 2);
	}
}

void func_466(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	vector3 vVar6;

	vVar2 = { vParam0 };
	iVar0 = func_553(vParam0);
	if (iVar0 != -1)
	{
		iVar1 = Global_1887363[iVar0 /*36*/].f_5;
		if (VOLUME::DOES_VOLUME_EXIST(iVar1))
		{
			vVar2 = { VOLUME::GET_VOLUME_COORDS(iVar1) };
		}
	}
	else
	{
		fVar5 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
		if (!func_482(&vVar2, &fVar5))
		{
			vVar2 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
		}
	}
	vVar6.x = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	vVar6.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	vVar2 = { vVar2 + vVar6 };
	vParam0 = { vParam0 + vVar6 };
	func_483(vVar2, 0f, vParam0, 0f, -1f, -1f, 1, 1, 1, 1);
	func_554(0);
}

bool func_467(int iParam0)
{
	return func_254(Global_1203937.f_3, iParam0);
}

var func_468(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_10;
}

var func_469(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_8;
}

var func_470(int iParam0)
{
	return Global_1056554[iParam0 /*491*/].f_204.f_9;
}

bool func_471(struct<2> Param0)
{
	if (!func_555(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_556(Param0))
	{
		return false;
	}
	return true;
}

bool func_472()
{
	if (Global_1149157 == 2)
	{
		return true;
	}
	return false;
}

bool func_473(struct<2> Param0)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	iVar0 = func_393(Param0);
	vVar2 = { func_557(iVar0, &uVar1) };
	if (func_486(vVar2))
	{
		return false;
	}
	if (func_234(255))
	{
		return false;
	}
	func_558(4);
	func_335(1);
	func_328(1);
	func_309(1);
	func_559(vVar2, uVar1, 1);
	func_558(16);
	return true;
}

void func_474(int iParam0)
{
	Global_1572887.f_72.f_14 = iParam0;
}

int func_475(int iParam0, int iParam1, struct<2> Param2, var uParam4, var uParam5, var uParam6)
{
	int iVar0;

	if (!func_560(iParam0, iParam1))
	{
		return 0;
	}
	func_561();
	func_562(iParam0, iParam1, uParam4, 1);
	func_563(Param2, 1);
	func_564(uParam5);
	func_461(14);
	func_565(uParam6, 1);
	func_566();
	func_567();
	iVar0 = func_463(func_462(Global_1572887.f_72.f_9));
	Global_1572887.f_72.f_60.f_1 = func_261(iVar0 != 0, iVar0, Global_1572887.f_72.f_9);
	Global_1572887.f_72.f_60.f_2 = 1;
	Global_1572887.f_72.f_60.f_4 = (MISC::GET_GAME_TIMER() - Global_1572887.f_72.f_41);
	Global_1572887.f_72.f_60.f_5 = func_568(Global_1572887.f_72.f_11);
	if (func_471(Param2))
	{
		func_569(Param2);
	}
	return 1;
}

int func_476(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	switch (iParam0)
	{
		case 0:
			iVar1 = (iVar0 % 2);
			switch (iVar1)
			{
				case 0:
					return 6;
				case 1:
					return 7;
				default:
					break;
			}
			break;
		case 1:
			iVar1 = (iVar0 % 3);
			switch (iVar1)
			{
				case 0:
					return 0;
				case 1:
					return 2;
				case 2:
					return 11;
				default:
					break;
			}
			break;
		case 3:
			iVar1 = (iVar0 % 3);
			switch (iVar1)
			{
				case 0:
					return 3;
				case 1:
					return 9;
				case 2:
					return 10;
				default:
					break;
			}
			break;
		case 4:
			iVar1 = (iVar0 % 3);
			switch (iVar1)
			{
				case 0:
					return 1;
				case 1:
					return 4;
				case 2:
					return 12;
				default:
					break;
			}
			break;
		case 2:
			iVar1 = (iVar0 % 4);
			switch (iVar1)
			{
				case 0:
					return 13;
				case 1:
					return 14;
				case 2:
					return 15;
				case 3:
					return 16;
				default:
					break;
			}
			break;
		case 5:
			return 8;
	}
	return -1;
}

int func_477(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= -1 || iParam0 >= 17)
	{
		iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 17);
	}
	if (iParam0 == 8)
	{
		iParam0 = 9;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10 + 1);
			break;
		case 1:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(11, 30 + 1);
			break;
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(31, 34 + 1);
			break;
		case 3:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(35, 38 + 1);
			break;
		case 4:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(39, 41 + 1);
			break;
		case 5:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(42, 61 + 1);
			break;
		case 6:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(53, 61 + 1);
			break;
		case 7:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(42, 52 + 1);
			break;
		case 8:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(62, 66 + 1);
			break;
		case 9:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(67, 81 + 1);
			break;
		case 10:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(82, 98 + 1);
			break;
		case 11:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(99, 112 + 1);
			break;
		case 12:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(113, 119 + 1);
			break;
		case 13:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(120, 122 + 1);
			break;
		case 14:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(123, 126 + 1);
			break;
		case 15:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(127, 134 + 1);
			break;
		case 16:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(135, 138 + 1);
			break;
	}
	iVar1 = iVar0;
	if (iVar1 == 8)
	{
		iVar1 = 5;
	}
	if (iVar1 == 55)
	{
		iVar1 = 45;
	}
	return iVar1;
}

void func_478(int iParam0, bool bParam1)
{
	var uVar0;
	struct<7> Var30;

	if (!func_482(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
		Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_288(92);
	if (func_570(iParam0, &uVar0))
	{
		func_571(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_348(0);
		}
		return;
	}
	func_572(Var30.f_6, Var30, -1f, -1f, 1, 1, 1);
	if (bParam1)
	{
		func_348(0);
	}
}

bool func_479(int iParam0)
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
			Var2 = { func_371(iVar0) };
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

int func_480(int iParam0)
{
	struct<2> Var0;
	struct<14> Var2;
	int iVar46;

	if (Global_1203937.f_1 == 6 || Global_1203937.f_1 == 7)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(iParam0)) && GANG::_0x7933754F260B428A(iParam0) > 0)
	{
		return 0;
	}
	Var0 = { func_371(iParam0) };
	Var2.f_13 = 10;
	iVar46 = 0;
	while (iVar46 <= (POSSE::_0xC084FF658B2E61DA(&Var0) - 1))
	{
		if (POSSE::_0xC084FF658B2E71DA(&Var0, iVar46, &Var2))
		{
			if (Var2.f_9 == 1 && Var2 != 0)
			{
				if (func_573(Var2))
				{
					func_574(2);
					return func_575(Var2, 0);
				}
				else if (Var2.f_12 < 10)
				{
					Global_1203937.f_14 = { Var0 };
					Global_1203937.f_14.f_2 = Var2;
					Global_1203937.f_14.f_4 = GANG::NETWORK_GET_GANG_ID(iParam0);
					func_576(6);
					func_577(32);
					func_574(2);
					if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
					{
						GANG::_NETWORK_LEAVE_GANG(GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()));
					}
					return 1;
				}
			}
		}
		iVar46++;
	}
	return 0;
}

void func_481()
{
	if (func_467(1024))
	{
		func_494(1024);
	}
}

bool func_482(Vector3* vParam0, float* fParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/];
	iVar1 = func_578(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_579(uVar0, iVar2, vParam0, fParam1))
		{
			return true;
		}
	}
	return false;
}

void func_483(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (func_346(255) == 4)
	{
		return;
	}
	if (func_486(vParam0))
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
		func_307(0, 0, 0, 1);
	}
	func_288(0);
	func_288(3);
	Global_1102813.f_3909 = iParam11;
	Global_1102813.f_3910 = iParam12;
	Global_1102813.f_3911 = iParam13;
	func_487(&(Global_1102813.f_3839));
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
	func_488(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { vParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_489(Global_1102813.f_3839, 36);
	func_490(Global_1102813.f_3878, 36);
}

bool func_484(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_485(var uParam0, int iParam1)
{
	func_580(uParam0, iParam1);
}

bool func_486(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_487(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_488(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_489(struct<29> Param0, var uParam29, int iParam30)
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

void func_490(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_491()
{
	return Global_1102813.f_3672;
}

bool func_492(var uParam0, int iParam1, int iParam2)
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

int func_493(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		bVar0 = GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID());
		if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
		{
			if (bVar0)
			{
				GANG::_NETWORK_LEAVE_GANG(true);
			}
			else
			{
				GANG::_NETWORK_LEAVE_GANG(false);
			}
		}
	}
	if (Global_1203937.f_472 != -1 && Global_1203937.f_483[Global_1203937.f_472 /*63*/] != 0)
	{
		Var2 = { func_581() };
		if (func_361(Global_1203937.f_483[Global_1203937.f_472 /*63*/].f_19) && func_361(Var2))
		{
			bVar1 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1203937.f_483[Global_1203937.f_472 /*63*/].f_19), &Var2);
		}
	}
	if (POSSE::_0xC08BFF658B2E51DA(0))
	{
		func_582(bVar1, bParam0);
		if (bParam1)
		{
			func_583();
		}
		return 1;
	}
	return 0;
}

void func_494(int iParam0)
{
	func_415(&(Global_1203937.f_3), iParam0);
}

int func_495(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	int iVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	iVar4 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(uParam0, &Var0, bParam5);
	return iVar4;
}

void func_496(int iParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940239.f_245.f_5, iParam0);
	func_584(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_513((Global_1940239.f_245.f_1306 - 1));
}

void func_497(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896762.f_352)
		{
			Global_1896762.f_352 = bParam0;
		}
	}
	else if (Global_1896762.f_352)
	{
		Global_1896762.f_352 = bParam0;
	}
}

int func_498(int iParam0, int iParam1)
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

int func_499(int iParam0)
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

void func_500(int iParam0, int iParam1, int iParam2)
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

void func_501(int iParam0, int iParam1, int iParam2)
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

int func_502(int iParam0, int iParam1)
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

void func_503(var uParam0)
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
			func_585(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_SET_ALL_PLAYER_BITS(&(vVar0.f_2));
			func_585(vVar0);
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
				func_586(&Var7, uVar6);
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
				func_585(vVar0);
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
					func_586(&Var15, uVar6);
				}
			}
			default:
				break;
	}
}

void func_504(var uParam0)
{
	func_587(uParam0, 0);
}

char* func_505(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<10> Var5;
	int iVar15;
	int iVar16;

	sVar0 = "Invalid Posse";
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return sVar0;
	}
	iVar1 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (func_479(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1102813.f_17 != Global_1101558[iVar2 /*38*/].f_17)
				{
					sVar0 = func_588(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION())
			{
				sVar0 = func_588(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_371(iVar1) };
				iVar16 = 0;
				while (iVar16 <= (POSSE::_0xC084FF658B2E61DA(&Var3) - 1))
				{
					if (POSSE::_0xC084FF658B2E81DA(&Var3, iVar16, &Var5) && Var5.f_9)
					{
						iVar15 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_508(func_589(Var5.f_1), 4.808429E-35f);
						}
						else
						{
							sVar0 = func_508(func_589(Var5.f_1), iParam2);
						}
					}
					else
					{
						iVar16++;
					}
				}
				if (iVar15 == 0)
				{
					return func_588(iParam0, bParam1, iParam2);
				}
				if (func_590(func_589(Var5.f_1)))
				{
					if (bParam1 == 1 && func_591(iVar1, sVar0))
					{
						sVar0 = func_588(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_588(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_588(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

char* func_506(int iParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = "";
	*bParam1 = 0;
	if (iParam0 == 80)
	{
		sVar0 = "GF_FEUD_POSSE_LEADER_FEUD";
		*bParam1 = 1;
	}
	if (iParam0 == 81)
	{
		sVar0 = "GF_FEUD_POSSE_FEUD";
		*bParam1 = 1;
	}
	if (iParam0 == 85)
	{
		sVar0 = "GF_FEUD_FEUD";
		*bParam1 = 1;
	}
	if (iParam0 == 82)
	{
		sVar0 = "GF_FEUD_POSSE_INFIGHTING";
		*bParam1 = 1;
	}
	return sVar0;
}

char* func_507(int iParam0)
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
	return func_592(iVar0);
}

char* func_508(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_411(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

struct<8> func_509(struct<12> Param0, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29)
{
	char cVar0[64];
	int iVar8;

	StringCopy(&cVar0, "GAME_INVITE_HEADER", 64);
	switch (Param0.f_11.f_4)
	{
		case 69:
		case 70:
			cVar0 = { func_593(Param0.f_11.f_7) };
			break;
		case 72:
			iVar8 = func_95(Param0.f_11.f_7);
			if (iVar8 != -1)
			{
				cVar0 = { Global_265213.f_4[iVar8 /*46*/].f_7 };
			}
			else
			{
				cVar0 = { func_594(Param0.f_11.f_14) };
			}
			break;
		case 96:
			StringCopy(&cVar0, "MG_INVITE_HEADER", 64);
			break;
		case 80:
			StringCopy(&cVar0, "GF_FEUD_TOAST_OPT_IN_PLFEUD", 64);
			break;
		case 81:
			StringCopy(&cVar0, "GF_FEUD_TOAST_OPT_IN_PFEUD", 64);
			break;
		case 85:
			StringCopy(&cVar0, "GF_FEUD_TOAST_OPT_IN_FEUD", 64);
			break;
	}
	return cVar0;
}

char* func_510(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_511()
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
			if (func_595(Var2))
			{
				func_496(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_596();
}

void func_512(var uParam0, int iParam1, char[32] cParam2, struct<24> Param10)
{
	func_597(uParam0, iParam1, cParam2, Param10);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_365(15), Param10.f_16);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_365(17), Param10.f_17);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(3), Param10.f_18);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(4), Param10.f_19);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(5), Param10.f_20);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(6), Param10.f_21);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_365(98), Param10.f_22);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_365(99), Param10.f_23);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_365(100), Param10.f_23);
}

void func_513(int iParam0)
{
	Global_1940239.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940239.f_245.f_1306), 0));
}

bool func_514(var uParam0)
{
	return true;
}

int func_515(var uParam0)
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
		return func_598(func_508(uParam0->f_2, 4.808429E-35f), func_508(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_599(func_508(uParam0->f_2, 4.808429E-35f), func_508(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_600(func_508(uParam0->f_2, 4.808429E-35f), func_508(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_601(func_508(uParam0->f_2, 4.808429E-35f), func_508(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_602(func_508(uParam0->f_2, 4.808429E-35f), func_508(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_603(func_508(uParam0->f_2, 4.808429E-35f), func_508(uParam0->f_3, 4.808429E-35f), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_267(func_508(uParam0->f_2, 4.808429E-35f), func_508(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_516()
{
	return Global_1940239.f_245.f_1305;
}

void func_517()
{
	vector3 vVar0;

	if (func_604() == -1)
	{
		return;
	}
	func_496(Global_1072759.f_23.f_2.f_1);
	vVar0 = -1;
	Global_1072759.f_23.f_2 = { vVar0 };
}

bool func_518(var uParam0)
{
	return uParam0->f_1;
}

int func_519(int iParam0)
{
	return 60000;
}

bool func_520(int iParam0)
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(func_463(iParam0));
}

int func_521(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6;
	int iVar7;

	iVar0 = 0;
	iVar1 = 1;
	if (func_605() > 0)
	{
		iVar1 = func_605();
	}
	switch (iParam0)
	{
		case 18:
			if (func_520(2) && func_606(2) >= iVar1)
			{
				iVar2[iVar0] = 2;
				iVar0++;
			}
			if (func_520(3) && func_606(3) >= iVar1)
			{
				iVar2[iVar0] = 3;
				iVar0++;
			}
			if (func_520(4) && func_606(4) >= iVar1)
			{
				iVar2[iVar0] = 4;
				iVar0++;
			}
			break;
		case 8:
			if (func_520(7) && func_606(7) >= iVar1)
			{
				iVar2[iVar0] = 7;
				iVar0++;
			}
			if (func_520(8) && func_606(8) >= iVar1)
			{
				iVar2[iVar0] = 8;
				iVar0++;
			}
			if (func_520(9) && func_606(9) >= iVar1)
			{
				iVar2[iVar0] = 9;
				iVar0++;
			}
			break;
		case 15:
			if (func_520(15) && func_606(15) >= iVar1)
			{
				iVar2[iVar0] = 15;
				iVar0++;
			}
			if (func_520(16) && func_606(16) >= iVar1)
			{
				iVar2[iVar0] = 16;
				iVar0++;
			}
			break;
		default:
			if (func_520(iParam0) && func_606(iParam0) >= iVar1)
			{
				iVar2[iVar0] = iParam0;
				iVar0++;
			}
			break;
	}
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	iVar7 = (iVar6 % iVar0);
	if (iVar7 < 0 || iVar7 >= 3)
	{
		iVar7 = 0;
	}
	return iVar2[iVar7];
}

int func_522(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		return 6;
	}
	if (iParam0 == 11)
	{
		return 5;
	}
	if (iParam0 == 12)
	{
		return 7;
	}
	if (iParam0 == 13)
	{
		return 8;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_265213.f_107995.f_13510[iVar0] == Global_265189.f_1[iParam0])
		{
			return Global_265213.f_107995.f_13575[iVar0];
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_523()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_524(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	struct<7> Var0;
	char cVar22[64];
	struct<51> Var30;

	if (!func_560(iParam2, iParam3))
	{
		return 0;
	}
	if (func_607() && Global_1572887.f_72.f_40 != 9)
	{
		return 0;
	}
	if (!func_608(Global_1295619.f_5))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_609(&Var0);
	func_565(iParam10, 1);
	func_562(iParam2, iParam3, iParam7, 1);
	func_563(Param4, 1);
	func_610(iParam6);
	func_564(iParam9);
	func_611();
	if ((func_471(Param4) && !func_612()) && Global_1220744 == -1)
	{
		func_569(Param4);
	}
	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);
	if (iParam2 != 2)
	{
		func_613();
	}
	if (func_612())
	{
		func_614(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_552(2.524355E-29f))
		{
			if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f))
			{
				func_615(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var30 = 255;
			Var30.f_13 = NaNf;
			Var30.f_16.f_2 = -5.544348E+20f;
			Var30.f_16.f_4 = 3;
			Var30.f_21 = -1;
			Var30.f_25 = 1;
			Var30.f_26 = 1;
			Var30.f_27 = 1;
			Var30.f_28 = 32;
			Var30.f_29 = 1;
			Var30.f_30 = -2;
			Var30.f_42.f_5 = -1;
			Var30.f_48 = -1;
			Var30.f_48.f_1 = -1;
			Var30.f_50.f_3 = -1;
			func_616(&Var30, iParam3, -1, -1, 3);
			StringCopy(&cVar22, func_508(&(Var30.f_32), 4.808429E-35f), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar22, MISC::VAR_STRING(2, func_617(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar22, MISC::VAR_STRING(2, func_619(func_618(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, &cVar22);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_117, MISC::VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	}
	if ((!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_459(255, 0)) && !bParam8)
	{
		func_620("NM_MATCHMAKING_WARNING");
	}
	func_461(10);
	return 1;
}

void func_525(var uParam0, struct<8> Param1)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 119, &Param1);
	Var1 = { Param1 };
	StringConCat(&Var1, "_iOutfitHash", 64);
	SAVE::_SAVEGAME_GET_INT_2(uParam0, &Var1);
	Var1 = { Param1 };
	StringConCat(&Var1, "_Array", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1), 118, &Var1);
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Array_Idx", 64);
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_1[iVar0 /*3*/]), 3, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "_CompHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1[iVar0 /*3*/]), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_WearHash", 64);
		SAVE::_SAVEGAME_GET_INT_2(&(uParam0->f_1[iVar0 /*3*/].f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_eFlags", 64);
		SAVE::_SAVEGAME_GET_INT_3(&(uParam0->f_1[iVar0 /*3*/].f_2), &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_526(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_527(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_528(var uParam0)
{
	Global_1572887.f_196.f_13 = { *uParam0 };
}

int func_529()
{
	int iVar0;
	struct<59> Var1;

	Var1.f_12.f_3 = -1;
	Var1.f_12.f_3.f_1 = -1;
	Var1.f_12.f_11.f_12 = -1;
	Var1.f_12.f_11.f_12.f_1 = -1;
	Var1.f_12.f_11.f_14 = 255;
	Var1.f_12.f_11.f_15 = 255;
	Var1.f_52 = -1;
	Var1.f_52.f_1 = -1;
	Var1.f_54 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_1072759.f_23.f_306[iVar0 /*59*/].f_55 == 0 && !Global_1072759.f_23.f_306[iVar0 /*59*/].f_56)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (UIFEED::_UI_FEED_GET_MESSAGE_STATE(Global_1072759.f_23.f_306[iVar0 /*59*/].f_55) == 6)
		{
			Global_1072759.f_23.f_306[iVar0 /*59*/] = { Var1 };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_530(var uParam0, var uParam1)
{
	return uParam0;
}

int func_531(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_621(Param0, &vVar0))
	{
		return vVar0.z;
	}
	return -1;
}

void func_532(var uParam0)
{
}

bool func_533()
{
	return Global_1149157 == 3;
}

bool func_534(int iParam0)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_14 == 2;
}

struct<2> func_535()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_622(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_622(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_536(int iParam0)
{
	if (NETWORK::NETWORK_HAVE_ROS_BANNED_PRIV())
	{
		return true;
	}
	if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE(7))
	{
		return true;
	}
	return false;
}

bool func_537(int iParam0)
{
	if (!func_623(iParam0))
	{
		return false;
	}
	if (Global_1149303.f_6)
	{
		return true;
	}
	return false;
}

int func_538(int iParam0, int iParam1)
{
	var uVar0;

	return func_624(iParam0, iParam1, &uVar0);
}

bool func_539(int iParam0)
{
	return false;
}

bool func_540(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_625(bParam1, bParam2, bParam3);
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

int func_541(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = func_626(iParam0, iParam1);
	return uVar0;
}

bool func_542(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_11() == 0)
	{
		return func_627(iParam0);
	}
	return iParam0 <= func_628();
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 6;
		default:
			break;
	}
	return 1;
}

struct<10> func_544(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	func_630(func_629(iParam0), &Var0);
	return Var0;
}

void func_545(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939421[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1939421[iParam0 /*16*/] = { Var0 };
	Global_1939421.f_161 = (Global_1939421.f_161 - 1);
	if (Global_1939421.f_161 < 0)
	{
		Global_1939421.f_161 = 0;
	}
}

int func_546()
{
	return Global_1300340.f_288;
}

int func_547()
{
	return Global_1300340.f_150.f_4;
}

void func_548(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_549(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

void func_550(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] - (Global_8130[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] - (Global_1072759.f_19611[iParam0 /*11*/] && iParam1));
}

int func_551()
{
	return Global_1572887.f_72.f_40;
}

bool func_552(int iParam0)
{
	return (Global_1572887.f_72.f_15 && iParam0) != 0;
}

int func_553(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = -1;
	fVar1 = 1232348158;
	if (func_486(vParam0))
	{
		return -1;
	}
	iVar3 = 0;
	while (iVar3 < Global_1893611.f_161)
	{
		iVar2 = Global_1893611.f_10[iVar3];
		fVar4 = BUILTIN::VDIST2(vParam0, Global_1887363[iVar2 /*36*/].f_7);
		if (fVar4 < fVar1)
		{
			iVar0 = iVar2;
			fVar1 = fVar4;
		}
		iVar3++;
	}
	if (func_449(iVar0))
	{
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

void func_554(bool bParam0)
{
	if (!bParam0)
	{
		func_348(15);
	}
	else
	{
		func_288(15);
	}
}

bool func_555(int iParam0)
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

int func_556(int iParam0)
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

Vector3 func_557(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1121664958;
			return -1001732614, -995848948, 1110095430;
		case 1:
			*uParam1 = 1126438620;
			return 1160019160, -996603337, 1112638856;
		case 2:
			*uParam1 = 1135003818;
			return -1012642306, -1011625751, 1118710582;
		case 3:
			*uParam1 = 1133959604;
			return -978566579, -986305801, 1059318451;
		case 4:
			*uParam1 = 1104063811;
			return -1013455978, 1145555283, 1122763001;
		default:
			break;
	}
	return func_631(iParam0);
}

void func_558(int iParam0)
{
	if (!func_484(Global_1149157.f_145, iParam0))
	{
		func_485(&(Global_1149157.f_145), iParam0);
	}
}

void func_559(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_632(vParam0, uParam3))
	{
		func_344(1, bParam4);
	}
}

bool func_560(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

void func_561()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (func_384(1048576, PLAYER::PLAYER_ID()) || Global_1295611.f_2.f_1 == 2)
		{
			func_633();
		}
	}
	if (LAW::GET_WANTED_SCORE(Global_1295619.f_5) > 0)
	{
		if (func_634())
		{
			func_635();
		}
		func_636();
	}
}

void func_562(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887.f_72 = iParam0;
	Global_1572887.f_72.f_9 = iParam1;
	Global_1572887.f_72.f_10 = iParam2;
	if (bParam3)
	{
		func_465();
	}
}

void func_563(struct<2> Param0, bool bParam2)
{
	Global_1572887.f_72.f_11 = { Param0 };
	if (bParam2)
	{
		func_465();
	}
}

void func_564(int iParam0)
{
	Global_1572887.f_72.f_13 = iParam0;
}

void func_565(int iParam0, bool bParam1)
{
	Global_1572887.f_72.f_39 = iParam0;
	if (bParam1)
	{
		func_465();
	}
}

void func_566()
{
	func_408(&(Global_1572887.f_8), 1);
	func_408(&(Global_1572887.f_8), 2f);
	func_465();
}

void func_567()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	iVar0 = func_95(Global_1572887.f_72.f_9);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_265213.f_4[iVar0 /*46*/].f_24;
	if (iVar1 != -5.544348E+20f)
	{
		return;
	}
	iVar2 = Global_265213.f_4[iVar0 /*46*/].f_26;
	if (iVar2 != 8.123318E-38f && iVar2 != -6.183555E+13f)
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 <= 63)
	{
		iVar5 = 0;
		while (iVar5 <= 31)
		{
			if (Global_265213.f_107995.f_1028[iVar4 /*194*/][iVar5 /*6*/] == Global_265213.f_57505[iVar0 /*8*/])
			{
				uVar3 = Global_265213.f_107995.f_13575[iVar4];
				bVar6 = true;
			}
			else
			{
				iVar5++;
			}
		}
		if (bVar6)
		{
		}
		else
		{
			iVar4++;
		}
	}
	func_637(uVar3);
}

int func_568(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_621(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_569(struct<2> Param0)
{
	if (func_638())
	{
		return 0;
	}
	if (!func_471(Param0))
	{
		return 0;
	}
	Global_1051268 = { Param0 };
	return 1;
}

bool func_570(int iParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (!func_449(iParam0))
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

void func_571(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_346(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_486(uParam0->f_17.f_6))
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
	if (func_486(uParam1->f_6))
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
	func_288(0);
	func_288(3);
	Global_1102813.f_3909 = iParam2;
	Global_1102813.f_3910 = bParam3;
	Global_1102813.f_3911 = iParam4;
	func_487(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = { *uParam0 };
	func_488(&(Global_1102813.f_3878));
	Global_1102813.f_3878 = { *uParam1 };
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_489(Global_1102813.f_3839, 36);
	func_490(Global_1102813.f_3878, 36);
}

void func_572(vector3 vParam0, float fParam3, float fParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_639(Global_1295619.f_12, &vVar0, &fVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_483(vParam0, fParam3, vVar0, fVar3, fParam4, fParam5, iParam6, fParam7, fParam8, 1);
}

bool func_573(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT() - 1))
	{
		if (Global_1203937.f_483[iVar0 /*63*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_574(int iParam0)
{
	if (func_640(iParam0, 1))
	{
		func_641(iParam0);
	}
	func_642(iParam0, 1);
}

int func_575(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;

	if (Global_1203937.f_1 != 0)
	{
		return 1;
	}
	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
	{
		if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			GANG::_NETWORK_LEAVE_GANG(true);
		}
		else
		{
			GANG::_NETWORK_LEAVE_GANG(false);
		}
	}
	func_643(iParam0);
	iVar0 = POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT();
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (Global_1203937.f_483[iVar1 /*63*/] == iParam0)
		{
			Global_1203937.f_472 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	Global_1203937.f_14 = { Global_1203937.f_483[Global_1203937.f_472 /*63*/].f_19 };
	Global_1203937.f_14.f_2 = iParam0;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1203937.f_14)))
	{
		iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1203937.f_14));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			iVar3 = GANG::NETWORK_GET_GANG_ID(iVar2);
			Global_1203937.f_14.f_4 = iVar3;
		}
	}
	func_576(4);
	func_577(32);
	func_574(4);
	Var4 = { func_581() };
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1203937.f_483[iVar1 /*63*/].f_19), &Var4) && iParam1 == 1)
	{
		func_577(16);
	}
	return 1;
}

void func_576(int iParam0)
{
	Global_1203937.f_1 = iParam0;
}

void func_577(int iParam0)
{
	func_408(&(Global_1203937.f_3), iParam0);
}

int func_578(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 9.201076E+18f;
	Var0.f_3 = uParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
}

bool func_579(var uParam0, int iParam1, Vector3* vParam2, float* fParam3)
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

void func_580(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_581()
{
	struct<2> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

void func_582(bool bParam0, bool bParam1)
{
	struct<11> Var0;

	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (Global_1203937.f_472 != -1)
		{
			Var0.f_4 = 11;
			Var0.f_7 = Global_1203937.f_483[Global_1203937.f_472 /*63*/];
			Var0.f_5 = Global_1295619.f_10;
			Var0.f_9 = bParam0;
			Var0.f_10 = bParam1;
			func_644(&Var0);
			func_574(5);
		}
	}
	else if (Global_1203937.f_472 != -1)
	{
		func_645(Global_1203937.f_483[Global_1203937.f_472 /*63*/], bParam0, bParam1);
	}
}

void func_583()
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_646(255) };
	if (vVar0.z != 0)
	{
		iVar3 = func_647(PLAYER::PLAYER_ID());
		if ((iVar3 != -1 && Global_1141317[iVar3 /*27*/].f_9 == PLAYER::PLAYER_ID()) && func_648(&vVar0))
		{
			func_649(vVar0.y, -6.178593E-30f, 0, 0);
			return;
		}
	}
}

void func_584(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_365(95));
	if (func_650(iVar0))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iVar0, true);
	}
}

void func_585(vector3 vParam0)
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

void func_586(var uParam0, var uParam1)
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

void func_587(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_526(uParam0, 1);
	func_527(uParam0, 2);
	uParam0->f_2 = 0;
}

char* func_588(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_266(PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)), 4.808429E-35f));
		}
		else
		{
			sVar0 = MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_266(PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)), 4.808429E-35f));
			return func_411(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)));
	}
	sVar0 = MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)));
	return func_411(sVar0, iParam2);
}

char* func_589(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_590(char* sParam0)
{
	return NETWORK::_0xD4022C7286B0DFA2(sParam0, 100, 22);
}

bool func_591(int iParam0, char* sParam1)
{
	char* sVar0;
	int iVar1;

	sVar0 = PLAYER::GET_PLAYER_NAME(iParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar0);
	if (MISC::COMPARE_STRINGS(sVar0, sParam1, false, iVar1) == 0)
	{
		return true;
	}
	return false;
}

char* func_592(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_345(40, iParam0))
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
	if (func_345(40, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1101558[iParam0 /*38*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1101558[iParam0 /*38*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1295619.f_149[iParam0]);
}

struct<8> func_593(int iParam0)
{
	struct<8> Var0;

	if (iParam0 < 0 || iParam0 >= 100)
	{
		return Var0;
	}
	return Global_1835011[iParam0 /*72*/].f_42;
}

struct<8> func_594(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1295619.f_5;
	}
	return Global_263042[iParam0 /*65*/].f_1.f_32;
}

bool func_595(struct<42> Param0, var uParam42)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Param0.f_41))
	{
		return DATABINDING::DATABINDING_IS_ENTRY_VALID(Param0);
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_41);
}

int func_596()
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
	func_496(Global_1940239.f_245.f_14[iVar3 /*43*/]);
	return iVar3;
}

void func_597(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_365(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_365(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(57), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(58), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(60), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(59), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -5.222598E+14f;
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(61), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_365(62), "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_365(63), Param10.f_8);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_365(64), Param10.f_9);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(65), Param10.f_10);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(71), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(66), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -5.222598E+14f;
	}
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_365(68), Param10.f_13);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_365(69), Param10.f_14);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_365(70), Param10.f_15);
}

int func_598(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14, var uParam15, var uParam16)
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

int func_599(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
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

int func_600(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, bool bParam12, bool bParam13)
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

int func_601(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
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

int func_602(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14)
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

int func_603(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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

int func_604()
{
	return Global_1072759.f_23.f_2;
}

int func_605()
{
	return Global_1102813.f_3673;
}

int func_606(int iParam0)
{
	int iVar0;

	if (iParam0 == 10)
	{
		return 8;
	}
	if (iParam0 == 11)
	{
		return 4;
	}
	if (iParam0 == 12)
	{
		return 16;
	}
	if (iParam0 == 13)
	{
		return 32;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_265213.f_107995.f_13510[iVar0] == Global_265189.f_1[iParam0])
		{
			return Global_265213.f_107995.f_1028[iVar0 /*194*/].f_193;
		}
		iVar0++;
	}
	return -1;
}

bool func_607()
{
	return Global_1572887.f_72.f_40 != 1;
}

bool func_608(int iParam0)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (GANG::NETWORK_IS_GANG_ACTIVE(iVar0) && !GANG::NETWORK_IS_GANG_LEADER(iParam0))
	{
		return false;
	}
	return true;
}

void func_609(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1572887.f_72.f_17), bParam0, 22);
}

void func_610(int iParam0)
{
	Global_1572887.f_72.f_15 = iParam0;
}

void func_611()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	Global_1572887.f_72.f_49 = { vVar1 };
}

bool func_612()
{
	if (func_618() != 0)
	{
		return false;
	}
	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
	{
		return false;
	}
	return true;
}

void func_613()
{
	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12 = 0;
}

void func_614(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_117);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	iVar0 = func_651(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_652(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_653(iVar0);
	Var3 = { func_654(iVar1, uVar2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, MISC::VAR_STRING(2, &Var3));
}

int func_615(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_655();
	}
	if (!func_656(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_657(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

int func_616(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (uParam0->f_11 == iParam1)
	{
		func_658(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_95(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_22), {Global_265213.f_4[iVar0 /*46*/]}, 3);
	uParam0->f_32 = { Global_265213.f_4[iVar0 /*46*/].f_7 };
	uParam0->f_40 = Global_265213.f_4[iVar0 /*46*/].f_17;
	uParam0->f_41 = Global_265213.f_4[iVar0 /*46*/].f_25;
	uParam0->f_11 = Global_265213.f_4[iVar0 /*46*/].f_23;
	uParam0->f_12 = Global_265213.f_57505[iVar0 /*8*/];
	uParam0->f_56 = { Global_265213.f_4[iVar0 /*46*/].f_19 };
	uParam0->f_25 = Global_265213.f_4[iVar0 /*46*/].f_29;
	uParam0->f_27 = Global_265213.f_4[iVar0 /*46*/].f_27;
	uParam0->f_28 = Global_265213.f_4[iVar0 /*46*/].f_28;
	uParam0->f_16 = 1;
	uParam0->f_16.f_1 = 0;
	uParam0->f_16.f_4 = iParam4;
	uParam0->f_16.f_2 = Global_265213.f_4[iVar0 /*46*/].f_24;
	uParam0->f_16.f_3 = Global_265213.f_4[iVar0 /*46*/].f_26;
	uParam0->f_21 = Global_265213.f_4[iVar0 /*46*/].f_26;
	uParam0->f_29 = Global_265213.f_4[iVar0 /*46*/].f_35;
	uParam0->f_1 = { Global_265213.f_4[iVar0 /*46*/].f_15 };
	MemCopy(&(uParam0->f_3), {Global_265213.f_4[iVar0 /*46*/].f_4}, 8);
	func_659(&(Global_265213.f_4[iVar0 /*46*/]));
	if (iParam2 != -1)
	{
		if ((uParam0->f_16.f_2 == -218565.1f && func_660(iParam2)) || (uParam0->f_16.f_2 == 9.256025E-25f && func_661(iParam2)))
		{
			uParam0->f_16.f_3 = iParam2;
			uParam0->f_21 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_25 = iParam3;
	}
	iVar1 = func_662(Global_265213.f_57505[iVar0 /*8*/]);
	vVar2 = { func_663(uParam0->f_12) };
	if (iVar1 != -1)
	{
		uParam0->f_48 = { func_664(iVar1) };
	}
	else if (func_665(uParam0->f_12))
	{
		uParam0->f_48 = { func_667(func_666(uParam0->f_12)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_48 = { func_668(&vVar2) };
	}
	else if (uParam0->f_16.f_3 == 8.123318E-38f)
	{
		uParam0->f_48 = { func_669(6.2427E-16f) };
	}
	else if (uParam0->f_16.f_3 == -6.183555E+13f)
	{
		uParam0->f_48 = { func_669(3.23922E+10f) };
	}
	else
	{
		uParam0->f_48 = { func_670(uParam0->f_11) };
		if (!func_471(uParam0->f_48))
		{
			uParam0->f_48 = { func_669(func_671(uParam0->f_16.f_2)) };
		}
	}
	func_672(uParam0);
	func_658(uParam0, 4194304);
	return 1;
}

char* func_617(int iParam0)
{
	int iVar0;

	iVar0 = func_673(iParam0);
	if (iVar0 == Global_265189.f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == Global_265189.f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == Global_265189.f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == Global_265189.f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == Global_265189.f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == Global_265189.f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == Global_265189.f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == Global_265189.f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == Global_265189.f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == Global_265189.f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == Global_265189.f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == Global_265189.f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == Global_265189.f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == Global_265189.f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == Global_265189.f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_618()
{
	return Global_1572887.f_72;
}

char* func_619(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

int func_620(char* sParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = MISC::VAR_STRING(2, sParam0);
	iVar1 = func_674(sVar0, -2, 0, 0, 0, 1);
	return iVar1;
}

bool func_621(struct<2> Param0, bool bParam2)
{
	if (!func_471(Param0))
	{
		return false;
	}
	func_675(bParam2);
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

struct<2> func_622(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_623(int iParam0)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_1 == 2;
}

int func_624(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = MINIGAME::_0x15E90B6A993017AA();
	if (!func_623(iParam0))
	{
		return 0;
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (MINIGAME::_0x10342CC82E8356E9(iVar0, uParam2))
		{
			if (uParam2->f_2 == iParam1)
			{
				func_676(uParam2->f_1, iParam0);
				if (*uParam2 == 1)
				{
					if (uParam2->f_3 > Global_1149303.f_7)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_625(bool bParam0, bool bParam1, bool bParam2)
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

var func_626(int iParam0, int iParam1)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_15[iParam1 /*3*/].f_1;
}

bool func_627(int iParam0)
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

int func_628()
{
	if (func_11() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_629(int iParam0)
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

int func_630(int iParam0, var uParam1)
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

Vector3 func_631(int iParam0)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_7;
}

bool func_632(vector3 vParam0, var uParam3)
{
	if (func_486(vParam0))
	{
		return false;
	}
	if (func_346(255) == 4)
	{
		return false;
	}
	if (func_345(4, 255))
	{
	}
	func_288(4);
	func_677(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { vParam0 };
	Global_1102813.f_3869 = uParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_678(Global_1102813.f_3869, 36);
	return true;
}

void func_633()
{
	int iVar0;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_5))
	{
		return;
	}
	iVar0 = func_679();
	if (iVar0 > 0)
	{
		func_680(-6.064608E-06f, iVar0, 0);
	}
}

bool func_634()
{
	return (func_540(Global_1295619.f_5, 1, 0, 1) && func_681() > 0);
}

void func_635()
{
	int iVar0;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_5))
	{
		return;
	}
	iVar0 = func_681();
	if (iVar0 > 0)
	{
		func_682(iVar0, 0, -5.149929E+33f, 0);
	}
}

void func_636()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	LAW::CLEAR_WANTED_SCORE(iVar0);
	func_683();
}

void func_637(var uParam0)
{
	Global_1940239.f_11605 = uParam0;
}

bool func_638()
{
	return func_471(Global_1051268);
}

bool func_639(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1072759.f_23824.f_383[func_684(vParam0) /*272*/];
	iVar1 = func_578(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_579(uVar0, iVar2, vParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_640(int iParam0, int iParam1)
{
	return func_254(Global_1203937.f_5[iParam0], iParam1);
}

void func_641(int iParam0)
{
	Global_1203937.f_5[iParam0] = 0;
}

void func_642(int iParam0, int iParam1)
{
	func_408(&(Global_1203937.f_5[iParam0]), iParam1);
}

void func_643(int iParam0)
{
	Global_17418.f_55.f_14.f_4 = iParam0;
}

void func_644(var uParam0)
{
	var uVar0;

	*uParam0 = 23;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uVar0 = func_685(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 40, &uVar0);
}

void func_645(var uParam0, bool bParam1, bool bParam2)
{
	if (func_686(1))
	{
		return;
	}
	Global_1203937.f_478 = uParam0;
	func_687(1);
	if (bParam2)
	{
		func_687(4);
	}
	if (bParam1)
	{
		func_687(2);
	}
}

Vector3 func_646(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1144511[func_491() /*83*/].f_38;
	}
	return Global_1144511[iParam0 /*83*/].f_38;
}

int func_647(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

bool func_648(var uParam0)
{
	if (func_688(32) && func_689(uParam0->f_2))
	{
		return false;
	}
	if (*uParam0 > 4)
	{
		return true;
	}
	return false;
}

int func_649(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	vVar0.f_2 = -2;
	vVar0.f_1 = uParam0;
	vVar0.x = func_690(iParam1);
	Global_1142409.f_2036.f_3 = bParam2;
	if (bParam2)
	{
		if (!func_691(vVar0, 1))
		{
			return 0;
		}
		func_692(1);
	}
	if (func_693(vVar0, 0))
	{
		if (iParam3 == 0)
		{
			func_694(vVar0.y);
		}
		return 1;
	}
	return 0;
}

bool func_650(int iParam0)
{
	return iParam0 != 0;
}

int func_651(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_695(Global_1206482.f_78[iVar0 /*20*/].f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_652(int iParam0)
{
	return Global_1206482.f_78[iParam0 /*20*/].f_3;
}

var func_653(int iParam0)
{
	return Global_1205923.f_1[iParam0 /*26*/].f_3;
}

struct<8> func_654(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_696(&Var8, iParam0) && func_697(&Var8)) && func_698(&Var8, uParam1)) && func_699(&Var8))
	{
		func_700(Var8, 1.348491E-37f, &Var0, 1);
	}
	return Var0;
}

void func_655()
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
}

bool func_656(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_702(bParam2, func_701(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_657(int iParam0)
{
	Global_1896762.f_365 = iParam0;
}

void func_658(var uParam0, int iParam1)
{
	uParam0->f_15 = (uParam0->f_15 || iParam1);
}

void func_659(char* sParam0)
{
	StringCopy(&(Global_1572887.f_72.f_60.f_6), sParam0, 32);
}

bool func_660(int iParam0)
{
	if (func_703(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_661(int iParam0)
{
	if (func_704(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_662(int iParam0)
{
	int iVar0;

	if (func_11() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_705(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_663(int iParam0)
{
	struct<2> Var0;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;

	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_706(&Var0))
	{
		return vVar5;
	}
	if (!func_707(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_707(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_708(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_707(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_707(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_708(&Var0, 1);
			if (!func_707(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}
}

struct<2> func_664(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_523();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

bool func_665(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_666(iParam0) != -1;
}

int func_666(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (13 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_709(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_667(int iParam0)
{
	return func_710(iParam0);
}

struct<2> func_668(int iParam0)
{
	var uVar0;
	int iVar5;

	if (!func_706(&uVar0))
	{
		return func_523();
	}
	if (!func_707(&uVar0, 13, 0, 0, 1))
	{
		return func_523();
	}
	if (!func_707(&uVar0, 17, 0, 0, 1))
	{
		return func_523();
	}
	if (!func_707(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_523();
	}
	if (!func_707(&uVar0, 20, 0, 0, 1))
	{
		return func_523();
	}
	if (!func_707(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_523();
	}
	iVar5 = func_711(&uVar0);
	return func_669(iVar5);
}

struct<2> func_669(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_712(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_712(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_712(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_712(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_712(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_712(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_712(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_523();
}

struct<2> func_670(int iParam0)
{
	var uVar0;
	struct<5> Var5;

	if (iParam0 == 0)
	{
		return func_523();
	}
	if (!func_713(&uVar0, 7, iParam0, 3.536333E-36f))
	{
		return func_523();
	}
	func_714(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_523();
	}
	return func_712(Var5.f_3, Var5.f_4);
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 0.007354699f;
		case 395262693:
			return -1.410095E+37f;
		case -933924539:
			return 7.165112E-06f;
		default:
			break;
	}
	return 0;
}

void func_672(var uParam0)
{
	uParam0->f_15 = 0;
}

int func_673(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_265213.f_107995.f_13575[iVar0] == iParam0)
		{
			return Global_265213.f_107995.f_13510[iVar0];
		}
		iVar0++;
	}
	return 0;
}

int func_674(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_675(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_676(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return (iParam0 == -8.282245E+21f || iParam0 == -3.245335E+35f);
		default:
			break;
	}
	return iParam0 == -3.245335E+35f;
}

void func_677(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_678(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_679()
{
	int iVar0;

	iVar0 = Global_1295611.f_2.f_4;
	if (!func_542(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_680(int iParam0, int iParam1, int iParam2)
{
	return func_715(iParam0, iParam1, iParam2);
}

int func_681()
{
	int iVar0;

	iVar0 = func_716(1.353158E-34f, 8.497754E-37f, 1, 0, 1, 0);
	if (!func_542(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_682(int iParam0, char* sParam1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<17> Var6;
	struct<17> Var23;

	iVar0 = -1;
	Var1 = { func_717(3.996812E+36f, 1, 0) };
	Var6 = { func_718(3.996812E+36f, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = fParam2;
	iVar0 = func_719(7.184882E+22f, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var23.f_7 = -5.149929E+33f;
		Var23.f_16 = -1;
		StringCopy(&(Var23.f_12), sParam1, 32);
		func_720(iVar0, Var23);
	}
	return iVar0;
}

void func_683()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(false);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_721(iVar0))
		{
			func_722(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(true);
}

int func_684(vector3 vParam0)
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

var func_685(int iParam0, int iParam1)
{
	return func_723(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

bool func_686(int iParam0)
{
	return func_254(Global_1203937.f_4, iParam0);
}

void func_687(int iParam0)
{
	func_408(&(Global_1203937.f_4), iParam0);
}

bool func_688(int iParam0)
{
	return func_484(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_689(int iParam0)
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

int func_690(int iParam0)
{
	switch (iParam0)
	{
		case -1896177107:
			return 4;
		case 2042309940:
			return 7;
		default:
			break;
	}
	return -1;
}

bool func_691(struct<2> Param0, var uParam2, int iParam3)
{
	if (func_724())
	{
		return false;
	}
	if (func_725(Param0.f_1, Param0))
	{
		return false;
	}
	if (!func_726(iParam3, 1))
	{
		return false;
	}
	if (func_727())
	{
		return false;
	}
	if (func_688(64))
	{
		if (!func_729(func_728(Param0), 1, 8.497754E-37f))
		{
			return false;
		}
	}
	return true;
}

void func_692(int iParam0)
{
	Global_1142409.f_2027.f_5 = iParam0;
}

bool func_693(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_726(0, 1))
	{
		return false;
	}
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 = { vParam0 };
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_730();
	if (iParam3 == 1)
	{
		func_731(2);
	}
	else
	{
		Global_1147168.f_330.f_6 = 1;
		func_732(2);
	}
	if (!func_733(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_732(8);
		func_734();
	}
	if (!func_735(4) && (func_735(8) || func_735(16)))
	{
		func_731(4);
	}
	else
	{
		func_732(4);
	}
	if (func_484(Global_1147168.f_8, 1))
	{
		func_731(1);
	}
	else
	{
		func_732(1);
	}
	func_736(6);
	return true;
}

void func_694(int iParam0)
{
	float fVar0;

	if (!func_688(64))
	{
		return;
	}
	switch (iParam0)
	{
		case joaat("BAYOU_NAWAS_CAMP"):
			fVar0 = -658567.7f;
			break;
		case joaat("BIG_VALLEY_CAMP"):
			fVar0 = -6.633661E+09f;
			break;
		case joaat("CHOLLA_SPRINGS_CAMP"):
			fVar0 = 1.598184E-12f;
			break;
		case joaat("CUMBERLAND_FOREST_CAMP"):
			fVar0 = -3.118866E+30f;
			break;
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			fVar0 = -2.23047E+26f;
			break;
		case joaat("GREAT_PLAINS_CAMP"):
			fVar0 = 2.254807E-31f;
			break;
		case joaat("GRIZZLIES_CAMP"):
			fVar0 = 3.042425E-27f;
			break;
		case joaat("HEARTLAND_CAMP"):
			fVar0 = 3.204831E-34f;
			break;
		case joaat("HENNIGANS_STEAD_CAMP"):
			fVar0 = -8.605496E+36f;
			break;
		case joaat("RIO_BRAVO_CAMP"):
			fVar0 = 5.683121E-11f;
			break;
		case joaat("ROANOKE_RIDGE_CAMP"):
			fVar0 = 3.597856E-15f;
			break;
		case joaat("SCARLETT_MEADOWS_CAMP"):
			fVar0 = 2.814903E-14f;
			break;
		case joaat("TALL_TREES_CAMP"):
			fVar0 = 1.113392E+23f;
			break;
		default:
			return;
	}
	func_738(func_737(4.881781E+08f, fVar0), 1);
}

bool func_695(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_696(bool bParam0, int iParam1)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206482.f_455))
	{
		return false;
	}
	*bParam0 = Global_1206482.f_455;
	bParam0->f_2 = -0.4166105f;
	bParam0->f_3 = func_739(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_697(bool bParam0)
{
	bParam0->f_2 = -5.135098E+27f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_698(bool bParam0, var uParam1)
{
	bParam0->f_2 = -2.751128E-24f;
	bParam0->f_3 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_699(bool bParam0)
{
	bParam0->f_2 = 6.889182E+22f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_700(vector3 vParam0, int iParam3, var uParam4, float fParam5, char* sParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_701()
{
	return Global_1915643.f_20643;
}

int func_702(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-1.072798E+21f))
	{
		return 0;
	}
	iVar0 = Global_1295619.f_149[Global_1295619];
	iVar1 = Global_1295619.f_3;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::IS_PED_INCAPACITATED(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
			{
				return 0;
			}
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1102813.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915643.f_20638 || Global_1915643.f_22504.f_1)
		{
			return 0;
		}
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
		{
			return 0;
		}
	}
	if (func_740())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940072.f_10 || Global_1940072.f_11) || Global_1940072.f_12) || Global_1940072.f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1235672.f_9479 != -1)
		{
			return 0;
		}
		if (Global_1138658[iVar4 /*56*/].f_34 & 1 != 0 && Global_1138658[iVar4 /*56*/].f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1140755.f_293)
		{
			return 0;
		}
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
		{
			return 0;
		}
		else if (Global_1572887.f_72.f_40 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				return 0;
			}
			if (Global_1048581)
			{
				return 0;
			}
			if (Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_703(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
			return 4;
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

int func_704(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

int func_705(int iParam0)
{
	if (!func_741(iParam0))
	{
		return 0;
	}
	if (func_11() == -1)
	{
		return 0;
	}
	return Global_1835011[iParam0 /*72*/].f_51;
}

bool func_706(bool bParam0)
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

bool func_707(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_708(bool bParam0, int iParam1)
{
	bParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
}

int func_709(int iParam0)
{
	return Global_1295802[iParam0 /*37*/].f_9;
}

struct<2> func_710(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var0, &(Global_1295802[iParam0 /*37*/].f_6), 2);
	return Var0;
}

var func_711(bool bParam0)
{
	return func_742(bParam0, 67, 1);
}

struct<2> func_712(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_743(iParam0, &(Global_1072759.f_573), func_556(iParam1));
			break;
		case 3:
			Var0.f_1 = func_743(iParam0, &(Global_1072759.f_573.f_602), func_556(iParam1));
			break;
		case 4:
			Var0.f_1 = func_743(iParam0, &(Global_1072759.f_573.f_2104), func_556(iParam1));
			break;
		case 5:
			Var0.f_1 = func_743(iParam0, &(Global_1072759.f_573.f_12606), func_556(iParam1));
			break;
		case 6:
			Var0.f_1 = func_743(iParam0, &(Global_1072759.f_573.f_12908), func_556(iParam1));
			break;
		case 7:
			Var0.f_1 = func_743(iParam0, &(Global_1072759.f_573.f_15910), func_556(iParam1));
			break;
		case 8:
			Var0.f_1 = func_743(iParam0, &(Global_1072759.f_573.f_16512), func_556(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_523();
	}
	return Var0;
}

bool func_713(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	*bParam0 = Global_1149417.f_7;
	bParam0->f_2 = fParam3;
	bParam0->f_3 = func_744(iParam1);
	bParam0->f_4 = iParam2;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

void func_714(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_745(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_746(iVar0);
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
			uParam2->f_5 = func_747(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_748(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_749(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_750(iVar0);
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

int func_715(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1235672.f_9085.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 5.988193E+11f)
	{
		iVar0 = Global_1235672.f_9085.f_99;
		iVar1 = Global_1235672.f_9085.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (Global_1235672.f_9085.f_16[iVar0 /*8*/] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1235672.f_9085.f_99;
	Global_1235672.f_9085.f_16[iVar2 /*8*/] = iParam0;
	Global_1235672.f_9085.f_16[iVar2 /*8*/].f_5 = iParam2;
	Global_1235672.f_9085.f_16[iVar2 /*8*/].f_6 = iParam1;
	Global_1235672.f_9085.f_97++;
	Global_1235672.f_9085.f_99 = (Global_1235672.f_9085.f_99 + 1 % 10);
	return iVar2;
}

int func_716(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -982726.7f) && func_751(bParam0, 8.497754E-37f))
	{
		iParam1 = 8.497754E-37f;
	}
	if (func_752(bParam0) || func_753(bParam0, 2.791187f))
	{
		return func_755(func_754(bParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_756(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

struct<5> func_717(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_757(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_758(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_759(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_760(bParam1) };
			if (iParam2 && func_761(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_762(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_762(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_763(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_764(bParam1) };
			switch (func_765(bParam0))
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
			if (func_766(bParam0, -2.580501E-27f))
			{
				Var0 = { func_759(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_766(bParam0, -4.220332E-15f))
			{
				Var0 = { func_759(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_759(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_766(bParam0, -3.171238E-21f))
			{
				Var0 = { func_759(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_767(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_766(bParam0, -3.171238E-21f))
			{
				Var0 = { func_759(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<17> func_718(bool bParam0, struct<4> Param1, float fParam5, int iParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_759(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_768(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_1() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_719(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_769(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_771(func_770(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_772(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_720(int iParam0, struct<17> Param1)
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

bool func_721(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_722(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(false);
	if (!func_721(iParam0))
	{
		return;
	}
	func_773(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_449(iVar0))
		{
			if (func_775(func_774(iVar0, 1, 1)) == iParam0)
			{
				func_776(iVar0, 0);
				func_777(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_778(iVar1))
		{
			if (func_779(iVar1) == iParam0)
			{
				func_780(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(true);
}

var func_723(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_263() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_781());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_781());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_781());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_782(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_390(iVar2))
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
				if (iVar9 & 8192 != 0 && func_346(iVar2) != 1)
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
					if (!func_783(iVar10))
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

bool func_724()
{
	bool bVar0;

	bVar0 = (((Global_1142409.f_2019 == 2 || (Global_1142409.f_2019 >= 6 && Global_1142409.f_2019 <= 11)) || Global_1142409.f_2019 == 12) || (Global_1142409.f_2019 >= 13 && Global_1142409.f_2019 <= 19));
	return bVar0;
}

bool func_725(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	vVar1 = { func_785(func_784(iVar0)) };
	return (vVar1.y == iParam0 && iParam1 == vVar1.x);
}

bool func_726(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_324() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_688(16))
	{
		return false;
	}
	if (func_12())
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.406766E+36f))
		{
			return false;
		}
	}
	if (!func_786())
	{
		return false;
	}
	if (func_787(16))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_484(Global_1147168.f_8, 1))
	{
		return false;
	}
	if (func_788())
	{
		return false;
	}
	return true;
}

bool func_727()
{
	return Global_1142409.f_2027.f_7 == 3;
}

bool func_728(int iParam0)
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

bool func_729(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = (func_789(bParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_542(iVar0);
	}
	return bVar1;
}

void func_730()
{
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4 = 0;
}

void func_731(int iParam0)
{
	func_485(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

void func_732(int iParam0)
{
	func_440(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

bool func_733(int iParam0)
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

void func_734()
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

bool func_735(int iParam0)
{
	return func_484(Global_1147168.f_8, iParam0);
}

void func_736(int iParam0)
{
	Global_1142409.f_2019 = iParam0;
}

struct<2> func_737(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_738(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5.302326E+22f;
		case 1:
			return 8.819231E+30f;
		case 2:
			return -8.423986E-11f;
		case 3:
			return 2.893486E+20f;
		case 4:
			return -1.396906E+17f;
		case 5:
			return -1629.817f;
		case 6:
			return -4.788236E-29f;
		case 15:
			return -2.762819E+17f;
		case 16:
			return 8.72967E-06f;
		case 17:
			return 1.393353E+14f;
		case 18:
			return -3.120739E-36f;
		case 8:
			return -1.066212E+19f;
		case 10:
			return NaNf;
		case 9:
			return 0.003490584f;
		case 11:
			return 2.547941E+33f;
		case 12:
			return -5.747956E-23f;
		case 13:
			return -7.517295E+37f;
		case 14:
			return 1.365207E+21f;
		case 7:
			return -5.421841E+33f;
		default:
			break;
	}
	return 0;
}

bool func_740()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

bool func_741(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

var func_742(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

int func_743(int iParam0, var uParam1, int iParam2)
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

int func_744(int iParam0)
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

int func_745(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_790(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_746(int iParam0)
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

int func_747(int iParam0)
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

int func_748(int iParam0)
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

int func_749(int iParam0)
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

int func_750(int iParam0)
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

bool func_751(bool bParam0, int iParam1)
{
	if (!func_791(bParam0, 0))
	{
		return false;
	}
	if (func_752(bParam0) || func_753(bParam0, 2.791187f))
	{
		return func_792(func_754(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

bool func_752(bool bParam0)
{
	if (func_753(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

int func_753(bool bParam0, int iParam1)
{
	if (!func_791(bParam0, 0))
	{
		return func_794(func_793(bParam0), iParam1);
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

bool func_754(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_791(bParam0, 0))
	{
		return func_795(func_793(bParam0), bParam1);
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

int func_755(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_796(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_756(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_791(bParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1);
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
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(bParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_797(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

struct<4> func_757(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_798(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_759(2.982335E+09f, func_1(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_759(2.982335E+09f, func_1(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_759(2.982335E+09f, func_1(), -5.45926E-19f, bParam0);
}

int func_758(bool bParam0)
{
	vector3 vVar0;

	if (!func_791(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_759(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_791(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_798(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_760(bool bParam0)
{
	int iVar0;

	iVar0 = func_798(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_759(8.681942E-06f, func_757(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_759(8.681942E-06f, func_757(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_759(8.681942E-06f, func_757(bParam0), -1.942248E+12f, 0);
}

int func_761(bool bParam0, bool bParam1)
{
	if (func_765(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_799();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_762(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_800(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_763(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_801(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_764(bool bParam0)
{
	int iVar0;

	iVar0 = func_798(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_759(3.507197E-29f, func_757(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_759(3.507197E-29f, func_757(bParam0), 12999093, 0);
}

int func_765(bool bParam0)
{
	struct<2> Var0;

	if (!func_791(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_766(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_765(bParam0);
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
			if (func_802(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_767(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_803(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_768(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_804(func_793(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_769(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_805(iParam1->f_8, iParam0, iVar0, 2048) || func_805(iParam1->f_8, iParam0, iVar0, 32768)) || func_805(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_805(iParam1->f_8, iParam0, iVar0, 4) || func_805(iParam1->f_8, iParam0, iVar0, 256)) || func_805(iParam1->f_8, iParam0, iVar0, 65536)) || func_805(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_805(iParam1->f_8, iParam0, iVar0, 1) || func_805(iParam1->f_8, iParam0, iVar0, 8)) || func_805(iParam1->f_8, iParam0, iVar0, 65536)) || func_805(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_805(iParam1->f_8, iParam0, iVar0, 1) || func_805(iParam1->f_8, iParam0, iVar0, 16)) || func_805(iParam1->f_8, iParam0, iVar0, 2)) || func_805(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_805(iParam1->f_8, iParam0, iVar0, 8) || func_805(iParam1->f_8, iParam0, iVar0, 4096)) || func_805(iParam1->f_8, iParam0, iVar0, 256)) || func_805(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_770(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_771(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_806(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_806(iParam1, 2, 0, 0);
	return -1;
}

int func_772(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_806(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_773(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_721(iParam0))
	{
		return;
	}
	if (func_807(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_808(iParam0, 1);
	}
	else
	{
		func_809(iParam0, 1);
	}
	func_810(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_779(iVar0) == iParam0)
		{
			func_780(iVar0, 0);
		}
		iVar0++;
	}
}

int func_774(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 81:
			if (func_811(iParam0))
			{
				return 5.727499E-28f;
			}
			else
			{
				return -4.550262E-15f;
			}
			break;
		case 111:
			if (func_811(iParam0))
			{
				return -2.213167E-09f;
			}
			else
			{
				return -1.951939E-33f;
			}
			break;
		case 5:
			if (func_11() != -1 && func_812() == 7.153792E+09f)
			{
				return 7.153792E+09f;
			}
			else
			{
				return 5.579046E+17f;
			}
			break;
		case 66:
			return 9.269587E-37f;
		case 83:
			return 7.668727E+24f;
		case 26:
			return -1.3254E+18f;
		case 40:
			if (!bParam1 || func_11() != -1)
			{
				return 1.225169E+20f;
			}
			if (func_813(44))
			{
				return 1.225169E+20f;
			}
			else
			{
				return 2.517126E+23f;
			}
			break;
		case 98:
			if (func_11() != -1)
			{
				return 11802.65f;
			}
			else
			{
				return 3.581493E+20f;
			}
			break;
		case 70:
			return -5.202225E+07f;
		case 74:
			return 1.515653E+17f;
		case 99:
			return 0.05905914f;
		case 101:
			return -4.029773E+31f;
		case 62:
			return 1.957643E-10f;
		case 3:
			return -12802.21f;
		case 33:
			return 8.374734E-13f;
		case 87:
			if (func_11() != -1)
			{
				return 11802.65f;
			}
			else
			{
				return 6.753505E-13f;
			}
			break;
		case 37:
			return 2.333444E-32f;
		case 60:
			if (func_11() != -1)
			{
				return -0.004497551f;
			}
			else
			{
				return 3.93134E+35f;
			}
			break;
		case 135:
			return 0.0002236268f;
		case 127:
			return -4.581088E+29f;
		case 131:
			return 4.061754E+21f;
		case 121:
			return 6.18694E-30f;
		case 136:
			if (func_11() != -1)
			{
				return -2.363869E+07f;
			}
			if (!bParam1)
			{
				return 0.03422423f;
			}
			if (func_813(44))
			{
				return 0.03422423f;
			}
			else
			{
				return 4.526744E+20f;
			}
			break;
		case 22:
			return 0.0002714096f;
		case 39:
			return -9.790009E+20f;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -2.676368E-33f;
	}
	if (bParam2)
	{
		iVar0 = func_814(iParam0);
		if (iVar0 != -1)
		{
			return func_815(iVar0, bParam1);
		}
	}
	return 0;
}

int func_775(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

void func_776(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_449(iParam0))
	{
		return;
	}
	bVar0 = func_453(iParam0, 1.504633E-36f);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_817(iParam0, func_816());
			func_818(iParam0, 1.504633E-36f);
		}
	}
	else if (bVar0)
	{
		func_550(iParam0, 1.504633E-36f);
		func_817(iParam0, -15);
	}
	func_819(iParam0);
}

void func_777(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_449(iParam0))
	{
		return;
	}
	if (func_820(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_6))
	{
		iVar0 = Global_1887363[iParam0 /*36*/].f_6;
	}
	else
	{
		iVar0 = func_821(iParam0);
	}
	bVar1 = func_453(iParam0, 9.403955E-38f);
	if (bParam1)
	{
		iVar2 = func_822(iParam0);
		if (iParam2 > iVar2)
		{
			func_823(iParam0, func_816());
			func_824(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_818(iParam0, 9.403955E-38f);
			if (VOLUME::DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_550(iParam0, 9.403955E-38f);
		func_823(iParam0, -15);
		if (VOLUME::DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_825(iParam0);
}

bool func_778(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_780(int iParam0, bool bParam1)
{
	if (!func_778(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_826(iParam0, 1);
	}
	else
	{
		if (func_827(iParam0))
		{
			return;
		}
		func_828(iParam0, 1);
	}
	func_829(iParam0, bParam1);
}

char* func_781()
{
	return "unnamed";
}

int func_782(int iParam0)
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

bool func_783(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_830(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_831(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

int func_784(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		return func_647(PLAYER::PLAYER_ID());
	}
	return func_832(GANG::NETWORK_GET_GANG_LEADER(iParam0));
}

Vector3 func_785(int iParam0)
{
	vector3 vVar0;

	if (!func_833(iParam0))
	{
		return vVar0;
	}
	return Global_1141317[iParam0 /*27*/].f_1;
}

bool func_786()
{
	return !func_688(2);
}

bool func_787(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_788()
{
	int iVar0;

	iVar0 = func_647(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1141317[iVar0 /*27*/].f_18.f_1 != 0 && func_484(Global_1141317[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

int func_789(bool bParam0, bool bParam1, int iParam2)
{
	if (!func_791(bParam0, 0))
	{
		return 0;
	}
	return func_716(bParam0, iParam2, 1, bParam1, 1, 0);
}

bool func_790(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_834(iParam0, uParam1, &uVar0))
	{
		func_835(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_791(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_792(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_836(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_837(bParam0, iParam1);
	}
	return true;
}

bool func_793(bool bParam0)
{
	return bParam0;
}

int func_794(bool bParam0, int iParam1)
{
	if (!func_804(bParam0, 2))
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

bool func_795(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_804(bParam0, 2))
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

bool func_796(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_836(bParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1);
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
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(bParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_838(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_797(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_765((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_798(bool bParam0)
{
	if (func_11() == -1)
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

int func_799()
{
	if (func_839(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_800(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_791(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_768(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_759(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_798(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_798(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_801(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_798(0);
	*iParam1 = { func_759(bParam0, func_760(0), fParam3, 0) };
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

bool func_802(bool bParam0, int iParam1, int iParam2)
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

int func_803(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_798(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_804(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_805(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_484(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_806(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_840(iParam0, iParam1, iParam2, iParam3);
}

bool func_807(int iParam0, int iParam1)
{
	if (!func_721(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1) != 0;
}

void func_808(int iParam0, int iParam1)
{
	if (!func_721(iParam0))
	{
		return;
	}
	if (!func_807(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_198[iParam0 /*12*/].f_5 = (Global_38.f_198[iParam0 /*12*/].f_5 || iParam1);
		return;
	}
	Global_1072759.f_21262[iParam0 /*12*/].f_5 = (Global_1072759.f_21262[iParam0 /*12*/].f_5 || iParam1);
}

void func_809(int iParam0, int iParam1)
{
	if (!func_721(iParam0))
	{
		return;
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_198[iParam0 /*12*/].f_5 = (Global_38.f_198[iParam0 /*12*/].f_5 - (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1));
		return;
	}
	Global_1072759.f_21262[iParam0 /*12*/].f_5 = (Global_1072759.f_21262[iParam0 /*12*/].f_5 - (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1));
}

void func_810(int iParam0, bool bParam1)
{
	if (!func_721(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_842(func_841(iParam0));
	}
	else
	{
		func_843(func_841(iParam0));
	}
}

bool func_811(int iParam0)
{
	if (!func_449(iParam0))
	{
		return false;
	}
	return func_453(iParam0, 9.403955E-38f);
}

int func_812()
{
	return Global_1939089.f_26;
}

bool func_813(int iParam0)
{
	if (!func_844(iParam0))
	{
		return false;
	}
	return func_845(iParam0);
}

int func_814(int iParam0)
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
	else if (iParam0 <= 121)
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

int func_815(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.381375E-38f;
		case 1:
			return 0.1178391f;
		case 2:
			return 3.109246E-21f;
		case 3:
			return -6.153412E-38f;
		case 4:
			if (!bParam1 || func_11() != -1)
			{
				return -7.767989E-09f;
			}
			if (func_813(44))
			{
				return -7.767989E-09f;
			}
			else
			{
				return -2.93388E-24f;
			}
			break;
		case 5:
			return -0.004497551f;
		case 6:
			return -0.004497551f;
		case 7:
			return -0.004497551f;
		case 8:
			return 1.202762E-19f;
		case 9:
			return -8.461319E-12f;
		case 10:
			return 11802.65f;
		case 11:
			return 3.193451E+19f;
		case 12:
			if (!bParam1 || func_11() != -1)
			{
				return -3.267154E+15f;
			}
			if (func_813(44))
			{
				return -3.267154E+15f;
			}
			else
			{
				return 6.111615E-34f;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_11() != -1)
			{
				return -2.363869E+07f;
			}
			if (func_813(44))
			{
				return -2.363869E+07f;
			}
			else
			{
				return -5.573858E-20f;
			}
			break;
	}
	return 0;
}

int func_816()
{
	return Global_1902565;
}

void func_817(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/].f_2 = iParam1;
}

void func_818(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] || fParam1);
	}
	else
	{
		Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] || fParam1);
	}
}

void func_819(int iParam0)
{
	if (!func_449(iParam0))
	{
		return;
	}
	if (func_846(iParam0))
	{
		func_847(iParam0);
	}
	else
	{
		func_848(iParam0);
	}
}

bool func_820(int iParam0)
{
	if (!func_449(iParam0))
	{
		return false;
	}
	return func_453(iParam0, 2.350989E-38f);
}

int func_821(int iParam0)
{
	if (!func_449(iParam0))
	{
		return 0;
	}
	return Global_1887363[iParam0 /*36*/].f_4;
}

int func_822(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_449(iParam0))
	{
		return 0;
	}
	iVar0 = func_849(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_851(func_850(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_823(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/].f_1 = iParam1;
}

void func_824(int iParam0, int iParam1)
{
	if (!func_449(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_8130[iParam0 /*11*/].f_3 = iParam1;
}

void func_825(int iParam0)
{
	if (!func_449(iParam0))
	{
		return;
	}
	if (func_811(iParam0) && func_852(iParam0))
	{
		func_842(func_853(iParam0, 0));
	}
	else
	{
		func_843(func_853(iParam0, 0));
	}
}

void func_826(int iParam0, int iParam1)
{
	if (!func_778(iParam0))
	{
		return;
	}
	if (!func_854(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_271[iParam0] = (Global_38.f_271[iParam0] || iParam1);
		return;
	}
	Global_1072759.f_21335[iParam0] = (Global_1072759.f_21335[iParam0] || iParam1);
}

bool func_827(int iParam0)
{
	if (!func_778(iParam0))
	{
		return false;
	}
	return func_854(iParam0, 2);
}

void func_828(int iParam0, int iParam1)
{
	if (!func_778(iParam0))
	{
		return;
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_271[iParam0] = (Global_38.f_271[iParam0] - (Global_38.f_271[iParam0] && iParam1));
		return;
	}
	Global_1072759.f_21335[iParam0] = (Global_1072759.f_21335[iParam0] - (Global_1072759.f_21335[iParam0] && iParam1));
}

void func_829(int iParam0, bool bParam1)
{
	float fVar0;

	if (!func_778(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	fVar0 = func_855(iParam0);
	if (bParam1)
	{
		func_842(fVar0);
	}
	else
	{
		func_843(fVar0);
	}
}

bool func_830(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_831(int iParam0)
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
		func_856(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_857(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

int func_832(int iParam0)
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

bool func_833(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_834(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_744(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_835(bool bParam0, int iParam1, var uParam2)
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

bool func_836(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_837(bool bParam0, int iParam1)
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
		if (Var0[iVar474 /*47*/] == iParam1)
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

void func_838(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_765((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_839(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_858(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_798(bParam1), iParam0, bParam3);
}

void func_840(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_859(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1.068233E-26f;
		case 3:
			return -8.540818E+13f;
		case 1:
			return 11.19643f;
		case 0:
			return 0.004328025f;
		case 4:
			return 15.34966f;
		case 5:
			return -1.716426E-27f;
		default:
			break;
	}
	return 0;
}

void func_842(int iParam0)
{
	float fVar0;

	if (func_209(iParam0) == 62)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-0.005648932f, -4.726257E-15f);
		MAP::_MAP_ENABLE_REGION_BLIP(-24.81605f, -4.726257E-15f);
		MAP::_MAP_ENABLE_REGION_BLIP(-7.185494E-26f, -4.726257E-15f);
	}
	else
	{
		fVar0 = -4.726257E-15f;
		if (((func_210(iParam0) == 4 || func_210(iParam0) == 12) || func_779(func_210(iParam0)) == 4) || (func_854(func_210(iParam0), 8) && ((func_210(iParam0) == 2 || func_210(iParam0) == 0) || func_210(iParam0) == 10)))
		{
			fVar0 = -1.036581E-08f;
		}
		MAP::_MAP_ENABLE_REGION_BLIP(iParam0, fVar0);
	}
}

void func_843(int iParam0)
{
	if (func_209(iParam0) == 62)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(-0.005648932f);
		MAP::_MAP_DISABLE_REGION_BLIP(-24.81605f);
		MAP::_MAP_DISABLE_REGION_BLIP(-7.185494E-26f);
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, -1.036581E-08f) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, -4.726257E-15f))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iParam0);
	}
}

bool func_844(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_845(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

bool func_846(int iParam0)
{
	if (!func_449(iParam0))
	{
		return false;
	}
	return func_453(iParam0, 1.504633E-36f);
}

void func_847(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_96(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_510(cVar0);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(sVar8), -4.726257E-15f);
}

void func_848(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_96(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_510(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, -1.036581E-08f) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, -4.726257E-15f))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iVar9);
	}
}

int func_849(int iParam0)
{
	if (!func_449(iParam0))
	{
		return 0;
	}
	if (func_820(iParam0))
	{
		return -1;
	}
	return Global_8130[iParam0 /*11*/].f_3;
}

int func_850(int iParam0)
{
	if (!func_449(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_14 == -1)
	{
		return Global_8130[iParam0 /*11*/].f_1;
	}
	return Global_1072759.f_19611[iParam0 /*11*/].f_1;
}

int func_851(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_860(iParam0))
	{
		return 0;
	}
	func_861(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 1114636288) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 1114636288)) + ((BUILTIN::TO_FLOAT(iVar3) * 1103101952) * 1114636288)) + (((BUILTIN::TO_FLOAT(iVar4) * 1106477056) * 1103101952) * 1114636288)) + (((BUILTIN::TO_FLOAT(iVar5) * 1136041984) * 1103101952) * 1114636288));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

bool func_852(int iParam0)
{
	if (!func_449(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return true;
	}
	return false;
}

int func_853(int iParam0, bool bParam1)
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

bool func_854(int iParam0, int iParam1)
{
	if (!func_778(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_271[iParam0] && iParam1) != 0;
	}
	return (Global_1072759.f_21335[iParam0] && iParam1) != 0;
}

float func_855(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.087393E-14f;
		case 1:
			return -1.259349E-30f;
		case 2:
			return 1.498807E-37f;
		case 3:
			return 1.264142E+30f;
		case 4:
			return 3.69772E-30f;
		case 5:
			return -1.30807E-28f;
		case 6:
			return -8.966356E-27f;
		case 7:
			return -2.697481E+12f;
		case 8:
			return -1663469f;
		case 9:
			return 4.089406E+30f;
		case 10:
			return 1.82543E-09f;
		case 11:
			return 7.133003E-32f;
		case 12:
			return 9.458759E+32f;
		case 15:
			return -1.888375E-23f;
		case 13:
			return 0.001473694f;
		case 16:
			return 1.008257E-07f;
		case 14:
			return -2.892827E+12f;
		default:
			break;
	}
	return 3.540176E+25f;
}

void func_856(int iParam0)
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
	func_857(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_857(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_858(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_859(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_862(&(uParam0->f_4));
}

bool func_860(int iParam0)
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
	iVar0 = func_863(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_864(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_865(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_866(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_867(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_868(iParam0);
	if (iVar5 < 1 || iVar5 > func_869(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_861(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_870(func_816(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_862(var uParam0)
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

int func_863(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_864(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_865(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_866(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_261(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_867(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_868(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_869(int iParam0, int iParam1)
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

void func_870(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_871(iParam0, iParam1, 1))
	{
		iVar0 = func_867(iParam1);
		iVar1 = func_866(iParam0);
		iVar2 = (func_866(iParam0) - func_866(iParam1));
		iVar3 = (func_867(iParam0) - func_867(iParam1));
		iVar4 = (func_868(iParam0) - func_868(iParam1));
		iVar5 = (func_865(iParam0) - func_865(iParam1));
		iVar6 = (func_864(iParam0) - func_864(iParam1));
		iVar7 = (func_863(iParam0) - func_863(iParam1));
	}
	else
	{
		iVar0 = func_867(iParam0);
		iVar1 = func_866(iParam1);
		iVar2 = (func_866(iParam1) - func_866(iParam0));
		iVar3 = (func_867(iParam1) - func_867(iParam0));
		iVar4 = (func_868(iParam1) - func_868(iParam0));
		iVar5 = (func_865(iParam1) - func_865(iParam0));
		iVar6 = (func_864(iParam1) - func_864(iParam0));
		iVar7 = (func_863(iParam1) - func_863(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_869(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_872(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 1094713344 /* Float: 12f */));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

bool func_871(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_860(iParam1) || !func_860(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_872(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

