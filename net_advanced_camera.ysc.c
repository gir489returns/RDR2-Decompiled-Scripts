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
	struct<62> Local_16 = { 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
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
	bool bVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Local_16, 0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = true;
	while (bVar0)
	{
		if (func_2(128) || func_3(&Local_16))
		{
			bVar0 = false;
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (func_4() || func_5())
			{
				if (!func_2(8192))
				{
					if (!func_6(&Local_16, 4))
					{
						func_7(Local_16.f_28);
					}
					func_8(0);
					func_9(8192);
				}
			}
		}
		else if (func_4() || func_5())
		{
			if (func_2(8192))
			{
				if (!func_6(&Local_16, 4))
				{
					func_10(Local_16.f_28);
				}
				func_11(0);
				func_12(8192);
			}
		}
		func_13(&Local_16);
		func_14();
		func_15();
		func_16(&Local_16);
		switch (func_17(&Local_16))
		{
			case 0:
				func_18();
				func_19();
				func_20(&Local_16);
				func_21();
				func_22();
				func_23();
				func_9(256);
				func_24(&Local_16);
				func_25(&Local_16, 1);
				break;
			case 1:
				func_19();
				if (func_26(&Local_16))
				{
					func_24(&Local_16);
					func_25(&Local_16, 2);
				}
				break;
			case 2:
				func_19();
				if (func_27(&Local_16))
				{
					func_28(948, 0);
					func_29(&Local_16);
					func_30(&Local_16);
					func_31(&Local_16, 0);
					func_25(&Local_16, 3);
				}
				break;
			case 3:
				if (!func_32())
				{
					func_33(&Local_16);
				}
				func_34(&(Local_16.f_61));
				func_35(&(Local_16.f_61));
				func_36(&Local_16);
				func_37(&Local_16);
				func_38(&Local_16);
				if (func_39(Local_16.f_5[12], 1))
				{
					func_40(20);
					func_25(&Local_16, 4);
				}
				if (func_41(&Local_16))
				{
					if (func_42(&Local_16))
					{
						func_43(&Local_16, 0);
					}
				}
				break;
			case 4:
				func_1(&Local_16, 1);
				func_25(&Local_16, 5);
				break;
			case 5:
				if (func_44(Global_33, 0, 1, 0) != 5.402792E-27f)
				{
					func_12(256);
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_16, 0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, bool bParam1)
{
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
	PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), false);
	GRAPHICS::_0x9F6D859C80708B26(false, true);
	if (func_45(uParam0->f_5[0]))
	{
		HUD::_UI_PROMPT_REMOVE_GROUP(func_46(uParam0->f_5[0]), -1.31722E-14f);
	}
	if (func_45(uParam0->f_5[12]))
	{
		HUD::_UI_PROMPT_REMOVE_GROUP(func_46(uParam0->f_5[12]), -1.31722E-14f);
	}
	func_47(uParam0);
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
	}
	func_23();
	func_48(uParam0);
	func_49(uParam0);
	if (func_50(Global_33, 0))
	{
		Global_1958670 = 1;
	}
	func_7(uParam0->f_28);
	func_51(uParam0->f_28);
	func_8(2);
	func_52(2);
	func_8(0);
	func_52(0);
	func_53(1);
	func_54(&(uParam0->f_5));
	func_55(uParam0);
	func_56(&(uParam0->f_61));
	func_57();
	if (bParam1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Global_33, 1, 1, 0, 0);
	}
}

bool func_2(int iParam0)
{
	return func_58(Global_1300338, iParam0);
}

bool func_3(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (Global_1958670)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		Global_1958670 = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_1120482[iVar0 /*4533*/].f_14 == 1)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return true;
		}
		iVar0++;
	}
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING(Global_33) && !PED::IS_PED_ON_MOUNT(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return true;
		}
		if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return true;
		}
		if (PED::IS_PED_LASSOED(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return true;
		}
		if (PED::_IS_PED_CLIMBING_LADDER(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return true;
		}
		if (PED::IS_PED_IN_MELEE_COMBAT(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return true;
		}
		if (PED::IS_PED_FALLING(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return true;
		}
		if (PED::IS_PED_RAGDOLL(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return true;
		}
	}
	if (!func_59(5.402792E-27f, 1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		Global_1940186.f_38 = -3.273909E-18f;
		return true;
	}
	if (!func_60(Global_33, 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (func_61(0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (Global_1956784.f_1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (func_62())
	{
		if ((func_63(16) || func_63(37)) || func_64(Global_1915643.f_20241.f_1))
		{
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return true;
		}
	}
	if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, ENTITY::GET_ENTITY_COORDS(Global_33, true, false), 10f, 256) > 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (func_65())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_33, true)))
	{
		func_66("CAM_VEH", 10000, 0, 0, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (Global_1940186.f_52)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return true;
	}
	if (func_44(Global_33, 0, 1, 0) != 5.402792E-27f)
	{
		switch (func_67(uParam0))
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				break;
		}
	}
	return false;
}

bool func_4()
{
	return func_2(32);
}

bool func_5()
{
	return func_2(64);
}

bool func_6(var uParam0, int iParam1)
{
	return func_58(uParam0->f_55, iParam1);
}

void func_7(int iParam0)
{
	func_69(func_68(iParam0));
}

void func_8(int iParam0)
{
	func_69(func_70(iParam0));
}

void func_9(int iParam0)
{
	func_71(&Global_1300338, iParam0);
}

void func_10(int iParam0)
{
	func_72(func_68(iParam0));
}

void func_11(int iParam0)
{
	func_72(func_70(iParam0));
}

void func_12(int iParam0)
{
	func_73(&Global_1300338, iParam0);
}

void func_13(var uParam0)
{
	if (func_17(uParam0) >= 0 && func_17(uParam0) <= 3)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (func_74(PLAYER::PLAYER_ID(), 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
			}
		}
	}
	func_75();
	switch (func_67(uParam0))
	{
		case 0:
			PAD::DISABLE_CONTROL_ACTION(0, 4.801259E-10f, false);
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
			PAD::DISABLE_CONTROL_ACTION(0, NaNf, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
			PED::SET_PED_RESET_FLAG(Global_33, 21, true);
			if (func_76(uParam0->f_5[7], 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -4.852722E+27f, false);
			}
			else if (func_76(uParam0->f_5[8], 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -0.5812973f, false);
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
			PAD::DISABLE_CONTROL_ACTION(0, NaNf, false);
			PAD::DISABLE_CONTROL_ACTION(0, -3.868029E+16f, false);
			PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
			PAD::DISABLE_CONTROL_ACTION(0, 7.307677E-28f, false);
			PAD::DISABLE_CONTROL_ACTION(0, 0.005796425f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.243347E+30f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1.249449E-32f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1.870658E-37f, false);
			break;
	}
	if (func_67(uParam0) != 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 9.155838E-30f, false);
		func_77(0);
		PAD::DISABLE_CONTROL_ACTION(0, -4.640839E+09f, false);
	}
}

void func_14()
{
	func_78(2);
	func_78(4);
	func_78(8);
	func_78(16);
	func_78(32);
	func_78(32768);
	func_78(65536);
	func_78(1048576);
	func_78(128);
	func_78(256);
	func_78(512);
	func_78(1024);
	func_78(2048);
	func_78(1);
	func_78(4096);
	func_78(16384);
}

void func_15()
{
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(12);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(15);
}

void func_16(var uParam0)
{
	int iVar0;

	if (!func_6(uParam0, 131072))
	{
		iVar0 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION();
		switch (iVar0)
		{
			case 1:
				break;
			case 2:
				break;
			case 0:
				uParam0->f_25 = func_79();
				uParam0->f_26 = func_80();
				func_81(uParam0, 1);
				func_82(uParam0, 131072);
				func_83(uParam0);
				break;
		}
	}
}

int func_17(var uParam0)
{
	return uParam0->f_62;
}

void func_18()
{
	HUD::TEXT_BLOCK_REQUEST(func_84(2));
	STREAMING::REQUEST_ANIM_DICT(func_84(0));
	STREAMING::REQUEST_CLIP_SET(func_84(1));
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(func_70(0));
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(func_70(1));
}

void func_19()
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

void func_20(var uParam0)
{
	uParam0->f_27 = 1f;
	uParam0->f_56 = -1;
	uParam0->f_57 = -1;
	uParam0->f_33 = 1;
	uParam0->f_73 = 0;
	GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS();
}

void func_21()
{
	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
	}
	if (PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
	}
}

void func_22()
{
	func_57();
	Global_1300338.f_1 = ITEMSET::CREATE_ITEMSET(true);
}

void func_23()
{
	func_12(1);
	func_12(16);
	func_12(32);
	func_12(64);
	func_12(256);
	func_12(128);
}

void func_24(var uParam0)
{
	uParam0->f_54 = MISC::GET_GAME_TIMER();
}

void func_25(var uParam0, int iParam1)
{
	uParam0->f_62 = iParam1;
}

bool func_26(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (GRAPHICS::_ANIMPOSTFX_HAS_LOADED(func_70(0)))
	{
		iVar0 = 0;
	}
	if (GRAPHICS::_ANIMPOSTFX_HAS_LOADED(func_70(1)))
	{
		iVar0 = 0;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED(func_84(2)))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(func_84(1)))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_84(0)))
	{
		iVar0 = 0;
	}
	if (!AUDIO::PREPARE_SOUNDSET(func_84(6), false))
	{
		if (func_85(uParam0) > 7000)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 <= (14 - 1))
	{
		iVar1 = iVar0;
		if (!func_86(&(uParam0->f_5[iVar1]), iVar1))
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return iVar2;
}

void func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_87(iParam0, &iVar0, &iVar1);
	if (!func_88(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_89(iVar0, iVar1);
}

void func_29(var uParam0)
{
	uParam0->f_29 = func_90(uParam0->f_29, 0);
	uParam0->f_30 = func_90(uParam0->f_28, 1);
	func_91(uParam0->f_29);
	func_91(uParam0->f_30);
}

void func_30(var uParam0)
{
	uParam0->f_25 = func_79();
	uParam0->f_26 = func_80();
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "photoModeLabel0", " ");
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "photoModeLabel1", " ");
	func_83(uParam0);
}

void func_31(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam1)
	{
		case 0:
			func_53(0);
			iVar0 = 0;
			while (iVar0 <= (14 - 1))
			{
				iVar1 = iVar0;
				iVar2 = func_92(iVar1);
				if (iVar2 == 4 || iVar2 == 0)
				{
					if (iVar1 == 3 && (!func_93(uParam0) || func_94(Global_33)))
					{
						func_95(uParam0->f_5[iVar1], 0, 1, 1);
						func_82(uParam0, 32);
						func_96(uParam0->f_5[iVar1], 1, 1);
					}
					else
					{
						func_95(uParam0->f_5[iVar1], 1, 1, 1);
						func_96(uParam0->f_5[iVar1], 1, 1);
						Jump @210; //curOff = 178
						func_95(uParam0->f_5[iVar1], 0, 1, 1);
						func_96(uParam0->f_5[iVar1], 0, 1);
					}
					iVar0++;
					if (func_44(Global_33, 0, 1, 0) != 5.402792E-27f)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_33, 5.402792E-27f, true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
					}
					Jump @819; //curOff = 264
					iVar0 = 0;
					while (iVar0 <= (14 - 1))
					{
						iVar1 = iVar0;
						iVar2 = func_92(iVar1);
						if (iVar2 == 3 || iVar2 == 1)
						{
							if (iVar1 == 6 || iVar1 == 8)
							{
								func_95(uParam0->f_5[iVar1], 0, 1, 1);
								func_96(uParam0->f_5[iVar1], 0, 1);
							}
							else
							{
								func_95(uParam0->f_5[iVar1], 1, 1, 1);
								func_96(uParam0->f_5[iVar1], 1, 1);
							}
						}
						else
						{
							func_95(uParam0->f_5[iVar1], 0, 1, 1);
							func_96(uParam0->f_5[iVar1], 0, 1);
						}
						iVar0++;
					}
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, 5.402792E-27f, true, 0, false, false);
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
					func_97(uParam0);
					func_98(uParam0);
					Jump @819; //curOff = 467
					func_11(1);
					iVar0 = 0;
					while (iVar0 <= (14 - 1))
					{
						iVar1 = iVar0;
						iVar2 = func_92(iVar1);
						if (iVar2 == 3 || iVar2 == 2)
						{
							if (iVar1 == 10 || iVar1 == 9)
							{
								switch (func_99(uParam0))
								{
									case 0:
										func_95(uParam0->f_5[iVar1], 1, 1, 1);
										func_96(uParam0->f_5[iVar1], 1, 1);
										break;
									case 1:
										func_95(uParam0->f_5[iVar1], 0, 1, 1);
										func_96(uParam0->f_5[iVar1], 0, 1);
										break;
								}
							}
							else if (iVar1 == 5 || iVar1 == 4)
							{
								switch (func_99(uParam0))
								{
									case 0:
										func_95(uParam0->f_5[iVar1], 0, 1, 1);
										func_96(uParam0->f_5[iVar1], 0, 1);
										break;
									case 1:
										func_95(uParam0->f_5[iVar1], 1, 1, 1);
										func_96(uParam0->f_5[iVar1], 1, 1);
										break;
								}
							}
							else
							{
								func_95(uParam0->f_5[iVar1], 1, 1, 1);
								func_96(uParam0->f_5[iVar1], 1, 1);
							}
						}
						else
						{
							func_95(uParam0->f_5[iVar1], 0, 1, 1);
							func_96(uParam0->f_5[iVar1], 0, 1);
						}
						iVar0++;
					}
					func_97(uParam0);
					func_98(uParam0);
				}
			}
			default:
				break;
	}
}

bool func_32()
{
	return Global_1896762.f_352;
}

void func_33(var uParam0)
{
	if (func_6(uParam0, 16))
	{
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(0.0001674673f);
	}
	switch (func_67(uParam0))
	{
		case 0:
			PAD::_SET_CONTROL_CONTEXT(4, 1.432366E+15f);
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1.31722E-14f, func_84(5), 1, 0, 0, 0);
			if (func_100(func_70(1)) || func_100(func_70(0)))
			{
				return;
			}
			func_101(uParam0);
			func_102(uParam0);
			if ((func_39(uParam0->f_5[3], 1) && func_6(uParam0, 65536)) && func_93(uParam0))
			{
				func_103(uParam0, 2);
				return;
			}
			if (func_39(uParam0->f_5[2], 1))
			{
				func_103(uParam0, 1);
				return;
			}
			if (func_39(uParam0->f_5[1], 1))
			{
				func_104();
			}
			break;
		case 1:
			PAD::_SET_CONTROL_CONTEXT(4, 1.432366E+15f);
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1.31722E-14f, func_84(3), 1, 0, 0, 0);
			func_105(uParam0);
			break;
		case 2:
			PAD::_SET_CONTROL_CONTEXT(4, 1.432366E+15f);
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1.31722E-14f, func_84(4), 1, 0, 0, 0);
			CAM::_0x3C8F74E8FE751614();
			func_106(uParam0);
			break;
	}
}

void func_34(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || func_58(Global_1300338, 16))
	{
		func_107(uParam0);
	}
}

void func_35(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || func_58(Global_1300338, 16))
	{
		func_108();
		if (!ITEMSET::IS_ITEMSET_VALID(*uParam0) || ITEMSET::GET_ITEMSET_SIZE(*uParam0) <= 0)
		{
			return;
		}
		func_109(uParam0);
	}
	if (func_58(Global_1300338, 16))
	{
		func_73(&Global_1300338, 16);
	}
}

void func_36(var uParam0)
{
	int iVar0;
	bool bVar1;

	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_70(0)))
	{
		if (func_110(uParam0) != 1 && func_110(uParam0) != 4)
		{
			func_111(uParam0, 4);
		}
	}
	else if (func_2(512) && func_110(uParam0) != 3)
	{
		func_112();
		func_111(uParam0, 3);
	}
	func_113(&iVar0);
	bVar1 = false;
	switch (func_110(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_114() > 0)
			{
				bVar1 = true;
			}
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && func_115(iVar0)) && func_116(iVar0)) && !func_117(iVar0, 1))
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_118();
				func_111(uParam0, 2);
			}
			break;
		case 2:
			if (func_114() <= 0)
			{
				if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || func_117(iVar0, 1)) || (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_119(iVar0)))
				{
					func_111(uParam0, 4);
				}
			}
			break;
		case 3:
			if (!func_2(512))
			{
				if (func_114() > 0)
				{
					bVar1 = true;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && func_115(iVar0)) && func_116(iVar0)) && !func_117(iVar0, 1))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					func_118();
					func_111(uParam0, 2);
				}
				else
				{
					func_111(uParam0, 4);
				}
			}
			break;
		case 4:
			func_120();
			func_111(uParam0, 1);
			break;
	}
}

void func_37(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	if (func_113(&iVar0))
	{
		if (func_117(iVar0, 1))
		{
			if (!func_6(uParam0, 2097152))
			{
				bVar1 = true;
				func_82(uParam0, 2097152);
			}
		}
		else if (func_6(uParam0, 2097152))
		{
			bVar1 = true;
			func_81(uParam0, 2097152);
		}
	}
	else if (func_117(iVar0, 1))
	{
		bVar1 = true;
		func_81(uParam0, 2097152);
	}
	if (bVar1)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::GET_PLAYER_INDEX(), 30, 2, func_6(uParam0, 2097152));
	}
}

void func_38(var uParam0)
{
	if (func_6(uParam0, 262144))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 3.87631E-31f))
		{
			UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(uParam0->f_20);
			func_81(uParam0, 1);
			func_81(uParam0, 262144);
		}
	}
}

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

int func_40(int iParam0)
{
	if (AUDIO::PREPARE_SOUND_WITH_ENTITY(func_84(iParam0), Global_33, func_84(6), -2))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(func_84(iParam0), Global_33, func_84(6), false, 0, 1);
		return 1;
	}
	return 0;
}

bool func_41(var uParam0)
{
	if (uParam0->f_65 != 2 && uParam0->f_65 != 1)
	{
		return false;
	}
	return uParam0->f_2;
}

bool func_42(var uParam0)
{
	struct<8> Var0;
	bool bVar19;
	int iVar20;

	if (GRAPHICS::IS_PHOTO_FRAME())
	{
		func_122(0);
		func_82(uParam0, 2.350989E-38f);
	}
	else if (func_6(uParam0, 2.350989E-38f))
	{
		func_81(uParam0, 2.350989E-38f);
		func_123(0);
	}
	switch (uParam0->f_63)
	{
		case 0:
			if (uParam0->f_25 >= uParam0->f_26 && !Global_1958667)
			{
				if (uParam0->f_20 == 0)
				{
					Var0.f_2 = 0;
					Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
					Var0.f_7.f_3 = 0;
					uParam0->f_20 = func_124(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
					func_125(uParam0, 0);
					func_82(uParam0, 262144);
					return true;
				}
				func_82(uParam0, 1048576);
				func_125(uParam0, 0);
				func_82(uParam0, 262144);
			}
			if (!Global_1958667 && !func_6(uParam0, 1048576))
			{
				if (CAM::IS_GAMEPLAY_CAM_SHAKING())
				{
					CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
				}
				GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
				if (GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO())
				{
					func_9(16);
					func_11(2);
					func_126(uParam0, 1);
				}
			}
			else
			{
				func_9(16);
				func_11(2);
				func_126(uParam0, 1);
			}
			break;
		case 1:
			bVar19 = false;
			if (!Global_1958667 && !func_6(uParam0, 1048576))
			{
				iVar20 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
				switch (iVar20)
				{
					case 1:
						break;
					case 0:
						GRAPHICS::_0x0D5B19C34068FEE7(1);
						if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0))
						{
							func_125(uParam0, 1);
							bVar19 = true;
						}
						break;
					case 2:
						func_125(uParam0, 0);
						bVar19 = true;
						break;
				}
			}
			else
			{
				func_125(uParam0, 0);
				bVar19 = true;
			}
			if (bVar19)
			{
				func_126(uParam0, 2);
			}
			break;
		case 2:
			if (func_100(func_70(2)))
			{
				return false;
			}
			if (AUDIO::PREPARE_SOUND_WITH_ENTITY(func_84(7), Global_33, func_84(6), -2))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(func_84(7), Global_33, func_84(6), false, 0, 0);
			}
			func_127();
			func_81(uParam0, 1048576);
			func_126(uParam0, 0);
			return true;
	}
	return false;
}

void func_43(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_2)
	{
		uParam0->f_2 = iParam1;
	}
}

int func_44(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_45(int iParam0)
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

int func_46(var uParam0)
{
	int iVar0;

	iVar0 = func_121(uParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return Global_1951897[iVar0 /*23*/].f_3;
}

void func_47(var uParam0)
{
	if (uParam0->f_69 == 1)
	{
		SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_71, 0);
	}
	uParam0->f_69 = 0;
}

void func_48(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_23, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, " ");
}

void func_49(var uParam0)
{
	func_128(&(uParam0->f_56));
	func_128(&(uParam0->f_57));
}

bool func_50(int iParam0, bool bParam1)
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

void func_51(int iParam0)
{
	func_129(func_68(iParam0));
}

void func_52(int iParam0)
{
	func_129(func_70(iParam0));
}

void func_53(int iParam0)
{
	func_130(func_70(iParam0));
}

void func_54(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_131(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

void func_55(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}
	func_132(uParam0);
	func_49(uParam0);
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	AUDIO::_RELEASE_SOUNDSET(func_84(6));
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
	STREAMING::REMOVE_CLIP_SET(func_84(1));
	STREAMING::REMOVE_ANIM_DICT(func_84(0));
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, 0);
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	func_133(1);
	HUD::_TEXT_BLOCK_DELETE(func_84(2));
}

void func_56(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}
}

void func_57()
{
	if (ITEMSET::IS_ITEMSET_VALID(Global_1300338.f_1))
	{
		ITEMSET::_CLEAR_ITEMSET(Global_1300338.f_1);
		ITEMSET::DESTROY_ITEMSET(Global_1300338.f_1);
	}
}

bool func_58(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_59(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_134(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_135(bParam0);
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
			if (!func_136(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_137(bParam0))
			{
				return true;
			}
			break;
	}
	return func_138(bParam0, 0, 0, 0) >= iParam1;
}

bool func_60(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_58(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_58(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_58(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_61(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_62()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

int func_63(int iParam0)
{
	if (func_62())
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	int iVar0;

	if (!func_139(iParam0))
	{
		return 0;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return Global_1940239.f_2;
}

int func_66(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_67(var uParam0)
{
	return uParam0->f_65;
}

char* func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "No_PostFX_Applied";
		case 1:
			return "PhotoMode_FilterVintage01";
		case 2:
			return "PhotoMode_FilterVintage02";
		case 3:
			return "PhotoMode_FilterVintage03";
		case 4:
			return "PhotoMode_FilterVintage04";
		case 5:
			return "PhotoMode_FilterVintage05";
		case 6:
			return "PhotoMode_FilterVintage06";
		case 7:
			return "PhotoMode_FilterVintage07";
		case 8:
			return "PhotoMode_FilterVintage08";
		case 9:
			return "PhotoMode_FilterVintage09";
		case 10:
			return "PhotoMode_FilterVintage10";
		case 11:
			return "PhotoMode_FilterModern01";
		case 12:
			return "PhotoMode_FilterModern02";
		case 13:
			return "PhotoMode_FilterModern03";
		case 14:
			return "PhotoMode_FilterModern04";
		case 15:
			return "PhotoMode_FilterModern05";
		case 16:
			return "PhotoMode_FilterModern06";
		case 17:
			return "PhotoMode_FilterModern07";
		case 18:
			return "PhotoMode_FilterModern08";
		case 19:
			return "PhotoMode_FilterModern09";
		case 20:
			return "PhotoMode_FilterModern10";
		case 21:
			return "PhotoMode_FilterGame01";
		case 22:
			return "PhotoMode_FilterGame02";
		case 23:
			return "PhotoMode_FilterGame03";
		case 24:
			return "PhotoMode_FilterGame04";
		case 25:
			return "PhotoMode_FilterGame05";
		case 26:
			return "PhotoMode_FilterGame06";
		case 27:
			return "PhotoMode_FilterGame07";
		case 28:
			return "PhotoMode_FilterGame08";
		case 29:
			return "PhotoMode_FilterGame09";
		case 30:
			return "PhotoMode_FilterGame10";
		case 31:
			return "PhotoMode_FilterGame11";
		case 32:
			return "PhotoMode_FilterGame12";
		case 33:
			return "PhotoMode_FilterGame13";
		case 34:
			return "PhotoMode_FilterGame14";
		case 35:
			return "PhotoMode_FilterGame15";
		case 36:
			return "PhotoMode_FilterGame16";
		case 37:
			return "PhotoMode_FilterGame17";
		case 38:
			return "PhotoMode_FilterGame18";
		default:
			break;
	}
	return "No_PostFX_Applied";
}

void func_69(char* sParam0)
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sParam0);
	}
}

char* func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CameraViewfinderAdv";
		case 1:
			return "CameraTransitionBlinkAdv";
		case 2:
			return "CameraTakePictureAdv";
		default:
			break;
	}
	return "CameraViewfinder";
}

void func_71(var uParam0, int iParam1)
{
	func_141(uParam0, iParam1);
}

void func_72(char* sParam0)
{
	if (!GRAPHICS::_ANIMPOSTFX_HAS_LOADED(sParam0))
	{
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(sParam0);
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sParam0);
	}
}

void func_73(var uParam0, int iParam1)
{
	func_142(uParam0, iParam1);
}

bool func_74(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_58(Global_1297553[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

void func_75()
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_33, 129, true);
	PED::SET_PED_RESET_FLAG(Global_33, 173, true);
	PAD::DISABLE_CONTROL_ACTION(2, -1.076797E-08f, false);
	PAD::DISABLE_CONTROL_ACTION(2, 3.101329E-34f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2.294328E+20f, false);
	PAD::DISABLE_CONTROL_ACTION(2, 1.153572E+20f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 6.248074E-29f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1.774131E+10f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -5.737896E+33f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -4.491091E+18f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1.121045E-15f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -9.436069E+32f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -7.349376E+15f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1.32105E-21f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.072734E+13f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 21.56436f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.149163E+23f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.064456E+26f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -0.2608924f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1.125235E-23f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1.888856E+09f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 3.101619E+21f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.925685E-38f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2.144376E-20f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -3.110935E+22f, false);
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		iVar0 = PED::GET_MOUNT(Global_33);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153, true);
			PED::_SET_PED_MOTIVATION(iVar0, 3, 0f, 0);
		}
	}
}

bool func_76(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		func_143(4);
	}
	func_143(2);
	MISC::SET_BIT(&(Global_1958621.f_1), 0);
}

void func_78(int iParam0)
{
	Global_1940072.f_39 = (Global_1940072.f_39 || iParam0);
}

int func_79()
{
	return GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
}

int func_80()
{
	return GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
}

void func_81(var uParam0, int iParam1)
{
	func_73(&(uParam0->f_55), iParam1);
}

void func_82(var uParam0, int iParam1)
{
	func_71(&(uParam0->f_55), iParam1);
}

void func_83(var uParam0)
{
	char cVar0[32];
	char cVar4[32];

	StringCopy(&cVar0, "", 32);
	MISC::_INT_TO_STRING(uParam0->f_25, "%i", &cVar0);
	StringConCat(&cVar0, " / ", 32);
	StringCopy(&cVar4, "", 32);
	MISC::_INT_TO_STRING(uParam0->f_26, "%i", &cVar4);
	StringConCat(&cVar0, &cVar4, 32);
	if (func_6(uParam0, 131072))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_22, &cVar0);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_22, " ");
	}
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FACE_HUMAN@GEN_MALE@PORTRAIT";
		case 1:
			return "facials@gen_male@portrait";
		case 2:
			return "CAMERA";
		case 3:
			return "CAM_CONG_HC";
		case 4:
			return "CAM_CONG_HSP";
		case 5:
			return "CAM_CONG_AC";
		case 6:
			return "CAMERA_SOUNDSET";
		case 7:
			return "Wind_On_Film";
		case 8:
			return "Zoom_In";
		case 9:
			return "Zoom_Out";
		case 10:
			return "zoom_in_single";
		case 11:
			return "zoom_out_single";
		case 12:
			return "Collapse_Camera";
		case 13:
			return "Place_Tripod";
		case 14:
			return "Expand_Camera";
		case 15:
			return "Take_Photo";
		case 16:
			return "Change_Expression";
		case 17:
			return "Change_Pose";
		case 18:
			return "Change_Filter";
		case 19:
			return "Change_Intensity";
		case 20:
			return "Put_Away";
		case 21:
			return "Remove_Tripod";
		default:
			break;
	}
	return "";
}

int func_85(var uParam0)
{
	return (MISC::GET_GAME_TIMER() - func_144(uParam0));
}

bool func_86(var uParam0, int iParam1)
{
	if (!func_45(*uParam0))
	{
		if ((((iParam1 == 9 || iParam1 == 10) || iParam1 == 5) || iParam1 == 4) || iParam1 == 6)
		{
			*uParam0 = func_147(func_145(iParam1), func_146(iParam1, 0), func_146(iParam1, 1), 0);
		}
		else
		{
			*uParam0 = func_148(func_145(iParam1), func_146(iParam1, 0), 2, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
		}
		func_149(*uParam0, -1.31722E-14f, 0, 1);
	}
	return true;
}

void func_87(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_88(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_150(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_151(iParam0))
	{
		return false;
	}
	if (func_152(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_153(iParam0, 1)) || func_154(32768))
	{
		if (!func_153(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_155())
	{
		return false;
	}
	return true;
}

void func_89(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		iVar0 = iParam0 + 1;
		bVar1 = true;
		while (bVar1)
		{
			if (iVar0 >= 39)
			{
				iVar0 = 0;
			}
			if (iVar0 == iParam0)
			{
				bVar1 = false;
				return iParam0;
			}
			if (func_156(iVar0))
			{
				bVar1 = false;
				return iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = (iParam0 - 1);
		bVar1 = true;
		while (bVar1)
		{
			if (iVar0 < 0)
			{
				iVar0 = (39 - 1);
			}
			if (iVar0 == iParam0)
			{
				bVar1 = false;
				return iParam0;
			}
			if (func_156(iVar0))
			{
				bVar1 = false;
				return iVar0;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
	}
	return iVar0;
}

void func_91(int iParam0)
{
	func_157(func_68(iParam0));
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 5:
			return 3;
		case 4:
			return 3;
		case 6:
			return 3;
		case 7:
			return 3;
		case 8:
			return 3;
		case 9:
			return 2;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 0;
		case 13:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_93(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	var uVar9;
	float fVar10;

	bVar0 = false;
	vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	fVar4 = ENTITY::GET_ENTITY_HEADING(Global_33);
	vVar5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar1, fVar4, 0f, 4f, 0f) };
	if (func_158(Global_33, 1))
	{
		vVar5.f_2 = (vVar5.z + 1f);
	}
	else
	{
		vVar5.f_2 = (vVar5.z + 1112014848);
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar8, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar9, false);
	if (vVar1.z > fVar8)
	{
		if ((vVar1.z - fVar8) > 2f)
		{
			return false;
		}
	}
	else if ((fVar8 - vVar1.z) > 2f)
	{
		return false;
	}
	if (func_2(1024))
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		return false;
	}
	if (PED::_IS_PED_DRUNK(Global_33))
	{
		return false;
	}
	if (PED::_IS_PED_SLIDING(Global_33))
	{
		return false;
	}
	if (PED::IS_PED_FALLING(Global_33) || PED::IS_PED_FALLING_OVER(Global_33))
	{
		return false;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar1, 2f) > 0)
	{
		return false;
	}
	if ((fVar8 - vVar1.z) > 1f)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_33))
	{
		return false;
	}
	if (func_159(Global_33, 0))
	{
		return false;
	}
	if (PED::GET_PED_CROUCH_MOVEMENT(Global_33))
	{
		return false;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar5, 0, &(vVar5.f_2)) == 1)
	{
		return false;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar5.x, vVar5.y, fVar8, 0))
	{
		return false;
	}
	fVar10 = 1f;
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_33, vVar5.x, vVar5.y, (fVar8 + fVar10), 3167))
	{
		bVar0 = true;
	}
	else
	{
		return false;
	}
	if (bVar0)
	{
		uParam0->f_49 = { vVar1.x, vVar1.y, (vVar1.z - 1f) };
		uParam0->f_52 = fVar4;
		uParam0->f_46 = { vVar5.x, vVar5.y, (fVar8 + fVar10) };
	}
	return true;
}

bool func_94(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (bParam1)
	{
		func_160(iParam0, 4);
		if (bParam3)
		{
			func_161(iVar0, 1);
		}
		func_162(iVar0, 1);
	}
	else
	{
		func_163(iParam0, 4);
		func_162(iVar0, 0);
	}
}

void func_96(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	func_161(iVar0, bParam1);
}

void func_97(var uParam0)
{
	uParam0->f_25 = func_79();
}

void func_98(var uParam0)
{
	func_83(uParam0);
	func_164(uParam0);
	func_165(uParam0);
}

int func_99(var uParam0)
{
	return uParam0->f_68;
}

bool func_100(char* sParam0)
{
	return GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0);
}

void func_101(var uParam0)
{
	func_166(uParam0);
	if ((MISC::GET_FRAME_COUNT() % 15) == 0)
	{
		if (func_93(uParam0) && !uParam0->f_72)
		{
			if (!func_6(uParam0, 65536))
			{
				func_82(uParam0, 65536);
			}
			if (func_6(uParam0, 32))
			{
				func_81(uParam0, 32);
			}
		}
		else
		{
			if (func_6(uParam0, 65536))
			{
				func_81(uParam0, 65536);
			}
			if (!func_6(uParam0, 32))
			{
				func_82(uParam0, 32);
			}
		}
	}
}

void func_102(var uParam0)
{
	if ((func_167(uParam0) || func_2(512)) || !func_6(uParam0, 131072))
	{
		if (!func_6(uParam0, 1))
		{
			func_82(uParam0, 1);
		}
	}
	else if (func_6(uParam0, 1) && !func_41(uParam0))
	{
		func_81(uParam0, 1);
	}
	switch (func_67(uParam0))
	{
		case 2:
			func_168(uParam0, 0, 1, 0);
			func_168(uParam0, 11, 2, 0);
			func_168(uParam0, 6, 512, 1);
			func_168(uParam0, 7, 8388608, 0);
			func_168(uParam0, 8, 4194304, 1);
			func_169(uParam0, 4, 4, 16384);
			func_168(uParam0, 10, 4096, 1);
			func_168(uParam0, 9, 8192, 1);
			func_168(uParam0, 5, 32768, 1);
			func_168(uParam0, 13, 1024, 0);
			if (func_6(uParam0, 128) || func_41(uParam0))
			{
				if (func_170(uParam0->f_5[10], 0))
				{
					func_95(uParam0->f_5[10], 0, 1, 1);
				}
			}
			else if (func_171(uParam0) == 0)
			{
				if (!func_170(uParam0->f_5[10], 0))
				{
					func_95(uParam0->f_5[10], 1, 1, 1);
				}
			}
			else if (func_170(uParam0->f_5[10], 0))
			{
				func_95(uParam0->f_5[10], 0, 1, 1);
			}
			break;
		case 1:
			func_168(uParam0, 0, 1, 0);
			func_168(uParam0, 4, 4, 0);
			func_168(uParam0, 5, 8, 0);
			func_168(uParam0, 11, 2, 0);
			break;
		case 0:
			if (func_2(2048))
			{
				if (!func_6(uParam0, 2048))
				{
					func_82(uParam0, 2048);
				}
			}
			else if (func_6(uParam0, 2048))
			{
				func_81(uParam0, 2048);
			}
			func_168(uParam0, 3, 32, 0);
			func_168(uParam0, 2, 2048, 0);
			break;
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_65 = iParam1;
}

void func_104()
{
	UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

void func_105(var uParam0)
{
	switch (func_172(uParam0))
	{
		case 0:
			if (uParam0->f_28 == 0)
			{
				func_82(uParam0, 4);
			}
			func_173(uParam0, 1);
			break;
		case 1:
			func_40(14);
			func_173(uParam0, 2);
			break;
		case 2:
			CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
			{
				func_11(0);
				if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(-3.63164E+11f))
				{
					GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerDrunk01", 0f);
				}
				GRAPHICS::_0x9F6D859C80708B26(true, true);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), true, 0, -1, false);
				PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), true);
				func_31(uParam0, 1);
				func_10(uParam0->f_28);
				GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
				func_174();
				func_82(uParam0, 16);
				func_173(uParam0, 3);
			}
			break;
		case 3:
			CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			func_175(uParam0);
			func_176(uParam0);
			func_177(uParam0);
			func_178(uParam0);
			func_179(uParam0);
			func_102(uParam0);
			if (!func_6(uParam0, 1) && func_39(uParam0->f_5[0], 1))
			{
				func_40(15);
				func_43(uParam0, 1);
			}
			if (func_39(uParam0->f_5[1], 1))
			{
				func_104();
				return;
			}
			if (!func_6(uParam0, 2) && ((func_39(uParam0->f_5[11], 1) || func_180()) || func_181()))
			{
				func_173(uParam0, 4);
				return;
			}
			break;
		case 4:
			if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(-3.63164E+11f))
			{
				GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerDrunk01", func_182());
			}
			GRAPHICS::_0x9F6D859C80708B26(false, true);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
			PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), false);
			func_40(12);
			if (uParam0->f_28 > 0)
			{
				func_7(uParam0->f_28);
				func_51(uParam0->f_28);
			}
			if (uParam0->f_29 > 0)
			{
				func_7(uParam0->f_29);
				func_51(uParam0->f_29);
			}
			func_183();
			func_81(uParam0, 16);
			func_103(uParam0, 0);
			func_31(uParam0, 0);
			func_173(uParam0, 0);
			break;
	}
}

void func_106(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_184(uParam0) >= 3)
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	}
	switch (func_184(uParam0))
	{
		case 0:
			func_185(uParam0, 0);
			func_82(uParam0, 32768);
			func_82(uParam0, 16384);
			func_186(uParam0, 1);
			uParam0->f_69 = 0;
			break;
		case 1:
			func_91(uParam0->f_28);
			func_40(13);
			func_186(uParam0, 2);
			break;
		case 2:
			if (func_187(uParam0))
			{
				func_11(0);
				if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(-3.63164E+11f))
				{
					GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerDrunk01", 0f);
				}
				GRAPHICS::_0x9F6D859C80708B26(true, true);
				func_188(uParam0);
				func_24(uParam0);
				func_10(uParam0->f_28);
				GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
				func_189();
				func_82(uParam0, 16);
				func_190(uParam0);
				func_31(uParam0, 2);
				func_186(uParam0, 3);
			}
			break;
		case 3:
			if (func_85(uParam0) > 1000)
			{
				func_53(1);
				func_186(uParam0, 4);
			}
			break;
		case 4:
			func_191(uParam0);
			func_192(uParam0);
			func_193(uParam0);
			func_176(uParam0);
			func_177(uParam0);
			func_178(uParam0);
			func_179(uParam0);
			func_194(uParam0);
			func_102(uParam0);
			if (func_100(func_70(1)))
			{
				return;
			}
			if (!func_6(uParam0, 2) && (func_39(uParam0->f_5[11], 1) || func_180()))
			{
				func_24(uParam0);
				func_11(1);
				func_40(21);
				func_186(uParam0, 5);
				return;
			}
			if (func_39(uParam0->f_5[1], 1))
			{
				func_104();
				return;
			}
			if (!func_6(uParam0, 1) && func_39(uParam0->f_5[0], 1))
			{
				func_40(15);
				func_43(uParam0, 1);
				return;
			}
			break;
		case 5:
			if (func_85(uParam0) > 500)
			{
				func_49(uParam0);
				if (uParam0->f_28 > 0)
				{
					func_7(uParam0->f_28);
					func_51(uParam0->f_28);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, 5.402792E-27f, true, 0, false, false);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
				func_195(uParam0);
				func_196();
				func_183();
				func_186(uParam0, 6);
			}
			break;
		case 6:
			func_47(uParam0);
			if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33) && func_85(uParam0) > 1000)
			{
				bVar0 = true;
			}
			if (func_85(uParam0) > 3000)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(-3.63164E+11f))
				{
					GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerDrunk01", func_182());
				}
				GRAPHICS::_0x9F6D859C80708B26(false, true);
				func_81(uParam0, 16);
				func_7(uParam0->f_28);
				func_51(uParam0->f_28);
				func_53(1);
				func_103(uParam0, 0);
				func_31(uParam0, 0);
				func_186(uParam0, 0);
			}
			break;
	}
}

void func_107(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	ENTITY::_GET_ENTITIES_NEAR_POINT(ENTITY::GET_ENTITY_COORDS(Global_33, true, false), func_197(), iVar0, 1);
	if (ITEMSET::GET_ITEMSET_SIZE(*uParam0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || func_198(Global_33, iVar1, 1, 1) > (func_197() + 1092616192)) || func_117(iVar3, 1))
			{
				func_199(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1))
		{
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
			bVar4 = false;
			if (!func_50(iVar3, 0) && !func_117(iVar3, 1))
			{
				iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
				iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
				if (PED::IS_PED_A_PLAYER(iVar3) && !PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(iVar3))
				{
					bVar4 = true;
				}
				if (DECORATOR::DECOR_EXIST_ON(iVar3, func_200()) && DECORATOR::DECOR_GET_BOOL(iVar3, func_200()))
				{
					bVar4 = true;
				}
				if (func_115(iVar3))
				{
					if (func_116(iVar3))
					{
						bVar4 = true;
					}
					if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar3)
					{
						bVar4 = true;
					}
					if (iVar2 == 9.798023E-15f)
					{
						bVar4 = true;
					}
					if (func_201(iVar2))
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				func_202(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ITEMSET::GET_ITEMSET_SIZE(Global_1300338.f_1) > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1300338.f_1) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_1300338.f_1));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					iVar3 = func_203(ENTITY::GET_ENTITY_MODEL(iVar1));
					if (PED::IS_PED_A_PLAYER(iVar2) || (DECORATOR::DECOR_EXIST_ON(iVar2, func_200()) && DECORATOR::DECOR_GET_BOOL(iVar2, func_200())))
					{
						if (func_204(iVar1))
						{
							if (func_205(iVar2))
							{
								if (func_58(Global_1300338, 256) && iVar2 == Global_33)
								{
									if (!func_58(Global_1300338, 64))
									{
										func_206(iVar2);
									}
								}
							}
							else
							{
								func_206(iVar2);
							}
						}
						else
						{
							func_206(iVar2);
						}
					}
					else if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar2)
					{
						if (!func_204(iVar1) || func_94(Global_33))
						{
							func_206(iVar2);
						}
					}
					else if (!func_207(iVar2, iVar3))
					{
						func_206(iVar2);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
	{
		iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, *uParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				iVar2 = func_203(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (PED::IS_PED_A_PLAYER(iVar1) || (DECORATOR::DECOR_EXIST_ON(iVar1, func_200()) && DECORATOR::DECOR_GET_BOOL(iVar1, func_200())))
				{
					if (func_204(iVar0))
					{
						if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_205(iVar1))
						{
							if (func_58(Global_1300338, 256) && iVar1 == Global_33)
							{
								if (func_58(Global_1300338, 64))
								{
									func_202(iVar0, Global_1300338.f_1);
								}
							}
							else
							{
								func_202(iVar0, Global_1300338.f_1);
							}
						}
					}
				}
				else if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar1)
				{
					if (func_204(iVar0) && !func_94(Global_33))
					{
						if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_205(iVar1))
						{
							func_202(iVar0, Global_1300338.f_1);
						}
					}
				}
				else if (func_208(iVar1, iVar2))
				{
					func_202(iVar0, Global_1300338.f_1);
				}
			}
		}
		iVar3++;
	}
}

int func_110(var uParam0)
{
	return uParam0->f_70;
}

void func_111(var uParam0, int iParam1)
{
	uParam0->f_70 = iParam1;
}

void func_112()
{
	func_209(0, 0, 0, 128);
}

bool func_113(var uParam0)
{
	int iVar0;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &iVar0, true, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			*uParam0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return true;
		}
	}
	return false;
}

int func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar2 = 0;
	if (ITEMSET::IS_ITEMSET_VALID(Global_1300338.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1300338.f_1) > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1300338.f_1) - 1))
		{
			iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1300338.f_1));
			if (ENTITY::GET_IS_ANIMAL(iVar0) && PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) != MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1300338.f_1)))
			{
				iVar1++;
			}
			if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1300338.f_1)))
			{
				iVar1++;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar0, func_200()) && DECORATOR::DECOR_GET_BOOL(iVar0, func_200()))
			{
				iVar1++;
			}
			iVar2++;
		}
		return iVar1;
	}
	return 0;
}

bool func_115(int iParam0)
{
	int iVar0;

	iVar0 = func_210(iParam0);
	if (ENTITY::GET_IS_ANIMAL(iVar0) && !PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(iParam0))
	{
		return true;
	}
	return false;
}

bool func_116(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	if (((!PED::_IS_META_PED_FISH(iParam0) && !func_211(iParam0, 0)) && !func_119(iParam0)) && iVar0 != 1.917612E-19f)
	{
		return true;
	}
	return false;
}

bool func_117(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, func_200()) && DECORATOR::DECOR_GET_BOOL(iParam0, func_200()))
	{
		return false;
	}
	if (bParam1 && PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_INCAPACITATED(iParam0))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, true))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 580, true))
	{
		return true;
	}
	return false;
}

void func_118()
{
	func_209(0, 255, 0, 128);
}

bool func_119(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

void func_120()
{
	GRAPHICS::_ANIMPOSTFX_SET_POSTFX_COLOR(func_70(0), 0, 255, 255, 255, 128);
}

int func_121(int iParam0)
{
	return iParam0;
}

void func_122(int iParam0)
{
	GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_70(iParam0), 0f);
}

void func_123(int iParam0)
{
	GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_70(iParam0), 1f);
}

int func_124(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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

void func_125(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	bVar2 = func_67(uParam0) == 2;
	bVar3 = false;
	GRAPHICS::_SET_PHOTO_SELF_STAT(bVar2);
	if (bParam1)
	{
		func_212();
		func_213();
	}
	func_214();
	bVar4 = false;
	if (func_113(&iVar0))
	{
		bVar4 = func_117(iVar0, 1);
		if (ITEMSET::IS_ITEMSET_VALID(Global_1300338.f_1) && !bVar4)
		{
			func_202(iVar0, Global_1300338.f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !bVar4)
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (iVar1 != uParam0->f_73)
		{
			bVar3 = true;
			uParam0->f_73 = iVar1;
		}
	}
	else if (ITEMSET::IS_ITEMSET_VALID(Global_1300338.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1300338.f_1) > 0)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1300338.f_1) - 1))
		{
			iVar0 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, Global_1300338.f_1));
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 != uParam0->f_73 || (DECORATOR::DECOR_EXIST_ON(iVar0, func_200()) && DECORATOR::DECOR_GET_BOOL(iVar0, func_200())))
			{
				bVar3 = true;
				uParam0->f_73 = iVar1;
			}
			iVar5++;
		}
	}
	if (bVar3)
	{
		STATS::STAT_PHOTOGRAPH_TAKEN(Global_1300338.f_1);
	}
	TELEMETRY::_TELEMETRY_PHOTO_CAM(8.102673E-26f, MISC::GET_HASH_KEY(func_215(uParam0->f_28)), uParam0->f_27, bVar2, 0, func_216(uParam0), iVar1, func_218(func_217(0)), PED::IS_PED_ON_MOUNT(Global_33));
	if (bParam1)
	{
		uParam0->f_25++;
		func_98(uParam0);
	}
	func_219(&(uParam0->f_61));
}

void func_126(var uParam0, int iParam1)
{
	uParam0->f_63 = iParam1;
}

void func_127()
{
	func_73(&Global_1300338, 1);
}

void func_128(var uParam0)
{
	if (*uParam0 >= 0)
	{
		AUDIO::_STOP_SOUND_WITH_ID(*uParam0);
		*uParam0 = -1;
	}
}

void func_129(char* sParam0)
{
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD(sParam0);
}

void func_130(char* sParam0)
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
	{
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(sParam0);
	}
}

void func_131(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_45(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_121(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_220(iVar0);
	*uParam0 = 0;
}

void func_132(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_58));
	}
}

void func_133(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

bool func_134(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_135(bool bParam0)
{
	vector3 vVar0;

	if (!func_134(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_136(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_134(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_221(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_222("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_223(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_224(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_225(iVar1);
				return true;
			}
			iVar3++;
		}
		func_225(iVar1);
	}
	return false;
}

bool func_137(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_134(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_226(bParam0);
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
	iVar1 = func_227(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_228(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_229(bParam0);
	iVar2 = func_228(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_134(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_135(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_221(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_230(bParam0, 0);
	}
	if (func_231(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_232(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_233(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_232(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_139(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_140(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_142(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_143(int iParam0)
{
	Global_1902883.f_302 = (Global_1902883.f_302 || iParam0);
}

int func_144(var uParam0)
{
	return uParam0->f_54;
}

char* func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAM_TAKE_PHOTO";
		case 1:
			return "CAM_GALLERY";
		case 2:
			return "CAM_HANDHELD";
		case 3:
			return "CAM_SELFIE";
		case 5:
			return "CAM_FILTER";
		case 4:
			return "CAM_INTENSITY";
		case 6:
			return "CAM_ZOOM";
		case 7:
			return "CAM_ZOOM";
		case 8:
			return "CAM_ZOOM";
		case 9:
			return "CAM_EXPRESSIONS";
		case 10:
			return "CAM_POSES";
		case 11:
			return "CAM_BACK";
		case 12:
			return "CAM_PUT_AWAY";
		case 13:
			return "ADV_CAM_FILTERS";
		default:
			break;
	}
	return "";
}

int func_146(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -5.577318E-05f;
		case 1:
			return -3.389725E+24f;
		case 2:
			return 4.85557E+33f;
		case 3:
			return -3.085694E-12f;
		case 7:
			return -0.5812973f;
		case 8:
			return -4.852722E+27f;
		case 4:
			if (bParam1)
			{
				return 2.742391E-34f;
			}
			else
			{
				return -5.604091E+09f;
			}
			break;
		case 5:
			if (bParam1)
			{
				return -1.176228E+34f;
			}
			else
			{
				return -6.776603E-31f;
			}
			break;
		case 6:
			if (bParam1)
			{
				return -0.5812973f;
			}
			else
			{
				return -4.852722E+27f;
			}
			break;
		case 9:
			if (bParam1)
			{
				return -5.604091E+09f;
			}
			else
			{
				return 2.742391E-34f;
			}
			break;
		case 10:
			if (bParam1)
			{
				return -1.176228E+34f;
			}
			else
			{
				return -6.776603E-31f;
			}
			break;
		case 11:
			return -8.216329E-17f;
		case 12:
			return 2.874249E+19f;
		case 13:
			return -2.030775E+13f;
	}
	return 2000.649f;
}

int func_147(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_234(iVar0, 2))
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
		func_235(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 2f, 0, 1f, 0, 0, iParam2, 8.750548E+22f, 0);
		return iVar1;
	}
	return 0;
}

int func_148(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
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
		if (func_234(iVar0, 2))
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
		func_235(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1f, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_149(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_150(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_151(int iParam0)
{
	if (func_153(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_152(int iParam0)
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

bool func_153(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_154(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_155()
{
	if (!func_236())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

bool func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return true;
		case 6:
			return true;
		case 7:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 11:
			return UNLOCK::UNLOCK_IS_VISIBLE(-52141.93f);
		case 12:
			return UNLOCK::UNLOCK_IS_VISIBLE(3.656093E-26f);
		case 13:
			return UNLOCK::UNLOCK_IS_VISIBLE(2.811137E+29f);
		case 14:
			return UNLOCK::UNLOCK_IS_VISIBLE(-7.53676E-19f);
		case 15:
			return UNLOCK::UNLOCK_IS_VISIBLE(-1.89158E-09f);
		case 16:
			return UNLOCK::UNLOCK_IS_VISIBLE(1.322113E-36f);
		case 17:
			return UNLOCK::UNLOCK_IS_VISIBLE(3.756967E-09f);
		case 18:
			return UNLOCK::UNLOCK_IS_VISIBLE(3.388802E-28f);
		case 19:
			return UNLOCK::UNLOCK_IS_VISIBLE(-5.887988E+17f);
		case 20:
			return UNLOCK::UNLOCK_IS_VISIBLE(-6.442812E+10f);
		case 21:
			return UNLOCK::UNLOCK_IS_VISIBLE(-8.664857E-33f);
		case 22:
			return UNLOCK::UNLOCK_IS_VISIBLE(-7.021474E+10f);
		case 23:
			return UNLOCK::UNLOCK_IS_VISIBLE(-2.960168E-29f);
		case 24:
			return UNLOCK::UNLOCK_IS_VISIBLE(3.310291E+10f);
		case 25:
			return UNLOCK::UNLOCK_IS_VISIBLE(-5.90078E+29f);
		case 26:
			return UNLOCK::UNLOCK_IS_VISIBLE(-2.176093E+27f);
		case 27:
			return UNLOCK::UNLOCK_IS_VISIBLE(-0.03470187f);
		case 28:
			return UNLOCK::UNLOCK_IS_VISIBLE(-3.400164E+14f);
		case 29:
			return UNLOCK::UNLOCK_IS_VISIBLE(7.10399E+11f);
		case 30:
			return UNLOCK::UNLOCK_IS_VISIBLE(-2.229892E-36f);
		case 31:
			return UNLOCK::UNLOCK_IS_VISIBLE(-2.293338E+17f);
		case 32:
			return UNLOCK::UNLOCK_IS_VISIBLE(-4.0619E-33f);
		case 33:
			return UNLOCK::UNLOCK_IS_VISIBLE(1332.431f);
		case 34:
			return UNLOCK::UNLOCK_IS_VISIBLE(6.471854E+13f);
		case 35:
			return UNLOCK::UNLOCK_IS_VISIBLE(2.976486E-22f);
		case 36:
			return UNLOCK::UNLOCK_IS_VISIBLE(6.27346E-29f);
		case 37:
			return UNLOCK::UNLOCK_IS_VISIBLE(-8.316227E-06f);
		case 38:
			return UNLOCK::UNLOCK_IS_VISIBLE(7.135026E+12f);
		default:
			break;
	}
	return false;
}

void func_157(char* sParam0)
{
	if (!GRAPHICS::_ANIMPOSTFX_HAS_LOADED(sParam0))
	{
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(sParam0);
	}
}

bool func_158(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_237(iVar0) || func_238(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_159(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_160(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_161(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_234(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_162(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_163(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

void func_164(var uParam0)
{
	char cVar0[64];
	int iVar8;

	StringCopy(&cVar0, MISC::VAR_STRING(2, "CAM_PM_HUD_FILTSTYLE"), 64);
	StringConCat(&cVar0, ": ", 64);
	iVar8 = uParam0->f_28;
	StringConCat(&cVar0, MISC::VAR_STRING(2, func_215(iVar8)), 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_23, &cVar0);
}

void func_165(var uParam0)
{
	char cVar0[64];

	if (uParam0->f_28 > 0)
	{
		StringCopy(&cVar0, MISC::VAR_STRING(2, "CAM_PM_HUD_FILTINTEN"), 64);
		StringConCat(&cVar0, ": ", 64);
		StringConCat(&cVar0, func_239(BUILTIN::CEIL((uParam0->f_27 * 1120403456))), 64);
		StringConCat(&cVar0, "%", 64);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, &cVar0);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, " ");
	}
}

int func_166(var uParam0)
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar5;
	var uVar8;
	int iVar9;

	fVar0 = 1043207291; /* Float: 0.17f */
	iVar1 = 0;
	switch (uParam0->f_69)
	{
		case 0:
			uParam0->f_71 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(uParam0->f_46 - Vector(1045220557, 0f, 0f), uParam0->f_46 + Vector(1045220557, 0f, 0f), fVar0, 3167, 0, 4);
			uParam0->f_69 = 1;
			break;
		case 1:
			iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_71, &iVar1, &uVar2, &uVar5, &uVar8);
			if (iVar1 > 0)
			{
			}
			if (iVar9 == 1)
			{
			}
			else
			{
				uParam0->f_69 = 0;
				uParam0->f_72 = iVar1 != 0;
				return uParam0->f_72;
			}
	}
	return 0;
}

bool func_167(var uParam0)
{
	if (PED::IS_PED_FALLING(Global_33) || PED::_IS_PED_SLIDING(Global_33))
	{
		return true;
	}
	if ((func_67(uParam0) == 2 && func_171(uParam0) >= 1) && func_171(uParam0) <= 5)
	{
		return true;
	}
	return false;
}

void func_168(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if ((func_6(uParam0, iParam2) || func_41(uParam0)) || (iParam1 == 3 && func_94(Global_33)))
	{
		if (func_170(uParam0->f_5[iParam1], 0))
		{
			func_95(uParam0->f_5[iParam1], 0, 1, 1);
			if (bParam3)
			{
				func_96(uParam0->f_5[iParam1], 0, 1);
			}
		}
	}
	else if (!func_170(uParam0->f_5[iParam1], 0))
	{
		func_95(uParam0->f_5[iParam1], 1, 1, 1);
		func_96(uParam0->f_5[iParam1], 1, 1);
	}
}

void func_169(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_6(uParam0, iParam3))
	{
		if (func_170(uParam0->f_5[iParam1], 0))
		{
			func_95(uParam0->f_5[iParam1], 0, 1, 1);
			func_96(uParam0->f_5[iParam1], 0, 1);
		}
	}
	else if (func_6(uParam0, iParam2) || func_41(uParam0))
	{
		if (func_170(uParam0->f_5[iParam1], 0))
		{
			func_95(uParam0->f_5[iParam1], 0, 1, 1);
		}
	}
	else if (!func_170(uParam0->f_5[iParam1], 0))
	{
		func_95(uParam0->f_5[iParam1], 1, 1, 1);
		func_96(uParam0->f_5[iParam1], 1, 1);
	}
}

bool func_170(int iParam0, bool bParam1)
{
	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	return !func_234(iParam0, 4);
}

int func_171(var uParam0)
{
	return uParam0->f_66;
}

int func_172(var uParam0)
{
	return uParam0->f_67;
}

void func_173(var uParam0, int iParam1)
{
	uParam0->f_67 = iParam1;
}

void func_174()
{
	func_9(32);
	func_12(64);
}

void func_175(var uParam0)
{
	if (func_45(uParam0->f_5[6]) && func_76(uParam0->f_5[6], 1))
	{
		if (func_240(uParam0->f_5[6], 1, 1) && func_241(uParam0) < 3)
		{
			func_242(uParam0);
			func_40(10);
			if (func_241(uParam0) >= 3)
			{
				func_95(uParam0->f_5[6], 0, 1, 1);
				func_96(uParam0->f_5[6], 0, 1);
				func_95(uParam0->f_5[8], 1, 1, 1);
				func_96(uParam0->f_5[8], 1, 1);
			}
		}
		else if (func_240(uParam0->f_5[6], 0, 1) && func_241(uParam0) > 1)
		{
			func_243(uParam0);
			func_40(11);
			if (func_241(uParam0) <= 1)
			{
				func_95(uParam0->f_5[6], 0, 1, 1);
				func_96(uParam0->f_5[6], 0, 1);
				func_95(uParam0->f_5[7], 1, 1, 1);
				func_96(uParam0->f_5[7], 1, 1);
			}
		}
	}
	else if (func_45(uParam0->f_5[7]) && func_76(uParam0->f_5[7], 1))
	{
		if (func_244(uParam0->f_5[7], 1))
		{
			func_242(uParam0);
			func_40(10);
			func_95(uParam0->f_5[7], 0, 1, 1);
			func_96(uParam0->f_5[7], 0, 1);
			func_95(uParam0->f_5[6], 1, 1, 1);
			func_96(uParam0->f_5[6], 1, 1);
		}
	}
	else if (func_45(uParam0->f_5[8]) && func_76(uParam0->f_5[8], 1))
	{
		if (func_244(uParam0->f_5[8], 1))
		{
			func_243(uParam0);
			func_40(11);
			func_95(uParam0->f_5[8], 0, 1, 1);
			func_96(uParam0->f_5[8], 0, 1);
			func_95(uParam0->f_5[6], 1, 1, 1);
			func_96(uParam0->f_5[6], 1, 1);
		}
	}
}

void func_176(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_45(uParam0->f_5[5]) && func_240(uParam0->f_5[5], 1, 1))
	{
		iVar0 = uParam0->f_29;
		iVar1 = uParam0->f_30;
		uParam0->f_29 = uParam0->f_28;
		uParam0->f_28 = func_90(uParam0->f_29, 1);
		uParam0->f_30 = func_90(uParam0->f_28, 1);
		func_7(uParam0->f_29);
		if (uParam0->f_28 > 0)
		{
			func_10(uParam0->f_28);
			GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
			if (func_6(uParam0, 4))
			{
				func_81(uParam0, 4);
			}
		}
		else if (uParam0->f_28 == 0)
		{
			if (!func_6(uParam0, 4))
			{
				func_82(uParam0, 4);
			}
		}
		func_40(18);
		func_91(uParam0->f_30);
		func_98(uParam0);
		if (uParam0->f_28 == iVar1)
		{
			func_51(iVar0);
		}
		else if (uParam0->f_28 == iVar0)
		{
			func_51(iVar1);
		}
	}
}

void func_177(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_45(uParam0->f_5[5]) && func_240(uParam0->f_5[5], 0, 1))
	{
		iVar0 = uParam0->f_29;
		iVar1 = uParam0->f_30;
		uParam0->f_29 = uParam0->f_28;
		uParam0->f_28 = func_90(uParam0->f_29, 0);
		uParam0->f_30 = func_90(uParam0->f_28, 0);
		func_7(uParam0->f_29);
		if (uParam0->f_28 > 0)
		{
			func_10(uParam0->f_28);
			GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
			if (func_6(uParam0, 4))
			{
				func_81(uParam0, 4);
			}
		}
		else if (uParam0->f_28 == 0)
		{
			if (!func_6(uParam0, 4))
			{
				func_82(uParam0, 4);
			}
		}
		func_40(18);
		func_91(uParam0->f_30);
		func_98(uParam0);
		if (uParam0->f_28 == iVar1)
		{
			func_51(iVar0);
		}
		else if (uParam0->f_28 == iVar0)
		{
			func_51(iVar1);
		}
	}
}

void func_178(var uParam0)
{
	if (func_45(uParam0->f_5[4]) && func_240(uParam0->f_5[4], 1, 1))
	{
		if (uParam0->f_27 < 1f)
		{
			func_40(19);
			uParam0->f_27 = (uParam0->f_27 + 1036831949);
			GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
		}
		func_98(uParam0);
	}
}

void func_179(var uParam0)
{
	if (func_45(uParam0->f_5[4]) && func_240(uParam0->f_5[4], 0, 1))
	{
		if (uParam0->f_27 > 1036831949)
		{
			func_40(19);
			uParam0->f_27 = (uParam0->f_27 - 1036831949);
			GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(func_68(uParam0->f_28), uParam0->f_27);
		}
		func_98(uParam0);
	}
}

bool func_180()
{
	if (CAM::_IS_IN_CINEMATIC_MODE() || CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return true;
	}
	return false;
}

bool func_181()
{
	if (PED::_IS_PED_SLIDING(Global_33))
	{
		return true;
	}
	return false;
}

float func_182()
{
	float fVar0;
	float fVar1;

	fVar0 = ((Global_1940013.f_15.f_1 - func_245()) * (1f / (1f - func_245())));
	fVar1 = ((Global_1940013.f_15.f_7 * fVar0) + (Global_1940013.f_15.f_6 * (1f - fVar0)));
	return (fVar1 * Global_1940013.f_15.f_3);
}

void func_183()
{
	func_12(64);
	func_12(32);
}

int func_184(var uParam0)
{
	return uParam0->f_64;
}

void func_185(var uParam0, int iParam1)
{
	uParam0->f_68 = iParam1;
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_64 = iParam1;
}

bool func_187(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	var uVar8;
	bool bVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;

	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_35, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(Global_33);
	vVar4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar0, fVar3, 0f, 4f, 0f) };
	if (func_158(Global_33, 1))
	{
		vVar4.f_2 = (vVar4.z + 1f);
	}
	else
	{
		vVar4.f_2 = (vVar4.z + 1112014848);
	}
	bVar9 = false;
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &fVar7, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar8, false);
	if (vVar0.z > fVar7)
	{
		if ((vVar0.z - fVar7) > 2f)
		{
			bVar9 = true;
		}
	}
	else if ((fVar7 - vVar0.z) > 2f)
	{
		bVar9 = true;
	}
	vVar10 = { ENTITY::GET_ENTITY_ROTATION(Global_33, 2) };
	vVar13 = { vVar10.x, vVar10.y, (vVar10.z - 1127481344) };
	fVar16 = 1112014848; /* Float: 50f */
	if (!bVar9)
	{
		uParam0->f_49 = { vVar0.x, vVar0.y, (vVar0.z - 1f) };
		uParam0->f_52 = fVar3;
		uParam0->f_46 = { vVar4.x, vVar4.y, (fVar7 + 1f) };
	}
	uParam0->f_88 = vVar13.x;
	uParam0->f_87 = vVar13.z;
	uParam0->f_53 = vVar10.z;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		uParam0->f_35 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_46, vVar13, fVar16, true, 2);
	}
	uParam0->f_36 = 1103626240; /* Float: 25f */
	uParam0->f_36.f_1 = 2f;
	uParam0->f_36.f_2 = 1124073472; /* Float: 128f */
	uParam0->f_36.f_3 = 1106247680; /* Float: 30f */
	uParam0->f_36.f_4 = 1106247680; /* Float: 30f */
	uParam0->f_36.f_5 = 1119092736; /* Float: 90f */
	uParam0->f_36.f_6 = 1;
	uParam0->f_36.f_7 = 0;
	uParam0->f_36.f_8 = 1;
	uParam0->f_36.f_9 = 1;
	uParam0->f_92 = { vVar13 };
	uParam0->f_95 = 0f;
	uParam0->f_96 = 1056964608; /* Float: 0.5f */
	uParam0->f_92 = (uParam0->f_92 + 1f);
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_35, &(uParam0->f_36));
	CAM::_PAUSE_CAMERA_FOCUS(uParam0->f_35, false);
	CAM::ALLOW_MOTION_BLUR_DECAY(uParam0->f_35, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_35, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	func_40(14);
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, false, false, true, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_33, false, false);
	func_246(uParam0);
	return true;
}

void func_188(var uParam0)
{
	int iVar0;

	iVar0 = func_121(uParam0->f_5[13]);
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, "ADV_CAM_POSES");
	func_82(uParam0, 4096);
	func_82(uParam0, 8192);
	func_81(uParam0, 16384);
	func_81(uParam0, 32768);
	if (uParam0->f_28 == 0)
	{
		func_82(uParam0, 4);
	}
	func_96(uParam0->f_5[4], 1, 1);
	func_185(uParam0, 1);
}

void func_189()
{
	func_9(64);
	func_12(32);
}

void func_190(var uParam0)
{
	vector3 vVar0;
	vector3 vVar25;
	vector3 vVar28;

	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_3 = 0;
	vVar0.f_4 = 21030;
	vVar25 = { func_248(uParam0->f_46 - func_247(PLAYER::GET_PLAYER_INDEX())) };
	vVar28 = { func_247(PLAYER::GET_PLAYER_INDEX()) + vVar25 * Vector(2f, 2f, 2f) };
	vVar0 = { vVar28 };
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_33, &vVar0);
}

void func_191(var uParam0)
{
	func_249(uParam0);
	func_250(uParam0);
	if (uParam0->f_78 > 16)
	{
		if ((uParam0->f_95 - 1032805417) > -1054867456)
		{
			if (uParam0->f_78 > 100)
			{
				uParam0->f_92.f_2 = (uParam0->f_92.f_2 - 1058642330);
				uParam0->f_95 = (uParam0->f_95 - (1032805417 * 3f));
			}
			else
			{
				uParam0->f_92.f_2 = (uParam0->f_92.f_2 - 1045220557);
				uParam0->f_95 = (uParam0->f_95 - 1032805417);
			}
		}
	}
	if (uParam0->f_78 < -16)
	{
		if ((uParam0->f_95 + 1032805417) < 1092616192)
		{
			if (uParam0->f_78 < -100)
			{
				uParam0->f_92.f_2 = (uParam0->f_92.f_2 + 1058642330);
				uParam0->f_95 = (uParam0->f_95 + (1032805417 * 3f));
			}
			else
			{
				uParam0->f_92.f_2 = (uParam0->f_92.f_2 + 1045220557);
				uParam0->f_95 = (uParam0->f_95 + 1032805417);
			}
		}
	}
	if (uParam0->f_79 > 16)
	{
		if ((uParam0->f_96 - 1032805417) > -1054867456)
		{
			if (uParam0->f_79 > 100)
			{
				uParam0->f_92 = (uParam0->f_92 - 1058642330);
				uParam0->f_96 = (uParam0->f_96 - (1032805417 * 3f));
			}
			else
			{
				uParam0->f_92 = (uParam0->f_92 - 1045220557);
				uParam0->f_96 = (uParam0->f_96 - 1032805417);
			}
		}
	}
	if (uParam0->f_79 < -16)
	{
		if ((uParam0->f_96 + 1032805417) < 1092616192)
		{
			if (uParam0->f_79 < -100)
			{
				uParam0->f_92 = (uParam0->f_92 + 1058642330);
				uParam0->f_96 = (uParam0->f_96 + (1032805417 * 3f));
			}
			else
			{
				uParam0->f_92 = (uParam0->f_92 + 1045220557);
				uParam0->f_96 = (uParam0->f_96 + 1032805417);
			}
		}
	}
	CAM::SET_CAM_PARAMS(uParam0->f_35, uParam0->f_46, uParam0->f_92, 50f, 0, 1, 1, 2, 0, 0);
}

void func_192(var uParam0)
{
	if (func_240(uParam0->f_5[9], 0, 1))
	{
		uParam0->f_31++;
		if (uParam0->f_31 >= 8)
		{
			uParam0->f_31 = 0;
		}
		func_251(uParam0);
	}
	if (func_240(uParam0->f_5[9], 1, 1))
	{
		uParam0->f_31 = (uParam0->f_31 - 1);
		if (uParam0->f_31 < 0)
		{
			uParam0->f_31 = (8 - 1);
		}
		func_251(uParam0);
	}
}

void func_193(var uParam0)
{
	switch (func_171(uParam0))
	{
		case 0:
			if (func_240(uParam0->f_5[10], 0, 1))
			{
				uParam0->f_32++;
				if (uParam0->f_32 >= 4)
				{
					uParam0->f_32 = 0;
				}
				func_82(uParam0, 2);
				func_82(uParam0, 1);
				func_252(uParam0, 1);
			}
			if (func_240(uParam0->f_5[10], 1, 1))
			{
				uParam0->f_32 = (uParam0->f_32 - 1);
				if (uParam0->f_32 < 0)
				{
					uParam0->f_32 = (4 - 1);
				}
				func_82(uParam0, 2);
				func_82(uParam0, 1);
				func_82(uParam0, 128);
				func_252(uParam0, 1);
			}
			break;
		case 1:
			func_11(1);
			func_252(uParam0, 2);
			break;
		case 2:
			func_246(uParam0);
			func_24(uParam0);
			func_252(uParam0, 3);
			break;
		case 3:
			if (PED::IS_PED_USING_SCENARIO_HASH(Global_33, func_253(uParam0->f_32)) && func_85(uParam0) > 1500)
			{
				func_252(uParam0, 4);
			}
			if (func_85(uParam0) > 7000)
			{
				func_252(uParam0, 4);
				func_24(uParam0);
			}
			break;
		case 4:
			func_53(1);
			func_252(uParam0, 5);
			func_24(uParam0);
			break;
		case 5:
			if (TASK::_PED_IS_IN_SCENARIO_BASE(Global_33) || func_85(uParam0) > 7000)
			{
				func_81(uParam0, 2);
				func_81(uParam0, 1);
				func_81(uParam0, 128);
				func_252(uParam0, 0);
			}
			break;
	}
}

void func_194(var uParam0)
{
	int iVar0;

	if (func_39(uParam0->f_5[13], 1))
	{
		iVar0 = func_121(uParam0->f_5[13]);
		switch (func_99(uParam0))
		{
			case 0:
				func_82(uParam0, 4096);
				func_82(uParam0, 8192);
				func_81(uParam0, 16384);
				func_81(uParam0, 32768);
				if (uParam0->f_28 == 0)
				{
					func_82(uParam0, 4);
				}
				func_96(uParam0->f_5[4], 1, 1);
				HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, "ADV_CAM_POSES");
				func_185(uParam0, 1);
				break;
			case 1:
				func_82(uParam0, 16384);
				func_82(uParam0, 32768);
				func_81(uParam0, 4096);
				func_81(uParam0, 8192);
				func_95(uParam0->f_5[4], 0, 1, 1);
				func_96(uParam0->f_5[4], 0, 1);
				HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, "ADV_CAM_FILTERS");
				func_185(uParam0, 0);
				break;
		}
	}
}

void func_195(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_35, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_196()
{
	if (func_254(Global_33, 3.034861E-30f))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
	}
}

float func_197()
{
	return 1124204544 /* Float: 130f */;
}

float func_198(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_199(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iParam0, iParam1);
		}
	}
}

char* func_200()
{
	return "proc_bounty_target";
}

bool func_201(int iParam0)
{
	if (func_58(Global_1300338, 4096))
	{
		switch (iParam0)
		{
			case joaat("A_C_CHICKEN_01"):
			case joaat("A_C_ELK_01"):
			case joaat("A_C_TURKEYWILD_01"):
			case joaat("A_C_BUCK_01"):
			case joaat("A_C_ALLIGATOR_01"):
			case joaat("A_C_ARMADILLO_01"):
			case joaat("A_C_BIGHORNRAM_01"):
			case joaat("A_C_POSSUM_01"):
			case joaat("A_C_SKUNK_01"):
			case joaat("A_C_BADGER_01"):
			case joaat("A_C_WOLF"):
			case joaat("A_C_BEAR_01"):
			case joaat("A_C_MOOSE_01"):
			case joaat("A_C_GOAT_01"):
			case joaat("A_C_TURTLESNAPPING_01"):
			case joaat("A_C_COW"):
			case joaat("A_C_SHEEP_01"):
			case joaat("A_C_COUGAR_01"):
			case joaat("A_C_FOX_01"):
			case joaat("A_C_GILAMONSTER_01"):
			case joaat("A_C_COYOTE_01"):
			case joaat("A_C_OX_01"):
			case joaat("A_C_BEARBLACK_01"):
			case joaat("A_C_BEAVER_01"):
			case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			case joaat("A_C_DOGAMERICANFOXHOUND_01"):
			case joaat("A_C_DEER_01"):
			case joaat("A_C_RACCOON_01"):
			case joaat("A_C_BUFFALO_01"):
			case joaat("A_C_PANTHER_01"):
			case joaat("A_C_PRONGHORN_01"):
			case joaat("A_C_BOAR_01"):
				return true;
		}
	}
	return false;
}

void func_202(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

int func_203(int iParam0)
{
	int iVar0;

	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		iVar0 = PED::_GET_PED_MODEL_SIZE_FROM_HASH(iParam0);
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_204(int iParam0)
{
	return (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0));
}

bool func_205(int iParam0)
{
	return (PED::_IS_PED_VISIBILITY_TRACKED(iParam0) && PED::IS_TRACKED_PED_VISIBLE(iParam0));
}

void func_206(int iParam0)
{
	int iVar0;

	iVar0 = func_210(iParam0);
	if (PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
	{
		PED::RELEASE_PED_VISIBILITY_TRACKING(iParam0);
	}
	func_199(iVar0, Global_1300338.f_1);
}

bool func_207(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_210(iParam0);
	if (((((func_204(iVar0) && !func_117(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_33, iVar0, 3455)) && func_259(iParam0, func_255(), func_256(), func_257(), func_258())) && func_205(iParam0)) && func_260(iParam0) >= func_261(iParam1))
	{
		return true;
	}
	return false;
}

bool func_208(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_210(iParam0);
	if (((func_204(iVar0) && !func_117(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_33, iVar0, 3455)) && func_259(iParam0, func_255(), func_256(), func_257(), func_258()))
	{
		if (!PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		}
		else if (func_205(iParam0) && func_260(iParam0) >= func_261(iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3)
{
	GRAPHICS::_ANIMPOSTFX_SET_POSTFX_COLOR(func_70(0), 0, iParam0, iParam1, iParam2, iParam3);
}

int func_210(int iParam0)
{
	return iParam0;
}

bool func_211(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 58))
	{
		if (bParam1)
		{
			return ENTITY::IS_ENTITY_IN_AIR(iParam0, 1);
		}
		return true;
	}
	return false;
}

void func_212()
{
	char cVar0[32];
	int iVar4;
	int iVar5;

	StringCopy(&cVar0, "", 32);
	iVar4 = func_262();
	if (func_263(iVar4))
	{
		MemCopy(&cVar0, {func_264(iVar4)}, 4);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		iVar5 = func_265();
		StringCopy(&cVar0, func_266(iVar5), 32);
	}
	GRAPHICS::_SET_REGION_PHOTO_TAKEN_STAT(&cVar0);
}

void func_213()
{
	char cVar0[16];
	char cVar2[16];
	int iVar4;

	StringCopy(&cVar0, "", 16);
	StringCopy(&cVar2, "", 16);
	iVar4 = func_267();
	if (func_268(iVar4))
	{
		StringCopy(&cVar0, func_269(iVar4), 16);
		StringCopy(&cVar2, func_270(iVar4), 16);
	}
	GRAPHICS::_SET_DISTRICT_PHOTO_TAKEN_STAT(&cVar0);
	GRAPHICS::_SET_STATE_PHOTO_TAKEN_STAT(&cVar2);
}

void func_214()
{
	func_71(&Global_1300338, 1);
}

char* func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAM_PM_F_V0";
		case 1:
			return "CAM_PM_F_V1";
		case 2:
			return "CAM_PM_F_V2";
		case 3:
			return "CAM_PM_F_V3";
		case 4:
			return "CAM_PM_F_V4";
		case 5:
			return "CAM_PM_F_V5";
		case 6:
			return "CAM_PM_F_V6";
		case 7:
			return "CAM_PM_F_V7";
		case 8:
			return "CAM_PM_F_V8";
		case 9:
			return "CAM_PM_F_V9";
		case 10:
			return "CAM_PM_F_V10";
		case 11:
			return "CAM_PM_F_M1";
		case 12:
			return "CAM_PM_F_M2";
		case 13:
			return "CAM_PM_F_M3";
		case 14:
			return "CAM_PM_F_M4";
		case 15:
			return "CAM_PM_F_M5";
		case 16:
			return "CAM_PM_F_M6";
		case 17:
			return "CAM_PM_F_M7";
		case 18:
			return "CAM_PM_F_M8";
		case 19:
			return "CAM_PM_F_M9";
		case 20:
			return "CAM_PM_F_M10";
		case 21:
			return "CAM_PM_F_S1";
		case 22:
			return "CAM_PM_F_S2";
		case 23:
			return "CAM_PM_F_S3";
		case 24:
			return "CAM_PM_F_S4";
		case 25:
			return "CAM_PM_F_S5";
		case 26:
			return "CAM_PM_F_S6";
		case 27:
			return "CAM_PM_F_S7";
		case 28:
			return "CAM_PM_F_S8";
		case 29:
			return "CAM_PM_F_S9";
		case 30:
			return "CAM_PM_F_S10";
		case 31:
			return "CAM_PM_F_S11";
		case 32:
			return "CAM_PM_F_S12";
		case 33:
			return "CAM_PM_F_S13";
		case 34:
			return "CAM_PM_F_S14";
		case 35:
			return "CAM_PM_F_S15";
		case 36:
			return "CAM_PM_F_S16";
		case 37:
			return "CAM_PM_F_S17";
		case 38:
			return "CAM_PM_F_S18";
		default:
			break;
	}
	return "CAM_PM_F_V0";
}

int func_216(var uParam0)
{
	switch (func_67(uParam0))
	{
		case 1:
			if (CAM::_0x8B1A5FE7E41E52B2())
			{
				return 0;
			}
			else if (CAM::_0xB6A80E1E3A5444F1())
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			return BUILTIN::FLOOR(uParam0->f_36.f_3);
	}
	return 0;
}

struct<2> func_217(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_218(struct<2> Param0)
{
	return func_271(Param0);
}

void func_219(var uParam0)
{
	int iVar0;
	int iVar1;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &iVar0, true, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (!func_117(iVar1, 1))
			{
				func_272(iVar1, ENTITY::_GET_PED_ANIMAL_TYPE(iVar1), 1, 0);
			}
		}
	}
}

void func_220(int iParam0)
{
	if (!func_273(iParam0))
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

bool func_221(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_134(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_135(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_274(bParam0, 9.811189E+11f))
	{
		func_275(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_222(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_232(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_223(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_224(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_225(int iParam0)
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

int func_226(bool bParam0)
{
	struct<2> Var0;

	if (!func_134(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_227(bool bParam0)
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

int func_228(var uParam0, int iParam1)
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

int func_229(bool bParam0)
{
	int iVar0;

	iVar0 = func_226(bParam0);
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

int func_230(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_276(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_278(&Var0, func_277(0));
	}
	if (!func_279(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_225(iVar18);
	return iVar19;
}

int func_231(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_281(func_280(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_232(bool bParam0)
{
	if (func_282() == -1)
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

struct<4> func_233(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_283(bParam0, bParam1, 0) };
	return func_284(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_234(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_235(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_161(iParam0, 1);
	func_162(iParam0, 1);
	func_163(iParam0, 128);
}

bool func_236()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

int func_237(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_238(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case 653987431:
			case joaat("HEA_TUNNEL_02"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

char* func_239(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_240(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

int func_241(var uParam0)
{
	return uParam0->f_33;
}

void func_242(var uParam0)
{
	if (uParam0->f_33 < 3)
	{
		uParam0->f_33++;
	}
}

void func_243(var uParam0)
{
	if (uParam0->f_33 > 1)
	{
		uParam0->f_33 = (uParam0->f_33 - 1);
	}
}

bool func_244(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

float func_245()
{
	return 1056964608 /* Float: 0.5f */;
}

void func_246(var uParam0)
{
	int iVar0;

	func_285(uParam0);
	func_40(17);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, func_253(uParam0->f_32), 0, true, 0, -1f, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Global_33, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

Vector3 func_247(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

Vector3 func_248(vector3 vParam0)
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

void func_249(var uParam0)
{
	uParam0->f_74 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, 3.013735E+08f) * 1123942400));
	uParam0->f_75 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, -2.794596E+37f) * 1123942400));
	uParam0->f_78 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, -6.00134E-14f) * 1123942400));
	uParam0->f_79 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, -1.422437E+11f) * 1123942400));
}

void func_250(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (PAD::GET_CONTROL_VALUE(0, -0.5812973f) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(0, -4.852722E+27f) - 127);
	if (uParam0->f_65 == 1)
	{
		iVar2 = CAM::GET_RENDERING_CAM();
	}
	else
	{
		iVar2 = uParam0->f_35;
	}
	if (iVar0 > 0)
	{
		if (uParam0->f_36.f_3 < 1119092736)
		{
			uParam0->f_36.f_3 = (uParam0->f_36.f_3 + 1063675494);
			CAM::_0xE4B7945EF4F1BFB2(iVar2, &(uParam0->f_36));
			if (func_76(uParam0->f_5[8], 1))
			{
				func_95(uParam0->f_5[8], 0, 1, 1);
				func_96(uParam0->f_5[8], 0, 1);
			}
			if (!func_76(uParam0->f_5[6], 1))
			{
				func_95(uParam0->f_5[6], 1, 1, 1);
				func_96(uParam0->f_5[6], 1, 1);
			}
			if (uParam0->f_56 < 0)
			{
				func_286(&(uParam0->f_56), 8);
			}
		}
		else
		{
			if (!func_76(uParam0->f_5[8], 1))
			{
				func_95(uParam0->f_5[8], 1, 1, 1);
				func_96(uParam0->f_5[8], 1, 1);
			}
			if (func_76(uParam0->f_5[6], 1))
			{
				func_95(uParam0->f_5[6], 0, 1, 1);
				func_96(uParam0->f_5[6], 0, 1);
			}
			func_128(&(uParam0->f_56));
		}
	}
	else
	{
		func_128(&(uParam0->f_56));
	}
	if (iVar0 == 0 && iVar1 > 0)
	{
		if (uParam0->f_36.f_3 > 1106247680)
		{
			uParam0->f_36.f_3 = (uParam0->f_36.f_3 - 1063675494);
			CAM::_0xE4B7945EF4F1BFB2(iVar2, &(uParam0->f_36));
			if (func_76(uParam0->f_5[7], 1))
			{
				func_95(uParam0->f_5[7], 0, 1, 1);
				func_96(uParam0->f_5[7], 0, 1);
			}
			if (!func_76(uParam0->f_5[6], 1))
			{
				func_95(uParam0->f_5[6], 1, 1, 1);
				func_96(uParam0->f_5[6], 1, 1);
			}
			if (uParam0->f_57 < 0)
			{
				func_286(&(uParam0->f_57), 9);
			}
		}
		else
		{
			if (!func_76(uParam0->f_5[7], 1))
			{
				func_95(uParam0->f_5[7], 1, 1, 1);
				func_96(uParam0->f_5[7], 1, 1);
			}
			if (func_76(uParam0->f_5[6], 1))
			{
				func_95(uParam0->f_5[6], 0, 1, 1);
				func_96(uParam0->f_5[6], 0, 1);
			}
			func_128(&(uParam0->f_57));
		}
	}
	else
	{
		func_128(&(uParam0->f_57));
	}
}

void func_251(var uParam0)
{
	func_40(16);
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_33, func_287(uParam0->f_31), func_84(0));
}

void func_252(var uParam0, int iParam1)
{
	uParam0->f_66 = iParam1;
}

float func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3.892104E-09f;
		case 1:
			return 1.315808E+30f;
		case 2:
			return 3.20297E+33f;
		case 3:
			return -1.854193E-06f;
		default:
			break;
	}
	return 3.892104E-09f;
}

bool func_254(int iParam0, int iParam1)
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

int func_255()
{
	return 1050253722 /* Float: 0.3f */;
}

int func_256()
{
	return 1060320051 /* Float: 0.7f */;
}

float func_257()
{
	return 1045220557 /* Float: 0.2f */;
}

float func_258()
{
	return 1060320051 /* Float: 0.7f */;
}

bool func_259(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_288(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

float func_260(int iParam0)
{
	return (func_289(iParam0) * 1120403456);
}

float func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1008981770 /* Float: 0.01f */;
		case 1:
			return 1017370378 /* Float: 0.02f */;
		case 2:
			return 1017370378 /* Float: 0.02f */;
		case 3:
			return 1022739087 /* Float: 0.03f */;
		case 4:
			return 1022739087 /* Float: 0.03f */;
	}
	return 1022739087 /* Float: 0.03f */;
}

var func_262()
{
	return Global_1893611.f_2;
}

bool func_263(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_264(int iParam0)
{
	char[] cVar0[8];

	if (!func_263(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1887363[iParam0 /*36*/].f_23;
}

int func_265()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_34);
}

char* func_266(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return "WATER_AURORA_BASIN";
		case joaat("WATER_BARROW_LAGOON"):
			return "WATER_BARROW_LAGOON";
		case joaat("WATER_BAYOU_NWA"):
			return "WATER_BAYOU_NWA";
		case joaat("WATER_BEARTOOTH_BECK"):
			return "WATER_BEARTOOTH_BECK";
		case joaat("WATER_CAIRN_LAKE"):
			return "WATER_CAIRN_LAKE";
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
		case joaat("WATER_DAKOTA_RIVER"):
			return "WATER_DAKOTA_RIVER";
		case joaat("WATER_DEADBOOT_CREEK"):
			return "WATER_DEADBOOT_CREEK";
		case joaat("WATER_DEWBERRY_CREEK"):
			return "WATER_DEWBERRY_CREEK";
		case joaat("WATER_ELYSIAN_POOL"):
			return "WATER_ELYSIAN_POOL";
		case joaat("WATER_FLAT_IRON_LAKE"):
			return "WATER_FLAT_IRON";
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return "WATER_HAWKS_EYE_CREEK";
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return "WATER_HEARTLANDS_OVERFLOW";
		case joaat("WATER_HOT_SPRINGS"):
			return "WATER_HOT_SPRINGS";
		case joaat("WATER_KAMASSA_RIVER"):
			return "WATER_KAMASSA_RIVER";
		case joaat("WATER_LAKE_DON_JULIO"):
			return "WATER_LAKE_DON_JULIO";
		case joaat("WATER_LAKE_ISABELLA"):
			return "WATER_LAKE_ISABELLA";
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return "WATER_LANNACHECHEE_RIVER";
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return "WATER_LITTLE_CREEK_RIVER";
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return "WATER_LOWER_MONTANA_RIVER";
		case joaat("WATER_MATTLOCK_POND"):
			return "WATER_MATTLOCK_POND";
		case joaat("WATER_MOONSTONE_POND"):
			return "WATER_MOONSTONE_POND";
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
		case joaat("WATER_OWANJILA"):
			return "WATER_OWANJILA";
		case joaat("WATER_RINGNECK_CREEK"):
			return "WATER_RINGNECK_CREEK";
		case joaat("WATER_SAN_LUIS_RIVER"):
			return "WATER_SAN_LUIS_RIVER";
		case joaat("WATER_SEA_OF_CORONADO"):
			return "WATER_SEA_OF_CORONADO";
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return "WATER_SOUTHFIELD_FLATS";
		case joaat("WATER_SPIDER_GORGE"):
			return "WATER_SPIDER_GORGE";
		case joaat("WATER_STILLWATER_CREEK"):
			return "WATER_STILLWATER_CREEK";
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return "WATER_UPPER_MONTANA_RIVER";
		case joaat("WATER_WHINYARD_STRAIT"):
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

var func_267()
{
	return Global_1896646.f_41;
}

bool func_268(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	if (func_282() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	if (func_282() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

int func_271(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_290(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_272(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	func_291(iParam0);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	func_292(iParam1, iVar0, vVar1, bParam2, bParam3);
	if (bParam2 && -2.222769E+33f == iParam1)
	{
		COMPENDIUM::COMPENDIUM_HORSE_OBSERVED(iParam0, bParam3);
	}
}

bool func_273(int iParam0)
{
	return func_234(iParam0, 2);
}

int func_274(bool bParam0, int iParam1)
{
	if (!func_134(bParam0, 0))
	{
		return func_293(func_280(bParam0), iParam1);
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

void func_275(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_276(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_277(bool bParam0)
{
	int iVar0;

	iVar0 = func_232(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_284(8.681942E-06f, func_294(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_284(8.681942E-06f, func_294(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_284(8.681942E-06f, func_294(bParam0), -1.942248E+12f, 0);
}

void func_278(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_279(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_232(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_280(bool bParam0)
{
	return bParam0;
}

bool func_281(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_282()
{
	return Global_1572887.f_14;
}

struct<5> func_283(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_294(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_135(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_284(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_277(bParam1) };
			if (iParam2 && func_295(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_296(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_296(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_297(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_298(bParam1) };
			switch (func_226(bParam0))
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
			if (func_299(bParam0, -2.580501E-27f))
			{
				Var0 = { func_284(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_299(bParam0, -4.220332E-15f))
			{
				Var0 = { func_284(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_284(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_299(bParam0, -3.171238E-21f))
			{
				Var0 = { func_284(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_300(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_299(bParam0, -3.171238E-21f))
			{
				Var0 = { func_284(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_284(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_134(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_232(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

void func_285(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
	if (!PED::GET_PED_IS_BEING_GRAPPLED(Global_33) && PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	}
	ENTITY::SET_ENTITY_HEADING(Global_33, uParam0->f_52);
}

void func_286(var uParam0, int iParam1)
{
	if (*uParam0 < 0)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::_PLAY_SOUND_FROM_ENTITY_WITH_SET(*uParam0, func_84(iParam1), Global_33, func_84(6), false, 0);
	}
}

char* func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "portrait_normal";
		case 1:
			return "portrait_happy";
		case 2:
			return "portrait_pensive";
		case 3:
			return "portrait_pensive_2";
		case 4:
			return "portrait_relaxed";
		case 5:
			return "portrait_angry";
		case 6:
			return "portrait_angry_2";
		case 7:
			return "portrait_annoyed";
		default:
			break;
	}
	return "portrait_normal";
}

bool func_288(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	int iVar2;

	iVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (iVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

float func_289(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<2> Var7;
	struct<2> Var10;
	float fVar13;
	float fVar14;
	float fVar15;

	iVar0 = func_210(iParam0);
	ENTITY::_GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS(iVar0, &vVar1, &vVar4);
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar1, &Var7, &(Var7.f_1)) || !GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar4, &Var10, &(Var10.f_1)))
	{
		return 0f;
	}
	fVar13 = MISC::ABSF((Var10 - Var7));
	fVar14 = MISC::ABSF((Var10.f_1 - Var7.f_1));
	fVar15 = (fVar13 * fVar14);
	return fVar15;
}

bool func_290(struct<2> Param0, bool bParam2)
{
	if (!func_301(Param0))
	{
		return false;
	}
	func_302(bParam2);
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

void func_291(int iParam0)
{
	var uVar0;
	int iVar1;

	if (FLOCK::_GET_ANIMAL_RARITY(iParam0) != 2)
	{
		return;
	}
	iVar1 = PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(iParam0, &uVar0);
	if (iVar1 == 0)
	{
	}
	else if (!PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(iVar1))
	{
		PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(iVar1);
	}
}

void func_292(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
	{
		MAP::_MAP_DISCOVER_REGION(iVar1);
	}
	if (bParam5 && -2.222769E+33f != iParam0)
	{
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, bParam6);
	}
}

int func_293(bool bParam0, int iParam1)
{
	if (!func_281(bParam0, 2))
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

struct<4> func_294(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_232(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_284(2.982335E+09f, func_303(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_284(2.982335E+09f, func_303(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_284(2.982335E+09f, func_303(), -5.45926E-19f, bParam0);
}

int func_295(bool bParam0, bool bParam1)
{
	if (func_226(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_304();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_296(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_305(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_297(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_306(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_298(bool bParam0)
{
	int iVar0;

	iVar0 = func_232(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_284(3.507197E-29f, func_294(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_284(3.507197E-29f, func_294(bParam0), 12999093, 0);
}

bool func_299(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_226(bParam0);
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
			if (func_307(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_300(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_308(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_301(struct<2> Param0)
{
	if (!func_309(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_310(Param0))
	{
		return false;
	}
	return true;
}

void func_302(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

struct<4> func_303()
{
	struct<4> Var0;

	return Var0;
}

int func_304()
{
	if (func_311(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_305(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_134(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_231(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_284(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_232(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_232(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_306(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_232(0);
	*iParam1 = { func_284(bParam0, func_277(0), fParam3, 0) };
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

bool func_307(bool bParam0, int iParam1, int iParam2)
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

int func_308(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_232(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_309(int iParam0)
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

int func_310(int iParam0)
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

int func_311(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_312(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_232(bParam1), iParam0, bParam3);
}

bool func_312(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

