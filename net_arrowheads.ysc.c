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
	var uLocal_48 = -1;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1082130432;
	var uLocal_54 = -1082130432;
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
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(2);
	*uParam0 = 1;
	uParam0->f_1 = func_9(vParam1, uParam0);
	uParam0->f_6 = func_10(vParam1, uParam0);
	uParam0->f_18 = func_11(uParam0);
	func_12(uParam0);
	uParam0->f_13 = "script@mech@treasure_hunting@grab";
	uParam0->f_14 = "PBL_GRAB_01";
	uParam0->f_2 = 0;
	uParam0->f_23 = func_13(uParam0);
	uParam0->f_5 = func_14(uParam0->f_23);
	uParam0->f_23 = 1.917624E+38f;
	uParam0->f_11 = vParam1.x;
	uParam0->f_10 = vParam1.y;
	uParam0->f_7 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_10, true) };
	func_15(&(uParam0->f_28), uParam0->f_7);
	func_16(*uParam0, uParam0->f_1);
	func_17();
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
	func_18(&(uParam0->f_15), 1, 1);
	func_19(uParam0);
	if (func_20(uParam0, 2))
	{
		func_21(uParam0->f_7);
	}
	func_22(*uParam0, uParam0->f_1, 1);
	func_23(*uParam0, uParam0->f_1, 1);
	func_23(*uParam0, uParam0->f_1, 32);
	func_24();
	func_25();
	func_26(&(uParam0->f_28));
	func_27(0);
	func_28(&(uParam0->f_28));
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

	if (func_20(uParam0, 32))
	{
		if ((MISC::GET_FRAME_COUNT() % 5) == 0 && func_29(Global_33, uParam0->f_7, 3f, 1, 1))
		{
			if (!func_30(uParam0))
			{
				func_16(*uParam0, uParam0->f_1);
				Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = uParam0->f_1;
			}
		}
	}
	if (func_31(uParam0) < 10)
	{
		if (func_32(*uParam0) && func_30(uParam0))
		{
			func_33(uParam0, 11);
			if (func_34(uParam0->f_15))
			{
				func_18(&(uParam0->f_15), 1, 1);
			}
			func_25();
		}
	}
	bVar1 = (func_31(uParam0) <= 6 && !func_35(uParam0->f_15, 1));
	bVar2 = !func_20(uParam0, 32);
	if (func_36(func_20(uParam0, 2)))
	{
		if (func_20(uParam0, 2))
		{
			func_37(uParam0->f_15, uParam0->f_7);
		}
		else
		{
			func_38(&(uParam0->f_28), uParam0->f_7, bVar1, bVar2, 1, 0);
		}
	}
	func_39(uParam0->f_15);
	func_40(uParam0->f_7, *uParam0, uParam0->f_1, 10f);
	switch (func_31(uParam0))
	{
		case 0:
			if (func_20(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_18, false);
			}
			STREAMING::REQUEST_MODEL(-3.761452E-14f, false);
			func_41(&(uParam0->f_28.f_6), uParam0->f_7, 1069547520 /* Float: 1.5f */, 1, 319, 0);
			if (func_20(uParam0, 32))
			{
				func_33(uParam0, 1);
			}
			else if (!func_42(uParam0->f_7))
			{
				func_33(uParam0, 12);
			}
			else
			{
				func_33(uParam0, 1);
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(-3.761452E-14f))
			{
				if (func_20(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
					{
						return false;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						uParam0->f_22 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_18, uParam0->f_7, true, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						return false;
					}
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_7 + Vector(1f, 0f, 0f), &(uParam0->f_27), &(uParam0->f_24)))
					{
						return false;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_22, func_43(uParam0->f_24, 0), 2, true);
					}
				}
				func_33(uParam0, 2);
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
			func_33(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_12, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_12, uParam0->f_7, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_12, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				if (func_20(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_12, "MOUND", uParam0->f_22, 0);
					}
				}
				func_33(uParam0, 4);
			}
			break;
		case 4:
			if (func_36(func_20(uParam0, 2)))
			{
				if (func_20(uParam0, 1))
				{
					func_44(uParam0->f_22, uParam0->f_22, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_22, 3.474616E-32f);
					func_33(uParam0, 5);
				}
				else
				{
					func_33(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_45(uParam0, 15f))
			{
				if (!func_34(uParam0->f_15))
				{
					uParam0->f_15 = func_46("UC_CLT_DIG", -7.068217E+21f, uParam0->f_7, 1.6f, 3, 1, 0, 4, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0);
				}
				func_33(uParam0, 6);
			}
			break;
		case 6:
			if (func_34(uParam0->f_15))
			{
				if (!func_20(uParam0, 32))
				{
					func_47(uParam0->f_15, &(uParam0->f_28.f_5));
				}
				if (func_48(uParam0->f_15, 1))
				{
					if (func_49(*uParam0, uParam0->f_1, 32))
					{
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						func_18(&(uParam0->f_15), 1, 1);
						func_50(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_27(1);
						func_23(*uParam0, uParam0->f_1, 32);
						func_33(uParam0, 7);
					}
				}
				else if (func_30(uParam0))
				{
					if (func_51(uParam0->f_15, 1) > 0f)
					{
						func_52();
						func_54(func_53(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_7, 1));
					}
					else if (func_51(uParam0->f_15, 1) == 0f)
					{
						func_25();
					}
				}
			}
			break;
		case 7:
			func_52();
			if ((((func_55(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -3.273909E-18f && func_55(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == -3.273909E-18f) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_CARRYING_SOMETHING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_19(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_12, uParam0->f_7, 0f, 0f, func_56(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_7, 1), 2);
				func_33(uParam0, 8);
			}
			break;
		case 8:
			func_57();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_12, "player", uParam0->f_14, 1.48f, true, 128, 20000, -1f);
			func_33(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_12, false))
			{
				func_33(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_12, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_12, false))
			{
				if (!func_58(uParam0))
				{
					return false;
				}
				func_59(uParam0->f_10);
				func_60(func_20(uParam0, 1), func_20(uParam0, 2));
				func_27(0);
				func_28(&(uParam0->f_28));
				if (func_20(uParam0, 2))
				{
					func_21(uParam0->f_7);
				}
				func_59(uParam0->f_10);
				func_25();
				if (func_20(uParam0, 2) && func_20(uParam0, 32))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -8.284301E+07f, false, 0, false, false);
				}
				func_33(uParam0, 12);
			}
			break;
		case 11:
			if (func_61())
			{
			}
			if (func_49(*uParam0, uParam0->f_1, 1))
			{
				if (!func_32(*uParam0))
				{
					bVar0 = func_62();
					if (!func_63(bVar0, 0))
					{
						return false;
					}
					uParam0->f_5 = bVar0;
					uParam0->f_23 = func_64(uParam0->f_5);
					if (!func_20(uParam0, 8))
					{
						func_65(uParam0, 8);
					}
					func_33(uParam0, 4);
					func_23(*uParam0, uParam0->f_1, 1);
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
		if (func_20(uParam3, 4))
		{
			iVar1 = Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2;
		}
		else if (bVar3)
		{
			func_65(uParam3, 32);
		}
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = iVar1;
	}
	switch (iVar1)
	{
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 2;
		case 10:
			return 3;
		case 11:
			return 4;
		case 12:
			return 5;
		case 31:
			return 6;
		case 32:
			return 7;
		case 33:
			return 8;
		case 22:
			return 9;
		case 23:
			return 10;
		case 24:
			return 11;
		case 16:
			return 12;
		case 17:
			return 13;
		case 18:
			return 14;
		case 13:
			return 15;
		case 14:
			return 16;
		case 15:
			return 17;
		case 1:
			return 18;
		case 2:
			return 19;
		case 3:
			return 20;
		case 7:
			return 21;
		case 8:
			return 22;
		case 9:
			return 23;
		case 25:
			return 24;
		case 26:
			return 25;
		case 27:
			return 26;
		case 34:
			return 27;
		case 35:
			return 28;
		case 36:
			return 29;
		case 19:
			return 30;
		case 20:
			return 31;
		case 21:
			return 32;
		case 28:
			return 33;
		case 29:
			return 34;
		case 30:
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
		default:
			break;
	}
	return 0;
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
		case 3:
			fVar0 = -0.001567479f;
			break;
		case 4:
			fVar0 = 1.570691E+38f;
			break;
		case 5:
			fVar0 = 2.419464E+14f;
			break;
		case 15:
			fVar0 = 1.09735E-25f;
			break;
		case 16:
			fVar0 = -5.009458E+14f;
			break;
		case 17:
			fVar0 = 57678.12f;
			break;
		case 12:
			fVar0 = 1.570691E+38f;
			break;
		case 13:
			fVar0 = -0.001567479f;
			break;
		case 14:
			fVar0 = 1.448199E+20f;
			break;
		case 30:
			fVar0 = 30237.53f;
			break;
		case 31:
			fVar0 = 2.419464E+14f;
			break;
		case 32:
			fVar0 = 1.448199E+20f;
			break;
		case 9:
			fVar0 = -1.598453E-33f;
			break;
		case 10:
			fVar0 = 57678.12f;
			break;
		case 11:
			fVar0 = 1.570691E+38f;
			break;
		case 24:
			fVar0 = 57678.12f;
			break;
		case 25:
			fVar0 = 1.570691E+38f;
			break;
		case 26:
			fVar0 = -0.001567479f;
			break;
		case 33:
			fVar0 = 1.448199E+20f;
			break;
		case 34:
			fVar0 = 248.821f;
			break;
		case 35:
			fVar0 = 1.448199E+20f;
			break;
		case 6:
			fVar0 = 248.821f;
			break;
		case 7:
			fVar0 = -2.257416E+17f;
			break;
		case 8:
			fVar0 = -5.009458E+14f;
			break;
		case 27:
			fVar0 = -2.257416E+17f;
			break;
		case 28:
			fVar0 = -0.001567479f;
			break;
		case 29:
			fVar0 = -0.001567479f;
			break;
	}
	return fVar0;
}

void func_12(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			func_65(uParam0, 1);
			break;
		default:
			func_65(uParam0, 2);
			break;
	}
}

float func_13(var uParam0)
{
	float fVar0;

	switch (uParam0->f_1)
	{
		case 0:
			fVar0 = -9.421332E+33f;
			break;
		case 1:
			fVar0 = -9.421332E+33f;
			break;
		case 2:
			fVar0 = -9.421332E+33f;
			break;
		case 3:
			fVar0 = 1.501996E+23f;
			break;
		case 4:
			fVar0 = 1.501996E+23f;
			break;
		case 5:
			fVar0 = 1.501996E+23f;
			break;
		case 6:
			fVar0 = -1.045672E-11f;
			break;
		case 7:
			fVar0 = -1.045672E-11f;
			break;
		case 8:
			fVar0 = -1.045672E-11f;
			break;
		case 9:
			fVar0 = 3.774631E+27f;
			break;
		case 10:
			fVar0 = 3.774631E+27f;
			break;
		case 11:
			fVar0 = 3.774631E+27f;
			break;
		case 12:
			fVar0 = 9.1458E+23f;
			break;
		case 13:
			fVar0 = 9.1458E+23f;
			break;
		case 14:
			fVar0 = 9.1458E+23f;
			break;
		case 15:
			fVar0 = 6.189942E+10f;
			break;
		case 16:
			fVar0 = 6.189942E+10f;
			break;
		case 17:
			fVar0 = 6.189942E+10f;
			break;
		case 18:
			fVar0 = -9.418554E+21f;
			break;
		case 19:
			fVar0 = -9.418554E+21f;
			break;
		case 20:
			fVar0 = -9.418554E+21f;
			break;
		case 21:
			fVar0 = 1.51393E-15f;
			break;
		case 22:
			fVar0 = 1.51393E-15f;
			break;
		case 23:
			fVar0 = 1.51393E-15f;
			break;
		case 24:
			fVar0 = -6.844066E-10f;
			break;
		case 25:
			fVar0 = -6.844066E-10f;
			break;
		case 26:
			fVar0 = -6.844066E-10f;
			break;
		case 27:
			fVar0 = -2.921919E-14f;
			break;
		case 28:
			fVar0 = -2.921919E-14f;
			break;
		case 29:
			fVar0 = -2.921919E-14f;
			break;
		case 30:
			fVar0 = -5.841201E-33f;
			break;
		case 31:
			fVar0 = -5.841201E-33f;
			break;
		case 32:
			fVar0 = -5.841201E-33f;
			break;
		case 33:
			fVar0 = -7.626176E+27f;
			break;
		case 34:
			fVar0 = -7.626176E+27f;
			break;
		case 35:
			fVar0 = -7.626176E+27f;
			break;
		case 39:
			fVar0 = -9.421332E+33f;
			break;
		case 40:
			fVar0 = -9.421332E+33f;
			break;
		case 41:
			fVar0 = -9.421332E+33f;
			break;
		case 45:
			fVar0 = 1.501996E+23f;
			break;
		case 46:
			fVar0 = 1.501996E+23f;
			break;
		case 47:
			fVar0 = 1.501996E+23f;
			break;
		case 66:
			fVar0 = -1.045672E-11f;
			break;
		case 67:
			fVar0 = -1.045672E-11f;
			break;
		case 68:
			fVar0 = -1.045672E-11f;
			break;
		case 57:
			fVar0 = 3.774631E+27f;
			break;
		case 58:
			fVar0 = 3.774631E+27f;
			break;
		case 59:
			fVar0 = 3.774631E+27f;
			break;
		case 51:
			fVar0 = 9.1458E+23f;
			break;
		case 52:
			fVar0 = 9.1458E+23f;
			break;
		case 53:
			fVar0 = 9.1458E+23f;
			break;
		case 48:
			fVar0 = 6.189942E+10f;
			break;
		case 49:
			fVar0 = 6.189942E+10f;
			break;
		case 50:
			fVar0 = 6.189942E+10f;
			break;
		case 36:
			fVar0 = -9.418554E+21f;
			break;
		case 37:
			fVar0 = -9.418554E+21f;
			break;
		case 38:
			fVar0 = -9.418554E+21f;
			break;
		case 42:
			fVar0 = 1.51393E-15f;
			break;
		case 43:
			fVar0 = 1.51393E-15f;
			break;
		case 44:
			fVar0 = 1.51393E-15f;
			break;
		case 60:
			fVar0 = -6.844066E-10f;
			break;
		case 61:
			fVar0 = -6.844066E-10f;
			break;
		case 62:
			fVar0 = -6.844066E-10f;
			break;
		case 69:
			fVar0 = -2.921919E-14f;
			break;
		case 70:
			fVar0 = -2.921919E-14f;
			break;
		case 71:
			fVar0 = -2.921919E-14f;
			break;
		case 54:
			fVar0 = -5.841201E-33f;
			break;
		case 55:
			fVar0 = -5.841201E-33f;
			break;
		case 56:
			fVar0 = -5.841201E-33f;
			break;
		case 63:
			fVar0 = -7.626176E+27f;
			break;
		case 64:
			fVar0 = -7.626176E+27f;
			break;
		case 65:
			fVar0 = -7.626176E+27f;
			break;
	}
	return fVar0;
}

int func_14(int iParam0)
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

void func_15(var uParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_7, 6, 0, 0, -1, -1, 0);
	}
}

void func_16(var uParam0, var uParam1)
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = uParam0;
}

void func_17()
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_7 = 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_34(*uParam0))
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

void func_19(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
	{
		func_68(uParam0->f_22, uParam0->f_22, 0);
	}
}

bool func_20(var uParam0, int iParam1)
{
	return func_69(uParam0->f_16, iParam1);
}

void func_21(vector3 vParam0)
{
	if (func_70(Global_1222308, vParam0))
	{
		Global_1222308 = { 0f, 0f, 0f };
	}
}

void func_22(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	struct<7> Var1;
	struct<19> Var8;

	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return;
	}
	iVar0 = func_71(1, 8);
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
		func_73(Var8, func_72(Global_34, 0f, 0f, 0f, 1133903872 /* Float: 300f */, 1133903872 /* Float: 300f */, 1133903872 /* Float: 300f */, -2.19652E+23f, 0, 8), 0, 0);
	}
	func_74(&Var1, &iVar0);
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	func_75(&(Global_1222312[iParam0 /*251*/][iParam1]), iParam2);
}

void func_24()
{
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
}

void func_25()
{
	if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}
}

void func_26(var uParam0)
{
	func_76(uParam0);
	func_77(&(uParam0->f_6), 1);
}

void func_27(bool bParam0)
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

void func_28(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_7);
	}
}

bool func_29(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_80(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_30(var uParam0)
{
	if (!func_20(uParam0, 32))
	{
		return Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;
	}
	return (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0 && Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_2 == uParam0->f_1);
}

int func_31(var uParam0)
{
	return uParam0->f_2;
}

bool func_32(int iParam0)
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
				func_81(&(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2]), 1);
			}
			return true;
		}
		if (!func_69(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2], 32))
		{
			func_81(&(Global_1222312[Global_1222019[iVar4 /*9*/].f_1 /*251*/][Global_1222019[iVar4 /*9*/].f_2]), 32);
		}
	}
	return false;
}

void func_33(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_34(int iParam0)
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

bool func_35(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_34(iParam0))
	{
		return false;
	}
	iVar0 = func_66(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_36(bool bParam0)
{
	if (func_82(6.914108E-36f, 1))
	{
		if (bParam0)
		{
			if (func_82(-8.284301E+07f, 1))
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

void func_37(var uParam0, vector3 vParam1)
{
	if (!func_42(vParam1))
	{
		func_21(vParam1);
		return;
	}
	if (func_83(Global_1222308))
	{
		Global_1222308 = { vParam1 };
	}
	else if (!func_70(Global_1222308, vParam1))
	{
		if (BUILTIN::VDIST2(Global_34, vParam1) < BUILTIN::VDIST2(Global_34, Global_1222308))
		{
			Global_1222308 = { vParam1 };
		}
	}
}

void func_38(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_83(Global_1222308))
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
	bVar1 = func_84(uParam0, bParam4, bVar0);
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
	fVar2 = (fVar2 * (1f + func_85()));
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
						func_86(uParam0, 1);
					}
				}
				else
				{
					func_86(uParam0, 1);
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
				func_87(250);
			}
			PAD::SET_CONTROL_SHAKE(0, iVar3, iVar4);
			func_88(&(uParam0->f_1));
			func_86(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_76(uParam0);
				}
				func_86(uParam0, 0);
			}
			else if (func_89(&(uParam0->f_1)) >= 2f)
			{
				func_86(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_87(250);
			}
			break;
	}
}

void func_39(int iParam0)
{
	int iVar0;

	if (func_34(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295619.f_3);
		if ((((((((((((PED::IS_PED_CARRYING_SOMETHING(Global_1295619.f_3) || TASK::IS_PED_GETTING_UP(Global_1295619.f_3)) || PED::IS_PED_RAGDOLL(Global_1295619.f_3)) || !func_90()) || Global_1102813.f_3664) || ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_JUMPING(Global_1295619.f_3)) || PED::IS_PED_CLIMBING(Global_1295619.f_3)) || PED::IS_PED_FALLING(Global_1295619.f_3)) || PED::IS_PED_HOGTIED(Global_33)) || func_91(Global_33)) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 1, 0))
		{
			if (func_92(iParam0, 0))
			{
				func_93(iParam0, 0, 1, 1);
			}
		}
		else if (!func_92(iParam0, 0))
		{
			func_93(iParam0, 1, 1, 1);
		}
	}
}

void func_40(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_53(Global_33, vParam0, 1) < fParam5)
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

void func_41(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_94(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_94(uParam0))
		{
		}
	}
}

bool func_42(vector3 vParam0)
{
	return !PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam0);
}

Vector3 func_43(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_95(vParam0) };
	vVar3 = { func_97(func_97(vVar0, func_96((fParam3 - 1119092736))), vVar0) };
	fVar6 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar7 = -MISC::ATAN2(vVar3.z, BUILTIN::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_97(vVar8, vVar3) };
	fVar14 = (MISC::ATAN2((func_98(vVar8, vVar0) / BUILTIN::VMAG(vVar8)), (func_98(vVar11, vVar0) / BUILTIN::VMAG(vVar11))) + 1127481344);
	return fVar14, fVar7, fVar6;
}

int func_44(int iParam0, int iParam1, int iParam2)
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
	if (!func_99(iParam0))
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

bool func_45(var uParam0, float fParam1)
{
	if (func_82(6.914108E-36f, 1))
	{
		if (Global_1102813.f_3664)
		{
			return false;
		}
		if (func_53(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_7, 1) > fParam1)
		{
			return false;
		}
		if (func_20(uParam0, 2))
		{
			if (func_55(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -8.284301E+07f && func_53(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_7, 1) <= 1070386381)
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

int func_46(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_83(vParam2))
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
		if (func_100(iVar0, 2))
		{
			if (func_101(vParam2, Global_1951897[iVar0 /*23*/].f_6, 1008981770 /* Float: 0.01f */, 1) && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
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
		func_102(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1f, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_47(int iParam0, var uParam1)
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (func_35(iParam0, 1))
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

bool func_48(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_34(iParam0))
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

bool func_49(int iParam0, int iParam1, int iParam2)
{
	return func_69(Global_1222312[iParam0 /*251*/][iParam1], iParam2);
}

void func_50(int iParam0)
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

float func_51(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_34(iParam0))
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

void func_52()
{
	PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
}

float func_53(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_54(float fParam0)
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

int func_55(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_56(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_57()
{
	if (Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;
	}
}

bool func_58(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;

	Global_1222019[PLAYER::PLAYER_ID() /*9*/].f_7 = 1;
	while (!func_103(uParam0->f_23, &uVar0))
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
	func_105(func_104(-0.08089317f, -7.367104E+22f), 1);
	if (func_20(uParam0, 2))
	{
		func_105(func_104(-0.08089317f, 2.217208E-35f), 1);
	}
	return true;
}

void func_59(int iParam0)
{
	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iParam0))
	{
		return;
	}
	PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iParam0);
}

void func_60(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_106(-6.59161E+11f, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_106(11389876, 0, 255, 0, 0);
	}
}

bool func_61()
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

var func_62()
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

bool func_63(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

float func_64(int iParam0)
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

void func_65(var uParam0, int iParam1)
{
	if (!func_69(uParam0->f_16, iParam1))
	{
		func_81(&(uParam0->f_16), iParam1);
	}
}

int func_66(int iParam0)
{
	return iParam0;
}

void func_67(int iParam0)
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

bool func_69(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_70(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_71(int iParam0, int iParam1)
{
	return func_72(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

var func_72(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_108() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_109());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_109());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_109());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_110(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_111(iVar2))
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
				if (iVar9 & 8192 != 0 && func_112(iVar2) != 1)
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
					if (!func_113(iVar10))
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

void func_73(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_114(&(Global_1072759.f_22981), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_74(var uParam0, int* iParam1)
{
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(iParam1))
	{
		uParam0->f_1 = Global_1295619.f_149[Global_1295619];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 22, iParam1);
	}
}

void func_75(var uParam0, int iParam1)
{
	func_115(uParam0, iParam1);
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
	if (func_94(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_78(int iParam0, int iParam1)
{
	if (!func_116(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_117();
	}
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	if (func_116(iParam0, iParam1) && (!bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_117();
	}
}

float func_80(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_81(var uParam0, int iParam1)
{
	func_118(uParam0, iParam1);
}

bool func_82(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_63(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_119(bParam0);
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
			if (!func_120(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_121(bParam0))
			{
				return true;
			}
			break;
	}
	return func_122(bParam0, 0, 0, 0) >= iParam1;
}

bool func_83(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_84(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_122(-4.629755E-24f, 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_123(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_124())
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
			if (func_125())
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

float func_85()
{
	return Global_1156096.f_2169[89 /*205*/].f_201;
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_87(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

void func_88(var uParam0)
{
	func_126(uParam0, 0f);
}

float func_89(var uParam0)
{
	if (!func_127(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_128(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_129() - uParam0->f_1);
}

bool func_90()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_130(Global_33, 8.330918E+10f)) && !func_130(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

bool func_91(int iParam0)
{
	if (func_131(iParam0))
	{
		return true;
	}
	if (func_132(iParam0))
	{
		return true;
	}
	if (func_133(iParam0))
	{
		return true;
	}
	if (func_134(iParam0))
	{
		return true;
	}
	if (func_135(iParam0))
	{
		return true;
	}
	return false;
}

bool func_92(int iParam0, bool bParam1)
{
	if (bParam1 && !func_34(iParam0))
	{
		return false;
	}
	return !func_100(iParam0, 4);
}

void func_93(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_66(iParam0);
	if (bParam1)
	{
		func_136(iParam0, 4);
		if (bParam3)
		{
			func_137(iVar0, 1);
		}
		func_138(iVar0, 1);
	}
	else
	{
		func_139(iParam0, 4);
		func_138(iVar0, 0);
	}
}

bool func_94(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_95(vector3 vParam0)
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

Vector3 func_96(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_97(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_98(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_99(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_140() == 0)
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_140()))
	{
		return false;
	}
	Var0 = func_140();
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

bool func_100(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

bool func_101(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_102(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_137(iParam0, 1);
	func_138(iParam0, 1);
	func_139(iParam0, 128);
}

bool func_103(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_141(&Var0, 2.95884E+10f);
	return func_142(iParam0, &Var0, uParam1, 0, 0);
}

struct<2> func_104(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
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

int func_106(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_143(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_107(int iParam0)
{
	return func_100(iParam0, 2);
}

int func_108()
{
	return Global_1051645.f_12;
}

char* func_109()
{
	return "unnamed";
}

int func_110(int iParam0)
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

bool func_111(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_144(36, iParam0);
}

int func_112(int iParam0)
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

bool func_113(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_145(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_146(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

int func_114(var uParam0, struct<21> Param1)
{
	if (!func_147(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

void func_115(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_116(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_117()
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_119(bool bParam0)
{
	vector3 vVar0;

	if (!func_63(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_120(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_63(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_148(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_149("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_150(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_151(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_152(iVar1);
				return true;
			}
			iVar3++;
		}
		func_152(iVar1);
	}
	return false;
}

bool func_121(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_63(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_153(bParam0);
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
	iVar1 = func_154(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_155(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_156(bParam0);
	iVar2 = func_155(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_122(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_63(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_119(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_148(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_157(bParam0, 0);
	}
	if (func_158(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_159(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_160(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_159(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_123(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_124()
{
	return func_161() != -1;
}

bool func_125()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_126(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_129() - fParam1);
	func_162(uParam0, 1);
	func_163(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_127(var uParam0)
{
	return func_164(*uParam0, 1);
}

bool func_128(var uParam0)
{
	return func_164(*uParam0, 2);
}

float func_129()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_130(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_131(int iParam0)
{
	return func_165(iParam0, 0);
}

bool func_132(int iParam0)
{
	return func_165(iParam0, 3);
}

bool func_133(int iParam0)
{
	return (func_165(iParam0, 4) || func_165(iParam0, 5));
}

bool func_134(int iParam0)
{
	return func_165(iParam0, 6);
}

bool func_135(int iParam0)
{
	return func_165(iParam0, 7);
}

void func_136(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_137(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_100(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_138(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_139(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_140()
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

void func_141(var uParam0, int iParam1)
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

int func_142(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_166(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_167(uParam2, iParam0, Var1);
	return 1;
}

int func_143(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_168(iParam2, -3.005759E+25f);
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
	func_169(uParam1, bParam0, Var3);
	return 1;
}

bool func_144(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_170(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_171())
	{
		return func_170(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_170(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_145(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_146(int iParam0)
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
		func_172(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_173(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_147(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_148(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_63(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_119(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_174(bParam0, 9.811189E+11f))
	{
		func_175(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_149(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_159(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_150(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_151(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_152(int iParam0)
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

int func_153(bool bParam0)
{
	struct<2> Var0;

	if (!func_63(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_154(bool bParam0)
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

int func_155(var uParam0, int iParam1)
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

int func_156(bool bParam0)
{
	int iVar0;

	iVar0 = func_153(bParam0);
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

int func_157(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_176(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_178(&Var0, func_177(0));
	}
	if (!func_179(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_152(iVar18);
	return iVar19;
}

int func_158(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_181(func_180(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_159(bool bParam0)
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

struct<4> func_160(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_182(bParam0, bParam1, 0) };
	return func_183(bParam0, Var0, Var0.f_4, bParam1);
}

int func_161()
{
	return Global_1149157.f_137;
}

void func_162(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_163(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_164(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_165(int iParam0, int iParam1)
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

void func_166(var uParam0)
{
	func_141(uParam0, 8.505438E-34f);
	if (func_184() == 3.272964E+34f)
	{
		func_141(uParam0, 8.967694E-17f);
	}
	else
	{
		func_141(uParam0, 1.721179E-28f);
	}
}

void func_167(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_185(uParam0))
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

void func_168(int iParam0, int iParam1)
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

void func_169(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_185(uParam0))
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

bool func_170(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_171()
{
	return Global_1102813.f_3672;
}

void func_172(int iParam0)
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
	func_173(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_173(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_174(bool bParam0, int iParam1)
{
	if (!func_63(bParam0, 0))
	{
		return func_186(func_180(bParam0), iParam1);
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

void func_175(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_176(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_177(bool bParam0)
{
	int iVar0;

	iVar0 = func_159(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_183(8.681942E-06f, func_187(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_183(8.681942E-06f, func_187(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_183(8.681942E-06f, func_187(bParam0), -1.942248E+12f, 0);
}

void func_178(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_179(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_159(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_180(bool bParam0)
{
	return bParam0;
}

bool func_181(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

struct<5> func_182(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_187(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_119(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_183(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_177(bParam1) };
			if (iParam2 && func_188(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_189(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_189(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_190(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_191(bParam1) };
			switch (func_153(bParam0))
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
			if (func_192(bParam0, -2.580501E-27f))
			{
				Var0 = { func_183(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_192(bParam0, -4.220332E-15f))
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
			else if (func_192(bParam0, -3.171238E-21f))
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
				if (!func_193(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_192(bParam0, -3.171238E-21f))
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

struct<4> func_183(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_63(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_159(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_184()
{
	return Global_1953279.f_1;
}

bool func_185(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_186(bool bParam0, int iParam1)
{
	if (!func_181(bParam0, 2))
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

struct<4> func_187(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_159(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_183(2.982335E+09f, func_194(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_183(2.982335E+09f, func_194(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_183(2.982335E+09f, func_194(), -5.45926E-19f, bParam0);
}

int func_188(bool bParam0, bool bParam1)
{
	if (func_153(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_195();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_189(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_196(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_190(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_197(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_191(bool bParam0)
{
	int iVar0;

	iVar0 = func_159(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_183(3.507197E-29f, func_187(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_183(3.507197E-29f, func_187(bParam0), 12999093, 0);
}

bool func_192(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_153(bParam0);
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
			if (func_198(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_193(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_199(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

struct<4> func_194()
{
	struct<4> Var0;

	return Var0;
}

int func_195()
{
	if (func_200(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_196(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_63(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_158(bParam0, -3.294982E+22f) == 0)
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
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_159(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_159(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_197(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_159(0);
	*iParam1 = { func_183(bParam0, func_177(0), fParam3, 0) };
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

bool func_198(bool bParam0, int iParam1, int iParam2)
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

int func_199(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_159(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_200(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_201(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_159(bParam1), iParam0, bParam3);
}

bool func_201(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

