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
	struct<8> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
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
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = -1082130432;
	var uLocal_56 = -1082130432;
	var uLocal_57 = 0;
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
	if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_16.f_7))
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
	*uParam0 = 6;
	uParam0->f_1 = func_9(vParam1);
	func_10(uParam0);
	if (func_11(uParam0, 1))
	{
		uParam0->f_16 = func_12(uParam0->f_1);
	}
	if (uParam0->f_1 <= 80)
	{
		if (!func_11(uParam0, 8))
		{
			func_13(uParam0, 8);
		}
	}
	if (func_11(uParam0, 8))
	{
		uParam0->f_10 = "script@mech@treasure_hunting@chest";
		uParam0->f_11 = "PBL_CHEST_01";
		uParam0->f_17 = func_14();
		uParam0->f_14 = func_15(0);
		uParam0->f_15 = func_16();
	}
	else
	{
		uParam0->f_10 = "script@mech@treasure_hunting@grab";
		uParam0->f_11 = "PBL_GRAB_01";
	}
	uParam0->f_2 = 0;
	if (func_11(uParam0, 1))
	{
		uParam0->f_19 = -2006.325f;
	}
	else
	{
		uParam0->f_19 = -1.950267E+10f;
	}
	uParam0->f_8 = vParam1.x;
	uParam0->f_7 = vParam1.y;
	uParam0->f_4 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_7, true) };
	func_17(&(uParam0->f_30), uParam0->f_4);
	func_18(*uParam0, uParam0->f_1);
	func_19();
	if (func_20(uParam0->f_4))
	{
		if (func_11(uParam0, 8))
		{
			if (func_21())
			{
				if (!func_11(uParam0, 16))
				{
					func_13(uParam0, 16);
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
	Global_1222019[PLAYER::PLAYER_ID() /*9*/] = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	func_22(&(uParam0->f_12), 1, 1);
	func_23(uParam0);
	if (func_11(uParam0, 2))
	{
		func_24(uParam0->f_4);
	}
	func_25(*uParam0, uParam0->f_1, 1);
	func_25(*uParam0, uParam0->f_1, 16);
	func_25(*uParam0, uParam0->f_1, 32);
	func_26();
	func_27();
	func_28(&(uParam0->f_30));
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_25))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_25, false);
	}
	func_29(0);
	func_30(&(uParam0->f_30));
	SCRIPTS::_0xE7282390542F570D(uParam0->f_8);
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

	if (func_31(uParam0) < 10)
	{
		if (func_11(uParam0, 8))
		{
			if (!func_32(*uParam0, uParam0->f_1, 16))
			{
				if (func_33(uParam0->f_4, &(uParam0->f_22), &(uParam0->f_20), &(uParam0->f_21), func_11(uParam0, 1), 2f))
				{
					func_34(*uParam0, uParam0->f_1, 16);
				}
			}
		}
		if (func_35(*uParam0) && func_36(uParam0))
		{
			func_37(uParam0, 11);
			if (func_38(uParam0->f_12))
			{
				func_22(&(uParam0->f_12), 1, 1);
			}
			func_27();
		}
		else if (func_31(uParam0) <= 6 && func_31(uParam0) > 1)
		{
			if (func_32(*uParam0, uParam0->f_1, 16))
			{
				func_37(uParam0, 12);
			}
		}
		bVar1 = (func_31(uParam0) <= 6 && !func_39(uParam0->f_12, 1));
		if (func_40(func_11(uParam0, 2)))
		{
			if (func_11(uParam0, 2))
			{
				func_41(uParam0->f_12, uParam0->f_4);
			}
			else
			{
				func_42(&(uParam0->f_30), uParam0->f_4, bVar1, 1, 1, 0);
			}
		}
		func_43(uParam0->f_12);
		func_44(uParam0->f_4, *uParam0, uParam0->f_1, 10f);
	}
	switch (func_31(uParam0))
	{
		case 0:
			if (func_11(uParam0, 8))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_14, false);
				STREAMING::REQUEST_MODEL(uParam0->f_17, false);
				STREAMING::REQUEST_MODEL(uParam0->f_15, false);
			}
			if (func_11(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_16, false);
			}
			func_45(&(uParam0->f_30.f_6), uParam0->f_4, 1069547520 /* Float: 1.5f */, 1, 319, 0);
			if (func_32(*uParam0, uParam0->f_1, 16))
			{
				if (func_46(&(uParam0->f_9), uParam0->f_10, "PBL_LOOTED", uParam0->f_4, uParam0->f_22, uParam0->f_16, uParam0->f_20, uParam0->f_14, uParam0->f_21, uParam0->f_17, func_11(uParam0, 1)))
				{
					if (Global_1222312.f_2764 != *uParam0)
					{
						func_37(uParam0, 12);
					}
					else
					{
						func_37(uParam0, 15);
					}
				}
			}
			else if (!func_20(uParam0->f_4))
			{
				func_37(uParam0, 15);
			}
			else if (!func_11(uParam0, 16))
			{
				func_37(uParam0, 1);
			}
			break;
		case 1:
			if (func_11(uParam0, 8))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
				{
					return false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_17))
				{
					return false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_15))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
				{
					uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_14, uParam0->f_4 + Vector(-1054867456, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					uParam0->f_21 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_17, uParam0->f_4 + Vector(-1046478848, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					return false;
				}
			}
			if (func_11(uParam0, 1))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_16))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					uParam0->f_22 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_16, uParam0->f_4, true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					return false;
				}
				if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_4 + Vector(1f, 0f, 0f), &(uParam0->f_29), &(uParam0->f_26)))
				{
					return false;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_22, func_47(uParam0->f_26, 0), 2, true);
				}
			}
			func_37(uParam0, 2);
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_9))
			{
				uParam0->f_9 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_10, 64, uParam0->f_11, true, true);
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_9))
			{
				return false;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_9);
			func_37(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_9, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				if (func_11(uParam0, 8))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "CHEST", uParam0->f_20, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "DRESSING", uParam0->f_21, 0);
				}
				if (func_11(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "MOUND", uParam0->f_22, 0);
					}
				}
				func_37(uParam0, 4);
			}
			break;
		case 4:
			if (func_40(func_11(uParam0, 2)))
			{
				if (func_11(uParam0, 1))
				{
					func_48(uParam0->f_22, uParam0->f_22, 0);
					func_37(uParam0, 5);
				}
				else
				{
					func_37(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_49(uParam0, 15f))
			{
				if (!func_38(uParam0->f_12))
				{
					uParam0->f_12 = func_50("UC_CLT_DIG", -7.068217E+21f, uParam0->f_4, 1.6f, 3, 1, 0, 4, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0);
				}
				func_37(uParam0, 6);
			}
			break;
		case 6:
			if (func_38(uParam0->f_12))
			{
				func_51(uParam0->f_12, &(uParam0->f_30.f_5));
				if (func_52(uParam0->f_12, 1))
				{
					if (func_32(*uParam0, uParam0->f_1, 32))
					{
						func_29(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						func_22(&(uParam0->f_12), 1, 1);
						func_53(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_25(*uParam0, uParam0->f_1, 32);
						func_37(uParam0, 7);
					}
				}
				else if (func_36(uParam0))
				{
					if (func_54(uParam0->f_12, 1) > 0f)
					{
						func_55();
						func_57(func_56(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1));
					}
					else if (func_54(uParam0->f_12, 1) == 0f)
					{
						func_27();
					}
				}
			}
			break;
		case 7:
			func_55();
			if ((((func_58(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -3.273909E-18f && func_58(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == -3.273909E-18f) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_CARRYING_SOMETHING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_23(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, func_59(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_4, 1), 2);
				func_37(uParam0, 8);
			}
			break;
		case 8:
			func_60();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_9, "player", uParam0->f_11, 1.48f, true, 128, 20000, -1f);
			uParam0->f_25 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_4, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			func_37(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_9, false))
			{
				func_37(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_9, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_9, false))
			{
				if (!func_61(uParam0))
				{
					return false;
				}
				func_62(uParam0->f_7);
				func_63(func_11(uParam0, 1), func_11(uParam0, 2));
				func_29(0);
				func_30(&(uParam0->f_30));
				if (func_11(uParam0, 2))
				{
					func_24(uParam0->f_4);
				}
				if (func_11(uParam0, 8))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_20, "ChestDugUp", true);
					TASK::_SET_SCENARIO_CONTAINER_OPENING_STATE(uParam0->f_20, true);
					func_34(*uParam0, uParam0->f_1, 16);
				}
				func_62(uParam0->f_7);
				func_27();
				if (func_11(uParam0, 2))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -8.284301E+07f, false, 0, false, false);
				}
				func_37(uParam0, 15);
			}
			break;
		case 11:
			if (func_32(*uParam0, uParam0->f_1, 1))
			{
				if (func_64())
				{
					func_25(*uParam0, uParam0->f_1, 1);
					func_37(uParam0, 12);
				}
				else if (!func_35(*uParam0))
				{
					func_37(uParam0, 4);
					func_25(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
		case 12:
			if (func_38(uParam0->f_12))
			{
				func_22(&(uParam0->f_12), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_9))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_9, "LOOT", uParam0->f_23);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_23));
			}
			bVar0 = func_65();
			if (!func_66(bVar0, 0))
			{
				return false;
			}
			uParam0->f_3 = bVar0;
			uParam0->f_19 = func_67(uParam0->f_3);
			if (!func_11(uParam0, 4))
			{
				func_13(uParam0, 4);
			}
			if (func_11(uParam0, 8))
			{
				uParam0->f_18 = func_68(uParam0->f_3);
				STREAMING::REQUEST_MODEL(uParam0->f_18, false);
			}
			func_25(*uParam0, uParam0->f_1, 1);
			if (func_11(uParam0, 8))
			{
				func_37(uParam0, 13);
			}
			else
			{
				func_37(uParam0, 4);
			}
			break;
		case 13:
			if (!func_35(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
					{
						uParam0->f_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_18, uParam0->f_4 + Vector(1036831949, 0f, 0f), false, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
					{
						return false;
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_24, true, true);
					MAP::_0x1726963E6049DB53(uParam0->f_24);
					func_37(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_24) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_24))
			{
				uParam0->f_24 = 0;
				func_37(uParam0, 13);
				return false;
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), true), uParam0->f_4, true) < 1069547520)
				{
					func_62(uParam0->f_7);
					Global_1222312.f_2764 = *uParam0;
					func_37(uParam0, 15);
				}
			}
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

void func_10(var uParam0)
{
	if (uParam0->f_1 <= 50)
	{
		func_13(uParam0, 1);
	}
	else
	{
		func_13(uParam0, 2);
	}
}

bool func_11(var uParam0, int iParam1)
{
	return func_69(uParam0->f_13, iParam1);
}

float func_12(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 1:
			fVar0 = -0.001567479f;
			break;
		case 2:
			fVar0 = -0.001567479f;
			break;
		case 3:
			fVar0 = -0.001567479f;
			break;
		case 4:
			fVar0 = -0.001567479f;
			break;
		case 5:
			fVar0 = -0.001567479f;
			break;
		case 6:
			fVar0 = -0.001567479f;
			break;
		case 7:
			fVar0 = -0.001567479f;
			break;
		case 8:
			fVar0 = -2.257416E+17f;
			break;
		case 9:
			fVar0 = -2.257416E+17f;
			break;
		case 10:
			fVar0 = -0.001567479f;
			break;
		case 11:
			fVar0 = -0.001567479f;
			break;
		case 12:
			fVar0 = -0.001567479f;
			break;
		case 13:
			fVar0 = -0.001567479f;
			break;
		case 14:
			fVar0 = -2.257416E+17f;
			break;
		case 15:
			fVar0 = -0.001567479f;
			break;
		case 16:
			fVar0 = -0.001567479f;
			break;
		case 17:
			fVar0 = -0.001567479f;
			break;
		case 18:
			fVar0 = 1.448199E+20f;
			break;
		case 19:
			fVar0 = -0.001567479f;
			break;
		case 20:
			fVar0 = -0.001567479f;
			break;
		case 21:
			fVar0 = -5.009458E+14f;
			break;
		case 22:
			fVar0 = -0.001567479f;
			break;
		case 23:
			fVar0 = -0.001567479f;
			break;
		case 24:
			fVar0 = -0.001567479f;
			break;
		case 25:
			fVar0 = -0.001567479f;
			break;
		case 26:
			fVar0 = -1.598453E-33f;
			break;
		case 27:
			fVar0 = 1.448199E+20f;
			break;
		case 28:
			fVar0 = -5.009458E+14f;
			break;
		case 29:
			fVar0 = 1.570691E+38f;
			break;
		case 30:
			fVar0 = -2.118086E-31f;
			break;
		case 31:
			fVar0 = -2.118086E-31f;
			break;
		case 32:
			fVar0 = 1.448199E+20f;
			break;
		case 33:
			fVar0 = -0.001567479f;
			break;
		case 34:
			fVar0 = 1.448199E+20f;
			break;
		case 35:
			fVar0 = 1.570691E+38f;
			break;
		case 36:
			fVar0 = -4.018671E+24f;
			break;
		case 37:
			fVar0 = 2.419464E+14f;
			break;
		case 38:
			fVar0 = 2.419464E+14f;
			break;
		case 39:
			fVar0 = 1.570691E+38f;
			break;
		case 40:
			fVar0 = -1.598453E-33f;
			break;
		case 41:
			fVar0 = 1.570691E+38f;
			break;
		case 42:
			fVar0 = 1.448199E+20f;
			break;
		case 43:
			fVar0 = 1.448199E+20f;
			break;
		case 44:
			fVar0 = -1.598453E-33f;
			break;
		case 45:
			fVar0 = -1.598453E-33f;
			break;
		case 46:
			fVar0 = 1.448199E+20f;
			break;
		case 47:
			fVar0 = 1.448199E+20f;
			break;
		case 48:
			fVar0 = -0.001567479f;
			break;
		case 49:
			fVar0 = -0.001567479f;
			break;
		case 50:
			fVar0 = -5.009458E+14f;
			break;
	}
	return fVar0;
}

void func_13(var uParam0, int iParam1)
{
	if (!func_69(uParam0->f_13, iParam1))
	{
		func_70(&(uParam0->f_13), iParam1);
	}
}

float func_14()
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

float func_15(bool bParam0)
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

float func_16()
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

void func_19()
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_7 = 0;
}

bool func_20(vector3 vParam0)
{
	return !PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam0);
}

bool func_21()
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

void func_22(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_38(*uParam0))
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

void func_23(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
	{
		func_73(uParam0->f_22, uParam0->f_22, 0);
	}
}

void func_24(vector3 vParam0)
{
	if (func_74(Global_1222308, vParam0))
	{
		Global_1222308 = { 0f, 0f, 0f };
	}
}

void func_25(int iParam0, int iParam1, int iParam2)
{
	func_75(&(Global_1222312[iParam0 /*251*/][iParam1]), iParam2);
}

void func_26()
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
}

void func_27()
{
	if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}
}

void func_28(var uParam0)
{
	func_76(uParam0);
	func_77(&(uParam0->f_6), 1);
}

void func_29(bool bParam0)
{
	if (bParam0)
	{
		func_78(0, 6);
	}
	else
	{
		func_79(0, 6, 0);
	}
}

void func_30(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_7);
	}
}

int func_31(var uParam0)
{
	return uParam0->f_2;
}

bool func_32(int iParam0, int iParam1, int iParam2)
{
	return func_69(Global_1222312[iParam0 /*251*/][iParam1], iParam2);
}

bool func_33(vector3 vParam0, var uParam3, bool bParam4, float fParam5, bool bParam6, float fParam7)
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
			if (func_80(&uVar0, &fVar16, 1, vParam0, fParam7) > 0)
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
		if (func_80(&uVar4, &fVar11, 1, vParam0, fParam7) > 0)
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
		if (func_80(&uVar2, &fVar6, 1, vParam0, fParam7) > 0)
		{
			if (DECORATOR::DECOR_EXIST_ON(uVar2[0], "ChestDugUp"))
			{
				*bParam4 = uVar2[0];
				return true;
			}
		}
	}
	else if (func_80(&uVar2, &fVar6, 1, vParam0, fParam7) > 0)
	{
		if (DECORATOR::DECOR_EXIST_ON(uVar2[0], "ChestDugUp"))
		{
			*bParam4 = uVar2[0];
			return true;
		}
	}
	return false;
}

void func_34(int iParam0, int iParam1, int iParam2)
{
	func_70(&(Global_1222312[iParam0 /*251*/][iParam1]), iParam2);
}

bool func_35(int iParam0)
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
			if (!func_69(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2], 1))
			{
				func_70(&(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2]), 1);
			}
			return true;
		}
		if (!func_69(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2], 32))
		{
			func_70(&(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2]), 32);
		}
	}
	return false;
}

bool func_36(var uParam0)
{
	return Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;
}

void func_37(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_38(int iParam0)
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

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_71(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_40(bool bParam0)
{
	if (func_81(6.914108E-36f, 1))
	{
		if (bParam0)
		{
			if (func_81(-8.284301E+07f, 1))
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

void func_41(var uParam0, vector3 vParam1)
{
	if (!func_20(vParam1))
	{
		func_24(vParam1);
		return;
	}
	if (func_82(Global_1222308))
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

void func_42(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_82(Global_1222308))
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
	bVar1 = func_83(uParam0, bParam4, bVar0);
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
	fVar2 = (fVar2 * (1f + func_84()));
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
						func_85(uParam0, 1);
					}
				}
				else
				{
					func_85(uParam0, 1);
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
				func_86(250);
			}
			PAD::SET_CONTROL_SHAKE(0, iVar3, iVar4);
			func_87(&(uParam0->f_1));
			func_85(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_76(uParam0);
				}
				func_85(uParam0, 0);
			}
			else if (func_88(&(uParam0->f_1)) >= 2f)
			{
				func_85(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_86(250);
			}
			break;
	}
}

void func_43(int iParam0)
{
	int iVar0;

	if (func_38(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295619.f_3);
		if ((((((((((((PED::IS_PED_CARRYING_SOMETHING(Global_1295619.f_3) || TASK::IS_PED_GETTING_UP(Global_1295619.f_3)) || PED::IS_PED_RAGDOLL(Global_1295619.f_3)) || !func_89()) || Global_1102813.f_3664) || ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_JUMPING(Global_1295619.f_3)) || PED::IS_PED_CLIMBING(Global_1295619.f_3)) || PED::IS_PED_FALLING(Global_1295619.f_3)) || PED::IS_PED_HOGTIED(Global_33)) || func_90(Global_33)) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 1, 0))
		{
			if (func_91(iParam0, 0))
			{
				func_92(iParam0, 0, 1, 1);
			}
		}
		else if (!func_91(iParam0, 0))
		{
			func_92(iParam0, 1, 1, 1);
		}
	}
}

void func_44(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_56(Global_33, vParam0, 1) < fParam5)
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

void func_45(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_93(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_93(uParam0))
		{
		}
	}
}

bool func_46(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, bool bParam12)
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

Vector3 func_47(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_94(vParam0) };
	vVar3 = { func_96(func_96(vVar0, func_95((fParam3 - 1119092736))), vVar0) };
	fVar6 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar7 = -MISC::ATAN2(vVar3.z, BUILTIN::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_96(vVar8, vVar3) };
	fVar14 = (MISC::ATAN2((func_97(vVar8, vVar0) / BUILTIN::VMAG(vVar8)), (func_97(vVar11, vVar0) / BUILTIN::VMAG(vVar11))) + 1127481344);
	return fVar14, fVar7, fVar6;
}

int func_48(int iParam0, int iParam1, int iParam2)
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
	if (!func_98(iParam0))
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

bool func_49(var uParam0, float fParam1)
{
	if (func_81(6.914108E-36f, 1))
	{
		if (Global_1102813.f_3664)
		{
			return false;
		}
		if (func_56(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1) > fParam1)
		{
			return false;
		}
		if (func_11(uParam0, 2))
		{
			if (func_58(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -8.284301E+07f && func_56(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1) <= 1070386381)
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

int func_50(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_82(vParam2))
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
		if (func_99(iVar0, 2))
		{
			if (func_100(vParam2, Global_1951897[iVar0 /*23*/].f_6, 1008981770 /* Float: 0.01f */, 1) && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
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
		func_101(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1f, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_51(int iParam0, var uParam1)
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (func_39(iParam0, 1))
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

bool func_52(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_38(iParam0))
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

void func_53(int iParam0)
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

float func_54(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
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

void func_55()
{
	PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
}

float func_56(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_57(float fParam0)
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

int func_58(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_59(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_60()
{
	if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;
	}
}

bool func_61(var uParam0)
{
	var uVar0;

	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_7 = 1;
	while (!func_102(uParam0->f_19, &uVar0))
	{
		return false;
	}
	func_104(func_103(-0.08089317f, -7.367104E+22f), 1);
	if (func_11(uParam0, 2))
	{
		func_104(func_103(-0.08089317f, 2.217208E-35f), 1);
	}
	return true;
}

void func_62(int iParam0)
{
	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iParam0))
	{
		return;
	}
	PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iParam0);
}

void func_63(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_105(-6.59161E+11f, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_105(11389876, 0, 255, 0, 0);
	}
}

bool func_64()
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

var func_65()
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

bool func_66(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

float func_67(int iParam0)
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

int func_68(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

bool func_69(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_70(var uParam0, int iParam1)
{
	func_106(uParam0, iParam1);
}

int func_71(int iParam0)
{
	return iParam0;
}

void func_72(int iParam0)
{
	if (!func_107(iParam0))
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

void func_75(var uParam0, int iParam1)
{
	func_108(uParam0, iParam1);
}

void func_76(var uParam0)
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

void func_77(int iParam0, int iParam1)
{
	if (func_93(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_78(int iParam0, int iParam1)
{
	if (!func_109(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_110();
	}
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	if (func_109(iParam0, iParam1) && (!bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_110();
	}
}

int func_80(var uParam0, float fParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_111(uParam0, fParam1, iVar0, iParam2);
	func_112(iVar0);
	return iVar1;
}

bool func_81(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_66(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_113(bParam0);
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
			if (!func_114(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_115(bParam0))
			{
				return true;
			}
			break;
	}
	return func_116(bParam0, 0, 0, 0) >= iParam1;
}

bool func_82(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_83(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_116(-4.629755E-24f, 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_117(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_118())
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
			if (func_119())
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

float func_84()
{
	return Global_1156096.f_2169[89 /*205*/].f_201;
}

void func_85(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_86(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

void func_87(var uParam0)
{
	func_120(uParam0, 0f);
}

float func_88(var uParam0)
{
	if (!func_121(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_122(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_123() - uParam0->f_1);
}

bool func_89()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_124(Global_33, 8.330918E+10f)) && !func_124(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

bool func_90(int iParam0)
{
	if (func_125(iParam0))
	{
		return true;
	}
	if (func_126(iParam0))
	{
		return true;
	}
	if (func_127(iParam0))
	{
		return true;
	}
	if (func_128(iParam0))
	{
		return true;
	}
	if (func_129(iParam0))
	{
		return true;
	}
	return false;
}

bool func_91(int iParam0, bool bParam1)
{
	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	return !func_99(iParam0, 4);
}

void func_92(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_71(iParam0);
	if (bParam1)
	{
		func_130(iParam0, 4);
		if (bParam3)
		{
			func_131(iVar0, 1);
		}
		func_132(iVar0, 1);
	}
	else
	{
		func_133(iParam0, 4);
		func_132(iVar0, 0);
	}
}

bool func_93(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_94(vector3 vParam0)
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

Vector3 func_95(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_96(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_97(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_98(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_134() == 0)
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_134()))
	{
		return false;
	}
	Var0 = func_134();
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

bool func_99(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

bool func_100(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_101(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_131(iParam0, 1);
	func_132(iParam0, 1);
	func_133(iParam0, 128);
}

bool func_102(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_135(&Var0, 2.95884E+10f);
	return func_136(iParam0, &Var0, uParam1, 0, 0);
}

struct<2> func_103(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_104(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_105(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_137(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_106(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_107(int iParam0)
{
	return func_99(iParam0, 2);
}

void func_108(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_109(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_110()
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
}

int func_111(var uParam0, float fParam1, int iParam2, int iParam3)
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

void func_112(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_113(bool bParam0)
{
	vector3 vVar0;

	if (!func_66(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_114(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_66(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_138(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_139("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_140(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_141(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_142(iVar1);
				return true;
			}
			iVar3++;
		}
		func_142(iVar1);
	}
	return false;
}

bool func_115(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_66(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_143(bParam0);
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
	iVar1 = func_144(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_145(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_146(bParam0);
	iVar2 = func_145(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_116(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_66(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_113(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_138(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_147(bParam0, 0);
	}
	if (func_148(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_149(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_150(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_149(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_117(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_118()
{
	return func_151() != -1;
}

bool func_119()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_120(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_123() - fParam1);
	func_152(uParam0, 1);
	func_153(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_121(var uParam0)
{
	return func_154(*uParam0, 1);
}

bool func_122(var uParam0)
{
	return func_154(*uParam0, 2);
}

float func_123()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_124(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_125(int iParam0)
{
	return func_155(iParam0, 0);
}

bool func_126(int iParam0)
{
	return func_155(iParam0, 3);
}

bool func_127(int iParam0)
{
	return (func_155(iParam0, 4) || func_155(iParam0, 5));
}

bool func_128(int iParam0)
{
	return func_155(iParam0, 6);
}

bool func_129(int iParam0)
{
	return func_155(iParam0, 7);
}

void func_130(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_131(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_99(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_132(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_133(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_134()
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

void func_135(var uParam0, int iParam1)
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

int func_136(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_156(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_157(uParam2, iParam0, Var1);
	return 1;
}

int func_137(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_158(iParam2, -3.005759E+25f);
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
	func_159(uParam1, bParam0, Var3);
	return 1;
}

bool func_138(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_66(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_113(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_160(bParam0, 9.811189E+11f))
	{
		func_161(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_139(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_149(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_141(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_142(int iParam0)
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

int func_143(bool bParam0)
{
	struct<2> Var0;

	if (!func_66(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_144(bool bParam0)
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

int func_145(var uParam0, int iParam1)
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

int func_146(bool bParam0)
{
	int iVar0;

	iVar0 = func_143(bParam0);
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

int func_147(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_162(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_164(&Var0, func_163(0));
	}
	if (!func_165(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_142(iVar18);
	return iVar19;
}

int func_148(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_167(func_166(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_149(bool bParam0)
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

struct<4> func_150(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_168(bParam0, bParam1, 0) };
	return func_169(bParam0, Var0, Var0.f_4, bParam1);
}

int func_151()
{
	return Global_1149157.f_137;
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_154(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_155(int iParam0, int iParam1)
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

void func_156(var uParam0)
{
	func_135(uParam0, 8.505438E-34f);
	if (func_170() == 3.272964E+34f)
	{
		func_135(uParam0, 8.967694E-17f);
	}
	else
	{
		func_135(uParam0, 1.721179E-28f);
	}
}

void func_157(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_171(uParam0))
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

void func_158(int iParam0, int iParam1)
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

void func_159(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_171(uParam0))
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

int func_160(bool bParam0, int iParam1)
{
	if (!func_66(bParam0, 0))
	{
		return func_172(func_166(bParam0), iParam1);
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

void func_161(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_162(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_163(bool bParam0)
{
	int iVar0;

	iVar0 = func_149(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_169(8.681942E-06f, func_173(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_169(8.681942E-06f, func_173(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_169(8.681942E-06f, func_173(bParam0), -1.942248E+12f, 0);
}

void func_164(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_165(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_149(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_166(bool bParam0)
{
	return bParam0;
}

bool func_167(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

struct<5> func_168(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_173(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_113(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_169(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_163(bParam1) };
			if (iParam2 && func_174(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_175(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_175(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_176(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_177(bParam1) };
			switch (func_143(bParam0))
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
			if (func_178(bParam0, -2.580501E-27f))
			{
				Var0 = { func_169(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_178(bParam0, -4.220332E-15f))
			{
				Var0 = { func_169(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_169(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_178(bParam0, -3.171238E-21f))
			{
				Var0 = { func_169(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_179(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_178(bParam0, -3.171238E-21f))
			{
				Var0 = { func_169(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_169(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_66(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_149(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_170()
{
	return Global_1953279.f_1;
}

bool func_171(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_172(bool bParam0, int iParam1)
{
	if (!func_167(bParam0, 2))
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

struct<4> func_173(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_149(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_169(2.982335E+09f, func_180(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_169(2.982335E+09f, func_180(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_169(2.982335E+09f, func_180(), -5.45926E-19f, bParam0);
}

int func_174(bool bParam0, bool bParam1)
{
	if (func_143(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_181();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_175(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_182(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_176(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_183(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_177(bool bParam0)
{
	int iVar0;

	iVar0 = func_149(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_169(3.507197E-29f, func_173(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_169(3.507197E-29f, func_173(bParam0), 12999093, 0);
}

bool func_178(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_143(bParam0);
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
			if (func_184(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_179(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_185(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

struct<4> func_180()
{
	struct<4> Var0;

	return Var0;
}

int func_181()
{
	if (func_186(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_182(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_66(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_148(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_169(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_149(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_149(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_183(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_149(0);
	*iParam1 = { func_169(bParam0, func_163(0), fParam3, 0) };
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

bool func_184(bool bParam0, int iParam1, int iParam2)
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

int func_185(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_149(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_186(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_187(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_149(bParam1), iParam0, bParam3);
}

bool func_187(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

