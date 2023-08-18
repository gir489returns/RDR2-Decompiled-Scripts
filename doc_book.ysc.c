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
	bool bLocal_20 = false;
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<127> Var0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_24 = -1;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 11;
	Var0.f_5.f_76 = 11;
	Var0.f_124 = 1;
	Var0.f_125 = 1;
	Var0.f_121 = 1;
	Var0.f_101 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Var0.f_118 = 1;
		Var0.f_126 = 1;
		func_1(&Var0, &Global_1913567);
	}
	if (func_2())
	{
		TASK::TASK_STOP_LEADING_HORSE(Global_33);
	}
	Var0.f_108 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_108);
	Var0.f_116 = 0;
	if (MISC::GET_GAME_TIMER() >= Global_1913430 && MISC::GET_GAME_TIMER() >= Global_17412)
	{
		Var0.f_93.f_4 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false);
		Var0.f_116 = 1;
	}
	Global_1913430 = 0;
	Global_17414 = 0;
	Global_17415 = 0;
	Global_17417 = 0;
	if ((((MISC::GET_GAME_TIMER() < Global_17395 || Var0.f_116) || (func_3() == 0 && func_4(Global_1913429, 512441.5f) == -2.75714E-14f)) || func_5(Global_1913429, 1.293259E-18f)) || (func_5(Global_1913429, -1.001123E-14f) && func_6(Global_1913429)))
	{
		Global_17414 = 1;
		Global_17415 = 1;
	}
	if (func_5(Global_1913429, MISC::GET_HASH_KEY("CI_TAG_ITEM_DOCUMENT_HIDE_READ_PROMPT")))
	{
		Global_17417 = 1;
	}
	if (Global_1940239.f_11587 == 0 || MISC::GET_GAME_TIMER() <= (3000 + Global_1940072.f_70.f_2))
	{
		Global_17414 = 1;
	}
	while (func_7(&Var0, &Global_1913567))
	{
		if (func_5(Global_1913567[0 /*11*/], 1.293259E-18f) || func_5(Global_1913429, 1.293259E-18f))
		{
			PAD::DISABLE_CONTROL_ACTION(2, -7.654632E+14f, false);
		}
		Var0.f_104 = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
		if (((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Var0.f_108) && ANIMSCENE::IS_ANIM_SCENE_LOADED(Var0.f_108, true, false)) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Var0.f_108, false)) && CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_108, Global_34, ENTITY::GET_ENTITY_ROTATION(Global_33, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_108, Global_33, -1);
			ANIMSCENE::START_ANIM_SCENE(Var0.f_108);
		}
		PAD::DISABLE_CONTROL_ACTION(0, -1.888856E+09f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 3.101619E+21f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -3.868029E+16f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 3.94298E-23f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 3.847649E+34f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1.381287E-25f, false);
		CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
		if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-1.32833E+17f))
		{
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(3.401701E-25f);
		}
		if (Var0.f_116)
		{
			func_8(&Var0, &Global_1913567);
		}
		else
		{
			func_9(&Var0, &Global_1913567);
		}
		func_10(&Var0, &Global_1913567);
		BUILTIN::WAIT(0);
	}
	func_1(&Var0, &Global_1913567);
}

void func_1(var uParam0, var uParam1)
{
	if (func_11())
	{
	}
	else if (func_12() && !Global_1940239.f_9)
	{
		if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-1.32833E+17f))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(-1.32833E+17f);
	}
	if (uParam0->f_115)
	{
		func_13(uParam0, uParam1);
	}
	if (uParam0->f_119)
	{
		func_14(uParam0->f_1.f_1);
		uParam0->f_119 = 0;
	}
	func_15(uParam0, uParam1);
	func_16(uParam0);
	func_17(uParam0);
	if (uParam0->f_118)
	{
		func_18(uParam0, uParam1);
	}
	if (!uParam0->f_117)
	{
		if (!(uParam1[0 /*11*/])->f_1)
		{
			func_19(0);
		}
		else
		{
			Global_1913601[0 /*6*/].f_1 = 4;
		}
		func_19(2);
		func_19(1);
		func_20(uParam1);
	}
	else
	{
		func_21(uParam0, uParam1);
	}
	if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_2()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!TASK::_IS_PED_LEADING_HORSE(iVar0))
	{
		return false;
	}
	iVar1 = TASK::_GET_LED_HORSE_FROM_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(iVar1))
	{
		return false;
	}
	return true;
}

int func_3()
{
	return Global_1572887.f_14;
}

int func_4(bool bParam0, int iParam1)
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

bool func_5(bool bParam0, int iParam1)
{
	if (!func_22(bParam0, 0))
	{
		return func_24(func_23(bParam0), iParam1);
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

bool func_6(bool bParam0)
{
	if (func_5(bParam0, 1.293259E-18f))
	{
		return false;
	}
	if (func_5(bParam0, 3.829773E+34f))
	{
		return true;
	}
	return false;
}

bool func_7(var uParam0, var uParam1)
{
	if (func_3() == 0 && func_25(0, 0))
	{
		return false;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return false;
	}
	if (func_26(uParam0, uParam1) && (MISC::GET_GAME_TIMER() >= Global_17395 || !func_27(Global_1913429)))
	{
		uParam0->f_118 = 1;
		return false;
	}
	return true;
}

int func_8(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_28(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			uParam0->f_101 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, 7.655073E+37f);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				func_29(uParam0, uParam1[0 /*11*/]);
				func_30(uParam0, uParam1);
				func_31(uParam0, (*uParam1)[0 /*11*/]);
				func_28(uParam0, uParam1);
				func_32(uParam0, 4);
			}
			break;
		case 4:
			if (func_33((*uParam1)[0 /*11*/], uParam0->f_104))
			{
				func_34((*uParam1)[0 /*11*/]);
				func_35(uParam0, uParam1, 1);
				func_32(uParam0, 6);
			}
			break;
		case 6:
			func_36(uParam0, uParam1[0 /*11*/]);
			func_37(uParam0, uParam1);
			func_38(uParam0, uParam1);
			if (func_39((*uParam1)[0 /*11*/], uParam0->f_104))
			{
				if (func_5((*uParam1)[0 /*11*/], -4.445179E+14f))
				{
					func_32(uParam0, 7);
				}
				else
				{
					func_32(uParam0, 8);
				}
			}
			else if (func_40(Global_17402[3], 1))
			{
				func_41(uParam0, (*uParam1)[0 /*11*/]);
			}
			func_16(uParam0);
			break;
		case 8:
			if (!func_42((*uParam1)[0 /*11*/], 1) && !uParam0->f_123)
			{
				func_43((*uParam1)[0 /*11*/], 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
				uParam0->f_123 = 1;
			}
			func_32(uParam0, 9);
			break;
		case 7:
			uParam0->f_93.f_3 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_93.f_4);
			uParam0->f_93 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_93.f_4, true) };
			TASK::_0x4161648394262FDF(uParam0->f_93, 1f);
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_93.f_4))
			{
				uParam0->f_93.f_4 = TASK::FIND_SCENARIO_OF_TYPE_HASH(uParam0->f_93, uParam0->f_93.f_3, 1f, 1, false);
			}
			uParam0->f_93.f_5 = TASK::GET_PROP_FOR_SCENARIO_POINT(uParam0->f_93.f_4, "PrimaryItem");
			uParam0->f_93.f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_93.f_5);
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam0->f_93.f_6, (uParam1[0 /*11*/])->f_5, 0, 0);
			func_32(uParam0, 9);
			break;
	}
	return 0;
}

int func_9(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_28(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				uParam0->f_101 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, 7.655073E+37f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				(*uParam1)[0 /*11*/] = func_44(uParam0);
				func_45(uParam0, (*uParam1)[0 /*11*/]);
				func_30(uParam0, uParam1);
				func_31(uParam0, (*uParam1)[0 /*11*/]);
				func_28(uParam0, uParam1);
				func_29(uParam0, uParam1[0 /*11*/]);
				func_46(uParam0, uParam1);
				if (Global_1913601[0 /*6*/].f_1 == 2)
				{
					func_47(uParam1[0 /*11*/], 0);
					func_48(uParam0, uParam1);
				}
				func_32(uParam0, 2);
			}
			break;
		case 2:
			if (func_47(uParam1[0 /*11*/], 0) && func_49(uParam0, uParam1))
			{
				func_32(uParam0, 3);
			}
			break;
		case 3:
			if (func_48(uParam0, uParam1))
			{
				func_32(uParam0, 4);
			}
			break;
		case 4:
			if (func_33((*uParam1)[0 /*11*/], uParam0->f_104))
			{
				func_35(uParam0, uParam1, 1);
				func_34((*uParam1)[0 /*11*/]);
				func_32(uParam0, 5);
			}
			break;
		case 5:
			func_36(uParam0, uParam1[0 /*11*/]);
			func_37(uParam0, uParam1);
			func_38(uParam0, uParam1);
			if (func_39((*uParam1)[0 /*11*/], uParam0->f_104))
			{
				func_32(uParam0, 9);
			}
			else if (func_50(Global_17402[2]) && func_51(Global_17402[2], 1))
			{
				func_32(uParam0, 9);
				uParam0->f_118 = 1;
				Global_1940239.f_9 = 1;
				Global_17413 = MISC::GET_GAME_TIMER() + 10000;
				func_52(1, 0);
			}
			else if (func_40(Global_17402[3], 1))
			{
				func_41(uParam0, (*uParam1)[0 /*11*/]);
			}
			else if (!Global_17414 && func_53(uParam0))
			{
				uParam0->f_117 = 1;
				func_32(uParam0, 9);
			}
			func_16(uParam0);
			break;
	}
	return 0;
}

int func_10(var uParam0, var uParam1)
{
	int iVar0;

	Global_1940072.f_70.f_4 = MISC::GET_GAME_TIMER() + 5000;
	if (Global_17401 == 1)
	{
		iVar0 = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
		if (iVar0 == func_54(Global_1913429))
		{
			Global_17401 = 2;
		}
	}
	switch (*uParam0)
	{
		case 9:
			func_1(uParam0, uParam1);
			break;
	}
	return 0;
}

bool func_11()
{
	if ((((Global_1220811.f_1204 && func_5(Global_1913429, -1.001123E-14f)) || (Global_1220811.f_1205 && func_5(Global_1913429, 7.339242E+27f))) || (Global_1220811.f_1206 && func_5(Global_1913429, 1.293259E-18f))) || (Global_1220811.f_1207 && func_5(Global_1913429, -4.568457E+30f)))
	{
		if ((Global_1220811.f_1202 && !func_55()) || (Global_1220811.f_1203 && func_55()))
		{
			return true;
		}
	}
	return false;
}

bool func_12()
{
	return (Global_1940239.f_2 || Global_1940239 == 1);
}

void func_13(var uParam0, var uParam1)
{
}

int func_14(int iParam0)
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

void func_15(var uParam0, var uParam1)
{
	float fVar0;

	if (!uParam0->f_126 && !SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		fVar0 = 4.287485E+31f;
		if ((*uParam1)[0 /*11*/] == 2.257819E-14f)
		{
			fVar0 = -1.926391E+21f;
		}
		if (func_56((*uParam1)[0 /*11*/]))
		{
			func_57((*uParam1)[0 /*11*/], fVar0);
		}
		func_58((*uParam1)[0 /*11*/]);
	}
}

void func_16(var uParam0)
{
	if (uParam0->f_5.f_1 && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-1.32833E+17f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

void func_17(var uParam0)
{
	int iVar0;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_63))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_64[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_64[iVar0]);
		}
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_76[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_76[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		uParam0->f_5.f_2[iVar0 /*5*/].f_3 = 0;
		iVar0++;
	}
}

void func_18(var uParam0, var uParam1)
{
	if ((*uParam1)[0 /*11*/] != 0)
	{
		if (func_54((*uParam1)[0 /*11*/]) != 0)
		{
			TASK::_0xB35370D5353995CB(Global_33, func_54((*uParam1)[0 /*11*/]), 0.25f);
		}
		if (((uParam0->f_116 && func_59((*uParam1)[0 /*11*/])) && !func_42((*uParam1)[0 /*11*/], 1)) && !uParam0->f_123)
		{
			func_43((*uParam1)[0 /*11*/], 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
			uParam0->f_123 = 1;
		}
	}
}

void func_19(int iParam0)
{
	Global_1913601[iParam0 /*6*/].f_1 = 3;
	Global_1913601[iParam0 /*6*/] = 0;
	Global_1913601[iParam0 /*6*/].f_5 = 0;
}

void func_20(var uParam0)
{
	if (!Global_1940239.f_9)
	{
		if (((func_5(Global_1913429, -1.001123E-14f) || func_5(Global_1913429, 7.339242E+27f)) || func_5(Global_1913429, 1.293259E-18f)) || func_5(Global_1913429, -4.568457E+30f))
		{
			Global_1940072.f_70.f_5 = 1;
			Global_1940072.f_70.f_1 = Global_1913429;
		}
	}
	Global_1913429 = 0;
	Global_17412 = 0;
	Global_17401 = 2;
	Global_1913567[0 /*11*/].f_3 = 0;
	func_60(uParam0);
}

void func_21(var uParam0, var uParam1)
{
	if (uParam0->f_115)
	{
		func_13(uParam0, uParam1);
	}
	if (uParam0->f_110)
	{
		func_61(uParam1);
	}
	else
	{
		func_62(uParam1);
	}
	if (uParam0->f_119)
	{
		func_14(uParam0->f_1.f_1);
		uParam0->f_119 = 0;
	}
	func_63(uParam1);
	(uParam1[0 /*11*/])->f_3 = 0;
	Global_1913429 = (*uParam1)[0 /*11*/];
	func_64((*uParam1)[0 /*11*/], 0, 1, 0, 0f);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	Global_17412 = MISC::GET_GAME_TIMER() + 3000;
}

bool func_22(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_23(bool bParam0)
{
	return bParam0;
}

int func_24(bool bParam0, int iParam1)
{
	if (!func_65(bParam0, 2))
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

bool func_25(bool bParam0, bool bParam1)
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

bool func_26(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return true;
	}
	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
	{
		return true;
	}
	if (!func_66(16))
	{
		return true;
	}
	if ((!uParam0->f_118 && *uParam0 > 4) && (func_67((*uParam1)[0 /*11*/]) || func_68((*uParam1)[0 /*11*/])))
	{
		return true;
	}
	return false;
}

bool func_27(int iParam0)
{
	switch (iParam0)
	{
		case -904734609: /* GXTEntry: "Goodbye Letter from Mary" */
		case -595619260: /* GXTEntry: "Goodbye Letter from Mary" */
		case -31140163: /* GXTEntry: "Panoramic Map" */
		case 1760651454: /* GXTEntry: "Goodbye Letter from Mary" */
			return true;
	}
	return false;
}

void func_28(var uParam0, var uParam1)
{
	if (!uParam0->f_122)
	{
		if (func_33((*uParam1)[0 /*11*/], uParam0->f_104))
		{
			func_35(uParam0, uParam1, 0);
			uParam0->f_122 = 1;
		}
	}
}

void func_29(var uParam0, var uParam1)
{
	struct<5> Var0;

	*uParam1 = func_44(uParam0);
	uParam1->f_6 = func_4(*uParam1, -60352.49f);
	uParam1->f_1 = func_69(uParam1->f_6);
	if (uParam1->f_1)
	{
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(*uParam1, &Var0))
		{
			uParam1->f_7.f_2 = Var0.f_4;
		}
	}
	func_45(uParam0, *uParam1);
}

void func_30(var uParam0, var uParam1)
{
	uParam0->f_120 = 1;
	switch (TASK::GET_ITEM_INTERACTION_ITEM_ID(Global_33))
	{
		case joaat("DOCUMENT_MARY_BETH_JOURNAL"):
			iLocal_25 = -1.655756E-30f;
			TXD::REQUEST_STREAMED_TXD(iLocal_25, false);
			break;
		case joaat("DOCUMENT_LEDGER_VALENTINE_JAIL"):
			iLocal_25 = -1.642196E+15f;
			TXD::REQUEST_STREAMED_TXD(iLocal_25, false);
			break;
		case joaat("DOCUMENT_RCM_SLAVE_LEDGER"):
			iLocal_25 = 12.48768f;
			TXD::REQUEST_STREAMED_TXD(iLocal_25, false);
			break;
	}
}

void func_31(var uParam0, bool bParam1)
{
	if (func_5(bParam1, -2.027369E+35f))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_TAKE_AVAILABLE", true, -1);
	}
	if (func_5(bParam1, -3.485853E-30f))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	if (uParam0->f_120)
	{
		if (func_5(bParam1, -2.027369E+35f))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_RETURN_AVAILABLE", true, -1);
		}
	}
	func_70(uParam0);
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_33(bool bParam0, int iParam1)
{
	switch (func_4(bParam0, -60352.49f))
	{
		case -1420737577:
			if (iParam1 == 3.086004E+19f)
			{
				return true;
			}
			break;
		case 1712126263:
			if (iParam1 == -5.521301E-13f)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -2.224775E+21f)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == -3.852978E-26f)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 1.168495E-11f)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -25.7965f)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -2.030725E-36f)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 3.751221E+32f)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 3.918E+33f)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 1.724331E-25f)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == -5.094612E+36f)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -5.741401E-10f)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == -0.007812119f)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -3.129801E-18f || iParam1 == -5.62231E-18f)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 5.348378E-24f)
			{
				return true;
			}
			break;
		case -1239610997:
			if ((iParam1 == 6.459623f || iParam1 == 9.513968E+24f) || iParam1 == 7.433228E-21f)
			{
				return true;
			}
			break;
		case 632545869:
			if ((iParam1 == -1.721599E+31f || iParam1 == -3.403443E-12f) || iParam1 == -4.739364E-33f)
			{
				return true;
			}
			break;
		case -793205628:
			if (iParam1 == 4.942332E-34f || iParam1 == 16062911)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_34(var uParam0)
{
}

int func_35(var uParam0, var uParam1, bool bParam2)
{
	if (func_5((*uParam1)[0 /*11*/], 1.293259E-18f))
	{
		return 1;
	}
	if (func_5((*uParam1)[0 /*11*/], -1.001123E-14f))
	{
		if (func_6((*uParam1)[0 /*11*/]))
		{
			return 1;
		}
	}
	if (!uParam0->f_120)
	{
		if (!Global_17414 && bParam2)
		{
			if (!func_22((*uParam1)[2 /*11*/], 0))
			{
				Global_17407[1] = 0;
				func_71(&(Global_17402[1]), 0);
			}
			else
			{
				Global_17407[1] = 1;
				func_71(&(Global_17402[1]), 1);
			}
			if (!func_22((*uParam1)[1 /*11*/], 0))
			{
				Global_17407[0] = 0;
				func_71(&(Global_17402[0]), 0);
			}
			else
			{
				Global_17407[0] = 1;
				func_71(&(Global_17402[0]), 1);
			}
		}
		Global_17407[3] = func_72(uParam0, uParam1[0 /*11*/]);
		func_71(&(Global_17402[3]), Global_17407[3]);
		if ((*uParam1)[0 /*11*/] == -0.8805143f)
		{
			Global_17416 = 1;
		}
		Global_17401 = 1;
	}
	if (uParam0->f_116)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 7.276523E+11f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1014059f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1.296315E-19f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 6.949383E+10f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -7.068217E+21f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 0.00251415f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1.295858E-22f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1.295858E-22f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1.095094E-28f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.800969E+07f, false);
	}
	return 1;
}

void func_36(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_33(*uParam1, uParam0->f_104) && !func_73(*uParam1, uParam0->f_104))
	{
		if (!uParam0->f_112)
		{
			if (func_74(Global_17402[0], 1))
			{
				uParam0->f_113 = 0;
			}
			else
			{
				uParam0->f_113 = 1;
			}
			if (func_74(Global_17402[1], 1))
			{
				uParam0->f_114 = 0;
			}
			else
			{
				uParam0->f_114 = 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_75(&(Global_17402[iVar0]), 0);
				iVar0++;
			}
			uParam0->f_112 = 1;
		}
	}
	else if (uParam0->f_112)
	{
		func_76(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_113) || (iVar1 == 1 && !uParam0->f_114)) || (iVar1 != 1 && iVar1 != 0))
			{
				func_75(&(Global_17402[iVar1]), 1);
			}
			iVar0++;
		}
		uParam0->f_112 = 0;
	}
}

void func_37(var uParam0, var uParam1)
{
	if (!uParam0->f_115 && func_77((*uParam1)[0 /*11*/], uParam0->f_104))
	{
		uParam0->f_115 = 1;
		func_78((*uParam1)[0 /*11*/]);
	}
}

void func_38(var uParam0, var uParam1)
{
	int iVar0;

	if (!UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-1.32833E+17f) && uParam0->f_105 > 0)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(0, -7.068217E+21f))
		{
			if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(-1.32833E+17f, -2.098171E-25f) == 0)
			{
				func_79(uParam0, uParam1);
			}
		}
		if (iLocal_24 == -1)
		{
			func_80(uParam0);
		}
		iVar0 = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
		if (!bLocal_20)
		{
			if (iVar0 == -1.247952E+29f || iVar0 == 7.07445f)
			{
				bLocal_20 = true;
				iLocal_23++;
			}
		}
		else if (((iVar0 == 6.459623f || iVar0 == 7.433228E-21f) || iVar0 == -8.360417E-27f) || iVar0 == 2.04328E+28f)
		{
			bLocal_20 = false;
		}
		if (!bLocal_21)
		{
			if (iVar0 == 7.276669E-23f || iVar0 == 1.505794E-08f)
			{
				bLocal_21 = true;
				iLocal_23 = (iLocal_23 - 1);
			}
		}
		else if (((iVar0 == 6.459623f || iVar0 == 7.433228E-21f) || iVar0 == -8.360417E-27f) || iVar0 == 2.04328E+28f)
		{
			bLocal_21 = false;
		}
		if (iLocal_23 == 0)
		{
			if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "BOOK_BLOCK_PAGE_PREV"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BOOK_BLOCK_PAGE_PREV", true, -1);
			}
		}
		else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "BOOK_BLOCK_PAGE_PREV"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BOOK_BLOCK_PAGE_PREV", false, -1);
		}
		if (iLocal_23 >= iLocal_24)
		{
			if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "BOOK_BLOCK_PAGE_NEXT"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BOOK_BLOCK_PAGE_NEXT", true, -1);
			}
		}
		else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "BOOK_BLOCK_PAGE_NEXT"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BOOK_BLOCK_PAGE_NEXT", false, -1);
		}
	}
	if (!bLocal_22 && iLocal_25 != 0)
	{
		if (TXD::HAS_STREAMED_TXD_LOADED(iLocal_25))
		{
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, 0), iLocal_25, 0, 0);
			bLocal_22 = true;
		}
	}
}

bool func_39(bool bParam0, int iParam1)
{
	switch (func_4(bParam0, -60352.49f))
	{
		case -1420737577:
			if (iParam1 == -4.051929E+37f)
			{
				return true;
			}
			break;
		case 1712126263:
			if (iParam1 == 4.189279E+30f || iParam1 == -1.614378E-21f)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -5.820473E+08f || iParam1 == 3.832371E-25f)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 5.64621E-11f || iParam1 == 20314.88f)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == -2.421264E+38f || iParam1 == -3.489867E+12f)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1.849101E-28f || iParam1 == 3.218224E-27f)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -5.173344E+14f || iParam1 == 6.711146E+15f)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 4.295204E-27f || iParam1 == 1.506218E+09f)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 14.1443f || iParam1 == -0.007020715f)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 9.485734E+35f || iParam1 == -4.965785E-08f)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == 1.1243E-27f || iParam1 == 6.462973E-22f)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 1.795249E+13f || iParam1 == 1.219333E+23f)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == 4.436702E+21f || iParam1 == -1.413211E+22f)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 1.154448E-14f || iParam1 == 2.749632E+31f)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -5.748226E+17f || iParam1 == -5.783572E+20f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_40(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_50(iParam0))
	{
		return false;
	}
	iVar0 = func_81(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_41(var uParam0, bool bParam1)
{
	if (func_5(bParam1, -6.191407E-06f))
	{
		if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(-1.32833E+17f, 8.661658E+16f) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_82(uParam0, bParam1);
		}
	}
	else if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(-1.32833E+17f, -2.098171E-25f) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_82(uParam0, bParam1);
	}
}

bool func_42(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_83(bParam0);
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
			if (!func_84(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_85(bParam0))
			{
				return true;
			}
			break;
	}
	return func_86(bParam0, 0, 0, 0) >= iParam1;
}

int func_43(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	if (!func_87(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_88(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_89(bParam0, bParam2);
	iVar2 = 0;
	if (func_83(bParam0) == -42.1084f)
	{
		if (!func_5(bParam0, 7.396633E-08f) && !func_5(bParam0, -6.685221E-33f))
		{
			bVar3 = true;
		}
	}
	if (func_90(bParam0, 8388608) && !func_91(27))
	{
		func_92(27);
	}
	func_93(bParam0);
	if (!bVar3)
	{
		if (func_5(bParam0, -7.272718E-19f))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_95(func_94(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_3() == -1)
				{
					func_96(bVar1);
				}
				if (func_97(0) && func_98(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_99(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_100(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_83(bParam0) == -3.265313E+23f)
		{
			if (!func_101(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_83(bParam0) == 6.919076E-28f && func_102(bParam0))
		{
			if (!func_103(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_5(bParam0, -1.355837E+35f))
		{
			func_105(func_104(-182.2023f), iVar0);
		}
		else if (bParam0 == 8.064365E+36f)
		{
			func_105(func_106(-1.250509E+13f, 6.875483E+36f), iVar0);
		}
		else if (func_5(bParam0, -3.187887E+34f) && !func_5(bParam0, 3.708451E-17f))
		{
			if (bParam0 != 4.568779E-32f)
			{
				func_107(536, 0);
			}
			if (func_5(bParam0, -2.826186E-34f) || func_5(bParam0, -5.200334E-11f))
			{
			}
		}
		else if (func_5(bParam0, -8.87647E+33f))
		{
			if (func_5(bParam0, -157.5682f))
			{
			}
		}
		else if (func_5(bParam0, -1.641295E-14f) && func_5(bParam0, 888.6404f))
		{
			func_107(519, 0);
		}
		else if (func_5(bParam0, 888.6404f) && func_5(bParam0, -1.086842E+20f))
		{
		}
		else if (func_5(bParam0, 4.619806E-19f))
		{
		}
		else if (func_5(bParam0, 9.243318E-18f))
		{
			if (func_108())
			{
				func_109(7.177414E+09f, 0, 1f, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_5(bParam0, 1.063826E-10f) && func_5(bParam0, 7.561756E-05f))
		{
			func_110(bParam0);
		}
		else if (func_5(bParam0, -1.56509E-23f))
		{
			func_111(bParam0);
		}
		else if (func_5(bParam0, -2.873199E-24f))
		{
			func_112(bParam0);
		}
		else if (func_5(bParam0, -0.08388482f) && func_5(bParam0, 7.561756E-05f))
		{
			func_113(bParam0);
		}
		else if (bParam0 == -2.680077E+18f)
		{
			Global_1940072.f_21 = 0;
		}
		else if (func_5(bParam0, 7.339242E+27f))
		{
			func_114();
		}
		else if (func_5(bParam0, -6.685221E-33f))
		{
		}
		else if (func_5(bParam0, 3.708451E-17f))
		{
		}
		else if (func_5(bParam0, -0.08388482f) && func_5(bParam0, -8.498268E-23f))
		{
		}
		else if (func_5(bParam0, -2.826186E-34f) || func_5(bParam0, -5.200334E-11f))
		{
		}
		else if (func_5(bParam0, -7.721469E-31f))
		{
			return 0;
		}
		else if (func_5(bParam0, 37699.67f))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_42(3.397524E-31f, 1))
					{
						func_43(3.397524E-31f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_42(6.760231E-15f, 1))
					{
						func_43(6.760231E-15f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_42(-13818.36f, 1))
					{
						func_43(-13818.36f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_42(4.642866E-20f, 1))
					{
						func_43(4.642866E-20f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_42(-21.88862f, 1))
					{
						func_43(-21.88862f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_42(5.120068E-22f, 1))
					{
						func_43(5.120068E-22f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_5(bParam0, -5.092244E+08f) && func_90(bParam0, 4))
		{
		}
		else if (func_5(bParam0, 9.811189E+11f))
		{
			func_115(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (bParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.126487E+31f;
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -4.003846E-11f;
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 4.742571E+17f;
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.01081E-28f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.95382E-16f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.95382E-16f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2.353932E-30f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2.353932E-30f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -3.627576E-31f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -3.627576E-31f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.722741E+37f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.722741E+37f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -5536.38f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -5536.38f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 7.333728E+10f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 7.333728E+10f;
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -8.132168E-17f;
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_117(272, func_116(-1.263708E+38f, 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_117(270, func_116(1.344431E-31f, 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_117(271, func_116(-7.101952E+23f, 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_118(685, 1.579975E+31f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_118(685, 42.3843f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_118(685, 2.097458E+12f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_118(685, -6.137742E-06f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_118(686, NaNf, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_118(686, -7.923627E-17f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_107(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_107(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_91(1))
				{
					func_107(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_107(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_3() == -1)
				{
					bParam0 = -7.729678E-14f;
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_107(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		bVar5 = bParam0;
		func_119(&bVar5);
		if (!func_100(bVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_97(0))
		{
			return 1;
		}
		if (func_83(bParam0) == -42.1084f)
		{
			func_120(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_97(0) && !func_121())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_43(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -4207915f, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_122(iVar2, 0);
		}
	}
	Var30 = { func_123(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_124(bParam0);
	if (fParam6 > 0f)
	{
		if (func_5(bParam0, -5.092244E+08f))
		{
			func_125(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 3787186f;
		func_126(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

bool func_44(var uParam0)
{
	bool bVar0;

	if (uParam0->f_116)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_101, "letter_item"))
		{
			bVar0 = DECORATOR::DECOR_GET_INT(uParam0->f_101, "letter_item");
		}
		else
		{
			bVar0 = TASK::GET_ITEM_INTERACTION_ITEM_ID(Global_33);
			if (!func_22(bVar0, 0))
			{
			}
		}
		Global_1913429 = bVar0;
	}
	else
	{
		bVar0 = Global_1913429;
	}
	return bVar0;
}

void func_45(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_105 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(bParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_105)
	{
		uParam0->f_5.f_2[iVar0 /*5*/] = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_TYPE(bParam1, iVar0);
		uParam0->f_5.f_2[iVar0 /*5*/].f_2 = uParam0->f_5.f_2[iVar0 /*5*/];
		uParam0->f_5.f_2[iVar0 /*5*/].f_1 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(bParam1, uParam0->f_5.f_2[iVar0 /*5*/].f_2);
		iVar0++;
	}
}

void func_46(var uParam0, var uParam1)
{
	func_127(uParam0, (*uParam1)[0 /*11*/]);
	func_128(uParam0, uParam1);
	if ((*uParam1)[1 /*11*/] != 0)
	{
		func_129(1, (*uParam1)[1 /*11*/]);
	}
	else
	{
		func_19(1);
	}
	func_130(uParam0, uParam1);
	if ((*uParam1)[2 /*11*/] != 0)
	{
		func_129(2, (*uParam1)[2 /*11*/]);
	}
	else
	{
		func_19(2);
	}
	func_131(uParam1);
	func_132(uParam1);
}

int func_47(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_1)
	{
		if (uParam0->f_7.f_1 == 0)
		{
			uParam0->f_7.f_1 = HUD::UI_REQUEST_SCENE(uParam0->f_7.f_3, -2);
		}
		if (uParam0->f_7.f_1 != 0 && uParam0->f_7 == 0)
		{
			uParam0->f_7 = HUD::UI_GET_SCENE_UIOBJECT(uParam0->f_7.f_1);
			if (iParam1 == 0)
			{
				if (!func_133(uParam0))
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else if (func_134(*uParam0, &iVar0, 4.975531E-10f, -2.889029E+24f, 0, 0))
	{
		if (TXD::DOES_STREAMED_TXD_EXIST(iVar0))
		{
			TXD::REQUEST_STREAMED_TXD(iVar0, false);
			uParam0->f_5 = iVar0;
		}
	}
	return 1;
}

bool func_48(var uParam0, var uParam1)
{
	if (func_135(uParam0, uParam1[0 /*11*/]))
	{
		func_136(uParam0, uParam1);
		return true;
	}
	return false;
}

int func_49(var uParam0, var uParam1)
{
	return 1;
}

bool func_50(int iParam0)
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

bool func_51(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_50(iParam0))
	{
		return false;
	}
	iVar0 = func_81(iParam0);
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

void func_52(bool bParam0, int iParam1)
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

bool func_53(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	uParam0->f_110 = 0;
	if (func_40(Global_17402[1], 1))
	{
		iVar0 = 1;
		uParam0->f_110 = 1;
		func_75(&(Global_17402[1]), !uParam0->f_125);
		func_75(&(Global_17402[0]), 1);
	}
	if (func_40(Global_17402[0], 1))
	{
		iVar0 = 1;
		func_75(&(Global_17402[0]), !uParam0->f_124);
		func_75(&(Global_17402[1]), 1);
	}
	return iVar0;
}

int func_54(bool bParam0)
{
	switch (func_4(bParam0, -60352.49f))
	{
		case -1420737577:
			return -4.051929E+37f;
		case 1712126263:
			return 4.189279E+30f;
		case 10252101:
			return -5.820473E+08f;
		case -1229959999:
			return 5.64621E-11f;
		case -1050374492:
			return -2.421264E+38f;
		case 1513351077:
			return -1.849101E-28f;
		case -1565009253:
			return -5.173344E+14f;
		case 733893097:
			return 4.295204E-27f;
		case -164980960:
			return 14.1443f;
		case 1894156335:
			return 9.485734E+35f;
		case 871191033:
			return 1.1243E-27f;
		case -1273369295:
			return 1.795249E+13f;
		case 82200319:
			return 4.436702E+21f;
		case -873135685:
			return 1.65859E-21f;
		case 24248412:
			return -1.338903f;
	}
	return 0;
}

bool func_55()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_56(int iParam0)
{
	return (iParam0 == -1.555482E+21f || iParam0 == 9.01449E+11f);
}

void func_57(bool bParam0, int iParam1)
{
	bool bVar0;
	struct<2> Var1;
	struct<12> Var11;

	bVar0 = func_137(bParam0, 1);
	if (func_138(bVar0))
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var11.f_9 = 1;
		Var11.f_11 = -5.45926E-19f;
		if (func_139(&Var1, bVar0, &Var11, 1, iParam1, -1, 0))
		{
		}
	}
}

void func_58(int iParam0)
{
	switch (iParam0)
	{
		case 684416450: /* GXTEntry: "Letter from Horley" */
			func_140(-8.029485E-13f, 0);
			break;
		case -492264119: /* GXTEntry: "Letter from Cripps" */
			func_140(-1.182024E-34f, 0);
			func_107(861, 0);
			break;
		case 1397875340:
			func_140(2.422637E-20f, 0);
			break;
	}
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case -31140163: /* GXTEntry: "Panoramic Map" */
			return 0;
	}
	return 1;
}

void func_60(var uParam0)
{
	(*uParam0)[0 /*11*/] = 0;
	(uParam0[0 /*11*/])->f_1 = 0;
	(uParam0[0 /*11*/])->f_3 = 0;
	(uParam0[0 /*11*/])->f_5 = 0;
	(uParam0[0 /*11*/])->f_6 = 0;
	(uParam0[0 /*11*/])->f_7 = 0;
	(uParam0[0 /*11*/])->f_7.f_1 = 0;
	(uParam0[0 /*11*/])->f_7.f_2 = 0;
	(uParam0[0 /*11*/])->f_7.f_3 = 0;
	func_63(uParam0);
}

void func_61(var uParam0)
{
	(*uParam0)[0 /*11*/] = (*uParam0)[2 /*11*/];
	(uParam0[0 /*11*/])->f_1 = (uParam0[2 /*11*/])->f_1;
	(uParam0[0 /*11*/])->f_5 = (uParam0[2 /*11*/])->f_5;
	(uParam0[0 /*11*/])->f_6 = (uParam0[2 /*11*/])->f_6;
	(uParam0[0 /*11*/])->f_7 = (uParam0[2 /*11*/])->f_7;
	(uParam0[0 /*11*/])->f_7.f_1 = (uParam0[2 /*11*/])->f_7.f_1;
	(uParam0[0 /*11*/])->f_7.f_2 = (uParam0[2 /*11*/])->f_7.f_2;
	(uParam0[0 /*11*/])->f_7.f_3 = (uParam0[2 /*11*/])->f_7.f_3;
	(uParam0[0 /*11*/])->f_3 = 0;
}

void func_62(var uParam0)
{
	(*uParam0)[0 /*11*/] = (*uParam0)[1 /*11*/];
	(uParam0[0 /*11*/])->f_1 = (uParam0[1 /*11*/])->f_1;
	(uParam0[0 /*11*/])->f_5 = (uParam0[1 /*11*/])->f_5;
	(uParam0[0 /*11*/])->f_6 = (uParam0[1 /*11*/])->f_6;
	(uParam0[0 /*11*/])->f_7 = (uParam0[1 /*11*/])->f_7;
	(uParam0[0 /*11*/])->f_7.f_1 = (uParam0[1 /*11*/])->f_7.f_1;
	(uParam0[0 /*11*/])->f_7.f_2 = (uParam0[1 /*11*/])->f_7.f_2;
	(uParam0[0 /*11*/])->f_7.f_3 = (uParam0[1 /*11*/])->f_7.f_3;
	(uParam0[0 /*11*/])->f_3 = 0;
}

void func_63(var uParam0)
{
	(*uParam0)[2 /*11*/] = 0;
	(uParam0[2 /*11*/])->f_1 = 0;
	(uParam0[2 /*11*/])->f_3 = 0;
	(uParam0[2 /*11*/])->f_5 = 0;
	(uParam0[2 /*11*/])->f_6 = 0;
	(uParam0[2 /*11*/])->f_7 = 0;
	(uParam0[2 /*11*/])->f_7.f_1 = 0;
	(uParam0[2 /*11*/])->f_7.f_2 = 0;
	(uParam0[2 /*11*/])->f_7.f_3 = 0;
	(*uParam0)[1 /*11*/] = 0;
	(uParam0[1 /*11*/])->f_1 = 0;
	(uParam0[1 /*11*/])->f_3 = 0;
	(uParam0[1 /*11*/])->f_5 = 0;
	(uParam0[1 /*11*/])->f_6 = 0;
	(uParam0[1 /*11*/])->f_7 = 0;
	(uParam0[1 /*11*/])->f_7.f_1 = 0;
	(uParam0[1 /*11*/])->f_7.f_2 = 0;
	(uParam0[1 /*11*/])->f_7.f_3 = 0;
}

int func_64(bool bParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	float fVar0;

	switch (func_4(bParam0, -60352.49f))
	{
		case -1420737577:
			if (!bParam1)
			{
				fVar0 = 1.616249E+38f;
				if (bParam2)
				{
					fVar0 = 3.086004E+19f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				fVar0 = 6.87044E+18f;
				if (bParam2)
				{
					fVar0 = -5.521301E-13f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				fVar0 = 2569.067f;
				if (bParam2)
				{
					fVar0 = -3.852978E-26f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				fVar0 = 1.275529E-26f;
				if (bParam2)
				{
					fVar0 = 1.168495E-11f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				fVar0 = 5.112149E-07f;
				if (bParam2)
				{
					fVar0 = -25.7965f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				fVar0 = 6352870f;
				if (bParam2)
				{
					fVar0 = -2.030725E-36f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				fVar0 = 2.639068E-23f;
				if (bParam2)
				{
					fVar0 = 3.751221E+32f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				fVar0 = -7.955704E+33f;
				if (bParam2)
				{
					fVar0 = 3.918E+33f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				fVar0 = 2.766244E+26f;
				if (bParam2)
				{
					fVar0 = 1.724331E-25f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				fVar0 = 1.274062E+08f;
				if (bParam2)
				{
					fVar0 = -5.094612E+36f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				fVar0 = -7.145436E+37f;
				if (bParam2)
				{
					fVar0 = -5.741401E-10f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				fVar0 = -1.473011E-05f;
				if (bParam2)
				{
					fVar0 = -0.007812119f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				fVar0 = -8.522698E-13f;
				if (bParam2)
				{
					fVar0 = -3.129801E-18f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				fVar0 = 0.01512622f;
				if (bParam2)
				{
					fVar0 = 5.348378E-24f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				fVar0 = -1.362969E-06f;
				if (bParam2)
				{
					fVar0 = -3.852978E-26f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_65(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_66(int iParam0)
{
	return func_141(iParam0);
}

bool func_67(bool bParam0)
{
	return (func_5(bParam0, 1.293259E-18f) && !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-3.737229E-35f));
}

bool func_68(bool bParam0)
{
	return ((func_5(bParam0, -1.001123E-14f) && func_6(bParam0)) && !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-3.737229E-35f));
}

bool func_69(int iParam0)
{
	if (iParam0 == 5.413794E-36f)
	{
		return true;
	}
	return false;
}

void func_70(var uParam0)
{
	if (uParam0->f_105 > 0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
	}
}

void func_71(var uParam0, bool bParam1)
{
	if (func_50(*uParam0))
	{
		func_142(*uParam0, bParam1, 0, 1);
	}
}

bool func_72(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_33(*uParam1, uParam0->f_104))
	{
		bVar0 = !func_5(*uParam1, 0.3292362f);
	}
	if (func_73(*uParam1, uParam0->f_104))
	{
		bVar0 = func_5(*uParam1, 2.309315E-17f);
	}
	return bVar0;
}

bool func_73(bool bParam0, int iParam1)
{
	switch (func_4(bParam0, -60352.49f))
	{
		case 1712126263:
			if (iParam1 == 3.290229E+37f)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -9.874469E+25f)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 6.700325E-25f)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 0.01185228f)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 3.25041E-25f)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -9.062231E+20f)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == -1.003593E-05f)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 4.956291E+20f)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 3.720509E-14f)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == 7.770524E+28f)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -7.810243E+28f)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == 2.853401E+30f)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -2.402521E+32f)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -1.283138E-36f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_74(int iParam0, bool bParam1)
{
	if (bParam1 && !func_50(iParam0))
	{
		return false;
	}
	return !func_143(iParam0, 4);
}

void func_75(var uParam0, bool bParam1)
{
	if (func_50(*uParam0))
	{
		func_142(*uParam0, bParam1, 1, 1);
	}
}

void func_76(var uParam0, var uParam1)
{
	func_75(&(Global_17402[3]), func_72(uParam0, uParam1));
}

bool func_77(bool bParam0, int iParam1)
{
	switch (func_4(bParam0, -60352.49f))
	{
		case 1712126263:
			if (iParam1 == 8.009318E-14f)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == 2.73139E-14f)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 3.19383E+31f)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 6.119354E-19f)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 1.145452E-14f)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == 0.0002018215f)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 9.170414E-36f)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 6.283986E-30f)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 4.540411E-19f)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == 452898.2f)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 5.172764E-20f)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == 146.4619f)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 3.387079E+07f)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 6.957901E-31f)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_78(var uParam0)
{
}

void func_79(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iLocal_26))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iLocal_26);
	}
	func_17(uParam0);
	iLocal_26 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_26, "Generic");
	iVar2 = 0;
	iLocal_24 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE((*uParam1)[0 /*11*/], uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					func_144(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				default:
					func_145(&(uParam0->f_5), iVar1, &iVar2, 2, 1);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_80(var uParam0)
{
	int iVar0;
	int iVar1;

	iLocal_24 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
				case 1724675796:
					break;
				default:
					if (!uParam0->f_5.f_2[iVar1 /*5*/].f_3)
					{
						iLocal_24++;
						uParam0->f_5.f_2[iVar1 /*5*/].f_4 = iLocal_24;
					}
					uParam0->f_5.f_2[iVar1 /*5*/].f_3 = 1;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

int func_81(int iParam0)
{
	return iParam0;
}

void func_82(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "Generic");
	if (func_5(bParam1, 27.54461f))
	{
		func_146(uParam0, bParam1);
	}
	else if (func_5(bParam1, 1.570684E+33f))
	{
		if (func_5(bParam1, -1.182666E+07f))
		{
			func_147(uParam0, bParam1);
		}
		else
		{
			func_148(uParam0, bParam1);
		}
	}
	else if (func_5(bParam1, 1.570684E+33f))
	{
		func_148(uParam0, bParam1);
	}
	else if (func_5(bParam1, -1.341536E+11f))
	{
		func_149(uParam0, bParam1);
	}
	else if (func_5(bParam1, -1.384179E-36f))
	{
		func_150(uParam0, bParam1);
	}
	else if (func_4(bParam1, 512441.5f) == 226.647f)
	{
		func_151(uParam0, bParam1);
	}
	else if (func_5(bParam1, -6.191407E-06f))
	{
	}
	else
	{
		func_152(uParam0, bParam1);
	}
}

int func_83(bool bParam0)
{
	vector3 vVar0;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_84(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_153(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_154("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_155(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_156(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_14(iVar1);
				return true;
			}
			iVar3++;
		}
		func_14(iVar1);
	}
	return false;
}

bool func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_157(bParam0);
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
	iVar1 = func_158(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_159(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_160(bParam0);
	iVar2 = func_159(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_83(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_153(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_161(bParam0, 0);
	}
	if (func_162(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_163(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_164(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_163(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_87(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_3() == -1)
	{
		if (func_165(bParam0) && func_166(bParam0))
		{
			func_167(bParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (bParam0 == 9605447f)
	{
		bParam2 = true;
	}
	else if (bParam0 == -3.273909E-18f)
	{
		return false;
	}
	return true;
}

bool func_88(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_168(bParam0, iParam1);
	Var0 = { func_169(bParam0, 0, 1) };
	iVar5 = func_170(bParam0, &Var0, 0, 0);
	iVar6 = func_171(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_5(bParam0, -1.690907E-35f))
		{
			func_107(674, 1);
		}
		else if (func_3() == -1)
		{
			func_107(673, 0);
		}
	}
	if (func_172(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_89(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_173())
	{
		return;
	}
	switch (func_4(bParam0, -60352.49f))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940072.f_70.f_5 = 1;
			Global_1940072.f_70.f_6 = 0;
			Global_1940072.f_70.f_1 = bParam0;
			break;
	}
}

bool func_90(bool bParam0, int iParam1)
{
	if (!func_22(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_91(int iParam0)
{
	if (!func_174(iParam0))
	{
		return false;
	}
	return func_175(iParam0);
}

void func_92(int iParam0)
{
	if (!func_174(iParam0))
	{
		return;
	}
	func_176(iParam0);
	func_177(iParam0);
}

void func_93(bool bParam0)
{
	if (func_5(bParam0, -1.640085E-16f))
	{
		func_178(-2.462866E+08f, 0, 255, 0, 0);
	}
	else if (func_5(bParam0, -4.561297E+28f))
	{
		func_178(-4249.272f, 0, 255, 0, 0);
	}
	else if (func_5(bParam0, 2.133228E-14f))
	{
		func_178(-5.046843E+11f, 0, 255, 0, 0);
	}
	else if (func_5(bParam0, 5.050617E+08f))
	{
		func_178(2.629104E-17f, 0, 255, 0, 0);
	}
}

bool func_94(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = -7.135455E-16f;
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = -7.135455E-16f;
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = 2.870844E+29f;
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = 2.870844E+29f;
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = 2.176132E+38f;
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_BOLAS"):
			bVar0 = 1284.666f;
			break;
		case joaat("AMMO_POISONBOTTLE"):
			bVar0 = -1.27948E+18f;
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = 5.420628E-33f;
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = 1.96266E-13f;
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = -1.776182E+22f;
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = 1.387712E-18f;
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = -5.528462E+28f;
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = -0.02419633f;
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = -7.093211E-30f;
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = 4.318794E-22f;
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = 1.396023E+32f;
			break;
		default:
			break;
	}
	if (func_22(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_179(bVar0) || func_180(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

bool func_95(bool bParam0, bool bParam1)
{
	if (!func_22(bParam0, 0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return false;
}

void func_96(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 != -1)
	{
		return;
	}
	if (!func_156(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_97(bool bParam0)
{
	if (func_3() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_163(bParam0));
}

bool func_98(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		Var0 = { func_169(bParam0, 0, 1) };
		if (func_181(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_182(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_183(bParam0, Var0, Var0.f_4, 0) };
				func_184(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_97(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return false;
		}
		func_99(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_185(bParam0, iParam1);
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_99(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_102(bParam0))
	{
		return false;
	}
	if (!func_97(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	return true;
}

int func_100(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_162(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_186(bParam0, iParam1, iParam2);
	}
	Var1 = { func_169(bParam0, 0, 1) };
	Var6 = { func_183(bParam0, Var1, Var1.f_4, 0) };
	return func_187(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_101(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_95(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_3() == -1)
		{
			func_96(bVar0);
			if (iParam1 == 3787186f)
			{
				func_188(bVar0);
			}
		}
		if (!func_172(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_167(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_189(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_98(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == -1.197024E-12f || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_98(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_98(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == 3.3488E-21f && !func_190())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_191(bVar0))
				{
					func_98(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_98(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_192(Global_33, 2, 0, 1);
				if ((((func_156(bVar7) && !Global_26688) && bVar7 != bVar0) && !func_42(-0.0002099206f, 1)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, bVar7);
				}
				if (func_156(bVar7) && func_42(-0.0002099206f, 1))
				{
					if (!func_98(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_98(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_98(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && iParam1 == 3787186f)
	{
		func_107(515, 1);
	}
	return true;
}

bool func_102(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_102(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_156(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_33, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(bVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_117(func_193(bParam0), func_116(bParam0, 0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_97(0))
	{
		if (func_99(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_100(bParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_104(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_105(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_106(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_194(iParam0, &iVar0, &iVar1);
	if (!func_195(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_196(iVar0, iVar1);
}

bool func_108()
{
	return false;
}

int func_109(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_3() == 0)
	{
		func_122(iParam0, 0);
		return 0;
	}
	iVar0 = func_197(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_198(iVar0, sParam4, iParam5, 0);
	}
	func_199(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_110(bool bParam0)
{
}

void func_111(bool bParam0)
{
}

void func_112(bool bParam0)
{
}

void func_113(bool bParam0)
{
}

void func_114()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-9.596595E-08f) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-9.596595E-08f, -3.936833E-09f, 1);
	}
}

void func_115(bool bParam0, int iParam1)
{
	var uVar0;

	func_200(bParam0, iParam1, &uVar0);
}

bool func_116(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_201(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

void func_117(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_194(iParam0, &iVar0, &iVar1);
	if (!func_195(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_202(iParam0, 1024))
	{
		return;
	}
	func_196(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_118(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_194(iParam0, &iVar0, &iVar1);
	if (!func_195(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_202(iParam0, 1024))
	{
		return;
	}
	func_196(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = fParam1;
	if (!bParam3)
	{
		Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

void func_119(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = -1.177047E+07f;
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = 2.106782E+14f;
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = 1.62503E-31f;
			break;
	}
}

void func_120(bool bParam0)
{
	if (func_3() != -1)
	{
		return;
	}
}

bool func_121()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_122(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_203(&Var4, 2.95884E+10f);
	return func_204(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_123(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_22(bParam0, 0))
	{
		return Var0;
	}
	if (func_5(bParam0, -8.087424E+27f))
	{
		if (func_3() == -1)
		{
			if (func_5(bParam0, -3.480943E+19f))
			{
				return func_205(4.052717E-32f);
			}
			else
			{
				return func_205(9918.3f);
			}
		}
	}
	else if (func_5(bParam0, -3.480943E+19f))
	{
		return func_205(-18395.16f);
	}
	if (func_5(bParam0, 4.091206E+36f))
	{
		return func_205(3.674458E+22f);
	}
	return Var2;
}

void func_124(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_125(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_206(Global_1902818.f_37);
	func_208(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_207(bParam0), 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_126(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	float fVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_22(bParam0, 0))
	{
		return;
	}
	else if (bParam0 == 4.553053E+26f)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_209() || bParam6)
	{
		func_210(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_211(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_211(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_90(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_83(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_5(bParam0, -5.215192E-33f)) && !func_5(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_157(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_212(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 1.435927E-34f)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	fVar13 = 4.808429E-35f;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		fVar13 = 1.058639E-16f;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_5(bParam0, 6.834376E-22f))
	{
		sVar17 = func_213(bParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			fVar13 = -1.284544E+08f;
		}
		else
		{
			fVar13 = -2.926177E-30f;
		}
	}
	if (func_5(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_214(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			fVar13 = -1.101616E-25f;
		}
		else
		{
			fVar13 = -2.926177E-30f;
		}
	}
	bVar18 = func_116(bParam0, 0);
	if ((func_215(iVar12) && func_5(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_216(bParam0);
	}
	else if (func_83(bParam0) == -42.1084f)
	{
		bVar19 = func_217(bParam0);
		if (func_22(bVar19, 0))
		{
			bVar18 = func_116(bVar19, 0);
		}
	}
	if (func_218(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_219(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_220(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_221(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_222(bParam0, &cVar22))
		{
			sVar21 = func_224(func_223(cVar22), 4.808429E-35f);
		}
	}
	func_208(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

int func_127(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;

	if (func_154("ALL SATCHEL EXCLUDING CLOTHING", &(uParam0->f_1.f_1), &(uParam0->f_1), 4.978612f, 0))
	{
		uParam0->f_119 = 1;
		iVar0 = 0;
		iVar1 = 0;
		if (uParam0->f_1 > 0)
		{
			Var2.f_9 = -5.45926E-19f;
			iVar0 = (uParam0->f_1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_155(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (iParam1 == Var2.f_4)
					{
						uParam0->f_1.f_2 = iVar0;
						uParam0->f_1.f_3 = iVar1;
					}
					if (Global_1940239.f_11587 == 0)
					{
						if (func_225(&Var2, 0))
						{
							iVar1++;
						}
						if (iVar1 >= 16)
						{
							return 1;
						}
					}
				}
				iVar0 = (iVar0 + -1);
			}
			return 1;
		}
	}
	return 0;
}

bool func_128(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	bool bVar15;

	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		(*uParam1)[2 /*11*/] = 0;
		return false;
	}
	if (Global_17414)
	{
		return false;
	}
	if (!uParam0->f_119)
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	iVar14 = 0;
	bVar15 = false;
	iVar14 = uParam0->f_1.f_2 + 1;
	while (iVar14 <= (uParam0->f_1 - 1))
	{
		if (func_155(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_226((*uParam1)[0 /*11*/], Var0.f_4))
			{
				if (!bVar15)
				{
					(*uParam1)[1 /*11*/] = Var0.f_4;
					bVar15 = true;
				}
				else
				{
					uParam0->f_124 = 0;
					return bVar15;
				}
			}
		}
		iVar14++;
	}
	if (!bVar15)
	{
		(*uParam1)[1 /*11*/] = 0;
	}
	return bVar15;
}

void func_129(int iParam0, bool bParam1)
{
	if (!func_22(bParam1, 0))
	{
		return;
	}
	if ((!func_5(bParam1, 4.196335E-12f) && !func_5(bParam1, -1.637705E-21f)) && !func_5(bParam1, 2.805445E+37f))
	{
		return;
	}
	if (bParam1 != Global_1913601[iParam0 /*6*/])
	{
		Global_1913601[iParam0 /*6*/].f_1 = 3;
		Global_1913601[iParam0 /*6*/] = bParam1;
		Global_1913601[iParam0 /*6*/].f_5 = 0;
	}
}

bool func_130(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;

	Var0.f_9 = -5.45926E-19f;
	iVar14 = 0;
	iVar15 = (16 - uParam0->f_1.f_3);
	if (Global_17414)
	{
		return false;
	}
	if (!uParam0->f_119)
	{
		return false;
	}
	bVar17 = false;
	iVar14 = (uParam0->f_1.f_2 - 1);
	while (iVar14 >= 0)
	{
		if (Global_1940239.f_11587 == 0)
		{
			iVar16++;
			if (iVar16 >= iVar15)
			{
				return false;
			}
		}
		if (func_155(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_226((*uParam1)[0 /*11*/], Var0.f_4))
			{
				if (!bVar17)
				{
					(*uParam1)[2 /*11*/] = Var0.f_4;
					bVar17 = true;
				}
				else
				{
					uParam0->f_125 = 0;
					return bVar17;
				}
			}
		}
		iVar14 = (iVar14 + -1);
	}
	if (!bVar17)
	{
		(*uParam1)[2 /*11*/] = 0;
	}
	return bVar17;
}

void func_131(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_22((*uParam0)[iVar0 /*11*/], 0))
		{
			func_227(uParam0[iVar0 /*11*/]);
		}
		iVar0++;
	}
}

void func_132(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_22((*uParam0)[iVar0 /*11*/], 0))
		{
			(uParam0[iVar0 /*11*/])->f_6 = func_4((*uParam0)[iVar0 /*11*/], -60352.49f);
		}
		iVar0++;
	}
}

bool func_133(var uParam0)
{
	if ((!uParam0->f_3 && uParam0->f_7.f_1 != 0) && uParam0->f_7 != 0)
	{
		HUD::UI_MOVIEVIEW_SET_RENDER_TARGET(uParam0->f_7, uParam0->f_7.f_2);
		uParam0->f_3 = 1;
		return true;
	}
	return false;
}

bool func_134(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_135(var uParam0, var uParam1)
{
	if (uParam1->f_3)
	{
		return true;
	}
	if (uParam1->f_1)
	{
		return func_133(uParam1);
	}
	else if (uParam1->f_5 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101) && TXD::HAS_STREAMED_TXD_LOADED(uParam1->f_5))
		{
			if (!uParam1->f_3)
			{
				OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam0->f_101, uParam1->f_5, 0, 0);
			}
			uParam1->f_3 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_136(var uParam0, var uParam1)
{
	return 0;
}

bool func_137(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_22(bParam0, 0))
	{
		return func_228(func_23(bParam0), bParam1);
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

bool func_138(bool bParam0)
{
	return bParam0 != 0;
}

bool func_139(int* iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_229(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_230(bParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_231(bParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_17 = bParam1;
	uParam2->f_8 = bParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 3787186f;
	if (!func_232(iParam0, *uParam2, 1.704487E-19f, iParam3))
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

int func_140(int iParam0, int iParam1)
{
	struct<30> Var0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1292096.f_459.f_1546 >= 40)
	{
		func_233();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_234();
	Var0.f_3 = iParam1;
	func_235(Var0, 0);
	return Var0;
}

bool func_141(int iParam0)
{
	return func_236(Global_1940072.f_38, iParam0);
}

void func_142(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_50(iParam0))
	{
		return;
	}
	iVar0 = func_81(iParam0);
	if (bParam1)
	{
		func_237(iParam0, 4);
		if (bParam3)
		{
			func_238(iVar0, 1);
		}
		func_239(iVar0, 1);
	}
	else
	{
		func_240(iParam0, 4);
		func_239(iVar0, 0);
	}
}

bool func_143(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_144(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[16];

	if (iParam1 >= 11)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 16);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "style", iParam2);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	uParam0->f_76[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_76[iParam1], "isVisible", bParam3);
}

void func_145(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	char cVar0[16];

	if (*iParam2 >= 11)
	{
		return;
	}
	if (!uParam0->f_2[iParam1 /*5*/].f_3)
	{
		iLocal_24++;
		uParam0->f_2[iParam1 /*5*/].f_4 = iLocal_24;
	}
	uParam0->f_2[iParam1 /*5*/].f_3 = 1;
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, *iParam2, 16);
	uParam0->f_64[*iParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[*iParam2], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[*iParam2], "style", iParam3);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, *iParam2, 16);
	uParam0->f_76[*iParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_76[*iParam2], "isVisible", bParam4);
	*iParam2++;
}

void func_146(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(bParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_144(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					func_144(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					func_144(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					func_144(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					func_144(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					func_144(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					func_144(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_147(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			if (func_241(iVar0))
			{
				uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(bParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
				sVar3 = HUD::GET_STRING_FROM_HASH_KEY(uParam0->f_5);
				uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(bParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0 + 1);
				if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_MH"))
				{
					func_144(&(uParam0->f_5), iVar2, 0, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_SH"))
				{
					func_144(&(uParam0->f_5), iVar2, 1, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_C"))
				{
					func_144(&(uParam0->f_5), iVar2, 3, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_J"))
				{
					func_144(&(uParam0->f_5), iVar2, 4, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_L"))
				{
					func_144(&(uParam0->f_5), iVar2, 2, 0, 0);
				}
				iVar2++;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_148(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(bParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_144(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_149(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(bParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_144(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					func_144(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					func_144(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = bParam1;
	func_144(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_150(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(bParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					func_144(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_144(&(uParam0->f_5), iVar2, 2, 0, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_151(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(bParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					func_144(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					func_144(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					func_144(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					func_144(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					func_144(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					func_144(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					func_144(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					func_144(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_152(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(bParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 159464507:
				case 1410847083:
					func_242(bParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					func_242(bParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					func_242(bParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					func_242(bParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_242(bParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_153(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_83(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_5(bParam0, 9.811189E+11f))
	{
		func_200(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_154(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_163(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_155(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_156(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

int func_157(bool bParam0)
{
	struct<2> Var0;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_158(bool bParam0)
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

int func_159(var uParam0, int iParam1)
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

int func_160(bool bParam0)
{
	int iVar0;

	iVar0 = func_157(bParam0);
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

int func_161(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_243(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_245(&Var0, func_244(0));
	}
	if (!func_246(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_14(iVar18);
	return iVar19;
}

int func_162(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_65(func_23(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_163(bool bParam0)
{
	if (func_3() == -1)
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

struct<4> func_164(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_169(bParam0, bParam1, 0) };
	return func_183(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_165(bool bParam0)
{
	return func_83(bParam0) == -3.265313E+23f;
}

bool func_166(bool bParam0)
{
	var uVar0;

	if (func_3() != -1)
	{
		return false;
	}
	if (func_90(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_172(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_42(bParam0, 1);
}

void func_167(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_83(bParam0) != -3.265313E+23f)
	{
		return;
	}
	bVar0 = func_95(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_180(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_86(bParam0, 0, 0, 0) == 0))
		{
			if (func_3() == -1)
			{
				func_96(bVar0);
			}
			if (!*bParam3 && !iParam4 == 3787186f)
			{
				func_126(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_168(bool bParam0, int iParam1)
{
	if (func_5(bParam0, 7.644572E-37f))
	{
		func_219(bParam0, -982726.7f, iParam1, 1);
	}
}

struct<5> func_169(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_247(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_83(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_183(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_244(bParam1) };
			if (bParam2 && func_248(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_181(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_181(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_182(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_249(bParam1) };
			switch (func_157(bParam0))
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
			if (func_250(bParam0, -2.580501E-27f))
			{
				Var0 = { func_183(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_250(bParam0, -4.220332E-15f))
			{
				Var0 = { func_183(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_183(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_250(bParam0, -3.171238E-21f))
			{
				Var0 = { func_183(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_251(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_250(bParam0, -3.171238E-21f))
			{
				Var0 = { func_183(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

int func_170(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_22(bParam0, 0))
	{
		if (func_65(func_23(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_83(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_162(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, iParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_163(bParam3), bParam0);
}

int func_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_102(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_163(bParam1), bParam0, bParam3);
}

bool func_172(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_252(&bParam0);
	if (!func_22(bParam0, 0) && !func_65(func_23(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_162(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_165(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_244(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_181(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_182(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_248(bParam0, 1))
		{
			if (!func_181(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_182(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_170(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_253(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_173()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_254(Global_33, 8.330918E+10f)) && !func_254(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

bool func_174(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

void func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_38.f_3651[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_38.f_3651[iVar1] = uVar3;
}

void func_177(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_255(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_256(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_256(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_256(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_257(1);
			break;
		case 33:
			func_258(1);
			break;
		case 34:
			func_259(1);
			break;
		case 35:
			break;
		case 36:
			func_260(0);
			break;
		case 37:
			func_261(0);
			break;
		case 38:
			func_262(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_263() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_107(677, 0);
			break;
		case 3:
			if (func_263() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_107(678, 0);
			break;
		case 4:
			if (func_263() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_107(679, 0);
			break;
		case 5:
			if (func_263() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_107(680, 0);
			break;
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.628467E+31f, true);
			UNLOCK::UNLOCK_SET_VISIBLE(-4.628467E+31f, true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
		case 47:
			if (func_3() == -1)
			{
				if (!func_42(0.01458261f, 1))
				{
					func_100(0.01458261f, 1, 6.028273E-12f);
				}
			}
			break;
		case 49:
			if (func_3() == -1)
			{
				if (!func_42(0.01458261f, 1))
				{
					func_100(0.01458261f, 1, 6.028273E-12f);
				}
				if (!func_42(7.734759E-34f, 1))
				{
					func_100(7.734759E-34f, 1, 6.028273E-12f);
				}
			}
			break;
		case 48:
			if (func_3() == -1)
			{
				if (!func_42(1.044822E-10f, 1))
				{
					func_100(1.044822E-10f, 1, 6.028273E-12f);
				}
			}
			break;
		case 50:
			if (func_3() == -1)
			{
				if (!func_42(1.044822E-10f, 1))
				{
					func_100(1.044822E-10f, 1, 6.028273E-12f);
				}
				if (!func_42(-1.840652E+20f, 1))
				{
					func_100(-1.840652E+20f, 1, 6.028273E-12f);
				}
			}
			break;
		case 22:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			UNLOCK::UNLOCK_SET_UNLOCKED(-3.989886E+08f, true);
			Global_1940186.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 51:
			UNLOCK::UNLOCK_SET_UNLOCKED(-1.056862E+36f, true);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(-1.092788E+25f, true);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(2.756398E-28f, true);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.80995E-29f, true);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(8.669974E+11f, true);
			break;
	}
}

int func_178(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_265(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_179(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_180(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_181(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_253(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_182(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_266(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_183(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_22(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_163(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_184(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_267(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_251(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_97(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_3() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_268(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_269(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_163(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_185(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_270(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

int func_186(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_162(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_169(bParam0, 0, 0) };
	if (func_172(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_97(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_163(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_187(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_172(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_97(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_163(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_188(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940186.f_6)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_33, sVar0, bParam0);
	iVar2 = func_271();
	func_272(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

int func_189(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_273(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, 0.0001101296f) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_190()
{
	return false;
}

bool func_191(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_192(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_193(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_91(49))
			{
				if (!func_91(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_91(50))
			{
				if (!func_91(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_195(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_274(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_275(iParam0))
	{
		return false;
	}
	if (func_276(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_202(iParam0, 1)) || func_277(32768))
	{
		if (!func_202(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_278())
	{
		return false;
	}
	return true;
}

void func_196(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_197(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_3() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_42(6.217872E+26f, 1))
	{
		fVar0 = (fVar0 + 1036831949);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_33, true, true, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == 3.996812E+36f)
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = Var1.f_1[iVar24];
			if (func_22(bVar25, 0) && func_5(bVar25, -7.721469E-31f))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_198(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_279(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_208(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
}

void func_199(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_280() || func_281())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 1036831949));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_208(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -3.959475E-32f, 0, 4.808429E-35f, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_208(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 6.028273E-12f);
		func_105(func_205(6.480143E+20f), iVar1);
	}
}

void func_200(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = 2.868836E+26f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = -6.44427E+07f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = -1.5597E+17f;
			*uParam2 = 984456.8f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = -1.340805E-26f;
			*uParam2 = -1.163197E-36f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = -0.0004557966f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = -7.543728E-18f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = -4.09862E-21f;
			*uParam2 = 6.597174E-09f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = -1.78904E-16f;
			*uParam2 = -1.54477E-12f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = -4.051864E-08f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = 6.371044E+11f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = -2.04749E+08f;
			*uParam2 = 1.48591E+21f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = 3.971968E-06f;
			*uParam2 = 3.147558E+28f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = -9.057481E+30f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = 2.184573E-20f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = -9.738313E+24f;
			*uParam2 = -1.21702E+18f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = 39255.64f;
			*uParam2 = 1.256526E-30f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = 0.0001116685f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = -1.441753E-05f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = -8.900574E-37f;
			*uParam2 = 1.249562E-27f;
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = -4.758429E+16f;
			*uParam2 = 4.067655E+37f;
			break;
	}
}

int func_201(bool bParam0, bool bParam1)
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

bool func_202(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_203(var uParam0, int iParam1)
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

int func_204(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_282(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_283(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_205(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

char* func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

float func_207(bool bParam0)
{
	var uVar0;

	if (!func_134(bParam0, &uVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		return -0.1987056f;
	}
	return uVar0;
}

int func_208(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_284(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_209()
{
	return !Global_1913431;
}

void func_210(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913431.f_3)
	{
		if ((((Global_1913431.f_4[iVar0 /*6*/] == bParam0 && Global_1913431.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913431.f_4[iVar0 /*6*/].f_3 == iParam3) && Global_1913431.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913431.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913431.f_4[iVar0 /*6*/].f_1 = (Global_1913431.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913431.f_3 < 19)
	{
		Global_1913431.f_4[Global_1913431.f_3 /*6*/] = bParam0;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_1 = iParam1;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_2 = bParam2;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_3 = iParam3;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_4 = bParam4;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_5 = bParam5;
		Global_1913431.f_3++;
	}
}

char* func_211(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_212(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_213(bool bParam0)
{
	if (func_5(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_5(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_5(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_5(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_5(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_5(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_5(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_5(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_5(bParam0, -1.58908E+26f) || func_5(bParam0, -3.503386E-34f)) || func_5(bParam0, -1.887503E+19f)) || func_5(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_214(bool bParam0)
{
	if (func_5(bParam0, -1.15596E+32f))
	{
		if (((func_285(bParam0, -9.979451E-09f) || func_285(bParam0, 2.758862E+11f)) || func_285(bParam0, 1.868312E+36f)) || func_285(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_5(bParam0, -6.231785E+11f) || func_5(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

bool func_215(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_216(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

bool func_217(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_286(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_287(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_288(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_289(bVar14))
			{
				func_290(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_290(iVar11);
	}
	return false;
}

bool func_218(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, -60352.49f))
	{
		return true;
	}
	return false;
}

int func_219(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_22(bParam0, 0) && !func_65(func_23(bParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

char* func_220(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_221(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_291(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_222(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_292(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_293(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_294(bParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_223(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_224(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_220(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_225(var uParam0, int iParam1)
{
	int iVar0;

	if (func_295(uParam0->f_9))
	{
		return false;
	}
	if (!func_296(*uParam0))
	{
		return false;
	}
	if (!func_297(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_298(uParam0->f_4))
	{
		return false;
	}
	if (func_299(0))
	{
		if (!func_22(uParam0->f_4, 0))
		{
			return false;
		}
		if (func_121())
		{
			iVar0 = func_171(uParam0->f_4, 1, 0, 0);
			if (iVar0 < func_253(uParam0->f_4, uParam0->f_5, uParam0->f_9, 0, 0, 0))
			{
				uParam0->f_11 = iVar0;
			}
		}
		if (uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if ((Global_1940239.f_11588 == 0 && !func_138(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11613, Global_1940239.f_11596), "label"))) && !func_300())
	{
		func_301(uParam0->f_4);
	}
	else
	{
		func_302(0);
	}
	return true;
}

bool func_226(bool bParam0, bool bParam1)
{
	switch (func_4(bParam1, -60352.49f))
	{
		case -1565009253:
		case -1273369295:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			if (Global_1940239.f_11587 != 0.7868816f || func_4(bParam0, 512441.5f) == func_4(bParam1, 512441.5f))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_227(var uParam0)
{
	struct<5> Var0;

	if (func_69(uParam0->f_6))
	{
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(*uParam0, &Var0))
		{
			uParam0->f_7.f_2 = Var0.f_4;
		}
	}
}

bool func_228(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_65(bParam0, 2))
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

bool func_229(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_303(iParam0))
		{
			return false;
		}
	}
	if (func_304(&(iParam0->f_6)))
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

int func_230(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_305(bParam0))
	{
		return 0;
	}
	bVar1 = func_306(iParam3, 2);
	bVar2 = func_307(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_307(bParam0, -982726.7f, bVar1);
	if (func_307(bParam0, 0.003804697f, bVar1))
	{
		iParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_308(bParam0, &fVar0) || func_309(bParam0, &fVar0)))
	{
		iParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_310())
		{
			iParam1 = -2.401104E+18f;
		}
		else
		{
			iParam1 = -982726.7f;
		}
	}
	else if (bVar3)
	{
		iParam1 = -982726.7f;
	}
	else if (func_311(15) && func_307(bParam0, 1.109321E-25f, bVar1))
	{
		iParam1 = 1.109321E-25f;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

int func_231(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_307(bParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_306(iParam2, 2))
	{
		if (func_312(bParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 0;
	}
	if (func_306(iParam2, 8))
	{
		return func_313(bParam0, iParam1);
	}
	return 1;
}

bool func_232(int* iParam0, struct<18> Param1, int iParam19, bool bParam20)
{
	if (iParam19 != 1.704487E-19f)
	{
		return false;
	}
	if (!func_314(Param1))
	{
		return false;
	}
	if (!func_315(iParam0, iParam19))
	{
		return false;
	}
	if (func_316(*iParam0, iParam19, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_317(iParam0, bParam20);
}

void func_233()
{
}

var func_234()
{
	Global_1292096.f_459.f_1552++;
	if (Global_1292096.f_459.f_1552 >= NaNf)
	{
		Global_1292096.f_459.f_1552 = 0;
	}
	return Global_1292096.f_459.f_1552;
}

void func_235(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			Global_1292096.f_459.f_44[func_318() /*30*/] = { Param0 };
			func_319((func_318() + 1 % 40));
			Global_1292096.f_459.f_1546++;
			break;
		case 1:
			Global_1292096.f_459.f_1245[func_320() /*30*/] = { Param0 };
			func_321((func_320() + 1 % 10));
			Global_1292096.f_459.f_1547++;
			break;
	}
}

bool func_236(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_237(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_238(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_143(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_239(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_240(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

bool func_241(int iParam0)
{
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

void func_242(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_322(bParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "style", iParam3);
		*uParam2++;
	}
}

struct<18> func_243(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_244(bool bParam0)
{
	int iVar0;

	iVar0 = func_163(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_183(8.681942E-06f, func_247(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_183(8.681942E-06f, func_247(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_183(8.681942E-06f, func_247(bParam0), -1.942248E+12f, 0);
}

void func_245(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_246(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_163(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_247(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_163(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_183(2.982335E+09f, func_323(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_183(2.982335E+09f, func_323(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_183(2.982335E+09f, func_323(), -5.45926E-19f, bParam0);
}

int func_248(bool bParam0, bool bParam1)
{
	if (func_157(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_324();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_249(bool bParam0)
{
	int iVar0;

	iVar0 = func_163(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_183(3.507197E-29f, func_247(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_183(3.507197E-29f, func_247(bParam0), 12999093, 0);
}

bool func_250(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_157(bParam0);
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
			if (func_325(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_251(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_326(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_252(bool bParam0)
{
	if (!func_22(*bParam0, 0))
	{
		return 0;
	}
	if (!func_327(*bParam0))
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

int func_253(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_162(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_183(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_163(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_163(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_254(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_255(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}
}

void func_256(int iParam0)
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

void func_257(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
}

void func_258(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
}

void func_259(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
}

void func_260(bool bParam0)
{
	float fVar0;

	fVar0 = 1.203047E-24f;
	if (bParam0)
	{
		HUD::_ENABLE_HUD_CONTEXT(fVar0);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(fVar0);
	}
}

void func_261(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

void func_262(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

bool func_263()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_264(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

int func_265(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_328(iParam2, -3.005759E+25f);
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
	func_329(uParam1, bParam0, Var3);
	return 1;
}

bool func_266(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_163(0);
	*iParam1 = { func_183(bParam0, func_244(0), fParam3, 0) };
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

bool func_267(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_268(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_330(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_332(func_331(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_333(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_269(int iParam0, struct<17> Param1)
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

int func_270(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_271()
{
	return Global_1902565;
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_334(*iParam0);
	iVar1 = func_335(*iParam0);
	iVar2 = func_336(*iParam0);
	iVar3 = func_337(*iParam0);
	iVar4 = func_338(*iParam0);
	iVar5 = func_339(*iParam0);
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
	iVar6 = func_340(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_340(iVar1, iVar0);
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
	func_341(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_273(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

bool func_274(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_275(int iParam0)
{
	if (func_202(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_276(int iParam0)
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

bool func_277(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_278()
{
	if (!func_55())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

void func_279(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_342())
	{
		Global_1913431.f_125 = MISC::GET_GAME_TIMER();
		Global_1913431.f_126 = iParam1;
	}
	Global_1913431.f_127 = (Global_1913431.f_127 + iParam0);
}

bool func_280()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-3.159453E+34f);
}

bool func_281()
{
	return DLC::IS_DLC_PRESENT(-1.05615E-37f);
}

void func_282(var uParam0)
{
	func_203(uParam0, 8.505438E-34f);
	if (func_343() == 3.272964E+34f)
	{
		func_203(uParam0, 8.967694E-17f);
	}
	else
	{
		func_203(uParam0, 1.721179E-28f);
	}
}

void func_283(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_304(uParam0))
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

void func_284(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

int func_285(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 512441.5f))
	{
		return 1;
	}
	return 0;
}

int func_286(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, -9.085264E+22f, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_288(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_289(bool bParam0)
{
	if (!func_22(bParam0, 0))
	{
	}
	if (func_5(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_290(int iParam0)
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

int func_291(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_292(bool bParam0)
{
	bool bVar0;

	if (!func_22(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_116(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

bool func_293(bool bParam0)
{
	if (func_157(bParam0) == -1.955052E+34f || func_157(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_294(bool bParam0)
{
	int iVar0;

	if (!func_22(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_216(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

bool func_295(int iParam0)
{
	switch (iParam0)
	{
		case -1649851713:
		case -997505963:
		case 1005272:
		case 348853959:
		case 359221401:
		case 1045621973:
		case 1463321587:
		case 1583044470:
		case 1651573695:
			return true;
	}
	return false;
}

bool func_296(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<10> Var0;
	int iVar14;

	if ((((Param0.f_9 != 4.978612f && Param0.f_9 != -6.4001E+33f) && Param0.f_9 != -0.001399076f) && Param0.f_9 != 6.727819E+25f) && Param0.f_9 != -2.918742E+20f)
	{
		Var0.f_9 = -5.45926E-19f;
		if (!func_251(Param0.f_5, &Var0, 1, 0, -1))
		{
			return false;
		}
		if (!func_5(Var0.f_4, 11.19303f))
		{
			return false;
		}
	}
	iVar14 = func_83(Param0.f_4);
	if (((iVar14 == -3.265313E+23f && !WEAPON::_IS_WEAPON_BINOCULARS(Param0.f_4)) && Param0.f_4 != -230.1699f) && Param0.f_4 != 5.402792E-27f)
	{
		return false;
	}
	switch (iVar14)
	{
		case joaat("HORSE_EQUIPMENT"):
		case joaat("COUPON"):
		case joaat("HORSE"):
		case joaat("EMOTE"):
		case joaat("WEAPON_MOD"):
		case joaat("FEE"):
		case joaat("ACTIVE_CARD"):
		case joaat("AMMO"):
		case joaat("WEAPON_DECORATION"):
		case joaat("ABILITY_CARD"):
		case joaat("GOLD"):
		case joaat("COMPONENT"):
		case joaat("MINIGAME"):
		case joaat("ADVERT"):
		case joaat("CORE_ITEM"):
		case joaat("PASSIVE_CARD"):
			return false;
		case joaat("CLOTHING"):
			switch (func_157(Param0.f_4))
			{
				case -525676072:
					if (Param0.f_4 == 921.3249f)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 81053684:
					return true;
				case 1477698721:
					if (func_5(Param0.f_4, 3.611922E-33f))
					{
						return true;
					}
					return false;
				default:
					return false;
			}
			break;
	}
	if (func_157(Param0.f_4) == -1.223348E+09f)
	{
		return false;
	}
	return true;
}

bool func_297(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if ((iParam1 == 0 || func_299(0)) || bParam2)
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_22(bParam0, 0) || bParam0 == 9605447f) || bParam0 == -5.385955E+12f)
		{
			return false;
		}
	}
	if (!bVar0 && func_344(bParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -889932290:
		case -283002878:
		case 0:
			if (!func_299(0))
			{
				if (bParam0 == 4.553053E+26f)
				{
					return true;
				}
				if (((((((((((func_297(bParam0, -7.334532E-18f, 1) || func_297(bParam0, -2.155093E-07f, 1)) || func_297(bParam0, -2.39227E+35f, 1)) || func_297(bParam0, -1.122582E-21f, 1)) || func_297(bParam0, 6.919499E+17f, 1)) || func_297(bParam0, -1.723482E+33f, 1)) || func_297(bParam0, 0.7868816f, 1)) || func_297(bParam0, -2.509875E-36f, 1)) || func_297(bParam0, -9.654275E+13f, 1)) || func_297(bParam0, -1.994502E+32f, 1)) || func_297(bParam0, 6.319022E+25f, 1)) || func_345(bParam0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case -1559802791:
			return func_5(bParam0, 6.905617E+12f);
		case -1268291907:
			return (func_5(bParam0, 4.153985E+10f) && !func_5(bParam0, 6.834376E-22f));
		case -96974025:
			return (func_5(bParam0, 0.01021266f) && !func_5(bParam0, 6.834376E-22f));
		case -1666604090:
			return (func_5(bParam0, -8.065831E+31f) && !func_5(bParam0, 6.834376E-22f));
		case 1561961676:
			if (func_5(bParam0, -6.878103E+34f) && !func_5(bParam0, 6.834376E-22f))
			{
				return true;
			}
			else if (func_5(bParam0, -1.15596E+32f) || func_5(bParam0, -5.258498E-07f))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -156634416:
			return (func_5(bParam0, -329878.1f) && !func_5(bParam0, 6.834376E-22f));
		case 1061777683:
			return (func_5(bParam0, 4.196335E-12f) && !func_5(bParam0, 6.834376E-22f));
		case 1783698482:
			return ((func_5(bParam0, 6.834376E-22f) && !func_299(0)) && func_346(bParam0));
		case -2074770370:
			if (Global_1940239.f_39 == 1 || Global_1940239.f_39 == 2)
			{
				return func_347(bParam0, iParam1);
			}
			else if (func_4(bParam0, -60352.49f) == -7.244309E-10f && bParam0 != -6.652081E+10f)
			{
				return true;
			}
			else
			{
				return func_5(bParam0, -6.878103E+34f);
			}
			break;
		case -693134279:
			return func_90(bParam0, 8388608);
		case -182626652:
			if (func_348(bParam0, Global_1915643.f_20241.f_1))
			{
				func_349(func_163(0), bParam0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_298(bool bParam0)
{
	int iVar0;

	if (Global_1940239.f_17.f_16 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1940239.f_17.f_16)
		{
			if (Global_1940239.f_17[iVar0 /*3*/] != bParam0)
			{
			}
			else if (Global_1940239.f_17[iVar0 /*3*/].f_1 & 1 != 0)
			{
				return false;
			}
			iVar0++;
		}
	}
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}
	if (func_5(bParam0, 1.570684E+33f) && func_253(func_350(bParam0), func_247(1), 4.978612f, 0, 0, 0) > 0)
	{
		return false;
	}
	if (func_299(0))
	{
		if (Global_1940239.f_11587 == -1.994502E+32f && !func_348(bParam0, Global_1915643.f_20241.f_1))
		{
			return false;
		}
		if (Global_1940239.f_11587 == 0 && (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0) || func_351(bParam0)))
		{
			return false;
		}
		switch (Global_1915643.f_20241)
		{
			case 2:
				if (!func_352(bParam0))
				{
					return false;
				}
				break;
		}
	}
	if (func_5(bParam0, -8.900441E+09f))
	{
		if (!UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
		{
			return false;
		}
	}
	if (func_83(bParam0) == -2.310337E-38f)
	{
		if (!func_5(bParam0, -3.612941E-17f) && !func_5(bParam0, 37699.67f))
		{
			return false;
		}
		else if (bParam0 == 9.248502E+28f || bParam0 == 6.236711E+08f)
		{
			return false;
		}
	}
	return true;
}

bool func_299(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_300()
{
	return Global_1940239.f_10;
}

void func_301(var uParam0)
{
	Global_1940239.f_11588 = uParam0;
}

void func_302(int iParam0)
{
	Global_1940239.f_10 = iParam0;
}

bool func_303(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_353(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_304(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_305(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_306(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_307(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_305(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_312(bParam0, iParam1);
	}
	return true;
}

bool func_308(bool bParam0, float fParam1)
{
	*fParam1 = func_354(bParam0, 1);
	return *fParam1 != 0;
}

bool func_309(bool bParam0, float fParam1)
{
	*fParam1 = func_355(bParam0, 1, 0);
	return *fParam1 != 0;
}

bool func_310()
{
	return Global_1915643.f_22477;
}

bool func_311(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_299(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_312(bool bParam0, int iParam1)
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

int func_313(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -2.401104E+18f)
	{
		iVar0 = func_356(bParam0, -2.401104E+18f, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_357(iVar0))
		{
			if (Global_1915643.f_20644)
			{
				func_359(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_358(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -982726.7f)
	{
		iVar1 = func_356(bParam0, -982726.7f, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_360(iVar1))
		{
			if (Global_1915643.f_20644)
			{
				func_359("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 0.003804697f)
	{
		return 1;
	}
	if (!func_361(bParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_314(struct<18> Param0)
{
	if (!func_305(Param0.f_17))
	{
		return false;
	}
	return true;
}

bool func_315(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_362(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_363(iParam0))
		{
			return false;
		}
		if (!func_362(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_316(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_317(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_363(iParam0);
	}
	return true;
}

int func_318()
{
	if (Global_1292096.f_459.f_1548 >= 40 || Global_1292096.f_459.f_1548 < 0)
	{
		Global_1292096.f_459.f_1548 = 0;
	}
	return Global_1292096.f_459.f_1548;
}

void func_319(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1292096.f_459.f_1548 = iParam0;
}

int func_320()
{
	if (Global_1292096.f_459.f_1549 >= 10 || Global_1292096.f_459.f_1549 < 0)
	{
		Global_1292096.f_459.f_1549 = 0;
	}
	return Global_1292096.f_459.f_1549;
}

void func_321(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1292096.f_459.f_1549 = iParam0;
}

char* func_322(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "textField0";
		case 1:
			return "textField1";
		case 2:
			return "textField2";
		case 3:
			return "textField3";
		case 4:
			return "textField4";
		case 5:
			return "textField5";
		case 6:
			return "textField6";
		case 7:
			return "textField7";
	}
	return "";
}

struct<4> func_323()
{
	struct<4> Var0;

	return Var0;
}

int func_324()
{
	if (func_171(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_325(bool bParam0, int iParam1, int iParam2)
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

int func_326(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_163(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_327(bool bParam0)
{
	return func_5(bParam0, 5.168749E+07f);
}

void func_328(int iParam0, int iParam1)
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

void func_329(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_304(uParam0))
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

bool func_330(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_364(iParam1->f_8, iParam0, iVar0, 2048) || func_364(iParam1->f_8, iParam0, iVar0, 32768)) || func_364(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_364(iParam1->f_8, iParam0, iVar0, 4) || func_364(iParam1->f_8, iParam0, iVar0, 256)) || func_364(iParam1->f_8, iParam0, iVar0, 65536)) || func_364(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_364(iParam1->f_8, iParam0, iVar0, 1) || func_364(iParam1->f_8, iParam0, iVar0, 8)) || func_364(iParam1->f_8, iParam0, iVar0, 65536)) || func_364(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_364(iParam1->f_8, iParam0, iVar0, 1) || func_364(iParam1->f_8, iParam0, iVar0, 16)) || func_364(iParam1->f_8, iParam0, iVar0, 2)) || func_364(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_364(iParam1->f_8, iParam0, iVar0, 8) || func_364(iParam1->f_8, iParam0, iVar0, 4096)) || func_364(iParam1->f_8, iParam0, iVar0, 256)) || func_364(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_331(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_332(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_365(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_365(iParam1, 2, 0, 0);
	return -1;
}

int func_333(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_365(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_334(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_366(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_335(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_336(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_337(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_338(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_339(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_340(int iParam0, int iParam1)
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

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_367(iParam0, iParam6);
	func_368(iParam0, iParam5);
	func_369(iParam0, iParam4);
	func_370(iParam0, iParam3);
	func_371(iParam0, iParam2);
	func_372(iParam0, iParam1);
}

bool func_342()
{
	return Global_1913431.f_127 == 0;
}

int func_343()
{
	return Global_1953279.f_1;
}

bool func_344(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1940239.f_41.f_1)
	{
		if (func_373(bParam0, Global_1940239.f_41.f_2[iVar0 /*2*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_345(bool bParam0)
{
	if (func_5(bParam0, -5.092244E+08f))
	{
		return func_5(bParam0, 2.00625E+31f);
	}
	return false;
}

bool func_346(bool bParam0)
{
	if ((((((((((((((((func_374(bParam0, 6.643934E-37f) || func_374(bParam0, NaNf)) || func_374(bParam0, 2.405382E+20f)) || func_374(bParam0, 5.266092E-27f)) || func_374(bParam0, -5.272253E-14f)) || func_374(bParam0, -3.072587E+16f)) || func_374(bParam0, -3.933513E-29f)) || func_374(bParam0, -2.153603E-21f)) || func_374(bParam0, 2.78471E+33f)) || func_374(bParam0, 1.096557E-35f)) || func_374(bParam0, 6.60208E-06f)) || func_374(bParam0, -7.329766E+14f)) || func_374(bParam0, -5.276673E+08f)) || func_374(bParam0, joaat("TAROT_CARDS_WANDS"))) || func_374(bParam0, 3.452593E-11f)) || func_374(bParam0, -1.05944E+30f)) || func_374(bParam0, -2.232068E+37f))
	{
		return true;
	}
	return false;
}

int func_347(bool bParam0, int iParam1)
{
	switch (Global_1940239.f_39)
	{
		case 1:
			if (iParam1 == -2.509875E-36f)
			{
				if ((func_5(bParam0, -1.051639E+07f) || func_5(bParam0, -5.092244E+08f)) || func_5(bParam0, -8.87647E+33f))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2.509875E-36f)
			{
				if ((((((((func_5(bParam0, -1.051639E+07f) || func_5(bParam0, -5.092244E+08f)) || func_5(bParam0, -8.87647E+33f)) || func_5(bParam0, 4.619806E-19f)) || func_5(bParam0, -2.635625E-06f)) || func_5(bParam0, 1.337157E+38f)) || func_5(bParam0, -8.704819E-29f)) || func_5(bParam0, 1.374959f)) || func_5(bParam0, 2.519492E+32f))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_348(bool bParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_375(bParam0);
	}
	return func_376(bParam0, iParam1);
}

void func_349(int iParam0, bool bParam1, bool bParam2)
{
	if (func_22(bParam1, 0))
	{
		if (bParam2)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iParam0, bParam1);
		}
		else
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iParam0, bParam1, 0);
		}
	}
}

bool func_350(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar4;
	int iVar5;

	if (func_5(bParam0, 8.572166E+11f))
	{
		return false;
	}
	if (!func_5(bParam0, 1.570684E+33f))
	{
		return false;
	}
	bVar0 = func_137(bParam0, 0);
	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(bVar0))
	{
		return false;
	}
	iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(bVar0);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(bVar0, iVar4, &bVar1))
		{
		}
		else if (func_5(bVar1, 1.570684E+33f))
		{
			return bVar1;
		}
		iVar4++;
	}
	return false;
}

bool func_351(bool bParam0)
{
	if (func_5(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_352(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (!func_138(bVar0))
	{
		return false;
	}
	if (((((((((((((bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-3.072587E+16f, 0) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-5.272253E-14f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(5.266092E-27f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(2.405382E+20f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(6.643934E-37f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(NaNf, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-3.933513E-29f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-2.153603E-21f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(1.096557E-35f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(2.78471E+33f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(6.60208E-06f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-7.329766E+14f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-5.276673E+08f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_WANDS"), 0))
	{
		return true;
	}
	return false;
}

int func_353(int* iParam0)
{
	return func_377(iParam0->f_1);
}

int func_354(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_378(iVar0, 1, 0);
		if (!func_379(bParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_380(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_86(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

int func_355(bool bParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_378(iVar0, 0, 1);
		if (!func_379(bParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_381(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_86(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

int func_356(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_379(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_357(int iParam0)
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

int func_358(int iParam0)
{
	return (iParam0 / 100);
}

void func_359(char* sParam0)
{
	Global_1915643.f_22470 = func_382(sParam0, 10000, 0, 0, 0, 1);
}

bool func_360(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_3() == 0)
	{
		return func_383(iParam0);
	}
	return iParam0 <= func_384();
}

bool func_361(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_379(bParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_360(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_357(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_385(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_386(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_86(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

bool func_362(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 2.249603E-13f, iParam1))
	{
		return false;
	}
	return true;
}

bool func_363(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_365(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_365(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_365(*iParam0, 2, 0, 0);
		return false;
	}
	func_365(*iParam0, 1, 0, 0);
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

int func_364(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_236(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_365(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_387(iParam0, iParam1, iParam2, iParam3);
}

int func_366(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_367(int iParam0, int iParam1)
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

void func_368(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_369(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_335(*iParam0);
	iVar1 = func_334(*iParam0);
	if (iParam1 < 1 || iParam1 > func_340(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_370(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_371(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_372(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_373(bool bParam0, int iParam1)
{
	return iParam1 == func_4(bParam0, 512441.5f);
}

int func_374(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3[15];

	bVar0 = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(iParam1, 0);
	if (!func_138(bVar0))
	{
		return 0;
	}
	iVar1 = ITEMDATABASE::_0xF540239F9937033B(bVar0, -1.926391E+21f);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (ITEMDATABASE::_0xF27F01BBF5ACD3F3(bVar0, -1.926391E+21f, iVar2, &(Var3[iVar2 /*2*/])))
		{
			if (func_22(Var3[iVar2 /*2*/], 0) && Var3[iVar2 /*2*/] == bParam0)
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_375(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1915643.f_20646.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1915643.f_20646.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_376(bool bParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	bool bVar6;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_388(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_389(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -3.877593E+09f;
	Var0.f_3 = func_390(iVar5);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		bVar6 = bParam0;
		Var0.f_2 = 3.294502E-19f;
		Var0.f_3 = bVar6;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_391(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_365(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_365(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_378(int iParam0, bool bParam1, bool bParam2)
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

bool func_379(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_305(bParam0))
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
		func_392(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_380(bool bParam0)
{
	return func_157(bParam0) == 4.029065E+31f;
}

bool func_381(bool bParam0)
{
	return func_157(bParam0) == -1.955052E+34f;
}

int func_382(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_383(int iParam0)
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

int func_384()
{
	if (func_3() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_385(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_5(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_386(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_247(0) };
	Var0.f_4 = func_393(iParam1);
	Var5 = { func_183(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_163(0), &Var5, false);
	return iVar9;
}

void func_387(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_394(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_388(int iParam0)
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

bool func_389(int iParam0, var uParam1)
{
	if (!func_395(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1915593[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_390(int iParam0)
{
	if (func_3() != -1)
	{
		if (Global_1072759.f_12)
		{
			if (iParam0 == 3)
			{
				return -57.16793f;
			}
		}
	}
	return func_396(iParam0);
}

int func_391(int iParam0)
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

void func_392(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_157((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

float func_393(int iParam0)
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

void func_394(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_397(&(uParam0->f_4));
}

bool func_395(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 26);
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -7.83879E-12f;
		case 3:
			return -1.996561E-35f;
		case 4:
			return -1.034436E-20f;
		case 33:
			return -4.355853E+24f;
		case 6:
			return -2.274188E+19f;
		case 7:
			return 1.330783E-35f;
		case 8:
			return -7.352467E-28f;
		case 1:
			return 8.047852E+19f;
		case 2:
			return -2.214302E-37f;
		case 9:
			return -3.189341E-13f;
		case 10:
			return 4.26812E-07f;
		case 11:
			return -2.015563E+30f;
		case 22:
			return -2.413113E-13f;
		case 23:
			return -2.44324E+14f;
		case 24:
			return -3.184599E+13f;
		case 25:
			return -5.431562E+28f;
		case 26:
			return 6.565474E+13f;
		case 5:
			return 2.627254E-25f;
		case 12:
			return 1.467283E+38f;
		case 14:
			return -476905.5f;
		case 30:
			return 3.40434E+30f;
		case 31:
			return -4.535735E-27f;
		case 32:
			return 1.662245E+10f;
		case 15:
			return 3.461916E+13f;
		case 16:
			return -1148.872f;
		case 17:
			return 1.807475E+15f;
		case 27:
			return -2.069838E-38f;
		case 28:
			return -1332.52f;
		case 29:
			return 3.648399E+12f;
		case 34:
			return 1.034395E+13f;
		case 19:
			return -14073.83f;
		case 20:
			return 3.438278E-15f;
		case 21:
			return 2.181652E+24f;
		case 18:
			return -1.058352E+09f;
		case 35:
			return 1.425161E+18f;
		case 36:
			return -5.887391E-33f;
		case 38:
			return -2.30817E+21f;
		case 37:
			return -126.7924f;
		case 39:
			return 1.692289E-25f;
		default:
			break;
	}
	return 0;
}

void func_397(var uParam0)
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

