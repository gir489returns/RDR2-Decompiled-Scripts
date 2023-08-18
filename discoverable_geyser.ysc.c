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
	struct<10> Local_13 = { 3, 0, 6, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 6;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 6;
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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<2> Local_49 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_48 = ScriptParam_0;
	Local_49.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_1();
	}
	while (func_2())
	{
		switch (iLocal_47)
		{
			case 0:
				if (func_3(&Local_49))
				{
					iLocal_47 = 1;
				}
				break;
			case 1:
				func_4();
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	func_5();
	SCRIPTS::_0xE7282390542F570D(iLocal_48);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0)
{
	int iVar0;

	if (Local_49 == 0)
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		Local_49 = func_6(iVar0);
		return false;
	}
	return true;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	Local_13.f_32 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		if (!func_7(iVar1))
		{
			return;
		}
		if (func_8(Global_33, Local_13[iVar0 /*10*/].f_1[2], 1, 0))
		{
			iVar2 = 3;
			while (iVar2 <= 5)
			{
				if (func_8(Global_33, Local_13[iVar0 /*10*/].f_1[iVar2], 1, 0))
				{
					Local_13.f_31 = iVar2;
					bVar3 = PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID());
					if (bVar3)
					{
						iVar4 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
					}
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || (bVar3 && ENTITY::IS_ENTITY_IN_WATER(iVar4)))
					{
						if (!func_9())
						{
							func_10(1);
						}
					}
					else if (func_9())
					{
						func_10(0);
					}
				}
				else if (func_9() && Local_13.f_31 == iVar2)
				{
					func_10(0);
				}
				iVar2++;
			}
		}
		switch (Local_13[iVar0 /*10*/])
		{
			case 0:
				func_11(&(Local_13[iVar0 /*10*/]), 1);
				break;
			case 1:
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					return;
				}
				func_11(&(Local_13[iVar0 /*10*/]), 2);
				break;
			case 2:
				iVar5 = 0;
				while (iVar5 <= 5)
				{
					if (!func_13(&(Local_13[iVar0 /*10*/].f_1[iVar5]), func_12(iVar1, iVar5)))
					{
						return;
					}
					iVar5++;
				}
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iVar0 /*10*/].f_8))
				{
					Local_13[iVar0 /*10*/].f_8 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_amb_steam_geyser", func_14(iVar1), 0f, 0f, 0f, 1f, false, false, false, false);
				}
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iVar0 /*10*/].f_8))
				{
					return;
				}
				if (func_11(&(Local_13[iVar0 /*10*/]), func_15(iVar1)))
				{
					func_16(iVar1, Local_13[iVar0 /*10*/]);
				}
				break;
			case 3:
			case 4:
			case 5:
			case 6:
				func_17(iVar1);
				if (func_11(&(Local_13[iVar0 /*10*/]), func_15(iVar1)))
				{
					func_16(iVar1, Local_13[iVar0 /*10*/]);
				}
				break;
			case 7:
				break;
		}
		iVar0++;
	}
}

void func_5()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			func_18(&(Local_13[iVar0 /*10*/].f_1[iVar1]));
			iVar1++;
		}
		iVar0++;
	}
	EVENT::REMOVE_SHOCKING_EVENT(Local_13.f_33);
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WB_DISCO_GEYSER"):
			return 1.914677E+10f;
		default:
			break;
	}
	return 0;
}

bool func_7(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
	}
	return false;
}

bool func_8(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_9()
{
	if (func_19())
	{
		return false;
	}
	return Global_1956862.f_1431.f_96 == 0;
}

void func_10(int iParam0)
{
	Global_1956862.f_1431 = iParam0;
}

bool func_11(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return true;
	}
	return false;
}

struct<11> func_12(int iParam0, int iParam1)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1130394001, 1156468937, 1129264404 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1075838976 /* Float: 2.5f */, 1075838976 /* Float: 2.5f */, 4f };
					Var0.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 1:
					Var0 = { 1130393293, 1156470136, 1129026043 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1067450368 /* Float: 1.25f */, 1067450368 /* Float: 1.25f */, 3f };
					Var0.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 2:
					Var0 = { 1130399847, 1156600047, 1129026043 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1109393408 /* Float: 40f */, 1109393408 /* Float: 40f */, 1103626240 /* Float: 25f */ };
					Var0.f_9 = "DISCO_GEYSER_LOCATION1";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 3:
					Var0 = { 1132198815, 1156490792, 1129056200 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 7f, 7f, 1092616192 /* Float: 10f */ };
					Var0.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 4:
					Var0 = { 1131071085, 1156740862, 1129043268 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1099956224 /* Float: 18f */, 1099956224 /* Float: 18f */, 1092616192 /* Float: 10f */ };
					Var0.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 5:
					Var0 = { 1128610886, 1156509587, 1129043268 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1090519040 /* Float: 8f */, 1090519040 /* Float: 8f */, 1092616192 /* Float: 10f */ };
					Var0.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					Var0.f_10 = 4.795139E-15f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1128245886, 1155852616, 1128953375 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1075838976 /* Float: 2.5f */, 1075838976 /* Float: 2.5f */, 4f };
					Var0.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 1:
					Var0 = { 1128252440, 1155853435, 1128691231 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1067450368 /* Float: 1.25f */, 1067450368 /* Float: 1.25f */, 3f };
					Var0.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 2:
					Var0 = { 1128022291, 1155755675, 1128691231 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1105199104 /* Float: 28f */, 1105199104 /* Float: 28f */, 1103626240 /* Float: 25f */ };
					Var0.f_9 = "DISCO_GEYSER_LOCATION2";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 3:
					Var0 = { 1127060236, 1155892212, 1128793408 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 4f, 4f, 1092616192 /* Float: 10f */ };
					Var0.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 4:
					Var0 = { 1127249922, 1155704811, 1128793352 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1094713344 /* Float: 12f */, 1094713344 /* Float: 12f */, 1092616192 /* Float: 10f */ };
					Var0.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 5:
					Var0 = { 1129330660, 1155773328, 1128793352 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1085276160 /* Float: 5.5f */, 1085276160 /* Float: 5.5f */, 1092616192 /* Float: 10f */ };
					Var0.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					Var0.f_10 = 4.795139E-15f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1124146018, 1156238315, 1128867463 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1075838976 /* Float: 2.5f */, 1075838976 /* Float: 2.5f */, 4f };
					Var0.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 1:
					Var0 = { 1124146018, 1156238315, 1128670855 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1067450368 /* Float: 1.25f */, 1067450368 /* Float: 1.25f */, 3f };
					Var0.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 2:
					Var0 = { 1124796330, 1156215364, 1128670855 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */ };
					Var0.f_9 = "DISCO_GEYSER_LOCATION3";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 3:
					Var0 = { 1123786382, 1156129055, 1128812864 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1075838976 /* Float: 2.5f */, 1075838976 /* Float: 2.5f */, 1092616192 /* Float: 10f */ };
					Var0.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 4:
					Var0 = { 1125104820, 1156142336, 1128806473 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 1091567616 /* Float: 9f */, 1091567616 /* Float: 9f */, 1092616192 /* Float: 10f */ };
					Var0.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					Var0.f_10 = 4.795139E-15f;
					break;
				case 5:
					Var0 = { 1124621290, 1156338157, 1128806473 };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 4f, 4f, 1092616192 /* Float: 10f */ };
					Var0.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					Var0.f_10 = 4.795139E-15f;
					break;
			}
			break;
	}
	return Var0;
}

bool func_13(var uParam0, struct<10> Param1, var uParam11)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Param1.f_10, Param1, Param1.f_3, Param1.f_6, Param1.f_9);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1130394001, 1156468937, 1129190807;
		case 1:
			return 1128245886, 1155852616, 1128822303;
		case 2:
			return 1124146018, 1156238315, 1128801927;
	}
	return 0f, 0f, 0f;
}

int func_15(int iParam0)
{
	if (func_20(iParam0))
	{
		return 3;
	}
	if (func_21(iParam0))
	{
		return 4;
	}
	if (func_22(iParam0))
	{
		return 5;
	}
	if (func_23(iParam0))
	{
		return 6;
	}
	return 2;
}

void func_16(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Steam", 0.25f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Erupt", 0f, false);
				if (Local_13.f_33 != 0)
				{
					EVENT::REMOVE_SHOCKING_EVENT(Local_13.f_33);
					Local_13.f_33 = 0;
				}
				Local_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
		case 4:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Steam", 1f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Erupt", 0f, false);
				if (Local_13.f_33 != 0)
				{
					EVENT::REMOVE_SHOCKING_EVENT(Local_13.f_33);
					Local_13.f_33 = 0;
				}
				Local_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
		case 5:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Steam", 0.5f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Erupt", 1f, false);
				if (Local_13.f_33 == 0)
				{
					Local_13.f_33 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-1009.365f, func_14(iParam0), -1f, -1f, -1f, -1f, -1f, 3, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_33)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_33)))
				{
					PED::_0x23BDE06596A22CEC(PED::GET_MOUNT(Global_33), 1, 0.15f, 0);
				}
				PED::_0x23BDE06596A22CEC(Global_33, 1, 1f, 0);
				Local_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
		case 6:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Steam", 0.75f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_13[iParam0 /*10*/].f_8, "Erupt", 1f, false);
				if (Local_13.f_33 == 0)
				{
					Local_13.f_33 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-1009.365f, func_14(iParam0), -1f, -1f, -1f, -1f, -1f, 3, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_33)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_33)))
				{
					PED::_0x23BDE06596A22CEC(PED::GET_MOUNT(Global_33), 1, 0.15f, 0);
				}
				PED::_0x23BDE06596A22CEC(Global_33, 1, 1f, 0);
				Local_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
	}
}

void func_17(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (Local_13[iParam0 /*10*/].f_9)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Local_13[iParam0 /*10*/].f_1[0]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_33, Local_13[iParam0 /*10*/].f_1[0], true, 0))
	{
		return;
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	vVar6 = { func_14(iParam0) };
	vVar6.f_2 = vVar3.z;
	vVar0 = { vVar3 - vVar6 };
	vVar0 = { func_24(vVar0) };
	PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_33, 3000, 5000, 0, vVar0, 204f, 0f, 0f, 0f, 0f, 0f, 0f);
	ENTITY::APPLY_FORCE_TO_ENTITY(Global_33, 1, vVar0 * Vector(6f, 6f, 6f), 0f, 0f, 0f, 0, false, false, true, false, true);
	Local_13[iParam0 /*10*/].f_9 = 1;
}

void func_18(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		VOLUME::DELETE_VOLUME(*uParam0);
	}
}

bool func_19()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_20(int iParam0)
{
	int iVar0;

	iVar0 = (Local_13.f_32 % func_25(iParam0));
	if (iVar0 >= 0 && iVar0 < func_26(iParam0))
	{
		return true;
	}
	return false;
}

bool func_21(int iParam0)
{
	int iVar0;

	iVar0 = (Local_13.f_32 % func_25(iParam0));
	if (iVar0 >= func_26(iParam0) && iVar0 < (func_26(iParam0) + func_27(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_22(int iParam0)
{
	int iVar0;

	iVar0 = (Local_13.f_32 % func_25(iParam0));
	if (iVar0 >= (func_26(iParam0) + func_27(iParam0)) && iVar0 < ((func_26(iParam0) + func_27(iParam0)) + func_28(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = (Local_13.f_32 % func_25(iParam0));
	if (iVar0 >= ((func_26(iParam0) + func_27(iParam0)) + func_28(iParam0)) && iVar0 < (((func_26(iParam0) + func_27(iParam0)) + func_28(iParam0)) + func_29(iParam0)))
	{
		return true;
	}
	return false;
}

Vector3 func_24(vector3 vParam0)
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

int func_25(int iParam0)
{
	return (((func_26(iParam0) + func_27(iParam0)) + func_28(iParam0)) + func_29(iParam0));
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 30;
		case 1:
			return 42;
		case 2:
			return 57;
		default:
			break;
	}
	return 0;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 12;
		case 2:
			return 7;
		default:
			break;
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 3;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 7;
		default:
			break;
	}
	return 0;
}

