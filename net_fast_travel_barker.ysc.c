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
	var uLocal_28 = -1;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = -1;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = -1;
	var uLocal_46 = -1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&uLocal_24, iScriptParam_0);
	while (!func_2(&uLocal_24))
	{
		func_3(&uLocal_24);
		BUILTIN::WAIT(0);
	}
	func_4(&uLocal_24);
}

void func_1(var uParam0, int iParam1)
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_5(0, 0);
	func_6();
	func_7();
	Global_1072759.f_23824.f_3 = 0;
	Global_1072759.f_23824.f_2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		uParam0->f_3 = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();
	}
	else
	{
		uParam0->f_3 = iParam1;
	}
}

bool func_2(var uParam0)
{
	if (func_8(1, 1))
	{
		return true;
	}
	if (*uParam0 <= 0)
	{
		return false;
	}
	if (*uParam0 == 6)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return true;
		}
		else
		{
			if (uParam0->f_5)
			{
				if (Global_1072759.f_23824.f_2 && (Global_1072759.f_23824.f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD() || Global_1072759.f_23824.f_3 == 0))
				{
					return true;
				}
				if (func_9(uParam0->f_9, Global_34) > Global_1901671.f_601.f_1)
				{
					return true;
				}
			}
			if (uParam0->f_6)
			{
				if (!Global_1148170[Global_1295619 /*10*/].f_4)
				{
					Global_1072759.f_23824.f_3 = 0;
					Global_1072759.f_23824.f_2 = 0;
					return true;
				}
			}
			if (((!CAM::IS_SCREEN_FADING_OUT() && !uParam0->f_5) && !uParam0->f_6) && func_9(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), Global_34) > 1092616192)
			{
				func_10(uParam0, 1);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return true;
	}
	return false;
}

void func_3(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	switch (*uParam0)
	{
		case 0:
			func_11(uParam0);
			break;
		case 1:
			func_12(uParam0);
			break;
		case 2:
			func_13(uParam0);
			break;
		case 3:
			func_14(uParam0);
			break;
		case 4:
			func_15(uParam0);
			break;
		case 5:
			func_16(uParam0);
			break;
		case 6:
			break;
	}
	if (uParam0->f_26 > 0f)
	{
		uParam0->f_26 = (uParam0->f_26 - MISC::GET_FRAME_TIME());
	}
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (HUD::BUSYSPINNER_IS_ON())
	{
		func_17();
		func_18();
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_27))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_27);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_28))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(uParam0->f_28);
		VOLUME::DELETE_VOLUME(uParam0->f_28);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_29))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_29);
		VOLUME::DELETE_VOLUME(uParam0->f_29);
	}
	GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(uParam0->f_30), 1);
	if (!func_19(8))
	{
		func_20();
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		func_21(iVar1, 0);
	}
	func_22(uParam0);
	func_23();
}

void func_5(bool bParam0, int iParam1)
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

void func_6()
{
	Global_1913428 = 1;
}

void func_7()
{
	if (!Global_1072759.f_23824)
	{
		Global_1072759.f_23824 = 1;
	}
}

bool func_8(bool bParam0, bool bParam1)
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

float func_9(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_10(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_31 = MISC::GET_SYSTEM_TIME();
}

void func_11(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	uParam0->f_4 = func_24(uParam0->f_3);
	if (uParam0->f_4 == 15)
	{
		return;
	}
	uParam0->f_9 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false) };
	fVar0 = BUILTIN::VDIST(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, uParam0->f_9);
	uParam0->f_2 = 1;
	if (fVar0 > 5f)
	{
		if (Global_1148170[Global_1295619 /*10*/].f_4)
		{
			uParam0->f_7 = fVar0;
			uParam0->f_8 = BUILTIN::ROUND((fVar0 / 1148846080));
			uParam0->f_6 = 1;
			uParam0->f_2 = 1;
		}
		else if (DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "fast_travel_camp_barker"))
		{
			iVar1 = DECORATOR::DECOR_GET_INT(uParam0->f_3, "fast_travel_camp_barker");
			if (func_25(iVar1))
			{
				iVar2 = func_26(iVar1, 1);
				if (GANG::NETWORK_IS_GANG_ID_VALID(iVar2))
				{
					uParam0->f_12 = iVar2;
					uParam0->f_7 = fVar0;
					uParam0->f_5 = 1;
					uParam0->f_8 = BUILTIN::ROUND((fVar0 / 1148846080));
					uParam0->f_13 = iVar1;
				}
				else
				{
					uParam0->f_2 = 0;
				}
			}
			else
			{
				uParam0->f_2 = 0;
			}
		}
		else
		{
			uParam0->f_2 = 0;
		}
	}
	else
	{
		iVar1 = func_27(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		if (iVar1 >= 0)
		{
			uParam0->f_9 = { func_28(iVar1) };
			fVar0 = BUILTIN::VDIST(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, uParam0->f_9);
			iVar2 = func_26(iVar1, 1);
			if (GANG::NETWORK_IS_GANG_ID_VALID(iVar2))
			{
				uParam0->f_12 = iVar2;
				uParam0->f_7 = fVar0;
				uParam0->f_8 = BUILTIN::ROUND((fVar0 / 1148846080));
				uParam0->f_13 = iVar1;
			}
		}
	}
	uParam0->f_20 = func_29("NFT_MENU_OPEN", -1.068381E+13f, uParam0->f_3, 0, 0, 0, 1, 5, 1080033280 /* Float: 3.5f */, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0, 0);
	if (!func_30(uParam0->f_20))
	{
		return;
	}
	func_31(uParam0->f_20, 13, 1, 1);
	uParam0->f_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, 0f, 0f, 0f, 10.5f, 10.5f, 5.5f, "Fast Travel Ghosting Area");
	uParam0->f_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, 0f, 0f, 0f, 1f, 1f, 2f, "Fast Travel Navmesh Blocking Area");
	uParam0->f_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, 0f, 0f, 0f, 2f, 2f, 2f, "Fast Travel Ambient Avoidance Area");
	PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(uParam0->f_28, 7);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_29, 2238463, 0, 0, -1, -1, 0);
	uParam0->f_30 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, 1f, 1, 4, 0);
	uParam0->f_21 = -1;
	func_32(uParam0, 4);
	func_32(uParam0, 2);
	func_32(uParam0, 8);
	func_33(uParam0->f_20, 0, 1, 1);
	func_34(uParam0->f_20, 0, 1);
	func_20();
	func_35(uParam0, 0);
	func_10(uParam0, 1);
}

void func_12(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (Global_1072759.f_23824.f_2 && (Global_1072759.f_23824.f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD() || Global_1072759.f_23824.f_3 == 0))
	{
		if (!(Global_1148170[Global_1295619 /*10*/].f_4 && uParam0->f_5))
		{
			func_10(uParam0, 6);
			Global_1072759.f_23824.f_3 = 0;
			Global_1072759.f_23824.f_2 = 0;
			return;
		}
	}
	fVar0 = 0f;
	if (Global_1148170[Global_1295619 /*10*/].f_4)
	{
		fVar0 = func_9(Global_1148170[Global_1295619 /*10*/], func_36(PLAYER::PLAYER_ID()));
		if (fVar0 < 1092616192)
		{
			if (uParam0->f_5)
			{
				func_10(uParam0, 2);
				return;
			}
			if (!uParam0->f_6)
			{
				uParam0->f_6 = 1;
			}
		}
	}
	else if (uParam0->f_6)
	{
		uParam0->f_6 = 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (func_37(32768, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_27, ENTITY::GET_ENTITY_COORDS(iVar2, false, true)))
		{
			func_20();
		}
	}
	bVar3 = false;
	if (HUD::BUSYSPINNER_IS_ON())
	{
		func_18();
	}
	if (!uParam0->f_2)
	{
		bVar3 = func_35(uParam0, 3);
	}
	else if (Global_1148170[Global_1295619 /*10*/].f_4 && fVar0 < 1092616192)
	{
		bVar3 = func_35(uParam0, 2);
	}
	else if (((((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) || func_38()) || func_39()) || func_40()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar3 = func_35(uParam0, 15);
	}
	else if (ENTITY::IS_ENTITY_DEAD(iVar2) || PED::IS_PED_INCAPACITATED(iVar2))
	{
		bVar3 = func_35(uParam0, 8);
	}
	else if (PED::IS_PED_HOGTIED(iVar2))
	{
		bVar3 = func_35(uParam0, 9);
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(iVar2))
	{
		bVar3 = func_35(uParam0, 10);
	}
	else if (func_41(255))
	{
		bVar3 = func_35(uParam0, 11);
	}
	else if (func_42(iVar1, 1, 0, 1))
	{
		bVar3 = func_35(uParam0, 6);
	}
	else if (func_43())
	{
		bVar3 = func_35(uParam0, 4);
	}
	else if (func_44())
	{
		bVar3 = func_35(uParam0, 7);
	}
	else if (uParam0->f_5 && !GANG::_NETWORK_IS_GANG_MEMBER(uParam0->f_12, iVar1))
	{
		bVar3 = func_35(uParam0, 12);
	}
	else if (func_45())
	{
		bVar3 = func_35(uParam0, 5);
	}
	else if (func_46())
	{
		bVar3 = func_35(uParam0, 17);
	}
	else if (func_47())
	{
		bVar3 = func_35(uParam0, 18);
	}
	else if (func_48())
	{
		bVar3 = func_35(uParam0, 16);
	}
	else if (func_49(iVar1))
	{
		bVar3 = func_35(uParam0, 14);
	}
	else if (func_50(Global_33, 0))
	{
		bVar3 = func_35(uParam0, 19);
	}
	else
	{
		bVar3 = func_35(uParam0, 1);
	}
	switch (uParam0->f_19)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (func_9(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) <= 1080033280)
				{
					func_21(iVar2, 1);
				}
				else
				{
					func_21(iVar2, 0);
				}
			}
			if (bVar3)
			{
				func_51(uParam0);
				func_33(uParam0->f_20, 1, 1, 1);
				func_34(uParam0->f_20, 1, 1);
			}
			if (func_52(uParam0->f_20, 1) > 0f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
			}
			if (func_53(uParam0->f_20, 1))
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 0, 1);
				func_35(uParam0, 0);
				func_54(32);
				func_10(uParam0, 3);
			}
			break;
		case 2:
			if (bVar3)
			{
				func_51(uParam0);
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (func_9(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) <= 1080033280)
				{
					func_21(iVar2, 1);
				}
				else
				{
					func_21(iVar2, 0);
				}
			}
			if (Global_1148170[Global_1295619 /*10*/].f_8)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 0, 1);
				func_35(uParam0, 0);
				func_54(32);
				func_10(uParam0, 3);
			}
			break;
		case 15:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 0, 1);
			}
			break;
		case 14:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 0, 1);
			}
			break;
		case 4:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 1, 1);
			}
			if (func_55(uParam0->f_20, 1))
			{
				func_56(uParam0, "NFT_MISSION_RUNNING");
			}
			break;
		case 5:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 1, 1);
				func_57(uParam0->f_20, -2.877166E+07f);
			}
			if (func_55(uParam0->f_20, 1))
			{
				func_56(uParam0, "NFT_PASSENGER_HORSE_WARN");
			}
			break;
		case 18:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 1, 1);
				func_57(uParam0->f_20, -1.666356E+38f);
			}
			if (func_55(uParam0->f_20, 1))
			{
				func_56(uParam0, "NFT_PASSENGER_WAGON_WARN");
			}
			break;
		case 17:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 1, 1);
				func_57(uParam0->f_20, -1.666356E+38f);
			}
			if (func_55(uParam0->f_20, 1))
			{
				func_56(uParam0, "NFT_PASSENGER_WAGON_PASSENGER_WARN");
			}
			break;
		case 16:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 1, 1);
			}
			if (func_55(uParam0->f_20, 1))
			{
				func_56(uParam0, "NFT_HOGTIED_HORSE_WARN");
			}
			break;
		case 6:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 1, 1);
			}
			if (func_55(uParam0->f_20, 1))
			{
				func_56(uParam0, "NFT_WANTED");
			}
			break;
		case 7:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 0, 1);
			}
			break;
		case 8:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 0, 1);
			}
			break;
		case 10:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 0, 1);
			}
			break;
		case 9:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 0, 1);
			}
			break;
		case 11:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 0, 1);
			}
			break;
		case 19:
			if (bVar3)
			{
				func_33(uParam0->f_20, 0, 1, 1);
				func_34(uParam0->f_20, 1, 1);
			}
			if (func_55(uParam0->f_20, 1))
			{
				func_56(uParam0, "NFT_COMBAT");
			}
			break;
	}
}

void func_13(var uParam0)
{
	if (!Global_1148170[Global_1295619 /*10*/].f_4 || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1148170[Global_1295619 /*10*/], func_36(PLAYER::PLAYER_ID()), true) > 1092616192)
	{
		func_10(uParam0, 1);
	}
}

void func_14(var uParam0)
{
	if (!UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH(3.759754E+27f))
	{
		return;
	}
	else
	{
		if (!func_58(1, 1))
		{
			return;
		}
		if (UIAPPS::LAUNCH_UIAPP_BY_HASH(3.759754E+27f) == 0)
		{
		}
		else
		{
			return;
		}
	}
	func_59();
	func_32(uParam0, 2);
	func_32(uParam0, 4);
	func_60(uParam0, -252412.4f);
	func_10(uParam0, 4);
}

void func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	var uVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		func_61(uParam0, 2);
	}
	if (Global_1072759.f_23824.f_2 && (Global_1072759.f_23824.f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD() || Global_1072759.f_23824.f_3 == 0))
	{
		func_61(uParam0, 2);
	}
	if (Global_1148170[Global_1295619 /*10*/].f_4 && uParam0->f_5)
	{
		if (func_9(Global_1148170[Global_1295619 /*10*/], func_36(PLAYER::PLAYER_ID())) < 1092616192)
		{
			func_10(uParam0, 2);
			return;
		}
	}
	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, true);
	if (uParam0->f_5 && !uParam0->f_6)
	{
		if (func_9(uParam0->f_9, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) > (1080033280 + 2f))
		{
			func_61(uParam0, 2);
		}
	}
	else if (uParam0->f_6)
	{
		if (!Global_1148170[Global_1295619 /*10*/].f_4)
		{
			func_61(uParam0, 2);
		}
	}
	else
	{
		iVar2 = func_27(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		if (iVar2 >= 0 && iVar2 != uParam0->f_13)
		{
			uParam0->f_9 = { func_28(iVar2) };
			fVar3 = BUILTIN::VDIST(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, uParam0->f_9);
			iVar4 = func_26(iVar2, 1);
			if (GANG::NETWORK_IS_GANG_ID_VALID(iVar4))
			{
				uParam0->f_12 = iVar4;
				uParam0->f_7 = fVar3;
				uParam0->f_8 = BUILTIN::ROUND((fVar3 / 1148846080));
				uParam0->f_13 = iVar2;
			}
		}
		if (func_9(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) > (1080033280 + 2f) && !uParam0->f_6)
		{
			func_61(uParam0, 2);
		}
	}
	iVar5 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		if (!PED::_IS_MOUNT_SEAT_FREE(iVar5, 0))
		{
			func_61(uParam0, 2);
		}
	}
	if (func_49(iVar0))
	{
		func_61(uParam0, 2);
	}
	if (!func_62(uParam0, 2))
	{
		func_63(uParam0, &(uParam0->f_21));
		if (uParam0->f_21 == -1)
		{
			return;
		}
		if (func_62(uParam0, 8))
		{
			bVar8 = func_65(func_64(uParam0), &uVar7);
			bVar8 = (bVar8 || func_66(func_64(uParam0), &uVar7));
			if (uParam0->f_21 < 14)
			{
				if (bVar8)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					sVar6 = HUD::GET_STRING_FROM_HASH_KEY(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[uParam0->f_21 /*19*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(10, "NFT_FOOTER", sVar6));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_2, MISC::VAR_STRING(2, func_67(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[uParam0->f_21 /*19*/])));
			}
			else if (uParam0->f_21 == 14)
			{
				if (uParam0->f_5)
				{
					if (bVar8)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						sVar6 = MISC::VAR_STRING(0, Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/]);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(10, "NFT_FOOTER", sVar6));
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_2, MISC::VAR_STRING(2, func_67(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/])));
				}
				else
				{
					if (!func_27(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) >= 0)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_NO_CAMP_FOOTER"));
					}
					else if (bVar8)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						sVar6 = MISC::VAR_STRING(2, "NFT_LOCATION_TYPE_CAMP_DESC");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(10, "NFT_FOOTER", sVar6));
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_2, MISC::VAR_STRING(2, "NFT_CAMP_DESC"));
				}
			}
			else if (uParam0->f_21 == 15)
			{
				iVar9 = func_68();
				if (!func_69(iVar9, 1))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_NO_MOONSHINE_FOOTER"));
				}
				else if (bVar8)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					sVar6 = MISC::VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(10, "NFT_FOOTER", sVar6));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_2, MISC::VAR_STRING(2, "NFT_MOONSHINE_DESC"));
			}
			if (uParam0->f_21 < 14)
			{
				bVar10 = func_64(uParam0);
				if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_70(bVar10, 8.497754E-37f, 1, 0, 1, 0), 0))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", MISC::VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", "");
				}
			}
			else if (uParam0->f_21 == 14)
			{
				if (uParam0->f_5)
				{
					bVar10 = func_71(0, uParam0);
					if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_70(bVar10, 8.497754E-37f, 1, 0, 1, 0), 0))
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", MISC::VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", "");
					}
				}
				else
				{
					bVar10 = func_71(0, uParam0);
					if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_70(bVar10, 8.497754E-37f, 1, 0, 1, 0), 0))
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", MISC::VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", "");
					}
				}
			}
			else if (uParam0->f_21 == 15)
			{
				bVar10 = func_71(0, uParam0);
				if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_70(bVar10, 8.497754E-37f, 1, 0, 1, 0), 0))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", MISC::VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", "");
				}
			}
			func_32(uParam0, 8);
		}
		if (func_62(uParam0, 4))
		{
			bVar11 = func_64(uParam0);
			switch (func_72(uParam0->f_21, bVar11))
			{
				case 0:
					if (func_65(bVar11, &iVar12))
					{
						uParam0->f_22 = func_73(bVar11, 0, 1, 1, 1, iVar12);
					}
					else if (func_66(bVar11, &iVar12))
					{
						uParam0->f_22 = func_73(bVar11, 0, 1, 1, 1, iVar12);
					}
					else
					{
						uParam0->f_22 = func_73(bVar11, 0, 1, 1, 1, 8.497754E-37f);
					}
					func_76(uParam0, bVar11, iVar12, func_75(func_74(bVar11, iVar12, 0)));
					func_32(uParam0, 4);
					func_61(uParam0, 2);
					func_22(uParam0);
					func_77(1);
					func_78(0, 72);
					func_10(uParam0, 5);
					if (uParam0->f_6)
					{
						Global_1148170[Global_1295619 /*10*/].f_8 = 0;
						Global_1148170[Global_1295619 /*10*/].f_9 = 1;
					}
					return;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					func_56(uParam0, "NFT_CANT_AFFORD");
					func_32(uParam0, 4);
					func_61(uParam0, 2);
					func_22(uParam0);
					func_10(uParam0, 1);
					if (uParam0->f_6)
					{
						Global_1148170[Global_1295619 /*10*/].f_8 = 0;
					}
					break;
				case 5:
					func_56(uParam0, "NFT_NO_CAMP");
					func_32(uParam0, 4);
					func_61(uParam0, 2);
					func_22(uParam0);
					func_10(uParam0, 1);
					if (uParam0->f_6)
					{
						Global_1148170[Global_1295619 /*10*/].f_8 = 0;
					}
					break;
				case 6:
					func_56(uParam0, "NFT_NO_MOONSHINE");
					func_32(uParam0, 4);
					func_61(uParam0, 2);
					func_22(uParam0);
					func_10(uParam0, 1);
					if (uParam0->f_6)
					{
						Global_1148170[Global_1295619 /*10*/].f_8 = 0;
					}
					break;
				case 7:
					func_56(uParam0, "NFT_POSSE_DISBAND");
					func_32(uParam0, 4);
					func_61(uParam0, 2);
					func_22(uParam0);
					func_10(uParam0, 1);
					if (uParam0->f_6)
					{
						Global_1148170[Global_1295619 /*10*/].f_8 = 0;
					}
					break;
			}
		}
	}
	if (func_62(uParam0, 2))
	{
		func_21(iVar1, 0);
		func_79(32);
		func_22(uParam0);
		func_20();
		func_10(uParam0, 1);
		Global_1148170[Global_1295619 /*10*/].f_8 = 0;
	}
}

void func_16(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = func_68();
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 1731288223:
				iVar2 = func_80(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
	if (iVar2 != 2 && iVar2 != 3)
	{
		iVar2 = func_81(uParam0->f_22);
	}
	switch (iVar2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_56(uParam0, "NFT_TRANSACTION_FAILED");
			func_10(uParam0, 1);
			func_78(1, 2);
			break;
		case 3:
			func_82(uParam0);
			if (uParam0->f_21 < 14)
			{
				if ((MISC::GET_SYSTEM_TIME() - uParam0->f_31) >= 1000)
				{
					if (!func_83(0, Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[uParam0->f_21 /*19*/], 1))
					{
						func_10(uParam0, 1);
					}
					else
					{
						func_10(uParam0, 6);
					}
				}
			}
			else if (uParam0->f_21 == 14)
			{
				if (uParam0->f_5)
				{
					if (!func_83(0, Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/], 1))
					{
						func_10(uParam0, 1);
					}
					else
					{
						func_10(uParam0, 6);
					}
				}
				else if (!func_83(1, 0, 0))
				{
					func_10(uParam0, 1);
				}
				else
				{
					func_10(uParam0, 6);
				}
			}
			else if (uParam0->f_21 == 15)
			{
				if (func_69(iVar3, 1))
				{
					if (!func_83(2, 0, 0))
					{
						func_10(uParam0, 1);
					}
					else
					{
						func_10(uParam0, 6);
					}
				}
			}
			func_32(uParam0, 4);
			break;
		case 4:
			func_56(uParam0, "NFT_TRANSACTION_FAILED");
			func_10(uParam0, 1);
			break;
		case 5:
			break;
	}
}

bool func_17()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = func_84();
	bVar1 = func_85();
	bVar2 = (!CAM::IS_SCREEN_FADED_OUT() && !Global_1048581);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
		case 5:
			if (bVar1)
			{
				if (func_86() <= 3)
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
					{
						func_78(0, 124);
					}
					else
					{
						func_78(0, 104);
					}
				}
				else if (func_87(2))
				{
					func_78(0, 112);
				}
				else
				{
					func_78(0, 124);
				}
			}
			else if (bVar2)
			{
				func_78(1, 2);
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_78(0, 12);
			}
			else
			{
				func_78(0, 8);
			}
			break;
		case 2:
		case 3:
			if (bVar1)
			{
				func_78(0, 72);
			}
			else if (bVar2)
			{
				func_78(0, 72);
			}
			else
			{
				func_78(0, 8);
			}
			break;
		case 4:
			if (Global_1102813 != 22)
			{
				if (bVar1)
				{
					bVar3 = Global_1102813 <= 10;
					if (bVar2)
					{
						if (bVar3)
						{
							func_78(0, 104);
						}
						else
						{
							func_78(0, 124);
						}
					}
					else if (bVar3)
					{
						func_78(0, 40);
					}
					else
					{
						func_78(0, 60);
					}
				}
				else
				{
					bVar3 = Global_1102813.f_3904;
					if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						bVar3 = true;
					}
					if ((Global_1102813.f_4[Global_1106895[2 /*2*/]] && Global_1106895[2 /*2*/].f_1) == Global_1106895[2 /*2*/].f_1)
					{
						bVar3 = false;
					}
					if ((((Global_1102813.f_4[Global_1106895[74 /*2*/]] && Global_1106895[74 /*2*/].f_1) == Global_1106895[74 /*2*/].f_1 || (Global_1102813.f_4[Global_1106895[75 /*2*/]] && Global_1106895[75 /*2*/].f_1) == Global_1106895[75 /*2*/].f_1) || (Global_1102813.f_4[Global_1106895[69 /*2*/]] && Global_1106895[69 /*2*/].f_1) == Global_1106895[69 /*2*/].f_1) || (Global_1102813.f_4[Global_1106895[70 /*2*/]] && Global_1106895[70 /*2*/].f_1) == Global_1106895[70 /*2*/].f_1)
					{
						if (Global_1102813 > 10)
						{
							bVar3 = false;
						}
					}
					if (bVar2)
					{
						func_88(bVar3, 1, 0, bVar3, 1, 0, 0);
					}
					else
					{
						func_88(bVar3, 1, 0, bVar3, 0, 0, 0);
					}
				}
			}
			else if (bVar1)
			{
				if (bVar2)
				{
					func_78(0, 124);
				}
				else
				{
					func_78(0, 60);
				}
			}
			else if (!(Global_1102813.f_4[Global_1106895[25 /*2*/]] && Global_1106895[25 /*2*/].f_1) == Global_1106895[25 /*2*/].f_1)
			{
				if ((Global_1102813.f_4[Global_1106895[63 /*2*/]] && Global_1106895[63 /*2*/].f_1) == Global_1106895[63 /*2*/].f_1 || (Global_1102813.f_4[Global_1106895[64 /*2*/]] && Global_1106895[64 /*2*/].f_1) == Global_1106895[64 /*2*/].f_1)
				{
					func_78(1, 256);
				}
				else
				{
					func_78(1, 2);
				}
			}
			else
			{
				func_78(0, 8);
			}
			func_89();
			break;
	}
	return ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID());
}

void func_18()
{
	Global_1940072.f_105 = -1;
	Global_1940072.f_105.f_1 = 0;
}

bool func_19(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

void func_20()
{
	func_90(0, 4, 0);
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		func_91(32768);
	}
}

void func_21(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_92(64))
		{
			PED::SET_PED_RESET_FLAG(iParam0, 187, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 129, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 219, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 220, bParam1);
			func_54(64);
		}
	}
	else if (func_92(64))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 187, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 129, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 219, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 220, bParam1);
		func_79(64);
	}
}

void func_22(var uParam0)
{
	func_93();
	func_32(uParam0, 2);
	func_32(uParam0, 4);
}

void func_23()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_24(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar3 = 0;
	fVar4 = 1482907561;
	fVar5 = fVar4;
	iVar6 = -1;
	iVar3 = 0;
	while (iVar3 <= 14)
	{
		fVar4 = BUILTIN::VDIST(vVar0, Global_1072759.f_23824.f_383[iVar3 /*272*/].f_2);
		if (fVar4 < fVar5)
		{
			fVar5 = fVar4;
			iVar6 = iVar3;
		}
		iVar3++;
	}
	return iVar6;
}

bool func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_26(int iParam0, bool bParam1)
{
	if (!func_25(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141317[iParam0 /*27*/].f_9))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	return GANG::NETWORK_GET_GANG_ID(Global_1141317[iParam0 /*27*/].f_9);
}

int func_27(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		return func_94(PLAYER::PLAYER_ID());
	}
	return func_95(GANG::NETWORK_GET_GANG_LEADER(iParam0));
}

Vector3 func_28(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

int func_29(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_96(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1951897[iVar0 /*23*/].f_11 && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1951897[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_97(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1f, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_30(int iParam0)
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

void func_31(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_30(iParam0))
	{
		return;
	}
	iVar0 = func_98(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

void func_32(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_33(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_30(iParam0))
	{
		return;
	}
	iVar0 = func_98(iParam0);
	if (bParam1)
	{
		func_99(iParam0, 4);
		if (bParam3)
		{
			func_100(iVar0, 1);
		}
		func_101(iVar0, 1);
	}
	else
	{
		func_102(iParam0, 4);
		func_101(iVar0, 0);
	}
}

void func_34(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_30(iParam0))
	{
		return;
	}
	iVar0 = func_98(iParam0);
	func_100(iVar0, bParam1);
}

int func_35(var uParam0, int iParam1)
{
	if (uParam0->f_19 != iParam1)
	{
		uParam0->f_19 = iParam1;
		return 1;
	}
	return 0;
}

Vector3 func_36(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_37(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

bool func_38()
{
	return Global_1072759.f_28644.f_66.f_42 != 0;
}

bool func_39()
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

bool func_40()
{
	return Global_1072759.f_28644.f_59.f_6 == 2;
}

bool func_41(int iParam0)
{
	return func_103(1, iParam0);
}

bool func_42(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_104(bParam1, bParam2, bParam3);
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

bool func_43()
{
	if (Global_1108965.f_775.f_23 && func_105())
	{
		return true;
	}
	if (func_107(func_106(0)))
	{
		if (func_105() && !func_108())
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_44()
{
	return (Global_1940239.f_2 || Global_1940239 == 1);
}

bool func_45()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && !func_109(iVar1))
	{
		return false;
	}
	iVar0 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!func_110(iVar0))
	{
		return false;
	}
	if (!AITRANSPORT::_IS_TRANSPORT_SEAT_OCCUPIED(iVar0, -2))
	{
		return false;
	}
	return true;
}

bool func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		return false;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar1))
	{
		return false;
	}
	iVar0 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return false;
	}
	iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, iVar4) == iVar1)
		{
			iVar5 = 1;
		}
		iVar3++;
	}
	return iVar5;
}

bool func_47()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && !func_109(iVar1))
	{
		return false;
	}
	iVar0 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return false;
	}
	if (!AITRANSPORT::_IS_TRANSPORT_SEAT_OCCUPIED(iVar0, -2))
	{
		return false;
	}
	return true;
}

bool func_48()
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1295619.f_3))
	{
		return false;
	}
	if (!PED::IS_PED_A_PLAYER(Global_1295619.f_3))
	{
		return false;
	}
	iVar0 = func_111(Global_1295619.f_3);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!PED::IS_PED_A_PLAYER(iVar0))
	{
		return false;
	}
	return true;
}

bool func_49(int iParam0)
{
	int iVar0;
	int iVar1;

	if (PLAYER::IS_PLAYER_DEAD(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_INCAPACITATED(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return true;
	}
	if (func_112())
	{
		return true;
	}
	if (func_113(func_106(0)) == 7)
	{
		return true;
	}
	if (func_114())
	{
		return true;
	}
	if (func_41(255))
	{
		return true;
	}
	if (!func_115(0, 0, 0, 1, 0, 0, 0, 1, 1))
	{
		return true;
	}
	if (func_116())
	{
		return true;
	}
	if (func_117())
	{
		return true;
	}
	if (func_118())
	{
		return true;
	}
	if (Global_1901671.f_698.f_33)
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (!func_119(Global_1903834.f_113[iVar1 /*96*/].f_1, 0))
				{
				}
				else
				{
					func_120(68, 0);
					return true;
				}
				iVar1++;
			}
		}
	}
	return false;
}

bool func_50(int iParam0, int iParam1)
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

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	var uVar6;

	iVar5 = 0;
	iVar1 = func_70(-8.176591E-06f, 8.497754E-37f, 0, 0, 1, 0);
	if (func_65(-8.176591E-06f, &iVar0))
	{
		iVar3 = func_70(-8.176591E-06f, iVar0, 1, 0, 1, 0);
	}
	else if (func_66(-8.176591E-06f, &iVar0))
	{
		iVar3 = func_70(-8.176591E-06f, iVar0, 1, 0, 1, 0);
	}
	else
	{
		iVar3 = func_70(-8.176591E-06f, 8.497754E-37f, 1, 0, 1, 0);
	}
	if (iVar1 != iVar3)
	{
		fVar2 = BUILTIN::TO_FLOAT(iVar1);
		fVar4 = BUILTIN::TO_FLOAT(iVar3);
		iVar5 = BUILTIN::FLOOR((((fVar2 - fVar4) / fVar2) * 1120403456));
		MISC::_INT_TO_STRING(iVar5, "%i", &uVar6);
		func_56(uParam0, MISC::VAR_STRING(10, "NFT_DISCOUNTED", &uVar6));
	}
}

float func_52(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_30(iParam0))
	{
		return 0f;
	}
	iVar0 = func_98(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_30(iParam0))
	{
		return false;
	}
	iVar0 = func_98(iParam0);
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

void func_54(int iParam0)
{
	func_121(&(Global_1072759.f_23824.f_5), iParam0);
}

bool func_55(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_30(iParam0))
	{
		return false;
	}
	iVar0 = func_98(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

void func_56(var uParam0, char* sParam1)
{
	if (uParam0->f_26 > 0f)
	{
		return;
	}
	func_122(sParam1, 10000, 0, 0, 0, 1);
	uParam0->f_26 = 1101004800; /* Float: 20f */
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_30(iParam0))
	{
		return;
	}
	iVar0 = func_98(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

bool func_58(bool bParam0, int iParam1)
{
	if (!func_123(PLAYER::PLAYER_ID(), bParam0, iParam1))
	{
		func_124(1, 1);
		return false;
	}
	else if (!func_125(PLAYER::PLAYER_ID(), bParam0, iParam1))
	{
		return false;
	}
	return true;
}

void func_59()
{
	func_126(0, 4);
	func_127(32768);
}

int func_60(var uParam0, int iParam1)
{
	Global_1072759.f_23824.f_4 = iParam1;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_3, MISC::VAR_STRING(2, func_128(iParam1)));
	func_129(uParam0);
	return 1;
}

void func_61(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_62(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_63(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar4;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(3.759754E+27f))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(3.759754E+27f, &Var0))
		{
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var0.f_3, "locationArrayIndex");
			switch (Var0)
			{
				case -1203660660:
					switch (Var0.f_2)
					{
						case -997855324:
							func_61(uParam0, 2);
							break;
						case 42753526:
							func_61(uParam0, 4);
							*uParam1 = iVar4;
							break;
					}
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case 42753526:
							func_61(uParam0, 8);
							*uParam1 = iVar4;
							break;
					}
					break;
				case 703281244:
					switch (Var0.f_2)
					{
						case -1517694752:
							func_130(uParam0, 1);
							break;
					}
					break;
				case -722926211:
					switch (Var0.f_2)
					{
						case -1517694752:
							func_130(uParam0, 0);
							break;
					}
					break;
			}
			UIEVENTS::EVENTS_UI_POP_MESSAGE(3.759754E+27f);
		}
	}
}

bool func_64(var uParam0)
{
	int iVar0;

	if (uParam0->f_21 < 14)
	{
		iVar0 = Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[uParam0->f_21 /*19*/].f_17;
	}
	else if (uParam0->f_21 == 14)
	{
		if (uParam0->f_5)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (uParam0->f_21 == 15)
	{
		iVar0 = func_131(uParam0);
	}
	return func_71(iVar0, uParam0);
}

bool func_65(bool bParam0, int iParam1)
{
	*iParam1 = func_132(bParam0, 1);
	return *iParam1 != 0;
}

bool func_66(bool bParam0, int iParam1)
{
	*iParam1 = func_133(bParam0, 1, 0);
	return *iParam1 != 0;
}

char* func_67(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("STATION_BLACKWATER"):
			return "NFT_BLACKWATER_DESC";
		case joaat("STATION_MANZANITA"):
			return "NFT_MANZANITA_DESC";
		case joaat("STATION_STRAWBERRY"):
			return "NFT_STRAWBERRY_DESC";
		case joaat("STATION_COLTER"):
			return "NFT_COLTER_DESC";
		case joaat("STATION_WAPITI"):
			return "NFT_WAPITI_DESC";
		case joaat("STATION_VALENTINE"):
			return "NFT_VALENTINE_DESC";
		case joaat("STATION_VAN_HORN"):
			return "NFT_VAN_HORN_DESC";
		case joaat("STATION_ANNESBERG"):
			return "NFT_ANNESBERG_DESC";
		case joaat("STATION_EMERALD"):
			return "NFT_EMERALD_DESC";
		case joaat("STATION_RHODES"):
			return "NFT_RHODES_DESC";
		case joaat("STATION_LAGRAS"):
			return "NFT_LAGRAS_DESC";
		case joaat("STATION_TUMBLEWEED"):
			return "NFT_TUMBLEWEED_DESC";
		case joaat("STATION_MACFARLANES"):
			return "NFT_MACFARLANES_DESC";
		case joaat("STATION_ARMADILLO"):
			return "NFT_ARMADILLO_DESC";
		case joaat("STATION_SAINT_DENIS"):
			return "NFT_SAINT_DENIS_DESC";
	}
	return "";
}

var func_68()
{
	return Global_1297182.f_200;
}

bool func_69(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (!func_134(Global_1297553[iVar0 /*87*/]))
	{
		return false;
	}
	if (Global_1297553[iVar0 /*87*/].f_5.f_12 == -1)
	{
		return false;
	}
	return true;
}

int func_70(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -982726.7f) && func_135(bParam0, 8.497754E-37f))
	{
		iParam1 = 8.497754E-37f;
	}
	if (func_136(bParam0) || func_137(bParam0, 2.791187f))
	{
		return func_139(func_138(bParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_140(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_71(int iParam0, var uParam1)
{
	if ((uParam1->f_5 || (uParam1->f_8 != 0 && iParam0 == 0)) || uParam1->f_6)
	{
		iParam0 = (iParam0 + uParam1->f_8);
	}
	switch (iParam0)
	{
		case 1:
			return -8.176591E-06f;
		case 2:
			return -3.611107E-17f;
		case 3:
			return -7.995734E-28f;
		case 4:
			return 6.654629E-28f;
		case 5:
			return 5849296;
		case 6:
			return -3.290276E+27f;
		case 7:
			return -1.322755E+17f;
		case 8:
			return 1.422441E-22f;
		case 9:
			return 2.892796E-33f;
		case 10:
			return -6.969736E-15f;
		case 11:
			return -1.969685E-08f;
		case 12:
			return 6.34116E+07f;
		case 13:
			return 1.270705E-21f;
		case 14:
			return 2.965858E+28f;
		case 15:
			return 18.35139f;
		case 16:
			return 18.35139f;
		default:
			break;
	}
	if (iParam0 <= 0)
	{
		return -8.176591E-06f;
	}
	return 18.35139f;
}

int func_72(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_119(bParam1, 0))
	{
		return 1;
	}
	if (func_141(bParam1) != 4.158586E+11f)
	{
		return 2;
	}
	if (!func_65(bParam1, &uVar0))
	{
		iVar1 = func_70(bParam1, 8.497754E-37f, 1, 0, 1, 0);
		if (iVar1 < 0 || !func_135(bParam1, 8.497754E-37f))
		{
			return 3;
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar1, 0) && iVar1 != 0)
		{
			return 4;
		}
	}
	if (iParam0 == 14)
	{
		if (!func_27(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) >= 0)
		{
			return 5;
		}
	}
	if (iParam0 == 15)
	{
		iVar2 = func_68();
		if (!func_69(iVar2, 1))
		{
			return 6;
		}
	}
	return 0;
}

int func_73(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar53;
	struct<17> Var54;

	if (!func_119(bParam0, 0))
	{
		return -1;
	}
	if (func_142(bParam0) != 5.407193E-38f)
	{
		return -1;
	}
	if (func_143())
	{
		bParam3 = true;
	}
	if (iParam5 == -2.401104E+18f || iParam5 == -982726.7f)
	{
		iVar0 = (func_70(bParam0, iParam5, 1, 0, 1, 3.996812E+36f) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_70(bParam0, iParam5, 1, 0, 1, 3.414007E-11f) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_140(bParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_144(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_145(0))
	{
		if (iVar0 > 0)
		{
			func_146(3.996812E+36f, iVar0, -5.149929E+33f, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_146(3.414007E-11f, iVar1, -5.149929E+33f, 0, 0);
		}
		else if (func_147(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_146(Var2[iVar35 /*2*/], iVar34, -5.149929E+33f, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -5.45926E-19f;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -5.149929E+33f;
	iVar53 = func_148(-2.328868E-12f, &Var36, bParam4);
	if (iVar53 == -1)
	{
	}
	else
	{
		Var54.f_7 = -5.149929E+33f;
		Var54.f_16 = -1;
		StringCopy(&(Var54.f_12), sParam1, 32);
		func_149(iVar53, Var54);
	}
	return iVar53;
}

bool func_74(bool bParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_140(bParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return false;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_150(Var0[iVar32 /*2*/]))
		{
			return Var0[iVar32 /*2*/];
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
	return false;
}

int func_75(bool bParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	iVar0 = -1;
	if (!func_150(bParam0))
	{
		return iVar0;
	}
	iVar0 = 2.799884E-36f;
	Var1 = { func_151(bParam0, 0, 0) };
	Var6 = { func_152(bParam0, Var1, Var1.f_4, 0) };
	if (!func_153(&Var6))
	{
		return -1;
	}
	if (func_154(Var6))
	{
		iVar0 = 1.074468E-35f;
	}
	return iVar0;
}

void func_76(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	uParam0->f_24 = iParam2;
	uParam0->f_23 = bParam1;
	uParam0->f_25 = iParam3;
}

void func_77(int iParam0)
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

void func_78(bool bParam0, int iParam1)
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
		func_155(iParam1);
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
	func_88(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_79(int iParam0)
{
	func_156(&(Global_1072759.f_23824.f_5), iParam0);
}

int func_80(int iParam0, var uParam1)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	struct<10> Var8;
	int iVar22;

	iVar6 = SCRIPTS::GET_EVENT_AT_INDEX(1, iParam0);
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		return 1;
	}
	Var8.f_9 = -5.45926E-19f;
	iVar22 = Var0.f_5;
	if (iVar6 != 8.375674E+23f)
	{
		return 1;
	}
	if (Var0 != uParam1->f_22)
	{
		return 1;
	}
	if (Var0.f_2 == 1)
	{
		return 2;
	}
	iVar7 = 0;
	while (iVar7 < Var0.f_4)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_RESPONSE_GET_ITEM_INFO(Var0, iVar7, &Var8))
		{
			if (!func_119(Var8.f_8, 0))
			{
			}
			else
			{
				if (iVar22 == 7.184882E+22f)
				{
					return 3;
				}
			}
		}
		iVar7++;
	}
	return 1;
}

int func_81(int iParam0)
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

void func_82(var uParam0)
{
	var uVar0;
	bool bVar4;

	if (!func_157(uParam0))
	{
		return;
	}
	if (!func_158(uParam0->f_22, &uVar0))
	{
		func_159(uParam0);
		return;
	}
	bVar4 = func_74(uParam0->f_23, uParam0->f_24, 0);
	TELEMETRY::_TELEMETRY_COUPON(&uVar0, func_160(bVar4), bVar4, uParam0->f_25, uParam0->f_23, -6.120447E+16f);
	func_159(uParam0);
}

bool func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	int iVar11;
	bool bVar12;
	int iVar13;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (func_112())
	{
		if (bParam2)
		{
		}
		else
		{
			return false;
		}
	}
	if (func_161(256))
	{
		func_162(512);
	}
	switch (iParam0)
	{
		case 0:
			iVar11 = func_163(iParam1);
			if (iVar11 < 0)
			{
				return false;
			}
			func_164();
			func_165();
			bVar12 = true;
			if (func_166(0) && func_167(0))
			{
				bVar12 = false;
			}
			if (bVar12)
			{
				if (func_168(iVar1))
				{
					func_169(0, 1, 1);
				}
				else if (func_170(iVar0))
				{
					func_169(0, 1, 1);
				}
				else if (func_171())
				{
					func_172();
				}
				else if (func_109(iVar1))
				{
					func_173(1, 1);
				}
				else
				{
					iVar13 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar13))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar13, false, false)) < 1097859072)
						{
							func_174(1, 1);
						}
					}
				}
			}
			func_175(Global_1072759.f_23824.f_383[iVar11 /*272*/]);
			func_176(0, 0.02012728f);
			func_177();
			if (func_178())
			{
				iVar2 = 0.000112171f;
			}
			else
			{
				iVar2 = func_180(func_179(), 0);
			}
			if (iVar2 == 0)
			{
				iVar2 = 7.087189E+24f;
			}
			TELEMETRY::_TELEMETRY_FAST_TRAVEL(iVar2, func_180(func_181(Global_1072759.f_23824.f_383[iVar11 /*272*/].f_2, 1), 0), Global_1072759.f_23824.f_383[iVar11 /*272*/].f_2);
			return true;
		case 1:
			if (!func_182(iVar0, 0))
			{
				return false;
			}
			func_164();
			func_165();
			if (func_168(iVar1))
			{
				func_169(0, 1, 1);
			}
			else if (func_170(iVar0))
			{
				func_169(0, 1, 1);
			}
			else if (func_171())
			{
				func_172();
			}
			func_183();
			func_176(0, 0.02012728f);
			func_177();
			iVar2 = 0.000112171f;
			iVar3 = func_180(func_179(), 0);
			if (iVar3 == 0)
			{
				iVar3 = 7.087189E+24f;
			}
			TELEMETRY::_TELEMETRY_FAST_TRAVEL(iVar3, iVar2, func_28(func_94(PLAYER::PLAYER_ID())));
			return true;
		case 2:
			iVar4 = func_68();
			if (!func_69(iVar4, 1))
			{
				return false;
			}
			iVar5 = func_184(iVar4, 1);
			iVar6 = 1;
			if (iVar4 == iVar0)
			{
				iVar6 = 0;
			}
			vVar7 = { func_185(iVar5, iVar6) };
			fVar10 = func_186(iVar5, iVar6);
			func_187(vVar7, fVar10, 2f, 1103626240 /* Float: 25f */, 1, 1, 1);
			func_176(0, 0.02012728f);
			func_177();
			iVar2 = func_188(iVar5);
			iVar3 = func_180(func_179(), 0);
			if (iVar3 == 0)
			{
				iVar3 = 7.087189E+24f;
			}
			TELEMETRY::_TELEMETRY_FAST_TRAVEL(iVar3, iVar2, vVar7);
			return true;
	}
	return true;
}

int func_84()
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

int func_85()
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
	if (func_87(2048))
	{
		return 1;
	}
	if (func_189(1))
	{
		return 1;
	}
	if (Global_1102813.f_26.f_3337 != 0)
	{
		return 1;
	}
	return 0;
}

int func_86()
{
	return Global_1102813.f_26.f_3337;
}

bool func_87(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

void func_88(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

void func_89()
{
	int iVar0;

	if (func_19(36))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_COORDS(iVar0, Global_1102813.f_3887, false, false, true, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
		ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
		ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar0, false, false);
		PED::SET_PED_CAN_BE_TARGETTED(iVar0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 301, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 277, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 417, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 394, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
}

void func_90(int iParam0, int iParam1, bool bParam2)
{
	if (func_190(iParam0, iParam1) && (!bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_191();
	}
}

void func_91(int iParam0)
{
	Global_1102813.f_3 = (Global_1102813.f_3 - (Global_1102813.f_3 && iParam0));
}

bool func_92(int iParam0)
{
	return (Global_1072759.f_23824.f_5 && iParam0) != 0;
}

void func_93()
{
	if (func_123(PLAYER::PLAYER_ID(), 1, 1))
	{
		func_124(0, 1);
	}
	UIAPPS::_CLOSE_UIAPP_BY_HASH(3.759754E+27f);
}

int func_94(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

int func_95(int iParam0)
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

bool func_96(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_97(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_100(iParam0, 1);
	func_101(iParam0, 1);
	func_102(iParam0, 128);
}

int func_98(int iParam0)
{
	return iParam0;
}

void func_99(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_100(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_96(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_101(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_102(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

bool func_103(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_192(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_193())
	{
		return func_192(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_192(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

int func_104(bool bParam0, bool bParam1, bool bParam2)
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

bool func_105()
{
	return Global_1108965.f_775.f_28 != -1;
}

struct<2> func_106(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_107(struct<2> Param0)
{
	if (!func_194(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_195(Param0))
	{
		return false;
	}
	return true;
}

bool func_108()
{
	switch (Global_1108965.f_775.f_28)
	{
		case 6:
			return true;
		case 7:
			if (func_196())
			{
				return true;
			}
			return false;
		default:
			break;
	}
	return false;
}

bool func_109(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_110(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

int func_111(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = func_197(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_ON_MOUNT(iParam0))
		{
			iVar0 = func_197(PED::GET_MOUNT(iParam0));
		}
	}
	return iVar0;
}

bool func_112()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(3.304497E+20f))
	{
		return true;
	}
	if (func_43())
	{
		return true;
	}
	return func_92(2);
}

int func_113(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_114()
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
	if (!func_107(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_115(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return false;
	}
	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-1.072798E+21f))
	{
		return false;
	}
	iVar0 = Global_1295619.f_149[Global_1295619];
	iVar1 = Global_1295619.f_3;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::IS_PED_INCAPACITATED(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return false;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
			{
				return false;
			}
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
			{
				return false;
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
				return false;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915643.f_20638 || Global_1915643.f_22504.f_1)
		{
			return false;
		}
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
		{
			return false;
		}
	}
	if (func_198())
	{
		return false;
	}
	if (Global_15)
	{
		return false;
	}
	if (!bParam2 && (((Global_1940072.f_10 || Global_1940072.f_11) || Global_1940072.f_12) || Global_1940072.f_13))
	{
		return false;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1235672.f_9479 != -1)
		{
			return false;
		}
		if (Global_1138658[iVar4 /*56*/].f_34 & 1 != 0 && Global_1138658[iVar4 /*56*/].f_34 & 2 == 0)
		{
			return false;
		}
		if (Global_1140755.f_293)
		{
			return false;
		}
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
		{
			return false;
		}
		else if (Global_1572887.f_72.f_40 > 15)
		{
			return false;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				return false;
			}
			if (Global_1048581)
			{
				return false;
			}
			if (Global_1048585)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_116()
{
	return Global_1896762.f_352;
}

bool func_117()
{
	return Global_1940239.f_2;
}

bool func_118()
{
	int iVar0;

	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_199(65536, 255))
		{
			func_200(65536);
		}
		return false;
	}
	if (func_199(65536, 255))
	{
		return true;
	}
	return false;
}

bool func_119(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_120(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_201(iParam0, &iVar0, &iVar1);
	if (!func_202(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_203(iVar0, iVar1);
}

void func_121(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_122(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_123(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iParam0)))
	{
		return iParam2;
	}
	return func_204(Global_1289628[iParam0 /*19*/].f_12, 1);
}

void func_124(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (func_204(Global_1289628[iVar1 /*19*/].f_12, 1) != bParam0)
	{
		if (bParam0)
		{
			func_121(&(Global_1289628[iVar1 /*19*/].f_12), 1);
		}
		else
		{
			func_156(&(Global_1289628[iVar1 /*19*/].f_12), 1);
		}
		func_156(&(Global_1289628[iVar1 /*19*/].f_12), 2);
		if (bParam0)
		{
			func_205(&(Global_1290256.f_11.f_756));
		}
		else
		{
			func_206(&(Global_1290256.f_11.f_756));
		}
	}
}

bool func_125(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iParam0)))
	{
		return iParam2;
	}
	return func_204(Global_1289628[iParam0 /*19*/].f_12, 2);
}

void func_126(int iParam0, int iParam1)
{
	if (!func_190(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_191();
	}
}

void func_127(int iParam0)
{
	Global_1102813.f_3 = (Global_1102813.f_3 || iParam0);
}

char* func_128(int iParam0)
{
	switch (iParam0)
	{
		case -931758312:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case joaat("NFT_CATEGORY_AMBARINO"):
			return "TITHE_AMBARINO";
		case joaat("NFT_CATEGORY_LEMOYNE"):
			return "TITHE_LEMOYNE";
		case joaat("NFT_CATEGORY_WEST_ELIZABETH"):
			return "TITHE_WEST_ELIZABETH";
		case joaat("NFT_CATEGORY_NEW_HANOVER"):
			return "TITHE_NEW_HANOVER";
		case joaat("NFT_CATEGORY_NEW_AUSTIN"):
			return "TITHE_NEW_AUSTIN";
	}
	return "ALL";
}

void func_129(var uParam0)
{
	int iVar0;
	struct<19> Var1;
	bool bVar20;
	int iVar21;
	int iVar22;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1072759.f_23824.f_6.f_5);
	Var1 = 1;
	Var1.f_1 = 1;
	Var1.f_2 = 27.64779f;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_10 = -1;
	Var1.f_11 = -1;
	Var1.f_12 = -1;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_207(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[iVar0 /*19*/]))
		{
			bVar20 = func_71(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[iVar0 /*19*/].f_17, uParam0);
			if (func_65(bVar20, &iVar22))
			{
				iVar21 = 0;
				Var1 = 1;
			}
			else if (func_66(bVar20, &iVar22))
			{
				iVar21 = func_70(bVar20, iVar22, 1, 0, 1, 0);
				if (iVar21 != 0)
				{
					Var1 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar21, 0);
				}
				else
				{
					Var1 = 1;
				}
			}
			else
			{
				iVar21 = func_70(bVar20, 8.497754E-37f, 1, 0, 1, 0);
				if (iVar21 != 0)
				{
					Var1 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar21, 0);
				}
				else
				{
					Var1 = 1;
				}
			}
			Var1.f_16 = MISC::VAR_STRING(0, Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[iVar0 /*19*/]);
			Var1.f_1 = 1;
			Var1.f_2 = 27.64779f;
			Var1.f_3 = 0;
			Var1.f_17 = iVar21;
			Var1.f_18 = iVar21;
			Var1.f_6 = 2.062508E-37f;
			Var1.f_5 = 2.062508E-37f;
			Var1.f_4 = 3.759754E+27f;
			func_208(&(Global_1072759.f_23824.f_6.f_7[iVar0 /*22*/]), Var1, iVar0);
		}
		iVar0++;
	}
	func_209(uParam0);
	func_210(uParam0);
}

void func_130(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_211();
	iVar1 = func_212(bParam1, 1, -1);
	iVar2 = (func_213(iVar0, 1) + iVar1);
	if (iVar2 < 1)
	{
		iVar2 = 6;
	}
	else if (iVar2 > 6)
	{
		iVar2 = 1;
	}
	iVar0 = func_214(iVar2, 1);
	func_60(uParam0, iVar0);
}

int func_131(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	iVar1 = func_68();
	if (!func_69(iVar1, 1))
	{
		iVar0 = 1;
		return iVar0;
	}
	iVar2 = func_184(iVar1, 1);
	vVar3 = { func_185(iVar2, 1) };
	fVar6 = func_9(vVar3, Global_34);
	uParam0->f_17 = BUILTIN::ROUND((fVar6 / 1148846080));
	if (uParam0->f_17 == 0)
	{
		uParam0->f_17 = 1;
	}
	return (iVar0 + uParam0->f_17);
}

int func_132(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_215(iVar0, 1, 0);
		if (!func_140(bParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_216(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_144(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

int func_133(bool bParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_215(iVar0, 0, 1);
		if (!func_140(bParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_217(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_144(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

bool func_134(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 32);
}

bool func_135(bool bParam0, int iParam1)
{
	if (!func_119(bParam0, 0))
	{
		return false;
	}
	if (func_136(bParam0) || func_137(bParam0, 2.791187f))
	{
		return func_218(func_138(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

bool func_136(bool bParam0)
{
	if (func_137(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_137(bool bParam0, int iParam1)
{
	if (!func_119(bParam0, 0))
	{
		return func_220(func_219(bParam0), iParam1);
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

bool func_138(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_119(bParam0, 0))
	{
		return func_221(func_219(bParam0), bParam1);
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

int func_139(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_222(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_140(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_119(bParam0, 0))
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
		func_223(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_141(bool bParam0)
{
	struct<2> Var0;

	if (!func_119(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_142(bool bParam0)
{
	vector3 vVar0;

	if (!func_119(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_143()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_144(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_119(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_142(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_224(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_225(bParam0, 0);
	}
	if (func_226(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_227(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_228(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_227(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_145(bool bParam0)
{
	if (func_229() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_227(bParam0));
}

bool func_146(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_119(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_226(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_230(bParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_151(bParam0, bParam4, 0) };
	Var6 = { func_152(bParam0, Var1, Var1.f_4, bParam4) };
	return func_231(bParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_147(int iParam0)
{
	switch (iParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_232(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_234(func_233(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_235(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_149(int iParam0, struct<17> Param1)
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

bool func_150(bool bParam0)
{
	if (func_141(bParam0) == -1.955052E+34f || func_141(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

struct<5> func_151(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_236(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_142(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_152(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_237(bParam1) };
			if (iParam2 && func_238(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_239(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_239(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_240(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_241(bParam1) };
			switch (func_141(bParam0))
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
			if (func_242(bParam0, -2.580501E-27f))
			{
				Var0 = { func_152(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_242(bParam0, -4.220332E-15f))
			{
				Var0 = { func_152(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_152(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_242(bParam0, -3.171238E-21f))
			{
				Var0 = { func_152(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_243(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_242(bParam0, -3.171238E-21f))
			{
				Var0 = { func_152(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_152(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_119(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_227(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_153(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_154(struct<4> Param0)
{
	if (!func_153(&Param0))
	{
		return false;
	}
	if (func_244(&Param0))
	{
		return false;
	}
	return func_246(func_245(Param0));
}

void func_155(int iParam0)
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
		func_247();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_157(var uParam0)
{
	if (uParam0->f_24 == 0)
	{
		return false;
	}
	if (uParam0->f_23 == 0)
	{
		return false;
	}
	if (uParam0->f_25 == -1)
	{
		return false;
	}
	return true;
}

bool func_158(int iParam0, var uParam1)
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(iParam0, uParam1))
	{
		return true;
	}
	return false;
}

void func_159(var uParam0)
{
	uParam0->f_25 = -1;
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

float func_160(bool bParam0)
{
	return func_248(bParam0);
}

bool func_161(int iParam0)
{
	return (Global_1958662 && iParam0) != 0;
}

void func_162(int iParam0)
{
	if (!func_161(iParam0))
	{
		Global_1958662 = (Global_1958662 || iParam0);
	}
}

int func_163(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Global_1072759.f_23824.f_383[iVar0 /*272*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_164()
{
	func_249(1);
	func_250(1);
}

void func_165()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

int func_166(bool bParam0)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (!func_251(&Var0, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_167(bool bParam0)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (!func_252(&Var0, bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return false;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iParam0)
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		return false;
	}
	iVar2 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return false;
	}
	if (iVar0 != iVar2)
	{
		return false;
	}
	return true;
}

void func_169(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_253(78);
		if (bParam2)
		{
			func_253(76);
		}
		Global_1102813.f_3792 = iParam0;
	}
	else
	{
		func_254(78);
		func_254(76);
	}
}

bool func_170(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (func_255(iVar1, iVar0, 1, 1) > 1103626240)
	{
		return false;
	}
	return true;
}

bool func_171()
{
	int iVar0;

	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) > 0)
	{
		return false;
	}
	return true;
}

void func_172()
{
	if (func_256(8, 255))
	{
		return;
	}
	func_257(3);
}

void func_173(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_253(70);
		if (bParam1)
		{
			func_253(73);
		}
	}
	else
	{
		func_254(70);
		func_254(73);
	}
}

void func_174(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_253(66);
		if (bParam1)
		{
			func_253(73);
		}
	}
	else
	{
		func_254(66);
		func_254(50);
		func_254(73);
	}
}

void func_175(int iParam0)
{
	func_258(iParam0, 1);
}

int func_176(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_259())
	{
		return 0;
	}
	if (!func_260())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_261(&Global_0, 8);
	}
	func_261(&Global_0, 1);
	return 1;
}

void func_177()
{
	if (Global_1290256.f_1608.f_5 == 1)
	{
		return;
	}
	Global_1290256.f_1608.f_5 = 1;
}

bool func_178()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_262(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_179()
{
	return Global_1893611.f_2;
}

int func_180(int iParam0, bool bParam1)
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

int func_181(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_179();
	if (func_263(iVar0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar0 /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_264(vParam0, iParam3);
}

bool func_182(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1147168.f_9[iVar0 /*10*/].f_4.f_2 != 0 && Global_1147168.f_9[iVar0 /*10*/].f_2 == iParam0)
			{
				return true;
			}
			iVar0++;
		}
		if (bParam1)
		{
			func_122("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (func_25(func_27(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_122("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

void func_183()
{
	func_265(1);
	func_266(1, 1);
}

int func_184(int iParam0, bool bParam1)
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

Vector3 func_185(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam1 == -1)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	func_269(1.984824E+07f, func_267(iParam0), func_268(iParam1), 0);
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar0, &(Global_1297394.f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_186(int iParam0, int iParam1)
{
	float fVar0;

	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam1 == -1)
	{
		return 0f;
	}
	fVar0 = 0f;
	func_269(-4.956781E+30f, func_267(iParam0), func_268(iParam1), 0);
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&fVar0, &(Global_1297394.f_1)))
	{
		return 0f;
	}
	return fVar0;
}

void func_187(vector3 vParam0, float fParam3, float fParam4, int iParam5, int iParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_270(Global_1295619.f_12, &vVar0, &fVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_271(vParam0, fParam3, vVar0, fVar3, fParam4, iParam5, iParam6, fParam7, fParam8, 1);
}

float func_188(int iParam0)
{
	return func_267(iParam0);
}

bool func_189(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_190(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_191()
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
}

bool func_192(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_193()
{
	return Global_1102813.f_3672;
}

bool func_194(int iParam0)
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

int func_195(int iParam0)
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

bool func_196()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_272(iVar0, 8192))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_197(int iParam0)
{
	int iVar0;

	iVar0 = func_273(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_HOGTIED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_198()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

bool func_199(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1289628[iParam1 /*19*/].f_9 && iParam0) != 0;
}

void func_200(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289628[iVar0 /*19*/].f_9 = (Global_1289628[iVar0 /*19*/].f_9 - (Global_1289628[iVar0 /*19*/].f_9 && iParam0));
}

void func_201(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_202(int iParam0, int iParam1, int iParam2, bool bParam3)
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
	if ((Global_1900460.f_67 && !func_277(iParam0, 1)) || func_278(32768))
	{
		if (!func_277(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_279())
	{
		return false;
	}
	return true;
}

void func_203(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_204(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_205(var uParam0)
{
	func_280(uParam0, 0f);
}

void func_206(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_207(var uParam0)
{
	int iVar0;

	iVar0 = func_211();
	if (iVar0 == -252412.4f)
	{
		return true;
	}
	return func_281(uParam0) == iVar0;
}

void func_208(var uParam0, struct<19> Param1, int iParam20)
{
	func_282(uParam0, Param1, iParam20);
	Global_1072759.f_23824.f_6.f_316[iParam20] = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1072759.f_23824.f_6.f_7[iParam20 /*22*/], "locationArrayIndex", iParam20);
}

void func_209(var uParam0)
{
	struct<19> Var0;
	bool bVar19;
	int iVar20;
	int iVar21;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	bVar19 = true;
	if (uParam0->f_5)
	{
		if (func_65(func_71(0, uParam0), &iVar21))
		{
			iVar20 = 0;
			Var0 = 1;
		}
		else if (func_66(func_71(0, uParam0), &iVar21))
		{
			iVar20 = func_70(func_71(0, uParam0), iVar21, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		else
		{
			iVar20 = func_70(func_71(0, uParam0), 8.497754E-37f, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		Var0.f_1 = 1;
		Var0.f_2 = 27.64779f;
		Var0.f_3 = 0;
		Var0.f_16 = "";
		Var0.f_16 = MISC::VAR_STRING(0, Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/]);
		Var0.f_17 = iVar20;
		Var0.f_18 = iVar20;
		Var0.f_6 = 2.062508E-37f;
		Var0.f_5 = 2.062508E-37f;
		Var0.f_4 = 3.759754E+27f;
		func_283(&(Global_1072759.f_23824.f_6.f_331), Var0, 14);
		return;
	}
	else if (!func_27(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) >= 0)
	{
		bVar19 = false;
	}
	if (func_65(func_71(0, uParam0), &iVar21))
	{
		iVar20 = 0;
		Var0 = bVar19;
	}
	else if (func_66(func_71(0, uParam0), &iVar21))
	{
		iVar20 = func_70(func_71(0, uParam0), iVar21, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	else
	{
		iVar20 = func_70(func_71(0, uParam0), 8.497754E-37f, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_3 = 0;
	Var0.f_16 = "";
	Var0.f_16 = MISC::VAR_STRING(2, "NFT_LOCATION_TYPE_CAMP_DESC");
	Var0.f_17 = iVar20;
	Var0.f_18 = iVar20;
	Var0.f_6 = 2.062508E-37f;
	Var0.f_5 = 2.062508E-37f;
	Var0.f_4 = 3.759754E+27f;
	func_283(&(Global_1072759.f_23824.f_6.f_331), Var0, 14);
}

void func_210(var uParam0)
{
	struct<19> Var0;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	bVar19 = true;
	iVar23 = func_68();
	if (func_69(iVar23, 1))
	{
		iVar21 = func_131(uParam0);
		if (func_65(func_71(0, uParam0), &iVar22))
		{
			iVar20 = 0;
			Var0 = 1;
		}
		else if (func_66(func_71(0, uParam0), &iVar22))
		{
			iVar20 = func_70(func_71(iVar21, uParam0), iVar22, 1, 0, 1, 0);
			if (iVar20 != 0)
			{
				Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
			}
			else
			{
				Var0 = bVar19;
			}
		}
		else
		{
			iVar20 = func_70(func_71(iVar21, uParam0), 8.497754E-37f, 1, 0, 1, 0);
			if (iVar20 != 0)
			{
				Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
			}
			else
			{
				Var0 = bVar19;
			}
		}
		Var0.f_1 = 1;
		Var0.f_2 = 27.64779f;
		Var0.f_3 = 0;
		Var0.f_16 = "";
		Var0.f_16 = MISC::VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
		Var0.f_17 = iVar20;
		Var0.f_18 = iVar20;
		Var0.f_6 = 2.062508E-37f;
		Var0.f_5 = 2.062508E-37f;
		Var0.f_4 = 3.759754E+27f;
		func_284(&(Global_1072759.f_23824.f_6.f_354), Var0, 15);
		return;
	}
	else
	{
		bVar19 = false;
	}
	if (func_65(func_71(0, uParam0), &iVar22))
	{
		iVar20 = 0;
		Var0 = bVar19;
	}
	else if (func_66(func_71(0, uParam0), &iVar22))
	{
		iVar20 = func_70(func_71(0, uParam0), iVar22, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	else
	{
		iVar20 = func_70(func_71(0, uParam0), 8.497754E-37f, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_3 = 0;
	Var0.f_16 = "";
	Var0.f_16 = MISC::VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
	Var0.f_17 = iVar20;
	Var0.f_18 = iVar20;
	Var0.f_6 = 2.062508E-37f;
	Var0.f_5 = 2.062508E-37f;
	Var0.f_4 = 3.759754E+27f;
	func_284(&(Global_1072759.f_23824.f_6.f_354), Var0, 15);
}

var func_211()
{
	return Global_1072759.f_23824.f_4;
}

int func_212(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_213(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("NFT_CATEGORY_AMBARINO"):
			return 2;
		case joaat("NFT_CATEGORY_LEMOYNE"):
			return 3;
		case -931758312:
			return 1;
		case joaat("NFT_CATEGORY_NEW_AUSTIN"):
			return 6;
		case 0:
			return 0;
		case joaat("NFT_CATEGORY_NEW_HANOVER"):
			return 5;
		case joaat("NFT_CATEGORY_WEST_ELIZABETH"):
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

int func_214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -252412.4f;
		case 2:
			return -1.886708E-34f;
		case 3:
			return -5.418245E-30f;
		case 4:
			return 1.053146E+09f;
		case 5:
			return 1.19827E-33f;
		case 6:
			return -2.498965E+10f;
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

int func_215(int iParam0, bool bParam1, bool bParam2)
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

bool func_216(bool bParam0)
{
	return func_141(bParam0) == 4.029065E+31f;
}

bool func_217(bool bParam0)
{
	return func_141(bParam0) == -1.955052E+34f;
}

bool func_218(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_285(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_286(bParam0, iParam1);
	}
	return true;
}

bool func_219(bool bParam0)
{
	return bParam0;
}

int func_220(bool bParam0, int iParam1)
{
	if (!func_287(bParam0, 2))
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

bool func_221(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_287(bParam0, 2))
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

bool func_222(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_285(bParam0))
	{
		return false;
	}
	*uParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1);
	if (*uParam3 == 0)
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
	while (iVar0 < *uParam3)
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
		func_288(bParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

void func_223(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_141((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_224(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_119(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_142(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_137(bParam0, 9.811189E+11f))
	{
		func_289(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_225(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_290(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_291(&Var0, func_237(0));
	}
	if (!func_292(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_293(iVar18);
	return iVar19;
}

int func_226(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_287(func_219(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_227(bool bParam0)
{
	if (func_229() == -1)
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

struct<4> func_228(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_151(bParam0, bParam1, 0) };
	return func_152(bParam0, Var0, Var0.f_4, bParam1);
}

int func_229()
{
	return Global_1572887.f_14;
}

int func_230(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_294(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_226(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_145(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_295(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_296(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_148(7.184882E+22f, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var82.f_7 = -5.149929E+33f;
			Var82.f_16 = -1;
			Var82 = iParam3;
			Var82.f_7 = iParam2;
			func_149(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_227(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_231(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_294(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_243(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_145(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_229() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_148(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_149(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_227(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_232(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_297(iParam1->f_8, iParam0, iVar0, 2048) || func_297(iParam1->f_8, iParam0, iVar0, 32768)) || func_297(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_297(iParam1->f_8, iParam0, iVar0, 4) || func_297(iParam1->f_8, iParam0, iVar0, 256)) || func_297(iParam1->f_8, iParam0, iVar0, 65536)) || func_297(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_297(iParam1->f_8, iParam0, iVar0, 1) || func_297(iParam1->f_8, iParam0, iVar0, 8)) || func_297(iParam1->f_8, iParam0, iVar0, 65536)) || func_297(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_297(iParam1->f_8, iParam0, iVar0, 1) || func_297(iParam1->f_8, iParam0, iVar0, 16)) || func_297(iParam1->f_8, iParam0, iVar0, 2)) || func_297(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_297(iParam1->f_8, iParam0, iVar0, 8) || func_297(iParam1->f_8, iParam0, iVar0, 4096)) || func_297(iParam1->f_8, iParam0, iVar0, 256)) || func_297(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_233(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_234(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_298(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_298(iParam1, 2, 0, 0);
	return -1;
}

int func_235(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_298(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

struct<4> func_236(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_227(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_152(2.982335E+09f, func_299(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_152(2.982335E+09f, func_299(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_152(2.982335E+09f, func_299(), -5.45926E-19f, bParam0);
}

struct<4> func_237(bool bParam0)
{
	int iVar0;

	iVar0 = func_227(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_152(8.681942E-06f, func_236(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_152(8.681942E-06f, func_236(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_152(8.681942E-06f, func_236(bParam0), -1.942248E+12f, 0);
}

int func_238(bool bParam0, bool bParam1)
{
	if (func_141(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_300();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_239(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_301(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_240(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_302(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_241(bool bParam0)
{
	int iVar0;

	iVar0 = func_227(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_152(3.507197E-29f, func_236(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_152(3.507197E-29f, func_236(bParam0), 12999093, 0);
}

bool func_242(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_141(bParam0);
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
			if (func_303(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_243(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_304(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_244(var uParam0)
{
	if (!func_153(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_245(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_153(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

bool func_246(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_305()) > iParam0;
}

void func_247()
{
	if (!Global_1102813.f_16)
	{
		return;
	}
	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
}

float func_248(bool bParam0)
{
	if (!func_150(bParam0))
	{
		return 0;
	}
	if (func_217(bParam0))
	{
		return -4.07217E-32f;
	}
	if (func_137(bParam0, -3.639815E-14f))
	{
		return -6.335257E+35f;
	}
	if (func_137(bParam0, -3.567722E+12f))
	{
		return -5.414914E+13f;
	}
	if (func_137(bParam0, 2.768968E+15f))
	{
		return 5.15176E-06f;
	}
	if (func_137(bParam0, 5.250853E+36f))
	{
		return -1.128444E-20f;
	}
	return 1.335924E-32f;
}

void func_249(bool bParam0)
{
	if (bParam0)
	{
		func_253(117);
	}
	else
	{
		func_254(117);
	}
}

void func_250(bool bParam0)
{
	if (bParam0)
	{
		func_253(116);
	}
	else
	{
		func_254(116);
	}
}

bool func_251(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_290(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_292(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_306(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_307(&Var49, &Var0, 0))
				{
					if (func_308(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_293(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_293(iVar47);
	}
	return false;
}

bool func_252(var uParam0, bool bParam1)
{
	struct<24> Var0;
	struct<18> Var24;
	int iVar42;
	int iVar43;
	struct<10> Var44;
	int iVar58;

	Var0.f_9 = -5.45926E-19f;
	Var24 = { func_290(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (func_292(&Var24, &iVar42, &iVar43, bParam1))
	{
		Var44.f_9 = -5.45926E-19f;
		iVar58 = 0;
		while (iVar58 < iVar43)
		{
			if (func_306(&Var44, iVar58, iVar42, iVar43))
			{
				if (func_309(&Var44, &Var0, 0))
				{
					if (func_308(&(Var0.f_23), 16))
					{
						*uParam0 = { Var0 };
						func_293(iVar42);
						return true;
					}
				}
			}
			iVar58++;
		}
		func_293(iVar42);
	}
	return false;
}

int func_253(int iParam0)
{
	if (func_310(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)
{
	if (func_311(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

float func_255(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_256(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1289628[iParam1 /*19*/].f_10 && iParam0) != 0;
}

void func_257(int iParam0)
{
	func_312(2, iParam0);
}

void func_258(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!bParam1)
	{
		func_254(8);
	}
	else
	{
		if (func_313(255) == 4)
		{
			return;
		}
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (Global_1072759.f_23824.f_383[iVar1 /*272*/] == iParam0)
			{
				iVar0 = iVar1;
			}
			iVar1++;
		}
		if (iVar0 < 0)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 15);
			iParam0 = Global_1072759.f_23824.f_383[iVar0 /*272*/];
		}
		Global_1102813.f_3905 = iParam0;
		func_314(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { Global_1072759.f_23824.f_383[iVar0 /*272*/].f_2 };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_315(&(Global_1102813.f_3878));
		iVar2 = func_316(iParam0);
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (func_317(iParam0, iVar3, &(Global_1102813.f_3878.f_6), &(Global_1102813.f_3878)))
		{
			Global_1102813.f_3878.f_5 = 1;
		}
		func_253(8);
		func_253(0);
	}
}

bool func_259()
{
	return !Global_1572887.f_10;
}

bool func_260()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

void func_261(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_262(int iParam0)
{
	return func_318(iParam0, 1);
}

bool func_263(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_264(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_319(vParam0);
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

void func_265(bool bParam0)
{
	if (!bParam0)
	{
		func_254(5);
	}
	else
	{
		if (func_313(255) == 4)
		{
			return;
		}
		func_253(5);
	}
}

void func_266(bool bParam0, bool bParam1)
{
	if (func_313(255) == 4)
	{
		return;
	}
	if (func_320(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_254(0);
	}
	else
	{
		if (bParam1)
		{
			func_321(0, 0, 0, 1);
		}
		func_253(0);
		func_314(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_315(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_322(Global_1102813.f_3839, 36);
	func_323(Global_1102813.f_3878, 36);
}

float func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.575714E-14f;
		case 1:
			return -3.403843E-36f;
		case 2:
			return 1.477141E+27f;
		case 3:
			return -2.602238E-27f;
		case 4:
			return -3.787865E-31f;
		default:
			break;
	}
	return -7.114702E-19f;
}

float func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2.317975E+26f;
		case 1:
			return -2.375644E-23f;
		case 2:
			return -1.95052E+37f;
		case 3:
			return 7.071394E+19f;
		case 4:
			return -9.887349E-38f;
		default:
			break;
	}
	return -7.582641E-32f;
}

void func_269(float fParam0, float fParam1, float fParam2, int iParam3)
{
	func_324();
	Global_1297394.f_1.f_2 = fParam0;
	Global_1297394.f_1.f_3 = fParam1;
	Global_1297394.f_1.f_4 = fParam2;
	Global_1297394.f_1.f_1 = iParam3;
}

bool func_270(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1072759.f_23824.f_383[func_325(vParam0) /*272*/];
	iVar1 = func_316(iVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_317(iVar0, iVar2, vParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_271(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, float fParam11, float fParam12, int iParam13)
{
	if (func_313(255) == 4)
	{
		return;
	}
	if (func_320(vParam0))
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
		func_321(0, 0, 0, 1);
	}
	func_253(0);
	func_253(3);
	Global_1102813.f_3909 = fParam11;
	Global_1102813.f_3910 = fParam12;
	Global_1102813.f_3911 = iParam13;
	func_314(&(Global_1102813.f_3839));
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
	func_315(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { vParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_322(Global_1102813.f_3839, 36);
	func_323(Global_1102813.f_3878, 36);
}

bool func_272(int iParam0, int iParam1)
{
	return func_326(Global_1206482.f_78[iParam0 /*20*/].f_6, iParam1);
}

int func_273(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

bool func_274(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_275(int iParam0)
{
	if (func_277(iParam0, 4))
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

bool func_277(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_278(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_279()
{
	if (!func_260())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

void func_280(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_327() - fParam1);
	func_328(uParam0, 1);
	func_329(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_281(var uParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 6.389094E-13f;
	Var0.f_3 = uParam0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 3.701007E-26f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
		return uVar5;
	}
	return -252412.4f;
}

void func_282(var uParam0, struct<19> Param1, int iParam20)
{
	char cVar0[64];

	StringCopy(&cVar0, "Fast_Travel_Location_", 64);
	StringIntConCat(&cVar0, iParam20, 64);
	Param1.f_7 = 2.130486E+33f;
	func_330(uParam0, Global_1072759.f_23824.f_6.f_4, cVar0, Param1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1072759.f_23824.f_6.f_5, iParam20, "ft_dynamic_text_and_price", *uParam0);
}

void func_283(var uParam0, struct<19> Param1, int iParam20)
{
	func_282(uParam0, Param1, iParam20);
	Global_1072759.f_23824.f_6.f_353 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1072759.f_23824.f_6.f_331, "locationArrayIndex", 14);
}

void func_284(var uParam0, struct<19> Param1, int iParam20)
{
	func_282(uParam0, Param1, iParam20);
	Global_1072759.f_23824.f_6.f_376 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1072759.f_23824.f_6.f_354, "locationArrayIndex", 15);
}

bool func_285(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_286(bool bParam0, int iParam1)
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

bool func_287(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

void func_288(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_141((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

void func_289(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_290(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_291(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_292(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_227(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_293(int iParam0)
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

bool func_294(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_295(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_226(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_331(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_296(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_152(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_297(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_326(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_298(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_332(iParam0, iParam1, iParam2, iParam3);
}

struct<4> func_299()
{
	struct<4> Var0;

	return Var0;
}

int func_300()
{
	if (func_333(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_301(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_119(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_226(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_152(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_227(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_227(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_302(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_227(0);
	*iParam1 = { func_152(bParam0, func_237(0), fParam3, 0) };
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

bool func_303(bool bParam0, int iParam1, int iParam2)
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

int func_304(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_227(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_305()
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, 4.380664E-34f))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-6.484858E+21f, 4.380664E-34f, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

bool func_306(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_307(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_227(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_308(var uParam0, int iParam1)
{
	return func_326(*uParam0, iParam1);
}

bool func_309(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_227(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_310(var uParam0, int iParam1, int iParam2)
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

bool func_311(var uParam0, int iParam1, int iParam2)
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

void func_312(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
}

int func_313(int iParam0)
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

void func_314(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_315(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

int func_316(int iParam0)
{
	struct<4> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 9.201076E+18f;
	Var0.f_3 = iParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
}

bool func_317(int iParam0, int iParam1, Vector3* vParam2, float* fParam3)
{
	struct<5> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 3.36884E-33f;
	Var0.f_3 = iParam0;
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

bool func_318(int iParam0, int iParam1)
{
	if (!func_25(iParam0))
	{
		return false;
	}
	return func_326(Global_1142409.f_1[iParam0 /*63*/].f_61, iParam1);
}

int func_319(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_334(vParam0, 0f, 0f, 0, 2);
	return func_334(vParam0, Global_1892764[iVar0 /*3*/].f_1, Global_1892764[iVar0 /*3*/].f_2, Global_1892764[iVar0 /*3*/], 4);
}

bool func_320(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_321(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_335(iParam0);
	if (!func_189(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_87(128) && !func_19(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_84() == 4)
	{
		func_254(18);
	}
	func_336(1024);
}

void func_322(struct<29> Param0, var uParam29, int iParam30)
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

void func_323(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_324()
{
	Global_1297394.f_1 = Global_1072759.f_28418[50 /*4*/].f_3;
	Global_1297394.f_1.f_1 = 0;
	Global_1297394.f_1.f_2 = 0;
	Global_1297394.f_1.f_3 = 0;
	Global_1297394.f_1.f_4 = 0;
}

int func_325(vector3 vParam0)
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

bool func_326(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_327()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_328(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_329(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_330(var uParam0, int iParam1, char[32] cParam2, struct<19> Param10)
{
	func_337(uParam0, iParam1, cParam2, Param10);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_338(15), Param10.f_16);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_338(53), Param10.f_17);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_338(54), Param10.f_18);
}

bool func_331(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_244(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_299() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

void func_332(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_339(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_333(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_340(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_227(bParam1), iParam0, bParam3);
}

int func_334(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_335(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

void func_336(int iParam0)
{
	if (func_341(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

void func_337(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_338(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_338(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_338(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_338(57), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_338(58), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_338(60), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_338(59), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -5.222598E+14f;
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_338(61), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_338(62), "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_338(63), Param10.f_8);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_338(64), Param10.f_9);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_338(65), Param10.f_10);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_338(71), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_338(66), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -5.222598E+14f;
	}
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_338(68), Param10.f_13);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_338(69), Param10.f_14);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_338(70), Param10.f_15);
}

char* func_338(int iParam0)
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

void func_339(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_342(&(uParam0->f_4));
}

bool func_340(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_341(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

void func_342(var uParam0)
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

