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
	struct<10> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = -1082130432;
	var uLocal_53 = -1082130432;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&Local_16, vScriptParam_0);
	if (func_2() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_4(func_3(0)) == 7)
		{
			func_5(&Local_16);
		}
	}
	if (func_2() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_5(&Local_16);
		}
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_16.f_9))
	{
		func_5(&Local_16);
	}
	while (func_6(&Local_16))
	{
		if (func_7())
		{
			func_5(&Local_16);
		}
		if (func_8(&Local_16))
		{
			func_5(&Local_16);
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Local_16);
}

void func_1(var uParam0, vector3 vParam1)
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(4);
	uParam0->f_12 = func_9(vParam1);
	*uParam0 = func_10(vParam1, uParam0);
	func_11(uParam0, 2);
	uParam0->f_13 = "script@mech@treasure_hunting@grab";
	uParam0->f_14 = "PBL_GRAB_01";
	uParam0->f_2 = 0;
	uParam0->f_22 = func_12(vParam1, uParam0);
	uParam0->f_10 = vParam1.x;
	uParam0->f_9 = vParam1.y;
	uParam0->f_6 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_9, true) };
	func_13(&(uParam0->f_27), uParam0->f_6);
	func_14(*uParam0, uParam0->f_12);
	func_15();
}

int func_2()
{
	return Global_1572887.f_14;
}

struct<2> func_3(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	func_16(&(uParam0->f_15), 1, 1);
	func_17(uParam0);
	func_18(uParam0->f_6);
	func_19(*uParam0, uParam0->f_12, 1);
	func_19(*uParam0, uParam0->f_12, 32);
	func_20();
	func_21();
	func_22(&(uParam0->f_27));
	func_23(0);
	func_24(&(uParam0->f_27));
	if (!func_25(uParam0, 4))
	{
		SCRIPTS::_0xE7282390542F570D(uParam0->f_10);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_5(uParam0);
		return false;
	}
	return true;
}

bool func_7()
{
	return false;
}

bool func_8(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (func_26(uParam0) < 10)
	{
		if (func_27(*uParam0) && func_28(uParam0))
		{
			func_29(uParam0, 11);
			if (func_30(uParam0->f_15))
			{
				func_16(&(uParam0->f_15), 1, 1);
			}
			func_21();
		}
	}
	bVar1 = (func_26(uParam0) <= 6 && !func_31(uParam0->f_15, 1));
	bVar2 = !func_25(uParam0, 32);
	if (func_32(func_25(uParam0, 2)) && func_33(uParam0))
	{
		if (func_25(uParam0, 2))
		{
			func_34(uParam0->f_15, uParam0->f_6);
		}
		else
		{
			func_35(&(uParam0->f_27), uParam0->f_6, bVar1, bVar2, 1, 0);
		}
	}
	func_36(uParam0->f_15);
	func_37(uParam0->f_6, *uParam0, uParam0->f_12, 10f);
	func_38(uParam0);
	switch (func_26(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(-3.761452E-14f, false);
			if (func_25(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_21, false);
			}
			func_39(&(uParam0->f_27.f_6), uParam0->f_6, 1069547520 /* Float: 1.5f */, 1, 319, 0);
			if (func_25(uParam0, 32))
			{
				func_29(uParam0, 1);
			}
			else if (!func_40(uParam0->f_6))
			{
				func_29(uParam0, 14);
			}
			else
			{
				func_29(uParam0, 1);
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(-3.761452E-14f))
			{
				if (func_25(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_21))
					{
						return false;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_21, uParam0->f_6, true, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						return false;
					}
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_6 + Vector(1f, 0f, 0f), &(uParam0->f_26), &(uParam0->f_23)))
					{
						return false;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_20, func_41(uParam0->f_23, 0), 2, true);
					}
				}
				func_29(uParam0, 2);
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
			{
				uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_13, 64, uParam0->f_14, true, true);
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
			{
				return false;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
			func_29(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				if (func_25(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "MOUND", uParam0->f_20, 0);
					}
				}
				func_42(uParam0);
				func_29(uParam0, 4);
			}
			break;
		case 4:
			if (func_32(func_25(uParam0, 2)) && func_33(uParam0))
			{
				if (func_25(uParam0, 1))
				{
					func_43(uParam0->f_20, uParam0->f_20, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_20, 3.474616E-32f);
					func_29(uParam0, 5);
				}
				else
				{
					func_29(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_44(uParam0, 15f))
			{
				if (!func_30(uParam0->f_15))
				{
					uParam0->f_15 = func_45("UC_CLT_DIG", -7.068217E+21f, uParam0->f_6, 1.6f, 3, 1, 0, 4, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0);
				}
				func_29(uParam0, 6);
			}
			break;
		case 6:
			if (func_30(uParam0->f_15))
			{
				if (!func_25(uParam0, 32))
				{
					func_46(uParam0->f_15, &(uParam0->f_27.f_5));
				}
				if (func_47(uParam0->f_15, 1))
				{
					if (func_48(*uParam0, uParam0->f_12, 32))
					{
						func_23(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						func_16(&(uParam0->f_15), 1, 1);
						func_49(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_19(*uParam0, uParam0->f_12, 32);
						func_29(uParam0, 7);
					}
				}
				else if (func_28(uParam0))
				{
					if (func_50(uParam0->f_15, 1) > 0f)
					{
						func_51();
						func_53(func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1));
					}
					else if (func_50(uParam0->f_15, 1) == 0f)
					{
						func_21();
					}
				}
			}
			break;
		case 7:
			func_51();
			if ((((func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -3.273909E-18f && func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == -3.273909E-18f) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_CARRYING_SOMETHING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_17(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, func_55(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_6, 1), 2);
				func_29(uParam0, 8);
			}
			break;
		case 8:
			func_56();
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uParam0->f_6, 0);
			TASK::TASK_ENTER_ANIM_SCENE(0, uParam0->f_11, "player", uParam0->f_14, 1.48f, true, 128, 20000, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar3);
			func_29(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_11, false))
			{
				func_29(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_11, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_11, false))
			{
				if (!func_57(uParam0))
				{
					return false;
				}
				func_58(uParam0->f_9);
				func_59(func_25(uParam0, 1), func_25(uParam0, 2));
				func_23(0);
				func_24(&(uParam0->f_27));
				func_18(uParam0->f_6);
				func_58(uParam0->f_9);
				func_21();
				if (func_25(uParam0, 2) && func_25(uParam0, 32))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -8.284301E+07f, false, 0, false, false);
				}
				func_29(uParam0, 14);
			}
			break;
		case 11:
			if (func_48(*uParam0, uParam0->f_12, 1))
			{
				if (func_60())
				{
					func_19(*uParam0, uParam0->f_12, 1);
					func_29(uParam0, 12);
				}
				else if (!func_27(*uParam0))
				{
					func_29(uParam0, 4);
					func_19(*uParam0, uParam0->f_12, 1);
				}
			}
			break;
		case 12:
			if (func_30(uParam0->f_15))
			{
				func_16(&(uParam0->f_15), 1, 1);
			}
			bVar0 = func_61();
			if (!func_62(bVar0, 0))
			{
				return false;
			}
			uParam0->f_5 = bVar0;
			uParam0->f_22 = func_63(uParam0->f_5);
			if (!func_25(uParam0, 16))
			{
				func_11(uParam0, 16);
			}
			func_19(*uParam0, uParam0->f_12, 1);
			func_29(uParam0, 4);
			break;
	}
	return false;
}

int func_9(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iVar1));
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = iVar0;
	}
	return iVar0;
}

int func_10(vector3 vParam0, var uParam3)
{
	int iVar0;

	switch (vParam0.z)
	{
		case joaat("WB_DIG_BURIED_RANDOM_MUD"):
			iVar0 = 7;
			break;
		case joaat("WB_DIG_BURIED_RANDOM_SNOW"):
			iVar0 = 8;
			break;
		case joaat("WB_DIG_BURIED_RANDOM_SNOW_DIRT"):
			iVar0 = 9;
			break;
		case joaat("WB_DIG_BURIED_RANDOM_WATER_FRESH"):
			iVar0 = 10;
			break;
	}
	return iVar0;
}

void func_11(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_16, iParam1))
	{
		func_65(&(uParam0->f_16), iParam1);
	}
}

float func_12(vector3 vParam0, var uParam3)
{
	float fVar0;
	bool bVar1;

	bVar1 = UNLOCK::UNLOCK_IS_VISIBLE(-1.680548E+28f);
	switch (vParam0.z)
	{
		case joaat("WB_DIG_BURIED_RANDOM_MUD"):
			if (bVar1)
			{
				fVar0 = 5.716493E-06f;
			}
			else
			{
				fVar0 = -2.276863E+13f;
			}
			break;
		case joaat("WB_DIG_BURIED_RANDOM_SNOW"):
			if (bVar1)
			{
				fVar0 = -2.796116E-37f;
			}
			else
			{
				fVar0 = 57507.29f;
			}
			break;
		case joaat("WB_DIG_BURIED_RANDOM_SNOW_DIRT"):
			if (bVar1)
			{
				fVar0 = 1.30504E+11f;
			}
			else
			{
				fVar0 = -1.811708E-37f;
			}
			break;
		case joaat("WB_DIG_BURIED_RANDOM_WATER_FRESH"):
			if (bVar1)
			{
				fVar0 = 5.12565E+11f;
			}
			else
			{
				fVar0 = 3.103901E+37f;
			}
			break;
	}
	return fVar0;
}

void func_13(var uParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_7, 6, 0, 0, -1, -1, 0);
	}
}

void func_14(var uParam0, var uParam1)
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = uParam0;
}

void func_15()
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_7 = 0;
}

void func_16(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_30(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_66(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_67(iVar0);
	*uParam0 = 0;
}

void func_17(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
	{
		func_68(uParam0->f_20, uParam0->f_20, 0);
	}
}

void func_18(vector3 vParam0)
{
	if (func_69(Global_1222308, vParam0))
	{
		Global_1222308 = { 0f, 0f, 0f };
	}
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	func_70(&(Global_1222312[iParam0 /*251*/][iParam1]), iParam2);
}

void func_20()
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
}

void func_21()
{
	if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}
}

void func_22(var uParam0)
{
	func_71(uParam0);
	func_72(&(uParam0->f_6), 1);
}

void func_23(bool bParam0)
{
	if (bParam0)
	{
		func_73(0, 6);
	}
	else
	{
		func_74(0, 6, 0);
	}
}

void func_24(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_7);
	}
}

bool func_25(var uParam0, int iParam1)
{
	return func_64(uParam0->f_16, iParam1);
}

int func_26(var uParam0)
{
	return uParam0->f_2;
}

bool func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar2 = -1f;
	iVar4 = PLAYER::PLAYER_ID();
	if (Global_1222019[iVar4 /*9*/].f_1 != iParam0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar5 = iVar1;
			if (Global_1222019[iVar5 /*9*/].f_1 == Global_1222019[iVar4 /*9*/].f_1)
			{
				if (Global_1222019[iVar5 /*9*/].f_2 == Global_1222019[iVar4 /*9*/].f_2)
				{
					if (Global_1222019[iVar5 /*9*/].f_4)
					{
						if (fVar2 == -1f || fVar2 >= Global_1222019[iVar5 /*9*/].f_8)
						{
							fVar2 = Global_1222019[iVar5 /*9*/].f_8;
							iVar3 = iVar5;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > 0f)
	{
		if (Global_1295619.f_149[Global_1295619] != Global_1295619.f_149[iVar3])
		{
			if (!func_64(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2], 1))
			{
				func_65(&(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2]), 1);
			}
			return true;
		}
		if (!func_64(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2], 32))
		{
			func_65(&(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2]), 32);
		}
	}
	return false;
}

bool func_28(var uParam0)
{
	if (!func_25(uParam0, 32))
	{
		return Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;
	}
	return (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0 && Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 == uParam0->f_12);
}

void func_29(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
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

bool func_31(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_30(iParam0))
	{
		return false;
	}
	iVar0 = func_66(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

int func_32(bool bParam0)
{
	if (func_75(6.914108E-36f, 1))
	{
		if (bParam0)
		{
			if (func_75(-8.284301E+07f, 1))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

var func_33(var uParam0)
{
	return uParam0->f_39;
}

void func_34(var uParam0, vector3 vParam1)
{
	if (!func_40(vParam1))
	{
		func_18(vParam1);
		return;
	}
	if (func_76(Global_1222308))
	{
		Global_1222308 = { vParam1 };
	}
	else if (!func_69(Global_1222308, vParam1))
	{
		if (BUILTIN::VDIST2(Global_34, vParam1) < BUILTIN::VDIST2(Global_34, Global_1222308))
		{
			Global_1222308 = { vParam1 };
		}
	}
}

void func_35(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_76(Global_1222308))
	{
		if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_10 == -1f)
		{
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1222308, vParam1, true);
		}
		if (uParam0->f_10 <= 5f)
		{
			bVar0 = true;
		}
	}
	bVar1 = func_77(uParam0, bParam4, bVar0);
	if (!bVar1)
	{
		if (uParam0->f_8)
		{
			uParam0->f_8 = 0;
		}
	}
	if (uParam0->f_11 < 8)
	{
		uParam0->f_11++;
	}
	else
	{
		uParam0->f_11 = 0;
	}
	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
		{
			uParam0->f_8 = 1;
		}
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_9 == -1f)
	{
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);
	}
	fVar2 = 1092616192; /* Float: 10f */
	fVar2 = (fVar2 * (1f + func_78()));
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
						if (Global_1940186.f_38 != -8.284301E+07f)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", false, 0, bParam6);
						}
						func_79(uParam0, 1);
					}
				}
				else
				{
					func_79(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((1140457472 * ((fVar2 - uParam0->f_9) / fVar2)));
			iVar4 = BUILTIN::FLOOR((1132462080 * ((fVar2 - uParam0->f_9) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = MISC::ABSI(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (uParam0->f_9 < 3f && bParam7)
			{
				func_80(250);
			}
			PAD::SET_CONTROL_SHAKE(0, iVar3, iVar4);
			func_81(&(uParam0->f_1));
			func_79(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_71(uParam0);
				}
				func_79(uParam0, 0);
			}
			else if (func_82(&(uParam0->f_1)) >= 2f)
			{
				func_79(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_80(250);
			}
			break;
	}
}

void func_36(int iParam0)
{
	int iVar0;

	if (func_30(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295619.f_3);
		if ((((((((((((PED::IS_PED_CARRYING_SOMETHING(Global_1295619.f_3) || TASK::IS_PED_GETTING_UP(Global_1295619.f_3)) || PED::IS_PED_RAGDOLL(Global_1295619.f_3)) || !func_83()) || Global_1102813.f_3664) || ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_JUMPING(Global_1295619.f_3)) || PED::IS_PED_CLIMBING(Global_1295619.f_3)) || PED::IS_PED_FALLING(Global_1295619.f_3)) || PED::IS_PED_HOGTIED(Global_33)) || func_84(Global_33)) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 1, 0))
		{
			if (func_85(iParam0, 0))
			{
				func_86(iParam0, 0, 1, 1);
			}
		}
		else if (!func_85(iParam0, 0))
		{
			func_86(iParam0, 1, 1, 1);
		}
	}
}

void func_37(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_52(Global_33, vParam0, 1) < fParam5)
	{
		if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 != iParam3)
		{
			Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam3;
		}
		if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam4)
		{
			Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = iParam4;
		}
	}
}

void func_38(var uParam0)
{
	uParam0->f_39 = func_87();
}

void func_39(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_88(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_88(uParam0))
		{
		}
	}
}

bool func_40(vector3 vParam0)
{
	return !PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam0);
}

Vector3 func_41(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_89(vParam0) };
	vVar3 = { func_91(func_91(vVar0, func_90((fParam3 - 1119092736))), vVar0) };
	fVar6 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar7 = -MISC::ATAN2(vVar3.z, BUILTIN::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_91(vVar8, vVar3) };
	fVar14 = (MISC::ATAN2((func_92(vVar8, vVar0) / BUILTIN::VMAG(vVar8)), (func_92(vVar11, vVar0) / BUILTIN::VMAG(vVar11))) + 1127481344);
	return fVar14, fVar7, fVar6;
}

void func_42(var uParam0)
{
	int iVar0;

	switch (*uParam0)
	{
		case 7:
			iVar0 = 1;
			break;
		case 8:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 2;
			break;
		case 10:
			iVar0 = 1;
			break;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(uParam0->f_11, "_terrain_type", iVar0, false);
	}
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1296492.f_32))
	{
		Global_1296492.f_32 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1296492.f_32))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1296492.f_32);
	}
	if (!func_93(iParam0))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), iParam0, false);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam1, iParam2, 0f);
		PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1296492[iVar0 /*2*/]))
		{
			Global_1296492[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_44(var uParam0, float fParam1)
{
	if (func_75(6.914108E-36f, 1))
	{
		if (Global_1102813.f_3664)
		{
			return false;
		}
		if (func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) > fParam1)
		{
			return false;
		}
		if (func_25(uParam0, 4))
		{
			if ((func_25(uParam0, 2) && func_25(uParam0, 1)) && func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) <= 1070386381)
			{
				return true;
			}
		}
		if (func_25(uParam0, 2))
		{
			if ((func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -8.284301E+07f || func_25(uParam0, 16)) && func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) <= 1070386381)
			{
				func_11(uParam0, 16);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_45(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_76(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_94(iVar0, 2))
		{
			if (func_95(vParam2, Global_1951897[iVar0 /*23*/].f_6, 1008981770 /* Float: 0.01f */, 1) && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_96(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1f, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_46(int iParam0, var uParam1)
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (func_31(iParam0, 1))
		{
			if (!*uParam1)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam1 = 1;
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
		}
	}
}

bool func_47(int iParam0, bool bParam1)
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
	iVar0 = func_66(iParam0);
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

bool func_48(int iParam0, int iParam1, int iParam2)
{
	return func_64(Global_1222312[iParam0 /*251*/][iParam1], iParam2);
}

void func_49(int iParam0)
{
	int iVar0;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			PED::DETACH_CARRIABLE_ENTITY(iVar0, false, false);
		}
	}
}

float func_50(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_30(iParam0))
	{
		return 0f;
	}
	iVar0 = func_66(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
}

void func_51()
{
	PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
}

float func_52(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_53(float fParam0)
{
	if (!Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 1;
		if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 < 0f)
		{
			Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = fParam0;
		}
	}
}

int func_54(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_55(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -1028390912; /* Float: -90f */
	}
	else
	{
		fVar0 = 1119092736; /* Float: 90f */
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 1135869952);
		}
	}
	return fVar0;
}

void func_56()
{
	if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;
	}
}

bool func_57(var uParam0)
{
	var uVar0;
	int iVar4;
	vector3 vVar5;

	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_7 = 1;
	while (!func_97(uParam0->f_22, &uVar0))
	{
		return false;
	}
	vVar5 = { uParam0->f_6 };
	iVar4 = 0;
	while (iVar4 < Global_17418.f_2992.f_1)
	{
		if (func_95(vVar5, Global_17418.f_2992.f_1[iVar4 /*5*/].f_1, 0.5f, 1))
		{
			Global_17418.f_2992.f_1[iVar4 /*5*/] = 1;
		}
		iVar4++;
	}
	func_99(func_98(-0.08089317f, -7.367104E+22f), 1);
	if (func_25(uParam0, 2))
	{
		func_99(func_98(-0.08089317f, 2.217208E-35f), 1);
	}
	return true;
}

void func_58(int iParam0)
{
	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iParam0))
	{
		return;
	}
	PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iParam0);
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_100(-6.59161E+11f, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_100(11389876, 0, 255, 0, 0);
	}
}

bool func_60()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar3 = iVar1;
			if (iVar3 != iVar2)
			{
				if (Global_1222019[iVar3 /*9*/].f_1 == Global_1222019[iVar2 /*9*/].f_1)
				{
					if (Global_1222019[iVar3 /*9*/].f_2 == Global_1222019[iVar2 /*9*/].f_2)
					{
						if (Global_1222019[iVar3 /*9*/].f_5)
						{
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

var func_61()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar4 = iVar2;
			if (iVar4 != iVar3)
			{
				if (Global_1222019[iVar4 /*9*/].f_1 == Global_1222019[iVar3 /*9*/].f_1)
				{
					if (Global_1222019[iVar4 /*9*/].f_2 == Global_1222019[iVar3 /*9*/].f_2)
					{
						if (Global_1222019[iVar4 /*9*/].f_6)
						{
							uVar1 = Global_1222019[iVar4 /*9*/].f_3;
							return uVar1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return uVar1;
}

bool func_62(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

float func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ARROWHEAD_AGATE"):
			return -9.421332E+33f;
		case joaat("PROVISION_ARROWHEAD_BONE"):
			return 1.501996E+23f;
		case joaat("PROVISION_ARROWHEAD_CHIPPED"):
			return -1.045672E-11f;
		case joaat("PROVISION_ARROWHEAD_CRUDE"):
			return 3.774631E+27f;
		case joaat("PROVISION_ARROWHEAD_FELDSPAR"):
			return 9.1458E+23f;
		case joaat("PROVISION_ARROWHEAD_FLINT"):
			return 6.189942E+10f;
		case joaat("PROVISION_ARROWHEAD_OBSIDIAN"):
			return -9.418554E+21f;
		case joaat("PROVISION_ARROWHEAD_QUARTZ"):
			return 1.51393E-15f;
		case joaat("PROVISION_ARROWHEAD_RAW"):
			return -6.844066E-10f;
		case joaat("PROVISION_ARROWHEAD_ROUGH"):
			return -2.921919E-14f;
		case joaat("PROVISION_ARROWHEAD_SLATE"):
			return -5.841201E-33f;
		case joaat("PROVISION_ARROWHEAD_SPLINTERED"):
			return -7.626176E+27f;
		case joaat("PROVISION_HRLM_BRUSH_BOAR"):
			return -0.01526815f;
		case joaat("PROVISION_HRLM_BRUSH_EBONY"):
			return 2.736972E+19f;
		case joaat("PROVISION_HRLM_BRUSH_GOATHAIR"):
			return 6.649116E-20f;
		case joaat("PROVISION_HRLM_BRUSH_HORSEHAIR"):
			return -2.131421E-16f;
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD"):
			return 2.755229E-20f;
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD_NG"):
			return -6.187558E+25f;
		case joaat("PROVISION_HRLM_COMB_BOXWOOD"):
			return -2.196023E-08f;
		case joaat("PROVISION_HRLM_COMB_CHERRYWOOD"):
			return 2.351301E-34f;
		case joaat("PROVISION_HRLM_COMB_IVORY"):
			return 1.217484E+08f;
		case joaat("PROVISION_HRLM_COMB_TORTOISESHELL"):
			return 1.676428E+20f;
		case joaat("PROVISION_HRLM_HAIRPIN_EBONY"):
			return 7.003072E-20f;
		case joaat("PROVISION_HRLM_HAIRPIN_IVORY"):
			return -9.779351E+17f;
		case joaat("PROVISION_HRLM_HAIRPIN_JADE"):
			return -3.659031E+15f;
		case joaat("PROVISION_HRLM_HAIRPIN_METAL"):
			return -2.492485E+32f;
		case joaat("PROVISION_HRLM_HAIRPIN_WOODEN"):
			return -3.449234E-19f;
		case joaat("PROVISION_JEWELRY_AMETHYST_NECKLACE"):
			return -1.155348E+36f;
		case joaat("PROVISION_JEWELRY_BLCK_PEARL_NECKLACE"):
			return -3.515815E-37f;
		case joaat("PROVISION_JEWELRY_CARVED_BRACELET"):
			return 2.106974E-19f;
		case joaat("PROVISION_JEWELRY_CORAL_DNGL_EARRING"):
			return -1.133669E-24f;
		case joaat("PROVISION_JEWELRY_CORAL_RING"):
			return -2.897134E+25f;
		case joaat("PROVISION_JEWELRY_DMND_BNGLE_BRACELET"):
			return 7.687207E-28f;
		case joaat("PROVISION_JEWELRY_DMND_PENDT_EARRING"):
			return -5.125846E+34f;
		case joaat("PROVISION_JEWELRY_DROP_EARRING"):
			return -4.009837E-28f;
		case joaat("PROVISION_JEWELRY_ELK_TOOTH_EARRING"):
			return 266111.2f;
		case joaat("PROVISION_JEWELRY_EMERALD_EARRING"):
			return -3327282f;
		case joaat("PROVISION_JEWELRY_EMERALD_RING"):
			return -5.808219E-15f;
		case joaat("PROVISION_JEWELRY_FRENCH_DMND_RING"):
			return -4.456909E+29f;
		case joaat("PROVISION_JEWELRY_GLD_BNGLE_BRACELET"):
			return -1.812495E-08f;
		case joaat("PROVISION_JEWELRY_GLD_CROSS_NECKLACE"):
			return -1.409106E+07f;
		case joaat("PROVISION_JEWELRY_GLD_PEARL_NECKLACE"):
			return 3.15258E+10f;
		case joaat("PROVISION_JEWELRY_GLD_PENDT_NECKLACE"):
			return -9.822589E+26f;
		case joaat("PROVISION_JEWELRY_GRNET_BRACELET"):
			return -2.28911E+17f;
		case joaat("PROVISION_JEWELRY_GRNET_POST_EARRING"):
			return 2.438653E+14f;
		case joaat("PROVISION_JEWELRY_MOON_RING"):
			return -1.353122E-30f;
		case joaat("PROVISION_JEWELRY_MTHR_PEARL_NECKLACE"):
			return 5.079787E-20f;
		case joaat("PROVISION_JEWELRY_ONYX_RING"):
			return 8.593733E-14f;
		case joaat("PROVISION_JEWELRY_PEARL_BRACELET"):
			return -2.235354E-13f;
		case joaat("PROVISION_JEWELRY_PEARL_EARRING"):
			return 2.997674E-17f;
		case joaat("PROVISION_JEWELRY_PEARL_RING"):
			return 1.382531E-25f;
		case joaat("PROVISION_JEWELRY_PERS_TURQ_RING"):
			return -5.720643E+29f;
		case joaat("PROVISION_JEWELRY_PORCELAIN_NECKLACE"):
			return 1.099238E-19f;
		case joaat("PROVISION_JEWELRY_QN_DMND_EARRING"):
			return -4.358548E-17f;
		case joaat("PROVISION_JEWELRY_RUDY_DNGL_EARRING"):
			return -8.112738E-32f;
		case joaat("PROVISION_JEWELRY_SLVR_PEARL_NECKLACE"):
			return 0.0003165052f;
		case joaat("PROVISION_JEWELRY_SPHR_BNGLE_BRACELET"):
			return 2.612652E-18f;
		case joaat("PROVISION_JEWELRY_SPHR_BRACELET"):
			return -1.275876E+17f;
		case joaat("PROVISION_JEWELRY_TOPAZ_NECKLACE"):
			return -4.878674E+37f;
		case joaat("PROVISION_JEWELRY_TOPAZ_RING"):
			return 1.321043E+30f;
		case joaat("PROVISION_JEWELRY_TURQ_STUD_EARRING"):
			return -8.45331E+08f;
		case joaat("PROVISION_JEWELRY_TURQUOISE_BRACELET"):
			return 7.056061E-13f;
		case joaat("PROVISION_JEWELRY_TURQUOISE_RING"):
			return -3.256459E+37f;
		case joaat("PROVISION_JEWELRY_WHT_DMND_EARRING"):
			return 2.592573E+36f;
		case joaat("PROVISION_JEWELRY_WHTGLD_DMND_RING"):
			return -5.526475E-21f;
		case joaat("PROVISION_JEWELRY_YLWGLD_DMND_RING"):
			return 3.522983E-12f;
		case joaat("PROVISION_COIN_1700_NY_TKN"):
			return -2.12089E-38f;
		case joaat("PROVISION_COIN_1787_CENT_TKN"):
			return 5.623926E+16f;
		case joaat("PROVISION_COIN_1789_PNY"):
			return -4.062344E-22f;
		case joaat("PROVISION_COIN_1792_LIB_QTR"):
			return -1.896738E+36f;
		case joaat("PROVISION_COIN_1792_NICKEL"):
			return 1.033424E+26f;
		case joaat("PROVISION_COIN_1792_QTR"):
			return 9.680905E-07f;
		case joaat("PROVISION_COIN_1794_SLV_DLR"):
			return -5.017405E-26f;
		case joaat("PROVISION_COIN_1795_HLF_EAG"):
			return 9.132141E-25f;
		case joaat("PROVISION_COIN_1796_HLF_PNY"):
			return -4.581091E+13f;
		case joaat("PROVISION_COIN_1797_GLD_EAG"):
			return -5.194033E-28f;
		case joaat("PROVISION_COIN_1798_SLV_DLR"):
			return 2.189217E+21f;
		case joaat("PROVISION_COIN_1800_FIVE_DLR"):
			return -6.038724E-36f;
		case joaat("PROVISION_COIN_1800_GLD_DLR"):
			return -3.631196E-12f;
		case joaat("PROVISION_COIN_1800_GLD_QTR"):
			return 3.199607E+16f;
		case joaat("PROVISION_COIN_1800_HLF_DIME"):
			return -1.41589E-30f;
		case joaat("PROVISION_CONDOR_EGG"):
			return 3.015216E-20f;
		case joaat("PROVISION_DUCK_EGG"):
			return 1.005541E+16f;
		case joaat("PROVISION_EAGLE_EGG"):
			return -1.05064E-21f;
		case joaat("PROVISION_EGRET_EGG"):
			return 1.697414E-07f;
		case joaat("PROVISION_GOOSE_EGG"):
			return -9.308872E-12f;
		case joaat("PROVISION_HAWK_EGG"):
			return 1.510599E-20f;
		case joaat("PROVISION_HERON_EGG"):
			return 0.4782736f;
		case joaat("PROVISION_LOON_EGG"):
			return 1.919674E+27f;
		case joaat("PROVISION_SPOONBILL_EGG"):
			return -1.530373E+28f;
		case joaat("PROVISION_VULTURE_EGG"):
			return -1.312039E+12f;
		case 972001444:
			return -5.478714E-31f;
		case 1051711290:
			return 3.465091E+27f;
		case -1574273736:
			return 2.022933E-30f;
		case -564862271:
			return 2.245251E+26f;
		case 698668228:
			return 1.542131E-33f;
		case -282219948:
			return -5.975517E-05f;
		case -925996336:
			return -1.59262E+24f;
		case -488648162:
			return -1.777382E-14f;
		case -1471980896:
			return -279149.7f;
		case 1287909434:
			return -157.0271f;
		case -399160143:
			return -2.235078E+38f;
		case -413279196:
			return -0.0001479637f;
		case -1901964465:
			return 7.904028E+30f;
		case -1962391614:
			return 1.195402E+24f;
		case 1081670855:
			return 1.199093E-12f;
		case 2031475177:
			return 9.658651E-30f;
		case -669648037:
			return -8.952152E-22f;
		case -1695562218:
			return -2.136615E+38f;
		case 866218183:
			return -1.369324E-24f;
		case 212472674:
			return -6.100422E+11f;
		default:
			break;
	}
	return -9.421332E+33f;
}

bool func_64(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_65(var uParam0, int iParam1)
{
	func_101(uParam0, iParam1);
}

int func_66(int iParam0)
{
	return iParam0;
}

void func_67(int iParam0)
{
	if (!func_102(iParam0))
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

int func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1296492.f_32) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1296492.f_32))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1296492.f_32);
	}
	PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, iParam1, iParam2);
	Var1.f_1 = -1f;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1296492[iVar0 /*2*/]) && Global_1296492[iVar0 /*2*/] == iParam0)
		{
			MISC::COPY_SCRIPT_STRUCT(&(Global_1296492[iVar0 /*2*/]), &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_69(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_70(var uParam0, int iParam1)
{
	func_103(uParam0, iParam1);
}

void func_71(var uParam0)
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_CONTROL_SHAKE(0);
		uParam0->f_4 = -1;
	}
	AUDIO::_RELEASE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_72(int iParam0, int iParam1)
{
	if (func_88(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_73(int iParam0, int iParam1)
{
	if (!func_104(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_105();
	}
}

void func_74(int iParam0, int iParam1, bool bParam2)
{
	if (func_104(iParam0, iParam1) && (!bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_105();
	}
}

bool func_75(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_62(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_106(bParam0);
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
			if (!func_107(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_108(bParam0))
			{
				return true;
			}
			break;
	}
	return func_109(bParam0, 0, 0, 0) >= iParam1;
}

bool func_76(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_77(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_109(-4.629755E-24f, 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_110(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_111())
			{
				return 0;
			}
			break;
		case 3:
			if (Global_1048576)
			{
				return 0;
			}
			break;
		case 4:
			if (func_112())
			{
				return 0;
			}
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				return 0;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
			{
				return 0;
			}
			break;
		case 7:
			if (!bParam1 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		case 8:
			if (bParam2 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		default:
			uParam0->f_11 = 0;
			break;
	}
	return 1;
}

float func_78()
{
	return Global_1156096.f_2169[89 /*205*/].f_201;
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_80(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

void func_81(var uParam0)
{
	func_113(uParam0, 0f);
}

float func_82(var uParam0)
{
	if (!func_114(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_115(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_116() - uParam0->f_1);
}

bool func_83()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_117(Global_33, 8.330918E+10f)) && !func_117(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

bool func_84(int iParam0)
{
	if (func_118(iParam0))
	{
		return true;
	}
	if (func_119(iParam0))
	{
		return true;
	}
	if (func_120(iParam0))
	{
		return true;
	}
	if (func_121(iParam0))
	{
		return true;
	}
	if (func_122(iParam0))
	{
		return true;
	}
	return false;
}

bool func_85(int iParam0, bool bParam1)
{
	if (bParam1 && !func_30(iParam0))
	{
		return false;
	}
	return !func_94(iParam0, 4);
}

void func_86(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_30(iParam0))
	{
		return;
	}
	iVar0 = func_66(iParam0);
	if (bParam1)
	{
		func_123(iParam0, 4);
		if (bParam3)
		{
			func_124(iVar0, 1);
		}
		func_125(iVar0, 1);
	}
	else
	{
		func_126(iParam0, 4);
		func_125(iVar0, 0);
	}
}

int func_87()
{
	if (!((UNLOCK::UNLOCK_IS_VISIBLE(-6.916609E+21f) || UNLOCK::UNLOCK_IS_VISIBLE(2.188911E-28f)) || UNLOCK::UNLOCK_IS_VISIBLE(-1.680548E+28f)))
	{
		return 0;
	}
	else if (!UNLOCK::UNLOCK_IS_VISIBLE(-3.215088E-27f))
	{
		return 0;
	}
	return 1;
}

bool func_88(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_89(vector3 vParam0)
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

Vector3 func_90(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_91(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_92(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_93(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_127() == 0)
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_127()))
	{
		return false;
	}
	Var0 = func_127();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&uVar5, &Var0))
			{
				iVar15 = MISC::GET_HASH_KEY(&uVar5);
				if (iVar13 == iVar15)
				{
					return true;
				}
			}
		}
		iVar14++;
	}
	return false;
}

bool func_94(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

bool func_95(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_96(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_124(iParam0, 1);
	func_125(iParam0, 1);
	func_126(iParam0, 128);
}

bool func_97(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_128(&Var0, 2.95884E+10f);
	return func_129(iParam0, &Var0, uParam1, 0, 0);
}

struct<2> func_98(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_99(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_100(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_130(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_101(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_102(int iParam0)
{
	return func_94(iParam0, 2);
}

void func_103(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_104(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_105()
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
}

int func_106(bool bParam0)
{
	vector3 vVar0;

	if (!func_62(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_107(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_62(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_131(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_132("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_133(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_134(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_135(iVar1);
				return true;
			}
			iVar3++;
		}
		func_135(iVar1);
	}
	return false;
}

bool func_108(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_62(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_136(bParam0);
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
	iVar1 = func_137(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_138(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_139(bParam0);
	iVar2 = func_138(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_109(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_62(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_106(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_131(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_140(bParam0, 0);
	}
	if (func_141(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_142(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_143(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_142(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_110(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_111()
{
	return func_144() != -1;
}

bool func_112()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_113(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_116() - fParam1);
	func_145(uParam0, 1);
	func_146(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_114(var uParam0)
{
	return func_147(*uParam0, 1);
}

bool func_115(var uParam0)
{
	return func_147(*uParam0, 2);
}

float func_116()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_117(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_118(int iParam0)
{
	return func_148(iParam0, 0);
}

bool func_119(int iParam0)
{
	return func_148(iParam0, 3);
}

bool func_120(int iParam0)
{
	return (func_148(iParam0, 4) || func_148(iParam0, 5));
}

bool func_121(int iParam0)
{
	return func_148(iParam0, 6);
}

bool func_122(int iParam0)
{
	return func_148(iParam0, 7);
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_124(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_94(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_125(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_126(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_127()
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

void func_128(var uParam0, int iParam1)
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

int func_129(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_149(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_150(uParam2, iParam0, Var1);
	return 1;
}

int func_130(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_151(iParam2, -3.005759E+25f);
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
	func_152(uParam1, bParam0, Var3);
	return 1;
}

bool func_131(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_62(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_106(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_153(bParam0, 9.811189E+11f))
	{
		func_154(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_132(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_142(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_133(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_134(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_135(int iParam0)
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

int func_136(bool bParam0)
{
	struct<2> Var0;

	if (!func_62(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_137(bool bParam0)
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

int func_138(var uParam0, int iParam1)
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

int func_139(bool bParam0)
{
	int iVar0;

	iVar0 = func_136(bParam0);
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

int func_140(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_155(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_157(&Var0, func_156(0));
	}
	if (!func_158(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_135(iVar18);
	return iVar19;
}

int func_141(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_160(func_159(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_142(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_143(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_161(bParam0, bParam1, 0) };
	return func_162(bParam0, Var0, Var0.f_4, bParam1);
}

int func_144()
{
	return Global_1149157.f_137;
}

void func_145(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_146(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_147(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_148(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

void func_149(var uParam0)
{
	func_128(uParam0, 8.505438E-34f);
	if (func_163() == 3.272964E+34f)
	{
		func_128(uParam0, 8.967694E-17f);
	}
	else
	{
		func_128(uParam0, 1.721179E-28f);
	}
}

void func_150(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_164(uParam0))
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

void func_151(int iParam0, int iParam1)
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

void func_152(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_164(uParam0))
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

int func_153(bool bParam0, int iParam1)
{
	if (!func_62(bParam0, 0))
	{
		return func_165(func_159(bParam0), iParam1);
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

void func_154(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_155(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_156(bool bParam0)
{
	int iVar0;

	iVar0 = func_142(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_162(8.681942E-06f, func_166(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_162(8.681942E-06f, func_166(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_162(8.681942E-06f, func_166(bParam0), -1.942248E+12f, 0);
}

void func_157(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_158(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_142(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_159(bool bParam0)
{
	return bParam0;
}

bool func_160(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

struct<5> func_161(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_166(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_106(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_162(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_156(bParam1) };
			if (iParam2 && func_167(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_168(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_168(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_169(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_170(bParam1) };
			switch (func_136(bParam0))
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
			if (func_171(bParam0, -2.580501E-27f))
			{
				Var0 = { func_162(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_171(bParam0, -4.220332E-15f))
			{
				Var0 = { func_162(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_162(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_171(bParam0, -3.171238E-21f))
			{
				Var0 = { func_162(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_172(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_171(bParam0, -3.171238E-21f))
			{
				Var0 = { func_162(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_162(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_62(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_142(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_163()
{
	return Global_1953279.f_1;
}

bool func_164(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_165(bool bParam0, int iParam1)
{
	if (!func_160(bParam0, 2))
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

struct<4> func_166(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_142(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_162(2.982335E+09f, func_173(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_162(2.982335E+09f, func_173(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_162(2.982335E+09f, func_173(), -5.45926E-19f, bParam0);
}

int func_167(bool bParam0, bool bParam1)
{
	if (func_136(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_174();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_168(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_175(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_169(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_176(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_170(bool bParam0)
{
	int iVar0;

	iVar0 = func_142(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_162(3.507197E-29f, func_166(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_162(3.507197E-29f, func_166(bParam0), 12999093, 0);
}

bool func_171(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_136(bParam0);
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
			if (func_177(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_172(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_178(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

struct<4> func_173()
{
	struct<4> Var0;

	return Var0;
}

int func_174()
{
	if (func_179(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_175(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_62(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_141(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_162(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_142(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_142(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_176(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_142(0);
	*iParam1 = { func_162(bParam0, func_156(0), fParam3, 0) };
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

bool func_177(bool bParam0, int iParam1, int iParam2)
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

int func_178(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_142(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_179(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_180(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_142(bParam1), iParam0, bParam3);
}

bool func_180(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

