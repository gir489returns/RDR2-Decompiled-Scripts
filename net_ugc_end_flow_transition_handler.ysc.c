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
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 4;
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
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	bool bScriptParam_0 = false;
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1.124895E-14f;
	fLocal_28 = 1f;
	fLocal_29 = 1f;
	if (bScriptParam_0)
	{
	}
	func_1();
	while (!func_2(1, 1))
	{
		func_3(1);
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, true);
		PAD::DISABLE_CONTROL_ACTION(0, -2.885348E+21f, true);
		func_4();
		func_5();
		switch (iLocal_30)
		{
			case 0:
				if (Global_1051192)
				{
					if (((!func_6() || Global_1572887.f_260.f_21 != 0) || !bScriptParam_0) || Global_1572887.f_72.f_13 == 1)
					{
						if (!func_7())
						{
							GRAPHICS::ANIMPOSTFX_STOP_ALL();
						}
						HUD::_ENABLE_HUD_CONTEXT(3.870794E-14f);
						func_8(0);
						func_9(1);
					}
					else
					{
						if (func_6())
						{
						}
						if (bScriptParam_0)
						{
						}
						if (Global_1572887.f_72.f_13 == 1)
						{
						}
						if (Global_1572887.f_260.f_21 != 0)
						{
						}
						func_8(1);
					}
				}
				break;
			case 1:
				if (func_6())
				{
					func_9(2);
				}
				break;
			case 2:
				if (func_10() && !func_11())
				{
					if (func_12(Global_3407872.f_2338, 4))
					{
						func_9(3);
					}
				}
				else
				{
					func_13(1, 1);
					if (func_12(Global_1051189, 64))
					{
						func_14(0);
					}
					else if (func_15(255) == 4)
					{
					}
					else
					{
						func_16(1, 1);
					}
					func_9(3);
				}
				break;
			case 3:
				if (func_15(255) != 1)
				{
				}
				else
				{
					func_9(4);
				}
				break;
			case 4:
				if (!func_7())
				{
					func_17(&(Global_3407872.f_2338), 1);
					func_9(5);
				}
				break;
			case 5:
				if (func_11() || func_12(Global_3407872.f_2338, 2))
				{
					GRAPHICS::RESET_PAUSED_RENDERPHASES();
					func_18();
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(0);
					}
					GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
					AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
					if (func_19(32768))
					{
						func_20(32768);
						AUDIO::SET_AUDIO_FLAG("OpenWorldMusicDisabled", false);
					}
					func_21(&uLocal_31, 1, 0);
					func_9(6);
				}
				break;
			case 6:
				if (func_22(&uLocal_31, 1, 0) > 1500)
				{
					func_9(7);
					GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("RespawnMissionCheckpoint");
				}
				break;
			case 7:
				AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
				if (!func_23())
				{
					func_24();
					func_25();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_24();
	func_25();
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::_0xB711EB4BC8D06013();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
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

void func_3(bool bParam0)
{
	if (!bParam0)
	{
		func_26(21);
	}
	else
	{
		func_14(21);
	}
}

void func_4()
{
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(7.215231E-38f);
	}
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-8.851064E-21f) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-8.851064E-21f))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(-8.851064E-21f);
	}
	if (func_27())
	{
		func_28();
	}
	if (func_29())
	{
		func_30();
	}
	func_31();
}

void func_5()
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (iLocal_33 != 0)
	{
		return;
	}
	if (!func_10())
	{
		iLocal_33 = 2;
		return;
	}
	if (func_23())
	{
		iLocal_33 = 1;
		return;
	}
	func_32();
	if (iLocal_30 <= 1)
	{
		return;
	}
	iVar0 = func_33();
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 1)
	{
		uVar1 = -1;
		func_34(&Global_3407872, &uVar1);
		iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-3.208557E-15f, &uVar1, 1, 14335);
		if (SCRIPTS::DOES_THREAD_EXIST(iVar2))
		{
			iLocal_33 = 1;
			if (func_35())
			{
				func_17(&(Global_3407872.f_2338), 8);
			}
			else
			{
				func_36(&(Global_3407872.f_2338), 8);
			}
		}
		else
		{
			iLocal_33 = 2;
		}
	}
}

bool func_6()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_5;
}

bool func_7()
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

void func_8(bool bParam0)
{
	if (bParam0)
	{
		func_37(16384);
	}
	else
	{
		func_38(16384);
	}
}

void func_9(int iParam0)
{
	iLocal_30 = iParam0;
}

bool func_10()
{
	return Global_3407872.f_65 != 0;
}

bool func_11()
{
	if (iLocal_33 == 0)
	{
		return false;
	}
	return !func_23();
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_13(bool bParam0, int iParam1)
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
		func_14(62);
		Global_1102813.f_3798 = iParam1;
	}
	else
	{
		func_26(62);
	}
}

int func_14(int iParam0)
{
	if (func_39(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
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

void func_16(bool bParam0, bool bParam1)
{
	if (func_15(255) == 4)
	{
		return;
	}
	if (func_40(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_26(0);
	}
	else
	{
		if (bParam1)
		{
			func_41(0, 0, 0, 1);
		}
		func_14(0);
		func_42(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_43(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_44(Global_1102813.f_3839, 36);
	func_45(Global_1102813.f_3878, 36);
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_18()
{
	Global_1940072.f_105 = -1;
	Global_1940072.f_105.f_1 = 0;
}

bool func_19(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_20(int iParam0)
{
	Global_262151 = (Global_262151 - (Global_262151 && iParam0));
}

void func_21(var uParam0, bool bParam1, bool bParam2)
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

int func_22(var uParam0, bool bParam1, bool bParam2)
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

bool func_23()
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-3.208557E-15f) > 0;
}

void func_24()
{
	func_46();
	Global_1051193 = 0;
	func_3(0);
	func_47(0);
	func_48(0);
	AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
	func_49();
}

void func_25()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_26(int iParam0)
{
	if (func_50(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_27()
{
	return Global_1896762.f_352;
}

void func_28()
{
	func_51(0);
}

bool func_29()
{
	return Global_1940239.f_2;
}

void func_30()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(NaNf) > 0)
	{
		Global_1940239.f_13 = 1;
	}
}

void func_31()
{
	if (Global_1940072.f_111)
	{
		Global_1940072.f_111 = 0;
	}
	HUD::_DISABLE_HUD_CONTEXT(1.275901E-37f);
}

void func_32()
{
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(-3.208557E-15f);
}

int func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-3.208557E-15f))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_3407872[iVar2 /*2*/])))
		{
		}
		else
		{
			iVar1++;
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_3407872[iVar2 /*2*/])))
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_3407872[iVar2 /*2*/]));
				if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
				{
				}
				else
				{
					iVar0++;
				}
			}
		}
		iVar2++;
	}
	if (iVar0 >= iVar1)
	{
		return 1;
	}
	if (!func_52(&uLocal_34))
	{
		func_21(&uLocal_34, 1, 0);
	}
	if (!func_35())
	{
		return 0;
	}
	return 1;
}

void func_34(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(uParam0[iVar0 /*2*/]))
		{
		}
		else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam0[iVar0 /*2*/]))
		{
		}
		else
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam0[iVar0 /*2*/]);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
			{
			}
			else
			{
				iVar3 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar2);
				if (iVar1 == -1 || iVar3 < iVar1)
				{
					iVar1 = iVar3;
				}
			}
		}
		iVar0++;
	}
	*uParam1 = iVar1;
}

bool func_35()
{
	if (!func_52(&uLocal_34))
	{
		return false;
	}
	if (func_22(&uLocal_34, 1, 0) <= 20000)
	{
		return false;
	}
	return true;
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_37(int iParam0)
{
	func_53(&(Global_1072759.f_28644.f_23.f_1), iParam0);
}

void func_38(int iParam0)
{
	if (func_54(iParam0))
	{
		func_55(&(Global_1072759.f_28644.f_23.f_1), iParam0);
	}
}

bool func_39(var uParam0, int iParam1, int iParam2)
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

bool func_40(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_41(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_56(iParam0);
	if (!func_57(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_58(128) && !func_59(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_60() == 4)
	{
		func_26(18);
	}
	func_61(1024);
}

void func_42(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_43(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_44(struct<29> Param0, var uParam29, int iParam30)
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

void func_45(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_46()
{
	Global_1051189 = 0;
}

void func_47(bool bParam0)
{
	if (!bParam0)
	{
		func_26(19);
	}
	else
	{
		func_14(19);
	}
}

void func_48(bool bParam0)
{
	if (!bParam0)
	{
		func_26(18);
	}
	else
	{
		func_14(18);
	}
}

void func_49()
{
	struct<68> Var0;

	Var0 = 32;
	Var0.f_67 = 1;
	Var0.f_67.f_1.f_25 = 4;
	Var0.f_67.f_1.f_25.f_1.f_11 = 2;
	Var0.f_67.f_1.f_25.f_1.f_11.f_1.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_11 = 2;
	Var0.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_11 = 2;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_346 = 20;
	Var0.f_67.f_1.f_346.f_1 = -1;
	Var0.f_67.f_1.f_346.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_927 = 20;
	Var0.f_67.f_1.f_927.f_1 = -1;
	Var0.f_67.f_1.f_927.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228 = 10;
	Var0.f_67.f_1.f_1228.f_1 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379 = 10;
	Var0.f_67.f_1.f_1379.f_1 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1530 = 1;
	Var0.f_67.f_1.f_1530.f_1 = -1;
	Var0.f_67.f_1.f_1530.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1530.f_1.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1546 = 5;
	Var0.f_67.f_1.f_1546.f_1 = -1;
	Var0.f_67.f_1.f_1546.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15 = -1;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1622 = 8;
	Var0.f_67.f_1.f_1648 = 2;
	Var0.f_67.f_1.f_1652 = 4;
	Var0.f_67.f_1.f_1669 = 20;
	Var0.f_67.f_1.f_1830 = 20;
	Var0.f_67.f_1.f_1911 = 10;
	Var0.f_67.f_1.f_1952 = 1;
	Var0.f_67.f_1.f_1957 = 10;
	Var0.f_67.f_1.f_1998 = 5;
	Var0.f_67.f_1.f_2019 = 3;
	Var0.f_67.f_1.f_2044 = 3;
	Var0.f_67.f_1.f_2057 = 8;
	Var0.f_67.f_1.f_2057.f_1.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	MISC::COPY_SCRIPT_STRUCT(&Global_3407872, &Var0, 2339);
}

bool func_50(var uParam0, int iParam1, int iParam2)
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

void func_51(bool bParam0)
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

bool func_52(var uParam0)
{
	return uParam0->f_1;
}

void func_53(var uParam0, int iParam1)
{
	func_62(uParam0, iParam1);
}

bool func_54(int iParam0)
{
	return func_63(Global_1072759.f_28644.f_23.f_1, iParam0);
}

void func_55(var uParam0, int iParam1)
{
	func_64(uParam0, iParam1);
}

void func_56(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_57(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_58(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_59(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

int func_60()
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

void func_61(int iParam0)
{
	if (func_65(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

void func_62(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_64(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_65(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

