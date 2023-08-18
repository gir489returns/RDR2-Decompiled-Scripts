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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = -1;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = -1082130432;
	var uLocal_60 = -1082130432;
	var uLocal_61 = 0;
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
	*uParam0 = 3;
	uParam0->f_1 = func_9(vParam1, uParam0);
	uParam0->f_19 = func_10(uParam0);
	func_11(uParam0);
	uParam0->f_20 = func_12();
	uParam0->f_12 = "script@mech@treasure_hunting@chest";
	uParam0->f_13 = "PBL_CHEST_01";
	if (!func_13(uParam0, 16))
	{
		func_14(uParam0, 16);
	}
	uParam0->f_2 = 0;
	uParam0->f_22 = func_15(uParam0);
	uParam0->f_5 = func_16(uParam0->f_22);
	uParam0->f_10 = vParam1.x;
	uParam0->f_9 = vParam1.y;
	uParam0->f_6 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_9, true) };
	func_17(&(uParam0->f_34), uParam0->f_6);
	func_18(*uParam0, uParam0->f_1);
	uParam0->f_17 = func_19(0);
	uParam0->f_18 = func_20();
	if (func_21(uParam0->f_6))
	{
		if (func_13(uParam0, 16))
		{
			if (func_22())
			{
				if (!func_13(uParam0, 64))
				{
					func_14(uParam0, 64);
				}
			}
		}
	}
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
	func_23(&(uParam0->f_14), 1, 1);
	func_24(uParam0);
	if (func_13(uParam0, 2))
	{
		func_25(uParam0->f_6);
	}
	func_26(*uParam0, uParam0->f_1, 1);
	func_27(*uParam0, uParam0->f_1, 1);
	func_27(*uParam0, uParam0->f_1, 16);
	func_27(*uParam0, uParam0->f_1, 32);
	func_28();
	func_29();
	func_30(&(uParam0->f_34));
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_29))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_29, false);
	}
	func_31(0);
	func_32(&(uParam0->f_34));
	SCRIPTS::_0xE7282390542F570D(uParam0->f_10);
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

	if (func_13(uParam0, 32))
	{
		if ((MISC::GET_FRAME_COUNT() % 5) == 0 && func_33(Global_33, uParam0->f_6, 3f, 1, 1))
		{
			if (!func_34(uParam0))
			{
				func_18(*uParam0, uParam0->f_1);
				Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = uParam0->f_1;
			}
		}
	}
	if (func_35(uParam0) < 10)
	{
		if (func_13(uParam0, 16))
		{
			if (!func_36(*uParam0, uParam0->f_1, 16))
			{
				if (func_37(uParam0->f_6, &(uParam0->f_26), &(uParam0->f_24), &(uParam0->f_25), func_13(uParam0, 1), 2f))
				{
					func_38(*uParam0, uParam0->f_1, 16);
				}
			}
		}
		if (func_39(*uParam0) && func_34(uParam0))
		{
			func_40(uParam0, 11);
			if (func_41(uParam0->f_14))
			{
				func_23(&(uParam0->f_14), 1, 1);
			}
			func_29();
		}
		else if (func_35(uParam0) <= 6 && func_35(uParam0) > 1)
		{
			if (func_36(*uParam0, uParam0->f_1, 16))
			{
				func_40(uParam0, 12);
			}
		}
	}
	bVar0 = (func_35(uParam0) <= 6 && !func_42(uParam0->f_14, 1));
	bVar1 = !func_13(uParam0, 32);
	if (func_43(func_13(uParam0, 2)))
	{
		if (func_13(uParam0, 2))
		{
			func_44(uParam0->f_14, uParam0->f_6);
		}
		else
		{
			func_45(&(uParam0->f_34), uParam0->f_6, bVar0, bVar1, 1, 0);
		}
	}
	func_46(uParam0->f_14);
	func_47(uParam0->f_6, *uParam0, uParam0->f_1, 10f);
	switch (func_35(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(uParam0->f_17, false);
			STREAMING::REQUEST_MODEL(uParam0->f_20, false);
			STREAMING::REQUEST_MODEL(uParam0->f_18, false);
			if (func_13(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_19, false);
			}
			func_48(&(uParam0->f_34.f_6), uParam0->f_6, 1069547520 /* Float: 1.5f */, 1, 319, 0);
			if (func_13(uParam0, 32))
			{
				if (!func_49(Global_1222312[*uParam0 /*251*/][uParam0->f_1], 16))
				{
					func_40(uParam0, 1);
				}
				else if (func_50(&(uParam0->f_11), uParam0->f_12, "PBL_LOOTED", uParam0->f_6, uParam0->f_26, uParam0->f_19, uParam0->f_24, uParam0->f_17, uParam0->f_25, uParam0->f_20, func_13(uParam0, 1)))
				{
					func_40(uParam0, 12);
				}
			}
			else if (func_49(Global_1222312[*uParam0 /*251*/][uParam0->f_1], 16))
			{
				if (func_50(&(uParam0->f_11), uParam0->f_12, "PBL_LOOTED", uParam0->f_6, uParam0->f_26, uParam0->f_19, uParam0->f_24, uParam0->f_17, uParam0->f_25, uParam0->f_20, func_13(uParam0, 1)))
				{
					if (Global_1222312.f_2763 != uParam0->f_1)
					{
						func_40(uParam0, 12);
					}
					else
					{
						func_40(uParam0, 15);
					}
				}
			}
			else if (!func_21(uParam0->f_6))
			{
				func_40(uParam0, 15);
			}
			else if (!func_13(uParam0, 64))
			{
				func_40(uParam0, 1);
			}
			break;
		case 1:
			if ((STREAMING::HAS_MODEL_LOADED(uParam0->f_17) && STREAMING::HAS_MODEL_LOADED(uParam0->f_20)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
			{
				if (func_13(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_19))
					{
						return false;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						uParam0->f_26 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_19, uParam0->f_6, true, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						return false;
					}
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_6 + Vector(1f, 0f, 0f), &(uParam0->f_33), &(uParam0->f_30)))
					{
						return false;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_26, func_51(uParam0->f_30, 0), 2, true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
				{
					uParam0->f_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_17, uParam0->f_6 + Vector(-1054867456, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25))
				{
					uParam0->f_25 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_20, uParam0->f_6 + Vector(-1046478848, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25))
				{
					return false;
				}
				func_40(uParam0, 2);
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
			{
				uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_12, 64, uParam0->f_13, true, true);
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
			{
				return false;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
			func_40(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "CHEST", uParam0->f_24, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "DRESSING", uParam0->f_25, 0);
				if (func_13(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "MOUND", uParam0->f_26, 0);
					}
				}
				func_40(uParam0, 4);
			}
			break;
		case 4:
			if (func_43(func_13(uParam0, 2)))
			{
				if (func_13(uParam0, 1))
				{
					func_52(uParam0->f_26, uParam0->f_26, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_26, 3.474616E-32f);
					func_40(uParam0, 5);
				}
				else
				{
					func_40(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_53(uParam0, 15f))
			{
				if (!func_41(uParam0->f_14))
				{
					uParam0->f_14 = func_54("UC_CLT_DIG", -7.068217E+21f, uParam0->f_6, 1.6f, 3, 1, 0, 4, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0);
				}
				func_40(uParam0, 6);
			}
			break;
		case 6:
			if (func_41(uParam0->f_14))
			{
				if (!func_13(uParam0, 32))
				{
					func_55(uParam0->f_14, &(uParam0->f_34.f_5));
				}
				if (func_56(uParam0->f_14, 1))
				{
					if (func_36(*uParam0, uParam0->f_1, 32))
					{
						func_31(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						func_23(&(uParam0->f_14), 1, 1);
						func_57(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_27(*uParam0, uParam0->f_1, 32);
						func_40(uParam0, 7);
					}
				}
				else if (func_34(uParam0))
				{
					if (func_58(uParam0->f_14, 1) > 0f)
					{
						func_59();
						func_61(func_60(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1));
					}
					else if (func_58(uParam0->f_14, 1) == 0f)
					{
						func_29();
					}
				}
			}
			break;
		case 7:
			func_59();
			if ((((func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -3.273909E-18f && func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == -3.273909E-18f) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_CARRYING_SOMETHING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_24(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, func_63(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_6, 1), 2);
				func_40(uParam0, 8);
			}
			break;
		case 8:
			func_64();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_11, "player", uParam0->f_13, 1.48f, true, 128, 20000, -1f);
			uParam0->f_29 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_6, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			func_40(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_11, false))
			{
				func_40(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_11, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_11, false))
			{
				if (!func_65(uParam0))
				{
					return false;
				}
				func_66(uParam0->f_9);
				func_67(func_13(uParam0, 1), func_13(uParam0, 2));
				func_31(0);
				func_32(&(uParam0->f_34));
				if (func_13(uParam0, 2))
				{
					func_25(uParam0->f_6);
				}
				if (func_13(uParam0, 16))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_24, "ChestDugUp", true);
					TASK::_SET_SCENARIO_CONTAINER_OPENING_STATE(uParam0->f_24, true);
					func_38(*uParam0, uParam0->f_1, 16);
				}
				func_66(uParam0->f_9);
				func_29();
				if (func_13(uParam0, 2) && func_13(uParam0, 32))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -8.284301E+07f, false, 0, false, false);
				}
				func_40(uParam0, 15);
			}
			break;
		case 11:
			if (func_36(*uParam0, uParam0->f_1, 1))
			{
				if (func_68())
				{
					func_27(*uParam0, uParam0->f_1, 1);
					func_40(uParam0, 12);
				}
				else if (!func_39(*uParam0))
				{
					func_40(uParam0, 4);
					func_27(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
		case 12:
			if (func_41(uParam0->f_14))
			{
				func_23(&(uParam0->f_14), 1, 1);
			}
			if (func_13(uParam0, 16))
			{
				uParam0->f_21 = func_69(uParam0->f_5);
				STREAMING::REQUEST_MODEL(uParam0->f_21, false);
			}
			func_27(*uParam0, uParam0->f_1, 1);
			func_40(uParam0, 13);
			break;
		case 13:
			if (!func_39(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_21))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28))
					{
						uParam0->f_28 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_21, uParam0->f_6 + Vector(1036831949, 0f, 0f), false, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28))
					{
						return false;
					}
					MAP::_0x1726963E6049DB53(uParam0->f_28);
					func_40(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_28) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_28))
			{
				uParam0->f_28 = 0;
				func_40(uParam0, 13);
				return false;
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), true), uParam0->f_6, true) < 1069547520)
				{
					func_66(uParam0->f_9);
					Global_1222312.f_2763 = uParam0->f_1;
					func_40(uParam0, 15);
				}
			}
			break;
	}
	return false;
}

int func_9(struct<2> Param0, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = Param0.f_1;
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar2))
	{
		iVar1 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iVar2));
		iVar0 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_HEADING(iVar2, true));
		bVar3 = iVar0 == 99;
		if (bVar3)
		{
			func_14(uParam3, 32);
		}
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = iVar1;
	}
	switch (iVar1)
	{
		case 200:
			return 0;
		case 201:
			return 1;
		case 202:
			return 2;
		case 203:
			return 3;
		case 204:
			return 4;
		case 205:
			return 5;
		case 206:
			return 6;
		case 207:
			return 7;
		case 208:
			return 8;
		case 209:
			return 9;
		case 210:
			return 10;
		case 211:
			return 11;
		case 212:
			return 12;
		case 213:
			return 13;
		case 214:
			return 14;
		case 215:
			return 15;
		case 216:
			return 16;
		case 217:
			return 17;
		case 218:
			return 18;
		case 219:
			return 19;
		case 220:
			return 20;
		case 221:
			return 21;
		case 222:
			return 22;
		case 223:
			return 23;
		case 224:
			return 24;
		case 225:
			return 25;
		case 226:
			return 26;
		case 227:
			return 27;
		case 228:
			return 28;
		case 229:
			return 29;
		case 4:
			return 30;
		case 230:
			return 31;
		case 5:
			return 32;
		case 231:
			return 33;
		case 9:
			return 34;
		case 232:
			return 35;
		case 10:
			return 36;
		case 11:
			return 37;
		case 233:
			return 38;
		case 6:
			return 39;
		case 7:
			return 40;
		case 8:
			return 41;
		case 1:
			return 42;
		case 2:
			return 43;
		case 3:
			return 44;
		case 12:
			return 45;
		case 13:
			return 46;
		case 14:
			return 47;
		case 15:
			return 48;
		case 16:
			return 49;
		case 17:
			return 50;
		case 18:
			return 51;
		case 19:
			return 52;
		case 20:
			return 53;
		case 21:
			return 54;
		case 22:
			return 55;
		default:
			break;
	}
	return 0;
}

float func_10(var uParam0)
{
	float fVar0;

	switch (uParam0->f_1)
	{
		case 42:
			fVar0 = 57678.12f;
			break;
		case 43:
			fVar0 = -2.118086E-31f;
			break;
		case 44:
			fVar0 = 1.448199E+20f;
			break;
		case 30:
			fVar0 = -5.009458E+14f;
			break;
		case 32:
			fVar0 = 2.419464E+14f;
			break;
		case 39:
			fVar0 = -0.001567479f;
			break;
		case 40:
			fVar0 = -1.598453E-33f;
			break;
		case 41:
			fVar0 = 248.821f;
			break;
		case 34:
			fVar0 = 248.821f;
			break;
		case 36:
			fVar0 = -1.598453E-33f;
			break;
		case 37:
			fVar0 = -0.001567479f;
			break;
	}
	return fVar0;
}

void func_11(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 30:
		case 32:
		case 34:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
			func_14(uParam0, 1);
			break;
		default:
			func_14(uParam0, 2);
			break;
	}
}

float func_12()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 40000);
	if (iVar0 > 30000)
	{
		return 3.320209E+33f;
	}
	else if (iVar0 > 20000)
	{
		return -2.221856E+16f;
	}
	else if (iVar0 > 10000)
	{
		return -5.714686E+34f;
	}
	return -7.74473E-13f;
}

bool func_13(var uParam0, int iParam1)
{
	return func_49(uParam0->f_15, iParam1);
}

void func_14(var uParam0, int iParam1)
{
	if (!func_49(uParam0->f_15, iParam1))
	{
		func_70(&(uParam0->f_15), iParam1);
	}
}

float func_15(var uParam0)
{
	float fVar0;

	switch (uParam0->f_1)
	{
		case 0:
		case 1:
		case 2:
			fVar0 = -0.01526815f;
			break;
		case 3:
		case 4:
		case 5:
			fVar0 = 2.736972E+19f;
			break;
		case 6:
		case 7:
		case 8:
			fVar0 = 6.649116E-20f;
			break;
		case 9:
		case 10:
		case 11:
			fVar0 = -2.131421E-16f;
			break;
		case 12:
		case 13:
		case 14:
			fVar0 = 2.755229E-20f;
			break;
		case 15:
		case 16:
		case 17:
			fVar0 = -6.187558E+25f;
			break;
		case 18:
		case 19:
		case 20:
			fVar0 = -2.196023E-08f;
			break;
		case 21:
		case 22:
		case 23:
			fVar0 = 2.351301E-34f;
			break;
		case 24:
		case 25:
		case 26:
			fVar0 = 1.217484E+08f;
			break;
		case 27:
		case 28:
		case 29:
			fVar0 = 1.676428E+20f;
			break;
		case 30:
		case 31:
		case 32:
		case 48:
		case 49:
			fVar0 = 7.003072E-20f;
			break;
		case 33:
		case 34:
		case 35:
		case 53:
			fVar0 = -9.779351E+17f;
			break;
		case 36:
		case 37:
		case 38:
		case 54:
		case 55:
			fVar0 = -3.659031E+15f;
			break;
		case 39:
		case 40:
		case 41:
		case 50:
		case 51:
		case 52:
			fVar0 = -2.492485E+32f;
			break;
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			fVar0 = -3.449234E-19f;
			break;
	}
	return fVar0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COLLECTIBLE_ARROWHEAD_AGATE"):
			return -7.04722E+29f;
		case joaat("COLLECTIBLE_ARROWHEAD_BONE"):
			return -7.572598E-29f;
		case joaat("COLLECTIBLE_ARROWHEAD_CHIPPED"):
			return 1.96168E+17f;
		case joaat("COLLECTIBLE_ARROWHEAD_CRUDE"):
			return 0.916188f;
		case joaat("COLLECTIBLE_ARROWHEAD_FELDSPAR"):
			return 1.406238E+18f;
		case joaat("COLLECTIBLE_ARROWHEAD_FLINT"):
			return -1682865f;
		case joaat("COLLECTIBLE_ARROWHEAD_OBSIDIAN"):
			return -1.893859E-19f;
		case joaat("COLLECTIBLE_ARROWHEAD_QUARTZ"):
			return -15131.62f;
		case joaat("COLLECTIBLE_ARROWHEAD_RAW"):
			return -2.806528E-28f;
		case joaat("COLLECTIBLE_ARROWHEAD_ROUGH"):
			return 1.534097E-29f;
		case joaat("COLLECTIBLE_ARROWHEAD_SLATE"):
			return -1.682328E-34f;
		case joaat("COLLECTIBLE_ARROWHEAD_SPLINTERED"):
			return 5.977802E-12f;
		case joaat("COLLECTIBLE_HRLM_BRUSH_BOAR"):
			return -6.37951E+11f;
		case joaat("COLLECTIBLE_HRLM_BRUSH_EBONY"):
			return 0.007797475f;
		case joaat("COLLECTIBLE_HRLM_BRUSH_GOATHAIR"):
			return 2.080257E+24f;
		case joaat("COLLECTIBLE_HRLM_BRUSH_HORSEHAIR"):
			return -2.1016E-20f;
		case joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD"):
			return -1.186502E-29f;
		case joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD_NG"):
			return -7.417252E+37f;
		case joaat("COLLECTIBLE_HRLM_COMB_BOXWOOD"):
			return 4.09118E+12f;
		case joaat("COLLECTIBLE_HRLM_COMB_CHERRYWOOD"):
			return 5.655829E-30f;
		case joaat("COLLECTIBLE_HRLM_COMB_IVORY"):
			return -3.613674E-25f;
		case joaat("COLLECTIBLE_HRLM_COMB_TORTOISESHELL"):
			return -6.614559E-29f;
		case joaat("COLLECTIBLE_HRLM_HAIRPIN_EBONY"):
			return 6.644601E+32f;
		case joaat("COLLECTIBLE_HRLM_HAIRPIN_IVORY"):
			return -9.812376E-36f;
		case joaat("COLLECTIBLE_HRLM_HAIRPIN_JADE"):
			return 1.229176E-33f;
		case joaat("COLLECTIBLE_HRLM_HAIRPIN_METAL"):
			return 106806.8f;
		case joaat("COLLECTIBLE_HRLM_HAIRPIN_WOODEN"):
			return 301233.3f;
		case joaat("COLLECTIBLE_JEWELRY_AMETHYST_NECKLACE"):
			return 2.553122E-14f;
		case joaat("COLLECTIBLE_JEWELRY_BLCK_PEARL_NECKLACE"):
			return -8.699886E+19f;
		case joaat("COLLECTIBLE_JEWELRY_CARVED_BRACELET"):
			return -1.173449E+20f;
		case joaat("COLLECTIBLE_JEWELRY_CORAL_DNGL_EARRING"):
			return -1.087266E+33f;
		case joaat("COLLECTIBLE_JEWELRY_CORAL_RING"):
			return 3.578913E-37f;
		case joaat("COLLECTIBLE_JEWELRY_DMND_BNGLE_BRACELET"):
			return 7.32687E-28f;
		case joaat("COLLECTIBLE_JEWELRY_DMND_PENDT_EARRING"):
			return -2.085946E-09f;
		case joaat("COLLECTIBLE_JEWELRY_DROP_EARRING"):
			return 2.728962E-27f;
		case joaat("COLLECTIBLE_JEWELRY_ELK_TOOTH_EARRING"):
			return 2.485832E+14f;
		case joaat("COLLECTIBLE_JEWELRY_EMERALD_EARRING"):
			return -4.592855E-11f;
		case joaat("COLLECTIBLE_JEWELRY_EMERALD_RING"):
			return -7.176793E+08f;
		case joaat("COLLECTIBLE_JEWELRY_FRENCH_DMND_RING"):
			return -8.334834E-30f;
		case joaat("COLLECTIBLE_JEWELRY_GLD_BNGLE_BRACELET"):
			return 2.188728E-17f;
		case joaat("COLLECTIBLE_JEWELRY_GLD_CROSS_NECKLACE"):
			return 2.7939E-18f;
		case joaat("COLLECTIBLE_JEWELRY_GLD_PEARL_NECKLACE"):
			return -1.520344E-18f;
		case joaat("COLLECTIBLE_JEWELRY_GLD_PENDT_NECKLACE"):
			return -134103f;
		case joaat("COLLECTIBLE_JEWELRY_GRNET_BRACELET"):
			return -4.104224E+27f;
		case joaat("COLLECTIBLE_JEWELRY_GRNET_POST_EARRING"):
			return -1.243554E-26f;
		case joaat("COLLECTIBLE_JEWELRY_MOON_RING"):
			return 1.851335E-27f;
		case joaat("COLLECTIBLE_JEWELRY_MTHR_PEARL_NECKLACE"):
			return 1.446838E-22f;
		case joaat("COLLECTIBLE_JEWELRY_ONYX_RING"):
			return -3.233326E-13f;
		case joaat("COLLECTIBLE_JEWELRY_PEARL_BRACELET"):
			return 6.579228E+20f;
		case joaat("COLLECTIBLE_JEWELRY_PEARL_EARRING"):
			return -5.139362E+15f;
		case joaat("COLLECTIBLE_JEWELRY_PEARL_RING"):
			return 6.865605E-25f;
		case joaat("COLLECTIBLE_JEWELRY_PERS_TURQ_RING"):
			return 1.515753E-28f;
		case joaat("COLLECTIBLE_JEWELRY_PORCELAIN_NECKLACE"):
			return 1.033011E-36f;
		case joaat("COLLECTIBLE_JEWELRY_QN_DMND_EARRING"):
			return 5.775326E-27f;
		case joaat("COLLECTIBLE_JEWELRY_RUDY_DNGL_EARRING"):
			return -2.363528E-10f;
		case joaat("COLLECTIBLE_JEWELRY_SLVR_PEARL_NECKLACE"):
			return 1.470306E-31f;
		case joaat("COLLECTIBLE_JEWELRY_SPHR_BNGLE_BRACELET"):
			return 33.84114f;
		case joaat("COLLECTIBLE_JEWELRY_SPHR_BRACELET"):
			return 1.312781E-30f;
		case joaat("COLLECTIBLE_JEWELRY_TOPAZ_NECKLACE"):
			return -8835850f;
		case joaat("COLLECTIBLE_JEWELRY_TOPAZ_RING"):
			return 8.649492E+30f;
		case joaat("COLLECTIBLE_JEWELRY_TURQ_STUD_EARRING"):
			return 0.003441987f;
		case joaat("COLLECTIBLE_JEWELRY_TURQUOISE_BRACELET"):
			return -1.547856E-16f;
		case joaat("COLLECTIBLE_JEWELRY_TURQUOISE_RING"):
			return -2.111545E+31f;
		case joaat("COLLECTIBLE_JEWELRY_WHT_DMND_EARRING"):
			return 1.11603E+08f;
		case joaat("COLLECTIBLE_JEWELRY_WHTGLD_DMND_RING"):
			return -3.162021E+28f;
		case joaat("COLLECTIBLE_JEWELRY_YLWGLD_DMND_RING"):
			return -2.574907E-14f;
		case joaat("COLLECTIBLE_COIN_1700_NY_TKN"):
			return 3.277764E+15f;
		case joaat("COLLECTIBLE_COIN_1787_CENT_TKN"):
			return 0.05885937f;
		case joaat("COLLECTIBLE_COIN_1789_PNY"):
			return -1.093231E+27f;
		case joaat("COLLECTIBLE_COIN_1792_LIB_QTR"):
			return -6.779673E+11f;
		case joaat("COLLECTIBLE_COIN_1792_NICKEL"):
			return -1.633986E-29f;
		case joaat("COLLECTIBLE_COIN_1792_QTR"):
			return 5.431398E+37f;
		case joaat("COLLECTIBLE_COIN_1794_SLV_DLR"):
			return 2.854605E+09f;
		case joaat("COLLECTIBLE_COIN_1795_HLF_EAG"):
			return -5.76892E-28f;
		case joaat("COLLECTIBLE_COIN_1796_HLF_PNY"):
			return -7.201263E-29f;
		case joaat("COLLECTIBLE_COIN_1797_GLD_EAG"):
			return -2.246062E-09f;
		case joaat("COLLECTIBLE_COIN_1798_SLV_DLR"):
			return 4.610306E-23f;
		case joaat("COLLECTIBLE_COIN_1800_FIVE_DLR"):
			return 4.488021E+20f;
		case joaat("COLLECTIBLE_COIN_1800_GLD_DLR"):
			return -5.284731E-33f;
		case joaat("COLLECTIBLE_COIN_1800_GLD_QTR"):
			return 1.078454E-28f;
		case joaat("COLLECTIBLE_COIN_1800_HLF_DIME"):
			return -2.622253E+16f;
		case joaat("COLLECTIBLE_EGG_CONDOR"):
			return -3.410472E-16f;
		case joaat("COLLECTIBLE_EGG_DUCK"):
			return -0.05602385f;
		case joaat("COLLECTIBLE_EGG_EAGLE"):
			return 2.659763E-12f;
		case joaat("COLLECTIBLE_EGG_EGRET"):
			return -4.198817E-06f;
		case joaat("COLLECTIBLE_EGG_GOOSE"):
			return -1.454038E+33f;
		case joaat("COLLECTIBLE_EGG_HAWK"):
			return 5.232732E+35f;
		case joaat("COLLECTIBLE_EGG_HERON"):
			return 2.365006E-27f;
		case joaat("COLLECTIBLE_EGG_LOON"):
			return 3.160571E-24f;
		case joaat("COLLECTIBLE_EGG_SPOONBILL"):
			return 1.090257E-30f;
		case joaat("COLLECTIBLE_EGG_VULTURE"):
			return 0.3892777f;
		default:
			break;
	}
	return 0;
}

void func_17(var uParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_7, 6, 0, 0, -1, -1, 0);
	}
}

void func_18(var uParam0, var uParam1)
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = uParam0;
}

float func_19(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 4;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (bParam0)
	{
		return -2.790057E-22f;
	}
	switch (iVar1)
	{
		case 0:
			return -2.096949E-24f;
		case 1:
			return -2.790057E-22f;
		case 2:
			return -8.869729E-37f;
		case 3:
			return 2.550398E-28f;
		default:
			break;
	}
	return -2.096949E-24f;
}

float func_20()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	switch (iVar1)
	{
		case 0:
			return -1.700884E-07f;
		case 1:
			return -1796470f;
		case 2:
			return 1.043552E+19f;
		case 3:
			return 7.04315E+25f;
		case 4:
			return 2.863587E+19f;
		case 5:
			return -1.696989E-38f;
		default:
			break;
	}
	return 2.863587E+19f;
}

bool func_21(vector3 vParam0)
{
	return !PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam0);
}

bool func_22()
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
						if (Global_1222019[iVar3 /*9*/].f_6)
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

void func_23(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_41(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_71(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_72(iVar0);
	*uParam0 = 0;
}

void func_24(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
	{
		func_73(uParam0->f_26, uParam0->f_26, 0);
	}
}

void func_25(vector3 vParam0)
{
	if (func_74(Global_1222308, vParam0))
	{
		Global_1222308 = { 0f, 0f, 0f };
	}
}

void func_26(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	struct<7> Var1;
	struct<19> Var8;

	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return;
	}
	iVar0 = func_75(1, 8);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&iVar0, PLAYER::PLAYER_ID());
	Var1.f_4 = 1;
	Var1 = 40;
	Var1.f_4 = bParam2;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var1.f_1 = PLAYER::GET_PLAYER_INDEX();
	if (bParam2)
	{
		Var8.f_12 = -1;
		Var8.f_12.f_1 = -1;
		Var8.f_14 = 255;
		Var8.f_15 = 255;
		Var8.f_14 = Global_1295619.f_149[Global_1295619];
		Var8 = 0;
		Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
		Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Var8.f_4 = 103;
		func_77(Var8, func_76(Global_34, 0f, 0f, 0f, 1133903872 /* Float: 300f */, 1133903872 /* Float: 300f */, 1133903872 /* Float: 300f */, -2.19652E+23f, 0, 8), 0, 0);
	}
	func_78(&Var1, &iVar0);
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_79(&(Global_1222312[iParam0 /*251*/][iParam1]), iParam2);
}

void func_28()
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
}

void func_29()
{
	if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}
}

void func_30(var uParam0)
{
	func_80(uParam0);
	func_81(&(uParam0->f_6), 1);
}

void func_31(bool bParam0)
{
	if (bParam0)
	{
		func_82(0, 6);
	}
	else
	{
		func_83(0, 6, 0);
	}
}

void func_32(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_7);
	}
}

bool func_33(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_84(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_34(var uParam0)
{
	if (!func_13(uParam0, 32))
	{
		return Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;
	}
	return (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0 && Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 == uParam0->f_1);
}

int func_35(var uParam0)
{
	return uParam0->f_2;
}

bool func_36(int iParam0, int iParam1, int iParam2)
{
	return func_49(Global_1222312[iParam0 /*251*/][iParam1], iParam2);
}

bool func_37(vector3 vParam0, var uParam3, bool bParam4, float fParam5, bool bParam6, float fParam7)
{
	var uVar0[1];
	var uVar2[1];
	var uVar4[1];
	float fVar6[4];
	float fVar11[4];
	float fVar16[30];

	fVar6[0] = -2.096949E-24f;
	fVar6[1] = -2.790057E-22f;
	fVar6[2] = -8.869729E-37f;
	fVar6[3] = 2.550398E-28f;
	fVar11[0] = 3.320209E+33f;
	fVar11[1] = -2.221856E+16f;
	fVar11[2] = -5.714686E+34f;
	fVar11[3] = -7.74473E-13f;
	if (bParam6)
	{
		fVar16[0] = -0.001567479f;
		fVar16[1] = 1.448199E+20f;
		fVar16[2] = 2.419464E+14f;
		fVar16[3] = -1.598453E-33f;
		fVar16[4] = -1.638456E+38f;
		fVar16[5] = -5.009458E+14f;
		fVar16[6] = -5.95915E+11f;
		fVar16[7] = 30237.53f;
		fVar16[8] = 4.460194E-19f;
		fVar16[9] = 57678.12f;
		fVar16[10] = -243.3228f;
		fVar16[11] = -2.118086E-31f;
		fVar16[12] = 1.02054E+29f;
		fVar16[13] = 1.09735E-25f;
		fVar16[14] = -7.644801E-28f;
		fVar16[15] = 3.610188E+17f;
		fVar16[16] = -1.341672E-27f;
		fVar16[17] = -3.217703E+37f;
		fVar16[18] = -6.628108E-11f;
		fVar16[19] = -2.257416E+17f;
		fVar16[20] = -0.00123094f;
		fVar16[21] = 248.821f;
		fVar16[22] = 4.151172E+25f;
		fVar16[23] = -4.018671E+24f;
		fVar16[24] = 0.0004604878f;
		fVar16[25] = 1.570691E+38f;
		fVar16[26] = -5.750017E+20f;
		fVar16[27] = 7.623095E-29f;
		fVar16[28] = -404.5355f;
		fVar16[29] = 1.955435E+12f;
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			if (func_85(&uVar0, &fVar16, 1, vParam0, fParam7) > 0)
			{
				*uParam3 = uVar0[0];
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*fParam5))
	{
		if (func_85(&uVar4, &fVar11, 1, vParam0, fParam7) > 0)
		{
			*fParam5 = uVar4[0];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*fParam5))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam4))
	{
		if (func_85(&uVar2, &fVar6, 1, vParam0, fParam7) > 0)
		{
			if (DECORATOR::DECOR_EXIST_ON(uVar2[0], "ChestDugUp"))
			{
				*bParam4 = uVar2[0];
				return true;
			}
		}
	}
	else if (func_85(&uVar2, &fVar6, 1, vParam0, fParam7) > 0)
	{
		if (DECORATOR::DECOR_EXIST_ON(uVar2[0], "ChestDugUp"))
		{
			*bParam4 = uVar2[0];
			return true;
		}
	}
	return false;
}

void func_38(int iParam0, int iParam1, int iParam2)
{
	func_70(&(Global_1222312[iParam0 /*251*/][iParam1]), iParam2);
}

bool func_39(int iParam0)
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
			if (!func_49(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2], 1))
			{
				func_70(&(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2]), 1);
			}
			return true;
		}
		if (!func_49(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2], 32))
		{
			func_70(&(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2]), 32);
		}
	}
	return false;
}

void func_40(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_41(int iParam0)
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

bool func_42(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_41(iParam0))
	{
		return false;
	}
	iVar0 = func_71(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_43(bool bParam0)
{
	if (func_86(6.914108E-36f, 1))
	{
		if (bParam0)
		{
			if (func_86(-8.284301E+07f, 1))
			{
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

void func_44(var uParam0, vector3 vParam1)
{
	if (!func_21(vParam1))
	{
		func_25(vParam1);
		return;
	}
	if (func_87(Global_1222308))
	{
		Global_1222308 = { vParam1 };
	}
	else if (!func_74(Global_1222308, vParam1))
	{
		if (BUILTIN::VDIST2(Global_34, vParam1) < BUILTIN::VDIST2(Global_34, Global_1222308))
		{
			Global_1222308 = { vParam1 };
		}
	}
}

void func_45(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_87(Global_1222308))
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
	bVar1 = func_88(uParam0, bParam4, bVar0);
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
	fVar2 = (fVar2 * (1f + func_89()));
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
						func_90(uParam0, 1);
					}
				}
				else
				{
					func_90(uParam0, 1);
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
				func_91(250);
			}
			PAD::SET_CONTROL_SHAKE(0, iVar3, iVar4);
			func_92(&(uParam0->f_1));
			func_90(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_80(uParam0);
				}
				func_90(uParam0, 0);
			}
			else if (func_93(&(uParam0->f_1)) >= 2f)
			{
				func_90(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_91(250);
			}
			break;
	}
}

void func_46(int iParam0)
{
	int iVar0;

	if (func_41(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295619.f_3);
		if ((((((((((((PED::IS_PED_CARRYING_SOMETHING(Global_1295619.f_3) || TASK::IS_PED_GETTING_UP(Global_1295619.f_3)) || PED::IS_PED_RAGDOLL(Global_1295619.f_3)) || !func_94()) || Global_1102813.f_3664) || ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_JUMPING(Global_1295619.f_3)) || PED::IS_PED_CLIMBING(Global_1295619.f_3)) || PED::IS_PED_FALLING(Global_1295619.f_3)) || PED::IS_PED_HOGTIED(Global_33)) || func_95(Global_33)) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 1, 0))
		{
			if (func_96(iParam0, 0))
			{
				func_97(iParam0, 0, 1, 1);
			}
		}
		else if (!func_96(iParam0, 0))
		{
			func_97(iParam0, 1, 1, 1);
		}
	}
}

void func_47(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_60(Global_33, vParam0, 1) < fParam5)
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

void func_48(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_98(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_98(uParam0))
		{
		}
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_50(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, bool bParam12)
{
	if (bParam12)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam7))
		{
			STREAMING::REQUEST_MODEL(iParam7, false);
			return false;
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam9))
	{
		STREAMING::REQUEST_MODEL(iParam9, false);
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam11))
	{
		STREAMING::REQUEST_MODEL(iParam11, false);
		return false;
	}
	if (bParam12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			iParam6 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam7, vParam3, true, true, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam8))
	{
		iParam8 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam9, vParam3, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam8))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam10))
	{
		bParam10 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam11, vParam3, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam10))
	{
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 64, sParam2, false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam3, 0f, 0f, 0f, 2);
		if (ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "MOUND", iParam6, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam8))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CHEST", iParam8, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(bParam10))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "DRESSING", bParam10, 0);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PED(*uParam0, "player", false) == Global_33)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, "player", Global_33);
		}
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, sParam2, true);
		ANIMSCENE::START_ANIM_SCENE(*uParam0);
		return true;
	}
	return false;
}

Vector3 func_51(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_99(vParam0) };
	vVar3 = { func_101(func_101(vVar0, func_100((fParam3 - 1119092736))), vVar0) };
	fVar6 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar7 = -MISC::ATAN2(vVar3.z, BUILTIN::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_101(vVar8, vVar3) };
	fVar14 = (MISC::ATAN2((func_102(vVar8, vVar0) / BUILTIN::VMAG(vVar8)), (func_102(vVar11, vVar0) / BUILTIN::VMAG(vVar11))) + 1127481344);
	return fVar14, fVar7, fVar6;
}

int func_52(int iParam0, int iParam1, int iParam2)
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
	if (!func_103(iParam0))
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

bool func_53(var uParam0, float fParam1)
{
	if (func_86(6.914108E-36f, 1))
	{
		if (Global_1102813.f_3664)
		{
			return false;
		}
		if (func_60(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) > fParam1)
		{
			return false;
		}
		if (func_104(uParam0->f_5))
		{
			return false;
		}
		if (func_13(uParam0, 2))
		{
			if (func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -8.284301E+07f && func_60(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) <= 1070386381)
			{
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

int func_54(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_87(vParam2))
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
		if (func_105(iVar0, 2))
		{
			if (func_106(vParam2, Global_1951897[iVar0 /*23*/].f_6, 1008981770 /* Float: 0.01f */, 1) && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
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
		func_107(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1f, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_55(int iParam0, var uParam1)
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (func_42(iParam0, 1))
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

bool func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_41(iParam0))
	{
		return false;
	}
	iVar0 = func_71(iParam0);
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

void func_57(int iParam0)
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

float func_58(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_41(iParam0))
	{
		return 0f;
	}
	iVar0 = func_71(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
}

void func_59()
{
	PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
}

float func_60(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_61(float fParam0)
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

int func_62(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_63(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_64()
{
	if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;
	}
}

bool func_65(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;

	while (!func_108(uParam0->f_22, &uVar0))
	{
		return false;
	}
	iVar5 = func_16(uParam0->f_22);
	iVar4 = 0;
	while (iVar4 < Global_17418.f_2992.f_1)
	{
		if (iVar5 == Global_17418.f_2992.f_1[iVar4 /*5*/].f_4)
		{
			Global_17418.f_2992.f_1[iVar4 /*5*/] = 1;
		}
		iVar4++;
	}
	func_110(func_109(-0.08089317f, -7.367104E+22f), 1);
	if (func_13(uParam0, 2))
	{
		func_110(func_109(-0.08089317f, 2.217208E-35f), 1);
	}
	return true;
}

void func_66(int iParam0)
{
	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iParam0))
	{
		return;
	}
	PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iParam0);
}

void func_67(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_111(-6.59161E+11f, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_111(11389876, 0, 255, 0, 0);
	}
}

bool func_68()
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

int func_69(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_70(var uParam0, int iParam1)
{
	func_112(uParam0, iParam1);
}

int func_71(int iParam0)
{
	return iParam0;
}

void func_72(int iParam0)
{
	if (!func_113(iParam0))
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

int func_73(int iParam0, int iParam1, int iParam2)
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

bool func_74(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_75(int iParam0, int iParam1)
{
	return func_76(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

var func_76(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_114() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_115());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_115());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_115());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_116(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_117(iVar2))
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
				if (iVar9 & 8192 != 0 && func_118(iVar2) != 1)
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
					if (!func_119(iVar10))
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

void func_77(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_120(&(Global_1072759.f_22981), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_78(var uParam0, int* iParam1)
{
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(iParam1))
	{
		uParam0->f_1 = Global_1295619.f_149[Global_1295619];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 22, iParam1);
	}
}

void func_79(var uParam0, int iParam1)
{
	func_121(uParam0, iParam1);
}

void func_80(var uParam0)
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

void func_81(int iParam0, int iParam1)
{
	if (func_98(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_82(int iParam0, int iParam1)
{
	if (!func_122(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_123();
	}
}

void func_83(int iParam0, int iParam1, bool bParam2)
{
	if (func_122(iParam0, iParam1) && (!bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_123();
	}
}

float func_84(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_85(var uParam0, float fParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_124(uParam0, fParam1, iVar0, iParam2);
	func_125(iVar0);
	return iVar1;
}

bool func_86(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_126(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_127(bParam0);
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
			if (!func_128(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_129(bParam0))
			{
				return true;
			}
			break;
	}
	return func_130(bParam0, 0, 0, 0) >= iParam1;
}

bool func_87(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_88(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_130(-4.629755E-24f, 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_131(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_132())
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
			if (func_133())
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

float func_89()
{
	return Global_1156096.f_2169[89 /*205*/].f_201;
}

void func_90(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_91(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

void func_92(var uParam0)
{
	func_134(uParam0, 0f);
}

float func_93(var uParam0)
{
	if (!func_135(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_136(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_137() - uParam0->f_1);
}

bool func_94()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_138(Global_33, 8.330918E+10f)) && !func_138(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

bool func_95(int iParam0)
{
	if (func_139(iParam0))
	{
		return true;
	}
	if (func_140(iParam0))
	{
		return true;
	}
	if (func_141(iParam0))
	{
		return true;
	}
	if (func_142(iParam0))
	{
		return true;
	}
	if (func_143(iParam0))
	{
		return true;
	}
	return false;
}

bool func_96(int iParam0, bool bParam1)
{
	if (bParam1 && !func_41(iParam0))
	{
		return false;
	}
	return !func_105(iParam0, 4);
}

void func_97(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_41(iParam0))
	{
		return;
	}
	iVar0 = func_71(iParam0);
	if (bParam1)
	{
		func_144(iParam0, 4);
		if (bParam3)
		{
			func_145(iVar0, 1);
		}
		func_146(iVar0, 1);
	}
	else
	{
		func_147(iParam0, 4);
		func_146(iVar0, 0);
	}
}

bool func_98(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_99(vector3 vParam0)
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

Vector3 func_100(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_101(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_102(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_103(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_148() == 0)
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_148()))
	{
		return false;
	}
	Var0 = func_148();
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

bool func_104(bool bParam0)
{
	struct<4> Var0;

	Var0.f_4 = 4.978612f;
	Var0 = { func_149(0) };
	return func_150(bParam0, &Var0, 1, 1, 0, -1, 0);
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

bool func_106(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_107(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_145(iParam0, 1);
	func_146(iParam0, 1);
	func_147(iParam0, 128);
}

bool func_108(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_151(&Var0, 2.95884E+10f);
	return func_152(iParam0, &Var0, uParam1, 0, 0);
}

struct<2> func_109(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_110(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_111(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_153(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_112(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_113(int iParam0)
{
	return func_105(iParam0, 2);
}

int func_114()
{
	return Global_1051645.f_12;
}

char* func_115()
{
	return "unnamed";
}

int func_116(int iParam0)
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

bool func_117(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_154(36, iParam0);
}

int func_118(int iParam0)
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

bool func_119(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_155(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_156(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

int func_120(var uParam0, struct<21> Param1)
{
	if (!func_157(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

void func_121(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_122(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_123()
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
}

int func_124(var uParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *fParam1)
			{
				if ((*fParam1)[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *fParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*fParam1)[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *fParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_125(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_126(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_127(bool bParam0)
{
	vector3 vVar0;

	if (!func_126(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_128(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_126(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_158(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_159("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_160(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_161(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_162(iVar1);
				return true;
			}
			iVar3++;
		}
		func_162(iVar1);
	}
	return false;
}

bool func_129(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_126(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_163(bParam0);
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
	iVar1 = func_164(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_165(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_166(bParam0);
	iVar2 = func_165(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_126(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_127(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_158(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_167(bParam0, 0);
	}
	if (func_168(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_169(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_170(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_169(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_131(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_132()
{
	return func_171() != -1;
}

bool func_133()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_134(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_137() - fParam1);
	func_172(uParam0, 1);
	func_173(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_135(var uParam0)
{
	return func_174(*uParam0, 1);
}

bool func_136(var uParam0)
{
	return func_174(*uParam0, 2);
}

float func_137()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_138(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_139(int iParam0)
{
	return func_175(iParam0, 0);
}

bool func_140(int iParam0)
{
	return func_175(iParam0, 3);
}

bool func_141(int iParam0)
{
	return (func_175(iParam0, 4) || func_175(iParam0, 5));
}

bool func_142(int iParam0)
{
	return func_175(iParam0, 6);
}

bool func_143(int iParam0)
{
	return func_175(iParam0, 7);
}

void func_144(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_145(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_105(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_146(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_147(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_148()
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

struct<4> func_149(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_169(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_177(2.982335E+09f, func_176(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_177(2.982335E+09f, func_176(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_177(2.982335E+09f, func_176(), -5.45926E-19f, bParam0);
}

int func_150(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_178(&bParam0);
	if (!func_126(bParam0, 0) && !func_180(func_179(bParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_168(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_181(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_182(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_183(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return 0;
		}
		else if (func_184(bParam0, &Var4, 6.282013E+23f))
		{
			return 0;
		}
		if (func_185(bParam0, 1))
		{
			if (!func_183(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return 0;
			}
			else if (func_184(bParam0, &Var4, -3.587391E+15f))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_186(bParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_187(bParam0, *uParam1, uParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

void func_151(var uParam0, int iParam1)
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

int func_152(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_188(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_189(uParam2, iParam0, Var1);
	return 1;
}

int func_153(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_190(iParam2, -3.005759E+25f);
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
	func_191(uParam1, bParam0, Var3);
	return 1;
}

bool func_154(int iParam0, int iParam1)
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

bool func_155(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_156(int iParam0)
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
		func_194(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_195(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_157(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_158(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_126(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_127(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_196(bParam0, 9.811189E+11f))
	{
		func_197(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_159(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_169(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_160(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_161(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_162(int iParam0)
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

int func_163(bool bParam0)
{
	struct<2> Var0;

	if (!func_126(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_164(bool bParam0)
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

int func_165(var uParam0, int iParam1)
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

int func_166(bool bParam0)
{
	int iVar0;

	iVar0 = func_163(bParam0);
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

int func_167(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_198(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_199(&Var0, func_182(0));
	}
	if (!func_200(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_162(iVar18);
	return iVar19;
}

int func_168(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_180(func_179(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_169(bool bParam0)
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

struct<4> func_170(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_201(bParam0, bParam1, 0) };
	return func_177(bParam0, Var0, Var0.f_4, bParam1);
}

int func_171()
{
	return Global_1149157.f_137;
}

void func_172(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_174(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_175(int iParam0, int iParam1)
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

struct<4> func_176()
{
	struct<4> Var0;

	return Var0;
}

struct<4> func_177(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_126(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_169(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_178(var uParam0)
{
	if (!func_126(*uParam0, 0))
	{
		return 0;
	}
	if (!func_202(*uParam0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*uParam0 = -7.975852E-25f;
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*uParam0 = -1.072744E-16f;
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*uParam0 = 1.62503E-31f;
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*uParam0 = -1.6957E+27f;
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = -1.177047E+07f;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_179(bool bParam0)
{
	return bParam0;
}

bool func_180(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_181(bool bParam0)
{
	return func_127(bParam0) == -3.265313E+23f;
}

struct<4> func_182(bool bParam0)
{
	int iVar0;

	iVar0 = func_169(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_177(8.681942E-06f, func_149(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_177(8.681942E-06f, func_149(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_177(8.681942E-06f, func_149(bParam0), -1.942248E+12f, 0);
}

bool func_183(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_187(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_184(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_203(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

int func_185(bool bParam0, bool bParam1)
{
	if (func_163(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_204();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_186(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_126(bParam0, 0))
	{
		if (func_180(func_179(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_127(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_168(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_169(bParam3), bParam0);
}

int func_187(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_126(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_168(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_177(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_169(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_169(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

void func_188(var uParam0)
{
	func_151(uParam0, 8.505438E-34f);
	if (func_205() == 3.272964E+34f)
	{
		func_151(uParam0, 8.967694E-17f);
	}
	else
	{
		func_151(uParam0, 1.721179E-28f);
	}
}

void func_189(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_206(uParam0))
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

void func_190(int iParam0, int iParam1)
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

void func_191(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_206(uParam0))
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

void func_194(int iParam0)
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
	func_195(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_195(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_196(bool bParam0, int iParam1)
{
	if (!func_126(bParam0, 0))
	{
		return func_207(func_179(bParam0), iParam1);
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

void func_197(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_198(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_199(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_200(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_169(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_201(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_149(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_127(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_177(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_182(bParam1) };
			if (iParam2 && func_185(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_183(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_183(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_184(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_208(bParam1) };
			switch (func_163(bParam0))
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
			if (func_209(bParam0, -2.580501E-27f))
			{
				Var0 = { func_177(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_209(bParam0, -4.220332E-15f))
			{
				Var0 = { func_177(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_177(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_209(bParam0, -3.171238E-21f))
			{
				Var0 = { func_177(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_210(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_209(bParam0, -3.171238E-21f))
			{
				Var0 = { func_177(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

bool func_202(bool bParam0)
{
	return func_196(bParam0, 5.168749E+07f);
}

bool func_203(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_169(0);
	*iParam1 = { func_177(bParam0, func_182(0), fParam3, 0) };
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

int func_204()
{
	if (func_211(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_205()
{
	return Global_1953279.f_1;
}

bool func_206(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_207(bool bParam0, int iParam1)
{
	if (!func_180(bParam0, 2))
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

struct<4> func_208(bool bParam0)
{
	int iVar0;

	iVar0 = func_169(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_177(3.507197E-29f, func_149(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_177(3.507197E-29f, func_149(bParam0), 12999093, 0);
}

bool func_209(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_163(bParam0);
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
			if (func_212(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_210(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_213(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_211(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_214(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_169(bParam1), iParam0, bParam3);
}

bool func_212(bool bParam0, int iParam1, int iParam2)
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

int func_213(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_169(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_214(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

