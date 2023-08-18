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

void func_34(bool bParam0)
{
	func_71(bParam0);
	func_72(bParam0, &(Global_17418.f_2992), 1);
	func_73(bParam0);
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
				func_74(&(Global_17402[1]), 0);
			}
			else
			{
				Global_17407[1] = 1;
				func_74(&(Global_17402[1]), 1);
			}
			if (!func_22((*uParam1)[1 /*11*/], 0))
			{
				Global_17407[0] = 0;
				func_74(&(Global_17402[0]), 0);
			}
			else
			{
				Global_17407[0] = 1;
				func_74(&(Global_17402[0]), 1);
			}
		}
		Global_17407[3] = func_75(uParam0, uParam1[0 /*11*/]);
		func_74(&(Global_17402[3]), Global_17407[3]);
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

	if (!func_33(*uParam1, uParam0->f_104) && !func_76(*uParam1, uParam0->f_104))
	{
		if (!uParam0->f_112)
		{
			if (func_77(Global_17402[0], 1))
			{
				uParam0->f_113 = 0;
			}
			else
			{
				uParam0->f_113 = 1;
			}
			if (func_77(Global_17402[1], 1))
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
				func_78(&(Global_17402[iVar0]), 0);
				iVar0++;
			}
			uParam0->f_112 = 1;
		}
	}
	else if (uParam0->f_112)
	{
		func_79(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_113) || (iVar1 == 1 && !uParam0->f_114)) || (iVar1 != 1 && iVar1 != 0))
			{
				func_78(&(Global_17402[iVar1]), 1);
			}
			iVar0++;
		}
		uParam0->f_112 = 0;
	}
}

void func_37(var uParam0, var uParam1)
{
	if (!uParam0->f_115 && func_80((*uParam1)[0 /*11*/], uParam0->f_104))
	{
		uParam0->f_115 = 1;
		func_81((*uParam1)[0 /*11*/]);
	}
}

void func_38(var uParam0, var uParam1)
{
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
	iVar0 = func_82(iParam0);
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
			func_83(uParam0, bParam1);
		}
	}
	else if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(-1.32833E+17f, -2.098171E-25f) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_83(uParam0, bParam1);
	}
}

bool func_42(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_84(bParam0);
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
			if (!func_85(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_86(bParam0))
			{
				return true;
			}
			break;
	}
	return func_87(bParam0, 0, 0, 0) >= iParam1;
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
	if (!func_88(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_89(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_90(bParam0, bParam2);
	iVar2 = 0;
	if (func_84(bParam0) == -42.1084f)
	{
		if (!func_5(bParam0, 7.396633E-08f) && !func_5(bParam0, -6.685221E-33f))
		{
			bVar3 = true;
		}
	}
	if (func_91(bParam0, 8388608) && !func_92(27))
	{
		func_93(27);
	}
	func_94(bParam0);
	if (!bVar3)
	{
		if (func_5(bParam0, -7.272718E-19f))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_96(func_95(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_3() == -1)
				{
					func_97(bVar1);
				}
				if (func_98(0) && func_99(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_100(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_101(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_84(bParam0) == -3.265313E+23f)
		{
			if (!func_102(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_84(bParam0) == 6.919076E-28f && func_103(bParam0))
		{
			if (!func_104(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_5(bParam0, -1.355837E+35f))
		{
			func_106(func_105(-182.2023f), iVar0);
		}
		else if (bParam0 == 8.064365E+36f)
		{
			func_106(func_107(-1.250509E+13f, 6.875483E+36f), iVar0);
		}
		else if (func_5(bParam0, -3.187887E+34f) && !func_5(bParam0, 3.708451E-17f))
		{
			if (bParam0 != 4.568779E-32f)
			{
				func_108(536, 0);
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
			func_108(519, 0);
		}
		else if (func_5(bParam0, 888.6404f) && func_5(bParam0, -1.086842E+20f))
		{
		}
		else if (func_5(bParam0, 4.619806E-19f))
		{
		}
		else if (func_5(bParam0, 9.243318E-18f))
		{
			if (func_109())
			{
				func_110(7.177414E+09f, 0, 1f, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_5(bParam0, 1.063826E-10f) && func_5(bParam0, 7.561756E-05f))
		{
			func_111(bParam0);
		}
		else if (func_5(bParam0, -1.56509E-23f))
		{
			func_112(bParam0);
		}
		else if (func_5(bParam0, -2.873199E-24f))
		{
			func_113(bParam0);
		}
		else if (func_5(bParam0, -0.08388482f) && func_5(bParam0, 7.561756E-05f))
		{
			func_114(bParam0);
		}
		else if (bParam0 == -2.680077E+18f)
		{
			Global_1940072.f_21 = 0;
		}
		else if (func_5(bParam0, 7.339242E+27f))
		{
			func_115();
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
		else if (func_5(bParam0, -5.092244E+08f) && func_91(bParam0, 4))
		{
		}
		else if (func_5(bParam0, 9.811189E+11f))
		{
			func_116(bParam0, &iVar2);
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
				func_118(272, func_117(-1.263708E+38f, 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_118(270, func_117(1.344431E-31f, 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_118(271, func_117(-7.101952E+23f, 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_119(685, 1.579975E+31f, 1, 1);
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
					func_119(685, 42.3843f, 1, 1);
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
					func_119(685, 2.097458E+12f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_119(685, -6.137742E-06f, 1, 1);
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
					func_119(686, NaNf, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_119(686, -7.923627E-17f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_108(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_108(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_92(1))
				{
					func_108(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_108(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_3() == -1)
				{
					bParam0 = -7.729678E-14f;
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_108(534, 0);
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
		func_120(&bVar5);
		if (!func_101(bVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_98(0))
		{
			return 1;
		}
		if (func_84(bParam0) == -42.1084f)
		{
			func_121(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_98(0) && !func_122())
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
			func_123(iVar2, 0);
		}
	}
	Var30 = { func_124(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_125(bParam0);
	if (fParam6 > 0f)
	{
		if (func_5(bParam0, -5.092244E+08f))
		{
			func_126(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 3787186f;
		func_127(bParam0, iVar0, 0, bVar32, 0, 0, 0);
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
	func_128(uParam0, (*uParam1)[0 /*11*/]);
	func_129(uParam0, uParam1);
	if ((*uParam1)[1 /*11*/] != 0)
	{
		func_130(1, (*uParam1)[1 /*11*/]);
	}
	else
	{
		func_19(1);
	}
	func_131(uParam0, uParam1);
	if ((*uParam1)[2 /*11*/] != 0)
	{
		func_130(2, (*uParam1)[2 /*11*/]);
	}
	else
	{
		func_19(2);
	}
	func_132(uParam1);
	func_133(uParam1);
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
				if (!func_134(uParam0))
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else if (func_135(*uParam0, &iVar0, 4.975531E-10f, -2.889029E+24f, 0, 0))
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
	if (func_136(uParam0, uParam1[0 /*11*/]))
	{
		func_137(uParam0, uParam1);
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
	iVar0 = func_82(iParam0);
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
		func_78(&(Global_17402[1]), !uParam0->f_125);
		func_78(&(Global_17402[0]), 1);
	}
	if (func_40(Global_17402[0], 1))
	{
		iVar0 = 1;
		func_78(&(Global_17402[0]), !uParam0->f_124);
		func_78(&(Global_17402[1]), 1);
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

	bVar0 = func_138(bParam0, 1);
	if (func_139(bVar0))
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var11.f_9 = 1;
		Var11.f_11 = -5.45926E-19f;
		if (func_140(&Var1, bVar0, &Var11, 1, iParam1, -1, 0))
		{
		}
	}
}

void func_58(int iParam0)
{
	switch (iParam0)
	{
		case 684416450: /* GXTEntry: "Letter from Horley" */
			func_141(-8.029485E-13f, 0);
			break;
		case -492264119: /* GXTEntry: "Letter from Cripps" */
			func_141(-1.182024E-34f, 0);
			func_108(861, 0);
			break;
		case 1397875340:
			func_141(2.422637E-20f, 0);
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
	return func_142(iParam0);
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

void func_71(bool bParam0)
{
	if (func_5(bParam0, 1.570684E+33f))
	{
		func_57(bParam0, 4.287485E+31f);
	}
}

void func_72(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	struct<15> Var1;

	if (!func_5(bParam0, -1.001123E-14f))
	{
		return;
	}
	if (!func_6(bParam0))
	{
		return;
	}
	iVar0 = func_143(bParam0, bParam2);
	if (iVar0 != 0)
	{
		func_145(func_144(iVar0), 10000, 0, 0, 0, 1);
		return;
	}
	Var1 = 3;
	Var1.f_11 = 3;
	Var1.f_10 = bParam0;
	func_146(&Var1);
	iVar0 = func_147(Var1);
	if (iVar0 != 0)
	{
		func_145(func_144(iVar0), 10000, 0, 0, 0, 1);
		return;
	}
	if (uParam1->f_21)
	{
		func_148(uParam1, 0);
	}
	if (uParam1->f_18 != Var1.f_10)
	{
		func_106(func_149(-5.209289E+14f), 1);
		uParam1->f_18 = Var1.f_10;
	}
	func_150(Var1);
	Global_17418.f_3106 = { func_151() };
	uParam1->f_21 = 1;
	if (bParam2)
	{
		UIAPPS::LAUNCH_UIAPP_BY_HASH(-3.737229E-35f);
		uParam1->f_22 = 0;
	}
}

void func_73(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (func_5(bParam0, 1.293259E-18f))
	{
		func_152(bParam0);
		iVar0 = func_153(bParam0);
		if (iVar0 != -1)
		{
			vVar1 = { func_154(iVar0) };
			vVar4 = { func_155(iVar0) };
			MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(vVar1, vVar4.x);
		}
		UIAPPS::LAUNCH_UIAPP_BY_HASH(-3.737229E-35f);
	}
}

void func_74(var uParam0, bool bParam1)
{
	if (func_50(*uParam0))
	{
		func_156(*uParam0, bParam1, 0, 1);
	}
}

bool func_75(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_33(*uParam1, uParam0->f_104))
	{
		bVar0 = !func_5(*uParam1, 0.3292362f);
	}
	if (func_76(*uParam1, uParam0->f_104))
	{
		bVar0 = func_5(*uParam1, 2.309315E-17f);
	}
	return bVar0;
}

bool func_76(bool bParam0, int iParam1)
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

bool func_77(int iParam0, bool bParam1)
{
	if (bParam1 && !func_50(iParam0))
	{
		return false;
	}
	return !func_157(iParam0, 4);
}

void func_78(var uParam0, bool bParam1)
{
	if (func_50(*uParam0))
	{
		func_156(*uParam0, bParam1, 1, 1);
	}
}

void func_79(var uParam0, var uParam1)
{
	func_78(&(Global_17402[3]), func_75(uParam0, uParam1));
}

bool func_80(bool bParam0, int iParam1)
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

void func_81(var uParam0)
{
}

int func_82(int iParam0)
{
	return iParam0;
}

void func_83(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "Generic");
	if (func_5(bParam1, 27.54461f))
	{
		func_158(uParam0, bParam1);
	}
	else if (func_5(bParam1, 1.570684E+33f))
	{
		if (func_5(bParam1, -1.182666E+07f))
		{
			func_159(uParam0, bParam1);
		}
		else
		{
			func_160(uParam0, bParam1);
		}
	}
	else if (func_5(bParam1, 1.570684E+33f))
	{
		func_160(uParam0, bParam1);
	}
	else if (func_5(bParam1, -1.341536E+11f))
	{
		func_161(uParam0, bParam1);
	}
	else if (func_5(bParam1, -1.384179E-36f))
	{
		func_162(uParam0, bParam1);
	}
	else if (func_4(bParam1, 512441.5f) == 226.647f)
	{
		func_163(uParam0, bParam1);
	}
	else if (func_5(bParam1, -6.191407E-06f))
	{
	}
	else
	{
		func_164(uParam0, bParam1);
	}
}

int func_84(bool bParam0)
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

bool func_85(bool bParam0, int iParam1)
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
	bVar0 = func_165(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_166("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_167(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_168(Var4.f_4))
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

bool func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_169(bParam0);
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
	iVar1 = func_170(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_171(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_172(bParam0);
	iVar2 = func_171(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_87(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	iVar1 = func_84(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_165(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_173(bParam0, 0);
	}
	if (func_174(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_175(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_176(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_175(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_88(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_3() == -1)
	{
		if (func_177(bParam0) && func_178(bParam0))
		{
			func_179(bParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_89(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_180(bParam0, iParam1);
	Var0 = { func_181(bParam0, 0, 1) };
	iVar5 = func_182(bParam0, &Var0, 0, 0);
	iVar6 = func_183(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_5(bParam0, -1.690907E-35f))
		{
			func_108(674, 1);
		}
		else if (func_3() == -1)
		{
			func_108(673, 0);
		}
	}
	if (func_184(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_90(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_185())
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

bool func_91(bool bParam0, int iParam1)
{
	if (!func_22(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_92(int iParam0)
{
	if (!func_186(iParam0))
	{
		return false;
	}
	return func_187(iParam0);
}

void func_93(int iParam0)
{
	if (!func_186(iParam0))
	{
		return;
	}
	func_188(iParam0);
	func_189(iParam0);
}

void func_94(bool bParam0)
{
	if (func_5(bParam0, -1.640085E-16f))
	{
		func_190(-2.462866E+08f, 0, 255, 0, 0);
	}
	else if (func_5(bParam0, -4.561297E+28f))
	{
		func_190(-4249.272f, 0, 255, 0, 0);
	}
	else if (func_5(bParam0, 2.133228E-14f))
	{
		func_190(-5.046843E+11f, 0, 255, 0, 0);
	}
	else if (func_5(bParam0, 5.050617E+08f))
	{
		func_190(2.629104E-17f, 0, 255, 0, 0);
	}
}

bool func_95(bool bParam0, bool bParam1)
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
			if (func_191(bVar0) || func_192(bVar0))
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

bool func_96(bool bParam0, bool bParam1)
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

void func_97(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 != -1)
	{
		return;
	}
	if (!func_168(bParam0))
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

bool func_98(bool bParam0)
{
	if (func_3() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_175(bParam0));
}

bool func_99(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_181(bParam0, 0, 1) };
		if (func_193(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_194(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_195(bParam0, Var0, Var0.f_4, 0) };
				func_196(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_98(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return false;
		}
		func_100(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_197(bParam0, iParam1);
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

bool func_100(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_103(bParam0))
	{
		return false;
	}
	if (!func_98(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	return true;
}

int func_101(bool bParam0, int iParam1, int iParam2)
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
	iVar0 = func_174(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_198(bParam0, iParam1, iParam2);
	}
	Var1 = { func_181(bParam0, 0, 1) };
	Var6 = { func_195(bParam0, Var1, Var1.f_4, 0) };
	return func_199(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_102(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_96(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_3() == -1)
		{
			func_97(bVar0);
			if (iParam1 == 3787186f)
			{
				func_200(bVar0);
			}
		}
		if (!func_184(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_179(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_201(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_99(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == -1.197024E-12f || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_99(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_99(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == 3.3488E-21f && !func_202())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_203(bVar0))
				{
					func_99(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_99(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_204(Global_33, 2, 0, 1);
				if ((((func_168(bVar7) && !Global_26688) && bVar7 != bVar0) && !func_42(-0.0002099206f, 1)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, bVar7);
				}
				if (func_168(bVar7) && func_42(-0.0002099206f, 1))
				{
					if (!func_99(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_99(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_99(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_108(515, 1);
	}
	return true;
}

bool func_103(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_104(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_103(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_168(bVar4))
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
		func_118(func_205(bParam0), func_117(bParam0, 0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_98(0))
	{
		if (func_100(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_101(bParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_105(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_106(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_107(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_206(iParam0, &iVar0, &iVar1);
	if (!func_207(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_208(iVar0, iVar1);
}

bool func_109()
{
	return false;
}

int func_110(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_3() == 0)
	{
		func_123(iParam0, 0);
		return 0;
	}
	iVar0 = func_209(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_210(iVar0, sParam4, iParam5, 0);
	}
	func_211(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
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

void func_114(bool bParam0)
{
}

void func_115()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-9.596595E-08f) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-9.596595E-08f, -3.936833E-09f, 1);
	}
}

void func_116(bool bParam0, int iParam1)
{
	var uVar0;

	func_212(bParam0, iParam1, &uVar0);
}

bool func_117(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_213(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

void func_118(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_206(iParam0, &iVar0, &iVar1);
	if (!func_207(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_214(iParam0, 1024))
	{
		return;
	}
	func_208(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_119(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_206(iParam0, &iVar0, &iVar1);
	if (!func_207(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_214(iParam0, 1024))
	{
		return;
	}
	func_208(iVar0, iVar1);
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

void func_120(bool bParam0)
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

void func_121(bool bParam0)
{
	if (func_3() != -1)
	{
		return;
	}
}

bool func_122()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_123(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_215(&Var4, 2.95884E+10f);
	return func_216(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_124(bool bParam0)
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
				return func_149(4.052717E-32f);
			}
			else
			{
				return func_149(9918.3f);
			}
		}
	}
	else if (func_5(bParam0, -3.480943E+19f))
	{
		return func_149(-18395.16f);
	}
	if (func_5(bParam0, 4.091206E+36f))
	{
		return func_149(3.674458E+22f);
	}
	return Var2;
}

void func_125(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_126(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_217(Global_1902818.f_37);
	func_219(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_218(bParam0), 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_127(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	if (!func_220() || bParam6)
	{
		func_221(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_222(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_222(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_91(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_84(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_5(bParam0, -5.215192E-33f)) && !func_5(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_169(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_223(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
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
		sVar17 = func_224(bParam0);
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
	if (func_225(bParam0))
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
	bVar18 = func_117(bParam0, 0);
	if ((func_226(iVar12) && func_5(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_227(bParam0);
	}
	else if (func_84(bParam0) == -42.1084f)
	{
		bVar19 = func_228(bParam0);
		if (func_22(bVar19, 0))
		{
			bVar18 = func_117(bVar19, 0);
		}
	}
	if (func_229(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_230(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_231(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_232(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_233(bParam0, &cVar22))
		{
			sVar21 = func_235(func_234(cVar22), 4.808429E-35f);
		}
	}
	func_219(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

int func_128(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;

	if (func_166("ALL SATCHEL EXCLUDING CLOTHING", &(uParam0->f_1.f_1), &(uParam0->f_1), 4.978612f, 0))
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
				if (!func_167(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
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
						if (func_236(&Var2, 0))
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

bool func_129(var uParam0, var uParam1)
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
		if (func_167(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_237((*uParam1)[0 /*11*/], Var0.f_4))
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

void func_130(int iParam0, bool bParam1)
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

bool func_131(var uParam0, var uParam1)
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
		if (func_167(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_237((*uParam1)[0 /*11*/], Var0.f_4))
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

void func_132(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_22((*uParam0)[iVar0 /*11*/], 0))
		{
			func_238(uParam0[iVar0 /*11*/]);
		}
		iVar0++;
	}
}

void func_133(var uParam0)
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

bool func_134(var uParam0)
{
	if ((!uParam0->f_3 && uParam0->f_7.f_1 != 0) && uParam0->f_7 != 0)
	{
		HUD::UI_MOVIEVIEW_SET_RENDER_TARGET(uParam0->f_7, uParam0->f_7.f_2);
		uParam0->f_3 = 1;
		return true;
	}
	return false;
}

bool func_135(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_136(var uParam0, var uParam1)
{
	if (uParam1->f_3)
	{
		return true;
	}
	if (uParam1->f_1)
	{
		return func_134(uParam1);
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

int func_137(var uParam0, var uParam1)
{
	return 0;
}

bool func_138(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_22(bParam0, 0))
	{
		return func_239(func_23(bParam0), bParam1);
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

bool func_139(bool bParam0)
{
	return bParam0 != 0;
}

bool func_140(int* iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_240(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_241(bParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_242(bParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_17 = bParam1;
	uParam2->f_8 = bParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 3787186f;
	if (!func_243(iParam0, *uParam2, 1.704487E-19f, iParam3))
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

int func_141(int iParam0, int iParam1)
{
	struct<30> Var0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1292096.f_459.f_1546 >= 40)
	{
		func_244();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_245();
	Var0.f_3 = iParam1;
	func_246(Var0, 0);
	return Var0;
}

bool func_142(int iParam0)
{
	return func_247(Global_1940072.f_38, iParam0);
}

int func_143(bool bParam0, bool bParam1)
{
	if (!func_6(bParam0))
	{
		return 0;
	}
	if (func_248(0, 0, 1))
	{
		return 1;
	}
	if (bParam0 == -5.19135E+32f)
	{
		if (!func_42(6.914108E-36f, 1))
		{
			return 3;
		}
	}
	else if ((bParam0 == 274.9337f || bParam0 == -92891.77f) || bParam0 == 1.543751E+28f)
	{
		if (!func_42(-8.284301E+07f, 1))
		{
			return 4;
		}
	}
	if (bParam0 == -3.215088E-27f)
	{
		if (!func_42(-8.284301E+07f, 1))
		{
			return 4;
		}
		else if (!func_249())
		{
			return 5;
		}
	}
	if (bParam1)
	{
		if (Global_17418.f_2992 > 0)
		{
			return 2;
		}
	}
	return 0;
}

char* func_144(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "COLLECTIBLE_MAP_ON_MISSION";
		case 2:
			return "COLLECTIBLE_MAP_ACTIVE_MAP";
		case 3:
			return "COLLECTIBLE_MAP_SPADE_MISSING";
		case 4:
			return "COLLECTIBLE_MAP_METAL_DETECTOR_MISSING";
		case 5:
			return "COLLECTIBLE_MAP_SEARCH_ITEMS_NOT_AVAILABLE";
	}
	return "NET_COLLECTIBLE_OPEN_MAP_RESULT_NONE";
}

int func_145(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_146(var uParam0)
{
	switch (uParam0->f_10)
	{
		case -171130052: /* GXTEntry: "Map - Arrowheads" */
			func_250(uParam0, -1.80273E-33f);
			break;
		case -1168276602: /* GXTEntry: "Map - Bird Eggs" */
			func_250(uParam0, -2.99103E+33f);
			break;
		case -849054700: /* GXTEntry: "Map - Antique Alcohol Bottles" */
			func_250(uParam0, 1894063f);
			break;
		case -944411166: /* GXTEntry: "Map - Coins" */
			func_250(uParam0, 8.310792E-34f);
			break;
		case 1850181232: /* GXTEntry: "Map - Family Heirlooms" */
			func_250(uParam0, -95782.72f);
			break;
		case 1133082501: /* GXTEntry: "Map - Lost Jewelry" */
			func_250(uParam0, 7.372995E+17f);
			break;
		case -1017335808: /* GXTEntry: "Map - Tarot Cards" */
			func_250(uParam0, 2.768429E+31f);
			break;
		case 2147314556:
			func_250(uParam0, 6.482542E-11f);
			break;
		case -1820411463:
			func_250(uParam0, -1.58908E+26f);
			break;
		case 1509009970: /* GXTEntry: "Map - Miscellaneous" */
			func_250(uParam0, 0);
			break;
		default:
			func_250(uParam0, 0);
			break;
	}
}

int func_147(vector3[] vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < vParam0.x)
	{
		if (!func_251(vParam0[iVar0 /*3*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 5;
}

void func_148(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

struct<2> func_149(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

void func_150(struct<12> Param0, var uParam12, var uParam13, var uParam14)
{
	int iVar0;

	Global_17418.f_2992.f_17 = Param0.f_10;
	iVar0 = 0;
	while (iVar0 < Param0)
	{
		Global_17418.f_2992.f_1[iVar0 /*5*/].f_1 = { Param0[iVar0 /*3*/] };
		Global_17418.f_2992.f_1[iVar0 /*5*/].f_4 = Param0.f_11[iVar0];
		iVar0++;
	}
}

struct<10> func_151()
{
	return Global_1296492.f_34[func_252() /*10*/];
}

void func_152(bool bParam0)
{
	struct<6> Var0;
	var uVar6;

	Var0.f_4 = 1;
	Var0.f_5 = bParam0;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, PLAYER::PLAYER_ID());
	func_253(&Var0, uVar6);
}

int func_153(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_254(iVar0, bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_154(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_255(&Var3, iParam0) && func_256(&Var3))
	{
		func_257(Var3, 8.949939E-06f, &vVar0, 1);
	}
	return vVar0;
}

Vector3 func_155(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_255(&Var3, iParam0) && func_256(&Var3))
	{
		func_257(Var3, 4.896846E+09f, &vVar0, 1);
	}
	return vVar0;
}

void func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_50(iParam0))
	{
		return;
	}
	iVar0 = func_82(iParam0);
	if (bParam1)
	{
		func_258(iParam0, 4);
		if (bParam3)
		{
			func_259(iVar0, 1);
		}
		func_260(iVar0, 1);
	}
	else
	{
		func_261(iParam0, 4);
		func_260(iVar0, 0);
	}
}

bool func_157(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_158(var uParam0, bool bParam1)
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
					func_262(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_262(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					func_262(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					func_262(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					func_262(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					func_262(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					func_262(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					func_262(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_159(var uParam0, bool bParam1)
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
			if (func_263(iVar0))
			{
				uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(bParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
				sVar3 = HUD::GET_STRING_FROM_HASH_KEY(uParam0->f_5);
				uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(bParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0 + 1);
				if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_MH"))
				{
					func_262(&(uParam0->f_5), iVar2, 0, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_SH"))
				{
					func_262(&(uParam0->f_5), iVar2, 1, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_C"))
				{
					func_262(&(uParam0->f_5), iVar2, 3, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_J"))
				{
					func_262(&(uParam0->f_5), iVar2, 4, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_L"))
				{
					func_262(&(uParam0->f_5), iVar2, 2, 0, 0);
				}
				iVar2++;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_160(var uParam0, bool bParam1)
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
					func_262(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_262(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_161(var uParam0, bool bParam1)
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
					func_262(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_262(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					func_262(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					func_262(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = bParam1;
	func_262(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_162(var uParam0, bool bParam1)
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
					func_262(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					func_262(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_262(&(uParam0->f_5), iVar2, 2, 0, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_163(var uParam0, bool bParam1)
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
					func_262(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					func_262(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					func_262(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					func_262(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					func_262(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					func_262(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					func_262(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					func_262(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					func_262(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_164(var uParam0, bool bParam1)
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
					func_264(bParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					func_264(bParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					func_264(bParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					func_264(bParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_264(bParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_165(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_84(bParam0);
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
		func_212(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_166(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_175(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_167(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_168(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

int func_169(bool bParam0)
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

int func_170(bool bParam0)
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

int func_171(var uParam0, int iParam1)
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

int func_172(bool bParam0)
{
	int iVar0;

	iVar0 = func_169(bParam0);
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

int func_173(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_265(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_267(&Var0, func_266(0));
	}
	if (!func_268(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_14(iVar18);
	return iVar19;
}

int func_174(bool bParam0, int iParam1)
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

int func_175(bool bParam0)
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

struct<4> func_176(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_181(bParam0, bParam1, 0) };
	return func_195(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_177(bool bParam0)
{
	return func_84(bParam0) == -3.265313E+23f;
}

bool func_178(bool bParam0)
{
	var uVar0;

	if (func_3() != -1)
	{
		return false;
	}
	if (func_91(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_184(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_42(bParam0, 1);
}

void func_179(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_84(bParam0) != -3.265313E+23f)
	{
		return;
	}
	bVar0 = func_96(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_192(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_87(bParam0, 0, 0, 0) == 0))
		{
			if (func_3() == -1)
			{
				func_97(bVar0);
			}
			if (!*bParam3 && !iParam4 == 3787186f)
			{
				func_127(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_180(bool bParam0, int iParam1)
{
	if (func_5(bParam0, 7.644572E-37f))
	{
		func_230(bParam0, -982726.7f, iParam1, 1);
	}
}

struct<5> func_181(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_269(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_84(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_195(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_266(bParam1) };
			if (bParam2 && func_270(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_193(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_193(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_194(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_271(bParam1) };
			switch (func_169(bParam0))
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
			if (func_272(bParam0, -2.580501E-27f))
			{
				Var0 = { func_195(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_272(bParam0, -4.220332E-15f))
			{
				Var0 = { func_195(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_195(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_272(bParam0, -3.171238E-21f))
			{
				Var0 = { func_195(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_273(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_272(bParam0, -3.171238E-21f))
			{
				Var0 = { func_195(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

int func_182(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_22(bParam0, 0))
	{
		if (func_65(func_23(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_84(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_174(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, iParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_175(bParam3), bParam0);
}

int func_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_103(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_175(bParam1), bParam0, bParam3);
}

bool func_184(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_274(&bParam0);
	if (!func_22(bParam0, 0) && !func_65(func_23(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_174(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_177(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_266(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_193(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_194(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_270(bParam0, 1))
		{
			if (!func_193(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_194(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_182(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_275(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_185()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_276(Global_33, 8.330918E+10f)) && !func_276(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

bool func_186(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_187(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

void func_188(int iParam0)
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

void func_189(int iParam0)
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
			func_277(1);
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
			func_278(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_278(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_278(3);
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
			func_279(1);
			break;
		case 33:
			func_280(1);
			break;
		case 34:
			func_281(1);
			break;
		case 35:
			break;
		case 36:
			func_282(0);
			break;
		case 37:
			func_283(0);
			break;
		case 38:
			func_284(0);
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
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_108(677, 0);
			break;
		case 3:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_108(678, 0);
			break;
		case 4:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_108(679, 0);
			break;
		case 5:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_108(680, 0);
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
					func_101(0.01458261f, 1, 6.028273E-12f);
				}
			}
			break;
		case 49:
			if (func_3() == -1)
			{
				if (!func_42(0.01458261f, 1))
				{
					func_101(0.01458261f, 1, 6.028273E-12f);
				}
				if (!func_42(7.734759E-34f, 1))
				{
					func_101(7.734759E-34f, 1, 6.028273E-12f);
				}
			}
			break;
		case 48:
			if (func_3() == -1)
			{
				if (!func_42(1.044822E-10f, 1))
				{
					func_101(1.044822E-10f, 1, 6.028273E-12f);
				}
			}
			break;
		case 50:
			if (func_3() == -1)
			{
				if (!func_42(1.044822E-10f, 1))
				{
					func_101(1.044822E-10f, 1, 6.028273E-12f);
				}
				if (!func_42(-1.840652E+20f, 1))
				{
					func_101(-1.840652E+20f, 1, 6.028273E-12f);
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

int func_190(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_287(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_191(bool bParam0)
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

bool func_192(bool bParam0)
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

bool func_193(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_275(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_194(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_288(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_195(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_22(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_175(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_196(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_289(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_273(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_98(bParam6))
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
			iVar14 = func_290(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_291(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_175(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_197(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_292(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

int func_198(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_174(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_181(bParam0, 0, 0) };
	if (func_184(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_98(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_175(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_199(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_184(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_98(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_175(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_200(bool bParam0)
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
	iVar2 = func_293();
	func_294(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

int func_201(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_295(bParam0))
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

bool func_202()
{
	return false;
}

bool func_203(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_204(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_205(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_92(49))
			{
				if (!func_92(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_92(50))
			{
				if (!func_92(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_207(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_296(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_297(iParam0))
	{
		return false;
	}
	if (func_298(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_214(iParam0, 1)) || func_299(32768))
	{
		if (!func_214(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_300())
	{
		return false;
	}
	return true;
}

void func_208(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_209(int iParam0, bool bParam1, int iParam2)
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

void func_210(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_301(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_219(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
}

void func_211(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_302() || func_303())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 1036831949));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_219(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -3.959475E-32f, 0, 4.808429E-35f, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_219(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 6.028273E-12f);
		func_106(func_149(6.480143E+20f), iVar1);
	}
}

void func_212(bool bParam0, int iParam1, var uParam2)
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

int func_213(bool bParam0, bool bParam1)
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

bool func_214(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_215(var uParam0, int iParam1)
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

int func_216(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_304(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_305(uParam2, iParam0, Var1);
	return 1;
}

char* func_217(int iParam0)
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

float func_218(bool bParam0)
{
	var uVar0;

	if (!func_135(bParam0, &uVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		return -0.1987056f;
	}
	return uVar0;
}

int func_219(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_306(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_220()
{
	return !Global_1913431;
}

void func_221(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
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

char* func_222(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_223(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_224(bool bParam0)
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

bool func_225(bool bParam0)
{
	if (func_5(bParam0, -1.15596E+32f))
	{
		if (((func_307(bParam0, -9.979451E-09f) || func_307(bParam0, 2.758862E+11f)) || func_307(bParam0, 1.868312E+36f)) || func_307(bParam0, -2.847523E-24f))
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

bool func_226(int iParam0)
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

int func_227(bool bParam0)
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

bool func_228(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_308(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_309(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_310(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_311(bVar14))
			{
				func_312(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_312(iVar11);
	}
	return false;
}

bool func_229(bool bParam0, int iParam1)
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

int func_230(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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

char* func_231(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_232(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_313(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_233(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_314(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_315(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_316(bParam0), 128);
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

char* func_234(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_235(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_231(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_236(var uParam0, int iParam1)
{
	int iVar0;

	if (func_317(uParam0->f_9))
	{
		return false;
	}
	if (!func_318(*uParam0))
	{
		return false;
	}
	if (!func_319(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_320(uParam0->f_4))
	{
		return false;
	}
	if (func_321(0))
	{
		if (!func_22(uParam0->f_4, 0))
		{
			return false;
		}
		if (func_122())
		{
			iVar0 = func_183(uParam0->f_4, 1, 0, 0);
			if (iVar0 < func_275(uParam0->f_4, uParam0->f_5, uParam0->f_9, 0, 0, 0))
			{
				uParam0->f_11 = iVar0;
			}
		}
		if (uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if ((Global_1940239.f_11588 == 0 && !func_139(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11613, Global_1940239.f_11596), "label"))) && !func_322())
	{
		func_323(uParam0->f_4);
	}
	else
	{
		func_324(0);
	}
	return true;
}

bool func_237(bool bParam0, bool bParam1)
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

void func_238(var uParam0)
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

bool func_239(bool bParam0, bool bParam1)
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

bool func_240(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_325(iParam0))
		{
			return false;
		}
	}
	if (func_326(&(iParam0->f_6)))
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

int func_241(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_327(bParam0))
	{
		return 0;
	}
	bVar1 = func_328(iParam3, 2);
	bVar2 = func_329(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_329(bParam0, -982726.7f, bVar1);
	if (func_329(bParam0, 0.003804697f, bVar1))
	{
		iParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_330(bParam0, &fVar0) || func_331(bParam0, &fVar0)))
	{
		iParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_332())
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
	else if (func_333(15) && func_329(bParam0, 1.109321E-25f, bVar1))
	{
		iParam1 = 1.109321E-25f;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

int func_242(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_329(bParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_328(iParam2, 2))
	{
		if (func_334(bParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 0;
	}
	if (func_328(iParam2, 8))
	{
		return func_335(bParam0, iParam1);
	}
	return 1;
}

bool func_243(int* iParam0, struct<18> Param1, int iParam19, bool bParam20)
{
	if (iParam19 != 1.704487E-19f)
	{
		return false;
	}
	if (!func_336(Param1))
	{
		return false;
	}
	if (!func_337(iParam0, iParam19))
	{
		return false;
	}
	if (func_338(*iParam0, iParam19, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_339(iParam0, bParam20);
}

void func_244()
{
}

var func_245()
{
	Global_1292096.f_459.f_1552++;
	if (Global_1292096.f_459.f_1552 >= NaNf)
	{
		Global_1292096.f_459.f_1552 = 0;
	}
	return Global_1292096.f_459.f_1552;
}

void func_246(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			Global_1292096.f_459.f_44[func_340() /*30*/] = { Param0 };
			func_341((func_340() + 1 % 40));
			Global_1292096.f_459.f_1546++;
			break;
		case 1:
			Global_1292096.f_459.f_1245[func_342() /*30*/] = { Param0 };
			func_343((func_342() + 1 % 10));
			Global_1292096.f_459.f_1547++;
			break;
	}
}

bool func_247(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_248(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_14 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900460.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900460.f_68;
		}
		if (func_344())
		{
			return true;
		}
		if (Global_1072759.f_3 && !Global_1572887.f_10)
		{
			if ((Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900460.f_67;
		}
		else
		{
			return Global_1900460.f_68;
		}
	}
	if (iParam0 == 0 && func_346(func_345(0)))
	{
		return true;
	}
	if ((Global_1940186 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900595)
		{
			return true;
		}
	}
	switch (func_347(func_345(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

bool func_249()
{
	if (!((UNLOCK::UNLOCK_IS_VISIBLE(-6.916609E+21f) || UNLOCK::UNLOCK_IS_VISIBLE(2.188911E-28f)) || UNLOCK::UNLOCK_IS_VISIBLE(-1.680548E+28f)))
	{
		return false;
	}
	else if (!UNLOCK::UNLOCK_IS_VISIBLE(-3.215088E-27f))
	{
		return false;
	}
	return true;
}

void func_250(var uParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	float fVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;

	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1 = { func_309(-5.45926E-19f, -5.45926E-19f, 0, -7.733626E-28f, 0, 0, -1, iParam1, 0) };
	if (func_310(Var1, &iVar18, &iVar19, 0))
	{
		Var20 = { func_151() };
		if (iParam1 != 0)
		{
			func_348(uParam0, iVar18, iVar19);
		}
		iVar11 = 0;
		while (iVar11 < iVar19)
		{
			bVar17 = func_349(iVar11, iVar18);
			if (func_5(bVar17, -1.58908E+26f))
			{
				if (!func_249() || !func_42(-8.284301E+07f, 1))
				{
				}
				else if (func_350(bVar17))
				{
					if (func_5(bVar17, 6.482542E-11f))
					{
						if (func_5(bVar17, 5.050617E+08f))
						{
							iVar12 = 0;
							while (iVar12 <= 8)
							{
								iVar0 = func_351(Var20.f_7, bVar17, iVar12);
								vVar13 = { func_352(iVar0, bVar17) };
								fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar13, true);
								func_353(uParam0, bVar17, vVar13, fVar16);
								iVar12++;
							}
						}
						else if (func_5(bVar17, 2.133228E-14f))
						{
							iVar12 = 0;
							while (iVar12 <= 5)
							{
								iVar0 = func_351(Var20.f_7, bVar17, iVar12);
								vVar13 = { func_352(iVar0, bVar17) };
								fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar13, true);
								func_353(uParam0, bVar17, vVar13, fVar16);
								iVar12++;
							}
						}
						else if (func_5(bVar17, -4.561297E+28f))
						{
							if (bVar17 != 6.694413E+09f && bVar17 != -0.0002349855f)
							{
								iVar12 = 0;
								while (iVar12 <= 2)
								{
									iVar0 = func_351(Var20.f_7, bVar17, iVar12);
									vVar13 = { func_352(iVar0, bVar17) };
									fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar13, true);
									func_353(uParam0, bVar17, vVar13, fVar16);
									iVar12++;
								}
							}
						}
					}
					else if ((func_5(bVar17, -2.99103E+33f) && func_5(bVar17, -4.561297E+28f)) && bVar17 != 0.3892777f)
					{
						iVar12 = 0;
						while (iVar12 <= 1)
						{
							iVar0 = func_354(Var20.f_6, iVar12);
							vVar13 = { func_352(iVar0, bVar17) };
							fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar13, true);
							func_353(uParam0, bVar17, vVar13, fVar16);
							iVar12++;
						}
					}
					else
					{
						iVar0 = func_355(&Var20, bVar17);
						vVar13 = { func_352(iVar0, bVar17) };
						fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar13, true);
						func_353(uParam0, bVar17, vVar13, fVar16);
					}
				}
				iVar11++;
				func_312(iVar18);
			}
		}
	}
}

bool func_251(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_252()
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

void func_253(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 33;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 6, 28, &uParam1);
	func_356(*uParam0);
}

bool func_254(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0] == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_255(bool bParam0, int iParam1)
{
	*bParam0 = Global_1220811.f_1201;
	bParam0->f_2 = 5.087682E+09f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_256(bool bParam0)
{
	bParam0->f_2 = 0.106313f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_257(vector3 vParam0, int iParam3, var uParam4, float fParam5, Vector3* vParam6, bool bParam7)
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

void func_258(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_259(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_157(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_260(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_261(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

void func_262(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

bool func_263(int iParam0)
{
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

void func_264(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_357(bParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "style", iParam3);
		*uParam2++;
	}
}

struct<18> func_265(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_266(bool bParam0)
{
	int iVar0;

	iVar0 = func_175(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_195(8.681942E-06f, func_269(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_195(8.681942E-06f, func_269(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_195(8.681942E-06f, func_269(bParam0), -1.942248E+12f, 0);
}

void func_267(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_268(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_175(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_269(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_175(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_195(2.982335E+09f, func_358(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_195(2.982335E+09f, func_358(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_195(2.982335E+09f, func_358(), -5.45926E-19f, bParam0);
}

int func_270(bool bParam0, bool bParam1)
{
	if (func_169(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_359();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_271(bool bParam0)
{
	int iVar0;

	iVar0 = func_175(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_195(3.507197E-29f, func_269(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_195(3.507197E-29f, func_269(bParam0), 12999093, 0);
}

bool func_272(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_169(bParam0);
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
			if (func_360(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_273(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_361(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_274(bool bParam0)
{
	if (!func_22(*bParam0, 0))
	{
		return 0;
	}
	if (!func_362(*bParam0))
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

int func_275(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_174(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_195(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_175(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_175(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_276(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_277(bool bParam0)
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

void func_278(int iParam0)
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

void func_279(bool bParam0)
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

void func_280(bool bParam0)
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

void func_281(bool bParam0)
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

void func_282(bool bParam0)
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

void func_283(bool bParam0)
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

void func_284(bool bParam0)
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

bool func_285()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_286(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

int func_287(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_363(iParam2, -3.005759E+25f);
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
	func_364(uParam1, bParam0, Var3);
	return 1;
}

bool func_288(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_175(0);
	*iParam1 = { func_195(bParam0, func_266(0), fParam3, 0) };
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

bool func_289(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_290(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_365(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_367(func_366(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_368(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_291(int iParam0, struct<17> Param1)
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

int func_292(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_293()
{
	return Global_1902565;
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_369(*iParam0);
	iVar1 = func_370(*iParam0);
	iVar2 = func_371(*iParam0);
	iVar3 = func_372(*iParam0);
	iVar4 = func_373(*iParam0);
	iVar5 = func_374(*iParam0);
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
	iVar6 = func_375(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_375(iVar1, iVar0);
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
	func_376(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_295(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

bool func_296(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_297(int iParam0)
{
	if (func_214(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_298(int iParam0)
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

bool func_299(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_300()
{
	if (!func_55())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

void func_301(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_377())
	{
		Global_1913431.f_125 = MISC::GET_GAME_TIMER();
		Global_1913431.f_126 = iParam1;
	}
	Global_1913431.f_127 = (Global_1913431.f_127 + iParam0);
}

bool func_302()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-3.159453E+34f);
}

bool func_303()
{
	return DLC::IS_DLC_PRESENT(-1.05615E-37f);
}

void func_304(var uParam0)
{
	func_215(uParam0, 8.505438E-34f);
	if (func_378() == 3.272964E+34f)
	{
		func_215(uParam0, 8.967694E-17f);
	}
	else
	{
		func_215(uParam0, 1.721179E-28f);
	}
}

void func_305(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_326(uParam0))
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

void func_306(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

int func_307(bool bParam0, int iParam1)
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

int func_308(bool bParam0)
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

struct<10> func_309(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_310(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_311(bool bParam0)
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

int func_312(int iParam0)
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

int func_313(bool bParam0, int iParam1)
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

char* func_314(bool bParam0)
{
	bool bVar0;

	if (!func_22(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_117(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

bool func_315(bool bParam0)
{
	if (func_169(bParam0) == -1.955052E+34f || func_169(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_316(bool bParam0)
{
	int iVar0;

	if (!func_22(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_227(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

bool func_317(int iParam0)
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

bool func_318(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<10> Var0;
	int iVar14;

	if ((((Param0.f_9 != 4.978612f && Param0.f_9 != -6.4001E+33f) && Param0.f_9 != -0.001399076f) && Param0.f_9 != 6.727819E+25f) && Param0.f_9 != -2.918742E+20f)
	{
		Var0.f_9 = -5.45926E-19f;
		if (!func_273(Param0.f_5, &Var0, 1, 0, -1))
		{
			return false;
		}
		if (!func_5(Var0.f_4, 11.19303f))
		{
			return false;
		}
	}
	iVar14 = func_84(Param0.f_4);
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
			switch (func_169(Param0.f_4))
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
	if (func_169(Param0.f_4) == -1.223348E+09f)
	{
		return false;
	}
	return true;
}

bool func_319(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if ((iParam1 == 0 || func_321(0)) || bParam2)
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
	if (!bVar0 && func_379(bParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -889932290:
		case -283002878:
		case 0:
			if (!func_321(0))
			{
				if (bParam0 == 4.553053E+26f)
				{
					return true;
				}
				if (((((((((((func_319(bParam0, -7.334532E-18f, 1) || func_319(bParam0, -2.155093E-07f, 1)) || func_319(bParam0, -2.39227E+35f, 1)) || func_319(bParam0, -1.122582E-21f, 1)) || func_319(bParam0, 6.919499E+17f, 1)) || func_319(bParam0, -1.723482E+33f, 1)) || func_319(bParam0, 0.7868816f, 1)) || func_319(bParam0, -2.509875E-36f, 1)) || func_319(bParam0, -9.654275E+13f, 1)) || func_319(bParam0, -1.994502E+32f, 1)) || func_319(bParam0, 6.319022E+25f, 1)) || func_380(bParam0))
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
			return ((func_5(bParam0, 6.834376E-22f) && !func_321(0)) && func_381(bParam0));
		case -2074770370:
			if (Global_1940239.f_39 == 1 || Global_1940239.f_39 == 2)
			{
				return func_382(bParam0, iParam1);
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
			return func_91(bParam0, 8388608);
		case -182626652:
			if (func_383(bParam0, Global_1915643.f_20241.f_1))
			{
				func_384(func_175(0), bParam0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_320(bool bParam0)
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
	if (func_5(bParam0, 1.570684E+33f) && func_275(func_385(bParam0), func_269(1), 4.978612f, 0, 0, 0) > 0)
	{
		return false;
	}
	if (func_321(0))
	{
		if (Global_1940239.f_11587 == -1.994502E+32f && !func_383(bParam0, Global_1915643.f_20241.f_1))
		{
			return false;
		}
		if (Global_1940239.f_11587 == 0 && (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0) || func_386(bParam0)))
		{
			return false;
		}
		switch (Global_1915643.f_20241)
		{
			case 2:
				if (!func_387(bParam0))
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
	if (func_84(bParam0) == -2.310337E-38f)
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

bool func_321(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_322()
{
	return Global_1940239.f_10;
}

void func_323(var uParam0)
{
	Global_1940239.f_11588 = uParam0;
}

void func_324(int iParam0)
{
	Global_1940239.f_10 = iParam0;
}

bool func_325(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_388(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_326(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_327(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_328(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_329(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_327(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_334(bParam0, iParam1);
	}
	return true;
}

bool func_330(bool bParam0, float fParam1)
{
	*fParam1 = func_389(bParam0, 1);
	return *fParam1 != 0;
}

bool func_331(bool bParam0, float fParam1)
{
	*fParam1 = func_390(bParam0, 1, 0);
	return *fParam1 != 0;
}

bool func_332()
{
	return Global_1915643.f_22477;
}

bool func_333(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_321(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_334(bool bParam0, int iParam1)
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

int func_335(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -2.401104E+18f)
	{
		iVar0 = func_391(bParam0, -2.401104E+18f, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_392(iVar0))
		{
			if (Global_1915643.f_20644)
			{
				func_394(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_393(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -982726.7f)
	{
		iVar1 = func_391(bParam0, -982726.7f, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_395(iVar1))
		{
			if (Global_1915643.f_20644)
			{
				func_394("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 0.003804697f)
	{
		return 1;
	}
	if (!func_396(bParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_336(struct<18> Param0)
{
	if (!func_327(Param0.f_17))
	{
		return false;
	}
	return true;
}

bool func_337(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_397(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_398(iParam0))
		{
			return false;
		}
		if (!func_397(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_338(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_339(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_398(iParam0);
	}
	return true;
}

int func_340()
{
	if (Global_1292096.f_459.f_1548 >= 40 || Global_1292096.f_459.f_1548 < 0)
	{
		Global_1292096.f_459.f_1548 = 0;
	}
	return Global_1292096.f_459.f_1548;
}

void func_341(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1292096.f_459.f_1548 = iParam0;
}

int func_342()
{
	if (Global_1292096.f_459.f_1549 >= 10 || Global_1292096.f_459.f_1549 < 0)
	{
		Global_1292096.f_459.f_1549 = 0;
	}
	return Global_1292096.f_459.f_1549;
}

void func_343(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1292096.f_459.f_1549 = iParam0;
}

bool func_344()
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
	if (!func_346(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_345(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_346(struct<2> Param0)
{
	if (!func_399(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_400(Param0))
	{
		return false;
	}
	return true;
}

int func_347(var uParam0, var uParam1)
{
	return uParam0;
}

void func_348(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	var uVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	struct<10> Var13;

	Var13 = { func_151() };
	iVar8 = 0;
	while (iVar8 < iParam2)
	{
		bVar10 = func_349(iVar8, iParam1);
		if (func_350(bVar10))
		{
			if (func_5(bVar10, 6.482542E-11f))
			{
				if (func_5(bVar10, 5.050617E+08f))
				{
					iVar9 = 0;
					while (iVar9 <= 8)
					{
						iVar12 = func_351(Var13.f_7, bVar10, iVar9);
						vVar0 = { func_352(iVar12, bVar10) };
						fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar0, true);
						func_401(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &bVar10);
						iVar9++;
					}
				}
				else if (func_5(bVar10, 2.133228E-14f))
				{
					iVar9 = 0;
					while (iVar9 <= 5)
					{
						iVar12 = func_351(Var13.f_7, bVar10, iVar9);
						vVar0 = { func_352(iVar12, bVar10) };
						fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar0, true);
						func_401(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &bVar10);
						iVar9++;
					}
				}
				else if (func_5(bVar10, -4.561297E+28f))
				{
					if (bVar10 != 6.694413E+09f && bVar10 != -0.0002349855f)
					{
						iVar9 = 0;
						while (iVar9 <= 2)
						{
							iVar12 = func_351(Var13.f_7, bVar10, iVar9);
							vVar0 = { func_352(iVar12, bVar10) };
							fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar0, true);
							func_401(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &bVar10);
							iVar9++;
						}
					}
				}
			}
			else if ((func_5(bVar10, -2.99103E+33f) && func_5(bVar10, -4.561297E+28f)) && bVar10 != 0.3892777f)
			{
				iVar9 = 0;
				while (iVar9 <= 1)
				{
					iVar12 = func_354(Var13.f_6, iVar9);
					vVar0 = { func_352(iVar12, bVar10) };
					fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar0, true);
					func_401(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &bVar10);
					iVar9++;
				}
			}
			else
			{
				iVar12 = func_355(&Var13, bVar10);
				vVar0 = { func_352(iVar12, bVar10) };
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar0, true);
				func_401(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &bVar10);
			}
		}
		iVar8++;
	}
	func_402(uParam0, uVar11, vVar4, 0);
}

int func_349(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_350(bool bParam0)
{
	int iVar0;

	if (!func_22(bParam0, 0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (func_5(bParam0, -1.80273E-33f))
	{
		if (!func_42(6.914108E-36f, 1))
		{
			return false;
		}
		if (func_5(bParam0, -4.561297E+28f))
		{
			if (!func_42(-8.284301E+07f, 1))
			{
				return false;
			}
		}
	}
	if (((func_5(bParam0, 7.372995E+17f) || func_5(bParam0, 8.310792E-34f)) || func_5(bParam0, -95782.72f)) || func_5(bParam0, -1.58908E+26f))
	{
		if (!func_42(-8.284301E+07f, 1))
		{
			return false;
		}
	}
	if (!func_5(bParam0, -1.58908E+26f))
	{
		iVar0 = func_403(12);
		if (iVar0 < 5)
		{
			if (func_5(bParam0, 2.133228E-14f))
			{
				return false;
			}
		}
		if (iVar0 < 10)
		{
			if (func_5(bParam0, -4.561297E+28f))
			{
				return false;
			}
		}
	}
	return true;
}

int func_351(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 40018245:
			iVar0 = 0;
			break;
		case -1586372771:
			iVar0 = 1;
			break;
		case -1356105008:
			iVar0 = 2;
			break;
		case -1175547818:
			iVar0 = 3;
			break;
		case -877579301:
			iVar0 = 4;
			break;
		case 1138992134:
			iVar0 = 5;
			break;
	}
	if (func_5(bParam1, 5.050617E+08f))
	{
		iParam2 = (iParam2 + iVar0 * 9);
	}
	else if (func_5(bParam1, 2.133228E-14f))
	{
		iParam2 = (iParam2 + iVar0 * 6);
	}
	else if (func_5(bParam1, -4.561297E+28f))
	{
		iParam2 = (iParam2 + iVar0 * 3);
	}
	switch (iParam2)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		case 15:
			return 15;
		case 16:
			return 16;
		case 17:
			return 17;
		case 18:
			return 18;
		case 19:
			return 19;
		case 20:
			return 20;
		case 21:
			return 21;
		case 22:
			return 22;
		case 23:
			return 23;
		case 24:
			return 24;
		case 25:
			return 25;
		case 26:
			return 26;
		case 27:
			return 27;
		case 28:
			return 28;
		case 29:
			return 29;
		case 30:
			return 30;
		case 31:
			return 31;
		case 32:
			return 32;
		case 33:
			return 33;
		case 34:
			return 34;
		case 35:
			return 35;
		case 36:
			return 36;
		case 37:
			return 37;
		case 38:
			return 38;
		case 39:
			return 39;
		case 40:
			return 40;
		case 41:
			return 41;
		case 42:
			return 42;
		case 43:
			return 43;
		case 44:
			return 44;
		case 45:
			return 45;
		case 46:
			return 46;
		case 47:
			return 47;
		case 48:
			return 48;
		case 49:
			return 49;
		case 50:
			return 50;
		case 51:
			return 51;
		case 52:
			return 52;
		case 53:
			return 53;
		default:
			break;
	}
	return 0;
}

Vector3 func_352(int iParam0, bool bParam1)
{
	vector3 vVar0;

	if (func_5(bParam1, -1.80273E-33f))
	{
		vVar0 = { func_404(iParam0, bParam1) };
	}
	if (func_5(bParam1, -2.99103E+33f))
	{
		vVar0 = { func_405(iParam0, bParam1) };
	}
	if (func_5(bParam1, 8.310792E-34f))
	{
		vVar0 = { func_406(iParam0, bParam1) };
	}
	if (func_5(bParam1, -95782.72f))
	{
		vVar0 = { func_407(iParam0, bParam1) };
	}
	if (func_5(bParam1, 1894063f))
	{
		vVar0 = { func_408(iParam0, bParam1) };
	}
	if (func_5(bParam1, 2.768429E+31f))
	{
		vVar0 = { func_409(iParam0, bParam1) };
	}
	if (func_5(bParam1, 7.372995E+17f))
	{
		vVar0 = { func_410(iParam0, bParam1) };
	}
	if (func_5(bParam1, 6.482542E-11f))
	{
		vVar0 = { func_411(iParam0, bParam1) };
	}
	if (func_5(bParam1, -1.58908E+26f))
	{
		vVar0 = { func_412(iParam0, bParam1) };
	}
	return vVar0;
}

void func_353(var uParam0, bool bParam1, vector3 vParam2, float fParam5)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;

	if ((func_413(bParam1, vParam2) && func_350(bParam1)) && !func_251(vParam2))
	{
		iVar4 = 0;
		while (iVar4 < uParam0->f_11)
		{
			vVar0 = { *(uParam0[iVar4 /*3*/]) };
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vVar0, true);
			if (iVar4 == 0)
			{
				if (func_251(*(uParam0[iVar4 /*3*/])))
				{
					func_402(uParam0, bParam1, vParam2, iVar4);
				}
				else if (bParam1 != uParam0->f_11[iVar4])
				{
					if (fParam5 < fVar3)
					{
						func_402(uParam0, bParam1, vParam2, iVar4);
					}
				}
			}
			else if (!func_414(uParam0, bParam1))
			{
				if (func_251(*(uParam0[iVar4 /*3*/])))
				{
					func_402(uParam0, bParam1, vParam2, iVar4);
				}
				else if (!func_415(uParam0, iVar4))
				{
					if (fParam5 < fVar3)
					{
						func_402(uParam0, bParam1, vParam2, iVar4);
					}
				}
				else
				{
					func_402(uParam0, bParam1, vParam2, iVar4 + 1);
				}
			}
			iVar4++;
		}
	}
}

int func_354(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1561655701:
			iParam1 = iParam1;
			break;
		case 1218924734:
			iParam1 += 2;
			break;
		case 1516368947:
			iParam1 += 4;
			break;
		case 1984048115:
			iParam1 += 6;
			break;
		case -2013016202:
			iParam1 += 8;
			break;
		case -1745916083:
			iParam1 += 10;
			break;
	}
	switch (iParam1)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		default:
			break;
	}
	return 0;
}

int func_355(var uParam0, bool bParam1)
{
	if (func_5(bParam1, 6.482542E-11f))
	{
	}
	else if (func_5(bParam1, -2.99103E+33f))
	{
		switch (uParam0->f_6)
		{
			case 1561655701:
				return 0;
			case 1218924734:
				return 1;
			case 1516368947:
				return 2;
			case 1984048115:
				return 3;
			case -2013016202:
				return 4;
			case -1745916083:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(bParam1, -1.80273E-33f))
	{
		switch (*uParam0)
		{
			case 262189671:
				return 0;
			case -1865796416:
				return 1;
			case -2102912900:
				return 2;
			case -1471781960:
				return 3;
			case -1711487195:
				return 4;
			case 1532840411:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(bParam1, 8.310792E-34f))
	{
		switch (uParam0->f_3)
		{
			case -1285238734:
				return 0;
			case -888012916:
				return 1;
			case -1211213567:
				return 2;
			case -1116052391:
				return 3;
			case 1314063884:
				return 4;
			case 1644572018:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(bParam1, -95782.72f))
	{
		switch (uParam0->f_4)
		{
			case -158969429:
				return 0;
			case 147060262:
				return 1;
			case -486692198:
				return 2;
			case 886099519:
				return 3;
			case -1789128804:
				return 4;
			case -1617026016:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(bParam1, 1894063f))
	{
		switch (uParam0->f_1)
		{
			case -1859451998:
				return 0;
			case 467802382:
				return 1;
			case 212892331:
				return 2;
			case -137539355:
				return 3;
			case -366824048:
				return 4;
			case -1952384882:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(bParam1, 2.768429E+31f))
	{
		switch (uParam0->f_8)
		{
			case 1381272898:
				return 0;
			case 1539809320:
				return 1;
			case -2102137352:
				return 2;
			case 199098446:
				return 3;
			case 1462376165:
				return 4;
			case 1885620569:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(bParam1, 7.372995E+17f))
	{
		switch (uParam0->f_5)
		{
			case -1414390857:
				return 0;
			case -490927668:
				return 1;
			case 345304443:
				return 2;
			case -564887297:
				return 3;
			case 267084844:
				return 4;
			case 1120782832:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(bParam1, -1.58908E+26f))
	{
		switch (uParam0->f_9)
		{
			case 346286482:
				return 0;
			case 82987567:
				return 1;
			case -145707284:
				return 2;
			case 1940236180:
				return 3;
			case 1558018564:
				return 4;
			case 1310186617:
				return 5;
			default:
				break;
		}
	}
	return 0;
}

void func_356(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
}

char* func_357(bool bParam0, int iParam1)
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

struct<4> func_358()
{
	struct<4> Var0;

	return Var0;
}

int func_359()
{
	if (func_183(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_360(bool bParam0, int iParam1, int iParam2)
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

int func_361(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_175(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_362(bool bParam0)
{
	return func_5(bParam0, 5.168749E+07f);
}

void func_363(int iParam0, int iParam1)
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

void func_364(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_326(uParam0))
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

bool func_365(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_416(iParam1->f_8, iParam0, iVar0, 2048) || func_416(iParam1->f_8, iParam0, iVar0, 32768)) || func_416(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_416(iParam1->f_8, iParam0, iVar0, 4) || func_416(iParam1->f_8, iParam0, iVar0, 256)) || func_416(iParam1->f_8, iParam0, iVar0, 65536)) || func_416(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_416(iParam1->f_8, iParam0, iVar0, 1) || func_416(iParam1->f_8, iParam0, iVar0, 8)) || func_416(iParam1->f_8, iParam0, iVar0, 65536)) || func_416(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_416(iParam1->f_8, iParam0, iVar0, 1) || func_416(iParam1->f_8, iParam0, iVar0, 16)) || func_416(iParam1->f_8, iParam0, iVar0, 2)) || func_416(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_416(iParam1->f_8, iParam0, iVar0, 8) || func_416(iParam1->f_8, iParam0, iVar0, 4096)) || func_416(iParam1->f_8, iParam0, iVar0, 256)) || func_416(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_366(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_367(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_417(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_417(iParam1, 2, 0, 0);
	return -1;
}

int func_368(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_417(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_369(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_418(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_370(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_371(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_372(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_373(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_374(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_375(int iParam0, int iParam1)
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

void func_376(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_419(iParam0, iParam6);
	func_420(iParam0, iParam5);
	func_421(iParam0, iParam4);
	func_422(iParam0, iParam3);
	func_423(iParam0, iParam2);
	func_424(iParam0, iParam1);
}

bool func_377()
{
	return Global_1913431.f_127 == 0;
}

int func_378()
{
	return Global_1953279.f_1;
}

bool func_379(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1940239.f_41.f_1)
	{
		if (func_425(bParam0, Global_1940239.f_41.f_2[iVar0 /*2*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_380(bool bParam0)
{
	if (func_5(bParam0, -5.092244E+08f))
	{
		return func_5(bParam0, 2.00625E+31f);
	}
	return false;
}

bool func_381(bool bParam0)
{
	if ((((((((((((((((func_426(bParam0, 6.643934E-37f) || func_426(bParam0, NaNf)) || func_426(bParam0, 2.405382E+20f)) || func_426(bParam0, 5.266092E-27f)) || func_426(bParam0, -5.272253E-14f)) || func_426(bParam0, -3.072587E+16f)) || func_426(bParam0, -3.933513E-29f)) || func_426(bParam0, -2.153603E-21f)) || func_426(bParam0, 2.78471E+33f)) || func_426(bParam0, 1.096557E-35f)) || func_426(bParam0, 6.60208E-06f)) || func_426(bParam0, -7.329766E+14f)) || func_426(bParam0, -5.276673E+08f)) || func_426(bParam0, joaat("TAROT_CARDS_WANDS"))) || func_426(bParam0, 3.452593E-11f)) || func_426(bParam0, -1.05944E+30f)) || func_426(bParam0, -2.232068E+37f))
	{
		return true;
	}
	return false;
}

int func_382(bool bParam0, int iParam1)
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

bool func_383(bool bParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_427(bParam0);
	}
	return func_428(bParam0, iParam1);
}

void func_384(int iParam0, bool bParam1, bool bParam2)
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

bool func_385(bool bParam0)
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
	bVar0 = func_138(bParam0, 0);
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

bool func_386(bool bParam0)
{
	if (func_5(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_387(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (!func_139(bVar0))
	{
		return false;
	}
	if (((((((((((((bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-3.072587E+16f, 0) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-5.272253E-14f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(5.266092E-27f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(2.405382E+20f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(6.643934E-37f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(NaNf, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-3.933513E-29f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-2.153603E-21f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(1.096557E-35f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(2.78471E+33f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(6.60208E-06f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-7.329766E+14f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-5.276673E+08f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_WANDS"), 0))
	{
		return true;
	}
	return false;
}

int func_388(int* iParam0)
{
	return func_429(iParam0->f_1);
}

int func_389(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_430(iVar0, 1, 0);
		if (!func_431(bParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_432(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_87(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

int func_390(bool bParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_430(iVar0, 0, 1);
		if (!func_431(bParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_433(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_87(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

int func_391(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_431(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_392(int iParam0)
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

int func_393(int iParam0)
{
	return (iParam0 / 100);
}

void func_394(char* sParam0)
{
	Global_1915643.f_22470 = func_145(sParam0, 10000, 0, 0, 0, 1);
}

bool func_395(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_3() == 0)
	{
		return func_434(iParam0);
	}
	return iParam0 <= func_435();
}

bool func_396(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_431(bParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_395(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_392(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_436(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_437(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_87(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

bool func_397(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 2.249603E-13f, iParam1))
	{
		return false;
	}
	return true;
}

bool func_398(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_417(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_417(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_417(*iParam0, 2, 0, 0);
		return false;
	}
	func_417(*iParam0, 1, 0, 0);
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

bool func_399(int iParam0)
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

int func_400(int iParam0)
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

void func_401(var uParam0, float fParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	if (func_413(*bParam5, *uParam3))
	{
		if (*uParam0 == 0f || *fParam1 < *uParam0)
		{
			*uParam2 = { *uParam3 };
			*uParam0 = *fParam1;
			*uParam4 = *bParam5;
		}
	}
}

void func_402(var uParam0, bool bParam1, vector3 vParam2, int iParam5)
{
	uParam0->f_11[iParam5] = bParam1;
	*(uParam0[iParam5 /*3*/]) = { vParam2 };
}

int func_403(int iParam0)
{
	int iVar0;

	if (!func_438(iParam0))
	{
		return 0;
	}
	iVar0 = func_439(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_440(iParam0, 1);
	}
	return 0;
}

Vector3 func_404(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case joaat("PROVISION_ARROWHEAD_AGATE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -993310671, -994836095, 1117987245 };
					break;
				case 1:
					vVar0 = { 1130659257, 1156463927, 1129127923 };
					break;
				case 2:
					vVar0 = { -1020887066, 1135449735, 1119930609 };
					break;
				case 3:
					vVar0 = { -989851959, -1007506981, 1125424628 };
					break;
				case 4:
					vVar0 = { 1159852749, 1139295912, 1115866530 };
					break;
				case 5:
					vVar0 = { 1138817565, 1158003622, 1131555258 };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_BONE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -985586860, -983142322, -1044868702 };
					break;
				case 1:
					vVar0 = { 1134941274, -1002709123, 1109790818 };
					break;
				case 2:
					vVar0 = { 1152870760, -991599485, 1112617176 };
					break;
				case 3:
					vVar0 = { 1138217026, 1158174061, 1131756126 };
					break;
				case 4:
					vVar0 = { -993277460, -1000000307, 1119952306 };
					break;
				case 5:
					vVar0 = { 1160432865, 1151544156, 1119672730 };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_CHIPPED"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160221950, 1147011342, 1118922129 };
					break;
				case 1:
					vVar0 = { -979456190, -982850437, -1065283297 };
					break;
				case 2:
					vVar0 = { -989737173, -990100840, 1119830567 };
					break;
				case 3:
					vVar0 = { 1133023265, 1152908739, 1125980897 };
					break;
				case 4:
					vVar0 = { 1156061569, -993190945, 1110399255 };
					break;
				case 5:
					vVar0 = { -1001351987, 1149907558, 1125432951 };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_CRUDE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1155576381, -1001576666, 1109771501 };
					break;
				case 1:
					vVar0 = { -993939481, -1000039221, 1118879242 };
					break;
				case 2:
					vVar0 = { 1150770971, -999690314, 1115085236 };
					break;
				case 3:
					vVar0 = { 1161160331, 1150848246, 1110125052 };
					break;
				case 4:
					vVar0 = { -977546709, -985550356, -1074144477 };
					break;
				case 5:
					vVar0 = { -988053783, -987252290, 1117154836 };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_FELDSPAR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -995754590, -987717177, 1116861664 };
					break;
				case 1:
					vVar0 = { -982930489, -989701231, -1056889940 };
					break;
				case 2:
					vVar0 = { -988347683, -998546768, 1126619297 };
					break;
				case 3:
					vVar0 = { -976773396, -983206625, -1044660093 };
					break;
				case 4:
					vVar0 = { 1151183839, -1015001350, 1120127681 };
					break;
				case 5:
					vVar0 = { -989225284, -994797797, 1124633084 };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_FLINT"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1134713628, 1154915369, 1126539887 };
					break;
				case 1:
					vVar0 = { -989483135, -992108265, 1124948836 };
					break;
				case 2:
					vVar0 = { 1159309509, 1133644002, 1116421559 };
					break;
				case 3:
					vVar0 = { -994175386, 1144557126, 1123665183 };
					break;
				case 4:
					vVar0 = { -981561487, -987542061, -1061846778 };
					break;
				case 5:
					vVar0 = { 1152674931, -990662001, 1112440308 };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_OBSIDIAN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1150200586, 1139315491, 1119874221 };
					break;
				case 1:
					vVar0 = { -987648549, -1027690736, 1126669825 };
					break;
				case 2:
					vVar0 = { -986344915, -1015134034, 1127853215 };
					break;
				case 3:
					vVar0 = { 1145007833, 1142931816, 1123562422 };
					break;
				case 4:
					vVar0 = { 1158562378, 1149544202, 1117454860 };
					break;
				case 5:
					vVar0 = { -997283578, -999293321, 1115430584 /* Float: 63.03f */ };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_QUARTZ"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160899465, 1158469292, 1125910931 };
					break;
				case 1:
					vVar0 = { -993189380, 1142806381, 1123545514 };
					break;
				case 2:
					vVar0 = { -978212727, -986948366, -1047869716 };
					break;
				case 3:
					vVar0 = { -991767544, -993422107, 1121007305 };
					break;
				case 4:
					vVar0 = { 1151453028, -993891271, 1116000879 };
					break;
				case 5:
					vVar0 = { -981891887, -984021369, 1112711889 };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_RAW"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -987232571, -994321768, 1125533293 };
					break;
				case 1:
					vVar0 = { 1149783736, -1040970862, 1118533606 };
					break;
				case 2:
					vVar0 = { 1140187011, -1013296700, 1125034806 };
					break;
				case 3:
					vVar0 = { 1152740844, -1011704332, 1117741777 };
					break;
				case 4:
					vVar0 = { -999219036, -992323617, 1116807627 };
					break;
				case 5:
					vVar0 = { 1144552899, 1129932653, 1125112480 };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_ROUGH"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -980185547, -985031295, 1090583134 };
					break;
				case 1:
					vVar0 = { 1122589816, 1150827626, 1127708407 };
					break;
				case 2:
					vVar0 = { -990181302, -986845975, 1116441191 };
					break;
				case 3:
					vVar0 = { -980023259, -988441133, 1087119557 /* Float: 6.379f */ };
					break;
				case 4:
					vVar0 = { 1157113954, -1005907509, 1109604958 };
					break;
				case 5:
					vVar0 = { -985364685, -987382690, 1093616534 };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_SLATE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -989558292, 1116695700, 1132394925 };
					break;
				case 1:
					vVar0 = { 1150691713, -989911728, 1113326921 };
					break;
				case 2:
					vVar0 = { 1151031165, 1150464131, 1125425794 };
					break;
				case 3:
					vVar0 = { 1159104197, 1155305497, 1118916575 };
					break;
				case 4:
					vVar0 = { -999078642, 1129978331, 1118821679 };
					break;
				case 5:
					vVar0 = { 1131529961, 1153884619, 1127387169 };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_SPLINTERED"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1020909342, -1021016559, 1119142450 };
					break;
				case 1:
					vVar0 = { 1159626293, 1143931517, 1117418196 };
					break;
				case 2:
					vVar0 = { 1139025576, 1158217839, 1131722742 };
					break;
				case 3:
					vVar0 = { -987107410, 1143644848, 1127138198 };
					break;
				case 4:
					vVar0 = { -1008264577, 1152541368, 1129209135 };
					break;
				case 5:
					vVar0 = { 1158295564, -1003946623, 1109596570 };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_405(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case joaat("PROVISION_DUCK_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1124245012, 1153249616, 1122430812 };
					break;
				case 1:
					vVar0 = { 1158990094, 1148643366, 1116867976 };
					break;
				case 2:
					vVar0 = { 1160540942, 1158191309, 1125898545 };
					break;
				case 3:
					vVar0 = { 1153733132, 1152037052, 1125176862 };
					break;
				case 4:
					vVar0 = { -988224913, -1006287702, 1124956937 };
					break;
				case 5:
					vVar0 = { -988002677, -994566316, 1125286163 };
					break;
			}
			break;
		case joaat("PROVISION_EAGLE_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -989149893, -1005927105, 1125612834 };
					break;
				case 1:
					vVar0 = { -996677566, 1152073867, 1132617499 };
					break;
				case 2:
					vVar0 = { -989587165, -1030492840, 1132672205 };
					break;
				case 3:
					vVar0 = { -998896969, 1153382670, 1131913085 };
					break;
				case 4:
					vVar0 = { -994237579, -1012237399, 1125696025 };
					break;
				case 5:
					vVar0 = { -990613570, 1158213177, 1134973272 };
					break;
				case 6:
					vVar0 = { -997040456, 1149459579, 1126692946 };
					break;
				case 7:
					vVar0 = { -990162043, -1010451087, 1127136625 };
					break;
				case 8:
					vVar0 = { -990814355, 1151012430, 1128463381 };
					break;
				case 9:
					vVar0 = { -991267488, -1015992163, 1128735002 };
					break;
				case 10:
					vVar0 = { -996935401, 1157812965, 1135728361 };
					break;
				case 11:
					vVar0 = { -988519997, 1128375366, 1129528689 };
					break;
			}
			break;
		case joaat("PROVISION_EGRET_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157668528, -992525189, 1110412996 };
					break;
				case 1:
					vVar0 = { 1156047839, -1000940034, 1110958090 };
					break;
				case 2:
					vVar0 = { 1159386235, -1014444524, 1110531113 /* Float: 44.34f */ };
					break;
				case 3:
					vVar0 = { 1158809530, -1001039890, 1110804435 };
					break;
				case 4:
					vVar0 = { 1156618109, -997283242, 1110637850 };
					break;
				case 5:
					vVar0 = { 1156035027, -1011895268, 1112039220 };
					break;
			}
			break;
		case joaat("PROVISION_GOOSE_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -994708341, -990144799, 1109601907 };
					break;
				case 1:
					vVar0 = { 1127159149, -1002536572, 1109636125 };
					break;
				case 2:
					vVar0 = { 1154369921, -989724295, 1109744466 };
					break;
				case 3:
					vVar0 = { -989430288, -989976691, 1113419644 };
					break;
				case 4:
					vVar0 = { -1011193247, -997606711, 1109701063 };
					break;
				case 5:
					vVar0 = { 1138333123, -993035608, 1110395265 };
					break;
			}
			break;
		case joaat("PROVISION_HAWK_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1154661990, 1155707814, 1129987532 };
					break;
				case 1:
					vVar0 = { -993659314, 1162241085, 1139951675 };
					break;
				case 2:
					vVar0 = { 1145785272, 1157233213, 1133357561 };
					break;
				case 3:
					vVar0 = { -998116123, 1160094048, 1134494532 };
					break;
				case 4:
					vVar0 = { -1017659943, 1154018288, 1126737923 };
					break;
				case 5:
					vVar0 = { -994414092, 1159878271, 1136356914 };
					break;
				case 6:
					vVar0 = { 1151935382, 1153511997, 1128721927 };
					break;
				case 7:
					vVar0 = { -1003344278, 1159861821, 1135202468 };
					break;
				case 8:
					vVar0 = { 1138870334, 1154170970, 1129307295 };
					break;
				case 9:
					vVar0 = { -995686564, 1157242470, 1134772552 };
					break;
				case 10:
					vVar0 = { 1119139655, 1154824290, 1128002414 };
					break;
				case 11:
					vVar0 = { -1003294097, 1160900731, 1135572088 };
					break;
			}
			break;
		case joaat("PROVISION_HERON_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157961052, -1007730603, 1110507457 };
					break;
				case 1:
					vVar0 = { 1158107976, -1000982118, 1111002946 };
					break;
				case 2:
					vVar0 = { 1154949521, -998659678, 1111499014 };
					break;
				case 3:
					vVar0 = { 1156713759, -991530598, 1111469588 /* Float: 47.92f */ };
					break;
				case 4:
					vVar0 = { 1158374244, -1014748398, 1110912868 };
					break;
				case 5:
					vVar0 = { 1158412956, -997293285, 1111063244 };
					break;
			}
			break;
		case joaat("PROVISION_LOON_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1143651795, -991345213, 1110213557 };
					break;
				case 1:
					vVar0 = { -1003557149, -1008222867, 1109606434 };
					break;
				case 2:
					vVar0 = { -997635301, -1000180584, 1110493202 };
					break;
				case 3:
					vVar0 = { -990964900, -997645140, 1117106517 };
					break;
				case 4:
					vVar0 = { -1000882956, 1142094502, 1114348724 };
					break;
				case 5:
					vVar0 = { 1138923258, -1004147343, 1111380491 };
					break;
			}
			break;
		case joaat("PROVISION_SPOONBILL_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157656408, -994964062, 1111732891 };
					break;
				case 1:
					vVar0 = { 1159009112, -1004725264, 1111942003 };
					break;
				case 2:
					vVar0 = { 1160722084, -1003626544, 1110834264 };
					break;
				case 3:
					vVar0 = { 1155315130, -1005882769, 1111811162 };
					break;
				case 4:
					vVar0 = { 1153707164, -1000061067, 1110893283 };
					break;
				case 5:
					vVar0 = { 1157269266, -992513016, 1112250445 };
					break;
			}
			break;
		case joaat("PROVISION_VULTURE_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -986298216, -988870902, 1117315113 };
					break;
				case 1:
					vVar0 = { -989828125, -990859624, 1122012063 };
					break;
				case 2:
					vVar0 = { 1160107520, 1155209322, 1121768505 };
					break;
				case 3:
					vVar0 = { -987875189, -986141008, 1116046459 };
					break;
				case 4:
					vVar0 = { 1160376410, 1158211064, 1125955011 };
					break;
				case 5:
					vVar0 = { 1158881554, 1152744079, 1125028967 };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_406(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case joaat("PROVISION_COIN_1700_NY_TKN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1159006765, 1143976478, 1116271907 };
					break;
				case 1:
					vVar0 = { 1152431669, -992095904, 1115915025 };
					break;
				case 2:
					vVar0 = { -987123352, 1144207658, 1126837512 };
					break;
				case 3:
					vVar0 = { -980256451, -982914597, 1091902944 };
					break;
				case 4:
					vVar0 = { 1158684303, 1157241364, 1127422113 };
					break;
				case 5:
					vVar0 = { 1159337705, -998781886, 1109509745 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1787_CENT_TKN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1142326631, 1141477854, 1121887624 };
					break;
				case 1:
					vVar0 = { 1138301298, 1154317058, 1128586759 };
					break;
				case 2:
					vVar0 = { -992658260, -995961078, 1119418901 };
					break;
				case 3:
					vVar0 = { -995387498, -988465787, 1109696958 };
					break;
				case 4:
					vVar0 = { 1157871456, -996179665, 1109727379 };
					break;
				case 5:
					vVar0 = { -989250298, 1144784475, 1123393077 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1789_PNY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160990474, 1155386819, 1124472036 };
					break;
				case 1:
					vVar0 = { 1154283667, 1146122079, 1125111372 };
					break;
				case 2:
					vVar0 = { 1150651261, -1005668721, 1116107375 };
					break;
				case 3:
					vVar0 = { -978500741, -986376544, -1065185444 /* Float: -4.08f */ };
					break;
				case 4:
					vVar0 = { 1158578332, -1006189969, 1109541782 };
					break;
				case 5:
					vVar0 = { -1006209221, 1160181350, 1134485406 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1792_LIB_QTR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -979267195, -986867442, 1090494172 };
					break;
				case 1:
					vVar0 = { -1011221512, -1029670643, 1110149814 };
					break;
				case 2:
					vVar0 = { -1015132861, 1151899361, 1124764333 };
					break;
				case 3:
					vVar0 = { 1153838793, -991519769, 1112369529 };
					break;
				case 4:
					vVar0 = { -984776950, -986766143, -1065002992 };
					break;
				case 5:
					vVar0 = { 1135845868, 1152493486, 1127215071 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1792_NICKEL"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -991979348, -1005497847, 1125837039 };
					break;
				case 1:
					vVar0 = { 1159624688, 1150644691, 1126397110 };
					break;
				case 2:
					vVar0 = { 1162100236, 1153385587, 1112722338 };
					break;
				case 3:
					vVar0 = { -988948988, -995733709, 1124369433 };
					break;
				case 4:
					vVar0 = { -980962927, -987578241, -1074203197 };
					break;
				case 5:
					vVar0 = { 1152112058, -989721801, 1112216175 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1792_QTR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1124153478, 1148900966, 1129331445 };
					break;
				case 1:
					vVar0 = { -1010449845, 1155212329, 1129794227 };
					break;
				case 2:
					vVar0 = { 1147575927, 1132972524, 1122468364 };
					break;
				case 3:
					vVar0 = { 1159980245, -1004351537, 1110047982 };
					break;
				case 4:
					vVar0 = { -993121280, -992561357, 1118130405 };
					break;
				case 5:
					vVar0 = { 1160374882, 1144042144, 1117527867 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1794_SLV_DLR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1159469183, -1009669757, 1109533196 };
					break;
				case 1:
					vVar0 = { -988616180, 1122061635, 1129890028 };
					break;
				case 2:
					vVar0 = { -983723479, -985924084, 1093068590 };
					break;
				case 3:
					vVar0 = { 1160261394, 1157476835, 1126071992 };
					break;
				case 4:
					vVar0 = { 1146035913, -993903321, 1110234628 };
					break;
				case 5:
					vVar0 = { -990300996, -993297621, 1122518565 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1795_HLF_EAG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1152922427, 1134948670, 1118971028 };
					break;
				case 1:
					vVar0 = { -977086906, -983831253, -1040356218 };
					break;
				case 2:
					vVar0 = { 1118001967, 1138726476, 1125725700 };
					break;
				case 3:
					vVar0 = { -1014174843, 1147575042, 1123969532 };
					break;
				case 4:
					vVar0 = { 1153073046, 1147910717, 1125841633 };
					break;
				case 5:
					vVar0 = { -996299678, -993461608, 1117743219 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1796_HLF_PNY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -995127992, -987327119, 1109743271 };
					break;
				case 1:
					vVar0 = { -1009945333, 1143411266, 1122235266 };
					break;
				case 2:
					vVar0 = { -978754730, -986057855, 1090479639 };
					break;
				case 3:
					vVar0 = { -987166859, -988465107, 1110337651 };
					break;
				case 4:
					vVar0 = { -983395119, -987715486, -1048774181 };
					break;
				case 5:
					vVar0 = { 1156813373, -1003887264, 1109636415 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1797_GLD_EAG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1151240643, -1010731919, 1118893410 };
					break;
				case 1:
					vVar0 = { 1156889846, -1021344822, 1112478911 };
					break;
				case 2:
					vVar0 = { -993132028, -989361709, 1109837480 };
					break;
				case 3:
					vVar0 = { 1147140342, -990512873, 1110213132 };
					break;
				case 4:
					vVar0 = { -988168421, 1146245595, 1124974330 };
					break;
				case 5:
					vVar0 = { 1160068563, -1046267036, 1112054694 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1798_SLV_DLR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -985107730, -985048203, -1074183207 };
					break;
				case 1:
					vVar0 = { 1157885944, -990666506, 1109556446 };
					break;
				case 2:
					vVar0 = { 1159186457, 1141959288, 1116096253 };
					break;
				case 3:
					vVar0 = { -992925213, -1012381843, 1127022985 };
					break;
				case 4:
					vVar0 = { -978821962, -983250395, -1044866138 };
					break;
				case 5:
					vVar0 = { -983042445, -983423980, 1109778760 /* Float: 41.47f */ };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1800_FIVE_DLR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1148833414, -999561591, 1115053244 };
					break;
				case 1:
					vVar0 = { -998145606, -993008706, 1117867893 };
					break;
				case 2:
					vVar0 = { 1146083089, 1156626014, 1132537397 };
					break;
				case 3:
					vVar0 = { -993154417, -995648676, 1118171038 };
					break;
				case 4:
					vVar0 = { 1136260678, 1149614899, 1128092533 };
					break;
				case 5:
					vVar0 = { 1157092688, 1155559178, 1128208925 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1800_GLD_DLR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -995221447, 1150555955, 1130166878 };
					break;
				case 1:
					vVar0 = { -981163026, -985170485, 1099812826 };
					break;
				case 2:
					vVar0 = { 1150622835, -995586220, 1116525247 };
					break;
				case 3:
					vVar0 = { -982277808, -985277239, -1089545961 };
					break;
				case 4:
					vVar0 = { 1136059679, -1048931467, 1120288375 };
					break;
				case 5:
					vVar0 = { -990313513, -998143107, 1116980511 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1800_GLD_QTR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -990756446, 1139237218, 1122455545 };
					break;
				case 1:
					vVar0 = { -987390575, -986041283, 1116347227 };
					break;
				case 2:
					vVar0 = { 1155960390, -1003941786, 1109649824 };
					break;
				case 3:
					vVar0 = { -988982333, -990895383, 1122456175 };
					break;
				case 4:
					vVar0 = { -991453192, -1010353275, 1126716342 };
					break;
				case 5:
					vVar0 = { 1143077929, -1005797327, 1115975320 };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1800_HLF_DIME"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1002783192, 1147066920, 1121451822 };
					break;
				case 1:
					vVar0 = { 1128286323, -1009979091, 1118661098 };
					break;
				case 2:
					vVar0 = { -988967543, -1006889511, 1124710738 };
					break;
				case 3:
					vVar0 = { -1005809861, -1008537928, 1117741777 };
					break;
				case 4:
					vVar0 = { -986483552, -990044250, 1117471900 };
					break;
				case 5:
					vVar0 = { -980985151, -988199612, 1098035233 };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_407(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case joaat("PROVISION_HRLM_BRUSH_BOAR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160685724, 1146482482, 1116761620 };
					break;
				case 1:
					vVar0 = { -980912939, -988340703, 1100774113 /* Float: 19.56f */ };
					break;
				case 2:
					vVar0 = { -977867039, -982910218, -1043810222 };
					break;
				case 3:
					vVar0 = { -1013821365, 1146604464, 1123013702 };
					break;
				case 4:
					vVar0 = { 1158481682, -1002023908, 1110511408 };
					break;
				case 5:
					vVar0 = { -998222381, -993288380, 1117573218 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_BRUSH_EBONY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1158901887, -996617060, 1111137976 };
					break;
				case 1:
					vVar0 = { 1150136517, -998933165, 1116402483 };
					break;
				case 2:
					vVar0 = { -1002614759, -994697150, 1113477612 /* Float: 55.58f */ };
					break;
				case 3:
					vVar0 = { 1159097369, -997946335, 1110295183 /* Float: 43.44f */ };
					break;
				case 4:
					vVar0 = { -1000572377, -993139155, 1116287009 };
					break;
				case 5:
					vVar0 = { -1001607224, 1135746725, 1120163449 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_BRUSH_GOATHAIR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -991726150, -1011405426, 1126585139 };
					break;
				case 1:
					vVar0 = { -995549553, -988831793, 1109225636 /* Float: 39.36f */ };
					break;
				case 2:
					vVar0 = { 1161315418, 1141257440, 1111920476 /* Float: 49.64f */ };
					break;
				case 3:
					vVar0 = { -978336764, -986174951, 1087467684 /* Float: 6.545f */ };
					break;
				case 4:
					vVar0 = { 1151764275, -995365216, 1117740728 };
					break;
				case 5:
					vVar0 = { 1158343000, -1002416649, 1110180168 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_BRUSH_HORSEHAIR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1001491489, -995795149, 1111412703 };
					break;
				case 1:
					vVar0 = { 1161486246, 1158228718, 1126577603 };
					break;
				case 2:
					vVar0 = { 1160134619, -999236334, 1110554706 /* Float: 44.43f */ };
					break;
				case 3:
					vVar0 = { -983427551, -987510825, -1050313973 };
					break;
				case 4:
					vVar0 = { 1150544028, -1027121244, 1119687803 /* Float: 94.54f */ };
					break;
				case 5:
					vVar0 = { 1161647428, 1155443933, 1118334484 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1150020805, -990369751, 1113370919 };
					break;
				case 1:
					vVar0 = { 1149977657, 1140283045, 1120057426 /* Float: 97.36f */ };
					break;
				case 2:
					vVar0 = { 1161313366, 1151742091, 1110368584 /* Float: 43.72f */ };
					break;
				case 3:
					vVar0 = { 1151058182, -995826131, 1117273350 };
					break;
				case 4:
					vVar0 = { 1154855305, -998538625, 1110168036 };
					break;
				case 5:
					vVar0 = { -995534545, 1159250297, 1134174667 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD_NG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1012820656, 1144899859, 1122699182 };
					break;
				case 1:
					vVar0 = { 1155372196, -995499065, 1110702621 };
					break;
				case 2:
					vVar0 = { 1151760949, -995378348, 1117775452 };
					break;
				case 3:
					vVar0 = { 1157109277, 1150661755, 1126922125 };
					break;
				case 4:
					vVar0 = { 1158813102, -996807827, 1110597464 };
					break;
				case 5:
					vVar0 = { 1152081863, -1000614850, 1116389114 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_COMB_BOXWOOD"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160849322, 1154670453, 1124187505 };
					break;
				case 1:
					vVar0 = { -1012695974, 1144893583, 1123245752 };
					break;
				case 2:
					vVar0 = { -1001660880, 1135736413, 1120047202 };
					break;
				case 3:
					vVar0 = { 1160800440, -996557742, 1111132285 };
					break;
				case 4:
					vVar0 = { 1147225611, 1132740182, 1122508512 };
					break;
				case 5:
					vVar0 = { -991782445, -1011338320, 1126543524 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_COMB_CHERRYWOOD"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160045318, -996634403, 1114541916 /* Float: 59.64f */ };
					break;
				case 1:
					vVar0 = { 1149161849, -992177021, 1112341479 };
					break;
				case 2:
					vVar0 = { 1145144295, 1146303517, 1122778874 };
					break;
				case 3:
					vVar0 = { -1012752214, 1145177363, 1123212342 };
					break;
				case 4:
					vVar0 = { -980052828, -987065422, -1050277136 };
					break;
				case 5:
					vVar0 = { 1159290733, -996065239, 1110869279 /* Float: 45.63f */ };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_COMB_IVORY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -983098196, -987584926, -1054345265 };
					break;
				case 1:
					vVar0 = { -1000912237, -996131693, 1110276833 /* Float: 43.37f */ };
					break;
				case 2:
					vVar0 = { 1158701261, -1012676778, 1109832250 };
					break;
				case 3:
					vVar0 = { -1001826447, -995385188, 1110113712 };
					break;
				case 4:
					vVar0 = { 1159714796, -999956932, 1110038481 };
					break;
				case 5:
					vVar0 = { 1161305727, 1151759999, 1110507693 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_COMB_TORTOISESHELL"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1152100696, -1000630301, 1116493316 };
					break;
				case 1:
					vVar0 = { 1159471600, -1009522586, 1110481395 };
					break;
				case 2:
					vVar0 = { -978491447, -988416889, -1056691124 };
					break;
				case 3:
					vVar0 = { 1160129376, -996011532, 1112248348 };
					break;
				case 4:
					vVar0 = { -990551597, 1158073913, 1134808744 };
					break;
				case 5:
					vVar0 = { 1140946911, 1141737071, 1121636581 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_HAIRPIN_EBONY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1137558821, 1158436487, 1132177293 };
					break;
				case 1:
					vVar0 = { 1159108112, -997664801, 1111196172 };
					break;
				case 2:
					vVar0 = { 1152825401, -995478888, 1117494143 };
					break;
				case 3:
					vVar0 = { -980050092, -986973417, -1048885330 };
					break;
				case 4:
					vVar0 = { 1157693280, -1001025302, 1110219872 };
					break;
				case 5:
					vVar0 = { -1013068300, -1025976566, 1111547445 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_HAIRPIN_IVORY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1152846488, 1145790063, 1120451822 };
					break;
				case 1:
					vVar0 = { 1160615363, 1141228680, 1116112058 };
					break;
				case 2:
					vVar0 = { 1159373107, -996696441, 1111513629 };
					break;
				case 3:
					vVar0 = { 1161484239, 1158187004, 1126620476 };
					break;
				case 4:
					vVar0 = { 1156639785, 1156945895, 1132674023 };
					break;
				case 5:
					vVar0 = { 1160044544 /* Float: 2638f */, -996769382, 1112854925 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_HAIRPIN_JADE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157966541, 1125549146, 1117106176 };
					break;
				case 1:
					vVar0 = { -980469756, -986340188, -1047164286 };
					break;
				case 2:
					vVar0 = { -999683926, -996117144, 1112073988 };
					break;
				case 3:
					vVar0 = { 1159840633, 1146155057, 1118087283 };
					break;
				case 4:
					vVar0 = { 1156932575, -996662321, 1109680718 };
					break;
				case 5:
					vVar0 = { 1148919546, -992061874, 1112667951 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_HAIRPIN_METAL"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -979924292, -987306295, -1051126451 };
					break;
				case 1:
					vVar0 = { 1161047237, -1015944918, 1109831584 };
					break;
				case 2:
					vVar0 = { 1159625118, 1158608585, 1127189932 };
					break;
				case 3:
					vVar0 = { 1161330930, 1141932376, 1110328476 };
					break;
				case 4:
					vVar0 = { -978433286, -987685380, -1055430541 };
					break;
				case 5:
					vVar0 = { -994341069, -1002164142, 1120796410 };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_HAIRPIN_WOODEN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -987878064, 1150367474, 1130343472 };
					break;
				case 1:
					vVar0 = { -1005044923, 1140911766, 1119799527 };
					break;
				case 2:
					vVar0 = { -989957898, -991143576, 1121598544 };
					break;
				case 3:
					vVar0 = { 1158784446, -995506020, 1110695215 };
					break;
				case 4:
					vVar0 = { 1152107545, -995073753, 1117551198 };
					break;
				case 5:
					vVar0 = { 1161592439, 1155277382, 1118125031 };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_408(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case joaat("CONSUMABLE_CARIB_RUM"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -981284796, -987987894, 1073867653 /* Float: 2.03f */ };
					break;
				case 1:
					vVar0 = { -1021515301, 1153053819, 1122494579 };
					break;
				case 2:
					vVar0 = { -995573375, 1159214297, 1134150713 };
					break;
				case 3:
					vVar0 = { 1161547846, 1139769187, 1110521201 };
					break;
				case 4:
					vVar0 = { -1001056531, -996607967, 1110297805 /* Float: 43.45f */ };
					break;
				case 5:
					vVar0 = { 1160318263, 1138374633, 1118717870 /* Float: 87.14f */ };
					break;
			}
			break;
		case joaat("CONSUMABLE_COGNAC"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157277254, -993468572, 1109607546 };
					break;
				case 1:
					vVar0 = { -1012180094, -1021692451, 1112036302 };
					break;
				case 2:
					vVar0 = { 1160645341, 1141163259, 1116523503 };
					break;
				case 3:
					vVar0 = { -991129854, 1151779693, 1128996451 };
					break;
				case 4:
					vVar0 = { -980908450, -988353774, 1100740035 };
					break;
				case 5:
					vVar0 = { 1154140987, -1011529060, 1117309832 };
					break;
			}
			break;
		case joaat("CONSUMABLE_CYPRUS_BRANDY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160306483, -997947605, 1111432364 };
					break;
				case 1:
					vVar0 = { -997107728, -990727873, 1109853471 };
					break;
				case 2:
					vVar0 = { -982554903, -985233592, -1051810857 };
					break;
				case 3:
					vVar0 = { -978809635, -983230550, -1044141404 };
					break;
				case 4:
					vVar0 = { 1159571730, 1158663127, 1128316004 };
					break;
				case 5:
					vVar0 = { -988542616, 1139586387, 1124336540 };
					break;
			}
			break;
		case joaat("CONSUMABLE_IRISH_WHISKEY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -988171145, 1146273887, 1125261587 };
					break;
				case 1:
					vVar0 = { 1158941651, -1000940909, 1110134167 };
					break;
				case 2:
					vVar0 = { 1160255947, -997040415, 1113473679 };
					break;
				case 3:
					vVar0 = { 1158058840, -993138229, 1109552579 };
					break;
				case 4:
					vVar0 = { 1142447394, -1022453180, 1125175447 };
					break;
				case 5:
					vVar0 = { -994396570, 1151063015, 1134482784 };
					break;
			}
			break;
		case joaat("CONSUMABLE_LONDRY_GIN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1137231331, 1147011265, 1125768233 };
					break;
				case 1:
					vVar0 = { 1161678787, 1138247395, 1114648609 };
					break;
				case 2:
					vVar0 = { 1148922741, -992172499, 1111329604 };
					break;
				case 3:
					vVar0 = { -983709852, -985927361, 1093770402 };
					break;
				case 4:
					vVar0 = { -989076365, 1144493521, 1124552802 };
					break;
				case 5:
					vVar0 = { 1158239146, -994311479, 1110932718 };
					break;
			}
			break;
		case joaat("CONSUMABLE_OLDTOM_GIN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1156228809, -1002906329, 1110084949 };
					break;
				case 1:
					vVar0 = { 1158405755, -1022244428, 1111141908 /* Float: 46.67f */ };
					break;
				case 2:
					vVar0 = { -987666498, -995313959, 1125325105 };
					break;
				case 3:
					vVar0 = { -1003218916, 1147626349, 1122510569 };
					break;
				case 4:
					vVar0 = { -977644116, -984969167, -1045621637 };
					break;
				case 5:
					vVar0 = { 1161136906, 1152135356, 1112963799 };
					break;
			}
			break;
		case joaat("CONSUMABLE_PLYMOUTH_GIN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160049160, -1089518145, 1112326799 /* Float: 51.19f */ };
					break;
				case 1:
					vVar0 = { 1156729553, 1156814717, 1132762484 };
					break;
				case 2:
					vVar0 = { -986591523, 1124994056, 1127721533 };
					break;
				case 3:
					vVar0 = { -991824601, -1010110746, 1125707022 };
					break;
				case 4:
					vVar0 = { 1160822522, 1133130183, 1111275078 };
					break;
				case 5:
					vVar0 = { -1016077930, 1145094699, 1122701948 };
					break;
			}
			break;
		case joaat("CONSUMABLE_SCOTCH_WHISKEY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1137258034, -996331282, 1109581549 };
					break;
				case 1:
					vVar0 = { -977467101, -984913478, -1050387593 };
					break;
				case 2:
					vVar0 = { 1154829967, -998579765, 1110257802 };
					break;
				case 3:
					vVar0 = { -979209544, -989668037, 1095046791 };
					break;
				case 4:
					vVar0 = { 1144856198, -999028841, 1111674690 };
					break;
				case 5:
					vVar0 = { 1161004732, -1014935139, 1109746723 };
					break;
			}
			break;
		case joaat("CONSUMABLE_TENN_WHISKEY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -990394999, -992962191, 1122667672 };
					break;
				case 1:
					vVar0 = { 1151671353, -988890878, 1111920484 };
					break;
				case 2:
					vVar0 = { 1130353885, 1148616340, 1128181170 };
					break;
				case 3:
					vVar0 = { 1152732021, 1136175412, 1119029870 };
					break;
				case 4:
					vVar0 = { 1158781981, -994223710, 1109932900 };
					break;
				case 5:
					vVar0 = { -983500919, -987407241, -1052378420 };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_409(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case joaat("DOCUMENT_CARD_ACE_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -978773897, -986273882, 1070663205 /* Float: 1.633f */ };
					break;
				case 1:
					vVar0 = { 1161480897, 1158191763, 1126598902 };
					break;
				case 2:
					vVar0 = { -995709477, 1159059124, 1134135738 };
					break;
				case 3:
					vVar0 = { -977546244, -985362543, 1084686860 /* Float: 5.219f */ };
					break;
				case 4:
					vVar0 = { -1001529536, -996001522, 1112993408 };
					break;
				case 5:
					vVar0 = { 1159077028, -993930084, 1110132822 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KING_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1158004417, -996109050, 1111966614 };
					break;
				case 1:
					vVar0 = { 1146032580, 1156604428, 1132576932 };
					break;
				case 2:
					vVar0 = { 1152600015, -995462570, 1118431961 };
					break;
				case 3:
					vVar0 = { 1151662326, -988875661, 1112099007 };
					break;
				case 4:
					vVar0 = { -1004752552, -1030487933, 1118214160 };
					break;
				case 5:
					vVar0 = { 1161490448, 1158216507, 1126598227 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_QUEEN_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1155807388, -996780351, 1109909606 };
					break;
				case 1:
					vVar0 = { -977603129, -985278153, -1042910020 };
					break;
				case 2:
					vVar0 = { 1152870883, 1145744176, 1120497959 };
					break;
				case 3:
					vVar0 = { 1152101057, 1135783251, 1118768333 };
					break;
				case 4:
					vVar0 = { 1160821703, 1133236499, 1112239314 };
					break;
				case 5:
					vVar0 = { 1155440083, -1007930193, 1110847083 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KNIGHT_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1158004417, -996109050, 1111966614 };
					break;
				case 1:
					vVar0 = { 1159765701, -1002368175, 1110002631 };
					break;
				case 2:
					vVar0 = { -995293102, 1150306738, 1130419651 };
					break;
				case 3:
					vVar0 = { 1160922542, -997223064, 1111032039 };
					break;
				case 4:
					vVar0 = { -978477865, -988412142, -1056780059 };
					break;
				case 5:
					vVar0 = { -1010244646, 1155056714, 1130013878 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_PAGE_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1159439827, -1009064857, 1109761720 };
					break;
				case 1:
					vVar0 = { -990310597, -993478279, 1122738713 };
					break;
				case 2:
					vVar0 = { 1151612051, -988902740, 1112138580 };
					break;
				case 3:
					vVar0 = { 1145166714, 1146301142, 1122888057 };
					break;
				case 4:
					vVar0 = { 1154129060, -1011606087, 1117174896 };
					break;
				case 5:
					vVar0 = { 1158410478, -1022110217, 1111160164 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TEN_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -983648510, -985850495, 1094109364 };
					break;
				case 1:
					vVar0 = { 1145015719, 1146894959, 1123149493 };
					break;
				case 2:
					vVar0 = { 1151469355, -997210743, 1117934715 };
					break;
				case 3:
					vVar0 = { -988032827, -988282659, 1114650554 };
					break;
				case 4:
					vVar0 = { 1155571237, -1027052129, 1113451958 };
					break;
				case 5:
					vVar0 = { 1159074927, -997902279, 1112504737 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_NINE_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -987687838, -995297362, 1125401297 };
					break;
				case 1:
					vVar0 = { -995082969, -987296190, 1109977203 };
					break;
				case 2:
					vVar0 = { 1160759882, -999854445, 1110473441 /* Float: 44.12f */ };
					break;
				case 3:
					vVar0 = { 1149988241, 1140693949, 1119789515 };
					break;
				case 4:
					vVar0 = { 1161097126, 1142755769, 1113891566 };
					break;
				case 5:
					vVar0 = { 1150183883, -998969726, 1116387342 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_EIGHT_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -983225360, -987718324, -1051267003 };
					break;
				case 1:
					vVar0 = { 1159486222, 1145873115, 1116685206 };
					break;
				case 2:
					vVar0 = { -1005595705, 1160278782, 1134565786 /* Float: 320.2f */ };
					break;
				case 3:
					vVar0 = { 1157911233, -1005235010, 1110022816 };
					break;
				case 4:
					vVar0 = { -995202712, -988632588, 1110700720 };
					break;
				case 5:
					vVar0 = { 1161667011, 1138240432, 1112317362 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SEVEN_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1135276628, -1004060089, 1109983982 };
					break;
				case 1:
					vVar0 = { 1158487429, -1002166434, 1110500966 };
					break;
				case 2:
					vVar0 = { 1155660218, -1035960711, 1114208207 };
					break;
				case 3:
					vVar0 = { -1001562127, 1135690678, 1120215761 };
					break;
				case 4:
					vVar0 = { -990403043, -993385669, 1122779123 };
					break;
				case 5:
					vVar0 = { -979943965, -987343745, -1051542422 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SIX_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160940159, 1151821586, 1115775304 /* Float: 64.69f */ };
					break;
				case 1:
					vVar0 = { -978404602, -984630354, -1045368930 };
					break;
				case 2:
					vVar0 = { -993339777, -1000638829, 1119064949 };
					break;
				case 3:
					vVar0 = { 1152125059, -995853771, 1117404529 /* Float: 77.12f */ };
					break;
				case 4:
					vVar0 = { 1155172172, -995817980, 1110503850 };
					break;
				case 5:
					vVar0 = { 1142140038, 1143000623, 1124271135 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FIVE_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1156392845, -1002949052, 1109997912 };
					break;
				case 1:
					vVar0 = { -1002056471, -995522200, 1112452104 };
					break;
				case 2:
					vVar0 = { -997663089, -1005674825, 1118068094 };
					break;
				case 3:
					vVar0 = { 1160460059, 1151922676, 1116192651 };
					break;
				case 4:
					vVar0 = { 1160773607, -995085795, 1110664652 };
					break;
				case 5:
					vVar0 = { 1147217211, -991943442, 1110150435 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FOUR_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1152780427, -995461546, 1117554162 };
					break;
				case 1:
					vVar0 = { -984155902, -987106054, -1065622289 };
					break;
				case 2:
					vVar0 = { 1161425838, 1141864287, 1110735792 };
					break;
				case 3:
					vVar0 = { 1160486781, -996942873, 1111749558 };
					break;
				case 4:
					vVar0 = { -1014366106, 1145793611, 1123362393 };
					break;
				case 5:
					vVar0 = { 1151497216, -995957047, 1118005604 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_THREE_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1002147144, 1135579706, 1119937233 };
					break;
				case 1:
					vVar0 = { -995901243, 1136925973, 1119727387 };
					break;
				case 2:
					vVar0 = { -980093182, -987152663, -1050540989 };
					break;
				case 3:
					vVar0 = { -992133366, -1009333001, 1125821579 };
					break;
				case 4:
					vVar0 = { 1149422862, -991514083, 1111551377 };
					break;
				case 5:
					vVar0 = { 1159684096 /* Float: 2550f */, 1145766430, 1117210018 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TWO_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1140675733, 1155321545, 1127627162 };
					break;
				case 1:
					vVar0 = { -988533588, 1139486376, 1124317135 };
					break;
				case 2:
					vVar0 = { 1148531114, -990113292, 1111093674 };
					break;
				case 3:
					vVar0 = { -1020522870, 1142813550, 1122171303 };
					break;
				case 4:
					vVar0 = { -978749833, -986073096, 1095025820 };
					break;
				case 5:
					vVar0 = { 1161435562, 1151632622, 1110396895 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_ACE_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1153326793, 1138826166, 1119112659 };
					break;
				case 1:
					vVar0 = { 1141914527, 1154572370, 1127990985 };
					break;
				case 2:
					vVar0 = { -977860743, -985197208, -1051547738 };
					break;
				case 3:
					vVar0 = { -999008774, -996800406, 1114106872 };
					break;
				case 4:
					vVar0 = { 1159506002, 1144585031, 1117020094 };
					break;
				case 5:
					vVar0 = { 1155210887, -995446006, 1110607232 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KING_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1005090093, -1034286963, 1118339990 };
					break;
				case 1:
					vVar0 = { 1160484188, 1152408470, 1120249840 };
					break;
				case 2:
					vVar0 = { 1155388662, -1007991606, 1110711730 };
					break;
				case 3:
					vVar0 = { -995031441, 1150113120, 1130451108 };
					break;
				case 4:
					vVar0 = { 1161474613, 1158210650, 1126577380 };
					break;
				case 5:
					vVar0 = { 1128743902, 1148699094, 1128132713 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_QUEEN_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1161638633, 1155403284, 1118296605 };
					break;
				case 1:
					vVar0 = { -978566513, -986447176, -1066024305 /* Float: -3.84f */ };
					break;
				case 2:
					vVar0 = { -991802270, -1011820950, 1126230065 };
					break;
				case 3:
					vVar0 = { 1141542974, 1141772101, 1122585149 };
					break;
				case 4:
					vVar0 = { -977672454, -984862056, -1045579212 };
					break;
				case 5:
					vVar0 = { 1160948310, -996205421, 1111991255 /* Float: 49.91f */ };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KNIGHT_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1158623568, -994022973, 1109766177 };
					break;
				case 1:
					vVar0 = { 1156682064, 1156805599, 1132689949 };
					break;
				case 2:
					vVar0 = { 1159651688, 1143918644, 1117802988 /* Float: 80.16f */ };
					break;
				case 3:
					vVar0 = { 1156445651, -991714836, 1109909832 /* Float: 41.97f */ };
					break;
				case 4:
					vVar0 = { -988418404, -988127900, 1114617938 /* Float: 59.93f */ };
					break;
				case 5:
					vVar0 = { -989315391, 1144257914, 1123338945 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_PAGE_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1011435215, -1021638640, 1112160338 };
					break;
				case 1:
					vVar0 = { 1155446014, -1010288863, 1111291331 /* Float: 47.24f */ };
					break;
				case 2:
					vVar0 = { 1159020204, 1154698797, 1119814812 };
					break;
				case 3:
					vVar0 = { -991765365, 1143256942, 1124328571 };
					break;
				case 4:
					vVar0 = { 1157278843, -1002538400, 1109839053 /* Float: 41.7f */ };
					break;
				case 5:
					vVar0 = { -1048555485, 1150947353, 1127047961 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TEN_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -982390993, -985260401, -1051711242 };
					break;
				case 1:
					vVar0 = { 1152095666, -1000686336, 1116552167 };
					break;
				case 2:
					vVar0 = { 1159340392, 1133150231, 1117587505 };
					break;
				case 3:
					vVar0 = { 1150004429, -990362993, 1113163039 /* Float: 54.38f */ };
					break;
				case 4:
					vVar0 = { 1160784495, -997558239, 1110939861 };
					break;
				case 5:
					vVar0 = { -1015534676, 1148157174, 1124735713 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_NINE_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -991266013, 1151749513, 1128923988 };
					break;
				case 1:
					vVar0 = { 1161128694, 1151849210, 1111477453 /* Float: 47.95f */ };
					break;
				case 2:
					vVar0 = { 1158376284, -1002448727, 1110369894 };
					break;
				case 3:
					vVar0 = { 1151967355, -996401603, 1117779516 };
					break;
				case 4:
					vVar0 = { -991546663, -1009596731, 1126204880 };
					break;
				case 5:
					vVar0 = { 1152519627, 1136603126, 1119013962 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_EIGHT_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1159462588, -999692965, 1109873422 };
					break;
				case 1:
					vVar0 = { -995491701, 1159183573, 1134157136 };
					break;
				case 2:
					vVar0 = { 1150049837, 1140156491, 1120036061 };
					break;
				case 3:
					vVar0 = { 1161242284, 1152226222, 1113691128 };
					break;
				case 4:
					vVar0 = { 1159345091, -995318358, 1110638592 /* Float: 44.75f */ };
					break;
				case 5:
					vVar0 = { -1000184308, -995433177, 1110763391 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SEVEN_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1002437509, -996193370, 1110493626 };
					break;
				case 1:
					vVar0 = { 1155873210, -994975212, 1110337389 };
					break;
				case 2:
					vVar0 = { -994965078, -987240710, 1109614133 };
					break;
				case 3:
					vVar0 = { 1159647269, -994697232, 1111038886 };
					break;
				case 4:
					vVar0 = { -1015182492, 1142931418, 1122729198 };
					break;
				case 5:
					vVar0 = { -978560891, -986284982, 1070478655 /* Float: 1.611f */ };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SIX_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -980261689, -982943400, 1095837417 };
					break;
				case 1:
					vVar0 = { 1152399368, -996085957, 1117524722 };
					break;
				case 2:
					vVar0 = { 1140384468, 1143498418, 1123134210 };
					break;
				case 3:
					vVar0 = { 1158393840, -1022482350, 1111333900 };
					break;
				case 4:
					vVar0 = { 1150110597, -998815762, 1116323709 };
					break;
				case 5:
					vVar0 = { 1145392318, 1146209162, 1122715173 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FIVE_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1150996414, -1008902449, 1119160107 };
					break;
				case 1:
					vVar0 = { 1157801423, -991721054, 1110173549 };
					break;
				case 2:
					vVar0 = { -1010459548, 1154978972, 1129855471 };
					break;
				case 3:
					vVar0 = { 1154166129, -1011496006, 1117219123 };
					break;
				case 4:
					vVar0 = { 1150501790, 1138276614, 1119448596 };
					break;
				case 5:
					vVar0 = { 1160809746, 1133270856, 1112309760 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FOUR_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1150519042, -1026776131, 1119684264 };
					break;
				case 1:
					vVar0 = { 1160518664, -996099064, 1111465656 };
					break;
				case 2:
					vVar0 = { -989665800, -991065006, 1122258125 };
					break;
				case 3:
					vVar0 = { -1009639886, 1155064635, 1129878487 };
					break;
				case 4:
					vVar0 = { 1161517638, 1139972551, 1109921890 };
					break;
				case 5:
					vVar0 = { 1147109520, 1132802372, 1122493399 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_THREE_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1161286971, 1140384082, 1110850142 };
					break;
				case 1:
					vVar0 = { 1152786006, 1145624234, 1120397558 };
					break;
				case 2:
					vVar0 = { -992235586, -1011549277, 1126828278 };
					break;
				case 3:
					vVar0 = { 1159113753, -997811175, 1111354245 /* Float: 47.48f */ };
					break;
				case 4:
					vVar0 = { -1000987325, 1135017306, 1120263995 };
					break;
				case 5:
					vVar0 = { 1151816802, -988851966, 1111947477 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TWO_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -988981219, 1136519161, 1127280476 };
					break;
				case 1:
					vVar0 = { 1146819523, -990818976, 1111098655 };
					break;
				case 2:
					vVar0 = { -983537455, -987552207, -1049548030 };
					break;
				case 3:
					vVar0 = { -990440546, -993103430, 1122619123 };
					break;
				case 4:
					vVar0 = { 1151587803, -995539460, 1117487759 };
					break;
				case 5:
					vVar0 = { -994961744, -989258924, 1110112993 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_ACE_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1009836252, 1155171729, 1130052780 };
					break;
				case 1:
					vVar0 = { 1156441154, -991384576, 1111268786 };
					break;
				case 2:
					vVar0 = { -1012846228, -1012594685, 1120593248 };
					break;
				case 3:
					vVar0 = { 1161243132, 1140832112, 1110731915 };
					break;
				case 4:
					vVar0 = { -1032864772, 1151018410, 1126864539 };
					break;
				case 5:
					vVar0 = { -991768609, -1011745148, 1126292016 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KING_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160029602, 1154781897, 1122461942 };
					break;
				case 1:
					vVar0 = { -978493878, -988421489, -1055821660 /* Float: -9.09f */ };
					break;
				case 2:
					vVar0 = { 1159829590, -998448579, 1110636233 };
					break;
				case 3:
					vVar0 = { 1154819727, -998553960, 1110256124 };
					break;
				case 4:
					vVar0 = { 1144376708, -1007882001, 1117406934 };
					break;
				case 5:
					vVar0 = { 1158711722, 1152762913, 1118208759 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_QUEEN_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -994976276, -988663751, 1110705701 };
					break;
				case 1:
					vVar0 = { 1156168524, 1142033632, 1122145534 };
					break;
				case 2:
					vVar0 = { 1159284974, 1157824860, 1127071875 };
					break;
				case 3:
					vVar0 = { -997096342, -990706786, 1109952823 };
					break;
				case 4:
					vVar0 = { 1158933209, -994605974, 1110940582 };
					break;
				case 5:
					vVar0 = { -1001188432, -996935508, 1110279717 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KNIGHT_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1151773024, -995353551, 1118315741 };
					break;
				case 1:
					vVar0 = { 1161328300, -996493124, 1109732567 };
					break;
				case 2:
					vVar0 = { -978531568, -986161115, 1079131505 /* Float: 3.285f */ };
					break;
				case 3:
					vVar0 = { 1157800210, -991752020, 1110107750 };
					break;
				case 4:
					vVar0 = { -997700280, -1005618538, 1118482465 };
					break;
				case 5:
					vVar0 = { -995593748, 1159083577, 1134129578 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_PAGE_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1156410016, 1133758313, 1117292331 };
					break;
				case 1:
					vVar0 = { 1142298090, 1141770065, 1121873166 };
					break;
				case 2:
					vVar0 = { -1003999401, 1149313892, 1124516430 };
					break;
				case 3:
					vVar0 = { 1161667752, 1155426066, 1118217175 /* Float: 83.32f */ };
					break;
				case 4:
					vVar0 = { -991229673, 1151652512, 1128872162 };
					break;
				case 5:
					vVar0 = { 1139113463, 1143470830, 1122596631 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TEN_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157142708, 1150659240, 1126886670 };
					break;
				case 1:
					vVar0 = { 1159260197, 1133594667, 1116109406 };
					break;
				case 2:
					vVar0 = { -1021697609, 1153061937, 1122610577 };
					break;
				case 3:
					vVar0 = { -993720132, -999898762, 1118503698 };
					break;
				case 4:
					vVar0 = { -995829408, 1159325274, 1134222701 };
					break;
				case 5:
					vVar0 = { 1152792330, 1145801794, 1120592200 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_NINE_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1159893357, -994569822, 1112535262 };
					break;
				case 1:
					vVar0 = { 1161043411, 1152171024, 1118177853 /* Float: 83.02f */ };
					break;
				case 2:
					vVar0 = { -980901560, -988361277, 1100734267 };
					break;
				case 3:
					vVar0 = { 1156709204, 1156767080, 1133022183 };
					break;
				case 4:
					vVar0 = { 1159235932, 1134100087, 1117080141 };
					break;
				case 5:
					vVar0 = { 1159732249, -997730460, 1113727637 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_EIGHT_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1159767507, 1145312084, 1118004052 };
					break;
				case 1:
					vVar0 = { 1149473251, -997459124, 1116187394 };
					break;
				case 2:
					vVar0 = { 1159348302, -997026939, 1111706305 };
					break;
				case 3:
					vVar0 = { 1158564307, 1152763445, 1118275940 };
					break;
				case 4:
					vVar0 = { 1128337120, 1148706932, 1128120739 };
					break;
				case 5:
					vVar0 = { -996792566, -990758937, 1110269325 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SEVEN_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1140037350, 1141695586, 1121879851 };
					break;
				case 1:
					vVar0 = { -991406539, -992474259, 1121580351 };
					break;
				case 2:
					vVar0 = { -996799283, -990647058, 1110276833 /* Float: 43.37f */ };
					break;
				case 3:
					vVar0 = { 1160809279, 1133124557, 1111643914 };
					break;
				case 4:
					vVar0 = { -994911560, 1150707245, 1130461554 };
					break;
				case 5:
					vVar0 = { 1160848871, -998008291, 1110376448 /* Float: 43.75f */ };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SIX_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1158047670, -1004509158, 1109985329 };
					break;
				case 1:
					vVar0 = { 1152752746, 1133525064, 1120868893 };
					break;
				case 2:
					vVar0 = { -1039126865, 1150815699, 1126991725 };
					break;
				case 3:
					vVar0 = { 1154847277, -1010064520, 1111865950 };
					break;
				case 4:
					vVar0 = { -989306003, 1144276387, 1123765977 };
					break;
				case 5:
					vVar0 = { 1156406141, -991292883, 1111174758 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FIVE_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -977870512, -982922281, -1043496698 };
					break;
				case 1:
					vVar0 = { -991755059, -1009124862, 1126136742 };
					break;
				case 2:
					vVar0 = { 1146843478, -991729549, 1110399255 };
					break;
				case 3:
					vVar0 = { 1147259722, 1132627827, 1122475049 };
					break;
				case 4:
					vVar0 = { 1161630327, 1152664183, 1111228416 /* Float: 47f */ };
					break;
				case 5:
					vVar0 = { -988651377, -988495020, 1115182072 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FOUR_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -994531262, -1002406371, 1120948716 };
					break;
				case 1:
					vVar0 = { 1161411203, 1140271887, 1111732781 };
					break;
				case 2:
					vVar0 = { 1156292649, -995626885, 1111286088 /* Float: 47.22f */ };
					break;
				case 3:
					vVar0 = { -994873524, -988965687, 1110289988 };
					break;
				case 4:
					vVar0 = { 1151711560, -988875502, 1111781996 };
					break;
				case 5:
					vVar0 = { 1149988979, 1139985157, 1119974852 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_THREE_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -988015440, -988406608, 1116755198 };
					break;
				case 1:
					vVar0 = { -1012131506, 1143847261, 1122612412 };
					break;
				case 2:
					vVar0 = { -992469262, -1028934922, 1127585808 };
					break;
				case 3:
					vVar0 = { 1159411896, 1145164328, 1116081357 };
					break;
				case 4:
					vVar0 = { 1152112280, -996655718, 1118322557 };
					break;
				case 5:
					vVar0 = { -1008883099, 1143199646, 1121945911 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TWO_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -980922391, -985641562, -1054910448 };
					break;
				case 1:
					vVar0 = { 1158597280, -1002505223, 1109833023 };
					break;
				case 2:
					vVar0 = { -1000657170, -995012878, 1110689710 };
					break;
				case 3:
					vVar0 = { 1160615338, -998076908, 1111052255 };
					break;
				case 4:
					vVar0 = { -1015929635, 1145053104, 1122747810 };
					break;
				case 5:
					vVar0 = { -977587253, -985085923, -1050034569 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_ACE_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1159511658, 1158611149, 1127294953 };
					break;
				case 1:
					vVar0 = { -1006312409, 1160183681, 1134534427 };
					break;
				case 2:
					vVar0 = { 1149207233, -992134308, 1111512580 };
					break;
				case 3:
					vVar0 = { -989161169, 1144367332, 1124009666 };
					break;
				case 4:
					vVar0 = { 1155197755, -1009913859, 1111584408 };
					break;
				case 5:
					vVar0 = { -994721743, -988842377, 1110260580 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KING_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -991626576, -1005048408, 1125801787 };
					break;
				case 1:
					vVar0 = { -995512533, -988861350, 1110953427 };
					break;
				case 2:
					vVar0 = { 1135582816, -1047944222, 1121323188 };
					break;
				case 3:
					vVar0 = { -978666263, -986330718, 1059615408 /* Float: 0.658f */ };
					break;
				case 4:
					vVar0 = { -1010358043, 1154998395, 1129832382 };
					break;
				case 5:
					vVar0 = { 1161403871, 1142265332, 1110601892 /* Float: 44.61f */ };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_QUEEN_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160643568, 1141206952, 1116619276 };
					break;
				case 1:
					vVar0 = { -982495912, -985918210, -1058227094 };
					break;
				case 2:
					vVar0 = { 1157808894, -1005015861, 1109832499 };
					break;
				case 3:
					vVar0 = { -993208435, -995469705, 1118344003 };
					break;
				case 4:
					vVar0 = { -979173657, -983887479, -1045523815 };
					break;
				case 5:
					vVar0 = { 1141216212, 1155151741, 1127724089 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KNIGHT_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160239190, -997604229, 1111761617 };
					break;
				case 1:
					vVar0 = { 1148979233, -991839281, 1111098917 };
					break;
				case 2:
					vVar0 = { -998290113, 1154738455, 1131699097 };
					break;
				case 3:
					vVar0 = { -991715484, -1011208736, 1126373347 };
					break;
				case 4:
					vVar0 = { 1141318256, 1142226166, 1124000714 };
					break;
				case 5:
					vVar0 = { 1158838452, -997081866, 1111166550 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_PAGE_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -982026494, -989528056, -1066234020 /* Float: -3.79f */ };
					break;
				case 1:
					vVar0 = { 1158805922, 1152344875, 1120839926 };
					break;
				case 2:
					vVar0 = { 1150574436, -1026642910, 1119685181 /* Float: 94.52f */ };
					break;
				case 3:
					vVar0 = { 1160272314, -994152079, 1111003654 };
					break;
				case 4:
					vVar0 = { 1144895650, 1146217344, 1123095229 };
					break;
				case 5:
					vVar0 = { -990443176, -992966394, 1122655443 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TEN_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1153838735, -1003023819, 1110019041 };
					break;
				case 1:
					vVar0 = { 1159408112, -995958104, 1111668818 /* Float: 48.68f */ };
					break;
				case 2:
					vVar0 = { 1157381014, 1142350265, 1126204310 };
					break;
				case 3:
					vVar0 = { 1151257944, -1010199121, 1120015780 };
					break;
				case 4:
					vVar0 = { 1161049530, -1015175637, 1110135538 };
					break;
				case 5:
					vVar0 = { 1159580549, 1158603219, 1127294697 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_NINE_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1160397631, 1152347808, 1116305418 };
					break;
				case 1:
					vVar0 = { -988772332, -1007565557, 1125186968 };
					break;
				case 2:
					vVar0 = { 1144400070, -1008117498, 1118306304 /* Float: 84f */ };
					break;
				case 3:
					vVar0 = { -979203795, -984160539, -1054437445 };
					break;
				case 4:
					vVar0 = { 1159467287, -1009592972, 1110490218 };
					break;
				case 5:
					vVar0 = { 1153835868, -991517401, 1114270597 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_EIGHT_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -978755256, -983263703, -1047053992 };
					break;
				case 1:
					vVar0 = { 1157722763, -1001003808, 1110351214 };
					break;
				case 2:
					vVar0 = { 1161318736, 1140931841, 1111032857 };
					break;
				case 3:
					vVar0 = { 1141923278, 1154678137, 1127988593 };
					break;
				case 4:
					vVar0 = { 1155426288, -1001764635, 1110000534 };
					break;
				case 5:
					vVar0 = { -993005560, -995341681, 1118281007 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SEVEN_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1014070811, 1146750761, 1123146007 };
					break;
				case 1:
					vVar0 = { 1144803739, -1001017160, 1113356273 };
					break;
				case 2:
					vVar0 = { 1158231196, -1005937476, 1109781381 /* Float: 41.48f */ };
					break;
				case 3:
					vVar0 = { -995836289, 1159217447, 1134210777 };
					break;
				case 4:
					vVar0 = { 1161641824, 1155392143, 1118256103 };
					break;
				case 5:
					vVar0 = { 1157084357, 1150624031, 1126904758 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SIX_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -990397342, -992949461, 1122896445 };
					break;
				case 1:
					vVar0 = { 1160698610, -997125079, 1111483220 };
					break;
				case 2:
					vVar0 = { -1012802227, -1011534240, 1118831772 };
					break;
				case 3:
					vVar0 = { -1012764253, 1144979451, 1122754626 };
					break;
				case 4:
					vVar0 = { 1159066161, -998669876, 1110443295 };
					break;
				case 5:
					vVar0 = { 1160916079, 1152191865, 1116287896 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FIVE_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1130482788, 1148652547, 1128202174 };
					break;
				case 1:
					vVar0 = { 1151676858, -997317902, 1118039835 };
					break;
				case 2:
					vVar0 = { -984638042, -986479927, -1060850631 };
					break;
				case 3:
					vVar0 = { -1043383766, 1150863008, 1126972686 };
					break;
				case 4:
					vVar0 = { -997208531, -990918148, 1110001582 /* Float: 42.32f */ };
					break;
				case 5:
					vVar0 = { -991104500, 1151747523, 1128802425 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FOUR_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1158476915, -1002668605, 1110069215 };
					break;
				case 1:
					vVar0 = { 1159644254, 1143888411, 1117941924 /* Float: 81.22f */ };
					break;
				case 2:
					vVar0 = { 1152688734, 1136345448, 1119082512 };
					break;
				case 3:
					vVar0 = { -1002623232, -995557491, 1110225715 };
					break;
				case 4:
					vVar0 = { 1160984236, 1152726319, 1116365634 };
					break;
				case 5:
					vVar0 = { 1152443703, -995166945, 1118037963 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_THREE_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1017023653, 1146135803, 1123602399 };
					break;
				case 1:
					vVar0 = { 1161664225, 1152051782, 1110145761 /* Float: 42.87f */ };
					break;
				case 2:
					vVar0 = { -989358580, -1015501567, 1128289862 };
					break;
				case 3:
					vVar0 = { -988736856, -988454523, 1115478032 };
					break;
				case 4:
					vVar0 = { 1156470866, -991388467, 1110461907 };
					break;
				case 5:
					vVar0 = { 1159330726, 1133975811, 1117277850 };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TWO_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -978343182, -986195374, 1086735778 /* Float: 6.196f */ };
					break;
				case 1:
					vVar0 = { -1003687512, -996430496, 1110227723 };
					break;
				case 2:
					vVar0 = { 1152520757, -997256962, 1117183672 };
					break;
				case 3:
					vVar0 = { 1155918930, -996187529, 1110257697 };
					break;
				case 4:
					vVar0 = { 1158576247, 1153035780, 1118237998 };
					break;
				case 5:
					vVar0 = { 1156677493, 1156789445, 1132786660 };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_410(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case joaat("PROVISION_JEWELRY_MOON_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1151087428, 1150322139, 1125626374 };
					break;
				case 1:
					vVar0 = { 1158638342, 1157746446, 1128780038 };
					break;
				case 2:
					vVar0 = { 1159396311, 1157235687, 1126638702 };
					break;
				case 3:
					vVar0 = { 1153861362, 1158219391, 1134729265 };
					break;
				case 4:
					vVar0 = { -996896723, 1134785911, 1110386095 };
					break;
				case 5:
					vVar0 = { 1157692420, -992202162, 1109535490 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_WHTGLD_DMND_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1150429725, 1154656076, 1135731678 };
					break;
				case 1:
					vVar0 = { -994168840, 1140952769, 1120698368 };
					break;
				case 2:
					vVar0 = { -1005248446, 1146495818, 1121646438 };
					break;
				case 3:
					vVar0 = { 1145645646, 1146078626, 1122660647 };
					break;
				case 4:
					vVar0 = { 1160853197, 1154629509, 1124203220 };
					break;
				case 5:
					vVar0 = { -1003779654, 1149207609, 1124401086 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_YLWGLD_DMND_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -989329363, 1144258929, 1123714099 };
					break;
				case 1:
					vVar0 = { 1154907996, -992497205, 1112177632 };
					break;
				case 2:
					vVar0 = { -997660860, 1144038882, 1120814891 };
					break;
				case 3:
					vVar0 = { 1150828642, -1022377165, 1120428884 };
					break;
				case 4:
					vVar0 = { -992459366, -1029837029, 1127494517 };
					break;
				case 5:
					vVar0 = { -989777342, -990836015, 1122008170 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_FRENCH_DMND_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1012009068, 1150299267, 1123760354 };
					break;
				case 1:
					vVar0 = { -989723062, -991134179, 1122188342 };
					break;
				case 2:
					vVar0 = { -995369558, 1140824139, 1120482099 /* Float: 100.6f */ };
					break;
				case 3:
					vVar0 = { 1156950139, -991299125, 1109583200 };
					break;
				case 4:
					vVar0 = { -1009959580, 1155186377, 1130006059 };
					break;
				case 5:
					vVar0 = { -980741650, -982351966, -1042961400 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_TOPAZ_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1154982920, -990506107, 1111109442 };
					break;
				case 1:
					vVar0 = { 1153941651, -991556157, 1114277675 };
					break;
				case 2:
					vVar0 = { 1144615304, 1155744694, 1131160646 };
					break;
				case 3:
					vVar0 = { 1159246221, 1133593035, 1116012824 };
					break;
				case 4:
					vVar0 = { 1160402096, -997971165, 1111206451 };
					break;
				case 5:
					vVar0 = { -1021331767, 1153182753, 1122564571 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_PEARL_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1151573910, -1010653410, 1120246514 };
					break;
				case 1:
					vVar0 = { 1161225818, 1158836822, 1125991363 };
					break;
				case 2:
					vVar0 = { -992253862, -1017025672, 1127729778 };
					break;
				case 3:
					vVar0 = { -982608753, -985949012, -1058654913 };
					break;
				case 4:
					vVar0 = { 1157077721, 1150582546, 1126820348 };
					break;
				case 5:
					vVar0 = { 1155967279, -991780487, 1110434261 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_CORAL_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -991463170, 1158732149, 1135480891 };
					break;
				case 1:
					vVar0 = { -1001033943, 1137053798, 1119734989 /* Float: 94.9f */ };
					break;
				case 2:
					vVar0 = { 1159763620, 1144221427, 1117941580 };
					break;
				case 3:
					vVar0 = { -985249202, -988105380, 1116748513 };
					break;
				case 4:
					vVar0 = { -996167827, 1139904643, 1118578541 };
					break;
				case 5:
					vVar0 = { 1154818245, -998499172, 1109572714 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_EMERALD_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1162437575, 1152850870, 1112566994 };
					break;
				case 1:
					vVar0 = { 1156396859, -996840309, 1109894546 };
					break;
				case 2:
					vVar0 = { -997639045, -995524559, 1115694639 };
					break;
				case 3:
					vVar0 = { -977519387, -984999215, -1045352677 };
					break;
				case 4:
					vVar0 = { 1159437042, 1146947600, 1116788359 };
					break;
				case 5:
					vVar0 = { 1139854180, 1155965780, 1128588050 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_ONYX_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1011375604, 1133906487, joaat("BOUNTY_TRACKING_RILEYS_CHARGE_MULTI_DEAD_END_3") };
					break;
				case 1:
					vVar0 = { 1158665503, -995797434, 1109935928 };
					break;
				case 2:
					vVar0 = { -989067043, 1142447019, 1122662167 };
					break;
				case 3:
					vVar0 = { -986875453, -985098600, -1057177725 };
					break;
				case 4:
					vVar0 = { 1150708040, -996768424, 1117213688 };
					break;
				case 5:
					vVar0 = { -1001444180, -994210021, 1115240530 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_PERS_TURQ_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -980647348, -985102115, 1092523065 };
					break;
				case 1:
					vVar0 = { 1146749736, 1151427936, 1130230927 };
					break;
				case 2:
					vVar0 = { 1156410106, -991440888, 1111348719 };
					break;
				case 3:
					vVar0 = { 1158449418, -1002462921, 1109869986 };
					break;
				case 4:
					vVar0 = { 1138141528, 1143415063, 1122291810 };
					break;
				case 5:
					vVar0 = { 1158387937, -1022544524, 1111517212 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_TURQUOISE_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -996477174, -990973977, 1113576964 };
					break;
				case 1:
					vVar0 = { 1145163371, 1146386666, 1122860859 };
					break;
				case 2:
					vVar0 = { -983561466, -983631000, 1107876016 };
					break;
				case 3:
					vVar0 = { 1141202108, 1155161121, 1126309036 };
					break;
				case 4:
					vVar0 = { 1151642698, -988922634, 1112281797 };
					break;
				case 5:
					vVar0 = { 1158779503, 1151748219, 1121203913 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_CORAL_DNGL_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -995287122, -995145703, 1119557976 };
					break;
				case 1:
					vVar0 = { -990310400, -988477379, 1113701058 };
					break;
				case 2:
					vVar0 = { -978907689, -986308698, 1090857224 };
					break;
				case 3:
					vVar0 = { -986888786, -1009260560, 1127039369 };
					break;
				case 4:
					vVar0 = { -977855939, -985196650, -1050308248 };
					break;
				case 5:
					vVar0 = { 1156081410, -1002899522, 1109750186 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_DMND_PENDT_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1161116623, 1140219950, 1115926103 };
					break;
				case 1:
					vVar0 = { -986482442, -1008270125, 1128587900 };
					break;
				case 2:
					vVar0 = { 1152693510, 1152779436, 1128046920 };
					break;
				case 3:
					vVar0 = { 1156184646, 1141933081, 1122050507 };
					break;
				case 4:
					vVar0 = { -987655025, -987917533, 1116666331 };
					break;
				case 5:
					vVar0 = { 1158815261, 1148975530, 1118940561 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_DROP_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1155562996, -1009598831, 1110419930 };
					break;
				case 1:
					vVar0 = { -992756474, -994000241, 1118172517 };
					break;
				case 2:
					vVar0 = { 1144774620, 1150563541, 1125082785 };
					break;
				case 3:
					vVar0 = { 1156219462, 1149162439, 1123290186 };
					break;
				case 4:
					vVar0 = { -983684440, -984362795, -1077139210 };
					break;
				case 5:
					vVar0 = { -987519943, -1011985285, 1124937433 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_ELK_TOOTH_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1161466610, 1151337513, 1109645462 };
					break;
				case 1:
					vVar0 = { 1130136843, 1143710605, 1127210143 };
					break;
				case 2:
					vVar0 = { 1152223617, -1004439903, 1116550260 };
					break;
				case 3:
					vVar0 = { 1157926171, -1004523831, 1109573501 };
					break;
				case 4:
					vVar0 = { -1044084425, 1151079686, 1126939165 };
					break;
				case 5:
					vVar0 = { 1153889583, 1158191735, 1134667792 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_EMERALD_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1159197090, 1155172180, 1118577921 };
					break;
				case 1:
					vVar0 = { -977961460, -986554675, -1045917860 };
					break;
				case 2:
					vVar0 = { 1143718491, 1152565117, 1127472824 };
					break;
				case 3:
					vVar0 = { -997044707, 1118494917, 1110433595 };
					break;
				case 4:
					vVar0 = { -987057684, -987910214, 1115722482 };
					break;
				case 5:
					vVar0 = { -988994871, 1144600150, 1123540402 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GRNET_POST_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1153263329, 1157417894, 1133830645 };
					break;
				case 1:
					vVar0 = { 1161186426, 1151102982, 1110634995 };
					break;
				case 2:
					vVar0 = { -995179528, -992427713, 1118059818 };
					break;
				case 3:
					vVar0 = { 1138095030, -1021998006, 1122654224 };
					break;
				case 4:
					vVar0 = { 1157685178, 1147927003, 1122630238 };
					break;
				case 5:
					vVar0 = { -979997966, -987146043, -1050396328 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_PEARL_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -991552799, 1141689862, 1122066786 };
					break;
				case 1:
					vVar0 = { 1158251270, -998737294, 1109572623 };
					break;
				case 2:
					vVar0 = { 1158583804, 1152691970, 1118363090 };
					break;
				case 3:
					vVar0 = { -983438844, -987337875, -1051949269 };
					break;
				case 4:
					vVar0 = { -998540771, -996854383, 1114191692 };
					break;
				case 5:
					vVar0 = { 1150515364, -1026892576, 1120030772 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_QN_DMND_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1156272423, 1124794027, 1120088591 };
					break;
				case 1:
					vVar0 = { 1150985937, -992984244, 1115885514 };
					break;
				case 2:
					vVar0 = { -998008283, 1117241181, 1119193640 };
					break;
				case 3:
					vVar0 = { 1144554766, -994799100, 1111652565 };
					break;
				case 4:
					vVar0 = { -988983845, -994891170, 1124797448 };
					break;
				case 5:
					vVar0 = { -997925052, -1001417179, 1110139732 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_TURQ_STUD_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -980754973, -987232391, -1052661682 };
					break;
				case 1:
					vVar0 = { 1157761966, -1005458049, 1109573653 };
					break;
				case 2:
					vVar0 = { 1161015878, 1149172171, 1109633183 };
					break;
				case 3:
					vVar0 = { 1130396713, 1148892627, 1128046199 };
					break;
				case 4:
					vVar0 = { 1140829110, 1158425596, 1131797538 };
					break;
				case 5:
					vVar0 = { -983761080, -985761186, 1093784306 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_RUDY_DNGL_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1009552569, 1150060331, 1122576197 };
					break;
				case 1:
					vVar0 = { 1158680928, -1019549549, 1109635875 };
					break;
				case 2:
					vVar0 = { 1146926318, -1013783980, 1118174965 };
					break;
				case 3:
					vVar0 = { 1158785274, -996272300, 1110616310 };
					break;
				case 4:
					vVar0 = { 1153761223, -1014803104, 1117676372 };
					break;
				case 5:
					vVar0 = { 1133824442, 1146355450, 1127882949 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_WHT_DMND_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157164712, -991036834, 1109574518 };
					break;
				case 1:
					vVar0 = { -1021029214, 1155036479, 1126812451 };
					break;
				case 2:
					vVar0 = { -1002659484, -1005871296, 1109606961 };
					break;
				case 3:
					vVar0 = { -995796197, -989325619, 1109753332 };
					break;
				case 4:
					vVar0 = { -1008497885, 1146923647, 1123804250 };
					break;
				case 5:
					vVar0 = { 1159199781, 1120146948, 1110651175 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_TURQUOISE_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1152034251, 1155823469, 1128195804 };
					break;
				case 1:
					vVar0 = { 1152339845, -998896665, 1111360686 };
					break;
				case 2:
					vVar0 = { -993641507, -986751344, 1109130058 };
					break;
				case 3:
					vVar0 = { 1157247869, 1143932191, 1126847545 };
					break;
				case 4:
					vVar0 = { -980884859, -985631785, -1053134160 };
					break;
				case 5:
					vVar0 = { 1148133540, 1136837198, 1121706181 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_DMND_BNGLE_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -997867438, -990842003, 1109768793 };
					break;
				case 1:
					vVar0 = { -991895052, -992177660, 1121376390 };
					break;
				case 2:
					vVar0 = { 1158997172, 1146917590, 1116882810 };
					break;
				case 3:
					vVar0 = { -984702652, -986571108, -1059149840 };
					break;
				case 4:
					vVar0 = { -1010936676, -1011551732, 1118534238 };
					break;
				case 5:
					vVar0 = { 1159983219, -997011603, 1112566388 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_CARVED_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157833834, 1126406318, 1116990352 };
					break;
				case 1:
					vVar0 = { -984540844, -986543297, -1058873994 };
					break;
				case 2:
					vVar0 = { -993782915, 1144354754, 1124154324 };
					break;
				case 3:
					vVar0 = { -988474110, -988576465, 1114861994 };
					break;
				case 4:
					vVar0 = { -989343912, -1015055778, 1128178582 };
					break;
				case 5:
					vVar0 = { -983975248, -984027263, -1086895178 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GLD_BNGLE_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1143944292, -996369269, 1110436482 };
					break;
				case 1:
					vVar0 = { 1126021307, 1135931798, 1122849509 };
					break;
				case 2:
					vVar0 = { -977760532, -984263762, -1064571014 };
					break;
				case 3:
					vVar0 = { -1010330173, 1155069592, 1129970067 };
					break;
				case 4:
					vVar0 = { 1153897857, 1154185216, 1125267079 };
					break;
				case 5:
					vVar0 = { -987128590, -1034372514, 1125635457 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GRNET_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157663470, -1001962116, 1109722108 };
					break;
				case 1:
					vVar0 = { -995518521, -999816059, 1114129173 };
					break;
				case 2:
					vVar0 = { -1000855873, 1142702198, 1119712923 };
					break;
				case 3:
					vVar0 = { -1021000221, 1140389282, 1121139556 };
					break;
				case 4:
					vVar0 = { -980965067, -983923905, 1107087065 };
					break;
				case 5:
					vVar0 = { -989758382, -987272696, 1116191850 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_SPHR_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -989295882, -992997941, 1124765028 };
					break;
				case 1:
					vVar0 = { 1139422095, 1149788160 /* Float: 1091f */, 1128464626 };
					break;
				case 2:
					vVar0 = { -1004947585, 1141072585, 1120130613 };
					break;
				case 3:
					vVar0 = { 1161380606, 1138449089, 1113827574 };
					break;
				case 4:
					vVar0 = { -996094214, -1004768526, 1120178799 };
					break;
				case 5:
					vVar0 = { 1135352204, -1004105281, 1109892944 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_SPHR_BNGLE_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -998065054, 1137900805, 1111085312 };
					break;
				case 1:
					vVar0 = { -989104337, 1147060779, 1126402235 };
					break;
				case 2:
					vVar0 = { -984676516, -991580684, 1113849195 };
					break;
				case 3:
					vVar0 = { -1038798553, 1149932323, 1126644908 };
					break;
				case 4:
					vVar0 = { -988190822, -986553450, 1116479554 };
					break;
				case 5:
					vVar0 = { 1154932654, 1142241460, 1120682508 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_PEARL_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157691732, -1001068198, 1110264554 };
					break;
				case 1:
					vVar0 = { 1154116755, 1153036919, 1125214113 };
					break;
				case 2:
					vVar0 = { -1028011251, 1151986041, 1126718407 };
					break;
				case 3:
					vVar0 = { 1158956806, -1000935693, 1110269771 };
					break;
				case 4:
					vVar0 = { 1146850410, -990008656, 1110425469 };
					break;
				case 5:
					vVar0 = { -978318924, -986156900, 1083961246 /* Float: 4.873f */ };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_AMETHYST_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1158768972, 1149798466, 1120684291 };
					break;
				case 1:
					vVar0 = { 1142644603, 1148181756, 1127244169 };
					break;
				case 2:
					vVar0 = { 1152998408, 1150040678, 1128676793 };
					break;
				case 3:
					vVar0 = { -994293449, -1002647831, 1121049117 };
					break;
				case 4:
					vVar0 = { 1151551447, 1134622540, 1118703714 };
					break;
				case 5:
					vVar0 = { 1157183562, -993414357, 1109680980 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_BLCK_PEARL_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1146766131, 1158480208, 1131334795 };
					break;
				case 1:
					vVar0 = { -1004690212, 1150127743, 1125920159 };
					break;
				case 2:
					vVar0 = { -1005443064, -1001397907, 1109574867 };
					break;
				case 3:
					vVar0 = { 1149586735, -998248104, 1116191982 };
					break;
				case 4:
					vVar0 = { -978549844, -985726165, -1068247286 /* Float: -3.31f */ };
					break;
				case 5:
					vVar0 = { 1124542513, 1127296598, 1123050193 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GLD_CROSS_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1144177802, 1102673409, 1125638819 };
					break;
				case 1:
					vVar0 = { -999478238, 1154238341, 1131700552 };
					break;
				case 2:
					vVar0 = { 1159139004, -1002918534, 1109750962 };
					break;
				case 3:
					vVar0 = { 1152891527, 1145550930, 1120222052 };
					break;
				case 4:
					vVar0 = { 1156389126, -991383560, 1111113298 };
					break;
				case 5:
					vVar0 = { 1156362445, 1133880279, 1117244621 /* Float: 75.9f */ };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GLD_PEARL_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -992231514, -986212631, -1052987873 };
					break;
				case 1:
					vVar0 = { 1150536573, 1157536965, 1134659299 };
					break;
				case 2:
					vVar0 = { 1152856777, -992523125, 1115291168 };
					break;
				case 3:
					vVar0 = { -978420462, -987641352, -1055837389 };
					break;
				case 4:
					vVar0 = { -991691080, -997350236, 1118960222 };
					break;
				case 5:
					vVar0 = { 1160361665, -997770011, 1111257965 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GLD_PENDT_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1009831146, 1151216796, 1126209002 };
					break;
				case 1:
					vVar0 = { 1160280895, 1157203911, 1123463987 };
					break;
				case 2:
					vVar0 = { -977583423, -982591939, -1040820312 };
					break;
				case 3:
					vVar0 = { 1154881364, -995953910, 1109959901 };
					break;
				case 4:
					vVar0 = { 1159777362, 1125027348, 1112394624 };
					break;
				case 5:
					vVar0 = { -984556028, -986967192, -1062989726 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_MTHR_PEARL_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1150218969, -989367263, 1113429912 };
					break;
				case 1:
					vVar0 = { 1160196157, 1137995343, 1118078929 };
					break;
				case 2:
					vVar0 = { 1134687814, 1134209630, 1125213143 };
					break;
				case 3:
					vVar0 = { -1007593521, -1030976963, 1110152577 };
					break;
				case 4:
					vVar0 = { 1159985709, 1154749325, 1122434351 };
					break;
				case 5:
					vVar0 = { -991302877, -992503988, 1121515864 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_PORCELAIN_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1159000990, 1154736808, 1119867503 };
					break;
				case 1:
					vVar0 = { 1154912928, 1139266398, 1121228004 };
					break;
				case 2:
					vVar0 = { -997062459, 1146283213, 1124519464 };
					break;
				case 3:
					vVar0 = { 1160235049, 1154350457, 1125351549 };
					break;
				case 4:
					vVar0 = { 1155043025, -997020762, 1109571404 };
					break;
				case 5:
					vVar0 = { 1155036078, -1009463788, 1111278748 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_SLVR_PEARL_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1031824993, 1150960001, 1126881414 };
					break;
				case 1:
					vVar0 = { 1152815284, -1007778300, 1116923365 };
					break;
				case 2:
					vVar0 = { -993212703, -995485786, 1118239871 };
					break;
				case 3:
					vVar0 = { 1160627577, 1141225274, 1116705915 /* Float: 71.79f */ };
					break;
				case 4:
					vVar0 = { -979521341, -987986473, -1053642719 };
					break;
				case 5:
					vVar0 = { 1150037205, -996005298, 1115731788 };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_TOPAZ_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1014294941, 1118929145, 1111551375 };
					break;
				case 1:
					vVar0 = { -983110074, -987333251, -1049292702 };
					break;
				case 2:
					vVar0 = { -978801062, -983219552, -1045443316 };
					break;
				case 3:
					vVar0 = { -995964215, -1000672592, 1116410085 };
					break;
				case 4:
					vVar0 = { -986884313, -985794363, 1092870996 };
					break;
				case 5:
					vVar0 = { -1010500338, 1154998067, 1129871311 };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_411(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case joaat("PROVISION_WLDFLWR_AGARITA"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -977243998, -983202906, 1102957563 };
					break;
				case 1:
					vVar0 = { -985234686, -988026012, 1116690463 };
					break;
				case 2:
					vVar0 = { -980733430, -983275938, 1113780716 };
					break;
				case 3:
					vVar0 = { -986619961, -987487613, 1119377907 };
					break;
				case 4:
					vVar0 = { -983835316, -990880326, 1092625650 };
					break;
				case 5:
					vVar0 = { -977578639, -983147942, -1060514990 };
					break;
				case 6:
					vVar0 = { -986526564, -986490958, 1118935146 };
					break;
				case 7:
					vVar0 = { -978797156, -983765303, 1083987055 };
					break;
				case 8:
					vVar0 = { -983179358, -983578878, 1111154452 };
					break;
				case 9:
					vVar0 = { -980144105, -988106355, 1090361697 };
					break;
				case 10:
					vVar0 = { -985513378, -988989465, 1116963811 };
					break;
				case 11:
					vVar0 = { -979119897, -982496948, -1065080444 };
					break;
				case 12:
					vVar0 = { -991829606, -986649649, 1096987328 };
					break;
				case 13:
					vVar0 = { -980111677, -989016891, 1111511442 };
					break;
				case 14:
					vVar0 = { -979798168, -982865756, 1103706168 };
					break;
				case 15:
					vVar0 = { -978838157, -987160539, 1098591953 };
					break;
				case 16:
					vVar0 = { -984373686, -984235405, 1110840797 };
					break;
				case 17:
					vVar0 = { -989545779, -988898234, 1120127285 };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_BITTERWEED"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1001306908, -1020024750, 1117478344 };
					break;
				case 1:
					vVar0 = { -994742682, 1139658526, 1120879837 };
					break;
				case 2:
					vVar0 = { -987890831, 1135959527, 1125623510 };
					break;
				case 3:
					vVar0 = { 1160930427, 1143839452, 1115799652 };
					break;
				case 4:
					vVar0 = { -989724172, 1143826955, 1123275597 };
					break;
				case 5:
					vVar0 = { 1159667384, 1133056587, 1116370617 };
					break;
				case 6:
					vVar0 = { 1160225313, 1133762419, 1115136304 };
					break;
				case 7:
					vVar0 = { -990594408, 1139728105, 1122511041 };
					break;
				case 8:
					vVar0 = { -988173545, 1139141421, 1125123234 };
					break;
				case 9:
					vVar0 = { -995909648, 1133445769, 1117231063 };
					break;
				case 10:
					vVar0 = { 1157734666, 1145955415, 1125773666 };
					break;
				case 11:
					vVar0 = { -1002639299, 1103638860, 1118036159 };
					break;
				case 12:
					vVar0 = { -992639599, 1142341860, 1122724269 };
					break;
				case 13:
					vVar0 = { 1158438846, 1136923830, 1111090683 };
					break;
				case 14:
					vVar0 = { -987833537, 1143251979, 1124608364 };
					break;
				case 15:
					vVar0 = { 1158920716, 1146938302, 1116985143 };
					break;
				case 16:
					vVar0 = { -994748006, 1121450643, 1119032280 };
					break;
				case 17:
					vVar0 = { -1004823280, -1047314678, 1118466150 };
					break;
				case 18:
					vVar0 = { 1158158127, -1029578080, 1112074939 };
					break;
				case 19:
					vVar0 = { 1156700340, 1139500794, 1124255216 };
					break;
				case 20:
					vVar0 = { -991883567, 1135405629, 1122397022 };
					break;
				case 21:
					vVar0 = { -987967685, 1146123018, 1125346076 };
					break;
				case 22:
					vVar0 = { -996182630, 1121122779, 1116555856 };
					break;
				case 23:
					vVar0 = { 1159442760, 1147830080, 1117747796 };
					break;
				case 24:
					vVar0 = { -995891290, -1030078104, 1120000012 };
					break;
				case 25:
					vVar0 = { 1158464877, 1120449554, 1113300476 };
					break;
				case 26:
					vVar0 = { -992830513, 1135691137, 1121364397 };
					break;
				case 27:
					vVar0 = { -988816974, 1145417808, 1124369347 };
					break;
				case 28:
					vVar0 = { 1158644392, 1141886770, 1117148254 };
					break;
				case 29:
					vVar0 = { 1160565506, 1148572059, 1116019697 };
					break;
				case 30:
					vVar0 = { 1159079260, 1120652021, 1110916887 };
					break;
				case 31:
					vVar0 = { -989330616, 1139597217, 1122742344 };
					break;
				case 32:
					vVar0 = { 1160296284, 1143743925, 1117158630 };
					break;
				case 33:
					vVar0 = { -993804976, 1133076041, 1122168262 };
					break;
				case 34:
					vVar0 = { 1158330192, 1151737987, 1120265709 };
					break;
				case 35:
					vVar0 = { -997028233, -1017996948, 1119450816 };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1153772642, -999956337, 1109639868 };
					break;
				case 1:
					vVar0 = { 1158685946, -1019045111, 1109636271 };
					break;
				case 2:
					vVar0 = { 1160468636, -1003635242, 1109546631 };
					break;
				case 3:
					vVar0 = { 1156875878, -997305721, 1109536657 };
					break;
				case 4:
					vVar0 = { 1158859895, -1004914446, 1109590784 };
					break;
				case 5:
					vVar0 = { 1158685098, -1014940382, 1109709197 };
					break;
				case 6:
					vVar0 = { 1158432166, -1004854316, 1109555342 };
					break;
				case 7:
					vVar0 = { 1158021370, -1011954578, 1109528614 };
					break;
				case 8:
					vVar0 = { 1158224126, -996560028, 1109652076 };
					break;
				case 9:
					vVar0 = { 1158286655, -993210425, 1109547735 };
					break;
				case 10:
					vVar0 = { 1160628367, -1005371738, 1109552902 };
					break;
				case 11:
					vVar0 = { 1157429551, -1004802964, 1110011308 };
					break;
				case 12:
					vVar0 = { 1154708259, -1003841217, 1109568565 };
					break;
				case 13:
					vVar0 = { 1157615288, -992930177, 1109663382 };
					break;
				case 14:
					vVar0 = { 1158909420, -1006271165, 1109617533 };
					break;
				case 15:
					vVar0 = { 1158546907, -1005568375, 1109587932 };
					break;
				case 16:
					vVar0 = { 1158396264, -1001634370, 1109635273 };
					break;
				case 17:
					vVar0 = { 1157948633, -991440437, 1109556422 };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1157824934, -1005681495, 1109594535 };
					break;
				case 1:
					vVar0 = { 1157916672, -991383446, 1109537511 };
					break;
				case 2:
					vVar0 = { 1158543139, -1007824617, 1109633975 };
					break;
				case 3:
					vVar0 = { 1157638984, -996524401, 1109937511 };
					break;
				case 4:
					vVar0 = { 1158300824, -1001635085, 1109670001 };
					break;
				case 5:
					vVar0 = { 1158304481, -997312324, 1109951780 };
					break;
				case 6:
					vVar0 = { 1157491761, -993478607, 1109615829 };
					break;
				case 7:
					vVar0 = { 1155313402, -996182655, 1109885901 };
					break;
				case 8:
					vVar0 = { 1156366336 /* Float: 1894f */, -990335918, 1109776581 };
					break;
				case 9:
					vVar0 = { 1158531441, -1006766830, 1109590016 /* Float: 40.75f */ };
					break;
				case 10:
					vVar0 = { 1158123430, -1013983091, 1109728790 };
					break;
				case 11:
					vVar0 = { 1157083128, -990180278, 1109634130 };
					break;
				case 12:
					vVar0 = { 1159071646, -1002617700, 1109635388 };
					break;
				case 13:
					vVar0 = { 1157191475, -993859977, 1109589822 };
					break;
				case 14:
					vVar0 = { 1153919320, -999109149, 1109713884 };
					break;
				case 15:
					vVar0 = { 1157834555, -998055231, 1109747371 };
					break;
				case 16:
					vVar0 = { 1157485601, -997305270, 1109526339 };
					break;
				case 17:
					vVar0 = { 1157650833, -991558353, 1109576599 };
					break;
				case 18:
					vVar0 = { 1156809302, -997144871, 1109621442 };
					break;
				case 19:
					vVar0 = { 1158694994, -1005735795, 1109597781 };
					break;
				case 20:
					vVar0 = { 1156582318, -991474369, 1109636442 };
					break;
				case 21:
					vVar0 = { 1158669435, -1011935874, 1109864877 };
					break;
				case 22:
					vVar0 = { 1159120904, -1003140083, 1109644387 };
					break;
				case 23:
					vVar0 = { 1157243265, -998606242, 1110001239 };
					break;
				case 24:
					vVar0 = { 1157361000, -993894539, 1109586225 };
					break;
				case 25:
					vVar0 = { 1157526454, -990251778, 1109680568 };
					break;
				case 26:
					vVar0 = { 1153216070, -1001476039, 1110565441 };
					break;
				case 27:
					vVar0 = { 1159819248, -1004567057, 1110046000 };
					break;
				case 28:
					vVar0 = { 1156919476, -1006456116, 1109591382 };
					break;
				case 29:
					vVar0 = { 1158734057, -1006718616, 1109665833 };
					break;
				case 30:
					vVar0 = { 1156470120, -992285483, 1109929849 };
					break;
				case 31:
					vVar0 = { 1154285724, -1002871792, 1109607855 };
					break;
				case 32:
					vVar0 = { 1157818372, -999869435, 1109596145 };
					break;
				case 33:
					vVar0 = { 1157683991, -994554495, 1109534284 };
					break;
				case 34:
					vVar0 = { 1157890908, -990601495, 1109556459 };
					break;
				case 35:
					vVar0 = { 1156259848, -998016655, 1109849654 };
					break;
				case 36:
					vVar0 = { 1157700080, -992558612, 1109551127 };
					break;
				case 37:
					vVar0 = { 1158987362, -1007152120, 1109569199 };
					break;
				case 38:
					vVar0 = { 1156515193, -1009926554, 1109947528 };
					break;
				case 39:
					vVar0 = { 1155563217, -1001672244, 1109792635 };
					break;
				case 40:
					vVar0 = { 1158328209, -1000341339, 1109598080 };
					break;
				case 41:
					vVar0 = { 1158103265, -994655838, 1109579850 };
					break;
				case 42:
					vVar0 = { 1158914040, -1004187568, 1109654999 };
					break;
				case 43:
					vVar0 = { 1155702702, -997246165, 1109598447 };
					break;
				case 44:
					vVar0 = { 1157058347, -990853677, 1109709551 };
					break;
				case 45:
					vVar0 = { 1158365602, -996243915, 1109556401 };
					break;
				case 46:
					vVar0 = { 1159506342, -1009357799, 1109549887 };
					break;
				case 47:
					vVar0 = { 1157335302, -1012503154, 1109560402 };
					break;
				case 48:
					vVar0 = { 1155522847, -997246820, 1109548254 };
					break;
				case 49:
					vVar0 = { 1156470800, -1002792201, 1110060740 };
					break;
				case 50:
					vVar0 = { 1158583521, -998986636, 1109625505 };
					break;
				case 51:
					vVar0 = { 1157664551, -991059108, 1109556464 };
					break;
				case 52:
					vVar0 = { 1158096458, -1003830174, 1109606379 };
					break;
				case 53:
					vVar0 = { 1158123598, -992892543, 1109588427 };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -991864963, -996550705, 1117952594 };
					break;
				case 1:
					vVar0 = { 1146998084, -993361084, 1110287143 };
					break;
				case 2:
					vVar0 = { -1001948760, -1005625246, 1112943496 };
					break;
				case 3:
					vVar0 = { 1143734988, -1001013117, 1111484130 };
					break;
				case 4:
					vVar0 = { 1141625391, -1005793427, 1116372255 };
					break;
				case 5:
					vVar0 = { -998688023, -999570786, 1114759388 };
					break;
				case 6:
					vVar0 = { joaat("SM_PROPS_COMBO28_14_LOD"), -1008953524, 1118326521 };
					break;
				case 7:
					vVar0 = { -1004423135, 1132573514, 1119096073 };
					break;
				case 8:
					vVar0 = { 1126653474, -1006129955, 1115427837 };
					break;
				case 9:
					vVar0 = { 1146595159, -991728779, 1110035753 };
					break;
				case 10:
					vVar0 = { -992131523, -996534591, 1117894068 };
					break;
				case 11:
					vVar0 = { 1129160612, -1005141490, 1111048577 };
					break;
				case 12:
					vVar0 = { -997127520, -1001242403, 1113995726 };
					break;
				case 13:
					vVar0 = { 1142705662, -1004732534, 1112275209 };
					break;
				case 14:
					vVar0 = { 1144145748, -1000559601, 1111559341 };
					break;
				case 15:
					vVar0 = { -1002357545, 1124889356, 1109907181 };
					break;
				case 16:
					vVar0 = { -1009762642, -1008514957, 1117334485 };
					break;
				case 17:
					vVar0 = { -1004220218, -1007915221, 1112144963 };
					break;
				case 18:
					vVar0 = { 1147338256, -990140334, 1110633056 };
					break;
				case 19:
					vVar0 = { 1145686209, -998820255, 1112651745 };
					break;
				case 20:
					vVar0 = { -998641744, -1002647205, 1114290874 };
					break;
				case 21:
					vVar0 = { -992994697, -997108400, 1117428806 };
					break;
				case 22:
					vVar0 = { 1144146959, -1005915660, 1117407758 };
					break;
				case 23:
					vVar0 = { -1005657642, -1013661922, 1112813653 };
					break;
				case 24:
					vVar0 = { -998343180, -1039722212, 1110191930 };
					break;
				case 25:
					vVar0 = { -1013495425, -1007223466, 1115819484 };
					break;
				case 26:
					vVar0 = { 1132818425, -1005722237, 1114833918 };
					break;
				case 27:
					vVar0 = { 1147836960, -989787185, 1110263742 };
					break;
				case 28:
					vVar0 = { 1146091468, -998045794, 1111628193 };
					break;
				case 29:
					vVar0 = { -1002344342, -1003000480, 1112799739 };
					break;
				case 30:
					vVar0 = { -993009541, -998440042, 1120454246 };
					break;
				case 31:
					vVar0 = { 1145106712, -1004904982, 1117295378 };
					break;
				case 32:
					vVar0 = { -1014474034, -1006039436, 1110429561 };
					break;
				case 33:
					vVar0 = { -1007234741, -1027208591, 1109953054 };
					break;
				case 34:
					vVar0 = { -998211158, 1119498450, 1119079721 };
					break;
				case 35:
					vVar0 = { 1137080841, -1005704425, 1114997171 };
					break;
				case 36:
					vVar0 = { 1138094748, -1004044131, 1111811466 };
					break;
				case 37:
					vVar0 = { 1143035812, -996760248, 1111101114 };
					break;
				case 38:
					vVar0 = { -1002220449, -1003409190, 1112721557 };
					break;
				case 39:
					vVar0 = { -994504802, -997246681, 1116941481 };
					break;
				case 40:
					vVar0 = { 1145172250, -1004645225, 1117229160 };
					break;
				case 41:
					vVar0 = { 1149144367, -989439652, 1110130324 };
					break;
				case 42:
					vVar0 = { -1008792276, 1108181173, 1110059141 };
					break;
				case 43:
					vVar0 = { -1031263738, -1006251290, 1115613086 };
					break;
				case 44:
					vVar0 = { -997732819, 1133706900, 1113543166 };
					break;
				case 45:
					vVar0 = { 1139961302, -1004431167, 1110486462 };
					break;
				case 46:
					vVar0 = { 1150032806, -989144642, 1111718971 };
					break;
				case 47:
					vVar0 = { 1147434477, -995380011, 1114305609 };
					break;
				case 48:
					vVar0 = { -1001195201, -1004427207, 1115084033 };
					break;
				case 49:
					vVar0 = { -995366830, -1000528595, 1119513319 };
					break;
				case 50:
					vVar0 = { 1146199138, -1001795890, 1114891897 };
					break;
				case 51:
					vVar0 = { -1006156941, -1007050624, 1112439034 };
					break;
				case 52:
					vVar0 = { -1012322694, 1127963466, 1115190010 };
					break;
				case 53:
					vVar0 = { 1108430595, -1005835257, 1112013168 };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_CREEK_PLUM"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1150806647, -1006003013, 1116367026 };
					break;
				case 1:
					vVar0 = { -992760349, 1125552613, 1124817653 };
					break;
				case 2:
					vVar0 = { -993502470, joaat("BEE_HOUSE_STG5_ROCKS"), 1124521627 };
					break;
				case 3:
					vVar0 = { 1151935300, -999482927, 1113152639 };
					break;
				case 4:
					vVar0 = { -994779152, -1005225588, 1123678342 };
					break;
				case 5:
					vVar0 = { -988837536, -1030137271, 1131214995 };
					break;
				case 6:
					vVar0 = { -990755316, -1015112185, 1127999950 };
					break;
				case 7:
					vVar0 = { -997145641, -1009724411, 1121364161 };
					break;
				case 8:
					vVar0 = { 1144918847, -994825683, 1112126029 };
					break;
				case 9:
					vVar0 = { 1156029678, -1015360160, 1114066151 };
					break;
				case 10:
					vVar0 = { -989960659, -1009576949, 1126264622 };
					break;
				case 11:
					vVar0 = { 1151761179, -993007854, 1115947087 };
					break;
				case 12:
					vVar0 = { 1153615782, -1011171623, 1117867345 };
					break;
				case 13:
					vVar0 = { -989113233, -1007013822, 1125090814 };
					break;
				case 14:
					vVar0 = { 1154664137, -991854592 /* Float: -1804f */, 1112359693 };
					break;
				case 15:
					vVar0 = { -991671034, -999944687, 1121137158 };
					break;
				case 16:
					vVar0 = { 1148472494, -1012969859, 1119406218 };
					break;
				case 17:
					vVar0 = { 1152294986, -989202842, 1111724830 };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -980535222, -983017996, 1099299684 };
					break;
				case 1:
					vVar0 = { -980114414, -984958792, 1088596872 };
					break;
				case 2:
					vVar0 = { -995914383, -991028036, 1115181458 };
					break;
				case 3:
					vVar0 = { -979252744, -988200591, 1058498750 };
					break;
				case 4:
					vVar0 = { -1000580900, -990485086, 1111869733 };
					break;
				case 5:
					vVar0 = { -977593453, -983178547, -1059993753 };
					break;
				case 6:
					vVar0 = { -980227512, -982882497, 1094607857 };
					break;
				case 7:
					vVar0 = { -980665756, -985382842, 1090450134 };
					break;
				case 8:
					vVar0 = { -978300336, -986387227, 1077644204 };
					break;
				case 9:
					vVar0 = { -1002740864, -990731657, 1111272281 };
					break;
				case 10:
					vVar0 = { -978368887, -982820168, -1044300971 };
					break;
				case 11:
					vVar0 = { -997209891, -990975631, 1109813651 };
					break;
				case 12:
					vVar0 = { -980286505, -983737029, 1098051748 };
					break;
				case 13:
					vVar0 = { -980952312, -984493941, 1107741841 };
					break;
				case 14:
					vVar0 = { -978577179, -985193148, -1045599669 };
					break;
				case 15:
					vVar0 = { -978534480, -983498166, -1045235069 };
					break;
				case 16:
					vVar0 = { -997313135, -991648555, 1114960652 };
					break;
				case 17:
					vVar0 = { -1002590709, -992242360, 1112905582 };
					break;
				case 18:
					vVar0 = { -978980409, -981914358, -1055278582 };
					break;
				case 19:
					vVar0 = { -981617570, -984761864, 1107310865 };
					break;
				case 20:
					vVar0 = { -994181906, -990335967, 1111059496 };
					break;
				case 21:
					vVar0 = { -978110759, -984519696, -1044300028 };
					break;
				case 22:
					vVar0 = { -1001634426, -993159070, 1114902411 };
					break;
				case 23:
					vVar0 = { -998039077, -992770253, 1117924904 };
					break;
				case 24:
					vVar0 = { -981793944, -984253252, 1111242978 };
					break;
				case 25:
					vVar0 = { -979304559, -983266939, -1066393752 };
					break;
				case 26:
					vVar0 = { -1003843489, -993608720, 1111466658 };
					break;
				case 27:
					vVar0 = { -994964759, -990403977, 1110602264 };
					break;
				case 28:
					vVar0 = { -977645429, -983914832, -1044328491 };
					break;
				case 29:
					vVar0 = { -998009758, -991913730, 1115253160 };
					break;
				case 30:
					vVar0 = { -979298914, -984026657, 1029844037 };
					break;
				case 31:
					vVar0 = { -981902180, -983201268, 1111389711 };
					break;
				case 32:
					vVar0 = { -1003577033, -994449850, 1111465405 };
					break;
				case 33:
					vVar0 = { -999618109, -990793040, 1111631704 };
					break;
				case 34:
					vVar0 = { -995374481, -991294005, 1116410669 };
					break;
				case 35:
					vVar0 = { -976878719, -983755567, -1042212580 };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_WILD_RHUBARB"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -983696945, -987841348, -1050551842 };
					break;
				case 1:
					vVar0 = { -988908364, -987847156, 1115707655 };
					break;
				case 2:
					vVar0 = { -979713260, -988213420, -1063984254 };
					break;
				case 3:
					vVar0 = { -980464867, -986237125, -1046927062 };
					break;
				case 4:
					vVar0 = { -984226574, -987037716, -1062102171 };
					break;
				case 5:
					vVar0 = { -982649328, -987347726, -1049645631 };
					break;
				case 6:
					vVar0 = { -985945039, -985117475, -1086402163 };
					break;
				case 7:
					vVar0 = { -987035595, -987657363, 1116026967 };
					break;
				case 8:
					vVar0 = { -990028235, -986307424, 1090395604 };
					break;
				case 9:
					vVar0 = { -986352923, -987919663, 1115796896 };
					break;
				case 10:
					vVar0 = { -981935075, -988506894, -1055706642 };
					break;
				case 11:
					vVar0 = { -983207846, -989123072, -1051069765 };
					break;
				case 12:
					vVar0 = { -988549042, -987104809, 1116117946 };
					break;
				case 13:
					vVar0 = { -986116919, -985532031, 1088476978 };
					break;
				case 14:
					vVar0 = { -980567409, -986121896, -1047013968 };
					break;
				case 15:
					vVar0 = { -983306060, -986087899, 1078641971 };
					break;
				case 16:
					vVar0 = { -979816913, -987050545, -1053572098 };
					break;
				case 17:
					vVar0 = { -992004268, -986497204, 1081796804 };
					break;
				case 18:
					vVar0 = { -982604501, -988284244, -1052925535 };
					break;
				case 19:
					vVar0 = { -983605641, -989733491, -1050994153 };
					break;
				case 20:
					vVar0 = { -988358619, -987594469, 1117717682 };
					break;
				case 21:
					vVar0 = { -982870049, -985351696, -1058827376 };
					break;
				case 22:
					vVar0 = { -981113960, -985828450, -1054366467 };
					break;
				case 23:
					vVar0 = { -979861094, -985948107, -1046580712 };
					break;
				case 24:
					vVar0 = { -993869292, -987373887, 1114900212 };
					break;
				case 25:
					vVar0 = { -985874489, -987272081, 1118245972 };
					break;
				case 26:
					vVar0 = { -986826027, -985571303, 1094499015 };
					break;
				case 27:
					vVar0 = { -985737130, -987799265, 1116412441 };
					break;
				case 28:
					vVar0 = { -983983579, -988953711, -1064789674 };
					break;
				case 29:
					vVar0 = { -983165305, -988260606, -1049879569 };
					break;
				case 30:
					vVar0 = { -981692072, -986603885, -1056785981 };
					break;
				case 31:
					vVar0 = { -980191379, -986787742, -1054090377 };
					break;
				case 32:
					vVar0 = { -988076786, -987511169, 1117054480 };
					break;
				case 33:
					vVar0 = { -986980012, -985684165, 1091231216 };
					break;
				case 34:
					vVar0 = { -992270860, -987330904, 1115709253 };
					break;
				case 35:
					vVar0 = { -983672889, -985051443, 1083924499 };
					break;
				case 36:
					vVar0 = { -983475601, -987784573, -1049512630 };
					break;
				case 37:
					vVar0 = { -990385168, -987938009, 1115748625 };
					break;
				case 38:
					vVar0 = { -984378192, -988306231, 1063827278 };
					break;
				case 39:
					vVar0 = { -987822338, -988445508, 1115758365 };
					break;
				case 40:
					vVar0 = { -985473851, -989258174, 1116990401 };
					break;
				case 41:
					vVar0 = { -984882422, -985817227, 1033024863 };
					break;
				case 42:
					vVar0 = { -980250593, -986072867, -1046969482 };
					break;
				case 43:
					vVar0 = { -982181376, -986330305, -1048503842 };
					break;
				case 44:
					vVar0 = { -987089646, -985695543, 1086006701 };
					break;
				case 45:
					vVar0 = { -990092394, -987601633, 1116095769 };
					break;
				case 46:
					vVar0 = { -987026674, -989428765, 1117691717 };
					break;
				case 47:
					vVar0 = { -980299069, -985888690, -1048331053 };
					break;
				case 48:
					vVar0 = { -985669505, -986606395, 1100944900 };
					break;
				case 49:
					vVar0 = { -982598623, -987103019, -1048653899 };
					break;
				case 50:
					vVar0 = { 1157650833, -991558353, 1109576599 };
					break;
				case 51:
					vVar0 = { -983529263, -987228488, -1053954723 };
					break;
				case 52:
					vVar0 = { -984857563, -987275039, 1087123210 };
					break;
				case 53:
					vVar0 = { -987261600, -987667010, 1116317466 };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_WISTERIA"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -990256439, -999172034, 1120438950 };
					break;
				case 1:
					vVar0 = { -989829878, -989522768, 1112312240 };
					break;
				case 2:
					vVar0 = { -988541641, -991687860, 1121373664 };
					break;
				case 3:
					vVar0 = { 1160582259, 1157734519, 1126625391 };
					break;
				case 4:
					vVar0 = { 1158400319, 1154176180, 1118407169 };
					break;
				case 5:
					vVar0 = { -988563493, -1011460371, 1125069049 };
					break;
				case 6:
					vVar0 = { 1158530261, 1151288934, 1119616272 };
					break;
				case 7:
					vVar0 = { -990656479, -997929157, 1117172179 };
					break;
				case 8:
					vVar0 = { -988635324, -992384729, 1122339638 };
					break;
				case 9:
					vVar0 = { -989706977, -989686542, 1113747211 };
					break;
				case 10:
					vVar0 = { 1160018883, 1157029872, 1119920833 };
					break;
				case 11:
					vVar0 = { -988555436, -1006795984, 1125227253 };
					break;
				case 12:
					vVar0 = { -990494204, -997420958, 1117077707 };
					break;
				case 13:
					vVar0 = { -988270486, -993632879, 1125412353 };
					break;
				case 14:
					vVar0 = { -989546152, -989986226, 1114333858 };
					break;
				case 15:
					vVar0 = { -989465338, -1005774620, 1124716138 };
					break;
				case 16:
					vVar0 = { 1159993885, 1156020519, 1119089445 };
					break;
				case 17:
					vVar0 = { 1158970507, 1149610230, 1118313721 };
					break;
				case 18:
					vVar0 = { -987279581, -994972238, 1125370390 };
					break;
				case 19:
					vVar0 = { -992065389, -997468758, 1118054829 };
					break;
				case 20:
					vVar0 = { 1158551564, 1147557470, 1117552409 };
					break;
				case 21:
					vVar0 = { -989820813, -991017533, 1121820410 };
					break;
				case 22:
					vVar0 = { 1159588164, 1154993619, 1118756135 };
					break;
				case 23:
					vVar0 = { -989053489, -1002578194, 1124987929 };
					break;
				case 24:
					vVar0 = { -988037120 /* Float: -2492f */, -995279397, 1125413152 };
					break;
				case 25:
					vVar0 = { -989224825, -990226964, 1117157139 };
					break;
				case 26:
					vVar0 = { -989653471, -1001930134, 1118208383 };
					break;
				case 27:
					vVar0 = { 1159319712, 1145599581, 1116095752 };
					break;
				case 28:
					vVar0 = { 1159280845, 1154753511, 1119976513 };
					break;
				case 29:
					vVar0 = { 1161032688, 1158326260, 1125946157 };
					break;
				case 30:
					vVar0 = { -990058562, -1000870314, 1120484091 };
					break;
				case 31:
					vVar0 = { -987554386, -994454266, 1125194046 };
					break;
				case 32:
					vVar0 = { 1159247573, 1142869954, 1116365718 };
					break;
				case 33:
					vVar0 = { 1159187677, 1153752670, 1118567530 };
					break;
				case 34:
					vVar0 = { 1160502346, 1158136840, 1125896585 };
					break;
				case 35:
					vVar0 = { -988967002, -991166759, 1122872643 };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_412(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case 698668228:
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1158009946, -1001521824, 1109529723 /* Float: 40.52f */ };
					break;
				case 1:
					vVar0 = { 1160682242, -1003323900, 1109524480 /* Float: 40.5f */ };
					break;
				case 2:
					vVar0 = { 1158451429, -995100500, 1109524480 /* Float: 40.5f */ };
					break;
				case 3:
					vVar0 = { 1154191352, -997601968, 1109534179 };
					break;
				case 4:
					vVar0 = { 1140405830, 1141214904, 1121503543 };
					break;
				case 5:
					vVar0 = { 1156677919, -999212658, 1109386595 };
					break;
			}
			break;
		case 972001444:
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1159752360, -1003391795, 1109529723 /* Float: 40.52f */ };
					break;
				case 1:
					vVar0 = { 1154400616, -1003630712, 1109536662 };
					break;
				case 2:
					vVar0 = { 1160849396, -1022537492, 1109707551 };
					break;
				case 3:
					vVar0 = { 1160425619, -1009242128, 1109562923 };
					break;
				case 4:
					vVar0 = { 1158217810, -1009538154, 1109314775 };
					break;
				case 5:
					vVar0 = { 1159213371, -1012622197, 1109529733 };
					break;
			}
			break;
		case 1051711290:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -986451677, 1119996548, 1127676713 };
					break;
				case 1:
					vVar0 = { -994586362, 1133211874, 1119261572 };
					break;
				case 2:
					vVar0 = { -987285127, -1012442956, 1124925899 };
					break;
				case 3:
					vVar0 = { -999182690, -990628184, 1109524480 /* Float: 40.5f */ };
					break;
				case 4:
					vVar0 = { -987405558, -984915198, -1048345838 };
					break;
				case 5:
					vVar0 = { -1014432694, -1005351993, 1109524480 /* Float: 40.5f */ };
					break;
			}
			break;
		case -1574273736:
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1131501054, 1156857930, 1129043270 };
					break;
				case 1:
					vVar0 = { -1014707978, 1152444187, 1120806371 };
					break;
				case 2:
					vVar0 = { -1009556082, 1116942371, 1109524477 };
					break;
				case 3:
					vVar0 = { 1153837023, 1152592675, 1125164043 };
					break;
				case 4:
					vVar0 = { -988150252, 1145060573, 1124127801 };
					break;
				case 5:
					vVar0 = { -996799570, 1122011972, 1109524480 /* Float: 40.5f */ };
					break;
			}
			break;
		case -564862271:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -997737071, 1145970518, 1122503636 };
					break;
				case 1:
					vVar0 = { -995793994, 1151768445, 1128976862 };
					break;
				case 2:
					vVar0 = { 1131346179, 1153283432, 1122304013 };
					break;
				case 3:
					vVar0 = { -1002718429, 1142514975, 1113503564 };
					break;
				case 4:
					vVar0 = { 1141421425, 1155604595, 1124025369 };
					break;
				case 5:
					vVar0 = { -984133239, -985347330, -1053818880 /* Float: -11f */ };
					break;
			}
			break;
		case -1695562218:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -994026897, 1161385120, 1139275923 };
					break;
				case 1:
					vVar0 = { -989104927, -989796549, 1114010959 };
					break;
				case 2:
					vVar0 = { -991651914, 1158417506, 1134591646 };
					break;
				case 3:
					vVar0 = { -992457826, 1139385401, 1121550074 };
					break;
				case 4:
					vVar0 = { 1151630828, 1143295679, 1118568565 };
					break;
				case 5:
					vVar0 = { -1000972684, -999329509, 1109524496 };
					break;
			}
			break;
		case 866218183:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -989807239, -1001031991, 1118134862 };
					break;
				case 1:
					vVar0 = { -1004401464, -1014230368, 1109524477 };
					break;
				case 2:
					vVar0 = { -993331995, -988253594, 1109524480 /* Float: 40.5f */ };
					break;
				case 3:
					vVar0 = { -981865226, -982360830, -1043594215 };
					break;
				case 4:
					vVar0 = { 1158655312, 1147138400, 1116810728 };
					break;
				case 5:
					vVar0 = { -993308918, -986632602, -1051983872 };
					break;
			}
			break;
		case 1081670855:
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1161351143, 1135587623, 1109524480 /* Float: 40.5f */ };
					break;
				case 1:
					vVar0 = { 1160038277, 1156676469, 1118380074 };
					break;
				case 2:
					vVar0 = { 1137335481, -997812281, 1109524480 /* Float: 40.5f */ };
					break;
				case 3:
					vVar0 = { -1007896524, 1148820342, 1118654945 };
					break;
				case 4:
					vVar0 = { 1158391005, 1151950160, 1118313419 };
					break;
				case 5:
					vVar0 = { -994122138, -989300920, 1109524480 /* Float: 40.5f */ };
					break;
			}
			break;
		case -282219948:
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1142051263, -1004737688, 1109524480 /* Float: 40.5f */ };
					break;
				case 1:
					vVar0 = { 1141903503, -993316831, 1109524480 /* Float: 40.5f */ };
					break;
				case 2:
					vVar0 = { -991173829, -996982702, 1116875774 };
					break;
				case 3:
					vVar0 = { 1153383219, -989344391, 1109524480 /* Float: 40.5f */ };
					break;
				case 4:
					vVar0 = { 1160810611, 1158165332, 1125882266 /* Float: 155.6f */ };
					break;
				case 5:
					vVar0 = { 1158489747, 1134999074, 1110299074 };
					break;
			}
			break;
		case -413279196:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -991615656, -989077938, 1109524480 /* Float: 40.5f */ };
					break;
				case 1:
					vVar0 = { -993270678, 1154479809, 1131770439 };
					break;
				case 2:
					vVar0 = { -990327808, 1149578125, 1126661056 };
					break;
				case 3:
					vVar0 = { -987992396, -993936622, 1125069134 };
					break;
				case 4:
					vVar0 = { 1150130446, -1023261416, 1118392328 };
					break;
				case 5:
					vVar0 = { 1145510183, -996665123, 1109524480 /* Float: 40.5f */ };
					break;
			}
			break;
		case -925996336:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -986641908, 1149960593, 1132938337 };
					break;
				case 1:
					vVar0 = { -998476988, 1155421995, 1133639097 };
					break;
				case 2:
					vVar0 = { -997472092, 1149685031, 1126492825 };
					break;
				case 3:
					vVar0 = { -989814209, 1150157554, 1127770882 };
					break;
				case 4:
					vVar0 = { -996719763, 1149526974, 1126863261 };
					break;
				case 5:
					vVar0 = { -989334487, 1149628228, 1130042458 };
					break;
			}
			break;
		case -488648162:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -994847957, 1151935267, 1130499912 };
					break;
				case 1:
					vVar0 = { -997131420, 1150900412, 1130196913 };
					break;
				case 2:
					vVar0 = { -991929352, 1154774401, 1131241747 };
					break;
				case 3:
					vVar0 = { -987785220, 1151119925, 1131545448 };
					break;
				case 4:
					vVar0 = { -990192443, 1150386299, 1127181346 };
					break;
				case 5:
					vVar0 = { -990937571, 1150926258, 1127817131 };
					break;
			}
			break;
		case 1287909434:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -989774930, 1150869709, 1130608230 };
					break;
				case 1:
					vVar0 = { -994637930, 1153501209, 1132237069 };
					break;
				case 2:
					vVar0 = { -993459012, 1155156664, 1133229480 };
					break;
				case 3:
					vVar0 = { -1000504549, 1152010142, 1131647736 };
					break;
				case 4:
					vVar0 = { -997096063, 1152565223, 1134006308 };
					break;
				case 5:
					vVar0 = { -996747444, 1150254440, 1126757204 };
					break;
			}
			break;
		case -399160143:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -994451104, 1151097971, 1134346505 };
					break;
				case 1:
					vVar0 = { -1002541525, 1154187559, 1133273737 };
					break;
				case 2:
					vVar0 = { -994141782, 1154928959, 1131386241 };
					break;
				case 3:
					vVar0 = { -989600559, 1155881124, 1132340681 };
					break;
				case 4:
					vVar0 = { -999815361, 1153539039, 1131276062 };
					break;
				case 5:
					vVar0 = { -995097887, 1152670327, 1130486707 };
					break;
			}
			break;
		case 2031475177:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -993326924, 1155296936, 1133863295 };
					break;
				case 1:
					vVar0 = { -989315604, 1155627114, 1132840865 };
					break;
				case 2:
					vVar0 = { -1001637151, 1153075896, 1132588302 };
					break;
				case 3:
					vVar0 = { -993501143, 1156155621, 1134525576 };
					break;
				case 4:
					vVar0 = { -990401528, 1156286128, 1132705858 };
					break;
				case 5:
					vVar0 = { -997950677, 1157387624, 1136761995 };
					break;
			}
			break;
		case -1901964465:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -990601626, 1156231987, 1131886150 };
					break;
				case 1:
					vVar0 = { -998862786, 1158149861, 1135217544 };
					break;
				case 2:
					vVar0 = { -996868178, 1157807608, 1135477503 };
					break;
				case 3:
					vVar0 = { -994614125, 1157486789, 1135162497 };
					break;
				case 4:
					vVar0 = { -994710315, 1156125204, 1134104910 };
					break;
				case 5:
					vVar0 = { -991262671, 1158153884, 1134316500 };
					break;
			}
			break;
		case -1962391614:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -990397301, 1158205608, 1135009268 };
					break;
				case 1:
					vVar0 = { -995746005, 1158622519, 1134186430 };
					break;
				case 2:
					vVar0 = { -993612366, 1158280565, 1133494210 };
					break;
				case 3:
					vVar0 = { -992530702, 1159654240, 1139544084 };
					break;
				case 4:
					vVar0 = { -992192135, 1157475656, 1132712634 };
					break;
				case 5:
					vVar0 = { -994405368, 1158326641, 1133713097 };
					break;
			}
			break;
		case -669648037:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -992457761, 1158225310, 1133662542 };
					break;
				case 1:
					vVar0 = { -990185439, 1158542819, 1137264155 };
					break;
				case 2:
					vVar0 = { -994848129, 1159049228, 1134352633 };
					break;
				case 3:
					vVar0 = { -998410469, 1160023732, 1134296669 };
					break;
				case 4:
					vVar0 = { -997179277, 1158837789, 1134719916 };
					break;
				case 5:
					vVar0 = { -994295456, 1159295361, 1137772786 };
					break;
			}
			break;
		case 212472674:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -995616276, 1159657812, 1134383691 };
					break;
				case 1:
					vVar0 = { -997314216, 1159133979, 1134950341 };
					break;
				case 2:
					vVar0 = { -1009493344, 1160573329, 1135150688 };
					break;
				case 3:
					vVar0 = { -1006168923, 1159887421, 1135147981 };
					break;
				case 4:
					vVar0 = { -995046719, 1160430285, 1137563111 };
					break;
				case 5:
					vVar0 = { -1003122744, 1160217584, 1135453831 };
					break;
			}
			break;
		case -1471980896:
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1001147253, 1160143725, 1135445148 };
					break;
				case 1:
					vVar0 = { -998161596, 1161006678, 1136214023 };
					break;
				case 2:
					vVar0 = { -979551396, -981559947, -1041718313 };
					break;
				case 3:
					vVar0 = { -997908365, 1161282232, 1137380150 };
					break;
				case 4:
					vVar0 = { -1004310566, 1160249422, 1135327343 };
					break;
				case 5:
					vVar0 = { -994505122, 1161990640, 1140291912 };
					break;
			}
			break;
	}
	return vVar0;
}

bool func_413(bool bParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;

	if (func_5(bParam0, -1.640085E-16f))
	{
		return false;
	}
	iVar0 = func_87(bParam0, 0, 0, 0);
	if (!func_5(bParam0, -1.58908E+26f))
	{
		iVar1 = func_403(12);
		if (iVar1 < 5)
		{
			if (func_5(bParam0, 2.133228E-14f))
			{
				return false;
			}
		}
		if (iVar1 < 10)
		{
			if (func_5(bParam0, -4.561297E+28f))
			{
				return false;
			}
		}
	}
	if (iVar0 == 10)
	{
		return false;
	}
	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam1))
	{
		return false;
	}
	return true;
}

bool func_414(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (uParam0->f_11[iVar0] == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_415(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1 + 1;
	if (func_441(iVar0))
	{
		return false;
	}
	if (!func_251(*(uParam0[iVar0 /*3*/])))
	{
		return false;
	}
	return true;
}

int func_416(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_247(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_417(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_442(iParam0, iParam1, iParam2, iParam3);
}

int func_418(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_419(int iParam0, int iParam1)
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

void func_420(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_421(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_370(*iParam0);
	iVar1 = func_369(*iParam0);
	if (iParam1 < 1 || iParam1 > func_375(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_422(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_423(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_424(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_425(bool bParam0, int iParam1)
{
	return iParam1 == func_4(bParam0, 512441.5f);
}

int func_426(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3[15];

	bVar0 = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(iParam1, 0);
	if (!func_139(bVar0))
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

int func_427(int iParam0)
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

int func_428(bool bParam0, int iParam1)
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
	iVar5 = func_443(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_444(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -3.877593E+09f;
	Var0.f_3 = func_445(iVar5);
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

int func_429(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_446(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_417(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_417(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_430(int iParam0, bool bParam1, bool bParam2)
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

bool func_431(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_327(bParam0))
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
		func_447(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_432(bool bParam0)
{
	return func_169(bParam0) == 4.029065E+31f;
}

bool func_433(bool bParam0)
{
	return func_169(bParam0) == -1.955052E+34f;
}

bool func_434(int iParam0)
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

int func_435()
{
	if (func_3() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_436(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_5(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_437(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_22(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_269(0) };
	Var0.f_4 = func_448(iParam1);
	Var5 = { func_195(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_175(0), &Var5, false);
	return iVar9;
}

bool func_438(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 36)
	{
		return false;
	}
	return true;
}

int func_439(int iParam0)
{
	if (!func_438(iParam0))
	{
		return 0;
	}
	return Global_1292096.f_3024[iParam0];
}

int func_440(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_438(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		bVar0 = func_449(iParam0);
		if (func_22(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_450(255);
			}
			else
			{
				iVar1 = func_275(bVar0, func_269(1), -2.696814E-33f, 1, 0, 0);
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
		bVar0 = func_451(iParam0);
		if (func_22(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_275(bVar0, func_269(1), -2.696814E-33f, 1, 0, 0);
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

bool func_441(int iParam0)
{
	if (iParam0 > 2)
	{
		return true;
	}
	return false;
}

void func_442(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_452(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_443(int iParam0)
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

bool func_444(int iParam0, var uParam1)
{
	if (!func_453(iParam0))
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

int func_445(int iParam0)
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
	return func_454(iParam0);
}

int func_446(int iParam0)
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

void func_447(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_169((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

float func_448(int iParam0)
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

int func_449(int iParam0)
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

int func_450(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

int func_451(int iParam0)
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

void func_452(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_455(&(uParam0->f_4));
}

bool func_453(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 26);
}

int func_454(int iParam0)
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

void func_455(var uParam0)
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

