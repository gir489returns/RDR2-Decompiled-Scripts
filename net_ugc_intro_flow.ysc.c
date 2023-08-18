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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	struct<16> Local_16 = { 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	bool bLocal_44 = false;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = false;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	bool bLocal_52 = false;
	int iLocal_53[2] = { 0, 0 };
	int iLocal_56[1] = { 0 };
	bool bLocal_58 = false;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	char* sLocal_62 = NULL;
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
	int iLocal_75[4] = { 0, 0, 0, 0 };
	bool bLocal_80 = false;
	int iLocal_81 = 0;
	bool bLocal_82 = false;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	vector3 vLocal_85[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_182 = 0;
	bool bLocal_183 = false;
	bool bLocal_184 = false;
	bool bLocal_185 = false;
	int iLocal_186[2] = { 0, 0 };
	float fLocal_189[2] = { 0f, 0f };
	int iLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
#endregion

void __EntryFunction__()
{
	char cVar0[32];

	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_60 = -1;
	sLocal_61 = "script@mp@introflow@teamonfoot";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1(512);
	if (func_2(0f))
	{
		bLocal_35 = true;
	}
	else if (func_2(2f))
	{
		bLocal_36 = true;
	}
	Global_1049287 = 1;
	func_3();
	func_4(&Local_16, 0, 1);
	func_5(&Local_16, 0);
	Local_16.f_2 = -31943.61f;
	iLocal_32 = PLAYER::PLAYER_ID();
	iLocal_33 = PLAYER::GET_PLAYER_PED(iLocal_32);
	iLocal_37 = GRAPHICS::_ANIMPOSTFX_GET_STACKHASH("MP_Trans_PhotoToScene");
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH(iLocal_37);
	iLocal_38 = GRAPHICS::_ANIMPOSTFX_GET_STACKHASH("MP_Trans_SceneToPhoto");
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH(iLocal_38);
	StringCopy(&cVar0, "MP_ADV_INTRO_OS", 32);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_51717)))
	{
		cVar0 = { Global_3145858.f_51717 };
	}
	AUDIO::PREPARE_MUSIC_EVENT(&cVar0);
	while (SCRIPTS::IS_LOADING_SCREEN_VISIBLE())
	{
		BUILTIN::WAIT(0);
	}
	while (!func_6())
	{
		if (func_7())
		{
			PAD::DISABLE_CONTROL_ACTION(0, -2.885348E+21f, true);
			if (!func_8(16))
			{
				if (func_9())
				{
					func_10();
					if (func_11())
					{
						func_12();
						func_13();
						func_14();
					}
				}
			}
			else
			{
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1.996778E-38f) != 0)
				{
				}
				else
				{
					func_15(0);
				}
				bLocal_44 = true;
				if (func_9())
				{
					func_10();
				}
			}
		}
		else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1.996778E-38f) != 0)
		{
		}
		else if (func_11() && func_9())
		{
		}
		BUILTIN::WAIT(0);
	}
	AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
	func_16();
	func_17(1);
	Global_1049287 = 0;
	Global_1049288 = 0;
	STREAMING::CLEAR_FOCUS();
	func_18();
}

void func_1(int iParam0)
{
	Global_262153 = (Global_262153 - (Global_262153 && iParam0));
}

bool func_2(float fParam0)
{
	return (Global_262153 && fParam0) != 0;
}

void func_3()
{
	Global_1149417.f_4787.f_5 = Global_1953279.f_1676.f_1[0 /*3*/];
	Global_1149417.f_4787.f_8 = Global_1953279.f_1676.f_1[2 /*3*/];
	func_19();
	func_20();
	func_21();
}

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5(var uParam0, bool bParam1)
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

bool func_6()
{
	if (func_22() == 7)
	{
		return true;
	}
	if (func_23(1, 1))
	{
		return true;
	}
	if (func_2(64))
	{
		return true;
	}
	if (func_2(512))
	{
		HUD::_DISABLE_HUD_CONTEXT(3.870794E-14f);
		return true;
	}
	return false;
}

bool func_7()
{
	if (func_2(2) && !MISC::IS_BIT_SET(iLocal_46, 1))
	{
		MISC::SET_BIT(&iLocal_46, 1);
		HUD::_DISABLE_HUD_CONTEXT(2.567459E-34f);
	}
	return MISC::IS_BIT_SET(iLocal_46, 1);
}

bool func_8(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

bool func_9()
{
	if (!HUD::TEXT_BLOCK_IS_LOADED("UIC"))
	{
		HUD::TEXT_BLOCK_REQUEST("UIC");
	}
	else
	{
		return true;
	}
	iLocal_45++;
	if (iLocal_45 > 100)
	{
		return true;
	}
	return false;
}

void func_10()
{
	if (!func_2(2.524355E-29f) && !MISC::IS_BIT_SET(iLocal_46, 5))
	{
		func_24(32768);
		func_25(1);
		AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("loading_black_white");
		SCRIPTS::_DISPLAY_LOADING_SCREENS(func_26(), func_27(), func_28(), func_29(), func_30(), func_31());
		MISC::SET_BIT(&iLocal_46, 5);
		func_5(&Local_16, 1);
	}
}

bool func_11()
{
	if (bLocal_47)
	{
		return true;
	}
	if (!func_32(&Local_16))
	{
		return false;
	}
	if (func_33(&uLocal_48))
	{
		if (!GRAPHICS::ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(iLocal_37) && !GRAPHICS::ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(iLocal_38))
		{
			bLocal_47 = true;
			return true;
		}
		else if (func_34(&uLocal_48, 0, 0) > 30000)
		{
			return true;
		}
	}
	else
	{
		func_35(&uLocal_48, 0, 0);
	}
	return false;
}

void func_12()
{
	int iVar0;
	int iVar1;

	CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
	if (!Global_1940072.f_19)
	{
		func_17(0);
	}
	if (!func_2(256))
	{
		iVar0 = 14;
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (((iVar1 != 1 && iVar1 != 13) && iVar1 != 4) && iVar1 != 11)
			{
				UIFEED::UI_FEED_CLEAR_CHANNEL(iVar1, true, true);
			}
			iVar1++;
		}
	}
	func_36();
	if (Global_1940239.f_2)
	{
		Global_1940239 = 2;
	}
	if (Global_1896762.f_352)
	{
		func_37(0);
	}
}

void func_13()
{
	func_38(&Local_16);
	switch (iLocal_13)
	{
		case 0:
			if (func_11())
			{
				MISC::SET_BIT(&(Global_1958621.f_1), 5);
				func_39();
				if (!func_40())
				{
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
				}
				HUD::_ENABLE_HUD_CONTEXT(3.870794E-14f);
				if (func_2(2.524355E-29f))
				{
					if (!func_2(262144))
					{
						if (!func_41())
						{
							CAM::DO_SCREEN_FADE_OUT(1000);
						}
						func_42(1);
					}
				}
				else
				{
					func_43(&Local_16, func_29(), func_30(), func_31());
				}
				GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_37);
				func_44(1);
			}
			break;
		case 1:
			if ((!bLocal_34 && !bLocal_44) && (bLocal_36 || bLocal_35))
			{
				AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
			}
			func_44(2);
			if (func_2(262144) || !func_2(2.524355E-29f))
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(750);
				}
			}
			break;
		case 2:
			if (func_2(256) || func_2(262144))
			{
				func_44(5);
			}
			else if (func_2(4))
			{
				if (!func_2(2.524355E-29f))
				{
					CAM::DO_SCREEN_FADE_IN(0);
				}
				GRAPHICS::RESET_PAUSED_RENDERPHASES();
				func_44(3);
			}
			break;
		case 3:
			if ((func_2(8) && (ENTITY::IS_ENTITY_VISIBLE(iLocal_33) || bLocal_52)) && Global_262154 != -1)
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 6))
				{
					func_45();
					MISC::SET_BIT(&iLocal_46, 6);
				}
				if (func_46())
				{
					if (!func_2(4096))
					{
						NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
						NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, Global_262154, true);
					}
					if (MISC::IS_BIT_SET(iLocal_46, 9))
					{
						func_47(0);
					}
					func_44(4);
				}
			}
			else if (Global_262154 == -1)
			{
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_33))
			{
				if (!func_33(&uLocal_50))
				{
					func_35(&uLocal_50, 0, 0);
				}
				else if (func_34(&uLocal_50, 0, 0) > 10000)
				{
					bLocal_52 = true;
				}
			}
			break;
		case 4:
			if (func_2(16))
			{
				func_44(5);
			}
			else
			{
				func_48();
			}
			break;
		case 5:
			func_49(&Local_16);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
			if (!func_41())
			{
				HUD::_DISABLE_HUD_CONTEXT(3.870794E-14f);
			}
			func_44(6);
			break;
		case 6:
			if (func_2(1024))
			{
				func_16();
			}
			break;
		case 7:
			break;
	}
}

void func_14()
{
	if (!bLocal_39)
	{
		if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(iLocal_38))
		{
			if (GRAPHICS::ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(iLocal_38, 2, false, &uLocal_40))
			{
				if (AUDIO::PREPARE_SOUND("flash_to_photo", "rdro_gamemode_transition_sounds", -2))
				{
					bLocal_39 = true;
					func_5(&Local_16, 1);
					AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("photograph");
					AUDIO::PLAY_SOUND_FRONTEND("flash_to_photo", "rdro_gamemode_transition_sounds", true, 0);
				}
			}
		}
	}
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		func_50(16);
	}
	else
	{
		func_51(16);
	}
}

void func_16()
{
	int iVar0;
	char cVar1[32];

	if (func_22() == 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[iVar0]))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049221[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049221[iVar0], true, true);
			}
			PED::DELETE_PED(&(Global_1049221[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[iVar0]))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049254[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049254[iVar0], true, true);
			}
			PED::DELETE_PED(&(Global_1049254[iVar0]));
		}
		iVar0++;
	}
	if (Global_1049288)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_186[iVar0]))
			{
				PED::DELETE_PED(&(iLocal_186[iVar0]));
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_53[iVar0]))
		{
			CAM::SET_CAM_ACTIVE(iLocal_53[iVar0], false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1049221[iVar0] = func_52();
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_56[0]))
	{
		CAM::SET_CAM_ACTIVE(iLocal_56[0], false);
	}
	SCRIPTS::STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS(1);
	if (!func_40())
	{
		Global_1072759.f_28644.f_8.f_14 = 0;
	}
	CAM::DESTROY_ALL_CAMS(false);
	if ((MISC::IS_BIT_SET(iLocal_46, 3) && iLocal_42 != -1) && func_53(iLocal_42))
	{
		CAM::_UNLOAD_CINEMATIC_CAMERA_LOCATION(func_54(iLocal_42));
	}
	if (iLocal_37 != 0)
	{
		if (iLocal_13 > 0)
		{
			if (!bLocal_184)
			{
				GRAPHICS::_0x71845905BCCDE781(iLocal_37);
			}
			GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(iLocal_37);
		}
		if (bLocal_184)
		{
			GRAPHICS::_0x71845905BCCDE781(iLocal_38);
		}
		GRAPHICS::_0x38D9D50F2085E9B3(iLocal_37);
		GRAPHICS::_0x38D9D50F2085E9B3(iLocal_38);
		iLocal_37 = 0;
	}
	if (!func_2(4096) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
		}
	}
	AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
	func_55();
	func_42(0);
	func_56();
	StringCopy(&cVar1, "MP_ADV_INTRO_OS", 32);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_51717)))
	{
		cVar1 = { Global_3145858.f_51717 };
	}
	AUDIO::CANCEL_MUSIC_EVENT(&cVar1);
	PAD::ENABLE_CONTROL_ACTION(0, -2.885348E+21f, true);
	func_57(&Local_16);
	Global_1049300 = -1;
	Global_262154 = -1;
	MISC::CLEAR_BIT(&(Global_1958621.f_1), 5);
	func_25(0);
	func_44(7);
}

void func_17(bool bParam0)
{
	if (bParam0)
	{
		Global_1951897.f_1381 = (Global_1951897.f_1381 - Global_1951897.f_1381 & 2);
	}
	else
	{
		Global_1951897.f_1381 |= 2;
	}
	func_58(bParam0);
}

void func_18()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_19()
{
	Global_1149417.f_4787.f_7 = Global_1953279.f_1676.f_1[1 /*3*/];
}

void func_20()
{
	Global_1149417.f_4787.f_9 = Global_1953279.f_1676.f_1[3 /*3*/];
}

void func_21()
{
	Global_1149417.f_4787.f_6 = Global_1953279.f_1676.f_1[4 /*3*/];
}

int func_22()
{
	return iLocal_13;
}

bool func_23(bool bParam0, bool bParam1)
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

void func_24(int iParam0)
{
	Global_262153 = (Global_262153 || iParam0);
}

void func_25(bool bParam0)
{
	if (!bParam0)
	{
		func_59(20);
	}
	else
	{
		func_60(20);
	}
}

float func_26()
{
	if ((Global_3145858.f_1 > -1 && Global_3145858.f_1 < Global_3145858.f_52506) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_52507[Global_3145858.f_1 /*18*/])))
	{
		return MISC::GET_HASH_KEY(&(Global_3145858.f_52507[Global_3145858.f_1 /*18*/]));
	}
	if (bLocal_35)
	{
		switch (Global_524288.f_39632)
		{
			case -915869673:
				return 117.2355f;
			case -360644098:
				return 9.687121E-21f;
			case -1649482077:
				return 6.114041E-37f;
			case -163684180:
				return -5.210929E-37f;
			case -777132493:
				return -4.129358E-18f;
			case -698288936:
				return 2.060158E+27f;
			case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
				return 7.552075E+23f;
			case 534981680:
				return -1.192523E+11f;
			case 1520184724:
				return 2.965876E+30f;
			default:
				break;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296.f_155)
		{
			case -533426613:
				return 7.041909f;
			case -1437925683:
			case 1272390114:
				return -4.694576E-15f;
			case -725256130:
				return 9.115094E-22f;
			case -222655798:
				return -9.227166E-29f;
			case -559809431:
				return -2.799725E+14f;
			case -1918441640:
			case 1153715636:
				return 9.613008E+08f;
			case -1581094459:
				return 3.117092E+14f;
			case -457802746:
				return -1.036547E+29f;
			default:
				break;
		}
		return -1.611066E+30f;
	}
	else
	{
		switch (Global_2097152.f_32)
		{
			case 1579717899:
				return -154031.6f;
			case 218185167:
				return -2.48613E-22f;
			case -1185533313:
				return 2.311029E+24f;
			case 1744858848:
				return 7.682209E+20f;
			default:
				break;
		}
		return -4.221878E-08f;
	}
	return -1.036547E+29f;
}

float func_27()
{
	if ((Global_3145858.f_2 > -1 && Global_3145858.f_2 < Global_3145858.f_52506) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_52507[Global_3145858.f_2 /*18*/])))
	{
		return MISC::GET_HASH_KEY(&(Global_3145858.f_52507[Global_3145858.f_2 /*18*/]));
	}
	if (bLocal_35)
	{
		switch (Global_524288.f_39632)
		{
			case -915869673:
				return 1.773207E-26f;
			case -360644098:
				return 2.380122E-29f;
			case -1649482077:
				return 1.746802E-29f;
			case -163684180:
				return 6.976538E+19f;
			case -777132493:
				return -3.315282E-07f;
			case -698288936:
				return 9.557516E+24f;
			case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
				return 1.752972E-05f;
			case 534981680:
				return -5.216236E+37f;
			case 1520184724:
				return -4.862102E-38f;
			default:
				break;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296.f_155)
		{
			case -533426613:
				return 6.562606E-28f;
			case -1437925683:
			case 1272390114:
				return -8.548806E+36f;
			case -725256130:
				return 1.298941E+19f;
			case -222655798:
				return 5.297789E+18f;
			case -559809431:
				return -1106120f;
			case -1918441640:
			case 1153715636:
				return -2.665623E-17f;
			case -1581094459:
				return 5251.488f;
			case -457802746:
				return -2.16355E-32f;
			default:
				break;
		}
		return -3.92112E+21f;
	}
	else
	{
		switch (Global_2097152.f_32)
		{
			case 1579717899:
				return -0.000396366f;
			case 1744858848:
				return 9.369997E-08f;
			case 218185167:
				return 6.656591E-24f;
			case -1185533313:
				return 4.910731E+34f;
			default:
				break;
		}
		return 3.084049E-35f;
	}
	return -2.16355E-32f;
}

int func_28()
{
	if ((Global_3145858.f_3 > -1 && Global_3145858.f_3 < Global_3145858.f_52506) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_52507[Global_3145858.f_3 /*18*/])))
	{
		return MISC::GET_HASH_KEY(&(Global_3145858.f_52507[Global_3145858.f_3 /*18*/]));
	}
	return 2;
}

char* func_29()
{
	if (bLocal_35)
	{
		return func_61(Global_524288.f_39632, &(Global_3145858.f_11), &(Global_3145858.f_108));
	}
	else if (bLocal_36)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_108)))
		{
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_3145858.f_108), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_3145858.f_108)));
		}
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_62(Global_2359296.f_155));
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_108)))
		{
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_3145858.f_108), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_3145858.f_108)));
		}
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_63(Global_2097152.f_32));
	}
	return "GAME MODE NAME HERE";
}

char* func_30()
{
	int iVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_100)))
	{
		return func_64(&(Global_3145858.f_100));
	}
	iVar0 = Global_3145858.f_51780;
	if (iVar0 == -1)
	{
		iVar0 = func_65(Global_3145858.f_196, 1);
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return func_66(iVar0);
}

char* func_31()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_84)))
	{
		return func_64(&(Global_3145858.f_84));
	}
	return " ";
}

bool func_32(var uParam0)
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

bool func_33(var uParam0)
{
	return uParam0->f_1;
}

int func_34(var uParam0, bool bParam1, bool bParam2)
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

void func_35(var uParam0, bool bParam1, bool bParam2)
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

void func_36()
{
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(7.215231E-38f);
	}
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-8.851064E-21f) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-8.851064E-21f))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(-8.851064E-21f);
	}
	if (func_67())
	{
		func_68();
	}
	if (func_69())
	{
		func_70();
	}
	func_71();
}

void func_37(bool bParam0)
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

int func_38(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return 1;
	}
	if (!UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(*uParam0))
	{
		func_32(uParam0);
		return 0;
	}
	UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return 1;
}

void func_39()
{
	Global_1072759.f_28644.f_1 = 1;
	Global_1072759.f_28644.f_66.f_30 = 1;
	Global_1072759.f_28644.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_40()
{
	if (func_72(8) || func_72(16))
	{
		return true;
	}
	return false;
}

bool func_41()
{
	return Global_1072759.f_28644.f_8.f_14 != 0;
}

void func_42(bool bParam0)
{
	if (!bParam0)
	{
		func_59(18);
	}
	else
	{
		func_60(18);
	}
}

void func_43(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "largeHeader", sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "subHeader", sParam2);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "body", sParam3);
}

void func_44(int iParam0)
{
	iLocal_13 = iParam0;
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1049300 != -1)
	{
		iVar1 = (Global_1049300 / 32);
		iVar2 = (Global_1049300 % 32);
		iVar0 = 0;
		while (iVar0 <= Global_3145858.f_48736)
		{
			if (MISC::IS_BIT_SET(Global_3145858.f_48737[iVar0 /*25*/].f_1[iVar1], iVar2))
			{
				iLocal_42 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		if (iLocal_42 < 0 || iLocal_42 >= 32)
		{
			iLocal_42 = 0;
		}
	}
	else
	{
		iLocal_42 = 0;
	}
	iLocal_41 = PLAYER::GET_PLAYER_TEAM(iLocal_32);
	if (Global_1049288)
	{
		MISC::SET_BIT(&iLocal_46, 11);
	}
	else if (Global_1049287)
	{
		MISC::SET_BIT(&iLocal_46, 7);
		MISC::SET_BIT(&iLocal_46, 10);
	}
	if (Global_1049289 == 0)
	{
		MISC::SET_BIT(&iLocal_46, 8);
	}
	else if (Global_1049289 == 1)
	{
		MISC::SET_BIT(&iLocal_46, 9);
	}
	Global_1049289 = -1;
	if (iLocal_41 != -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (MISC::IS_BIT_SET(Global_3145858.f_48319[iVar0 /*13*/].f_7, iLocal_41))
			{
				iLocal_43 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		if (iLocal_43 < 0)
		{
			iLocal_43 = 0;
		}
	}
	else if (iLocal_43 < 0)
	{
		iLocal_43 = 0;
		iVar1 = (Global_1049300 / 32);
		iVar2 = (Global_1049300 % 32);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (MISC::IS_BIT_SET(Global_3145858.f_48319[iVar0 /*13*/].f_8[iVar1], iVar2))
			{
				iLocal_43 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

bool func_46()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_2(8192))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1049221[0]))
		{
			return false;
		}
		else if (iLocal_60 == -1)
		{
			if (MISC::IS_BIT_SET(iLocal_46, 8))
			{
				sLocal_61 = "script@mp@introflow@predator";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 9))
			{
				sLocal_61 = "script@mp@introflow@teamonfoot_predator";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 11))
			{
				sLocal_61 = "script@mp@introflow@Protect_TeamOnFoot";
				sLocal_62 = "pbl_base";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 7))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[0]))
				{
					sLocal_61 = "script@mp@introflow@soloonhorse";
					MISC::SET_BIT(&iLocal_46, 12);
				}
				else
				{
					sLocal_61 = "script@mp@introflow@soloonfoot";
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[0]))
			{
				sLocal_61 = "script@mp@introflow@teamonhorse";
			}
		}
	}
	if (iLocal_60 == -1)
	{
		iLocal_60 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_61, 130, sLocal_62, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_60);
		vVar0 = { Global_3145858.f_48319[iLocal_43 /*13*/] };
		vVar3 = { Global_3145858.f_48319[iLocal_43 /*13*/].f_3 };
		STREAMING::SET_FOCUS_POS_AND_VEL(vVar0, vVar3);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_60, true, false))
	{
		if (MISC::IS_BIT_SET(iLocal_46, 7))
		{
			if ((!bLocal_36 && !bLocal_35) && !func_2(2.524355E-29f))
			{
				iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
				ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "BGVariation_Int", iVar6, false);
			}
			if (!MISC::IS_BIT_SET(iLocal_46, 12))
			{
				iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "CameraIndex", iVar7, false);
			}
		}
		else
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			iVar9 = 0;
			while (iVar9 <= 31)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[iVar9]))
				{
					iVar10++;
				}
				iVar9++;
			}
			if (MISC::IS_BIT_SET(iLocal_46, 11))
			{
				if (iVar10 == 1)
				{
					MISC::SET_BIT(&iLocal_46, 10);
					iVar8 = (1 + iVar11);
				}
				else if (iVar10 == 2)
				{
					iVar8 = (11 + iVar11);
				}
				else
				{
					iVar8 = (21 + iVar11);
				}
			}
			else if (iVar10 <= 4)
			{
				MISC::SET_BIT(&iLocal_46, 10);
				iVar8 = (1 + iVar11);
			}
			else if (iVar10 <= 8)
			{
				iVar8 = (11 + iVar11);
			}
			else
			{
				iVar8 = (21 + iVar11);
			}
			if (!MISC::IS_BIT_SET(iLocal_46, 12))
			{
				ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "CameraIndex", iVar8, false);
			}
		}
		return true;
	}
	return false;
}

void func_47(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1049221[iVar0]))
		{
		}
		else if (!PED::IS_PED_READY_TO_RENDER(Global_1049221[iVar0]))
		{
		}
		else
		{
			PED::_SET_PED_LIGHTS(Global_1049221[iVar0], bParam0);
		}
		iVar0++;
	}
}

void func_48()
{
	char cVar0[64];
	char cVar8[64];
	char cVar16[64];
	char cVar24[64];
	int iVar32;
	int iVar33;
	int iVar34;
	char cVar35[32];
	bool bVar39;
	int iVar40;
	char cVar41[16];

	func_73();
	if (iLocal_14 < 5)
	{
		CAM::_DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_2();
	}
	switch (iLocal_14)
	{
		case 0:
			if (iLocal_42 == -1 || bLocal_44)
			{
				func_74();
				return;
			}
			if (func_53(iLocal_42) && (MISC::IS_STRING_NULL_OR_EMPTY(func_54(iLocal_42)) || MISC::IS_STRING_NULL_OR_EMPTY(func_75(iLocal_42))))
			{
				if (func_76(Global_3145858.f_48737[iLocal_42 /*25*/].f_9) || !func_77(Global_3145858.f_48737[iLocal_42 /*25*/].f_9))
				{
					func_74();
				}
				else
				{
					func_78(1);
				}
			}
			else
			{
				func_78(1);
			}
			break;
		case 1:
			if (func_79())
			{
				bLocal_34 = true;
			}
			if (CAM::DOES_CAM_EXIST(iLocal_53[0]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_53[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_78(2);
			}
			else if (func_80())
			{
				if (func_81())
				{
					if (func_82())
					{
						if (func_83())
						{
							if (!MISC::IS_BIT_SET(iLocal_46, 3))
							{
								CAM::SET_CAM_ACTIVE(iLocal_53[0], true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							}
							func_78(2);
						}
					}
				}
			}
			break;
		case 2:
			if (func_84())
			{
				func_85(2.350989E-38f);
				if (!MISC::IS_BIT_SET(iLocal_46, 3))
				{
					if (iLocal_42 != -1)
					{
						iVar32 = Global_3145858.f_48737[iLocal_42 /*25*/].f_24;
						iVar33 = Global_3145858.f_48737[iLocal_42 /*25*/].f_23;
					}
					else
					{
						iVar32 = 3750;
						iVar33 = 1;
					}
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_53[1], iLocal_53[0], iVar32, iVar33, 1);
					func_35(&uLocal_63, 0, 0);
				}
				else
				{
					func_86(0);
					if (Global_3145858.f_48737[iLocal_42 /*25*/] == 0)
					{
						CAM::_CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2(&(Global_3145858.f_58952[Global_3145858.f_48737[iLocal_42 /*25*/].f_6 /*18*/]), &(Global_3145858.f_58952[Global_3145858.f_48737[iLocal_42 /*25*/].f_6 /*18*/].f_8), 5);
					}
					else if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
					{
						StringCopy(&cVar8, func_54(iLocal_42), 64);
						StringCopy(&cVar16, func_75(iLocal_42), 64);
						StringCopy(&cVar24, func_87(iLocal_42), 64);
						CAM::_CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION(&cVar8, Global_3145858.f_48737[iLocal_42 /*25*/].f_9, Global_3145858.f_48737[iLocal_42 /*25*/].f_12);
						CAM::CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT(&cVar8, &cVar16, &cVar24, func_88(iLocal_42));
					}
					func_35(&uLocal_63, 0, 0);
				}
				if (bLocal_34)
				{
					iVar34 = 0;
					while (iVar34 <= 31)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[iVar34]))
						{
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1049221[iVar34], false, false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_1049221[iVar34], true);
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049221[iVar34], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049221[iVar34], true, true);
							}
							PED::DELETE_PED(&(Global_1049221[iVar34]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[iVar34]))
						{
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1049254[iVar34], false, false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_1049254[iVar34], true);
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049254[iVar34], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049254[iVar34], true, true);
							}
							PED::DELETE_PED(&(Global_1049254[iVar34]));
						}
						iVar34++;
					}
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					func_78(3);
				}
				else
				{
					bLocal_184 = true;
					GRAPHICS::_0x71845905BCCDE781(iLocal_37);
					GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_38);
					func_78(4);
				}
			}
			else if (!bLocal_83)
			{
				func_89();
				bLocal_83 = true;
			}
			else if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(iLocal_37) && AUDIO::PREPARE_SOUND("flash_to_landscape", "rdro_gamemode_transition_sounds", -2))
			{
				if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
				{
					if (!bLocal_82 && (MISC::GET_GAME_TIMER() - iLocal_81) > 1000)
					{
						StringCopy(&cVar8, func_54(iLocal_42), 64);
						StringCopy(&cVar16, func_75(iLocal_42), 64);
						StringCopy(&cVar24, func_87(iLocal_42), 64);
						CAM::CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT(&cVar8, &cVar16, &cVar24);
						bLocal_82 = true;
					}
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_46, 4))
			{
				if (!SCRIPTS::IS_LOADING_SCREEN_VISIBLE())
				{
					if (MISC::IS_BIT_SET(iLocal_46, 3))
					{
						if (Global_3145858.f_48737[iLocal_42 /*25*/] == 0)
						{
							StringCopy(&cVar0, func_75(iLocal_42), 64);
							StringConCat(&cVar0, "_Static", 64);
							CAM::_CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2(func_54(iLocal_42), &cVar0, 5);
						}
						else if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
						{
							StringCopy(&cVar8, func_54(iLocal_42), 64);
							StringCopy(&cVar16, func_75(iLocal_42), 64);
							StringCopy(&cVar24, func_87(iLocal_42), 64);
							CAM::_CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION(&cVar8, Global_3145858.f_48737[iLocal_42 /*25*/].f_9, 0f, 0f, 0f);
							CAM::CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT(&cVar8, &cVar16, &cVar24, func_88(iLocal_42));
							iLocal_81 = MISC::GET_GAME_TIMER();
						}
					}
					if ((Global_3145858.f_48737[iLocal_42 /*25*/] != 1 || CAM::_0x1D931B7CC0EE3956(&cVar8, &cVar16, &cVar24)) || (MISC::GET_GAME_TIMER() - iLocal_81) > 2000)
					{
						if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_81) > 2000)
							{
								iLocal_81 = MISC::GET_GAME_TIMER();
							}
							CAM::_CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION(&cVar8, Global_3145858.f_48737[iLocal_42 /*25*/].f_9, Global_3145858.f_48737[iLocal_42 /*25*/].f_12);
						}
						if ((!bLocal_34 && !bLocal_44) && (bLocal_36 || bLocal_35))
						{
							StringCopy(&cVar35, "MP_ADV_INTRO_OS", 32);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_51717)))
							{
								cVar35 = { Global_3145858.f_51717 };
							}
							AUDIO::TRIGGER_MUSIC_EVENT(&cVar35);
						}
						GRAPHICS::_ANIMPOSTFX_PLAY_TAG(iLocal_37);
						AUDIO::PLAY_SOUND_FRONTEND("flash_to_landscape", "rdro_gamemode_transition_sounds", true, 0);
						MISC::SET_BIT(&iLocal_46, 4);
					}
				}
			}
			break;
		case 3:
			func_24(65536);
			if ((CAM::DOES_CAM_EXIST(iLocal_53[0]) && CAM::IS_CAM_INTERPOLATING(iLocal_53[0])) || (CAM::DOES_CAM_EXIST(iLocal_53[1]) && CAM::IS_CAM_INTERPOLATING(iLocal_53[1])))
			{
				if (IntToFloat(func_34(&uLocal_63, 0, 0)) > (IntToFloat(Global_3145858.f_48737[iLocal_42 /*25*/].f_24) * 1063675494))
				{
					func_90();
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 3) && func_34(&uLocal_63, 0, 0) < func_88(iLocal_42))
			{
				if (IntToFloat(func_34(&uLocal_63, 0, 0)) > (IntToFloat(func_88(iLocal_42)) * 1063675494))
				{
					func_90();
				}
			}
			else
			{
				if (!func_2(4096))
				{
					if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
						if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
						{
							PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
						}
					}
					else
					{
						bVar39 = true;
					}
				}
				else
				{
					bVar39 = true;
				}
				if (bVar39)
				{
					if (!MISC::IS_BIT_SET(iLocal_46, 3))
					{
						CAM::SET_CAM_ACTIVE(iLocal_53[0], false);
						CAM::SET_CAM_ACTIVE(iLocal_53[1], false);
						CAM::SET_CAM_ACTIVE(iLocal_56[0], true);
					}
					else
					{
						if (Global_3145858.f_48737[iLocal_42 /*25*/] == 0)
						{
							StringCopy(&cVar0, func_75(iLocal_42), 64);
							StringConCat(&cVar0, "_Static", 64);
							CAM::_0xA54D643D0773EB65(func_54(iLocal_42), &cVar0, 5);
						}
						else if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
						{
							StringCopy(&cVar8, func_54(iLocal_42), 64);
							StringCopy(&cVar16, func_75(iLocal_42), 64);
							StringCopy(&cVar24, func_87(iLocal_42), 64);
							CAM::CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT(&cVar8, &cVar16, &cVar24);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					}
					TASK::CLEAR_PED_TASKS(iLocal_33, true, false);
					GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
					func_78(5);
				}
			}
			break;
		case 4:
			func_91();
			break;
		case 5:
			if (func_33(&uLocal_65))
			{
				if (func_2(128) && func_34(&uLocal_65, 0, 0) > 1500)
				{
					GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("RespawnMissionCheckpoint");
					func_86(0);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					STREAMING::END_SRL();
					func_78(7);
				}
			}
			else
			{
				func_35(&uLocal_65, 0, 0);
				iVar40 = 0;
				while (iVar40 <= 1)
				{
					StringCopy(&cVar41, "TOWNFOLK_0", 16);
					StringIntConCat(&cVar41, iVar40 + 1, 16);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_186[iVar40]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_186[iVar40], false);
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_60, &cVar41, iLocal_186[iVar40]);
					}
					iVar40++;
				}
			}
			break;
		case 6:
			if (bLocal_84 || func_84())
			{
				bLocal_84 = true;
				if (func_2(128))
				{
					func_86(0);
					func_78(7);
				}
			}
			break;
		case 7:
			if (!func_2(16))
			{
				func_92();
			}
			break;
	}
}

void func_49(var uParam0)
{
	var uVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_15, 1))
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(*uParam0) && UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(*uParam0))
		{
			UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_EXIT(*uParam0, 0);
			MISC::SET_BIT(&(uParam0->f_15), 1);
		}
	}
	else if (!UISTATEMACHINE::_UI_STATE_MACHINE_IS_EXITED(*uParam0))
	{
		uVar0 = *uParam0;
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY_AND_CLEAR(&uVar0);
		MISC::CLEAR_BIT(&(uParam0->f_15), 0);
		MISC::CLEAR_BIT(&(uParam0->f_15), 1);
	}
}

void func_50(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_51(int iParam0)
{
	Global_262151 = (Global_262151 - (Global_262151 && iParam0));
}

int func_52()
{
	return -1;
}

bool func_53(int iParam0)
{
	if (Global_3145858.f_48737[iParam0 /*25*/] == 0)
	{
		return Global_3145858.f_48737[iParam0 /*25*/].f_6 > -1;
	}
	else if (Global_3145858.f_48737[iParam0 /*25*/] == 1)
	{
		return true;
	}
	return false;
}

char* func_54(int iParam0)
{
	if (Global_3145858.f_48737[iParam0 /*25*/] == 0 && Global_3145858.f_48737[iParam0 /*25*/].f_6 > -1)
	{
		return func_93(Global_3145858.f_58952[Global_3145858.f_48737[iParam0 /*25*/].f_6 /*18*/]);
	}
	else if (Global_3145858.f_48737[iParam0 /*25*/] == 1)
	{
		return func_94(Global_3145858.f_48737[iParam0 /*25*/].f_7);
	}
	return "";
}

void func_55()
{
	Global_262153 = 0;
}

void func_56()
{
	Global_1072759.f_28644.f_1 = 0;
	Global_1072759.f_28644.f_2 = 0;
}

void func_57(int iParam0)
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

void func_58(bool bParam0)
{
	Global_1940072.f_19 = !bParam0;
}

int func_59(int iParam0)
{
	if (func_95(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (func_96(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

char* func_61(int iParam0, char* sParam1, char* sParam2)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case -1759663922:
			if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "Mission MP - "))
			{
				return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam1, 13, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1));
			}
			else
			{
				return HUD::_GET_TEXT_SUBSTRING_2(sParam1, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1));
			}
			break;
		default:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				return HUD::_GET_TEXT_SUBSTRING_2(sParam2, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2));
			}
			sVar0 = MISC::VAR_STRING(2, func_97(iParam0));
			if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar0, "Invalid MISSION_SUB_TYPE"))
			{
				sVar0 = "LANDING_FREEROAM_TITLE";
			}
			return sVar0;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_62(int iParam0)
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

char* func_63(int iParam0)
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

var func_64(var uParam0)
{
	return uParam0;
}

int func_65(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_98();
	if (func_99(iVar0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar0 /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_100(vParam0, iParam3);
}

char* func_66(int iParam0)
{
	char cVar0[128];

	if (!func_99(iParam0))
	{
		return "";
	}
	StringCopy(&cVar0, func_101(iParam0), 128);
	return MISC::VAR_STRING(2, &cVar0);
}

bool func_67()
{
	return Global_1896762.f_352;
}

void func_68()
{
	func_37(0);
}

bool func_69()
{
	return Global_1940239.f_2;
}

void func_70()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(NaNf) > 0)
	{
		Global_1940239.f_13 = 1;
	}
}

void func_71()
{
	if (Global_1940072.f_111)
	{
		Global_1940072.f_111 = 0;
	}
	HUD::_DISABLE_HUD_CONTEXT(1.275901E-37f);
}

bool func_72(int iParam0)
{
	return func_102(Global_1072759.f_28644.f_8.f_1, iParam0);
}

void func_73()
{
	if (iLocal_14 > 0 && iLocal_15 < 3)
	{
	}
}

void func_74()
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;

	if (!CAM::DOES_CAM_EXIST(iLocal_53[0]))
	{
		if (!func_76(Global_3145858.f_116) && func_77(Global_3145858.f_116))
		{
			func_103(Global_3145858.f_116, Global_3145858.f_119, Global_3145858.f_122);
		}
		else
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iLocal_33, 21030, 0f, 0.65f, 0f) };
			vVar3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_33, 0) };
			func_103(vVar0, vVar3, 45f);
		}
	}
	if (func_104())
	{
		bVar6 = PED::IS_PED_ON_MOUNT(iLocal_33);
		bVar7 = PED::IS_PED_IN_ANY_VEHICLE(iLocal_33, false);
		func_105(&iLocal_33, bVar6, bVar7, 0);
		func_86(0);
		iLocal_53[0] = iLocal_53[1];
		CAM::SET_CAM_ACTIVE(iLocal_53[0], true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		func_78(1);
	}
}

char* func_75(int iParam0)
{
	if (Global_3145858.f_48737[iParam0 /*25*/] == 0 && Global_3145858.f_48737[iParam0 /*25*/].f_6 > -1)
	{
		return func_106(Global_3145858.f_58952[Global_3145858.f_48737[iParam0 /*25*/].f_6 /*18*/].f_8);
	}
	else if (Global_3145858.f_48737[iParam0 /*25*/] == 1)
	{
		return func_107(Global_3145858.f_48737[iParam0 /*25*/].f_7);
	}
	return "";
}

bool func_76(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_77(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_108(iLocal_32) };
	fVar3 = BUILTIN::VDIST2(vParam0, vVar0);
	if (fVar3 <= 1176256512)
	{
		return true;
	}
	return false;
}

void func_78(int iParam0)
{
	iLocal_14 = iParam0;
}

bool func_79()
{
	if (iLocal_43 == -1)
	{
		return true;
	}
	if (func_76(func_109()))
	{
		return true;
	}
	if (!func_77(func_109()))
	{
		return true;
	}
	return false;
}

bool func_80()
{
	if (func_76(vLocal_85[0 /*3*/]))
	{
		func_110();
	}
	else
	{
		return true;
	}
	return false;
}

bool func_81()
{
	char cVar0[16];

	if (iLocal_182 < func_111())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[iLocal_182]))
		{
			if (iLocal_182 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_60, func_109(), func_112(), 0);
				if (MISC::IS_BIT_SET(iLocal_46, 7))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1049221[0]))
					{
						func_113(Global_1049221[0]);
					}
					else
					{
						func_114(Global_1049221[0]);
					}
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049221[iLocal_182], true, true);
			if (PED::IS_PED_MALE(Global_1049221[iLocal_182]))
			{
				StringCopy(&cVar0, "Ped_M_", 16);
			}
			else
			{
				StringCopy(&cVar0, "Ped_F_", 16);
			}
			StringIntConCat(&cVar0, iLocal_182, 16);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_60, &cVar0, Global_1049221[iLocal_182], 0);
			if (PED::IS_PED_ON_MOUNT(Global_1049221[iLocal_182]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049254[iLocal_182], true, true);
				StringCopy(&cVar0, "Horse_", 16);
				StringIntConCat(&cVar0, iLocal_182, 16);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_60, &cVar0, Global_1049254[iLocal_182], 0);
			}
			if (!MISC::IS_BIT_SET(iLocal_46, 8) && !MISC::IS_BIT_SET(iLocal_46, 7))
			{
				if (PED::IS_PED_ON_MOUNT(Global_1049221[iLocal_182]))
				{
					func_115(Global_1049221[iLocal_182], iLocal_182);
				}
				else
				{
					func_116(Global_1049221[iLocal_182], iLocal_182);
				}
			}
			iLocal_182++;
			return false;
		}
	}
	else if (iLocal_182 < 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[iLocal_182]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049221[iLocal_182], true, true);
			PED::DELETE_PED(&(Global_1049221[iLocal_182]));
			iLocal_182++;
			return false;
		}
	}
	return true;
}

bool func_82()
{
	int iVar0;
	char cVar1[16];

	if (!Global_1049288 || iLocal_192 >= 2)
	{
		return true;
	}
	if (iLocal_192 == 0)
	{
		fLocal_189[0] = -2.458904E-09f;
		fLocal_189[1] = 3.043968E+09f;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_524288.f_39639[iVar0] > -1)
		{
			fLocal_189[iVar0] = Global_3932160.f_1[Global_524288.f_39639[iVar0] /*374*/].f_56;
		}
		STREAMING::REQUEST_MODEL(fLocal_189[iVar0], false);
		if (STREAMING::HAS_MODEL_LOADED(fLocal_189[iVar0]))
		{
			StringCopy(&cVar1, "TOWNFOLK_0", 16);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_186[iVar0]))
			{
				iLocal_186[iVar0] = PED::CREATE_PED(fLocal_189[iVar0], func_109(), 0f, false, true, false, false);
				PED::_SET_RANDOM_OUTFIT_VARIATION(iLocal_186[iVar0], true);
				PED::_UPDATE_PED_VARIATION(iLocal_186[iVar0], false, true, true, true, false);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_186[iVar0], true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_186[iVar0], true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_186[iVar0], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_186[iVar0], true);
				StringIntConCat(&cVar1, iVar0 + 1, 16);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_60, &cVar1, iLocal_186[iVar0], 0);
				iLocal_192++;
				return false;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_83()
{
	char cVar0[128];
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	bool bVar23;

	if (!func_104())
	{
		return false;
	}
	if (((!bLocal_80 && func_53(iLocal_42)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_54(iLocal_42))) && !MISC::IS_STRING_NULL_OR_EMPTY(func_75(iLocal_42)))
	{
		if (!CAM::_IS_CINEMATIC_CAM_LOCATION_LOADED(func_54(iLocal_42)))
		{
			if (!CAM::_IS_CINEMATIC_CAM_LOCATION_LOADED_2(func_54(iLocal_42)))
			{
				CAM::_LOAD_CINEMATIC_CAM_LOCATION(func_54(iLocal_42));
				if (Global_3145858.f_48737[iLocal_42 /*25*/] == 0)
				{
					StringCopy(&cVar0, "mp@establishers@", 128);
					StringConCat(&cVar0, func_75(iLocal_42), 128);
					StringConCat(&cVar0, "_SRL", 128);
					STREAMING::PREFETCH_SRL(&cVar0);
				}
			}
			if (!func_33(&uLocal_73))
			{
				func_35(&uLocal_73, 0, 0);
			}
			else if (func_34(&uLocal_73, 0, 0) > 5000)
			{
				bLocal_80 = true;
			}
			return false;
		}
		else
		{
			MISC::SET_BIT(&iLocal_46, 3);
		}
	}
	else if (!CAM::DOES_CAM_EXIST(iLocal_53[0]))
	{
		if (func_76(Global_3145858.f_48737[iLocal_42 /*25*/].f_9) || func_76(Global_3145858.f_48737[iLocal_42 /*25*/].f_15))
		{
			vVar16 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
			vVar19 = { Global_3145858.f_196 };
			vVar19.f_2 = (vVar19.z + 5f);
			func_103(vVar19, vVar16, 45f);
		}
		else
		{
			iLocal_53[0] = CAM::CREATE_CAMERA_WITH_PARAMS(5.382516E-38f, Global_3145858.f_48737[iLocal_42 /*25*/].f_9, Global_3145858.f_48737[iLocal_42 /*25*/].f_12, Global_3145858.f_48737[iLocal_42 /*25*/].f_21, false, 2);
			iLocal_53[1] = CAM::CREATE_CAMERA_WITH_PARAMS(5.382516E-38f, Global_3145858.f_48737[iLocal_42 /*25*/].f_15, Global_3145858.f_48737[iLocal_42 /*25*/].f_18, Global_3145858.f_48737[iLocal_42 /*25*/].f_22, false, 2);
		}
	}
	if (MISC::IS_BIT_SET(iLocal_46, 3))
	{
		if (!STREAMING::IS_SRL_LOADED())
		{
			return false;
		}
		else
		{
			STREAMING::_0xD9F2FF4AF394D926();
			STREAMING::BEGIN_SRL();
		}
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_56[0]))
	{
		bVar22 = PED::IS_PED_ON_MOUNT(iLocal_33);
		bVar23 = PED::IS_PED_IN_ANY_VEHICLE(iLocal_33, false);
		func_105(&iLocal_33, bVar22, bVar23, 0);
	}
	return true;
}

bool func_84()
{
	var uVar0;

	if (GRAPHICS::ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(iLocal_37, 2, false, &uVar0))
	{
		func_5(&Local_16, 0);
		AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("landscape_shot");
		return true;
	}
	return false;
}

void func_85(float fParam0)
{
	if (func_102(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, fParam0))
	{
		func_117(&(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), fParam0);
	}
}

void func_86(bool bParam0)
{
	if (bParam0)
	{
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
	else
	{
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
	}
}

char* func_87(int iParam0)
{
	if (Global_3145858.f_48737[iParam0 /*25*/] == 1)
	{
		return func_118(Global_3145858.f_48737[iParam0 /*25*/].f_7, Global_3145858.f_48737[iParam0 /*25*/].f_8);
	}
	return "";
}

int func_88(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	if (Global_3145858.f_48737[iParam0 /*25*/] == 0 && Global_3145858.f_48737[iParam0 /*25*/].f_6 > -1)
	{
		return CAM::_0x465F04F68AD38197(&(Global_3145858.f_58952[Global_3145858.f_48737[iParam0 /*25*/].f_6 /*18*/]), &(Global_3145858.f_58952[Global_3145858.f_48737[iParam0 /*25*/].f_6 /*18*/].f_8), 5);
	}
	else if (Global_3145858.f_48737[iParam0 /*25*/] == 1)
	{
		if (Global_3145858.f_48737[iParam0 /*25*/].f_24 > 0)
		{
			return Global_3145858.f_48737[iParam0 /*25*/].f_24;
		}
		else
		{
			StringCopy(&cVar0, func_94(Global_3145858.f_48737[iParam0 /*25*/].f_7), 64);
			StringCopy(&cVar8, func_107(Global_3145858.f_48737[iParam0 /*25*/].f_7), 64);
			return CAM::_0x465F04F68AD38197(&cVar0, &cVar8, 5);
		}
	}
	return 0;
}

void func_89()
{
	func_86(0);
	SCRIPTS::STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS(0);
}

void func_90()
{
	if (!bLocal_183)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(iLocal_33, "SpawnMissionIntro", true, 20);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_33, true, true);
		bLocal_183 = true;
	}
}

void func_91()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (iLocal_15)
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(iLocal_53[0]) || CAM::DOES_CAM_EXIST(iLocal_53[1]))
			{
				if (CAM::IS_CAM_INTERPOLATING(iLocal_53[1]) || CAM::IS_CAM_INTERPOLATING(iLocal_53[0]))
				{
				}
				else
				{
					func_119();
					func_120(1);
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 3))
			{
				if (func_33(&uLocal_63))
				{
					if (func_34(&uLocal_63, 0, 0) > func_88(iLocal_42))
					{
						func_35(&uLocal_67, 0, 0);
						func_119();
						func_120(1);
					}
				}
				else
				{
					func_35(&uLocal_63, 0, 0);
				}
			}
			else
			{
				func_35(&uLocal_67, 0, 0);
				func_119();
				func_120(1);
			}
			break;
		case 1:
			if (!bLocal_185)
			{
				iVar0 = 0;
				while (iVar0 <= 31)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Global_1049221[iVar0], true);
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[iVar0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Global_1049254[iVar0], true);
						}
					}
					iVar0++;
				}
				bLocal_185 = true;
			}
			if ((CAM::DOES_CAM_EXIST(iLocal_53[0]) && CAM::IS_CAM_ACTIVE(iLocal_53[0])) || (CAM::DOES_CAM_EXIST(iLocal_53[1]) && CAM::IS_CAM_ACTIVE(iLocal_53[1])))
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 3))
				{
					CAM::SET_CAM_ACTIVE(iLocal_53[0], false);
					CAM::SET_CAM_ACTIVE(iLocal_53[1], false);
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_60, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_60) < 1062417203)
			{
			}
			else
			{
				GRAPHICS::_ANIMPOSTFX_PLAY_TAG(iLocal_38);
				fVar1 = func_121(iLocal_32, 1, -1, 1);
				if (MISC::IS_BIT_SET(iLocal_46, 10))
				{
					Local_16.f_2 = 3.294974E+13f;
				}
				else
				{
					Local_16.f_2 = -3.995794E-22f;
				}
				MISC::CLEAR_BIT(&(Local_16.f_15), 0);
				if (iLocal_41 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145728[iLocal_41 /*8*/])))
				{
					func_122(&Local_16, PLAYER::GET_PLAYER_NAME(iLocal_32), &(Global_3145728[iLocal_41 /*8*/]), " ", " ", " ", " ", fVar1);
				}
				else
				{
					func_122(&Local_16, PLAYER::GET_PLAYER_NAME(iLocal_32), " ", " ", " ", " ", " ", fVar1);
				}
				func_38(&Local_16);
				func_35(&uLocal_67, 0, 0);
				func_35(&uLocal_69, 0, 0);
				func_120(2);
			}
			break;
		case 2:
			func_24(65536);
			if (!func_2(16384))
			{
				iVar2 = func_34(&uLocal_69, 0, 0);
				if (iVar2 < 15000)
				{
					if (iVar2 > 6500)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(650);
							func_123(0);
						}
					}
					func_35(&uLocal_67, 0, 0);
					return;
				}
			}
			iVar3 = func_34(&uLocal_67, 0, 0);
			if (iVar3 > 6500)
			{
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(650);
				}
			}
			if (iVar3 > 7500)
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iLocal_60, false);
				iVar4 = 0;
				while (iVar4 <= 31)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[iVar4]))
					{
						if (iLocal_60 != -1)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_60, "", Global_1049221[iVar4]);
						}
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049221[iVar4], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049221[iVar4], true, true);
						}
						PED::DELETE_PED(&(Global_1049221[iVar4]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[iVar4]))
					{
						if (iLocal_60 != -1)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_60, "", Global_1049254[iVar4]);
						}
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049254[iVar4], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049254[iVar4], true, true);
						}
						PED::DELETE_PED(&(Global_1049254[iVar4]));
					}
					iVar4++;
				}
				ANIMSCENE::RESET_ANIM_SCENE(iLocal_60, 0);
				if (!func_2(4096))
				{
					NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
				}
				if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
				}
				func_124();
				func_5(&Local_16, 0);
				if (bLocal_36 || bLocal_35)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				}
				func_120(3);
			}
			else if (iVar3 > 5000)
			{
				func_90();
			}
			break;
		case 3:
			GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(iLocal_38);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(350);
			}
			func_86(0);
			GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
			func_24(131072);
			if (AUDIO::PREPARE_SOUND("exit_photo_to_match", "rdro_gamemode_transition_sounds", -2))
			{
				AUDIO::PLAY_SOUND_FRONTEND("exit_photo_to_match", "rdro_gamemode_transition_sounds", true, 0);
				AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("gameplay");
			}
			func_120(4);
			break;
		case 4:
			func_78(5);
			break;
	}
}

void func_92()
{
	if (!iLocal_75[3])
	{
		if (!func_33(&uLocal_71))
		{
			iLocal_75[3] = 1;
			func_35(&uLocal_71, 0, 0);
		}
		else if (func_34(&uLocal_71, 0, 0) > 2900)
		{
			iLocal_75[3] = 1;
		}
		else if (!iLocal_75[2] == 1 && func_34(&uLocal_71, 0, 0) > 1800)
		{
			iLocal_75[2] = 1;
		}
		else if (!iLocal_75[1] == 1 && func_34(&uLocal_71, 0, 0) > 900)
		{
			iLocal_75[1] = 1;
		}
	}
	else
	{
		func_24(16);
	}
}

char* func_93(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_94(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	if (iParam0 == 0)
	{
		StringCopy(&cVar0, "mp@freemode_cams@cloudupdate_intro_cams", 64);
	}
	if (iParam0 == 1)
	{
		StringCopy(&cVar0, "mp@freemode_cams@cloudupdate_outro_cams", 64);
	}
	if (iParam0 == 2)
	{
		StringCopy(&cVar0, "mp@freemode_cams@cloudupdate_establisher_cams", 64);
	}
	return func_93(cVar0);
}

bool func_95(var uParam0, int iParam1, int iParam2)
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

bool func_96(var uParam0, int iParam1, int iParam2)
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

char* func_97(int iParam0)
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

int func_98()
{
	return Global_1893611.f_2;
}

bool func_99(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_100(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_125(vParam0);
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

char* func_101(int iParam0)
{
	if (!func_99(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "REG_IF_BAY_CDW";
		case 1:
			return "REG_IF_SCM_MCE";
		case 2:
			return "REG_IF_SCM_MKW";
		case 3:
			return "REG_IF_BAY_LAG";
		case 4:
			return "REG_IF_BAY_LAK";
		case 5:
			return "REG_IF_BAY_STD";
		case 6:
			return "REG_IF_BAY_ORP";
		case 7:
			return "REG_IF_BAY_SKS";
		case 8:
			return "REG_IF_BAY_SDP";
		case 9:
			return "REG_IF_BAY_SDB";
		case 10:
			return "REG_IF_BAY_SWS";
		case 11:
			return "REG_IF_BGV_AST";
		case 12:
			return "REG_IF_BGV_BRD";
		case 13:
			return "REG_IF_BGV_BBF";
		case 14:
			return "REG_IF_BGV_DAK";
		case 15:
			return "REG_IF_BGV_FRT";
		case 16:
			return "REG_IF_BGV_HND";
		case 17:
			return "REG_IF_BGV_LMS";
		case 18:
			return "REG_IF_BGV_MHS";
		case 19:
			return "REG_IF_BGV_MNR";
		case 20:
			return "REG_IF_BGV_OWD";
		case 21:
			return "REG_IF_BGV_PNS";
		case 22:
			return "REG_IF_BGV_PRN";
		case 23:
			return "REG_IF_BGV_RIS";
		case 24:
			return "REG_IF_BGV_SHK";
		case 25:
			return "REG_IF_BGV_SHR";
		case 26:
			return "REG_IF_BGV_STB";
		case 27:
			return "REG_IF_BGV_VV";
		case 28:
			return "REG_IF_GRZ_WS";
		case 30:
			return "REG_IF_BGV_WSC";
		case 29:
			return "REG_IF_BGV_BOJ";
		case 31:
			return "REG_IF_BLU_CBM";
		case 32:
			return "REG_IF_BLU_CPH";
		case 33:
			return "REG_IF_BLU_SIS";
		case 35:
			return "REG_IF_CML_BHB";
		case 36:
			return "REG_IF_CML_DL";
		case 37:
			return "REG_IF_CML_OFW";
		case 38:
			return "REG_IF_CML_SPC";
		case 39:
			return "REG_IF_GRT_BEC";
		case 40:
			return "REG_IF_GRT_BW";
		case 41:
			return "REG_IF_GRT_QC";
		case 42:
			return "REG_IF_GRZ_ADR";
		case 43:
			return "REG_IF_HRT_DRS";
		case 53:
			return "REG_IF_GRZ_CMR";
		case 54:
			return "REG_IF_CML_CM";
		case 44:
			return "REG_IF_GRZ_CHZ";
		case 55:
			return "REG_IF_GRZ_COH";
		case 45:
			return "REG_IF_GRZ_CLT";
		case 46:
			return "REG_IF_GRZ_FRZ";
		case 47:
			return "REG_IF_GRZ_MSC";
		case 48:
			return "REG_IF_GRZ_MM";
		case 50:
			return "REG_IF_BGV_SCS";
		case 51:
			return "REG_IF_GRZ_LC";
		case 58:
			return "REG_IF_GRZ_TL";
		case 59:
			return "REG_IF_CML_VET";
		case 60:
			return "REG_IF_GRZ_WAP";
		case 52:
			return "REG_IF_BGV_WMT";
		case 62:
			return "REG_IF_GUA_AGU";
		case 63:
			return "REG_IF_GUA_CMP";
		case 64:
			return "REG_IF_GUA_CNT";
		case 65:
			return "REG_IF_GUA_LAC";
		case 66:
			return "REG_IF_GUA_MAN";
		case 67:
			return "REG_IF_HRT_ABM";
		case 69:
			return "REG_IF_HRT_CMD";
		case 70:
			return "REG_IF_HRT_CKS";
		case 71:
			return "REG_IF_HRT_CRF";
		case 72:
			return "REG_IF_HRT_CBF";
		case 73:
			return "REG_IF_HRT_DNR";
		case 74:
			return "REG_IF_HRT_EMR";
		case 75:
			return "REG_IF_HRT_PIG";
		case 76:
			return "REG_IF_HRT_HSO";
		case 77:
			return "REG_IF_HRT_LRN";
		case 78:
			return "REG_IF_GRZ_LC";
		case 79:
			return "REG_IF_HRT_LCK";
		case 80:
			return "REG_IF_HRT_SSS";
		case 81:
			return "REG_IF_HRT_VAL";
		case 82:
			return "REG_IF_HRT_APF";
		case 83:
			return "REG_IF_ROA_ANN";
		case 84:
			return "REG_IF_ROA_BEV";
		case 68:
			return "REG_IF_ROA_SBC";
		case 85:
			return "REG_IF_ROA_BBR";
		case 86:
			return "REG_IF_ROA_BWD";
		case 87:
			return "REG_IF_ROA_BTC";
		case 88:
			return "REG_IF_CML_DVH";
		case 89:
			return "REG_IF_ROA_HFS";
		case 90:
			return "REG_IF_ROA_ISS";
		case 91:
			return "REG_IF_ROA_MCH";
		case 92:
			return "REG_IF_ROA_MSF";
		case 93:
			return "REG_IF_ROA_ROV";
		case 94:
			return "REG_IF_CML_RS";
		case 95:
			return "REG_IF_ROA_TRP";
		case 97:
			return "REG_IF_ROA_VHM";
		case 98:
			return "REG_IF_ROA_VHP";
		case 96:
			return "REG_IF_ROA_ROJ";
		case 99:
			return "REG_IF_SCM_BWM";
		case 100:
			return "REG_IF_SCM_BLG";
		case 101:
			return "REG_IF_SCM_CGH";
		case 102:
			return "REG_IF_SCM_CFJ";
		case 103:
			return "REG_IF_SCM_CMC";
		case 104:
			return "REG_IF_SCM_CMP";
		case 105:
			return "REG_IF_SCM_CSS";
		case 106:
			return "REG_IF_SCM_DRF";
		case 107:
			return "REG_IF_INV";
		case 108:
			return "REG_IF_SCM_LS";
		case 109:
			return "REG_IF_SCM_LTS";
		case 110:
			return "REG_IF_SCM_RP";
		case 111:
			return "REG_IF_SCM_RHO";
		case 112:
			return "REG_IF_SCM_SPS";
		case 113:
			return "REG_IF_TAL_AUR";
		case 114:
			return "REG_IF_CML_DS";
		case 115:
			return "REG_IF_TAL_COC";
		case 116:
			return "REG_IF_TAL_MAN";
		case 117:
			return "REG_IF_TAL_PUR";
		case 118:
			return "REG_IF_TAL_TNR";
		case 119:
			return "REG_IF_TAL_TRP";
		case 121:
			return "REG_IF_GAP_TUM";
		case 120:
			return "REG_IF_GAP_GBR";
		case 122:
			return "REG_IF_GAP_RFK";
		case 34:
		case 61:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return "REG_IF_INV";
		default:
			break;
	}
	return "REG_IF_INV";
}

bool func_102(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_103(vector3 vParam0, vector3 vParam3, float fParam6)
{
	iLocal_53[0] = CAM::CREATE_CAMERA_WITH_PARAMS(5.382516E-38f, vParam0, vParam3, fParam6, false, 2);
	iLocal_53[1] = CAM::CREATE_CAMERA_WITH_PARAMS(5.382516E-38f, vParam0, vParam3, fParam6, false, 2);
}

bool func_104()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	var uVar8;
	var uVar11;
	var uVar14;
	int iVar15;

	if (!bLocal_58)
	{
		if (iLocal_59 == 0)
		{
			iVar0 = 339;
			vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_33, true, false), 0f, 1.3f, 1f, 0.1f) };
			vVar4 = { CAM::GET_GAMEPLAY_CAM_COORD() };
			iLocal_59 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar4, 0.25f, iVar0, iLocal_33, 4);
		}
		else
		{
			iVar15 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_59, &iVar7, &uVar8, &uVar11, &uVar14);
			if (iVar15 == 2)
			{
				if (iVar7 == 0)
				{
				}
				bLocal_58 = true;
			}
			else if (iVar15 == 0)
			{
				bLocal_58 = true;
			}
		}
		return false;
	}
	return true;
}

void func_105(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	iLocal_56[0] = CAM::CREATE_CAMERA_WITH_PARAMS(5.382516E-38f, vVar0, vVar3, 65f, false, 2);
	if (bParam1)
	{
	}
	if (bParam2 || !bParam3)
	{
		return;
	}
}

char* func_106(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_107(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	if (iParam0 == 0)
	{
		StringCopy(&cVar0, "IntroShot", 64);
	}
	if (iParam0 == 1)
	{
		StringCopy(&cVar0, "OutroShot", 64);
	}
	if (iParam0 == 2)
	{
		StringCopy(&cVar0, "EstablisherShot", 64);
	}
	return func_93(cVar0);
}

Vector3 func_108(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

Vector3 func_109()
{
	return Global_3145858.f_48319[iLocal_43 /*13*/];
}

void func_110()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		bVar1 = ENTITY::DOES_ENTITY_EXIST(Global_1049254[0]);
		vLocal_85[iVar0 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Global_3145858.f_48319[iLocal_43 /*13*/], Global_3145858.f_48319[iLocal_43 /*13*/].f_3.f_2, func_126(iVar0, bVar1)) };
		iVar0++;
	}
}

int func_111()
{
	if (!MISC::IS_BIT_SET(iLocal_46, 7))
	{
		if (bLocal_36 || bLocal_35)
		{
			return 16;
		}
		else
		{
			return 4;
		}
	}
	else if (bLocal_36 || bLocal_35)
	{
		return 1;
	}
	else
	{
		return 4;
	}
	return 0;
}

Vector3 func_112()
{
	return Global_3145858.f_48319[iLocal_43 /*13*/].f_3;
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar3 = 0;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 1, true);
	if (iVar0 != -3.273909E-18f)
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar0, true, -5.149929E+33f);
		iVar0 = -3.273909E-18f;
	}
	if (iVar1 != -3.273909E-18f)
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar1, true, -5.149929E+33f);
		iVar1 = -3.273909E-18f;
	}
	bVar4 = (func_127(iVar0) && func_127(iVar1));
	iVar2 = func_128(iVar0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || iVar0 == -3.273909E-18f)
	{
		iVar3 = 0;
	}
	else if (bVar4)
	{
		iVar3 = 2;
	}
	else if (((iVar2 == -3.235899E+17f || iVar2 == 0.0004077075f) || iVar2 == -2.239279E-05f) || (iVar2 == 4.54198E-08f && iVar0 != 7.420716E-25f))
	{
		iVar3 = 3;
	}
	else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar0, true, -5.149929E+33f);
		iVar3 = 6;
	}
	else if (iVar0 == 2.870844E+29f)
	{
		iVar3 = 7;
	}
	else if (iVar0 == 1284.666f)
	{
		iVar3 = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
	{
		iVar3 = 5;
	}
	else if (func_129(iVar0))
	{
		iVar3 = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0) || (iVar2 == 4.54198E-08f && iVar0 == 7.420716E-25f))
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "BGPed_Enable", true, false);
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "Weapon_Int", iVar3, false);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "BGVariation_Int", iVar5, false);
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 1, true);
	bVar4 = (func_127(iVar0) && func_127(iVar1));
	iVar2 = func_128(iVar0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || iVar0 == -3.273909E-18f)
	{
		iVar3 = 0;
	}
	else if (bVar4)
	{
		iVar3 = 2;
	}
	else if (((iVar2 == -3.235899E+17f || iVar2 == 0.0004077075f) || iVar2 == -2.239279E-05f) || (iVar2 == 4.54198E-08f && iVar0 != 7.420716E-25f))
	{
		iVar3 = 3;
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if ((iVar5 % 2) == 0)
		{
			if (iVar0 == 3.499812E+33f)
			{
				iVar3 = 12;
			}
			else if (iVar0 == -1.106817E-14f)
			{
				iVar3 = 11;
			}
			else if (iVar2 == 4.54198E-08f)
			{
				if (iVar0 == 5.347146E-09f)
				{
					iVar3 = 9;
				}
				else if ((iVar0 == 9.67248E+27f || iVar0 == 2.830854E-18f) || iVar0 == -6.420424E-32f)
				{
					iVar3 = 10;
				}
			}
		}
	}
	else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar0, true, -5.149929E+33f);
		iVar3 = 6;
	}
	else if (iVar0 == 2.870844E+29f)
	{
		iVar3 = 7;
	}
	else if (iVar0 == 1284.666f)
	{
		iVar3 = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
	{
		iVar3 = 5;
	}
	else if (func_129(iVar0))
	{
		iVar3 = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0) || (iVar2 == 4.54198E-08f && iVar0 == 7.420716E-25f))
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 0;
	}
	if (PED::IS_PED_MALE(iParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "isMale", true, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "isFemale", true, false);
	}
	if (!MISC::IS_BIT_SET(iLocal_46, 11))
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "weapon_Index", iVar3, false);
	}
}

void func_115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	int iVar5;
	bool bVar6;

	StringCopy(&cVar3, "weapon_Index_", 16);
	StringIntConCat(&cVar3, iParam1, 16);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 1, true);
	bVar6 = (func_127(iVar0) && func_127(iVar1));
	iVar2 = func_128(iVar0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || iVar0 == -3.273909E-18f)
	{
		iVar5 = 0;
	}
	else if (bVar6)
	{
		iVar5 = 2;
	}
	else if (((iVar2 == -3.235899E+17f || iVar2 == 0.0004077075f) || iVar2 == -2.239279E-05f) || (iVar2 == 4.54198E-08f && iVar0 != 7.420716E-25f))
	{
		iVar5 = 3;
	}
	else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar0, true, -5.149929E+33f);
		iVar5 = 6;
	}
	else if (iVar0 == 2.870844E+29f)
	{
		iVar5 = 7;
	}
	else if (iVar0 == 1284.666f)
	{
		iVar5 = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
	{
		iVar5 = 5;
	}
	else if (func_129(iVar0))
	{
		iVar5 = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0) || (iVar2 == 4.54198E-08f && iVar0 == 7.420716E-25f))
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, &cVar3, iVar5, false);
}

void func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	int iVar5;
	bool bVar6;
	int iVar7;
	char cVar8[16];
	int iVar10;

	StringCopy(&cVar3, "weapon_Index_", 16);
	StringIntConCat(&cVar3, iParam1, 16);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 1, true);
	bVar6 = (func_127(iVar0) && func_127(iVar1));
	iVar2 = func_128(iVar0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || iVar0 == -3.273909E-18f)
	{
		iVar5 = 0;
	}
	else if (bVar6)
	{
		iVar5 = 2;
	}
	else if (((iVar2 == -3.235899E+17f || iVar2 == 0.0004077075f) || iVar2 == -2.239279E-05f) || (iVar2 == 4.54198E-08f && iVar0 != 7.420716E-25f))
	{
		iVar5 = 3;
		if (iParam1 <= 4)
		{
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if ((iVar7 % 2) == 0)
			{
				if (iVar0 == 3.499812E+33f)
				{
					iVar5 = 12;
				}
				else if (iVar0 == -1.106817E-14f)
				{
					iVar5 = 11;
				}
				else if (iVar2 == 4.54198E-08f)
				{
					if (iVar0 == 5.347146E-09f)
					{
						iVar5 = 9;
					}
					else if ((iVar0 == 9.67248E+27f || iVar0 == 2.830854E-18f) || iVar0 == -6.420424E-32f)
					{
						iVar5 = 10;
					}
				}
			}
			StringCopy(&cVar8, "Var_Ped_", 16);
			StringIntConCat(&cVar8, iParam1, 16);
			iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, &cVar8, iVar10, false);
		}
	}
	else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar0, true, -5.149929E+33f);
		iVar5 = 6;
	}
	else if (iVar0 == 2.870844E+29f)
	{
		iVar5 = 7;
	}
	else if (iVar0 == 1284.666f)
	{
		iVar5 = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
	{
		iVar5 = 5;
	}
	else if (func_129(iVar0))
	{
		iVar5 = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0) || (iVar2 == 4.54198E-08f && iVar0 == 7.420716E-25f))
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, &cVar3, iVar5, false);
}

void func_117(var uParam0, float fParam1)
{
	func_130(uParam0, fParam1);
}

char* func_118(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "35mm_NEAR_R_Cam";
				case 1:
					return "35mm_NEAR_L_Cam";
				case 2:
					return "35mm_FAR_R_Cam";
				case 3:
					return "35mm_FAR_L_Cam";
				case 4:
					return "50mm_NEAR_R_Cam";
				case 5:
					return "50mm_NEAR_L_Cam";
				case 6:
					return "50mm_FAR_R_Cam";
				case 7:
					return "50mm_FAR_L_Cam";
				case 8:
					return "50mm_REVERSE_R_Cam";
				case 9:
					return "50mm_REVERSE_L_Cam";
				case 10:
					return "35mm_REVERSE_R_Cam";
				case 11:
					return "35mm_REVERSE_L_Cam";
				case 12:
					return "50mm_SIDE_R_Cam";
				case 13:
					return "35mm_SIDE_R_Cam";
				case 14:
					return "35mm_SIDE_L_Cam";
				case 15:
					return "50mm_SIDE_L_Cam";
				case 16:
					return "35mm_WIDE_R_CAM";
				case 17:
					return "25mm_WIDE_R_CAM";
				case 18:
					return "35mm_WIDE_L_CAM";
				case 19:
					return "25mm_WIDE_L_CAM";
				case 20:
					return "35mm_WIDE_M_CAM";
				case 21:
					return "25mm_WIDE_M_CAM";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "50mm_PanDown_R_Cam";
				case 1:
					return "50mm_PanDown_L_Cam";
				case 2:
					return "35mm_PanDown_R_Cam";
				case 3:
					return "35mm_PanDown_L_Cam";
				case 4:
					return "50mm_TrackForward_R_Cam";
				case 5:
					return "50mm_TrackForward_L_Cam";
				case 6:
					return "35mm_TrackForward_R_Cam";
				case 7:
					return "35mm_TrackForward_L_Cam";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "Cam_Near35mm";
				case 1:
					return "Cam_Near50mm";
				case 2:
					return "Cam_Med35mm";
				case 3:
					return "Cam_Med50mm";
				case 4:
					return "Cam_Far35mm";
				case 5:
					return "Cam_Far50mm";
				case 6:
					return "Cam_Near25mm";
				case 7:
					return "Cam_Med25mm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_119()
{
	char cVar0[64];
	char cVar8[64];
	char cVar16[64];

	if (iLocal_60 != -1)
	{
		if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
		{
			StringCopy(&cVar0, func_54(iLocal_42), 64);
			StringCopy(&cVar8, func_75(iLocal_42), 64);
			StringCopy(&cVar16, func_87(iLocal_42), 64);
			CAM::CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT(&cVar0, &cVar8, &cVar16);
		}
		ANIMSCENE::START_ANIM_SCENE(iLocal_60);
		AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("player_team_intro");
	}
}

void func_120(int iParam0)
{
	iLocal_15 = iParam0;
}

float func_121(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_132(func_131(0)) && func_133(func_131(0)) == 7)
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
			iVar6 = func_134(iParam0);
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
			return func_135(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_102(Global_1072759.f_21353.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return -4.19002E+20f;
	}
	iVar7 = func_136(iParam0, 1);
	if (!bVar0)
	{
		if (func_137(iParam0, bParam1))
		{
			return func_135(iParam0);
		}
		else if (func_138(iParam0, bParam1))
		{
			if (func_139(iParam0, bParam1))
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
		return func_134(iParam0);
	}
	else if (func_137(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return 27.64779f;
		}
		else if (func_141(func_140(func_131(0)), 1) == 9.256025E-25f)
		{
			return func_135(iParam0);
		}
		else
		{
			return func_135(iParam0);
		}
	}
	else if (func_138(iParam0, bParam1))
	{
		return 4.709691E+29f;
	}
	return 3.737303E-09f;
}

void func_122(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
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

void func_123(int iParam0)
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

void func_124()
{
	Global_1940072.f_105 = -1;
	Global_1940072.f_105.f_1 = 0;
}

int func_125(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_142(vParam0, 0f, 0f, 0, 2);
	return func_142(vParam0, Global_1892764[iVar0 /*3*/].f_1, Global_1892764[iVar0 /*3*/].f_2, Global_1892764[iVar0 /*3*/], 4);
}

Vector3 func_126(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return -1088841318 /* Float: -0.6f */, 1101214515 /* Float: 20.4f */, 0f;
			case 1:
				return 1061158912 /* Float: 0.75f */, 1101403259 /* Float: 20.76f */, 0f;
			case 2:
				return -1069547520 /* Float: -3f */, 1101319373 /* Float: 20.6f */, 0f;
			case 3:
				return 1082340147 /* Float: 4.1f */, 1101581517 /* Float: 21.1f */, 0f;
			case 4:
				return -1060949197 /* Float: -6.1f */, 1101633946 /* Float: 21.2f */, 0f;
			case 5:
				return 1085485875 /* Float: 5.6f */, 1101266944 /* Float: 20.5f */, 0f;
			case 6:
				return -1058852045 /* Float: -7.1f */, 1101633946 /* Float: 21.2f */, 0f;
			case 7:
				return 1089889894 /* Float: 7.7f */, 1101266944 /* Float: 20.5f */, 0f;
			case 8:
				return 1050253722 /* Float: 0.3f */, 1103049523 /* Float: 23.9f */, 0f;
			case 9:
				return -1086324736 /* Float: -0.75f */, 1102976123 /* Float: 23.76f */, 0f;
			case 10:
				return 3f, 1102682522 /* Float: 23.2f */, 0f;
			case 11:
				return -1065143501 /* Float: -4.1f */, 1103154381 /* Float: 24.1f */, 0f;
			case 12:
				return 1086534451 /* Float: 6.1f */, 1103233024 /* Float: 24.25f */, 0f;
			case 13:
				return -1061997773 /* Float: -5.6f */, 1102446592 /* Float: 22.75f */, 0f;
			case 14:
				return 1088631603 /* Float: 7.1f */, 1103154381 /* Float: 24.1f */, 0f;
			case 15:
				return -1057593754 /* Float: -7.7f */, 1102499021 /* Float: 22.85f */, 0f;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1050253722 /* Float: 0.3f */, 1099641651 /* Float: 17.4f */, 0f;
			case 1:
				return -1089680179 /* Float: -0.55f */, 1099830395 /* Float: 17.76f */, 0f;
			case 2:
				return 1067030938 /* Float: 1.2f */, 1099746509 /* Float: 17.6f */, 0f;
			case 3:
				return -1079613850 /* Float: -1.3f */, 1100008653 /* Float: 18.1f */, 0f;
			case 4:
				return 1072064102 /* Float: 1.8f */, 1099536794 /* Float: 17.2f */, 0f;
			case 5:
				return -1075419546 /* Float: -1.8f */, 1099694080 /* Float: 17.5f */, 0f;
			case 6:
				return 1074161254 /* Float: 2.1f */, 1099536794 /* Float: 17.2f */, 0f;
			case 7:
				return -1071644672 /* Float: -2.5f */, 1099694080 /* Float: 17.5f */, 0f;
			case 8:
				return 1050253722 /* Float: 0.3f */, 1100690227 /* Float: 19.4f */, 0f;
			case 9:
				return -1086324736 /* Float: -0.75f */, 1100878971 /* Float: 19.76f */, 0f;
			case 10:
				return 1073070735 /* Float: 1.92f */, 1100795085 /* Float: 19.6f */, 0f;
			case 11:
				return -1076258406 /* Float: -1.7f */, 1101057229 /* Float: 20.1f */, 0f;
			case 12:
				return 1077097267 /* Float: 2.8f */, 1101109658 /* Float: 20.2f */, 0f;
			case 13:
				return -1070805811 /* Float: -2.7f */, 1100742656 /* Float: 19.5f */, 0f;
			case 14:
				return 1081291571 /* Float: 3.8f */, 1101109658 /* Float: 20.2f */, 0f;
			case 15:
				return -1065772646 /* Float: -3.9f */, 1100742656 /* Float: 19.5f */, 0f;
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

bool func_127(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_128(int iParam0)
{
	if (WEAPON::IS_WEAPON_PISTOL(iParam0))
	{
		return 5.531224E-24f;
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iParam0))
	{
		return -0.2143914f;
	}
	else if (WEAPON::IS_WEAPON_REPEATER(iParam0))
	{
		return -3.235899E+17f;
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iParam0))
	{
		return 0.0004077075f;
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iParam0))
	{
		return 4.54198E-08f;
	}
	else if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
	{
		return -2.239279E-05f;
	}
	return 0;
}

bool func_129(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

void func_130(var uParam0, float fParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && fParam1));
}

struct<2> func_131(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_132(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_143(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_133(var uParam0, var uParam1)
{
	return uParam0;
}

float func_134(int iParam0)
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

float func_135(int iParam0)
{
	if (GANG::NETWORK_GET_GANG_ID(iParam0) != Global_1295619.f_10 && !func_144())
	{
		return 4.279651E-16f;
	}
	return -18751.78f;
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_145(iParam0, bParam1));
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

bool func_137(int iParam0, bool bParam1)
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

bool func_138(int iParam0, bool bParam1)
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
	if (func_146(iParam0))
	{
		return true;
	}
	return !func_137(iParam0, 0);
}

bool func_139(int iParam0, bool bParam1)
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
	if (func_147(iParam0))
	{
		return false;
	}
	if (func_146(iParam0))
	{
		return false;
	}
	if (func_148(iParam0))
	{
		return true;
	}
	return func_149(iParam0);
}

int func_140(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_150(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_141(int iParam0, int iParam1)
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

int func_142(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_143(struct<2> Param0)
{
	int iVar0;

	if (!func_151(Param0))
	{
		return -1;
	}
	iVar0 = func_152(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

bool func_144()
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
	if (!func_151(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_145(int iParam0, bool bParam1)
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

bool func_146(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iParam0))
	{
		return true;
	}
	return false;
}

bool func_147(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

bool func_148(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iParam0))
	{
		return true;
	}
	return false;
}

bool func_149(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_153(iParam0);
		return false;
	}
	if (func_148(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 2)
		{
			func_154(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1295619.f_5, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 2);
}

bool func_150(struct<2> Param0, bool bParam2)
{
	if (!func_151(Param0))
	{
		return false;
	}
	func_155(bParam2);
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

bool func_151(struct<2> Param0)
{
	if (!func_156(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_157(Param0))
	{
		return false;
	}
	return true;
}

int func_152(struct<2> Param0)
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
	if (!func_150(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_150(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
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

void func_153(int iParam0)
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
	func_158(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_159(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1295619.f_17[iVar0])
		{
			func_153(iParam0);
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
						func_154(iVar3, iParam1, 0, 1, 0, 0);
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
			func_160(&Var6, uVar4);
		}
	}
}

void func_155(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_156(int iParam0)
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

int func_157(int iParam0)
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

void func_158(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_159(int iParam0, int iParam1, int iParam2)
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

void func_160(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_161(*uParam0);
}

void func_161(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

