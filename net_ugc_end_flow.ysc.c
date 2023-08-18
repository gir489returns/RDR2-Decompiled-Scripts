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
	bool bLocal_13 = false;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 1224195223;
	var uLocal_18 = 1825312110;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 4;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	struct<233> Local_32 = { 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	char* sLocal_267 = NULL;
	vector3 vLocal_268 = { 0f, 0f, 0f };
	vector3 vLocal_271 = { 0f, 0f, 0f };
	vector3 vLocal_274 = { 0f, 0f, 0f };
	int iLocal_277 = 0;
	float fLocal_278 = 0f;
	float fLocal_279 = 0f;
	float fLocal_280 = 0f;
	float fLocal_281 = 0f;
	char cLocal_282[64] = "";
	char cLocal_290[64] = "";
	float fLocal_298 = 0f;
	float fLocal_299 = 0f;
	float fLocal_300 = 0f;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	float fLocal_305 = 0f;
	float fLocal_306 = 0f;
	int iLocal_307 = 0;
	float fLocal_308 = 0f;
	float fLocal_309 = 0f;
	float fLocal_310 = 0f;
	float fLocal_311 = 0f;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	var uLocal_317 = 0;
	int iLocal_318 = 0;
	var uLocal_319 = 0;
	struct<18> Local_320[4];
	vector3 vLocal_393 = { 0f, 0f, 0f };
	int iLocal_396 = 0;
	char cLocal_397[16] = "";
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	struct<9> Local_415 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	var uLocal_441[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_474[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_507[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_540 = 0;
	struct<5> Local_541[10];
	struct<5> Local_592[2];
	int iLocal_603[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_620[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_637[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_646[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_655[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_672[4] = { 0, 0, 0, 0 };
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	bool bLocal_680 = false;
	int iLocal_681 = 0;
	float fLocal_682 = 0f;
	float fLocal_683 = 0f;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_14 = GRAPHICS::_ANIMPOSTFX_GET_STACKHASH("MP_Trans_SceneToPhoto");
	iLocal_15 = GRAPHICS::_ANIMPOSTFX_GET_STACKHASH("MP_Trans_WinLose");
	iLocal_266 = -1;
	sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
	vLocal_268 = { -1005515571, -983390208, 1117774152 /* Float: 79.94f */ };
	vLocal_271 = { -1005241516, -983338715, 1117873727 };
	vLocal_274 = { -1005830144 /* Float: -561f */, -983089152 /* Float: -3700f */, 1118175232 /* Float: 83f */ };
	iLocal_277 = -1.779602E-20f;
	fLocal_278 = -6.857415E-20f;
	fLocal_279 = -2.292529E-28f;
	fLocal_280 = 2.596848E-23f;
	StringCopy(&cLocal_282, "mp_winlose_", 64);
	StringCopy(&cLocal_290, "mp_winlose", 64);
	fLocal_298 = 3.78495f;
	fLocal_299 = 3.78495f;
	fLocal_300 = 1.160596E+11f;
	iLocal_307 = 1;
	iLocal_312 = -1;
	StringCopy(&cLocal_397, "UIC", 16);
	iLocal_439 = PLAYER::GET_PLAYER_INDEX();
	iLocal_440 = PLAYER::GET_PLAYER_PED(iLocal_439);
	fLocal_682 = 1f;
	fLocal_683 = 1f;
	func_1(1);
	func_2();
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(32);
	while (!func_3())
	{
		if (func_4())
		{
			if (func_5())
			{
				if (func_6())
				{
					func_7();
				}
				else
				{
					func_8();
				}
			}
		}
		func_9();
		if (MISC::IS_BIT_SET(iLocal_433, 3))
		{
			func_10();
		}
		BUILTIN::WAIT(0);
	}
	func_11();
	func_12();
	func_1(0);
	func_13();
}

void func_1(int iParam0)
{
	Global_1048581 = iParam0;
}

void func_2()
{
	bLocal_13 = func_14();
	func_15(64);
	func_15(2048);
	func_15(4096);
	func_16(8);
	func_17(8);
	Global_1051189 = 0;
	PED::SET_PED_RESET_FLAG(iLocal_440, 240, true);
	func_18(&uLocal_16, 1, 0);
	func_19(&uLocal_16, 0);
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH(iLocal_14);
	GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_14);
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH(iLocal_15);
	GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_15);
	GRAPHICS::_0xFF8018C778349234(0);
	func_20(1);
}

bool func_3()
{
	if (MISC::IS_BIT_SET(iLocal_431, 2) || iLocal_424 == 2)
	{
		return true;
	}
	if (func_21(64))
	{
		return true;
	}
	if (func_22(1, 1))
	{
		MISC::SET_BIT(&iLocal_432, 0);
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (func_23(128))
	{
		MISC::SET_BIT(&iLocal_432, 0);
		return true;
	}
	if (func_21(2048))
	{
		MISC::SET_BIT(&iLocal_432, 0);
		return true;
	}
	if (func_23(32))
	{
		return true;
	}
	return false;
}

bool func_4()
{
	if (!MISC::IS_BIT_SET(iLocal_431, 3))
	{
		if (func_24())
		{
			MISC::SET_BIT(&iLocal_431, 3);
		}
		switch (Global_262152)
		{
			case 0:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_431, 3);
				}
				break;
			case 1:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_431, 3);
				}
				if (!func_26())
				{
					MISC::CLEAR_BIT(&iLocal_431, 3);
				}
				break;
			case 3:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_431, 3);
				}
				if (!func_26())
				{
					MISC::CLEAR_BIT(&iLocal_431, 3);
				}
				break;
			case 2:
				break;
			case 4:
				MISC::CLEAR_BIT(&iLocal_431, 3);
				break;
		}
		if (MISC::IS_BIT_SET(iLocal_431, 3))
		{
			return true;
		}
		else
		{
			if (func_5())
			{
				NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
			}
			if (Global_262152 != 4)
			{
			}
			return false;
		}
	}
	return true;
}

bool func_5()
{
	if (MISC::IS_BIT_SET(iLocal_431, 1))
	{
		return true;
	}
	else if (func_23(16))
	{
		MISC::SET_BIT(&iLocal_431, 1);
		return true;
	}
	return false;
}

bool func_6()
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	if (Global_262152 == 1 || Global_262152 == 3)
	{
		if (!MISC::IS_BIT_SET(iLocal_435, 0))
		{
			iVar1 = 0;
			while (iVar1 <= 31)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1048685.f_23[iVar1 /*10*/]))
				{
					if (!func_27(iVar1))
					{
						bVar0 = false;
					}
				}
				iVar1++;
			}
			if (bVar0)
			{
				MISC::SET_BIT(&iLocal_435, 0);
			}
			else
			{
				return false;
			}
		}
	}
	return MISC::IS_BIT_SET(iLocal_431, 0);
}

void func_7()
{
	func_28();
	func_29();
	switch (Global_262152)
	{
		case 0:
			func_30();
			break;
		case 2:
			func_31();
			break;
		case 3:
			func_32();
			func_33();
			break;
		case 1:
			func_33();
			break;
		case 4:
			break;
	}
}

void func_8()
{
	int iVar0;

	func_1(1);
	func_34(0);
	func_35();
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		func_36(1);
		func_37(1);
	}
	func_38(1);
	if (!func_39(255))
	{
		func_40(3);
	}
	else
	{
		func_41(1);
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			func_42(64);
		}
	}
	func_43(0);
	if (!func_39(255))
	{
		iVar0 = 8;
		if (func_44(18))
		{
			iVar0 = 12;
			func_45(18);
		}
		func_46(0, iVar0);
	}
	func_47(2048);
	UIAPPS::_CLOSE_ALL_UIAPPS_IMMEDIATE();
	MISC::SET_BIT(&(Global_1958621.f_1), 5);
	iLocal_438 = Global_1048685.f_19;
	func_48(&iLocal_440);
	MISC::SET_BIT(&iLocal_431, 0);
}

void func_9()
{
	char* sVar0;

	AUDIO::PREPARE_SOUNDSET("RDRO_Camera_Flash_Pulse", false);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1048685.f_1)) || !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1048685.f_9)))
	{
		if (!MISC::IS_BIT_SET(iLocal_432, 4))
		{
			if (MISC::IS_BIT_SET(iLocal_432, 5) || GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(iLocal_14))
			{
				if (MISC::IS_BIT_SET(iLocal_432, 5) || GRAPHICS::ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(iLocal_14, 2, false, &uLocal_317))
				{
					sVar0 = "photograph";
					if (MISC::IS_BIT_SET(iLocal_432, 5))
					{
						sVar0 = "photograph_death_screen_stats";
					}
					if (AUDIO::PREPARE_SOUND(sVar0, "rdro_gamemode_transition_sounds", -2))
					{
						if (!MISC::IS_BIT_SET(iLocal_432, 7))
						{
							func_49();
						}
						else
						{
							func_50();
						}
						MISC::SET_BIT(&iLocal_432, 4);
						MISC::SET_BIT(&iLocal_432, 12);
						func_51(&uLocal_413, 0, 0);
						func_42(64);
						AUDIO::PLAY_SOUND_FRONTEND(sVar0, "rdro_gamemode_transition_sounds", true, 0);
						AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("photograph");
						func_52();
						vLocal_393 = { vLocal_268 };
						func_53(1, 0);
					}
				}
			}
			else if (func_44(16) && func_24())
			{
				func_54();
			}
		}
		else if ((GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(iLocal_14) && GRAPHICS::ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(iLocal_14, 2, false, &uLocal_317)) || (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(iLocal_15) && GRAPHICS::ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(iLocal_15, 2, false, &uLocal_317)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("camera_flash", "RDRO_Camera_Flash_Pulse", true, 0);
			AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("photograph");
		}
	}
}

void func_10()
{
	struct<10> Var0;

	if (Global_1049192)
	{
		Global_1049182.f_5 = (Global_1048685.f_424.f_8 + Global_1048685.f_440.f_8);
		Global_1049182.f_6 = (Global_1048685.f_424.f_6 + Global_1048685.f_440.f_6);
		TELEMETRY::_TELEMETRY_MATCH_OVER(&Global_1049219, &Global_1049182, &Global_1049193, &Global_1049198, Global_3145858.f_59918 == 1);
		Global_1049182 = { Var0 };
		Global_1049192 = 0;
	}
}

void func_11()
{
	int iVar0;

	if (!Global_1048685.f_488 && Global_262152 != 3)
	{
		if (Global_1048685.f_487 || iLocal_318)
		{
			func_56(func_55(1.42941E-22f, 9.179627E-14f), 1);
			iVar0 = func_57(Global_1572887.f_72.f_9);
			switch (iVar0)
			{
				case 7:
					func_56(func_55(1.42941E-22f, 6.631283E-35f), 1);
					break;
				case 8:
					func_56(func_55(1.42941E-22f, -2.568551E-25f), 1);
					break;
				case 9:
					func_56(func_55(1.42941E-22f, 5.038139E-36f), 1);
					break;
				case 2:
					func_56(func_55(1.42941E-22f, 6.504974E+36f), 1);
					break;
				case 3:
					func_56(func_55(1.42941E-22f, 6.504974E+36f), 1);
					break;
				case 4:
					func_56(func_55(1.42941E-22f, -2.606333E-24f), 1);
					break;
				case 6:
					func_56(func_55(1.42941E-22f, -5.88325E+33f), 1);
					break;
				case 5:
					func_56(func_55(1.42941E-22f, -1.032091E-38f), 1);
					break;
				case 19:
					func_56(func_55(1.42941E-22f, 1.307238E-05f), 1);
					break;
			}
		}
	}
}

void func_12()
{
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_58();
	func_59();
	func_60();
	switch (Global_262152)
	{
		case 0:
			func_61();
			break;
		case 2:
			func_62();
			break;
		case 3:
			func_63();
			func_64();
			break;
		case 1:
			func_64();
			break;
	}
	func_65();
	func_10();
	HUD::_DISABLE_HUD_CONTEXT(0.004527408f);
	HUD::_DISABLE_HUD_CONTEXT(3.870794E-14f);
	func_66();
	func_67(1);
	func_68();
	func_16(2048);
	if (MISC::IS_BIT_SET(iLocal_432, 3))
	{
		func_69(-8.635702E+27f, 0, 255, 0, 0);
	}
	Global_1048685.f_378 = 7.682688E-28f;
	func_70(4);
	func_71(0);
	func_72();
	func_73(0);
	func_74(0);
	if (func_75())
	{
		func_76();
	}
	Global_1048582 = 0;
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
}

void func_13()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_14()
{
	return func_77(Global_1572887.f_8, 1);
}

void func_15(int iParam0)
{
	Global_265213.f_122484.f_139 = (Global_265213.f_122484.f_139 - (Global_265213.f_122484.f_139 && iParam0));
}

void func_16(int iParam0)
{
	Global_262151 = (Global_262151 - (Global_262151 && iParam0));
}

void func_17(int iParam0)
{
	Global_265213.f_122484.f_139 = (Global_265213.f_122484.f_139 || iParam0);
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-1.906091E+23f);
	}
	else if (bParam2)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(5.287648E+25f);
	}
	else
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-1.370211E+30f);
	}
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
}

void func_19(var uParam0, bool bParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_11))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

void func_20(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0)
	{
	}
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "acceptbutton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "visible", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "menuUpButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "visible", bParam0);
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "menuDownButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, "visible", bParam0);
}

bool func_21(int iParam0)
{
	return (Global_265213.f_122484.f_139 && iParam0) != 0;
}

bool func_22(bool bParam0, bool bParam1)
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

bool func_23(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

bool func_24()
{
	if (iLocal_314 < 100)
	{
		if (func_78(&cLocal_397, &iLocal_314))
		{
			iLocal_314 = 100;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_25()
{
	return true;
}

bool func_26()
{
	if (!func_79())
	{
		return false;
	}
	if (!func_80())
	{
		return false;
	}
	if (!func_81(iLocal_277, fLocal_278, fLocal_280, fLocal_279))
	{
		return false;
	}
	if (!func_82())
	{
		return false;
	}
	if (!func_83())
	{
		return false;
	}
	if (!func_84(&uLocal_16))
	{
		return false;
	}
	if (!func_85())
	{
		return false;
	}
	if (func_86(1, 255))
	{
		if (!func_23(65536) && !func_87())
		{
			return false;
		}
	}
	STREAMING::LOAD_SCENE_START_SPHERE(vLocal_268, 15f, 0);
	func_47(2);
	return true;
}

bool func_27(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	switch (iLocal_474[iParam0])
	{
		case 0:
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1048685.f_23[iParam0 /*10*/], true, true);
			ENTITY::FREEZE_ENTITY_POSITION(Global_1048685.f_23[iParam0 /*10*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1048685.f_23[iParam0 /*10*/], true);
			vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_1048685.f_23[iParam0 /*10*/], true, false) };
			func_88(&(uLocal_441[iParam0]), &(Global_1048685.f_23[iParam0 /*10*/]), &vVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_441[iParam0]))
			{
				iLocal_474[iParam0] = 3;
			}
			else
			{
				PED::_REFRESH_META_PED_SHOP_ITEMS(uLocal_441[iParam0], 1);
				if (ENTITY::DOES_ENTITY_EXIST(Global_1048685.f_344[iParam0]))
				{
					func_88(&(uLocal_507[iParam0]), &(Global_1048685.f_344[iParam0]), &vVar0);
				}
				else if (MISC::IS_BIT_SET(iLocal_434, 6) && Global_1048685.f_23[iParam0 /*10*/].f_9)
				{
					iVar3 = 0;
					while (iVar3 <= 31)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_1048685.f_344[iVar3]))
						{
							func_88(&(uLocal_507[iParam0]), &(Global_1048685.f_344[iVar3]), &vVar0);
							iLocal_474[iParam0] = 1;
							return false;
						}
						iVar3++;
					}
				}
				iLocal_474[iParam0] = 1;
				Jump @501; //curOff = 323
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_507[iParam0]))
				{
					iLocal_474[iParam0] = 1;
				}
				Jump @501; //curOff = 351
				if (!PED::IS_PED_READY_TO_RENDER(uLocal_441[iParam0]))
				{
				}
				else
				{
					func_89(uLocal_441[iParam0]);
					if (Global_1048685.f_23[iParam0 /*10*/].f_9)
					{
						iLocal_474[iParam0] = 3;
					}
					else
					{
						func_90(uLocal_441[iParam0], 1, 1);
						iLocal_474[iParam0] = 3;
						Jump @501; //curOff = 430
						if (ENTITY::DOES_ENTITY_EXIST(Global_1048685.f_23[iParam0 /*10*/]))
						{
							PED::DELETE_PED(&(Global_1048685.f_23[iParam0 /*10*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_1048685.f_344[iParam0]))
						{
							PED::DELETE_PED(&(Global_1048685.f_344[iParam0]));
						}
						return true;
					}
				}
			}
			return false;
			default:
				break;
	}
}

void func_28()
{
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_17(8);
	func_52();
	PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, true);
	PAD::DISABLE_CONTROL_ACTION(0, -2.885348E+21f, true);
	PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, true);
	func_38(1);
	func_91(1);
	func_92();
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);
	CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
	HUD::_ENABLE_HUD_CONTEXT(0.004527408f);
	func_67(0);
}

void func_29()
{
	if (MISC::IS_BIT_SET(iLocal_431, 4))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_677))
		{
			if (!bLocal_680)
			{
				iLocal_679 = ENTITY::PIN_CLOSEST_MAP_ENTITY(0.001799241f, -561.1321f, -3694.189f, 81.9117f, 15);
				bLocal_680 = true;
			}
			else if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_679))
			{
				iLocal_677 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_679));
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_677) && ENTITY::IS_ENTITY_VISIBLE(iLocal_677))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_677, false);
				}
			}
		}
	}
}

void func_30()
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(iLocal_439))
	{
		func_46(0, 8);
	}
	switch (iLocal_424)
	{
		case 0:
			if (func_93(&uLocal_407))
			{
				if (func_94(&uLocal_407, 0, 0) > 2500)
				{
					func_95(&uLocal_16);
					HUD::_ENABLE_HUD_CONTEXT(0.004527408f);
					func_96(&Local_32, 1);
					func_97(&Local_32);
					func_98(1);
				}
			}
			else
			{
				func_51(&uLocal_407, 0, 0);
			}
			break;
		case 1:
			func_96(&Local_32, 1);
			func_98(2);
			break;
		case 2:
			MISC::SET_BIT(&iLocal_431, 2);
			break;
	}
}

void func_31()
{
	if (func_93(&uLocal_405))
	{
		if (!func_23(4096))
		{
			if (func_23(16384))
			{
				return;
			}
			func_99(1);
			if (!func_23(256))
			{
				if (func_23(16))
				{
					func_16(16);
				}
			}
			if (func_94(&uLocal_405, 1, 0) > 5000 && func_100())
			{
				if (!Global_1048577)
				{
					if (!func_101(255))
					{
						if (func_23(64) || func_102())
						{
							if (!func_23(256))
							{
								func_103(0);
							}
							GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(iLocal_14);
							if (func_104())
							{
								func_105(4, 0);
							}
							func_91(0);
							MISC::SET_BIT(&iLocal_431, 2);
						}
					}
				}
			}
		}
		else
		{
			func_106();
		}
	}
	else
	{
		if (!func_23(4096))
		{
			CAM::DO_SCREEN_FADE_OUT(1750);
		}
		func_51(&uLocal_405, 1, 0);
	}
}

void func_32()
{
	switch (iLocal_424)
	{
		case 0:
			switch (iLocal_426)
			{
				case 1:
					break;
			}
			break;
		case 1:
			switch (iLocal_425)
			{
				case 0:
					break;
			}
			break;
	}
}

void func_33()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;

	if (PLAYER::IS_PLAYER_CONTROL_ON(iLocal_439))
	{
		func_46(0, 8);
	}
	func_107();
	switch (iLocal_424)
	{
		case 0:
			if (!MISC::IS_BIT_SET(iLocal_432, 13))
			{
				if (MISC::IS_BIT_SET(iLocal_432, 12) && func_94(&uLocal_413, 0, 0) > 5000)
				{
					CAM::DO_SCREEN_FADE_OUT(500);
					MISC::SET_BIT(&iLocal_432, 13);
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT() && !func_108())
			{
				func_103(0);
			}
			switch (iLocal_426)
			{
				case 0:
					func_109();
					func_110();
					func_111(1);
					func_112(1);
					func_113();
					func_114(1);
					break;
				case 1:
					if (!MISC::IS_BIT_SET(iLocal_432, 12))
					{
						return;
					}
					func_115();
					func_116();
					iLocal_540 = 0;
					func_114(2);
					break;
				case 2:
					if (func_117() != 0)
					{
						func_114(3);
					}
					break;
				case 3:
					if (func_118() != 0)
					{
						func_114(4);
					}
					break;
				case 4:
					if (!MISC::IS_BIT_SET(iLocal_434, 9))
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_268, 0f, 0f, 0f);
					}
					else
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_274, 0f, 0f, 0f);
					}
					if (STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(iLocal_277, vLocal_268))
					{
						bVar0 = true;
					}
					else if (func_93(&uLocal_401) && func_94(&uLocal_401, 0, 0) > 5500)
					{
						if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
						{
							bVar0 = true;
						}
						else
						{
							bVar0 = func_119();
						}
					}
					else
					{
						bVar0 = func_119();
					}
					if (bVar0 || (MISC::GET_GAME_TIMER() - iLocal_315) > 5500)
					{
						func_120(&uLocal_403);
						GRAPHICS::SET_TIMECYCLE_MODIFIER(&cLocal_282);
						iVar1 = 24;
						func_46(0, iVar1);
						func_51(&uLocal_405, 0, 0);
						func_121();
						func_114(5);
					}
					break;
				case 5:
					if (func_94(&uLocal_405, 0, 0) > 1000)
					{
						func_51(&uLocal_401, 0, 0);
						func_99(1);
						func_122();
						GRAPHICS::SET_TIMECYCLE_MODIFIER(&cLocal_282);
						func_98(1);
					}
					break;
			}
			break;
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_434, 9))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_268, 0f, 0f, 0f);
			}
			else
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_274, 0f, 0f, 0f);
			}
			VOICE::_0x1C38C3577901AF1F();
			func_123(&Global_1049337, 1);
			CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, true);
			switch (iLocal_425)
			{
				case 0:
					if (!func_101(255))
					{
						if (func_124())
						{
							if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(500);
								MISC::SET_BIT(&iLocal_432, 13);
								func_125(1);
							}
							else
							{
								func_125(2);
							}
						}
					}
					break;
				case 1:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_103(0);
						func_125(2);
					}
					break;
				case 2:
					if (Local_32.f_232 < 2)
					{
						func_96(&Local_32, 0);
					}
					UIFEED::UI_FEED_CLEAR_CHANNEL(11, true, true);
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(0);
						func_126();
					}
					func_51(&uLocal_405, 0, 0);
					if (func_104())
					{
						func_105(4, 0);
					}
					func_91(0);
					AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("winners_pose");
					if (func_44(2) || func_44(4))
					{
						AUDIO::PLAY_SOUND_FRONTEND("Strike_Heavy", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND("Strike_Light", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					AUDIO::TRIGGER_MUSIC_EVENT(&(Global_1048685.f_492));
					STREAMING::LOAD_SCENE_STOP();
					func_16(2);
					GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(iLocal_14);
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
					GRAPHICS::ANIMPOSTFX_PLAY("MP_Trans_WinLose_Pulse");
					if (Global_1048685.f_487)
					{
						GRAPHICS::_ANIMPOSTFX_SET_POTENCY("MP_Trans_WinLose_Pulse", 1, 1f);
						GRAPHICS::_ANIMPOSTFX_SET_POTENCY("MP_Trans_WinLose_Pulse", 2, 0f);
					}
					else
					{
						GRAPHICS::_ANIMPOSTFX_SET_POTENCY("MP_Trans_WinLose_Pulse", 1, 0f);
						GRAPHICS::_ANIMPOSTFX_SET_POTENCY("MP_Trans_WinLose_Pulse", 2, 1f);
					}
					func_125(3);
					break;
				case 3:
					if (!GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(iLocal_15))
					{
						if ((ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_266) - ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_266)) <= 1067030938)
						{
							GRAPHICS::_ANIMPOSTFX_PLAY_TAG(iLocal_15);
							MISC::SET_BIT(&iLocal_432, 4);
						}
					}
					if (func_127())
					{
						func_128(1);
						func_129(1);
						func_130();
						AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("photograph");
						func_51(&uLocal_409, 0, 0);
						func_51(&uLocal_411, 0, 0);
						iVar2 = PLAYER::PLAYER_ID();
						sVar3 = PLAYER::GET_PLAYER_NAME(iVar2);
						iVar4 = 0;
						while (iVar4 <= 3)
						{
							if (Global_1050074.f_14 <= 1)
							{
								if (MISC::ARE_STRINGS_EQUAL(&(Global_1050074.f_101[iVar4 /*23*/].f_14.f_1), sVar3))
								{
									iLocal_318 = 1;
								}
								else
								{
									iVar4++;
								}
								func_125(4);
								Jump @1145; //curOff = 1122
								if (!func_93(&uLocal_405))
								{
									func_51(&uLocal_405, 0, 0);
								}
								Jump @1278; //curOff = 1145
								if (func_94(&uLocal_411, 0, 0) > 5000)
								{
									MISC::SET_BIT(&iLocal_433, 0);
									func_125(5);
								}
								else if (func_94(&uLocal_411, 0, 0) < 0 || !func_93(&uLocal_411))
								{
									func_51(&uLocal_411, 0, 0);
								}
								Jump @1278; //curOff = 1216
								func_96(&Local_32, 0);
								func_131(&Local_32, &Global_1049337);
								func_132(&Local_32, &Global_1049337, 1);
								if (func_133())
								{
									func_134();
									func_98(2);
								}
								func_131(&Local_32, &(Global_1050074.f_101));
								Jump @1292; //curOff = 1278
								MISC::SET_BIT(&iLocal_431, 2);
								if (MISC::IS_BIT_SET(iLocal_433, 1))
								{
									func_135();
								}
								if (MISC::IS_BIT_SET(iLocal_433, 0))
								{
									func_136();
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

void func_34(int iParam0)
{
	Global_1072759.f_28644.f_3 = 1;
	Global_1072759.f_28644.f_66.f_30 = iParam0;
	Global_1072759.f_28644.f_4 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_35()
{
	func_137(2);
}

void func_36(bool bParam0)
{
	if (!bParam0)
	{
		func_138(18);
	}
	else
	{
		func_139(18);
	}
}

void func_37(bool bParam0)
{
	if (!bParam0)
	{
		func_138(19);
	}
	else
	{
		func_139(19);
	}
}

void func_38(bool bParam0)
{
	if (!bParam0)
	{
		func_138(21);
	}
	else
	{
		func_139(21);
	}
}

bool func_39(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_140();
	}
	return func_141(64, iParam0);
}

void func_40(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

void func_41(bool bParam0)
{
	if (!bParam0)
	{
		func_138(28);
	}
	else
	{
		func_139(28);
	}
}

void func_42(int iParam0)
{
	if (func_142(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

void func_43(bool bParam0)
{
	if (bParam0)
	{
		func_139(49);
	}
	else
	{
		func_138(49);
	}
}

bool func_44(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1048685, iParam0);
}

void func_45(int iParam0)
{
	MISC::CLEAR_BIT(&Global_1048685, iParam0);
}

void func_46(bool bParam0, int iParam1)
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
		func_143(iParam1);
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
	func_144(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_47(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_48(int iParam0)
{
	PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
}

void func_49()
{
	if (func_44(17))
	{
		MISC::SET_BIT(&iLocal_432, 7);
		return;
	}
	Local_32.f_159 = Global_1051169;
	Local_32.f_160 = Global_1051170;
	func_145(&Global_1049337, &Local_32, &uLocal_16, iLocal_438, func_44(15));
	MISC::SET_BIT(&iLocal_432, 7);
}

void func_50()
{
	char[] cVar0[8];

	if (Local_32.f_150 > 1)
	{
		cVar0 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_EF_WINS");
	}
	else
	{
		cVar0 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_EF_WIN");
	}
	func_146(&uLocal_16, cVar0, &(Global_1048685.f_9), " ", " ", " ", " ", Global_1048685.f_17);
	func_147(&uLocal_16);
	func_19(&uLocal_16, 1);
}

void func_51(var uParam0, bool bParam1, bool bParam2)
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

void func_52()
{
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(7.215231E-38f);
	}
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-8.851064E-21f) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-8.851064E-21f))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(-8.851064E-21f);
	}
	if (func_148())
	{
		func_149();
	}
	if (func_150())
	{
		func_151();
	}
	func_152();
}

void func_53(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(iLocal_432, 11) && !func_153(vLocal_393))
		{
			MISC::SET_BIT(&iLocal_432, 11);
			if (!MISC::IS_BIT_SET(iLocal_434, 9))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_393, 0f, 0f, 0f);
			}
			else
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_274, 0f, 0f, 0f);
			}
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_432, 11) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_432, 11);
		STREAMING::CLEAR_FOCUS();
		vLocal_393 = { 0f, 0f, 0f };
	}
}

void func_54()
{
	if (func_147(&uLocal_16))
	{
		func_51(&uLocal_405, 1, 0);
		if (!func_154(2))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Winners_Screen", "RDROADV_Winners_Screen_Sounds", true, 0);
		}
		if (!GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(iLocal_14))
		{
			if (!func_104() || !func_155())
			{
				GRAPHICS::_ANIMPOSTFX_PLAY_TAG(iLocal_14);
			}
			else
			{
				MISC::SET_BIT(&iLocal_432, 5);
			}
			MISC::CLEAR_BIT(&iLocal_432, 4);
			func_45(16);
		}
	}
}

struct<2> func_55(float fParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_57(int iParam0)
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

void func_58()
{
	if (!func_101(255))
	{
		func_36(0);
		func_37(0);
		if (func_23(64) || !func_14())
		{
			if (!func_21(64))
			{
				if (Global_262152 != 0)
				{
					func_53(0, 0);
					if (!func_23(256))
					{
						if (MISC::IS_BIT_SET(Global_1048685, 29) || MISC::IS_BIT_SET(Global_1048685, 30))
						{
							if (MISC::IS_BIT_SET(Global_1048685, 31))
							{
								func_156(1, 0);
								func_157(1);
							}
							else if (MISC::IS_BIT_SET(Global_1048685, 28) || MISC::IS_BIT_SET(Global_1048685, 27))
							{
								if (MISC::IS_BIT_SET(Global_1048685, 27))
								{
									if (!func_153(Global_1048685.f_415))
									{
										func_158(Global_1048685.f_415, Global_1048685.f_418, 1);
									}
								}
								func_159(1, 0);
								func_157(2);
							}
							if (MISC::IS_BIT_SET(Global_1048685, 29) && !func_153(Global_1048685.f_411))
							{
								func_160(Global_1048685.f_411, Global_1048685.f_414);
								func_157(4);
							}
							else
							{
								func_160(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING());
								func_157(8);
							}
						}
						else if (func_161() == 33)
						{
							func_162(5, 1);
							func_157(64);
						}
						else
						{
							func_157(16);
						}
					}
				}
				if (!func_163())
				{
					func_36(1);
					func_157(32);
				}
			}
			if (!func_23(256))
			{
				CAM::DO_SCREEN_FADE_OUT(150);
			}
		}
		else
		{
			func_17(4096);
		}
	}
}

void func_59()
{
	if (func_23(256))
	{
		MISC::SET_BIT(&iLocal_432, 2);
		CAM::DO_SCREEN_FADE_OUT(0);
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
		HUD::_DISABLE_HUD_CONTEXT(0.004527408f);
		HUD::_DISABLE_HUD_CONTEXT(3.870794E-14f);
	}
	else if (func_23(64) || func_21(32))
	{
		MISC::SET_BIT(&iLocal_432, 1);
		while (!func_164(&bLocal_13) && !func_22(1, 1))
		{
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
			BUILTIN::WAIT(0);
		}
		func_165();
	}
}

void func_60()
{
	struct<34> Var0;
	int iVar70;

	func_166();
	func_167();
	func_40(0);
	func_168(64);
	func_37(0);
	func_38(0);
	func_41(0);
	func_91(0);
	func_169();
	func_170(0);
	func_171(0);
	func_134();
	MISC::CLEAR_BIT(&(Global_1958621.f_1), 5);
	Global_1048685.f_491 = 0;
	Var0 = 32;
	Var0.f_33 = 32;
	func_172(&Var0, PLAYER::GET_PLAYER_INDEX(), 0);
	HUD::_TEXT_BLOCK_DELETE("UIC");
	PAD::ENABLE_CONTROL_ACTION(0, 1.011282E+08f, true);
	PAD::ENABLE_CONTROL_ACTION(0, -2.885348E+21f, true);
	PAD::ENABLE_CONTROL_ACTION(0, -2.896624E-12f, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false, true);
	NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false);
	PED::SET_PED_RESET_FLAG(iLocal_440, 240, false);
	AUDIO::_RELEASE_SOUNDSET("RDRO_Winners_Screen_Sounds");
	AUDIO::_RELEASE_SOUNDSET("RDROADV_Winners_Screen_Sounds");
	AUDIO::_RELEASE_SOUNDSET("RDRO_Countdown_Clockwork_Sounds");
	if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(iLocal_14))
	{
		GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(iLocal_14);
	}
	if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(iLocal_15))
	{
		GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(iLocal_15);
	}
	GRAPHICS::_0x71845905BCCDE781(iLocal_14);
	GRAPHICS::_0x71845905BCCDE781(iLocal_15);
	func_15(8);
	func_15(64);
	func_15(2048);
	func_16(64);
	func_16(1024);
	func_16(256);
	func_95(&uLocal_16);
	func_99(0);
	func_1(0);
	func_173();
	if (func_86(33, 255))
	{
		if (func_104())
		{
			func_105(4, 0);
		}
		func_91(0);
	}
	NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
	MISC::_CLEAR_WEATHER_TYPE_PERSIST_OVERTIME(0);
	NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
	GRAPHICS::_0xFF8018C778349234(1);
	AUDIO::CANCEL_MUSIC_EVENT(&(Global_1048685.f_492));
	func_16(128);
	func_53(0, 1);
	GRAPHICS::_0x38D9D50F2085E9B3(iLocal_14);
	GRAPHICS::_0x38D9D50F2085E9B3(iLocal_15);
	if (!Global_1049294)
	{
		MISC::_CLEAR_WEATHER_VARIATION("FOG", true);
		MISC::_CLEAR_WEATHER_VARIATION("MISTY", true);
		MISC::_CLEAR_WEATHER_VARIATION("SHOWER", true);
		MISC::_CLEAR_WEATHER_VARIATION("THUNDERSTORM", true);
	}
	func_174(0);
	iVar70 = 0;
	iVar70 = 0;
	while (iVar70 <= 3)
	{
		func_175(&(Global_1049307[iVar70 /*3*/]));
		iVar70++;
	}
	iVar70 = 0;
	while (iVar70 <= 3)
	{
		func_175(&(Global_1049320[iVar70 /*3*/]));
		iVar70++;
	}
}

void func_61()
{
	func_176(&Local_32, 1);
	func_177(&(Local_32.f_162));
	func_178();
}

void func_62()
{
}

void func_63()
{
}

void func_64()
{
	bool bVar0;
	int iVar1;
	var uVar2;

	if (!func_86(1, 255))
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE() && func_23(2))
		{
			STREAMING::LOAD_SCENE_STOP();
		}
	}
	Global_1072759.f_10 = Global_1048685.f_20;
	bVar0 = true;
	iVar1 = 0;
	func_51(&uVar2, 0, 0);
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && bVar0)
	{
		bVar0 = false;
		if (STREAMING::IS_IPL_ACTIVE_HASH(iLocal_277))
		{
			func_179(iLocal_277);
			bVar0 = true;
		}
		if (STREAMING::IS_IPL_ACTIVE_HASH(fLocal_278))
		{
			func_179(fLocal_278);
			bVar0 = true;
		}
		if (STREAMING::IS_IPL_ACTIVE_HASH(fLocal_279))
		{
			func_179(fLocal_279);
			bVar0 = true;
		}
		if (STREAMING::IS_IPL_ACTIVE_HASH(fLocal_280))
		{
			func_179(fLocal_280);
			bVar0 = true;
		}
		iVar1++;
		if (func_94(&uVar2, 0, 0) > 2000 || iVar1 > 100)
		{
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	STREAMING::SET_MAPDATACULLBOX_ENABLED(&cLocal_290, false);
	func_180();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	STREAMING::_0xF01D21DF39554115(1);
	func_176(&Local_32, 0);
	func_177(&(Local_32.f_162));
	func_178();
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iLocal_265))
	{
		func_181(&Local_32, &iLocal_265);
	}
}

void func_65()
{
	if (MISC::IS_BIT_SET(iLocal_432, 1))
	{
		while (SCRIPTS::IS_THREAD_ACTIVE(Global_1051193, false))
		{
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
			BUILTIN::WAIT(0);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_432, 2))
	{
	}
}

void func_66()
{
	Global_1913431 = 0;
}

void func_67(bool bParam0)
{
	if (bParam0)
	{
		Global_1951897.f_1381 = (Global_1951897.f_1381 - Global_1951897.f_1381 & 2);
	}
	else
	{
		Global_1951897.f_1381 |= 2;
	}
	func_182(bParam0);
}

void func_68()
{
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Global_1072759.f_21889.f_583)))
	{
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1072759.f_21889.f_583));
	}
}

int func_69(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_183(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_70(int iParam0)
{
	Global_262152 = iParam0;
}

void func_71(int iParam0)
{
	Global_1048685.f_491 = iParam0;
}

void func_72()
{
	var uVar0;

	func_184(&uVar0, 1);
}

void func_73(bool bParam0)
{
	if (!Global_2883584)
	{
		if (bParam0)
		{
			func_47(4);
		}
		else
		{
			func_16(4);
		}
	}
}

void func_74(bool bParam0)
{
	if (bParam0)
	{
		func_47(16);
	}
	else
	{
		func_16(16);
	}
}

bool func_75()
{
	return Global_1048583;
}

void func_76()
{
	vector3 vVar0;
	int iVar3;

	vVar0 = -1;
	vVar0.f_2 = -1;
	Global_1048583 = 0;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		Global_1049307[iVar3 /*3*/] = { vVar0 };
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		Global_1049320[iVar3 /*3*/] = { vVar0 };
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 1)
	{
		Global_1049333[iVar3 /*3*/] = { vVar0 };
		iVar3++;
	}
}

bool func_77(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_78(char* sParam0, int iParam1)
{
	if (!HUD::TEXT_BLOCK_IS_LOADED(sParam0))
	{
		HUD::TEXT_BLOCK_REQUEST(sParam0);
	}
	else
	{
		return true;
	}
	*iParam1++;
	if (*iParam1 > 100)
	{
		return true;
	}
	return false;
}

bool func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	vector3 vVar7;

	if (MISC::IS_BIT_SET(iLocal_432, 9))
	{
		return true;
	}
	if (Global_1048685.f_378 == 7.682688E-28f)
	{
		return false;
	}
	func_185(0, 0, 0, 0);
	switch (Global_1048685.f_378)
	{
		case 1385639740:
			MISC::SET_BIT(&iLocal_434, 2);
			MISC::SET_BIT(&iLocal_434, 4);
			MISC::SET_BIT(&iLocal_434, 11);
			MISC::SET_BIT(&iLocal_434, 10);
			MISC::SET_BIT(&iLocal_431, 4);
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@TEAM_GROUPING@HALLOWEEN@TEAM@CELEBRATION_TEAM";
			iVar0 = 0;
			while (iVar0 < Global_1048685.f_377)
			{
				if (!Global_1048685.f_23[iVar0 /*10*/].f_9)
				{
				}
				else
				{
					func_186(2.908427E-24f, "SKULL_WIN_", PED::IS_PED_MALE(Global_1048685.f_23[iVar0 /*10*/]));
				}
				iVar0++;
			}
			break;
		case 1771860428:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@1v7";
			func_185(7, 2, 0, 0);
			break;
		case -983985894:
			MISC::SET_BIT(&iLocal_434, 10);
			MISC::SET_BIT(&iLocal_431, 4);
			MISC::SET_BIT(&iLocal_434, 12);
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V1";
			break;
		case 1006403166:
			MISC::SET_BIT(&iLocal_434, 10);
			MISC::SET_BIT(&iLocal_431, 4);
			MISC::SET_BIT(&iLocal_434, 12);
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V2";
			break;
		case 268183134:
			MISC::SET_BIT(&iLocal_434, 10);
			MISC::SET_BIT(&iLocal_431, 4);
			MISC::SET_BIT(&iLocal_434, 12);
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V3";
			break;
		case 1082555861:
			MISC::SET_BIT(&iLocal_434, 10);
			MISC::SET_BIT(&iLocal_431, 4);
			MISC::SET_BIT(&iLocal_434, 3);
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Hunters_Win_V1";
			break;
		case -1716839629:
			MISC::SET_BIT(&iLocal_434, 10);
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector_Win_V1";
			func_185(0, 0, 0, 8);
			break;
		case 1763778843:
			MISC::SET_BIT(&iLocal_434, 10);
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector_FailAlive_V1";
			func_185(0, 0, 0, 8);
			break;
		case 1363459296:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v1";
			func_185(4, 2, 0, 0);
			func_187(2);
			break;
		case 1058150523:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v2";
			func_185(4, 2, 0, 0);
			func_187(0);
			break;
		case -1379076625:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v3";
			func_185(5, 0, 0, 0);
			break;
		case -1575100783:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v4";
			MISC::SET_BIT(&iLocal_434, 7);
			MISC::SET_BIT(&iLocal_434, 5);
			func_185(4, 0, 0, 0);
			break;
		case 834159803:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@7v1";
			func_185(1, 0, 0, 0);
			func_187(2);
			func_187(3);
			break;
		case 1134333856:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v2";
			MISC::SET_BIT(&iLocal_434, 5);
			func_185(11, 0, 4, 0);
			break;
		case 630377841:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
			func_185(8, 0, 0, 0);
			func_187(6);
			func_187(7);
			MISC::SET_BIT(&iLocal_434, 8);
			break;
		case -2133481961:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v3";
			func_185(8, 4, 0, 0);
			func_187(6);
			func_187(7);
			break;
		case 291037923:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_v1";
			func_185(15, 0, 16, 0);
			func_187(2);
			func_187(3);
			MISC::SET_BIT(&iLocal_434, 7);
			MISC::SET_BIT(&iLocal_434, 5);
			break;
		case -1195714981:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@GUNS_IN_THE_AIR";
			func_185(4, 2, 0, 0);
			func_188(5);
			func_188(7);
			MISC::SET_BIT(&iLocal_434, 11);
			break;
		case 1745288465:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_TOMBSTONE";
			func_185(1, 0, 0, 0);
			func_187(2);
			func_187(14);
			func_189(6);
			func_189(7);
			MISC::SET_BIT(&iLocal_434, 10);
			MISC::SET_BIT(&iLocal_434, 11);
			StringConCat(&cLocal_282, "tombstone_", 64);
			break;
		case 91207259:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@WAGON";
			func_185(4, 0, 0, 0);
			MISC::SET_BIT(&iLocal_434, 9);
			MISC::SET_BIT(&iLocal_434, 7);
			MISC::SET_BIT(&iLocal_434, 5);
			MISC::SET_BIT(&iLocal_434, 10);
			MISC::SET_BIT(&iLocal_434, 11);
			StringConCat(&cLocal_282, "wagon_", 64);
			break;
		case 643555809:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v1";
			MISC::SET_BIT(&iLocal_434, 6);
			break;
		case 594271233:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v2";
			MISC::SET_BIT(&iLocal_434, 6);
			break;
		case 1103730880:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v3";
			MISC::SET_BIT(&iLocal_434, 6);
			break;
		case 1931311975:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v4";
			MISC::SET_BIT(&iLocal_434, 6);
			break;
		case 1618433563:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v5";
			MISC::SET_BIT(&iLocal_434, 6);
			break;
		case 1540916182:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v6";
			MISC::SET_BIT(&iLocal_434, 6);
			break;
		case -160362724:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector@mppro_ig1_high";
			MISC::SET_BIT(&iLocal_434, 10);
			MISC::SET_BIT(&iLocal_434, 13);
			MISC::SET_BIT(&iLocal_434, 14);
			MISC::SET_BIT(&iLocal_434, 15);
			MISC::SET_BIT(&iLocal_434, 16);
			MISC::SET_BIT(&iLocal_434, 17);
			MISC::SET_BIT(&iLocal_431, 4);
			StringConCat(&cLocal_282, "wagon_", 64);
			break;
		case -294646209:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector@mppro_ig3_medium";
			MISC::SET_BIT(&iLocal_434, 10);
			MISC::SET_BIT(&iLocal_434, 13);
			MISC::SET_BIT(&iLocal_434, 14);
			MISC::SET_BIT(&iLocal_434, 15);
			MISC::SET_BIT(&iLocal_434, 16);
			MISC::SET_BIT(&iLocal_434, 17);
			MISC::SET_BIT(&iLocal_431, 4);
			StringConCat(&cLocal_282, "wagon_", 64);
			break;
		case 1141639919:
			sLocal_267 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector@mppro_ig2_low_v2";
			MISC::SET_BIT(&iLocal_434, 10);
			MISC::SET_BIT(&iLocal_434, 13);
			MISC::SET_BIT(&iLocal_434, 14);
			MISC::SET_BIT(&iLocal_434, 15);
			MISC::SET_BIT(&iLocal_434, 16);
			MISC::SET_BIT(&iLocal_434, 17);
			MISC::SET_BIT(&iLocal_431, 4);
			StringConCat(&cLocal_282, "wagon_", 64);
			break;
	}
	if (MISC::IS_BIT_SET(iLocal_434, 6))
	{
		MISC::SET_BIT(&iLocal_434, 4);
	}
	func_190();
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	if (MISC::IS_BIT_SET(iLocal_434, 10))
	{
		if (iVar1 >= 22 || iVar1 <= 5)
		{
			MISC::SET_BIT(&iLocal_432, 31);
			iLocal_312 = 0;
		}
		else if ((iVar1 >= 5 && iVar1 <= 8) || (iVar1 >= 17 && iVar1 <= 22))
		{
			MISC::SET_BIT(&iLocal_432, 30);
			if (MISC::IS_BIT_SET(iLocal_434, 12) || MISC::IS_BIT_SET(iLocal_434, 2))
			{
				iLocal_312 = 7;
			}
			else
			{
				iLocal_312 = 18;
			}
		}
		else
		{
			iLocal_312 = 13;
		}
	}
	else if (iVar1 >= 20 || iVar1 <= 5)
	{
		MISC::SET_BIT(&iLocal_432, 31);
		iLocal_312 = 0;
	}
	else if ((iVar1 >= 5 && iVar1 <= 8) || (iVar1 >= 17 && iVar1 <= 20))
	{
		MISC::SET_BIT(&iLocal_432, 30);
		iLocal_312 = 18;
	}
	else
	{
		iLocal_312 = 13;
	}
	switch (Global_1048685.f_22)
	{
		case 206878607:
			if (MISC::IS_BIT_SET(iLocal_434, 17))
			{
				if (Global_1048685.f_378 != -1.222314E+33f)
				{
					MISC::SET_BIT(&iLocal_434, 18);
					MISC::SET_BIT(&iLocal_432, 31);
					MISC::CLEAR_BIT(&iLocal_432, 30);
					iLocal_312 = 0;
				}
				else
				{
					MISC::CLEAR_BIT(&iLocal_432, 31);
					MISC::SET_BIT(&iLocal_432, 30);
				}
			}
			break;
		case -1731335755:
			break;
	}
	iVar2 = Global_3145858.f_229;
	if (iVar2 == 0)
	{
		iVar3 = func_191(Global_3145858.f_196);
		switch (iVar3)
		{
			case 1:
			case 4:
			case 9:
			case 11:
			case 16:
				iVar2 = 1;
				break;
			case 3:
			case 12:
				iVar2 = 5;
				break;
			case 0:
			case 2:
			case 8:
			case 10:
				iVar2 = 2;
				break;
			case 5:
			case 6:
			case 7:
				iVar2 = 3;
				break;
			case 13:
			case 14:
			case 15:
				iVar2 = 4;
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			if (MISC::IS_BIT_SET(iLocal_434, 10))
			{
				iLocal_277 = 4.193877E+27f;
				fLocal_280 = 4.082809E-38f;
				fLocal_281 = 1.845801E-09f;
				if ((MISC::IS_BIT_SET(iLocal_434, 12) || MISC::IS_BIT_SET(iLocal_434, 2)) || MISC::IS_BIT_SET(iLocal_434, 18))
				{
					if (MISC::IS_BIT_SET(iLocal_432, 30))
					{
						fLocal_281 = 4.308498E+15f;
						func_192(-1098572104 /* Float: -0.26f */, -1121187791, 1142784000 /* Float: 630f */, 1158883455, -989415535, -989634662);
					}
					else
					{
						fLocal_281 = -4.284445E+13f;
						func_192(1052065661 /* Float: 0.354f */, -1089680179 /* Float: -0.55f */, 1141211136 /* Float: 534f */, 1160278385, 1149872988, -988376220);
					}
					StringCopy(&cLocal_282, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_434, 12))
					{
						fLocal_278 = 2.694474E-27f;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_432, 31))
				{
					fLocal_281 = 2.201797E-23f;
					func_192(1053139403 /* Float: 0.386f */, -1114409796, 1142243328 /* Float: 597f */, 1155857261, 1105800987, -991921308);
				}
				else if (MISC::IS_BIT_SET(iLocal_432, 30))
				{
					iLocal_312 = 17;
					if ((MISC::IS_BIT_SET(iLocal_434, 9) || MISC::IS_BIT_SET(iLocal_434, 3)) || MISC::IS_BIT_SET(iLocal_434, 17))
					{
						func_192(-1121724662 /* Float: -0.04f */, 1051025474 /* Float: 0.323f */, 1125089280 /* Float: 143.5f */, -1017601786, 1165534265, -985102311);
					}
					else
					{
						func_192(-1142595518, 1058675884 /* Float: 0.602f */, 1136353280, -1039307375, 1125260198, -984970777);
					}
				}
				else
				{
					func_192(1039382086 /* Float: 0.119f */, 1055991529 /* Float: 0.471f */, 1136353280, 1149488030, 1156249321, -996986266);
				}
			}
			else
			{
				iLocal_277 = -1.779602E-20f;
				fLocal_280 = 2.596848E-23f;
				fLocal_278 = -6.857415E-20f;
				fLocal_279 = -2.292529E-28f;
				fLocal_281 = 2.330323E+20f;
			}
			StringConCat(&cLocal_282, "heartlands", 64);
			break;
		case 2:
			if (MISC::IS_BIT_SET(iLocal_434, 10))
			{
				iLocal_277 = -6.040473E-21f;
				fLocal_280 = 5.553284E+19f;
				fLocal_281 = -4.284445E+13f;
				if ((MISC::IS_BIT_SET(iLocal_434, 12) || MISC::IS_BIT_SET(iLocal_434, 2)) || MISC::IS_BIT_SET(iLocal_434, 18))
				{
					if (MISC::IS_BIT_SET(iLocal_432, 30))
					{
						fLocal_281 = 4.308498E+15f;
						func_192(-1090149941, 1045086339 /* Float: 0.198f */, 1148690432 /* Float: 990.5f */, 1159319720, -988448625, -988850217);
					}
					StringCopy(&cLocal_282, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_434, 12))
					{
						fLocal_278 = -5.820748E+28f;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_432, 30))
				{
					iLocal_312 = 19;
				}
			}
			else
			{
				iLocal_277 = 1.222219E-30f;
				fLocal_280 = -5.844014E-35f;
				fLocal_278 = -2.020116E+31f;
				fLocal_279 = -3.133975f;
				fLocal_281 = 4.308498E+15f;
			}
			StringConCat(&cLocal_282, "swamp", 64);
			StringConCat(&cLocal_290, "_swamp", 64);
			break;
		case 3:
			fLocal_281 = 2.726818E-17f;
			if (MISC::IS_BIT_SET(iLocal_434, 10))
			{
				iLocal_277 = 8.277124E-21f;
				fLocal_280 = 2.604861E+38f;
				if ((MISC::IS_BIT_SET(iLocal_434, 12) || MISC::IS_BIT_SET(iLocal_434, 2)) || MISC::IS_BIT_SET(iLocal_434, 18))
				{
					if (MISC::IS_BIT_SET(iLocal_432, 30))
					{
						fLocal_281 = 4.308498E+15f;
						func_192(-1090149941, 1045086339 /* Float: 0.198f */, 1148690432 /* Float: 990.5f */, 1159319720, -988448625, -988850217);
					}
					else
					{
						fLocal_281 = -4.284445E+13f;
					}
					StringCopy(&cLocal_282, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_434, 12))
					{
						fLocal_278 = -8.550325E+23f;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_432, 31))
				{
					fLocal_281 = -1.132327E+29f;
				}
				else if (MISC::IS_BIT_SET(iLocal_432, 30))
				{
					if ((MISC::IS_BIT_SET(iLocal_434, 9) || MISC::IS_BIT_SET(iLocal_434, 3)) || MISC::IS_BIT_SET(iLocal_434, 17))
					{
						iLocal_312 = 19;
						iLocal_313 = 40;
						func_192(1017907249 /* Float: 0.021f */, 1037100384 /* Float: 0.102f */, 1135778202 /* Float: 357.2f */, -988083360, 1157786100, -987315573);
					}
					else
					{
						iLocal_312 = 20;
						func_192(1043811271 /* Float: 0.179f */, 1060336828 /* Float: 0.701f */, 1142468608, -987710665, 1158406377, -986629165);
					}
				}
			}
			else
			{
				iLocal_277 = -3.039207E-26f;
				fLocal_280 = 2.400887E-06f;
				fLocal_278 = 4.336532E+12f;
				fLocal_279 = 1.259838E-15f;
			}
			StringConCat(&cLocal_282, "snow", 64);
			StringConCat(&cLocal_290, "_snow", 64);
			break;
		case 4:
			fLocal_281 = -4.271526E+32f;
			if (MISC::IS_BIT_SET(iLocal_434, 10))
			{
				if ((MISC::IS_BIT_SET(iLocal_434, 12) || MISC::IS_BIT_SET(iLocal_434, 2)) || MISC::IS_BIT_SET(iLocal_434, 18))
				{
					if (MISC::IS_BIT_SET(iLocal_432, 30))
					{
						fLocal_281 = 4.308498E+15f;
						func_192(-1090149941, 1045086339 /* Float: 0.198f */, 1148690432 /* Float: 990.5f */, 1159319720, -988448625, -988850217);
					}
					else
					{
						fLocal_281 = -4.284445E+13f;
						func_192(1010055512 /* Float: 0.011f */, -1087683690, -1025835008, 1164982985, 1137417290, -1029548278);
					}
					StringCopy(&cLocal_282, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_434, 12))
					{
						fLocal_278 = 6.557637E-05f;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_432, 30))
				{
					fLocal_281 = 2.330323E+20f;
					if (MISC::IS_BIT_SET(iLocal_434, 17))
					{
						iLocal_312 = 13;
					}
					else if (MISC::IS_BIT_SET(iLocal_434, 9) || MISC::IS_BIT_SET(iLocal_434, 3))
					{
						iLocal_312 = 20;
					}
					else
					{
						iLocal_312 = 18;
					}
				}
				iLocal_277 = -1.474688E+25f;
				fLocal_280 = 7.003436E+32f;
			}
			else
			{
				iLocal_277 = 1253872f;
				fLocal_280 = 2.212126E+36f;
				fLocal_278 = -7.579758E-10f;
				fLocal_279 = -80.99696f;
			}
			StringConCat(&cLocal_282, "desert", 64);
			StringConCat(&cLocal_290, "_desert", 64);
			break;
		case 5:
			if (MISC::IS_BIT_SET(iLocal_434, 10))
			{
				fLocal_281 = 2.201797E-23f;
				iLocal_277 = 6.315176E+24f;
				fLocal_280 = 9.227749E+14f;
				if ((MISC::IS_BIT_SET(iLocal_434, 12) || MISC::IS_BIT_SET(iLocal_434, 2)) || MISC::IS_BIT_SET(iLocal_434, 18))
				{
					if (MISC::IS_BIT_SET(iLocal_432, 30))
					{
						fLocal_281 = 4.308498E+15f;
						func_192(1062652084 /* Float: 0.839f */, 1061460902 /* Float: 0.768f */, 1141915648 /* Float: 577f */, 1159121310, -988939751, -989221708);
					}
					else
					{
						fLocal_281 = -4.284445E+13f;
					}
					StringCopy(&cLocal_282, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_434, 12))
					{
						fLocal_278 = -4.071487E-10f;
					}
				}
				else if ((MISC::IS_BIT_SET(iLocal_434, 9) || MISC::IS_BIT_SET(iLocal_434, 3)) || MISC::IS_BIT_SET(iLocal_434, 17))
				{
					if (MISC::IS_BIT_SET(iLocal_432, 31))
					{
						fLocal_281 = 1.845801E-09f;
						func_192(1064984117 /* Float: 0.978f */, -1092263870, 1134854144 /* Float: 329f */, 1162484650, 1132688867, -989765181);
					}
					else if (MISC::IS_BIT_SET(iLocal_432, 30))
					{
						iLocal_312 = 19;
						func_192(1062752748 /* Float: 0.845f */, 1041261134 /* Float: 0.141f */, 1148846080 /* Float: 1000f */, -991990612, -1008505389, -1010244026);
					}
					else
					{
						func_192(1060957585 /* Float: 0.738f */, 1044482359 /* Float: 0.189f */, 1145630720, 1151861637, 1159329260, -992491692);
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_432, 30))
				{
					iLocal_312 = 19;
					func_192(1062752748 /* Float: 0.845f */, 1041261134 /* Float: 0.141f */, 1148846080 /* Float: 1000f */, -991990612, -1008505389, -1010244026);
				}
				else
				{
					fLocal_281 = 1.845801E-09f;
					func_192(1054213145 /* Float: 0.418f */, 1044616577 /* Float: 0.191f */, 1143910400, 1140050002, 1150406550, -1007282389);
				}
			}
			else
			{
				fLocal_281 = 2.201797E-23f;
				func_192(1059447636 /* Float: 0.648f */, -1085250994, 1139843072, -989077914, -996136223, -985745981);
				iLocal_277 = 6.599406E-37f;
				fLocal_280 = 1.421725E-31f;
				fLocal_278 = 2.65972E-14f;
				fLocal_279 = -5.980573E-06f;
			}
			StringConCat(&cLocal_282, "forest", 64);
			StringConCat(&cLocal_290, "_forest", 64);
			break;
	}
	iVar4 = 0;
	iVar5 = 0;
	if (MISC::IS_BIT_SET(iLocal_434, 14))
	{
		switch (iVar2)
		{
			case 0:
				break;
			case 1:
				iVar4 = -8.423336E-37f;
				iVar5 = -1.170844E+33f;
				break;
			case 2:
				iVar4 = -0.04902633f;
				iVar5 = -3.917036E+36f;
				break;
			case 3:
				iVar4 = 4.445528E-12f;
				iVar5 = 31.60419f;
				break;
			case 4:
				iVar4 = 1.034894E-21f;
				iVar5 = 1.836129E-31f;
				break;
			case 5:
				iVar4 = 4.385576E-24f;
				iVar5 = -1.413031E-11f;
				break;
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_434, 2))
	{
		iVar4 = 9.522267E-24f;
		iVar5 = -1.293804E-08f;
	}
	sVar6 = "NPC_";
	if (MISC::IS_BIT_SET(iLocal_434, 13))
	{
		sVar6 = "TOWNFOLK_";
	}
	func_193(iVar4, iVar5, sVar6);
	if (iVar2 != 0)
	{
		if (MISC::IS_BIT_SET(iLocal_432, 31))
		{
			StringConCat(&cLocal_282, "_night", 64);
		}
		else if (MISC::IS_BIT_SET(iLocal_432, 30))
		{
			StringConCat(&cLocal_282, "_dusk", 64);
		}
		else
		{
			StringConCat(&cLocal_282, "_day", 64);
		}
	}
	if (MISC::IS_BIT_SET(iLocal_434, 10))
	{
		vLocal_268 = { -1005683442, -983298425, 1118028956 };
	}
	vLocal_268 = { vLocal_268 + func_194() };
	vLocal_274 = { vLocal_274 + func_194() };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_266, vLocal_268, vVar7, 0);
	STREAMING::_0xF01D21DF39554115(0);
	STREAMING::SET_MAPDATACULLBOX_ENABLED(&cLocal_290, true);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	STREAMING::SET_ALL_MAPDATA_CULLED(1);
	MISC::SET_BIT(&iLocal_432, 9);
	return true;
}

bool func_80()
{
	int iVar0;
	int iVar1;

	if (Global_1048685.f_378 == 7.682688E-28f)
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iLocal_434, 5))
	{
		fLocal_298 = -0.0003048618f;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_266, true, false) && !ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iLocal_266, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_266, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_266);
		}
		return false;
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_434, 11))
		{
			iVar1 = 0;
			while (iVar1 <= (Global_1048685.f_377 - 1))
			{
				if (Global_1048685.f_23[iVar1 /*10*/].f_9)
				{
					iVar0++;
				}
				iVar1++;
			}
		}
		else
		{
			iVar0 = -1;
		}
		func_195(Global_1048685.f_487, iVar0);
	}
	if (!MISC::IS_BIT_SET(iLocal_434, 8))
	{
		func_179(fLocal_279);
	}
	return true;
}

bool func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	if (!func_196(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_196(iParam1))
	{
		iVar0 = 0;
	}
	if (!func_196(iParam2))
	{
		iVar0 = 0;
	}
	if (MISC::IS_BIT_SET(iLocal_434, 8))
	{
		if (!func_196(iParam3))
		{
			iVar0 = 0;
		}
	}
	if (!func_93(&uLocal_399))
	{
		func_51(&uLocal_399, 0, 0);
	}
	else if (func_94(&uLocal_399, 0, 0) > 30000)
	{
		return true;
	}
	return iVar0;
}

bool func_82()
{
	STREAMING::REQUEST_MODEL(fLocal_298, false);
	if (MISC::IS_BIT_SET(iLocal_434, 7))
	{
		STREAMING::REQUEST_MODEL(fLocal_299, false);
	}
	STREAMING::REQUEST_MODEL(-9.808974E-17f, false);
	STREAMING::REQUEST_MODEL(4.051941E-36f, false);
	STREAMING::REQUEST_MODEL(-4.966012E+12f, false);
	STREAMING::REQUEST_MODEL(-3.834125E-20f, false);
	STREAMING::REQUEST_MODEL(3.7233E+24f, false);
	if (((((!STREAMING::HAS_MODEL_LOADED(fLocal_298) && !STREAMING::HAS_MODEL_LOADED(-9.808974E-17f)) && !STREAMING::HAS_MODEL_LOADED(4.051941E-36f)) && !STREAMING::HAS_MODEL_LOADED(-4.966012E+12f)) && !STREAMING::HAS_MODEL_LOADED(-3.834125E-20f)) && !STREAMING::HAS_MODEL_LOADED(3.7233E+24f))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iLocal_434, 7))
	{
		if (!STREAMING::HAS_MODEL_LOADED(fLocal_299))
		{
			return false;
		}
	}
	if (func_197(&Local_541) == 0)
	{
		return false;
	}
	if (func_197(&Local_592) == 0)
	{
		return false;
	}
	return true;
}

bool func_83()
{
	return true;
}

bool func_84(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return false;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);
	if (!UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(*uParam0))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_CREATE(*uParam0, *uParam0);
	}
	return true;
}

bool func_85()
{
	if (((AUDIO::PREPARE_SOUNDSET("RDROADV_Winners_Screen_Sounds", true) && AUDIO::PREPARE_SOUNDSET("RDRO_Countdown_Clockwork_Sounds", true)) && AUDIO::PREPARE_SOUNDSET("RDRO_Winners_Screen_Sounds", true)) && AUDIO::PREPARE_SOUNDSET("RDRO_Camera_Flash_Pulse", true))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(&(Global_1048685.f_492)))
		{
			if (!GRAPHICS::ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(iLocal_14) && !GRAPHICS::ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(iLocal_15))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_86(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_198(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_199())
	{
		return func_198(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_198(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_87()
{
	return func_200() == 4;
}

void func_88(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = PED::CLONE_PED(*uParam1, false, true, true);
	ENTITY::SET_ENTITY_COORDS(*uParam0, *uParam2, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0, false, true);
	if (PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		PED::REVIVE_INJURED_PED(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, ENTITY::GET_ENTITY_MAX_HEALTH(*uParam0, false), 0);
	}
	PED::CLEAR_PED_DECORATIONS(*uParam0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, true, true);
	ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true);
}

void func_89(int iParam0)
{
	if (PED::IS_PED_MALE(iParam0))
	{
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -3.644607E+34f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 3.943518E+18f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 4.567184E+08f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 344.4016f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 0.0002221403f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 5.92936E-18f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 1.503537E-21f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 3.95026E-35f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -2.828089E-26f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -1.670053E-15f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -9.242017E-05f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -3366195f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 0.000401862f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 2.019799E+33f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 3.241754E+17f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -9.203914E-25f, 0, false);
	}
	else
	{
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 3.355994E-29f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -2.758646E+38f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 4.487543E-12f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 1.038593E-13f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -2.412299E+23f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -2.311746E+34f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -2.039033E-07f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 21066.54f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 1.419557E-05f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, -2.178327E-37f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 1.245577E+26f, 0, false);
		PED::_REMOVE_SHOP_ITEM_FROM_PED(iParam0, 2.873079E+32f, 0, false);
	}
}

void func_90(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -8.569155E-24f, 0, true);
	}
	else
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam0, -8.569155E-24f, 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_91(bool bParam0)
{
	if (!bParam0)
	{
		func_138(33);
	}
	else
	{
		func_139(33);
	}
	CAM::_0x63E5841A9264D016(bParam0);
}

void func_92()
{
	func_201(0);
}

bool func_93(var uParam0)
{
	return uParam0->f_1;
}

int func_94(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

void func_95(int iParam0)
{
	var uVar0;

	if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(*iParam0))
	{
		uVar0 = *iParam0;
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY_AND_CLEAR(&uVar0);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(iParam0);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_3))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_3);
	}
}

void func_96(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_23(16);
	switch (uParam0->f_232)
	{
		case 0:
			func_202(1);
			func_203(&(uParam0->f_232), 1);
			break;
		case 1:
			AUDIO::PREPARE_SOUNDSET("MP_Leaderboard_Sounds", true);
			func_203(&(uParam0->f_232), 2);
			break;
		case 2:
			iVar1 = UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(1.355797E-17f, func_204(bParam1));
			if (iVar1 == 0)
			{
				func_203(&(uParam0->f_232), 3);
			}
			else if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.355797E-17f))
			{
				func_203(&(uParam0->f_232), 3);
			}
			break;
		case 3:
			if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.355797E-17f))
			{
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(1.355797E-17f, func_205());
				func_203(&(uParam0->f_232), 4);
			}
			else if (func_206())
			{
				func_203(&(uParam0->f_232), 2);
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
					func_203(&(uParam0->f_232), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				MISC::CLEAR_BIT(&(uParam0->f_158), 13);
				func_203(&(uParam0->f_232), 1);
			}
			else
			{
				func_203(&(uParam0->f_232), 6);
			}
			break;
		case 6:
			func_176(uParam0, bParam1);
			break;
	}
}

void func_97(var uParam0)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Title");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
	uParam0->f_142 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
}

void func_98(int iParam0)
{
	iLocal_424 = iParam0;
}

void func_99(int iParam0)
{
	if (Global_1048586 != iParam0)
	{
		Global_1048586 = iParam0;
	}
}

bool func_100()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_5;
}

bool func_101(int iParam0)
{
	return func_86(1, iParam0);
}

bool func_102()
{
	return (Global_1048576 || Global_2883584);
}

void func_103(int iParam0)
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

bool func_104()
{
	return func_207(4);
}

void func_105(int iParam0, bool bParam1)
{
	Global_1102813.f_3520.f_13 = iParam0;
	if (bParam1)
	{
		Global_1102813.f_3520.f_12 = Global_1102813.f_3520.f_13;
	}
}

void func_106()
{
	bool bVar0;

	switch (iLocal_436)
	{
		case 0:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1072759.f_28644.f_23.f_4)))
			{
				Global_1048582 = 1;
				iLocal_437 = ANIMSCENE::_CREATE_ANIM_SCENE(&(Global_1072759.f_28644.f_23.f_4), 16512, 0, false, true);
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_437))
				{
					StringCopy(&(Global_1072759.f_28644.f_23.f_4), "", 128);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_437);
					func_208(1);
				}
			}
			else
			{
				CAM::DO_SCREEN_FADE_OUT(1750);
				func_16(4096);
			}
			break;
		case 1:
			bVar0 = true;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1072759.f_28644.f_23.f_20)))
			{
				if (!AUDIO::PREPARE_MUSIC_EVENT(&(Global_1072759.f_28644.f_23.f_20)))
				{
					bVar0 = false;
				}
			}
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_437, true, false) && bVar0)
			{
				func_209(0);
				CAM::DO_SCREEN_FADE_IN(0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_437);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1072759.f_28644.f_23.f_20)))
				{
					AUDIO::TRIGGER_MUSIC_EVENT(&(Global_1072759.f_28644.f_23.f_20));
					StringCopy(&(Global_1072759.f_28644.f_23.f_20), "", 128);
				}
				func_47(8192);
				func_208(2);
			}
			break;
		case 2:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_437, false))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_208(3);
			}
			break;
		case 3:
			func_210(0, 0);
			ANIMSCENE::RESET_ANIM_SCENE(iLocal_437, 0);
			func_208(0);
			func_16(4096);
			break;
	}
}

void func_107()
{
	if (fLocal_305 != 0f || fLocal_306 != 0f)
	{
		GRAPHICS::_SET_CLOUD_LAYER(fLocal_305, fLocal_306, iLocal_307);
	}
	if (fLocal_308 != 0f)
	{
		GRAPHICS::_SET_CLOUD_HEIGHT(fLocal_308);
	}
	if ((fLocal_309 != 0f || fLocal_310 != 0f) || fLocal_311 != 0f)
	{
		GRAPHICS::_SET_CLOUD_NOISE(fLocal_309, fLocal_310, fLocal_311);
	}
}

bool func_108()
{
	if (Global_1940072.f_105 != -1)
	{
		return true;
	}
	if (Global_1940072.f_105.f_2 != -1)
	{
		return true;
	}
	return HUD::BUSYSPINNER_IS_ON();
}

void func_109()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	Local_32.f_159 = Global_1051169;
	Local_32.f_160 = Global_1051170;
	iVar0 = Global_1050074.f_14;
	iLocal_316 = Global_1048685.f_20;
	bVar1 = iVar0 > 1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1050074.f_27[0 /*18*/])))
	{
		func_211();
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			Local_320[iVar2 /*18*/].f_16 = Global_1050074.f_27[iVar2 /*18*/].f_16;
			Local_320[iVar2 /*18*/] = { Global_1050074.f_27[iVar2 /*18*/] };
			Local_320[iVar2 /*18*/].f_8 = { Global_1050074.f_27[iVar2 /*18*/].f_8 };
			Local_320[iVar2 /*18*/].f_17 = Global_1050074.f_27[iVar2 /*18*/].f_17;
			iVar2++;
		}
	}
	Local_32.f_162 = { Global_1050912 };
	if (Global_1940072.f_111)
	{
		func_152();
	}
	func_97(&Local_32);
	MISC::SET_BIT(&(Local_32.f_159), 11);
	if (MISC::IS_BIT_SET(Local_32.f_159, 8))
	{
		MISC::CLEAR_BIT(&(Local_32.f_159), 8);
	}
	if (MISC::IS_BIT_SET(Local_32.f_159, 20))
	{
		MISC::CLEAR_BIT(&(Local_32.f_159), 20);
	}
	func_212(&Local_32, &(Global_1050074.f_101), &Global_1051021, 1, 1, bVar1, iLocal_316, iVar0, 0, 0, -1);
	func_213(&Local_32, &Global_1051013);
}

void func_110()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar2 = Global_1048685.f_17;
	if (Local_32.f_150 > 1)
	{
		sVar1 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_EF_WINS");
	}
	else
	{
		sVar1 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_EF_WIN");
	}
	if (Global_1048685.f_378 == -1.222314E+33f)
	{
		if (Global_1048685.f_496)
		{
			sVar1 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_EF_OVER");
		}
		else
		{
			sVar1 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_EF_DEF");
		}
	}
	else if (Global_1048685.f_378 == -1.857341E+28f || Global_1048685.f_378 == 560.1708f)
	{
		sVar1 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_EF_OVER");
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "winnerLabelRawText", sVar1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, "winnerLabelColor", 27.64779f);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "winnerNameRawText", &(Global_1048685.f_9));
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, "winnerNameColor", iVar2);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "mvpLabelRawText", HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UGC_END_MVP"));
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, "mvpLabelColor", Local_320[0 /*18*/].f_17);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "mvpNameRawText", &(Local_320[0 /*18*/]));
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, "mvpNameColor", Local_320[0 /*18*/].f_17);
}

void func_111(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "likeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "enabled", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "dislikeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "enabled", bParam0);
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "revealScoreboardButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, "enabled", bParam0);
	iVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "acceptButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar4, "enabled", bParam0);
}

void func_112(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	func_214(bParam0);
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "revealScoreboardButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "visible", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "acceptButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "visible", bParam0);
}

void func_113()
{
	if (MISC::IS_BIT_SET(iLocal_434, 12) || MISC::IS_BIT_SET(iLocal_434, 2))
	{
		MISC::_SET_WEATHER_VARIATION("FOG", "fog_MP_Pred");
		MISC::_SET_WEATHER_VARIATION("MISTY", "misty_MP_Pred");
		MISC::_SET_WEATHER_VARIATION("SHOWER", "shower_MP_Pred");
		MISC::_SET_WEATHER_VARIATION("THUNDERSTORM", "thunderstorm_MP_Pred");
	}
	else if (MISC::IS_BIT_SET(iLocal_434, 3))
	{
		MISC::_CLEAR_WEATHER_VARIATION("FOG", true);
		MISC::_CLEAR_WEATHER_VARIATION("MISTY", true);
		MISC::_CLEAR_WEATHER_VARIATION("SHOWER", true);
		MISC::_CLEAR_WEATHER_VARIATION("THUNDERSTORM", true);
	}
}

void func_114(int iParam0)
{
	iLocal_426 = iParam0;
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	iVar0 = 0;
	while (iVar0 <= (Global_1048685.f_377 - 1))
	{
		if (Global_1048685.f_23[iVar0 /*10*/].f_9 || MISC::IS_BIT_SET(iLocal_434, 16))
		{
			iVar1++;
			StringCopy(&cVar3, "win_", 16);
			if (iVar1 < 10)
			{
				StringConCat(&cVar3, "0", 16);
			}
			StringIntConCat(&cVar3, iVar1, 16);
			if (!PED::IS_PED_MALE(uLocal_441[iVar0]))
			{
				StringConCat(&cVar3, "F", 16);
			}
			ENTITY::SET_ENTITY_COLLISION(uLocal_441[iVar0], false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_266, &cVar3, uLocal_441[iVar0], 0);
		}
		else if (!MISC::IS_BIT_SET(iLocal_434, 4))
		{
			iVar2++;
			StringCopy(&cVar3, "DEAD_0", 16);
			StringIntConCat(&cVar3, iVar2, 16);
			if (!PED::IS_PED_MALE(uLocal_441[iVar0]))
			{
				StringConCat(&cVar3, "F", 16);
			}
			ENTITY::SET_ENTITY_COLLISION(uLocal_441[iVar0], false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_266, &cVar3, uLocal_441[iVar0], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_507[iVar0]))
		{
			StringCopy(&cVar3, "horse_0", 16);
			StringIntConCat(&cVar3, iVar0 + 1, 16);
			ENTITY::SET_ENTITY_COLLISION(uLocal_507[iVar0], false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_266, &cVar3, uLocal_507[iVar0], 0);
		}
		iVar0++;
	}
}

void func_116()
{
	NETWORK::_NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME(0);
	MISC::_CLEAR_WEATHER_TYPE_PERSIST_OVERTIME(0);
	MISC::SET_WEATHER_TYPE(fLocal_281, true, true, false, 0f, false);
	func_174(1);
	if (iLocal_312 == -1)
	{
		if (MISC::IS_BIT_SET(iLocal_432, 31))
		{
			NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(0, 0, 0, 0, true);
		}
		else if (MISC::IS_BIT_SET(iLocal_432, 30))
		{
			NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(18, 0, 0, 0, true);
		}
		else
		{
			NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(13, 0, 0, 0, true);
		}
	}
	else
	{
		NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(iLocal_312, iLocal_313, 0, 0, true);
	}
	iLocal_315 = MISC::GET_GAME_TIMER();
	MISC::SET_BIT(&iLocal_432, 10);
}

int func_117()
{
	int iVar0;

	if (iLocal_540 >= 10)
	{
		return 1;
	}
	if (!func_215())
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_541[iLocal_540 /*5*/].f_4);
	if (Global_1048685.f_379[iLocal_540 /*3*/].f_1 > -1)
	{
		PED::_EQUIP_META_PED_OUTFIT_PRESET(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_541[iLocal_540 /*5*/].f_4), Global_1048685.f_379[iLocal_540 /*3*/].f_1, false);
	}
	else
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	PED::_UPDATE_PED_VARIATION(iVar0, false, true, true, true, false);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
	ENTITY::SET_ENTITY_VISIBLE(Local_541[iLocal_540 /*5*/].f_4, true);
	func_216(iVar0, Local_541[iLocal_540 /*5*/].f_1);
	iLocal_540++;
	return 0;
}

int func_118()
{
	int iVar0;
	char cVar1[16];

	if (func_217() == 0)
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iLocal_435, 5))
	{
		if (MISC::IS_BIT_SET(iLocal_434, 9))
		{
			STREAMING::REQUEST_MODEL(4.462234E-31f, false);
			if (STREAMING::HAS_MODEL_LOADED(4.462234E-31f))
			{
				iLocal_678 = VEHICLE::CREATE_VEHICLE(4.462234E-31f, vLocal_271, 0f, false, true, false, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_678, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_678, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_266, "cart06", iLocal_678, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(4.462234E-31f);
				MISC::SET_BIT(&iLocal_435, 5);
				return 1;
			}
			return 0;
		}
		else
		{
			MISC::SET_BIT(&iLocal_435, 5);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_435, 1))
	{
		STREAMING::REQUEST_MODEL(fLocal_298, false);
		if (MISC::IS_BIT_SET(iLocal_434, 7))
		{
			STREAMING::REQUEST_MODEL(fLocal_299, false);
			if (!STREAMING::HAS_MODEL_LOADED(fLocal_299))
			{
				return 1;
			}
		}
		if (!Global_1048685.f_487)
		{
			STREAMING::REQUEST_MODEL(fLocal_300, false);
			if (!STREAMING::HAS_MODEL_LOADED(fLocal_300))
			{
				return 0;
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(fLocal_298))
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_301 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_603[iVar0]))
				{
					if (iVar0 == 0)
					{
						if (!Global_1048685.f_487)
						{
							iLocal_603[iVar0] = OBJECT::CREATE_OBJECT(fLocal_300, vLocal_271, false, true, false, false, true);
						}
						else if (MISC::IS_BIT_SET(iLocal_434, 7))
						{
							iLocal_603[iVar0] = OBJECT::CREATE_OBJECT(fLocal_299, vLocal_271, false, true, false, false, true);
						}
						else
						{
							iLocal_603[iVar0] = OBJECT::CREATE_OBJECT(fLocal_298, vLocal_271, false, true, false, false, true);
						}
					}
					else
					{
						iLocal_603[iVar0] = OBJECT::CREATE_OBJECT(fLocal_298, vLocal_271, false, true, false, false, true);
					}
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_218(&(iLocal_603[iVar0]), cVar1);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(fLocal_298);
			if (MISC::IS_BIT_SET(iLocal_434, 7))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(fLocal_299);
			}
			MISC::SET_BIT(&iLocal_435, 1);
		}
		return 0;
	}
	if (!MISC::IS_BIT_SET(iLocal_435, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (func_219(iVar0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_620[iVar0]) && MISC::IS_BIT_SET(iLocal_428, iVar0))
				{
					iLocal_620[iVar0] = WEAPON::_CREATE_WEAPON_OBJECT(-1.91869E+32f, 1, vLocal_271, true, 1f);
					StringCopy(&cVar1, "RIFLE_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_218(&(iLocal_620[iVar0]), cVar1);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&iLocal_435, 4);
		return 0;
	}
	if (!MISC::IS_BIT_SET(iLocal_435, 3))
	{
		if (MISC::IS_BIT_SET(iLocal_434, 6))
		{
			STREAMING::REQUEST_MODEL(-4.966012E+12f, false);
			STREAMING::REQUEST_MODEL(-3.834125E-20f, false);
			STREAMING::REQUEST_MODEL(3.7233E+24f, false);
			if ((STREAMING::HAS_MODEL_LOADED(-4.966012E+12f) && STREAMING::HAS_MODEL_LOADED(-3.834125E-20f)) && STREAMING::HAS_MODEL_LOADED(3.7233E+24f))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_672[0]))
				{
					iLocal_672[0] = OBJECT::CREATE_OBJECT(-4.966012E+12f, vLocal_271, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_01", 16);
					func_218(&(iLocal_672[0]), cVar1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_672[1]))
				{
					iLocal_672[1] = OBJECT::CREATE_OBJECT(-3.834125E-20f, vLocal_271, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_02", 16);
					func_218(&(iLocal_672[1]), cVar1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_672[2]))
				{
					iLocal_672[2] = OBJECT::CREATE_OBJECT(3.7233E+24f, vLocal_271, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_03", 16);
					func_218(&(iLocal_672[2]), cVar1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-4.966012E+12f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-3.834125E-20f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(3.7233E+24f);
				MISC::SET_BIT(&iLocal_435, 3);
				return 0;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(-2.172142E-38f, false);
			if (STREAMING::HAS_MODEL_LOADED(-2.172142E-38f))
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_302 - 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_672[iVar0]))
					{
						iLocal_672[iVar0] = OBJECT::CREATE_OBJECT(-2.172142E-38f, vLocal_271, false, true, false, false, true);
						StringCopy(&cVar1, "CRATE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_218(&(iLocal_672[iVar0]), cVar1);
					}
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-2.172142E-38f);
				MISC::SET_BIT(&iLocal_435, 3);
				return 0;
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_435, 2))
	{
		STREAMING::REQUEST_MODEL(-9.808974E-17f, false);
		if (STREAMING::HAS_MODEL_LOADED(-9.808974E-17f))
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_303 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_655[iVar0]))
				{
					iLocal_655[iVar0] = OBJECT::CREATE_OBJECT(-9.808974E-17f, vLocal_271, false, true, false, false, true);
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_218(&(iLocal_655[iVar0]), cVar1);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-9.808974E-17f);
			MISC::SET_BIT(&iLocal_435, 2);
			return 0;
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_435, 6))
	{
		STREAMING::REQUEST_MODEL(-1.20569E-32f, false);
		if (STREAMING::HAS_MODEL_LOADED(-1.20569E-32f))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_219(iVar0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_637[iVar0]) && MISC::IS_BIT_SET(iLocal_429, iVar0))
					{
						iLocal_637[iVar0] = OBJECT::CREATE_OBJECT(-1.20569E-32f, vLocal_271, false, true, false, false, true);
						StringCopy(&cVar1, "JD_BOTTLE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_218(&(iLocal_637[iVar0]), cVar1);
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&iLocal_435, 6);
			return 0;
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_435, 7))
	{
		STREAMING::REQUEST_MODEL(4.027035E+21f, false);
		if (STREAMING::HAS_MODEL_LOADED(4.027035E+21f))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_219(iVar0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_646[iVar0]) && MISC::IS_BIT_SET(iLocal_430, iVar0))
					{
						iLocal_646[iVar0] = OBJECT::CREATE_OBJECT(4.027035E+21f, vLocal_271, false, true, false, false, true);
						StringCopy(&cVar1, "SHOVEL_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_218(&(iLocal_646[iVar0]), cVar1);
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&iLocal_435, 7);
			return 0;
		}
	}
	if ((((((MISC::IS_BIT_SET(iLocal_435, 3) && MISC::IS_BIT_SET(iLocal_435, 2)) && MISC::IS_BIT_SET(iLocal_435, 1)) && MISC::IS_BIT_SET(iLocal_435, 6)) && MISC::IS_BIT_SET(iLocal_435, 7)) && MISC::IS_BIT_SET(iLocal_435, 4)) && MISC::IS_BIT_SET(iLocal_435, 5))
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	if (!func_93(&uLocal_403))
	{
		func_51(&uLocal_403, 0, 0);
	}
	else if (func_94(&uLocal_403, 0, 0) >= 10500)
	{
		return 1;
	}
	return 0;
}

void func_120(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_121()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		PED::RESURRECT_PED(iVar1);
	}
	if (PED::IS_PED_HOGTIED(iVar1))
	{
		TASK::UNHOGTIE_PED(iVar1, 3, 0, 0, 0, 8f);
	}
	if (PED::IS_PED_INCAPACITATED(iVar1))
	{
		PED::_INCAPACITATED_REVIVE(iVar1, 0);
	}
	PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_DISABLED(iVar0, true);
}

void func_122()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_441[iVar0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_441[iVar0], true);
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_441[iVar0], true);
			if (PED::IS_PED_DEAD_OR_DYING(uLocal_441[iVar0], true))
			{
				PED::RESURRECT_PED(uLocal_441[iVar0]);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_441[iVar0], false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_441[iVar0], true);
			PED::_0xC991EF46FE323867(uLocal_441[iVar0], 1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_441[iVar0], true, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1048685.f_23[iVar0 /*10*/]))
		{
			PED::DELETE_PED(&(Global_1048685.f_23[iVar0 /*10*/]));
		}
		iVar0++;
	}
}

void func_123(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3[7];
	int iVar18;
	int iVar19;

	func_134();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam0[iVar0 /*23*/])->f_14 == 255 || (uParam0[iVar0 /*23*/])->f_14 == iLocal_438)
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0[iVar0 /*23*/])->f_14))
		{
		}
		else
		{
			func_220((uParam0[iVar0 /*23*/])->f_14);
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar1 = GANG::NETWORK_GET_GANG_ID(iLocal_438);
		if ((GANG::NETWORK_IS_GANG_ID_VALID(iVar1) && GANG::NETWORK_IS_GANG_ACTIVE(iVar1)) && GANG::NETWORK_IS_GANG_IN_SESSION(iVar1))
		{
			iVar18 = GANG::_NETWORK_GET_GANG_MEMBERS(iVar1, &Var3);
			if (iVar18 > 1 && iVar18 < 7)
			{
				iVar2 = 0;
				while (iVar2 <= (iVar18 - 1))
				{
					iVar19 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var3[iVar2 /*2*/]));
					if (iVar19 == 255 || iVar19 == iLocal_438)
					{
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar19))
					{
					}
					else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var3[iVar2 /*2*/])))
					{
					}
					else
					{
						func_220(iVar19);
					}
					iVar2++;
				}
			}
		}
	}
}

bool func_124()
{
	bool bVar0;

	if (!func_93(&uLocal_405))
	{
		func_51(&uLocal_405, 0, 0);
	}
	if (func_221())
	{
		if (func_23(2))
		{
			if (func_94(&uLocal_405, 0, 0) < 0 && iLocal_396 > 2000)
			{
				bVar0 = true;
			}
			else if (func_94(&uLocal_405, 0, 0) > 10500)
			{
				bVar0 = true;
			}
			else if (STREAMING::IS_LOAD_SCENE_LOADED() && func_94(&uLocal_405, 0, 0) > 4500)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (iLocal_266 != -1)
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_266, false))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_266);
					return false;
				}
				else
				{
					func_19(&uLocal_16, 0);
					return true;
				}
			}
		}
		else
		{
			iLocal_396++;
		}
	}
	return false;
}

void func_125(int iParam0)
{
	iLocal_425 = iParam0;
}

void func_126()
{
	Global_1940072.f_105 = -1;
	Global_1940072.f_105.f_1 = 0;
}

bool func_127()
{
	float fVar0;

	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_266, false))
	{
		return false;
	}
	fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_266);
	if (fVar0 > 1064011039)
	{
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(iLocal_266) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(iLocal_266, false))
	{
		return true;
	}
	if (func_93(&uLocal_405) && func_94(&uLocal_405, 0, 0) > 30000)
	{
		return true;
	}
	return false;
}

void func_128(bool bParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	if (bParam0 && MISC::IS_STRING_NULL_OR_EMPTY(&(Local_320[0 /*18*/])))
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "showMvpComponent", bParam0);
}

void func_129(bool bParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "showWinnerComponent", bParam0);
}

void func_130()
{
	int iVar0;
	char* sVar1;
	struct<2> Var2;
	struct<2> Var4;

	iVar0 = PLAYER::PLAYER_ID();
	sVar1 = PLAYER::GET_PLAYER_NAME(iVar0);
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_320[0 /*18*/]))) && MISC::ARE_STRINGS_EQUAL(&(Local_320[0 /*18*/]), sVar1))
	{
		Var2 = { func_55(3.21233E+09f, 0) };
		STATS::_STAT_ID_INCREMENT_INT(&Var2, 1);
		Global_1049182.f_8 = 1;
		Global_1049293++;
	}
	else
	{
		Global_1049293 = 0;
	}
	Var4 = { func_55(3.204497E-25f, 9.179627E-14f) };
	STATS::_0x91A4F58E01ED5E4C(&Var4, Global_1049293);
}

void func_131(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else if (func_222(&((uParam1[iVar0 /*23*/])->f_14)))
		{
			func_223(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_132(var uParam0, var uParam1, bool bParam2)
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
			func_224(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

bool func_133()
{
	vector3 vVar0;
	float fVar4;

	fVar4 = 5.757389E-26f;
	if (!func_225())
	{
		if (UIEVENTS::EVENTS_UI_IS_PENDING(fVar4))
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(fVar4, &vVar0))
			{
				switch (vVar0.x)
				{
					case -1203660660:
						if (vVar0.z == -3.796019E+07f && !MISC::IS_BIT_SET(iLocal_432, 3))
						{
							func_226(1, 0);
							AUDIO::PLAY_SOUND_FRONTEND("like", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1.473384E-22f && !MISC::IS_BIT_SET(iLocal_432, 3))
						{
							func_226(0, 0);
							AUDIO::PLAY_SOUND_FRONTEND("dislike", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -2.691788E-27f)
						{
							func_227(&uLocal_319);
						}
						else if (vVar0.z == 7.603848E+16f)
						{
							func_228();
							CAM::DO_SCREEN_FADE_OUT(150);
							AUDIO::PLAY_SOUND_FRONTEND("enter", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						break;
				}
				UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
			}
		}
	}
	else
	{
		if (UIEVENTS::EVENTS_UI_IS_PENDING(fVar4))
		{
			UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
		}
		return true;
	}
	return false;
}

void func_134()
{
	var uVar0;

	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Global_1072759.f_22933.f_5)))
	{
		Global_1072759.f_22933.f_5 = uVar0;
	}
}

void func_135()
{
	int iVar0;

	iVar0 = func_230(func_229());
	if (!MISC::IS_BIT_SET(iLocal_432, 6))
	{
		if (iVar0 > 0)
		{
			MISC::SET_BIT(&iLocal_432, 6);
			func_231(&Local_32, &iLocal_265, iVar0);
		}
	}
	else if (iVar0 < 0)
	{
		func_181(&Local_32, &iLocal_265);
	}
	else
	{
		func_232(&iLocal_265, iVar0);
	}
}

void func_136()
{
	char cVar0[32];
	float fVar4;
	bool bVar5;
	float fVar6;
	char cVar7[32];
	int iVar11;
	char[] cVar12[8];

	if (!MISC::IS_BIT_SET(iLocal_433, 2))
	{
		if (func_233(&(Global_1048685.f_456)) || MISC::IS_BIT_SET(iLocal_433, 4))
		{
			fVar4 = (BUILTIN::TO_FLOAT(Global_1048685.f_468) / 1120403456);
			StringCopy(&cVar0, func_234(fVar4, 2), 32);
			func_235(&Local_32, &cVar0);
			if (Global_1048685.f_491 != 0)
			{
				func_56(func_55(5.997336E+16f, Global_1048685.f_491), Global_1048685.f_468);
			}
			MISC::SET_BIT(&iLocal_433, 2);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_433, 3))
	{
		bVar5 = (func_233(&(Global_1048685.f_424)) && func_233(&(Global_1048685.f_440)));
		if (bVar5)
		{
			fVar6 = (BUILTIN::TO_FLOAT((Global_1048685.f_424.f_8 + Global_1048685.f_440.f_8)) / 1120403456);
			StringCopy(&cVar7, func_234(fVar6, 2), 32);
			func_236(&Local_32, &cVar7);
			iVar11 = (Global_1048685.f_424.f_6 + Global_1048685.f_440.f_6);
			MISC::_INT_TO_STRING(iVar11, "%d", &cVar12);
			func_237(&Local_32, &cVar12);
			if (Global_1048685.f_491 != 0)
			{
				func_56(func_55(-4.099351E-30f, Global_1048685.f_491), (Global_1048685.f_424.f_8 + Global_1048685.f_440.f_8));
			}
			MISC::SET_BIT(&iLocal_433, 3);
			if (MISC::IS_BIT_SET(iLocal_434, 17))
			{
				MISC::SET_BIT(&iLocal_433, 4);
			}
		}
	}
}

void func_137(int iParam0)
{
	func_238(&(Global_1072759.f_23824.f_5), iParam0);
}

int func_138(int iParam0)
{
	if (func_239(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	if (func_240(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_140()
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
	if (func_241(2048))
	{
		return true;
	}
	if (func_242(1))
	{
		return true;
	}
	if (Global_1102813.f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_141(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

bool func_142(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

void func_143(int iParam0)
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
		func_243();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_144(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

void func_145(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> Var8[4];
	int iVar41;
	char cVar42[16];
	int iVar44;
	var uVar45[4];
	var uVar50[4];
	int iVar55[4];
	struct<4> Var60[4];
	struct<4> Var77[4];
	int iVar94;
	vector3 vVar95[24];

	StringCopy(&cVar0, PLAYER::GET_PLAYER_NAME(iParam3), 64);
	iVar41 = func_244(uParam0, iParam3);
	if (!MISC::IS_BIT_SET(uParam2->f_15, 0))
	{
		return;
	}
	if (bParam4)
	{
		StringCopy(&(Var8[1 /*8*/]), MISC::VAR_STRING(2, "UIC_EF_TIM"), 64);
		StringCopy(&cVar42, "POS_", 16);
		StringIntConCat(&cVar42, iVar41 + 1, 16);
		StringCopy(&(Var8[0 /*8*/]), MISC::VAR_STRING(2, &cVar42), 64);
		if ((BUILTIN::ROUND((uParam0[iVar41 /*23*/])->f_7) == 9.25711E-36f || BUILTIN::ROUND((uParam0[iVar41 /*23*/])->f_7) == 2.52543E-36f) || BUILTIN::ROUND((uParam0[iVar41 /*23*/])->f_7) == 7.82218E-36f)
		{
			StringCopy(&(Var8[1 /*8*/]), MISC::VAR_STRING(2, "POS_OOT"), 64);
		}
		else
		{
			MISC::SET_BIT(&iVar44, 7);
			StringCopy(&(Var8[1 /*8*/]), MISC::VAR_STRING(10, "UIC_EF_TIM", func_245(BUILTIN::ROUND((uParam0[iVar41 /*23*/])->f_7), iVar44, 0)), 64);
		}
	}
	else
	{
		iVar55[0] = func_246(uParam0[iVar41 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar55[1] = func_247(uParam0[iVar41 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar55[2] = func_248(uParam0[iVar41 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar55[3] = func_249(uParam0[iVar41 /*23*/]);
		Var60[0 /*4*/] = { func_250(iVar55[0], uParam1->f_159, &(uVar45[0]), &(uVar50[0])) };
		Var60[1 /*4*/] = { func_251(iVar55[1], uParam1->f_159, uParam1->f_160, &(uVar45[1]), &(uVar50[1])) };
		Var60[2 /*4*/] = { func_252(iVar55[2], uParam1->f_159, uParam1->f_160, &(uVar45[2]), &(uVar50[2])) };
		Var60[3 /*4*/] = { func_253(&(uVar45[3]), &(uVar50[3])) };
		iVar94 = 0;
		while (iVar94 < 4)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var60[iVar94 /*4*/])))
			{
			}
			else if (uVar50[iVar94])
			{
				IntToString(&cVar95, iVar55[iVar94], 24);
				if (func_254(&(Var60[iVar94 /*4*/]), 39, cVar95))
				{
					MemCopy(&(Var8[iVar94 /*8*/]), {Var60[iVar94 /*4*/]}, 8);
				}
				else if (uVar45[iVar94])
				{
					IntToString(&(Var77[iVar94 /*4*/]), iVar55[iVar94], 32);
					StringConCat(&(Var77[iVar94 /*4*/]), " ", 32);
					StringConCat(&(Var77[iVar94 /*4*/]), &(Var60[iVar94 /*4*/]), 32);
					StringCopy(&(Var8[iVar94 /*8*/]), MISC::VAR_STRING(10, "LITERAL_STRING", &(Var77[iVar94 /*4*/])), 64);
				}
				else
				{
					Var77[iVar94 /*4*/] = { Var60[iVar94 /*4*/] };
					StringCopy(&(Var8[iVar94 /*8*/]), MISC::VAR_STRING(2, &(Var77[iVar94 /*4*/]), iVar55[iVar94]), 64);
				}
				iVar94++;
				func_146(uParam2, &cVar0, "", &(Var8[0 /*8*/]), &(Var8[1 /*8*/]), &(Var8[2 /*8*/]), &(Var8[3 /*8*/]), 4.808429E-35f);
				func_19(uParam2, 1);
			}
		}
	}
}

void func_146(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "gamerTag", sParam1);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "teamName", sParam2);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_12))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, iParam7);
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3, "teamNameColor", iParam7);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[0]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[0], sParam3);
	}
	else
	{
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[1]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[1], sParam4);
	}
	else
	{
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[2]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[2], sParam5);
	}
	else
	{
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[3]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[3], sParam6);
	}
	else
	{
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);
	}
}

bool func_147(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return true;
	}
	if (!UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(*uParam0))
	{
		func_84(uParam0);
		return false;
	}
	UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return true;
}

bool func_148()
{
	return Global_1896762.f_352;
}

void func_149()
{
	func_255(0);
}

bool func_150()
{
	return Global_1940239.f_2;
}

void func_151()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(NaNf) > 0)
	{
		Global_1940239.f_13 = 1;
	}
}

void func_152()
{
	if (Global_1940072.f_111)
	{
		Global_1940072.f_111 = 0;
	}
	HUD::_DISABLE_HUD_CONTEXT(1.275901E-37f);
}

bool func_153(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_154(int iParam0)
{
	return Global_262152 == iParam0;
}

bool func_155()
{
	return CAM::_IS_CAM_PHOTOFX_RUNNING();
}

void func_156(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_139(70);
		if (bParam1)
		{
			func_139(73);
		}
	}
	else
	{
		func_138(70);
		func_138(73);
	}
}

void func_157(int iParam0)
{
	func_238(&Global_1051189, iParam0);
}

void func_158(vector3 vParam0, float fParam3, bool bParam4)
{
	char cVar0[64];
	char cVar8[64];

	if (bParam4)
	{
		StringCopy(&cVar0, MISC::_GET_STRING_FROM_VECTOR(vParam0), 64);
		StringCopy(&cVar8, MISC::_GET_STRING_FROM_FLOAT(fParam3, 4), 64);
		Global_1102813.f_3827 = { vParam0 };
		Global_1102813.f_3830 = fParam3;
		func_139(50);
	}
	else
	{
		func_138(50);
	}
}

void func_159(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_139(66);
		if (bParam1)
		{
			func_139(73);
		}
	}
	else
	{
		func_138(66);
		func_138(50);
		func_138(73);
	}
}

int func_160(vector3 vParam0, var uParam3)
{
	if (func_153(vParam0))
	{
		return 0;
	}
	if (func_256(255) == 4)
	{
		return 0;
	}
	if (func_86(4, 255))
	{
	}
	func_139(4);
	func_257(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { vParam0 };
	Global_1102813.f_3869 = uParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_258(Global_1102813.f_3869, 36);
	return 1;
}

int func_161()
{
	return Global_1893611.f_2;
}

void func_162(int iParam0, bool bParam1)
{
	var uVar0;
	struct<7> Var30;

	if (!func_259(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
		Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_139(92);
	if (func_260(iParam0, &uVar0))
	{
		func_261(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_138(0);
		}
		return;
	}
	func_262(Var30.f_6, Var30, -1f, -1f, 1, 1, 1);
	if (bParam1)
	{
		func_138(0);
	}
}

bool func_163()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_164(bool bParam0)
{
	if (SCRIPTS::DOES_THREAD_EXIST(Global_1051193))
	{
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1051193);
		return false;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(5506) <= 0)
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT("net_ugc_end_flow_transition_handler");
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ugc_end_flow_transition_handler"))
	{
		Global_1051192 = 0;
		Global_1051193 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("net_ugc_end_flow_transition_handler", bParam0, 1, 5506);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ugc_end_flow_transition_handler");
		return true;
	}
	return false;
}

void func_165()
{
	Global_1051192 = 1;
}

void func_166()
{
	Global_1072759.f_28644.f_3 = 0;
	Global_1072759.f_28644.f_4 = 0;
}

void func_167()
{
	func_263(2);
}

void func_168(int iParam0)
{
	if (!func_264(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 - (Global_1102813.f_26.f_9 && iParam0));
}

void func_169()
{
	bool bVar0;
	int iVar1;

	if (func_256(255) == 4 || func_265(0))
	{
		Global_1102813.f_3945 = 1;
		return;
	}
	bVar0 = func_265(36);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1102813.f_4[iVar1] = 0;
		iVar1++;
	}
	func_139(113);
	func_139(135);
	if (bVar0)
	{
		func_139(36);
	}
	Global_1102813.f_3942 = 0;
	Global_1102813.f_3943 = 0;
	Global_1102813.f_3944 = 0;
	Global_1102813.f_3945 = 0;
}

void func_170(bool bParam0)
{
	if (!bParam0)
	{
		func_138(29);
	}
	else
	{
		func_139(29);
	}
}

void func_171(bool bParam0)
{
	if (!bParam0)
	{
		func_138(15);
	}
	else
	{
		func_139(15);
	}
}

void func_172(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	MISC::SET_BIT(&iVar1, iVar0);
	func_266(uParam0, iVar1, iParam2);
}

void func_173()
{
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

void func_174(int iParam0)
{
	if (Global_1049295 != iParam0)
	{
		Global_1049295 = iParam0;
	}
}

void func_175(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

void func_176(var uParam0, bool bParam1)
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
		func_177(&(uParam0->f_162));
	}
	func_202(0);
}

void func_177(var uParam0)
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

void func_178()
{
	Global_1072759.f_15 = 0;
	Global_1072759.f_14 = 1112014848; /* Float: 50f */
}

int func_179(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		return 1;
	}
	if (func_267())
	{
		return 0;
	}
	STREAMING::REMOVE_IPL_HASH(iParam0);
	return 0;
}

void func_180()
{
	int iVar0;
	char cVar1[16];

	if (iLocal_266 != -1)
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_266, false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE(iLocal_266, false);
		}
		func_268(&Local_541);
		func_269(&Local_541);
		func_268(&Local_592);
		func_269(&Local_592);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1048685.f_23[iVar0 /*10*/]))
			{
				PED::DELETE_PED(&(Global_1048685.f_23[iVar0 /*10*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_441[iVar0]))
			{
				PED::DELETE_PED(&(uLocal_441[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_603[iVar0]))
			{
				StringCopy(&cVar1, "COFFIN_0", 16);
				StringIntConCat(&cVar1, iVar0 + 1, 16);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_266, &cVar1, iLocal_603[iVar0]);
				OBJECT::DELETE_OBJECT(&(iLocal_603[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_672[iVar0]))
			{
				StringCopy(&cVar1, "CRATE_0", 16);
				StringIntConCat(&cVar1, iVar0 + 1, 16);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_266, &cVar1, iLocal_672[iVar0]);
				OBJECT::DELETE_OBJECT(&(iLocal_672[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_620[iVar0]))
			{
				StringCopy(&cVar1, "RIFLE_0", 16);
				StringIntConCat(&cVar1, iVar0 + 1, 16);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_266, &cVar1, iLocal_620[iVar0]);
				OBJECT::DELETE_OBJECT(&(iLocal_620[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_637[iVar0]))
			{
				StringCopy(&cVar1, "JD_BOTTLE_0", 16);
				StringIntConCat(&cVar1, iVar0 + 1, 16);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_266, &cVar1, iLocal_637[iVar0]);
				OBJECT::DELETE_OBJECT(&(iLocal_637[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_646[iVar0]))
			{
				StringCopy(&cVar1, "SHOVEL_0", 16);
				StringIntConCat(&cVar1, iVar0 + 1, 16);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_266, &cVar1, iLocal_646[iVar0]);
				OBJECT::DELETE_OBJECT(&(iLocal_646[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_655[iVar0]))
			{
				StringCopy(&cVar1, "CHAIR_", 16);
				if (iVar0 < 10)
				{
					StringConCat(&cVar1, "0", 16);
				}
				StringIntConCat(&cVar1, iVar0 + 1, 16);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_266, &cVar1, iLocal_655[iVar0]);
				OBJECT::DELETE_OBJECT(&(iLocal_655[iVar0]));
			}
			iVar0++;
		}
		ANIMSCENE::RESET_ANIM_SCENE(iLocal_266, 0);
		iLocal_266 = -1;
	}
}

void func_181(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimerLabel", " ");
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*iParam1);
}

void func_182(bool bParam0)
{
	Global_1940072.f_19 = !bParam0;
}

int func_183(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_270(iParam2, -3.005759E+25f);
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
	func_271(uParam1, bParam0, Var3);
	return 1;
}

void func_184(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = *uParam0;
	if (bParam1)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= (func_272(16385) - 1))
	{
		iVar2 = func_273(iVar1);
		func_274(iVar2, func_77(iVar0, iVar2), uParam0);
		iVar1++;
	}
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iLocal_301 = iParam0;
	iLocal_302 = iParam1;
	iLocal_303 = iParam2;
	iLocal_304 = iParam3;
	if (iLocal_304 == 1)
	{
	}
}

void func_186(float fParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1[24];

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_592[iVar0 /*5*/] != 0)
		{
		}
		else
		{
			StringCopy(&cVar1, sParam1, 24);
			if (iVar0 < 10)
			{
				StringConCat(&cVar1, "0", 24);
			}
			StringIntConCat(&cVar1, iVar0 + 1, 24);
			if (!bParam2)
			{
				StringConCat(&cVar1, "F", 24);
			}
			Local_592[iVar0 /*5*/].f_1 = { cVar1 };
			Local_592[iVar0 /*5*/] = fParam0;
			return;
		}
		iVar0++;
	}
}

void func_187(int iParam0)
{
	MISC::SET_BIT(&iLocal_428, iParam0);
}

void func_188(int iParam0)
{
	MISC::SET_BIT(&iLocal_429, iParam0);
}

void func_189(int iParam0)
{
	MISC::SET_BIT(&iLocal_430, iParam0);
}

void func_190()
{
	if (iLocal_266 == -1)
	{
		iLocal_266 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_267, 130, 0, false, true);
	}
}

int func_191(vector3 vParam0)
{
	return func_275(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	fLocal_305 = iParam0;
	fLocal_306 = iParam1;
	fLocal_308 = iParam2;
	fLocal_309 = iParam3;
	fLocal_310 = iParam4;
	fLocal_311 = iParam5;
}

void func_193(int iParam0, int iParam1, char* sParam2)
{
	vector3 vVar0[24];
	int iVar3;

	StringCopy(&cVar0, sParam2, 24);
	iVar3 = 0;
	while (iVar3 < 10)
	{
		if (!func_77(Global_1048685.f_379[iVar3 /*3*/], 4))
		{
		}
		else
		{
			if (func_77(Global_1048685.f_379[iVar3 /*3*/], 2))
			{
				Local_541[iVar3 /*5*/] = iParam1;
			}
			else
			{
				Local_541[iVar3 /*5*/] = iParam0;
			}
			if (Global_1048685.f_379[iVar3 /*3*/].f_2 != 0)
			{
				Local_541[iVar3 /*5*/] = Global_1048685.f_379[iVar3 /*3*/].f_2;
			}
			StringCopy(&cVar0, sParam2, 24);
			if (iVar3 < 10)
			{
				StringConCat(&cVar0, "0", 24);
			}
			StringIntConCat(&cVar0, iVar3 + 1, 24);
			if (func_77(Global_1048685.f_379[iVar3 /*3*/], 2))
			{
				StringConCat(&cVar0, "F", 24);
			}
			Local_541[iVar3 /*5*/].f_1 = { cVar0 };
		}
		iVar3++;
	}
}

Vector3 func_194()
{
	switch (iLocal_277)
	{
		case -1645988897:
		case joaat("MP001_MP_WINLOSE_SWAMP"):
			return 0f, -1008992256 /* Float: -440f */, 0f;
		case joaat("MP001_MP_WINLOSE_SNOW"):
		case joaat("MP001_CELEB_SCREEN_SNOW"):
			return 0f, -1000603648 /* Float: -880f */, 0f;
		case joaat("MP001_CELEB_SCREEN_DESERT"):
		case joaat("MP001_MP_WINLOSE_DESERT"):
			return 0f, -995819520 /* Float: -1320f */, 0f;
		case joaat("MP001_MP_WINLOSE_FOREST"):
		case 1755785548:
			return 0f, -992215040 /* Float: -1760f */, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_195(bool bParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(iLocal_434, 15))
	{
		return;
	}
	if (func_276(iParam1))
	{
		return;
	}
	if (bParam0)
	{
		if (iParam1 >= 0 && iParam1 <= 4)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_266, "CameraIndex", 3, false);
		}
		else if (iParam1 >= 0 && iParam1 <= 8)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_266, "CameraIndex", 2, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_266, "CameraIndex", 1, false);
		}
	}
	else if (iParam1 >= 0 && iParam1 <= 4)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_266, "CameraIndex", 12, false);
	}
	else if (iParam1 >= 0 && iParam1 <= 8)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_266, "CameraIndex", 11, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_266, "CameraIndex", 10, false);
	}
}

bool func_196(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		return true;
	}
	if (func_267())
	{
		return false;
	}
	STREAMING::REQUEST_IPL_HASH(iParam0);
	return false;
}

int func_197(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_277((*uParam0)[iVar0 /*5*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_198(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_199()
{
	return Global_1102813.f_3672;
}

int func_200()
{
	return Global_1102813.f_26.f_12;
}

void func_201(int iParam0)
{
	Global_1956862.f_1431.f_2 = 0f;
	Global_1956862.f_1431.f_1 = iParam0;
}

void func_202(int iParam0)
{
	if (Global_1902880.f_1 != iParam0)
	{
		Global_1902880.f_1 = iParam0;
	}
}

void func_203(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_204(bool bParam0)
{
	if (bParam0)
	{
		return 0.03028275f;
	}
	return -2518.559f;
}

float func_205()
{
	return 1.432296E-31f;
}

bool func_206()
{
	if (Global_1940072.f_20 && Global_1940072.f_5 == 1)
	{
		return true;
	}
	return false;
}

bool func_207(int iParam0)
{
	return (Global_1102813.f_3520 && iParam0) != 0;
}

void func_208(int iParam0)
{
	iLocal_436 = iParam0;
}

void func_209(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_681, iParam0))
	{
	}
	else
	{
		MISC::SET_BIT(&iLocal_681, iParam0);
		HUD::_ENABLE_HUD_CONTEXT(func_278(iParam0));
	}
}

void func_210(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(iLocal_681, iParam0) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_681, iParam0);
		HUD::_DISABLE_HUD_CONTEXT(func_278(iParam0));
	}
}

void func_211()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1050074.f_101[iVar0 /*23*/].f_14.f_1), &(Global_1050074.f_27[0 /*18*/])))
		{
			Global_1050074.f_101[iVar0 /*23*/].f_13 = 1;
			return;
		}
		else
		{
			Global_1050074.f_101[iVar0 /*23*/].f_13 = 0;
		}
		iVar0++;
	}
}

void func_212(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_279(uParam0, uParam1, uParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_280(uParam0, uParam1, bParam5, iParam6, uParam2, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam10);
}

void func_213(var uParam0, char* sParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_158, 7))
	{
		MISC::SET_BIT(&(uParam0->f_158), 7);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Heading", sParam1);
	}
}

void func_214(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "likeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "visible", bParam0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "enabled", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "dislikeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "visible", bParam0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "enabled", bParam0);
}

bool func_215()
{
	if (!func_77(Global_1048685.f_379[iLocal_540 /*3*/], 4))
	{
		return true;
	}
	if (Local_541[iLocal_540 /*5*/] == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_541[iLocal_540 /*5*/].f_4))
	{
		return true;
	}
	Local_541[iLocal_540 /*5*/].f_4 = PED::CREATE_PED(Local_541[iLocal_540 /*5*/], vLocal_271, 0f, false, true, false, false);
	return false;
}

void func_216(int iParam0, var uParam1, var uParam2, var uParam3)
{
	ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_266, &uParam1, iParam0, 0);
}

int func_217()
{
	int iVar0;

	if (MISC::IS_BIT_SET(iLocal_434, 8))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_592[iVar0 /*5*/] == 0)
		{
		}
		else
		{
			Local_592[iVar0 /*5*/].f_4 = OBJECT::CREATE_OBJECT(Local_592[iVar0 /*5*/], vLocal_268, false, true, false, false, true);
			func_281(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_592[iVar0 /*5*/].f_4), Local_592[iVar0 /*5*/].f_1);
		}
		iVar0++;
	}
	MISC::SET_BIT(&iLocal_434, 8);
	return 1;
}

void func_218(var uParam0, char[4] cParam1, char[4] cParam2)
{
	ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_266, &cParam1, *uParam0, 0);
}

bool func_219(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Global_1048685.f_377 - 1))
	{
		if (Global_1048685.f_23[iVar0 /*10*/].f_9)
		{
			if (iVar1 == iParam0)
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

void func_220(int iParam0)
{
	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_22933.f_5), iParam0))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_22933.f_5), iParam0);
		func_282(iParam0);
	}
}

bool func_221()
{
	switch (iLocal_427)
	{
		case 0:
			func_283();
			return false;
		case 1:
			func_284();
			return false;
		case 2:
			func_285();
			return false;
		default:
			break;
	}
	return iLocal_427 == 3;
}

bool func_222(var uParam0)
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

void func_223(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;

	if (func_286() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_287(uParam0, *uParam1)}, 8);
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

void func_224(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	bVar2 = iVar1 == (uParam1[iParam2 /*23*/])->f_14;
	iVar0 = func_288(uParam0, uParam1, iParam2, iVar1, bVar2);
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

bool func_225()
{
	return MISC::IS_BIT_SET(iLocal_432, 8);
}

void func_226(bool bParam0, bool bParam1)
{
	func_214(0);
	if (!bParam1)
	{
		Local_415 = Global_1051004;
		Local_415.f_2 = Global_1051004.f_2;
		Local_415.f_1 = Global_1051004.f_1;
		Local_415.f_3 = Global_1051004.f_3;
		Local_415.f_5 = 0;
		Local_415.f_7 = Global_1051004.f_7;
		Local_415.f_8 = Global_1051004.f_8;
		if (func_44(2) || func_44(4))
		{
			Local_415.f_4 = 1;
		}
		else
		{
			Local_415.f_4 = 0;
		}
		if (bParam0)
		{
			Local_415.f_6 = 1f;
			DATAFILE::UGC2_SET_PLAYER_DATA(&Global_1051171, 1f, func_289(0), 0);
		}
		else
		{
			Local_415.f_6 = -1f;
			DATAFILE::UGC2_SET_PLAYER_DATA(&Global_1051171, 0f, func_289(0), 0);
		}
		TELEMETRY::_TELEMETRY_MATCH_VOTE(&Global_1050982, &Local_415);
		func_69(-8.635702E+27f, 0, 255, 0, 0);
	}
	MISC::SET_BIT(&iLocal_432, 3);
}

void func_227(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	if (*uParam0)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = 1;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "revealScoreboard", *uParam0);
}

void func_228()
{
	func_290();
	func_111(0);
	func_103(0);
}

int func_229()
{
	if (func_21(1))
	{
		return Global_265213.f_122484.f_80.f_13;
	}
	if (Global_263042[Global_1295619 /*65*/].f_1.f_13 != NaNf)
	{
		return Global_263042[Global_1295619 /*65*/].f_1.f_13;
	}
	return -1;
}

int func_230(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_291();
	switch (iVar1)
	{
		case -1:
			return -1;
		case 0:
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (Global_262155.f_1[iVar0 /*5*/] == iParam0)
				{
					return Global_262155.f_1[iVar0 /*5*/].f_4;
				}
				iVar0++;
			}
			return -1;
		case 1:
			if (Global_262155.f_1[Global_262155.f_162 /*5*/] == NaNf)
			{
				return -1;
			}
			return Global_262155.f_1[Global_262155.f_162 /*5*/].f_4;
		default:
			break;
	}
	return -1;
}

void func_231(var uParam0, var uParam1, int iParam2)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimerLabel", HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GAME_START_TIMER"));
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimer", func_292(iParam2));
}

void func_232(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(*uParam0, func_292(iParam1));
}

bool func_233(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

char* func_234(float fParam0, int iParam1)
{
	char* sVar0;

	sVar0 = MISC::_GET_STRING_FROM_FLOAT(fParam0, iParam1);
	return func_293(sVar0, 4.808429E-35f);
}

void func_235(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_06", true);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(*uParam0, "info_value_06", sParam1);
}

void func_236(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_07", true);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(*uParam0, "info_value_07", sParam1);
}

void func_237(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_08", true);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(*uParam0, "info_value_08", sParam1);
}

void func_238(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_239(var uParam0, int iParam1, int iParam2)
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

bool func_240(var uParam0, int iParam1, int iParam2)
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

bool func_241(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_242(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

void func_243()
{
	if (!Global_1102813.f_16)
	{
		return;
	}
	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
}

int func_244(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	if (iParam1 == 255)
	{
		return 0;
	}
	sVar1 = PLAYER::GET_PLAYER_NAME(iParam1);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam0[iVar0 /*23*/])->f_14 == iParam1 || MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*23*/])->f_14.f_1), sVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

char* func_245(int iParam0, int iParam1, bool bParam2)
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
			return func_294(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
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
			return func_294(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
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
			return func_294(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_295(&cVar0);
}

int func_246(var uParam0, int iParam1, var uParam2)
{
	float fVar0;

	fVar0 = uParam0->f_1;
	if (func_296())
	{
		fVar0 = func_297(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		fVar0 = uParam0->f_6;
	}
	return BUILTIN::ROUND(fVar0);
}

int func_247(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_296())
	{
		fVar0 = func_297(uParam0, 1);
	}
	else
	{
		if (MISC::IS_BIT_SET(iParam1, 19))
		{
			fVar0 = uParam0->f_1;
		}
		if (MISC::IS_BIT_SET(iParam2, 2))
		{
			fVar0 = uParam0->f_5;
		}
	}
	return BUILTIN::ROUND(fVar0);
}

int func_248(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_296())
	{
		fVar0 = func_297(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 19) || MISC::IS_BIT_SET(iParam2, 5))
	{
		fVar0 = uParam0->f_5;
	}
	return BUILTIN::ROUND(fVar0);
}

int func_249(var uParam0)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_296())
	{
		fVar0 = func_297(uParam0, 3);
	}
	return BUILTIN::ROUND(fVar0);
}

struct<4> func_250(int iParam0, int iParam1, var uParam2, var uParam3)
{
	char cVar0[32];
	bool bVar4;

	if (func_296())
	{
		MemCopy(&cVar0, {func_298(0, uParam2, uParam3)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_BOUS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_BOUP", 32);
			}
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_KILLS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_KILLP", 32);
		}
	}
	return cVar0;
}

struct<4> func_251(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	char cVar0[32];
	bool bVar4;

	if (func_296())
	{
		MemCopy(&cVar0, {func_298(1, uParam3, uParam4)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (MISC::IS_BIT_SET(iParam2, 1) || MISC::IS_BIT_SET(iParam2, 2))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_DELIVS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_DELIVP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_KILLS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_KILLP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 20))
		{
			StringCopy(&cVar0, "UIC_EF_ACC", 32);
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_DEATHS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_DEATHP", 32);
		}
	}
	return cVar0;
}

struct<4> func_252(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	char cVar0[32];
	bool bVar4;

	if (func_296())
	{
		MemCopy(&cVar0, {func_298(2, uParam3, uParam4)}, 4);
	}
	else
	{
		bVar4 = iParam0 == true;
		if (MISC::IS_BIT_SET(iParam2, 5))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_PNTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_PNTP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_CAPTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_CAPTP", 32);
			}
		}
	}
	return cVar0;
}

struct<4> func_253(var uParam0, var uParam1)
{
	struct<4> Var0;

	if (func_296())
	{
		MemCopy(&Var0, {func_298(3, uParam0, uParam1)}, 4);
	}
	return Var0;
}

bool func_254(char* sParam0, int iParam1, char[12] cParam2)
{
	int iVar0;
	struct<16> Var1;
	struct<8> Var17;
	int iVar25;
	int iVar26;
	int iVar27;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	MemCopy(&Var1, {*sParam0}, 16);
	MemCopy(&Var17, {cParam2}, 8);
	iVar26 = 0;
	while (iVar26 < iVar0)
	{
		if (!MISC::ARE_STRINGS_EQUAL(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var1, iVar26, iVar26 + 1), "#"))
		{
		}
		else
		{
			iVar27 = 0;
			if (!func_299(&Var1, iParam1, iVar26, &iVar27))
			{
			}
			else
			{
				iVar25 = 1;
				Var1 = { func_300(Var1, iVar27, iVar26, Var17) };
			}
			else
			{
				iVar26++;
			}
			if (!MISC::ARE_STRINGS_EQUAL(&Var1, sParam0))
			{
				MemCopy(sParam0, {Var1}, 4);
			}
			return iVar25;
		}
	}
}

void func_255(bool bParam0)
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

int func_256(int iParam0)
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

void func_257(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_258(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_259(Vector3* vParam0, float* fParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/];
	iVar1 = func_301(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_302(uVar0, iVar2, vParam0, fParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_260(int iParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (!func_303(iParam0))
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

void func_261(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_256(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_153(uParam0->f_17.f_6))
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
	if (func_153(uParam1->f_6))
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
	func_139(0);
	func_139(3);
	Global_1102813.f_3909 = iParam2;
	Global_1102813.f_3910 = bParam3;
	Global_1102813.f_3911 = iParam4;
	func_304(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = { *uParam0 };
	func_305(&(Global_1102813.f_3878));
	Global_1102813.f_3878 = { *uParam1 };
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_306(Global_1102813.f_3839, 36);
	func_307(Global_1102813.f_3878, 36);
}

void func_262(vector3 vParam0, float fParam3, float fParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_308(Global_1295619.f_12, &vVar0, &fVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_309(vParam0, fParam3, vVar0, fVar3, fParam4, fParam5, iParam6, fParam7, fParam8, 1);
}

void func_263(int iParam0)
{
	func_310(&(Global_1072759.f_23824.f_5), iParam0);
}

bool func_264(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_265(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

void func_266(var uParam0, int iParam1, int iParam2)
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
	func_311(&Var0);
	uParam0->f_66 = (uParam0->f_66 || iParam1);
}

bool func_267()
{
	return func_312() == 4;
}

void func_268(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0 /*5*/]);
		}
		iVar0++;
	}
}

void func_269(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*5*/])->f_4))
		{
		}
		else
		{
			ENTITY::DELETE_ENTITY(&((uParam0[iVar0 /*5*/])->f_4));
		}
		iVar0++;
	}
}

void func_270(int iParam0, int iParam1)
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

void func_271(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_233(uParam0))
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

int func_272(int iParam0)
{
	return func_313(iParam0) + 1;
}

int func_273(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_274(int iParam0, bool bParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 || !func_77(*uParam2, 8))
			{
				func_314(-3.597869E-15f, bParam1);
			}
			func_315("MS_FortM_MP", bParam1);
			break;
		case 2:
			func_314(9.438366E+15f, bParam1);
			break;
		case 4:
			func_314(-5.749249E-19f, bParam1);
			break;
		case 8:
			if (bParam1 || !func_77(*uParam2, 1))
			{
				func_314(-3.597869E-15f, bParam1);
			}
			func_314(1.915163E+36f, bParam1);
			func_314(7.534319E+20f, bParam1);
			func_316(1.915163E+36f, bParam1);
			func_315("MS_MP001_MP_REVENGE01", bParam1);
			break;
		case 16:
			func_314(-2.229026E-38f, bParam1);
			func_314(-1.466823E-38f, bParam1);
			func_314(40459.65f, bParam1);
			func_314(-1.869615E-10f, bParam1);
			func_314(3.309012E+34f, bParam1);
			func_314(-5.462173E+30f, bParam1);
			func_315("MS_mp001_sisika", bParam1);
			break;
		case 64:
			func_314(-4.5671E+31f, bParam1);
			func_314(-1.870323E+34f, bParam1);
			func_315("MS_MP001_GUNVOUTDECISION03", bParam1);
			func_316(-1.870323E+34f, bParam1);
			break;
		case 256:
			func_314(4.980871E-27f, bParam1);
			break;
		case 128:
			func_316(-5.131025E+24f, bParam1);
			break;
		case 512:
			func_314(-1.555502E+11f, bParam1);
			break;
		case 32:
			func_314(-3.189689E-29f, bParam1);
			break;
		case 1024:
			func_314(1.527874E-24f, bParam1);
			func_314(17301.48f, bParam1);
			func_314(2.296203E-18f, bParam1);
			break;
		case 2048:
			func_314(-2.206841E-12f, bParam1);
			func_314(-0.001532801f, bParam1);
			func_314(-1.095795E-18f, bParam1);
			break;
		case 4096:
			func_314(-1.640461E-24f, bParam1);
			break;
		case 8192:
			func_314(1.864008E-10f, bParam1);
			break;
		case 16384:
			func_314(2.679645E+25f, bParam1);
			func_315("nav_moonshine_moon3_extended_terrain", bParam1);
			break;
	}
	if (bParam1)
	{
		func_238(uParam2, iParam0);
	}
	else
	{
		func_310(uParam2, iParam0);
	}
}

int func_275(int iParam0)
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

bool func_276(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_434, 2))
	{
		if (iParam0 >= 0 && iParam0 <= 1)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_266, "CameraIndex", 11, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_266, "CameraIndex", 1, false);
		}
		return true;
	}
	return false;
}

bool func_277(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.857556E-17f;
		case 1:
			return 3.870794E-14f;
		case 3:
			return 3.593E+36f;
		case 2:
			return 6.471694E-22f;
		case 4:
			return 2.567459E-34f;
		case 6:
			return -1632.017f;
		case 7:
			return 1.121634E+10f;
		case 8:
			return 1.122842E-19f;
		case 9:
			return -3.642267E-25f;
		case 10:
			return 1.701046E-36f;
		case 11:
			return 7.635339E-30f;
		case 12:
			return 2.298159E-23f;
		case 13:
			return 0.004527408f;
	}
	return 0;
}

void func_279(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	char cVar1[32];

	if (bParam4)
	{
		if (func_317(0))
		{
			func_318(uParam0);
		}
		else
		{
			func_319(uParam0, bParam5, bParam7);
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
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", func_320());
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
		func_223(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_317(0))
	{
		func_321(uParam0, uParam1, uParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_322(uParam0, uParam1, uParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_280(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, int iParam6)
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
			func_323(uParam4, &uVar4, uParam0->f_150, bVar16);
			func_324(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_325(uParam0->f_2, uParam0->f_143[iVar0], "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_326(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_222(&((uParam1[iVar2 /*23*/])->f_14)) && iVar0 < 5)
					{
						func_325(uParam0->f_2, uParam0->f_143[iVar0], "MiniListItem", iVar3, iVar0);
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
		func_323(uParam4, &uVar4, uParam0->f_150, bVar16);
		func_327(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_325(uParam0->f_2, uParam0->f_3[iVar19], "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == (*uParam1)[iVar2 /*23*/] && func_222(&((uParam1[iVar2 /*23*/])->f_14)))
						{
							func_325(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, iVar0);
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
			if (func_222(&((uParam1[iVar2 /*23*/])->f_14)))
			{
				func_325(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, iVar0);
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
				func_325(uParam0->f_2, uParam0->f_12[31], "LeaderboardListItemBlank", iVar3, iVar0);
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

void func_281(int iParam0, var uParam1, var uParam2, var uParam3)
{
	ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_266, &uParam1, iParam0, 0);
}

void func_282(int iParam0)
{
	if (!func_328(iParam0))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
	}
}

void func_283()
{
	func_329(1);
}

void func_284()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1048685.f_377 - 1))
	{
		if (!PED::IS_PED_READY_TO_RENDER(uLocal_441[iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_441[iVar0]))
		{
			return;
		}
		iVar0++;
	}
	func_329(2);
}

void func_285()
{
	func_329(3);
}

int func_286()
{
	return Global_1149417.f_5087.f_325;
}

struct<16> func_287(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_330(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_331(iVar16, 1);
			break;
		case 2:
			func_331(iVar16, 1);
			func_172(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

float func_288(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;

	if (MISC::IS_BIT_SET(uParam0->f_159, 11))
	{
		fVar0 = func_332((*uParam1)[iParam2 /*23*/], PLAYER::GET_PLAYER_TEAM(iParam3), uParam0->f_150, MISC::IS_BIT_SET(uParam0->f_159, 5), bParam4, MISC::IS_BIT_SET(uParam0->f_160, 14));
	}
	else if (MISC::IS_BIT_SET(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			fVar0 = 4.808429E-35f;
		}
		else
		{
			fVar0 = func_333((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
		}
	}
	else
	{
		fVar0 = func_333((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
	}
	return fVar0;
}

char* func_289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mission";
		case 1:
			return "photo";
		case 2:
			return "playlist";
		case 3:
			return "lifeinvaderpost";
		case 4:
			return "challenge";
		case 5:
			return "youtube";
		default:
			break;
	}
	return "mission";
}

void func_290()
{
	MISC::SET_BIT(&iLocal_432, 8);
}

var func_291()
{
	return Global_262155;
}

char* func_292(int iParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0) / 1114636288));
	iParam0 = (iParam0 - iVar0 * 60);
	if (iVar0 > 0)
	{
		if (iVar0 < 10)
		{
			StringIntConCat(&cVar1, 0, 64);
		}
		StringIntConCat(&cVar1, iVar0, 64);
	}
	else
	{
		StringConCat(&cVar1, "00", 64);
	}
	StringConCat(&cVar1, ":", 64);
	if (iParam0 < 10)
	{
		StringConCat(&cVar1, "0", 64);
	}
	StringIntConCat(&cVar1, iParam0, 64);
	return HUD::_GET_TEXT_SUBSTRING_2(&cVar1, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
}

char* func_293(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_334(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_294(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar6 = func_335((iVar5 / 60), 0, 180);
	iVar7 = func_335((iVar5 % 60), 0, 60);
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

char* func_295(char* sParam0)
{
	return HUD::_GET_TEXT_SUBSTRING_2(sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0));
}

bool func_296()
{
	return Global_3145858.f_61237[0 /*3*/].f_1 != 0;
}

float func_297(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_5;
		case 1:
			return uParam0->f_6;
		case 2:
			return uParam0->f_7;
		case 3:
			return uParam0->f_8;
		default:
			break;
	}
	return 0f;
}

struct<16> func_298(int iParam0, var uParam1, var uParam2)
{
	char cVar0[128];
	int iVar16;

	StringCopy(&cVar0, "", 128);
	if (Global_3145858.f_61237[iParam0 /*3*/] > -1)
	{
		iVar16 = Global_3145858.f_61237[iParam0 /*3*/];
		*uParam1 = !func_336(iVar16);
		*uParam2 = MISC::IS_BIT_SET(Global_3145858.f_52507[iVar16 /*18*/].f_16, 1);
		return Global_3145858.f_52507[iVar16 /*18*/];
	}
	return cVar0;
}

bool func_299(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<16> Var0;
	int iVar16;
	vector3 vVar17[24];
	vector3 vVar20[24];

	Var0 = { *uParam0 };
	iVar16 = HUD::GET_LENGTH_OF_LITERAL_STRING(&Var0);
	StringCopy(&cVar17, func_337(iParam1), 24);
	*iParam3 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar17);
	if ((iParam2 + *iParam3) > iVar16)
	{
		return false;
	}
	StringCopy(&cVar20, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Var0, iParam2, (iParam2 + *iParam3)), 24);
	if (MISC::ARE_STRINGS_EQUAL(&cVar20, &cVar17))
	{
		return true;
	}
	return false;
}

struct<16> func_300(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16, int iParam17, char[64] cParam18)
{
	int iVar0;
	char cVar1[128];
	char cVar17[128];
	struct<16> Var33;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0);
	if (iParam17 > 0)
	{
		StringCopy(&cVar1, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&uParam0, 0, iParam17), 128);
	}
	if ((iParam17 + iParam16) < iVar0)
	{
		StringCopy(&cVar17, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&uParam0, (iParam17 + iParam16), iVar0), 128);
	}
	Var33 = { cVar1 };
	StringConCat(&Var33, &cParam18, 128);
	StringConCat(&Var33, &cVar17, 128);
	return Var33;
}

int func_301(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 9.201076E+18f;
	Var0.f_3 = uParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
}

bool func_302(var uParam0, int iParam1, Vector3* vParam2, float* fParam3)
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

bool func_303(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_304(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_305(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_306(struct<29> Param0, var uParam29, int iParam30)
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

void func_307(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_308(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1072759.f_23824.f_383[func_338(vParam0) /*272*/];
	iVar1 = func_301(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_302(uVar0, iVar2, vParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_309(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, float fParam11, float fParam12, int iParam13)
{
	if (func_256(255) == 4)
	{
		return;
	}
	if (func_153(vParam0))
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
		func_339(0, 0, 0, 1);
	}
	func_139(0);
	func_139(3);
	Global_1102813.f_3909 = fParam11;
	Global_1102813.f_3910 = fParam12;
	Global_1102813.f_3911 = iParam13;
	func_304(&(Global_1102813.f_3839));
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
	func_305(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { vParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_306(Global_1102813.f_3839, 36);
	func_307(Global_1102813.f_3878, 36);
}

void func_310(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_311(var uParam0)
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
			func_340(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_SET_ALL_PLAYER_BITS(&(vVar0.f_2));
			func_340(vVar0);
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
				func_341(&Var7, uVar6);
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
				func_340(vVar0);
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
					func_341(&Var15, uVar6);
				}
			}
			default:
				break;
	}
}

int func_312()
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

int func_313(int iParam0)
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

void func_314(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_342(iParam0);
	}
	else
	{
		func_343(iParam0);
	}
}

void func_315(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		func_344(sParam0);
	}
	else
	{
		func_345(sParam0);
	}
}

void func_316(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_346(iParam0);
	}
	else
	{
		func_347(iParam0);
	}
}

bool func_317(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return false;
	}
	return Global_3145858.f_61223[iParam0 /*3*/].f_1 != 0;
}

void func_318(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	sVar0 = func_348(uParam0->f_159, uParam0->f_160);
	sVar1 = func_349(uParam0->f_159, uParam0->f_160);
	sVar2 = func_350(uParam0->f_159, uParam0->f_160);
	sVar3 = func_351();
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

void func_319(var uParam0, bool bParam1, bool bParam2)
{
	if (func_352(uParam0->f_159) || func_353(uParam0->f_159))
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
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", func_348(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", 27.64779f);
	}
	else if (func_353(uParam0->f_159))
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
	if (!func_353(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", func_349(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", 27.64779f);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 3) || MISC::IS_BIT_SET(uParam0->f_159, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", func_350(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", 27.64779f);
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", 27.64779f);
}

int func_320()
{
	return 1;
}

void func_321(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
		if (func_354())
		{
			func_355(uParam0, uParam1, uParam2, iParam7, iParam8);
		}
		else
		{
			func_356(uParam0, uParam1, uParam2, iParam7, iParam8);
		}
	}
	else
	{
		func_131(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_222(&((uParam1[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_224(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_357(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", iVar1);
				}
				bVar3 = iVar2 == (uParam1[iVar0 /*23*/])->f_14;
				fVar4 = func_288(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_358(uParam0, uParam1, iVar0, bParam3, fVar4);
					}
				}
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", fVar4);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_359());
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_360((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_140())
					{
						if (func_361((uParam1[iVar0 /*23*/])->f_14))
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
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_362((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_363(uParam1[iVar0 /*23*/], uParam0->f_159);
				fVar6 = func_364(uParam1[iVar0 /*23*/], uParam0->f_159);
				fVar7 = func_365(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = func_366(uParam1[iVar0 /*23*/]);
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

void func_322(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
		func_356(uParam0, uParam1, uParam2, iParam7, iParam8);
	}
	else
	{
		func_131(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_222(&((uParam1[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_224(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_357(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", iVar1);
				}
				bVar8 = iVar7 == (uParam1[iVar0 /*23*/])->f_14;
				fVar9 = func_288(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_358(uParam0, uParam1, iVar0, bParam3, fVar9);
					}
				}
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", fVar9);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_359());
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_360((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_140())
					{
						if (func_361((uParam1[iVar0 /*23*/])->f_14))
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
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_362((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (func_367(uParam0->f_159))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else if (func_353(uParam0->f_159))
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
						iVar2 = BUILTIN::ROUND(func_364(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = BUILTIN::ROUND(func_363(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_368(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((uParam1[iVar0 /*23*/])->f_1 == 1286243416)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = func_245(iVar2, iVar11, 0);
					}
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_GET_STRING_FROM_FLOAT(func_363(uParam1[iVar0 /*23*/], uParam0->f_159), func_369(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(func_365(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(func_364(uParam1[iVar0 /*23*/], uParam0->f_159));
					}
					if (func_368(iVar3))
					{
						sVar6 = func_294(iVar3, 1, 2, 0, 0, 0);
					}
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_365(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_364(uParam1[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar13, MISC::_GET_STRING_FROM_FLOAT(fVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !func_353(uParam0->f_159)) && !func_352(uParam0->f_159))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT(func_364(uParam1[iVar0 /*23*/], uParam0->f_159), func_369(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_370(func_365(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = func_365(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_294(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(func_365(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_245(iVar2, uParam0->f_159, 0);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", sVar5);
					}
					else
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(func_365(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), func_369(uParam0, 3)));
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

void func_323(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = (*uParam0)[iVar0];
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

void func_324(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
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

void func_325(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
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

void func_326(var uParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_222(&((uParam0[iVar1 /*23*/])->f_14)))
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

void func_327(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
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

	bVar15 = func_317(0);
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
		cVar7 = { func_371(iVar0) };
		fVar2[0] = 0f;
		fVar2[1] = 0f;
		fVar2[2] = 0f;
		fVar2[3] = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 != (*uParam1)[iVar1 /*23*/] || !func_222(&((uParam1[iVar1 /*23*/])->f_14)))
			{
			}
			else if (bVar15)
			{
				iVar16 = 0;
				while (iVar16 < 4)
				{
					fVar2[iVar16] = (fVar2[iVar16] + func_372(uParam1[iVar1 /*23*/], iVar16));
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
				if (func_373() == 0)
				{
					fVar2[2] = BUILTIN::TO_FLOAT(Global_1051030[iVar0]);
				}
			}
		}
		fVar17 = func_374(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0, MISC::IS_BIT_SET(uParam0->f_160, 14));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "HeadingColor", fVar17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Heading", &cVar7);
		if (bVar15)
		{
			iVar18 = (4 - func_375());
			iVar19 = iVar18;
			while (iVar19 <= 3)
			{
				if (!func_317(iVar19))
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
		else if (func_367(uParam0->f_159))
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
		else if (func_353(uParam0->f_159))
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

bool func_328(int iParam0)
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
}

void func_329(int iParam0)
{
	iLocal_427 = iParam0;
}

int func_330(char* sParam0, int iParam1, int iParam2)
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
	iVar2 = func_376(iParam1, iParam2);
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
					iVar5 = func_377(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar5);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_378(iParam1, iParam2, 0);
						return 1;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1)))
					{
						func_378(iParam1, iParam2, 3);
					}
					else
					{
						func_378(iParam1, iParam2, 4);
					}
					func_379(iParam1, iParam2, iVar1);
					break;
				case 3:
					iVar1 = func_380(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_378(iParam1, iParam2, 0);
						return 1;
					}
					iVar6 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar6)
					{
						case 0:
							func_378(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_378(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_380(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_378(iParam1, iParam2, 0);
						return 1;
					}
					sVar7 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar7))
					{
						return 3;
					}
					func_378(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_380(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_378(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_331(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_376(iParam0, iParam1);
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
			func_379(iParam0, iParam1, 0);
			func_378(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_380(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
			}
			func_378(iParam0, iParam1, 0);
			break;
	}
}

float func_332(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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

float func_333(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_382(func_381(0)) && func_383(func_381(0)) == 7)
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
			iVar6 = func_384(iParam0);
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
			return func_385(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_386(Global_1072759.f_21353.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return -4.19002E+20f;
	}
	iVar7 = func_387(iParam0, 1);
	if (!bVar0)
	{
		if (func_388(iParam0, bParam1))
		{
			return func_385(iParam0);
		}
		else if (func_389(iParam0, bParam1))
		{
			if (func_390(iParam0, bParam1))
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
		return func_384(iParam0);
	}
	else if (func_388(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return 27.64779f;
		}
		else if (func_392(func_391(func_381(0)), 1) == 9.256025E-25f)
		{
			return func_385(iParam0);
		}
		else
		{
			return func_385(iParam0);
		}
	}
	else if (func_389(iParam0, bParam1))
	{
		return 4.709691E+29f;
	}
	return 3.737303E-09f;
}

char* func_334(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_335(int iParam0, int iParam1, int iParam2)
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

bool func_336(int iParam0)
{
	return func_393(Global_3145858.f_52507[iParam0 /*18*/].f_17, 0);
}

char* func_337(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case default:
			return "";
		case 0:
			return "#fpt1";
		case 1:
			return "#fpt2";
		case 2:
			return "#fpt3";
		case 3:
			return "#fpt4";
		case 4:
			return "#fpt5";
		case 5:
			return "#fpt6";
		case 6:
			return "#fpt7";
		case 7:
			return "#fpt8";
		case 8:
			return "#sender";
		case 12:
			return "#player1";
		case 13:
			return "#player2";
		case 9:
			return "#points";
		case 10:
			return "#targetpoints";
		case 11:
			return "#entname";
		case 15:
			return "#winteamname";
		case 16:
			return "#teamname";
		case 17:
			return "#teamoutcome";
		case 26:
			return "#playerswaiting_t1";
		case 27:
			return "#playerswaiting_t2";
		case 18:
			return "#team1_name";
		case 19:
			return "#team2_name";
		case 20:
			return "#team3_name";
		case 21:
			return "#team4_name";
		case 22:
			return "#team5_name";
		case 23:
			return "#team6_name";
		case 24:
			return "#team7_name";
		case 25:
			return "#team8_name";
		case 14:
			return "#roundscompleted";
		case 28:
			return "#winteam_tiebreakreason";
		case 29:
			return "#winningplayer";
		case 32:
			return "#numerator";
		case 33:
			return "#denominator";
		case 34:
			return "#mathvar1";
		case 35:
			return "#mathvar2";
		case 36:
			return "#mathvar3";
		case 37:
			return "#mathvar4";
		case 38:
			return "#mathvar5";
		case 30:
			return "#taggedpedsalive";
		case 31:
			return "#taggedpedstotal";
		case 39:
			return "#lb_stat";
			default:
				break;
	}
}

int func_338(vector3 vParam0)
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

void func_339(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_40(iParam0);
	if (!func_242(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_241(128) && !func_265(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_312() == 4)
	{
		func_138(18);
	}
	func_42(1024);
}

void func_340(vector3 vParam0)
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

void func_341(var uParam0, var uParam1)
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

void func_342(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		func_196(iParam0);
	}
}

void func_343(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		func_179(iParam0);
	}
}

void func_344(char* sParam0)
{
	if (!PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
	{
		PATHFIND::_NAVMESH_ACTIVATE_SWAP(sParam0);
	}
}

void func_345(char* sParam0)
{
	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP(sParam0);
	}
}

void func_346(int iParam0)
{
	if (!GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_ENABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

void func_347(int iParam0)
{
	if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

char* func_348(int iParam0, int iParam1)
{
	if (func_317(0))
	{
		return func_394(0);
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

char* func_349(int iParam0, int iParam1)
{
	if (func_317(0))
	{
		if (func_317(1))
		{
			return func_394(1);
		}
		else
		{
			return "";
		}
	}
	else if (func_353(iParam0) || func_352(iParam0))
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
			return func_395(iParam0);
		}
	}
	else if (func_367(iParam0) || MISC::IS_BIT_SET(iParam0, 19))
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

char* func_350(int iParam0, int iParam1)
{
	if (func_317(0))
	{
		if (func_317(2))
		{
			return func_394(2);
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
		return func_395(iParam0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) && !MISC::IS_BIT_SET(iParam0, 17)) && !func_352(iParam0))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_DEATHS");
	}
	else if (func_353(iParam0) && !func_352(iParam0))
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

char* func_351()
{
	if (func_317(0))
	{
		return func_394(3);
	}
	return "";
}

bool func_352(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 18) && MISC::IS_BIT_SET(iParam0, 17));
}

bool func_353(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 0) && MISC::IS_BIT_SET(iParam0, 17));
}

bool func_354()
{
	return Global_3145858.f_61251[0 /*3*/].f_1 != 0;
}

void func_355(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
		if ((bVar17 || bVar18) && func_373() == 0)
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
					if (func_396(uParam1[iVar0 /*23*/], 0) != -1f)
					{
						fVar21[(*uParam1)[iVar0 /*23*/]] = (fVar21[(*uParam1)[iVar0 /*23*/]] + func_396(uParam1[iVar0 /*23*/], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_323(uParam2, &uVar30, uParam0->f_150, bVar19);
		func_324(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
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
						Var7 = { func_371(iVar39) };
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var7);
						fVar40 = func_374(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39, MISC::IS_BIT_SET(uParam0->f_160, 14));
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
		func_326(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_222(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar41 = iVar6 == (uParam1[iVar1 /*23*/])->f_14;
						fVar42 = func_288(uParam0, uParam1, iVar1, iVar6, bVar41);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", fVar42);
						sVar43 = "";
						sVar43 = MISC::_GET_STRING_FROM_FLOAT(func_396(uParam1[iVar1 /*23*/], 0), 0);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

void func_356(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
		if ((bVar10 || bVar8) && func_373() == 0)
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
		func_323(uParam2, &uVar34, uParam0->f_150, bVar23);
		func_324(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
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
						Var14 = { func_371(iVar43) };
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var14);
						fVar44 = func_374(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43, MISC::IS_BIT_SET(uParam0->f_160, 14));
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
		func_326(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_222(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar45 = iVar13 == (uParam1[iVar1 /*23*/])->f_14;
						fVar46 = func_288(uParam0, uParam1, iVar1, iVar13, bVar45);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", fVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 26))
							{
								if (MISC::IS_BIT_SET(uParam0->f_159, 0))
								{
									sVar47 = MISC::_GET_STRING_FROM_FLOAT(func_365(uParam1[iVar1 /*23*/], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = MISC::_GET_STRING_FROM_FLOAT(func_364(uParam1[iVar1 /*23*/], uParam0->f_159), 0);
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_159, 27))
							{
								iVar4 = BUILTIN::ROUND(func_363(uParam1[iVar1 /*23*/], uParam0->f_159));
								sVar47 = " ";
								if (func_368(iVar4))
								{
									iVar48 = uParam0->f_159;
									if ((uParam1[iVar1 /*23*/])->f_1 == 1286243416)
									{
										MISC::CLEAR_BIT(&iVar48, 12);
									}
									sVar47 = func_245(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = MISC::_GET_STRING_FROM_FLOAT(func_363(uParam1[iVar1 /*23*/], uParam0->f_159), func_369(uParam0, 1));
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
								sVar47 = func_370((uParam1[iVar1 /*23*/])->f_5);
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

int func_357(var uParam0, int iParam1)
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
		else if ((*uParam0)[iParam1 /*23*/] == (*uParam0)[iVar0 /*23*/] && func_222(&((uParam0[iVar0 /*23*/])->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

void func_358(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
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

char* func_359()
{
	return "RSN";
}

char* func_360(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::VAR_STRING(2, "NUMBER", Global_1155135[iParam0 /*30*/]);
}

bool func_361(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_397()));
	return iParam0 == iVar0;
}

char* func_362(int iParam0)
{
	if (iParam0 != 0)
	{
		return STATS::_0xB112B9262EC29C20(1.861746E+28f, iParam0);
	}
	return "";
}

float func_363(var uParam0, int iParam1)
{
	if (func_317(0))
	{
		return func_372(uParam0, 0);
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

float func_364(var uParam0, int iParam1)
{
	if (func_317(0))
	{
		return func_372(uParam0, 1);
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
	else if (func_367(iParam1) || MISC::IS_BIT_SET(iParam1, 19))
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

float func_365(var uParam0, int iParam1, int iParam2)
{
	if (func_317(0))
	{
		return func_372(uParam0, 2);
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
	else if (func_353(iParam1))
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

float func_366(var uParam0)
{
	if (func_317(3))
	{
		return func_372(uParam0, 3);
	}
	return -1f;
}

bool func_367(int iParam0)
{
	if ((func_353(iParam0) || func_352(iParam0)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17))
	{
		return true;
	}
	return false;
}

bool func_368(int iParam0)
{
	if ((iParam0 != 7.82218E-36f || iParam0 == 0) || iParam0 == BUILTIN::ROUND(-3f))
	{
		return true;
	}
	return false;
}

int func_369(var uParam0, int iParam1)
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

char* func_370(char* sParam0)
{
	return MISC::VAR_STRING(6, "FM_WEIGHT", sParam0);
}

struct<8> func_371(int iParam0)
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

float func_372(var uParam0, int iParam1)
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

int func_373()
{
	int iVar0;

	if (func_23(16))
	{
		iVar0 = Global_1050074.f_12;
	}
	else
	{
		iVar0 = func_398();
	}
	return iVar0;
}

float func_374(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	return func_332(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5);
}

int func_375()
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

int func_376(int iParam0, int iParam1)
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

int func_377(int iParam0)
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

void func_378(int iParam0, int iParam1, int iParam2)
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

void func_379(int iParam0, int iParam1, int iParam2)
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

int func_380(int iParam0, int iParam1)
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

struct<2> func_381(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_382(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_399(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_383(var uParam0, var uParam1)
{
	return uParam0;
}

float func_384(int iParam0)
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

float func_385(int iParam0)
{
	if (GANG::NETWORK_GET_GANG_ID(iParam0) != Global_1295619.f_10 && !func_400())
	{
		return 4.279651E-16f;
	}
	return -18751.78f;
}

bool func_386(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_387(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_401(iParam0, bParam1));
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

bool func_388(int iParam0, bool bParam1)
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

bool func_389(int iParam0, bool bParam1)
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
	if (func_402(iParam0))
	{
		return true;
	}
	return !func_388(iParam0, 0);
}

bool func_390(int iParam0, bool bParam1)
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
	if (func_403(iParam0))
	{
		return false;
	}
	if (func_402(iParam0))
	{
		return false;
	}
	if (func_404(iParam0))
	{
		return true;
	}
	return func_405(iParam0);
}

int func_391(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_406(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_392(int iParam0, int iParam1)
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

bool func_393(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

char* func_394(int iParam0)
{
	if (Global_3145858.f_61223[iParam0 /*3*/] > -1)
	{
		if (func_336(Global_3145858.f_61223[iParam0 /*3*/]))
		{
			return MISC::VAR_STRING(2, &(Global_3145858.f_52507[Global_3145858.f_61223[iParam0 /*3*/] /*18*/]));
		}
		return func_407(&(Global_3145858.f_52507[Global_3145858.f_61223[iParam0 /*3*/] /*18*/]));
	}
	return "";
}

char* func_395(int iParam0)
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

float func_396(var uParam0, int iParam1)
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

var func_397()
{
	return Global_1102813.f_26.f_3341;
}

int func_398()
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

int func_399(struct<2> Param0)
{
	int iVar0;

	if (!func_408(Param0))
	{
		return -1;
	}
	iVar0 = func_409(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

bool func_400()
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
	if (!func_408(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_401(int iParam0, bool bParam1)
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

bool func_402(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iParam0))
	{
		return true;
	}
	return false;
}

bool func_403(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

bool func_404(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iParam0))
	{
		return true;
	}
	return false;
}

bool func_405(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_410(iParam0);
		return false;
	}
	if (func_404(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 2)
		{
			func_411(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1295619.f_5, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 2);
}

bool func_406(struct<2> Param0, bool bParam2)
{
	if (!func_408(Param0))
	{
		return false;
	}
	func_412(bParam2);
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

var func_407(var uParam0)
{
	return uParam0;
}

bool func_408(struct<2> Param0)
{
	if (!func_413(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_414(Param0))
	{
		return false;
	}
	return true;
}

int func_409(struct<2> Param0)
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
	if (!func_406(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_406(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
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

void func_410(int iParam0)
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
	func_415(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_411(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_416(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1295619.f_17[iVar0])
		{
			func_410(iParam0);
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
						func_411(iVar3, iParam1, 0, 1, 0, 0);
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
			func_417(&Var6, uVar4);
		}
	}
}

void func_412(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_413(int iParam0)
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

int func_414(int iParam0)
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

void func_415(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_416(int iParam0, int iParam1, int iParam2)
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

void func_417(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_418(*uParam0);
}

void func_418(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

