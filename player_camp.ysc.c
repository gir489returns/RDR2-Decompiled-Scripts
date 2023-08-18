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
	char* sLocal_19 = NULL;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	struct<130> Local_28 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 192, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15933, 8192, 0 } ;
	var uLocal_158 = 0;
	var uLocal_159 = -1;
	var uLocal_160 = 0;
	var uLocal_161 = -1;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 11;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = -1;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = -1;
	var uLocal_193 = 1;
	var uLocal_194 = 0;
	struct<8> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<98> Var0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	fLocal_27 = 2f;
	Var0.f_20.f_9 = 5f;
	Var0.f_20.f_10 = 2f;
	Var0.f_20.f_30 = 1;
	Var0.f_85 = 5;
	Var0.f_97 = 1;
	Var0.f_10 = ScriptParam_0;
	func_1(&Var0);
	if (!func_2(ScriptParam_0.f_3))
	{
		Var0.f_1 = { ScriptParam_0.f_3 };
		Var0.f_4 = ScriptParam_0.f_6;
	}
	Var0.f_95 = ScriptParam_0.f_7;
	Var0.f_12 = ScriptParam_0.f_1;
	Var0.f_13 = ScriptParam_0.f_2;
	func_3(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555) || func_4(0, 0))
	{
		func_5(&Var0);
		func_6();
	}
	func_7(&Var0, 1);
	while (func_8() && UNLOCK::UNLOCK_IS_UNLOCKED(-1.73924E+12f))
	{
		func_9(&Var0);
		BUILTIN::WAIT(0);
	}
	func_5(&Var0);
	func_6();
}

void func_1(var uParam0)
{
	func_10(32, uParam0->f_10);
	func_11();
	func_12(0);
}

bool func_2(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_3(var uParam0)
{
	if (func_13(uParam0))
	{
		func_14();
		if (func_15(Global_33))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_33, 0, 0, 0, 0, 0);
		}
	}
	func_16();
	Local_28.f_49.f_12 = 2.270209E+38f;
}

bool func_4(bool bParam0, bool bParam1)
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

void func_5(var uParam0)
{
	int iVar0;
	int iVar1;

	uParam0->f_102 = 4;
	Global_26681 = 0;
	func_17(uParam0);
	func_18(&Local_28);
	func_19(&Local_28);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_67)))
	{
		CAM::_CAM_DESTROY(&(uParam0->f_67));
		CAM::_UNLOAD_CAMERA_DATA_DICT(&(uParam0->f_67));
	}
	if (func_20(uParam0))
	{
		func_21(uParam0);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_57))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_57));
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_99))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_99);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_99);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_61))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_61);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_61);
		VOLUME::DELETE_VOLUME(uParam0->f_61);
	}
	func_22(uParam0->f_1, 0);
	func_23(uParam0->f_1, 1106247680 /* Float: 30f */, 5);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uParam0->f_100))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(uParam0->f_100));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_17));
	}
	HUD::_TEXT_BLOCK_DELETE("CAMP");
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_19));
	func_24(uParam0);
	func_25(uParam0->f_58);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_101))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_101, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_56))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_56));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_66);
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	func_26(iVar1);
	func_27(&Local_28, 1);
	func_28(uParam0);
	func_29(8);
	func_29(256);
	func_30(uParam0->f_58);
	func_30(uParam0->f_59);
	func_30(uParam0->f_92);
	if (SCRIPTS::DOES_THREAD_EXIST(uParam0->f_15))
	{
		func_31(uParam0->f_15);
	}
	Global_1148170[Global_1295619 /*10*/].f_8 = 0;
	Global_1148170[Global_1295619 /*10*/].f_9 = 0;
	if (func_32(512))
	{
		func_29(512);
	}
	if ((func_33(uParam0, 16384) || Global_1915643.f_20637) || Global_1915643.f_22504.f_1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
		func_34(uParam0, 16384);
	}
	if (func_33(uParam0, 32768))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
		func_34(uParam0, 32768);
	}
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(var uParam0, int iParam1)
{
	if (uParam0->f_96 != iParam1)
	{
		uParam0->f_96 = iParam1;
		Global_26681 = uParam0->f_96;
		func_35(uParam0);
	}
}

bool func_8()
{
	if (func_4(0, 0))
	{
		return false;
	}
	if (func_36(16))
	{
		return false;
	}
	if (func_37())
	{
		HUD::_DISABLE_HUD_CONTEXT(9.08355E+33f);
		return false;
	}
	return true;
}

void func_9(var uParam0)
{
	if (func_13(uParam0))
	{
		func_38(uParam0);
	}
	else
	{
		func_39(uParam0);
	}
}

void func_10(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_11()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_6();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_40() == 0)
		{
			if (func_41())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

void func_12(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return;
		}
		if (MISC::GET_SYSTEM_TIME() >= iVar0)
		{
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_13(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (iVar1 != uParam0->f_10)
	{
		return false;
	}
	return true;
}

void func_14()
{
	if (func_42(Global_33, 1, 0, 0) != -3.273909E-18f || func_42(Global_33, 1, 1, 0) != -3.273909E-18f)
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, true);
		TASK::TASK_SWAP_WEAPON(Global_33, 0, 1, 0, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, false, 1, false, false);
	}
}

bool func_15(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

void func_16()
{
	if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, 1.209368E-07f))
	{
		PED::_GIVE_PED_HASH_COMMAND(Global_33, 1.209368E-07f, 30f);
	}
}

void func_17(var uParam0)
{
	int iVar0;

	if (func_43(&(uParam0->f_83)))
	{
		func_44(&(uParam0->f_83), 1);
	}
	if (func_43(&(uParam0->f_84)))
	{
		func_44(&(uParam0->f_84), 1);
	}
	if (func_43(&(uParam0->f_91)))
	{
		func_44(&(uParam0->f_91), 1);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_85)
	{
		if (func_43(&(uParam0->f_85[iVar0])))
		{
			func_44(&(uParam0->f_85[iVar0]), 1);
		}
		iVar0++;
	}
}

void func_18(var uParam0)
{
	if (func_45(uParam0->f_149))
	{
		func_46(&(uParam0->f_149), 1, 1);
	}
}

void func_19(var uParam0)
{
	if (func_45(uParam0->f_150))
	{
		func_46(&(uParam0->f_150), 1, 1);
	}
}

bool func_20(var uParam0)
{
	return func_33(uParam0, 256);
}

void func_21(var uParam0)
{
	func_34(uParam0, 256);
}

void func_22(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_2(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1913327)
	{
		iVar1 = Global_1913327[iVar0];
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_47(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vVar2, 2f, 0, iParam3, 8192))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(iVar1);
					Global_1913327[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_23(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_48(vVar0, vVar3, 0f) };
	vVar9 = { func_49(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_97)
	{
		if (func_45(uParam0->f_97[iVar0]))
		{
			func_46(&(uParam0->f_97[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_25(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_17360[iVar0 /*2*/] == iParam0)
		{
			Global_17360[iVar0 /*2*/].f_1 = 5;
		}
		iVar0++;
	}
}

void func_26(int iParam0)
{
	Global_1148170[iParam0 /*10*/] = { 0f, 0f, 0f };
	Global_1148170[iParam0 /*10*/].f_3 = 0f;
	Global_1148170[iParam0 /*10*/].f_4 = 0;
	func_50(64, PLAYER::PLAYER_ID());
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1148170[iParam0 /*10*/].f_6))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1148170[iParam0 /*10*/].f_6);
	}
}

void func_27(var uParam0, bool bParam1)
{
	func_51(uParam0);
	func_52(uParam0);
	func_53(uParam0);
	func_54(uParam0);
	if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_18)))
	{
		CAM::_CAM_DESTROY(&(uParam0->f_18));
	}
	if (bParam1)
	{
		func_55(uParam0);
	}
	uParam0->f_154 = -1;
	func_56(&(uParam0->f_128), 32768);
	func_57(&(uParam0->f_49), 0, 1);
}

void func_28(var uParam0)
{
	if ((UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-3.556355E-20f) || func_58()) && func_59(uParam0))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		HUD::_DISABLE_HUD_CONTEXT(9.08355E+33f);
		func_60(6, PLAYER::PLAYER_ID(), 0f, 0f, 0f, 0, 1);
		TASK::_0xFDECCA06E8B81346(Global_33);
	}
}

void func_29(int iParam0)
{
	if (func_32(iParam0))
	{
		Global_1958662 = (Global_1958662 - (Global_1958662 && iParam0));
	}
}

void func_30(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_31(var uParam0)
{
	Global_1072759.f_23824.f_3 = uParam0;
	Global_1072759.f_23824.f_2 = 1;
}

bool func_32(int iParam0)
{
	return (Global_1958662 && iParam0) != 0;
}

bool func_33(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_35(var uParam0)
{
	func_61(uParam0, 256);
}

bool func_36(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_37()
{
	return func_62(1, 255);
}

void func_38(var uParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33)) || func_4(0, 0))
	{
		func_7(uParam0, 13);
	}
	func_63(uParam0);
	if (uParam0->f_96 >= 8)
	{
		func_64(&(uParam0->f_20), &(uParam0->f_56));
		uParam0->f_20.f_1 = 1;
	}
	else if (uParam0->f_96 <= 5)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (func_65())
			{
				CAM::DO_SCREEN_FADE_IN(500);
				func_7(uParam0, 14);
			}
		}
	}
	if (uParam0->f_96 < 11)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -19.07792f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.064456E+26f, false);
		HUD::_DISABLE_HUD_CONTEXT(9.08355E+33f);
		func_66(0);
		if (((func_67(0, 1, 1) && !func_68(1)) || Global_1915643.f_20637) || Global_1915643.f_22504.f_1)
		{
			func_7(uParam0, 14);
		}
	}
	if (uParam0->f_96 < 3)
	{
		if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.608566E+13f))
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH(1.608566E+13f);
		}
		if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.175061E+08f))
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH(1.175061E+08f);
		}
	}
	if (uParam0->f_96 == 3)
	{
		if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
	}
	switch (uParam0->f_96)
	{
		case 1:
			func_69(uParam0);
			break;
		case 2:
			func_70(uParam0);
			break;
		case 3:
			func_71(uParam0);
			break;
		case 4:
			func_72(uParam0);
			break;
		case 5:
			func_73(uParam0);
			break;
		case 6:
			func_74(uParam0);
			break;
		case 7:
			func_75(uParam0);
			break;
		case 9:
			func_76(uParam0);
			break;
		case 10:
			func_77(uParam0);
			break;
		case 11:
			func_78(uParam0);
			break;
		case 12:
			func_79(uParam0);
			break;
		case 13:
			func_80(uParam0);
			break;
		case 14:
			func_81(uParam0);
			break;
	}
}

void func_39(var uParam0)
{
	switch (uParam0->f_102)
	{
		case 0:
			if (func_2(uParam0->f_1))
			{
				uParam0->f_102 = 4;
				return;
			}
			uParam0->f_66 = 5.548879f;
			uParam0->f_65 = -1.441386E-12f;
			func_82(uParam0);
			if (func_83(uParam0))
			{
				uParam0->f_18 = func_84(uParam0->f_1);
				func_85(uParam0);
				func_86(uParam0);
				func_87(uParam0);
				func_88(uParam0);
				uParam0->f_20.f_1 = 1;
				uParam0->f_102 = 1;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_56))
			{
				func_89(&Local_28, 1);
				uParam0->f_20.f_1 = 1;
				uParam0->f_102 = 3;
			}
			break;
		case 3:
			func_89(&Local_28, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_56))
			{
			}
			func_64(&(uParam0->f_20), &(uParam0->f_56));
			if (func_90(uParam0))
			{
				uParam0->f_102 = 4;
			}
			break;
		case 4:
			if (func_33(uParam0, 8192))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_34(uParam0, 8192);
				}
			}
			else
			{
				func_17(uParam0);
				func_27(&Local_28, 1);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_56))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_56));
				}
				func_5(uParam0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				func_6();
			}
			break;
	}
}

int func_40()
{
	return Global_1572887.f_14;
}

bool func_41()
{
	return Global_1051645.f_8;
}

int func_42(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	float fVar0;

	fVar0 = -3.273909E-18f;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return fVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &fVar0, bParam1, iParam2, bParam3))
	{
		return fVar0;
	}
	return fVar0;
}

bool func_43(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_44(int iParam0, int iParam1)
{
	if (func_43(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
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

void func_46(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_45(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_91(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_92(iVar0);
	*uParam0 = 0;
}

bool func_47(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

Vector3 func_48(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_49(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_50(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1148170[iVar0 /*10*/].f_7 = (Global_1148170[iVar0 /*10*/].f_7 || iParam0);
}

void func_51(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_45(uParam0->f_137[iVar0]))
		{
			func_46(&(uParam0->f_137[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_53(var uParam0)
{
}

void func_54(var uParam0)
{
	func_46(&(uParam0->f_150), 1, 1);
	func_46(&(uParam0->f_149), 1, 1);
}

void func_55(var uParam0)
{
	uParam0->f_130 = 0;
	uParam0->f_131 = -1;
	uParam0->f_132 = 0;
	uParam0->f_133 = -1;
	uParam0->f_134 = 0;
	uParam0->f_129 = 0;
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_57(var uParam0, bool bParam1, bool bParam2)
{
	func_93(uParam0);
	if (bParam2)
	{
		func_94(uParam0, 0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_29);
	}
	if (func_95())
	{
		func_96(0);
	}
	if (bParam1)
	{
		func_97(uParam0);
		return;
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_21)))
	{
		HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_21));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_49);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_50);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_51);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_52);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_53);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_54);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_55);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_56);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_57);
	}
	func_98(&(uParam0->f_64), &(uParam0->f_65));
	func_98(&(uParam0->f_66), &(uParam0->f_67));
	func_98(&(uParam0->f_68), &(uParam0->f_69));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913621.f_1576 = 0;
	if (func_99(uParam0, 2))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
	}
	if (func_40() == -1)
	{
		func_100(uParam0, 18);
	}
	else
	{
		if (uParam0->f_11 == 11)
		{
			if (uParam0->f_24 == -1)
			{
				func_101(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
				func_102(uParam0->f_62, uParam0->f_23);
			}
		}
		if (!func_103(0) || func_104())
		{
			if (uParam0->f_28 > 0 && func_105(uParam0->f_62, 0))
			{
				uParam0->f_24 = func_101(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
				if (uParam0->f_12 == 2.270209E+38f)
				{
					func_107(func_106(-0.1137347f, -7.825801E+22f), uParam0->f_28);
				}
				uParam0->f_28 = 0;
			}
		}
		uParam0->f_24 = -1;
		func_100(uParam0, 0);
	}
}

bool func_58()
{
	if (!func_32(8))
	{
		return false;
	}
	if (((PED::IS_PED_USING_SCENARIO_HASH(Global_33, 0.0258619f) || PED::IS_PED_USING_SCENARIO_HASH(Global_33, 9271496f)) || PED::IS_PED_USING_SCENARIO_HASH(Global_33, -1.799881f)) || PED::IS_PED_USING_SCENARIO_HASH(Global_33, -2.585946E-25f))
	{
		return true;
	}
	return false;
}

bool func_59(var uParam0)
{
	return func_108(Global_33, uParam0->f_58, 1, 0);
}

void func_60(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	struct<7> Var0;
	var uVar9;
	int iVar10;

	Var0 = 201;
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_6 = { vParam2 };
	if (bParam5)
	{
		iVar10 = NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT();
		uVar9 = func_109(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar10));
	}
	else if (bParam6)
	{
		uVar9 = func_110(0, 8);
	}
	else
	{
		uVar9 = func_109(iParam1);
	}
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, 44, &uVar9);
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_62(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_111(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_112())
	{
		return func_111(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_111(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

void func_63(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (iVar0 != uParam0->f_95)
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&iVar1, iVar2);
			}
		}
		iVar2++;
	}
	iVar3 = PLAYER::PLAYER_ID();
	if (iVar1 != uParam0->f_115)
	{
		uParam0->f_115 = iVar1;
		VOLUME::_0xEBA87B9273835CF3(Global_1148170[iVar3 /*10*/].f_6, &iVar1);
	}
}

void func_64(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 1016833507; /* Float: 0.019f */
	func_113(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		fVar1 = MISC::GET_RAIN_LEVEL();
		if ((fVar1 > 0f && uParam0->f_9 >= 1f) && !uParam0->f_3)
		{
			func_114(uParam0, 4);
		}
		else if (uParam0->f_5)
		{
			func_114(uParam0, 0);
		}
		else if (uParam0->f_2)
		{
			func_114(uParam0, 2);
		}
		else if (uParam0->f_3)
		{
			func_114(uParam0, 5);
		}
		else if (uParam0->f_6)
		{
			func_114(uParam0, 6);
		}
		else if (uParam0->f_7)
		{
			func_114(uParam0, 7);
		}
		else if (uParam0->f_8)
		{
			func_114(uParam0, 8);
		}
		else if (func_116(&(uParam0->f_31), func_115()))
		{
			func_117(uParam0);
		}
	}
	switch (uParam0->f_30)
	{
		case 0:
			if (uParam0->f_1)
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			}
			if (uParam0->f_1 && uParam0->f_9 <= 2f)
			{
				uParam0->f_20 = 1048576000; /* Float: 0.25f */
				uParam0->f_21 = 1014350479; /* Float: 0.015f */
				uParam0->f_22 = 1048576000; /* Float: 0.25f */
				uParam0->f_23 = 1014350479; /* Float: 0.015f */
				uParam0->f_24 = 1056964608; /* Float: 0.5f */
				uParam0->f_25 = 1008981770; /* Float: 0.01f */
				uParam0->f_26 = 1056964608; /* Float: 0.5f */
				uParam0->f_27 = 1008981770; /* Float: 0.01f */
				uParam0->f_28 = 1036831949; /* Float: 0.1f */
			}
			else
			{
				uParam0->f_24 = 1f;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0) == 0)
			{
				*uParam0 = *uParam1;
			}
			else
			{
				uParam0->f_30 = 2;
			}
			break;
		case 2:
			if (uParam0->f_1)
			{
				func_114(uParam0, 0);
				STREAMING::REQUEST_ANIM_DICT(sLocal_19);
				STREAMING::REQUEST_MOVE_NETWORK_DEF(sLocal_20);
			}
			else
			{
				if (uParam0->f_5)
				{
					func_114(uParam0, 0);
				}
				else if (uParam0->f_2)
				{
					func_114(uParam0, 2);
				}
				else if (uParam0->f_3)
				{
					func_114(uParam0, 5);
				}
				else if (uParam0->f_6)
				{
					func_114(uParam0, 6);
				}
				else if (uParam0->f_7)
				{
					func_114(uParam0, 7);
				}
				else if (uParam0->f_8)
				{
					func_114(uParam0, 8);
				}
				else
				{
					func_114(uParam0, 0);
				}
				uParam0->f_35 = 1;
			}
			GRAPHICS::_SET_LIGHTS_TYPE_FOR_ENTITY(*uParam0, 20);
			GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(*uParam0, 255, 50, 9);
			uParam0->f_29 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_27, true);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_25, true);
			}
			uParam0->f_30 = 3;
			break;
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_19) && STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(sLocal_20))
			{
				TASK::TASK_MOVE_NETWORK_BY_NAME(*uParam0, sLocal_20, 0f, false, sLocal_19, 128);
				uParam0->f_30 = 5;
			}
			func_118(&(uParam0->f_31));
			break;
		case 4:
			uParam0->f_34 = 1;
			break;
		case 5:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
				uParam0->f_30 = 6;
			}
			break;
		case 6:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
			if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
			{
				uParam0->f_34 = 1;
				if (uParam0->f_1 && MISC::GET_RAIN_LEVEL() <= 0f)
				{
					if (uParam0->f_9 <= 2f)
					{
						uParam0->f_30 = 0;
					}
					else if (TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(*uParam0, "BurnPhase") <= 0f || TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(*uParam0, "BurnPhase") >= 1f)
					{
						uParam0->f_30 = 8;
					}
					else
					{
						TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", fVar0);
					}
				}
				else
				{
					uParam0->f_30 = 0;
				}
			}
			break;
		case 7:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "AddLogFinished"))
				{
					uParam0->f_30 = 8;
				}
			}
			break;
		case 8:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam0, "CollapseLog");
					uParam0->f_24 = (uParam0->f_24 + (1f / 5f));
					uParam0->f_30 = 9;
				}
			}
			break;
		case 9:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", fVar0);
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "CollapseLogFinished"))
				{
					uParam0->f_21 = (uParam0->f_21 - (1f / 5f));
					uParam0->f_22 = (uParam0->f_22 - (1056964608 / 5f));
					uParam0->f_25 = (uParam0->f_25 - (1f / 5f));
					uParam0->f_26 = (uParam0->f_26 - (1f / 5f));
					uParam0->f_27 = (uParam0->f_27 - (1069966950 / 5f));
					uParam0->f_9 = (uParam0->f_9 - 1f);
					if (uParam0->f_9 == 4f)
					{
						uParam0->f_20 = 1061997773; /* Float: 0.8f */
						uParam0->f_23 = 1053609165; /* Float: 0.4f */
					}
					else if (uParam0->f_9 == 3f)
					{
						uParam0->f_20 = 1060320051; /* Float: 0.7f */
						uParam0->f_23 = 1050253722; /* Float: 0.3f */
					}
					else if (uParam0->f_9 == 2f)
					{
						uParam0->f_20 = 1058642330; /* Float: 0.6f */
						uParam0->f_23 = 1045220557; /* Float: 0.2f */
					}
					else if (uParam0->f_9 == 1f)
					{
						uParam0->f_20 = 1056964608; /* Float: 0.5f */
						uParam0->f_23 = 1036831949; /* Float: 0.1f */
					}
					uParam0->f_30 = 6;
				}
			}
			break;
		case 10:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			break;
	}
}

bool func_65()
{
	if (ENTITY::IS_ENTITY_IN_AIR(Global_33, 1))
	{
		return true;
	}
	if (PED::IS_PED_FALLING(Global_33))
	{
		return true;
	}
	return false;
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		func_119(4);
	}
	func_119(2);
	MISC::SET_BIT(&(Global_1958621.f_1), 0);
}

bool func_67(int iParam0, bool bParam1, bool bParam2)
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
		if (func_120())
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
	if (iParam0 == 0 && func_122(func_121(0)))
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
	switch (func_123(func_121(0)))
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

bool func_68(int iParam0)
{
	return (Global_1915620.f_22 && iParam0) != 0;
}

void func_69(var uParam0)
{
	if (func_20(uParam0))
	{
		func_61(uParam0, 32768);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		func_21(uParam0);
	}
	HUD::TEXT_BLOCK_REQUEST("CAMP");
	if ((HUD::TEXT_BLOCK_IS_LOADED("CAMP") && func_42(Global_33, 1, 0, 0) == -3.273909E-18f) && func_42(Global_33, 1, 1, 0) == -3.273909E-18f)
	{
		if ((!PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_FULLY_ON_MOUNT(Global_33, true)) && (!func_124(Global_33, 6.915501E+28f) && !PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33)))
		{
			if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == -1.854193E-06f)
			{
				if (!TASK::IS_PED_EXITING_SCENARIO(Global_33, true))
				{
					PED::_GIVE_PED_HASH_COMMAND(Global_33, 1.182033E-37f, 2f);
					TASK::CLEAR_PED_TASKS(Global_33, true, false);
				}
				return;
			}
			if ((!func_33(uParam0, 64) && !func_33(uParam0, 4)) && !func_33(uParam0, 8))
			{
				func_125(uParam0);
			}
			func_7(uParam0, 2);
		}
	}
	else
	{
		func_14();
	}
}

void func_70(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (func_20(uParam0))
	{
		func_126(&(uParam0->f_107), 0f, 1);
		func_21(uParam0);
	}
	func_127(uParam0);
	Global_1148170[iVar1 /*10*/] = { uParam0->f_1 };
	Global_1148170[iVar1 /*10*/].f_3 = uParam0->f_4;
	func_128(uParam0->f_1, 1101004800 /* Float: 20f */, 0);
	uParam0->f_18 = func_84(uParam0->f_1);
	func_85(uParam0);
	if (!func_129(uParam0))
	{
		func_7(uParam0, 14);
	}
	else if (func_130(uParam0) && func_131(uParam0))
	{
		func_7(uParam0, 3);
	}
	if (uParam0->f_96 == 14)
	{
		TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
	}
}

void func_71(var uParam0)
{
	if (func_20(uParam0))
	{
		func_82(uParam0);
		func_21(uParam0);
	}
	else
	{
		func_56(&(Local_28.f_127), 41);
		func_7(uParam0, 4);
	}
}

void func_72(var uParam0)
{
	if (func_20(uParam0))
	{
		if (func_132(Global_33, 0) != -3.273909E-18f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 1, false, false);
		}
		if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		{
			return;
		}
		func_133(uParam0);
		func_21(uParam0);
	}
	if (func_132(Global_33, 0) == -3.273909E-18f)
	{
		if (func_134())
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_93))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_93))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_93, true);
					TASK::TASK_STAND_STILL(uParam0->f_93, -1);
				}
			}
		}
		func_135(&(uParam0->f_107), 1);
		func_7(uParam0, 5);
	}
}

void func_73(var uParam0)
{
	if (func_20(uParam0))
	{
		func_136(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_93))
		{
		}
		func_21(uParam0);
	}
	else
	{
		func_89(&Local_28, 1);
		if (func_137(&(uParam0->f_107)) > 1101004800)
		{
			TASK::CLEAR_PED_TASKS(Global_33, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(Global_33);
			func_138(&(uParam0->f_107));
			func_7(uParam0, 14);
		}
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_65) && STREAMING::HAS_MODEL_LOADED(uParam0->f_66))
		{
			func_138(&(uParam0->f_107));
			uParam0->f_8 = uParam0->f_4;
			func_139(uParam0, uParam0->f_1);
			func_7(uParam0, 6);
		}
	}
}

void func_74(var uParam0)
{
	if (func_20(uParam0))
	{
		func_21(uParam0);
	}
	if (!CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(1500);
	}
	if (func_132(Global_33, 0) != -3.273909E-18f)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
	}
	func_7(uParam0, 7);
}

void func_75(var uParam0)
{
	if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!func_33(uParam0, 1024))
		{
			func_140(uParam0);
		}
		func_21(uParam0);
		Global_38.f_2 = { uParam0->f_1 };
		Global_38.f_5 = uParam0->f_4;
		if (!func_33(uParam0, 2))
		{
			TELEMETRY::_TELEMETRY_CAMP_CREATED(1);
		}
		if (func_141(uParam0->f_17, uParam0->f_16, &(uParam0->f_15)))
		{
		}
		else if (!SCRIPTS::DOES_THREAD_EXIST(uParam0->f_15))
		{
			return;
		}
		func_61(uParam0, 2);
	}
	if (!func_33(uParam0, 512) && CAM::IS_SCREEN_FADED_OUT())
	{
		if (func_132(Global_33, 0) == -3.273909E-18f)
		{
			func_142(uParam0);
			func_143(uParam0, 1);
			func_144(uParam0);
			func_145(uParam0);
			if (!func_124(Global_33, -1.25922E+36f))
			{
				func_146(uParam0);
				func_147(uParam0);
			}
			uParam0->f_110 = 1069547520; /* Float: 1.5f */
			uParam0->f_58 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_1, 0f, 0f, 0f, 7f, 7f, 7f, "volPlayerCamp");
			func_148(uParam0->f_58, 1);
			uParam0->f_59 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_1, 0f, 0f, 0f, 175f, 175f, 175f, "volPC_OutOfRange");
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_93))
			{
				func_149(uParam0->f_93, uParam0->f_58);
			}
			func_150(uParam0->f_99, 0, 0, 0, 0, 0);
			MISC::CLEAR_AREA(uParam0->f_1, 100f, 2097152);
			PED::_0x9851DE7AEC10B4E1(uParam0->f_1, 15f, 1, 0);
			uParam0->f_57 = MAP::BLIP_ADD_FOR_COORDS(-5.998254E+26f, uParam0->f_1);
			MAP::SET_BLIP_SPRITE(uParam0->f_57, 5.496418E+24f, true);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_57, "CAMP_BLIP");
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
			uParam0->f_101 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_smoke_script", uParam0->f_1, 0f, 0f, uParam0->f_4, 1f, false, false, false, false);
			func_61(uParam0, 512);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!func_151(uParam0))
		{
			return;
		}
	}
	func_152(uParam0);
	func_153(uParam0);
	if (func_154() != 8 && func_155(31))
	{
		if (func_134())
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_93))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_93))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_93, false);
					PHYSICS::_UNHITCH_HORSE(uParam0->f_93);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_93, false);
					POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_93, 2);
				}
			}
		}
	}
	WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, true);
	func_156();
	func_86(uParam0);
	if (func_33(uParam0, 512))
	{
		func_89(&Local_28, 1);
		func_7(uParam0, 9);
	}
}

void func_76(var uParam0)
{
	if (func_20(uParam0))
	{
		func_118(&uLocal_24);
		if (!func_32(128))
		{
			HUD::_ENABLE_HUD_CONTEXT(9.08355E+33f);
		}
		func_86(uParam0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_21(uParam0);
		}
		else
		{
			return;
		}
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		func_89(&Local_28, 1);
		func_86(uParam0);
	}
	func_34(uParam0, 512);
	CAM::_0x9AC65A36D3C0C189(0);
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		PED::_REMOVE_PED_FROM_MOUNT(Global_33, true, false);
		return;
	}
	if (!func_124(Global_33, -1.25922E+36f) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))
	{
		func_146(uParam0);
	}
	if (func_124(Global_33, -1.25922E+36f))
	{
		func_7(uParam0, 10);
	}
	else
	{
		func_146(uParam0);
		if (func_116(&uLocal_24, fLocal_27))
		{
			func_7(uParam0, 10);
		}
	}
}

void func_77(var uParam0)
{
	if (func_20(uParam0))
	{
		func_118(&uLocal_24);
		func_21(uParam0);
		func_86(uParam0);
	}
	func_89(&Local_28, 0);
	if (func_124(Global_33, -1.25922E+36f) || func_116(&uLocal_24, fLocal_27))
	{
		if (TASK::_PED_IS_IN_SCENARIO_BASE(Global_33))
		{
			func_7(uParam0, 11);
		}
		else
		{
			func_146(uParam0);
		}
	}
	else
	{
		func_146(uParam0);
	}
}

void func_78(var uParam0)
{
	int iVar0;
	float fVar1;

	if (func_20(uParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_33, false);
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
		func_24(uParam0);
		func_34(uParam0, 32768);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		func_21(uParam0);
	}
	func_157(uParam0);
	func_158(uParam0);
	if (!PED::IS_PED_IN_COMBAT(Global_33, 0) && !PED::IS_PED_IN_COVER(Global_33, false, false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -4.491091E+18f, false);
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) && !func_32(128))
	{
		func_66(0);
		PAD::DISABLE_CONTROL_ACTION(0, -2.46932E+34f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, false);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(9.08355E+33f);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -4.93116E-14f, false);
	TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_INTERACTIONS", false);
	if (func_59(uParam0))
	{
		func_159(256);
		if (!func_33(uParam0, 2048))
		{
			if (func_160(Global_33, 0))
			{
				func_161(&(Local_28.f_127), 64);
				func_61(uParam0, 2048);
			}
		}
		else if (!func_160(Global_33, 0))
		{
			func_161(&(Local_28.f_127), 128);
			func_34(uParam0, 2048);
		}
		func_89(&Local_28, 0);
		if (TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
		{
			func_51(&Local_28);
			HUD::_DISABLE_HUD_CONTEXT(9.08355E+33f);
		}
		if (func_162(uParam0))
		{
			if (!func_45(uParam0->f_97[0]) && !func_33(uParam0, 64))
			{
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
				{
					uParam0->f_97[0] = func_163("CAMP_TEARDOWN", 0.00251415f, 0, 1, 0, 5, 570, 4000, 10, 2f, -2.540813E-34f, 0);
					func_164(uParam0->f_97[0], 1, 1, 1);
					func_165(uParam0->f_97[0], 1, 1);
				}
			}
			else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) || func_33(uParam0, 64))
			{
				func_46(&(uParam0->f_97[0]), 1, 1);
			}
		}
		else
		{
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
			{
				MISC::CLEAR_BIT(&(Global_1958621.f_1), 2);
				MISC::CLEAR_BIT(&(Global_1958621.f_1), 3);
			}
			func_24(uParam0);
		}
		if ((MISC::GET_GAME_TIMER() - uParam0->f_14) >= 1000)
		{
			if (func_166(uParam0->f_58, 2, Global_33, 0, 0))
			{
				func_61(uParam0, 128);
				uParam0->f_14 = MISC::GET_GAME_TIMER();
			}
			else
			{
				func_34(uParam0, 128);
				uParam0->f_14 = MISC::GET_GAME_TIMER();
			}
		}
		if (func_32(32))
		{
			if (func_45(uParam0->f_97[0]))
			{
				func_164(uParam0->f_97[0], 0, 1, 1);
			}
		}
		else if (func_45(uParam0->f_97[0]))
		{
			func_164(uParam0->f_97[0], 1, 1, 1);
		}
	}
	else
	{
		if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
		{
			MISC::CLEAR_BIT(&(Global_1958621.f_1), 2);
			MISC::CLEAR_BIT(&(Global_1958621.f_1), 3);
		}
		func_29(256);
		func_24(uParam0);
	}
	if (func_167(uParam0->f_97[0], 1) || func_168(Local_28.f_128, 16384))
	{
		func_61(uParam0, 16384);
		CAM::DO_SCREEN_FADE_OUT(500);
		func_61(uParam0, 8192);
		uParam0->f_20.f_18 = 0f;
		uParam0->f_20.f_27 = 0f;
		MISC::CLEAR_BIT(&(Global_1958621.f_1), 2);
		MISC::CLEAR_BIT(&(Global_1958621.f_1), 3);
		if (!func_169(Global_33, uParam0->f_1, 0))
		{
			func_118(&uLocal_21);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LOOK_AT_COORD(0, uParam0->f_1 + Vector(1f, 0f, 0f), 2500, 1, 51, true);
			TASK::TASK_PAUSE(0, 400);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uParam0->f_1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::CLEAR_PED_TASKS(Global_33, true, false);
			TASK::TASK_PERFORM_SEQUENCE(Global_33, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else if (func_58())
		{
			func_118(&uLocal_21);
			if (!TASK::IS_PED_EXITING_SCENARIO(Global_33, true))
			{
				func_170(&Local_28);
			}
		}
		func_18(&Local_28);
		func_19(&Local_28);
		func_24(uParam0);
		func_51(&Local_28);
	}
	if (func_33(uParam0, 8192))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_34(uParam0, 8192);
			func_7(uParam0, 13);
		}
	}
	fVar1 = func_171(Global_33, uParam0->f_1, 1);
	if (fVar1 > 1091567616 && fVar1 < 1103626240)
	{
		if (func_45(uParam0->f_97[0]))
		{
			func_172(uParam0->f_97[0], -1.158673E+20f, 0, 1);
		}
	}
	else if (func_45(uParam0->f_97[0]))
	{
		func_172(uParam0->f_97[0], 5.745081E+24f, 0, 1);
	}
	if (!func_59(uParam0))
	{
		if (func_173(uParam0, 1))
		{
			func_7(uParam0, 14);
		}
	}
	if (func_32(512))
	{
		func_7(uParam0, 14);
	}
}

void func_79(var uParam0)
{
	if (func_20(uParam0))
	{
		func_24(uParam0);
		HUD::_DISABLE_HUD_CONTEXT(9.08355E+33f);
		func_21(uParam0);
	}
	if (func_173(uParam0, 1))
	{
		func_7(uParam0, 14);
	}
	else if (func_59(uParam0))
	{
		func_7(uParam0, 11);
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(0.000112171f) > 1)
	{
		func_7(uParam0, 14);
	}
}

void func_80(var uParam0)
{
	func_18(&Local_28);
	func_19(&Local_28);
	func_174(uParam0->f_58, 0);
	if (func_20(uParam0))
	{
		if (func_33(uParam0, 2))
		{
			func_24(uParam0);
			func_17(uParam0);
			if (func_59(uParam0))
			{
				ENTITY::SET_ENTITY_PROOFS(Global_33, 2, false);
				HUD::_DISABLE_HUD_CONTEXT(9.08355E+33f);
			}
		}
		func_21(uParam0);
	}
	if (func_59(uParam0))
	{
		HUD::_DISABLE_HUD_CONTEXT(9.08355E+33f);
		uParam0->f_102 = 4;
		func_7(uParam0, 14);
		ENTITY::SET_ENTITY_PROOFS(Global_33, 0, false);
	}
	else
	{
		func_34(uParam0, 512);
		uParam0->f_102 = 4;
		func_7(uParam0, 14);
	}
}

void func_81(var uParam0)
{
	HUD::_DISABLE_HUD_CONTEXT(9.08355E+33f);
	func_5(uParam0);
	func_51(&Local_28);
	uParam0->f_102 = 4;
	func_6();
}

void func_82(var uParam0)
{
	STREAMING::REQUEST_MODEL(uParam0->f_65, false);
	STREAMING::REQUEST_MODEL(uParam0->f_66, false);
	STREAMING::REQUEST_PTFX_ASSET();
}

bool func_83(var uParam0)
{
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_66))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_66, false);
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_65))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_65, false);
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_66))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_65))
	{
		return false;
	}
	return true;
}

int func_84(vector3 vParam0)
{
	return func_175(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_85(var uParam0)
{
	func_176(&(uParam0->f_1), 1, 10, 1, 0);
}

void func_86(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_84(uParam0->f_1);
	if (iVar0 == 7)
	{
		if (!func_43(&(uParam0->f_91)))
		{
			func_177(&(uParam0->f_91), uParam0->f_1, 1071644672 /* Float: 1.75f */);
		}
	}
	if (!func_43(&(uParam0->f_83)))
	{
		vVar1 = { uParam0->f_1 };
		func_178(&(uParam0->f_83), vVar1, 1069547520 /* Float: 1.5f */, 0, 0);
	}
	if (!func_43(&(uParam0->f_84)))
	{
		vVar1 = { uParam0->f_1 };
		func_179(&(uParam0->f_84), vVar1, 3f);
	}
	if (!func_43(&(uParam0->f_85[0])))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Local_28[0]))
		{
			vVar1 = { TASK::_GET_SCENARIO_POINT_COORDS(Local_28[0], true) };
			func_180(&(uParam0->f_85[0]), vVar1, 1064346583 /* Float: 0.94f */);
		}
	}
	if (!func_43(&(uParam0->f_85[1])))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Local_28[1]))
		{
			vVar1 = { TASK::_GET_SCENARIO_POINT_COORDS(Local_28[1], true) };
			func_180(&(uParam0->f_85[1]), vVar1, 1f);
		}
	}
	if (!func_43(&(uParam0->f_85[2])))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Local_28[2]))
		{
			vVar1 = { TASK::_GET_SCENARIO_POINT_COORDS(Local_28[2], true) };
			func_180(&(uParam0->f_85[2]), vVar1, 1066192077 /* Float: 1.1f */);
		}
	}
	if (!func_43(&(uParam0->f_85[3])))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Local_28[3]))
		{
			vVar1 = { TASK::_GET_SCENARIO_POINT_COORDS(Local_28[3], true) };
			func_180(&(uParam0->f_85[3]), vVar1, 1063675494 /* Float: 0.9f */);
		}
	}
	if (!func_43(&(uParam0->f_85[4])))
	{
		vVar1 = { uParam0->f_1 };
		func_180(&(uParam0->f_85[4]), vVar1, 1074790400 /* Float: 2.25f */);
	}
}

void func_87(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_17))
	{
		uParam0->f_17 = OBJECT::CREATE_OBJECT(uParam0->f_65, uParam0->f_1, false, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_56, true);
		ENTITY::SET_ENTITY_ALPHA(uParam0->f_17, 0, false);
	}
	uParam0->f_19 = OBJECT::CREATE_OBJECT(uParam0->f_65, uParam0->f_1, false, true, false, false, true);
	uParam0->f_56 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_66, uParam0->f_1, false, true, false, true);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_56, 0f, 0f, (uParam0->f_4 + 1104150528), 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_56, true);
	Local_28.f_129 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_56);
}

void func_88(var uParam0)
{
	uParam0->f_58 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_1, 0f, 0f, 0f, 7f, 7f, 7f, "volPlayerCamp");
	func_143(uParam0, 0);
}

int func_89(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_181(&(uParam0->f_49));
	if (!func_182(Global_33, 0))
	{
		return 0;
	}
	func_183(uParam0);
	if (uParam0->f_130 > 4 && uParam0->f_130 < 10)
	{
		func_66(0);
	}
	if (uParam0->f_130 > 3)
	{
		if (uParam0->f_130 != 10 && uParam0->f_130 != 4)
		{
			CAM::_0x18C3DFAC458783BB();
			func_184(uParam0);
		}
	}
	else if (uParam0->f_130 == 3)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
		{
			iVar0 = func_185(uParam0);
			if (iVar0 >= 0 && iVar0 <= 3)
			{
				func_184(uParam0);
			}
		}
		else if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_18)))
		{
			CAM::_CAM_DESTROY(&(uParam0->f_18));
		}
	}
	if (func_168(uParam0->f_128, 65536))
	{
		if (func_42(Global_33, 1, 0, 0) != -3.273909E-18f)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.890385E-27f))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
				func_56(&(uParam0->f_128), 65536);
			}
		}
	}
	switch (uParam0->f_130)
	{
		case 0:
			if (func_186(uParam0))
			{
				func_187(uParam0);
			}
			func_188(uParam0);
			func_189(&(uParam0->f_49), 4);
			func_190(uParam0, 1);
			break;
		case 1:
			if (func_186(uParam0))
			{
				func_187(uParam0);
			}
			if (func_191(uParam0))
			{
				func_190(uParam0, 2);
			}
			break;
		case 2:
			if (func_186(uParam0))
			{
				func_187(uParam0);
			}
			if (func_192(uParam0))
			{
				func_190(uParam0, 3);
			}
			break;
		case 3:
			if (func_186(uParam0))
			{
				AUDIO::_STOP_AUDIO_SCENESET("Player_Campfire_Scenes");
				func_57(&(uParam0->f_49), 1, TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) != 0.2920443f);
				func_100(&(uParam0->f_49), 2);
				func_56(&(uParam0->f_128), 32768);
				func_187(uParam0);
			}
			func_193(uParam0);
			if (bParam1)
			{
				return 1;
			}
			func_159(8);
			if ((MISC::GET_GAME_TIMER() - uParam0->f_152) >= 500)
			{
				if (func_194(uParam0))
				{
					func_161(&(uParam0->f_128), 131072);
				}
				else
				{
					func_56(&(uParam0->f_128), 131072);
				}
				uParam0->f_152 = MISC::GET_GAME_TIMER();
			}
			if (func_195(Global_33, uParam0->f_129, 1) > 1108344832)
			{
				func_51(uParam0);
				func_54(uParam0);
				func_29(8);
				func_190(uParam0, 4);
				if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_18)))
				{
					CAM::_CAM_DESTROY(&(uParam0->f_18));
				}
				return 0;
			}
			if (func_168(uParam0->f_127, 64))
			{
				if (func_168(uParam0->f_127, 8192))
				{
					func_196(uParam0, 0);
					func_56(&(uParam0->f_127), 8192);
				}
				func_56(&(uParam0->f_127), 64);
			}
			else if (func_168(uParam0->f_127, 128))
			{
				if (!func_168(uParam0->f_127, 8192))
				{
					func_196(uParam0, 1);
					func_161(&(uParam0->f_127), 8192);
				}
				func_56(&(uParam0->f_127), 128);
			}
			uParam0->f_131 = func_185(uParam0);
			if (uParam0->f_131 != -1)
			{
				func_197();
				PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
				PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
				PAD::DISABLE_CONTROL_ACTION(0, -3.403642E+24f, false);
				iVar1 = ITEMSET::CREATE_ITEMSET(true);
				if (func_198(&iVar1, uParam0->f_5[uParam0->f_131 /*3*/], 1061158912 /* Float: 0.75f */) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
				{
					if (func_168(uParam0->f_128, 32768) || func_32(16))
					{
						func_29(16);
						func_56(&(uParam0->f_128), 32768);
					}
					TASK::CLEAR_PED_TASKS(Global_33, true, false);
				}
				ITEMSET::DESTROY_ITEMSET(iVar1);
			}
			if (func_199(0) && uParam0->f_131 != -1)
			{
				uParam0->f_132 = func_200();
				func_190(uParam0, 5);
				if (func_32(16) || func_168(uParam0->f_128, 32768))
				{
					if (func_32(64))
					{
						func_29(16);
						func_100(&(uParam0->f_49), 2);
						func_201(uParam0, 0);
						func_190(uParam0, 7);
					}
				}
				func_54(uParam0);
			}
			else
			{
				func_202(uParam0);
				func_203(uParam0);
				if (!func_32(128) && func_168(uParam0->f_127, 8192))
				{
					if (func_168(uParam0->f_128, 131072) && func_195(Global_33, uParam0->f_129, 1) <= 1091567616)
					{
						uParam0->f_151 = func_204(HUD::_UI_PROMPT_GET_GROUP_ACTIVE_PAGE(5.745081E+24f));
						HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_129, func_205(func_168(uParam0->f_127, 16384), 1071644672 /* Float: 1.75f */, 3f), 1, 1, 5.745081E+24f, uParam0->f_151, 2);
					}
				}
				if ((func_32(16) && func_168(uParam0->f_128, 8192)) || func_168(uParam0->f_128, 32768))
				{
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
					{
						if (uParam0->f_154 != -1 && (MISC::GET_GAME_TIMER() - uParam0->f_154) > 1000)
						{
							func_29(16);
							func_56(&(uParam0->f_128), 32768);
							uParam0->f_154 = -1;
							TASK::CLEAR_PED_TASKS(Global_33, true, false);
							uParam0->f_134 = 0;
						}
						else
						{
							uParam0->f_134 = 2;
							func_206(uParam0);
							uParam0->f_154 = MISC::GET_GAME_TIMER();
							if (func_32(64))
							{
								func_29(16);
								func_56(&(uParam0->f_128), 32768);
								func_100(&(uParam0->f_49), 2);
								func_201(uParam0, 0);
								func_190(uParam0, 7);
							}
						}
					}
					else if (uParam0->f_134 == 2)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_154) > 10000)
						{
							TASK::CLEAR_PED_TASKS(Global_33, true, false);
							func_29(16);
							func_56(&(uParam0->f_128), 32768);
							uParam0->f_154 = -1;
							uParam0->f_134 = 0;
						}
					}
				}
			}
			break;
		case 4:
			if (func_186(uParam0))
			{
				func_187(uParam0);
			}
			if (func_195(Global_33, uParam0->f_129, 1) <= 1108344832)
			{
				func_190(uParam0, 3);
			}
			break;
		case 5:
			if (func_186(uParam0))
			{
				AUDIO::_START_AUDIO_SCENESET("idle", "Player_Campfire_Scenes");
				func_187(uParam0);
			}
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(9.08355E+33f);
			PAD::DISABLE_CONTROL_ACTION(0, 9.155838E-30f, false);
			func_207();
			if (!func_199(1))
			{
				func_66(0);
				uParam0->f_133 = -1;
				func_208(uParam0, 0);
				TASK::_0xFDECCA06E8B81346(Global_33);
				func_190(uParam0, 3);
			}
			else
			{
				if (uParam0->f_131 != -1)
				{
					func_197();
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1211.617f))
				{
					func_208(uParam0, 0);
				}
				else
				{
					func_208(uParam0, 1);
				}
				func_209(uParam0);
				if (func_210(uParam0, 0, 0, -1))
				{
					func_208(uParam0, 0);
					if (uParam0->f_134 == 2)
					{
						func_100(&(uParam0->f_49), 2);
						func_201(uParam0, 0);
						func_190(uParam0, 7);
					}
					else if (uParam0->f_134 == 0)
					{
						func_190(uParam0, 10);
					}
					else if (uParam0->f_134 == 11 || uParam0->f_134 == 10)
					{
						func_190(uParam0, 9);
					}
					else if (uParam0->f_134 == 12)
					{
						func_190(uParam0, 8);
					}
					else
					{
						func_190(uParam0, 6);
					}
				}
			}
			break;
		case 6:
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(9.08355E+33f);
			if (func_186(uParam0))
			{
				func_187(uParam0);
			}
			if (uParam0->f_131 != -1)
			{
				func_197();
				PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -3.403642E+24f, false);
			if (((ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.571041f) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 2000) && !func_168(uParam0->f_128, 4)) && uParam0->f_134 != 1)
			{
				if (func_210(uParam0, 1, uParam0->f_134, uParam0->f_133))
				{
					if (uParam0->f_134 == 0)
					{
						func_190(uParam0, 10);
						func_51(uParam0);
						return 0;
					}
					else
					{
						func_208(uParam0, 0);
						uParam0->f_153 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (func_211(uParam0) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
			{
				if ((uParam0->f_131 == uParam0->f_133 || uParam0->f_133 == -1) || uParam0->f_134 == 1)
				{
					if (uParam0->f_134 != 0)
					{
						uParam0->f_132 = uParam0->f_134;
					}
					if (uParam0->f_133 != -1)
					{
						uParam0->f_131 = uParam0->f_133;
					}
					else
					{
						uParam0->f_131 = func_185(uParam0);
					}
					uParam0->f_133 = -1;
					func_190(uParam0, 5);
				}
			}
			break;
		case 9:
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(9.08355E+33f);
			if (func_186(uParam0))
			{
				func_187(uParam0);
			}
			iVar2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
			if (func_212(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 500)
			{
				if (((iVar2 == 341.742f || iVar2 == 9.105892E+27f) || iVar2 == -2.10085E+18f) || iVar2 == 2.647834E-09f)
				{
					if (uParam0->f_134 == 11)
					{
						if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_213(0), -2.680077E+18f, false))
						{
							INVENTORY::_INVENTORY_ENABLE_ITEM(func_213(0), -2.680077E+18f);
						}
						func_214(-2.680077E+18f, 0, 0, 0, 1, 0, 0);
						uParam0->f_153 = MISC::GET_GAME_TIMER();
						uParam0->f_134 = 0;
					}
					else if (uParam0->f_134 == 10)
					{
						func_214(9605447f, 0, 0, 0, 1, 0, 0);
						uParam0->f_153 = MISC::GET_GAME_TIMER();
						uParam0->f_134 = 0;
					}
					else
					{
						uParam0->f_134 = 0;
						ATTRIBUTE::STOP_ITEM_PREVIEW();
						func_118(&(uParam0->f_161));
						func_190(uParam0, 5);
					}
				}
				else if (iVar2 == -2.532171E+17f || iVar2 == 1.060424E+09f)
				{
					func_215(1.227609E-37f, 1056964608 /* Float: 0.5f */);
					uParam0->f_153 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == -1.772429E+20f || iVar2 == 2.719026E+21f)
				{
					func_215(1.652442E-15f, 2f);
					uParam0->f_153 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == -2.545493E-13f || iVar2 == 4.648953E+35f)
				{
					func_215(4.95508E+09f, 2f);
					uParam0->f_153 = MISC::GET_GAME_TIMER();
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_134 = 0;
				func_190(uParam0, 5);
			}
			break;
		case 7:
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(9.08355E+33f);
			if (func_186(uParam0))
			{
				func_216(-5.985058E-05f, 1, 1, -5.149929E+33f);
				func_187(uParam0);
			}
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			func_197();
			PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -3.403642E+24f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -19.07792f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
			if ((((func_217(uParam0, uParam0->f_132) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_33)) || TASK::IS_PED_SCENARIO_REACT_LOOKING(Global_33, true)) || FIRE::IS_ENTITY_ON_FIRE(Global_33)) || TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
			{
				AUDIO::_STOP_SOUND_WITH_NAME("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_216(-5.985058E-05f, 1, 1, -5.149929E+33f);
				func_57(&(uParam0->f_49), 1, 1);
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) || TASK::IS_PED_SCENARIO_REACT_LOOKING(Global_33, true)) || FIRE::IS_ENTITY_ON_FIRE(Global_33)) || TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_135))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_135));
					}
					if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
					{
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
				}
				uParam0->f_132 = 6;
				uParam0->f_134 = 6;
				func_118(&(uParam0->f_161));
				func_190(uParam0, 5);
			}
			break;
		case 8:
			uParam0->f_134 = 0;
			func_51(uParam0);
			if (Global_1148170[Global_1295619 /*10*/].f_9)
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
				func_190(uParam0, 10);
			}
			else
			{
				func_190(uParam0, 5);
			}
			break;
		case 10:
			if (func_186(uParam0))
			{
				func_187(uParam0);
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_57(&(uParam0->f_49), 1, 1);
				func_190(uParam0, 3);
			}
			else if (!TASK::IS_PED_EXITING_SCENARIO(Global_33, true))
			{
				func_170(uParam0);
			}
			break;
		case 11:
			return 1;
	}
	return 0;
}

bool func_90(var uParam0)
{
	if (func_171(Global_33, uParam0->f_1, 1) > 1190085120)
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_95) || !Global_1148170[uParam0->f_12 /*10*/].f_4)
	{
		if (func_195(Global_33, uParam0->f_56, 1) < 1103626240)
		{
			func_61(uParam0, 8192);
			func_61(uParam0, 16384);
			CAM::DO_SCREEN_FADE_OUT(500);
			func_218("NET_WCAMP_OWNER_SHUTDOWN", 10000, 0, 0, 0, 1);
		}
		return true;
	}
	return false;
}

int func_91(int iParam0)
{
	return iParam0;
}

void func_92(int iParam0)
{
	if (!func_219(iParam0))
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

void func_93(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		func_46(&(uParam0->f_1[iVar0]), 1, 1);
		iVar0++;
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-3.556355E-20f, 2.596126E+11f))
		{
		}
		else
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH(-3.556355E-20f);
		}
	}
	else
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(-3.556355E-20f);
	}
	func_220(uParam0, 256);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
}

bool func_95()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return false;
}

void func_96(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913621.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_33, "player_crafting_active", bParam0);
}

void func_97(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_49, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_50, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_51, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_52, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_53, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_54, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_55, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_56, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_57, 0);
	}
	func_98(&(uParam0->f_64), &(uParam0->f_65));
	func_98(&(uParam0->f_66), &(uParam0->f_67));
	func_98(&(uParam0->f_68), &(uParam0->f_69));
}

bool func_98(int* iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return true;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		return true;
	}
	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
	return false;
}

bool func_99(var uParam0, int iParam1)
{
	return func_168(*uParam0, iParam1);
}

void func_100(var uParam0, int iParam1)
{
	if (uParam0->f_11 != iParam1)
	{
		uParam0->f_11 = iParam1;
		func_221(uParam0);
	}
}

int func_101(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<5> Var2;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<12> Var19;
	struct<12> Var37;
	struct<17> Var54;

	if (!func_105(bParam0, 0))
	{
		return -1;
	}
	if (func_222(bParam0))
	{
		if (!func_224(func_223(bParam0), bParam1, &uVar0, 0, 0))
		{
			return -1;
		}
	}
	else if (func_225(bParam0, bParam1, 0, 0) < iParam2)
	{
		return -1;
	}
	Var2 = { func_226(bParam0, 1, 0) };
	if (func_227(bParam0, &Var2, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	iVar7 = -1;
	iVar8 = func_228(bParam0);
	if (iVar8 == 4.158586E+11f)
	{
		iVar7 = func_229(bParam0, "SPEND STEW FEE", 1, 1, 0, bParam1);
	}
	else
	{
		Var9 = -1;
		Var9.f_1 = -1;
		if (func_222(bParam0))
		{
			Var19.f_9 = 1;
			Var19.f_11 = -5.45926E-19f;
			if (!func_230(&Var9, func_223(bParam0), &Var19, 1, bParam1, -1, 0, 0))
			{
				return -1;
			}
		}
		else
		{
			Var37.f_9 = 1;
			Var37.f_11 = -5.45926E-19f;
			if (!func_231(&Var9, bParam0, Var2, Var2.f_4, iParam2, &Var37, 1, bParam1, -1, 1))
			{
				return -1;
			}
		}
		iVar7 = Var9.f_1;
	}
	if (iVar7 == -1)
	{
		return -1;
	}
	Var54.f_7 = -5.149929E+33f;
	Var54.f_16 = -1;
	Var54.f_1 = 1;
	if (bParam0 == -5.792441E-08f)
	{
		Var54.f_1 = 0;
	}
	if (func_222(bParam0))
	{
		if (func_232(func_223(bParam0), bParam1) == 1.094754E+12f)
		{
			Var54.f_1 = 0;
		}
	}
	else if (func_233(bParam0, bParam1) == 1.094754E+12f)
	{
		Var54.f_1 = 0;
	}
	func_234(iVar7, Var54);
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(bParam0, bParam1, iParam3, iParam2);
	return iVar7;
}

void func_102(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_235(11, 1, 0);
		iVar0++;
	}
	if (func_236(bParam0, 0))
	{
		func_237(40);
	}
	else
	{
		func_237(39);
	}
}

bool func_103(bool bParam0)
{
	if (func_40() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_213(bParam0));
}

bool func_104()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

bool func_105(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

struct<2> func_106(float fParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = bParam1;
	return Var0;
}

void func_107(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_108(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

var func_109(int iParam0)
{
	var uVar0;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iParam0);
	return uVar0;
}

var func_110(int iParam0, int iParam1)
{
	return func_238(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

bool func_111(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_112()
{
	return Global_1102813.f_3672;
}

void func_113(var uParam0)
{
	bool bVar0;

	bVar0 = GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::_SET_OBJECT_BURN_SPEED(*uParam0, (1059481190 + (uParam0->f_11 * 1051931443)), (1059481190 + (uParam0->f_11 * 1051931443)));
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
		}
		if (uParam0->f_1)
		{
			OBJECT::_SET_OBJECT_BURN_INTENSITY(*uParam0, (uParam0->f_12 * 1056964608));
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if (uParam0->f_12 != uParam0->f_21 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_12 = uParam0->f_21;
		}
		else
		{
			uParam0->f_12 = (((uParam0->f_12 * 1097859072) + uParam0->f_21) / 1098907648);
		}
		if (MISC::ABSF((uParam0->f_12 - uParam0->f_21)) < 992204554)
		{
			uParam0->f_12 = uParam0->f_21;
			OBJECT::_SET_OBJECT_BURN_INTENSITY(*uParam0, (uParam0->f_12 * 1056964608));
		}
	}
	if (uParam0->f_13 != uParam0->f_22 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_13 = uParam0->f_22;
		}
		else
		{
			uParam0->f_13 = (((uParam0->f_13 * 1094713344) + uParam0->f_22) / 1095761920);
		}
		if (MISC::ABSF((uParam0->f_13 - uParam0->f_22)) < 992204554)
		{
			uParam0->f_13 = uParam0->f_22;
			OBJECT::_SET_OBJECT_BURN_OPACITY(*uParam0, uParam0->f_13);
		}
	}
	if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else
		{
			uParam0->f_14 = (((uParam0->f_14 * 1096810496) + uParam0->f_23) / 1097859072);
		}
		if (MISC::ABSF((uParam0->f_14 - uParam0->f_23)) < 1000593162 && !uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
		{
			OBJECT::_SET_LIGHT_INTENSITY_FOR_OBJECT(*uParam0, (uParam0->f_14 * 1051260355));
		}
	}
	if (uParam0->f_15 != uParam0->f_24 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_15 = uParam0->f_24;
		}
		else
		{
			uParam0->f_15 = (((uParam0->f_15 * 1100480512) + uParam0->f_24) / 1101004800);
		}
		if (MISC::ABSF((uParam0->f_15 - uParam0->f_24)) < 992204554)
		{
			uParam0->f_15 = uParam0->f_24;
			OBJECT::_SET_OBJECT_BURN_LEVEL(*uParam0, ((uParam0->f_15 * 1063675494) + 1036831949), true);
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_16, true);
		}
	}
	else if ((uParam0->f_16 != uParam0->f_25 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_16 = uParam0->f_25;
		}
		else
		{
			uParam0->f_16 = (((uParam0->f_16 * 1097859072) + uParam0->f_25) / 1098907648);
		}
		if (MISC::ABSF((uParam0->f_16 - uParam0->f_25)) < 992204554)
		{
			uParam0->f_16 = uParam0->f_25;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_16, false);
			}
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_17, true);
		}
	}
	else if ((uParam0->f_17 != uParam0->f_26 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_17 = uParam0->f_26;
		}
		else
		{
			uParam0->f_17 = (((uParam0->f_17 * 1097859072) + uParam0->f_26) / 1098907648);
		}
		if (MISC::ABSF((uParam0->f_17 - uParam0->f_26)) < 992204554)
		{
			uParam0->f_17 = uParam0->f_26;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
			}
		}
	}
	if ((uParam0->f_18 != uParam0->f_27 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_18 = uParam0->f_27;
		}
		else
		{
			uParam0->f_18 = (((uParam0->f_18 * 1100480512) + uParam0->f_27) / 1101004800);
		}
		if (MISC::ABSF((uParam0->f_18 - uParam0->f_27)) < 992204554)
		{
			uParam0->f_18 = uParam0->f_27;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if ((uParam0->f_19 != uParam0->f_28 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_19 = uParam0->f_28;
		}
		else
		{
			uParam0->f_19 = (((uParam0->f_19 * 1100480512) + uParam0->f_28) / 1101004800);
		}
		if (MISC::ABSF((uParam0->f_19 - uParam0->f_28)) < 992204554)
		{
			uParam0->f_19 = uParam0->f_28;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smolder", uParam0->f_19, true);
			}
		}
	}
	if (uParam0->f_18 < 0f)
	{
		uParam0->f_18 = 0f;
	}
	if (uParam0->f_18 > 1f)
	{
		uParam0->f_18 = 1f;
	}
	if (uParam0->f_12 < 0f)
	{
		uParam0->f_12 = 0f;
	}
	if (uParam0->f_12 > 1f)
	{
		uParam0->f_12 = 1f;
	}
	if (uParam0->f_11 < 1056964608)
	{
		uParam0->f_11 = 1056964608; /* Float: 0.5f */
	}
	if (uParam0->f_11 > 1f)
	{
		uParam0->f_11 = 1f;
	}
	if (bVar0)
	{
		uParam0->f_35 = 0;
	}
}

void func_114(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_20 = 1063675494; /* Float: 0.9f */
			uParam0->f_21 = 1f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 1063675494; /* Float: 0.9f */
			uParam0->f_24 = 1065185444; /* Float: 0.99f */
			uParam0->f_25 = 1f;
			uParam0->f_26 = 1061158912; /* Float: 0.75f */
			uParam0->f_27 = 1f;
			uParam0->f_28 = 0f;
			break;
		case 1:
			uParam0->f_20 = 1059648963; /* Float: 0.66f */
			uParam0->f_21 = 1059648963; /* Float: 0.66f */
			uParam0->f_22 = 1058642330; /* Float: 0.6f */
			uParam0->f_23 = 1056964608; /* Float: 0.5f */
			uParam0->f_24 = 1063339950; /* Float: 0.88f */
			uParam0->f_25 = 1059648963; /* Float: 0.66f */
			uParam0->f_26 = 1059648963; /* Float: 0.66f */
			uParam0->f_27 = 1059648963; /* Float: 0.66f */
			uParam0->f_28 = 0f;
			break;
		case 2:
			uParam0->f_20 = 1048576000; /* Float: 0.25f */
			uParam0->f_21 = 1048576000; /* Float: 0.25f */
			uParam0->f_22 = 1048576000; /* Float: 0.25f */
			uParam0->f_23 = 1048576000; /* Float: 0.25f */
			uParam0->f_24 = 1061494456; /* Float: 0.77f */
			uParam0->f_25 = 1045220557; /* Float: 0.2f */
			uParam0->f_26 = 1056964608; /* Float: 0.5f */
			uParam0->f_27 = 1045220557; /* Float: 0.2f */
			uParam0->f_28 = 0f;
			break;
		case 3:
			uParam0->f_20 = 1045220557; /* Float: 0.2f */
			uParam0->f_21 = 1036831949; /* Float: 0.1f */
			uParam0->f_22 = 1046562734; /* Float: 0.22f */
			uParam0->f_23 = 1036831949; /* Float: 0.1f */
			uParam0->f_24 = 1059648963; /* Float: 0.66f */
			uParam0->f_25 = 1036831949; /* Float: 0.1f */
			uParam0->f_26 = 1056964608; /* Float: 0.5f */
			uParam0->f_27 = 1036831949; /* Float: 0.1f */
			uParam0->f_28 = 0f;
			break;
		case 4:
			uParam0->f_20 = 1041865114; /* Float: 0.15f */
			uParam0->f_21 = 1008981770; /* Float: 0.01f */
			uParam0->f_22 = 1045220557; /* Float: 0.2f */
			uParam0->f_23 = 1016296636; /* Float: 0.018f */
			uParam0->f_24 = 1057803469; /* Float: 0.55f */
			uParam0->f_25 = 1000593162; /* Float: 0.005f */
			uParam0->f_26 = 1048576000; /* Float: 0.25f */
			uParam0->f_27 = 1008981770; /* Float: 0.01f */
			uParam0->f_28 = 1058642330; /* Float: 0.6f */
			break;
		case 5:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 1f;
			uParam0->f_25 = 1045220557; /* Float: 0.2f */
			uParam0->f_26 = 1059648963; /* Float: 0.66f */
			uParam0->f_27 = 0f;
			uParam0->f_28 = 1f;
			break;
		case 6:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 0f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
		case 7:
			uParam0->f_20 = 1053609165; /* Float: 0.4f */
			uParam0->f_21 = 1045220557; /* Float: 0.2f */
			uParam0->f_22 = 1045220557; /* Float: 0.2f */
			uParam0->f_23 = 1017370378; /* Float: 0.02f */
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 1008981770; /* Float: 0.01f */
			uParam0->f_28 = 0f;
			break;
		case 8:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 1031127695; /* Float: 0.06f */
			uParam0->f_22 = 1036831949; /* Float: 0.1f */
			uParam0->f_23 = 1008981770; /* Float: 0.01f */
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
	}
}

float func_115()
{
	if (func_239(Global_1940186, 4194304) || func_240() == 5)
	{
		return 1f;
	}
	return 1056964608 /* Float: 0.5f */;
}

bool func_116(var uParam0, float fParam1)
{
	if (!func_241(uParam0))
	{
		return false;
	}
	if (func_137(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_117(var uParam0)
{
	int iVar0;

	if (!uParam0->f_1)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 >= 2 && iVar0 < 4)
		{
			func_114(uParam0, 1);
		}
		else if (iVar0 >= 4 && iVar0 < 6)
		{
			func_114(uParam0, 2);
		}
		else if (iVar0 >= 6 && iVar0 < 12)
		{
			func_114(uParam0, 3);
		}
		else if (iVar0 >= 12 && iVar0 < 17)
		{
			func_114(uParam0, 2);
		}
		else if (iVar0 >= 17 && iVar0 < 19)
		{
			func_114(uParam0, 1);
		}
		else
		{
			func_114(uParam0, 0);
		}
		func_118(&(uParam0->f_31));
	}
}

void func_118(var uParam0)
{
	func_242(uParam0, 0f);
}

void func_119(int iParam0)
{
	Global_1902883.f_302 = (Global_1902883.f_302 || iParam0);
}

bool func_120()
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
	if (!func_122(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_121(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_122(struct<2> Param0)
{
	if (!func_243(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_244(Param0))
	{
		return false;
	}
	return true;
}

int func_123(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_124(int iParam0, int iParam1)
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

int func_125(var uParam0)
{
	int iVar0;

	if (func_15(Global_33) && ENTITY::GET_ENTITY_SPEED(Global_33) >= 2f)
	{
		TASK::TASK_STAND_STILL(func_245(7), 1);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_LOOK_AT_COORD(0, uParam0->f_1 + Vector(1f, 0f, 0f), 2500, 1, 51, true);
		TASK::TASK_PAUSE(0, 400);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, uParam0->f_1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		func_61(uParam0, 4);
		return 1;
	}
	if (func_15(Global_33))
	{
		TASK::TASK_DISMOUNT_ANIMAL(Global_33, 0, 0, 0, 0, 0);
		func_61(uParam0, 8);
		func_118(&(uParam0->f_107));
		return 1;
	}
	return 0;
}

void func_126(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_241(uParam0))
	{
		func_242(uParam0, fParam1);
	}
}

void func_127(var uParam0)
{
	uParam0->f_65 = -1.441386E-12f;
	uParam0->f_66 = 5.548879f;
	func_161(&(Local_28.f_128), 8192);
	func_161(&(Local_28.f_128), 64);
}

void func_128(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

bool func_129(var uParam0)
{
	if (func_2(uParam0->f_1) || MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1, Global_34, true) > 1125515264)
	{
		func_218("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
		return false;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 1))
	{
		func_218("NET_WCAMP_OWNER_WANTED", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

int func_130(var uParam0)
{
	if (!func_33(uParam0, 32))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_SPEED(Global_33) <= 1f || func_246(&(uParam0->f_107), 1066192077 /* Float: 1.1f */))
	{
		return 1;
	}
	return 0;
}

int func_131(var uParam0)
{
	if (!func_33(uParam0, 8))
	{
		return 1;
	}
	if (PED::IS_PED_ON_FOOT(Global_33) || func_246(&(uParam0->f_107), 1f))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_133(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, false);
}

bool func_134()
{
	int iVar0;

	iVar0 = func_247(7);
	if (iVar0 == 0 || iVar0 == SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		return true;
	}
	return false;
}

void func_135(var uParam0, bool bParam1)
{
	if (bParam1 || !func_241(uParam0))
	{
		func_118(uParam0);
	}
}

void func_136(var uParam0)
{
	uParam0->f_93 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_93))
	{
		return;
	}
	if (func_248(uParam0))
	{
		func_61(uParam0, 16);
	}
}

float func_137(var uParam0)
{
	if (!func_241(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_249(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_250() - uParam0->f_1);
}

void func_138(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_139(var uParam0, vector3 vParam1)
{
	if (uParam0->f_65 == 0)
	{
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vParam1, 15f, uParam0->f_65, true))
	{
		func_251(vParam1, 1097859072 /* Float: 15f */, 2);
	}
}

void func_140(var uParam0)
{
	func_61(uParam0, 1024);
	if (func_33(uParam0, 4096))
	{
		PED::_REMOVE_PED_FROM_MOUNT(Global_33, true, false);
	}
	TASK::CLEAR_PED_TASKS(Global_33, true, false);
	TASK::CLEAR_PED_SECONDARY_TASK(Global_33);
	if (STREAMING::LOAD_SCENE_START_SPHERE(uParam0->f_1, 100f, 0))
	{
		func_118(&(uParam0->f_104));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_56))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_56));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_56))
	{
		func_87(uParam0);
	}
	Local_28.f_129 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_56);
}

bool func_141(int iParam0, int iParam1, var uParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!func_252(iParam1))
	{
		return false;
	}
	if (SCRIPTS::DOES_THREAD_EXIST(*uParam2))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT("net_fast_travel_barker");
	if (!SCRIPTS::HAS_SCRIPT_LOADED("net_fast_travel_barker"))
	{
		return false;
	}
	DECORATOR::DECOR_SET_INT(iParam0, "fast_travel_camp_barker", iParam1);
	*uParam2 = BRAIN::_START_PRELOADED_SCRIPT_BRAIN(iParam0, "net_fast_travel_barker", 1024, false);
	DECORATOR::DECOR_SET_BOOL(iParam0, "bHasScriptBrain", true);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fast_travel_barker");
	return true;
}

void func_142(var uParam0)
{
	vector3 vVar0;

	switch (uParam0->f_13)
	{
		case 0:
			vVar0 = { -1063256064 /* Float: -5f */, 4f, 0f };
			break;
		case 1:
			vVar0 = { -1065353216 /* Float: -4f */, -1067450368 /* Float: -3.5f */, 0f };
			break;
		case 2:
			vVar0 = { 5f, 4f, 0f };
			break;
		case 3:
			vVar0 = { 5f, -1065353216 /* Float: -4f */, 0f };
			break;
	}
	uParam0->f_62 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_8, vVar0) };
}

void func_143(var uParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_99))
	{
		if (!func_2(uParam0->f_1))
		{
			uParam0->f_99 = VOLUME::CREATE_VOLUME_SPHERE(uParam0->f_1, 0f, 0f, 0f, 30f, 30f, 30f);
		}
	}
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_99, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_99, 0, 2048, 0, -1, -1, 4);
	func_253(uParam0->f_1, 1127153664 /* Float: 175f */, "Player Camp", 1, 0, 0, 0, -1f);
	if (bParam1)
	{
		func_254(uParam0->f_1, 1106247680 /* Float: 30f */, 0, 0, 5, 1);
		func_255(uParam0->f_1, 1114636288 /* Float: 60f */, 0, 0);
		func_128(uParam0->f_1, 1114636288 /* Float: 60f */, 0);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_61))
	{
		uParam0->f_61 = VOLUME::CREATE_VOLUME_SPHERE(uParam0->f_1, 0f, 0f, 0f, 70f, 70f, 70f);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_61, 4096, 0, 0, -1, -1, 4);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_61, 4096, 0, 0, -1, -1, 0);
	}
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uParam0->f_100))
	{
		uParam0->f_100 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(uParam0->f_1, 5f, 5f, 5f, 0f, false, 16);
	}
	uParam0->f_92 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(4.795139E-15f, uParam0->f_1, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
}

void func_144(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_93))
	{
		if (func_256(uParam0->f_93) > 2)
		{
			uParam0->f_60 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_62, 0f, 0f, 0f, 3f, 3f, 15f, "volWander");
		}
		else
		{
			uParam0->f_60 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_62, 0f, 0f, 0f, 5f, 5f, 15f, "volWander");
		}
	}
}

void func_145(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_93))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_93))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_93, false);
			func_257(uParam0->f_93, uParam0->f_62, (uParam0->f_8 - 1119092736), 2, 2f);
			PHYSICS::_UNHITCH_HORSE(uParam0->f_93);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_93, false);
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_93, 2);
		}
	}
}

int func_146(var uParam0)
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (!func_124(Global_33, -1.25922E+36f))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Local_28[0]))
		{
			if (!func_258(Global_34, uParam0->f_1, 5f, 1))
			{
				func_257(Global_33, TASK::_GET_SCENARIO_POINT_COORDS(Local_28[0], true), uParam0->f_4, 2, 2f);
			}
			func_259();
		}
	}
	return 1;
}

void func_147(var uParam0)
{
	if (!func_124(uParam0->f_93, 471.6342f))
	{
		if (!func_124(uParam0->f_93, -0.2632248f))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_93, true, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_93, 109808.9f, uParam0->f_62, uParam0->f_4, 0, false, true, 0, -1f, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_94))
	{
		if (!func_124(uParam0->f_94, 471.6342f))
		{
			if (!func_124(uParam0->f_94, -0.2632248f))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_94, true, false);
				TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_94, 109808.9f, uParam0->f_62, uParam0->f_4, 0, false, true, 0, -1f, false);
			}
		}
	}
}

void func_148(int iParam0, int iParam1)
{
	if (func_260(iParam0))
	{
		return;
	}
	if (func_261(iParam0) == iParam1)
	{
		return;
	}
	if (Global_17381 >= 10)
	{
		Global_17381 = 0;
	}
	Global_17360[Global_17381 /*2*/].f_1 = iParam1;
	Global_17360[Global_17381 /*2*/] = iParam0;
	Global_17381++;
}

int func_149(int iParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(iParam1))
	{
		PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iParam1, 15);
	}
	if (PED::_ADD_PED_STAY_OUT_VOLUME(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_150(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

bool func_151(var uParam0)
{
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		if (STREAMING::IS_LOAD_SCENE_LOADED() && func_116(&(uParam0->f_104), 2f))
		{
			STREAMING::LOAD_SCENE_STOP();
			return true;
		}
		else if (func_246(&(uParam0->f_104), 5f))
		{
			STREAMING::LOAD_SCENE_STOP();
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_152(var uParam0)
{
	if (uParam0->f_18 != 7)
	{
		uParam0->f_111 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_8, 0f, 2f, 0f) };
	}
}

void func_153(var uParam0)
{
	int iVar0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			func_257(Global_33, (uParam0->f_1 + 5f), (uParam0->f_1.f_1 + 5f), (uParam0->f_1.f_2 + 1056964608), uParam0->f_4, 32, 2f);
			PED::DETACH_CARRIABLE_ENTITY(iVar0, false, false);
		}
		else
		{
			PED::DETACH_CARRIABLE_ENTITY(iVar0, false, false);
			func_257(iVar0, (uParam0->f_1 + 5f), (uParam0->f_1.f_1 + 5f), (uParam0->f_1.f_2 + 1056964608), uParam0->f_4, 32, 2f);
		}
	}
}

int func_154()
{
	return Global_1896646.f_41;
}

bool func_155(int iParam0)
{
	if (!func_262(iParam0))
	{
		return false;
	}
	return func_263(iParam0);
}

int func_156()
{
	bool bVar0;
	int iVar1;

	if (!func_264(&bVar0))
	{
		return 0;
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_33, false, false);
	PED::_0xC494C76A34266E82(Global_33, 13);
	iVar1 = func_265(bVar0);
	if (iVar1 == -1.003831E+26f)
	{
		return 0;
	}
	func_267(Global_1953279.f_83[func_266(iVar1, 1) /*12*/], 8);
	func_268(23, 0, 0, 0, 0);
	return 1;
}

void func_157(var uParam0)
{
	if (PED::IS_PED_IN_COMBAT(Global_33, 0) || func_33(uParam0, 128))
	{
		func_159(32);
		func_161(&(Local_28.f_127), 64);
	}
	else if (func_32(32))
	{
		func_161(&(Local_28.f_127), 128);
		func_29(32);
	}
}

void func_158(var uParam0)
{
	if (func_108(uParam0->f_93, uParam0->f_60, 1, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_93, 53, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_93, 49, true);
	}
}

void func_159(int iParam0)
{
	if (!func_32(iParam0))
	{
		Global_1958662 = (Global_1958662 || iParam0);
	}
}

bool func_160(int iParam0, int iParam1)
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

void func_161(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_162(var uParam0)
{
	int iVar0;
	int iVar1;

	func_34(uParam0, 64);
	if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
	{
		return false;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
	{
		return false;
	}
	if (func_269(Global_33))
	{
		return false;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::GET_IS_ANIMAL(iVar1))
			{
				func_61(uParam0, 64);
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_28.f_129, true, false), 1.5f) > 2)
	{
		return false;
	}
	return true;
}

int func_163(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
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
		if (func_270(iVar0, 2))
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
		func_271(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1f, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_91(iParam0);
	if (bParam1)
	{
		func_272(iParam0, 4);
		if (bParam3)
		{
			func_273(iVar0, 1);
		}
		func_274(iVar0, 1);
	}
	else
	{
		func_275(iParam0, 4);
		func_274(iVar0, 0);
	}
}

void func_165(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_91(iParam0);
	func_273(iVar0, bParam1);
}

bool func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(Global_26391))
	{
		Global_26391 = ITEMSET::CREATE_ITEMSET(true);
	}
	ITEMSET::_CLEAR_ITEMSET(Global_26391);
	iVar0 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam0, Global_26391, iParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_26391);
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
		if (iParam4 == 1 && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
		}
		else if (iParam2 != iVar3 && iParam3 != iVar3)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_167(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_91(iParam0);
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

bool func_168(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_169(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_170(var uParam0)
{
	int iVar0;

	if (func_212(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 250)
	{
		iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
		if (iVar0 == -1.772429E+20f || iVar0 == 2.719026E+21f)
		{
			func_215(1.652442E-15f, 6f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
		else if (iVar0 == -2.545493E-13f || iVar0 == 4.648953E+35f)
		{
			func_215(4.95508E+09f, 6f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) && (MISC::GET_FRAME_COUNT() % 2) == 0)
		{
			TASK::CLEAR_PED_TASKS(Global_33, true, false);
		}
	}
}

float func_171(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_276(vVar0, vParam1);
}

void func_172(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_91(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_173(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return !func_108(Global_33, uParam0->f_59, 1, 0);
	}
	return false;
}

void func_174(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

int func_176(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_277(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_177(var uParam0, vector3 vParam1, int iParam4)
{
	int iVar0;

	iVar0 = -1;
	func_278(uParam0, vParam1, iParam4, 4, iVar0, 0);
}

void func_178(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;

	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_278(uParam0, vParam1, iParam4, 1, iVar0, 0);
}

void func_179(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = 258;
	func_278(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_180(var uParam0, vector3 vParam1, int iParam4)
{
	int iVar0;

	iVar0 = 258;
	func_278(uParam0, vParam1, iParam4, 1, iVar0, 0);
}

void func_181(var uParam0)
{
	if (uParam0->f_65)
	{
		if (func_98(&(uParam0->f_64), &(uParam0->f_65)))
		{
			uParam0->f_65 = 0;
		}
	}
	if (uParam0->f_67)
	{
		if (func_98(&(uParam0->f_66), &(uParam0->f_67)))
		{
			uParam0->f_67 = 0;
		}
	}
	if (uParam0->f_69)
	{
		if (func_98(&(uParam0->f_68), &(uParam0->f_69)))
		{
			uParam0->f_69 = 0;
		}
	}
}

bool func_182(int iParam0, int iParam1)
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
	if (func_279(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_279(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_279(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_279(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_279(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_279(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_279(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_279(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_183(var uParam0)
{
	int iVar0;

	if (func_32(16) || uParam0->f_130 == 7)
	{
		iVar0 = func_185(uParam0);
		if (iVar0 != -1)
		{
			if (!func_45(uParam0->f_137[6]))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -19.07792f, false);
		}
	}
}

void func_184(var uParam0)
{
	vector3 vVar0;
	bool bVar25;
	bool bVar26;

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
	vVar0.f_8 = 0;
	vVar0.f_14 = 0;
	vVar0.f_3 = uParam0->f_129;
	vVar0 = { 0f, 0f, 1056964608 /* Float: 0.5f */ };
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_33, &vVar0);
	bVar25 = false;
	bVar26 = false;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))
	{
		bVar26 = true;
	}
	if (!bVar26)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
		{
			bVar25 = true;
		}
	}
	if (bVar26 || (bVar25 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -3.673645E-05f)))
	{
		if (CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_18)))
		{
			if (!CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_18)))
			{
				CAM::_CAM_CREATE(&(uParam0->f_18));
			}
		}
	}
}

int func_185(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar0) && !TASK::IS_PED_EXITING_SCENARIO(Global_33, true))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (TASK::DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar1]))
			{
				if (iVar0 == (*uParam0)[iVar1])
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_186(var uParam0)
{
	return func_168(uParam0->f_128, 512);
}

void func_187(var uParam0)
{
	func_56(&(uParam0->f_128), 512);
}

void func_188(var uParam0)
{
	StringCopy(&(uParam0->f_18), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_18.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

void func_189(var uParam0, int iParam1)
{
	func_161(uParam0, iParam1);
}

void func_190(var uParam0, int iParam1)
{
	func_161(&(uParam0->f_128), 512);
	uParam0->f_130 = iParam1;
}

bool func_191(var uParam0)
{
	return true;
}

bool func_192(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_129))
	{
		if (func_168(uParam0->f_127, 512))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_129, -0.966f, 0.203f, 0.5f) };
			uParam0->f_5[0 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_129) + -1027188851);
			func_176(&vVar0, 1, 10, 0, 0);
			(*uParam0)[0] = TASK::CREATE_SCENARIO_POINT_HASH(0.0258619f, vVar0, fVar3, 0, 0, false);
		}
		if (func_168(uParam0->f_127, 1024))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_129, -0.212f, -1.045f, 0.5f) };
			uParam0->f_5[1 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_129) + -1053394207);
			func_176(&vVar0, 1, 10, 0, 0);
			(*uParam0)[1] = TASK::CREATE_SCENARIO_POINT_HASH(9271496f, vVar0, fVar3, 0, 0, false);
		}
		if (func_168(uParam0->f_127, 2048))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_129, 1.025f, 0.043f, 0.5f) };
			uParam0->f_5[2 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_129) + 1119326044);
			func_176(&vVar0, 1, 10, 0, 0);
			(*uParam0)[2] = TASK::CREATE_SCENARIO_POINT_HASH(-1.799881f, vVar0, fVar3, 0, 0, false);
		}
		if (func_168(uParam0->f_127, 4096))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_129, 0.249f, 1.05f, 0.5f) };
			uParam0->f_5[3 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_129) + 1126451773);
			func_176(&vVar0, 1, 10, 0, 0);
			(*uParam0)[3] = TASK::CREATE_SCENARIO_POINT_HASH(-2.585946E-25f, vVar0, fVar3, 0, 0, false);
		}
		return true;
	}
	return false;
}

void func_193(var uParam0)
{
	if (!CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_18)))
	{
		if (!CAM::_0xC285FD21294A1C49(&(uParam0->f_18)))
		{
			CAM::_LOAD_CAMERA_DATA_DICT(&(uParam0->f_18));
		}
	}
}

bool func_194(var uParam0)
{
	int iVar0;
	int iVar1;

	func_56(&(uParam0->f_128), 1024);
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::GET_IS_ANIMAL(iVar1))
			{
				func_161(&(uParam0->f_128), 1024);
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (func_32(32) || !func_168(uParam0->f_127, 8192))
	{
		return false;
	}
	if (func_160(Global_33, 0))
	{
		return false;
	}
	if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
	{
		return false;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_33, 227, true))
	{
		return false;
	}
	if (func_269(Global_33))
	{
		return false;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
	{
		return false;
	}
	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
	{
		return false;
	}
	if ((func_280(Global_33) || func_281(Global_33)) || func_282(Global_33))
	{
		return false;
	}
	if (!func_283(Global_33, uParam0->f_129, -1090519040 /* Float: -0.5f */))
	{
		return false;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_129, true, false), 1.5f) > 2)
	{
		return false;
	}
	if (func_40() == -1)
	{
		if (func_284())
		{
			return false;
		}
	}
	else if (func_284() && !((Global_1915643.f_20241 == 28 || Global_1915643.f_20241 == 27) || Global_1915643.f_20241 == 29))
	{
		return false;
	}
	if (func_285(uParam0) == -1)
	{
		return false;
	}
	return true;
}

float func_195(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_276(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_196(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar0]))
		{
			TASK::_SET_SCENARIO_POINT_FLAG((*uParam0)[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_197()
{
	PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
}

bool func_198(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = VOLUME::CREATE_VOLUME_CYLINDER(vParam1, 0f, 0f, 0f, fParam4, fParam4, 1f);
	if (func_286(&vParam1, 2f))
	{
		func_30(iVar0);
		return true;
	}
	iVar1 = ENTITY::GET_MATCHING_ENTITIES(iVar0, *iParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *iParam0);
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
		if (ENTITY::IS_ENTITY_A_PED(iVar4))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (iVar5 != Global_33)
			{
				if (PED::_GET_CARRIER_AS_PED(iVar5) != Global_33)
				{
					func_30(iVar0);
					return true;
				}
			}
		}
		iVar2++;
	}
	func_30(iVar0);
	return false;
}

bool func_199(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) && !TASK::IS_PED_EXITING_SCENARIO(Global_33, true))
		{
			if (((TASK::_PED_IS_IN_SCENARIO_BASE(Global_33) || (bParam0 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))) || (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_33) && TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_33, "SCENARIO_POINT_TRANS_COMPLETE"))) || (func_32(16) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2.936837E-05f)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_200()
{
	int iVar0;

	iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
	switch (iVar0)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"):
			return 3;
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"):
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A"):
			return 6;
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"):
			return 8;
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"):
			return 7;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COFFEE_ARTHUR"):
			return 1;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"):
			return 4;
		default:
			break;
	}
	return 0;
}

void func_201(var uParam0, int iParam1)
{
	uParam0->f_125 = iParam1;
}

void func_202(var uParam0)
{
	if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) && func_168(uParam0->f_128, 131072)) && !PED::IS_PED_CARRYING_SOMETHING(Global_33)) && !WEAPON::_0x0DE0944ECCB3DF5D(Global_33))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_129))
		{
			if (!func_45(uParam0->f_149))
			{
				uParam0->f_149 = func_287("REST_BY_FIRE", -1.068381E+13f, uParam0->f_129, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 2f, 0, -2.656165E+09f, 0, 0);
			}
			else if (func_167(uParam0->f_149, 1))
			{
				func_206(uParam0);
				func_54(uParam0);
				func_56(&(uParam0->f_128), 131072);
			}
		}
	}
	else
	{
		func_18(uParam0);
	}
	if (func_45(uParam0->f_149))
	{
		func_172(uParam0->f_149, 5.745081E+24f, 0, 1);
	}
}

void func_203(var uParam0)
{
	if (func_168(uParam0->f_128, 131072))
	{
		if (!func_45(uParam0->f_150))
		{
			if (func_288(uParam0))
			{
				uParam0->f_150 = func_287("CRAFT_COOK", -7.068217E+21f, uParam0->f_129, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 2f, 0, -2.656165E+09f, 0, 0);
				MISC::SET_BIT(&(Global_1958621.f_1), 2);
				MISC::SET_BIT(&(Global_1958621.f_1), 3);
				if (func_168(uParam0->f_128, 1024))
				{
					if (func_289(uParam0))
					{
						func_290(uParam0->f_150, "CAMP_REC_COOK", 1);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1958621.f_1), 2);
						func_164(uParam0->f_150, 0, 1, 1);
					}
				}
			}
		}
		else if (((((TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) || WEAPON::_0x0DE0944ECCB3DF5D(Global_33)) || func_291(1.201345E-07f)) || func_291(-3.294948E+35f)) || func_292()) || Global_1940186.f_38 == 5.402792E-27f)
		{
			func_54(uParam0);
			func_56(&(uParam0->f_128), 131072);
		}
		else if (func_32(16) || func_168(uParam0->f_128, 32768))
		{
			func_29(16);
			func_161(&(uParam0->f_128), 32768);
			func_54(uParam0);
			func_56(&(uParam0->f_128), 131072);
		}
		else
		{
			if (func_168(uParam0->f_128, 1024) != func_168(uParam0->f_128, 2048))
			{
				if (func_168(uParam0->f_128, 1024))
				{
					if (func_289(uParam0) && !func_45(Global_1940072.f_85))
					{
						func_290(uParam0->f_150, "CAMP_REC_COOK", 1);
						func_164(uParam0->f_150, 1, 1, 1);
						func_161(&(uParam0->f_128), 4096);
					}
					else
					{
						func_46(&(uParam0->f_150), 1, 1);
						uParam0->f_150 = func_287("CRAFT_COOK", -7.068217E+21f, uParam0->f_129, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 2f, 0, -2.656165E+09f, 0, 0);
						func_164(uParam0->f_150, 0, 1, 1);
						func_56(&(uParam0->f_128), 4096);
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1958621.f_1), 2);
					MISC::SET_BIT(&(Global_1958621.f_1), 3);
					func_46(&(uParam0->f_150), 1, 1);
					uParam0->f_150 = func_287("CRAFT_COOK", -7.068217E+21f, uParam0->f_129, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 2f, 0, -2.656165E+09f, 0, 0);
				}
				if (func_168(uParam0->f_128, 1024))
				{
					func_161(&(uParam0->f_128), 2048);
				}
				else
				{
					func_56(&(uParam0->f_128), 2048);
				}
			}
			if (func_167(uParam0->f_150, 1))
			{
				func_161(&(uParam0->f_128), 32768);
				MISC::CLEAR_BIT(&(Global_1958621.f_1), 2);
				func_54(uParam0);
				func_56(&(uParam0->f_128), 131072);
				if (func_168(uParam0->f_128, 1024))
				{
					if (func_289(uParam0))
					{
						func_161(&(uParam0->f_128), 4096);
					}
					else
					{
						func_56(&(uParam0->f_128), 4096);
					}
				}
				if (func_168(uParam0->f_128, 1024) && func_168(uParam0->f_128, 4096))
				{
					func_159(64);
				}
			}
		}
	}
	else
	{
		func_46(&(uParam0->f_150), 1, 1);
	}
	if (func_45(uParam0->f_150))
	{
		func_172(uParam0->f_150, 5.745081E+24f, 0, 1);
	}
}

char* func_204(int iParam0)
{
	return "CAMPFIRE";
}

float func_205(bool bParam0, int iParam1, float fParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return fParam2;
}

void func_206(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_285(uParam0);
	if (iVar0 == -1)
	{
		func_29(64);
		func_29(16);
		func_56(&(uParam0->f_128), 32768);
		uParam0->f_134 = 0;
		return;
	}
	if (func_32(64))
	{
		func_293(Global_33, 1, 1);
		switch (iVar0)
		{
			case 0:
			case 3:
				uParam0->f_134 = 2;
				TASK::TASK_USE_SCENARIO_POINT(Global_33, (*uParam0)[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_132 = 6;
				uParam0->f_131 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_134 = 2;
				TASK::TASK_USE_SCENARIO_POINT(Global_33, (*uParam0)[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_132 = 6;
				uParam0->f_131 = 1;
				break;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	else
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				iVar1 = 0;
				if (((func_32(16) || func_168(uParam0->f_128, 32768)) || func_294(2.239388E-14f, &iVar1)) || func_294(8.746712E-19f, &iVar1))
				{
					bVar2 = true;
					if (func_295(0) || func_295(1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						PED::_GIVE_PED_HASH_COMMAND(Global_33, -4.522967E-32f, 3f);
					}
					if (PED::IS_PED_MALE(Global_33))
					{
						TASK::TASK_USE_SCENARIO_POINT(Global_33, (*uParam0)[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						TASK::TASK_USE_SCENARIO_POINT(Global_33, (*uParam0)[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (uParam0->f_134 == 1)
				{
					if (PED::IS_PED_MALE(Global_33))
					{
						TASK::TASK_USE_SCENARIO_POINT(Global_33, (*uParam0)[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						TASK::TASK_USE_SCENARIO_POINT(Global_33, (*uParam0)[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (func_296())
				{
					if (PED::IS_PED_MALE(Global_33))
					{
						TASK::TASK_USE_SCENARIO_POINT(Global_33, (*uParam0)[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						TASK::TASK_USE_SCENARIO_POINT(Global_33, (*uParam0)[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (PED::IS_PED_MALE(Global_33))
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_33, (*uParam0)[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_33, (*uParam0)[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A", 0, true, false, 0, false, -1f, false);
				}
				break;
		}
		uParam0->f_131 = iVar0;
	}
}

void func_207()
{
	if (func_105(-1.178843E+33f, 0))
	{
		func_297(32);
	}
	if (func_105(1.171813E+21f, 0))
	{
		func_297(32);
	}
	if (func_105(-230.1699f, 0))
	{
		func_297(64);
	}
	if (func_105(5.402792E-27f, 0))
	{
		func_297(131072);
	}
}

void func_208(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_45(uParam0->f_137[iVar0]))
		{
			if (func_298(uParam0->f_137[iVar0], 0) == bParam1)
			{
			}
			else
			{
				func_164(uParam0->f_137[iVar0], bParam1, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_209(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
	iVar1 = 0;
	if (iVar0 == 341.742f || iVar0 == 9.105892E+27f)
	{
		if ((((((func_212(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 500) && !func_168(uParam0->f_128, 32768)) && !func_32(16)) && uParam0->f_134 != 1) && !func_294(2.239388E-14f, &iVar1)) && !func_294(8.746712E-19f, &iVar1))
		{
			func_118(&(uParam0->f_161));
			func_215(-3.765601E+36f, 1056964608 /* Float: 0.5f */);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -2.10085E+18f || iVar0 == 2.647834E-09f)
	{
		if (func_212(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 500)
		{
			if (!func_241(&(uParam0->f_161)))
			{
				func_118(&(uParam0->f_161));
			}
			if (func_116(&(uParam0->f_161), 1127481344 /* Float: 180f */))
			{
				func_118(&(uParam0->f_161));
				if (!func_296())
				{
					func_215(5.685772E+22f, 1056964608 /* Float: 0.5f */);
					uParam0->f_153 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (iVar0 == -2.532171E+17f || iVar0 == 1.060424E+09f)
	{
		if (func_212(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 500)
		{
			if (!func_241(&(uParam0->f_161)))
			{
				func_118(&(uParam0->f_161));
			}
			if (func_116(&(uParam0->f_161), 1092616192 /* Float: 10f */))
			{
				if (func_296())
				{
					func_118(&(uParam0->f_161));
					uParam0->f_153 = MISC::GET_GAME_TIMER();
					func_215(-4.6265E+08f, 1056964608 /* Float: 0.5f */);
				}
			}
		}
	}
	else if (iVar0 == -1.772429E+20f || iVar0 == 2.719026E+21f)
	{
		if (func_212(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 500)
		{
			func_215(1.652442E-15f, 2f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -2.545493E-13f || iVar0 == 4.648953E+35f)
	{
		if (func_212(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 500)
		{
			func_215(4.95508E+09f, 2f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_210(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam1)
	{
		iVar2 = iParam2;
		if (iParam3 != -1)
		{
			iVar1 = iParam3;
		}
		else
		{
			iVar1 = uParam0->f_131;
		}
	}
	else
	{
		iVar1 = uParam0->f_131;
		iVar2 = uParam0->f_132;
	}
	switch (iVar1)
	{
		case 0:
		case 1:
			switch (iVar2)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
				case 4:
					iVar0 = 0;
					break;
				case 12:
					iVar0 = 0;
					break;
				default:
					if (func_40() != 0 || func_168(uParam0->f_128, 64))
					{
						iVar0 = 1593362;
					}
					else
					{
						iVar0 = 20498;
					}
					break;
			}
			break;
		case 2:
		case 3:
			if (((iVar2 == 3 || iVar2 == 4) || iVar2 == 1) || iVar2 == 12)
			{
				iVar0 = 0;
			}
			else if (func_40() != 0 || func_168(uParam0->f_128, 64))
			{
				iVar0 = 1593362;
			}
			else
			{
				iVar0 = 20498;
			}
			break;
	}
	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33) || func_168(uParam0->f_128, 16384))
	{
		iVar0 = 0;
	}
	else if (func_160(Global_33, 0) || WEAPON::_0x0DE0944ECCB3DF5D(Global_33))
	{
		if (!func_168(uParam0->f_128, 32))
		{
			func_299(207, 1);
			func_161(&(uParam0->f_128), 32);
		}
		iVar0 = 16;
	}
	func_300(uParam0, iVar0);
	iVar3 = func_301(uParam0);
	if (uParam0->f_134 == 2)
	{
		if (iVar3 == 2)
		{
			func_208(uParam0, 0);
		}
		else
		{
			uParam0->f_134 = 0;
		}
	}
	if (iVar3 != -1)
	{
		if (uParam0->f_133 != -1)
		{
			uParam0->f_131 = uParam0->f_133;
		}
	}
	switch (iVar3)
	{
		case 0:
			func_93(&(uParam0->f_49));
			func_100(&(uParam0->f_49), 1);
			uParam0->f_134 = 6;
			break;
		case 8:
			func_51(uParam0);
			func_161(&(uParam0->f_128), 16384);
			break;
		case 2:
			func_100(&(uParam0->f_49), 2);
			func_201(uParam0, 0);
			func_189(&(uParam0->f_49), 32);
			uParam0->f_134 = 2;
			func_51(uParam0);
			func_190(uParam0, 7);
			break;
		case 6:
			func_51(uParam0);
			uParam0->f_134 = 10;
			return true;
		case 10:
			Global_1148170[Global_1295619 /*10*/].f_8 = 1;
			func_51(uParam0);
			func_190(uParam0, 8);
			uParam0->f_134 = 12;
			break;
		case 1:
			uParam0->f_134 = 0;
			func_51(uParam0);
			break;
		default:
			return false;
	}
	return true;
}

bool func_211(var uParam0)
{
	switch (uParam0->f_131)
	{
		case 0:
			return func_302(uParam0);
		case 1:
			return func_303(uParam0);
		case 2:
			return func_304(uParam0);
		case 3:
			return func_305(uParam0);
	}
	func_51(uParam0);
	return false;
}

bool func_212(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33);
	bVar1 = PED::_0x2DC0E8DCBD3546E9(Global_33);
	if ((bVar0 || bVar1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 3.6671E+31f))
	{
		return false;
	}
	if (bVar1 && uParam0->f_133 != -1)
	{
		iVar2 = func_185(uParam0);
		if (iVar2 != uParam0->f_133)
		{
			return false;
		}
		if (uParam0->f_131 != iVar2)
		{
			uParam0->f_131 = iVar2;
			return false;
		}
	}
	if (func_306())
	{
		return false;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
	{
		return false;
	}
	return true;
}

int func_213(bool bParam0)
{
	if (func_40() == -1)
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

int func_214(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	float fVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;

	if (func_307())
	{
		Global_1940239.f_11589 = bParam0;
		func_308(bParam0, 1, -5.149929E+33f, 0, 0);
		return 0;
	}
	if (!func_309(bParam0, bParam4))
	{
		return 0;
	}
	if (func_310(bParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 4.543783E-35f))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (bParam0 == -6.463736E+23f)
	{
		UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_311(bParam0))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	if (func_312(bParam0, -1.384179E-36f))
	{
		func_313(bParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_312(bParam0, -2.126654E-30f))
	{
		func_314(bParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_312(bParam0, 7.57821E-18f))
	{
		func_315(bParam0, Var10);
	}
	else if (func_312(bParam0, 1.293259E-18f))
	{
		if (!func_316(bParam0))
		{
			return 0;
		}
	}
	if (func_317(bParam0))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_318(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_312(bParam0, -6.191407E-06f))
	{
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_319(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_312(bParam0, -1.001123E-14f) || func_312(bParam0, -4.568457E+30f)) || func_312(bParam0, 1.293259E-18f))
	{
	}
	else if (func_312(bParam0, 4.644778E+30f))
	{
		if (((func_320() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1)) || TASK::IS_PED_EXITING_SCENARIO(Global_33, true)) || !PED::IS_PED_ON_FOOT(Global_33))
		{
			return 0;
		}
		switch (bParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
			case -252071901:
				StringCopy(&(Var10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		}
		Var0.f_1 = bParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_319(Var10, 0);
		bVar28 = false;
	}
	else if (func_321(bParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = func_322(Global_1072759.f_28313.f_25.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_319(Var10, 0);
		iVar29 = 1;
	}
	else if (func_323(bParam0) == -42.1084f)
	{
		if (!func_324(bParam0))
		{
			func_218("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_228(bParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_325();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_326(PLAYER::PLAYER_ID()))
			{
				func_218("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_218("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -947.1324f)
		{
			if (Global_1953279.f_1676 != bParam0)
			{
				func_268(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_327(bParam0, 0);
					return iVar29;
				case -2061583405:
					func_328(bParam0);
					func_268(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (bParam0 == Global_1953279.f_1676.f_1[23 /*3*/])
					{
						func_329(Global_33, 1.296E-29f, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 0);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipGlovesFidget", true, 15);
						func_330(bParam0, 0, 0);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipGlovesFidget", true, 15);
						func_330(bParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (bParam0 == Global_1953279.f_1676.f_1[10 /*3*/])
					{
						func_329(Global_33, Global_1953279.f_83[10 /*12*/], 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 0);
						func_330(bParam0, 0, 0);
						return 1;
					}
					else
					{
						func_330(bParam0, 1, 0);
						func_331(-7.463622E-36f, 0);
						if (iVar32 == 4.281622E+11f)
						{
							func_331(1.246195E-34f, 0);
						}
						else if (iVar32 == 1.246195E-34f)
						{
							func_331(4.281622E+11f, 0);
						}
					}
					break;
				default:
					if (!func_312(bParam0, 3.611922E-33f))
					{
					}
					else
					{
						func_327(bParam0, 0);
					}
					break;
			}
			func_329(Global_33, bParam0, 0, -1.003831E+26f, 1, 1, 1, 0, 0, 1, 1, 0);
		}
	}
	else
	{
		switch (bParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_332(1, 0);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_40() != -1)
				{
				}
				else if (!func_324(bParam0))
				{
					func_218("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_333(7, bParam0);
					bVar31 = func_333(1, bParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17339))
						{
							MAP::REMOVE_BLIP(&Global_17339);
						}
						Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(-5.719183E-31f);
						MAP::BLIP_ADD_MODIFIER(Global_17339, 9.52931E-15f);
						func_218(MISC::VAR_STRING(0, -3.54871E-22f, Global_17339), 10000, 0, 0, 0, 1);
					}
					else if (!func_334(7))
					{
						func_218("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_335(Global_33, func_245(7), 0))
						{
							func_218("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17339))
							{
								MAP::REMOVE_BLIP(&Global_17339);
							}
							Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(-5.719183E-31f);
							MAP::BLIP_ADD_MODIFIER(Global_17339, 9.52931E-15f);
							func_218(MISC::VAR_STRING(0, -3.385882E+21f, Global_17339), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						fVar26 = 6.6095E+09f;
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(fVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_2 = 4.285061E-37f;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_319(Var10, 0);
						}
						Jump @2437; //curOff = 1819
						func_336();
						Jump @2437; //curOff = 1826
						if (func_324(-7.437896E-28f))
						{
							if (func_337(1, 1))
							{
								func_338(2, 1);
							}
							else if (func_339(1))
							{
								func_218("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_340())
							{
								func_218("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
								{
									func_341();
								}
								else
								{
									func_218("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_342(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
							}
						}
						else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
						{
							func_218("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_342(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
						}
						else if (func_340())
						{
							func_218("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_218("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2437; //curOff = 2047
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_42(Global_33, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bParam0, false, 0, false, false);
						}
						return 1;
						Jump @2437; //curOff = 2085
						if (func_42(Global_33, 1, 0, 0) != bParam0)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bParam0, false, 0, false, false);
						}
						return 1;
						Jump @2437; //curOff = 2120
						Jump @2437; //curOff = 2123
						func_299(535, 1);
						Jump @2437; //curOff = 2134
						func_343(1);
						Jump @2437; //curOff = 2142
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -2.680077E+18f, 9.798505E+30f, 1, 0, -1f);
						bVar28 = false;
						return 1;
						Jump @2437; //curOff = 2177
						UIAPPS::LAUNCH_UIAPP_BY_HASH(-1.228685E+36f);
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1.228685E+36f) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_319(Var10, 0);
						}
						return 1;
						Jump @2437; //curOff = 2253
						UIAPPS::_CLOSE_UIAPP_BY_HASH(NaNf);
						if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == 1.571889E+10f)
						{
							UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(5.184729E+32f, 1.125697E+07f);
						}
						else
						{
							UIAPPS::LAUNCH_UIAPP_BY_HASH(5.184729E+32f);
						}
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(6.968884E-14f) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_3 = !SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != 1.571889E+10f;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_319(Var10, 0);
						}
						return 1;
						Jump @2437; //curOff = 2383
						if (Global_1148170[PLAYER::PLAYER_ID() /*10*/].f_4)
						{
							func_218("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_344();
						}
						return 1;
						Jump @2437; //curOff = 2428
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
				default:
					break;
		}
	}
}

bool func_215(int iParam0, float fParam1)
{
	if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, iParam0))
	{
		PED::_GIVE_PED_HASH_COMMAND(Global_33, iParam0, fParam1);
		PED::_ADD_SCENARIO_TRANSITION(Global_33);
		return false;
	}
	return true;
}

bool func_216(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (iParam3 == -5.149929E+33f)
	{
		if (func_345(bParam0))
		{
			iParam3 = 9.275179E-19f;
		}
	}
	bVar0 = iParam3 == 9.275179E-19f;
	bVar1 = iParam3 == 1.994827E+33f;
	bVar2 = iParam3 == -1.202057E-11f;
	bVar3 = func_346(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_347(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_348(bParam0, 1))
	{
		return false;
	}
	Var5 = { func_349(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_350(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var5, iParam1);
		}
		else if ((func_350(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_216(bParam0, func_350(bParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_323(bParam0) == -3.265313E+23f)
	{
		if (!func_351(bParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_308(bParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_226(bParam0, 0, 0) };
		if (func_103(0) && Var7.f_4 == 4.978612f)
		{
			func_352(1, 0, 0);
		}
	}
	if (bParam0 == -2.680077E+18f)
	{
		Global_1940072.f_21 = 0;
	}
	if (!func_103(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 6.236711E+08f)
	{
		func_347(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

bool func_217(var uParam0, var uParam1)
{
	if (func_353(uParam0))
	{
		return true;
	}
	return false;
}

int func_218(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_219(int iParam0)
{
	return func_270(iParam0, 2);
}

void func_220(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_221(var uParam0)
{
	func_189(uParam0, 1);
}

bool func_222(bool bParam0)
{
	return (func_354(bParam0) && func_312(bParam0, 4.31212E+18f));
}

bool func_223(bool bParam0)
{
	if (!func_222(bParam0))
	{
		return false;
	}
	switch (bParam0)
	{
		case 731907282:
			return 6.665346E-32f;
		case 1561454517:
			return 3.055069E-22f;
		case 1254834984:
			return -4.715896E+27f;
			return 3.799805E-08f;
			return -6.229594E-24f;
			return -6.558434E-35f;
			return -4.259769E+28f;
			return 2.642597E-36f;
			return 4.024488E-27f;
			return 3.184647E+31f;
			return 2.427981E-20f;
			return 2.25761E+10f;
			return -7.330709E+14f;
			return -2.400042E+23f;
			return -0.09105205f;
			return -1.271532E+08f;
			return -1.122659E+24f;
			return -3.14812E+29f;
			return 5.933205E-08f;
			return 3.478544E+22f;
			return 4.785602E-25f;
			return -4.590873E-27f;
			return -6.353205E-17f;
			return 1.139413E+29f;
			return -3.432342E-34f;
			return -5.970071E-28f;
			return -2.052252E+17f;
			return -4.238399E+30f;
			return -9.185677E+19f;
			return 1.087713E+21f;
			return -1.509685E+07f;
			return 3.947197E+32f;
			return -1.438366E-27f;
			return 1.504294E-17f;
			return 1.617986E-28f;
			return 2.88563E+36f;
			return 2.066523E-20f;
			return 1.768266E-31f;
			return -1.965168E+35f;
			return 395556.1f;
			return -9.180731E+18f;
			return -0.03333768f;
			return -1.794599E+11f;
			return -1.102499E-29f;
			return 1.503452E+37f;
			return -1.22361E-08f;
			return 2.173322E+37f;
			return 1.644474E+25f;
			return 6.339123E+10f;
			return 7.123357E+36f;
			return 6.343059E+23f;
			return 0.0005745888f;
			return 1.668324E+31f;
			return -1.671941E-20f;
			return -3.907049E-23f;
			return 1.494274E+22f;
			return 0.05339542f;
			return 4.578568E+20f;
			return -5.311585E-06f;
			return -4.257166E-35f;
			return 2.536853E-22f;
			return 1.388459E-33f;
			return 876.647f;
			return -4933.637f;
			return -1.246122E-05f;
			return 0.02454921f;
			return 5.444291E-08f;
			return 19.55518f;
			return 1.09735E+14f;
			return 1.93079E+22f;
			return 1.048737E+32f;
			return 1.713901E+21f;
			return -1.313098E+26f;
			return -3.982064E+33f;
			return -5.61527E+26f;
			return 2.426734E-20f;
			return 0.0003002306f;
			return 1.239412E-14f;
			return 9691481;
			return -1.626788E+30f;
			return -1.578931E+19f;
			return 4.646013E-20f;
			return -7.458821E-11f;
			return -7.161369f;
			return false;
		}

bool func_224(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_355(bParam0, bParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_356(Var0[iVar32 /*2*/].f_1))
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
				iVar33 = func_358(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_359(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_350(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

int func_225(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (!func_360(bParam0, bParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = ((!bParam3 && func_103(0)) && !func_104());
	iVar34 = -1;
	iVar35 = -1;
	if (Global_1915643.f_20638)
	{
		iVar35 = Global_1915643.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
			Jump @338; //curOff = 103
		}
		else
		{
			iVar36 = func_358(iVar35, Var0[iVar32 /*2*/]);
			if (iVar36 != 0)
			{
				bParam2 = false;
				iVar37 = func_359(Var0[iVar32 /*2*/], iVar36);
			}
			else
			{
				iVar37 = func_350(Var0[iVar32 /*2*/], 0, !bVar33, 1);
			}
			if (bVar33)
			{
				if (func_361(Var0[iVar32 /*2*/]) || func_362(Var0[iVar32 /*2*/]))
				{
					iVar37 = (iVar37 + func_363(Var0[iVar32 /*2*/], 0));
					if (bParam2)
					{
						iVar38 = 0;
						iVar37 = (iVar37 + func_364(7, Var0[iVar32 /*2*/], &iVar38));
					}
				}
				else if (bParam2)
				{
					iVar37 = (iVar37 + (func_365(7, Var0[iVar32 /*2*/]) + func_366(Var0[iVar32 /*2*/])));
				}
			}
			if (iVar37 < Var0[iVar32 /*2*/].f_1)
			{
				return 0;
			}
			iVar37 = (iVar37 / Var0[iVar32 /*2*/].f_1);
			if (iVar34 == -1 || iVar37 < iVar34)
			{
				iVar34 = iVar37;
			}
		}
		iVar32++;
	}
	return iVar34;
}

struct<5> func_226(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_367(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_323(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_368(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_369(bParam1) };
			if (bParam2 && func_370(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_371(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_371(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_372(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_373(bParam1) };
			switch (func_228(bParam0))
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
			if (func_374(bParam0, -2.580501E-27f))
			{
				Var0 = { func_368(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_374(bParam0, -4.220332E-15f))
			{
				Var0 = { func_368(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_368(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_374(bParam0, -3.171238E-21f))
			{
				Var0 = { func_368(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_375(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_374(bParam0, -3.171238E-21f))
			{
				Var0 = { func_368(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

bool func_227(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_376(&bParam0);
	if (!func_105(bParam0, 0) && !func_378(func_377(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_379(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_380(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_369(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_371(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_372(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_370(bParam0, 1))
		{
			if (!func_371(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_372(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_381(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_382(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

int func_228(bool bParam0)
{
	struct<2> Var0;

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_229(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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

	if (!func_105(bParam0, 0))
	{
		return -1;
	}
	if (func_323(bParam0) != 5.407193E-38f)
	{
		return -1;
	}
	if (func_104())
	{
		bParam3 = true;
	}
	if (bParam5 == -2.401104E+18f || bParam5 == -982726.7f)
	{
		iVar0 = (func_383(bParam0, bParam5, 1, 0, 1, 3.996812E+36f) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_383(bParam0, bParam5, 1, 0, 1, 3.414007E-11f) * iParam2);
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
	else if (func_360(bParam0, bParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_350(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_103(0))
	{
		if (iVar0 > 0)
		{
			func_308(3.996812E+36f, iVar0, -5.149929E+33f, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_308(3.414007E-11f, iVar1, -5.149929E+33f, 0, 0);
		}
		else if (func_384(bParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_308(Var2[iVar35 /*2*/], iVar34, -5.149929E+33f, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -5.45926E-19f;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = bParam5;
	Var36.f_12 = -5.149929E+33f;
	iVar53 = func_385(-2.328868E-12f, &Var36, bParam4);
	if (iVar53 == -1)
	{
	}
	else
	{
		Var54.f_7 = -5.149929E+33f;
		Var54.f_16 = -1;
		StringCopy(&(Var54.f_12), sParam1, 32);
		func_234(iVar53, Var54);
	}
	return iVar53;
}

bool func_230(int* iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (!func_386(iParam0, 0))
	{
		return false;
	}
	if (bParam4 == 0)
	{
		bParam4 = func_387(bParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_388(bParam1, bParam4, iParam5))
	{
		return false;
	}
	iParam2->f_17 = bParam1;
	iParam2->f_8 = bParam1;
	iParam2->f_9 = 1;
	iParam2->f_13 = bParam4;
	iParam2->f_12 = 3787186f;
	fVar0 = 1.704487E-19f;
	if (bParam7)
	{
		fVar0 = -1.82867E-29f;
	}
	if (!func_389(iParam0, iParam2, fVar0, bParam4, bParam3))
	{
		return false;
	}
	return true;
}

bool func_231(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	struct<17> Var0;

	if (!func_386(iParam0, 0))
	{
		return false;
	}
	if (!func_390(iParam0, bParam1, Param2, iParam6, bParam10, bParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_391(bParam1, Param2, iParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 3787186f;
	*iParam8 = { Var0 };
	if (!func_392(iParam0, &Var0, 4.059549E+37f, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_232(bool bParam0, bool bParam1)
{
	struct<37> Var0;
	int iVar47;
	int iVar48;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	iVar47 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_TYPE(bParam0);
	if (iVar47 == 0)
	{
		return 0;
	}
	iVar48 = 0;
	while (iVar48 < iVar47)
	{
		if (ITEMDATABASE::_0x1FC25AEB5F76B38D(bParam0, iVar48, &Var0) && Var0 == bParam1)
		{
			return Var0.f_2;
		}
		iVar48++;
	}
	return 0;
}

int func_233(bool bParam0, bool bParam1)
{
	struct<37> Var0;

	if (func_393(bParam0) || func_312(bParam0, 2.791187f))
	{
		return func_232(func_394(bParam0, 1), bParam1);
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_2;
}

void func_234(int iParam0, struct<17> Param1)
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

int func_235(int iParam0, bool bParam1, int iParam2)
{
	if (func_395(255))
	{
		return 1;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(3.569097E-20f))
	{
		return 0;
	}
	if (!func_396(iParam0))
	{
		return 0;
	}
	if (!func_398(func_397(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_236(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_323(bParam0);
	switch (iParam1)
	{
		case 1:
			if (((func_312(bParam0, -3.480943E+19f) || func_312(bParam0, -2.518378E+22f)) && !func_312(bParam0, -1.823469E-06f)) && !func_312(bParam0, 2.357825E-34f))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == 6.919076E-28f)
			{
				if (func_312(bParam0, -7.272718E-19f))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == -3.265313E+23f)
			{
				return true;
			}
			else if (iVar0 == 6.919076E-28f)
			{
				if (func_312(bParam0, -7.272718E-19f))
				{
					return true;
				}
			}
			break;
		case 0:
			if ((func_399(bParam0) || func_400(bParam0, -1.29539E-20f) == -4.839888E+13f) || bParam0 == 7.873405E-07f)
			{
				return true;
			}
			break;
		case 4:
			if (func_312(bParam0, 2.357825E-34f))
			{
				return true;
			}
			break;
		case 5:
			if (func_312(bParam0, -1.823469E-06f))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_237(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_401())
	{
		return 0;
	}
	if (!NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return 0;
	}
	if (func_402())
	{
		return 0;
	}
	iVar0 = func_403(iParam0);
	iVar1 = func_404(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_398(func_405(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

var func_238(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_406() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_407());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_407());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_407());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_408(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_395(iVar2))
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
				if (iVar9 & 8192 != 0 && func_409(iVar2) != 1)
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
					if (!func_410(iVar10))
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

bool func_239(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_240()
{
	return Global_1893611.f_2;
}

bool func_241(var uParam0)
{
	return func_411(*uParam0, 1);
}

void func_242(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_250() - fParam1);
	func_412(uParam0, 1);
	func_413(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_243(int iParam0)
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

int func_244(int iParam0)
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

int func_245(int iParam0)
{
	iParam0 = func_414(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1902883[iParam0 /*43*/];
}

bool func_246(var uParam0, float fParam1)
{
	if (func_116(uParam0, fParam1))
	{
		func_138(uParam0);
		return true;
	}
	return false;
}

int func_247(int iParam0)
{
	iParam0 = func_414(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1902883[iParam0 /*43*/].f_3;
}

bool func_248(var uParam0)
{
	int iVar0;

	if (TASK::IS_PED_IN_WRITHE(uParam0->f_93))
	{
		return false;
	}
	if (!PED::_IS_MOUNT_SEAT_FREE(uParam0->f_93, -2))
	{
		return false;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_93, true);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != Global_33)
		{
			return false;
		}
	}
	if (!func_415(Global_33, uParam0->f_93, 1112014848 /* Float: 50f */, 1, 1))
	{
		return false;
	}
	return true;
}

bool func_249(var uParam0)
{
	return func_411(*uParam0, 2);
}

float func_250()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_251(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

bool func_252(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_253(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 1036831949)
	{
		return 0;
	}
	if (func_2(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_416(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_CREATE_VOLUME_LOCK(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_417(iVar0, bParam8);
	return iVar0;
}

void func_254(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_48(vVar0, vVar3, 0f) };
	vVar9 = { func_49(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, iParam7, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, iParam7);
	}
}

void func_255(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_256(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

void func_257(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_SET_PED_TO_DISABLE_RAGDOLL(iVar1, true);
		}
	}
	if (iParam0 == func_418(Global_33) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_419(iParam0))
	{
		if (func_420(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_279(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_257(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_257(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_279(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_279(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_279(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_279(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_279(iParam5, 129))
	{
		if (func_279(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iParam0, vParam1, fParam4, func_279(iParam5, 32), true);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_279(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_279(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_419(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_279(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_33 && !func_279(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_258(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_276(vParam0, vParam3) <= (fParam6 * fParam6);
}

void func_259()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
	if (func_294(2.239388E-14f, &iVar0) || func_294(8.746712E-19f, &iVar0))
	{
		TASK::TASK_USE_SCENARIO_POINT(Global_33, Local_28[0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, false, true, 0, false, -1f, false);
	}
	else if (func_296())
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			sVar1 = "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A";
		}
		else
		{
			sVar1 = "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A";
		}
		TASK::TASK_USE_SCENARIO_POINT(Global_33, Local_28[0], sVar1, 0, false, true, 0, false, -1f, false);
	}
	else
	{
		func_421(MISC::GET_RANDOM_INT_IN_RANGE(0, 2));
	}
}

bool func_260(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_17360[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_261(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_17360[iVar0 /*2*/] == iParam0)
		{
			return Global_17360[Global_17381 /*2*/].f_1;
		}
		iVar0++;
	}
	return 5;
}

bool func_262(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

bool func_264(bool bParam0)
{
	if (func_294(5.002459E-36f, bParam0))
	{
		return true;
	}
	if (func_294(-9.847085E+19f, bParam0))
	{
		return true;
	}
	return false;
}

int func_265(bool bParam0)
{
	struct<5> Var0;

	Var0 = { func_226(bParam0, 1, 0) };
	return func_422(Var0.f_4);
}

int func_266(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

void func_267(bool bParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar1 = func_265(bParam0);
	iVar2 = func_266(iVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (func_423(bParam0) && func_424(bParam0))
	{
		iParam1 |= 64;
	}
	if ((iVar1 == 37.82234f && func_425(32768)) || bParam0 != Global_1953279.f_1676.f_1[iVar2 /*3*/])
	{
		if (func_423(Global_1953279.f_1676.f_1[iVar2 /*3*/]) && func_424(Global_1953279.f_1676.f_1[iVar2 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1953279.f_83[iVar2 /*12*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_228(bParam0))
		{
			case 81053684:
				if (func_294(-9.847085E+19f, &uVar0))
				{
					iVar3 = func_266(func_426(-9.847085E+19f), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1953279.f_2686[iVar3 /*2*/] = Global_1953279.f_83[iVar3 /*12*/];
						if (func_312(bParam0, -2.411198E+32f) && func_294(0.03593467f, &uVar0))
						{
							iVar3 = func_266(func_426(0.03593467f), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1953279.f_2686[iVar3 /*2*/] = Global_1953279.f_83[iVar3 /*12*/];
								Jump @513; //curOff = 342
								if (func_425(32768))
								{
									func_428(func_427(iVar2, 1));
								}
								if (func_294(5.002459E-36f, &uVar4))
								{
									iVar3 = func_266(func_426(5.002459E-36f), 1);
									if (iVar3 == 39)
									{
									}
									else
									{
										Global_1953279.f_2686[iVar3 /*2*/] = Global_1953279.f_83[iVar3 /*12*/];
										Jump @513; //curOff = 428
										if (!func_312(bParam0, 3.611922E-33f))
										{
										}
										else
										{
											if (func_294(-9.847085E+19f, &uVar0))
											{
												iVar3 = func_266(func_426(-9.847085E+19f), 1);
												if (iVar3 == 39)
												{
												}
												else
												{
													Global_1953279.f_2686[iVar3 /*2*/] = Global_1953279.f_83[iVar3 /*12*/];
												}
												Global_1953279.f_2686[iVar2 /*2*/] = bParam0;
												func_429(iVar1, iParam1, 6);
											}
										}
									}
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

void func_268(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_430(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_431(Var0);
}

bool func_269(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_270(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_271(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_273(iParam0, 1);
	func_274(iParam0, 1);
	func_275(iParam0, 128);
}

void func_272(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_273(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_270(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_274(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_275(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

float func_276(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_277(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_278(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_43(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_43(uParam0))
		{
		}
	}
}

bool func_279(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

var func_280(int iParam0)
{
	return (func_432(iParam0, 4) || func_432(iParam0, 5));
}

int func_281(int iParam0)
{
	return func_432(iParam0, 7);
}

int func_282(int iParam0)
{
	return func_432(iParam0, 6);
}

bool func_283(int iParam0, int iParam1, int iParam2)
{
	return func_169(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), iParam2);
}

bool func_284()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

int func_285(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	fVar0 = 1176256512; /* Float: 10000f */
	iVar1 = -1;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar3]))
		{
			if (TASK::_GET_PED_USING_SCENARIO_POINT((*uParam0)[iVar3]) != 0)
			{
			}
			else if (!PED::_CAN_PED_USE_SCENARIO_POINT(Global_33, (*uParam0)[iVar3], 0, 0, 1) && !func_32(64))
			{
			}
			else
			{
				ITEMSET::_CLEAR_ITEMSET(iVar2);
				if (func_198(&iVar2, TASK::_GET_SCENARIO_POINT_COORDS((*uParam0)[iVar3], true), 1f))
				{
				}
				else
				{
					fVar4 = func_276(Global_34, uParam0->f_5[iVar3 /*3*/]);
					if (fVar4 < fVar0)
					{
						iVar1 = iVar3;
						fVar0 = fVar4;
					}
				}
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	return iVar1;
}

bool func_286(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = VOLUME::CREATE_VOLUME_CYLINDER(*uParam0, 0f, 0f, 0f, fParam1, fParam1, 1f);
	if (PED::_0xA1FBAC56D38563E2(iVar0))
	{
		func_30(iVar0);
		return true;
	}
	if (func_433(&iVar0))
	{
		func_30(iVar0);
		return true;
	}
	func_30(iVar0);
	return false;
}

int func_287(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_270(iVar0, 2))
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
				func_271(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1f, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_288(var uParam0)
{
	if (WEAPON::_0x0DE0944ECCB3DF5D(Global_33))
	{
		return false;
	}
	if (func_168(uParam0->f_128, 32768))
	{
		return false;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
	{
		return false;
	}
	if (func_32(16))
	{
		return false;
	}
	return true;
}

bool func_289(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		bVar2 = func_434(iVar1);
		if (((func_399(bVar2) && !ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar0)) && FLOCK::_GET_ANIMAL_RARITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) != 2) && !FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(iVar0))
		{
			uParam0->f_49.f_62 = bVar2;
			uParam0->f_49.f_63 = -1.428267E+31f;
			if (func_45(uParam0->f_150))
			{
				func_172(uParam0->f_150, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_290(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_91(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, sParam1);
}

bool func_291(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939421.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939421[iVar0 /*16*/].f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_292()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-3.294948E+35f) > 0)
	{
		return true;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1.201345E-07f) > 0)
	{
		return true;
	}
	return false;
}

void func_293(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar25;
	bool bVar26;
	int iVar27[10];
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	bool bVar43;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = func_435(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_103(0) || func_104())
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		func_436(iVar1, 0);
	}
	else if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), true, true, ENTITY::GET_ENTITY_MODEL(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			bVar26 = Var2.f_1[iVar25];
			if (func_105(bVar26, 0))
			{
				if (!bParam1 || func_361(bVar26))
				{
					func_437(bVar26, Var2.f_12[iVar25], bParam2, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = PED::_GET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		if (func_348(-1.526683E+29f, 1))
		{
			if (iVar39 < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = FLOCK::_GET_ANIMAL_RARITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		iVar42 = func_438(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar41);
		PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(&iVar27, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (iVar27[iVar38] != 0)
			{
				if (func_439(iVar0) && !func_440(iVar27[iVar38]))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || func_361(iVar27[iVar38]))
				{
					func_437(iVar27[iVar38], 1, bParam2, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	bVar43 = func_441(&iVar0);
	if (!func_105(bVar43, 0))
	{
		bVar43 = func_442(iVar0);
	}
	if (func_105(bVar43, 0))
	{
		func_443(bVar43, 1, iParam0, 1, -5.149929E+33f);
	}
	ENTITY::_DELETE_CARRIABLE(&iVar0);
}

bool func_294(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_266(func_426(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1953279.f_1676.f_1[iVar1 /*3*/] != 0 && Global_1953279.f_1676.f_1[iVar1 /*3*/] != Global_1953279.f_83[iVar1 /*12*/])
	{
		bVar0 = Global_1953279.f_1676.f_1[iVar1 /*3*/];
		if (func_228(bVar0) == iParam0 || (iParam0 == 5.002459E-36f && func_312(bVar0, 3.611922E-33f)))
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

int func_295(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &bVar0, true, iParam0, false))
	{
		if (func_105(bVar0, 0))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(bVar0) || func_444(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_296()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	if (((((iVar0 == 5.724151E+12f || iVar0 == -7.861602E+23f) || iVar0 == 2.574817E-31f) || iVar0 == 8.209398E-09f) || iVar0 == 3.246003E+36f) || iVar0 == -3.68819E-06f)
	{
		return true;
	}
	iVar1 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	if (((((iVar1 == 5.724151E+12f || iVar1 == -7.861602E+23f) || iVar1 == 2.574817E-31f) || iVar1 == 8.209398E-09f) || iVar1 == 3.246003E+36f) || iVar1 == -3.68819E-06f)
	{
		return true;
	}
	iVar2 = func_154();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return true;
	}
	return false;
}

void func_297(int iParam0)
{
	Global_1940072.f_39 = (Global_1940072.f_39 || iParam0);
}

bool func_298(int iParam0, bool bParam1)
{
	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	return !func_270(iParam0, 4);
}

void func_299(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_445(iParam0, &iVar0, &iVar1);
	if (!func_446(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_447(iVar0, iVar1);
}

void func_300(var uParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1211.617f))
	{
		func_161(&(uParam0->f_128), 2);
	}
	else
	{
		func_56(&(uParam0->f_128), 2);
	}
	if (func_168(iParam1, 1))
	{
		if (!func_45(uParam0->f_137[0]))
		{
			uParam0->f_137[0] = func_163("KNEEL_FIRE", 0.00251415f, 2, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
			func_172(uParam0->f_137[0], 5.745081E+24f, 0, 1);
		}
	}
	else if (func_45(uParam0->f_137[0]))
	{
		func_46(&(uParam0->f_137[0]), 1, 1);
	}
	if (((func_168(iParam1, 4096) && func_168(uParam0->f_127, 16)) && !func_32(128)) && uParam0->f_134 != 2)
	{
		MISC::SET_BIT(&(Global_1958621.f_1), 2);
		MISC::SET_BIT(&(Global_1958621.f_1), 3);
		if (!func_45(uParam0->f_137[2]))
		{
			uParam0->f_137[2] = func_163("CRAFT_COOK", -7.068217E+21f, 2, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
			func_172(uParam0->f_137[2], 5.745081E+24f, 0, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1958621.f_1), 2);
		if (func_45(uParam0->f_137[2]))
		{
			func_46(&(uParam0->f_137[2]), 1, 1);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -3.403642E+24f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -19.07792f, false);
	if (func_45(uParam0->f_137[6]))
	{
		func_46(&(uParam0->f_137[6]), 1, 1);
	}
	if (func_32(32))
	{
		if (func_45(uParam0->f_137[6]))
		{
			func_164(uParam0->f_137[6], 0, 1, 1);
		}
	}
	else if (func_45(uParam0->f_137[6]) && !func_298(uParam0->f_137[6], 0))
	{
		func_164(uParam0->f_137[6], 1, 1, 1);
	}
	if (func_32(32) || (func_168(uParam0->f_128, 2) && uParam0->f_134 != 2))
	{
		if (func_45(uParam0->f_137[2]))
		{
			func_164(uParam0->f_137[2], 0, 1, 1);
		}
	}
	else if (func_45(uParam0->f_137[2]))
	{
		func_164(uParam0->f_137[2], 1, 1, 1);
	}
	if ((func_168(iParam1, 16) && !func_32(128)) && uParam0->f_134 != 2)
	{
		if (!func_45(uParam0->f_137[1]))
		{
			uParam0->f_137[1] = func_163("LEAVE", 0.00251415f, 1, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
			if (func_168(iParam1, 524288) && func_168(uParam0->f_128, 8192))
			{
				func_165(uParam0->f_137[1], 0, 1);
				func_448(uParam0->f_137[1], 20, 1, 1);
				func_448(uParam0->f_137[1], 13, 1, 1);
			}
			func_172(uParam0->f_137[1], 5.745081E+24f, 0, 1);
		}
		if (func_168(iParam1, 524288) && func_168(uParam0->f_128, 8192))
		{
			if (!func_45(uParam0->f_137[8]))
			{
				uParam0->f_137[8] = func_163("LEAVE", 0.00251415f, 2, 0, 0, 5, 570, 4000, 10, 2f, -2.656165E+09f, 0);
				func_448(uParam0->f_137[8], 19, 1, 1);
				func_448(uParam0->f_137[8], 20, 1, 1);
				func_448(uParam0->f_137[8], 13, 1, 1);
				func_449(&(uParam0->f_137[8]), "INPUT_PCAMP_TEARDWN");
				func_172(uParam0->f_137[8], 5.745081E+24f, 0, 1);
			}
		}
		else if (func_45(uParam0->f_137[8]))
		{
			func_46(&(uParam0->f_137[8]), 1, 1);
		}
	}
	else
	{
		if (func_45(uParam0->f_137[1]))
		{
			func_46(&(uParam0->f_137[1]), 1, 1);
		}
		if (func_45(uParam0->f_137[8]))
		{
			func_46(&(uParam0->f_137[8]), 1, 1);
		}
	}
	if (func_168(uParam0->f_128, 2))
	{
		if (func_45(uParam0->f_137[1]) && func_298(uParam0->f_137[1], 0))
		{
			func_164(uParam0->f_137[1], 0, 1, 1);
			if (func_168(iParam1, 524288) && func_168(uParam0->f_128, 8192))
			{
				func_165(uParam0->f_137[1], 0, 1);
			}
		}
	}
	else if (func_45(uParam0->f_137[1]) && !func_298(uParam0->f_137[1], 0))
	{
		func_164(uParam0->f_137[1], 1, 1, 1);
		if (func_168(iParam1, 524288) && func_168(uParam0->f_128, 8192))
		{
			func_165(uParam0->f_137[1], 0, 1);
		}
	}
	if (((func_168(iParam1, 1048576) && !func_32(128)) && uParam0->f_134 != 12) && func_348(-2.057317E-33f, 1))
	{
		if (!func_45(uParam0->f_137[10]))
		{
			uParam0->f_137[10] = func_163("CAMP_FAST_TRAVEL", -1.068381E+13f, 2, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
			func_172(uParam0->f_137[10], 5.745081E+24f, 0, 1);
		}
	}
	else if (func_45(uParam0->f_137[10]))
	{
		func_46(&(uParam0->f_137[10]), 1, 1);
	}
	uParam0->f_151 = func_204(HUD::_UI_PROMPT_GET_GROUP_ACTIVE_PAGE(5.745081E+24f));
	iVar0 = 1;
	if (!func_32(128))
	{
		HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_129, 3f, 1, iVar0, 5.745081E+24f, uParam0->f_151, 0);
	}
}

int func_301(var uParam0)
{
	int iVar0;

	if (func_32(16) || func_168(uParam0->f_128, 32768))
	{
		func_56(&(uParam0->f_128), 32768);
		func_29(16);
		uParam0->f_154 = -1;
		return 2;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_45(uParam0->f_137[iVar0]))
		{
			if (iVar0 == 1)
			{
				if (func_298(uParam0->f_137[iVar0], 0))
				{
					if (func_450(uParam0->f_137[iVar0], 1))
					{
						return iVar0;
					}
					else if (func_451())
					{
						if (!func_241(&(uParam0->f_155)))
						{
							func_118(&(uParam0->f_155));
						}
						if (func_246(&(uParam0->f_155), 1056964608 /* Float: 0.5f */))
						{
							return iVar0;
						}
					}
					else if (func_241(&(uParam0->f_155)))
					{
						func_138(&(uParam0->f_155));
					}
				}
			}
			else if (iVar0 == 8 || iVar0 == 6)
			{
				if (func_167(uParam0->f_137[iVar0], 1))
				{
					return iVar0;
				}
				else if (iVar0 == 8)
				{
					if (func_452(uParam0->f_137[8], 1))
					{
						if (!func_241(&(uParam0->f_49.f_71)))
						{
							func_118(&(uParam0->f_49.f_71));
						}
						else if (func_116(&(uParam0->f_49.f_71), 1036831949 /* Float: 0.1f */))
						{
							func_290(uParam0->f_137[8], "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (func_241(&(uParam0->f_49.f_71)))
						{
							func_138(&(uParam0->f_49.f_71));
						}
						func_290(uParam0->f_137[8], "LEAVE", 1);
					}
				}
			}
			else if (func_450(uParam0->f_137[iVar0], 1))
			{
				if (iVar0 == 2)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
				}
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_302(var uParam0)
{
	if (func_453(uParam0) && !func_168(uParam0->f_128, 4))
	{
		return 1;
	}
	if (!func_212(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_134)
	{
		case 1:
			switch (uParam0->f_132)
			{
				case 8:
					func_215(-1.04656E-29f, 1056964608 /* Float: 0.5f */);
					break;
				case 7:
					func_215(1.227609E-37f, 1056964608 /* Float: 0.5f */);
					break;
				case 6:
					if (func_215(7.137042E-24f, 1f))
					{
						return 1;
					}
					break;
				default:
					func_454(uParam0);
					break;
			}
			break;
		case 6:
			func_455(uParam0);
			break;
	}
	return 0;
}

int func_303(var uParam0)
{
	if (func_453(uParam0) && !func_168(uParam0->f_128, 4))
	{
		return 1;
	}
	if (!func_212(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_134)
	{
		case 1:
			switch (uParam0->f_132)
			{
				case 8:
					func_215(-1.04656E-29f, 1056964608 /* Float: 0.5f */);
					break;
				case 7:
					func_215(1.227609E-37f, 1056964608 /* Float: 0.5f */);
					break;
				case 6:
					func_215(2.17582E+10f, 1f);
					return 1;
				default:
					func_454(uParam0);
					break;
			}
			break;
		case 6:
			func_456(uParam0);
			break;
	}
	return 0;
}

int func_304(var uParam0)
{
	if (func_453(uParam0) && !func_168(uParam0->f_128, 4))
	{
		return 1;
	}
	if (!func_212(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_134)
	{
		case 1:
			switch (uParam0->f_132)
			{
				case 8:
					func_215(-1.04656E-29f, 1056964608 /* Float: 0.5f */);
					break;
				case 7:
					func_215(1.227609E-37f, 1056964608 /* Float: 0.5f */);
					break;
				case 6:
					uParam0->f_133 = 1;
					if (func_457(Global_33, (*uParam0)[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_454(uParam0);
					break;
			}
			break;
	}
	return 0;
}

int func_305(var uParam0)
{
	if (func_453(uParam0) && !func_168(uParam0->f_128, 4))
	{
		return 1;
	}
	if (!func_212(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_134)
	{
		case 1:
			switch (uParam0->f_132)
			{
				case 8:
					func_215(-1.04656E-29f, 1056964608 /* Float: 0.5f */);
					break;
				case 7:
					func_215(1.227609E-37f, 1056964608 /* Float: 0.5f */);
					break;
				case 6:
					uParam0->f_133 = 0;
					if (func_457(Global_33, (*uParam0)[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_454(uParam0);
					break;
			}
			break;
	}
	return 0;
}

bool func_306()
{
	return (Global_1940239.f_2 || Global_1940239 == 1);
}

bool func_307()
{
	if (Global_1940239.f_39 == 3)
	{
		return true;
	}
	return false;
}

bool func_308(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_379(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_458(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_226(bParam0, bParam4, 0) };
	Var6 = { func_368(bParam0, Var1, Var1.f_4, bParam4) };
	return func_459(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_309(bool bParam0, bool bParam1)
{
	bool bVar0;
	float fVar1;

	bVar0 = func_312(bParam0, 9.522126E+26f);
	if (!func_105(bParam0, 0))
	{
		if (!bVar0)
		{
			return false;
		}
	}
	if (Global_1940239.f_8)
	{
		return false;
	}
	if (((bParam0 != 9605447f && bParam0 != -7.437896E-28f) && bParam0 != 1.795034E+34f) && bParam1)
	{
		fVar1 = func_460(bParam0);
		if (func_312(bParam0, 888.6404f))
		{
			fVar1 |= 64;
		}
		if (!func_461(1, fVar1))
		{
			return false;
		}
	}
	if (bParam0 == -7.729678E-14f || bParam0 == -6.721167E-35f)
	{
		if (func_462())
		{
			return false;
		}
	}
	if (!bVar0 && !func_348(bParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_310(bool bParam0)
{
	if (func_321(bParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_213(0), bParam0, func_463(0)))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			func_464(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_465() != -1)
			{
				func_218(func_466(func_465()), 10000, 0, 0, 0, 1);
				func_467(-1);
			}
			break;
	}
	return true;
}

bool func_311(bool bParam0)
{
	struct<16> Var0;

	if (bParam0 == 2.622451E-38f)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_319(Var0, 0);
		return true;
	}
	return false;
}

bool func_312(bool bParam0, int iParam1)
{
	if (!func_105(bParam0, 0))
	{
		return func_468(func_377(bParam0), iParam1);
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

void func_313(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_314(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_315(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_316(bool bParam0)
{
	if (func_40() == 0 && func_470(func_469(bParam0), 1, 0) != 0)
	{
		func_218("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_317(bool bParam0)
{
	if (func_400(bParam0, 104.1169f) == 9.522126E+26f)
	{
		func_471(0);
		func_473(func_472(bParam0));
		return true;
	}
	return false;
}

bool func_318(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_474(bParam0, bParam1, 0, 0, -1f))
	{
		Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (func_400(bParam0, -60352.49f))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 2971110f, 1, 0, -1f);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_475())
				{
					if (func_476(&Global_33))
					{
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 8.610964E-17f, 1, 0, -1f);
					}
					else
					{
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -2625342f, 1, 0, -1f);
					}
					return true;
				}
				else
				{
					func_218("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 7.47225E-29f, 1, 0, -1f);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 6.459623f, 1, 0, 0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -1.531881E+29f, 1, 0, -1f);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -3.403443E-12f, 1, 0, 0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 4.216691E+27f, 1, 0, -1f);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 4.942332E-34f, 1, 0, 0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_477(bParam0);
				}
				else
				{
					func_478(bParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_479(bParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_480(bParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_481(bParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_477(bParam0);
				}
				else
				{
					func_482(bParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_477(bParam0);
				}
				else
				{
					func_483(bParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_477(bParam0);
				}
				else
				{
					func_484(bParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_477(bParam0);
				}
				else
				{
					func_485(bParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -7.893468E-30f, 1, 0, -1f);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_486(bParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_487(bParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_488(bParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_477(bParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_489(bParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_490(bParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_319(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939421.f_161 >= 10)
	{
		return;
	}
	if (!func_491(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_492(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939421[iVar0 /*16*/].f_10)))
		{
			Global_1939421[iVar0 /*16*/] = { Param0 };
			Global_1939421.f_161++;
			func_493(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_320()
{
	return Global_1893611 & 2 != 0;
}

bool func_321(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (func_323(bParam0) == -4.32037E-21f)
	{
		return true;
	}
	return false;
}

int func_322(int iParam0)
{
	return func_494(iParam0);
}

int func_323(bool bParam0)
{
	vector3 vVar0;

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_324(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (func_323(bParam0) == -42.1084f)
	{
		if (func_228(bParam0) == -947.1324f)
		{
		}
	}
	return true;
}

int func_325()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(iVar2) || PED::IS_PED_SWIMMING(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_326(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iParam0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_327(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_495())
	{
		return 0;
	}
	if (!func_496(bParam0))
	{
		return 0;
	}
	if (func_497(bParam0))
	{
		iVar0 = 0;
		if ((func_228(bParam0) == 5.002459E-36f || func_312(bParam0, 3.611922E-33f)) && !func_312(bParam0, -1.186825E-08f))
		{
			if (bParam1)
			{
				func_498(&iVar0, 2);
			}
		}
		return func_499(bParam0, iVar0);
	}
	return 0;
}

void func_328(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 10;
	bVar1 = Global_1953279.f_1676.f_1[iVar0 /*3*/];
	if (bVar1 == bParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipHatFidget", true, 15);
		func_329(Global_33, -5.222721E-36f, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 1);
		func_330(bParam0, 0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipHatFidget", true, 15);
	func_329(Global_33, bParam0, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 1);
	if (func_425(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
		func_500();
		func_430(128);
		return;
	}
	if (bVar1 == Global_1953279.f_83[iVar0 /*12*/])
	{
		func_330(bParam0, 1, 0);
		return;
	}
	if (func_501(-7.463622E-36f, 0))
	{
		if (func_424(bVar1))
		{
			func_330(bVar1, 0, 0);
		}
		else
		{
			func_502(bVar1, 1, 1, 0, 0, 0);
		}
		func_330(bParam0, 1, 0);
		return;
	}
	if (func_424(bVar1))
	{
		func_330(bVar1, 0, 0);
		func_330(bParam0, 1, 0);
	}
	else if (func_424(bParam0))
	{
		if (bParam0 != func_503(0))
		{
			func_504(bParam0, bVar1, 0, 0, 0);
			func_330(bParam0, 0, 0);
			func_330(bVar1, 0, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
			func_430(128);
			func_330(bParam0, 1, 0);
		}
	}
}

int func_329(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<5> Var0;
	int iVar5;

	if (bParam3 == -1.003831E+26f)
	{
		Var0 = { func_226(bParam1, 1, 0) };
		bParam3 = func_422(Var0.f_4);
		if (bParam3 == -1.003831E+26f)
		{
			return 0;
		}
	}
	if (!func_505(bParam1, iParam2, func_266(bParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_506(1, bParam5, bParam9, 1, bParam11);
	if (bParam10)
	{
		if (func_507(bParam1, 0))
		{
			func_508(Global_1953279.f_1676.f_1[func_266(bParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_508(bParam1, 1, 0);
		}
	}
	switch (bParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && bParam1 != Global_1953279.f_83[func_266(bParam3, 1) /*12*/])
			{
				func_268(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_425(32768))
			{
				func_500();
				func_268(21, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_509(bParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_510(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_268(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_268(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_330(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_226(bParam0, bParam2, 0) };
	Var5 = { func_368(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_382(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_213(bParam2), &Var5, bParam1);
}

bool func_331(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<4> Var3;
	float fVar7;
	struct<4> Var8;

	bVar2 = false;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &fVar7))
	{
		return false;
	}
	Var8 = { func_368(5.207907E-07f, func_367(bParam1), 0.08386164f, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3352.f_26)
	{
		bVar1 = Global_1953279.f_3352[iVar0];
		if (func_228(bVar1) == iParam0 || (iParam0 == 5.002459E-36f && func_312(bVar1, 3.611922E-33f)))
		{
			Var3 = { func_368(bVar1, Var8, fVar7, bParam1) };
			if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(func_213(bParam1), &Var3))
			{
				bVar2 = bVar1;
				INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_213(bParam1), &Var3, false);
			}
		}
		iVar0++;
	}
	return bVar2;
}

void func_332(bool bParam0, int iParam1)
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

int func_333(int iParam0, bool bParam1)
{
	int iVar0;

	iParam0 = func_414(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_33) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_33)
		{
			if (bParam1 == -5.385955E+12f)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_511(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_334(int iParam0)
{
	int iVar0;

	iParam0 = func_414(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_245(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_512())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

bool func_335(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::IS_PED_FULLY_ON_MOUNT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

void func_336()
{
	int iVar0;

	if (func_513())
	{
		return;
	}
	if (func_514(8))
	{
		switch (Global_1051832.f_3649)
		{
			case 0:
				if (func_514(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
					func_515(16);
				}
				func_516(1);
				break;
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
				{
				}
				else
				{
					func_515(8);
					func_516(0);
				}
		}
		return;
	}
	if (func_517())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 4.553053E+26f, -7.591204E-34f, 1, 0, -1f);
		Global_1915643.f_22504.f_1 = 1;
		Global_1051832.f_43 = 0;
		func_518();
	}
	else
	{
		iVar0 = func_520(func_519());
		if (iVar0 != -1)
		{
			func_218(func_466(iVar0), 10000, 0, 0, 0, 1);
			Global_1051832.f_3648 = 0;
			Global_1051832.f_3649 = 0;
			func_521(0);
			func_467(-1);
		}
	}
}

bool func_337(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_522() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_523(16))
	{
		return false;
	}
	if (func_524())
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.406766E+36f))
		{
			return false;
		}
	}
	if (!func_525())
	{
		return false;
	}
	if (func_36(16))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_279(Global_1147168.f_8, 1))
	{
		return false;
	}
	if (func_340())
	{
		return false;
	}
	return true;
}

int func_338(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_526();
	}
	if (!func_527(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_528(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

bool func_339(int iParam0)
{
	return func_279(Global_1147168.f_8, iParam0);
}

bool func_340()
{
	int iVar0;

	iVar0 = func_529(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1141317[iVar0 /*27*/].f_18.f_1 != 0 && func_279(Global_1141317[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_341()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_121(0) };
	if (func_122(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_530(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_531(iVar2) == -4.537018E+10f)
				{
					func_218("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_218("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_218("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_218("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_342(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_532(Var0, func_110(0, 8), 0, 0);
}

void func_343(bool bParam0)
{
	if ((func_40() != -1 || !bParam0) || func_269(Global_33))
	{
		func_533();
		return;
	}
}

void func_344()
{
	int iVar0;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.73924E+12f))
	{
		iVar0 = PLAYER::PLAYER_ID();
		func_50(1, iVar0);
	}
}

bool func_345(bool bParam0)
{
	return func_323(bParam0) == 4.324946E+36f;
}

bool func_346(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_323(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_312(bParam0, 9.811189E+11f))
	{
		func_534(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

void func_347(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_105(bParam0, 0))
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
	if (!func_535() || bParam6)
	{
		func_536(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_537(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_537(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_538(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_323(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_312(bParam0, -5.215192E-33f)) && !func_312(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_228(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_539(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
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
	if (func_312(bParam0, 6.834376E-22f))
	{
		sVar17 = func_540(bParam0);
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
	if (func_312(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_541(bParam0))
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
	bVar18 = func_542(bParam0, 0);
	if ((func_543(iVar12) && func_312(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_544(bParam0);
	}
	else if (func_323(bParam0) == -42.1084f)
	{
		bVar19 = func_545(bParam0);
		if (func_105(bVar19, 0))
		{
			bVar18 = func_542(bVar19, 0);
		}
	}
	if (func_546(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_547(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_548(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_549(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_550(bParam0, &cVar22))
		{
			sVar21 = func_552(func_551(cVar22), 4.808429E-35f);
		}
	}
	func_553(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

bool func_348(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_323(bParam0);
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
			if (!func_554(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_555(bParam0))
			{
				return true;
			}
			break;
	}
	return func_350(bParam0, 0, 0, 0) >= iParam1;
}

struct<2> func_349(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_105(bParam0, 0))
	{
		return Var0;
	}
	if (func_312(bParam0, -8.087424E+27f))
	{
		if (func_40() == -1)
		{
			if (func_312(bParam0, -3.480943E+19f))
			{
				return func_556(4.052717E-32f);
			}
			else
			{
				return func_556(9918.3f);
			}
		}
	}
	else if (func_312(bParam0, -3.480943E+19f))
	{
		return func_556(-18395.16f);
	}
	if (func_312(bParam0, 4.091206E+36f))
	{
		return func_556(3.674458E+22f);
	}
	return Var2;
}

int func_350(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_323(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_346(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_557(bParam0, 0);
	}
	if (func_379(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_213(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_558(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_213(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_351(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	struct<4> Var34;
	int iVar39;
	int iVar40;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	Var0 = { func_559(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam2)
	{
		func_560(&Var0, func_369(0));
	}
	if (!func_561(&Var0, &iVar18, &iVar19, 0))
	{
		return false;
	}
	Var20.f_9 = -5.45926E-19f;
	iVar39 = 0;
	while (iVar39 < iVar19)
	{
		if (iVar40 >= iParam1)
		{
		}
		else
		{
			if (!func_562(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_459(bParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_563(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

void func_352(bool bParam0, bool bParam1, int iParam2)
{
	Global_1940239.f_5 = bParam0;
	Global_1940239.f_37 = iParam2;
	if (bParam1 || (func_564() && iParam2 == 0))
	{
		func_565(1);
		func_566(1);
	}
}

bool func_353(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	PAD::DISABLE_CONTROL_ACTION(0, -2.46932E+34f, false);
	func_189(&(uParam0->f_49), 32);
	iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
	if (func_32(64) && uParam0->f_125 < 9)
	{
		func_567(&(uParam0->f_49));
		func_568(&(uParam0->f_49));
		if ((MISC::GET_GAME_TIMER() - uParam0->f_154) > 1000 && func_569(&(uParam0->f_49)))
		{
			func_156();
			if (func_212(uParam0))
			{
				if (iVar0 == -2.10085E+18f || iVar0 == 2.647834E-09f)
				{
					func_215(-1.04656E-29f, 1056964608 /* Float: 0.5f */);
					return false;
				}
				else if (iVar0 == -2.532171E+17f || iVar0 == 1.060424E+09f)
				{
					func_215(1.227609E-37f, 1056964608 /* Float: 0.5f */);
					return false;
				}
			}
			else
			{
				return false;
			}
			if (Global_1913621.f_1577 != 0)
			{
				uParam0->f_49.f_62 = Global_1913621.f_1577;
			}
			uParam0->f_49.f_63 = -1.428267E+31f;
			uParam0->f_154 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
			if (iVar0 == -1.772429E+20f || iVar0 == 2.719026E+21f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -4.550719E+16f, true, 0, false, false);
				func_161(&(uParam0->f_128), 65536);
			}
			func_159(2);
			uParam0->f_165 = 3;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_135))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_135));
			}
			uParam0->f_135 = OBJECT::CREATE_OBJECT(func_570(uParam0->f_49.f_62), Global_34, false, false, false, false, true);
			if (PED::_GIVE_PED_SCENARIO_PROP(Global_33, uParam0->f_135, "p_meatChunks01x_PH_L_HAND", 0, 0, true))
			{
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_135, false);
			OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_135, 0f, true);
			func_93(&(uParam0->f_49));
			func_100(&(uParam0->f_49), 2);
			uParam0->f_137[3] = func_163("CRAFT_FASTER", 439.9228f, 2, 0, 0, 6, 7000, 10000, 25, 2f, 8.750548E+22f, 0);
			func_571(uParam0, 3, 0, 0, 0);
			func_164(uParam0->f_137[3], 0, 1, 1);
			func_172(uParam0->f_137[3], -3.423465f, 0, 1);
			func_220(&(uParam0->f_49), 1024);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_49.f_29);
			func_201(uParam0, 9);
		}
		return false;
	}
	if (uParam0->f_125 != 0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, -6.00134E-14f, true);
		PAD::ENABLE_CONTROL_ACTION(0, -1.422437E+11f, true);
	}
	if (uParam0->f_125 > 0)
	{
		HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-3.423465f, MISC::VAR_STRING(0, uParam0->f_49.f_62), 1, 0, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 4.635461E-23f))
	{
		uParam0->f_166++;
		if (uParam0->f_49.f_62 == -5.985058E-05f)
		{
			if (func_572())
			{
				func_573(1);
			}
			else if (func_574())
			{
				func_573(0);
			}
		}
		func_575(uParam0->f_49.f_62, BUILTIN::TO_FLOAT(uParam0->f_165), uParam0->f_166 >= uParam0->f_165);
	}
	if (uParam0->f_49.f_24 != -1 && func_576(&(uParam0->f_49)) != 12)
	{
		if (func_577(uParam0->f_49.f_24))
		{
		}
		else
		{
			uParam0->f_49.f_24 = -1;
		}
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_33, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_33, 0, 1);
	switch (uParam0->f_125)
	{
		case 0:
			if (func_212(uParam0))
			{
				if (iVar0 == -2.10085E+18f || iVar0 == 2.647834E-09f)
				{
					func_215(-1.04656E-29f, 1056964608 /* Float: 0.5f */);
					return false;
				}
				else if (iVar0 == -2.532171E+17f || iVar0 == 1.060424E+09f)
				{
					func_215(1.227609E-37f, 1056964608 /* Float: 0.5f */);
					return false;
				}
			}
			if (((func_212(uParam0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2.936837E-05f)) && func_578(iVar0)) || func_576(&(uParam0->f_49)) == 12)
			{
				func_579(&(uParam0->f_49), 1);
				if (func_576(&(uParam0->f_49)) == 11)
				{
					if (func_399(uParam0->f_49.f_62))
					{
						func_580(uParam0);
					}
					else if (func_99(&(uParam0->f_49), 8192))
					{
						uParam0->f_165 = 1;
						func_100(&(uParam0->f_49), 0);
						func_93(&(uParam0->f_49));
						func_46(&(uParam0->f_137[3]), 1, 1);
						iVar1 = 6000;
						iVar2 = 10000;
						if (func_168(uParam0->f_127, 16384))
						{
							iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 1061997773));
							iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 1061997773));
						}
						uParam0->f_137[3] = func_163("CRAFT_FASTER", 439.9228f, 2, 0, 0, 6, iVar1, iVar2, 25, 2f, 8.750548E+22f, 0);
						func_571(uParam0, 3, 0, 0, 0);
						func_164(uParam0->f_137[3], 0, 1, 1);
						func_172(uParam0->f_137[3], -3.423465f, 0, 1);
						func_581();
						uParam0->f_153 = MISC::GET_GAME_TIMER();
						func_201(uParam0, 1);
					}
					else
					{
						func_56(&(uParam0->f_128), 4);
					}
				}
				else if (func_576(&(uParam0->f_49)) == 0)
				{
					func_208(uParam0, 1);
					func_29(2);
				}
				else if (func_576(&(uParam0->f_49)) == 1 || func_160(Global_33, 0))
				{
					func_56(&(uParam0->f_128), 4);
					func_220(&(uParam0->f_49), 32);
					func_208(uParam0, 1);
					func_93(&(uParam0->f_49));
					func_29(2);
					uParam0->f_134 = 6;
					uParam0->f_153 = MISC::GET_GAME_TIMER();
					func_56(&(uParam0->f_128), 128);
					return true;
				}
			}
			break;
		case 1:
			if (func_212(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 250)
			{
				if (iVar0 == -1.772429E+20f || iVar0 == 2.719026E+21f)
				{
					if (func_215(1.652442E-15f, 6f))
					{
					}
				}
				else if (iVar0 == -2.545493E-13f || iVar0 == 4.648953E+35f)
				{
					func_215(2.31025E+16f, 6f);
					func_201(uParam0, 2);
				}
				else
				{
					func_215(-0.001550441f, 6f);
					func_201(uParam0, 2);
				}
				uParam0->f_153 = MISC::GET_GAME_TIMER();
			}
			break;
		case 2:
			if (!func_298(uParam0->f_137[3], 0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.571041f) || func_212(uParam0))
				{
					func_164(uParam0->f_137[3], 1, 1, 1);
				}
			}
			if (func_167(uParam0->f_137[3], 1))
			{
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				func_571(uParam0, 3, 1, 0, 0);
				func_46(&(uParam0->f_137[3]), 1, 1);
				if ((((func_323(uParam0->f_49.f_62) == 4.324946E+36f && !func_312(uParam0->f_49.f_62, -1.823469E-06f)) && !func_312(uParam0->f_49.f_62, 4.644778E+30f)) && !func_312(uParam0->f_49.f_62, -3.128114E+15f)) && !func_312(uParam0->f_49.f_62, 2.357825E-34f))
				{
					uParam0->f_137[5] = func_163("USE_ITEM", -3.109249E-31f, 1, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
					func_172(uParam0->f_137[5], -3.423465f, 0, 1);
					func_448(uParam0->f_137[5], 10, 1, 1);
					uParam0->f_137[4] = func_163("STOW_ITEM", -2.239985E+36f, 1, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
					func_448(uParam0->f_137[4], 10, 1, 1);
					func_172(uParam0->f_137[4], -3.423465f, 0, 1);
					if (func_400(uParam0->f_49.f_62, -1.29539E-20f) == -4.839888E+13f)
					{
						func_290(uParam0->f_137[5], "DRINK", 1);
						func_164(uParam0->f_137[4], 0, 1, 1);
					}
					if (!func_582(2))
					{
						func_164(uParam0->f_137[5], 0, 1, 1);
					}
					ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_49.f_62, 1);
				}
				if (!func_103(0) || func_104())
				{
					uParam0->f_49.f_24 = func_101(uParam0->f_49.f_62, uParam0->f_49.f_63, 1, uParam0->f_49.f_12);
					if (func_45(uParam0->f_137[5]))
					{
						func_164(uParam0->f_137[5], 0, 1, 1);
					}
				}
				else
				{
					func_584(uParam0->f_49.f_62, uParam0->f_49.f_63, 1, func_583(), uParam0->f_49.f_12);
					func_585(uParam0->f_49.f_62, 1, 1, 1, 0);
				}
				uParam0->f_166 = 0;
				func_118(&(uParam0->f_158));
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				func_56(&(uParam0->f_128), 256);
				func_201(uParam0, 3);
			}
			else if (func_298(uParam0->f_137[3], 0))
			{
				func_586(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_212(uParam0))
			{
				if (func_246(&(uParam0->f_158), 1036831949 /* Float: 0.1f */))
				{
					if (iVar0 == -5.377465E+35f || iVar0 == -3.372744E+38f)
					{
						uParam0->f_153 = MISC::GET_GAME_TIMER();
						func_215(-1.988373E+29f, 1f);
						func_118(&(uParam0->f_158));
					}
					else
					{
						uParam0->f_153 = MISC::GET_GAME_TIMER();
						func_215(3.623016E+18f, 6f);
					}
				}
			}
			func_587(uParam0);
			if (func_45(uParam0->f_137[5]))
			{
				if (func_298(uParam0->f_137[5], 0) && (func_450(uParam0->f_137[5], 1) || PAD::IS_CONTROL_PRESSED(0, -0.000294899f)))
				{
					func_216(uParam0->f_49.f_62, 1, 0, -5.149929E+33f);
					ATTRIBUTE::STOP_ITEM_PREVIEW();
					func_585(uParam0->f_49.f_62, 1, 1, 0, 0);
					func_46(&(uParam0->f_137[5]), 1, 1);
					func_46(&(uParam0->f_137[4]), 1, 1);
					func_588(uParam0, 1, 0);
					func_100(&(uParam0->f_49), 15);
					func_201(uParam0, 5);
					return false;
				}
			}
			if ((!func_45(uParam0->f_137[5]) || (func_298(uParam0->f_137[4], 0) && (func_589(uParam0->f_137[4], 1) || PAD::IS_CONTROL_PRESSED(0, -2.239985E+36f)))) || func_160(Global_33, 0))
			{
				func_46(&(uParam0->f_137[5]), 1, 1);
				func_46(&(uParam0->f_137[4]), 1, 1);
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				if (func_168(uParam0->f_128, 128))
				{
					func_56(&(uParam0->f_128), 128);
					func_94(&(uParam0->f_49), 0);
					AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
					func_100(&(uParam0->f_49), 1);
				}
				else
				{
					func_100(&(uParam0->f_49), 15);
				}
				func_588(uParam0, 1, 0);
				func_201(uParam0, 4);
				return false;
			}
			break;
		case 4:
			if (func_212(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_153) > 100 || func_241(&(uParam0->f_158))))
			{
				if (iVar0 == -5.377465E+35f || iVar0 == -3.372744E+38f)
				{
					func_215(-8.670189E-17f, 6f);
				}
				else if (iVar0 == 1.513492E-20f || iVar0 == 0.0004258779f)
				{
					func_215(-2.190052E-14f, 6f);
					func_215(46.32957f, 6f);
				}
				else
				{
					func_215(46.32957f, 6f);
				}
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				func_201(uParam0, 7);
			}
			break;
		case 5:
			func_590();
			if (func_212(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_153) > 100 || func_241(&(uParam0->f_158))))
			{
				if (iVar0 == -5.377465E+35f || iVar0 == -3.372744E+38f)
				{
					func_215(-2.586942E-29f, 6f);
				}
				else if (iVar0 == 1.513492E-20f || iVar0 == 0.0004258779f)
				{
					func_215(-4.307547E-16f, 6f);
					func_215(-7.363642E-26f, 6f);
				}
				else
				{
					func_215(-7.363642E-26f, 6f);
				}
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				func_201(uParam0, 6);
			}
			break;
		case 9:
			if (func_212(uParam0))
			{
				if (iVar0 == -2.545493E-13f || iVar0 == 4.648953E+35f)
				{
					func_215(4.95508E+09f, 6f);
					return false;
				}
				func_29(64);
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				if (iVar0 == -1.772429E+20f || iVar0 == 2.719026E+21f)
				{
					func_215(-3.187795E+38f, 6f);
					func_159(2);
					func_201(uParam0, 10);
				}
				else
				{
					func_215(1.631157E+37f, 6f);
					func_159(2);
					func_201(uParam0, 10);
				}
			}
			break;
		case 10:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -5.681182E+18f))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_135, true);
			}
			if (!func_298(uParam0->f_137[3], 0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.571041f))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("cook_meat_sizzle_loop", uParam0->f_135, "Player_Campfire_Sounds", false, 0, 0);
					AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_164(uParam0->f_137[3], 1, 1, 1);
					func_591(uParam0->f_137[3], 1);
				}
			}
			if (func_167(uParam0->f_137[3], 1))
			{
				uParam0->f_164 = -1;
				OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_135, 1f, true);
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				uParam0->f_137[4] = func_163("STOW_ITEM", -2.239985E+36f, 1, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
				uParam0->f_137[5] = func_163("EAT_MEAT", -0.000294899f, 1, 0, 0, 0, 570, 4000, 1, 2f, 8.750548E+22f, 0);
				func_448(uParam0->f_137[5], 10, 1, 1);
				func_448(uParam0->f_137[4], 10, 1, 1);
				func_172(uParam0->f_137[4], -3.423465f, 0, 1);
				func_172(uParam0->f_137[5], -3.423465f, 0, 1);
				if (func_592(uParam0->f_49.f_62, 1, 0))
				{
					func_164(uParam0->f_137[4], 0, 1, 1);
				}
				else if (!func_582(2))
				{
					func_164(uParam0->f_137[5], 0, 1, 1);
				}
				func_46(&(uParam0->f_137[3]), 1, 1);
				func_118(&(uParam0->f_158));
				func_29(2);
				uParam0->f_166 = 0;
				iVar3 = 1;
				if (!func_103(0) || func_104())
				{
					iVar3 = func_594(func_99(&(uParam0->f_49), 131072), func_593(3, uParam0->f_49.f_27), 1);
					uParam0->f_49.f_24 = func_101(uParam0->f_49.f_62, uParam0->f_49.f_63, iVar3, uParam0->f_49.f_12);
					func_164(uParam0->f_137[5], 0, 1, 1);
					func_164(uParam0->f_137[4], 0, 1, 1);
				}
				else
				{
					iVar3 = func_594(func_99(&(uParam0->f_49), 131072), func_593(3, uParam0->f_49.f_27), 1);
					iVar4 = 0;
					while (iVar4 < iVar3)
					{
						func_584(uParam0->f_49.f_62, uParam0->f_49.f_63, 1, func_583(), uParam0->f_49.f_12);
						iVar4++;
					}
					func_585(uParam0->f_49.f_62, iVar3, 1, 1, 0);
				}
				iVar5 = 0;
				while (iVar5 < iVar3)
				{
					STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_62);
					iVar5++;
				}
				ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_49.f_62, 1);
				AUDIO::_STOP_SOUND_WITH_NAME("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_56(&(uParam0->f_128), 256);
				func_201(uParam0, 11);
			}
			else
			{
				func_586(uParam0, iVar0);
				if (uParam0->f_164 == -1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.571041f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					fVar6 = func_595(uParam0->f_137[3], 1);
					fVar6 = func_596(fVar6, 0f, 1f);
					OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_135, (1f * fVar6), true);
				}
			}
			break;
		case 11:
			if (func_212(uParam0))
			{
				if (func_246(&(uParam0->f_158), 1036831949 /* Float: 0.1f */))
				{
					uParam0->f_153 = MISC::GET_GAME_TIMER();
					if (iVar0 == -4.705967E+28f || iVar0 == -4.024747E+26f)
					{
						func_215(-3.948184f, 2f);
					}
					else
					{
						func_215(-2.244397E-08f, 2f);
					}
				}
			}
			func_587(uParam0);
			func_597(uParam0);
			if (func_45(uParam0->f_137[5]))
			{
				if (func_298(uParam0->f_137[5], 0) && (func_450(uParam0->f_137[5], 1) || PAD::IS_CONTROL_PRESSED(0, -0.000294899f)))
				{
					ATTRIBUTE::STOP_ITEM_PREVIEW();
					func_46(&(uParam0->f_137[5]), 1, 1);
					func_46(&(uParam0->f_137[4]), 1, 1);
					func_46(&(uParam0->f_137[9]), 1, 1);
					func_588(uParam0, 1, 1);
					PAD::_SET_CONTROL_CONTEXT(5, 5.903656E-24f);
					func_216(uParam0->f_49.f_62, 1, 0, -5.149929E+33f);
					uParam0->f_153 = MISC::GET_GAME_TIMER();
					func_201(uParam0, 13);
					return false;
				}
			}
			if (func_45(uParam0->f_137[4]))
			{
				if (((func_298(uParam0->f_137[4], 0) && (func_450(uParam0->f_137[4], 1) || PAD::IS_CONTROL_PRESSED(0, -2.239985E+36f))) || func_160(Global_33, 0)) || TASK::IS_PED_SCENARIO_REACT_LOOKING(Global_33, true))
				{
					ATTRIBUTE::STOP_ITEM_PREVIEW();
					func_46(&(uParam0->f_137[4]), 1, 1);
					func_46(&(uParam0->f_137[5]), 1, 1);
					func_46(&(uParam0->f_137[9]), 1, 1);
					func_588(uParam0, 1, 0);
					PAD::_SET_CONTROL_CONTEXT(5, 5.903656E-24f);
					func_201(uParam0, 16);
					return false;
				}
			}
			break;
		case 16:
			PAD::_SET_CONTROL_CONTEXT(5, 5.903656E-24f);
			if (func_212(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_153) > 250 || func_241(&(uParam0->f_158))))
			{
				if (iVar0 == -4.705967E+28f || iVar0 == -4.024747E+26f)
				{
					func_215(5.477607E-20f, 1f);
				}
				else if (iVar0 == 3.071433E+12f || iVar0 == 2.417385E+38f)
				{
					func_215(1.430542E-28f, 1f);
				}
				else
				{
					func_215(-956323.3f, 1f);
				}
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				func_201(uParam0, 15);
			}
			break;
		case 13:
			PAD::_SET_CONTROL_CONTEXT(5, 5.903656E-24f);
			func_590();
			if (func_212(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_153) > 250 || func_241(&(uParam0->f_158))))
			{
				if (iVar0 == -4.705967E+28f || iVar0 == -4.024747E+26f)
				{
					func_215(1.792242E-13f, 1f);
				}
				else if (iVar0 == 3.071433E+12f || iVar0 == 2.417385E+38f)
				{
					func_215(3.498403E-17f, 1f);
				}
				else
				{
					func_215(-9.866794E+23f, 2f);
				}
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				func_201(uParam0, 14);
			}
			break;
		case 6:
		case 7:
		case 14:
		case 15:
			PAD::_SET_CONTROL_CONTEXT(5, 5.903656E-24f);
			if (uParam0->f_125 == 14 || uParam0->f_125 == 6)
			{
				func_590();
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1.306686E+30f) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2.936837E-05f))
			{
				func_598(uParam0, 1);
				if (uParam0->f_125 == 14 || uParam0->f_125 == 15)
				{
					if (func_32(256))
					{
						func_107(func_106(5.672458E+20f, -7.825801E+22f), 1);
					}
					func_201(uParam0, 12);
				}
				else
				{
					if (func_32(256))
					{
						func_107(func_106(-0.1137347f, -7.825801E+22f), 1);
					}
					func_201(uParam0, 8);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_153) > 750)
			{
				if (!PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33))
				{
					if (iVar0 == -1.772429E+20f || iVar0 == 2.719026E+21f)
					{
						func_201(uParam0, 12);
					}
					else if (iVar0 == -2.545493E-13f || iVar0 == 4.648953E+35f)
					{
						func_201(uParam0, 8);
					}
					else if (uParam0->f_125 == 14)
					{
						func_201(uParam0, 13);
					}
					else if (uParam0->f_125 == 15)
					{
						func_201(uParam0, 16);
					}
					else if (uParam0->f_125 == 7)
					{
						func_201(uParam0, 4);
					}
					else if (uParam0->f_125 == 6)
					{
						func_201(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 12:
			PAD::_SET_CONTROL_CONTEXT(5, 5.903656E-24f);
			if (func_298(uParam0->f_137[3], 0))
			{
				if (func_160(Global_33, 0))
				{
					func_164(uParam0->f_137[3], 0, 1, 1);
				}
			}
			if (func_45(uParam0->f_137[9]))
			{
				if (func_450(uParam0->f_137[9], 1))
				{
					if (func_99(&(uParam0->f_49), 131072))
					{
						func_220(&(uParam0->f_49), 131072);
						func_571(uParam0, 3, 0, 1, 0);
					}
					else
					{
						func_189(&(uParam0->f_49), 131072);
						func_571(uParam0, 3, 0, 1, 0);
					}
				}
			}
			if (func_450(uParam0->f_137[3], 1))
			{
				func_599(&(uParam0->f_137));
				if (uParam0->f_125 == 12)
				{
					func_580(uParam0);
				}
				else
				{
					func_600(uParam0);
				}
			}
			else if (func_450(uParam0->f_137[7], 1))
			{
				func_599(&(uParam0->f_137));
				func_201(uParam0, 0);
				func_100(&(uParam0->f_49), 15);
				func_56(&(uParam0->f_128), 128);
			}
			else if (func_167(uParam0->f_137[1], 1))
			{
				func_599(&(uParam0->f_137));
				func_201(uParam0, 0);
				func_56(&(uParam0->f_128), 128);
				func_94(&(uParam0->f_49), 0);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				func_100(&(uParam0->f_49), 1);
				func_201(uParam0, 0);
				return false;
			}
			else if (func_452(uParam0->f_137[1], 1))
			{
				if (!func_241(&(uParam0->f_49.f_71)))
				{
					func_118(&(uParam0->f_49.f_71));
				}
				else if (func_116(&(uParam0->f_49.f_71), 1036831949 /* Float: 0.1f */))
				{
					func_290(uParam0->f_137[1], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_241(&(uParam0->f_49.f_71)))
				{
					func_138(&(uParam0->f_49.f_71));
				}
				if (func_45(uParam0->f_137[1]))
				{
					func_290(uParam0->f_137[1], "CAMP_REC_BACK", 1);
				}
			}
			break;
	}
	return false;
}

bool func_354(bool bParam0)
{
	return func_228(bParam0) == 6.698816E+28f;
}

bool func_355(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_601(bParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1);
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
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_602(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_356(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_40() == 0)
	{
		return func_603(iParam0);
	}
	return iParam0 <= func_604();
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

int func_358(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_312(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_359(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_367(0) };
	Var0.f_4 = func_605(iParam1);
	Var5 = { func_368(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_213(0), &Var5, false);
	return iVar9;
}

bool func_360(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1);
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
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_606(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_361(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (func_312(bParam0, -1.051639E+07f))
	{
		return true;
	}
	return func_362(bParam0);
}

bool func_362(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (func_312(bParam0, -5.092244E+08f))
	{
		return true;
	}
	return false;
}

int func_363(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	if (!func_361(bParam0) && !func_362(bParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_400(bParam0, 5.339713E+22f);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_607(-5.45926E-19f, -5.45926E-19f, 0, 1.659074E-30f, 0, 0, -1, iVar13, 0) };
	if (func_608(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			bVar14 = func_609(iVar15, iVar1);
			if (func_105(bVar14, 0) && bParam0 != bVar14)
			{
				iVar16 = func_610(bVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_359(bVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_612(iVar16, func_611(bVar14), bParam0)));
					}
				}
			}
			iVar15++;
		}
		func_613(iVar1);
	}
	return iVar0;
}

int func_364(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_414(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_105(bParam1, 0))
	{
		return 0;
	}
	if (!func_614(iParam0))
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_615(iVar28))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), true, true, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == bParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_365(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_414(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_105(bParam1, 0))
	{
		return 0;
	}
	if (!func_614(iParam0))
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	bVar1 = bParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_GET_PELT_FROM_HORSE(iVar0, iVar3) != bVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_366(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (bParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

struct<4> func_367(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_213(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_368(2.982335E+09f, func_616(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_368(2.982335E+09f, func_616(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_368(2.982335E+09f, func_616(), -5.45926E-19f, bParam0);
}

struct<4> func_368(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_105(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_213(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_369(bool bParam0)
{
	int iVar0;

	iVar0 = func_213(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_368(8.681942E-06f, func_367(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_368(8.681942E-06f, func_367(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_368(8.681942E-06f, func_367(bParam0), -1.942248E+12f, 0);
}

int func_370(bool bParam0, bool bParam1)
{
	if (func_228(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_617();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_371(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_382(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_372(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_618(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_373(bool bParam0)
{
	int iVar0;

	iVar0 = func_213(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_368(3.507197E-29f, func_367(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_368(3.507197E-29f, func_367(bParam0), 12999093, 0);
}

bool func_374(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_228(bParam0);
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
			if (func_619(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_375(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_620(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_376(bool bParam0)
{
	if (!func_105(*bParam0, 0))
	{
		return 0;
	}
	if (!func_621(*bParam0))
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

bool func_377(bool bParam0)
{
	return bParam0;
}

bool func_378(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_379(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_378(func_377(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_380(bool bParam0)
{
	return func_323(bParam0) == -3.265313E+23f;
}

int func_381(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_105(bParam0, 0))
	{
		if (func_378(func_377(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_323(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_379(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, iParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_213(bParam3), bParam0);
}

int func_382(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_379(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_368(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_213(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_213(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_383(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -982726.7f) && func_622(bParam0, 8.497754E-37f))
	{
		bParam1 = 8.497754E-37f;
	}
	if (func_393(bParam0) || func_312(bParam0, 2.791187f))
	{
		return func_623(func_394(bParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_360(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_384(bool bParam0)
{
	switch (bParam0)
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

int func_385(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_624(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_626(func_625(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_627(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

bool func_386(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_628(iParam0))
		{
			return false;
		}
	}
	if (func_629(&(iParam0->f_6)))
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

int func_387(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_601(bParam0))
	{
		return 0;
	}
	bVar1 = func_168(iParam3, 2);
	bVar2 = func_630(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_630(bParam0, -982726.7f, bVar1);
	if (func_630(bParam0, 0.003804697f, bVar1))
	{
		iParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_631(bParam0, &fVar0) || func_632(bParam0, &fVar0)))
	{
		iParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_633())
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
	else if (func_634(15) && func_630(bParam0, 1.109321E-25f, bVar1))
	{
		iParam1 = 1.109321E-25f;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

int func_388(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_630(bParam0, bParam1, 0))
	{
		return 0;
	}
	if (func_168(iParam2, 2))
	{
		if (func_635(bParam0, bParam1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 0;
	}
	if (func_168(iParam2, 8))
	{
		return func_636(bParam0, bParam1);
	}
	return 1;
}

bool func_389(int* iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_355(iParam1->f_17, bParam3, &uVar0, &iVar31, 0, 1))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_637(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 2:
			return func_638(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 3:
			return func_639(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 4:
			return func_640(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 5:
			return func_641(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 6:
			return func_642(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 7:
			return func_643(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 8:
			return func_644(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 9:
			return func_645(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 10:
			return func_646(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 11:
			return func_647(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 12:
			return func_648(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 13:
			return func_649(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 14:
			return func_650(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 15:
			return func_651(iParam0, iParam1, iParam2, &uVar0, bParam4);
		default:
			break;
	}
	return false;
}

int func_390(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	bool bVar0;

	if (func_652(bParam1))
	{
		bVar0 = func_377(bParam1);
		return func_653(iParam0, bVar0, bParam7, bParam8, iParam9);
	}
	if (func_168(iParam9, 32))
	{
		if (!func_654(bParam1, Param2, iParam6))
		{
			return 0;
		}
	}
	if (!func_655(bParam1, bParam7, iParam9))
	{
		return 0;
	}
	if (func_168(iParam9, 4))
	{
		if (!func_656(iParam0, bParam1, Param2, iParam6, bParam7, bParam8, 0, bParam10))
		{
			return 0;
		}
	}
	if (func_168(iParam9, 8))
	{
		return func_657(iParam0, bParam1, bParam7, bParam8);
	}
	return 1;
}

struct<17> func_391(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_368(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_379(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_616() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_392(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_360(iParam1->f_8, iParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_658(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_659(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_660(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_661(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_662(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_663(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_664(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_665(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_666(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_667(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_668(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_669(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_670(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_671(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_672(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_393(bool bParam0)
{
	if (func_312(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_394(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_105(bParam0, 0))
	{
		return func_673(func_377(bParam0), bParam1);
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

bool func_395(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_62(36, iParam0);
}

bool func_396(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 184)
	{
		return true;
	}
	return false;
}

bool func_397(int iParam0)
{
	if (!func_396(iParam0))
	{
		return false;
	}
	return Global_1149417.f_11[iParam0 /*3*/].f_2;
}

int func_398(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_674(bParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

bool func_399(bool bParam0)
{
	if (func_323(bParam0) == 4.324946E+36f && INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, 2.350989E-38f))
	{
		return true;
	}
	return false;
}

int func_400(bool bParam0, int iParam1)
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

bool func_401()
{
	return (func_675(0) && func_675(1));
}

bool func_402()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

int func_403(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

int func_404(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_676(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_50[iParam0];
		case 1:
			return Global_1956862.f_1565.f_2.f_50[iParam0];
		default:
			break;
	}
	return 1;
}

bool func_405(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -6.540436E+35f;
		case 2:
			return -4.457409E-26f;
		case 3:
			return -3.5234E+17f;
		case 4:
			return 7.563374E+19f;
		case 5:
			return -7.734187E-14f;
		case 6:
			return -1.069422E-30f;
		case 7:
			return -1.520188E-37f;
		case 8:
			return -3.718011E+10f;
		case 9:
			return NaNf;
		case 10:
			return -2.229862E+25f;
		case 11:
			return -8.310997E-25f;
		case 12:
			return -3.184342E-29f;
		case 13:
			return 3.415157E-19f;
		case 14:
			return NaNf;
		case 15:
			return 6.999613E-32f;
		case 16:
			return 4.078473E-38f;
		case 17:
			return 1.579125E+34f;
		case 24:
			return 8.032001E-30f;
		case 25:
			return -1.747018E-22f;
		case 26:
			return -3.256739E+21f;
		case 27:
			return -2.499351E+23f;
		case 28:
			return 1.233249E-36f;
		case 35:
			return -1.231178E-15f;
		case 36:
			return 1.51159E+21f;
		case 37:
			return 0.6481152f;
		case 38:
			return 1.535398E+36f;
		case 39:
			return 43.34694f;
		case 40:
			return 5.975331E-24f;
		case 41:
			return 2.911409E+38f;
		case 42:
			return -3.584324E-31f;
		case 43:
			return -2.024568E+12f;
		case 55:
			return 1.962766E+36f;
		default:
			break;
	}
	return false;
}

int func_406()
{
	return Global_1051645.f_12;
}

char* func_407()
{
	return "unnamed";
}

int func_408(int iParam0)
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

int func_409(int iParam0)
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

bool func_410(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_677(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_678(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_411(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_412(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_413(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_414(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

bool func_415(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_276(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_416(vector3 vParam0)
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 8192);
}

int func_417(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < Global_1913327)
	{
		iVar0 = Global_1913327[iVar1];
		if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar0) || iVar0 == iParam0)
		{
			Global_1913327[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_418(var uParam0)
{
	return uParam0;
}

bool func_419(int iParam0)
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

bool func_420(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, -1.150952E-26f))
	{
		return true;
	}
	return false;
}

void func_421(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			if (PED::IS_PED_MALE(Global_33))
			{
				sVar0 = "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A";
			}
			else
			{
				sVar0 = "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A";
			}
			TASK::TASK_USE_SCENARIO_POINT(Global_33, Local_28[0], sVar0, 0, false, true, 0, false, -1f, false);
			break;
		case 1:
			if (PED::IS_PED_MALE(Global_33))
			{
				sVar0 = "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A";
			}
			else
			{
				sVar0 = "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A";
			}
			TASK::TASK_USE_SCENARIO_POINT(Global_33, Local_28[0], sVar0, 0, false, true, 0, false, -1f, false);
			break;
	}
}

float func_422(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953279.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_427(iVar0, 1);
		}
		iVar0++;
	}
	return -1.003831E+26f;
}

bool func_423(bool bParam0)
{
	switch (func_228(bParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case 119907797:
			return true;
		case 1388798186:
			return true;
		default:
			break;
	}
	if (func_312(bParam0, 3.611922E-33f))
	{
		return true;
	}
	return false;
}

bool func_424(bool bParam0)
{
	var uVar0;

	return func_679(bParam0, &uVar0);
}

bool func_425(int iParam0)
{
	return (Global_1953279 && iParam0) != 0;
}

float func_426(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -1.003831E+26f;
	}
	return func_422(iVar0);
}

int func_427(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.09963E-29f;
		case 1:
			return -0.0195536f;
		case 2:
			return 6.16353E-25f;
		case 3:
			return 5.030698E+25f;
		case 4:
			return 6.953832E+10f;
		case 5:
			return 1.528789E-12f;
		case 6:
			return -3.812509E+14f;
		case 7:
			return 3.512979E-25f;
		case 8:
			return -2.87713E-08f;
		case 9:
			return 7.026751E+12f;
		case 10:
			return 37.82234f;
		case 11:
			return -5.103779E+26f;
		case 12:
			return 2.057189E+24f;
		case 13:
			return 1.705946E+19f;
		case 14:
			return 1.46383E+28f;
		case 15:
			return 6.38604E+21f;
		case 16:
			return 4289245f;
		case 17:
			return -6402848f;
		case 18:
			return -4.710718E+22f;
		case 19:
			return -7.579719E-11f;
		case 20:
			return -7.4271E-05f;
		case 21:
			return 5.394459E-28f;
		case 22:
			return -6.543055E-16f;
		case 23:
			return 774.4996f;
		case 24:
			return -0.0004201953f;
		case 25:
			return 8.86537E-15f;
		case 26:
			return -2.476578E+31f;
		case 27:
			return 2.199934E-35f;
		case 28:
			return -2.801147E+12f;
		case 29:
			return -3.522703E+23f;
		case 30:
			return 9.443141E+25f;
		case 31:
			return -0.01859914f;
		case 32:
			return -1.666598E-29f;
		case 33:
			return -8.05196E-19f;
		case 34:
			return 1.128179E-10f;
		case 35:
			return 1.186104E+32f;
		case 36:
			return -1.164553E-31f;
		case 37:
			return 9.901452E+29f;
		case 38:
			return -2.586538E-15f;
		case 39:
			return -1.003831E+26f;
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

void func_428(int iParam0)
{
	func_680(iParam0, 8, 6);
}

void func_429(bool bParam0, int iParam1, int iParam2)
{
	Global_1953279.f_2686[func_266(bParam0, 1) /*2*/].f_1 = (Global_1953279.f_2686[func_266(bParam0, 1) /*2*/].f_1 || iParam1);
}

void func_430(int iParam0)
{
	Global_1953279 = (Global_1953279 || iParam0);
}

void func_431(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
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
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			if (Global_1953279.f_918 >= 25)
			{
				return;
			}
			if (func_681(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953279.f_918)
				{
					iVar1 = ((Global_1953279.f_923 + iVar0) % 25);
					if ((Global_1953279.f_736[iVar1 /*4*/] == Param0 && Global_1953279.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953279.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_682(Param0);
			Global_1953279.f_736[Global_1953279.f_924 /*4*/] = { Param0 };
			Global_1953279.f_918++;
			Global_1953279.f_924 = (Global_1953279.f_924 + 1 % 25);
			func_430(8);
			break;
		case 24:
		case 25:
			if (Global_1953279.f_919 >= 25)
			{
				return;
			}
			if (func_681(Param0))
			{
				return;
			}
			func_682(Param0);
			Global_1953279.f_635[Global_1953279.f_919 /*4*/] = { Param0 };
			Global_1953279.f_919++;
			func_430(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953279.f_920 >= 20)
			{
				return;
			}
			if (func_681(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953279.f_920)
				{
					iVar1 = ((Global_1953279.f_921 + iVar0) % 20);
					if ((Global_1953279.f_837[iVar1 /*4*/] == Param0 && Global_1953279.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953279.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			if (Param0 == 34)
			{
				Global_1953279.f_930 = 1;
				Global_1953279.f_930.f_1 = Param0.f_2;
				Global_1953279.f_930.f_2 = Param0.f_3;
			}
			func_682(Param0);
			Global_1953279.f_837[Global_1953279.f_922 /*4*/] = { Param0 };
			Global_1953279.f_920++;
			Global_1953279.f_922 = (Global_1953279.f_922 + 1 % 20);
			func_430(8);
			break;
			break;
	}
}

int func_432(int iParam0, int iParam1)
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

bool func_433(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::GET_MATCHING_ENTITIES(*iParam0, iVar0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
		if (ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return true;
		}
		iVar2++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return false;
}

int func_434(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HAWK_01"):
		case joaat("A_C_CORMORANT_01"):
		case joaat("A_C_SONGBIRD_01"):
		case joaat("A_C_ORIOLE_01"):
		case joaat("A_C_ROBIN_01"):
		case joaat("A_C_ROSEATESPOONBILL_01"):
		case joaat("A_C_SPARROW_01"):
		case joaat("A_C_OWL_01"):
		case joaat("A_C_RAVEN_01"):
		case joaat("A_C_CRANEWHOOPING_01"):
		case joaat("A_C_REDFOOTEDBOOBY_01"):
		case joaat("A_C_CEDARWAXWING_01"):
		case joaat("A_C_SEAGULL_01"):
		case joaat("A_C_CROW_01"):
		case joaat("A_C_PIGEON"):
		case joaat("A_C_LOON_01"):
		case joaat("A_C_WOODPECKER_01"):
		case joaat("A_C_WOODPECKER_02"):
		case joaat("A_C_EGRET_01"):
		case joaat("A_C_HERON_01"):
		case joaat("A_C_VULTURE_01"):
		case joaat("A_C_CALIFORNIACONDOR_01"):
		case joaat("A_C_EAGLE_01"):
		case joaat("A_C_BLUEJAY_01"):
		case joaat("A_C_CARDINAL_01"):
			return 5.658332E-33f;
		case joaat("A_C_ARMADILLO_01"):
		case joaat("A_C_SNAKEREDBOA_01"):
		case joaat("A_C_CHIPMUNK_01"):
		case joaat("A_C_POSSUM_01"):
		case joaat("A_C_SKUNK_01"):
		case joaat("A_C_BADGER_01"):
		case joaat("A_C_MUSKRAT_01"):
		case joaat("A_C_SNAKEWATER_01"):
		case joaat("A_C_FOX_01"):
		case joaat("A_C_COYOTE_01"):
		case joaat("A_C_SNAKE_01"):
		case joaat("A_C_BEAVER_01"):
		case joaat("A_C_SNAKEBLACKTAILRATTLE_01"):
		case joaat("A_C_RAT_01"):
		case joaat("A_C_RACCOON_01"):
		case joaat("A_C_SNAKEFERDELANCE_01"):
		case joaat("A_C_SQUIRREL_01"):
			return -1.242151E+22f;
		case joaat("A_C_IGUANA_01"):
		case joaat("A_C_TURTLESEA_01"):
		case joaat("A_C_FROGBULL_01"):
		case joaat("A_C_IGUANADESERT_01"):
		case joaat("A_C_TURTLESNAPPING_01"):
		case joaat("A_C_TOAD_01"):
			return 4.173198E-20f;
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			return -2.460183E-25f;
		case joaat("A_C_BIGHORNRAM_01"):
		case joaat("A_C_GOAT_01"):
		case joaat("A_C_SHEEP_01"):
			return -1.740185E+19f;
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHMUSKIE_01_LG"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
			return 2.340472E-07f;
		case joaat("A_C_CHICKEN_01"):
		case joaat("A_C_TURKEYWILD_01"):
		case joaat("A_C_TURKEY_01"):
		case joaat("A_C_TURKEY_02"):
		case joaat("A_C_GOOSECANADA_01"):
		case joaat("A_C_ROOSTER_01"):
		case joaat("A_C_PRAIRIECHICKEN_01"):
			return 4.822339E+35f;
		case joaat("A_C_COW"):
		case joaat("A_C_BULL_01"):
		case joaat("A_C_OX_01"):
		case joaat("A_C_BUFFALO_01"):
			return -5.265628E-17f;
		case joaat("A_C_ELK_01"):
		case joaat("A_C_BUCK_01"):
		case joaat("A_C_MOOSE_01"):
		case joaat("A_C_DEER_01"):
		case joaat("A_C_PRONGHORN_01"):
			return -2.578537E+33f;
		case joaat("A_C_PIG_01"):
		case joaat("A_C_JAVELINA_01"):
		case joaat("A_C_BOAR_01"):
			return 2.966644E+21f;
		case joaat("A_C_DUCK_01"):
		case joaat("A_C_RABBIT_01"):
		case joaat("A_C_PHEASANT_01"):
		case joaat("A_C_QUAIL_01"):
			return -2.192717E+26f;
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
			return -2.110552E-06f;
		case joaat("A_C_PARROT_01"):
		case joaat("A_C_PELICAN_01"):
		case joaat("A_C_CAROLINAPARAKEET_01"):
			return 7.82433E-20f;
		case joaat("A_C_ALLIGATOR_01"):
		case joaat("A_C_ALLIGATOR_02"):
		case joaat("A_C_ALLIGATOR_03"):
		case joaat("A_C_WOLF"):
		case joaat("A_C_BEAR_01"):
		case joaat("A_C_WOLF_MEDIUM"):
		case joaat("A_C_WOLF_SMALL"):
		case joaat("A_C_COUGAR_01"):
		case joaat("A_C_BEARBLACK_01"):
		case joaat("A_C_PANTHER_01"):
			return 3.74441E+19f;
		case joaat("A_C_CRAB_01"):
			return -1.007402E-07f;
	}
	return 0;
}

int func_435(int iParam0)
{
	int iVar0;

	iVar0 = func_683(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_INJURED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_436(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_684(&Var4, 2.95884E+10f);
	return func_685(iParam0, &Var4, &uVar0, iParam1, 0);
}

int func_437(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	if (!func_686(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_687(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_688(bParam0, bParam2);
	iVar2 = 0;
	if (func_323(bParam0) == -42.1084f)
	{
		if (!func_312(bParam0, 7.396633E-08f) && !func_312(bParam0, -6.685221E-33f))
		{
			bVar3 = true;
		}
	}
	if (func_538(bParam0, 8388608) && !func_155(27))
	{
		func_689(27);
	}
	func_690(bParam0);
	if (!bVar3)
	{
		if (func_312(bParam0, -7.272718E-19f))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_692(func_691(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_40() == -1)
				{
					func_693(bVar1);
				}
				if (func_103(0) && func_694(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_695(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_696(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_323(bParam0) == -3.265313E+23f)
		{
			if (!func_697(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_323(bParam0) == 6.919076E-28f && func_698(bParam0))
		{
			if (!func_699(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_312(bParam0, -1.355837E+35f))
		{
			func_107(func_700(-182.2023f), iVar0);
		}
		else if (bParam0 == 8.064365E+36f)
		{
			func_107(func_106(-1.250509E+13f, 6.875483E+36f), iVar0);
		}
		else if (func_312(bParam0, -3.187887E+34f) && !func_312(bParam0, 3.708451E-17f))
		{
			if (bParam0 != 4.568779E-32f)
			{
				func_299(536, 0);
			}
			if (func_312(bParam0, -2.826186E-34f) || func_312(bParam0, -5.200334E-11f))
			{
			}
		}
		else if (func_312(bParam0, -8.87647E+33f))
		{
			if (func_312(bParam0, -157.5682f))
			{
			}
		}
		else if (func_312(bParam0, -1.641295E-14f) && func_312(bParam0, 888.6404f))
		{
			func_299(519, 0);
		}
		else if (func_312(bParam0, 888.6404f) && func_312(bParam0, -1.086842E+20f))
		{
		}
		else if (func_312(bParam0, 4.619806E-19f))
		{
		}
		else if (func_312(bParam0, 9.243318E-18f))
		{
			if (func_701())
			{
				func_702(7.177414E+09f, 0, 1f, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_312(bParam0, 1.063826E-10f) && func_312(bParam0, 7.561756E-05f))
		{
			func_703(bParam0);
		}
		else if (func_312(bParam0, -1.56509E-23f))
		{
			func_704(bParam0);
		}
		else if (func_312(bParam0, -2.873199E-24f))
		{
			func_705(bParam0);
		}
		else if (func_312(bParam0, -0.08388482f) && func_312(bParam0, 7.561756E-05f))
		{
			func_706(bParam0);
		}
		else if (bParam0 == -2.680077E+18f)
		{
			Global_1940072.f_21 = 0;
		}
		else if (func_312(bParam0, 7.339242E+27f))
		{
			func_707();
		}
		else if (func_312(bParam0, -6.685221E-33f))
		{
		}
		else if (func_312(bParam0, 3.708451E-17f))
		{
		}
		else if (func_312(bParam0, -0.08388482f) && func_312(bParam0, -8.498268E-23f))
		{
		}
		else if (func_312(bParam0, -2.826186E-34f) || func_312(bParam0, -5.200334E-11f))
		{
		}
		else if (func_312(bParam0, -7.721469E-31f))
		{
			return 0;
		}
		else if (func_312(bParam0, 37699.67f))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_348(3.397524E-31f, 1))
					{
						func_437(3.397524E-31f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_348(6.760231E-15f, 1))
					{
						func_437(6.760231E-15f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_348(-13818.36f, 1))
					{
						func_437(-13818.36f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_348(4.642866E-20f, 1))
					{
						func_437(4.642866E-20f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_348(-21.88862f, 1))
					{
						func_437(-21.88862f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_348(5.120068E-22f, 1))
					{
						func_437(5.120068E-22f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_312(bParam0, -5.092244E+08f) && func_538(bParam0, 4))
		{
		}
		else if (func_312(bParam0, 9.811189E+11f))
		{
			func_708(bParam0, &iVar2);
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
				func_709(272, func_542(-1.263708E+38f, 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_709(270, func_542(1.344431E-31f, 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_709(271, func_542(-7.101952E+23f, 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_710(685, 1.579975E+31f, 1, 1);
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
					func_710(685, 42.3843f, 1, 1);
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
					func_710(685, 2.097458E+12f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_710(685, -6.137742E-06f, 1, 1);
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
					func_710(686, NaNf, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_710(686, -7.923627E-17f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_299(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_299(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_155(1))
				{
					func_299(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_299(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_40() == -1)
				{
					bParam0 = -7.729678E-14f;
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_299(534, 0);
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
		func_711(&bVar5);
		if (!func_696(bVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_103(0))
		{
			return 1;
		}
		if (func_323(bParam0) == -42.1084f)
		{
			func_712(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_103(0) && !func_104())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_437(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -4207915f, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_436(iVar2, 0);
		}
	}
	Var30 = { func_349(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_713(bParam0);
	if (fParam6 > 0f)
	{
		if (func_312(bParam0, -5.092244E+08f))
		{
			func_714(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 3787186f;
		func_347(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_438(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar1 = PED::_GET_PED_QUALITY(iParam0);
		switch (iVar1)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
			case -1:
			case 2:
				iVar0 = 2;
				break;
		}
	}
	return iVar0;
}

bool func_439(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_CRAB_01"):
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_SONGBIRD_01"):
		case joaat("A_C_CHIPMUNK_01"):
		case joaat("A_C_ORIOLE_01"):
		case joaat("A_C_ROBIN_01"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_SPARROW_01"):
		case joaat("A_C_FROGBULL_01"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_CEDARWAXWING_01"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_CROW_01"):
		case joaat("A_C_PIGEON"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_WOODPECKER_01"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_BAT_01"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_WOODPECKER_02"):
		case joaat("A_C_RAT_01"):
		case joaat("A_C_SQUIRREL_01"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
		case joaat("A_C_TOAD_01"):
		case joaat("A_C_BLUEJAY_01"):
		case joaat("A_C_CAROLINAPARAKEET_01"):
		case joaat("A_C_CARDINAL_01"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
		case joaat("A_C_QUAIL_01"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_440(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
	}
	if (func_312(bParam0, 9.077182E+07f))
	{
		return true;
	}
	return false;
}

float func_441(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_715(iVar0);
}

int func_442(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0) && TASK::_0x6DAC799857EF3F11(PLAYER::PLAYER_PED_ID(), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::_GET_CARRIABLE_FROM_ENTITY(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = func_715(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_443(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iParam1 = func_716(bParam0, iParam1, iParam2, 1, 1, -5.149929E+33f, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_717(bParam0, iParam1, bParam3, iParam4);
}

bool func_444(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

void func_445(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_446(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_718(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_719(iParam0))
	{
		return false;
	}
	if (func_720(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_721(iParam0, 1)) || func_722(32768))
	{
		if (!func_721(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_723())
	{
		return false;
	}
	return true;
}

void func_447(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

void func_448(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_91(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

void func_449(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_45(*uParam0))
	{
		iVar0 = func_91(*uParam0);
		if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
		{
			HUD::_UI_PROMPT_SET_TAG(Global_1951897[iVar0 /*23*/].f_3, sParam1);
		}
	}
}

bool func_450(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_91(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_451()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 3.013735E+08f);
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, -2.794596E+37f);
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (1063675494 * 1063675494))
	{
		return true;
	}
	return false;
}

bool func_452(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_91(iParam0);
	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1951897[iVar0 /*23*/].f_4);
	}
	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_453(var uParam0)
{
	int iVar0;

	uParam0->f_132 = func_200();
	iVar0 = func_185(uParam0);
	if ((((uParam0->f_133 == -1 || iVar0 == uParam0->f_133) && (uParam0->f_134 == 0 || func_724(uParam0->f_132, uParam0->f_134))) || (uParam0->f_133 == -1 && func_724(uParam0->f_132, uParam0->f_134))) && !(PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || PED::_0x2DC0E8DCBD3546E9(Global_33)))
	{
		uParam0->f_131 = iVar0;
		return true;
	}
	return false;
}

void func_454(var uParam0)
{
	int iVar0;

	iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
	if (iVar0 == -1.772429E+20f || iVar0 == 2.719026E+21f)
	{
		if (func_212(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 500)
		{
			func_215(1.652442E-15f, 2f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -2.545493E-13f || iVar0 == 4.648953E+35f)
	{
		if (func_212(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_153) > 500)
		{
			func_215(4.95508E+09f, 2f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_455(var uParam0)
{
	if (uParam0->f_132 == 6 && func_199(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_132)
		{
			case 1:
				func_215(-1.704024E+36f, 6f);
				break;
		}
	}
	return 0;
}

int func_456(var uParam0)
{
	if (uParam0->f_132 == 6 && func_199(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_132)
		{
			case 1:
				func_215(-1.704024E+36f, 6f);
				break;
			case 8:
				func_215(-1.04656E-29f, 1056964608 /* Float: 0.5f */);
				break;
			case 7:
				func_215(1.227609E-37f, 1056964608 /* Float: 0.5f */);
				break;
		}
	}
	return 0;
}

bool func_457(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)
{
	PED::_ADD_SCENARIO_TRANSITION(iParam0);
	return TASK::_0x79197F7D2BB5E73A(iParam0, uParam1, sParam2, sParam3, iParam4, 0);
}

int func_458(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_725(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_379(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_103(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_726(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_727(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_385(7.184882E+22f, &Var65, 1);
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
			Var82 = bParam3;
			Var82.f_7 = iParam2;
			func_234(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_213(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_459(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_725(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_375(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_103(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_40() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_385(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_234(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_213(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

float func_460(bool bParam0)
{
	if (func_312(bParam0, 1.763507E+18f))
	{
		return func_728(bParam0);
	}
	if (func_312(bParam0, 9.522126E+26f))
	{
		return func_729();
	}
	if (func_730(bParam0))
	{
		return func_731();
	}
	switch (func_228(bParam0))
	{
		case -77448735:
			if (func_732(bParam0))
			{
				return func_728(bParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_728(bParam0);
		case -1520388130:
		case 1802292908:
			return func_733();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_734();
		case -525676072:
			return func_734();
		case 1779021115:
			if (bParam0 == -230.1699f || bParam0 == 5.402792E-27f)
			{
				return func_735();
			}
			return func_736();
		case -1823706425:
			if (bParam0 == -0.06342195f)
			{
				return func_737();
			}
			else
			{
				return func_738();
			}
			break;
		case -854348463:
			return func_739();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_740();
		default:
			if (func_105(bParam0, 0))
			{
				if (func_312(bParam0, 4.644778E+30f))
				{
					return func_741();
				}
				else if (bParam0 == -6.721167E-35f || bParam0 == -7.729678E-14f)
				{
					return func_742();
				}
				else if (bParam0 == -2.692268E-16f)
				{
					return func_743();
				}
				else if (func_312(bParam0, 888.6404f))
				{
					return func_744();
				}
			}
			return func_745();
	}
	return func_745();
}

bool func_461(bool bParam0, float fParam1)
{
	int iVar0;

	if ((Global_1940186.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_33, true)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (func_40() == 0)
	{
		if (func_746(131072))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 1))
	{
		if (func_746(1024))
		{
			return false;
		}
	}
	if (Global_1940186.f_16)
	{
		return false;
	}
	if (!func_168(fParam1, 2) && func_746(32))
	{
		return false;
	}
	if (!func_168(fParam1, 4))
	{
		if (func_746(4096))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 8) && func_746(512))
	{
		return false;
	}
	if (!func_168(fParam1, 512) && !func_747(bParam0))
	{
		return false;
	}
	if (!func_168(fParam1, 262144) && !func_748(bParam0, func_168(fParam1, 524288)))
	{
		return false;
	}
	if (!func_168(fParam1, 64) && !func_749(bParam0, fParam1, 1))
	{
		return false;
	}
	if (!func_168(fParam1, 128))
	{
		if (func_124(Global_33, 6.915501E+28f) || PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam0)
			{
				func_218("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_168(fParam1, 16))
	{
		if (func_15(Global_33))
		{
			iVar0 = PED::GET_MOUNT(Global_33);
			if (!func_750(iVar0, 1))
			{
				if (bParam0)
				{
					func_218("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_168(fParam1, 256) && func_746(8192))
	{
		return false;
	}
	if (!func_168(fParam1, 1024) && func_746(65536))
	{
		if (bParam0)
		{
			func_218("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_168(fParam1, 2048))
	{
		if (func_746(32768))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 4096))
	{
		if (func_746(16384))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 8192))
	{
		if (!func_746(16))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 1.504633E-36f))
	{
		if (!func_746(2.524355E-29f))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 16384))
	{
		if (func_746(256))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 32768))
	{
		if (func_306())
		{
			if (bParam0)
			{
				func_218("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_168(fParam1, 131072))
	{
		if (!func_746(524288))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 65536))
	{
		if (!func_746(262144))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 1048576))
	{
		if (!func_746(2097152))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 2097152))
	{
		if (!func_746(8388608))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 4194304))
	{
		if (!func_746(2.350989E-38f))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 8388608))
	{
		if (func_746(9.403955E-38f))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 2.350989E-38f))
	{
		if (func_746(1.504633E-36f))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 9.403955E-38f))
	{
		if (func_746(3.85186E-34f))
		{
			return false;
		}
	}
	if (func_746(64))
	{
		return false;
	}
	else if (func_746(128))
	{
		return false;
	}
	else if (func_746(1048576))
	{
		return false;
	}
	else if (func_746(4))
	{
		return false;
	}
	if (!func_168(fParam1, 3.85186E-34f))
	{
		if (func_32(256))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 2.524355E-29f))
	{
		if (func_746(1.084202E-19f))
		{
			return false;
		}
	}
	if (!func_168(fParam1, 1.084202E-19f))
	{
		if (func_746(2f))
		{
			return false;
		}
	}
	return true;
}

bool func_462()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		iVar1 = iVar0;
		if (iVar1 != -1.854193E-06f && iVar1 != 0.2920443f)
		{
			return true;
		}
	}
	return false;
}

bool func_463(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_464(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_44.f_87);
}

int func_465()
{
	return Global_1915643.f_22504.f_5;
}

char* func_466(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	switch (iParam0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 46:
			Var0 = -1;
			Var0.f_1 = -1;
			Var0 = { func_121(0) };
			if (!func_122(Var0))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar2 = func_751(&Var0, 1);
			if (iVar2 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_752(iVar2, 2.098029E-22f, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_754(func_753(iVar2, 2.098029E-22f));
	}
	return "";
}

void func_467(int iParam0)
{
	Global_1915643.f_22504.f_5 = iParam0;
}

int func_468(bool bParam0, int iParam1)
{
	if (!func_378(bParam0, 2))
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

int func_469(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_755(iVar0, bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_470(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_756(iParam0))
	{
		return 1;
	}
	if (!func_757(iParam0))
	{
		return 5;
	}
	if (!bParam1 && Global_1220811.f_48[iParam0 /*21*/].f_17)
	{
		if (bParam2 || Global_1220811.f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_758(iParam0))
	{
		return 3;
	}
	if (func_759(iParam0) && !func_760())
	{
		return 4;
	}
	return 0;
}

void func_471(int iParam0)
{
	Global_1940239.f_11599 = iParam0;
}

int func_472(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(bParam0);
}

void func_473(int iParam0)
{
	Global_1940239.f_11605 = iParam0;
}

bool func_474(bool bParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	float fVar0;

	switch (func_400(bParam0, -60352.49f))
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
			}
			break;
	}
	return false;
}

bool func_475()
{
	return Global_1953279.f_1676.f_1[1 /*3*/].f_1 == -5.12226E+28f;
}

bool func_476(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_761(*uParam0, -8.569155E-24f, 0))
	{
		return true;
	}
	return false;
}

void func_477(bool bParam0)
{
	int iVar0;

	iVar0 = 2.349566E-24f;
	switch (func_762())
	{
		case 0:
			iVar0 = 2.349566E-24f;
			break;
		case 1:
			iVar0 = 3.444944E-32f;
			break;
		case 3:
			iVar0 = 1.498389E-37f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_312(bParam0, 1.763507E+18f))
		{
			func_764(func_763(bParam0), 1, 1);
		}
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_478(bool bParam0)
{
	int iVar0;

	iVar0 = 2.396577E-38f;
	switch (func_762())
	{
		case 0:
			iVar0 = 2.396577E-38f;
			break;
		case 1:
			iVar0 = -0.001023369f;
			break;
		case 3:
			iVar0 = 0.0003576809f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_479(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1.729466E+37f;
	switch (func_762())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -1.35445E-38f;
			}
			else
			{
				iVar0 = -1.729466E+37f;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -9.154559E-32f;
			}
			else
			{
				iVar0 = 1.305067E-37f;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -8.307639E+11f;
			}
			else
			{
				iVar0 = 1.573072E+08f;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_480(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 6.623678E+22f;
	switch (func_762())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -6.192357E+22f;
			}
			else
			{
				iVar0 = 6.623678E+22f;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1.86492E+29f;
			}
			else
			{
				iVar0 = -3.984581E+21f;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 4.015072E-22f;
			}
			else
			{
				iVar0 = 1.629336E-11f;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_481(bool bParam0)
{
	int iVar0;

	iVar0 = -6.874405E+25f;
	switch (func_762())
	{
		case 0:
			iVar0 = -6.874405E+25f;
			break;
		case 1:
			iVar0 = -292.5124f;
			break;
		case 3:
			iVar0 = -2.661569E-13f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_482(bool bParam0)
{
	int iVar0;

	iVar0 = 2.144114E+37f;
	switch (func_762())
	{
		case 0:
			iVar0 = 2.144114E+37f;
			break;
		case 3:
			iVar0 = -2.831429E+22f;
			break;
		case 1:
			iVar0 = -3.850704E-19f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_483(bool bParam0)
{
	int iVar0;

	iVar0 = 1.891427E+32f;
	switch (func_762())
	{
		case 0:
			iVar0 = 1.891427E+32f;
			break;
		case 3:
			iVar0 = -2.305351E+15f;
			break;
		case 1:
			iVar0 = 2.088212E+27f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_484(bool bParam0)
{
	int iVar0;

	iVar0 = -8.840173E-17f;
	switch (func_762())
	{
		case 0:
			iVar0 = -8.840173E-17f;
			break;
		case 3:
			iVar0 = -7.761358E+24f;
			break;
		case 1:
			iVar0 = -4.311742E+27f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_485(bool bParam0)
{
	int iVar0;

	iVar0 = -1.912532f;
	switch (func_762())
	{
		case 0:
			iVar0 = -1.912532f;
			break;
		case 3:
			iVar0 = 7.404981E-25f;
			break;
		case 1:
			iVar0 = -3.775802E-28f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_486(bool bParam0)
{
	int iVar0;

	iVar0 = 2.636345f;
	switch (func_762())
	{
		case 0:
			iVar0 = 2.636345f;
			break;
		case 3:
			iVar0 = 1.221628E+27f;
			break;
		case 1:
			iVar0 = 4.340591E+29f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_487(bool bParam0)
{
	int iVar0;

	iVar0 = 1.594798E+16f;
	switch (func_762())
	{
		case 0:
			iVar0 = 1.594798E+16f;
			break;
		case 1:
			iVar0 = 8.713405E+20f;
			break;
		case 3:
			iVar0 = -0.000706583f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_488(bool bParam0)
{
	int iVar0;

	iVar0 = -4.546778E-14f;
	switch (func_762())
	{
		case 0:
			iVar0 = -4.546778E-14f;
			break;
		case 1:
			iVar0 = 1.436018E+28f;
			break;
		case 3:
			iVar0 = 2.63127E-07f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_765(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_489(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1.577477E+31f;
	switch (func_762())
	{
		case 0:
			iVar0 = 1.577477E+31f;
			break;
		case 1:
			iVar0 = 1.720685E+21f;
			break;
		case 3:
			iVar0 = 146.0056f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_765(Global_33, bParam0, iVar0, 1, 0) && bParam1)
		{
			func_766(bParam0);
			func_216(bParam0, 1, 0, 9.275179E-19f);
		}
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_490(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -10.1963f;
	switch (func_762())
	{
		case 0:
			iVar0 = -10.1963f;
			break;
		case 1:
			iVar0 = 4.147935E+24f;
			break;
		case 3:
			iVar0 = -1.113841E-24f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_765(Global_33, bParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_766(bParam0);
			func_216(bParam0, 1, 0, 9.275179E-19f);
		}
	}
	else
	{
		func_766(bParam0);
		func_216(bParam0, 1, 0, 9.275179E-19f);
	}
}

bool func_491(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_492(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939421.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939421[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_493(int iParam0)
{
	if (func_491(iParam0, 1))
	{
		func_767(1);
	}
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

bool func_495()
{
	return Global_1953279.f_3502;
}

bool func_496(bool bParam0)
{
	if (func_768())
	{
		return false;
	}
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (!func_348(bParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_497(bool bParam0)
{
	return func_769(bParam0);
}

void func_498(int iParam0, int iParam1)
{
	func_770(iParam0, iParam1);
}

int func_499(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_771(bParam0);
	if (func_228(bParam0) == -9.847085E+19f || func_312(bParam0, -1.186825E-08f))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_772(&bVar2))
		{
			if (bVar1)
			{
				iVar0 = func_773();
			}
			else
			{
				iVar0 = func_774();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_775();
		}
		else
		{
			iVar0 = func_776();
		}
	}
	else if (func_264(&bVar2))
	{
		if (func_312(bVar2, -1.186825E-08f) || func_228(bVar2) == -9.847085E+19f)
		{
			iVar0 = func_773();
		}
		else
		{
			iVar0 = func_774();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_775();
	}
	else
	{
		iVar0 = func_776();
	}
	if (iVar0 != 0)
	{
		Global_1953279.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, bParam0, iVar0, 1, iParam1, -1f);
		return 1;
	}
	return 0;
}

void func_500()
{
	Global_1953279.f_3485 = 0;
	Global_1953279.f_3485.f_1 = 0;
	Global_1953279.f_3485.f_8 = 0;
	Global_1953279.f_3485.f_2 = 0;
	Global_1953279.f_3485.f_3[0] = 0;
	Global_1953279.f_3485.f_3[1] = 0;
	Global_1953279.f_3485.f_3[2] = 0;
	Global_1953279.f_3485.f_3[3] = 0;
	Global_1953279.f_3485.f_9 = 0;
	Global_1953279.f_3485.f_10 = 0;
	Global_1953279.f_3485.f_11 = 0;
	if (Global_1953279.f_3485.f_12)
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(Global_1953279.f_3485.f_13);
	}
	Global_1953279.f_3485.f_12 = 0;
	func_777(32768);
	func_680(37.82234f, 8, 6);
}

bool func_501(int iParam0, bool bParam1)
{
	return func_778(iParam0, 0) < func_779(iParam0, bParam1);
}

void func_502(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_228(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_312(bParam0, 4.31212E+18f))
			{
				return;
			}
			bVar1 = func_780(bParam0, &(Global_1953279.f_3352.f_28), Global_1953279.f_3352.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_780(bParam0, &(Global_1953279.f_3352.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_780(bParam0, &(Global_1953279.f_3352.f_27), Global_1953279.f_3352.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_780(bParam0, &(Global_1953279.f_3352.f_29), Global_1953279.f_3352.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_780(bParam0, &(Global_1953279.f_3352.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_780(bParam0, &(Global_1953279.f_3352.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_780(bParam0, &(Global_1953279.f_3352.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_312(bParam0, 3.611922E-33f))
			{
				bVar1 = func_780(bParam0, &(Global_1953279.f_3352.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_781();
	if (func_782(iVar0) || (iVar0 != -947.1324f && func_312(bParam0, -7.339854E+32f)))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_213(bParam5), bParam0, 0);
	}
	func_330(bParam0, bParam3, bParam5);
	if (bParam4)
	{
		func_783(1, bParam0);
	}
	if (bParam2)
	{
		func_784(0, 0);
	}
}

float func_503(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_785();
	}
	if (iParam0 == 2654.774f)
	{
		return -2.688565E+11f;
	}
	return -5.418502E-17f;
}

void func_504(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_786(bParam0, bParam1))
	{
		func_787(bParam0, bParam1, 1, bParam2, bParam3, bParam4);
		return;
	}
}

bool func_505(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_788();
	if (iParam2 == 39)
	{
		Var0 = { func_226(bParam0, 1, 0) };
		iParam2 = func_266(func_422(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_425(32768) && iParam2 == 10)
	{
		func_428(37.82234f);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_507(bParam0, 1))
	{
		func_789(&(Global_1953279.f_1557), &bParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_790(iParam2);
	}
	func_791(iParam2, iVar5);
	func_792(&(Global_1953279.f_1557.f_1[iParam2 /*3*/]), 4, 6);
	func_792(&(Global_1953279.f_1676.f_1[iParam2 /*3*/]), 4, 6);
	func_793(&(Global_1953279.f_1557), bParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1953279.f_1557.f_1[iParam2 /*3*/].f_1;
	}
	Global_1953279.f_1557.f_1[iParam2 /*3*/] = bParam0;
	Global_1953279.f_1557.f_1[iParam2 /*3*/].f_1 = func_794(bParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1953279.f_2938)
		{
			if (Global_1953279.f_2938.f_2[iVar6 /*2*/] >= 0 && Global_1953279.f_2938.f_2[iVar6 /*2*/] < 39)
			{
				Global_1953279.f_2765[Global_1953279.f_2938.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1953279.f_2765[Global_1953279.f_2938.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_680(func_427(Global_1953279.f_2938.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_506(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	func_795(&(Global_1953279.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
}

bool func_507(bool bParam0, bool bParam1)
{
	if (!func_105(bParam0, 0))
	{
	}
	if (!bParam1 && (bParam0 == -2.296707E-23f || bParam0 == -2.419822E+17f))
	{
		return false;
	}
	if (func_312(bParam0, 2.063512E-29f))
	{
		return true;
	}
	return false;
}

bool func_508(bool bParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	bool bVar9;

	Var4 = { func_226(bParam0, bParam2, 0) };
	if (func_507(bParam0, 0))
	{
		bVar9 = func_796(Var4, Var4.f_4, bParam2, -1);
		if (bVar9 != 0)
		{
			Var4 = { func_226(bVar9, bParam2, 0) };
			Var0 = { func_368(bVar9, Var4, Var4.f_4, bParam2) };
			return func_797(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_368(bParam0, Var4, Var4.f_4, bParam2) };
	return func_797(Var0, iParam1, bParam2);
}

int func_509(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_266(bParam0, 1);
	switch (bParam0)
	{
		case 1108822547:
			if (Global_1953279.f_1676.f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/] || Global_1953279.f_1557.f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_510(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_511(int iParam0)
{
	int iVar0;

	iParam0 = func_414(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_245(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (func_798(iVar0))
	{
		return true;
	}
	return false;
}

int func_512()
{
	return Global_38.f_289.f_3222;
}

bool func_513()
{
	return Global_1915643.f_22504.f_1;
}

bool func_514(int iParam0)
{
	return (Global_1051832.f_3648 && iParam0) != 0;
}

void func_515(int iParam0)
{
	Global_1051832.f_3648 = (Global_1051832.f_3648 - (Global_1051832.f_3648 && iParam0));
}

void func_516(int iParam0)
{
	Global_1051832.f_3649 = iParam0;
}

bool func_517()
{
	return Global_1915643.f_22504;
}

void func_518()
{
	PAD::_SET_CONTROL_CONTEXT(4, 5.369191E-15f);
}

bool func_519()
{
	return func_514(4);
}

int func_520(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_799())
	{
		return 3;
	}
	if ((SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(7.215231E-38f) > 0 && Global_1051832.f_3650 == 0) && !bParam0)
	{
		return 45;
	}
	if (Global_1915643.f_20638)
	{
		return 10;
	}
	if (Global_1051832.f_3738 != 0)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 12;
	}
	if ((func_800(30f, 0) || PED::IS_PED_HOGTIED(Global_33)) || PED::IS_PED_HOGTYING(Global_33))
	{
		return 13;
	}
	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33) || PED::IS_PED_IN_ANY_TRAIN(Global_33))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			switch (iVar2)
			{
				case joaat("BREACH_CANNON"):
				case joaat("GATLING_GUN"):
				case joaat("GATLINGMAXIM02"):
				case joaat("HOTCHKISS_CANNON"):
					return 14;
			}
		}
		return 11;
	}
	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33) && !Global_1915643.f_22504.f_1)
	{
		return 16;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		return 17;
	}
	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
	{
		return 18;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		iVar3 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		if ((iVar3 != -1.854193E-06f && iVar3 != -0.0004018912f) && iVar3 != -6.356208E+22f)
		{
			return 19;
		}
	}
	if (func_801(255))
	{
		return 3;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 44;
	}
	if ((Global_1108965.f_775.f_28 != -1 && Global_1108965.f_775.f_28 != 6) && Global_1108965.f_775.f_28 != 8)
	{
		if (func_802(Global_1108965.f_775.f_28))
		{
			return 36;
		}
		else
		{
			return 37;
		}
	}
	if (PED::_GET_PLAYER_PED_WATER_DEPTH(Global_33) >= 1f)
	{
		return 22;
	}
	if (Global_1572887.f_72.f_40 >= 11 && Global_1572887.f_72.f_40 < 15)
	{
		return 42;
	}
	if (((PED::IS_PED_FALLING(Global_33) || PED::IS_PED_CLIMBING(Global_33)) || PED::_IS_PED_SLIDING(Global_33)) || PED::IS_PED_SWIMMING(Global_33))
	{
		return 15;
	}
	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
	{
		return 21;
	}
	if (func_402())
	{
		return 43;
	}
	return -1;
}

void func_521(int iParam0)
{
	int iVar0;

	if (!func_519())
	{
		func_803(1);
	}
	Global_1051832.f_3650 = iParam0;
	iVar0 = func_520(1);
	if (iVar0 != -1)
	{
		func_467(iVar0);
		func_804(0);
	}
	else
	{
		func_804(1);
	}
}

bool func_522()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_3;
}

bool func_523(int iParam0)
{
	return func_279(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_524()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_525()
{
	return !func_523(2);
}

void func_526()
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
}

bool func_527(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_806(bParam2, func_805(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_528(int iParam0)
{
	Global_1896762.f_365 = iParam0;
}

int func_529(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

int func_530(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1205923.f_1[iVar1 /*26*/].f_1 != -1 && func_807(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (Global_1206482.f_78[iVar1 /*20*/] >= 2)
					{
						return Global_1205923.f_1[iVar1 /*26*/].f_1;
					}
				}
				else if (Global_1206482.f_78[iVar1 /*20*/] >= 5)
				{
					return Global_1205923.f_1[iVar1 /*26*/].f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_531(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1206482.f_1[iParam0 /*4*/];
}

void func_532(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_808(&(Global_1072759.f_22981), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_533()
{
	Global_1913621.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913621.f_1581 = 1;
}

void func_534(bool bParam0, int iParam1, var uParam2)
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

bool func_535()
{
	return !Global_1913431;
}

void func_536(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913431.f_3)
	{
		if ((((Global_1913431.f_4[iVar0 /*6*/] == bParam0 && Global_1913431.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913431.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913431.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913431.f_4[iVar0 /*6*/].f_5 == bParam5)
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
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_3 = bParam3;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_4 = bParam4;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_5 = bParam5;
		Global_1913431.f_3++;
	}
}

char* func_537(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_538(bool bParam0, int iParam1)
{
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_539(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*sParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_540(bool bParam0)
{
	if (func_312(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_312(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_312(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_312(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_312(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_312(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_312(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_312(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_312(bParam0, -1.58908E+26f) || func_312(bParam0, -3.503386E-34f)) || func_312(bParam0, -1.887503E+19f)) || func_312(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_541(bool bParam0)
{
	if (func_312(bParam0, -1.15596E+32f))
	{
		if (((func_809(bParam0, -9.979451E-09f) || func_809(bParam0, 2.758862E+11f)) || func_809(bParam0, 1.868312E+36f)) || func_809(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_312(bParam0, -6.231785E+11f) || func_312(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

bool func_542(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_810(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

bool func_543(int iParam0)
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

int func_544(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_105(bParam0, 0))
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

bool func_545(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_811(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_607(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_608(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_812(bVar14))
			{
				func_613(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_613(iVar11);
	}
	return false;
}

bool func_546(bool bParam0, int iParam1)
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

bool func_547(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_105(bParam0, 0) && !func_378(func_377(bParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

char* func_548(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_549(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_813(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_550(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_814(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_815(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_816(bParam0), 128);
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

char* func_551(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_552(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_548(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_553(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_817(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_554(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_346(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_818("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_562(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_819(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_563(iVar1);
				return true;
			}
			iVar3++;
		}
		func_563(iVar1);
	}
	return false;
}

bool func_555(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_228(bParam0);
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
	iVar1 = func_820(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_821(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_822(bParam0);
	iVar2 = func_821(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

struct<2> func_556(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

int func_557(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_559(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_560(&Var0, func_369(0));
	}
	if (!func_561(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_563(iVar18);
	return iVar19;
}

struct<4> func_558(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_226(bParam0, bParam1, 0) };
	return func_368(bParam0, Var0, Var0.f_4, bParam1);
}

struct<18> func_559(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_560(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_561(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_213(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_562(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_563(int iParam0)
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

bool func_564()
{
	if ((Global_1940239.f_11596 != (Global_1940239.f_41.f_203 - 1) || func_824(func_823(0), Global_1940239.f_11588, 0, 1, 1) > 0) || Global_1940239.f_11596 == 15)
	{
		return true;
	}
	func_825(0);
	if (Global_1940239.f_7)
	{
		return true;
	}
	return false;
}

void func_565(int iParam0)
{
	Global_1940239.f_11 = iParam0;
}

void func_566(int iParam0)
{
	Global_1940239.f_10 = iParam0;
}

void func_567(var uParam0)
{
	StringCopy(&(uParam0->f_21), "CAMP", 8);
}

void func_568(var uParam0)
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_21)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_21));
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (func_99(uParam0, 2))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	STREAMING::REQUEST_MODEL(7.069783E-10f, false);
	STREAMING::REQUEST_MODEL(0.0006533724f, false);
	STREAMING::REQUEST_MODEL(9.171683E+16f, false);
	STREAMING::REQUEST_MODEL(-2.313736E+30f, false);
	STREAMING::REQUEST_MODEL(-3.730768E+35f, false);
	STREAMING::REQUEST_MODEL(-2.056204E+15f, false);
	STREAMING::REQUEST_MODEL(-179980.5f, false);
	STREAMING::REQUEST_MODEL(1.275068E+19f, false);
	STREAMING::REQUEST_MODEL(-4.130397E-19f, false);
	STREAMING::REQUEST_MODEL(-1.180585E+22f, false);
	STREAMING::REQUEST_MODEL(-1.309767E+08f, false);
	STREAMING::REQUEST_MODEL(-3.582282E+25f, false);
	STREAMING::REQUEST_MODEL(4.518292E+32f, false);
	STREAMING::REQUEST_MODEL(1.44377E-24f, false);
	STREAMING::REQUEST_MODEL(-2.72553E-30f, false);
	func_826(uParam0);
	if (func_99(uParam0, 4))
	{
		STREAMING::REQUEST_MODEL(-7.355436E+31f, false);
		STREAMING::REQUEST_MODEL(-2.030079E-35f, false);
		STREAMING::REQUEST_MODEL(-0.0006187792f, false);
		STREAMING::REQUEST_MODEL(6.030809E-31f, false);
		STREAMING::REQUEST_MODEL(1.187723E+08f, false);
	}
}

bool func_569(var uParam0)
{
	if (func_827(&(uParam0->f_21)))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_21)))
		{
			return false;
		}
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
	{
		return false;
	}
	if (func_99(uParam0, 2))
	{
		return true;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
	{
		return false;
	}
	if (!func_828(uParam0, &(uParam0->f_49)))
	{
		return false;
	}
	if (!func_828(uParam0, &(uParam0->f_50)))
	{
		return false;
	}
	if (!func_828(uParam0, &(uParam0->f_51)))
	{
		return false;
	}
	if (!func_828(uParam0, &(uParam0->f_52)))
	{
		return false;
	}
	if (!func_828(uParam0, &(uParam0->f_53)))
	{
		return false;
	}
	if (!func_828(uParam0, &(uParam0->f_54)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(7.069783E-10f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(0.0006533724f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(9.171683E+16f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-2.313736E+30f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-2.056204E+15f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-179980.5f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1.275068E+19f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-3.730768E+35f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-3.582282E+25f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-1.180585E+22f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-1.309767E+08f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(4.518292E+32f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1.44377E-24f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-2.72553E-30f))
	{
		return false;
	}
	if (func_99(uParam0, 4))
	{
		if (!STREAMING::HAS_MODEL_LOADED(-7.355436E+31f))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(-2.030079E-35f))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(-0.0006187792f))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(6.030809E-31f))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(1.187723E+08f))
		{
			return false;
		}
	}
	return true;
}

float func_570(int iParam0)
{
	int iVar0;

	iVar0 = func_829(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 1.187723E+08f;
}

void func_571(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		uParam0->f_49.f_23++;
	}
	func_830(uParam0, 1, bParam4);
	if (func_399(uParam0->f_49.f_62))
	{
		if ((func_831() && func_99(&(uParam0->f_49), 131072)) && uParam0->f_49.f_27 > 1)
		{
			func_832(uParam0->f_137[iParam1], "CAMP_REC_COOK_MLT", func_593(3, uParam0->f_49.f_27), 1);
		}
		else if (bParam3)
		{
			func_290(uParam0->f_137[iParam1], "CAMP_REC_COOK_AGN", 1);
		}
		else
		{
			func_290(uParam0->f_137[iParam1], "CAMP_REC_COOK", 1);
		}
	}
	else if (bParam3)
	{
		if (func_400(uParam0->f_49.f_62, -1.29539E-20f) == -4.839888E+13f)
		{
			func_290(uParam0->f_137[iParam1], "CAMP_REC_BREW_AGN", 1);
		}
		else
		{
			func_290(uParam0->f_137[iParam1], "CAMP_REC_MAKE_AGN", 1);
		}
	}
	else if (func_400(uParam0->f_49.f_62, -1.29539E-20f) == -4.839888E+13f)
	{
		func_290(uParam0->f_137[iParam1], "CAMP_REC_BREW", 1);
	}
	else
	{
		func_290(uParam0->f_137[iParam1], "CAMP_REC_MAKE", 1);
	}
}

bool func_572()
{
	return Global_1940013 == 2;
}

void func_573(int iParam0)
{
	if (iParam0 >= Global_1940013)
	{
		return;
	}
	Global_1940013.f_1 = iParam0;
}

bool func_574()
{
	return Global_1940013 == 1;
}

void func_575(bool bParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	struct<7> Var33[20];

	if ((func_312(bParam0, 1.763507E+18f) || func_312(bParam0, 8.273569E-15f)) || func_312(bParam0, -1.230845E+19f))
	{
		bVar10 = true;
	}
	Var11.f_1 = 20;
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1940072.f_26 = 0;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bParam0, &Var11))
	{
		iVar0 = 0;
		while (iVar0 < Var11)
		{
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var11.f_1[iVar0], &(Var33[iVar0 /*7*/])))
			{
				switch (Var33[iVar0 /*7*/].f_1)
				{
					case -943921969:
						fVar1 = func_833(0, (IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
						func_834((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
						bVar9 = true;
						break;
					case -1104847406:
						fVar3 = func_833(2, (IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
						func_835((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), 0);
						bVar8 = true;
						break;
					case 381158954:
						fVar2 = func_833(1, (IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
						func_836((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
						break;
					case -416929031:
						fVar4 = func_837((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), (Var33[iVar0 /*7*/].f_5 / fParam1));
						func_838(0, fVar4, 1, 1, bVar10);
						bVar9 = true;
						break;
					case 1857353317:
						fVar5 = func_837((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), (Var33[iVar0 /*7*/].f_5 / fParam1));
						func_838(2, fVar5, 1, 1, bVar10);
						bVar8 = true;
						break;
					case 1681823811:
						fVar6 = func_837((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), (Var33[iVar0 /*7*/].f_5 / fParam1));
						func_838(1, fVar6, 1, 1, bVar10);
						break;
					case -816334026:
						func_839((BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_2) / fParam1), 1);
						break;
					default:
						if (bParam2)
						{
							switch (Var33[iVar0 /*7*/].f_1)
							{
								case 2062242710:
									fVar7 = func_840(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_841(19, fVar7, 1, 1);
									bVar9 = true;
									break;
								case -826379728:
									fVar7 = func_840(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_841(20, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1191740624:
									fVar7 = func_840(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_841(18, fVar7, 1, 1);
									break;
								case 1869697234:
									fVar7 = func_840(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_841(0, fVar7, 1, 1);
									bVar9 = true;
									break;
								case 1342237631:
									fVar7 = func_840(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_841(2, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1240225157:
									fVar7 = func_840(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_841(1, fVar7, 1, 1);
									break;
							}
						}
						break;
				}
			}
			iVar0++;
		}
		if (bParam2)
		{
			func_842(bParam0, bVar8, bVar9, 9.275179E-19f);
		}
		PLAYER::_SET_USED_ITEM_EFFECT(fVar1, fVar2, fVar3, BUILTIN::ROUND(fVar4), BUILTIN::ROUND(fVar6), BUILTIN::ROUND(fVar5));
	}
}

int func_576(var uParam0)
{
	return uParam0->f_11;
}

bool func_577(int iParam0)
{
	int iVar0;

	iVar0 = func_843(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_578(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"):
			return true;
		default:
			break;
	}
	return false;
}

void func_579(var uParam0, int iParam1)
{
	var uVar0[1];
	float fVar2;
	vector3 vVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	uVar0[0] = uParam0->f_1[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940186.f_6)
	{
		func_57(uParam0, 0, 1);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_33, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_33, 0, 1);
	if (func_40() != -1 && func_844())
	{
		if (func_298(uParam0->f_1[0], 0))
		{
			func_93(uParam0);
			func_221(uParam0);
		}
		return;
	}
	if (func_99(uParam0, 256))
	{
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-9.407153E+21f);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1.068381E+13f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.46932E+34f, false);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	switch (func_576(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_845(uParam0))
			{
				func_567(uParam0);
				func_568(uParam0);
				func_846(uParam0);
			}
			if (func_569(uParam0))
			{
				func_100(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_40() == 0 && CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				func_93(uParam0);
				return;
			}
			if (func_845(uParam0))
			{
				func_93(uParam0);
				func_846(uParam0);
				if (func_95())
				{
					func_96(0);
				}
			}
			if ((func_99(uParam0, 16) || func_450(uParam0->f_1[0], 1)) || func_99(uParam0, 32))
			{
				func_847(uParam0);
			}
			break;
		case 4:
			if (!func_99(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_848(uParam0))
			{
				func_189(uParam0, 1024);
				func_100(uParam0, 5);
			}
			break;
		case 5:
			if (!func_99(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_849(uParam0))
			{
				func_100(uParam0, 6);
			}
			break;
		case 6:
			if (!func_99(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_850(uParam0))
			{
				func_100(uParam0, 7);
			}
			break;
		case 7:
			if (!func_99(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_845(uParam0))
			{
				func_851(uParam0);
				func_846(uParam0);
				return;
			}
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f))
			{
				return;
			}
			if (func_852(uParam0, 0))
			{
				if (func_853(uParam0, func_99(uParam0, 65536)) || ((func_99(uParam0, 2) || func_99(uParam0, 65536)) && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-3.556355E-20f)))
				{
					func_220(uParam0, 65536);
					func_100(uParam0, 8);
				}
				else if (func_99(uParam0, 4))
				{
					func_100(uParam0, 1);
				}
				else
				{
					func_100(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!func_99(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!func_99(uParam0, 1024))
			{
				func_100(uParam0, 4);
				return;
			}
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f))
			{
				return;
			}
			if (func_854(uParam0))
			{
				func_853(uParam0, 1);
				func_100(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-3.556355E-20f))
			{
				if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(-3.556355E-20f))
				{
					Global_1913621.f_1580 = 0;
					func_100(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!func_99(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f))
			{
				return;
			}
			if (func_845(uParam0))
			{
				func_851(uParam0);
				func_846(uParam0);
				return;
			}
			if (func_852(uParam0, 1))
			{
				func_100(uParam0, 10);
			}
			break;
		case 10:
			func_855(0);
			if (func_845(uParam0))
			{
				func_856(uParam0);
				func_846(uParam0);
			}
			if (func_857(uParam0) || func_858(uParam0))
			{
				return;
			}
			if (Global_1913621.f_1580)
			{
				Global_1913621.f_1580 = 0;
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_859(uParam0);
				uParam0->f_62 = 0;
				uParam0->f_63 = 0;
				func_860(uParam0, 0, 0);
				func_164(uParam0->f_1[5], 0, 1, 1);
				func_100(uParam0, 9);
			}
			else if (func_861(uParam0->f_1[2], 1) || !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-3.556355E-20f))
			{
				if (func_99(uParam0, 16))
				{
					func_100(uParam0, 18);
				}
				else
				{
					func_94(uParam0, 0);
					func_862("Exit", "SSCRFT_Sounds", 1);
					if (func_99(uParam0, 32))
					{
						func_220(uParam0, 32);
						func_100(uParam0, 1);
					}
					else
					{
						func_100(uParam0, 3);
					}
				}
			}
			else if (func_450(uParam0->f_1[7], 1))
			{
				func_863(uParam0);
			}
			else if (func_450(uParam0->f_1[1], 1))
			{
				func_864(uParam0);
			}
			else if (func_450(uParam0->f_1[3], 1))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				if (func_99(uParam0, 128))
				{
					func_220(uParam0, 128);
				}
				else
				{
					func_189(uParam0, 128);
				}
				func_859(uParam0);
				func_862("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_62 = 0;
				uParam0->f_63 = 0;
				func_860(uParam0, 0, 0);
				func_164(uParam0->f_1[5], 0, 1, 1);
				func_100(uParam0, 9);
			}
			else if (func_865(uParam0->f_1[5], 0, 1))
			{
				if (func_99(uParam0, 4096))
				{
					func_862("Nav_Left", "SSCRFT_Sounds", 1);
					func_866(uParam0, 0);
				}
			}
			else if (func_865(uParam0->f_1[5], 1, 1))
			{
				if (func_99(uParam0, 4096))
				{
					func_862("Nav_Right", "SSCRFT_Sounds", 1);
					func_866(uParam0, 1);
				}
			}
			else if (func_861(uParam0->f_1[6], 1))
			{
				func_862("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_867(uParam0, 1);
			}
			else if (func_450(uParam0->f_1[8], 1))
			{
				func_862("toggle_craftable_all", "SSCRFT_Sounds", 1);
				if (func_99(uParam0, 131072))
				{
					func_220(uParam0, 131072);
				}
				else
				{
					func_189(uParam0, 131072);
				}
				func_860(uParam0, uParam0->f_62, uParam0->f_63);
			}
			else
			{
				fVar2 = -4.222242E+09f;
				while (UIEVENTS::EVENTS_UI_IS_PENDING(fVar2))
				{
					if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(fVar2, &vVar3))
					{
						if (vVar3.x == 1.044587E-13f || vVar3.x == -8.006556E+12f)
						{
							func_868(uParam0);
						}
						else if (vVar3.x == -2.576099E-24f)
						{
							func_869(uParam0, &vVar3);
						}
						else if (vVar3.x == -4.615686E-05f)
						{
							if (vVar3.z == -3.247998E-38f)
							{
								func_864(uParam0);
							}
						}
						UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar2);
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -3.403642E+24f, false);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-3.423465f, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_855(0);
			iVar7 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
			iVar8 = func_400(uParam0->f_62, -1.29539E-20f);
			if (iVar7 == -2.545493E-13f || iVar7 == 4.648953E+35f)
			{
				if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, 4.95508E+09f))
				{
					PED::_GIVE_PED_HASH_COMMAND(Global_33, 4.95508E+09f, 6f);
					PED::_ADD_SCENARIO_TRANSITION(Global_33);
				}
				return;
			}
			if (iVar8 != -1.467368E+13f)
			{
				if ((PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || PED::_0x2DC0E8DCBD3546E9(Global_33)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 3.6671E+31f))
				{
					return;
				}
				if (iVar7 == -1.772429E+20f || iVar7 == 2.719026E+21f)
				{
					if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, 1.652442E-15f))
					{
						PED::_GIVE_PED_HASH_COMMAND(Global_33, 1.652442E-15f, 6f);
						PED::_ADD_SCENARIO_TRANSITION(Global_33);
					}
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
				}
				if (((((((((iVar8 == 4.66195E-24f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_49, true, false)) || (iVar8 == -0.01154436f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_51, true, false))) || (uParam0->f_70 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_70))) || (iVar8 == -3.737967E+12f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_53, true, false))) || (iVar8 == 1.002948E-10f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_52, true, false))) || (iVar8 == -0.007383482f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_54, true, false))) || (iVar8 == 7.622462E-26f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_55, true, false))) || (iVar8 == -4.326644E+08f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_56, true, false))) || (iVar8 == -1.124768E-19f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_57, true, false)))
				{
					return;
				}
				else if (func_99(uParam0, 2048))
				{
					func_870(uParam0);
					func_220(uParam0, 2048);
				}
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_50, true, false) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0)))
				{
					return;
				}
				else if (func_99(uParam0, 2048))
				{
					func_870(uParam0);
					func_220(uParam0, 2048);
				}
				if (iVar7 != -1.772429E+20f && iVar7 != 2.719026E+21f)
				{
					if (func_99(uParam0, 4))
					{
						if ((PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || PED::_0x2DC0E8DCBD3546E9(Global_33)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 3.6671E+31f))
						{
							return;
						}
						if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, 2.264292E-10f))
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_33, 2.264292E-10f, 2f);
							PED::_ADD_SCENARIO_TRANSITION(Global_33);
						}
						return;
					}
				}
			}
			if (func_845(uParam0))
			{
				func_846(uParam0);
				func_871(uParam0, 0, &uVar0);
				func_870(uParam0);
				if (func_45(uParam0->f_1[1]))
				{
					func_46(&(uParam0->f_1[1]), 1, 1);
				}
				if (func_872(iVar8))
				{
					uParam0->f_43 = 250;
					uParam0->f_1[1] = func_163("CAMP_REC_MAKE", 439.9228f, 3, 0, 0, 0, uParam0->f_43, uParam0->f_43 + 1, 1, 2f, 8.750548E+22f, 0);
					func_860(uParam0, uParam0->f_62, uParam0->f_63);
					func_172(uParam0->f_1[1], -3.423465f, 0, 1);
					func_448(uParam0->f_1[1], 10, 1, 1);
					func_448(uParam0->f_1[1], 11, 1, 1);
					func_164(uParam0->f_1[1], 0, 1, 1);
				}
				else
				{
					uParam0->f_1[1] = func_163("CAMP_REC_MAKE", 439.9228f, 3, 0, 0, 0, 250, 251, 1, 2f, 8.750548E+22f, 0);
					func_172(uParam0->f_1[1], -3.423465f, 0, 1);
					func_165(uParam0->f_1[1], 1, 1);
					func_448(uParam0->f_1[1], 10, 1, 1);
					func_448(uParam0->f_1[1], 11, 1, 1);
					func_164(uParam0->f_1[1], 0, 1, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -4.221733E+18f))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_872(iVar8))
			{
				if (!func_99(uParam0, 64))
				{
					if (func_298(uParam0->f_1[1], 0))
					{
						if (func_589(uParam0->f_1[1], 1) || PAD::IS_CONTROL_PRESSED(0, 439.9228f))
						{
							func_189(uParam0, 64);
							func_164(uParam0->f_1[1], 0, 1, 1);
							func_164(uParam0->f_1[4], 0, 1, 1);
						}
					}
				}
				if ((((((iVar8 == -0.01154436f || iVar8 == -3.737967E+12f) || iVar8 == 1.002948E-10f) || iVar8 == -0.007383482f) || iVar8 == 7.622462E-26f) || iVar8 == -4.326644E+08f) || iVar8 == -1.124768E-19f)
				{
					if (uParam0->f_70 != 0)
					{
						if ((uParam0->f_70 == 22719.83f && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -377.5547f)) || (uParam0->f_70 != 22719.83f && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2.735405E+34f)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_66))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_66));
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_66);
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
							{
								if (func_312(uParam0->f_62, -7.272718E-19f) && iVar8 != -4.326644E+08f)
								{
									uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(func_691(uParam0->f_62, 0), 1, Global_34, true, 1f);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
									if (iVar8 == -1.124768E-19f)
									{
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_873(uParam0, iVar8), "DYNAMITE", uParam0->f_66, 0);
									}
								}
								else
								{
									uParam0->f_66 = OBJECT::CREATE_OBJECT(uParam0->f_70, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
								}
								if (iVar8 == 1.002948E-10f)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -0.007383482f || iVar8 == -1.124768E-19f)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -4.326644E+08f)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -0.01154436f && !PED::IS_PED_MALE(Global_33))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 0.0002839294f))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_66))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_66));
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_66);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
						{
							if (iVar8 == -3.737967E+12f || iVar8 == 7.622462E-26f)
							{
								uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(-2.593644E+11f, 1, Global_34, true, 1f);
							}
							else if (iVar8 == -0.007383482f)
							{
								uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(-4.049688E-16f, 1, Global_34, true, 1f);
							}
							else if (iVar8 == -4.326644E+08f)
							{
								if (uParam0->f_62 == 0.0002301198f)
								{
									uParam0->f_66 = OBJECT::CREATE_OBJECT(1.44377E-24f, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								}
								else
								{
									uParam0->f_66 = OBJECT::CREATE_OBJECT(-3.582282E+25f, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								}
							}
							else if (iVar8 == -1.124768E-19f)
							{
								uParam0->f_66 = OBJECT::CREATE_OBJECT(4.518292E+32f, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								if (iVar8 == -1.124768E-19f)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_873(uParam0, iVar8), "DYNAMITE", uParam0->f_66, 0);
								}
							}
							else
							{
								uParam0->f_66 = OBJECT::CREATE_OBJECT(-2.056204E+15f, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
							}
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
						if (iVar8 == 1.002948E-10f)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar8 == -0.007383482f || iVar8 == -1.124768E-19f) || iVar8 == -4.326644E+08f)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if (iVar8 == -0.01154436f && !PED::IS_PED_MALE(Global_33))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 7.023091E+11f))
					{
						func_98(&(uParam0->f_66), &(uParam0->f_67));
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 3.869416E+14f))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_68))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_68, true);
						}
					}
				}
				else if (iVar8 == 4.66195E-24f || iVar8 == -1.467368E+13f)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 0.0002839294f))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_64, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -4.302495E+36f))
				{
					if (func_103(0) && !func_104())
					{
						func_584(uParam0->f_62, uParam0->f_63, 1, func_583(), uParam0->f_12);
						func_585(uParam0->f_62, 1, 0, 1, 0);
					}
					if (iVar8 == -4.326644E+08f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
						{
							func_98(&(uParam0->f_66), &(uParam0->f_67));
						}
					}
					uParam0->f_23++;
					uParam0->f_28++;
					if ((!func_874(uParam0->f_62, uParam0->f_63, 0, func_583(), 0) || func_592(uParam0->f_62, 1, 0)) || uParam0->f_23 >= uParam0->f_27)
					{
						if (!func_103(0) || func_104())
						{
							uParam0->f_24 = func_101(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
							if (uParam0->f_12 == 2.270209E+38f)
							{
								func_107(func_106(-0.1137347f, -7.825801E+22f), uParam0->f_28);
							}
							uParam0->f_28 = 0;
						}
						func_875(uParam0, iVar8, 0);
						return;
					}
				}
				if (!func_99(uParam0, 64))
				{
					if (!(func_298(uParam0->f_1[1], 0) && PAD::IS_CONTROL_PRESSED(0, 439.9228f)))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.520033E-17f))
						{
							if (!func_103(0) || func_104())
							{
								uParam0->f_24 = func_101(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
								if (uParam0->f_12 == 2.270209E+38f)
								{
									func_107(func_106(-0.1137347f, -7.825801E+22f), uParam0->f_28);
								}
								uParam0->f_28 = 0;
							}
							func_875(uParam0, iVar8, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.223851E+08f) && uParam0->f_23 < (uParam0->f_27 - 1))
				{
					func_164(uParam0->f_1[1], 1, 1, 1);
					func_164(uParam0->f_1[4], 1, 1, 1);
					func_220(uParam0, 64);
				}
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(func_873(uParam0, iVar8), "player"))
				{
					if (!func_103(0) || func_104())
					{
						uParam0->f_24 = func_101(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
						if (uParam0->f_12 == 2.270209E+38f)
						{
							func_107(func_106(-0.1137347f, -7.825801E+22f), uParam0->f_28);
						}
						uParam0->f_28 = 0;
					}
					func_875(uParam0, iVar8, 0);
				}
			}
			else if (func_116(&(uParam0->f_71), (IntToFloat(uParam0->f_43) / 1148846080)))
			{
				if (!func_103(0) || func_104())
				{
					if (uParam0->f_24 == -1)
					{
						uParam0->f_24 = func_101(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
						if (uParam0->f_12 == 2.270209E+38f)
						{
							func_107(func_106(-0.1137347f, -7.825801E+22f), 1);
						}
						if (uParam0->f_24 == -1)
						{
							func_875(uParam0, iVar8, 0);
						}
					}
					else if (func_577(uParam0->f_24))
					{
					}
					uParam0->f_24 = -1;
				}
				else
				{
					func_584(uParam0->f_62, uParam0->f_63, 1, func_583(), uParam0->f_12);
					func_585(uParam0->f_62, 1, 1, 1, 0);
				}
				uParam0->f_27 = -1;
				uParam0->f_28 = 0;
				func_98(&(uParam0->f_66), &(uParam0->f_67));
				uParam0->f_45 = 0;
				bVar9 = true;
				if (!func_874(uParam0->f_62, uParam0->f_63, 0, func_583(), 0) || func_592(uParam0->f_62, 1, 0))
				{
					bVar9 = false;
				}
				func_875(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (func_95())
			{
				func_96(0);
			}
			if (func_845(uParam0))
			{
				func_93(uParam0);
				func_846(uParam0);
			}
			break;
		case 13:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-3.423465f, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_855(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -3.300486E-34f))
				{
					func_98(&(uParam0->f_68), &(uParam0->f_69));
				}
			}
			if (!func_298(uParam0->f_1[2], 0))
			{
				func_164(uParam0->f_1[2], 1, 1, 1);
				func_165(uParam0->f_1[2], 0, 1);
			}
			if (!func_298(uParam0->f_1[4], 0))
			{
				func_164(uParam0->f_1[4], 1, 1, 1);
				func_165(uParam0->f_1[4], 1, 1);
			}
			if (func_861(uParam0->f_1[2], 1))
			{
				func_93(uParam0);
				func_138(&(uParam0->f_71));
				func_100(uParam0, 14);
				return;
			}
			else if (func_167(uParam0->f_1[4], 1))
			{
				func_93(uParam0);
				func_98(&(uParam0->f_66), &(uParam0->f_67));
				func_98(&(uParam0->f_64), &(uParam0->f_65));
				func_98(&(uParam0->f_68), &(uParam0->f_69));
				iVar10 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
				if (iVar10 != -1.772429E+20f && iVar10 != 2.719026E+21f)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
				}
				iVar8 = func_400(uParam0->f_62, -1.29539E-20f);
				iVar11 = func_873(uParam0, iVar8);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar11, "player", Global_33);
				func_94(uParam0, 0);
				func_862("Exit", "SSCRFT_Sounds", 1);
				if (func_99(uParam0, 4))
				{
					func_100(uParam0, 1);
				}
				else
				{
					func_100(uParam0, 0);
				}
				return;
			}
			else if (func_450(uParam0->f_1[1], 1))
			{
				func_164(uParam0->f_1[4], 0, 1, 1);
				func_164(uParam0->f_1[2], 0, 1, 1);
				func_164(uParam0->f_1[1], 0, 1, 1);
				iVar8 = func_400(uParam0->f_62, -1.29539E-20f);
				iVar12 = func_873(uParam0, iVar8);
				if (iVar12 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar12, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar12);
				}
				func_138(&(uParam0->f_71));
				func_220(uParam0, 64);
				func_100(uParam0, 12);
				return;
			}
			if (func_452(uParam0->f_1[4], 1))
			{
				if (!func_241(&(uParam0->f_71)))
				{
					func_118(&(uParam0->f_71));
				}
				else if (func_116(&(uParam0->f_71), 1036831949 /* Float: 0.1f */))
				{
					func_290(uParam0->f_1[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_241(&(uParam0->f_71)))
				{
					func_138(&(uParam0->f_71));
				}
				func_290(uParam0->f_1[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-3.423465f, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_855(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -3.300486E-34f))
				{
					func_98(&(uParam0->f_68), &(uParam0->f_69));
				}
			}
			iVar8 = func_400(uParam0->f_62, -1.29539E-20f);
			iVar13 = func_873(uParam0, iVar8);
			if ((iVar13 == 0 || (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar13) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(iVar13, false))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2.936837E-05f))
			{
				func_98(&(uParam0->f_66), &(uParam0->f_67));
				func_98(&(uParam0->f_64), &(uParam0->f_65));
				func_98(&(uParam0->f_68), &(uParam0->f_69));
				iVar14 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
				if (iVar14 != -1.772429E+20f && iVar14 != 2.719026E+21f)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar13, "player", Global_33);
				if (!func_858(uParam0))
				{
					func_100(uParam0, 15);
				}
			}
			break;
		case 16:
			iVar15 = func_876();
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				uParam0->f_24 = func_101(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
				func_100(uParam0, 17);
			}
			else if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar15) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar15))
			{
				func_100(uParam0, 10);
			}
			else if (func_116(&(uParam0->f_71), 5f))
			{
				func_138(&(uParam0->f_71));
				func_100(uParam0, 10);
			}
			break;
		case 17:
			if (!func_577(uParam0->f_24) && func_877(1))
			{
				if (func_843(uParam0->f_24) != 3)
				{
					func_878(0);
				}
				else
				{
					func_879(uParam0->f_62);
					PED::_GIVE_PED_HASH_COMMAND(Global_33, -6.917074E+11f, 1f);
					func_880(uParam0->f_62, 1);
					func_881(uParam0);
					if (func_312(uParam0->f_62, -4.733674E-34f))
					{
						func_398(-2.476148E-07f, 0, 255, 0, 0);
					}
					uParam0->f_26 = uParam0->f_62;
				}
				func_100(uParam0, 15);
			}
			else
			{
				func_882(1);
				HUD::_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			}
			break;
		case 1:
			if (func_95())
			{
				func_96(0);
			}
			if (func_845(uParam0))
			{
				if (func_45(uParam0->f_1[0]))
				{
					func_164(uParam0->f_1[0], 0, 1, 1);
				}
				func_846(uParam0);
			}
			break;
		case 18:
			if (func_95())
			{
				func_96(0);
			}
			if (func_845(uParam0))
			{
				func_846(uParam0);
			}
			if (func_99(uParam0, 2))
			{
				TASK::CLEAR_PED_TASKS(Global_33, true, false);
			}
			func_94(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_29);
			Global_1913621.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

void func_580(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_49.f_63 == 6.221388E-29f)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_107(func_700(5.920555E+07f), func_594(func_99(&(uParam0->f_49), 131072), func_593(3, uParam0->f_49.f_27), 1));
	}
	func_159(2);
	func_46(&(uParam0->f_137[3]), 1, 1);
	if (bVar0)
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (func_168(uParam0->f_127, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 1061997773));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 1061997773));
		}
		uParam0->f_137[3] = func_163("CRAFT_FASTER", 439.9228f, 2, 0, 0, 6, iVar1, iVar2, 35, 2f, 8.750548E+22f, 0);
	}
	else
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (func_168(uParam0->f_127, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 1061997773));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 1061997773));
		}
		uParam0->f_137[3] = func_163("CRAFT_FASTER", 439.9228f, 2, 0, 0, 6, iVar1, iVar2, 25, 2f, 8.750548E+22f, 0);
	}
	func_571(uParam0, 3, 0, 0, 0);
	func_164(uParam0->f_137[3], 0, 1, 1);
	func_172(uParam0->f_137[3], -3.423465f, 0, 1);
	uParam0->f_153 = MISC::GET_GAME_TIMER();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_135))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_135));
	}
	uParam0->f_135 = OBJECT::CREATE_OBJECT(func_570(uParam0->f_49.f_62), Global_34, false, false, false, false, true);
	if (PED::_GIVE_PED_SCENARIO_PROP(Global_33, uParam0->f_135, "p_meatChunks01x_PH_L_HAND", 0, 0, true))
	{
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_135, false);
	OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_135, 0f, true);
	uParam0->f_165 = 3;
	func_93(&(uParam0->f_49));
	func_100(&(uParam0->f_49), 0);
	func_581();
	AUDIO::_SET_AUDIO_SCENESET("cooking", "Player_Campfire_Scenes");
	func_201(uParam0, 9);
}

int func_581()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_495())
	{
		return 0;
	}
	if (!func_264(&bVar0))
	{
		return 0;
	}
	if (!func_496(bVar0))
	{
		return 0;
	}
	iVar1 = func_265(bVar0);
	if (iVar1 == -1.003831E+26f)
	{
		return 0;
	}
	func_498(&iVar2, 1);
	return func_499(bVar0, iVar2);
}

bool func_582(int iParam0)
{
	return func_279(Global_1940072.f_38, iParam0);
}

bool func_583()
{
	int iVar0;
	int iVar1;

	iVar0 = func_245(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_195(Global_33, iVar0, 1) < 1137180672)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_584(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(bParam0, bParam1, iParam4, 1);
	return func_883(bParam0, bParam1, bParam2, bParam3);
}

void func_585(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (!func_103(0) || func_104())
	{
		return;
	}
	if (!func_105(bParam0, 0))
	{
		return;
	}
	func_107(func_700(-1.020262E+24f), iParam1);
	if (bParam3)
	{
		if (func_40() == -1)
		{
			if (func_312(bParam0, -7.272718E-19f))
			{
				bVar0 = func_692(func_691(bParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar0))
				{
					func_693(bVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_323(bParam0) == -8.140304E-33f)
			{
				if (func_884(bParam0, 0))
				{
					func_347(bParam0, 1, 0, 1, 0, 0, 0);
				}
			}
			else
			{
				func_437(bParam0, iParam1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
			}
		}
		else
		{
			func_885(bParam0, iParam4, iParam1);
		}
	}
	func_880(bParam0, iParam1);
	Global_1051188 = bParam0;
}

void func_586(var uParam0, int iParam1)
{
	bool bVar0;

	if (func_452(uParam0->f_137[3], 1))
	{
		bVar0 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -6.112571E-27f))
	{
		if (PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x709BA8C08C5C008D();
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.522999E+24f))
	{
		if (!PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("distanceToFlame", 0f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x5F217BC1190503D8("CRFT_SEAR_MEAT", 7f);
		}
	}
	switch (iParam1)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_MP_FEMALE_A"):
			if (bVar0)
			{
				if (func_212(uParam0))
				{
					if (func_215(6.824754E+28f, 1056964608 /* Float: 0.5f */))
					{
						uParam0->f_153 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"):
			if (!bVar0)
			{
				if (func_212(uParam0))
				{
					if (func_215(-0.0007749247f, 1056964608 /* Float: 0.5f */))
					{
						uParam0->f_153 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"):
			if (bVar0)
			{
				if (func_212(uParam0))
				{
					if (func_215(-2.238509E+26f, 1056964608 /* Float: 0.5f */))
					{
						uParam0->f_153 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"):
			if (!bVar0)
			{
				if (func_212(uParam0))
				{
					if (func_215(-1.988373E+29f, 1056964608 /* Float: 0.5f */))
					{
						uParam0->f_153 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
}

void func_587(var uParam0)
{
	if (!func_45(uParam0->f_137[5]))
	{
		return;
	}
	if (!func_582(2))
	{
		func_164(uParam0->f_137[5], 0, 1, 1);
		return;
	}
	if (func_577(uParam0->f_49.f_24))
	{
		func_164(uParam0->f_137[5], 0, 1, 1);
		return;
	}
	func_590();
	func_164(uParam0->f_137[5], 1, 1, 1);
}

void func_588(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		uParam0->f_137[3] = func_163("CRAFT_FASTER", 439.9228f, 2, 0, 0, 0, 7000, 10000, 25, 2f, 8.750548E+22f, 0);
		func_571(uParam0, 3, 0, 1, bParam2);
		func_164(uParam0->f_137[3], 0, 1, 1);
		func_172(uParam0->f_137[3], -3.423465f, 0, 1);
		if ((func_831() && func_886(&(uParam0->f_49), uParam0->f_49.f_62)) && uParam0->f_49.f_27 > 1)
		{
			uParam0->f_137[9] = func_163("CAMP_REC_BATCH", -2.740794E-14f, 1, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
			func_172(uParam0->f_137[9], -3.423465f, 0, 1);
			func_164(uParam0->f_137[9], 0, 1, 1);
		}
	}
	uParam0->f_137[7] = func_163("CAMP_REC_BACK", 0.00251415f, 1, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	uParam0->f_137[1] = func_163("CAMP_REC_BACK", 0.00251415f, 1, 0, 0, 5, 570, 4000, 10, 2f, -2.656165E+09f, 0);
	func_449(&(uParam0->f_137[1]), "INPUT_PCRAFT_EXIT");
	func_165(uParam0->f_137[7], 0, 1);
	func_172(uParam0->f_137[7], -3.423465f, 0, 1);
	func_172(uParam0->f_137[1], -3.423465f, 0, 1);
	func_448(uParam0->f_137[1], 19, 1, 1);
	func_448(uParam0->f_137[1], 20, 1, 1);
	func_448(uParam0->f_137[1], 13, 1, 1);
	func_448(uParam0->f_137[7], 13, 1, 1);
	func_164(uParam0->f_137[7], 0, 1, 1);
	func_164(uParam0->f_137[1], 0, 1, 1);
}

bool func_589(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_91(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_590()
{
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_887(2));
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_887(0));
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_887(1));
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_888(2));
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_888(0));
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_888(1));
}

void func_591(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_91(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_592(bool bParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = { func_226(bParam0, 0, 0) };
	return func_227(bParam0, &Var0, iParam1, 0, bParam2, -1, 0);
}

int func_593(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_594(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_595(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return 0f;
	}
	iVar0 = func_91(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
}

float func_596(float fParam0, float fParam1, float fParam2)
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

void func_597(var uParam0)
{
	if (!func_45(uParam0->f_137[4]))
	{
		return;
	}
	if (func_577(uParam0->f_49.f_24))
	{
		func_164(uParam0->f_137[4], 0, 1, 1);
		return;
	}
	func_164(uParam0->f_137[4], 1, 1, 1);
}

void func_598(var uParam0, bool bParam1)
{
	func_830(uParam0, 1, 0);
	if (bParam1)
	{
		if (!func_298(uParam0->f_137[3], 0))
		{
			if (((func_45(uParam0->f_137[3]) && (uParam0->f_49.f_62 == -5.985058E-05f || !func_592(uParam0->f_49.f_62, 1, 0))) && !func_577(uParam0->f_49.f_24)) && uParam0->f_49.f_27 > 0)
			{
				func_164(uParam0->f_137[3], 1, 1, 1);
			}
		}
	}
	if (!func_298(uParam0->f_137[7], 0))
	{
		func_164(uParam0->f_137[7], 1, 1, 1);
		func_165(uParam0->f_137[7], 0, 1);
	}
	if (!func_298(uParam0->f_137[1], 0))
	{
		func_164(uParam0->f_137[1], 1, 1, 1);
	}
	if (func_45(uParam0->f_137[9]))
	{
		if (!func_298(uParam0->f_137[9], 0) && uParam0->f_49.f_27 > 0)
		{
			func_164(uParam0->f_137[9], 1, 1, 1);
		}
		else
		{
			func_164(uParam0->f_137[9], 0, 1, 1);
		}
	}
}

void func_599(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_46(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

void func_600(var uParam0)
{
	int iVar0;
	int iVar1;

	func_46(&(uParam0->f_137[3]), 1, 1);
	iVar0 = 6000;
	iVar1 = 10000;
	if (func_168(uParam0->f_127, 16384))
	{
		iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * 1061997773));
		iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 1061997773));
	}
	uParam0->f_137[3] = func_163("CRAFT_FASTER", 439.9228f, 2, 0, 0, 6, iVar0, iVar1, 25, 2f, 8.750548E+22f, 0);
	func_571(uParam0, 3, 0, 0, 0);
	func_172(uParam0->f_137[3], -3.423465f, 0, 1);
	func_164(uParam0->f_137[3], 0, 1, 1);
	func_581();
	uParam0->f_153 = MISC::GET_GAME_TIMER();
	AUDIO::_SET_AUDIO_SCENESET("crafting", "Player_Campfire_Scenes");
	func_201(uParam0, 1);
}

bool func_601(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

void func_602(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_228((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_603(int iParam0)
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

int func_604()
{
	if (func_40() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

float func_605(int iParam0)
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

void func_606(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_228((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

struct<10> func_607(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_608(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_609(int iParam0, int iParam1)
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

int func_610(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = -7.823627E-38f;
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = 2.350962E+15f;
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = 1.880478E-29f;
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = 9.844682E+16f;
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = -1.122826E+28f;
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = 1.572265E-34f;
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = -2.021815E+13f;
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = -1.247056E-17f;
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = 6.240494E-14f;
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = 1.386534E-13f;
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = 1.60476E-20f;
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = 3.562316E+28f;
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = 1.854381E-37f;
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = 2.425197E-21f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = 9.798023E-15f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = 3.93545E+18f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = -271915.8f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = 6.892114E+25f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = -2.123363E+28f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = -1.573697E-17f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = -5.304321E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = 2.102341E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = -1.260301E-08f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = 2.994223E+24f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = 6.094814E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = 2.117028E+37f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = 0.001931463f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = -2.58118E-05f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = -1.917655E-30f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = -91.68214f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = 2.383896E+14f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = 5.051445E+15f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = 1.242729E-20f;
			break;
	}
	return iVar0;
}

int func_611(bool bParam0)
{
	if (func_312(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_312(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_312(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

int func_612(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_105(uVar0[iVar17], 0) && bParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_613(int iParam0)
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

bool func_614(int iParam0)
{
	iParam0 = func_414(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1902883[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

bool func_615(int iParam0)
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
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::GET_IS_ANIMAL(iVar0))
	{
		return false;
	}
	if (FLOCK::_GET_ANIMAL_RARITY(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(iParam0))
	{
		return false;
	}
	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(iParam0))
	{
		return false;
	}
	return true;
}

struct<4> func_616()
{
	struct<4> Var0;

	return Var0;
}

int func_617()
{
	if (func_889(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_618(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_213(0);
	*iParam1 = { func_368(bParam0, func_369(0), fParam3, 0) };
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

bool func_619(bool bParam0, int iParam1, int iParam2)
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

bool func_620(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_213(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_621(bool bParam0)
{
	return func_312(bParam0, 5.168749E+07f);
}

bool func_622(bool bParam0, bool bParam1)
{
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (func_393(bParam0) || func_312(bParam0, 2.791187f))
	{
		return func_630(func_394(bParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1) > 0;
}

int func_623(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_355(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_624(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_890(iParam1->f_8, iParam0, iVar0, 2048) || func_890(iParam1->f_8, iParam0, iVar0, 32768)) || func_890(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_890(iParam1->f_8, iParam0, iVar0, 4) || func_890(iParam1->f_8, iParam0, iVar0, 256)) || func_890(iParam1->f_8, iParam0, iVar0, 65536)) || func_890(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_890(iParam1->f_8, iParam0, iVar0, 1) || func_890(iParam1->f_8, iParam0, iVar0, 8)) || func_890(iParam1->f_8, iParam0, iVar0, 65536)) || func_890(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_890(iParam1->f_8, iParam0, iVar0, 1) || func_890(iParam1->f_8, iParam0, iVar0, 16)) || func_890(iParam1->f_8, iParam0, iVar0, 2)) || func_890(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_890(iParam1->f_8, iParam0, iVar0, 8) || func_890(iParam1->f_8, iParam0, iVar0, 4096)) || func_890(iParam1->f_8, iParam0, iVar0, 256)) || func_890(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_625(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_626(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_891(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_891(iParam1, 2, 0, 0);
	return -1;
}

int func_627(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_891(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_628(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_892(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_629(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_630(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_601(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_635(bParam0, bParam1);
	}
	return true;
}

bool func_631(bool bParam0, float fParam1)
{
	*fParam1 = func_893(bParam0, 1);
	return *fParam1 != 0;
}

bool func_632(bool bParam0, float fParam1)
{
	*fParam1 = func_894(bParam0, 1, 0);
	return *fParam1 != 0;
}

bool func_633()
{
	return Global_1915643.f_22477;
}

bool func_634(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_463(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_635(bool bParam0, bool bParam1)
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
		if (Var0[iVar474 /*47*/] == bParam1)
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

int func_636(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam1 == -2.401104E+18f)
	{
		iVar0 = func_623(bParam0, -2.401104E+18f, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_357(iVar0))
		{
			if (Global_1915643.f_20644)
			{
				func_896(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_895(iVar0)));
			}
			return 0;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		iVar1 = func_623(bParam0, -982726.7f, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_356(iVar1))
		{
			if (Global_1915643.f_20644)
			{
				func_896("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return 1;
	}
	if (!func_224(bParam0, bParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_637(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_638(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_639(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_640(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_641(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_642(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_643(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_644(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_645(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_646(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_647(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_648(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_649(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_650(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_651(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_897(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_652(bool bParam0)
{
	bool bVar0;

	bVar0 = func_377(bParam0);
	if (func_378(bVar0, 2))
	{
		return true;
	}
	return false;
}

int func_653(int* iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar4;
	struct<5> Var5[16];
	bool bVar86;
	struct<4> Var87;
	int iVar91;

	if (!func_378(bParam1, 2))
	{
		return 0;
	}
	uVar2 = 1;
	func_898(bParam1, &uVar2, &uVar1, &Var5, &iVar0);
	if (func_168(iParam4, 8) && !func_899(bParam1, bParam2, bParam3))
	{
		return 0;
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (Var5[iVar4 /*5*/].f_1 == -5.45926E-19f)
		{
			bVar86 = Var5[iVar4 /*5*/];
			if (func_168(iParam4, 4))
			{
				if (!func_656(iParam0, bVar86, Var87, iVar91, bParam2, (bParam3 * Var5[iVar4 /*5*/].f_4), 1, 1))
				{
					return 0;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

bool func_654(bool bParam0, struct<4> Param1, int iParam5)
{
	struct<10> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_375(Param1, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_619(bParam0, func_228(Var0.f_4), iParam5))
	{
		return false;
	}
	return true;
}

bool func_655(bool bParam0, bool bParam1, int iParam2)
{
	if (func_168(iParam2, 1))
	{
		if (!func_900(bParam0))
		{
			return false;
		}
	}
	if (func_168(iParam2, 2))
	{
		if (func_901(bParam0, bParam1, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_656(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param2))
	{
		return false;
	}
	Var0.f_4 = iParam6;
	Var0 = { Param2 };
	iVar5 = func_382(bParam1, Param2, iParam6, 1, !bParam10, 0);
	iVar6 = func_381(bParam1, &Var0, !bParam10, 1);
	if (bParam9)
	{
		iVar7 = 1;
	}
	else if (func_547(bParam1, bParam7, &iVar7, 0))
	{
	}
	iVar8 = (func_902(iParam0, bParam1) * iVar7);
	if (iVar8 > 0)
	{
	}
	if (iVar6 >= 0)
	{
		iVar9 = (iVar6 - (iVar5 + iVar8));
		iVar10 = (bParam8 * iVar7);
		if (iVar10 > iVar6)
		{
			iVar10 = iVar6;
		}
		if (iVar9 <= 0)
		{
			return false;
		}
		else if ((iVar10 - iVar9) >= iVar7)
		{
			return false;
		}
	}
	return true;
}

int func_657(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_903(bParam1, 1) && !func_904(bParam1, 1))
	{
		if (Global_1915643.f_20644)
		{
			func_896(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -2.401104E+18f)
	{
		iVar0 = func_383(bParam1, -2.401104E+18f, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_357((iVar1 + func_905(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_896(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -982726.7f)
	{
		iVar2 = func_383(bParam1, -982726.7f, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_356((iVar3 + func_905(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_896("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 0.003804697f)
	{
		return 1;
	}
	if (func_378(func_377(bParam1), 2))
	{
		if (!func_906(func_377(bParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_105(bParam1, 0))
	{
		if (!func_907(bParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_658(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_659(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_660(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_661(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_662(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_663(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_664(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_665(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_666(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_667(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_668(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_669(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_670(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_671(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_672(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_908(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_673(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_378(bParam0, 2))
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

int func_674(bool bParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_909(iParam2, -3.005759E+25f);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_910(uParam1, bParam0, Var3);
	return 1;
}

bool func_675(int iParam0)
{
	return func_111(&(Global_1956862.f_1565), iParam0, 1);
}

int func_676(int iParam0)
{
	return func_911(func_675(iParam0));
}

bool func_677(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_678(int iParam0)
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
		func_912(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_913(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_679(bool bParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1953279.f_3352.f_26)
	{
		if (bParam0 == Global_1953279.f_3352[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_680(bool bParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_266(bParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_266(bParam0, 1) /*12*/].f_11 - (Global_1953279.f_83[func_266(bParam0, 1) /*12*/].f_11 && iParam1));
}

bool func_681(int iParam0)
{
	return Global_1953279.f_595[iParam0] > 0;
}

void func_682(int iParam0)
{
	Global_1953279.f_595[iParam0]++;
}

int func_683(int iParam0)
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

void func_684(var uParam0, int iParam1)
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

int func_685(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_914(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_915(uParam2, iParam0, Var1);
	return 1;
}

bool func_686(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_40() == -1)
	{
		if (func_380(bParam0) && func_916(bParam0))
		{
			func_917(bParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_687(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_918(bParam0, iParam1);
	Var0 = { func_226(bParam0, 0, 1) };
	iVar5 = func_381(bParam0, &Var0, 0, 0);
	iVar6 = func_889(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_312(bParam0, -1.690907E-35f))
		{
			func_299(674, 1);
		}
		else if (func_40() == -1)
		{
			func_299(673, 0);
		}
	}
	if (func_227(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_688(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_919())
	{
		return;
	}
	switch (func_400(bParam0, -60352.49f))
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

void func_689(int iParam0)
{
	if (!func_262(iParam0))
	{
		return;
	}
	func_920(iParam0);
	func_921(iParam0);
}

void func_690(bool bParam0)
{
	if (func_312(bParam0, -1.640085E-16f))
	{
		func_398(-2.462866E+08f, 0, 255, 0, 0);
	}
	else if (func_312(bParam0, -4.561297E+28f))
	{
		func_398(-4249.272f, 0, 255, 0, 0);
	}
	else if (func_312(bParam0, 2.133228E-14f))
	{
		func_398(-5.046843E+11f, 0, 255, 0, 0);
	}
	else if (func_312(bParam0, 5.050617E+08f))
	{
		func_398(2.629104E-17f, 0, 255, 0, 0);
	}
}

bool func_691(bool bParam0, bool bParam1)
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
	if (func_105(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_922(bVar0) || func_923(bVar0))
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

bool func_692(bool bParam0, bool bParam1)
{
	if (!func_105(bParam0, 0))
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

void func_693(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 != -1)
	{
		return;
	}
	if (!func_819(bParam0))
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

bool func_694(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_226(bParam0, 0, 1) };
		if (func_371(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_372(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_368(bParam0, Var0, Var0.f_4, 0) };
				func_459(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_103(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return false;
		}
		func_695(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_924(bParam0, iParam1);
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

bool func_695(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_698(bParam0))
	{
		return false;
	}
	if (!func_103(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	return true;
}

bool func_696(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_379(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_925(bParam0, iParam1, iParam2);
	}
	Var1 = { func_226(bParam0, 0, 1) };
	Var6 = { func_368(bParam0, Var1, Var1.f_4, 0) };
	return func_926(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_697(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_692(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_40() == -1)
		{
			func_693(bVar0);
			if (iParam1 == 3787186f)
			{
				func_927(bVar0);
			}
		}
		if (!func_227(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_917(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_928(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_694(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == -1.197024E-12f || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_694(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_694(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == 3.3488E-21f && !func_929())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_930(bVar0))
				{
					func_694(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_694(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_931(Global_33, 2, 0, 1);
				if ((((func_819(bVar7) && !Global_26688) && bVar7 != bVar0) && !func_348(-0.0002099206f, 1)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, bVar7);
				}
				if (func_819(bVar7) && func_348(-0.0002099206f, 1))
				{
					if (!func_694(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_694(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_694(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_299(515, 1);
	}
	return true;
}

bool func_698(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

bool func_699(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_698(bParam0))
	{
		return false;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_819(bVar4))
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
		func_709(func_932(bParam0), func_542(bParam0, 0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_103(0))
	{
		if (func_695(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_696(bParam0, *iParam1, iParam2);
	}
	return false;
}

struct<2> func_700(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

bool func_701()
{
	return false;
}

int func_702(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_40() == 0)
	{
		func_436(iParam0, 0);
		return 0;
	}
	iVar0 = func_933(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_934(iVar0, sParam4, iParam5, 0);
	}
	func_935(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_703(bool bParam0)
{
}

void func_704(bool bParam0)
{
}

void func_705(bool bParam0)
{
}

void func_706(bool bParam0)
{
}

void func_707()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-9.596595E-08f) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-9.596595E-08f, -3.936833E-09f, 1);
	}
}

void func_708(bool bParam0, int iParam1)
{
	var uVar0;

	func_534(bParam0, iParam1, &uVar0);
}

void func_709(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_445(iParam0, &iVar0, &iVar1);
	if (!func_446(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_721(iParam0, 1024))
	{
		return;
	}
	func_447(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_710(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_445(iParam0, &iVar0, &iVar1);
	if (!func_446(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_721(iParam0, 1024))
	{
		return;
	}
	func_447(iVar0, iVar1);
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

void func_711(bool bParam0)
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

void func_712(bool bParam0)
{
	if (func_40() != -1)
	{
		return;
	}
}

void func_713(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_714(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_936(Global_1902818.f_37);
	func_553(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_937(bParam0), 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

float func_715(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = PED::_GET_PED_DAMAGE_CLEANLINESS(iVar0);
	iVar2 = func_938(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (TASK::_0x7CB99FADDE73CD1B(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(iVar0, 2.205541E-37f) || ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar0))
		{
			iVar6 = func_939(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return -1.013623E+11f;
		case 1:
			return 2.192584E+23f;
		case 0:
			return -1.656824E+37f;
		default:
			break;
	}
	return -1.656824E+37f;
}

int func_716(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		iVar0 = func_940(iParam2, bParam0);
		if (iVar0 > 0)
		{
			if (iParam1 < iVar0)
			{
				iVar0 = iParam1;
			}
			iParam1 = (iParam1 - iVar0);
			func_941(&iParam2, bParam0, &iVar0, bParam4, iParam5, iParam6);
			iParam1 = (iParam1 + iVar0);
		}
	}
	iParam1 = func_942(PLAYER::PLAYER_PED_ID(), bParam0, iParam1, bParam3, iParam6);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_717(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_350(bParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_216(bParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_943(bParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_944(bParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_943(bParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_218("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_718(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_719(int iParam0)
{
	if (func_721(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_720(int iParam0)
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

bool func_721(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_722(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_723()
{
	if (!func_524())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

bool func_724(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (iParam0 == 6 && iParam1 == 4)
	{
		return true;
	}
	return false;
}

bool func_725(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_726(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_379(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_945(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_727(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_368(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

float func_728(bool bParam0)
{
	if (func_105(bParam0, 0))
	{
		if (func_312(bParam0, -1.823469E-06f))
		{
			if (func_312(bParam0, 5.454413E+35f))
			{
				return func_946();
			}
			return func_947();
		}
		else if (func_312(bParam0, 4.644778E+30f))
		{
			return func_741();
		}
		else if (func_312(bParam0, 8.368431E+20f))
		{
			return func_948();
		}
		else if (func_312(bParam0, 888.6404f))
		{
			return func_744();
		}
	}
	if (Global_1940072.f_12)
	{
		return func_947();
	}
	else
	{
		return func_744();
	}
	return func_744();
}

float func_729()
{
	return 7.633434E-31f;
}

bool func_730(bool bParam0)
{
	return (bParam0 == 1.174009E+12f || bParam0 == -4.629755E-24f);
}

float func_731()
{
	return 0.1210489f;
}

bool func_732(bool bParam0)
{
	if ((((((((((func_312(bParam0, 888.6404f) || func_312(bParam0, -8.87647E+33f)) || func_312(bParam0, -1.086842E+20f)) || func_312(bParam0, -2.635625E-06f)) || func_312(bParam0, 1.378098E+25f)) || func_312(bParam0, 1.898534E+15f)) || func_312(bParam0, 1.763507E+18f)) || func_312(bParam0, -1.823469E-06f)) || func_312(bParam0, 4.644778E+30f)) || func_312(bParam0, -1.064618E-36f)) || bParam0 == -1.954145E-33f)
	{
		return true;
	}
	return false;
}

float func_733()
{
	return 0.1190805f;
}

float func_734()
{
	return 0.1209659f;
}

float func_735()
{
	return 0.122911f;
}

float func_736()
{
	return 0.1228801f;
}

float func_737()
{
	return 0.0001162227f;
}

float func_738()
{
	return 0.03022764f;
}

float func_739()
{
	return 0.122879f;
}

float func_740()
{
	return 0.0004730224f;
}

float func_741()
{
	return 1.815963E-06f;
}

float func_742()
{
	return 0.1109248f;
}

float func_743()
{
	return 0.1065672f;
}

float func_744()
{
	return 0.1209657f;
}

float func_745()
{
	return 0.1210337f;
}

bool func_746(int iParam0)
{
	return func_279(Global_1940072.f_7, iParam0);
}

bool func_747(bool bParam0)
{
	int iVar0;

	if (func_746(1))
	{
		if (bParam0)
		{
			func_218("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_746(2) && MISC::GET_GAME_TIMER() >= Global_17395)
	{
		if (bParam0)
		{
			iVar0 = func_949(Global_33);
			if (iVar0 != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(iVar0))
				{
					func_218("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_218("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_746(4194304))
	{
		return false;
	}
	return true;
}

bool func_748(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		PED::_0x6B67320E0D57856A(Global_33, &Var0, 2, false);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return true;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_218("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_749(bool bParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				if (bParam0)
				{
					func_218("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					func_218("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_168(fParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam2 || VEHICLE::GET_DRIVER_OF_VEHICLE(iVar0) == Global_33)
			{
				return false;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_33))
	{
		return false;
	}
	return true;
}

bool func_750(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return false;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1069547520)
	{
		return true;
	}
	return false;
}

int func_751(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_122(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_950(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_951(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_952(iVar1);
			}
			break;
		case 3:
			iVar3 = func_953(iVar5);
			iVar4 = func_954(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_955(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_752(int iParam0, int iParam1, bool bParam2)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_754(func_956(iParam0, iParam1, bParam2)));
}

struct<8> func_753(int iParam0, int iParam1)
{
	return func_956(iParam0, iParam1, 1);
}

char* func_754(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_755(int iParam0, bool bParam1)
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

bool func_756(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_757(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (Global_17418.f_2992 == 1)
	{
		if (iParam0 == -1)
		{
			return false;
		}
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_17418.f_2992.f_1[iVar1 /*5*/].f_4 == 0)
			{
			}
			else if (func_2(Global_17418.f_2992.f_1[iVar1 /*5*/].f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_2(Global_1220811.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1))
					{
					}
					else
					{
						fVar0 = func_957(Global_17418.f_2992.f_1[iVar1 /*5*/].f_1, Global_1220811.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1);
						if (fVar0 < 1133903872)
						{
							return false;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	if (func_958(4))
	{
		return false;
	}
	if (func_760())
	{
		return true;
	}
	if (func_959())
	{
		return false;
	}
	if (func_960(1, 255))
	{
		return false;
	}
	if (func_122(func_961()) && Global_1220811.f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_758(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_348(Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_759(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_962(Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_760()
{
	return func_963(func_121(0));
}

bool func_761(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_META_PED_USING_COMPONENT(iParam0, iParam1);
}

int func_762()
{
	bool bVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &bVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -3.273909E-18f)
	{
		if (bVar0 == -3.273909E-18f)
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(bVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(bVar0)) && !func_444(bVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_33, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(bVar0) && func_444(bVar0)) || WEAPON::_IS_WEAPON_LASSO(bVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (bVar0 == -3.273909E-18f)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_763(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 21;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 24;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 27;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 28;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 29;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 30;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 32;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 34;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 35;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 38;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 49;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 50;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 51;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 52;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 53;
		case joaat("PROVISION_WLDFLWR_AGARITA"):
			return 40;
		case joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET"):
			return 41;
		case joaat("PROVISION_WLDFLWR_BITTERWEED"):
			return 42;
		case joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"):
			return 43;
		case joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER"):
			return 44;
		case joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY"):
			return 45;
		case joaat("PROVISION_WLDFLWR_CREEK_PLUM"):
			return 46;
		case joaat("PROVISION_WLDFLWR_WILD_RHUBARB"):
			return 47;
		case joaat("PROVISION_WLDFLWR_WISTERIA"):
			return 48;
	}
	return 0;
}

void func_764(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_964(iParam0);
	iVar1 = func_763(bVar0);
	if (iVar1 != iParam0)
	{
		func_965(iVar1, 4);
	}
	if (!func_966(iParam0))
	{
		return;
	}
	if (func_967(iParam0))
	{
		return;
	}
	func_965(iParam0, 4);
	func_968(iParam0, bParam1);
	if (!func_969(iParam0))
	{
		func_970(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_67(0, 0, 1))
		{
			func_971(1, 6);
		}
	}
}

bool func_765(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (TASK::CAN_START_ITEM_INTERACTION(iParam0, bParam1, iParam2, iParam3))
	{
		TASK::START_TASK_ITEM_INTERACTION(iParam0, bParam1, iParam2, iParam3, 0, -1f);
		Global_1940072.f_26 = 1;
		return true;
	}
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return false;
}

void func_766(bool bParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;

	Var0.f_1 = 20;
	if ((func_312(bParam0, 1.763507E+18f) || func_312(bParam0, 8.273569E-15f)) || func_312(bParam0, -1.230845E+19f))
	{
		bVar37 = true;
	}
	if (func_323(bParam0) == 4.324946E+36f)
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bParam0, &Var0);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-96713.62f == Var22.f_1)
			{
				fVar30 = func_972(0, Var22.f_2);
				func_973(Var22.f_2);
				bVar39 = true;
			}
			else if (-0.1614907f == Var22.f_1)
			{
				fVar31 = func_972(2, Var22.f_2);
				func_974(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (2.973069E-25f == Var22.f_1)
			{
				fVar32 = func_972(1, Var22.f_2);
				func_975(Var22.f_2);
			}
			else if (-7.847055E+23f == Var22.f_1)
			{
				fVar33 = func_837(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_838(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (2.800259E+28f == Var22.f_1)
			{
				fVar34 = func_837(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_838(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1.406341E+22f == Var22.f_1)
			{
				fVar35 = func_837(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_838(1, fVar35, 1, 1, bVar37);
			}
			else if (6.109425E+35f == Var22.f_1)
			{
				fVar36 = func_840(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_841(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-1.597577E+09f == Var22.f_1)
			{
				fVar36 = func_840(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_841(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-0.0001180082f == Var22.f_1)
			{
				fVar36 = func_840(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_841(18, fVar36, 1, 1);
			}
			else if (7.468359E+28f == Var22.f_1)
			{
				fVar36 = func_840(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_841(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (8.651734E+09f == Var22.f_1)
			{
				fVar36 = func_840(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_841(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-2.200394E-06f == Var22.f_1)
			{
				fVar36 = func_840(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_841(1, fVar36, 1, 1);
			}
			else if (-3.61937E+09f == Var22.f_1)
			{
				func_839(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_312(bParam0, -3.480943E+19f))
		{
			func_107(func_556(-3.750745E+13f), 1);
		}
		if (func_312(bParam0, -3.458856E-14f))
		{
			func_107(func_556(-2.12416E-30f), 1);
		}
		if (bVar38)
		{
			func_107(func_556(1.131948E-13f), 1);
		}
		switch (bParam0)
		{
			case -1735850413: /* GXTEntry: "Pickled Egg" */
			case -241345764: /* GXTEntry: "Almonds" */
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 1.757621E+16f, 1);
				break;
		}
		PLAYER::_SET_USED_ITEM_EFFECT(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_767(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

bool func_768()
{
	if (Global_1953279.f_3503)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1953279.f_3501)) < 1250)
	{
		return true;
	}
	if (func_976())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
	{
		return true;
	}
	return false;
}

int func_769(bool bParam0)
{
	int iVar0;

	iVar0 = func_228(bParam0);
	if (((iVar0 == 5.002459E-36f || iVar0 == -9.847085E+19f) || func_312(bParam0, 3.611922E-33f)) || func_312(bParam0, -1.186825E-08f))
	{
		return 1;
	}
	return 0;
}

void func_770(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_771(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_264(&iVar0))
	{
		if (bParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_772(bool bParam0)
{
	if (-1.527139E-27f == func_977(5.002459E-36f))
	{
		if (func_264(bParam0))
		{
			return true;
		}
	}
	else if (func_294(-9.847085E+19f, bParam0) || func_312(func_978(2.057189E+24f), -1.186825E-08f))
	{
		if (func_264(bParam0))
		{
			return true;
		}
	}
	return false;
}

float func_773()
{
	float fVar0;

	fVar0 = 2.505841E+17f;
	switch (func_762())
	{
		case 0:
			fVar0 = 2.505841E+17f;
			break;
		case 3:
			fVar0 = 7.176239E-05f;
			break;
		case 1:
			fVar0 = -1.118024E+38f;
			break;
		case 2:
			fVar0 = 0;
			break;
	}
	return fVar0;
}

float func_774()
{
	float fVar0;

	fVar0 = 7.033603E-17f;
	switch (func_762())
	{
		case 0:
			fVar0 = 7.033603E-17f;
			break;
		case 3:
			fVar0 = -3.523563E-08f;
			break;
		case 1:
			fVar0 = 4.176883E+30f;
			break;
		case 2:
			fVar0 = 0;
			break;
	}
	return fVar0;
}

float func_775()
{
	float fVar0;

	fVar0 = -1.234154E-27f;
	switch (func_762())
	{
		case 0:
			fVar0 = -1.234154E-27f;
			break;
		case 3:
			fVar0 = -6.997053E+25f;
			break;
		case 1:
			fVar0 = -8.009408E-10f;
			break;
		case 2:
			fVar0 = 0;
			break;
	}
	return fVar0;
}

float func_776()
{
	float fVar0;

	fVar0 = 1.111775E+20f;
	switch (func_762())
	{
		case 0:
			fVar0 = 1.111775E+20f;
			break;
		case 3:
			fVar0 = -1.260444E-14f;
			break;
		case 1:
			fVar0 = 8.360504E-33f;
			break;
		case 2:
			fVar0 = 0;
			break;
	}
	return fVar0;
}

void func_777(int iParam0)
{
	Global_1953279 = (Global_1953279 - (Global_1953279 && iParam0));
}

int func_778(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1953279.f_3352.f_28;
		case 81053684:
			return Global_1953279.f_3352.f_30;
		case -525676072:
			return Global_1953279.f_3352.f_29;
		case -1719060085:
			return Global_1953279.f_3352.f_31;
		case 1388798186:
			return Global_1953279.f_3352.f_33.f_7;
		case 119907797:
			return Global_1953279.f_3352.f_32;
		case -999503751:
			if (bParam1)
			{
				return Global_1953279.f_3352.f_27;
			}
			else
			{
				return func_979();
			}
			break;
	}
	return 0;
}

int func_779(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1953279.f_3352.f_33.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1953279.f_3352.f_33.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1953279.f_3352.f_33;
			break;
		case 1388798186:
			iVar0 = 1;
			break;
		case 119907797:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

int func_780(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (Global_1953279.f_3352.f_26 >= 25)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_679(bVar1, &uVar0))
	{
		return 0;
	}
	if (!func_980(bParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_981(bParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1953279.f_3352[Global_1953279.f_3352.f_26] = bVar1;
	Global_1953279.f_3352.f_26++;
	*uParam1++;
	return 1;
}

void func_781()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3352.f_26)
	{
		Global_17418.f_55.f_664[iVar0] = Global_1953279.f_3352[iVar0];
		iVar0++;
	}
	Global_17418.f_55.f_664.f_27 = Global_1953279.f_3352.f_27;
	Global_17418.f_55.f_664.f_28 = Global_1953279.f_3352.f_28;
	Global_17418.f_55.f_664.f_29 = Global_1953279.f_3352.f_29;
	Global_17418.f_55.f_664.f_30 = Global_1953279.f_3352.f_30;
	Global_17418.f_55.f_664.f_31 = Global_1953279.f_3352.f_31;
	Global_17418.f_55.f_664.f_32 = Global_1953279.f_3352.f_32;
	Global_17418.f_55.f_664.f_26 = Global_1953279.f_3352.f_26;
}

bool func_782(int iParam0)
{
	return func_983(func_982(iParam0));
}

void func_783(bool bParam0, bool bParam1)
{
	struct<2> Var0;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	char* sVar10;

	if (!func_105(bParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_539(bParam1, &Var0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var0))
	{
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		fVar6 = 4.808429E-35f;
		iVar7 = func_984(bParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_985(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_754(func_986(iVar7));
		}
		else
		{
			bVar8 = func_545(bParam1);
			if (func_105(bVar8, 0))
			{
				bParam1 = bVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = MISC::VAR_STRING(0, func_542(bParam1, 0));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		fVar6 = 4.808429E-35f;
		iVar7 = func_984(bParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_985(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_754(func_986(iVar7));
		}
		else
		{
			bVar9 = func_545(bParam1);
			if (func_105(bVar9, 0))
			{
				bParam1 = bVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = MISC::VAR_STRING(0, func_542(bParam1, 0));
		}
	}
	sVar10 = func_548(MISC::VAR_STRING(10, sVar3, sVar5), fVar6);
	func_553(sVar10, Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, fVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_784(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_987();
	}
	if (bParam0)
	{
		func_430(8);
		func_430(512);
	}
	else
	{
		func_430(8);
		func_430(16);
	}
}

int func_785()
{
	return Global_1953279.f_1;
}

bool func_786(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_228(bParam1);
	iVar1 = func_228(bParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_988(bParam1) && func_988(bParam0))
	{
		return true;
	}
	return false;
}

void func_787(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_989(bParam0, 0, 0, bParam3, bParam5);
	func_502(bParam1, 1, bParam2, bParam4, bParam3, bParam5);
}

void func_788()
{
	int iVar0;

	Global_1953279.f_1557 = Global_1953279.f_1676;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953279.f_1557.f_1[iVar0 /*3*/] = { Global_1953279.f_1676.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_789(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*bParam1 == 4.506009E-09f || *bParam1 == 7.777273E-38f) || *bParam1 == 5.354456E-12f)
		{
			iVar0 = 16;
			if (func_228(uParam0->f_1[iVar0 /*3*/]) != 2.251657E+29f)
			{
				return;
			}
			iVar1 = func_990(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1953279.f_83[iParam2 /*12*/])
			{
				*bParam1 = iVar1;
				return;
			}
		}
		if (!func_991(*bParam1, iParam2))
		{
			*bParam1 = Global_1953279.f_1676.f_1[iParam2 /*3*/];
			return;
		}
	}
	*bParam1 = Global_1953279.f_83[iParam2 /*12*/];
}

void func_790(int iParam0)
{
	func_992(&(Global_1953279.f_2938), iParam0);
}

void func_791(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_993(&(Global_1953279.f_2938), iParam0, iParam1);
}

void func_792(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_793(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam1;
	bVar1 = func_507(bVar0, 1);
	if (bParam3 && func_312(uParam0->f_1[iParam2 /*3*/], 1.280781E-26f))
	{
		func_994(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_427(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_995(uParam0, bVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_996(uParam0, bVar0, iParam2);
			break;
		case -338487716:
			func_997(uParam0, bVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_998(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1742327865:
			func_999(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1250092473:
			func_1000(uParam0, bVar1, bVar0, iParam4);
			break;
		case -893163968:
			func_1001(uParam0, bVar1, bVar0, iParam4);
			break;
		case -450913544:
			func_1002(uParam0, bVar1, bVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_1003(uParam0, bVar1, bVar0, iParam4);
			break;
		case 304805134:
			func_1004(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1145151482:
			func_1005(uParam0, bVar1, bVar0, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_1006(uParam0, bVar1, bVar0, iParam4);
			break;
		case -426430150:
			func_1007(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_1008(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1958421083:
			func_1009(uParam0, bVar1, bVar0, iParam4);
			break;
		case -1944638739:
			func_1010(uParam0, bVar1, bVar0, iParam4);
			break;
	}
}

int func_794(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = false;
	if (func_785() == 4.387347E-38f)
	{
		bVar0 = true;
	}
	if (iParam2 == 1.494364E-28f)
	{
		return 1.494364E-28f;
	}
	if (iParam2 != 0 && func_1011(bParam0, bVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_1012(bParam0, func_427(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_795(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar1 = -1;
	bVar2 = false;
	if (bParam5)
	{
		iVar1 = func_1013(Global_1953279.f_1676);
		if (bParam4)
		{
			bParam4 = iVar1 == -1;
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_425(4718592) && !func_1014(func_228(Global_1953279.f_1557.f_1[uParam0->f_2[iVar0 /*2*/] /*3*/])))
		{
		}
		else
		{
			func_1015(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2, iVar1);
			bVar2 = true;
		}
		iVar0++;
	}
	if (!bVar2)
	{
		return;
	}
	if (bParam4)
	{
		bVar3 = false;
		if (Global_1953279.f_1676 != 2.716622E-21f || !func_985(2, -1))
		{
			bVar3 = true;
		}
		else if (!func_312(Global_1953279.f_1676, -7.339854E+32f) && (Global_1953279.f_1676 != 2.716622E-21f || !func_985(2, -1)))
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			Global_1953279.f_1676 = 2.716622E-21f;
			Global_1953279.f_1557 = 2.716622E-21f;
			func_1016(2.716622E-21f, 1, 1);
			func_1017(-1, 0, 6);
			func_268(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_784(0, 1);
	}
}

int func_796(var uParam0, float fParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1018(&uParam0, iParam4, bParam5, iParam6);
}

bool func_797(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_103(0))
	{
		return func_1019(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_375(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_213(bParam5), &Param0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_798(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (func_1020(Global_33, iParam0, 0, 1) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, iParam0))
	{
		return true;
	}
	return false;
}

bool func_799()
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-3.515305E-20f))
	{
		func_467(2);
		return false;
	}
	if (!func_524())
	{
		func_467(9);
		return false;
	}
	if (Global_1051832.f_92[34 /*75*/].f_1 & 128 != 0)
	{
		func_467(3);
		return false;
	}
	Var0 = { func_121(0) };
	if (func_122(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_530(PLAYER::PLAYER_ID(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_1021(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_751(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_752(iVar4, 2.098029E-22f, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_467(iVar2);
			return false;
		}
	}
	if (func_1022())
	{
		func_467(4);
		return false;
	}
	if (func_960(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && (Global_1051832.f_92[34 /*75*/].f_49 && 2f) == 0)
	{
		func_467(5);
		return false;
	}
	if (func_1023(131072, 255))
	{
		func_467(7);
		return false;
	}
	if (func_1024())
	{
		func_467(8);
		return false;
	}
	return true;
}

bool func_800(float fParam0, int iParam1)
{
	if (((PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || func_168(iParam1, 1024)) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, Global_34, fParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_801(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_3 & 32 != 0;
	}
	return func_1023(32, iParam0);
}

bool func_802(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

void func_803(bool bParam0)
{
	if (bParam0)
	{
		func_1025(4);
	}
	else
	{
		func_515(4);
	}
}

void func_804(bool bParam0)
{
	if (!(bParam0 && Global_1915643.f_22504))
	{
		if (bParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(2, 4.553053E+26f);
		}
		else
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(2, 4.553053E+26f, 0);
		}
	}
	Global_1915643.f_22504 = bParam0;
}

bool func_805()
{
	return Global_1915643.f_20643;
}

int func_806(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-1.072798E+21f))
	{
		return 0;
	}
	iVar0 = Global_1295619.f_149[Global_1295619];
	iVar1 = Global_1295619.f_3;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::IS_PED_INCAPACITATED(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
			{
				return 0;
			}
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
			{
				return 0;
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
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915643.f_20638 || Global_1915643.f_22504.f_1)
		{
			return 0;
		}
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
		{
			return 0;
		}
	}
	if (func_1026())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940072.f_10 || Global_1940072.f_11) || Global_1940072.f_12) || Global_1940072.f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1235672.f_9479 != -1)
		{
			return 0;
		}
		if (Global_1138658[iVar4 /*56*/].f_34 & 1 != 0 && Global_1138658[iVar4 /*56*/].f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1140755.f_293)
		{
			return 0;
		}
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
		{
			return 0;
		}
		else if (Global_1572887.f_72.f_40 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				return 0;
			}
			if (Global_1048581)
			{
				return 0;
			}
			if (Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_807(int iParam0, int iParam1, int iParam2)
{
	return func_279(Global_1206151[iParam2 /*10*/][iParam0], iParam1);
}

int func_808(var uParam0, struct<21> Param1)
{
	if (!func_1027(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

int func_809(bool bParam0, int iParam1)
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

int func_810(bool bParam0, bool bParam1)
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

int func_811(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_105(bParam0, 0))
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

bool func_812(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
	}
	if (func_312(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_813(bool bParam0, int iParam1)
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

char* func_814(bool bParam0)
{
	bool bVar0;

	if (!func_105(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_542(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

bool func_815(bool bParam0)
{
	if (func_228(bParam0) == -1.955052E+34f || func_228(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_816(bool bParam0)
{
	int iVar0;

	if (!func_105(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_544(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

void func_817(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

bool func_818(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_213(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_819(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

int func_820(bool bParam0)
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

int func_821(var uParam0, int iParam1)
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

int func_822(bool bParam0)
{
	int iVar0;

	iVar0 = func_228(bParam0);
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

int func_823(int iParam0)
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_824(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_350(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_1028(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_1029(bParam1, bParam4));
	}
	return iVar0;
}

void func_825(int iParam0)
{
	if (!func_105(Global_1940239.f_11588, 0))
	{
		Global_1940239.f_7 = iParam0;
	}
	else if ((((func_400(Global_1940239.f_11588, 512441.5f) != 0 && Global_1940239.f_11587 != 0) && Global_1940239.f_11587 != -2.509875E-36f) && !Global_1915643.f_20638) && !Global_1915643.f_22504.f_1)
	{
		Global_1940239.f_7 = 1;
	}
	else
	{
		Global_1940239.f_7 = 0;
	}
}

void func_826(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_49);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_50);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_51);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_52);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_53);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_54);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_55);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_56);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_57 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_57 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_57);
	}
}

bool func_827(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

bool func_828(var uParam0, var uParam1)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_826(uParam0);
		return false;
	}
	return true;
}

int func_829(bool bParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_830(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_49.f_27 != -1 && !bParam1)
	{
		return;
	}
	iVar0 = func_350(uParam0->f_49.f_62, 0, 0, 0);
	if (bParam2)
	{
		iVar0 = (iVar0 - 1);
	}
	iVar1 = func_1030(uParam0->f_49.f_62, 0);
	iVar2 = func_225(uParam0->f_49.f_62, uParam0->f_49.f_63, func_583(), 0);
	if (iVar1 == -1)
	{
		iVar1 = iVar2;
	}
	else
	{
		iVar1 = (iVar1 - iVar0);
	}
	uParam0->f_49.f_27 = func_593(iVar1, iVar2);
}

bool func_831()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-1.944106E+11f);
}

void func_832(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_91(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

float func_833(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			break;
		case 1:
			fVar0 = PED::_GET_PED_STAMINA(Global_33);
			fVar1 = PED::_GET_PED_MAX_STAMINA(Global_33);
			break;
		case 2:
			fVar0 = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			fVar1 = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_834(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_GET_NUM_RESERVED_HEALTH(iVar0));
	}
	iVar1 = func_1031(2);
	func_1032((fParam0 * IntToFloat(iVar1)), 0);
}

void func_835(float fParam0, bool bParam1)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(10);
	}
	iVar0 = func_1033(2);
	func_1034((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_836(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(iVar0));
	}
	iVar1 = func_1035(2);
	func_1036((fParam0 * IntToFloat(iVar1)), 0);
}

float func_837(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 1120403456) * 1120403456);
	}
	return ((fParam0 / 1090519040) * 1120403456);
}

void func_838(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_1037(iParam0, fParam1, 1);
	}
	func_1039(iParam0, (func_1038(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_839(float fParam0, bool bParam1)
{
	if (fParam0 > 1092616192)
	{
		fParam0 = 1092616192; /* Float: 10f */
	}
	if (func_1040())
	{
		func_1041(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41++;
		if (5 == Global_17418.f_55.f_2459.f_41)
		{
			func_299(109, 0);
		}
	}
}

float func_840(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 1023879938);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 1123024896);
		case 3:
			return (fParam0 * 1161035776);
		default:
			break;
	}
	return fParam0;
}

int func_841(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_1042(iParam0, fParam1, bParam2, bParam3);
}

void func_842(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam2 || func_312(bParam0, -3.480943E+19f))
	{
		func_107(func_556(-3.750745E+13f), 1);
	}
	if (func_312(bParam0, -3.458856E-14f))
	{
		func_107(func_556(-2.12416E-30f), 1);
	}
	if (func_312(bParam0, 1.763507E+18f))
	{
		func_1043(func_763(bParam0), 1);
	}
	if (func_312(bParam0, 2.343408E+31f))
	{
		func_107(func_106(7.642884E+10f, -129968.5f), 1);
	}
	if (func_312(bParam0, 1.987618E+33f))
	{
		func_107(func_556(-2.413646E-08f), 1);
	}
	if (func_312(bParam0, 1894063f))
	{
		func_107(func_556(1.884128E-06f), 1);
	}
	switch (bParam0)
	{
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HAYCUBE"):
			func_107(func_106(7.642884E+10f, -2.03267E-35f), 1);
			break;
	}
	switch (bParam0)
	{
		case -611782825:
			func_107(func_106(7.642884E+10f, -3.483875E-29f), 1);
			break;
		case joaat("CONSUMABLE_MOONSHINE"):
			func_107(func_106(7.642884E+10f, 5.234738E-28f), 1);
			break;
		case joaat("CONSUMABLE_WHISKEY_USED"):
		case joaat("CONSUMABLE_WHISKEY"):
			func_107(func_106(7.642884E+10f, 7.840773E-07f), 1);
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			func_107(func_106(7.642884E+10f, 7.177263E+37f), 1);
			break;
		case joaat("CONSUMABLE_SNAKE_OIL"):
		case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
		case joaat("CONSUMABLE_SNAKE_OIL_USED"):
			func_107(func_106(7.642884E+10f, -3.568742E-26f), 1);
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO"):
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			func_107(func_106(7.642884E+10f, -1.888559E+33f), 1);
			break;
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_MEDICINE"):
			func_107(func_106(7.642884E+10f, 4.325028E-21f), 1);
			break;
		case joaat("CONSUMABLE_HERBIVORE_BAIT"):
		case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
			func_107(func_106(7.642884E+10f, -4.824814E+07f), 1);
			break;
		case joaat("CONSUMABLE_PREDATOR_BAIT"):
		case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
			func_107(func_106(7.642884E+10f, -2.336031E+31f), 1);
			break;
	}
	if (func_40() == -1)
	{
		if (bParam0 == -8.536846E-33f)
		{
			func_107(func_106(7.642884E+10f, 1.386211E-17f), 1);
		}
	}
	if (bParam1)
	{
		func_107(func_556(1.131948E-13f), 1);
	}
	func_1044(bParam0, iParam3);
}

int func_843(int iParam0)
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

bool func_844()
{
	return Global_1896762.f_352;
}

bool func_845(var uParam0)
{
	return func_99(uParam0, 1);
}

void func_846(var uParam0)
{
	func_220(uParam0, 1);
}

void func_847(var uParam0)
{
	func_96(1);
	func_100(uParam0, 4);
}

bool func_848(var uParam0)
{
	int iVar0;

	uParam0->f_75 = Global_1913621.f_1584;
	uParam0->f_74 = Global_1913621.f_1585;
	if (func_99(uParam0, 2))
	{
		Global_1913621.f_1576 = 0;
		uParam0->f_45 = 0;
		iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913621[0 /*9*/].f_1))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913621[0 /*9*/].f_1);
		}
		uParam0->f_25 = func_1045(iVar0);
		uParam0->f_26 = func_1046(iVar0);
		func_1047(uParam0, uParam0->f_25, 4.431614E+14f);
		func_1047(uParam0, -0.0006595731f, 4.431614E+14f);
		func_1047(uParam0, 2.555698E+22f, 4.431614E+14f);
		func_1047(uParam0, -9.497565E-20f, 4.431614E+14f);
		func_1047(uParam0, 2.498006E+28f, 4.431614E+14f);
		return true;
	}
	if (uParam0->f_44 == 0)
	{
		Global_1913621.f_1576 = 0;
		uParam0->f_45 = 0;
		func_1048(uParam0, 2.273041E-17f);
		uParam0->f_44++;
		return false;
	}
	else if (uParam0->f_44 == 1)
	{
		func_1048(uParam0, -4.029766E+29f);
		uParam0->f_44++;
		return false;
	}
	else
	{
		func_1048(uParam0, -1.428267E+31f);
		uParam0->f_44 = 0;
	}
	uParam0->f_45 = 0;
	return true;
}

bool func_849(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	if ((func_99(uParam0, 2) || func_99(uParam0, 65536)) && DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_29))
	{
		return true;
	}
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "filter", func_594(func_99(uParam0, 2), -8.597887E+17f, func_1049(uParam0->f_42)));
	if (func_99(uParam0, 2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterCount", 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterIndex", 0);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "headerText", -2.87259E-23f);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterCount", 5 + 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterIndex", uParam0->f_42);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_29, "tipText", "");
	uParam0->f_41 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_29, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_29, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_1050(&(uParam0->f_31[iVar0]), &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_36[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_29, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_36[iVar0], &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_36[iVar0], &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_850(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_583();
	iVar0 = uParam0->f_45;
	while (iVar0 <= (Global_1913621.f_1576 - 1))
	{
		if (func_105(Global_1913621[iVar0 /*9*/].f_6, 0))
		{
			func_1051(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_45 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_45 = 0;
	if (uParam0->f_48 == 0)
	{
		func_220(uParam0, 128);
	}
	uParam0->f_46 = 0;
	return true;
}

void func_851(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_30))
	{
		uParam0->f_30 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_29, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_30);
	}
	uParam0->f_61 = 2.273041E-17f;
	uParam0->f_60 = 0;
	uParam0->f_59 = 0;
}

bool func_852(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_583();
	iVar0 = uParam0->f_45;
	while (iVar0 <= (Global_1913621.f_1576 - 1))
	{
		if ((func_99(uParam0, 128) && Global_1913621[iVar0 /*9*/].f_2) || !func_99(uParam0, 128))
		{
			if (Global_1913621.f_1585 != 0)
			{
				uParam0->f_74 = Global_1913621.f_1585;
				bVar3 = func_312(Global_1913621[iVar0 /*9*/].f_6, Global_1913621.f_1585);
				if (func_99(uParam0, 16384) == bVar3)
				{
				}
				else
				{
					func_1051(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_45 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_45 = 0;
				if (!func_99(uParam0, 16384) && Global_1913621.f_1585 != 0)
				{
					func_189(uParam0, 16384);
					return false;
				}
				uParam0->f_46 = 0;
				func_220(uParam0, 16384);
				return true;
			}
		}
	}
}

bool func_853(var uParam0, bool bParam1)
{
	int iVar0;

	func_189(uParam0, 256);
	if (bParam1 && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-3.556355E-20f))
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-3.556355E-20f, 0.01546555f))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = UIAPPS::LAUNCH_UIAPP_BY_HASH(-3.556355E-20f);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_854(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_583();
	iVar0 = uParam0->f_45;
	while (iVar0 <= (Global_1913621.f_1576 - 1))
	{
		func_1052(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_45 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	func_220(uParam0, 512);
	uParam0->f_45 = 0;
	return true;
}

void func_855(bool bParam0)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1.936208E-37f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -3.403642E+24f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 6.94097E+19f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1.076797E-08f, false);
	iVar0 = func_1053(Global_33);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1.236065E-28f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 527.8984f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.740794E-14f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 5.074759E+21f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1.121336E-21f, false);
	}
}

void func_856(var uParam0)
{
	int iVar0;

	func_93(uParam0);
	func_1054(uParam0, 1);
	uParam0->f_1[2] = func_163("CAMP_REC_QUIT", 9.715933E-10f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	func_164(uParam0->f_1[2], 1, 1, 1);
	uParam0->f_1[1] = func_163("CAMP_REC_MAKE", 439.9228f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	if (!func_99(uParam0, 2))
	{
		if (func_105(uParam0->f_60, 0))
		{
			uParam0->f_62 = uParam0->f_60;
			uParam0->f_63 = uParam0->f_61;
			func_1055(uParam0, &(uParam0->f_59));
		}
		else
		{
			uParam0->f_62 = 0;
		}
		if (func_105(uParam0->f_60, 0))
		{
			if (func_399(uParam0->f_60))
			{
				func_290(uParam0->f_1[1], "CAMP_REC_COOK", 1);
			}
			else if (func_400(uParam0->f_60, -1.29539E-20f) == -4.839888E+13f)
			{
				func_290(uParam0->f_1[1], "CAMP_REC_BREW", 1);
			}
			else
			{
				func_290(uParam0->f_1[1], "CAMP_REC_MAKE", 1);
			}
		}
		uParam0->f_1[3] = func_163(func_1056(uParam0), -2.072734E+13f, 1, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	}
	else
	{
		uParam0->f_1[7] = func_163("CAMP_ADD_TASK", -5.63933E-33f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	}
	uParam0->f_1[5] = func_1057("RECIPE", -1.454045E-11f, 1.475287E+23f, 0);
	func_1058(uParam0->f_1[5], -1.454045E-11f);
	func_1058(uParam0->f_1[5], 1.475287E+23f);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_58))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants");
	}
	if (iVar0 > 1 && func_105(uParam0->f_62, 0))
	{
		func_164(uParam0->f_1[5], 1, 1, 1);
	}
	else
	{
		func_164(uParam0->f_1[5], 0, 1, 1);
	}
	uParam0->f_1[6] = func_163("INFO", -2.239985E+36f, 1, 0, 0, 2, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	if (!func_99(uParam0, 32768))
	{
		func_290(uParam0->f_1[6], "INFO", 1);
	}
	else
	{
		func_290(uParam0->f_1[6], "INGREDIENTS", 1);
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_30) == 0)
	{
		func_859(uParam0);
		func_164(uParam0->f_1[6], 0, 1, 1);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}
	func_860(uParam0, uParam0->f_62, uParam0->f_63);
}

bool func_857(var uParam0)
{
	int iVar0;

	if (!func_99(uParam0, 2))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (uParam0->f_26 != func_1046(iVar0))
	{
		uParam0->f_26 = func_1046(iVar0);
		func_100(uParam0, 15);
		return true;
	}
	if (uParam0->f_25 != func_1045(iVar0))
	{
		func_100(uParam0, 4);
		return true;
	}
	return false;
}

bool func_858(var uParam0)
{
	if (Global_1913621.f_1584 != uParam0->f_75 || Global_1913621.f_1585 != uParam0->f_74)
	{
		uParam0->f_75 = Global_1913621.f_1584;
		uParam0->f_74 = Global_1913621.f_1585;
		func_189(uParam0, 65536);
		func_100(uParam0, 4);
		return true;
	}
	return false;
}

void func_859(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_41);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_31[iVar0], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_31[iVar0], "inUse", false);
		iVar0++;
	}
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", false);
}

void func_860(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!func_105(bParam1, 0))
	{
		if (func_45(uParam0->f_1[1]))
		{
			func_164(uParam0->f_1[1], 0, 1, 1);
		}
		return;
	}
	bVar2 = func_583();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913621.f_1579 && func_901(bParam1, bParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_1059(bParam1, bParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || func_577(uParam0->f_24))
	{
		bVar3 = false;
	}
	else if (func_99(uParam0, 2) && !func_1060(bParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((bParam1 != -5.985058E-05f && func_592(bParam1, 1, 0)) || (!func_99(uParam0, 4) && ((func_99(uParam0, 8192) || bParam2 == -1.428267E+31f) || bParam2 == 6.221388E-29f)))
		{
			bVar3 = false;
		}
		else if (!func_582(2) && func_400(bParam1, -1.29539E-20f) == -4.839888E+13f)
		{
			bVar3 = false;
		}
		else if (uParam0->f_27 == -1)
		{
			iVar6 = func_350(bParam1, 0, 0, 0);
			iVar7 = func_1030(bParam1, 0);
			iVar8 = func_225(bParam1, bParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_27 = func_593(iVar7, iVar8);
		}
	}
	if (func_886(uParam0, bParam1) && uParam0->f_27 > 1)
	{
		if (!func_45(uParam0->f_1[8]))
		{
			uParam0->f_1[8] = func_163("CAMP_REC_BATCH", -2.740794E-14f, 1, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
		}
	}
	else if (func_45(uParam0->f_1[8]))
	{
		func_46(&(uParam0->f_1[8]), 1, 1);
	}
	if (func_45(uParam0->f_1[1]))
	{
		if (func_99(uParam0, 2))
		{
			func_290(uParam0->f_1[1], "DONATE_ING", 1);
		}
		else if (func_399(bParam1))
		{
			if (func_99(uParam0, 131072) && uParam0->f_27 > 1)
			{
				func_290(uParam0->f_1[1], MISC::VAR_STRING(2, "CAMP_REC_COOK_MLT", func_593(uParam0->f_27, 3)), 1);
			}
			else
			{
				func_290(uParam0->f_1[1], "CAMP_REC_COOK", 1);
			}
		}
		else if (func_400(bParam1, -1.29539E-20f) == -4.839888E+13f)
		{
			func_290(uParam0->f_1[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_290(uParam0->f_1[1], "CAMP_REC_MAKE", 1);
		}
		func_164(uParam0->f_1[1], bVar3, 1, 1);
	}
	func_1061(bParam1, bParam2, uParam0, iVar5, bVar4);
	if (func_45(uParam0->f_1[6]))
	{
		func_164(uParam0->f_1[6], !bVar4, 1, 1);
	}
	func_1062(uParam0);
}

bool func_861(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_91(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_RELEASED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_862(char* sParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(iVar0, sParam0, sParam1, bParam2);
		Global_1958629[Global_1958629.f_25] = iVar0;
		Global_1958629.f_25 = (Global_1958629.f_25 + 1 % 24);
	}
}

void func_863(var uParam0)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	bool bVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	struct<2> Var38;
	char* sVar41;

	if (func_105(uParam0->f_62, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(7, uParam0->f_62))
		{
			return;
		}
		UILOG::_UILOG_ADD_ENTRY_HASH(7, uParam0->f_62, Global_34, uParam0->f_62, -1.491195E-38f, 0);
		func_360(uParam0->f_62, uParam0->f_63, &Var1, &iVar0, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_62, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, true, false);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar34 = Var1[iVar33 /*2*/];
				if (func_105(bVar34, 0))
				{
					iVar36 = func_350(bVar34, 0, 0, 0);
					sVar35 = MISC::VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, Var1[iVar33 /*2*/].f_1, MISC::VAR_STRING(0, bVar34));
					bVar37 = func_348(bVar34, Var1[iVar33 /*2*/].f_1);
					if (bVar37)
					{
						iVar32++;
					}
					UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_62, bVar34, sVar35, bVar37, true, true);
				}
				iVar33++;
			}
		}
		if (func_1063(uParam0->f_62, &Var38, 4.975531E-10f, 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(7, uParam0->f_62, Var38, Var38.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(7, uParam0->f_62, Var38, Var38.f_1);
		}
		Global_1147168.f_339.f_16 = uParam0->f_62;
		Global_1147168.f_339.f_17 = uParam0->f_63;
		sVar41 = MISC::VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		UILOG::_0x763637F9B838B0A7(7, uParam0->f_62, sVar41);
		AUDIO::PLAY_SOUND_FRONTEND("add_to_log", "SSCRFT_Sounds", true, 0);
	}
	func_1062(uParam0);
}

void func_864(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_298(uParam0->f_1[1], 0))
	{
		return;
	}
	if (func_99(uParam0, 2))
	{
		if (func_105(uParam0->f_62, 0))
		{
			func_878(1);
			func_118(&(uParam0->f_71));
			func_100(uParam0, 16);
		}
		return;
	}
	func_94(uParam0, 1);
	func_46(&(uParam0->f_1[1]), 1, 1);
	func_46(&(uParam0->f_1[5]), 1, 1);
	func_46(&(uParam0->f_1[6]), 1, 1);
	func_46(&(uParam0->f_1[3]), 1, 1);
	func_46(&(uParam0->f_1[7]), 1, 1);
	func_189(uParam0, 64);
	if (!func_99(uParam0, 8192) && !func_399(uParam0->f_62))
	{
		iVar0 = func_400(uParam0->f_62, -1.29539E-20f);
		iVar1 = func_873(uParam0, iVar0);
		if (iVar1 != 0)
		{
			func_220(uParam0, 64);
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_70 = 0;
			if (iVar0 != -1.124768E-19f)
			{
				if (iVar0 == -4.326644E+08f)
				{
					if (uParam0->f_62 == 0.0002301198f)
					{
						uParam0->f_70 = -2.72553E-30f;
					}
					else
					{
						uParam0->f_70 = -1.180585E+22f;
					}
				}
				else if (func_312(uParam0->f_62, -7.272718E-19f))
				{
					uParam0->f_70 = func_829(func_691(uParam0->f_62, 0));
				}
				else if (func_312(uParam0->f_62, 1.619011E-22f))
				{
					uParam0->f_70 = -7.771058E+31f;
				}
				else if (func_312(uParam0->f_62, -3.813665E-28f))
				{
					uParam0->f_70 = 2.057918E+38f;
				}
				else if (func_312(uParam0->f_62, -3.55982f))
				{
					uParam0->f_70 = 22719.83f;
				}
				else
				{
					uParam0->f_70 = func_829(uParam0->f_62);
				}
			}
			if (uParam0->f_70 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_70, false);
			}
		}
		func_290(uParam0->f_1[2], "CAMP_REC_BACK", 1);
		func_172(uParam0->f_1[2], -3.423465f, 0, 1);
		func_164(uParam0->f_1[2], 0, 1, 1);
		func_165(uParam0->f_1[2], 0, 1);
		uParam0->f_1[4] = func_163("CAMP_REC_BACK", 9.715933E-10f, 1, 0, 0, 5, 570, 4000, 10, 2f, -2.656165E+09f, 0);
		func_449(&(uParam0->f_1[4]), "INPUT_PCRAFT_EXIT");
		func_172(uParam0->f_1[4], -3.423465f, 0, 1);
		func_164(uParam0->f_1[4], 0, 1, 1);
		func_448(uParam0->f_1[4], 19, 1, 1);
		func_448(uParam0->f_1[4], 20, 1, 1);
		func_448(uParam0->f_1[4], 13, 1, 1);
		func_448(uParam0->f_1[2], 13, 1, 1);
		if (func_45(uParam0->f_1[2]))
		{
			func_172(uParam0->f_1[2], -3.423465f, 0, 1);
		}
		uParam0->f_28 = 0;
		func_100(uParam0, 12);
	}
	else
	{
		func_100(uParam0, 11);
	}
}

bool func_865(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_91(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

void func_866(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	float fVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	struct<37> Var19;
	int iVar66;
	int iVar67;
	int iVar68;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_58))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_63 == -1.428267E+31f || uParam0->f_63 == 6.221388E-29f)
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (iVar0 == 0)
			{
				Var5 = { func_607(-5.45926E-19f, -5.45926E-19f, 0, 0, -1.428267E+31f, 0, -1, func_400(uParam0->f_62, 5.339713E+22f), 0) };
				if (func_608(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_63 = -1.428267E+31f;
						uParam0->f_62 = func_609(0, iVar3);
						bVar2 = true;
					}
					func_613(iVar3);
				}
			}
			else
			{
				Var5 = { func_607(-5.45926E-19f, -5.45926E-19f, 0, 0, 6.221388E-29f, 0, -1, func_400(uParam0->f_62, 5.339713E+22f), 0) };
				if (func_608(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							fVar15 = 1.337157E+38f;
						}
						else if (iVar0 == 2)
						{
							fVar15 = -8.704819E-29f;
						}
						else if (iVar0 == 3)
						{
							fVar15 = 2.519492E+32f;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							bVar17 = func_609(iVar16, iVar3);
							if (func_312(bVar17, fVar15))
							{
								uParam0->f_63 = 6.221388E-29f;
								uParam0->f_62 = bVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_613(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_62);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != 5.928634E+20f || Var19 == -1.926391E+21f) || Var19 == -8.816258E-39f) || (!Global_1913621.f_1579 && func_901(uParam0->f_62, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0 = (iVar0 - 1);
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(uParam0->f_62, iVar0, &Var19))
				{
				}
			}
			uParam0->f_63 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "eCost", uParam0->f_63);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "eOutputItem", uParam0->f_62);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iIndex");
		if (iVar67 >= 0 && iVar67 < Global_1913621)
		{
			iVar68 = Global_1913621[iVar67 /*9*/].f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "iCurCostVariant", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantIndex", (iVar0 + 1 - iVar68));
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "variantText", MISC::VAR_STRING(0, uParam0->f_62));
		uParam0->f_27 = -1;
		uParam0->f_23 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription"))
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", func_1064(uParam0->f_62));
		func_1052(uParam0, -1, func_583(), uParam0->f_58, 0, bVar2, 0);
		func_860(uParam0, uParam0->f_62, uParam0->f_63);
	}
}

void func_867(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (func_99(uParam0, 32768))
		{
			func_220(uParam0, 32768);
		}
		else
		{
			func_189(uParam0, 32768);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription", func_99(uParam0, 32768));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowIngredients", !func_99(uParam0, 32768));
	if (!func_99(uParam0, 32768))
	{
		if (func_45(uParam0->f_1[6]))
		{
			func_290(uParam0->f_1[6], "INFO", 1);
		}
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		func_1065(uParam0);
	}
	else
	{
		if (func_45(uParam0->f_1[6]))
		{
			func_290(uParam0->f_1[6], "INGREDIENTS", 1);
		}
		func_1066(uParam0);
	}
	if (uParam0->f_63 == -1.428267E+31f)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants") <= 1 && func_99(uParam0, 32768))
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_225(uParam0->f_62, uParam0->f_63, func_583(), 0);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_868(var uParam0)
{
	if (func_99(uParam0, 2))
	{
		return;
	}
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	func_1067(uParam0);
	func_859(uParam0);
	func_1065(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowIngredients", false);
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	func_860(uParam0, 0, 0);
	func_100(uParam0, 9);
}

void func_869(var uParam0, int iParam1)
{
	func_859(uParam0);
	func_1065(uParam0);
	func_1055(uParam0, &(iParam1->f_3));
}

void func_870(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_400(uParam0->f_62, -1.29539E-20f);
	if (iVar0 == 4.66195E-24f)
	{
		uParam0->f_43 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_64))
		{
			iVar1 = func_1068(uParam0->f_62);
			if (iVar1 != 0)
			{
				uParam0->f_64 = OBJECT::CREATE_OBJECT(iVar1, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_64, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_49, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_49);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_49, "pl_craft", true);
	}
	else if (iVar0 == -0.01154436f)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_51, "arrow", uParam0->f_66, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_51, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_51);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_51, "pl_craft", true);
	}
	else if (iVar0 == 1.002948E-10f)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_52, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_52);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_52, "pl_craft", true);
	}
	else if (iVar0 == -1.467368E+13f)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "player", Global_33, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_64))
		{
			iVar2 = func_1068(uParam0->f_62);
			if (iVar2 != 0)
			{
				uParam0->f_64 = OBJECT::CREATE_OBJECT(iVar2, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_64, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_64, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), func_1069(uParam0->f_62), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "bullet", uParam0->f_64, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_50);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_50, "pl_craft", true);
	}
	else if (iVar0 == -3.737967E+12f)
	{
		uParam0->f_43 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(-2.593644E+11f, 1, Global_34, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_53, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_53);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_53, "pl_craft", true);
	}
	else if (iVar0 == -0.007383482f)
	{
		uParam0->f_43 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(-4.049688E-16f, 1, Global_34, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_54, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_54);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_54, "pl_craft", true);
	}
	else if (iVar0 == 7.622462E-26f)
	{
		uParam0->f_43 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(-2.593644E+11f, 1, Global_34, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
		{
			uParam0->f_68 = OBJECT::CREATE_OBJECT(-4.130397E-19f, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_68, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_68, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55, "RAG", uParam0->f_68, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_55);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_55, "pl_craft", true);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_54, "pl_craft", true);
	}
	else if (iVar0 == -4.326644E+08f)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_56, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_56);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_56, "pl_craft", true);
	}
	else if (iVar0 == -1.124768E-19f)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_57, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_57);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_57, "pl_craft", true);
	}
	else
	{
		uParam0->f_43 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_1070(uParam0->f_62), func_1071(uParam0->f_62)) * 1148846080));
		func_118(&(uParam0->f_71));
		TASK::TASK_PLAY_ANIM(Global_33, func_1070(uParam0->f_62), func_1071(uParam0->f_62), 8f, -8f, -1, 1.504636E-36f, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_871(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		if (func_45(uParam0->f_1[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_45((*uParam2)[iVar1]))
				{
					if (uParam0->f_1[iVar0] == (*uParam2)[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_164(uParam0->f_1[iVar0], bParam1, 1, 1);
		}
		iVar0++;
	}
}

bool func_872(int iParam0)
{
	if ((((((((iParam0 == -1.467368E+13f || iParam0 == -0.01154436f) || iParam0 == -3.737967E+12f) || iParam0 == 1.002948E-10f) || iParam0 == -0.007383482f) || iParam0 == 7.622462E-26f) || iParam0 == 4.66195E-24f) || iParam0 == -4.326644E+08f) || iParam0 == -1.124768E-19f)
	{
		return true;
	}
	return false;
}

int func_873(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_50;
		case -732326901:
			return uParam0->f_53;
		case -1136843638:
			return uParam0->f_51;
		case 786205940:
			return uParam0->f_52;
		case -1141771998:
			return uParam0->f_54;
		case 364689687:
			return uParam0->f_55;
		case 414472632:
			return uParam0->f_49;
		case -842117252:
			return uParam0->f_56;
		case -1610298873:
			return uParam0->f_57;
		default:
			break;
	}
	return 0;
}

bool func_874(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	var uVar1;
	var uVar2;

	return func_1059(bParam0, bParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, bParam4);
}

void func_875(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_45 = 0;
	func_98(&(uParam0->f_66), &(uParam0->f_67));
	func_98(&(uParam0->f_64), &(uParam0->f_65));
	iVar0 = func_873(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	func_164(uParam0->f_1[2], 1, 1, 1);
	func_164(uParam0->f_1[4], 1, 1, 1);
	func_165(uParam0->f_1[2], 0, 1);
	func_165(uParam0->f_1[4], 1, 1);
	func_591(uParam0->f_1[1], 1);
	func_46(&(uParam0->f_1[1]), 1, 1);
	uParam0->f_1[1] = func_163("CAMP_REC_MAKE", 439.9228f, 3, 0, 0, 0, uParam0->f_43, uParam0->f_43 + 1, 1, 2f, 8.750548E+22f, 0);
	func_448(uParam0->f_1[1], 11, 1, 1);
	func_448(uParam0->f_1[1], 19, 1, 1);
	func_172(uParam0->f_1[1], -3.423465f, 0, 1);
	func_164(uParam0->f_1[1], bParam2, 1, 1);
	func_100(uParam0, 13);
}

int func_876()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_28.f_2;
	}
	return 255;
}

bool func_877(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1142409.f_2050 == 0 || (MISC::GET_SYSTEM_TIME() - Global_1142409.f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1142409.f_2050 == 0)
	{
		Global_1142409.f_2050 = MISC::GET_SYSTEM_TIME();
	}
	else if ((MISC::GET_SYSTEM_TIME() - Global_1142409.f_2050) >= 1000)
	{
		Global_1142409.f_2050 = MISC::GET_SYSTEM_TIME();
	}
	else
	{
		return false;
	}
	return true;
}

void func_878(bool bParam0)
{
	struct<14> Var0;
	int iVar14;

	if (bParam0)
	{
		iVar14 = 14;
	}
	else
	{
		iVar14 = 15;
	}
	func_1072(iVar14, Var0, func_109(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))));
}

void func_879(var uParam0)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		func_1073(iVar0, 1);
		func_1074(iVar0, uParam0);
		func_1076(func_1075(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())), uParam0);
	}
	else
	{
		func_1077(uParam0);
	}
}

void func_880(bool bParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_1078(bParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	if (!func_312(bParam0, 2.095208E+23f))
	{
		Var0 = { func_1079(bParam0) };
		if (Var0.f_1 != 0)
		{
			STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
		}
	}
}

void func_881(var uParam0)
{
	var uVar0;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<2> Var10[15];

	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(uParam0->f_24, &uVar0))
	{
		vVar4 = { func_1080(Global_1295619) };
		iVar7 = 0;
		bVar8 = func_312(uParam0->f_62, -4.733674E-34f);
		if (!bVar8)
		{
			if (func_360(uParam0->f_62, uParam0->f_63, &Var10, &iVar9, 1, 0) && iVar9 > 0)
			{
				iVar7 = Var10[0 /*2*/];
			}
		}
		TELEMETRY::TELEMETRY_CAMP_DONATE(&uVar0, iVar7, vVar4.z, 0, 1, 4.978612f, 7.650333E-20f, uParam0->f_62, bVar8);
	}
}

void func_882(int iParam0)
{
	if (Global_1940072.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940072.f_105.f_2 = iParam0;
}

int func_883(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1[15];
	bool bVar32;
	bool bVar34;
	int iVar35;
	var uVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	float fVar41;

	if (!func_103(0))
	{
		return 0;
	}
	else if (func_104())
	{
		return 0;
	}
	iVar0 = -1;
	if (Global_1915643.f_20638)
	{
		iVar0 = Global_1915643.f_20241;
	}
	if (!func_907(bParam0, 1, bParam1, &bVar32, &uVar36, bParam3, 0, 0))
	{
		bVar34 = bVar32;
		return 0;
	}
	if (func_360(bParam0, bParam1, &Var1, &iVar35, 1, 0))
	{
		iVar38 = 0;
		while (iVar38 < iVar35)
		{
			bVar34 = Var1[iVar38 /*2*/];
			iVar37 = func_358(iVar0, bVar34);
			if (iVar37 != 0)
			{
				bParam3 = false;
			}
			if (func_105(bVar34, 0))
			{
				if (bVar34 == 3.996812E+36f)
				{
					func_1081(Var1[iVar38 /*2*/].f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (func_361(bVar34) || func_362(bVar34))
					{
						if (!func_348(bVar34, Var1[iVar38 /*2*/].f_1))
						{
							iVar39 = func_1082(7, bVar34, Var1[iVar38 /*2*/].f_1);
						}
						func_308(bVar34, iVar39, 9.275179E-19f, 0, 0);
						Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - iVar39);
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							if (!func_348(bVar34, Var1[iVar38 /*2*/].f_1))
							{
								func_1083(bVar34, Var1[iVar38 /*2*/].f_1);
							}
							if (func_348(bVar34, Var1[iVar38 /*2*/].f_1))
							{
								func_216(bVar34, Var1[iVar38 /*2*/].f_1, bParam2, -5.149929E+33f);
							}
						}
					}
					else
					{
						if (func_366(bVar34) > 0)
						{
							func_1084(bVar34);
							Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - 1);
						}
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							if (func_365(7, bVar34) > 0)
							{
								func_1085(7, bVar34, Var1[iVar38 /*2*/].f_1);
								Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - func_1085(7, bVar34, Var1[iVar38 /*2*/].f_1));
							}
						}
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							func_216(bVar34, Var1[iVar38 /*2*/].f_1, bParam2, 9.275179E-19f);
						}
					}
				}
				else if (iVar37 == 0)
				{
					if (func_361(bVar34) || func_362(bVar34))
					{
						if (!func_348(bVar34, Var1[iVar38 /*2*/].f_1))
						{
							func_1083(bVar34, Var1[iVar38 /*2*/].f_1);
						}
					}
					func_216(bVar34, Var1[iVar38 /*2*/].f_1, bParam2, 9.275179E-19f);
				}
				else
				{
					func_1086(bVar34, iVar37, Var1[iVar38 /*2*/].f_1, 9.275179E-19f);
				}
				iVar40 = func_763(bVar34);
				if (func_966(iVar40))
				{
					fVar41 = func_1087(iVar40);
					func_107(func_106(-7.383178E+26f, fVar41), Var1[iVar38 /*2*/].f_1);
				}
			}
			iVar38++;
		}
		return 1;
	}
	return 0;
}

bool func_884(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (!func_1088(bParam0, 3.210799E-08f, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1089() };
	Var10.f_4 = uVar9;
	if (func_926(bParam0, &uVar15, &Var10, 1, 6.028273E-12f, 0))
	{
		if (bParam1)
		{
			if (!func_1090(bParam0, 1))
			{
			}
		}
		if (func_1091(bParam0))
		{
			func_884(func_1092(bParam0), 1);
		}
		func_1093();
		return true;
	}
	return false;
}

int func_885(bool bParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1094(bParam0, iParam1))
	{
		return 0;
	}
	Var0.f_4 = func_605(iParam1);
	Var0 = { func_367(0) };
	if (!func_926(bParam0, &uVar5, &Var0, iParam2, 6.028273E-12f, 1))
	{
		return 0;
	}
	return 1;
}

bool func_886(var uParam0, bool bParam1)
{
	if (!func_99(uParam0, 4))
	{
		return false;
	}
	if (func_399(bParam1) && func_831())
	{
		return true;
	}
	return false;
}

float func_887(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8.415692E+29f;
		case 2:
			return 7.046283E+15f;
		case 1:
			return 7.34969E-28f;
		default:
			break;
	}
	return 8.415692E+29f;
}

float func_888(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.01251565f;
		case 2:
			return -2.371419E+24f;
		case 1:
			return -2.480137E-36f;
		default:
			break;
	}
	return -0.01251565f;
}

int func_889(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_698(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_213(bParam1), bParam0, bParam3);
}

int func_890(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_279(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_891(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1095(iParam0, iParam1, iParam2, iParam3);
}

int func_892(int* iParam0)
{
	return func_1096(iParam0->f_1);
}

bool func_893(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_1097(iVar0, 1, 0);
		if (!func_355(bParam0, bVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1098(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_350(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return bVar33;
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
	return false;
}

bool func_894(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	bool bVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar40 = func_1097(iVar0, 0, 1);
		if (!func_355(bParam0, bVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1099(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_350(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == 3.996812E+36f || Var9[iVar41 /*2*/] == 3.414007E-11f)
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == 3.996812E+36f) || (!bParam2 && Var9[iVar41 /*2*/] == 3.414007E-11f))
					{
						if (bVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							bVar5 = bVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (bVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						bVar5 = bVar40;
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
			if (bVar8 && bVar5 != 0)
			{
				bVar4 = bVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return bVar4;
}

int func_895(int iParam0)
{
	return (iParam0 / 100);
}

void func_896(char* sParam0)
{
	Global_1915643.f_22470 = func_218(sParam0, 10000, 0, 0, 0, 1);
}

bool func_897(int* iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (*iParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @101; //curOff = 54
		}
		else if (!func_1100((*uParam3)[iVar0 /*2*/], (uParam3[iVar0 /*2*/])->f_1, iParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_1101(iParam0, iParam1, iParam5, iParam2, bParam6);
}

int func_898(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	struct<5> Var0;
	bool bVar5;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!func_378(bParam0, 2))
	{
		return 0;
	}
	if (*uParam2 > *uParam1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < *uParam1)
	{
		iVar12++;
	}
	iVar14 = ITEMDATABASE::_0x799FCD53358ED5FA(bParam0, uParam1);
	iVar13 = 0;
	while (iVar13 < iVar14)
	{
		if (ITEMDATABASE::_0xC4146375D8A0B374(bParam0, uParam1, iVar13, &Var0))
		{
			if ((*uParam1)[0] == 0)
			{
				(*uParam1)[0] = Var0;
			}
			else
			{
				*uParam2++;
				(*uParam1)[*uParam2] = Var0;
			}
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(Var0, &bVar5))
			{
				if (func_105(bVar5, 0))
				{
					if (*iParam4 >= 0 && *iParam4 < *uParam3)
					{
						*(uParam3[*iParam4 /*5*/]) = { Var0 };
						*iParam4++;
					}
					else
					{
						return 0;
					}
				}
			}
			(*uParam1)[*uParam2] = 0;
			if (*uParam2 > 0)
			{
				*uParam2 = (*uParam2 - 1);
			}
		}
		iVar13++;
	}
	return 1;
}

bool func_899(bool bParam0, bool bParam1, bool bParam2)
{
	struct<37> Var0;
	var uVar47;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	func_1102(bParam0, bParam1, &Var0);
	if (bParam1 == -2.401104E+18f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_357((Var0.f_3 * bParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_896(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_895((Var0.f_3 * bParam2))));
			}
			return false;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_356((Var0.f_3 * bParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_896("SHOP_H_TOO_POOR");
			}
			return false;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return true;
	}
	if (!func_906(bParam0, bParam2, bParam1, &uVar47, 1))
	{
		return false;
	}
	return true;
}

bool func_900(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_40() == -1)
	{
		if (func_380(bParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
			bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(bParam0);
	}
	return bVar0;
}

bool func_901(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_105(bParam0, 0))
	{
		return func_1103(func_377(bParam0), bParam1, bParam2);
	}
	if (func_393(bParam0) || func_312(bParam0, 2.791187f))
	{
		return func_635(func_394(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_40() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return true;
	}
	if (!func_1104(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_902(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -5.45926E-19f;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != bParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_903(bool bParam0, bool bParam1)
{
	if (!func_312(bParam0, 5.908991E-05f))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_312(bParam0, -0.4876374f))
		{
			return func_394(bParam0, 1) != 0;
		}
		if ((func_901(bParam0, -982726.7f, 0) || func_901(bParam0, 2.273041E-17f, 0)) || func_901(bParam0, -2.401104E+18f, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_904(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;

	bVar0 = func_1105(bParam0, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (func_635(bVar0, -8.816258E-39f))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_224(bVar0, -8.816258E-39f, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_905(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -5.45926E-19f;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_383(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_906(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_1106(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_103(0)) && !func_104());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 3.078375E+12f)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && func_356(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && func_357(iVar32))
			{
			}
			else
			{
				iVar33 = func_350(Var0[iVar34 /*2*/], 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { Var0[iVar34 /*2*/] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_907(bool bParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;

	if (func_393(bParam0) || func_312(bParam0, 2.791187f))
	{
		return func_224(func_394(bParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_360(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_103(0)) && !func_104());
	iVar37 = -1;
	if (Global_1915643.f_20638)
	{
		iVar37 = Global_1915643.f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 3.078375E+12f)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && (bParam7 || func_356(iVar32)))
			{
				Jump @499; //curOff = 215
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && (bParam7 || func_357(iVar32)))
			{
			}
			else
			{
				iVar36 = func_358(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_359(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_350(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_361(Var0[iVar34 /*2*/]) || func_362(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_364(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_363(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*iParam4 = iVar38;
							}
						}
						else
						{
							Jump @483; //curOff = 439
							if (bParam5 && ((iVar33 + func_365(7, Var0[iVar34 /*2*/])) + func_366(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_908(int* iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (*iParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_1100((*uParam3)[iVar0 /*2*/], ((uParam3[iVar0 /*2*/])->f_1 * iParam1->f_9), iParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_1107(iParam0, iParam1, iParam5, iParam2, bParam6, iParam7);
}

void func_909(int iParam0, int iParam1)
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

void func_910(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_629(uParam0))
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

int func_911(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

void func_912(int iParam0)
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
	func_913(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_913(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_914(var uParam0)
{
	func_684(uParam0, 8.505438E-34f);
	if (func_785() == 3.272964E+34f)
	{
		func_684(uParam0, 8.967694E-17f);
	}
	else
	{
		func_684(uParam0, 1.721179E-28f);
	}
}

void func_915(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_629(uParam0))
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

bool func_916(bool bParam0)
{
	var uVar0;

	if (func_40() != -1)
	{
		return false;
	}
	if (func_538(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_227(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_348(bParam0, 1);
}

void func_917(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_323(bParam0) != -3.265313E+23f)
	{
		return;
	}
	bVar0 = func_692(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_923(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_350(bParam0, 0, 0, 0) == 0))
		{
			if (func_40() == -1)
			{
				func_693(bVar0);
			}
			if (!*bParam3 && !iParam4 == 3787186f)
			{
				func_347(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_918(bool bParam0, int iParam1)
{
	if (func_312(bParam0, 7.644572E-37f))
	{
		func_547(bParam0, -982726.7f, iParam1, 1);
	}
}

bool func_919()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_1108(Global_33, 8.330918E+10f)) && !func_1108(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

void func_920(int iParam0)
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

void func_921(int iParam0)
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
			func_1109(1);
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
			func_1110(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1110(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1110(3);
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
			func_1111(1);
			break;
		case 33:
			func_1112(1);
			break;
		case 34:
			func_1113(1);
			break;
		case 35:
			break;
		case 36:
			func_1114(0);
			break;
		case 37:
			func_1115(0);
			break;
		case 38:
			func_1116(0);
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
			if (func_1117() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1118("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_299(677, 0);
			break;
		case 3:
			if (func_1117() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1118("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_299(678, 0);
			break;
		case 4:
			if (func_1117() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1118("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_299(679, 0);
			break;
		case 5:
			if (func_1117() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1118("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_299(680, 0);
			break;
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.628467E+31f, true);
			UNLOCK::UNLOCK_SET_VISIBLE(-4.628467E+31f, true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
		case 47:
			if (func_40() == -1)
			{
				if (!func_348(0.01458261f, 1))
				{
					func_696(0.01458261f, 1, 6.028273E-12f);
				}
			}
			break;
		case 49:
			if (func_40() == -1)
			{
				if (!func_348(0.01458261f, 1))
				{
					func_696(0.01458261f, 1, 6.028273E-12f);
				}
				if (!func_348(7.734759E-34f, 1))
				{
					func_696(7.734759E-34f, 1, 6.028273E-12f);
				}
			}
			break;
		case 48:
			if (func_40() == -1)
			{
				if (!func_348(1.044822E-10f, 1))
				{
					func_696(1.044822E-10f, 1, 6.028273E-12f);
				}
			}
			break;
		case 50:
			if (func_40() == -1)
			{
				if (!func_348(1.044822E-10f, 1))
				{
					func_696(1.044822E-10f, 1, 6.028273E-12f);
				}
				if (!func_348(-1.840652E+20f, 1))
				{
					func_696(-1.840652E+20f, 1, 6.028273E-12f);
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

bool func_922(bool bParam0)
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

bool func_923(bool bParam0)
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

void func_924(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_593(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

int func_925(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_379(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_226(bParam0, 0, 0) };
	if (func_227(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_103(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_213(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_926(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return false;
	}
	if (func_227(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return false;
	}
	if (!func_103(0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_213(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_927(bool bParam0)
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
	iVar2 = func_1119();
	func_1120(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

int func_928(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_444(bParam0))
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

bool func_929()
{
	return false;
}

bool func_930(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_931(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_932(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_155(49))
			{
				if (!func_155(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_155(50))
			{
				if (!func_155(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_933(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_40() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_348(6.217872E+26f, 1))
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
			if (func_105(bVar25, 0) && func_312(bVar25, -7.721469E-31f))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_934(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_1121(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_553(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
}

void func_935(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_1122() || func_1123())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 1036831949));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_553(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -3.959475E-32f, 0, 4.808429E-35f, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_553(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 6.028273E-12f);
		func_107(func_556(6.480143E+20f), iVar1);
	}
}

char* func_936(int iParam0)
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

float func_937(bool bParam0)
{
	var uVar0;

	if (!func_1063(bParam0, &uVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		return -0.1987056f;
	}
	return uVar0;
}

int func_938(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_GET_PED_QUALITY(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_939(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return 1.946198E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -1.13228E-37f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -1.612481E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return -2.15947E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 1.486582E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return -8.369188E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -8.479E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return 1.092612E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return 1.00121E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -3.393869E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return -2.146483E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1.683324E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -1.714903E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return 3.540045E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return 1.908759E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 1.743886E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return -3.998961E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return -787154.6f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -68183.73f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -4.330628E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return 1.05915E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return -9.463173E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return -6.04593E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 1.562307E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return -6.101661E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return 1.544066E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return -1.101024E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 9.614223E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return -5.945581E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return -7.624627E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return -1.048603E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return -1.548875E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 6.419786E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return 3.365025E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return 4.561484E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -5.029276f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return 8.230158E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -4.423507E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -3.922512E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return -8.041976E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return 6.922288E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return 87714.4f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 2.34674E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return -3.27273E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 4.017762E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return -7.379082E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -2.435618E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -1.037538E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -5.282553E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -1.146312E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -1.007456E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return 9.076408E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return 1.910371E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -9.992345E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -1.87771E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -5.195334E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -3.404239E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return 4.073091E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -4.270719E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -2.752362E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return -1.683097E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return -2.766552E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return -3.151777E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -8.062062E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return 1.658628E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -8221445f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1.393733E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return 3.947672E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -8.46789E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return -2.123979E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return -8.137937E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return -1.644345E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 6.45222E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 2.504758E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 1.085857E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 9.136372E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return -3.877198E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return -1.342214E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -7.090169E-39f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return 4.143414E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -1.39452E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 0.02198075f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return -1.867976E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return -1.162543E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return 3.744237E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return 474666.2f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return 3.030501E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return 3.285981E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -7.461215E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return -1622.647f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -1.155258E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return 6.490077E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return 7.368477E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 7007593f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 2.184331E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return -14.30725f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return 4.696913E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -8.604818E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -8.782748E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 0.02174423f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return 5.848209E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return -1.152293E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return 1.493672E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return NaNf;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -3.204001E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -1.026548E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -4.013387E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return 8.375437E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return 4.880811E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return 2.935504E-10f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -3.735768E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 1.453916E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 0.01160014f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 2.602576E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return -3.201256E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 7.892923f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return -1.042475E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return -4.447418f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return -6.24208E-37f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return -1.065758E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return 4.592079E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -4.950221E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -3.410696E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return 7.360676E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -3.305857E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -37031.14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return 1.444135E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return 4.992244E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -3.810507E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return -8.230556E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return -1.052088E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 5.016784E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 2.512069E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -3.301344E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 4.516673E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return -1.981305E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return -70.37913f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 6.824345E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return -2.852172E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return 2.059936E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return -5.844419E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return 2.295032E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return 2.53068E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -2.798365E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 178.8635f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 4.611995E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 2.766804E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 2745580f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return -5.381378E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return -7.374872E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -0.0003792866f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return 6606.792f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -4.355492E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 4.258855E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 2.034721E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 0.001643663f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -4.363519E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -1.788412E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -6.498311E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -5.709893E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return 8.275908E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return 2.568957E-14f;
		case -827518870:
			return -8.486406E-38f;
		case 1367447057:
			return -1.337399E-29f;
		case -2092697195:
			return 4.953773E-11f;
		case -2043601589:
			return 8.819021E+26f;
		case 1758585485:
			return 1.924374E+16f;
		case 1527400190:
			return 0.025452f;
		case 1493601140:
			return -1.320131E+23f;
		case -885592109:
			return -1.304414E+34f;
		case -1282621313:
			return 2.858739E+23f;
		case -70954328:
			return 8.122941E-17f;
		case -1378208045:
			return 4.927081E+18f;
		case 1450608653:
			return 5.233933E+29f;
		case 1543592331:
			return 5.000713E+30f;
		case 1842740532:
			return 1.622289E+22f;
		case 2004357248:
			return 1.838733E-24f;
		case -229670230:
			return -1.502759E+26f;
		case 546758456:
			return 2.022833E+15f;
		case 1888419655:
			return -3.684036f;
		case -2040849706:
			return -2.4275E+25f;
		case 2014346813:
			return -1.598358E+35f;
		case -1638839614:
			return 2.96459E-31f;
		case 1705186999:
			return 9.861011E-07f;
		case -1821314478:
			return 348.9258f;
		case -1434083213:
			return -7.565593E-22f;
		default:
			break;
	}
	return 0;
}

int func_940(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_1124(bParam1))
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_1903834.f_113[iVar0 /*96*/].f_1 == bParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1290256.f_1139.f_245[iVar0 /*4*/].f_3))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1290256.f_1139.f_245[iVar0 /*4*/].f_3))
					{
						iVar1++;
					}
				}
			}
			iVar0++;
		}
		return iVar1;
	}
	return func_1028(iParam0, bParam1);
}

int func_941(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_1125(*iParam0, bParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_349(bParam1) };
		if (STATS::STAT_ID_IS_VALID(&Var0))
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var0, *iParam2);
		}
		*iParam2 = func_942(*iParam0, bParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_1126(bParam1))
			{
				if (!func_1127(0, bParam1, *iParam2))
				{
				}
				if (func_1128(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*iParam0, 32, true);
				}
				else
				{
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*iParam0, 32, false);
				}
				*iParam2 = func_1129(*iParam0, bParam1, *iParam2);
			}
		}
		if (*iParam2 > 0)
		{
			iVar2 = func_1130(*iParam0, bParam1);
			if (*iParam2 > iVar2)
			{
				*iParam2 = iVar2;
			}
		}
		func_352(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_942(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<11> Var6;
	var uVar102;

	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var6.f_10 = 10;
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
			}
			else
			{
				bVar0 = func_1131(iVar2);
				if (!func_1132(bVar0, &uVar102))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar2))
					{
						if ((iParam4 == 2 && ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar2)) || (iParam4 == 1 && !ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar2)))
						{
						}
						else if (bVar0 == bParam1)
						{
							if (iParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
							{
								iVar5 = 0;
								while (iVar5 < 3)
								{
									if (Global_1290256.f_1139.f_245[iVar5 /*4*/].f_3 == iVar2)
									{
										func_1133(&Var6, &(Global_1903834.f_113[iVar5 /*96*/]));
									}
									else
									{
										iVar5++;
									}
								}
							}
							if (bParam3)
							{
								if (Global_1915643.f_20638 || Global_1915643.f_22504.f_1)
								{
									if (Global_1915643.f_20241 == 29 && ENTITY::IS_ENTITY_A_PED(iVar2))
									{
										if (func_312(bVar0, -6.231785E+11f) || func_312(bVar0, 1.026869E-32f))
										{
											PED::_SET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 2);
										}
										STATS::_STAT_CARRIED_SATCHEL_ITEM_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
									}
									if (iParam0 == PLAYER::PLAYER_PED_ID())
									{
										func_347(bVar0, -1, 0, 1, 0, 0, 0);
									}
								}
								ENTITY::_DELETE_CARRIABLE(&iVar2);
							}
							else
							{
								PED::DETACH_CARRIABLE_ENTITY(iVar2, false, false);
							}
							iParam2 = (iParam2 - 1);
						}
						iVar3++;
						ITEMSET::DESTROY_ITEMSET(iVar1);
						return iParam2;
					}
				}
			}
		}
	}
}

void func_943(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915643.f_20637)
	{
		if (Global_1915643.f_20241 == 29)
		{
			if (func_440(bParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_1134(bParam0))
					{
						case 2:
							iVar1 = 1;
							break;
						case 4:
							iVar1 = 3;
							break;
						case 8:
							iVar1 = 4;
							break;
					}
				}
				iVar0 = 0;
				while (iVar0 <= (iParam1 - 1))
				{
					STATS::_STAT_DONATE_INCREMENT_ITEM(func_1135(bParam0), iVar1, func_312(bParam0, 0.9368603f), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_944(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_349(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var0))
	{
		STATS::_STAT_ID_DECREMENT_INT(&Var0, iParam1);
	}
	func_1136(bParam0, iParam1);
	return func_1137(bParam0, iParam1, bParam2, iParam3);
}

bool func_945(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_1138(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_616() };
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

float func_946()
{
	return 0.106079f;
}

float func_947()
{
	return 0.1068115f;
}

float func_948()
{
	return 0.08971565f;
}

int func_949(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_950(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1139(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_951(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1140(&Var1, iParam0))
	{
		iVar0 = ((func_1141() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_952(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_1;
}

int func_953(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5.856216E+09f;
		case 1:
			return 1.085353E+38f;
		case 2:
			return -2.930526E+36f;
		case 3:
			return 3.905951E+13f;
		case 4:
			return -7.628264E+14f;
		case 5:
			return -1.928853E-11f;
		case 6:
			return 1.07313E-19f;
		case 7:
			return 1.636911E-19f;
		case 8:
			return 2.023031E-25f;
		case 9:
			return 2186.558f;
		case 10:
			return -3.863288E-07f;
		case 11:
			return -3.345353E+16f;
		case 12:
			return 3.915688f;
		case 13:
			return -9.782536E+30f;
		case 14:
			return -5.216545E+07f;
		case 15:
			return 2.464231E-17f;
		case 16:
			return 4.734684E+23f;
		case 17:
			return -5.241477E+12f;
		case 18:
			return 1.56064E+12f;
		case 20:
			return 9.183966E-27f;
		case 21:
			return 1.332617E-15f;
		case 28:
			return 4.315841E+22f;
		case 19:
			return -8.590834E-27f;
		case 22:
			return 2.192248E-26f;
		case 23:
			return 1.812471E+21f;
		case 24:
			return -4.63753E+17f;
		case 25:
			return -2.64182E-23f;
		case 26:
			return -1.484548E+24f;
		case 27:
			return -3.871925E-26f;
		case 30:
			return 1.91729E+16f;
		default:
			break;
	}
	return 0;
}

var func_954(int iParam0)
{
	int iVar0;

	iVar0 = func_1143(0, (func_1142() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_1144(iVar0);
}

int func_955(int iParam0)
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

struct<8> func_956(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_1145(iParam0))
	{
		return Var5;
	}
	if (!func_1146(&Var0))
	{
		return Var5;
	}
	if (!func_1147(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_1147(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_1147(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_1147(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
		return Var5;
	}
	return func_1148(Var0);
}

float func_957(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_958(int iParam0)
{
	return func_279(Global_1220811.f_1196, iParam0);
}

bool func_959()
{
	return Global_263042[Global_1295619 /*65*/] > 2;
}

bool func_960(int iParam0, int iParam1)
{
	if (!Global_1072759.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1206939[iParam1 /*12*/] && iParam0) != 0;
}

struct<2> func_961()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_121(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_121(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_962(int iParam0)
{
	if (func_1149(iParam0) == -1)
	{
		return false;
	}
	return true;
}

bool func_963(struct<2> Param0)
{
	return func_1150(Param0, 1, 4);
}

int func_964(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1.612096E+13f;
		case 3:
			return 1.612096E+13f;
		case 4:
			return -2.112425E-19f;
		case 5:
			return -2.542044E-33f;
		case 6:
			return 0.2307141f;
		case 7:
			return -3.544574E+24f;
		case 8:
			return -3.637179f;
		case 11:
			return -1.070114E-36f;
		case 12:
			return 7.727507E+35f;
		case 13:
			return -8.489537E-26f;
		case 15:
			return -4.800851E-20f;
		case 16:
			return -1.331913E-21f;
		case 18:
			return 0.2307141f;
		case 19:
			return -1.509861E+30f;
		case 20:
			return -8.489537E-26f;
		case 21:
			return -2.630241E+17f;
		case 24:
			return 2.585592E-34f;
		case 27:
			return -1.759994E-35f;
		case 28:
			return 2.613597E-19f;
		case 29:
			return -3.824638E-34f;
		case 30:
			return 1.017381E-30f;
		case 32:
			return -1.0937E+12f;
		case 34:
			return 2.094315E-17f;
		case 35:
			return -8.489537E-26f;
		case 38:
			return 6.389664E+33f;
		case 39:
			return -4.007857E+35f;
		case 49:
			return 265520.7f;
		case 50:
			return 3.576129E-12f;
		case 51:
			return -1.727621E+23f;
		case 52:
			return -2.876431E+16f;
		case 53:
			return -6.870412E+19f;
		case 40:
			return 6.694413E+09f;
		case 41:
			return joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET");
		case 42:
			return 1.756876f;
		case 43:
			return -0.0002349855f;
		case 44:
			return -4.048429E-32f;
		case 45:
			return -4.960599E+17f;
		case 46:
			return -1.236902E-25f;
		case 47:
			return 1.84378E+19f;
		case 48:
			return -4.117234E+24f;
		default:
			break;
	}
	return 0;
}

void func_965(int iParam0, int iParam1)
{
	if (!func_966(iParam0))
	{
		return;
	}
	Global_17418[iParam0] = (Global_17418[iParam0] || iParam1);
}

bool func_966(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_967(int iParam0)
{
	if (!func_966(iParam0))
	{
		return false;
	}
	return func_1151(iParam0, 4, 1);
}

void func_968(int iParam0, bool bParam1)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (func_1152(iParam0))
	{
		return;
	}
	func_965(iParam0, 2);
	if (bParam1)
	{
		if (!func_67(0, 0, 1))
		{
			func_1153(1, 0.02012728f);
		}
	}
}

bool func_969(int iParam0)
{
	if (!func_966(iParam0))
	{
		return false;
	}
	return func_1151(iParam0, 1, 1);
}

void func_970(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_966(iParam0))
	{
		return;
	}
	if (func_969(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_1154(iParam0);
	}
	if (!bParam1)
	{
		func_1155(iParam0);
	}
	func_965(iParam0, 1);
	func_968(iParam0, 1);
	if (bParam2)
	{
		if (!func_67(0, 0, 1))
		{
			func_971(1, 6);
		}
	}
}

void func_971(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1156(&Global_0, 8);
	}
	if (!func_1117() || func_40() != -1)
	{
		return;
	}
	func_1156(&Global_0, 1);
}

float func_972(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_33);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_33);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_973(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(iVar0);
	}
	iVar1 = func_1031(2);
	func_1032(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_974(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_1033(2);
	func_1034(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_975(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_1035(2);
	func_1036(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

bool func_976()
{
	int iVar0;

	iVar0 = Global_1953279.f_595[8];
	iVar0 = (iVar0 + Global_1953279.f_595[10]);
	iVar0 = (iVar0 + Global_1953279.f_595[1]);
	iVar0 = (iVar0 + Global_1953279.f_595[2]);
	iVar0 = (iVar0 + Global_1953279.f_595[5]);
	iVar0 = (iVar0 + Global_1953279.f_595[25]);
	iVar0 = (iVar0 + Global_1953279.f_595[23]);
	iVar0 = (iVar0 + Global_1953279.f_595[18]);
	iVar0 = (iVar0 + Global_1953279.f_595[19]);
	return iVar0 > 0;
}

int func_977(int iParam0)
{
	int iVar0;

	iVar0 = func_266(func_426(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1953279.f_1676.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_978(bool bParam0)
{
	return Global_1953279.f_1676.f_1[func_266(bParam0, 1) /*3*/];
}

int func_979()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3352.f_26)
	{
		bVar1 = Global_1953279.f_3352[iVar0];
		if (func_228(bVar1) == -947.1324f)
		{
			if (func_1157() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_980(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_1158(0);
	}
	if (func_228(bParam0) == -947.1324f && func_984(bParam0) != -1)
	{
		return true;
	}
	if (iParam1 == 3.272964E+34f)
	{
		return func_312(bParam0, -3.437357E+28f);
	}
	else if (iParam1 == 4.387347E-38f)
	{
		return func_312(bParam0, -1.146799E+34f);
	}
	return false;
}

bool func_981(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_226(bParam0, bParam2, 0) };
	Var5 = { func_368(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_382(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_213(bParam2), &Var5, bParam1);
	return true;
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case 119907797:
			return 32;
		case 1388798186:
			return 64;
		default:
			break;
	}
	return 0;
}

bool func_983(int iParam0)
{
	return (Global_1953279.f_3352.f_33.f_6 && iParam0) != 0;
}

int func_984(bool bParam0)
{
	switch (bParam0)
	{
		case 491602716: /* GXTEntry: "Custom Outfit" */
			return 0;
		case 217155793: /* GXTEntry: "Outfit One" */
			return 1;
		case 97391779: /* GXTEntry: "Outfit Two" */
			return 2;
		case -808817534: /* GXTEntry: "Outfit Three" */
			return 3;
		case 1270922359: /* GXTEntry: "Outfit Four" */
			return 4;
		case -2011879201: /* GXTEntry: "Outfit Five" */
			return 5;
		case -1063340820: /* GXTEntry: "Outfit Six" */
			return 6;
		case 2127262701:
			return 7;
		case -1323870201: /* GXTEntry: "Outfit Eight" */
			return 8;
		case 1632140501: /* GXTEntry: "Outfit Nine" */
			return 9;
		case 967218463: /* GXTEntry: "Outfit Ten" */
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_985(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17418.f_55.f_664.f_33[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

struct<8> func_986(int iParam0)
{
	char cVar0[64];

	if (func_985(4, iParam0))
	{
		return Global_17418.f_2645[iParam0 /*8*/];
	}
	StringCopy(&cVar0, HUD::GET_STRING_FROM_HASH_KEY(func_1159(iParam0)), 64);
	return cVar0;
}

void func_987()
{
	Global_1953279.f_1046 = 0;
}

bool func_988(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (func_312(bParam0, 3.611922E-33f) || func_228(bParam0) == 5.002459E-36f)
	{
		return true;
	}
	return false;
}

void func_989(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	var uVar120;
	int iVar121;
	bool bVar122;

	bVar0 = false;
	switch (func_228(bParam0))
	{
		case -2061583405:
			bVar0 = func_1160(bParam0, &(Global_1953279.f_3352.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_1160(bParam0, &(Global_1953279.f_3352.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_1160(bParam0, &(Global_1953279.f_3352.f_27), bParam4);
			if (func_312(bParam0, -7.339854E+32f))
			{
				Var1.f_1 = 39;
				if (func_1161(&Var1, bParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						bVar122 = Var1.f_1[iVar121 /*3*/];
						if (func_105(bVar122, 0))
						{
							func_989(bVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_1160(bParam0, &(Global_1953279.f_3352.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_1160(bParam0, &(Global_1953279.f_3352.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_1160(bParam0, &(Global_1953279.f_3352.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_1160(bParam0, &(Global_1953279.f_3352.f_33.f_7), bParam4);
			break;
		default:
			if (func_312(bParam0, 3.611922E-33f))
			{
				bVar0 = func_1160(bParam0, &(Global_1953279.f_3352.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_783(0, bParam0);
	}
	if (bParam2)
	{
		func_781();
	}
	if (bParam1)
	{
		func_784(0, 0);
	}
}

int func_990(bool bParam0)
{
	var uVar0;
	var uVar1;

	func_1162(&uVar1, 9044914, bParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&uVar1);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&uVar1))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar0, &uVar1, -0.0008358429f))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_991(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_228(Global_1953279.f_1676.f_1[iParam1 /*3*/]);
	if (func_228(bParam0) == iVar0)
	{
		return true;
	}
	else if (bParam0 == -1700.123f)
	{
		return func_312(Global_1953279.f_1676.f_1[iParam1 /*3*/], 3.611922E-33f);
	}
	else if (bParam0 == 2.691891E-21f)
	{
		return (iVar0 == -7.463622E-36f || iVar0 == 4.454951E+36f);
	}
	else if (bParam0 == -4.323989E-26f)
	{
		return iVar0 == -494711.9f;
	}
	else if (bParam0 == -9.607686E+28f)
	{
		return iVar0 == 2.251657E+29f;
	}
	return false;
}

void func_992(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1953279.f_2938.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_1163(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_1163(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1164(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Global_1953279.f_2938.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1953279.f_2938.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_993(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_1165(uParam0, 1))
	{
		func_1166(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1953279.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1953279.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_994(var uParam0, var uParam1)
{
	struct<4> Var0;
	bool bVar7;
	int iVar8;

	Var0 = func_1167(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var0))
	{
		return;
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var0))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&bVar7, &Var0, 2.24243E+12f))
		{
		}
		else
		{
			iVar8 = func_266(bVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&bVar7, &Var0, 1.154786E+11f))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != bVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1953279.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_791(iVar8, 0);
			}
		}
	}
}

void func_995(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -3.916588E+30f || bParam1 == 2.515798E+09f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1.494364E-28f;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1808.893f;
	}
	iVar0 = 10;
	iVar1 = func_228(uParam0->f_1[iVar0 /*3*/]);
	if (iVar1 == 1.246195E-34f)
	{
		if (func_312(bParam1, 1.816948E-22f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
	}
	else if (iVar1 == 4.454951E+36f)
	{
		if (func_312(bParam1, -3.086476E+35f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
	}
	else if (iVar1 == -9.847085E+19f)
	{
		if (func_312(bParam1, -3.086476E+35f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_312(uParam0->f_1[iVar0 /*3*/], -8.86916E-14f) && func_312(bParam1, -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam1, -3.086476E+35f)) && func_312(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
}

void func_996(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1 == 9.94413E+23f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1.494364E-28f;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1808.893f;
	}
}

void func_997(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	func_791(1, iParam3);
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_507(bVar1, 0) && func_312(bVar1, -2.411198E+32f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 10;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((bVar1 != Global_1953279.f_83[iVar0 /*12*/] && func_228(bVar1) == 4.454951E+36f) && func_312(bParam1, -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
}

void func_998(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_228(bParam2))
	{
		case -525676072:
			func_1168(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_1169(uParam0, bParam1, iParam3);
			break;
	}
}

void func_999(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_228(uParam0->f_1[iVar0 /*3*/]) == 3.381578E-06f)
	{
		func_791(iVar0, iParam3);
	}
	func_791(1, iParam3);
	if (bParam1)
	{
		return;
	}
	if (func_988(bParam2))
	{
		func_1170(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_312(bParam2, -2.411198E+32f) && !func_507(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	if (func_312(bParam2, -1.186825E-08f))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		func_791(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_791(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
		func_791(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_791(iVar0, iParam3);
		}
	}
}

void func_1000(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = 12;
	iVar1 = 0;
	if (func_785() == 4.387347E-38f)
	{
		iVar1 = 1;
	}
	if (3.919656E+35f == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_312(bParam2, 9.741843E+28f)) || func_228(bParam2) == 2.251657E+29f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
	}
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if ((!func_507(bVar2, 0) && !func_312(bVar2, -1.186825E-08f)) && func_312(bParam2, -1.06471E-16f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 17;
	if (!func_507(uParam0->f_1[iVar0 /*3*/], 0) && func_312(bParam2, 2.713478E+14f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 29;
	if (!func_507(uParam0->f_1[iVar0 /*3*/], 0) && func_312(bParam2, 170.5778f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 34;
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_228(bVar2) == 8.292232E+24f && func_228(bParam2) == 2.251657E+29f)
	{
		uParam0->f_1[iVar0 /*3*/] = func_990(bParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	else if (func_1171(bVar2, bParam1, iVar1))
	{
		bVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_228(bVar2) == 3.381578E-06f && func_1172(32))
		{
			iVar3 |= 1;
		}
		if (func_312(bParam2, 4.422284E-20f))
		{
			iVar3 |= 2;
		}
		bVar2 = func_1173(Global_1953279.f_83[iVar0 /*12*/].f_9, iVar3);
		if (bVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = bVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
			func_1008(uParam0, 0, bVar2, iParam3);
		}
	}
	iVar0 = 21;
	if (!func_507(uParam0->f_1[iVar0 /*3*/], 0) && func_312(bParam2, 7.182742E-32f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar4 = 23;
	if (!func_507(uParam0->f_1[iVar0 /*3*/], 0) || (uParam0->f_1[iVar4 /*3*/] != Global_1953279.f_83[iVar4 /*12*/] && func_312(uParam0->f_1[iVar4 /*3*/], -2.881491E-21f)))
	{
		func_1174(uParam0, iParam3);
	}
}

void func_1001(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam2, 4.528383E-26f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
}

void func_1002(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_228(bParam2))
	{
		case 698653232:
			func_1175(uParam0, bParam1, bParam2, iParam4);
			break;
		case 912453393:
			func_1176(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_1003(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_228(bParam2))
	{
		case -1080198344:
		case 1868067663:
			func_1177(uParam0, bParam1, bParam2, iParam3);
			break;
		case 294388917:
			func_1178(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_1004(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_228(uParam0->f_1[iVar0 /*3*/]) == 3.381578E-06f)
	{
		func_791(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam2, 9.484546E+16f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_1174(uParam0, iParam3);
	}
}

void func_1005(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			if (func_312(uParam0->f_1[iVar0 /*3*/], 9.484546E+16f))
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			}
			func_791(iVar0, iParam3);
		}
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_312(bParam2, -2.881491E-21f))
		{
			func_1174(uParam0, iParam3);
		}
		else
		{
			func_791(iVar0, iParam3 | 16);
		}
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/].f_1 != -6.7231E+19f)
	{
		return;
	}
	uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
	func_791(iVar0, iParam3);
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_791(iVar0, iParam3);
	}
	iVar0 = 28;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_791(iVar0, iParam3);
	}
}

void func_1006(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_1179(2.199934E-35f) && func_312(bParam2, -4.878666E-06f))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_507(uParam0->f_1[iVar0 /*3*/], 0) && func_312(bParam2, 0.01839931f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
}

void func_1007(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(uParam0->f_1[iVar0 /*3*/], 4.528383E-26f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
}

void func_1008(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_228(bParam2))
	{
		case 1759215194:
			func_1180(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_1181(uParam0, bParam1, bParam2, iParam3);
			break;
		case 684307653:
			func_1182(uParam0, bParam1, bParam2, iParam3);
			break;
		case 502936876:
			func_1183(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_1184(uParam0, bParam1, bParam2, iParam3);
			break;
		case 344283346:
			func_1185(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1009(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_228(bParam2))
	{
		case 1769055947:
			func_1186(uParam0, bParam1, bParam2, iParam3);
			break;
		case -923693316:
			func_1187(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_1010(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		func_1188(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_312(bParam2, 9.000944E-10f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]) && func_228(bVar1) == -494711.9f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	if ((func_312(bParam2, -4.282854E-21f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]) && func_228(bVar1) == 1.825867E+25f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_312(bParam2, -9.697137E-08f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
}

int func_1011(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(bParam0, bParam1, true))
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(bParam0, iVar0, bParam1, true) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1012(bool bParam0, bool bParam1, int iParam2)
{
	*iParam2 = 1808.893f;
	return true;
}

int func_1013(bool bParam0)
{
	int iVar0;

	iVar0 = func_984(bParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	return -1;
}

bool func_1014(int iParam0)
{
	return (((((((((iParam0 == -6.84366E-28f || iParam0 == -1.11148E-12f) || iParam0 == 1.226722E-30f) || iParam0 == -5.930502E-22f) || iParam0 == 6.813211E-30f) || iParam0 == 272038.9f) || iParam0 == 8.083898E+09f) || iParam0 == 3.588834E-09f) || iParam0 == -1.005061E+16f) || iParam0 == 61.78744f);
}

void func_1015(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam1)
	{
		Global_1953279.f_1676.f_1[iParam0 /*3*/] = { Global_1953279.f_1557.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam3 == -1)
	{
		iParam3 = Global_17418.f_55.f_664.f_1777;
	}
	func_1189(&(Global_1953279.f_1676.f_1[iParam0 /*3*/]), iParam0, iParam3);
}

bool func_1016(bool bParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_226(bParam0, bParam2, 0) };
	Var5 = { func_368(bParam0, Var0, Var0.f_4, bParam2) };
	return func_797(Var5, iParam1, bParam2);
}

void func_1017(int iParam0, bool bParam1, int iParam2)
{
	func_1190(&(Global_1953279.f_1557), iParam0);
	func_1191(2, iParam0, 6);
	if (bParam1)
	{
		func_784(0, 1);
	}
}

int func_1018(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_1192(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1019(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<29> Var16;
	struct<26> Var45;
	struct<18> Var71;
	struct<17> Var89;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -5.45926E-19f;
	if (!func_375(*iParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == bParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_323(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_1193(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_1194(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_1195(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_1196(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_1197(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_1198(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_1199(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_385(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

float func_1020(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1021(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 24;
		case 1:
			return 25;
		case 2:
			return 26;
		case 3:
			return 27;
		case 4:
			return 28;
		case 5:
			return 29;
		case 6:
			return 30;
		case 18:
			return 38;
		case 16:
			return 39;
		case 17:
			return 40;
		case 15:
			return 41;
		case 11:
			return 31;
		case 12:
			return 32;
		case 13:
			return 33;
		case 14:
			return 35;
		case 7:
			return 34;
		default:
			break;
	}
	if (func_531(iParam0) == -4.537018E+10f)
	{
		return 37;
	}
	return 23;
}

bool func_1022()
{
	if ((func_120() || Global_1572887.f_72.f_40 > 10) || func_1200())
	{
		if ((!func_760() && Global_265213.f_122484.f_80.f_16.f_2 != -5.544348E+20f) && !func_1201(Global_265213.f_122484.f_80.f_16.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_1023(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

bool func_1024()
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	return (Global_1051832.f_3279 == iVar0 || Global_1051832.f_3279 == (iVar0 - 1));
}

void func_1025(int iParam0)
{
	Global_1051832.f_3648 = (Global_1051832.f_3648 || iParam0);
}

bool func_1026()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

bool func_1027(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

int func_1028(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_1124(bParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1903834.f_113[iVar1 /*96*/].f_1 == bParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_1202(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
		}
	}
	return 0;
}

int func_1029(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_1203())
	{
		return func_382(bParam0, func_367(1), -3.233114E-34f, 1, 1, 0);
	}
	return 0;
}

int func_1030(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_226(bParam0, 0, 0) };
	return func_381(bParam0, &Var0, 0, bParam1);
}

int func_1031(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_676(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546;
		case 1:
			return Global_1956862.f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_1032(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_CHANGE_ENTITY_HEALTH(iParam1, fParam0, 0, 0);
}

int func_1033(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_676(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546.f_1;
		case 1:
			return Global_1956862.f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_1034(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_1204(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, fVar2);
	}
}

int func_1035(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_676(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546.f_2;
		case 1:
			return Global_1956862.f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_1036(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHANGE_PED_STAMINA(iParam1, fParam0);
}

float func_1037(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1119();
	func_1205(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1206(iParam0, 2);
	if (func_1208(iVar0, func_1207(iParam0, 2), 1))
	{
		func_1209(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_299(103, bParam2);
		return 0f;
	}
	func_1210(iParam0, func_1119(), 2);
	func_1209(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_1038(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_676(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_6[iParam0 /*3*/];
		case 1:
			return Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/];
		default:
			break;
	}
	return -1f;
}

int func_1039(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_676(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_1211(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 1120403456)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_1212(iParam0, 7000, iParam5);
		}
		func_1213(iVar0, iParam0, fParam1);
		func_1214(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

bool func_1040()
{
	if (Global_1956862.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_1215(Global_1956862.f_1431.f_107, 0);
}

void func_1041(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_1216(13, 2);
	iVar1 = func_1217(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_596(fVar0, 0f, 1120403456 /* Float: 100f */);
	iVar2 = func_1217(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956862.f_1431.f_107 = func_1119();
		func_1120(&(Global_1956862.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_1218(13, fVar0, 2);
	Global_1956862.f_1431.f_99 = iParam1;
}

int func_1042(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_1219(iParam0))
		{
			fParam1 = 1106247680; /* Float: 30f */
		}
		else
		{
			fParam1 = 1106247680; /* Float: 30f */
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_1220(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_973(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_1220(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1221(3.279095E+25f);
			func_975(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_1220(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_974(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_1221(2.372604E-26f);
			func_1222(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_1222(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_1222(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_1043(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_106(-3.114499E+25f, func_1087(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	func_107(func_700(3.939822E-35f), iParam1);
}

void func_1044(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_40() == 0)
	{
		iVar0 = func_400(bParam0, -60352.49f);
		if (iParam1 == -1.202057E-11f)
		{
			return;
		}
		if (func_312(bParam0, -8.87647E+33f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -9.82979E+16f, 1);
		}
		if ((func_312(bParam0, 1.378098E+25f) || 3.62898E+13f == iVar0) || -9.276053E-31f == iVar0)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 1.324128E-12f, 1);
		}
		if (func_312(bParam0, 1.763507E+18f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -1.231875E-07f, 1);
		}
		if (func_312(bParam0, -1.064618E-36f) && !func_312(bParam0, -2.927334E-06f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -4.02404E-14f, 1);
		}
		if (func_312(bParam0, 9.495676E-32f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 2.208807E+11f, 1);
		}
		if (((func_312(bParam0, -1.051639E+07f) || func_312(bParam0, -5.092244E+08f)) || func_312(bParam0, 1.431632E+07f)) || bParam0 == -1.954145E-33f)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 2.96823E-25f, 1);
		}
		if (func_312(bParam0, -2.529679E+11f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 9.179291E+27f, 1);
		}
		if ((bParam0 == -1.160316E-13f || bParam0 == -50238.05f) || bParam0 == -6.733347E-15f)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -1.806583f, 1);
		}
		if (bParam0 == -5.985058E-05f)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 2.84424E+34f, 1);
		}
	}
}

int func_1045(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1144511[iParam0 /*83*/].f_38.f_28;
}

int func_1046(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1144511[iParam0 /*83*/].f_38.f_28.f_1;
}

void func_1047(var uParam0, bool bParam1, int iParam2)
{
	Global_1913621[uParam0->f_45 /*9*/].f_5 = iParam2;
	Global_1913621[uParam0->f_45 /*9*/].f_6 = bParam1;
	Global_1913621[uParam0->f_45 /*9*/].f_7 = 1;
	Global_1913621[uParam0->f_45 /*9*/].f_8 = 0;
	Global_1913621.f_1576++;
	uParam0->f_45++;
	if ((iParam2 == 2.273041E-17f || iParam2 == -4.029766E+29f) || iParam2 == 4.431614E+14f)
	{
		func_1223(uParam0, bParam1, iParam2);
	}
	else if (iParam2 == -1.428267E+31f)
	{
		func_1224(uParam0, bParam1);
	}
}

int func_1048(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;

	Var0 = { func_607(-5.45926E-19f, -5.45926E-19f, 0, 0, iParam1, 0, -1, Global_1913621.f_1584, 0) };
	if (func_608(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = func_609(iVar12, iVar10);
			if (func_105(bVar13, 0))
			{
				if (uParam0->f_45 >= 175)
				{
				}
				else
				{
					if (Global_1913621.f_1584 == 0 && func_312(bVar13, 4.433856E-28f))
					{
						if (!(Global_1913621.f_1585 != 0 && func_312(bVar13, Global_1913621.f_1585)))
						{
						}
						else if (func_312(bVar13, 2.27271E-29f))
						{
						}
						else
						{
							func_1047(uParam0, bVar13, iParam1);
							func_1225(uParam0, bVar13, iParam1);
						}
						iVar12++;
						func_1226(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_1049(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.654095E+26f;
		case 1:
			return 2.089344E-22f;
		case 2:
			return 2.158376E-31f;
		case 3:
			return -0.000242469f;
		case 4:
			return 7.979687E+20f;
		case 5:
			return -5.409362E+07f;
		default:
			break;
	}
	return 0;
}

void func_1050(var uParam0, char* sParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_29, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_1051(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;

	bVar0 = Global_1913621[iParam2 /*9*/].f_6;
	if ((bParam4 || func_99(uParam0, 2)) || func_236(bVar0, uParam0->f_42))
	{
		if (bParam1)
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913621[iParam2 /*9*/].f_1))
			{
				if (bParam5)
				{
					func_1052(uParam0, -1, bParam3, Global_1913621[iParam2 /*9*/].f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_30, uParam0->f_46, -2.238898E-35f, Global_1913621[iParam2 /*9*/].f_1);
			}
			else
			{
				func_1227(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913621[iParam2 /*9*/].f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913621[iParam2 /*9*/].f_1);
			}
			func_1227(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_46 == 0)
		{
			uParam0->f_60 = Global_1913621[iParam2 /*9*/].f_6;
			uParam0->f_61 = Global_1913621[iParam2 /*9*/].f_5;
			uParam0->f_59 = Global_1913621[iParam2 /*9*/].f_1;
		}
		uParam0->f_46++;
	}
}

void func_1052(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	struct<2> Var18;
	bool bVar40;
	int iVar41;
	struct<7> Var42;
	int iVar49;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = Global_1913621[iParam1 /*9*/].f_1;
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	bVar3 = iVar1;
	bVar4 = iVar2;
	iVar5 = func_225(bVar3, bVar4, bParam2, 0);
	iVar6 = func_350(bVar3, 0, 0, 0);
	iVar7 = func_1030(bVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_593(iVar7, iVar5), 8);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", false);
	if (func_99(uParam0, 2))
	{
		iVar9 = func_594((iVar5 > 0 && func_1060(bVar3)), 1, 0);
	}
	else
	{
		iVar9 = func_594((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_1228(bVar3))
	{
		if (func_1229(bVar3, bVar4, uParam0, bParam2, &bVar11, &bVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				bVar3 = bVar11;
				bVar4 = bVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", bVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!func_99(uParam0, 4))
	{
		if ((bVar4 == -1.428267E+31f || bVar4 == 6.221388E-29f) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (!Global_1913621.f_1579 && func_901(bVar3, bVar4, 1))
	{
		iVar9 = 0;
		bVar14 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", bVar14);
	if (iVar9 == 1)
	{
		if (!func_582(2) && func_400(bVar3, -1.29539E-20f) == -4.839888E+13f)
		{
			Global_1913621[iParam1 /*9*/].f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			Global_1913621[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (((func_99(uParam0, 128) && iVar9 == 0) && Global_1913621[iParam1 /*9*/].f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_30, iVar0);
		}
		Global_1913621[iParam1 /*9*/].f_2 = 0;
	}
	if (bParam5)
	{
		if (func_539(bVar3, &Var15, 4.975531E-10f, 0, 0, 0))
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar3);
		Var18.f_1 = 20;
		bVar40 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", 0);
		if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var18.f_1[iVar41], &Var42))
				{
					iVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", iVar49);
							break;
						case 1857353317:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", iVar49);
							break;
						case -826379728:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", iVar49);
							break;
						case -416929031:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", iVar49);
							break;
						case 1869697234:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", iVar49);
							break;
						case 1681823811:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", iVar49);
							break;
						case -1191740624:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", iVar49);
							break;
						case -778289619:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", iVar49);
							break;
						case 1136630075:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", iVar49);
							break;
						case 1365603835:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", bVar40);
	}
	if (!func_99(uParam0, 4) && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
	{
		iVar9 = 0;
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", iVar9);
}

int func_1053(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_1054(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_13))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_13);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

void func_1055(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	bVar2 = iVar0;
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	if (func_105(bVar2, 0) && (func_99(uParam0, 2) || func_236(bVar2, uParam0->f_42)))
	{
		uParam0->f_27 = -1;
		uParam0->f_23 = 0;
		uParam0->f_62 = bVar2;
		uParam0->f_63 = iVar1;
		func_46(&(uParam0->f_1[1]), 1, 1);
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", true);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "variantText", MISC::VAR_STRING(0, uParam0->f_62));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantCount", iVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < Global_1913621)
			{
				iVar6 = Global_1913621[iVar5 /*9*/].f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantIndex", (iVar4 + 1 - iVar6));
			func_189(uParam0, 4096);
			if (func_45(uParam0->f_1[5]))
			{
				func_164(uParam0->f_1[5], 1, 1, 1);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", false);
			func_220(uParam0, 4096);
			if (func_45(uParam0->f_1[5]))
			{
				func_164(uParam0->f_1[5], 0, 1, 1);
			}
		}
		if (!func_99(uParam0, 2))
		{
			uParam0->f_43 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_1070(uParam0->f_62), func_1071(uParam0->f_62)) * 1148846080));
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting"))
		{
			func_189(uParam0, 8192);
		}
		else
		{
			func_220(uParam0, 8192);
		}
		uParam0->f_58 = *uParam1;
		uParam0->f_1[1] = func_163("CAMP_REC_MAKE", 439.9228f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
		func_860(uParam0, uParam0->f_62, uParam0->f_63);
		func_448(uParam0->f_1[1], 11, 1, 1);
		if (Global_1913621.f_1579 || !func_901(uParam0->f_62, uParam0->f_63, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", func_1064(bVar2));
			func_867(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", 0);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription"))
		{
			if (Global_1913621.f_1579 || !func_901(uParam0->f_62, uParam0->f_63, 1))
			{
				func_1066(uParam0);
			}
		}
	}
}

char* func_1056(var uParam0)
{
	if (func_99(uParam0, 128))
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_1057(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_270(iVar0, 2))
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
		func_271(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 2f, 0, 1f, 0, 0, iParam2, 8.750548E+22f, 0);
		return iVar1;
	}
	return 0;
}

void func_1058(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_45(iParam0))
	{
		return;
	}
	iVar0 = func_91(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

bool func_1059(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (!Global_1913621.f_1579 && !bParam5)
	{
		if (func_222(bParam0))
		{
			if (func_635(func_223(bParam0), bParam1))
			{
				return false;
			}
		}
		else if (func_901(bParam0, bParam1, 1))
		{
			return false;
		}
	}
	if (func_222(bParam0))
	{
		if (func_224(func_223(bParam0), bParam1, &Var0, 0, bParam7))
		{
			return true;
		}
	}
	else if (func_907(bParam0, 1, bParam1, &Var0, iParam4, bParam6, 0, bParam7))
	{
		return true;
	}
	*uParam2 = Var0;
	*uParam3 = Var0.f_1;
	return false;
}

bool func_1060(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1231(func_1230());
	iVar1 = func_1231(bParam0);
	return iVar1 > iVar0;
}

bool func_1061(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	bool bVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<2> Var35;
	int iVar38;
	bool bVar39;
	char* sVar40;
	char cVar41[16];
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	var uVar47;
	int iVar48;
	bool bVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_41);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_41, uParam2->f_36[iVar33]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[iVar33], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[iVar33], "inUse", false);
		iVar33++;
	}
	if (!bParam4 && func_360(bParam0, bParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar31 = Var0[iVar33 /*2*/];
				if (func_105(bVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[iVar33], "visible", true);
					if (func_539(bVar31, &Var35, 4.975531E-10f, 0, 0, 0))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_31[iVar33], "texture", Var35);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_31[iVar33], "textureDictionary", Var35.f_1);
					}
					iVar38 = func_350(bVar31, 0, 0, 0);
					bVar39 = iVar38 >= Var0[iVar33 /*2*/].f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_31[iVar33], "count", iVar38);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_31[iVar33], "enabled", func_594(bVar39, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[iVar33], "inUse", true);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = MISC::VAR_STRING(10, "CRFT_ING_LIST", MISC::VAR_STRING(0, Var0[iVar33 /*2*/]), func_594((func_99(uParam2, 131072) && uParam2->f_27 > 1), func_593(3, uParam2->f_27), Var0[iVar33 /*2*/].f_1));
					StringCopy(&cVar41, "Text", 16);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_36[iVar33], &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_36[iVar33], &cVar41, func_594(bVar39, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_41, -1, 7.867115E-28f, uParam2->f_36[iVar33]);
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!func_99(uParam2, 4) && ((func_99(uParam2, 8192) || uParam2->f_63 == -1.428267E+31f) || uParam2->f_63 == 6.221388E-29f))
		{
			bVar34 = false;
			if (func_399(bParam0))
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			iVar43 = func_350(bParam0, 0, 0, 0);
			iVar44 = func_1030(bParam0, 0);
			if (func_99(uParam2, 2) && !func_1060(bParam0))
			{
				bVar34 = false;
				bVar45 = func_1230();
				if (bParam0 == bVar45)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE"));
				}
				else
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = func_400(bParam0, -1.29539E-20f);
				if (!func_582(2) && iVar46 == -4.839888E+13f)
				{
					bVar34 = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(34, "CRFT_BREAK", 1, MISC::VAR_STRING(0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = func_225(bParam0, uParam2->f_63, func_583(), 0);
					if (func_99(uParam2, 2))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, func_1232(bParam0)));
					}
					else if (uParam2->f_63 == -1.428267E+31f)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_58, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_29, "ShowRpgDescription"))
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_63 == 6.221388E-29f)
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -4.839888E+13f)
					{
						if (iVar48 == 1)
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(130, "CRFT_ING_MAX", iVar43, iVar44, MISC::VAR_STRING(0, bParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!func_99(uParam2, 4) && ((func_99(uParam2, 8192) || uParam2->f_63 == -1.428267E+31f) || uParam2->f_63 == 6.221388E-29f))
	{
		bVar34 = false;
		if (func_399(bParam0))
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (func_99(uParam2, 2) && !func_1060(bParam0))
	{
		bVar49 = func_1230();
		if (bParam0 == bVar49)
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE"));
		}
		else
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_1062(var uParam0)
{
	if (func_99(uParam0, 2))
	{
		if (!func_312(uParam0->f_62, -4.733674E-34f))
		{
			func_46(&(uParam0->f_1[7]), 1, 1);
			return;
		}
		if (!func_45(uParam0->f_1[7]))
		{
			uParam0->f_1[7] = func_163("CAMP_ADD_TASK", -5.63933E-33f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
		}
		if ((uParam0->f_27 > 0 || uParam0->f_62 == Global_1147168.f_339.f_16) || !func_1060(uParam0->f_62))
		{
			func_164(uParam0->f_1[7], 0, 1, 1);
		}
		else
		{
			func_164(uParam0->f_1[7], 1, 1, 1);
		}
	}
}

bool func_1063(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_1064(bool bParam0)
{
	struct<19> Var0;

	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_1065(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
}

void func_1066(var uParam0)
{
	if ((func_312(uParam0->f_62, 888.6404f) || func_99(uParam0, 2)) && !func_312(uParam0->f_62, 4.644778E+30f))
	{
		if (func_236(uParam0->f_62, 5))
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
	}
}

void func_1067(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_29, "filterIndex");
	uParam0->f_42 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "filter", func_1049(uParam0->f_42));
}

int func_1068(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_PISTOL(iVar0))
	{
		return -2.313736E+30f;
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iVar0))
	{
		return 9.171683E+16f;
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iVar0))
	{
		return 7.069783E-10f;
	}
	else if (WEAPON::IS_WEAPON_REPEATER(iVar0))
	{
		return 0.0006533724f;
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iVar0))
	{
		return -3.730768E+35f;
	}
	return 0;
}

Vector3 func_1069(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_PISTOL(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iVar0))
	{
		return -1146890486, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iVar0))
	{
		return -1124744561 /* Float: -0.03f */, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_REPEATER(iVar0))
	{
		return 1000593162 /* Float: 0.005f */, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

char* func_1070(var uParam0)
{
	if (PED::IS_PED_MALE(Global_33))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_1071(var uParam0)
{
	return "craft_trans_stow";
}

void func_1072(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam15))
	{
		return;
	}
	if (!func_877(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 14, &uParam15);
}

void func_1073(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1144511[iVar0 /*83*/].f_38.f_28.f_2) || Global_1144511[iVar0 /*83*/].f_38.f_28.f_2 == iParam0) || bParam1)
		{
			Global_1144511[iVar0 /*83*/].f_38.f_28.f_2 = 255;
			Global_1144511[iVar0 /*83*/].f_38.f_28.f_3 = -1;
		}
	}
}

void func_1074(int iParam0, var uParam1)
{
	struct<7> Var0;
	struct<5> Var7;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var0);
	Var7.f_3 = 2;
	Var7.f_4 = 24;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&Var0, &Var7, &Var0);
	Global_1144511[iParam0 /*83*/].f_38.f_28.f_1 = uParam1;
	Global_1147168.f_339.f_1 = uParam1;
	Global_1147168.f_339.f_9 = { Var0 };
}

int func_1075(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		return func_529(PLAYER::PLAYER_ID());
	}
	return func_1233(GANG::NETWORK_GET_GANG_LEADER(iParam0));
}

void func_1076(int iParam0, var uParam1)
{
	struct<14> Var0;

	Var0.f_8 = iParam0;
	Var0.f_12 = uParam1;
	func_1072(17, Var0, func_110(0, 8));
}

void func_1077(var uParam0)
{
	struct<14> Var0;

	Var0.f_12 = uParam0;
	func_1072(13, Var0, func_109(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))));
}

struct<2> func_1078(bool bParam0)
{
	return func_106(-0.1137347f, bParam0);
}

struct<2> func_1079(bool bParam0)
{
	struct<2> Var0;

	if (func_236(bParam0, 0))
	{
		Var0 = { func_106(-1.073421E-07f, -1.100999E-17f) };
	}
	else if (func_236(bParam0, 2))
	{
		Var0 = { func_106(-1.073421E-07f, 6.919076E-28f) };
	}
	else if (func_236(bParam0, 5))
	{
		Var0 = { func_106(-1.073421E-07f, 7.900834E-16f) };
	}
	else if (func_236(bParam0, 1))
	{
		Var0 = { func_106(-1.073421E-07f, -2.364206E+35f) };
	}
	else if (func_236(bParam0, 3))
	{
		Var0 = { func_106(-1.073421E-07f, -5.71431E-39f) };
	}
	else if (func_236(bParam0, 4))
	{
		Var0 = { func_106(-1.073421E-07f, 1.035446E+14f) };
	}
	return Var0;
}

Vector3 func_1080(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1144511[func_112() /*83*/].f_38;
	}
	return Global_1144511[iParam0 /*83*/].f_38;
}

void func_1081(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_40() == 0)
	{
		iVar0 = func_604();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_1234(iParam0, sParam1, -5.149929E+33f, bParam4);
	}
	else
	{
		func_1235(iParam0);
		if (bParam3)
		{
			func_1236(iParam0, sParam1, iParam2);
		}
	}
}

int func_1082(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;

	iParam0 = func_414(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_105(bParam1, 0))
	{
		return 0;
	}
	if (!func_614(iParam0))
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
			if (!func_615(iVar28))
			{
			}
			else
			{
				MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), true, true, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = Var3.f_1[iVar29];
					if (iVar30 == bParam1)
					{
						func_696(bParam1, 1, 6.028273E-12f);
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							bVar31 = func_441(&iVar28);
							if (!func_105(bVar31, 0))
							{
								bVar31 = func_442(iVar28);
							}
							if (func_105(bVar31, 0))
							{
								func_443(bVar31, 1, iVar0, 1, -5.149929E+33f);
							}
							ENTITY::_DELETE_CARRIABLE(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

void func_1083(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (iParam1 > 0)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_400(bParam0, 5.339713E+22f);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_607(-5.45926E-19f, -5.45926E-19f, 0, 1.659074E-30f, 0, 0, -1, iVar12, 0) };
		if (func_608(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					bVar13 = func_609(iVar14, iVar0);
					if (func_105(bVar13, 0) && bParam0 != bVar13)
					{
						iVar15 = func_350(bVar13, 0, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_1237(bVar13, bParam0, 0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_613(iVar0);
		}
	}
}

void func_1084(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	bool bVar15;

	if (!func_105(bParam0, 0))
	{
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = func_1238(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (uVar2[iVar14] == bParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else if (PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&bVar15, iVar1, PED::_GET_PED_DAMAGE_CLEANLINESS(iVar1)) && bVar15 == bParam0)
			{
				ENTITY::_DELETE_CARRIABLE(&iVar0);
			}
		}
	}
}

int func_1085(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_414(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_105(bParam1, 0))
	{
		return 0;
	}
	if (!func_614(iParam0))
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	bVar1 = bParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < iParam2)
	{
		if (PED::_GET_PELT_FROM_HORSE(iVar0, iVar3) != bVar1)
		{
		}
		else if (func_1137(bParam1, iParam2, 1, -5.149929E+33f))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_1086(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_40() == 0)
	{
		return 0;
	}
	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_367(0) };
	Var0.f_4 = func_605(iParam1);
	Var5 = { func_368(bParam0, Var0, Var0.f_4, 0) };
	if (!func_459(bParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1087(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -234962.3f;
		case 3:
			return 2.366417E+21f;
		case 4:
			return -1.386107E+34f;
		case 5:
			return -2.97167E-15f;
		case 6:
			return 8.463119E-19f;
		case 7:
			return 2.760042E+27f;
		case 8:
			return -4.521658E+16f;
		case 11:
			return 1.686081E-15f;
		case 12:
			return 2.99786E-23f;
		case 13:
			return -2.068241E-16f;
		case 15:
			return 0.01508827f;
		case 16:
			return 7.09962E-31f;
		case 18:
			return 0.01298591f;
		case 19:
			return 1.588368E+16f;
		case 20:
			return -31.0099f;
		case 21:
			return -1.94923E-30f;
		case 24:
			return -6.251165E-27f;
		case 27:
			return 9.786227E+32f;
		case 28:
			return 6.615322E+17f;
		case 29:
			return -4569.771f;
		case 30:
			return -2.826478E-24f;
		case 32:
			return 1.083073E-23f;
		case 34:
			return 1.08003E-10f;
		case 35:
			return 0.001343195f;
		case 38:
			return 3.083274f;
		case 39:
			return -2.630747E+29f;
		case 49:
			return -6.894112E-24f;
		case 50:
			return 6.146509E+25f;
		case 51:
			return 1.102432E+08f;
		case 52:
			return 5.512026E-06f;
		case 53:
			return 7.999936E-33f;
		case 1:
			return 3.893925E+35f;
		case 9:
			return -9.171282E-05f;
		case 10:
			return 2.919138f;
		case 14:
			return -3.200285E-39f;
		case 17:
			return 6.343439E-12f;
		case 22:
			return -2.805407E+09f;
		case 23:
			return 1.683938E+30f;
		case 25:
			return -9.631347E+33f;
		case 26:
			return 6.436501E-06f;
		case 31:
			return 1.492619E-33f;
		case 33:
			return -1.271906E-21f;
		case 36:
			return 5.975847E+18f;
		case 37:
			return -2.818925E-24f;
		case 40:
			return 2.259795E-15f;
		case 42:
			return -0.0004785703f;
		case 43:
			return 1.971843f;
		case 41:
			return -1.666145E+15f;
		case 44:
			return -7.50816E-16f;
		case 45:
			return -1.131684E-30f;
		case 46:
			return 1.692283E+27f;
		case 47:
			return -694.8118f;
		case 48:
			return -2.879174E-18f;
	}
	return 0;
}

bool func_1088(bool bParam0, bool bParam1, float fParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (bParam0 != 0 && bParam1 != 0)
	{
		iVar1 = func_228(bParam1);
		iVar5 = func_1239(bParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (func_619(bParam0, iVar1, iVar2))
				{
					*uParam4 = { func_226(bParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_368(bParam1, *uParam4, uParam4->f_4, 0) };
					*fParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -5.45926E-19f;
			Var20.f_9 = -5.45926E-19f;
			iVar34 = func_213(0);
			Var37 = { func_226(bParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_368(bParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_228(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (func_619(bParam0, iVar1, iVar2))
							{
								if (func_1240(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*fParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*fParam2 = 0;
	return false;
}

struct<4> func_1089()
{
	struct<4> Var0;

	Var0 = { func_367(0) };
	return func_368(3.210799E-08f, Var0, -9.692375E+30f, 0);
}

bool func_1090(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	float fVar9;
	struct<4> Var10;
	struct<4> Var14;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (!func_1088(bParam0, 3.210799E-08f, &fVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1089() };
	Var14 = { func_368(bParam0, Var10, fVar9, 0) };
	if (func_797(Var14, iParam1, 0))
	{
		if (func_1241(bParam0))
		{
			if (func_1242(2.842945E-27f, &bVar18))
			{
				if (func_1090(bVar18, 0))
				{
				}
			}
		}
		else if (func_1243(bParam0))
		{
			if (func_1242(2.842945E-27f, &bVar19))
			{
				if (func_1090(bVar19, 0))
				{
				}
			}
			if (func_1242(-0.0001455402f, &bVar20))
			{
				if (func_1090(bVar20, 0))
				{
				}
			}
		}
		else if (func_1244(bParam0))
		{
			if (func_1242(2.842945E-27f, &bVar21))
			{
				if (func_1090(bVar21, 0))
				{
				}
			}
			if (func_1242(-0.0001455402f, &bVar22))
			{
				if (func_1090(bVar22, 0))
				{
				}
			}
			if (func_1242(-1157.516f, &bVar23))
			{
				if (func_1090(bVar23, 0))
				{
				}
			}
		}
		else if (func_1245(bParam0))
		{
			if (func_1242(2.842945E-27f, &bVar24))
			{
				if (func_1090(bVar24, 0))
				{
				}
			}
			if (func_1242(-0.0001455402f, &bVar25))
			{
				if (func_1090(bVar25, 0))
				{
				}
			}
			if (func_1242(-1157.516f, &bVar26))
			{
				if (func_1090(bVar26, 0))
				{
				}
			}
			if (func_1242(0.001620535f, &bVar27))
			{
				if (func_1090(bVar27, 0))
				{
				}
			}
			if (func_1242(6.295092E+08f, &bVar28))
			{
				if (func_1090(bVar28, 0))
				{
				}
			}
		}
		else if (func_1091(bParam0))
		{
			if (func_1242(2.842945E-27f, &bVar29))
			{
				if (func_1090(bVar29, 0))
				{
				}
			}
			if (func_1242(0.001620535f, &bVar30))
			{
				if (func_1090(bVar30, 0))
				{
				}
			}
			bVar31 = func_1092(bParam0);
			if (func_105(bVar31, 0))
			{
				if (func_1090(bVar31, 1))
				{
				}
			}
		}
		func_1093();
		return true;
	}
	return false;
}

bool func_1091(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (func_312(bParam0, -6.446212E+29f))
	{
		return true;
	}
	return false;
}

bool func_1092(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 1.718565E-29f;
		case joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -4.05655E+37f;
		case joaat("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
			return -1593.584f;
		case joaat("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
			return 3.657296E-18f;
		case joaat("HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000"):
			return 26.6469f;
	}
	return false;
}

int func_1093()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	bool bVar21;

	Var0 = { func_226(3.210799E-08f, 0, 0) };
	Var5 = { func_368(3.210799E-08f, Var0, Var0.f_4, 0) };
	iVar10 = func_228(3.210799E-08f);
	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		bVar14 = func_796(Var5, -8.769617E+23f, 0, -1);
	}
	if (!func_105(bVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1239(3.210799E-08f);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			bVar21 = func_796(Var5, iVar11, 0, -1);
			if (!func_105(bVar21, 0))
			{
				if (iVar11 == 2.842945E-27f)
				{
					if ((((func_1091(bVar14) || func_1241(bVar14)) || func_1243(bVar14)) || func_1244(bVar14)) || func_1245(bVar14))
					{
					}
					else
					{
						Jump @405; //curOff = 232
						if (iVar11 == -0.0001455402f)
						{
							if ((func_1243(bVar14) || func_1244(bVar14)) || func_1245(bVar14))
							{
							}
							else
							{
								Jump @405; //curOff = 281
								if (iVar11 == -1157.516f)
								{
									if (func_1244(bVar14) || func_1245(bVar14))
									{
									}
									else
									{
										Jump @405; //curOff = 318
										if (iVar11 == 0.001620535f)
										{
											if (func_1091(bVar14) || func_1245(bVar14))
											{
											}
											else
											{
												Jump @405; //curOff = 355
												if (iVar11 == -1157.516f)
												{
													if (func_1245(bVar14))
													{
													}
													else
													{
														Jump @405; //curOff = 380
														if (iVar11 == 6.295092E+08f)
														{
															if (func_1245(bVar14))
															{
															}
															else
															{
																bVar15 = true;
																Jump @445; //curOff = 408
																if (iVar11 == -0.0001455402f)
																{
																	if (!func_1091(bVar14) && func_1246(bVar21))
																	{
																		bVar15 = true;
																	}
																}
																if (bVar15)
																{
																	if (func_1247(iVar11, &Var16, 1))
																	{
																		if (!func_797(Var16, 1, 0))
																		{
																		}
																	}
																}
															}
															iVar9++;
															return 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_1094(bool bParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_605(iParam1);
	if (!func_1248(bParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_381(bParam0, &Var0, 0, 0);
	iVar6 = func_889(bParam0, 0, 0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

void func_1095(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1249(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_1096(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_843(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_891(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_891(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_1097(int iParam0, bool bParam1, bool bParam2)
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

bool func_1098(bool bParam0)
{
	return func_228(bParam0) == 4.029065E+31f;
}

bool func_1099(bool bParam0)
{
	return func_228(bParam0) == -1.955052E+34f;
}

bool func_1100(bool bParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7[10];
	int iVar68;
	int iVar69;

	*uParam2 = bParam0;
	if (func_463(0))
	{
		iVar5 = func_358(func_1250(), bParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_367(1) };
			Var0.f_4 = func_605(iVar5);
			uParam2->f_1[0 /*4*/] = { func_368(bParam0, Var0, Var0.f_4, 1) };
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[0 /*4*/])))
			{
				return true;
			}
		}
	}
	iVar6 = func_379(bParam0, -3.294982E+22f);
	if (iVar6 != 0)
	{
		if (!func_726(&Var7, &iVar68, bParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			uParam2->f_1[iVar69 /*4*/] = { func_368(bParam0, Var7[iVar69 /*6*/], Var7[iVar69 /*6*/].f_4, 1) };
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[iVar69 /*4*/])))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_226(bParam0, 1, 0) };
	uParam2->f_1[0 /*4*/] = { func_368(bParam0, Var0, Var0.f_4, 1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[0 /*4*/])))
	{
		return false;
	}
	return true;
}

bool func_1101(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam3 != 1.704487E-19f && iParam3 != -1.82867E-29f)
	{
		return false;
	}
	if (!func_1251(*iParam1))
	{
		return false;
	}
	if (!func_1252(iParam0, iParam3))
	{
		return false;
	}
	if (NETSHOPPING::_0xA3B8D31C13CB4239(*iParam0, 1.704487E-19f, iParam1, 18, iParam2, *iParam2))
	{
	}
	else
	{
		return false;
	}
	return func_1253(iParam0, bParam4);
}

bool func_1102(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(bParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(bParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1103(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_378(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_40() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_1254(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_1104(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_1105(bool bParam0, bool bParam1)
{
	if (!func_903(bParam0, bParam1))
	{
		return false;
	}
	if (bParam0 == 5.725531E+31f)
	{
		return func_394(1.90694E+21f, 1);
	}
	else if (bParam0 == 3.260984E-38f)
	{
		return func_394(0.0002301198f, 1);
	}
	else if (bParam0 == 1.541746E-27f)
	{
		return func_394(-1.766809E-31f, 1);
	}
	else if (bParam0 == -1.84846E-25f)
	{
		return func_394(-3.589852E-30f, 1);
	}
	else if (bParam0 == 1.806564E-25f)
	{
		return func_394(-6.181976E+29f, 1);
	}
	else if (bParam0 == -6.888817E-09f)
	{
		return func_394(-7.708751E+16f, 1);
	}
	return func_394(bParam0, 1);
}

bool func_1106(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_378(bParam0, 2))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(bParam0, bParam1);
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
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_1255(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_1107(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 4.059549E+37f && iParam3 != -3.415538E-09f) && iParam3 != 7.184882E+22f)
	{
		return false;
	}
	if (!func_1256(iParam3, iParam1, iParam5))
	{
		return false;
	}
	if (!func_1252(iParam0, iParam3))
	{
		return false;
	}
	if (func_1257(*iParam0, iParam3, iParam1, iParam2))
	{
	}
	else
	{
		return false;
	}
	return func_1253(iParam0, bParam4);
}

bool func_1108(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_1109(bool bParam0)
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

void func_1110(int iParam0)
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

void func_1111(bool bParam0)
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

void func_1112(bool bParam0)
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

void func_1113(bool bParam0)
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

void func_1114(bool bParam0)
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

void func_1115(bool bParam0)
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

void func_1116(bool bParam0)
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

bool func_1117()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_1118(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

int func_1119()
{
	return Global_1902565;
}

void func_1120(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1258(*iParam0);
	iVar1 = func_1259(*iParam0);
	iVar2 = func_1260(*iParam0);
	iVar3 = func_1261(*iParam0);
	iVar4 = func_1262(*iParam0);
	iVar5 = func_1263(*iParam0);
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
	iVar6 = func_1264(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1264(iVar1, iVar0);
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
	func_1265(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_1121(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1266())
	{
		Global_1913431.f_125 = MISC::GET_GAME_TIMER();
		Global_1913431.f_126 = iParam1;
	}
	Global_1913431.f_127 = (Global_1913431.f_127 + iParam0);
}

bool func_1122()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-3.159453E+34f);
}

bool func_1123()
{
	return DLC::IS_DLC_PRESENT(-1.05615E-37f);
}

bool func_1124(bool bParam0)
{
	if (!func_546(bParam0, 9.300934E+31f))
	{
		return false;
	}
	if (!func_1267(bParam0, 1))
	{
		return false;
	}
	return true;
}

int func_1125(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_1268(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1, iParam2, bParam3, iParam4);
}

bool func_1126(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1269(bParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_1270(iVar0, 1);
		iVar2 = iVar1;
		if (bParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1127(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_414(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	bVar0 = func_1271(bParam1);
	if (bVar0 != 0)
	{
		iVar1 = func_1272(bVar0, 1);
		if (iVar1 > -1)
		{
			iVar2 = Global_1903834.f_402[iVar1];
			if (iVar2 > 0)
			{
				iVar3 = iParam2;
				if (iVar3 > iVar2)
				{
					iVar3 = iVar2;
				}
				if (!func_1273(iVar3, 0))
				{
				}
				Global_1903834.f_402[iVar1] = (Global_1903834.f_402[iVar1] - iVar3);
				return true;
			}
		}
	}
	return false;
}

bool func_1128(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return iParam1;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return iParam1;
	}
	return func_1274(iVar0, bParam2) >= func_1275(bParam2);
}

int func_1129(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (iParam0 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			iVar1 = PED::_GET_PELT_FROM_HORSE(iParam0, iVar0);
			if (iVar1 == bParam1)
			{
				PED::_CLEAR_PELT_FROM_HORSE(iParam0, bParam1);
				iParam2 = (iParam2 - 1);
			}
		}
		else
		{
			iVar1 = Global_1289628[PLAYER::PLAYER_ID() /*19*/].f_15[iVar0];
			if (iVar1 == bParam1)
			{
				Global_1289628[PLAYER::PLAYER_ID() /*19*/].f_15[iVar0] = 0;
				iParam2 = (iParam2 - 1);
			}
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

int func_1130(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0)) || !PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4)) && bParam1 == func_1131(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iVar0;
}

bool func_1131(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam0) || ENTITY::_GET_IS_BIRD(iParam0))
	{
		bVar0 = func_441(&iParam0);
		if (!func_105(bVar0, 0))
		{
			bVar0 = func_442(iParam0);
		}
	}
	else
	{
		bVar0 = func_442(iParam0);
	}
	return bVar0;
}

bool func_1132(bool bParam0, bool bParam1)
{
	*bParam1 = func_1276(bParam0);
	return *bParam1 != 0;
}

void func_1133(bool bParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, bParam0, 96);
}

int func_1134(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (func_1132(bParam0, &bVar1))
	{
		bParam0 = bVar1;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(bParam0, &iVar0))
	{
		return -1;
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		case 4:
			return 8;
		default:
			break;
	}
	return -1;
}

float func_1135(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			return 2.926168E-33f;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			return -5.462538f;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return -4.784702E+10f;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return -6.023587E-14f;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			return -2.342158E-08f;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			return 1.664632E+25f;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return -1.005847E-05f;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			return -4213762f;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			return -3.374343E-14f;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			return -2.25821E-23f;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return -2.306786E-16f;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return -2.110178E-07f;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return -1.124226E-21f;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return 1.159723E-11f;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			return -1.578159E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return 7.866752E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return 1.579949E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 7.437424E+09f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -1.462146E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 9.292199E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -2.671033E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 6.181888E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return -9.844883E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 2.424045f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return -2.805198E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return 391712.9f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return 2.090133E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return 1.117421E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return 1.130478E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return 9.269336E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 5.08642E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return -5.011415E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return -3.378005E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 3.877905E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return 1.732753E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -0.0002879417f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -4.896665E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return 9.337454E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 6.538152E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return -6.539324E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -1.012775E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return -1.867584E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return 1.693745E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return 2.311227E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return -4.064678E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return -9.346937f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return -3.628332E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 4.932888E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return -2.459895f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return -3.950382E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return -6.60525E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return -3.304194E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -2.416964E-10f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 1.932909E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return 2019.863f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -692.5446f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return 7.940739E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return 1.096912E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return 4.197798E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return 2.306707E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return -5.025934E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 0.4031149f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return -2196176f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return 1.149421E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 2.447786E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return 1.161864E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -3.334843E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -4.389108E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 2.32403E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -101012.1f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return -2.898737E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return -1.51341E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return 4.411597E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -4.765618E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return -4.788333E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return -2.664562E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return 9.336396E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -4.064678E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return -999.0335f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return -76769.3f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return -1.614028E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return -1.725138E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -2.492811E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return -76769.3f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return -1.918344E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -8.491031E-37f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 1.399463E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return 1.735336E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return -1.17679E+23f;
		case 1414321383:
			return 1.434985E-07f;
		case 2121214287:
			return -4.486101E-17f;
		case 1412158665:
			return -4580.342f;
		case 1206211508:
			return 6.610703E+10f;
		case 1919002796:
			return -4948933f;
		case 1611367424:
			return -1.321043E+28f;
		case -1454395863:
			return 1.995113E-25f;
		case -141899106:
			return -5.907303E-05f;
		case 2005813927:
			return 3.759906f;
		case -479364468:
			return -1.411351E-17f;
		case -702554127:
			return -1.201465E+32f;
		case 975087601:
			return -3.430854E-06f;
		case 867797271:
			return -3.291227E+35f;
		case 1082303145:
			return -2.264169E-22f;
		case -1436813734:
			return 2.781082E-12f;
		case 1351891043:
			return 2.62237E+31f;
		case 1120509134:
			return -1.201746E+36f;
		case 1834283492:
			return -5.668108E-24f;
		case -479703236:
			return 6.427649E-24f;
		case -854187368:
			return 0.04130429f;
		case -2047339431:
			return 0.05244859f;
		case 911411503:
			return 4.320882E+26f;
		case 1194568432:
			return 6.496686E-25f;
		case 418238053:
			return 3.759013E-32f;
		case -1337904993:
			return -5.687453E-13f;
		case -1012148364:
			return -2.342985E-28f;
		case -715261224:
			return -1.699095E+32f;
		case 466164206:
			return -3.952973E+30f;
		case -1042520562:
			return 5.957507E-27f;
		case -1340161389:
			return 9.54755E-12f;
		case 138561101:
			return 3.93412E+21f;
		case 365093198:
			return -2.588016E+24f;
		case 78233372:
			return -1.134702E-07f;
		case 929575765:
			return -1.582541E+31f;
		case -2012326752:
			return -6.981198E+18f;
		case 1527970474:
			return 5.667451E-15f;
		case -775904514:
			return -2.763145f;
		case -481868277:
			return 6.090971E-28f;
		case -118328991:
			return -6.417472E-21f;
		case -816011142:
			return 0.000548534f;
		case -1046803209:
			return 2.894728E+15f;
		case -338665119:
			return -1.132064E-26f;
		default:
			break;
	}
	return -2.56015E-24f;
}

void func_1136(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_40() == -1)
	{
		iVar0 = func_245(7);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	}
	func_1129(iVar0, bParam0, iParam1);
}

bool func_1137(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_367(0) };
	Var0.f_4 = 5.960322E-13f;
	Var5 = { func_368(bParam0, Var0, Var0.f_4, 0) };
	return func_459(bParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

bool func_1138(var uParam0)
{
	if (!func_1277(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

bool func_1139(struct<2> Param0, bool bParam2)
{
	if (!func_122(Param0))
	{
		return false;
	}
	func_1278(bParam2);
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

bool func_1140(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_1141()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1245159.f_9818;
	vVar1.f_2 = -28.97993f;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_1142()
{
	return Global_1110244.f_3667.f_938;
}

int func_1143(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < Global_1110244.f_3667.f_729[iVar0 /*2*/])
	{
		return func_1143(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1110244.f_3667.f_729[iVar0 /*2*/])
	{
		return func_1143(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_1144(int iParam0)
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

bool func_1145(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 83);
}

bool func_1146(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = func_1279();
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iVar0))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar0))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar1, 5);
	*bParam0 = iVar0;
	return true;
}

bool func_1147(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(bParam5, &Param0))
	{
		return false;
	}
	return true;
}

struct<8> func_1148(struct<5> Param0)
{
	return func_1280(Param0, 52, 1);
}

int func_1149(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_5"):
			return 0;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_3"):
			return 1;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_1"):
			return 2;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_5"):
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_1150(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_122(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_1281(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_1151(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_966(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_14 != -1)
	{
		return (Global_17418[iParam0] && iParam1) != 0;
	}
	return (Global_38.f_4675[iParam0] && iParam1) != 0;
}

bool func_1152(int iParam0)
{
	if (!func_966(iParam0))
	{
		return false;
	}
	return func_1151(iParam0, 2, 1);
}

int func_1153(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_1282())
	{
		return 0;
	}
	if (!func_524())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_1156(&Global_0, 8);
	}
	func_1156(&Global_0, 1);
	return 1;
}

int func_1154(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_1155(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_299(239, 0);
			break;
		case 16:
			func_299(240, 0);
			break;
		case 34:
			func_299(241, 0);
			break;
		case 52:
			func_299(242, 0);
			break;
		case 2:
			func_299(243, 0);
			break;
		case 3:
			func_299(244, 0);
			break;
		case 53:
			func_299(245, 0);
			break;
		case 15:
			func_299(246, 0);
			break;
		case 24:
			func_299(247, 0);
			break;
		case 38:
			func_299(248, 0);
			break;
		case 27:
			func_299(249, 0);
			break;
		case 13:
			func_299(250, 0);
			break;
		case 19:
			func_299(251, 0);
			break;
		case 20:
			func_299(252, 0);
			break;
		case 35:
			func_299(253, 0);
			break;
		case 39:
			func_299(254, 0);
			break;
		case 50:
			func_299(255, 0);
			break;
		case 7:
			func_299(256, 0);
			break;
		case 21:
			func_299(257, 0);
			break;
		case 18:
			func_299(258, 0);
			break;
		case 6:
			func_299(259, 0);
			break;
		case 30:
			func_299(260, 0);
			break;
		case 49:
			func_299(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_299(263, 0);
			break;
		case 8:
			func_299(264, 0);
			break;
		case 29:
			func_299(265, 0);
			break;
		case 32:
			func_299(266, 0);
			break;
		case 12:
			func_299(267, 0);
			break;
		case 28:
			func_299(268, 0);
			break;
		case 51:
			func_299(269, 0);
			break;
	}
}

void func_1156(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1157()
{
	return Global_1953279.f_1676;
}

int func_1158(bool bParam0)
{
	struct<4> Var0;
	int iVar14;
	struct<4> Var15;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<18> Var22;

	Var0.f_9 = -5.45926E-19f;
	iVar14 = 0;
	Var15 = { func_368(5.207907E-07f, func_367(1), 0.08386164f, 1) };
	iVar19 = func_796(Var15, 4.163947E-19f, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == -6.390629E-21f)
		{
			iVar14 = 4.387347E-38f;
		}
		else if (iVar19 == 9.984187E-07f)
		{
			iVar14 = 3.272964E+34f;
		}
		return iVar14;
	}
	Var22 = { func_559(0, -5.45926E-19f, 4.163947E-19f, -5.45926E-19f, 0, 0, 0) };
	if (func_561(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_562(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == -6.390629E-21f)
			{
				iVar14 = 4.387347E-38f;
			}
			else if (Var0.f_4 == 9.984187E-07f)
			{
				iVar14 = 3.272964E+34f;
			}
			else
			{
				func_563(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_797(Var0, 1, 0);
			}
			func_563(iVar20);
			return iVar14;
		}
		func_563(iVar20);
	}
	return 0;
}

int func_1159(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3.721427E-31f;
		case 2:
			return 1.937973E-35f;
		case 3:
			return -6.792218E+09f;
		case 4:
			return 2.526232E+07f;
		case 5:
			return -4.48861E-34f;
		case 6:
			return -4.959585f;
		case 7:
			return 1.352176E+38f;
		case 8:
			return -2.202343E-09f;
		case 9:
			return 2.311465E+20f;
		case 10:
			return 0.0003177309f;
		default:
			break;
	}
	return 0;
}

bool func_1160(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (*uParam1 <= 0)
	{
		*uParam1 = 0;
		return false;
	}
	if (Global_1953279.f_3352.f_26 <= 1)
	{
		Global_1953279.f_3352.f_26 = 0;
		*uParam1 = 0;
		Global_1953279.f_3352[0] = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1953279.f_3352.f_26 - 1))
	{
		if (bParam0 == Global_1953279.f_3352[iVar0])
		{
			bVar1 = true;
		}
		if (bVar1 && iVar0 < (Global_1953279.f_3352.f_26 - 1))
		{
			Global_1953279.f_3352[iVar0] = Global_1953279.f_3352[iVar0 + 1];
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_1953279.f_3352.f_26 = (Global_1953279.f_3352.f_26 - 1);
		*uParam1 = (*uParam1 - 1);
		Global_1953279.f_3352[Global_1953279.f_3352.f_26] = 0;
		func_981(bParam0, 1, bParam2);
	}
	return bVar1;
}

bool func_1161(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_1167(iParam6);
	Var4.f_1 = bParam1;
	Var4.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var4);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var4))
	{
		return false;
	}
	DATAFILE::_PARSEDDATA_GET_BOOL(&bVar2, &Var4, -2.622373E-16f);
	DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 2.24095E+35f);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_1284(uParam0, func_1283(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_790(-1);
		}
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, -2.161193E-05f))
		{
			iVar11 = func_1283(iVar0);
		}
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var4))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 2.24243E+12f))
		{
		}
		else
		{
			bVar3 = iVar0;
			iVar1 = func_266(bVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 1.154786E+11f))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2)
				{
					func_1285(bVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = 1808.893f;
					}
					else
					{
						Jump @362; //curOff = 297
						if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 46846.96f))
						{
							if (func_1286(bVar3) && func_1012(uParam0->f_1[iVar1 /*3*/], bVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_1288(uParam0, iVar11, func_1287(bParam1) != 0, iParam9);
						}
					}
					else if ((((func_785() == 4.387347E-38f && uParam0->f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/]) && func_1287(uParam0->f_1[34 /*3*/]) == 0) && !func_425(32)) && !func_425(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_1173(-2.763755E-08f, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = 1808.893f;
						func_793(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = bParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_1162(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = bParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_1163(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1164(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1165(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1166(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1167(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_785();
	}
	if (iParam0 == 3.272964E+34f)
	{
		return -1.077915E-26f;
	}
	else if (iParam0 == 4.387347E-38f)
	{
		return -10172.2f;
	}
	return 0;
}

void func_1168(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_312(bVar1, 3.611922E-33f) || func_228(bVar1) == 5.002459E-36f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
}

void func_1169(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(uParam0->f_1[iVar0 /*3*/], -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
}

void func_1170(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-9.847085E+19f == func_228(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
}

bool func_1171(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_228(bParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 8.292232E+24f || iVar0 == 1.34646E-26f);
	}
	return (!bParam1 && (iVar0 == -2.443576E-24f || iVar0 == 1.34646E-26f));
}

bool func_1172(int iParam0)
{
	return (Global_17418.f_55.f_664.f_1734 && iParam0) != 0;
}

int func_1173(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<18> Var3;

	iVar2 = 0;
	Var3 = { func_559(0, -5.45926E-19f, iParam0, -5.45926E-19f, 0, 0, 0) };
	if (func_561(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1289(iVar0, iVar1, iParam1);
		}
		func_563(iVar0);
	}
	return iVar2;
}

void func_1174(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 16;
	bVar1 = false;
	if (func_785() == 4.387347E-38f)
	{
		bVar1 = true;
	}
	func_791(iVar0, iParam1);
	if (uParam0->f_1[iVar0 /*3*/].f_1 == -4.070739E-17f || uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
	{
		return;
	}
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == 1808.893f)
	{
		if (func_1011(uParam0->f_1[iVar0 /*3*/], bVar1, -4.070739E-17f) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
			return;
		}
	}
	if (func_1011(uParam0->f_1[iVar0 /*3*/], bVar1, 4.712272E+09f) >= 0)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 4.712272E+09f;
	}
}

void func_1175(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam2, -1.06471E-16f)) && !func_312(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f || uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f) && func_312(bParam2, -3099.443f))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
			func_791(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
			func_791(iVar0, iParam3);
		}
	}
}

void func_1176(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -1.366178E-36f)
	{
		iVar0 = 34;
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_312(bVar1, 3.984539E+18f))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -1.366178E-36f;
			func_791(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			bVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && 1.825867E+25f == func_228(bVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -1.366178E-36f;
				func_791(iParam2, iParam3);
			}
		}
	}
}

void func_1177(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 16;
	func_791(iVar0, iParam3);
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_312(bParam2, 3.949663E+29f) && func_228(bVar1) == 7.30981E-14f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
		else if (func_312(bParam2, 8.367934E-23f) && func_228(bVar1) == 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
		else
		{
			func_791(iVar0, iParam3);
		}
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_791(iVar0, iParam3);
			func_1004(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
		}
		iVar0 = 17;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam2, 170.5778f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam2, -3099.443f))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam2, -1.06471E-16f)) && !func_312(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
}

void func_1178(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_791(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && !func_312(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam2, 1.096909E-14f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
}

bool func_1179(bool bParam0)
{
	return Global_1953279.f_1676.f_1[func_266(bParam0, 1) /*3*/] != Global_1953279.f_83[func_266(bParam0, 1) /*12*/];
}

void func_1180(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam1);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_791(iVar0, iParam1);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_312(uParam0->f_1[iVar0 /*3*/], -336998.2f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
		func_791(iVar0, iParam1);
	}
}

void func_1181(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if (func_785() == 4.387347E-38f)
	{
		bVar3 = true;
	}
	if (func_785() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] && func_228(uParam0->f_1[18 /*3*/]) != 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = func_1173(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_791(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam2, -9.489474E-15f))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_312(bVar1, 3.411183E+14f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else if (func_1011(uParam0->f_1[iVar0 /*3*/], bVar3, -1.366178E-36f) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_228(bVar1) == 3.381578E-06f)
		{
			bVar2 = true;
			if (func_312(bParam2, 3.984539E+18f))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
				func_791(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_228(bVar1) == 6.698816E+28f && func_312(bParam2, -234.3313f))
		{
			func_1290(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_791(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (8.292232E+24f == func_228(uParam0->f_1[iVar0 /*3*/]))
	{
		func_791(16, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam2, -4.282854E-21f))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_228(bVar1) == 1.825867E+25f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
	}
}

void func_1182(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	if (func_785() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] && func_228(uParam0->f_1[18 /*3*/]) != 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = func_1173(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_312(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_1188(uParam0, iParam3, 1, 0);
		}
		else if (func_312(bParam2, 2.896282E+23f))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
	func_791(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_312(bVar1, 8.399988f) && func_312(bParam2, 7.029633E-22f))
		{
			func_1290(uParam0, iVar0, iParam3);
		}
	}
}

void func_1183(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	func_791(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
	if (func_785() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_1173(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953279.f_83[iVar0 /*12*/] && func_312(bVar1, 2.801708E-26f))
	{
		func_1290(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && 1.825867E+25f == func_228(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
}

void func_1184(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_228(bVar1) == 2.209101E-28f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_228(bVar1) == 3.381578E-06f)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != 1808.893f)
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
				func_791(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_791(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_312(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_1188(uParam0, iParam3, 1, 0);
		}
		else if (func_312(bParam2, 2.896282E+23f))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
}

void func_1185(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_1290(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_312(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_1188(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
			func_791(iVar0, iParam2);
		}
	}
}

void func_1186(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		func_791(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
		func_791(iVar0, iParam3);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_312(bParam2, -9.697137E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (3.381578E-06f == func_228(bVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -1.366178E-36f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
			func_791(iVar0, iParam3);
		}
	}
}

void func_1187(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_312(bParam2, -9.697137E-08f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam3);
	}
}

void func_1188(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam1);
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -494711.9f == func_228(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam1);
	}
}

void func_1189(var uParam0, int iParam1, int iParam2)
{
	Global_17418.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

void func_1190(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1189(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_1191(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17418.f_55.f_664.f_33[iParam1 /*120*/] = (Global_17418.f_55.f_664.f_33[iParam1 /*120*/] || iParam0);
	}
}

bool func_1192(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_213(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_620(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

struct<29> func_1193(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<29> Var0;
	struct<29> Var29;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var29.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_213(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1199(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_1194(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_624(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_626(func_1291(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_627(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

struct<26> func_1195(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<26> Var0;
	struct<24> Var26;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var26.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_213(bParam4), &uParam0, &Var26, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1199(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_1196(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_626(func_1292(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_627(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

struct<18> func_1197(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var18.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_213(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1199(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_1198(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_624(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_626(func_1293(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_627(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	return -1;
}

struct<17> func_1199(var uParam0, bool bParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_379(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_616() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1200()
{
	return func_122(Global_1051268);
}

bool func_1201(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

int func_1202(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_105(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_1294(iParam0, bParam1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &Var0, false);
	return iVar4;
}

bool func_1203()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!func_1295(iVar0))
	{
		return false;
	}
	return true;
}

bool func_1204(int iParam0)
{
	float fVar0;

	fVar0 = (func_1296(iParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(iParam0));
	return fVar0 <= 1f;
}

void func_1205(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_1258(*iParam0);
	iVar1 = func_1259(*iParam0);
	iVar2 = func_1260(*iParam0);
	iVar3 = func_1261(*iParam0);
	iVar4 = func_1262(*iParam0);
	iVar5 = func_1263(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_1264(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1265(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1206(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_676(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_6[iParam0 /*3*/].f_2;
		case 1:
			return Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
		default:
			break;
	}
	return -1;
}

int func_1207(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_676(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_6[iParam0 /*3*/].f_1;
		case 1:
			return Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
		default:
			break;
	}
	return -15;
}

bool func_1208(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1297(iParam1) || !func_1297(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1209(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_676(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_1210(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_676(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
		default:
			break;
	}
}

bool func_1211(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (fParam2 > 1120403456)
	{
		fParam2 = 1120403456; /* Float: 100f */
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_1298(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_1212(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_676(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_1213(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1299(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_1300(iParam1), fParam2, -1);
	}
}

void func_1214(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_676(2);
	}
	uVar0 = Global_1295619.f_16;
	func_1301(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1302(iParam0, uVar0, iParam3);
	}
}

bool func_1215(int iParam0, bool bParam1)
{
	return func_1208(func_1119(), iParam0, bParam1);
}

float func_1216(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_676(1);
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

int func_1217(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 1120403456);
	return BUILTIN::ROUND(((fVar0 / 1120403456) * BUILTIN::TO_FLOAT(10)));
}

int func_1218(int iParam0, float fParam1, int iParam2)
{
	if (!func_1303(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_676(2);
	}
	func_1304(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1295619.f_3))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295619.f_3, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

bool func_1219(int iParam0)
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

char* func_1220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_1221(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1156096.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1156096.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_1305(iVar0, 1);
		if (Global_1156096.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_1306(iVar0);
			Global_1156096.f_47689.f_1.f_42 = (Global_1156096.f_47689.f_1.f_42 - 1);
		}
		else
		{
			Var6[iVar4 /*2*/] = { Global_1156096.f_47689.f_1[iVar2 /*2*/] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		Global_1156096.f_47689.f_1[iVar5 /*2*/] = { Var6[iVar5 /*2*/] };
		iVar5++;
	}
}

void func_1222(int iParam0, bool bParam1, bool bParam2)
{
	func_1039(iParam0, 1120403456 /* Float: 100f */, bParam1, bParam2, 1, 2);
}

void func_1223(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(bParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(bParam1, iVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == 5.928634E+20f && (Var1 != -1.926391E+21f && Var1 != -8.816258E-39f)) && (Global_1913621.f_1579 || !func_901(bParam1, Var1, 1)))
				{
					Global_1913621[(uParam0->f_45 - 1) /*9*/].f_7++;
				}
			}
			else
			{
				Global_1913621[(uParam0->f_45 - 1) /*9*/].f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_1224(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;

	iVar2 = func_400(bParam1, 5.339713E+22f);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_607(-5.45926E-19f, -5.45926E-19f, 0, 0, 6.221388E-29f, 0, -1, iVar2, 0) };
	if (func_608(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			bVar14 = func_609(iVar13, iVar0);
			if (func_105(bVar14, 0))
			{
				if (Global_1913621.f_1579 || !func_901(bVar14, 6.221388E-29f, 1))
				{
					Global_1913621[(uParam0->f_45 - 1) /*9*/].f_7++;
				}
			}
			iVar13++;
		}
		func_613(iVar0);
	}
}

void func_1225(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;

	iVar2 = func_400(bParam1, -1.371654E-28f);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_607(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_608(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_45 >= 175)
			{
			}
			else
			{
				bVar14 = func_609(iVar13, iVar0);
				if (func_105(bVar14, 0) && bVar14 != bParam1)
				{
					func_1047(uParam0, bVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_613(iVar0);
	}
}

void func_1226(int iParam0)
{
	func_613(*iParam0);
	*iParam0 = -1;
}

void func_1227(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	char cVar1[32];
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	char[] cVar11[8];
	int iVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	struct<2> Var17;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	int iVar51;

	bVar0 = Global_1913621[iParam1 /*9*/].f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, bVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913621[iParam1 /*9*/].f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913621[iParam1 /*9*/].f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_30, &cVar1);
	Global_1913621[iParam1 /*9*/].f_1 = iVar5;
	bVar6 = Global_1913621[iParam1 /*9*/].f_5;
	iVar7 = func_225(bVar0, bVar6, bParam3, 0);
	iVar8 = func_350(bVar0, 0, 0, 0);
	iVar9 = func_1030(bVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", bVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", iParam1);
	if (!Global_1913621.f_1579 && func_901(bVar0, bVar6, 1))
	{
		bVar10 = true;
		Global_1913621[iParam1 /*9*/].f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", Global_1913621[iParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", Global_1913621[iParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", bVar6 == -4.029766E+29f);
	StringIntConCat(&cVar11, func_593(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar11);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar13 = false;
	if (func_99(uParam0, 2))
	{
		iVar12 = func_594(((iVar7 > 0 && func_1060(bVar0)) && !bVar10), 1, 0);
	}
	else
	{
		iVar12 = func_594(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (iVar12 == 0 && func_1228(bVar0))
	{
		if (func_1229(bVar0, bVar6, uParam0, bParam3, &bVar14, &bVar15, &iVar16))
		{
			iVar12 = 1;
			bVar13 = true;
			bVar0 = bVar14;
			bVar6 = bVar15;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", bVar15);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", iVar16);
		}
	}
	if (func_539(bVar0, &Var17, 4.975531E-10f, 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!func_99(uParam0, 4))
	{
		if ((bVar6 == -1.428267E+31f || bVar6 == 6.221388E-29f) || bVar6 == -4.029766E+29f)
		{
			iVar12 = 0;
		}
	}
	if (iVar12 == 1)
	{
		if (!func_582(2) && func_400(bVar0, -1.29539E-20f) == -4.839888E+13f)
		{
			Global_1913621[iParam1 /*9*/].f_2 = 0;
			iVar12 = 0;
		}
		else
		{
			uParam0->f_47++;
			if (func_236(bVar0, uParam0->f_42))
			{
				uParam0->f_48++;
			}
			Global_1913621[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1913621[iParam1 /*9*/].f_2 = 0;
	}
	if (bVar13)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", iVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", 0);
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var20.f_1[iVar43], &Var44))
			{
				iVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", iVar51);
						break;
					case 1857353317:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", iVar51);
						break;
					case -826379728:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", iVar51);
						break;
					case -416929031:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", iVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", iVar51);
						break;
					case 1681823811:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", iVar51);
						break;
					case -1191740624:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", iVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", iVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", iVar51);
						break;
					case 1365603835:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_30, -1, -2.238898E-35f, iVar5);
	}
}

bool func_1228(bool bParam0)
{
	return true;
}

bool func_1229(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<37> Var18;
	int iVar65;

	if (!func_105(bParam0, 0))
	{
		return false;
	}
	if (!Global_1913621.f_1579 && func_901(bParam0, bParam1, 1))
	{
		return false;
	}
	if (func_99(uParam2, 2) && !func_1060(bParam0))
	{
		return false;
	}
	if (bParam1 == -1.428267E+31f || bParam1 == 6.221388E-29f)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_400(bParam0, 5.339713E+22f);
		if (iVar12 == 0)
		{
			return false;
		}
		Var2 = { func_607(-5.45926E-19f, -5.45926E-19f, 0, 0, 6.221388E-29f, 0, -1, iVar12, 0) };
		if (func_608(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				bVar14 = func_609(iVar13, iVar0);
				if (bParam0 == bVar14)
				{
				}
				else if (!Global_1913621.f_1579 && func_901(bVar14, 6.221388E-29f, 1))
				{
				}
				else if (func_874(bVar14, 6.221388E-29f, 0, bParam3, 0) && !func_592(bVar14, 1, 0))
				{
					func_613(iVar0);
					*bParam4 = bVar14;
					*bParam5 = 6.221388E-29f;
					*iParam6 = iVar13;
					if (func_312(*bParam4, 1.337157E+38f))
					{
						*iParam6 = 1;
					}
					else if (func_312(*bParam4, -8.704819E-29f))
					{
						*iParam6 = 2;
					}
					else if (func_312(*bParam4, 2.519492E+32f))
					{
						*iParam6 = 3;
					}
					return true;
				}
				iVar13++;
			}
			func_613(iVar0);
		}
		if (bParam1 == 6.221388E-29f)
		{
			Var2 = { func_607(-5.45926E-19f, -5.45926E-19f, 0, 0, -1.428267E+31f, 0, -1, iVar12, 0) };
			if (func_608(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					bVar16 = func_609(iVar15, iVar0);
					if (bParam0 == bVar16)
					{
					}
					else if (!Global_1913621.f_1579 && func_901(bVar16, -1.428267E+31f, 1))
					{
					}
					else if (func_874(bVar16, -1.428267E+31f, 0, bParam3, 0) && !func_592(bVar16, 1, 0))
					{
						func_613(iVar0);
						*bParam4 = bVar16;
						*bParam5 = -1.428267E+31f;
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				func_613(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(bParam0, iVar65, &Var18))
			{
				if (Var18.f_2 == 5.928634E+20f)
				{
					if ((Var18 != -1.926391E+21f && Var18 != -8.816258E-39f) && (Global_1913621.f_1579 || !func_901(bParam0, Var18, 1)))
					{
						if (func_874(bParam0, Var18, 0, bParam3, 0) && !func_592(bParam0, 1, 0))
						{
							*bParam4 = bParam0;
							*bParam5 = Var18;
							*iParam6 = iVar65;
							return true;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return false;
}

int func_1230()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	return func_1046(iVar0);
}

int func_1231(bool bParam0)
{
	switch (bParam0)
	{
		case -1171462349:
			return 4;
		case 1689071181:
			return 3;
		case -1612693182:
			return 2;
		case 1856073229:
			return 1;
		case 1046181202:
			return 0;
		default:
			break;
	}
	if (func_312(bParam0, -4.733674E-34f))
	{
		return 5;
	}
	return 0;
}

char* func_1232(bool bParam0)
{
	switch (func_1231(bParam0))
	{
		case 5:
			return "STEW_TIP_DAILY";
		case 4:
			return "STEW_TIP_BEST";
		case 3:
			return "STEW_TIP_HIGH";
		case 2:
			return "STEW_TIP_MED";
		case 1:
			return "STEW_TIP_LOW";
		default:
			break;
	}
	return "STEW_TIP_LOW";
}

int func_1233(int iParam0)
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

int func_1234(int iParam0, char* sParam1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<17> Var6;
	struct<17> Var23;

	iVar0 = -1;
	Var1 = { func_226(3.996812E+36f, 1, 0) };
	Var6 = { func_1307(3.996812E+36f, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = fParam2;
	iVar0 = func_385(7.184882E+22f, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var23.f_7 = -5.149929E+33f;
		Var23.f_16 = -1;
		StringCopy(&(Var23.f_12), sParam1, 32);
		func_234(iVar0, Var23);
	}
	return iVar0;
}

void func_1235(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_604() < iParam0)
	{
		iParam0 = func_604();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_556(6.480143E+20f) };
	STATS::_STAT_ID_DECREMENT_INT(&Var0, iParam0);
}

void func_1236(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_553(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 1, 4.465091E-08f, 0, 0, 0, 1);
}

int func_1237(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<17> Var13;

	iVar0 = -1;
	iVar1 = func_611(bParam0);
	iVar2 = func_610(bParam0);
	if (iVar2 != 0)
	{
		if (!func_103(0) || func_104())
		{
			if (bParam2)
			{
				func_107(func_106(1.361312E-33f, -2.56015E-24f), 1);
				return func_1308(iVar2, iVar1, bParam0, bParam1);
			}
			Var3 = { func_226(bParam0, 1, 0) };
			Var8 = { func_368(bParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_1309(bParam0, &Var8, 1, -5.149929E+33f, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -5.149929E+33f;
				Var13.f_16 = -1;
				Var13 = 1;
				Var13.f_3 = 1;
				func_234(iVar12, Var13);
			}
			return 0;
		}
		if (func_216(bParam0, 1, 1, -5.149929E+33f))
		{
			iVar0 = func_1308(iVar2, iVar1, bParam0, bParam1);
		}
	}
	return iVar0;
}

int func_1238(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::GET_IS_ANIMAL(iParam0) && !ENTITY::_GET_IS_BIRD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
	iVar1 = FLOCK::_GET_ANIMAL_RARITY(iParam0);
	if (iVar1 == 2)
	{
		iVar2 = 4;
	}
	else if (iVar1 == 1)
	{
		iVar2 = 3;
	}
	else
	{
		iVar3 = PED::_GET_PED_QUALITY(iParam0);
		switch (iVar3)
		{
			case 0:
				iVar2 = 0;
				break;
			case 1:
				iVar2 = 1;
				break;
			case -1:
			case 2:
				iVar2 = 2;
				break;
		}
	}
	if (Global_17340.f_2 != 3)
	{
		iVar1 = Global_17340.f_2;
	}
	iVar4 = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(uParam1, iParam0, iVar0, iVar2);
	return iVar4;
}

int func_1239(bool bParam0)
{
	int iVar0;

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_228(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_1240(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_1192(&uParam0, iParam4, iParam5, bParam6, iParam7);
}

bool func_1241(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
	}
	if (func_312(bParam0, 4.331964E-33f))
	{
		return true;
	}
	return false;
}

bool func_1242(int iParam0, bool bParam1)
{
	struct<4> Var0;

	if (!func_1310(3.210799E-08f, iParam0))
	{
		return false;
	}
	Var0 = { func_1089() };
	*bParam1 = func_796(Var0, iParam0, 0, -1);
	if (!func_105(*bParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1243(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
	}
	return ((bParam0 == 4.758761E+10f || bParam0 == 1.070027E-18f) || bParam0 == -0.02319489f);
}

bool func_1244(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
	}
	return (bParam0 == 4.819468E+34f || bParam0 == 2.53787E+07f);
}

bool func_1245(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
	}
	return bParam0 == -5.146762E-24f;
}

bool func_1246(bool bParam0)
{
	if ((((bParam0 == 1.718565E-29f || bParam0 == -4.05655E+37f) || bParam0 == -1593.584f) || bParam0 == 3.657296E-18f) || bParam0 == 26.6469f)
	{
		return true;
	}
	return false;
}

bool func_1247(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<4> Var20;
	int iVar34;

	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_559(0, iParam0, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	func_560(&Var2, func_1089());
	if (func_561(&Var2, &iVar0, &iVar1, 0))
	{
		Var20.f_9 = -5.45926E-19f;
		iVar34 = 0;
		while (iVar34 < iVar1)
		{
			if (func_562(&Var20, iVar34, iVar0, iVar1))
			{
				if (func_105(Var20.f_4, 0) && !Var20.f_10)
				{
					if (bParam2 && func_1246(Var20.f_4))
					{
					}
					else
					{
						*uParam1 = { Var20 };
						func_563(iVar0);
						return true;
					}
				}
			}
			iVar34++;
		}
		func_563(iVar0);
	}
	return false;
}

bool func_1248(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0 != 0)
	{
		iVar3 = func_228(bParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_1311(bParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

void func_1249(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1312(&(uParam0->f_4));
}

int func_1250()
{
	return Global_1915643.f_20241;
}

bool func_1251(struct<18> Param0)
{
	if (!func_601(Param0.f_17))
	{
		return false;
	}
	return true;
}

bool func_1252(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_1313(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_1314(iParam0))
		{
			return false;
		}
		if (!func_1313(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_1253(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_1314(iParam0);
	}
	return true;
}

bool func_1254(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_378(bParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_1102(bParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

void func_1255(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(bParam0, &Var7) || Var7 == 0)
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
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_228((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1256(int iParam0, int iParam1, int iParam2)
{
	if (iParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_105(iParam1->f_8, 0) && !func_378(func_377(iParam1->f_8), 2))
	{
		return false;
	}
	if (func_168(iParam2, 128))
	{
		if (!func_378(func_377(iParam1->f_8), 2))
		{
			if (func_228(iParam1->f_8) == 0)
			{
				return false;
			}
		}
	}
	if (func_168(iParam2, 16))
	{
		if (!func_624(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_1257(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam3, *iParam3);
}

int func_1258(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_594(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1259(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1260(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1261(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1262(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1263(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1264(int iParam0, int iParam1)
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

void func_1265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1315(iParam0, iParam6);
	func_1316(iParam0, iParam5);
	func_1317(iParam0, iParam4);
	func_1318(iParam0, iParam3);
	func_1319(iParam0, iParam2);
	func_1320(iParam0, iParam1);
}

bool func_1266()
{
	return Global_1913431.f_127 == 0;
}

bool func_1267(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1321(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

int func_1268(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_105(bParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 9.275179E-19f;
	bVar1 = iParam4 == 1.994827E+33f;
	bVar2 = iParam4 == -1.202057E-11f;
	if (!func_1322(iParam0, bParam1, 1))
	{
		return 0;
	}
	Var3 = { func_349(bParam1) };
	if (STATS::STAT_ID_IS_VALID(&Var3))
	{
		if ((func_1202(iParam0, bParam1) - iParam2) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var3, iParam2);
		}
		else if ((func_1202(iParam0, bParam1) - iParam2) < 0)
		{
			func_1268(iParam0, bParam1, func_350(bParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_1323(iParam0, bParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && bParam1 != 6.236711E+08f)
	{
		func_347(bParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_1269(bool bParam0)
{
	if (!func_105(bParam0, 0))
	{
		return false;
	}
	return (func_312(bParam0, 2.062334E+22f) || INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(bParam0));
}

int func_1270(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.194836E+10f;
		case 1:
			return 4.055176E+26f;
		case 2:
			return -3.457366E-20f;
		case 3:
			return -8.795801E-36f;
		case 4:
			return -3.308018E-18f;
		case 5:
			return 2.795243E-08f;
		case 6:
			return 5.734056E+37f;
		case 7:
			return 3853674f;
		case 8:
			return -1.461989E-28f;
		case 9:
			return -4.858591E+07f;
		case 10:
			return 2.221196E+19f;
		case 11:
			return -4.295577E+13f;
		case 12:
			return 1.911961E-22f;
		case 13:
			return 3.139678E+30f;
		case 14:
			return -3.728146E-26f;
		case 15:
			return 1231.501f;
		case 16:
			return -8.745965E-18f;
		case 17:
			return -2.258776E+10f;
		case 18:
			return -1.94087E-27f;
		case 19:
			return -1.195941E+15f;
		case 20:
			return -49.82191f;
		case 21:
			return 2.302372E-30f;
		case 22:
			return 7.905129E+20f;
		case 23:
			return 5.728365E-21f;
		case 24:
			return 1.460571E+23f;
		case 25:
			return 8.215854E-14f;
		case 26:
			return -5.073168E-21f;
		case 27:
			return -2.286124E-11f;
		case 28:
			return -1.972748E+35f;
		case 29:
			return 1.734036E+32f;
		case 30:
			return 1.771673E+35f;
		case 31:
			return -4.437462E+24f;
		case 32:
			return 4.342694E+18f;
		case 33:
			return 2.829782E+32f;
		case 34:
			return -6.2863E+36f;
		case 35:
			return -5.785817E+27f;
		case 36:
			return -0.1998578f;
		case 37:
			return 4.817691E-19f;
		case 38:
			return -3574.054f;
		case 39:
			return -2.672498E-17f;
		case 40:
			return -5.907457E+21f;
		case 41:
			return 1.708896E+26f;
		case 42:
			return 1.699111E+26f;
		case 43:
			return -3.646661E-09f;
		case 44:
			return 7.410287E+23f;
		case 45:
			return 2.503326E+14f;
		case 46:
			return 812.7377f;
		case 47:
			return 7.134456E-36f;
		case 48:
			return 1.679955E-15f;
		case 49:
			return 1.428375E-34f;
		case 50:
			return -6.520972E+29f;
		case 51:
			return -4.967419E-26f;
		case 52:
			return -2.712444E-18f;
		case 53:
			return -9.707605E-07f;
		case 54:
			return -126944f;
		case 55:
			return -6.237682E+27f;
		case 56:
			return -1.328089E-05f;
		case 57:
			return 8.244146E-06f;
		case 58:
			return 4.499003E-09f;
		case 59:
			return 1.188311E-24f;
		case 60:
			return 4.739307E-31f;
		case 61:
			return -5.902858f;
		case 62:
			return 6.596709E+23f;
		case 63:
			return 0.01076391f;
		case 64:
			return 3.785639E+07f;
		case 65:
			return -3.701612E-07f;
		case 66:
			return -19631.1f;
		case 67:
			return 5.404696E+36f;
		case 68:
			return 6.272749E-09f;
		case 69:
			return 1.6529E+19f;
		case 70:
			return -4.269119E+14f;
		case 71:
			return -2076914f;
		case 72:
			return -4.169777E+17f;
		case 73:
			return -9.517757E-32f;
		case 74:
			return -1.997975E-17f;
		case 75:
			return -1921687f;
		case 76:
			return 0;
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

bool func_1271(bool bParam0)
{
	if (!func_1126(bParam0))
	{
		return false;
	}
	return bParam0;
}

int func_1272(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BEAVER_FUR"):
			return 3;
		case -1946740647:
			return 73;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 8;
		case joaat("PROVISION_DEER_HIDE"):
			return 18;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
		case -1787430524:
			return 51;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 26;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 2;
		case -1572330336:
			return 52;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 4;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 16;
		case -1548204069:
			return 74;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 39;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 27;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 43;
		case -1262044528:
			return 65;
		case -1249752300:
			return 53;
		case -1218522879:
			return 56;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 36;
		case -1061362634:
			return 61;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 20;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 38;
		case -963027403:
			return 66;
		case -940052481:
			return 54;
		case -907373381:
			return 75;
		case -906131571:
			return 71;
		case joaat("PROVISION_BUCK_FUR"):
			return 9;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 0;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 17;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 11;
		case -675142890:
			return 70;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 19;
		case -591844128:
			return 72;
		case joaat("PROVISION_RAM_HIDE"):
			return 40;
		case joaat("PROVISION_PANTHER_FUR"):
			return 31;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 35;
		case -308200059:
			return 55;
		case -251416414:
			return 50;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 28;
		case joaat("PROVISION_PIG_SKIN"):
			return 34;
		case 0:
			return 76;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 47;
		case 121494806:
			return 49;
		case 219794592:
			return 60;
		case joaat("PROVISION_FOX_FUR"):
			return 21;
		case 397926876:
			return 59;
		case joaat("PROVISION_COUGAR_FUR"):
			return 12;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 23;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 37;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 48;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 25;
		case 832214437:
			return 58;
		case 836208559:
			return 68;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 5;
		case 923422806:
			return 57;
		case 1009802015:
			return 63;
		case joaat("PROVISION_WOLF_FUR"):
			return 46;
		case joaat("PROVISION_COYOTE_FUR"):
			return 15;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 7;
		case 1276143905:
			return 64;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 45;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 32;
		case 1600479946:
			return 69;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 10;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 22;
		case joaat("PROVISION_GOAT_HAIR"):
			return 24;
		case 1728819413:
			return 62;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 44;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 42;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 41;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 29;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 33;
		case joaat("PROVISION_LOANSHARK_SKINS"):
			return 30;
		case 2088901891:
			return 67;
		case joaat("PROVISION_BOAR_SKIN"):
			return 6;
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

bool func_1273(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return false;
	}
	if (func_1274(iVar1, bParam1) == 0)
	{
		return false;
	}
	iVar2 = iParam0;
	if (iVar2 > func_1274(iVar1, bParam1))
	{
		iVar2 = func_1274(iVar1, bParam1);
	}
	if (!bParam1)
	{
		Global_1289628[iVar1 /*19*/] = (Global_1289628[iVar1 /*19*/] - iVar2);
	}
	else
	{
		Global_1289628[iVar1 /*19*/].f_1 = (Global_1289628[iVar1 /*19*/].f_1 - iVar2);
	}
	if (func_1274(iVar1, bParam1) < 0)
	{
		if (!bParam1)
		{
			Global_1289628[iVar1 /*19*/] = 0;
		}
		else
		{
			Global_1289628[iVar1 /*19*/].f_1 = 0;
		}
	}
	else if (func_1274(iVar1, bParam1) > func_1275(bParam1))
	{
		if (!bParam1)
		{
			Global_1289628[iVar1 /*19*/] = func_1275(bParam1);
		}
		else
		{
			Global_1289628[iVar1 /*19*/].f_1 = func_1275(bParam1);
		}
	}
	return true;
}

int func_1274(int iParam0, bool bParam1)
{
	return func_594(bParam1, Global_1289628[iParam0 /*19*/].f_1, Global_1289628[iParam0 /*19*/]);
}

int func_1275(bool bParam0)
{
	return func_594(bParam0, Global_1901671.f_698.f_30, Global_1901671.f_698.f_29);
}

int func_1276(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return 4.507147E-06f;
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT"):
			return -5.287657E-13f;
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR"):
			return -7.408218E-21f;
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return -2.656932E+08f;
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT"):
			return -1.12411E+15f;
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR"):
			return 9.255461E+24f;
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY"):
			return -1.664115E-06f;
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT"):
			return 1.354865E+33f;
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR"):
			return -4.454633E+14f;
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY"):
			return -5.399312E-15f;
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT"):
			return 9.571316E-06f;
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR"):
			return 3.856313E+12f;
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -3.665561E+17f;
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return 1.753998E-11f;
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR"):
			return 9.09915E+36f;
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY"):
			return -6.57691E-09f;
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT"):
			return 0.002537775f;
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR"):
			return -1.162778E+30f;
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -1.40288E-34f;
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT"):
			return -8.076066E-07f;
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR"):
			return -4804.242f;
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY"):
			return -4.504377E+11f;
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT"):
			return -1.111597E-38f;
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR"):
			return 2.926634E+19f;
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY"):
			return 4.657968E-36f;
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT"):
			return -5.259399E+07f;
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR"):
			return 0.002241108f;
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY"):
			return 1.144588E-07f;
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT"):
			return 1.43703E+20f;
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR"):
			return -1.10115E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY"):
			return -2.710655E-24f;
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT"):
			return -1.13245E+33f;
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR"):
			return 2.639943E-33f;
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY"):
			return 2.265425E-27f;
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT"):
			return 6.327091E+08f;
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR"):
			return -5.974267E-06f;
		case joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"):
			return 5.437065E-22f;
		case joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"):
			return -7.724074E-28f;
		case joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"):
			return 7.484564E-37f;
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY"):
			return 0.03063576f;
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT"):
			return 0.005269445f;
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR"):
			return 168349.6f;
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY"):
			return 1.34869E-24f;
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT"):
			return -6.278838E-13f;
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR"):
			return -2.375997E-11f;
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY"):
			return 0.01188324f;
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT"):
			return 1.429467E-15f;
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR"):
			return 1.023408E+34f;
		case joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"):
			return -0.0001932701f;
		case joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"):
			return 1.976518E-07f;
		case joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"):
			return -2.709008E+37f;
		case joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY"):
			return 3.827353E+18f;
		case joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT"):
			return -1.02038E+30f;
		case joaat("PROVISION_SKINNED_CARCASS_GILA_POOR"):
			return -6.951011E+19f;
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY"):
			return -1.488428E+37f;
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT"):
			return -3.318031E-10f;
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR"):
			return -5.10536E+20f;
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY"):
			return 7.113445E+20f;
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT"):
			return -7.81005E-18f;
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR"):
			return 7.309318E+17f;
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY"):
			return -1.122952E-14f;
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT"):
			return -1.414123E-13f;
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR"):
			return NaNf;
		case joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY"):
			return 3.844165E-13f;
		case joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT"):
			return 2.091685E+37f;
		case joaat("PROVISION_SKINNED_CARCASS_HERON_POOR"):
			return -2129067f;
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY"):
			return 33127.39f;
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT"):
			return 4.938854E+19f;
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR"):
			return -76.33204f;
		case joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY"):
			return 0.001733282f;
		case joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT"):
			return -6.200817f;
		case joaat("PROVISION_SKINNED_CARCASS_LOON_POOR"):
			return 4.24952E-19f;
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return -7.230145E-28f;
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT"):
			return 4.617307E+12f;
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR"):
			return -4.308681E-09f;
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return -1.805402E-25f;
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT"):
			return -193275.9f;
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR"):
			return 2.521826E+25f;
		case joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY"):
			return -1.992939E+29f;
		case joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT"):
			return -7.858611E-22f;
		case joaat("PROVISION_SKINNED_CARCASS_OWL_POOR"):
			return 1.271382E+08f;
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY"):
			return 2.827991E+30f;
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT"):
			return 2.650656E+23f;
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR"):
			return 1.730283E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT"):
			return -1.542202E-10f;
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR"):
			return 4.307955E+12f;
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY"):
			return -1.345681E+07f;
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT"):
			return 2.6353E+29f;
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR"):
			return 3.63199E-12f;
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -6579019f;
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT"):
			return -4.214708E-35f;
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR"):
			return -7.834871E-06f;
		case joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY"):
			return 4.831911E+09f;
		case joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT"):
			return 9.60254E-27f;
		case joaat("PROVISION_SKINNED_CARCASS_PIG_POOR"):
			return 2.039138E+25f;
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return 8.735567E-12f;
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT"):
			return 5.559815E-08f;
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR"):
			return 3.016167E+33f;
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return -3.764532E-31f;
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"):
			return 1.158207E+28f;
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"):
			return -4.540201E-27f;
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY"):
			return 58741.79f;
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT"):
			return -7.466561E-29f;
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR"):
			return -5.408961E-16f;
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY"):
			return -479.9893f;
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT"):
			return 2.444555E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR"):
			return 3.89484E+21f;
		case joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY"):
			return -5.440139E-27f;
		case joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT"):
			return -0.0001666287f;
		case joaat("PROVISION_SKINNED_CARCASS_RAM_POOR"):
			return 6.112518E+32f;
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY"):
			return -1.78671E+09f;
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT"):
			return -248.2232f;
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR"):
			return -9.601242E+17f;
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return -8.448254E+07f;
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT"):
			return -1.824057E+19f;
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR"):
			return -2.392047E-27f;
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY"):
			return 0.0009291961f;
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT"):
			return -360.4587f;
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR"):
			return -2.990673E+32f;
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return 5.512931E-24f;
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT"):
			return 7.93403E+30f;
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR"):
			return -1.199407f;
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY"):
			return 2.107414E+24f;
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT"):
			return -3651680f;
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR"):
			return 1.904495E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY"):
			return 1.304773E+38f;
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT"):
			return 1.698759E+15f;
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR"):
			return -4.469786E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY"):
			return -3.810575E-34f;
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT"):
			return 2.919128E-35f;
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR"):
			return -4.902144E-31f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return -1.229308E+24f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -2.030334f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR"):
			return 5.22646E+35f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 4.386882E-18f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT"):
			return -9.386758E+17f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR"):
			return -1.008415E-16f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return -5.184155E+33f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT"):
			return -2.163643E-35f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR"):
			return 3.347607E+13f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return 4.220855E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return 4.539724E-12f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR"):
			return 2.388784E-26f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY"):
			return -1022280f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT"):
			return 1.902462E+09f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR"):
			return -5.70721E+25f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 2.646211E-35f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT"):
			return 2.812217E-33f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR"):
			return -177744.7f;
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"):
			return -1.120819E-19f;
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"):
			return -8.922604E-28f;
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"):
			return 1.025691E-16f;
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return -9.952872E-14f;
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT"):
			return -318808.2f;
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR"):
			return -1.53492E+19f;
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY"):
			return -5.850964E+28f;
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT"):
			return 3.09111E-21f;
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR"):
			return -4.346561E+21f;
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY"):
			return 6.200319E-38f;
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT"):
			return 5.081949E+20f;
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR"):
			return -3.607455E+27f;
		case -2115566177:
			return -1.451767E+09f;
		case -1886936864:
			return 6.957106E+10f;
		case 777641606:
			return -5.759186E-37f;
		case 1815502722:
			return -3.331152E-35f;
		case 1518910503:
			return 7.92923E+24f;
		case 1020297399:
			return 3.89216E+16f;
		case -438328437:
			return 2.366936E+15f;
		case -132069363:
			return -1.198895E+07f;
		case 1718756614:
			return -6.554273E-08f;
		case 616254818:
			return -2.049118E+36f;
		case 1586020612:
			return -2.480808E-11f;
		case 1892902297:
			return 6.776605E+13f;
		case 1920759986:
			return 1.456349E+17f;
		case 1683741809:
			return 8.278301E+27f;
		case 403588059:
			return 5.031345E+33f;
		case -352805801:
			return -4.110167E+30f;
		case 1491466288:
			return 2.55587E-19f;
		case -1066678466:
			return 3.540439E+29f;
		case -375348364:
			return -4.120904E-35f;
		case -101301217:
			return 1.172267E+34f;
		case 213936563:
			return -1.107983E-20f;
		case 897866285:
			return 9.627059E+22f;
		case 1135507073:
			return -3.041173E-27f;
		case -1671125008:
			return -2.373688E-13f;
		default:
			break;
	}
	return 0;
}

bool func_1277(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_1278(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

int func_1279()
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

struct<8> func_1280(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	struct<8> Var0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&Var0, &vParam0))
	{
	}
	return Var0;
}

int func_1281(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_950(Param0);
	}
	return -1;
}

bool func_1282()
{
	return !Global_1572887.f_10;
}

int func_1283(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case 2050534155:
			return 48;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1284(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1324(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_1325(iVar0, iParam1))
			{
				vVar4 = { func_1326(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1953279.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_1327(iVar0, 4))
				{
					func_1328(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1329(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = Global_1953279.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_1285(bool bParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_266(bParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_266(bParam0, 1) /*12*/].f_11 || iParam1);
}

bool func_1286(bool bParam0)
{
	float fVar0;
	var uVar1;

	Global_1953279.f_1039.f_2 = 0;
	fVar0 = 655621.5f;
	func_1162(&(Global_1953279.f_1039), fVar0, -4.642217E+25f, 2.24243E+12f, 1, bParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953279.f_1039));
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar1, &(Global_1953279.f_1039), 2.24243E+12f))
	{
		return false;
	}
	return true;
}

int func_1287(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, 1.282908E-11f, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_1288(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_312(uParam0->f_1[34 /*3*/], -7.339854E+32f))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_1327(iVar0, 16);
		if (bVar1)
		{
			func_1328(iVar0, 16, 9);
		}
		if (Global_1953279.f_83[iVar0 /*12*/].f_3[0] == -1.473351E-26f || uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_791(iVar0, iParam3);
			}
			if (!bParam2 && func_1287(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
			}
			else if (func_1325(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_793(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_791(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_793(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_1289(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	int iVar16;

	Var1.f_9 = -5.45926E-19f;
	iVar16 = 0;
	if (func_785() == 4.387347E-38f)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_562(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (func_1330(Var1.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
		}
		else if (func_1287(Var1.f_4) != 0)
		{
		}
		else if (func_312(Var1.f_4, -7.339854E+32f))
		{
		}
		else if (func_312(Var1.f_4, 4.422284E-20f))
		{
		}
		else
		{
			iVar15 = func_228(Var1.f_4);
			if (func_1332(iParam2, func_1331(iVar15)))
			{
			}
			else
			{
				return Var1.f_4;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1290(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_312(uParam0->f_1[iParam1 /*3*/], 1.280781E-26f))
	{
		func_994(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953279.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_791(iParam1, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_791(iVar0, iParam2);
	}
}

bool func_1291(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

bool func_1292(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_1293(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

struct<4> func_1294(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_1333(iParam0) };
	return func_1334(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_1295(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return true;
		default:
			break;
	}
	return false;
}

float func_1296(int iParam0)
{
	return (PLAYER::_GET_PLAYER_MAX_DEAD_EYE(iParam0, 0) - IntToFloat(func_1335(2)));
}

bool func_1297(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1263(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1262(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1261(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1258(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1259(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1260(iParam0);
	if (iVar5 < 1 || iVar5 > func_1264(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_1298(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_1299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_1300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1301(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_676(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1302(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_676(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		default:
			break;
	}
}

bool func_1303(int iParam0)
{
	if (func_1219(iParam0))
	{
		return true;
	}
	else if (func_1336(iParam0))
	{
		return true;
	}
	return false;
}

void func_1304(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_676(1);
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

int func_1305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_1306(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_1337(iParam0))
	{
		return 0;
	}
	iVar0 = func_1305(iParam0, 1);
	if (!func_1338(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_1339(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1156096.f_35859[iVar3 /*6*/][iVar4];
		switch (func_1340(iParam0, iVar1))
		{
			case 0:
				func_1341(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1156096.f_35859.f_11700)
				{
					if (Global_1156096.f_35859.f_9503[iVar5 /*3*/] != iVar1 || Global_1156096.f_35859.f_9503[iVar5 /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_1341(iVar1, iParam0, iVar4);
						func_1342(&(Global_1156096.f_35859.f_9503[iVar5 /*3*/]));
						Global_1156096.f_35859.f_11700 = (Global_1156096.f_35859.f_11700 - 1);
						Global_1156096.f_35859.f_9503[iVar5 /*3*/] = { Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/] };
						func_1342(&(Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1343(iVar1, 1);
				func_1344(iVar2, -1);
				if (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_1345(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1156096.f_35859.f_9502)
					{
						if (Global_1156096.f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1156096.f_35859.f_9302[iVar6] = -1;
							Global_1156096.f_35859.f_9502 = (Global_1156096.f_35859.f_9502 - 1);
							Global_1156096.f_35859.f_9302[iVar6] = Global_1156096.f_35859.f_9302[Global_1156096.f_35859.f_9502];
							Global_1156096.f_35859.f_9302[Global_1156096.f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1156096.f_35859.f_919[iVar0 /*12*/] = -1;
			func_1346(&(Global_1156096.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

struct<17> func_1307(bool bParam0, struct<4> Param1, float fParam5, int iParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_368(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_379(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_616() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_1308(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_103(0) || func_104())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_1348(iParam1, func_1347(bParam2), &Var1, 1);
		if (func_1349(iVar0, &Var1, 0, 0))
		{
		}
		func_299(501, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_1347(bParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_105(uVar13[iVar29], 0) && !func_312(uVar13[iVar29], 9.077182E+07f)) && !uVar13[iVar29] == bParam2)
		{
			func_437(uVar13[iVar29], 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
			if (bParam3 != 0)
			{
				if (bParam3 == uVar13[iVar29])
				{
					iVar30++;
				}
			}
			else
			{
				iVar30++;
			}
		}
		iVar29++;
	}
	func_352(func_103(0), 0, 0);
	return iVar30;
}

int func_1309(bool bParam0, int iParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
{
	struct<14> Var0;
	struct<17> Var14;
	int iVar31;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return -1;
	}
	if (func_725(bParam0))
	{
		return -1;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_375(*iParam1, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (Var0.f_13)
	{
		return -1;
	}
	if (iParam2 < 0)
	{
		iParam2 = Var0.f_11;
	}
	else if (iParam2 > Var0.f_11)
	{
		iParam2 = Var0.f_11;
	}
	Var14 = { func_1199(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = fParam3;
	iVar31 = -1;
	iVar31 = func_385(7.184882E+22f, &Var14, bParam5);
	if (bParam4 && iVar31 != -1)
	{
		Var32.f_7 = -5.149929E+33f;
		Var32.f_16 = -1;
		Var32 = 1;
		func_234(iVar31, Var32);
	}
	return iVar31;
}

bool func_1310(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = func_228(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1239(bParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

int func_1311(bool bParam0)
{
	int iVar0;

	if (!func_105(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_228(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

void func_1312(var uParam0)
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

bool func_1313(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 2.249603E-13f, iParam1))
	{
		return false;
	}
	return true;
}

bool func_1314(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_891(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_891(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_891(*iParam0, 2, 0, 0);
		return false;
	}
	func_891(*iParam0, 1, 0, 0);
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

void func_1315(int iParam0, int iParam1)
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

void func_1316(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1317(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1259(*iParam0);
	iVar1 = func_1258(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1264(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1318(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1319(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1320(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_1321(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

bool func_1322(int iParam0, bool bParam1, int iParam2)
{
	if (!func_105(bParam1, 0))
	{
		return false;
	}
	return func_1202(iParam0, bParam1) >= iParam2;
}

int func_1323(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_105(bParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_1333(iParam0) };
	Var5 = { func_1334(iParam0, bParam1, Var0, Var0.f_4) };
	return func_1350(iParam0, bParam1, &Var5, iParam2, iParam3, bParam4);
}

bool func_1324(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1325(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1953279.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

Vector3 func_1326(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

bool func_1327(int iParam0, int iParam1)
{
	return (Global_1953279.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_1328(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[iParam0 /*12*/].f_11 = (Global_1953279.f_83[iParam0 /*12*/].f_11 - (Global_1953279.f_83[iParam0 /*12*/].f_11 && iParam1));
}

void func_1329(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[iParam0 /*12*/].f_11 = (Global_1953279.f_83[iParam0 /*12*/].f_11 || iParam1);
}

bool func_1330(bool bParam0)
{
	return (((bParam0 != 9.94413E+23f && bParam0 != -3.916588E+30f) && bParam0 != 2.515798E+09f) && !func_812(bParam0));
}

int func_1331(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_1332(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

struct<5> func_1333(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_1334(iParam0, 2.982335E+09f, func_616(), -5.45926E-19f) };
	Var0.f_4 = 4.978612f;
	return Var0;
}

struct<4> func_1334(int iParam0, bool bParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_105(bParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &Var0);
	return Var0;
}

int func_1335(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1031(2) * 2;
		case 1:
			return func_1035(2) * 2;
		case 2:
			return func_1033(2) * 2;
		default:
			break;
	}
	return -1;
}

bool func_1336(int iParam0)
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

bool func_1337(int iParam0)
{
	int iVar0;

	iVar0 = func_1305(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_1338(int iParam0)
{
	int iVar0;

	iVar0 = func_1339(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1339(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case -2082434331:
			return 152;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case -2038430863:
			return 151;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
		case -1246069683:
			return 124;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case -980934770:
			return 125;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case -821191074:
			return 115;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
		case -193167881:
			return 127;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case 130533095:
			return 126;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case 158579484:
			return 117;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case 549687162:
			return 145;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case 808176588:
			return 116;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case 1130659268:
			return 123;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
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

int func_1340(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1351(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_1343(iParam1, 1);
	switch (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1341(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_1337(iParam1))
	{
		return 0;
	}
	if (!func_1352(iParam0))
	{
		return 0;
	}
	iVar0 = func_1343(iParam0, 1);
	func_1353(iParam0, iParam1, iParam2);
	if (func_1354(Global_1156096.f_35859.f_3116[iVar0 /*31*/]) && func_1355(iParam0, Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_1356(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_1357(vVar1))
		{
			if (func_1358(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1359(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1360(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_1360(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_1342(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1343(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case -2019073637:
			return 198;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
		case -749371485:
			return 164;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case 275909046:
			return 151;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case 558636891:
			return 187;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case 634217179:
			return 150;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case 1256374770:
			return 165;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case 1305406380:
			return 162;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case 1462245043:
			return 154;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
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

void func_1344(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_1345(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_1346(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		uParam0->f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

int func_1347(bool bParam0)
{
	if (func_312(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_312(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_312(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

struct<12> func_1348(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 52.13412f;
					break;
				case 1:
					iVar0 = -1.253578E+34f;
					break;
				case 2:
					iVar0 = 5.78951E+27f;
					break;
				case 3:
					iVar0 = 6.711821E-11f;
					break;
				case 4:
					iVar0 = 2.161009E+17f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1.889634E+14f;
					break;
				case 1:
					iVar0 = -9.551517E+08f;
					break;
				case 2:
					iVar0 = -2.712923E+26f;
					break;
				case 3:
					iVar0 = 1.961521E-29f;
					break;
				case 4:
					iVar0 = -5.749149E+18f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 8.196574E+09f;
					break;
				case 1:
					iVar0 = -5.1598E+29f;
					break;
				case 2:
					iVar0 = -1.746204E+25f;
					break;
				case 3:
					iVar0 = -3.616876E-20f;
					break;
				case 4:
					iVar0 = 3.71707E+16f;
					break;
			}
			break;
	}
	if (bParam3)
	{
		func_684(uParam2, 4.150592E+16f);
	}
	else
	{
		func_684(uParam2, 2.575707E+29f);
	}
	func_684(uParam2, iVar0);
	return *uParam2;
}

int func_1349(int iParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (0 == iParam0)
	{
		return 0;
	}
	return func_685(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

int func_1350(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_725(bParam1))
	{
		return 0;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_1361(iParam0, *iParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, iParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1351(int iParam0)
{
	if (func_1362(iParam0))
	{
		return (func_1363(iParam0) % 32);
	}
	return Global_1295619;
}

bool func_1352(int iParam0)
{
	int iVar0;

	iVar0 = func_1343(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_1353(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_1305(iParam1, 1);
	iVar1 = func_1343(iParam0, 1);
	iVar2 = func_1339(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1156096.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return 1;
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1364(iVar3, 1);
		if (!func_1365(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 - func_1366(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1367(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1368(iVar6))
		{
		}
		else
		{
			iVar8 = func_1369(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1] = (Global_1156096.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1156096.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_CLEAR_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156096.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 0;
				func_1370(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1354(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1355(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1352(iParam0))
	{
		return false;
	}
	if (!func_1371(iParam1))
	{
		return false;
	}
	iVar0 = func_1372(iParam1, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_1356(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1373(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1156096.f_35859.f_9503[iVar0 /*3*/];
}

bool func_1357(vector3 vParam0)
{
	if (!func_1352(vParam0.x))
	{
		return false;
	}
	if (!func_1337(vParam0.y))
	{
		return false;
	}
	if (!func_1374(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1358(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_1305(iParam1, 1);
	iVar1 = func_1343(iParam0, 1);
	iVar2 = func_1339(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1156096.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295619.f_16;
	if (Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1364(iVar3, 1);
		if (!func_1365(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 + func_1366(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1375(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1368(iVar6))
		{
		}
		else if (!func_1376(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_1369(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_SET_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1156096.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 1;
				func_1377(iVar6);
			}
		}
		iVar7++;
	}
	func_1378(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_1359(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_1371(iParam0))
	{
		return;
	}
	iVar0 = func_1372(iParam0, 1);
	if (!func_1352(iParam1))
	{
		return;
	}
	if (!func_1337(iParam2))
	{
		return;
	}
	if (!func_1374(iParam3))
	{
		return;
	}
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_1360(int iParam0)
{
	int iVar0;

	if (!func_1371(iParam0))
	{
		return;
	}
	iVar0 = func_1372(iParam0, 1);
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

bool func_1361(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, iParam5, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_1362(int iParam0)
{
	int iVar0;

	iVar0 = func_1305(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_1363(int iParam0)
{
	int iVar0;

	iVar0 = func_1305(iParam0, 1);
	if (func_1362(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1379(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1380(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1381(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_1382(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1383(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1384(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
		case -377364039:
			return 60;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
		case joaat("MSKILL__PERCEPTION"):
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case joaat("MSKILL__DISTILLER"):
			return 90;
		case 194431787:
			return 61;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
		case joaat("MSKILL__DIVINATION"):
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
		case joaat("MSKILL__INTUITION"):
			return 88;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 95;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case 920214733:
			return 91;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case 1356998909:
			return 80;
		case joaat("MSKILL__FOCUS"):
			return 82;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case 1727267699:
			return 69;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 84;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
			return 87;
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

bool func_1365(int iParam0)
{
	int iVar0;

	iVar0 = func_1364(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_1366(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_1385(1.959415E-10f, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_1367(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1365(iParam0))
	{
		return;
	}
	iVar0 = func_1364(iParam0, 1);
	if (!func_1386(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_1387(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1388(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1156096.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1156096.f_47561[iVar1 /*25*/][iVar2] != Global_1156096.f_2169[iVar0 /*205*/])
		{
		}
		else
		{
			Global_1156096.f_47561[iVar1 /*25*/][iVar2] = -1;
			Global_1156096.f_47561[iVar1 /*25*/].f_23 = (Global_1156096.f_47561[iVar1 /*25*/].f_23 - 1);
			Global_1156096.f_47561[iVar1 /*25*/][iVar2] = Global_1156096.f_47561[iVar1 /*25*/][Global_1156096.f_47561[iVar1 /*25*/].f_23];
			Global_1156096.f_47561[iVar1 /*25*/][Global_1156096.f_47561[iVar1 /*25*/].f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_1368(int iParam0)
{
	int iVar0;

	iVar0 = func_1369(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_1369(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case -1651690657:
			return 65;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case -1583192324:
			return 66;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case -1486292178:
			return 67;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 68;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 60;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 56;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 63;
		case 1341326366:
			return 58;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case 1398483650:
			return 50;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
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

void func_1370(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1389();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1390();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1391(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1391(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1391(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_299(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1391(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_SET_NETWORK_RESPOT_TIMER(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_1393(func_1392(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_RESET_ENTITY_AURA();
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(iVar1, true);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, false);
			break;
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(iVar1, 1f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(iVar1, -1f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_1394();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1386(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1386(16);
			break;
	}
}

bool func_1371(int iParam0)
{
	int iVar0;

	iVar0 = func_1372(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1372(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
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

int func_1373(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_1395(iParam0);
	Var1.f_3 = 1f;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1f;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1156096.f_35859.f_11700)
	{
		iVar64 = func_1343(Global_1156096.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1156096.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156096.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_1396(Global_1156096.f_35859.f_9503[iVar65 /*3*/], Global_1156096.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_1397(Global_1156096.f_35859.f_9503[iVar65 /*3*/]) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_1374(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_1375(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1365(iParam0))
	{
		return;
	}
	iVar0 = func_1364(iParam0, 1);
	if (!func_1386(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_1387(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1388(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1]++;
	iVar2 = 0;
	while (iVar2 < Global_1156096.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1156096.f_47561[iVar1 /*25*/][iVar2] == Global_1156096.f_2169[iVar0 /*205*/])
		{
			return;
		}
		iVar2++;
	}
	Global_1156096.f_47561[iVar1 /*25*/][Global_1156096.f_47561[iVar1 /*25*/].f_23] = Global_1156096.f_2169[iVar0 /*205*/];
	Global_1156096.f_47561[iVar1 /*25*/].f_23++;
}

bool func_1376(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_1398(1.959415E-10f, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_1377(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1389();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1390();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1391(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1391(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1391(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_299(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1391(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			iVar2 = func_1392(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1399(iParam0, 0));
			func_1400(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1399(iParam0, 1));
			func_1400(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1399(iParam0, 2));
			func_1400(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1399(iParam0, 3));
			func_1400(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_1392(iParam0);
			func_1400(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_1392(iParam0);
			func_1400(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 0.01531954f);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			Jump @668; //curOff = 520
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 1.916251E+31f);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			Jump @668; //curOff = 561
			GRAPHICS::_SET_ENTITY_AURA(0f, 2f, 2f);
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 6.398504E+32f);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			Jump @668; //curOff = 597
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(iVar1, false);
			Jump @668; //curOff = 607
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, true);
			Jump @668; //curOff = 617
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(iVar1, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(iVar1, 2f);
			Jump @668; //curOff = 638
			func_1401();
			Jump @668; //curOff = 645
			func_1386(17);
			Jump @668; //curOff = 655
			func_1386(16);
		}

void func_1378(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1402(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_1403(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FROM_ENTITY(sVar0, Global_1295619.f_3, sVar1, false, 0, 0);
}

bool func_1379(int iParam0)
{
	int iVar0;

	iVar0 = func_1305(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1380(int iParam0)
{
	int iVar0;

	iVar0 = func_1305(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1381(int iParam0)
{
	int iVar0;

	iVar0 = func_1305(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1382(int iParam0)
{
	int iVar0;

	iVar0 = func_1305(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_1383(int iParam0)
{
	int iVar0;

	iVar0 = func_1305(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1384(int iParam0)
{
	int iVar0;

	iVar0 = func_1305(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_1385(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_1404(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_1386(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (MISC::_IS_BIT_FLAG_SET(&(Global_1156096.f_2166), iParam0))
	{
		return true;
	}
	if (Global_1156096.f_2165 >= 21)
	{
		return false;
	}
	Global_1156096.f_2143[Global_1156096.f_2165] = iParam0;
	Global_1156096.f_2165++;
	return true;
}

bool func_1387(int iParam0)
{
	int iVar0;

	iVar0 = func_1388(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1388(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
			return 2;
		case 1416591065:
			return 1;
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

void func_1389()
{
	bool bVar0;
	bool bVar1;

	if (Global_1156096.f_21645[3 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 550, bVar0);
	if (Global_1156096.f_21645[4 /*209*/].f_208)
	{
		if (!func_279(Global_1297553[Global_1295619 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 556, bVar1);
}

void func_1390()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1156096.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 263, bVar0);
}

char* func_1391(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_1392(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -3.757584E+08f;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return -2.713979E-21f;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 2.348818E-06f;
		default:
			break;
	}
	return 0;
}

void func_1393(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1203856[iVar0 /*8*/].f_5 == iParam0)
		{
			Global_1203856[iVar0 /*8*/].f_7 = 1;
			Global_1203856[iVar0 /*8*/].f_5 = 0;
		}
		iVar0++;
	}
}

void func_1394()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3);
}

int func_1395(int iParam0)
{
	int iVar0;

	if (!func_1371(iParam0))
	{
		return -1;
	}
	iVar0 = func_1372(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/];
}

bool func_1396(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_1352(iParam0))
	{
		return false;
	}
	iVar0 = func_1343(iParam0, 1);
	iVar2 = Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_1354(Global_1156096.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1156096.f_35859.f_9286[func_1372(iVar2, 1) /*3*/];
		Var4 = { func_1397(iVar3) };
		if (iVar3 != iParam0 && Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (Global_1156096.f_35859.f_3116[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_1405() && !func_1406())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_1405())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_1351(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_1351(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
			{
				return false;
			}
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			return true;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_1351(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1295619 && !func_410(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (!func_1023(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956862.f_1716[8])
			{
				return false;
			}
			iVar1 = func_1351(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (PED::_GET_LASSOED_LASSOER(Global_1295619.f_3) != PLAYER::GET_PLAYER_PED(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_1397(int iParam0)
{
	int iVar0;

	iVar0 = func_1343(iParam0, 1);
	return Global_1156096.f_35859.f_3116[iVar0 /*31*/];
}

bool func_1398(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_1404(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1399(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1400(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1203856[iVar0 /*8*/]) && !Global_1203856[iVar0 /*8*/].f_6)
		{
			Global_1203856[iVar0 /*8*/].f_5 = iParam0;
			Global_1203856[iVar0 /*8*/].f_1 = iParam1;
			Global_1203856[iVar0 /*8*/].f_2 = iParam2;
			Global_1203856[iVar0 /*8*/].f_3 = iParam3;
			Global_1203856[iVar0 /*8*/].f_4 = iParam4;
			Global_1203856[iVar0 /*8*/].f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_1401()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3, 0.7f);
}

char* func_1402(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_1403(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_1404(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -2.811747E+32f;
	Var0.f_1 = iParam0;
	Var0.f_2 = -5.324383E+23f;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar7, &Var0, -5.324383E+23f))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_PARSEDDATA_GET_SECTION(&iVar7, &Var0, 3.342414E-09f);
		uParam2->f_10.f_3 = func_1407(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_10), &Var0, -3.294982E+22f))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_10.f_1), &Var0, -3.294982E+22f))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_10.f_2), &Var0, -3.294982E+22f))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_14), &Var0, -5.878582E+37f);
				break;
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_14.f_1), &Var0, -5.878582E+37f);
				break;
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_14.f_2), &Var0, -5.878582E+37f);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_18), &Var0, 6.468156E+19f);
				break;
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_18.f_1), &Var0, 6.468156E+19f);
				break;
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_18.f_2), &Var0, 6.468156E+19f);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_1405()
{
	return Global_1572887.f_7;
}

bool func_1406()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_122(func_121(0)))
	{
		return false;
	}
	if (Global_3145858 != -5.544348E+20f)
	{
		return false;
	}
	if (func_1201(Global_524288.f_39632))
	{
		return true;
	}
	return false;
}

int func_1407(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

