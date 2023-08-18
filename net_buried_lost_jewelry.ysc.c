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
	struct<11> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_51 = -1;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = -1082130432;
	var uLocal_57 = -1082130432;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
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
	if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_16.f_10))
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
	*uParam0 = 2;
	uParam0->f_1 = func_9(vParam1, uParam0);
	uParam0->f_6 = func_10(vParam1, uParam0);
	uParam0->f_27 = func_11(uParam0);
	func_12(uParam0);
	uParam0->f_28 = func_13();
	if (uParam0->f_1 == 211)
	{
		uParam0->f_13 = "script@mech@treasure_hunting@nothing";
		uParam0->f_14 = "PBL_NOTHING_01";
	}
	else
	{
		uParam0->f_13 = "script@mech@treasure_hunting@chest";
		uParam0->f_14 = "PBL_CHEST_01";
		if (!func_14(uParam0, 4))
		{
			func_15(uParam0, 4);
		}
	}
	uParam0->f_2 = 0;
	uParam0->f_11 = vParam1.x;
	uParam0->f_10 = vParam1.y;
	uParam0->f_7 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_10, true) };
	func_16(&(uParam0->f_31), uParam0->f_7);
	func_17(*uParam0, uParam0->f_1);
	uParam0->f_29 = func_18(uParam0);
	uParam0->f_5 = func_19(uParam0->f_29);
	if (!func_14(uParam0, 16))
	{
		uParam0->f_29 = 2.90887E+34f;
	}
	uParam0->f_24 = func_20(0);
	uParam0->f_25 = func_21();
	func_22();
	if (func_23(uParam0->f_7))
	{
		if (func_14(uParam0, 4))
		{
			if (func_24())
			{
				if (!func_14(uParam0, 64))
				{
					func_15(uParam0, 64);
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
	func_25(&(uParam0->f_15), 1, 1);
	func_26(uParam0);
	if (func_14(uParam0, 2))
	{
		func_27(uParam0->f_7);
	}
	func_28(*uParam0, uParam0->f_1, 1);
	func_29(*uParam0, uParam0->f_1, 1);
	func_29(*uParam0, uParam0->f_1, 16);
	func_29(*uParam0, uParam0->f_1, 32);
	func_30();
	func_31();
	func_32(&(uParam0->f_31));
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_43))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_43, false);
	}
	func_33(0);
	func_34(&(uParam0->f_31));
	SCRIPTS::_0xE7282390542F570D(uParam0->f_11);
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

	if (func_14(uParam0, 16) && func_14(uParam0, 8))
	{
		if ((MISC::GET_FRAME_COUNT() % 5) == 0 && func_35(Global_33, uParam0->f_7, 3f, 1, 1))
		{
			if (!func_36(uParam0))
			{
				func_17(*uParam0, uParam0->f_1);
				Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = uParam0->f_1;
			}
		}
	}
	if (func_37(uParam0) < 10)
	{
		if (func_14(uParam0, 4))
		{
			if (!func_38(*uParam0, uParam0->f_1, 16))
			{
				if (func_39(uParam0->f_7, &(uParam0->f_21), &(uParam0->f_19), &(uParam0->f_20), func_14(uParam0, 1), 2f))
				{
					func_40(*uParam0, uParam0->f_1, 16);
				}
			}
		}
		if (func_41(*uParam0) && func_36(uParam0))
		{
			func_42(uParam0, 11);
			if (func_43(uParam0->f_15))
			{
				func_25(&(uParam0->f_15), 1, 1);
			}
			func_31();
		}
		else if (func_37(uParam0) <= 6 && func_37(uParam0) > 1)
		{
			if (func_38(*uParam0, uParam0->f_1, 16))
			{
				func_42(uParam0, 12);
			}
		}
	}
	bVar1 = (func_37(uParam0) <= 6 && !func_44(uParam0->f_15, 1));
	bVar2 = !func_14(uParam0, 16);
	if (func_45(func_14(uParam0, 2)))
	{
		if (func_14(uParam0, 2))
		{
			func_46(uParam0->f_15, uParam0->f_7);
		}
		else
		{
			func_47(&(uParam0->f_31), uParam0->f_7, bVar1, bVar2, 1, 0);
		}
	}
	func_48(uParam0->f_15);
	func_49(uParam0->f_7, *uParam0, uParam0->f_1, 10f);
	switch (func_37(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(uParam0->f_24, false);
			STREAMING::REQUEST_MODEL(uParam0->f_28, false);
			STREAMING::REQUEST_MODEL(uParam0->f_25, false);
			if (func_14(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_27, false);
			}
			STREAMING::REQUEST_MODEL(-3.761452E-14f, false);
			func_50(&(uParam0->f_31.f_6), uParam0->f_7, 1069547520 /* Float: 1.5f */, 1, 319, 0);
			if (func_14(uParam0, 16))
			{
				if (!func_51(Global_1222312[*uParam0 /*251*/][uParam0->f_1], 16))
				{
					func_42(uParam0, 1);
				}
				else if (func_52(&(uParam0->f_12), uParam0->f_13, "PBL_LOOTED", uParam0->f_7, uParam0->f_21, uParam0->f_27, uParam0->f_19, uParam0->f_24, uParam0->f_20, uParam0->f_28, func_14(uParam0, 1)))
				{
					func_42(uParam0, 12);
				}
			}
			else if (func_51(Global_1222312[*uParam0 /*251*/][uParam0->f_1], 16))
			{
				if (func_52(&(uParam0->f_12), uParam0->f_13, "PBL_LOOTED", uParam0->f_7, uParam0->f_21, uParam0->f_27, uParam0->f_19, uParam0->f_24, uParam0->f_20, uParam0->f_28, func_14(uParam0, 1)))
				{
					if (Global_1222312.f_2762 != uParam0->f_1)
					{
						func_42(uParam0, 12);
					}
					else
					{
						func_42(uParam0, 15);
					}
				}
			}
			else if (!func_23(uParam0->f_7))
			{
				func_42(uParam0, 15);
			}
			else if (!func_14(uParam0, 64))
			{
				func_42(uParam0, 1);
			}
			break;
		case 1:
			if (((STREAMING::HAS_MODEL_LOADED(uParam0->f_24) && STREAMING::HAS_MODEL_LOADED(uParam0->f_28)) && STREAMING::HAS_MODEL_LOADED(-3.761452E-14f)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_25))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
				{
					uParam0->f_19 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_24, uParam0->f_7 + Vector(-1054867456, 0f, 0f), true, true, false, true);
				}
				if (func_14(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_27))
					{
						return false;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
					{
						uParam0->f_21 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_27, uParam0->f_7, true, true, false, true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
				{
					uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_28, uParam0->f_7 + Vector(-1046478848, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
				{
					return false;
				}
				if (func_14(uParam0, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
					{
						return false;
					}
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_7 + Vector(1f, 0f, 0f), &(uParam0->f_47), &(uParam0->f_44)))
					{
						return false;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
					{
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_21, func_53(uParam0->f_44, 0), 2, true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
				{
					return false;
				}
				func_42(uParam0, 2);
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_12))
			{
				uParam0->f_12 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_13, 64, uParam0->f_14, true, true);
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_12))
			{
				return false;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_12);
			func_42(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_12, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_12, uParam0->f_7, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_12, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_12, "CHEST", uParam0->f_19, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_12, "DRESSING", uParam0->f_20, 0);
				if (func_14(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_12, "MOUND", uParam0->f_21, 0);
					}
				}
				func_42(uParam0, 4);
			}
			break;
		case 4:
			if (func_45(func_14(uParam0, 2)))
			{
				if (func_14(uParam0, 1))
				{
					func_54(uParam0->f_21, uParam0->f_21, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_21, 3.474616E-32f);
					func_42(uParam0, 5);
				}
				else
				{
					func_42(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_55(uParam0, 15f))
			{
				if (!func_43(uParam0->f_15))
				{
					uParam0->f_15 = func_56("UC_CLT_DIG", -7.068217E+21f, uParam0->f_7, 1.6f, 3, 1, 0, 4, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0);
				}
				func_42(uParam0, 6);
			}
			break;
		case 6:
			if (func_43(uParam0->f_15))
			{
				if (!func_14(uParam0, 16))
				{
					func_57(uParam0->f_15, &(uParam0->f_31.f_5));
				}
				if (func_58(uParam0->f_15, 1))
				{
					if (func_38(*uParam0, uParam0->f_1, 32))
					{
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						func_25(&(uParam0->f_15), 1, 1);
						func_59(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_33(1);
						func_29(*uParam0, uParam0->f_1, 32);
						func_42(uParam0, 7);
					}
				}
				else if (func_36(uParam0))
				{
					if (func_60(uParam0->f_15, 1) > 0f)
					{
						func_61();
						func_63(func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_7, 1));
					}
					else if (func_60(uParam0->f_15, 1) == 0f)
					{
						func_31();
					}
				}
			}
			break;
		case 7:
			func_61();
			if ((((func_64(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -3.273909E-18f && func_64(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == -3.273909E-18f) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_CARRYING_SOMETHING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_26(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_12, uParam0->f_7, 0f, 0f, func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_7, 1), 2);
				func_42(uParam0, 8);
			}
			break;
		case 8:
			func_66();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_12, "player", uParam0->f_14, 1.48f, true, 128, 20000, -1f);
			uParam0->f_43 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_7, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			func_42(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_12, false))
			{
				func_42(uParam0, 10);
			}
			break;
		case 10:
			if ((ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_12, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_12, false)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_33, "mech_pickup@mp_treasure@chest_01", "exit", 1))
			{
				if (!func_67(uParam0))
				{
					return false;
				}
				func_68(uParam0->f_10);
				func_69(func_14(uParam0, 1), func_14(uParam0, 2));
				func_33(0);
				func_34(&(uParam0->f_31));
				if (func_14(uParam0, 2))
				{
					func_27(uParam0->f_7);
				}
				if (func_14(uParam0, 4))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_19, "ChestDugUp", true);
					func_40(*uParam0, uParam0->f_1, 16);
				}
				func_68(uParam0->f_10);
				func_31();
				if (func_14(uParam0, 2) && func_14(uParam0, 16))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -8.284301E+07f, false, 0, false, false);
				}
				TASK::_SET_SCENARIO_CONTAINER_OPENING_STATE(uParam0->f_19, true);
				func_42(uParam0, 15);
			}
			break;
		case 11:
			if (func_38(*uParam0, uParam0->f_1, 1))
			{
				if (func_70())
				{
					func_29(*uParam0, uParam0->f_1, 1);
					func_42(uParam0, 12);
				}
				else if (!func_41(*uParam0))
				{
					func_42(uParam0, 4);
					func_29(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
		case 12:
			if (func_43(uParam0->f_15))
			{
				func_25(&(uParam0->f_15), 1, 1);
			}
			bVar0 = func_71();
			if (!func_72(bVar0, 0))
			{
				return false;
			}
			uParam0->f_5 = bVar0;
			uParam0->f_29 = func_73(uParam0->f_5);
			if (func_14(uParam0, 4))
			{
				uParam0->f_26 = func_74(uParam0->f_5);
				STREAMING::REQUEST_MODEL(uParam0->f_26, false);
			}
			func_29(*uParam0, uParam0->f_1, 1);
			func_42(uParam0, 13);
			break;
		case 13:
			if (!func_41(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_26))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
					{
						uParam0->f_23 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_26, uParam0->f_7 + Vector(1036831949, 0f, 0f), false, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
					{
						return false;
					}
					MAP::_0x1726963E6049DB53(uParam0->f_23);
					func_42(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_23) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_23))
			{
				uParam0->f_23 = 0;
				func_42(uParam0, 13);
				return false;
			}
			if (TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), true), uParam0->f_7, true) < 1069547520)
				{
					func_68(uParam0->f_10);
					Global_1222312.f_2762 = uParam0->f_1;
					func_42(uParam0, 15);
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
		if (func_14(uParam3, 32))
		{
			iVar1 = Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2;
		}
		else if ((iVar1 >= 200 || iVar1 == 0) || bVar3)
		{
			func_15(uParam3, 16);
			if (bVar3)
			{
				func_15(uParam3, 8);
			}
		}
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = iVar1;
	}
	switch (iVar1)
	{
		case 0:
			return 211;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 13:
			return 12;
		case 14:
			return 13;
		case 15:
			return 14;
		case 16:
			return 15;
		case 17:
			return 16;
		case 18:
			return 17;
		case 19:
			return 18;
		case 20:
			return 19;
		case 21:
			return 20;
		case 22:
			return 21;
		case 23:
			return 22;
		case 24:
			return 23;
		case 25:
			return 24;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 27;
		case 29:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 33:
			return 32;
		case 34:
			return 33;
		case 35:
			return 34;
		case 36:
			return 35;
		case 37:
			return 36;
		case 38:
			return 37;
		case 39:
			return 38;
		case 40:
			return 39;
		case 41:
			return 40;
		case 42:
			return 41;
		case 43:
			return 42;
		case 44:
			return 43;
		case 45:
			return 44;
		case 46:
			return 45;
		case 47:
			return 46;
		case 48:
			return 47;
		case 49:
			return 48;
		case 50:
			return 49;
		case 51:
			return 50;
		case 52:
			return 51;
		case 53:
			return 52;
		case 54:
			return 53;
		case 55:
			return 54;
		case 56:
			return 55;
		case 57:
			return 56;
		case 58:
			return 57;
		case 59:
			return 58;
		case 60:
			return 59;
		case 61:
			return 60;
		case 62:
			return 61;
		case 63:
			return 62;
		case 64:
			return 63;
		case 65:
			return 64;
		case 66:
			return 65;
		case 67:
			return 66;
		case 68:
			return 67;
		case 69:
			return 68;
		case 70:
			return 69;
		case 71:
			return 70;
		case 72:
			return 71;
		case 73:
			return 72;
		case 74:
			return 73;
		case 75:
			return 74;
		case 76:
			return 75;
		case 77:
			return 76;
		case 78:
			return 77;
		case 79:
			return 78;
		case 80:
			return 79;
		case 81:
			return 80;
		case 82:
			return 81;
		case 83:
			return 82;
		case 84:
			return 83;
		case 85:
			return 84;
		case 86:
			return 85;
		case 87:
			return 86;
		case 88:
			return 87;
		case 89:
			return 88;
		case 90:
			return 89;
		case 91:
			return 90;
		case 92:
			return 91;
		case 93:
			return 92;
		case 94:
			return 93;
		case 95:
			return 94;
		case 96:
			return 95;
		case 97:
			return 96;
		case 98:
			return 97;
		case 99:
			return 98;
		case 100:
			return 99;
		case 101:
			return 100;
		case 102:
			return 101;
		case 103:
			return 102;
		case 104:
			return 103;
		case 105:
			return 104;
		case 106:
			return 105;
		case 107:
			return 106;
		case 108:
			return 107;
		case 109:
			return 108;
		case 110:
			return 109;
		case 111:
			return 110;
		case 112:
			return 111;
		case 113:
			return 112;
		case 114:
			return 113;
		case 115:
			return 114;
		case 116:
			return 115;
		case 117:
			return 116;
		case 118:
			return 117;
		case 119:
			return 118;
		case 120:
			return 119;
		case 121:
			return 120;
		case 122:
			return 121;
		case 123:
			return 122;
		case 124:
			return 123;
		case 125:
			return 124;
		case 126:
			return 125;
		case 127:
			return 126;
		case 128:
			return 127;
		case 129:
			return 128;
		case 130:
			return 129;
		case 131:
			return 130;
		case 132:
			return 131;
		case 133:
			return 132;
		case 134:
			return 133;
		case 135:
			return 134;
		case 136:
			return 135;
		case 137:
			return 136;
		case 138:
			return 137;
		case 139:
			return 138;
		case 140:
			return 139;
		case 141:
			return 140;
		case 142:
			return 141;
		case 143:
			return 142;
		case 144:
			return 143;
		case 145:
			return 144;
		case 146:
			return 145;
		case 147:
			return 146;
		case 148:
			return 147;
		case 149:
			return 148;
		case 150:
			return 149;
		case 151:
			return 150;
		case 152:
			return 151;
		case 153:
			return 152;
		case 154:
			return 153;
		case 155:
			return 154;
		case 156:
			return 155;
		case 157:
			return 156;
		case 158:
			return 157;
		case 159:
			return 158;
		case 160:
			return 159;
		case 161:
			return 160;
		case 162:
			return 161;
		case 200:
			return 162;
		case 201:
			return 163;
		case 202:
			return 164;
		case 203:
			return 165;
		case 204:
			return 166;
		case 205:
			return 167;
		case 206:
			return 168;
		case 207:
			return 169;
		case 208:
			return 170;
		case 209:
			return 171;
		case 210:
			return 172;
		case 211:
			return 173;
		case 212:
			return 174;
		case 213:
			return 175;
		case 214:
			return 176;
		case 215:
			return 177;
		case 216:
			return 178;
		case 217:
			return 179;
		case 218:
			return 180;
		case 219:
			return 181;
		case 220:
			return 182;
		case 221:
			return 183;
		case 222:
			return 184;
		case 223:
			return 185;
		case 224:
			return 186;
		case 225:
			return 187;
		case 226:
			return 188;
		case 227:
			return 189;
		case 228:
			return 190;
		case 229:
			return 191;
		case 230:
			return 192;
		case 231:
			return 193;
		case 232:
			return 194;
		case 233:
			return 195;
		case 234:
			return 196;
		case 235:
			return 197;
		case 236:
			return 198;
		case 237:
			return 199;
		case 238:
			return 200;
		case 239:
			return 201;
		case 240:
			return 202;
		case 241:
			return 203;
		case 242:
			return 204;
		case 243:
			return 205;
		case 244:
			return 206;
		case 245:
			return 207;
		case 246:
			return 208;
		case 247:
			return 209;
		case 248:
			return 210;
		default:
			break;
	}
	return 67;
}

int func_10(struct<2> Param0, var uParam2, var uParam3)
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

float func_11(var uParam0)
{
	float fVar0;

	switch (uParam0->f_1)
	{
		case 1:
			fVar0 = -2.118086E-31f;
			break;
		case 3:
			fVar0 = 1.448199E+20f;
			break;
		case 6:
			fVar0 = -0.001567479f;
			break;
		case 8:
			fVar0 = 1.448199E+20f;
			break;
		case 15:
			fVar0 = -2.257416E+17f;
			break;
		case 16:
			fVar0 = -5.009458E+14f;
			break;
		case 18:
			fVar0 = -0.001567479f;
			break;
		case 20:
			fVar0 = -404.5355f;
			break;
		case 31:
			fVar0 = 1.448199E+20f;
			break;
		case 33:
			fVar0 = -0.001567479f;
			break;
		case 39:
			fVar0 = 248.821f;
			break;
		case 45:
			fVar0 = 1.570691E+38f;
			break;
		case 211:
			fVar0 = -404.5355f;
			break;
	}
	return fVar0;
}

void func_12(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1:
		case 3:
		case 6:
		case 8:
		case 15:
		case 16:
		case 18:
		case 20:
		case 31:
		case 33:
		case 39:
		case 45:
			func_15(uParam0, 1);
			break;
		case 211:
			if (func_14(uParam0, 8))
			{
				func_15(uParam0, 1);
			}
			break;
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			break;
		default:
			func_15(uParam0, 2);
			break;
	}
}

float func_13()
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

bool func_14(var uParam0, int iParam1)
{
	return func_51(uParam0->f_16, iParam1);
}

void func_15(var uParam0, int iParam1)
{
	if (!func_51(uParam0->f_16, iParam1))
	{
		func_75(&(uParam0->f_16), iParam1);
	}
}

void func_16(var uParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_7, 6, 0, 0, -1, -1, 0);
	}
}

void func_17(var uParam0, var uParam1)
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = uParam0;
}

float func_18(var uParam0)
{
	float fVar0;

	switch (uParam0->f_1)
	{
		case 0:
			fVar0 = -1.353122E-30f;
			break;
		case 1:
			fVar0 = -1.353122E-30f;
			break;
		case 2:
			fVar0 = -5.526475E-21f;
			break;
		case 3:
			fVar0 = 3.522983E-12f;
			break;
		case 4:
			fVar0 = 3.522983E-12f;
			break;
		case 5:
			fVar0 = -4.456909E+29f;
			break;
		case 6:
			fVar0 = -3.256459E+37f;
			break;
		case 7:
			fVar0 = -3.256459E+37f;
			break;
		case 8:
			fVar0 = 1.321043E+30f;
			break;
		case 9:
			fVar0 = 1.382531E-25f;
			break;
		case 10:
			fVar0 = 8.593733E-14f;
			break;
		case 11:
			fVar0 = 8.593733E-14f;
			break;
		case 12:
			fVar0 = -5.808219E-15f;
			break;
		case 13:
			fVar0 = -5.808219E-15f;
			break;
		case 14:
			fVar0 = -5.808219E-15f;
			break;
		case 15:
			fVar0 = -5.720643E+29f;
			break;
		case 16:
			fVar0 = -2.897134E+25f;
			break;
		case 17:
			fVar0 = -2.897134E+25f;
			break;
		case 18:
			fVar0 = -3327282f;
			break;
		case 19:
			fVar0 = -3327282f;
			break;
		case 20:
			fVar0 = -4.358548E-17f;
			break;
		case 21:
			fVar0 = -4.358548E-17f;
			break;
		case 22:
			fVar0 = -4.358548E-17f;
			break;
		case 23:
			fVar0 = 2.592573E+36f;
			break;
		case 24:
			fVar0 = 2.592573E+36f;
			break;
		case 25:
			fVar0 = 2.592573E+36f;
			break;
		case 26:
			fVar0 = -8.112738E-32f;
			break;
		case 27:
			fVar0 = -8.112738E-32f;
			break;
		case 28:
			fVar0 = -8.112738E-32f;
			break;
		case 29:
			fVar0 = -4.009837E-28f;
			break;
		case 30:
			fVar0 = -4.009837E-28f;
			break;
		case 31:
			fVar0 = -4.009837E-28f;
			break;
		case 32:
			fVar0 = -1.133669E-24f;
			break;
		case 33:
			fVar0 = -1.133669E-24f;
			break;
		case 34:
			fVar0 = -1.133669E-24f;
			break;
		case 35:
			fVar0 = -8.45331E+08f;
			break;
		case 36:
			fVar0 = -8.45331E+08f;
			break;
		case 37:
			fVar0 = 266111.2f;
			break;
		case 38:
			fVar0 = 266111.2f;
			break;
		case 39:
			fVar0 = 266111.2f;
			break;
		case 40:
			fVar0 = 2.438653E+14f;
			break;
		case 41:
			fVar0 = 2.438653E+14f;
			break;
		case 42:
			fVar0 = -5.125846E+34f;
			break;
		case 43:
			fVar0 = -5.125846E+34f;
			break;
		case 44:
			fVar0 = -5.125846E+34f;
			break;
		case 45:
			fVar0 = 2.997674E-17f;
			break;
		case 46:
			fVar0 = 2.997674E-17f;
			break;
		case 47:
			fVar0 = 2.106974E-19f;
			break;
		case 48:
			fVar0 = 2.106974E-19f;
			break;
		case 49:
			fVar0 = 2.106974E-19f;
			break;
		case 50:
			fVar0 = -1.812495E-08f;
			break;
		case 51:
			fVar0 = -2.28911E+17f;
			break;
		case 52:
			fVar0 = 7.056061E-13f;
			break;
		case 53:
			fVar0 = 7.056061E-13f;
			break;
		case 54:
			fVar0 = -1.275876E+17f;
			break;
		case 55:
			fVar0 = -1.275876E+17f;
			break;
		case 56:
			fVar0 = 7.687207E-28f;
			break;
		case 57:
			fVar0 = -3.515815E-37f;
			break;
		case 58:
			fVar0 = -3.515815E-37f;
			break;
		case 59:
			fVar0 = -4.878674E+37f;
			break;
		case 60:
			fVar0 = -4.878674E+37f;
			break;
		case 61:
			fVar0 = 5.079787E-20f;
			break;
		case 62:
			fVar0 = 5.079787E-20f;
			break;
		case 63:
			fVar0 = -9.822589E+26f;
			break;
		case 64:
			fVar0 = 1.099238E-19f;
			break;
		case 65:
			fVar0 = -1.409106E+07f;
			break;
		case 66:
			fVar0 = 3.15258E+10f;
			break;
		case 67:
			fVar0 = 3.15258E+10f;
			break;
		case 68:
			fVar0 = -1.353122E-30f;
			break;
		case 69:
			fVar0 = -1.353122E-30f;
			break;
		case 70:
			fVar0 = -5.526475E-21f;
			break;
		case 71:
			fVar0 = -5.526475E-21f;
			break;
		case 72:
			fVar0 = 3.522983E-12f;
			break;
		case 73:
			fVar0 = 3.522983E-12f;
			break;
		case 74:
			fVar0 = -4.456909E+29f;
			break;
		case 75:
			fVar0 = -4.456909E+29f;
			break;
		case 76:
			fVar0 = -3.256459E+37f;
			break;
		case 77:
			fVar0 = -3.256459E+37f;
			break;
		case 78:
			fVar0 = 1.321043E+30f;
			break;
		case 79:
			fVar0 = 1.382531E-25f;
			break;
		case 80:
			fVar0 = 1.382531E-25f;
			break;
		case 81:
			fVar0 = 8.593733E-14f;
			break;
		case 82:
			fVar0 = 8.593733E-14f;
			break;
		case 83:
			fVar0 = -5.808219E-15f;
			break;
		case 84:
			fVar0 = -5.808219E-15f;
			break;
		case 85:
			fVar0 = -5.808219E-15f;
			break;
		case 86:
			fVar0 = -5.720643E+29f;
			break;
		case 87:
			fVar0 = -5.720643E+29f;
			break;
		case 88:
			fVar0 = -2.897134E+25f;
			break;
		case 89:
			fVar0 = -2.897134E+25f;
			break;
		case 90:
			fVar0 = -2.897134E+25f;
			break;
		case 91:
			fVar0 = -3327282f;
			break;
		case 92:
			fVar0 = -3327282f;
			break;
		case 93:
			fVar0 = -3327282f;
			break;
		case 94:
			fVar0 = -4.358548E-17f;
			break;
		case 95:
			fVar0 = -4.358548E-17f;
			break;
		case 96:
			fVar0 = -4.358548E-17f;
			break;
		case 97:
			fVar0 = 2.592573E+36f;
			break;
		case 98:
			fVar0 = 2.592573E+36f;
			break;
		case 99:
			fVar0 = 2.592573E+36f;
			break;
		case 100:
			fVar0 = -8.112738E-32f;
			break;
		case 101:
			fVar0 = -8.112738E-32f;
			break;
		case 102:
			fVar0 = -8.112738E-32f;
			break;
		case 103:
			fVar0 = -4.009837E-28f;
			break;
		case 104:
			fVar0 = -4.009837E-28f;
			break;
		case 105:
			fVar0 = -4.009837E-28f;
			break;
		case 106:
			fVar0 = -1.133669E-24f;
			break;
		case 107:
			fVar0 = -1.133669E-24f;
			break;
		case 108:
			fVar0 = -1.133669E-24f;
			break;
		case 109:
			fVar0 = -8.45331E+08f;
			break;
		case 110:
			fVar0 = -8.45331E+08f;
			break;
		case 111:
			fVar0 = 266111.2f;
			break;
		case 112:
			fVar0 = 266111.2f;
			break;
		case 113:
			fVar0 = 266111.2f;
			break;
		case 114:
			fVar0 = 2.438653E+14f;
			break;
		case 115:
			fVar0 = 2.438653E+14f;
			break;
		case 116:
			fVar0 = 2.438653E+14f;
			break;
		case 117:
			fVar0 = -5.125846E+34f;
			break;
		case 118:
			fVar0 = -5.125846E+34f;
			break;
		case 119:
			fVar0 = -5.125846E+34f;
			break;
		case 120:
			fVar0 = 2.997674E-17f;
			break;
		case 121:
			fVar0 = 2.997674E-17f;
			break;
		case 122:
			fVar0 = 2.106974E-19f;
			break;
		case 123:
			fVar0 = 2.106974E-19f;
			break;
		case 124:
			fVar0 = 2.106974E-19f;
			break;
		case 125:
			fVar0 = -1.812495E-08f;
			break;
		case 126:
			fVar0 = -1.812495E-08f;
			break;
		case 127:
			fVar0 = -2.235354E-13f;
			break;
		case 128:
			fVar0 = -2.235354E-13f;
			break;
		case 129:
			fVar0 = -2.28911E+17f;
			break;
		case 130:
			fVar0 = -2.28911E+17f;
			break;
		case 131:
			fVar0 = -2.28911E+17f;
			break;
		case 132:
			fVar0 = 7.056061E-13f;
			break;
		case 133:
			fVar0 = 7.056061E-13f;
			break;
		case 134:
			fVar0 = 7.056061E-13f;
			break;
		case 135:
			fVar0 = 2.612652E-18f;
			break;
		case 136:
			fVar0 = 2.612652E-18f;
			break;
		case 137:
			fVar0 = 2.612652E-18f;
			break;
		case 138:
			fVar0 = -1.275876E+17f;
			break;
		case 139:
			fVar0 = -1.275876E+17f;
			break;
		case 140:
			fVar0 = 7.687207E-28f;
			break;
		case 141:
			fVar0 = 7.687207E-28f;
			break;
		case 142:
			fVar0 = -3.515815E-37f;
			break;
		case 143:
			fVar0 = -3.515815E-37f;
			break;
		case 144:
			fVar0 = -3.515815E-37f;
			break;
		case 145:
			fVar0 = -4.878674E+37f;
			break;
		case 146:
			fVar0 = -4.878674E+37f;
			break;
		case 147:
			fVar0 = 5.079787E-20f;
			break;
		case 148:
			fVar0 = 5.079787E-20f;
			break;
		case 149:
			fVar0 = -9.822589E+26f;
			break;
		case 150:
			fVar0 = -9.822589E+26f;
			break;
		case 151:
			fVar0 = -1.155348E+36f;
			break;
		case 152:
			fVar0 = -1.155348E+36f;
			break;
		case 153:
			fVar0 = -1.155348E+36f;
			break;
		case 154:
			fVar0 = 1.099238E-19f;
			break;
		case 155:
			fVar0 = 1.099238E-19f;
			break;
		case 156:
			fVar0 = 0.0003165052f;
			break;
		case 157:
			fVar0 = 0.0003165052f;
			break;
		case 158:
			fVar0 = -1.409106E+07f;
			break;
		case 159:
			fVar0 = -1.409106E+07f;
			break;
		case 160:
			fVar0 = 3.15258E+10f;
			break;
		case 161:
			fVar0 = 3.15258E+10f;
			break;
		case 162:
			fVar0 = -1.353122E-30f;
			break;
		case 163:
			fVar0 = -5.526475E-21f;
			break;
		case 164:
			fVar0 = 3.522983E-12f;
			break;
		case 165:
			fVar0 = -4.456909E+29f;
			break;
		case 166:
			fVar0 = -3.256459E+37f;
			break;
		case 167:
			fVar0 = 1.321043E+30f;
			break;
		case 168:
			fVar0 = 1.382531E-25f;
			break;
		case 169:
			fVar0 = 8.593733E-14f;
			break;
		case 170:
			fVar0 = -5.808219E-15f;
			break;
		case 171:
			fVar0 = -5.720643E+29f;
			break;
		case 172:
			fVar0 = -2.897134E+25f;
			break;
		case 173:
			fVar0 = -3327282f;
			break;
		case 174:
			fVar0 = -4.358548E-17f;
			break;
		case 175:
			fVar0 = 2.592573E+36f;
			break;
		case 176:
			fVar0 = -8.112738E-32f;
			break;
		case 177:
			fVar0 = -4.009837E-28f;
			break;
		case 178:
			fVar0 = -1.133669E-24f;
			break;
		case 179:
			fVar0 = -8.45331E+08f;
			break;
		case 180:
			fVar0 = 266111.2f;
			break;
		case 181:
			fVar0 = 2.438653E+14f;
			break;
		case 182:
			fVar0 = -5.125846E+34f;
			break;
		case 183:
			fVar0 = 2.997674E-17f;
			break;
		case 184:
			fVar0 = 2.106974E-19f;
			break;
		case 185:
			fVar0 = -1.812495E-08f;
			break;
		case 186:
			fVar0 = -2.235354E-13f;
			break;
		case 187:
			fVar0 = -2.28911E+17f;
			break;
		case 188:
			fVar0 = 7.056061E-13f;
			break;
		case 189:
			fVar0 = 2.612652E-18f;
			break;
		case 190:
			fVar0 = -1.275876E+17f;
			break;
		case 191:
			fVar0 = 7.687207E-28f;
			break;
		case 192:
			fVar0 = -3.515815E-37f;
			break;
		case 193:
			fVar0 = -4.878674E+37f;
			break;
		case 194:
			fVar0 = 5.079787E-20f;
			break;
		case 195:
			fVar0 = -9.822589E+26f;
			break;
		case 196:
			fVar0 = -1.155348E+36f;
			break;
		case 197:
			fVar0 = 1.099238E-19f;
			break;
		case 198:
			fVar0 = 0.0003165052f;
			break;
		case 199:
			fVar0 = -1.409106E+07f;
			break;
		case 200:
			fVar0 = 3.15258E+10f;
			break;
		case 201:
			fVar0 = 5.623926E+16f;
			break;
		case 202:
			fVar0 = -6.038724E-36f;
			break;
		case 203:
			fVar0 = 2.189217E+21f;
			break;
		case 204:
			fVar0 = -1.41589E-30f;
			break;
		case 205:
			fVar0 = -5.017405E-26f;
			break;
		case 206:
			fVar0 = -2.12089E-38f;
			break;
		case 207:
			fVar0 = -3.631196E-12f;
			break;
		case 208:
			fVar0 = 3.199607E+16f;
			break;
		case 209:
			fVar0 = -5.194033E-28f;
			break;
		case 210:
			fVar0 = -1.896738E+36f;
			break;
	}
	return fVar0;
}

int func_19(int iParam0)
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

float func_20(bool bParam0)
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

float func_21()
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

void func_22()
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_7 = 0;
}

bool func_23(vector3 vParam0)
{
	return !PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam0);
}

bool func_24()
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

void func_25(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_43(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_76(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_77(iVar0);
	*uParam0 = 0;
}

void func_26(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
	{
		func_78(uParam0->f_21, uParam0->f_21, 0);
	}
}

void func_27(vector3 vParam0)
{
	if (func_79(Global_1222308, vParam0))
	{
		Global_1222308 = { 0f, 0f, 0f };
	}
}

void func_28(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	struct<7> Var1;
	struct<19> Var8;

	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return;
	}
	iVar0 = func_80(1, 8);
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
		func_82(Var8, func_81(Global_34, 0f, 0f, 0f, 1133903872 /* Float: 300f */, 1133903872 /* Float: 300f */, 1133903872 /* Float: 300f */, -2.19652E+23f, 0, 8), 0, 0);
	}
	func_83(&Var1, &iVar0);
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	func_84(&(Global_1222312[iParam0 /*251*/][iParam1]), iParam2);
}

void func_30()
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
}

void func_31()
{
	if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}
}

void func_32(var uParam0)
{
	func_85(uParam0);
	func_86(&(uParam0->f_6), 1);
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		func_87(0, 6);
	}
	else
	{
		func_88(0, 6, 0);
	}
}

void func_34(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_7);
	}
}

bool func_35(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_89(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_36(var uParam0)
{
	if (!func_14(uParam0, 16))
	{
		return Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;
	}
	return (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0 && Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 == uParam0->f_1);
}

int func_37(var uParam0)
{
	return uParam0->f_2;
}

bool func_38(int iParam0, int iParam1, int iParam2)
{
	return func_51(Global_1222312[iParam0 /*251*/][iParam1], iParam2);
}

bool func_39(vector3 vParam0, var uParam3, bool bParam4, float fParam5, bool bParam6, float fParam7)
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
			if (func_90(&uVar0, &fVar16, 1, vParam0, fParam7) > 0)
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
		if (func_90(&uVar4, &fVar11, 1, vParam0, fParam7) > 0)
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
		if (func_90(&uVar2, &fVar6, 1, vParam0, fParam7) > 0)
		{
			if (DECORATOR::DECOR_EXIST_ON(uVar2[0], "ChestDugUp"))
			{
				*bParam4 = uVar2[0];
				return true;
			}
		}
	}
	else if (func_90(&uVar2, &fVar6, 1, vParam0, fParam7) > 0)
	{
		if (DECORATOR::DECOR_EXIST_ON(uVar2[0], "ChestDugUp"))
		{
			*bParam4 = uVar2[0];
			return true;
		}
	}
	return false;
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_75(&(Global_1222312[iParam0 /*251*/][iParam1]), iParam2);
}

bool func_41(int iParam0)
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
			if (!func_51(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2], 1))
			{
				func_75(&(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2]), 1);
			}
			return true;
		}
		if (!func_51(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2], 32))
		{
			func_75(&(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2]), 32);
		}
	}
	return false;
}

void func_42(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_43(int iParam0)
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

bool func_44(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_76(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_45(bool bParam0)
{
	if (func_91(6.914108E-36f, 1))
	{
		if (bParam0)
		{
			if (func_91(-8.284301E+07f, 1))
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

void func_46(var uParam0, vector3 vParam1)
{
	if (!func_23(vParam1))
	{
		func_27(vParam1);
		return;
	}
	if (func_92(Global_1222308))
	{
		Global_1222308 = { vParam1 };
	}
	else if (!func_79(Global_1222308, vParam1))
	{
		if (BUILTIN::VDIST2(Global_34, vParam1) < BUILTIN::VDIST2(Global_34, Global_1222308))
		{
			Global_1222308 = { vParam1 };
		}
	}
}

void func_47(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_92(Global_1222308))
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
	bVar1 = func_93(uParam0, bParam4, bVar0);
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
	fVar2 = (fVar2 * (1f + func_94()));
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
						func_95(uParam0, 1);
					}
				}
				else
				{
					func_95(uParam0, 1);
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
				func_96(250);
			}
			PAD::SET_CONTROL_SHAKE(0, iVar3, iVar4);
			func_97(&(uParam0->f_1));
			func_95(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_85(uParam0);
				}
				func_95(uParam0, 0);
			}
			else if (func_98(&(uParam0->f_1)) >= 2f)
			{
				func_95(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_96(250);
			}
			break;
	}
}

void func_48(int iParam0)
{
	int iVar0;

	if (func_43(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295619.f_3);
		if ((((((((((((PED::IS_PED_CARRYING_SOMETHING(Global_1295619.f_3) || TASK::IS_PED_GETTING_UP(Global_1295619.f_3)) || PED::IS_PED_RAGDOLL(Global_1295619.f_3)) || !func_99()) || Global_1102813.f_3664) || ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_JUMPING(Global_1295619.f_3)) || PED::IS_PED_CLIMBING(Global_1295619.f_3)) || PED::IS_PED_FALLING(Global_1295619.f_3)) || PED::IS_PED_HOGTIED(Global_33)) || func_100(Global_33)) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 1, 0))
		{
			if (func_101(iParam0, 0))
			{
				func_102(iParam0, 0, 1, 1);
			}
		}
		else if (!func_101(iParam0, 0))
		{
			func_102(iParam0, 1, 1, 1);
		}
	}
}

void func_49(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_62(Global_33, vParam0, 1) < fParam5)
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

void func_50(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_103(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_103(uParam0))
		{
		}
	}
}

bool func_51(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_52(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, bool bParam12)
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

Vector3 func_53(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_104(vParam0) };
	vVar3 = { func_106(func_106(vVar0, func_105((fParam3 - 1119092736))), vVar0) };
	fVar6 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar7 = -MISC::ATAN2(vVar3.z, BUILTIN::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_106(vVar8, vVar3) };
	fVar14 = (MISC::ATAN2((func_107(vVar8, vVar0) / BUILTIN::VMAG(vVar8)), (func_107(vVar11, vVar0) / BUILTIN::VMAG(vVar11))) + 1127481344);
	return fVar14, fVar7, fVar6;
}

int func_54(int iParam0, int iParam1, int iParam2)
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
	if (!func_108(iParam0))
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

bool func_55(var uParam0, float fParam1)
{
	if (func_91(6.914108E-36f, 1))
	{
		if (Global_1102813.f_3664)
		{
			return false;
		}
		if (func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_7, 1) > fParam1)
		{
			return false;
		}
		if (func_14(uParam0, 16))
		{
			if (func_109(uParam0->f_5))
			{
				return false;
			}
		}
		if (func_14(uParam0, 2))
		{
			if (func_64(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -8.284301E+07f && func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_7, 1) <= 1070386381)
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

int func_56(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_92(vParam2))
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
		if (func_110(iVar0, 2))
		{
			if (func_111(vParam2, Global_1951897[iVar0 /*23*/].f_6, 1008981770 /* Float: 0.01f */, 1) && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
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
		func_112(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1f, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_57(int iParam0, var uParam1)
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (func_44(iParam0, 1))
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

bool func_58(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_76(iParam0);
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

void func_59(int iParam0)
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

float func_60(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_43(iParam0))
	{
		return 0f;
	}
	iVar0 = func_76(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
}

void func_61()
{
	PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
}

float func_62(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_63(float fParam0)
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

int func_64(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_65(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_66()
{
	if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;
	}
}

bool func_67(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;

	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_7 = 1;
	while (!func_113(uParam0->f_29, &uVar0))
	{
		return false;
	}
	iVar5 = uParam0->f_5;
	iVar4 = 0;
	while (iVar4 < Global_17418.f_2992.f_1)
	{
		if (iVar5 == Global_17418.f_2992.f_1[iVar4 /*5*/].f_4)
		{
			Global_17418.f_2992.f_1[iVar4 /*5*/] = 1;
		}
		iVar4++;
	}
	func_115(func_114(-0.08089317f, -7.367104E+22f), 1);
	if (func_14(uParam0, 2))
	{
		func_115(func_114(-0.08089317f, 2.217208E-35f), 1);
	}
	return true;
}

void func_68(int iParam0)
{
	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iParam0))
	{
		return;
	}
	PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iParam0);
}

void func_69(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_116(-6.59161E+11f, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_116(11389876, 0, 255, 0, 0);
	}
}

bool func_70()
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

var func_71()
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

bool func_72(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

float func_73(int iParam0)
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

int func_74(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_75(var uParam0, int iParam1)
{
	func_117(uParam0, iParam1);
}

int func_76(int iParam0)
{
	return iParam0;
}

void func_77(int iParam0)
{
	if (!func_118(iParam0))
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

int func_78(int iParam0, int iParam1, int iParam2)
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

bool func_79(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_80(int iParam0, int iParam1)
{
	return func_81(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

var func_81(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_119() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_120());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_120());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_120());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_121(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_122(iVar2))
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
				if (iVar9 & 8192 != 0 && func_123(iVar2) != 1)
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
					if (!func_124(iVar10))
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

void func_82(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_125(&(Global_1072759.f_22981), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_83(var uParam0, int* iParam1)
{
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(iParam1))
	{
		uParam0->f_1 = Global_1295619.f_149[Global_1295619];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 22, iParam1);
	}
}

void func_84(var uParam0, int iParam1)
{
	func_126(uParam0, iParam1);
}

void func_85(var uParam0)
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

void func_86(int iParam0, int iParam1)
{
	if (func_103(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_87(int iParam0, int iParam1)
{
	if (!func_127(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_128();
	}
}

void func_88(int iParam0, int iParam1, bool bParam2)
{
	if (func_127(iParam0, iParam1) && (!bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_128();
	}
}

float func_89(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_90(var uParam0, float fParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_129(uParam0, fParam1, iVar0, iParam2);
	func_130(iVar0);
	return iVar1;
}

bool func_91(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_72(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_131(bParam0);
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
			if (!func_132(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_133(bParam0))
			{
				return true;
			}
			break;
	}
	return func_134(bParam0, 0, 0, 0) >= iParam1;
}

bool func_92(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_93(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_134(-4.629755E-24f, 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_135(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_136())
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
			if (func_137())
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

float func_94()
{
	return Global_1156096.f_2169[89 /*205*/].f_201;
}

void func_95(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_96(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

void func_97(var uParam0)
{
	func_138(uParam0, 0f);
}

float func_98(var uParam0)
{
	if (!func_139(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_140(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_141() - uParam0->f_1);
}

bool func_99()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_142(Global_33, 8.330918E+10f)) && !func_142(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

bool func_100(int iParam0)
{
	if (func_143(iParam0))
	{
		return true;
	}
	if (func_144(iParam0))
	{
		return true;
	}
	if (func_145(iParam0))
	{
		return true;
	}
	if (func_146(iParam0))
	{
		return true;
	}
	if (func_147(iParam0))
	{
		return true;
	}
	return false;
}

bool func_101(int iParam0, bool bParam1)
{
	if (bParam1 && !func_43(iParam0))
	{
		return false;
	}
	return !func_110(iParam0, 4);
}

void func_102(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_43(iParam0))
	{
		return;
	}
	iVar0 = func_76(iParam0);
	if (bParam1)
	{
		func_148(iParam0, 4);
		if (bParam3)
		{
			func_149(iVar0, 1);
		}
		func_150(iVar0, 1);
	}
	else
	{
		func_151(iParam0, 4);
		func_150(iVar0, 0);
	}
}

bool func_103(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_104(vector3 vParam0)
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

Vector3 func_105(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_106(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_107(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_108(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_152() == 0)
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_152()))
	{
		return false;
	}
	Var0 = func_152();
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

bool func_109(bool bParam0)
{
	struct<4> Var0;

	Var0.f_4 = 4.978612f;
	Var0 = { func_153(0) };
	return func_154(bParam0, &Var0, 1, 1, 0, -1, 0);
}

bool func_110(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

bool func_111(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_112(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_149(iParam0, 1);
	func_150(iParam0, 1);
	func_151(iParam0, 128);
}

bool func_113(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_155(&Var0, 2.95884E+10f);
	return func_156(iParam0, &Var0, uParam1, 0, 0);
}

struct<2> func_114(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_115(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_116(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_157(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_118(int iParam0)
{
	return func_110(iParam0, 2);
}

int func_119()
{
	return Global_1051645.f_12;
}

char* func_120()
{
	return "unnamed";
}

int func_121(int iParam0)
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

bool func_122(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_158(36, iParam0);
}

int func_123(int iParam0)
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

bool func_124(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_159(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_160(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

int func_125(var uParam0, struct<21> Param1)
{
	if (!func_161(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

void func_126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_127(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_128()
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
}

int func_129(var uParam0, float fParam1, int iParam2, int iParam3)
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

void func_130(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_131(bool bParam0)
{
	vector3 vVar0;

	if (!func_72(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_132(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_72(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_162(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_163("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_164(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_165(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_166(iVar1);
				return true;
			}
			iVar3++;
		}
		func_166(iVar1);
	}
	return false;
}

bool func_133(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_72(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_167(bParam0);
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
	iVar1 = func_168(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_169(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_170(bParam0);
	iVar2 = func_169(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_134(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_72(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_131(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_162(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_171(bParam0, 0);
	}
	if (func_172(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_173(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_174(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_173(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_135(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_136()
{
	return func_175() != -1;
}

bool func_137()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_138(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_141() - fParam1);
	func_176(uParam0, 1);
	func_177(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_139(var uParam0)
{
	return func_178(*uParam0, 1);
}

bool func_140(var uParam0)
{
	return func_178(*uParam0, 2);
}

float func_141()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_142(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_143(int iParam0)
{
	return func_179(iParam0, 0);
}

bool func_144(int iParam0)
{
	return func_179(iParam0, 3);
}

bool func_145(int iParam0)
{
	return (func_179(iParam0, 4) || func_179(iParam0, 5));
}

bool func_146(int iParam0)
{
	return func_179(iParam0, 6);
}

bool func_147(int iParam0)
{
	return func_179(iParam0, 7);
}

void func_148(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_149(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_110(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_150(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_151(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_152()
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

struct<4> func_153(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_173(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_181(2.982335E+09f, func_180(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_181(2.982335E+09f, func_180(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_181(2.982335E+09f, func_180(), -5.45926E-19f, bParam0);
}

int func_154(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_182(&bParam0);
	if (!func_72(bParam0, 0) && !func_184(func_183(bParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_172(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_185(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_186(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_187(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return 0;
		}
		else if (func_188(bParam0, &Var4, 6.282013E+23f))
		{
			return 0;
		}
		if (func_189(bParam0, 1))
		{
			if (!func_187(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return 0;
			}
			else if (func_188(bParam0, &Var4, -3.587391E+15f))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_190(bParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_191(bParam0, *uParam1, uParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0, int iParam1)
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

int func_156(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_192(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_193(uParam2, iParam0, Var1);
	return 1;
}

int func_157(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_194(iParam2, -3.005759E+25f);
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
	func_195(uParam1, bParam0, Var3);
	return 1;
}

bool func_158(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_196(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_197())
	{
		return func_196(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_196(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_159(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_160(int iParam0)
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
		func_198(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_199(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_161(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_162(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_72(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_131(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_200(bParam0, 9.811189E+11f))
	{
		func_201(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_163(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_173(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_164(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_165(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_166(int iParam0)
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

int func_167(bool bParam0)
{
	struct<2> Var0;

	if (!func_72(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_168(bool bParam0)
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

int func_169(var uParam0, int iParam1)
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

int func_170(bool bParam0)
{
	int iVar0;

	iVar0 = func_167(bParam0);
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

int func_171(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_202(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_203(&Var0, func_186(0));
	}
	if (!func_204(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_166(iVar18);
	return iVar19;
}

int func_172(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_184(func_183(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_173(bool bParam0)
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

struct<4> func_174(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_205(bParam0, bParam1, 0) };
	return func_181(bParam0, Var0, Var0.f_4, bParam1);
}

int func_175()
{
	return Global_1149157.f_137;
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_177(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_178(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_179(int iParam0, int iParam1)
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

struct<4> func_180()
{
	struct<4> Var0;

	return Var0;
}

struct<4> func_181(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_72(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_173(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_182(var uParam0)
{
	if (!func_72(*uParam0, 0))
	{
		return 0;
	}
	if (!func_206(*uParam0))
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

bool func_183(bool bParam0)
{
	return bParam0;
}

bool func_184(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_185(bool bParam0)
{
	return func_131(bParam0) == -3.265313E+23f;
}

struct<4> func_186(bool bParam0)
{
	int iVar0;

	iVar0 = func_173(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_181(8.681942E-06f, func_153(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_181(8.681942E-06f, func_153(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_181(8.681942E-06f, func_153(bParam0), -1.942248E+12f, 0);
}

bool func_187(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_191(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_188(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_207(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

int func_189(bool bParam0, bool bParam1)
{
	if (func_167(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_208();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_190(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_72(bParam0, 0))
	{
		if (func_184(func_183(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_131(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_172(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_173(bParam3), bParam0);
}

int func_191(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_72(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_172(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_181(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_173(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_173(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

void func_192(var uParam0)
{
	func_155(uParam0, 8.505438E-34f);
	if (func_209() == 3.272964E+34f)
	{
		func_155(uParam0, 8.967694E-17f);
	}
	else
	{
		func_155(uParam0, 1.721179E-28f);
	}
}

void func_193(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_210(uParam0))
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

void func_194(int iParam0, int iParam1)
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

void func_195(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_210(uParam0))
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

bool func_196(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_197()
{
	return Global_1102813.f_3672;
}

void func_198(int iParam0)
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
	func_199(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_199(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_200(bool bParam0, int iParam1)
{
	if (!func_72(bParam0, 0))
	{
		return func_211(func_183(bParam0), iParam1);
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

void func_201(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_202(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_203(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_204(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_173(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_205(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_153(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_131(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_181(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_186(bParam1) };
			if (iParam2 && func_189(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_187(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_187(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_188(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_212(bParam1) };
			switch (func_167(bParam0))
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
			if (func_213(bParam0, -2.580501E-27f))
			{
				Var0 = { func_181(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_213(bParam0, -4.220332E-15f))
			{
				Var0 = { func_181(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_181(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_213(bParam0, -3.171238E-21f))
			{
				Var0 = { func_181(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_214(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_213(bParam0, -3.171238E-21f))
			{
				Var0 = { func_181(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

bool func_206(bool bParam0)
{
	return func_200(bParam0, 5.168749E+07f);
}

bool func_207(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_173(0);
	*iParam1 = { func_181(bParam0, func_186(0), fParam3, 0) };
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

int func_208()
{
	if (func_215(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_209()
{
	return Global_1953279.f_1;
}

bool func_210(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_211(bool bParam0, int iParam1)
{
	if (!func_184(bParam0, 2))
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

struct<4> func_212(bool bParam0)
{
	int iVar0;

	iVar0 = func_173(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_181(3.507197E-29f, func_153(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_181(3.507197E-29f, func_153(bParam0), 12999093, 0);
}

bool func_213(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_167(bParam0);
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
			if (func_216(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_214(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_217(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_215(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_218(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_173(bParam1), iParam0, bParam3);
}

bool func_216(bool bParam0, int iParam1, int iParam2)
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

int func_217(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_173(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_218(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

