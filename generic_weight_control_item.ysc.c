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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	uVar0 = ScriptParam_0.f_1;
	while (!func_1(0, 0) && !func_2())
	{
		func_3(&uVar0);
		BUILTIN::WAIT(0);
	}
	func_4(1);
	func_5();
}

bool func_1(bool bParam0, bool bParam1)
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

bool func_2()
{
	if (iLocal_16 == 9)
	{
		return true;
	}
	return false;
}

void func_3(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
	func_6();
	func_7(1, 0, 1, 0);
	switch (iLocal_16)
	{
		case 0:
			func_8(1);
			WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, true, false);
			PED::SET_PED_CONFIG_FLAG(Global_33, 249, true);
			PED::SET_PED_CONFIG_FLAG(Global_33, 334, true);
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_33))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_33, false, 0, false);
			}
			func_9(*uParam0);
			func_10(&uLocal_19, 1);
			func_11(1);
			break;
		case 1:
			if (func_12(&uLocal_19) > 1f)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_13(iLocal_17)))
				{
					if (func_7(0, 0, 0, 0))
					{
						func_14(*uParam0, 8);
					}
					func_11(2);
				}
			}
			break;
		case 2:
			if (!func_7(1, 1, 1, 1))
			{
				iLocal_22 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1.381965E-33f, Global_33, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				TASK::TASK_PLAY_ANIM(Global_33, func_13(iLocal_17), func_15(iLocal_17), 4f, -4f, -1, 0, 0f, false, 1, false, 0, false);
			}
			func_10(&uLocal_19, 1);
			func_11(3);
			break;
		case 3:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_17);
			}
			if (func_12(&uLocal_19) > 1075000115)
			{
				if (!func_7(1, 0, 0, 0))
				{
					if (!PED::IS_PED_RAGDOLL(Global_33))
					{
						PED::SET_PED_TO_RAGDOLL(Global_33, 0, 1, 0, false, false, 0);
					}
					PED::RESET_PED_RAGDOLL_TIMER(Global_33);
					CAM::DO_SCREEN_FADE_OUT(2500);
					PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(Global_33, "very_drunk");
					PED::_SET_PED_DRUNKNESS(Global_33, true, 0.6f);
					func_16(1050253722 /* Float: 0.3f */);
					func_10(&uLocal_19, 1);
					func_11(4);
				}
				else
				{
					func_14(*uParam0, iLocal_17);
				}
			}
			break;
		case 4:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_17);
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_33);
			}
			if (CAM::IS_SCREEN_FADED_OUT() && func_12(&uLocal_19) > 1069547520)
			{
				if (!func_7(1, 0, 0, 0))
				{
					func_10(&uLocal_19, 1);
					func_16(1022739087 /* Float: 0.03f */);
					func_11(5);
				}
				else
				{
					func_14(*uParam0, 8);
				}
				func_17(uParam0);
			}
			break;
		case 5:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_17);
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_33);
			}
			if (func_12(&uLocal_19) > 1069547520)
			{
				CAM::DO_SCREEN_FADE_IN(2500);
				func_11(6);
			}
			break;
		case 6:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_17);
			}
			else
			{
				PED::_SET_PED_GETUP_ANIMATION(Global_33, "NMBS_DRUNK_GETUPS", true);
			}
			if (func_12(&uLocal_19) > 1075000115)
			{
				if (!TASK::IS_PED_GETTING_UP(Global_33))
				{
					func_11(7);
				}
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_33);
			}
			break;
		case 7:
			if (((!func_7(1, 0, 0, 1) && !PED::IS_PED_FALLING(Global_33)) && !ENTITY::IS_ENTITY_IN_WATER(Global_33)) && !func_18(Global_33, 12))
			{
				TASK::TASK_PLAY_ANIM(Global_33, func_13(iLocal_18), func_15(iLocal_18), 2f, -2f, -1, 1.70447E-36f, 0f, false, 66048, false, 0, false);
			}
			if (iLocal_22 != 0)
			{
				EVENT::REMOVE_SHOCKING_EVENT(iLocal_22);
			}
			func_19(1);
			func_10(&uLocal_19, 1);
			func_11(8);
			break;
		case 8:
			if (func_12(&uLocal_19) > 1071644672)
			{
				PED::SET_PED_CONFIG_FLAG(Global_33, 249, false);
				PED::SET_PED_CONFIG_FLAG(Global_33, 334, false);
				func_11(9);
			}
			break;
		case 9:
			break;
	}
}

void func_4(bool bParam0)
{
	CAM::_STOP_GAMEPLAY_CAM_SHAKING_WITH_NAME("DRUNK_SHAKE", false);
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD("PlayerDrunk01");
	PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(Global_33);
	PED::_0x88A95BB640FC186F(Global_33);
	PED::_SET_PED_DRUNKNESS(Global_33, true, 0f);
	func_8(0);
	if (bParam0 && PED::GET_PED_CONFIG_FLAG(Global_33, 249, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_33, 249, false);
	}
	if (bParam0 && PED::GET_PED_CONFIG_FLAG(Global_33, 334, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_33, 334, false);
	}
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6()
{
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
	PED::SET_PED_RESET_FLAG(Global_1295619.f_3, 129, true);
	PED::SET_PED_RESET_FLAG(Global_1295619.f_3, 103, true);
}

bool func_7(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (((PED::IS_PED_DEAD_OR_DYING(Global_33, true) || PED::IS_PED_LASSOED(Global_33)) || PED::_GET_LASSOER_OF_PED(Global_33)) || CAM::HAS_LETTER_BOX())
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_33) && bParam0)
	{
		return true;
	}
	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33) && bParam1)
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(Global_33, 0) && bParam3)
	{
		return true;
	}
	if (((PED::IS_PED_SITTING(Global_33) || PED::GET_PED_CONFIG_FLAG(Global_33, 227, true)) || func_20(Global_33)) && bParam2)
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		return true;
	}
	return false;
}

void func_8(int iParam0)
{
	Global_1292081.f_13 = iParam0;
}

void func_9(int iParam0)
{
	if (PED::IS_PED_MALE(Global_33))
	{
		if (iParam0 == -644.0794f || iParam0 == -4.29454E-23f)
		{
			iLocal_17 = 4;
			iLocal_18 = 5;
			STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_17));
		}
		else
		{
			iLocal_17 = 6;
			iLocal_18 = 7;
			STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_17));
		}
	}
	else if (iParam0 == -644.0794f || iParam0 == -4.29454E-23f)
	{
		iLocal_17 = 0;
		iLocal_18 = 1;
		STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_17));
	}
	else
	{
		iLocal_17 = 2;
		iLocal_18 = 3;
		STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_17));
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1 || !func_21(uParam0))
	{
		func_22(uParam0);
	}
}

void func_11(int iParam0)
{
	iLocal_16 = iParam0;
}

float func_12(var uParam0)
{
	if (!func_21(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_23(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_mp@naturalist@player_potions@female@skinny";
		case 1:
			return "script_mp@naturalist@player_potions@female@skinny";
		case 2:
			return "script_mp@naturalist@player_potions@female@fat";
		case 3:
			return "script_mp@naturalist@player_potions@female@fat";
		case 4:
			return "script_mp@naturalist@player_potions@male@skinny";
		case 5:
			return "script_mp@naturalist@player_potions@male@skinny";
		case 6:
			return "script_mp@naturalist@player_potions@male@fat";
		case 7:
			return "script_mp@naturalist@player_potions@male@fat";
		default:
			break;
	}
	return "";
}

void func_14(var uParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(2500);
	}
	if (iParam1 != 8)
	{
		TASK::STOP_ANIM_TASK(Global_33, func_13(iParam1), func_15(iParam1), -4f);
	}
	func_17(&uParam0);
	func_11(7);
}

char* func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "passout_skinny_female";
		case 1:
			return "recover_skinny_upper_female";
		case 2:
			return "passout_fat_female";
		case 3:
			return "recover_fat_upper_female";
		case 4:
			return "passout_skinny_male";
		case 5:
			return "recover_skinny_upper_male";
		case 6:
			return "passout_fat_male";
		case 7:
			return "recover_fat_upper_male";
		case 8:
			return "";
		default:
			break;
	}
	return "";
}

void func_16(float fParam0)
{
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 1f);
	}
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX("PlayerDrunk01");
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("PlayerDrunk01");
	}
	PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(Global_33);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fParam0);
	GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerDrunk01", fParam0);
}

void func_17(var uParam0)
{
	float fVar0;

	fVar0 = func_25(13, 2);
	if (*uParam0 == -1.385362E+32f)
	{
		func_27(func_26(7.642884E+10f, 9.914248E-27f), 1);
		if (fVar0 < 1103626240)
		{
			func_28(1117126656 /* Float: 75f */, 1);
		}
		else if (fVar0 >= 1103626240 && fVar0 < 1112014848)
		{
			func_28(1112014848 /* Float: 50f */, 1);
		}
		else
		{
			func_28(1103626240 /* Float: 25f */, 1);
		}
	}
	else if (*uParam0 == -644.0794f)
	{
		func_27(func_26(7.642884E+10f, 6.203514E+20f), 1);
		if (fVar0 > 1117126656)
		{
			func_28(-1030356992 /* Float: -75f */, 1);
		}
		else if (fVar0 <= 1117126656 && fVar0 > 1112014848)
		{
			func_28(-1035468800 /* Float: -50f */, 1);
		}
		else
		{
			func_28(-1043857408 /* Float: -25f */, 1);
		}
	}
	else if (*uParam0 == -1.346123E+17f)
	{
		func_27(func_26(7.642884E+10f, 9.914248E-27f), 1);
		func_28(1120403456 /* Float: 100f */, 1);
	}
	else
	{
		func_27(func_26(7.642884E+10f, 6.203514E+20f), 1);
		func_28(-1027080192 /* Float: -100f */, 1);
	}
}

bool func_18(int iParam0, int iParam1)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, iParam1, false);
	return func_29(iVar0);
}

void func_19(bool bParam0)
{
	Global_1913565 = !bParam0;
	if (Global_1913565)
	{
		Global_1913565.f_1 = MISC::GET_GAME_TIMER();
	}
}

bool func_20(int iParam0)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	if (((PED::IS_PED_USING_SCENARIO_HASH(iParam0, 0.0258619f) || PED::IS_PED_USING_SCENARIO_HASH(iParam0, 9271496f)) || PED::IS_PED_USING_SCENARIO_HASH(iParam0, -1.799881f)) || PED::IS_PED_USING_SCENARIO_HASH(iParam0, -2.585946E-25f))
	{
		return true;
	}
	return false;
}

bool func_21(var uParam0)
{
	return func_30(*uParam0, 1);
}

void func_22(var uParam0)
{
	func_31(uParam0, 0f);
}

bool func_23(var uParam0)
{
	return func_30(*uParam0, 2);
}

float func_24()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

float func_25(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_32(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_26[iParam0];
		case 1:
			return Global_1956862.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	return -1f;
}

struct<2> func_26(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_27(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_28(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_25(13, 2);
	iVar1 = func_33(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_34(fVar0, 0f, 1120403456 /* Float: 100f */);
	iVar2 = func_33(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956862.f_1431.f_107 = func_35();
		func_36(&(Global_1956862.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_37(13, fVar0, 2);
	Global_1956862.f_1431.f_99 = iParam1;
}

bool func_29(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

bool func_30(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_31(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_38(uParam0, 1);
	func_39(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_32(int iParam0)
{
	return func_41(func_40(iParam0));
}

int func_33(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 1120403456);
	return BUILTIN::ROUND(((fVar0 / 1120403456) * BUILTIN::TO_FLOAT(10)));
}

float func_34(float fParam0, float fParam1, float fParam2)
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

var func_35()
{
	return Global_1902565;
}

void func_36(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_42(*uParam0);
	iVar1 = func_43(*uParam0);
	iVar2 = func_44(*uParam0);
	iVar3 = func_45(*uParam0);
	iVar4 = func_46(*uParam0);
	iVar5 = func_47(*uParam0);
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
	iVar6 = func_48(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_48(iVar1, iVar0);
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
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_37(int iParam0, float fParam1, int iParam2)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_32(2);
	}
	func_51(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1295619.f_3))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295619.f_3, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_40(int iParam0)
{
	return func_52(&(Global_1956862.f_1565), iParam0, 1);
}

int func_41(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_53(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_43(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_44(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_45(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_46(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_47(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_48(int iParam0, int iParam1)
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

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, iParam6);
	func_55(uParam0, iParam5);
	func_56(uParam0, iParam4);
	func_57(uParam0, iParam3);
	func_58(uParam0, iParam2);
	func_59(uParam0, iParam1);
}

bool func_50(int iParam0)
{
	if (func_60(iParam0))
	{
		return true;
	}
	else if (func_61(iParam0))
	{
		return true;
	}
	return false;
}

void func_51(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_32(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

bool func_52(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_53(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_54(var uParam0, int iParam1)
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

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && 1.128475E-36f));
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_56(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_43(*uParam0);
	iVar1 = func_42(*uParam0);
	if (iParam1 < 1 || iParam1 > func_48(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_58(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_60(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_61(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

