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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	struct<66> Local_19 = { 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 1097859072;
	var uLocal_103 = 1000;
	var uLocal_104 = 500;
	var uLocal_105 = 1067450368;
	var uLocal_106 = 5000;
	var uLocal_107 = 42;
	var uLocal_108 = 1103626240;
	var uLocal_109 = 1077936128;
	var uLocal_110 = 1106247680;
	var uLocal_111 = 1103101952;
	var uLocal_112 = 1109393408;
	var uLocal_113 = 1097859072;
	var uLocal_114 = 1103626240;
	var uLocal_115 = 1067450368;
	var uLocal_116 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	struct<189> Var0;

	fLocal_17 = 1f;
	fLocal_18 = 1f;
	Var0.f_1 = -1;
	Var0.f_12 = 24;
	Var0.f_114 = -1.068381E+13f;
	Var0.f_125 = 2;
	Var0.f_125.f_1.f_2 = 570;
	Var0.f_125.f_1.f_3 = 1f;
	Var0.f_125.f_1.f_4 = -1f;
	Var0.f_125.f_1.f_9 = 2;
	Var0.f_125.f_1.f_17.f_2 = 570;
	Var0.f_125.f_1.f_17.f_3 = 1f;
	Var0.f_125.f_1.f_17.f_4 = -1f;
	Var0.f_125.f_1.f_17.f_9 = 2;
	Var0.f_160.f_1 = -1;
	Var0.f_160.f_3 = -1;
	Var0.f_160.f_6 = -1;
	Var0.f_160.f_12 = 2f;
	Var0.f_160.f_16 = 1;
	Var0.f_181 = 1;
	Var0.f_1 = vScriptParam_0.y;
	Var0.f_119 = vScriptParam_0.z;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Var0);
	}
	Var0.f_188 = func_2();
	if (!func_3(&Var0))
	{
		func_1(&Var0);
	}
	while (!func_4(&Var0))
	{
		switch (Var0.f_11)
		{
			case 0:
				func_5(&Var0);
				Var0.f_11 = 1;
				break;
			case 1:
				if (func_6(&Var0))
				{
					Var0.f_11 = 2;
				}
				break;
			case 2:
				if (func_7(&Var0) && func_8(&Var0))
				{
					Var0.f_11 = 3;
				}
				break;
			case 3:
				if (func_9(&Var0, 0))
				{
					func_10(&Var0);
				}
				else
				{
					func_11(&Var0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_182))
				{
					Var0.f_11 = 2;
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
}

void func_1(var uParam0)
{
	func_12(uParam0);
	if (func_13(uParam0->f_183))
	{
		func_14(&(uParam0->f_183), 1, 1);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_187))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_187));
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_6);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1893611.f_2;
}

bool func_3(var uParam0)
{
	uParam0->f_111 = "BUY_TICKET";
	uParam0->f_112 = "SHOW_GET_INFO";
	uParam0->f_9 = 1;
	uParam0->f_120 = 0;
	uParam0->f_184 = { 0f, 1f, 0f };
	uParam0->f_113 = "";
	uParam0->f_8 = 1;
	uParam0->f_124 = 3f;
	uParam0->f_2 = { func_15(uParam0->f_1) };
	Local_19.f_23 = uParam0->f_119;
	if (func_16(Local_19.f_23))
	{
		uParam0->f_7 = 1;
	}
	uParam0->f_122 = 0;
	uParam0->f_117 = func_17(uParam0->f_1);
	if (uParam0->f_117 >= 100)
	{
		uParam0->f_111 = "BUY_TICKET_DLR";
	}
	func_18(uParam0, 0);
	func_19(&(Local_19.f_43), &(Local_19.f_44), Local_19.f_23);
	switch (func_2())
	{
		case 5:
			uParam0->f_110 = "NBX_Bartender";
			break;
		case 40:
			uParam0->f_110 = "NBX_Bartender";
			break;
		case 81:
			uParam0->f_110 = "NBX_Bartender";
			break;
	}
	return true;
}

bool func_4(var uParam0)
{
	float fVar0;

	uParam0->f_189++;
	if (uParam0->f_189 < 10)
	{
		return false;
	}
	uParam0->f_189 = 0;
	if (func_2() != uParam0->f_188 || uParam0->f_188 == -1)
	{
		return true;
	}
	if (!uParam0->f_122 && func_20(0, 1, 1))
	{
		return true;
	}
	if (uParam0->f_11 == 4)
	{
		return true;
	}
	fVar0 = func_21(Global_33, uParam0->f_2, 1);
	if (fVar0 > 1114636288)
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_6(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
		{
			return false;
		}
	}
	if (uParam0->f_1 != -1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_22(uParam0->f_1)))
		{
			return false;
		}
	}
	if (!func_23(uParam0))
	{
		return false;
	}
	return PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY();
}

int func_7(var uParam0)
{
	int iVar0;

	func_24(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		if (*uParam0 != 0)
		{
			uParam0->f_182 = func_25(*uParam0, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, 1, 0, 0);
		}
		else if (uParam0->f_1 != -1)
		{
			if (uParam0->f_9)
			{
				if (func_21(Global_33, uParam0->f_2, 1) < 1120403456)
				{
					if (!func_26(uParam0->f_1, 0, 0, 0, 0, 0))
					{
						return 0;
					}
				}
			}
			uParam0->f_182 = func_27(uParam0->f_1);
		}
		else
		{
			func_1(uParam0);
		}
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_110))
	{
		func_28(&(uParam0->f_12), uParam0->f_182, uParam0->f_110, 0);
	}
	switch (uParam0->f_1)
	{
		case 3:
		case 70:
		case 250:
		case 277:
		case 278:
		case 342:
		case 466:
		case 503:
			func_18(uParam0, 0);
			break;
	}
	if (!func_9(uParam0, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_111))
	{
		if (uParam0->f_117 > 0)
		{
			uParam0->f_183 = func_29("STRING", uParam0->f_114, uParam0->f_182, 1, 0, 0, 0, 0, 1.6f, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0, 0);
			func_30(uParam0->f_183, uParam0->f_111, (BUILTIN::TO_FLOAT(uParam0->f_117) / 1120403456), 2, 1);
		}
		else
		{
			uParam0->f_183 = func_29(uParam0->f_111, uParam0->f_114, uParam0->f_182, 1, 0, 0, 0, 0, 1.6f, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0, 0);
		}
		if (!func_31(uParam0->f_184))
		{
			func_32(uParam0->f_183, uParam0->f_184, 1);
		}
	}
	if (uParam0->f_120 != 0)
	{
		if (!uParam0->f_10)
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_187))
			{
				uParam0->f_187 = func_33(uParam0->f_182, uParam0->f_120, 1, 1);
			}
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_187, uParam0->f_121, true);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_187))
			{
				uParam0->f_187 = MAP::BLIP_ADD_FOR_COORDS(uParam0->f_120, uParam0->f_2);
			}
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_187, uParam0->f_121, true);
				iVar0 = func_34(uParam0->f_121);
				if (iVar0 != 0)
				{
					MAP::SET_BLIP_FLASH_TIMER(uParam0->f_187, iVar0, -1);
				}
			}
		}
	}
	if (uParam0->f_8 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_182, 0, false);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
	{
		if (func_9(uParam0, 0))
		{
			if (uParam0->f_124 > 0f)
			{
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_182, false, false), 0f, 0f, 0f, uParam0->f_124, uParam0->f_124, 1.7f, "Interact_Ped - volProximityRng");
			}
			else
			{
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_182, false, false), 0f, 0f, 0f, 5f, 5f, 1.7f, "Interact_Ped - volProximityRng");
			}
		}
		else
		{
			uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_182, false, false), 0f, 0f, 0f, 3.5f, 3.5f, 1.7f, "Interact_Ped - volProximityRng");
		}
	}
	return 1;
}

int func_8(var uParam0)
{
	if (func_9(uParam0, 0))
	{
		if (uParam0->f_117 > 0)
		{
			if (uParam0->f_117 >= 100)
			{
				func_35(&(uParam0->f_125[0 /*17*/]), uParam0->f_111, BUILTIN::ROUND(BUILTIN::TO_FLOAT((uParam0->f_117 / 100))), 0, -9.436069E+32f, 0, 0, 0, 1);
			}
			else
			{
				func_35(&(uParam0->f_125[0 /*17*/]), uParam0->f_111, uParam0->f_117, 0, -9.436069E+32f, 0, 0, 0, 1);
			}
		}
		else
		{
			func_36(&(uParam0->f_125[0 /*17*/]), uParam0->f_111, 0, -9.436069E+32f, 0, 0, 0, 1, 0);
		}
		if (uParam0->f_7)
		{
			func_36(&(uParam0->f_125[1 /*17*/]), uParam0->f_112, 0, 1.121045E-15f, 0, 0, 0, 1, 0);
		}
	}
	return 1;
}

bool func_9(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_118, iParam1);
}

int func_10(var uParam0)
{
	int iVar0;

	func_37(uParam0);
	if (uParam0->f_123 == 1)
	{
		return 0;
	}
	if (func_38(Global_33, uParam0->f_6, 0, 0))
	{
		func_39(uParam0);
	}
	else
	{
		func_40(uParam0);
	}
	if (uParam0->f_124 > 0f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
		{
			if ((func_41(Global_33, uParam0->f_182, 1, 1) > uParam0->f_124 || AUDIO::IS_ANY_SPEECH_PLAYING(Global_33)) || AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				func_42(&(uParam0->f_125[0 /*17*/]));
				if (uParam0->f_7)
				{
					func_42(&(uParam0->f_125[1 /*17*/]));
				}
			}
			iVar0 = func_44(&(uParam0->f_182), &(uParam0->f_160), uParam0->f_124, &(uParam0->f_125), 0, 3, 1, uParam0->f_113, func_43(2, 0, 0), 0, 0, 2, uParam0->f_124);
		}
		else
		{
			iVar0 = -1;
		}
	}
	else
	{
		iVar0 = func_44(&(uParam0->f_182), &(uParam0->f_160), 5f, &(uParam0->f_125), 0, 3, 0, uParam0->f_113, func_43(2, 0, 0), 0, 0, 2, -1f);
	}
	switch (iVar0)
	{
		case 0:
			func_45(uParam0);
			return 1;
		case 1:
			func_46(uParam0);
			return 1;
	}
	return 0;
}

int func_11(var uParam0)
{
	func_37(uParam0);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
	{
		if (func_38(Global_33, uParam0->f_6, 1, 0))
		{
			func_39(uParam0);
		}
	}
	if (func_13(uParam0->f_183))
	{
		if (func_47(uParam0->f_183, 1))
		{
			func_45(uParam0);
			return 1;
		}
	}
	return 0;
}

void func_12(var uParam0)
{
	int iVar0;

	func_48(&(Local_19.f_10[0 /*3*/]), "IG2");
	func_48(&(Local_19.f_10[1 /*3*/]), "IG3");
	func_48(&(Local_19.f_10[2 /*3*/]), "IG4");
	func_49(&Local_19);
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (func_52(func_50(iVar0), func_51(Local_19.f_23)))
		{
			AUDIO::STOP_STREAM(AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_50(iVar0), func_51(Local_19.f_23)));
		}
		else
		{
			iVar0++;
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_19.f_44))
	{
		VOLUME::DELETE_VOLUME(Local_19.f_44);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_19.f_43))
	{
		VOLUME::DELETE_VOLUME(Local_19.f_43);
	}
	if (func_53(uParam0->f_1))
	{
		func_54(uParam0->f_1, 0, 1, 0, 0);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, false);
	if (func_55(Global_1958672.f_1321, 16))
	{
		func_56(&(Global_1958672.f_1321), 16);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_33);
		PED::_0xAAC0EE3B4999ABB5(Global_33, 0);
	}
}

bool func_13(int iParam0)
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

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_13(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_57(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_58(iVar0);
	*uParam0 = 0;
}

Vector3 func_15(int iParam0)
{
	switch (iParam0)
	{
		case 277:
			return 1159651731, -996126608, 1111547694;
		case 278:
			return 1160245706, -995477348, 1111293947;
		case 33:
			return -1011768437, 1144007723, 1122507459;
		case 519:
			return -1002076530, -995470367, 1110154837;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_16(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

int func_17(int iParam0)
{
	int iVar0;

	iVar0 = 200;
	switch (iParam0)
	{
		case 277:
			iVar0 = func_59(-0.09842652f, -982726.7f, 1, 0, 1, 0);
			break;
		case 278:
			if (func_60(44))
			{
				iVar0 = func_59(7.996503E+34f, -982726.7f, 1, 0, 1, 0);
			}
			else
			{
				iVar0 = func_59(2335299f, -982726.7f, 1, 0, 1, 0);
			}
			break;
		case 519:
			iVar0 = func_59(7.996503E+34f, -982726.7f, 1, 0, 1, 0);
			break;
		case 33:
			iVar0 = func_59(2335299f, -982726.7f, 1, 0, 1, 0);
			break;
	}
	return iVar0;
}

void func_18(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_118), iParam1);
}

void func_19(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(*uParam0, 2538.033f, -1279.347f, 49.98048f, 0f, 0f, 11.90726f, 5.5f, 5.5f, 2f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam0, 2545.899f, -1284.449f, 52.68468f, 0f, 0f, 0f, 19.06469f, 21.41224f, 12.2805f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam0, 2537.024f, -1293.295f, 52.62739f, 0f, 0f, 0f, 8.533219f, 26.71697f, 9.024663f);
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2533.624f, -1276.359f, 49.78957f, 0f, 0f, -25.0941f, 2.553831f, 2.187363f, 3.282658f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2535.758f, -1273.773f, 49.78957f, 0f, 0f, -64.99103f, 2.553831f, 2.187363f, 3.282658f);
			}
			break;
		case 1:
		case 2:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.602f, -1359.844f, 48.57206f, 0f, 0f, 38.71428f, 4.602314f, 8.88861f, 3.333464f, "TheaterWepCheck");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2685.939f, -1360.082f, 48.17015f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2689.12f, -1363.918f, 48.17015f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
			}
			break;
		case 3:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-347.6901f, 704.0504f, 118.0073f, 0f, 0f, 14.63188f, 3.596706f, 3.045884f, 2.800292f, "TheaterWepCheck");
			}
			break;
		case 4:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.5135f, -1362.535f, 44.1069f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "TheaterWepCheck");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -791.2835f, -1359.049f, 43.89287f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -791.2835f, -1366.186f, 43.89287f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
			}
			break;
	}
}

bool func_20(int iParam0, bool bParam1, bool bParam2)
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
		if (func_61())
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
	if (iParam0 == 0 && func_63(func_62(0)))
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
	switch (func_64(func_62(0)))
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

float func_21(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_22(int iParam0)
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	return Global_1893799[iParam0 /*3*/].f_1;
}

bool func_23(var uParam0)
{
	return true;
}

void func_24(var uParam0)
{
}

int func_25(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_66(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_26(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_65(iParam0))
	{
		return false;
	}
	if (!func_68(func_67(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_22(iParam0)))
	{
		func_69(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_70(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_71(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_31(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_22(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_22(iParam0), false);
	}
	else
	{
		iVar3 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_22(iParam0), false);
	}
	if (!func_31(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_22(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

int func_27(int iParam0)
{
	int iVar0;

	iVar0 = func_22(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
}

void func_28(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_72(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
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
		if (func_73(iVar0, 2))
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
				func_74(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1f, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_30(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(6, sParam1, sParam2));
}

bool func_31(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_32(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_CONTEXT_SET_POINT(Global_1951897[iVar0 /*23*/].f_3, vParam1);
	Global_1951897[iVar0 /*23*/].f_12 = { vParam1 };
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return 0;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		iVar0 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, iParam0);
	}
	else
	{
		MAP::_BLIP_SET_STYLE(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 2.786954E-24f || iParam1 == 9151700f) || iParam1 == -6.009882E+27f)
		{
			MAP::BLIP_ADD_MODIFIER(iVar0, 1.231009E-30f);
		}
	}
	return iVar0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLIP_MG_POKER"):
			return 3;
		case joaat("BLIP_MG_BLACKJACK"):
			return 1;
		case joaat("BLIP_FENCE_BUILDING"):
			return 7;
		case joaat("BLIP_MG_DOMINOES"):
			return 2;
		case joaat("BLIP_MG_FISHING"):
			return 67;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET"):
			return 4;
		case joaat("BLIP_SUMMER_COW"):
			return 5;
		case joaat("BLIP_MG_DOMINOES_ALL3S"):
			return 8;
		case joaat("BLIP_MG_DOMINOES_ALL5S"):
			return 9;
		case joaat("BLIP_MG_DOMINOES_DRAW"):
			return 10;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT"):
			return 11;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET_GUTS"):
			return 12;
		case joaat("BLIP_PROC_LOANSHARK"):
			return 14;
		case joaat("BLIP_AMBIENT_HERD"):
			return 13;
		case joaat("BLIP_PROC_BOUNTY_POSTER"):
			return 16;
		case joaat("BLIP_AMBIENT_COACH"):
			return 17;
		case joaat("BLIP_AMBIENT_TRAIN"):
			return 18;
		case joaat("BLIP_AMBIENT_RIVERBOAT"):
			return 19;
		case joaat("BLIP_AMBIENT_QUARTERMASTER"):
			return 22;
		case joaat("BLIP_SHOP_STORE"):
			return 20;
		case joaat("BLIP_SHOP_SHADY_STORE"):
			return 21;
		case joaat("BLIP_SHOP_GUNSMITH"):
			return 23;
		case joaat("BLIP_SHOP_COACH_FENCING"):
			return 24;
		case joaat("BLIP_SHOP_DOCTOR"):
			return 25;
		case joaat("BLIP_SHOP_TAILOR"):
			return 26;
		case joaat("BLIP_SHOP_BLACKSMITH"):
			return 28;
		case joaat("BLIP_SHOP_TRAINER"):
			return 29;
		case joaat("BLIP_POST_OFFICE"):
			return 33;
		case joaat("BLIP_POST_OFFICE_REC"):
			return 34;
		case joaat("BLIP_SHOP_TRAIN"):
			return 30;
		case joaat("BLIP_SHOP_BARBER"):
			return 31;
		case joaat("BLIP_SHOP_BUTCHER"):
			return 32;
		case joaat("BLIP_SHOP_TACKLE"):
			return 35;
		case joaat("BLIP_SHOP_ANIMAL_TRAPPER"):
			return 36;
		case -1017650267:
			return 51;
		case joaat("BLIP_SHOP_HORSE"):
			return 37;
		case joaat("BLIP_SHOP_HORSE_FENCING"):
			return 38;
		case joaat("BLIP_SHOP_HORSE_SADDLE"):
			return 39;
		case joaat("BLIP_SHOP_HONOR"):
			return 45;
		case joaat("BLIP_SHOP_WARDROBE"):
			return 52;
		case joaat("BLIP_MP_TRAVELLING_SALESWOMAN"):
			return 48;
		case joaat("BLIP_BUSINESS_MOONSHINE"):
			return 49;
		case joaat("BLIP_MP_ROLE_MOONSHINER"):
			return 100;
		case joaat("BLIP_MOONSHINE_STILL"):
			return 50;
		case joaat("BLIP_PHOTO_STUDIO"):
			return 41;
		case joaat("BLIP_HOTEL_BED"):
			return 40;
		case joaat("BLIP_SALOON"):
			return 27;
		case joaat("BLIP_STABLE"):
			return 53;
		case joaat("BLIP_PROC_HOME"):
			return 54;
		case joaat("BLIP_PROC_HOME_LOCKED"):
			return 55;
		case joaat("BLIP_AMBIENT_TELEGRAPH"):
			return 57;
		case joaat("BLIP_AMBIENT_COACH_TAXI"):
			return 58;
		case joaat("BLIP_AMBIENT_THEATRE"):
			return 59;
		case joaat("BLIP_REGION_CARAVAN"):
			return 60;
		case joaat("BLIP_EVENT_APPLESEED"):
			return 61;
		case joaat("BLIP_EVENT_CASTOR"):
			return 62;
		case joaat("BLIP_EVENT_RAILROAD_CAMP"):
			return 63;
		case joaat("BLIP_EVENT_RIGGS_CAMP"):
			return 64;
		case joaat("BLIP_REGION_HIDEOUT"):
			return 65;
		case joaat("BLIP_TOWN"):
			return 71;
		default:
			break;
	}
	return 0;
}

void func_35(int* iParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	func_75(iParam0, 1);
	func_36(iParam0, uParam1, iParam3, fParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

void func_36(int* iParam0, var uParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = fParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_13(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_76(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_77(iParam0->f_6, iParam0->f_5, 0);
			}
			func_78(iParam0->f_6, 0, 1, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_79(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_37(var uParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_80(Local_19.f_23);
	Local_19.f_31 = 0;
	if (!Local_19.f_33)
	{
		if (func_81(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) || LAW::_0xF46108C50A22B029())
		{
			Local_19.f_33 = 1;
		}
	}
	else if (!func_81(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) && !LAW::_0xF46108C50A22B029())
	{
		Local_19.f_33 = 0;
	}
	Local_19.f_34 = func_38(Global_33, Local_19.f_43, 1, 0);
	Local_19.f_35 = func_38(Global_33, Global_1958672.f_7[Global_38.f_4656[Local_19.f_23] /*31*/].f_4, 1, 0);
	func_82(uParam0, &Local_19);
	func_83(uParam0, &Local_19);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		if (!func_55(Local_19.f_24, 4096))
		{
			func_84(&(Local_19.f_24), 4096);
		}
		if (!Local_19.f_31)
		{
			if (Local_19 != 0)
			{
				Local_19 = 0;
			}
			return;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_182) && !Local_19.f_31)
	{
		return;
	}
	else
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_182, 49, true);
	}
	bVar1 = func_60(44);
	if (Local_19.f_23 == 1 && bVar1)
	{
		uParam0->f_11 = 4;
	}
	if (Local_19.f_23 == 2 && !bVar1)
	{
		uParam0->f_11 = 4;
	}
	switch (Local_19)
	{
		case 0:
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_182, "bUpdatedPlayer"))
			{
				DECORATOR::DECOR_SET_BOOL(uParam0->f_182, "bUpdatedPlayer", true);
			}
			if (!func_53(uParam0->f_1))
			{
				func_85(uParam0->f_1, 1, 0, 0, 1, 1);
			}
			func_49(&Local_19);
			func_86(uParam0, &Local_19, 0);
			func_87(uParam0, &Local_19, 0);
			func_88(uParam0, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 330, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 44, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 174, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 448, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, true);
			func_89(&(Local_19.f_65), 1);
			func_90(&(Local_19.f_65), 1);
			func_91(&(Local_19.f_65), 1);
			func_92(&(Local_19.f_65), 1);
			func_93(&(Local_19.f_65), 1);
			func_94(&(Local_19.f_65), 0);
			func_95(&(Local_19.f_65), 1);
			func_96(&(Local_19.f_65), 1);
			func_97(&(Local_19.f_65), 1);
			func_98(&(Local_19.f_65), 1);
			func_99(&(Local_19.f_65), 0);
			func_100(&(Local_19.f_65), 1);
			func_101(&(Local_19.f_65), 0);
			func_92(&(Local_19.f_65), 1);
			func_102(&(Local_19.f_65), 1);
			func_103(&(Local_19.f_65), 0);
			func_104(&(Local_19.f_65), 0);
			func_105(&(Local_19.f_65), 0);
			func_106(&(Local_19.f_65), 0);
			if (!func_52(func_50(Local_19.f_25), func_51(Local_19.f_23)))
			{
				Local_19.f_25 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			}
			func_56(&(Local_19.f_24), 65536);
			func_107(&Local_19, 1);
			break;
		case 1:
			func_108(uParam0, &Local_19);
			if ((Local_19.f_23 == 3 && !func_55(Local_19.f_24, 65536)) && func_109())
			{
				func_84(&(Local_19.f_24), 65536);
			}
			if (!func_111(func_110(uParam0->f_1)))
			{
				if (!func_112(&(uParam0->f_125[0 /*17*/]), 0))
				{
					func_113(&(uParam0->f_125[0 /*17*/]), 1);
				}
				if (uParam0->f_7 && !func_112(&(uParam0->f_125[1 /*17*/]), 0))
				{
					func_113(&(uParam0->f_125[1 /*17*/]), 1);
				}
			}
			else
			{
				if (func_112(&(uParam0->f_125[0 /*17*/]), 0))
				{
					func_113(&(uParam0->f_125[0 /*17*/]), 0);
				}
				if (uParam0->f_7 && func_112(&(uParam0->f_125[1 /*17*/]), 0))
				{
					func_113(&(uParam0->f_125[1 /*17*/]), 0);
				}
			}
			if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_19.f_64) && PED::IS_PED_USING_SCENARIO_HASH(uParam0->f_182, 0.1508651f))
			{
				Local_19.f_64 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_182, false);
			}
			func_114(uParam0);
			if (bVar0 && uParam0->f_1 == 277)
			{
				func_115(uParam0, &Local_19);
			}
			else if (Local_19.f_31)
			{
			}
			else
			{
				func_116(&Local_19, uParam0);
				func_117(uParam0, &Local_19);
			}
			break;
		case 2:
			break;
	}
}

bool func_38(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_39(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		return;
	}
	bVar0 = func_80(Local_19.f_23);
	if (!func_55(Local_19.f_24, 16384) && !PAD::IS_CONTROL_PRESSED(0, -2.46932E+34f))
	{
		func_118(&Local_19);
		if (bVar0)
		{
			uParam0->f_111 = "SHOW_ODDFELLOW";
		}
		else if (func_119(&Local_19))
		{
			uParam0->f_111 = "SHOW_USE_TICKET";
		}
		else if (Local_19.f_23 == 0)
		{
			uParam0->f_111 = "BUY_TICKET_DLR";
		}
		else
		{
			uParam0->f_111 = "BUY_TICKET";
		}
		func_79(&(uParam0->f_125[0 /*17*/]), uParam0->f_111);
		func_84(&(Local_19.f_24), 16384);
	}
	if ((!func_55(Local_19.f_24, 262144) && !func_111(Local_19.f_23)) && !Global_1958672.f_1323)
	{
		func_120("SHOW_HLP_NOSHOW", 10000, 0, 0, 0, 1);
		func_84(&(Local_19.f_24), 262144);
	}
	if (!func_80(Local_19.f_23))
	{
		if (Local_19.f_31)
		{
			if (func_111(func_110(uParam0->f_1)) && !func_121(func_110(uParam0->f_1)))
			{
				func_87(uParam0, &Local_19, 1);
			}
		}
		if (func_55(Global_38.f_4656.f_12, 4) && !func_55(Global_38.f_4656.f_12, 8))
		{
			if (func_111(func_110(uParam0->f_1)) && !func_121(func_110(uParam0->f_1)))
			{
				func_87(uParam0, &Local_19, 1);
			}
		}
		if (!func_13(uParam0->f_125[0 /*17*/].f_6))
		{
			if (func_111(func_110(uParam0->f_1)) && !func_121(func_110(uParam0->f_1)))
			{
				iVar1 = 0;
				while (iVar1 <= 40)
				{
					if (Global_1958672.f_7[iVar1 /*31*/].f_6 == uParam0->f_182)
					{
						uParam0->f_117 = Global_1958672.f_7[iVar1 /*31*/].f_28;
					}
					iVar1++;
				}
				func_8(uParam0);
			}
		}
	}
}

void func_40(var uParam0)
{
	if (func_55(Local_19.f_24, 16384))
	{
		func_56(&(Local_19.f_24), 16384);
	}
}

float func_41(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_42(int* iParam0)
{
	func_75(iParam0, 9);
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 = (iVar0 || 2.350989E-38f);
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_44(var uParam0, bool bParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	var uVar8;
	var uVar9;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_122(&iParam8);
		bVar0 = false;
		bVar1 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_33, iParam9, false, 0));
		bVar2 = iParam8 & 32 != false;
		bVar3 = iParam8 & 524288 != false;
		bVar4 = (iParam8 && 2.350989E-38f) != false;
		bVar5 = (iParam8 && 2.350989E-38f) != false;
		bVar6 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar7 = func_123(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar4)
		{
			bVar0 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_33) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_33));
		}
		if (bVar6 || (bVar4 && bVar0))
		{
			func_124(&(bParam1->f_13));
		}
		if (func_125(*uParam0, bParam1, uParam3))
		{
			return -1;
		}
		switch (bParam1->f_2)
		{
			case 0:
				if (bVar1)
				{
					if (func_126(uParam0, bParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar7))
					{
						bParam1->f_1 = -1;
						bParam1->f_2 = 1;
					}
				}
				break;
			case 1:
				if (!bVar1 || !fVar7 <= (fParam2 + 5f))
				{
					func_127(uParam0);
					bParam1->f_2 = 0;
					return -1;
				}
				if (!(iParam8 && 9.403955E-38f) != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_128(*uParam0, 1, 1);
						}
					}
					else if (func_129(bParam1, 22))
					{
						func_128(*uParam0, 0, 1);
					}
				}
				if (func_130(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*bParam1, 4)))
				{
					func_131(uParam0, 1, bParam1, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3);
					func_132(iParam8);
					if (func_133(uParam0, bParam1, fVar7, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3, bVar6, bVar4, bVar0, 0))
					{
						if (bParam1->f_2 != 2 && bParam1->f_2 != 3)
						{
							if (bParam1->f_1 > -1 && bParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[bParam1->f_1 /*17*/], 20))
								{
									func_134(uParam3);
								}
							}
							return bParam1->f_1;
						}
					}
					else if (bParam1->f_2 != 2)
					{
						if (bParam1->f_1 != -1)
						{
							bParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_135(bParam1, uParam3, fVar7);
					if (func_136(*uParam0, bParam1, uParam3))
					{
						return bParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*bParam1, 1))
					{
						if (!bVar3)
						{
							func_137(uParam3, 0, 0, 1, 1);
						}
						MISC::CLEAR_BIT(bParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_138(uParam0, bParam1, fParam4, bVar5))
				{
					uVar8 = bParam1->f_1;
					bParam1->f_9 = 0;
					bParam1->f_1 = -1;
					return uVar8;
				}
				break;
			case 2:
				if (func_130(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*bParam1, 4)))
				{
					func_139(*uParam0, bParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar2);
					func_133(uParam0, bParam1, fVar7, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3, bVar6, bVar4, bVar0, 1);
					func_131(uParam0, func_130(uParam0, iParam8, iParam9, 0), bParam1, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3);
					func_132(iParam8);
				}
				else if (MISC::IS_BIT_SET(*bParam1, 1))
				{
					if (!bVar3)
					{
						func_137(uParam3, 0, 0, 1, 1);
					}
					func_140(bParam1, 1);
				}
				func_135(bParam1, uParam3, fVar7);
				if (func_138(uParam0, bParam1, fParam4, bVar5))
				{
					if (iParam8 & 512 != 0)
					{
						bParam1->f_2 = 0;
					}
					else
					{
						bParam1->f_2 = 1;
					}
					uVar9 = bParam1->f_1;
					bParam1->f_9 = 0;
					bParam1->f_1 = -1;
					return uVar9;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*bParam1, 3))
		{
			func_141(bParam1, uParam3);
			MISC::SET_BIT(bParam1, 3);
		}
	}
	return -1;
}

void func_45(var uParam0)
{
	if (!func_80(Local_19.f_23))
	{
		if (uParam0->f_117 > 0 && (func_142() >= uParam0->f_117 || func_119(&Local_19)))
		{
			func_84(&(Local_19.f_24), 4);
			func_113(&(uParam0->f_125[0 /*17*/]), 1);
			func_87(uParam0, &Local_19, 1);
			func_143(uParam0, &Local_19, 1);
		}
	}
	else
	{
		func_84(&(Local_19.f_24), 4);
		func_113(&(uParam0->f_125[0 /*17*/]), 1);
		func_87(uParam0, &Local_19, 1);
		func_143(uParam0, &Local_19, 1);
	}
}

void func_46(var uParam0)
{
	func_84(&(Local_19.f_24), 524288);
	uParam0->f_7 = 0;
	func_113(&(uParam0->f_125[1 /*17*/]), 1);
}

bool func_47(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_13(iParam0))
	{
		return false;
	}
	iVar0 = func_57(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_48(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
	uParam0->f_1 = 0;
}

void func_49(int iParam0)
{
	if (iParam0->f_33)
	{
		return;
	}
	switch (iParam0->f_23)
	{
		case 0:
			func_144(2.586055E-31f, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-9.019435E+35f, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-9.852015E+27f, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-5.939323E+19f, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 1:
			func_144(-6.886823E-35f, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-4.393338E+10f, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-2.214573E-16f, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-6.969142E+30f, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 2:
			func_144(1.638146E-30f, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-1.892688E+36f, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-7.540436E+12f, 0, 0f, 0, 0, 0, 0, 0);
			func_144(4.826715E+30f, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 3:
			break;
		case 4:
			func_144(1.216085E+11f, 0, 0f, 0, 0, 0, 0, 0);
			func_144(1.117698E+24f, 0, 0f, 0, 0, 0, 0, 0);
			break;
	}
	iParam0->f_36 = 0;
}

char* func_50(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
		case 1:
			return "Post_Show_La_Bohemienne_Music";
		case 2:
			return "Post_Show_Rough_Riders_March_Music";
		case 3:
			return "Post_Show_The_Harlem_Rag_Music";
		case 4:
			return "Post_Show_The_Mississippi_Rag_Music";
		case 5:
			return "Pre_Show_Galop_du_Carnival_Music";
		case 6:
			return "Pre_Show_Ma_Ragtime_Baby_Music";
		case 7:
			return "Pre_Show_The_Bosn_Rag_Music";
		case 8:
			return "Pre_Show_The_Keyhole_in_the_Door_Music";
		case 9:
			return "Pre_Show_Walking_for_dat_Cake_Music";
		default:
			break;
	}
	return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
}

char* func_51(int iParam0)
{
	if (iParam0 == 3)
	{
		return "wax_cylinder_show_music";
	}
	return "3235391231_intro";
}

bool func_52(char* sParam0, char* sParam1)
{
	int iVar0;

	iVar0 = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(sParam0, sParam1);
	if (iVar0 != -1 && AUDIO::IS_STREAM_PLAYING(iVar0))
	{
		return true;
	}
	return false;
}

bool func_53(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_54(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_65(iParam0))
	{
		return;
	}
	if (!func_145(iParam0, 1))
	{
		return;
	}
	if (!func_145(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_53(iParam0)) && func_146(iParam0))
	{
		return;
	}
	func_147(iParam0, 1);
	func_148(iParam0);
	if (func_68(func_67(iParam0)))
	{
		iVar0 = func_22(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(iVar0);
		}
		iVar1 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_147(iParam0, 16);
	}
	if (func_145(iParam0, 128) && !bParam3)
	{
		func_149(iParam0, 0);
	}
}

bool func_55(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_56(var uParam0, int iParam1)
{
	func_150(uParam0, iParam1);
}

int func_57(int iParam0)
{
	return iParam0;
}

void func_58(int iParam0)
{
	if (!func_151(iParam0))
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

int func_59(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -982726.7f) && func_152(bParam0, 8.497754E-37f))
	{
		iParam1 = 8.497754E-37f;
	}
	if (func_153(bParam0) || func_154(bParam0, 2.791187f))
	{
		return func_156(func_155(bParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_157(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_60(int iParam0)
{
	if (!func_158(iParam0))
	{
		return false;
	}
	return func_159(iParam0);
}

bool func_61()
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
	if (!func_63(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_62(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_63(struct<2> Param0)
{
	if (!func_160(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_161(Param0))
	{
		return false;
	}
	return true;
}

int func_64(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_65(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

void func_66(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_162(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_163(iParam0, 0);
			bVar0 = true;
		}
		func_164(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_67(int iParam0)
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	return Global_1893799[iParam0 /*3*/];
}

bool func_68(int iParam0)
{
	return iParam0 != 0;
}

int func_69(int iParam0, bool bParam1)
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	if (!func_145(iParam0, 2))
	{
		return 0;
	}
	if (func_145(iParam0, 32) && !bParam1)
	{
		func_165(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_67(iParam0)));
		if (func_166() == -1)
		{
			if (func_145(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_22(iParam0));
				func_147(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_22(iParam0));
		}
		return 0;
	}
	if (!func_167(iParam0) && func_166() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_22(iParam0)))
	{
		func_147(iParam0, 128);
		return 1;
	}
	func_165(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_67(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_22(iParam0));
	if (func_145(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_22(iParam0));
		func_147(iParam0, 2048);
	}
	return 1;
}

bool func_70(int iParam0, bool bParam1)
{
	if (func_166() != -1)
	{
		return false;
	}
	if (!func_65(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_22(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_27(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_22(iParam0));
}

bool func_71(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_22(iParam0)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_22(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_22(iParam0), false)))
		{
			return false;
		}
	}
	return true;
}

bool func_72(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_73(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_74(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_168(iParam0, 1);
	func_169(iParam0, 1);
	func_170(iParam0, 128);
}

void func_75(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_76(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_77(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, sParam1);
}

void func_78(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (bParam1)
	{
		func_171(iParam0, 4);
		if (bParam3)
		{
			func_168(iVar0, 1);
		}
		func_169(iVar0, 1);
	}
	else
	{
		func_170(iParam0, 4);
		func_169(iVar0, 0);
	}
}

void func_79(int* iParam0, char* sParam1)
{
	if (func_13(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_77(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_172(iParam0, 1);
}

bool func_80(int iParam0)
{
	if (func_55(Global_1958672.f_1321, 16) && iParam0 == 0)
	{
		return true;
	}
	if ((func_55(Global_38.f_4656.f_12, 1) && !func_55(Global_38.f_4656.f_12, 2)) && iParam0 == 0)
	{
		return true;
	}
	return false;
}

int func_81(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_173(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_14 != -1)
	{
		if (iParam0 == Global_1295619.f_5)
		{
			if (!Global_1295619.f_6)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 9.534398E+10f)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
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
				return 1;
			}
		}
	}
	return 0;
}

void func_82(var uParam0, var uParam1)
{
	if (uParam1->f_33 || uParam1->f_32)
	{
		if (!func_174(uParam0))
		{
			func_88(uParam0, 1);
			func_86(uParam0, uParam1, 0);
		}
		if (!uParam1->f_36)
		{
			func_175(uParam1);
		}
	}
	else
	{
		if (func_174(uParam0))
		{
			func_88(uParam0, 0);
		}
		if (uParam1->f_36)
		{
			func_49(uParam1);
		}
	}
}

void func_83(var uParam0, var uParam1)
{
	switch (uParam1->f_8)
	{
		case 0:
			if (!func_111(func_110(uParam0->f_1)))
			{
				func_176(&(uParam1->f_2), 5);
				func_177(&(uParam1->f_8), 3);
			}
			else
			{
				if (func_178(uParam0, uParam1))
				{
				}
				if (Global_1958672.f_1323)
				{
					func_177(&(uParam1->f_8), 1);
				}
			}
			break;
		case 1:
			if ((Global_1958672.f_1325 && uParam1->f_2 < 5) && uParam1->f_2 != 0)
			{
				func_176(&(uParam1->f_2), 5);
			}
			if (Global_1958672.f_1324)
			{
				func_177(&(uParam1->f_8), 2);
			}
			break;
		case 2:
			if (Global_1958672.f_1324)
			{
				if (func_178(uParam0, uParam1))
				{
					func_177(&(uParam1->f_8), 3);
				}
			}
			else
			{
				func_177(&(uParam1->f_8), 1);
			}
			if (!Global_1958672.f_1323)
			{
				if (func_178(uParam0, uParam1))
				{
					func_177(&(uParam1->f_8), 3);
				}
			}
			break;
		case 3:
			if (func_111(func_110(uParam0->f_1)))
			{
				func_177(&(uParam1->f_8), 0);
			}
			break;
	}
	func_179(uParam0, uParam1);
}

void func_84(var uParam0, int iParam1)
{
	func_180(uParam0, iParam1);
}

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_181(iParam0, 1))
	{
		return 0;
	}
	if (func_68(func_67(iParam0)))
	{
		iVar1 = func_22(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				PERSCHAR::_REVIVE_PERSCHAR(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(iVar1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_53(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_182(iParam0, 1);
	func_183(iParam0);
	if (bParam3)
	{
		func_182(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_86(var uParam0, int iParam1, int iParam2)
{
	Global_1958672.f_1279[func_110(uParam0->f_1) /*7*/].f_3 = iParam2;
	Global_1958672.f_1279[func_110(uParam0->f_1) /*7*/].f_4 = iParam2;
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	Global_1958672.f_1279[func_110(uParam0->f_1) /*7*/].f_2 = iParam2;
}

void func_88(var uParam0, int iParam1)
{
	Global_1958672.f_1279[func_110(uParam0->f_1) /*7*/].f_5 = iParam1;
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 4);
	}
	else
	{
		func_185(&(uParam0->f_2), 4);
	}
}

void func_90(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 2);
	}
	else
	{
		func_185(&(uParam0->f_2), 2);
	}
}

void func_91(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 2048);
	}
	else
	{
		func_185(&(uParam0->f_2), 2048);
	}
}

void func_92(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 16384);
	}
	else
	{
		func_185(&(uParam0->f_2), 16384);
	}
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 1);
	}
	else
	{
		func_185(&(uParam0->f_2), 1);
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 128);
	}
	else
	{
		func_184(uParam0, 128);
	}
}

void func_95(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 8);
	}
	else
	{
		func_185(&(uParam0->f_2), 8);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 32);
	}
	else
	{
		func_184(uParam0, 32);
	}
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 256);
	}
	else
	{
		func_184(uParam0, 256);
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 16);
	}
	else
	{
		func_185(&(uParam0->f_2), 16);
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 16);
	}
	else
	{
		func_184(uParam0, 1.504633E-36f);
		func_184(uParam0, 16);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 8);
	}
	else
	{
		func_184(uParam0, 8);
	}
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 256);
	}
	else
	{
		func_185(&(uParam0->f_2), 256);
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 524288);
	}
	else
	{
		func_185(&(uParam0->f_2), 524288);
	}
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 4);
	}
	else
	{
		func_184(uParam0, 4);
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 1024);
	}
	else
	{
		func_185(&(uParam0->f_2), 1024);
	}
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 131072);
	}
	else
	{
		func_185(&(uParam0->f_2), 131072);
	}
}

void func_106(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 2);
	}
	else
	{
		func_184(uParam0, 2);
	}
}

void func_107(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_108(var uParam0, var uParam1)
{
	int iVar0;

	switch (uParam1->f_7)
	{
		case 0:
			if (uParam1->f_34 && !uParam1->f_35)
			{
				func_186(&(uParam1->f_7), 1);
			}
			break;
		case 1:
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(3.42864E+21f);
			PAD::DISABLE_CONTROL_ACTION(0, -7.349376E+15f, false);
			if (func_187(uParam0->f_182, 0, 0, 0))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 3.101329E-34f))
				{
					uParam1->f_32 = 1;
				}
			}
			else if (!uParam1->f_32)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar0, true, 0, false) && iVar0 != -3.273909E-18f)
				{
					func_188(0);
				}
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar0, true, 1, false) && iVar0 != -3.273909E-18f)
				{
					func_188(1);
				}
			}
			if ((((!uParam1->f_34 || uParam1->f_35) || uParam1->f_33) || PED::IS_PED_IN_COMBAT(Global_33, 0)) || uParam1->f_32)
			{
				func_186(&(uParam1->f_7), 2);
			}
			break;
		case 2:
			if ((!uParam1->f_33 && !PED::IS_PED_IN_COMBAT(Global_33, 0)) && !uParam1->f_32)
			{
				func_186(&(uParam1->f_7), 0);
			}
			break;
	}
}

bool func_109()
{
	int iVar0;
	bool bVar1;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-348.416f, 699.4218f, 117.6852f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		bVar1 = true;
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_closed", 0);
			bVar1 = false;
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_open", true);
			bVar1 = false;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 277:
			return 0;
		case 278:
			if (func_60(44))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 519:
			return 4;
		case 33:
			return 3;
	}
	return -1;
}

bool func_111(int iParam0)
{
	return Global_1958672.f_1279[iParam0 /*7*/].f_3;
}

bool func_112(var uParam0, bool bParam1)
{
	if (!bParam1 || func_13(uParam0->f_6))
	{
		return func_189(uParam0, 4);
	}
	return false;
}

void func_113(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_189(iParam0, 4))
		{
			func_14(&(iParam0->f_6), 1, 1);
			func_75(iParam0, 4);
		}
	}
	else if (func_189(iParam0, 4))
	{
		func_172(iParam0, 4);
		func_75(iParam0, 14);
	}
}

void func_114(var uParam0)
{
	vector3 vVar0;

	if (uParam0->f_1 == 33)
	{
		if (func_111(func_110(33)))
		{
			if (!func_190(0.01683277f) || func_121(3))
			{
				func_191(0.01683277f);
			}
		}
		else if (!Global_1958672.f_1323 && func_190(0.01683277f))
		{
			vVar0 = { -1011873983, 1144008554, 1122756689 };
			if (func_21(Global_33, vVar0, 1) > 1106247680)
			{
				func_192(0.01683277f);
			}
		}
	}
}

int func_115(var uParam0, int iParam1)
{
	if (!Global_1958672.f_1323)
	{
		if (func_55(Global_1958672.f_1321, 16) && func_21(Global_33, func_15(uParam0->f_1), 1) > 1109393408)
		{
			func_56(&(Global_1958672.f_1321), 16);
			if (iParam1->f_1 < 11)
			{
				func_193(&(iParam1->f_1), 11);
			}
		}
	}
	switch (iParam1->f_1)
	{
		case 0:
			STREAMING::REQUEST_MODEL(func_194(0), false);
			STREAMING::REQUEST_MODEL(func_194(1), false);
			func_193(&(iParam1->f_1), 1);
			break;
		case 1:
			if (!func_198(&(iParam1->f_10[0 /*3*/]), func_195(0), func_197(func_196()), 1))
			{
				return 0;
			}
			if (!func_198(&(iParam1->f_10[1 /*3*/]), func_195(1), func_199(), 1))
			{
				return 0;
			}
			if (!func_198(&(iParam1->f_10[2 /*3*/]), func_195(2), func_200(2), 1))
			{
				return 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_194(0)) && !STREAMING::HAS_MODEL_LOADED(func_194(1)))
			{
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[0]))
			{
				iParam1->f_45[0] = OBJECT::CREATE_OBJECT(func_194(0), 2542.248f, -1281.838f, 49.28225f, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[1]))
			{
				iParam1->f_45[1] = OBJECT::CREATE_OBJECT(func_194(1), 2542.248f, -1281.838f, 49.28225f, true, true, false, false, true);
			}
			if (!func_196() && ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1->f_10[0 /*3*/], "b_playerArthur", true, false);
			}
			func_201(iParam1);
			func_193(&(iParam1->f_1), 2);
			break;
		case 2:
			if (func_38(Global_33, iParam1->f_51[1], 1, 0) && func_55(iParam1->f_24, 4))
			{
				func_56(&(iParam1->f_24), 4);
				func_193(&(iParam1->f_1), 3);
			}
			break;
		case 3:
			func_202(uParam0, &(iParam1->f_10[0 /*3*/]));
			func_193(&(iParam1->f_1), 4);
			break;
		case 4:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[0 /*3*/], false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[0 /*3*/]) > 1062836634)
			{
				func_87(uParam0, iParam1, 1);
				func_193(&(iParam1->f_1), 5);
			}
			break;
		case 5:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(iParam1->f_10[0 /*3*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if (func_55(Global_1958672.f_1321, 32) && func_38(Global_33, iParam1->f_51[0], 1, 0))
			{
				func_193(&(iParam1->f_1), 6);
			}
			break;
		case 6:
			func_203(uParam0, &(iParam1->f_10[1 /*3*/]), iParam1);
			func_193(&(iParam1->f_1), 7);
			break;
		case 7:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]) && (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") || ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[1 /*3*/]) > 1056964608))
			{
				func_193(&(iParam1->f_1), 8);
			}
			break;
		case 8:
			if (func_21(Global_33, func_15(uParam0->f_1), 1) > 1106247680)
			{
				func_193(&(iParam1->f_1), 10);
				return 0;
			}
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, -3886.026f, true) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_182, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_182, -1);
			}
			if (!func_13(iParam1->f_62[0]))
			{
				iParam1->f_62[0] = func_204("TAKE_LETTER", -1.068381E+13f, iParam1->f_51[1], 3, 1, 0, 0, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0);
			}
			else if (func_47(iParam1->f_62[0], 1))
			{
				func_14(&(iParam1->f_62[0]), 1, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_33, 2541.031f, -1281.497f, 49.21795f, 1f, 20000, 0.25f, 0, -136.15f);
				func_193(&(iParam1->f_1), 9);
			}
			break;
		case 9:
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, -3886.026f, true) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_182, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_182, -1);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_33, 2.446422E-13f, true) == 8 || func_21(Global_33, 1159647361, -996134937, 1111809838, 1) < 1056964608)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				func_205(uParam0, &(iParam1->f_10[2 /*3*/]), iParam1);
				func_193(&(iParam1->f_1), 10);
			}
			break;
		case 10:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1->f_10[1 /*3*/], true, false))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[1 /*3*/], false))
					{
						if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, -3886.026f, true) != 1)
						{
							ENTITY::SET_ENTITY_COORDS(uParam0->f_182, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
							TASK::TASK_STAND_STILL(uParam0->f_182, -1);
						}
					}
					else
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
					}
				}
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1->f_10[0 /*3*/], true, false)) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[0 /*3*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[2 /*3*/], false)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[2 /*3*/]) > 1056964608)
			{
				if (!func_55(iParam1->f_24, 131072))
				{
					func_206(3.158794E-20f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					func_207(4000, 0, 1f, 1, 0, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[0]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam1->f_45[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[1]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam1->f_45[1]));
					}
					func_84(&(iParam1->f_24), 131072);
				}
			}
			if (func_21(Global_33, func_15(uParam0->f_1), 1) > 1106247680)
			{
				func_193(&(iParam1->f_1), 11);
			}
			break;
		case 11:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1->f_10[0 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1->f_10[1 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1->f_10[2 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[2 /*3*/]);
			}
			if (func_13(iParam1->f_62[0]))
			{
				func_14(&(iParam1->f_62[0]), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[0]))
			{
				OBJECT::DELETE_OBJECT(&(iParam1->f_45[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[1]))
			{
				OBJECT::DELETE_OBJECT(&(iParam1->f_45[1]));
			}
			func_56(&(Global_1958672.f_1321), 16);
			func_193(&(iParam1->f_1), 12);
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_116(var uParam0, var uParam1)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (func_55(uParam0->f_24, 524288))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_33) && func_209(Global_33, "WHATS_PLAYING", 1.818904E-28f, uParam1->f_182, 1, func_208(func_196()), 0, 1))
				{
					func_124(&(uParam0->f_37));
					func_210(&(uParam0->f_9), 1);
				}
			}
			break;
		case 1:
			if (!func_211(1) && func_212(&(uParam0->f_37)) > 2f)
			{
				func_210(&(uParam0->f_9), 2);
			}
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_182) && func_209(uParam1->f_182, func_213(Global_38.f_4656[uParam0->f_23]), 1.818904E-28f, Global_33, 1, func_214(uParam1->f_1), 0, 1))
			{
				func_124(&(uParam0->f_37));
				func_210(&(uParam0->f_9), 3);
			}
			break;
		case 3:
			if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_182) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_33)) && func_212(&(uParam0->f_37)) > 3f)
			{
				func_124(&(uParam0->f_37));
				func_210(&(uParam0->f_9), 4);
			}
			break;
		case 4:
			if (func_212(&(uParam0->f_37)) > 1110704128)
			{
				func_124(&(uParam0->f_37));
				func_210(&(uParam0->f_9), 5);
			}
			break;
		case 5:
			if (!Global_1958672.f_1323)
			{
				func_56(&(uParam0->f_24), 524288);
				uParam1->f_7 = 1;
				func_113(&(uParam1->f_125[1 /*17*/]), 0);
				func_210(&(uParam0->f_9), 0);
			}
			break;
	}
}

void func_117(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	fVar0 = 1125515264; /* Float: 150f */
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		fVar0 = func_41(Global_33, uParam0->f_182, 1, 1);
	}
	bVar1 = false;
	if (func_215(uParam0->f_182, 1, 1, 1, 0, 0) || func_216(uParam0->f_182, 8f, 25f, 15f, 0))
	{
		if (PED::GET_PED_RESET_FLAG(Global_33, 311))
		{
			bVar1 = true;
		}
	}
	if ((iParam1->f_32 && !bVar1) && fVar0 > 1109393408)
	{
		iParam1->f_32 = 0;
	}
	if ((iParam1->f_3 >= 3 && iParam1->f_3 != 7) && fVar0 < 1109393408)
	{
		if (iParam1->f_33 || func_217(uParam0->f_182, 0, &(iParam1->f_65), &(iParam1->f_97), 0, 0))
		{
			if (iParam1->f_3 == 3)
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_182, iParam1->f_10[3 /*3*/]))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_182);
					func_218(iParam1, 0);
					func_219(&(iParam1->f_3), 4);
					func_124(&(iParam1->f_59));
					func_220(&(iParam1->f_6), 3);
				}
				else
				{
					TASK::TASK_COWER(uParam0->f_182, -1, Global_33, 0);
					func_219(&(iParam1->f_3), 7);
				}
			}
		}
	}
	if (iParam1->f_5 != -1)
	{
		if (((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[3 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[3 /*3*/], false)) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam1->f_10[3 /*3*/], func_221(iParam1->f_5))) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam1->f_10[3 /*3*/], func_221(iParam1->f_4)))
		{
			ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(iParam1->f_10[3 /*3*/], func_221(iParam1->f_5));
			iParam1->f_5 = -1;
		}
	}
	if (func_55(iParam1->f_24, 4096))
	{
		iParam1->f_3 = 9;
		func_56(&(iParam1->f_24), 4096);
	}
	switch (iParam1->f_3)
	{
		case 0:
			iParam1->f_27 = 1;
			iParam1->f_29 = 1;
			func_118(iParam1);
			func_218(iParam1, 10);
			func_222(iParam1);
			func_223(&(iParam1->f_51[2]), &(iParam1->f_51[3]), func_110(uParam0->f_1));
			func_219(&(iParam1->f_3), 1);
			break;
		case 1:
			if (!func_198(&(iParam1->f_10[3 /*3*/]), func_195(3), func_221(10), 1))
			{
				return;
			}
			if (!func_224(iParam1))
			{
				return;
			}
			if (!func_225(iParam1, ENTITY::GET_ENTITY_COORDS(uParam0->f_182, true, false), func_110(uParam0->f_1)))
			{
				return;
			}
			func_219(&(iParam1->f_3), 2);
			break;
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[3 /*3*/]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "ARTHUR", Global_33, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_182, 0);
				func_226(iParam1, func_110(uParam0->f_1));
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1->f_10[3 /*3*/], func_227(func_110(uParam0->f_1)), func_228(func_110(uParam0->f_1)), 2);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_10[3 /*3*/]);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_194(2));
				func_219(&(iParam1->f_3), 3);
			}
			break;
		case 3:
			if (bVar1)
			{
				func_87(uParam0, iParam1, 0);
				func_143(uParam0, iParam1, 0);
				func_86(uParam0, iParam1, 0);
				func_218(iParam1, 0);
				func_219(&(iParam1->f_3), 4);
				func_124(&(iParam1->f_59));
				iParam1->f_32 = 1;
				func_220(&(iParam1->f_6), 3);
			}
			func_229(uParam0, iParam1, bVar1, fVar0);
			break;
		case 4:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[3 /*3*/], false))
			{
				if (!func_230(&(iParam1->f_10[3 /*3*/]), func_221(iParam1->f_4), func_221(iParam1->f_4)))
				{
					return;
				}
				func_231(&(iParam1->f_10[3 /*3*/]), func_221(iParam1->f_4), func_221(iParam1->f_4));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, true);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_10[3 /*3*/]);
				func_219(&(iParam1->f_3), 3);
			}
			else
			{
				if (!func_230(&(iParam1->f_10[3 /*3*/]), func_221(iParam1->f_4), func_221(iParam1->f_4)))
				{
					return;
				}
				if (iParam1->f_4 == 5 || iParam1->f_4 == 4)
				{
					bVar2 = false;
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar3, true, 0, false) && iVar3 != -3.273909E-18f)
					{
						func_188(0);
						bVar2 = true;
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar3, true, 1, false) && iVar3 != -3.273909E-18f)
					{
						func_188(1);
						bVar2 = true;
					}
					if (!bVar2)
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_182, 0);
						TASK::TASK_ENTER_ANIM_SCENE(Global_33, iParam1->f_10[3 /*3*/], "ARTHUR", func_221(iParam1->f_4), 1.48f, false, 0, 20000, -1f);
						func_219(&(iParam1->f_3), 5);
					}
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_182, 0);
					if (iParam1->f_4 == 0 || iParam1->f_4 == 1)
					{
						func_124(&(iParam1->f_56));
						func_231(&(iParam1->f_10[3 /*3*/]), func_221(iParam1->f_4), func_221(iParam1->f_4));
						func_219(&(iParam1->f_3), 7);
					}
					else
					{
						func_124(&(iParam1->f_59));
						func_231(&(iParam1->f_10[3 /*3*/]), func_221(iParam1->f_4), func_221(iParam1->f_4));
						func_219(&(iParam1->f_3), 3);
					}
				}
			}
			if (((iParam1->f_4 != 5 && iParam1->f_4 != 4) && iParam1->f_4 != 9) && iParam1->f_4 != 10)
			{
				func_209(uParam0->f_182, func_232(iParam1->f_4, 0), 1.818904E-28f, Global_33, 1, func_214(uParam0->f_1), 0, 1);
			}
			break;
		case 5:
			if (ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(iParam1->f_10[3 /*3*/], "ARTHUR"))
			{
				func_231(&(iParam1->f_10[3 /*3*/]), func_221(iParam1->f_4), func_221(iParam1->f_4));
				func_219(&(iParam1->f_3), 6);
			}
			break;
		case 6:
			if ((ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[3 /*3*/], false) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam1->f_10[3 /*3*/], func_221(iParam1->f_4))) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[3 /*3*/]) > 1049146425)
			{
				if (func_119(iParam1))
				{
					func_233(iParam1);
					func_56(&(iParam1->f_24), 16384);
				}
				else
				{
					func_209(Global_33, "TICKET_PLEASE", 1.818904E-28f, uParam0->f_182, 1, func_208(func_196()), 0, 1);
					func_234(uParam0->f_117, 0, 0, 1, 0);
				}
				func_219(&(iParam1->f_3), 3);
			}
			break;
		case 7:
			if (!func_55(iParam1->f_24, 8192))
			{
				if (!iParam1->f_33)
				{
					func_235(uParam0);
				}
				func_84(&(iParam1->f_24), 8192);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, 6.48365E-22f, true) != 1)
			{
				if (((func_236(&(iParam1->f_56)) > 5f && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam1->f_10[3 /*3*/], func_221(1))) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam1->f_10[3 /*3*/], func_221(3))) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam1->f_10[3 /*3*/], func_221(0)))
				{
					TASK::TASK_COWER(uParam0->f_182, -1, Global_33, 0);
				}
			}
			if (!iParam1->f_33 && !iParam1->f_32)
			{
				func_237(uParam0, iParam1);
				func_219(&(iParam1->f_3), 0);
				return;
			}
			if (func_236(&(iParam1->f_56)) > 1092616192 && !func_55(iParam1->f_24, 32))
			{
				func_218(iParam1, 1);
				func_84(&(iParam1->f_24), 32);
				func_219(&(iParam1->f_3), 4);
			}
			break;
		case 9:
			func_237(uParam0, iParam1);
			func_219(&(iParam1->f_3), 0);
			break;
		case 8:
			break;
		case 10:
			break;
	}
}

void func_118(var uParam0)
{
	if (!uParam0->f_40 && func_238(-0.09842652f, 1))
	{
		uParam0->f_40 = 1;
	}
	if (!uParam0->f_41 && func_238(2335299f, 1))
	{
		uParam0->f_41 = 1;
	}
	if (!uParam0->f_42 && func_238(7.996503E+34f, 1))
	{
		uParam0->f_42 = 1;
	}
}

bool func_119(int iParam0)
{
	switch (iParam0->f_23)
	{
		case 1:
		case 3:
			if (iParam0->f_41)
			{
				return true;
			}
			break;
		case 2:
		case 4:
			if (iParam0->f_42)
			{
				return true;
			}
			break;
		case 0:
			if (iParam0->f_40)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_120(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_121(int iParam0)
{
	return Global_1958672.f_1279[iParam0 /*7*/].f_2;
}

void func_122(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 = (*uParam0 | 64 | 16 || 2.350989E-38f);
	}
}

float func_123(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_124(var uParam0)
{
	func_239(uParam0, 0f);
}

bool func_125(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_240(iParam0, uParam1))
		{
			if (!func_241(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_137(uParam2, 0, 0, 1, 0);
				func_185(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (func_241(uParam1->f_10, 1))
		{
			func_242(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_184(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_126(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		bVar4 = func_241(iParam4, 32);
		func_243(iParam1, uParam2, 0);
		iVar5 = func_244(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		iVar6 = 0;
		if (!func_241(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_241(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_241(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_241(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_241(iParam4, 8388608) || func_241(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_241(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_241(iParam4, 2.524355E-29f))
		{
			iVar6 |= 8192;
		}
		if (func_129(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_129(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_241(iParam4, 1.504633E-36f))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_245(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_241(iParam4, 2.524355E-29f))
			{
				iVar8 = func_246(uParam2, 1.121045E-15f);
				if (iVar8 > -1)
				{
					func_247(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_129(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_241(iParam4, 2) || func_241(iParam4, 16))
			{
				func_128(*uParam0, 1, 1);
			}
			else
			{
				func_128(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_127(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_128(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_129(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_130(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_33, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_187(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_131(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_248(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_241(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_132(int iParam0)
{
	if (func_241(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, true);
		PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1.936208E-37f, true);
		PAD::DISABLE_CONTROL_ACTION(0, 2.294328E+20f, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1.153572E+20f, true);
		PAD::DISABLE_CONTROL_ACTION(0, -541078.8f, true);
		PAD::DISABLE_CONTROL_ACTION(0, -4.463754E+14f, true);
		PAD::DISABLE_CONTROL_ACTION(0, -5.672764E+31f, true);
		PAD::DISABLE_CONTROL_ACTION(0, -1.933729E+30f, true);
	}
	if (func_241(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -2.598039E+21f, false);
	}
	if (func_241(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 3.360757E-18f, false);
	}
}

bool func_133(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_142();
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_33);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = PED::IS_PED_CARRYING_SOMETHING(Global_33);
	fVar12 = -1f;
	if (func_249(&(iParam1->f_13)))
	{
		fVar12 = func_212(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_13((uParam4[iVar0 /*17*/])->f_6);
		func_250(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_251(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_252(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_137(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_253(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_243(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_33, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 1.504636E-36f, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_254(iParam1, fParam6, iParam1->f_9))
					{
						func_124(&(iParam1->f_18));
						if (bVar6)
						{
							func_253(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_255(iParam1, fParam2);
	}
	return bVar5;
}

void func_134(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_135(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_256(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_255(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_136(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -2.46932E+34f))
		{
			if (func_257(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_258(iParam1, 0);
				func_243(iParam1, uParam2, func_129(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_137(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_13((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_14(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 1))
					{
						HUD::_DISABLE_HUD_CONTEXT(-1.766261E-24f);
					}
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_138(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_124(&(iParam1->f_18));
			return false;
		}
		else if (func_249(&(iParam1->f_18)))
		{
			func_259(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_249(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_33) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_33))
		{
			return false;
		}
	}
	return func_260(&(iParam1->f_18), fParam2);
	return true;
}

void func_139(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_250(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_140(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_141(bool bParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 2f;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1f;
	Var22.f_4 = -1f;
	Var22.f_9 = 2;
	func_243(bParam0, uParam1, 1);
	func_137(uParam1, 0, 1, 1, 0);
	MISC::COPY_SCRIPT_STRUCT(bParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_142()
{
	if (func_166() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_143(var uParam0, int iParam1, bool bParam2)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_182, "bUpdatedPlayer"))
	{
		DECORATOR::DECOR_SET_BOOL(uParam0->f_182, "bUpdatedPlayer", bParam2);
	}
	iParam1->f_30 = bParam2;
}

void func_144(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_261(iParam0, 0, 0);
	if (func_262(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_263(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_264(iParam0, 1);
			}
			else
			{
				func_265(iParam0, 1);
			}
		}
		else
		{
			func_266(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_267())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_145(int iParam0, int iParam1)
{
	if (func_166() != -1)
	{
		return false;
	}
	if (!func_65(iParam0))
	{
		return false;
	}
	return (Global_9899[iParam0 /*2*/] && iParam1) != 0;
}

bool func_146(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

void func_147(int iParam0, int iParam1)
{
	if (func_166() != -1)
	{
		return;
	}
	if (!func_65(iParam0))
	{
		return;
	}
	Global_9899[iParam0 /*2*/] = (Global_9899[iParam0 /*2*/] - (Global_9899[iParam0 /*2*/] && iParam1));
}

void func_148(int iParam0)
{
	int iVar0;

	if (!func_65(iParam0))
	{
		return;
	}
	iVar0 = func_27(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1893799[iParam0 /*3*/].f_2 = 0;
}

int func_149(int iParam0, bool bParam1)
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	if (!func_145(iParam0, 2))
	{
		return 0;
	}
	if (func_67(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_22(iParam0)))
	{
		return 1;
	}
	if (func_145(iParam0, 1) && !bParam1)
	{
		func_182(iParam0, 128);
		return 1;
	}
	func_147(iParam0, 129);
	func_148(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_22(iParam0));
	func_165(iParam0, 0);
	return 1;
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_151(int iParam0)
{
	return func_73(iParam0, 2);
}

bool func_152(bool bParam0, int iParam1)
{
	if (!func_268(bParam0, 0))
	{
		return false;
	}
	if (func_153(bParam0) || func_154(bParam0, 2.791187f))
	{
		return func_269(func_155(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

bool func_153(bool bParam0)
{
	if (func_154(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_154(bool bParam0, int iParam1)
{
	if (!func_268(bParam0, 0))
	{
		return func_271(func_270(bParam0), iParam1);
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

bool func_155(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_268(bParam0, 0))
	{
		return func_272(func_270(bParam0), bParam1);
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

int func_156(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_273(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_157(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_268(bParam0, 0))
	{
		return false;
	}
	*uParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1);
	if (*uParam3 == 0)
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
	while (iVar0 < *uParam3)
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
		func_274(bParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

bool func_158(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

bool func_160(int iParam0)
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

int func_161(int iParam0)
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

void func_162(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -8.569155E-24f, 0, true);
	}
	else
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam0, -8.569155E-24f, 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_163(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, 1.977859E+07f);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_164(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 1f);
	}
}

void func_165(int iParam0, int iParam1)
{
	if (!func_65(iParam0))
	{
		return;
	}
	Global_1893799[iParam0 /*3*/].f_1 = iParam1;
}

int func_166()
{
	return Global_1572887.f_14;
}

bool func_167(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	if (!func_145(iParam0, 2))
	{
		return false;
	}
	return true;
}

void func_168(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_73(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_169(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_170(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

void func_171(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_172(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_173(bool bParam0, bool bParam1, bool bParam2)
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

bool func_174(var uParam0)
{
	return Global_1958672.f_1279[func_110(uParam0->f_1) /*7*/].f_5;
}

void func_175(var uParam0)
{
	if ((uParam0->f_34 || uParam0->f_35) || func_38(Global_33, uParam0->f_44, 1, 0))
	{
		return;
	}
	switch (uParam0->f_23)
	{
		case 0:
			func_144(2.586055E-31f, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-9.019435E+35f, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-9.852015E+27f, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-5.939323E+19f, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 1:
			func_144(-6.886823E-35f, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-4.393338E+10f, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-2.214573E-16f, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-6.969142E+30f, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 2:
			func_144(1.638146E-30f, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-1.892688E+36f, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-7.540436E+12f, 1, 0f, 0, 0, 0, 0, 0);
			func_144(4.826715E+30f, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 3:
			break;
		case 4:
			func_144(1.216085E+11f, 1, 0f, 0, 0, 0, 0, 0);
			func_144(1.117698E+24f, 1, 0f, 0, 0, 0, 0, 0);
			break;
	}
	uParam0->f_36 = 1;
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_177(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_178(var uParam0, var uParam1)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		fVar0 = func_41(Global_33, uParam0->f_182, 1, 1);
	}
	else
	{
		fVar0 = 1125515264; /* Float: 150f */
	}
	if (fVar0 < 1106247680)
	{
		if ((uParam1->f_2 == 6 || uParam1->f_2 == 5) || uParam1->f_2 == 0)
		{
			func_176(&(uParam1->f_2), 1);
			return false;
		}
	}
	else if (fVar0 > 1109393408)
	{
		if (uParam1->f_2 != 5 && uParam1->f_2 != 6)
		{
			func_176(&(uParam1->f_2), 5);
			return true;
		}
	}
	return false;
}

void func_179(var uParam0, var uParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	switch (uParam1->f_2)
	{
		case 0:
			break;
		case 1:
			if (AUDIO::LOAD_STREAM(func_50(uParam1->f_25), func_51(uParam1->f_23)))
			{
				func_176(&(uParam1->f_2), 2);
			}
			break;
		case 2:
			AUDIO::PLAY_STREAM_FROM_POSITION(func_275(uParam0->f_1), AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_50(uParam1->f_25), func_51(uParam1->f_23)));
			func_176(&(uParam1->f_2), 3);
			break;
		case 3:
			if (!AUDIO::IS_STREAM_PLAYING(AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_50(uParam1->f_25), func_51(uParam1->f_23))))
			{
				func_176(&(uParam1->f_2), 4);
			}
			break;
		case 4:
			uParam1->f_25++;
			if (uParam1->f_25 >= 10)
			{
				uParam1->f_25 = 0;
			}
			func_176(&(uParam1->f_2), 1);
			break;
		case 5:
			if (func_52(func_50(uParam1->f_25), func_51(uParam1->f_23)))
			{
				AUDIO::STOP_STREAM(AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_50(uParam1->f_25), func_51(uParam1->f_23)));
				func_176(&(uParam1->f_2), 6);
			}
			break;
		case 6:
			break;
	}
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_181(int iParam0, bool bParam1)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	if ((func_145(iParam0, 1) && !func_53(iParam0)) && func_146(iParam0))
	{
		return false;
	}
	if (!func_145(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_70(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_182(int iParam0, int iParam1)
{
	if (func_166() != -1)
	{
		return;
	}
	if (!func_65(iParam0))
	{
		return;
	}
	Global_9899[iParam0 /*2*/] = (Global_9899[iParam0 /*2*/] || iParam1);
}

void func_183(int iParam0)
{
	if (!func_65(iParam0))
	{
		return;
	}
	Global_1893799[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_184(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_186(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_187(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_276(16))
	{
		return Global_1940186.f_51 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_277(16);
					Global_1940186.f_51 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1940186.f_51 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_188(int iParam0)
{
	int iVar0;

	iVar0 = func_278(Global_33, 0, iParam0, 0);
	if (func_279(iVar0))
	{
		if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iVar0))
		{
			WEAPON::MAKE_PED_DROP_WEAPON(Global_33, true, iParam0, true, false);
		}
		else if (func_280(iVar0))
		{
			if (func_279(func_278(Global_33, 0, 7, 0)) || func_279(func_278(Global_33, 0, 9, 0)))
			{
				if (func_279(func_278(Global_33, 0, 8, 0)))
				{
					func_281(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 8, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 7, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) && iVar0 != -1.197024E-12f)
		{
			if (func_279(func_278(Global_33, 0, 7, 0)) || func_279(func_278(Global_33, 0, 9, 0)))
			{
				if (func_279(func_278(Global_33, 0, 10, 0)))
				{
					func_281(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 10, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 9, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (iParam0 == 0)
			{
				if (!func_279(func_278(Global_33, 0, 2, 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 2, false, false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 3, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 3, false, false);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, iParam0, false, false);
	}
}

bool func_189(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_190(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_282(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_283(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_284(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

void func_191(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_282(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_38.f_118[iVar1]), iVar2);
	Global_1939583 = 0;
}

void func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_282(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_38.f_118[iVar1]), iVar2);
	Global_1939583 = 0;
}

void func_193(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8.125758E-08f;
		case 1:
			return -4.00189E+36f;
		case 2:
			return -2.387793E+31f;
		case 3:
			return 3.919688E+34f;
		case 4:
			return -9.832032E+14f;
		default:
			break;
	}
	return 0;
}

char[] func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@roddf@ig@roddf_s3@ig2_boxofficegreet";
		case 1:
			return "script@rcm@roddf@ig@roddf_s3@ig3_boxofficeleave";
		case 2:
			return "script@rcm@roddf@ig@roddf_s3@ig4_boxofficecollect";
		case 3:
			return "script@shows@magic_lantern@ig1_ticket_collector@action";
		default:
			break;
	}
	return "[THEATER_TT_GET_ANIM_SCENE_NAME] - FAIL -- 0";
}

bool func_196()
{
	return false;
}

char* func_197(int iParam0)
{
	return "pl_Conv_TicketTeller_Arthur";
}

bool func_198(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return true;
	}
	if (!uParam0->f_1 && !ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam3)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		uParam0->f_1 = 1;
	}
	return false;
}

char* func_199()
{
	return "pl_Convo_LetterPickup";
}

char* func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Enter_45L";
		case 1:
			return "pl_Enter_45R";
		case 2:
			return "pl_Enter_F_NoWalk";
		case 3:
			return "pl_Enter_F_Walk";
		default:
			break;
	}
	return "[THEATER_TT_GET_ODDF_COLLECT_PLAYLIST] -- FAIL -- 1";
}

void func_201(var uParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar12;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar12 = iVar0;
		Var1 = { func_285(iVar12) };
		uParam0->f_51[iVar12] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1.f_10, Var1, Var1.f_3, Var1.f_6, Var1.f_9);
		iVar0++;
	}
}

void func_202(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182) || ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_182, 0);
	if (!func_196())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_33, 0);
		func_286(uParam1, "b_playerArthur", 1, "IG2");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_33, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

void func_203(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182) || ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_182, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_45[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "P_CS_LETTER03X", iParam2->f_45[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_45[1]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", iParam2->f_45[1], 0);
	}
	if (!func_196())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_33, 0);
		func_286(uParam1, "b_playerArthur", 1, "IG3");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_33, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

int func_204(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, bool bParam13)
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
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_73(iVar0, 2))
		{
			if (iParam2 == Global_1951897[iVar0 /*23*/].f_10 && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
			{
				return iVar0;
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
		func_74(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, fParam10, fParam11, 1f, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_205(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182) || ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		return;
	}
	if (!func_196())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_33, 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_33, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_45[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_cs_letter03x", iParam2->f_45[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_45[1]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", iParam2->f_45[1], 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

int func_206(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_268(bParam0, 0))
	{
		return 0;
	}
	if (!func_287(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_288(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_289(bParam0, bParam2);
	iVar2 = 0;
	if (func_290(bParam0) == -42.1084f)
	{
		if (!func_154(bParam0, 7.396633E-08f) && !func_154(bParam0, -6.685221E-33f))
		{
			bVar3 = true;
		}
	}
	if (func_291(bParam0, 8388608) && !func_60(27))
	{
		func_292(27);
	}
	func_293(bParam0);
	if (!bVar3)
	{
		if (func_154(bParam0, -7.272718E-19f))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_295(func_294(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_166() == -1)
				{
					func_296(bVar1);
				}
				if (func_297(0) && func_298(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_299(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_300(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_290(bParam0) == -3.265313E+23f)
		{
			if (!func_301(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_290(bParam0) == 6.919076E-28f && func_302(bParam0))
		{
			if (!func_303(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_154(bParam0, -1.355837E+35f))
		{
			func_305(func_304(-182.2023f), iVar0);
		}
		else if (bParam0 == 8.064365E+36f)
		{
			func_305(func_306(-1.250509E+13f, 6.875483E+36f), iVar0);
		}
		else if (func_154(bParam0, -3.187887E+34f) && !func_154(bParam0, 3.708451E-17f))
		{
			if (bParam0 != 4.568779E-32f)
			{
				func_307(536, 0);
			}
			if (func_154(bParam0, -2.826186E-34f) || func_154(bParam0, -5.200334E-11f))
			{
			}
		}
		else if (func_154(bParam0, -8.87647E+33f))
		{
			if (func_154(bParam0, -157.5682f))
			{
			}
		}
		else if (func_154(bParam0, -1.641295E-14f) && func_154(bParam0, 888.6404f))
		{
			func_307(519, 0);
		}
		else if (func_154(bParam0, 888.6404f) && func_154(bParam0, -1.086842E+20f))
		{
		}
		else if (func_154(bParam0, 4.619806E-19f))
		{
		}
		else if (func_154(bParam0, 9.243318E-18f))
		{
			if (func_308())
			{
				func_309(7.177414E+09f, 0, 1f, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_154(bParam0, 1.063826E-10f) && func_154(bParam0, 7.561756E-05f))
		{
			func_310(bParam0);
		}
		else if (func_154(bParam0, -1.56509E-23f))
		{
			func_311(bParam0);
		}
		else if (func_154(bParam0, -2.873199E-24f))
		{
			func_312(bParam0);
		}
		else if (func_154(bParam0, -0.08388482f) && func_154(bParam0, 7.561756E-05f))
		{
			func_313(bParam0);
		}
		else if (bParam0 == -2.680077E+18f)
		{
			Global_1940072.f_21 = 0;
		}
		else if (func_154(bParam0, 7.339242E+27f))
		{
			func_314();
		}
		else if (func_154(bParam0, -6.685221E-33f))
		{
		}
		else if (func_154(bParam0, 3.708451E-17f))
		{
		}
		else if (func_154(bParam0, -0.08388482f) && func_154(bParam0, -8.498268E-23f))
		{
		}
		else if (func_154(bParam0, -2.826186E-34f) || func_154(bParam0, -5.200334E-11f))
		{
		}
		else if (func_154(bParam0, -7.721469E-31f))
		{
			return 0;
		}
		else if (func_154(bParam0, 37699.67f))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_238(3.397524E-31f, 1))
					{
						func_206(3.397524E-31f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_238(6.760231E-15f, 1))
					{
						func_206(6.760231E-15f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_238(-13818.36f, 1))
					{
						func_206(-13818.36f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_238(4.642866E-20f, 1))
					{
						func_206(4.642866E-20f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_238(-21.88862f, 1))
					{
						func_206(-21.88862f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_238(5.120068E-22f, 1))
					{
						func_206(5.120068E-22f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_154(bParam0, -5.092244E+08f) && func_291(bParam0, 4))
		{
		}
		else if (func_154(bParam0, 9.811189E+11f))
		{
			func_315(bParam0, &iVar2);
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
				func_317(272, func_316(-1.263708E+38f, 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_317(270, func_316(1.344431E-31f, 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_317(271, func_316(-7.101952E+23f, 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_318(685, 1.579975E+31f, 1, 1);
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
					func_318(685, 42.3843f, 1, 1);
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
					func_318(685, 2.097458E+12f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_318(685, -6.137742E-06f, 1, 1);
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
					func_318(686, NaNf, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_318(686, -7.923627E-17f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_307(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_307(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_60(1))
				{
					func_307(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_307(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_166() == -1)
				{
					bParam0 = -7.729678E-14f;
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_307(534, 0);
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
		func_319(&bVar5);
		if (!func_300(bVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_297(0))
		{
			return 1;
		}
		if (func_290(bParam0) == -42.1084f)
		{
			func_320(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_297(0) && !func_321())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_206(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -4207915f, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_322(iVar2, 0);
		}
	}
	Var30 = { func_323(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_324(bParam0);
	if (fParam6 > 0f)
	{
		if (func_154(bParam0, -5.092244E+08f))
		{
			func_325(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 3787186f;
		func_326(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

void func_207(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6)
{
	if (func_166() == 0)
	{
		if (((func_327(iParam0, sParam4, bParam6) == -1 && !bParam6) && func_297(0)) && !func_321())
		{
			func_328(iParam0, sParam4, iParam5, 0);
		}
	}
	else
	{
		if (!bParam1)
		{
			func_328(iParam0, sParam4, iParam5, 0);
		}
		func_329(iParam0, bParam1, fParam2, iParam3);
	}
}

char* func_208(bool bParam0)
{
	if (bParam0)
	{
		return "JOHN_PLAYER";
	}
	return "ARTHUR";
}

bool func_209(int iParam0, char* sParam1, float fParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = fParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_330(iParam0, &Var0);
}

void func_210(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_211(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

float func_212(var uParam0)
{
	if (!func_249(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_331(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_332() - uParam0->f_1);
}

char* func_213(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "MAGIC_LANTERN_THE_BEAR";
		case 22:
		case 32:
			return "MAGIC_LANTERN_JOSIAH_BLACKWATER";
		case 23:
		case 33:
			return "MAGIC_LANTERN_WONDERS_OF_THE_AGE";
		case 24:
		case 34:
			return "MAGIC_LANTERN_SAVIORS_SAVAGES";
		case 25:
		case 35:
			return "MAGIC_LANTERN_GHOSTLY_SERENADE";
		case 26:
		case 36:
			return "MOVIE_DIRECT_CURRENT_DAMNATION";
		case 27:
		case 37:
			return "MOVIE_FARMERS_DAUGHTER";
		case 28:
		case 38:
			return "MOVIE_MODERN_MEDICINE";
		case 29:
		case 39:
			return "MOVIE_BEAUMONT_THE_BURLY";
		case 30:
		case 40:
			return "MOVIE_SKETCHING_FOR_SWEETHEART";
		default:
			break;
	}
	return "FAIL";
}

char* func_214(int iParam0)
{
	switch (iParam0)
	{
		case 33:
			return "JK_TICKET_TAKER";
		case 519:
			return "FH_TOWNDEALER";
		case 277:
			return "JS_TOWNDEALER";
		case 278:
			return "FH_TOWNDEALER";
		default:
			break;
	}
	return "JK_TICKET_TAKER";
}

bool func_215(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if ((WEAPON::_IS_WEAPON_LASSO(Global_1940186.f_38) || 1284.666f == Global_1940186.f_38) && Global_1940186.f_21)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1940186.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940186.f_34, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_41(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_333(iVar0, 0)))
		{
			if (func_334(iParam0, 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

int func_216(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	return func_335(iParam0, fParam1, fParam2, fParam3, bParam4);
}

int func_217(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_336(uParam2, 1, iVar0);
	}
	if (!Global_1940186.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_13 = fParam5;
		}
		else
		{
			uParam2->f_13 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_2 & 128 != 0)
		{
			if (func_337(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_338(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1940186.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_339(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_338(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_340(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_338(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_341(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_338(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1940186.f_20 && func_81(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_338(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_342(uParam2, 1f))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_343(Global_33, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_338(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_344(Global_33, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_338(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940186.f_23) < 300)
			{
				if (func_345(Global_33, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_338(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_345(Global_33, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_338(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1940186.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_346(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_338(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940186.f_19 || uParam2->f_13 < 1101004800)
			{
				if (func_347(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_338(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1940186.f_24 || Global_1940186.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_348(uParam2, 4000))
				{
					if ((func_349(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_350(uParam2, iParam0)) && func_351(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_338(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_349(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_350(uParam2, iParam0)) && func_351(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_338(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (Global_1940186.f_34 == 0)
			{
				if (Global_1940186.f_35 != 0)
				{
					if (func_352(iParam0, Global_1940186.f_35))
					{
						func_353();
						*uParam3 = 2;
						func_338(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_13 < 1092616192)
			{
				if (func_354(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_355() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_353();
						*uParam3 = 2;
						func_338(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_356())
				{
					if (func_352(iParam0, Global_1940186.f_36))
					{
						func_353();
						*uParam3 = 2;
						func_338(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_357(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_338(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (func_358(uParam2, iParam0))
		{
			*uParam3 = 1048576;
			func_338(iParam0, uParam2, *uParam3);
			return 1;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_359(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_338(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_360(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_338(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_361(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_338(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_13 < 1094713344)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_362(uParam2, 4000))
				{
					if (func_363(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_338(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_364(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_338(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_365(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_338(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_218(int iParam0, int iParam1)
{
	iParam0->f_5 = iParam0->f_4;
	iParam0->f_4 = iParam1;
}

void func_219(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_220(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_AggroCower";
		case 2:
			return "PL_AggroRun";
		case 3:
			return "PL_CowerBase";
		case 1:
			return "PL_CowerGoAway";
		case 4:
			return "PL_BuyLt";
		case 5:
			return "PL_BuyRt";
		case 6:
			return "PL_Greet1";
		case 7:
			return "PL_Greet2";
		case 8:
			return "PL_HelpYou";
		case 15:
			return "PL_NoShow1";
		case 16:
			return "PL_NoShow2";
		case 9:
			return "PL_OpenCurtain";
		case 11:
			return "PL_ShowNegLt";
		case 12:
			return "PL_ShowNegRt";
		case 13:
			return "PL_ShowPosLt";
		case 14:
			return "PL_ShowPosRt";
		case 10:
			return "Pl_Base";
		default:
			break;
	}
	return "[THEATER_TT_GET_TICKET_COLLECTOR_PLAYLIST] -- FAIL -- 77";
}

void func_222(var uParam0)
{
	if (func_119(uParam0))
	{
		STREAMING::REQUEST_MODEL(func_194(4), false);
	}
	else if (uParam0->f_23 == 0)
	{
		STREAMING::REQUEST_MODEL(func_194(3), false);
	}
	else
	{
		STREAMING::REQUEST_MODEL(func_194(2), false);
	}
}

void func_223(var uParam0, var uParam1, int iParam2)
{
	struct<7> Var0;

	switch (iParam2)
	{
		case 0:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				Var0 = { func_285(2) };
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Var0, Var0.f_3, Var0.f_6, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				Var0 = { func_285(3) };
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Var0, Var0.f_3, Var0.f_6, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 1:
		case 2:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.265f, -1363.339f, 48.15632f, 0f, 0f, 40.164f, 2.969626f, 2.725822f, 3.152676f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.704f, -1362.969f, 48.15632f, 0f, 0f, 40.164f, 4.125022f, 8.24628f, 3.152676f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 4:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.2858f, -1362.648f, 44.1069f, 0f, 0f, 0f, 2.572522f, 2.070467f, 2.851869f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-787.9954f, -1362.648f, 44.1069f, 0f, 0f, 0f, 2.967766f, 7.108891f, 2.851869f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 3:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-353.9453f, 707.1058f, 117.0155f, 0f, 0f, -29.98282f, 3.680929f, 4.116389f, 2.594225f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-353.0224f, 707.7128f, 117.0762f, 0f, 0f, 0f, 3f, 3f, 1.726511f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
	}
}

bool func_224(var uParam0)
{
	if (func_119(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_194(4)))
		{
			return true;
		}
	}
	else if (uParam0->f_23 == 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(func_194(3)))
		{
			return true;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(func_194(2)))
	{
		return true;
	}
	return false;
}

bool func_225(int iParam0, vector3 vParam1, int iParam4)
{
	if (func_119(iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_45[4]))
		{
			iParam0->f_45[4] = OBJECT::CREATE_OBJECT(func_194(4), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (iParam4 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_45[3]))
		{
			iParam0->f_45[3] = OBJECT::CREATE_OBJECT(func_194(3), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_45[2]))
	{
		iParam0->f_45[2] = OBJECT::CREATE_OBJECT(func_194(2), vParam1, true, true, false, false, true);
		return false;
	}
	return true;
}

void func_226(var uParam0, int iParam1)
{
	if (func_119(uParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_10[3 /*3*/], "COINS", uParam0->f_45[4], 0);
	}
	else if (iParam1 == 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_10[3 /*3*/], "COINS", uParam0->f_45[3], 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_10[3 /*3*/], "COINS", uParam0->f_45[2], 0);
	}
}

Vector3 func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1159652049, -996126515, 1111547707;
		case 1:
			return 1160244437, -995474678, 1111284777;
		case 2:
			return 1160244437, -995474678, 1111284777;
		case 4:
			return -1002082543, -995470242, 1110133228;
		case 3:
			return -1011771498, 1144015085, 1122492240;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_228(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 1111296836;
		case 1:
			return 0f, 0f, 1124197138;
		case 2:
			return 0f, 0f, 1124197138;
		case 4:
			return 0f, 0f, -1028343988;
		case 3:
			return 0f, 0f, -1040466838;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_229(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	bool bVar0;

	bVar0 = func_211(1);
	switch (iParam1->f_6)
	{
		case 0:
			if (!func_249(&(iParam1->f_59)))
			{
				func_124(&(iParam1->f_59));
			}
			if ((((!func_121(func_110(uParam0->f_1)) && !func_55(iParam1->f_24, 2)) && func_38(Global_33, iParam1->f_51[3], 1, 0)) && !Global_1958672.f_1323) && !bParam2)
			{
				func_218(iParam1, 6);
				func_124(&(iParam1->f_59));
				func_219(&(iParam1->f_3), 4);
				func_84(&(iParam1->f_24), 2);
			}
			if (((((((!func_55(iParam1->f_24, 128) && !Global_1958672.f_1323) && !bVar0) && func_55(iParam1->f_24, 2)) && func_38(Global_33, iParam1->f_51[3], 1, 0)) && !bParam2) && func_212(&(iParam1->f_59)) > 1097859072) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				func_124(&(iParam1->f_59));
				func_84(&(iParam1->f_24), 128);
				iParam1->f_27++;
				func_218(iParam1, 8);
				func_219(&(iParam1->f_3), 4);
			}
			if ((((((func_55(iParam1->f_24, 128) && !Global_1958672.f_1323) && !bVar0) && func_212(&(iParam1->f_59)) > (1097859072 * IntToFloat(iParam1->f_27))) && iParam1->f_26 <= 3) && func_38(Global_33, iParam1->f_51[3], 1, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				func_209(uParam0->f_182, func_366(func_110(uParam0->f_1)), 1.818904E-28f, Global_33, 1, func_214(uParam0->f_1), 0, 1);
				iParam1->f_26++;
				iParam1->f_27++;
				func_124(&(iParam1->f_59));
			}
			if (func_55(iParam1->f_24, 4) && !Global_1958672.f_1323)
			{
				func_218(iParam1, func_367(func_110(uParam0->f_1)));
				func_56(&(iParam1->f_24), 4);
				func_84(&(iParam1->f_24), 8);
				func_220(&(iParam1->f_6), 1);
				func_124(&(iParam1->f_59));
				func_84(&(iParam1->f_24), 2);
				func_84(&(iParam1->f_24), 128);
				func_219(&(iParam1->f_3), 4);
			}
			if (!func_111(func_110(uParam0->f_1)))
			{
				func_220(&(iParam1->f_6), 3);
			}
			break;
		case 1:
			if (!func_55(iParam1->f_24, 2048) && func_38(Global_33, Global_1958672.f_7[Global_38.f_4656[func_110(uParam0->f_1)] /*31*/].f_4, 1, 0))
			{
				func_84(&(iParam1->f_24), 2048);
			}
			if (!func_55(iParam1->f_24, 1024))
			{
				switch (func_110(uParam0->f_1))
				{
					case 3:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam1->f_10[3 /*3*/], func_221(func_367(func_110(uParam0->f_1)))) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[3 /*3*/]) > 1056964608)
						{
							func_209(uParam0->f_182, func_368(func_110(uParam0->f_1)), 1.818904E-28f, Global_33, 1, func_214(uParam0->f_1), 0, 1);
							func_84(&(iParam1->f_24), 1024);
						}
						break;
					case 0:
					case 1:
					case 2:
					case 4:
						if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[3 /*3*/]) > 1053609165)
						{
							func_209(uParam0->f_182, func_368(func_110(uParam0->f_1)), 1.818904E-28f, Global_33, 1, func_214(uParam0->f_1), 0, 1);
							func_84(&(iParam1->f_24), 1024);
						}
						break;
				}
			}
			if (!func_55(iParam1->f_24, 16) && func_110(uParam0->f_1) == 3)
			{
				if ((func_55(iParam1->f_24, 8) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam1->f_10[3 /*3*/], func_221(5))) && !bParam2)
				{
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, iParam1->f_10[3 /*3*/]))
					{
						func_191(0.01683277f);
						func_84(&(iParam1->f_24), 16);
					}
				}
			}
			if (!func_55(iParam1->f_24, 512) && func_55(iParam1->f_24, 2048))
			{
				if (((!Global_1958672.f_1324 && func_38(Global_33, iParam1->f_51[3], 1, 0)) && func_236(&(iParam1->f_59)) > 1103626240) && !bVar0)
				{
					func_84(&(iParam1->f_24), 512);
					func_218(iParam1, 12);
					func_219(&(iParam1->f_3), 4);
				}
			}
			if (!func_55(iParam1->f_24, 256) && func_55(iParam1->f_24, 2048))
			{
				if (((Global_1958672.f_1324 && func_38(Global_33, iParam1->f_51[3], 1, 0)) && func_236(&(iParam1->f_59)) > 1103626240) && !bVar0)
				{
					func_84(&(iParam1->f_24), 256);
					func_218(iParam1, 14);
					func_219(&(iParam1->f_3), 4);
				}
			}
			if (!Global_1958672.f_1323)
			{
				func_124(&(iParam1->f_59));
				func_220(&(iParam1->f_6), 2);
			}
			if (func_111(func_110(uParam0->f_1)) && !Global_1958672.f_1323)
			{
				func_369(iParam1);
				func_218(iParam1, 10);
				func_219(&(iParam1->f_3), 4);
				func_124(&(iParam1->f_59));
				func_220(&(iParam1->f_6), 0);
			}
			break;
		case 2:
			if ((((!func_55(iParam1->f_24, 64) && func_38(Global_33, iParam1->f_51[3], 1, 0)) && !Global_1958672.f_1323) && func_236(&(iParam1->f_59)) > 1106247680) && !func_111(func_110(uParam0->f_1)))
			{
				func_218(iParam1, 15);
				func_219(&(iParam1->f_3), 4);
				func_84(&(iParam1->f_24), 64);
			}
			if ((((func_55(iParam1->f_24, 64) && iParam1->f_28 < 3) && func_212(&(iParam1->f_59)) > (1097859072 * IntToFloat(iParam1->f_29))) && func_38(Global_33, iParam1->f_51[3], 1, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				func_209(uParam0->f_182, func_366(func_110(uParam0->f_1)), 1.818904E-28f, Global_33, 1, func_214(uParam0->f_1), 0, 1);
				iParam1->f_28++;
				iParam1->f_29++;
				func_124(&(iParam1->f_59));
			}
			if (func_111(func_110(uParam0->f_1)))
			{
				func_369(iParam1);
				func_218(iParam1, 10);
				func_219(&(iParam1->f_3), 4);
				func_124(&(iParam1->f_59));
				func_220(&(iParam1->f_6), 0);
			}
			break;
		case 3:
			if (((!func_55(iParam1->f_24, 64) && func_38(Global_33, iParam1->f_51[3], 1, 0)) && !Global_1958672.f_1323) && !func_111(func_110(uParam0->f_1)))
			{
				func_218(iParam1, 15);
				func_219(&(iParam1->f_3), 4);
				func_84(&(iParam1->f_24), 64);
			}
			if (((func_55(iParam1->f_24, 64) && iParam1->f_28 < 3) && func_212(&(iParam1->f_59)) > (1097859072 * IntToFloat(iParam1->f_29))) && func_38(Global_33, iParam1->f_51[3], 1, 0))
			{
				func_209(uParam0->f_182, func_366(func_110(uParam0->f_1)), 1.818904E-28f, Global_33, 1, func_214(uParam0->f_1), 0, 1);
				iParam1->f_28++;
				iParam1->f_29++;
				func_124(&(iParam1->f_59));
			}
			if (func_111(func_110(uParam0->f_1)))
			{
				func_369(iParam1);
				func_218(iParam1, 10);
				func_219(&(iParam1->f_3), 4);
				func_124(&(iParam1->f_59));
				func_220(&(iParam1->f_6), 0);
			}
			break;
	}
}

bool func_230(var uParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam0, sParam1))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1))
	{
		return false;
	}
	return true;
}

void func_231(var uParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1, true);
}

char* func_232(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "GENERIC_FRIGHTENED_HIGH";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "LAW_THREAT";
				default:
					break;
			}
			break;
		case 4:
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
				default:
					break;
			}
			break;
		case 6:
		case 7:
			if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
				iVar1 = ENTITY::GET_ENTITY_TYPE(iVar0);
				if (iVar1 == 1)
				{
					return "WELCOME_GET_THAT_OUT_OF_HERE";
				}
			}
			if (func_370(&uVar2))
			{
				return "WELCOME_MASK";
			}
			switch (iParam1)
			{
				case 0:
					return "WELCOME";
				case 1:
					return "WELCOME_MALE";
				case 2:
					return "WELCOME_FEMALE";
				default:
					break;
			}
			break;
		case 8:
			if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
				iVar1 = ENTITY::GET_ENTITY_TYPE(iVar0);
				if (iVar1 == 1)
				{
					return "WELCOME_GET_THAT_OUT_OF_HERE";
				}
			}
			if (func_370(&uVar2))
			{
				return "WELCOME_MASK";
			}
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_PURCHASE";
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "WELCOME_NO_SHOW";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_SHOW";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
				default:
					break;
			}
			break;
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "FAREWELL_DURING_SHOW";
				default:
					break;
			}
			break;
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return "FAREWELL_AFTER_SHOW";
				case 1:
					return "FAREWELL_AFTER_SHOW_MALE";
				case 2:
					return "FAREWELL_AFTER_SHOW_FEMALE";
				default:
					break;
			}
			break;
	}
	return "WELCOME";
}

void func_233(int iParam0)
{
	switch (iParam0->f_23)
	{
		case 4:
			if (iParam0->f_42)
			{
				iParam0->f_42 = 0;
				func_371(7.996503E+34f, 1, 0, -5.149929E+33f);
			}
			break;
		case 1:
			if (iParam0->f_41)
			{
				iParam0->f_41 = 0;
				func_371(2335299f, 1, 0, -5.149929E+33f);
			}
			break;
		case 2:
			if (iParam0->f_42)
			{
				iParam0->f_42 = 0;
				func_371(7.996503E+34f, 1, 0, -5.149929E+33f);
			}
			break;
		case 0:
			if (iParam0->f_40)
			{
				iParam0->f_40 = 0;
				func_371(-0.09842652f, 1, 0, -5.149929E+33f);
			}
			break;
		case 3:
			if (iParam0->f_41)
			{
				iParam0->f_41 = 0;
				func_371(2335299f, 1, 0, -5.149929E+33f);
			}
			break;
	}
}

void func_234(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_166() == 0)
	{
		iVar0 = func_142();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_372(iParam0, sParam1, -5.149929E+33f, bParam4);
	}
	else
	{
		func_373(iParam0);
		if (bParam3)
		{
			func_374(iParam0, sParam1, iParam2);
		}
	}
}

void func_235(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	var uVar6[1];
	struct<10> Var8;

	uVar6[0] = uParam0->f_182;
	iVar0 = func_376(&uVar2, &uVar6, 3, Global_34, 1112014848 /* Float: 50f */, 0, 0, 0, func_375(uParam0->f_188), 1, 1, -1f, 0, 1);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar2[iVar1]) && !ENTITY::IS_ENTITY_DEAD(uVar2[iVar1])) && !LAW::_0x40851BCC33ACD9AB(uVar2[iVar1]))
		{
			Var8 = Global_33;
			Var8.f_3 = { Global_34 };
			Var8.f_6 = func_377();
			Var8.f_9 = 1;
			Var8.f_2 = -7.906033E-27f;
			Var8.f_1 = uVar2[iVar1];
			Var8.f_8 = 1;
			Var8.f_7 = 1000;
			LAW::_0x018F30D762E62DF8(uVar2[iVar1], &Var8);
			func_378(uVar2[iVar1], Global_34, 2, 1, 1);
			TASK::TASK_FLEE_PED(uVar2[iVar1], Global_33, 3, 0, -1f, -1, 0);
		}
		iVar1++;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, true);
}

float func_236(var uParam0)
{
	if (!func_249(uParam0))
	{
		return 0f;
	}
	if (func_331(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_332() - uParam0->f_1);
}

void func_237(var uParam0, int iParam1)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
	}
	iParam1->f_10[3 /*3*/] = -1;
	iParam1->f_10[3 /*3*/].f_1 = 0;
	iParam1->f_5 = -1;
	iParam1->f_4 = -1;
	func_88(uParam0, 0);
	func_369(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[2]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_45[2]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
	}
	iParam1->f_10[0 /*3*/] = -1;
	iParam1->f_10[0 /*3*/].f_1 = 0;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
	}
	iParam1->f_10[1 /*3*/] = -1;
	iParam1->f_10[1 /*3*/].f_1 = 0;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[2 /*3*/]);
	}
	iParam1->f_10[2 /*3*/] = -1;
	iParam1->f_10[2 /*3*/].f_1 = 0;
}

bool func_238(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_268(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_290(bParam0);
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
			if (!func_379(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_380(bParam0))
			{
				return true;
			}
			break;
	}
	return func_381(bParam0, 0, 0, 0) >= iParam1;
}

void func_239(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_332() - fParam1);
	func_382(uParam0, 1);
	func_383(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_240(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_384((bVar1 && !bVar0), Global_33, 0)))
		{
			return true;
		}
	}
	return false;
}

bool func_241(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_242(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_256(uParam0[iVar0 /*17*/]))
		{
			func_75(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_243(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_14(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_385(iParam0, 0);
		}
	}
}

int func_244(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_386(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_13((uParam2[iVar0 /*17*/])->f_6))
		{
			func_75(uParam2[iVar0 /*17*/], 11);
			return Global_1951897[(uParam2[iVar0 /*17*/])->f_6 /*23*/].f_3;
		}
	}
	return 0;
}

int func_245(var uParam0)
{
	return 0;
}

int func_246(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_247(int* iParam0, int* iParam1)
{
	if (!func_129(iParam0, 23))
	{
		if (iParam1->f_7 == 1.121045E-15f)
		{
			func_75(iParam1, 19);
			func_258(iParam0, 23);
			func_387(iParam1, 2);
		}
	}
}

void func_248(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_386(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_249(var uParam0)
{
	return func_388(*uParam0, 1);
}

void func_250(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_256(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_386(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_251(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_389(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_390(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_78(iParam2->f_6, 0, 1, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_78(iParam2->f_6, 1, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_391(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_252(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_392(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_393(iParam1, 1))
	{
		func_394(iParam1, 1);
		return true;
	}
	return false;
}

void func_253(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_395(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_254(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_255(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 21.56436f, true);
		PAD::DISABLE_CONTROL_ACTION(0, 0.0002983071f, true);
		PAD::DISABLE_CONTROL_ACTION(0, 5.822005E-15f, true);
		PED::SET_PED_RESET_FLAG(Global_33, 203, true);
	}
}

bool func_256(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_258(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_259(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_260(var uParam0, float fParam1)
{
	if (func_396(uParam0, fParam1))
	{
		func_259(uParam0);
		return 1;
	}
	return 0;
}

int func_261(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(iParam0, true);
	}
	return iParam0;
}

bool func_262(int iParam0)
{
	if (func_397(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_263(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_262(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_264(int iParam0, bool bParam1)
{
	if (func_262(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_265(int iParam0, bool bParam1)
{
	if (func_262(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_266(int iParam0, bool bParam1)
{
	if (func_262(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_267()
{
	return true;
}

bool func_268(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_269(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_398(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_399(bParam0, iParam1);
	}
	return true;
}

bool func_270(bool bParam0)
{
	return bParam0;
}

int func_271(bool bParam0, int iParam1)
{
	if (!func_400(bParam0, 2))
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

bool func_272(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_400(bParam0, 2))
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

bool func_273(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_398(bParam0))
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
		func_401(bParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

void func_274(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_402((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

Vector3 func_275(int iParam0)
{
	switch (iParam0)
	{
		case 277:
			return 1159669934, -995980847, 1111893937;
		case 278:
			return 1160290056, -995550234, 1111862364;
		case 33:
			return -1011889880, 1143938548, 1122805290;
		case 519:
			return -1002276561, -995470715, 1110962534;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_276(int iParam0)
{
	return (Global_19 && iParam0) != 0;
}

void func_277(int iParam0)
{
	Global_19 = (Global_19 || iParam0);
}

int func_278(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_279(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

bool func_280(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

void func_281(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, iParam0, 0, false))
	{
		return;
	}
	if (Global_26688)
	{
		return;
	}
	WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, iParam0);
}

int func_282(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_283(int iParam0)
{
	int iVar0;

	iVar0 = func_403(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_284(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

struct<11> func_285(int iParam0)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1159634468, -996160957, 1111547694 };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 4f, 4f, 5f };
			Var0.f_9 = "TICKET_TAKER_VAN_FRONT_ENTRANCE";
			Var0.f_10 = 4.795139E-15f;
			break;
		case 1:
			Var0 = { 1159644896, -996140071, 1111495265 };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 2f, 2f, 4f };
			Var0.f_9 = "TICKET_TAKER_VAN_TICKET_FENCE";
			Var0.f_10 = 4.795139E-15f;
			break;
		case 2:
			Var0 = { 1159645061, -996139859, 1111884159 };
			Var0.f_3 = { 0f, 0f, -1022910299 };
			Var0.f_6 = { 1075467034, 1076737287, 1078038951 };
			Var0.f_9 = "THEATER_TT_INTERACT_SMALL_ZONE";
			Var0.f_10 = -9.406495E-20f;
			break;
		case 3:
			Var0 = { 1159638174, -996149164, 1111940600 };
			Var0.f_3 = { 0f, 0f, 1094616097 };
			Var0.f_6 = { 1080033280 /* Float: 3.5f */, 1080033280 /* Float: 3.5f */, 1070743694 };
			Var0.f_9 = "TICKET_TT_INTERACT_LARGE_ZONE";
			Var0.f_10 = 4.795139E-15f;
			break;
	}
	return Var0;
}

void func_286(var uParam0, char* sParam1, bool bParam2, char* sParam3)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(*uParam0, sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
	}
}

bool func_287(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_166() == -1)
	{
		if (func_404(bParam0) && func_405(bParam0))
		{
			func_406(bParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_288(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_407(bParam0, iParam1);
	Var0 = { func_408(bParam0, 0, 1) };
	iVar5 = func_409(bParam0, &Var0, 0, 0);
	iVar6 = func_410(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_154(bParam0, -1.690907E-35f))
		{
			func_307(674, 1);
		}
		else if (func_166() == -1)
		{
			func_307(673, 0);
		}
	}
	if (func_411(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_289(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_412())
	{
		return;
	}
	switch (func_413(bParam0, -60352.49f))
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

int func_290(bool bParam0)
{
	vector3 vVar0;

	if (!func_268(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_291(bool bParam0, int iParam1)
{
	if (!func_268(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

void func_292(int iParam0)
{
	if (!func_158(iParam0))
	{
		return;
	}
	func_414(iParam0);
	func_415(iParam0);
}

void func_293(bool bParam0)
{
	if (func_154(bParam0, -1.640085E-16f))
	{
		func_416(-2.462866E+08f, 0, 255, 0, 0);
	}
	else if (func_154(bParam0, -4.561297E+28f))
	{
		func_416(-4249.272f, 0, 255, 0, 0);
	}
	else if (func_154(bParam0, 2.133228E-14f))
	{
		func_416(-5.046843E+11f, 0, 255, 0, 0);
	}
	else if (func_154(bParam0, 5.050617E+08f))
	{
		func_416(2.629104E-17f, 0, 255, 0, 0);
	}
}

bool func_294(bool bParam0, bool bParam1)
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
	if (func_268(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_417(bVar0) || func_418(bVar0))
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

bool func_295(bool bParam0, bool bParam1)
{
	if (!func_268(bParam0, 0))
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

void func_296(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 != -1)
	{
		return;
	}
	if (!func_279(bParam0))
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

bool func_297(bool bParam0)
{
	if (func_166() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_419(bParam0));
}

bool func_298(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_408(bParam0, 0, 1) };
		if (func_420(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_421(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_422(bParam0, Var0, Var0.f_4, 0) };
				func_423(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_297(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return false;
		}
		func_299(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_424(bParam0, iParam1);
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

bool func_299(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_302(bParam0))
	{
		return false;
	}
	if (!func_297(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	return true;
}

int func_300(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_268(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_425(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_426(bParam0, iParam1, iParam2);
	}
	Var1 = { func_408(bParam0, 0, 1) };
	Var6 = { func_422(bParam0, Var1, Var1.f_4, 0) };
	return func_427(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_301(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_295(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_166() == -1)
		{
			func_296(bVar0);
			if (iParam1 == 3787186f)
			{
				func_428(bVar0);
			}
		}
		if (!func_411(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_406(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_429(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_298(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == -1.197024E-12f || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_298(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_298(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == 3.3488E-21f && !func_196())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_430(bVar0))
				{
					func_298(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_298(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_431(Global_33, 2, 0, 1);
				if ((((func_279(bVar7) && !Global_26688) && bVar7 != bVar0) && !func_238(-0.0002099206f, 1)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, bVar7);
				}
				if (func_279(bVar7) && func_238(-0.0002099206f, 1))
				{
					if (!func_298(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_298(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_298(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_307(515, 1);
	}
	return true;
}

bool func_302(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_303(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_302(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_279(bVar4))
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
		func_317(func_432(bParam0), func_316(bParam0, 0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_297(0))
	{
		if (func_299(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_300(bParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_304(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_305(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_306(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_307(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_433(iParam0, &iVar0, &iVar1);
	if (!func_434(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_435(iVar0, iVar1);
}

bool func_308()
{
	return false;
}

int func_309(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_166() == 0)
	{
		func_322(iParam0, 0);
		return 0;
	}
	iVar0 = func_436(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_328(iVar0, sParam4, iParam5, 0);
	}
	func_329(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_310(bool bParam0)
{
}

void func_311(bool bParam0)
{
}

void func_312(bool bParam0)
{
}

void func_313(bool bParam0)
{
}

void func_314()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-9.596595E-08f) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-9.596595E-08f, -3.936833E-09f, 1);
	}
}

void func_315(bool bParam0, int iParam1)
{
	var uVar0;

	func_437(bParam0, iParam1, &uVar0);
}

bool func_316(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_268(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_438(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

void func_317(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_433(iParam0, &iVar0, &iVar1);
	if (!func_434(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_439(iParam0, 1024))
	{
		return;
	}
	func_435(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_318(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_433(iParam0, &iVar0, &iVar1);
	if (!func_434(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_439(iParam0, 1024))
	{
		return;
	}
	func_435(iVar0, iVar1);
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

void func_319(bool bParam0)
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

void func_320(bool bParam0)
{
	if (func_166() != -1)
	{
		return;
	}
}

bool func_321()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_322(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_440(&Var4, 2.95884E+10f);
	return func_441(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_323(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_268(bParam0, 0))
	{
		return Var0;
	}
	if (func_154(bParam0, -8.087424E+27f))
	{
		if (func_166() == -1)
		{
			if (func_154(bParam0, -3.480943E+19f))
			{
				return func_442(4.052717E-32f);
			}
			else
			{
				return func_442(9918.3f);
			}
		}
	}
	else if (func_154(bParam0, -3.480943E+19f))
	{
		return func_442(-18395.16f);
	}
	if (func_154(bParam0, 4.091206E+36f))
	{
		return func_442(3.674458E+22f);
	}
	return Var2;
}

void func_324(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_325(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_443(Global_1902818.f_37);
	func_445(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_444(bParam0), 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_326(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_268(bParam0, 0))
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
	if (!func_446() || bParam6)
	{
		func_447(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_448(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_448(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_291(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_290(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_154(bParam0, -5.215192E-33f)) && !func_154(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_402(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_449(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
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
	if (func_154(bParam0, 6.834376E-22f))
	{
		sVar17 = func_450(bParam0);
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
	if (func_154(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_451(bParam0))
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
	bVar18 = func_316(bParam0, 0);
	if ((func_452(iVar12) && func_154(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_453(bParam0);
	}
	else if (func_290(bParam0) == -42.1084f)
	{
		bVar19 = func_454(bParam0);
		if (func_268(bVar19, 0))
		{
			bVar18 = func_316(bVar19, 0);
		}
	}
	if (func_455(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_456(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_457(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_458(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_459(bParam0, &cVar22))
		{
			sVar21 = func_461(func_460(cVar22), 4.808429E-35f);
		}
	}
	func_445(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

int func_327(int iParam0, char* sParam1, bool bParam2)
{
	if (func_321())
	{
		bParam2 = true;
	}
	if (!bParam2 && func_297(0))
	{
		func_300(3.996812E+36f, iParam0, -6.866997E+26f);
		return -1;
	}
	return -1;
}

void func_328(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_462(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_445(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
}

void func_329(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_463() || func_464())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 1036831949));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_445(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -3.959475E-32f, 0, 4.808429E-35f, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_445(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 6.028273E-12f);
		func_305(func_442(6.480143E+20f), iVar1);
	}
}

bool func_330(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_331(var uParam0)
{
	return func_388(*uParam0, 2);
}

float func_332()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

var func_333(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_334(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_465(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

int func_335(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	int iVar14;

	if (!Global_1940186.f_21 && !bParam4)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, -1.684686E+34f))
	{
		fVar0 = func_41(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 1056964608)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
				{
					if (iVar1 == iParam0)
					{
						return 0;
					}
				}
				iVar2 = func_333(PLAYER::PLAYER_PED_ID(), 0);
				if (func_280(iVar2) && !PAD::IS_CONTROL_PRESSED(0, 3.101329E-34f))
				{
					return 0;
				}
				vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				if (ENTITY::IS_ENTITY_A_PED(iParam0))
				{
					iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
					if (PED::IS_PED_IN_ANY_VEHICLE(iVar14, false) && PED::WAS_PED_SKELETON_UPDATED(iVar14))
					{
						vVar3 = { PED::GET_PED_BONE_COORDS(iVar14, 21030, 0f, 0f, 0f) };
					}
				}
				vVar6 = { func_466(0) };
				vVar9 = { func_467(vVar3 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar12 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar9.x, vVar9.y, vVar6.x, vVar6.y));
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar9.y, vVar9.z, vVar6.y, vVar6.z));
				if (fVar12 < fParam1)
				{
					if (fVar13 < fParam2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_336(var uParam0, bool bParam1, int iParam2)
{
	func_468(iParam2);
	if (Global_1572887.f_14 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			return;
		}
		if (Global_1940186.f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1295619.f_6)
		{
			return;
		}
		if (Global_1295619.f_7)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_11 = 0;
	}
	uParam0->f_6 = iParam2;
	if (Global_1572887.f_14 == -1)
	{
		uParam0->f_14 = Global_1940186.f_38;
	}
	else
	{
		uParam0->f_14 = func_469(0);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!(*uParam0 && 9.403955E-38f) != 0)
				{
					if (uParam0->f_14 == -7.135455E-16f)
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_33))
						{
							func_185(uParam0, 9.403955E-38f);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_470(1, 1))
						{
							func_185(uParam0, 9.403955E-38f);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_33) && (!func_470(1, 1) || *uParam0 & 8192 != 0))
				{
					func_184(uParam0, 9.403955E-38f);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_2 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			if (func_471(uParam0))
			{
				uParam0->f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else if (uParam0->f_16 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uParam0->f_16, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8++;
		if (uParam0->f_8 > 4)
		{
			uParam0->f_8 = 0;
		}
	}
	func_472(uParam0);
}

bool func_337(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1940186.f_27)
			{
				return false;
			}
			if (iVar2 == Global_1940186.f_26)
			{
				return false;
			}
			if (!func_473(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_474(iParam0, iVar2) <= func_475(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_338(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_476(iParam2, 1, 1, 1, 0))
	{
		func_185(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_477(uParam1, 1);
	func_478();
}

bool func_339(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1118437376; /* Float: 85f */
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_215(iParam0, !(*uParam1 && 2.524355E-29f) != 0, !(*uParam1 && 1.084202E-19f) != 0, !(*uParam1 && 2f) != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				iVar0 = 1119748096; /* Float: 95f */
			}
			else if (uParam1->f_13 < 1097859072)
			{
				iVar0 = 1119092736; /* Float: 90f */
			}
			fVar1 = func_479(uParam1);
			if (func_480(uParam1, iParam0, iVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_481(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_477(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 1080033280)
					{
						if (iVar2 > func_482(uParam1))
						{
							func_477(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_340(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	iVar0 = 1118437376; /* Float: 85f */
	if (func_483(iParam1, !(*uParam2 && 2.524355E-29f) != 0, !(*uParam2 && 1.084202E-19f) != 0, !(*uParam2 && 2f) != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			iVar0 = 1119748096; /* Float: 95f */
		}
		else if (uParam2->f_13 < 1097859072)
		{
			iVar0 = 1119092736; /* Float: 90f */
		}
		fVar1 = func_479(uParam2);
		if (func_480(uParam2, iParam0, iVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_481(uParam2)
				{
					func_477(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_341(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1940186.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940186.f_34, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_473(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_481(uParam1)
		{
			fVar3 = func_479(uParam1);
			if (uParam1->f_13 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, fVar3, -1f, -1f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_342(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_355();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1148846080))
	{
		return true;
	}
	return false;
}

bool func_343(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_484(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) || Global_1940186.f_40 == -3.273909E-18f)
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && WEAPON::_0xEA522F991E120D45(Global_1940186.f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) || Global_1940186.f_40 == -3.273909E-18f) || (WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= fVar2)
		{
			if (func_351(uParam2, iParam1))
			{
				func_477(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_344(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_485(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && !WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar0))
		{
			if (func_351(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1f)
				{
					func_477(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_345(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_486(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_477(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(0.0001224924f, vVar0, uParam2->f_30))
				{
					func_477(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar4, false, false);
					if (func_487(iParam1, vVar0, vVar4))
					{
						func_477(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_477(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar7, false, false);
					if (func_487(iParam1, vVar0, vVar7))
					{
						func_477(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-2.836409E+16f, vVar0, 15f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-3.67506E+12f, vVar0, 15f))
	{
		return true;
	}
	return false;
}

bool func_346(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940186.f_33)
	{
		if (!func_473(iParam0, uParam1, Global_1940186.f_28[iVar0]) || iParam0 == Global_1940186.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_488(Global_1940186.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false), vVar9);
			if (func_489(Global_1940186.f_28[iVar0]))
			{
				if (fVar1 < 1108082688)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1940186.f_28[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1940186.f_28[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_490(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_491(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_492(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_347(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_348(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_355();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_349(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true, true) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true, true))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), true, true))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_493(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_494(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_350(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_6))
		{
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_351(var uParam0, int iParam1)
{
	if (func_495(uParam0))
	{
		return true;
	}
	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_33) != 0)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(Global_33, iParam1))
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_352(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_41(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_353()
{
}

bool func_354(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_496(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_355();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_21(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_355();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_355()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_356()
{
	if (Global_1940186.f_36 == 0)
	{
		return false;
	}
	if (Global_1940186.f_36 == Global_1940186.f_34)
	{
		return false;
	}
	if (Global_1940186.f_37 <= 0)
	{
		return false;
	}
	if ((func_355() - Global_1940186.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_357(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_475(uParam0);
	if (uParam0->f_13 > func_497(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_498(iParam1);
	iVar1 = func_499(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::CAN_PED_SEE_PED_CACHED(iParam1, Global_33, false) == 1) || PED::CAN_PED_SEE_PED_CACHED(iParam1, uParam0->f_15, false) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_358(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	if (!Global_1940186.f_50)
	{
		return false;
	}
	if (!uParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_500(iVar0, iParam1, 0.707f) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_501(vVar1, vVar4);
	fVar8 = MISC::ABSF((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > uParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_359(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_502(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_360(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((*uParam1 && 1.504633E-36f) != 0)
	{
		return true;
	}
	if (Global_1940186.f_18)
	{
		return true;
	}
	if ((*uParam1 && 9.403955E-38f) != 0)
	{
		if (func_503(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17)) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_33, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_33);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true)) || Global_1940186.f_24)
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!func_504(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			if (func_505(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_33)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
				{
					if (!func_506(uParam1, iParam0))
					{
						if (func_21(iVar4, Global_34, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
		case joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (!PED::IS_PED_A_PLAYER(iVar4) || !PED::IS_PED_A_PLAYER(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar4, -1f, -1f, -1f, -1f) || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar5, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar5, 17))
				{
					return true;
				}
			}
			EVENT::_0x1A5C5D350068A673(iParam0, 0);
			return false;
	}
	return false;
}

bool func_361(int iParam0, var uParam1)
{
	if (!func_507(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_33, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_362(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_355();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_363(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_364(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_355();
	}
	else if (func_355() - uParam1->f_5) > func_508(uParam1)
	{
		return func_509(iParam0, uParam1, 0, -1f);
	}
	return 0;
}

bool func_365(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_33 == iVar1 || Global_1940186.f_34 == iVar1)
	{
		return true;
	}
	return false;
}

char* func_366(int iParam0)
{
	int iVar0;

	if (func_111(iParam0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
		if (iVar0 < 5)
		{
			return "HANGING_AROUND_NO_PURCHASE";
		}
	}
	else
	{
		return "HANGING_AROUND_NO_SHOW";
	}
	return "TAKE_YOUR_TIME";
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 5;
		case 4:
			return 4;
		case 3:
			return 5;
	}
	return 5;
}

char* func_368(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "DIRECTIONS_VALENTINE_MAGIC_LANTERN";
		case 4:
			return "DIRECTIONS_BLACKWATER_IMPERIAL";
		case 0:
			return "DIRECTIONS_SAINT_DENIS_RALEUR";
		case 1:
		case 2:
			return "DIRECTIONS_SAINT_DENIS_FONTANA";
		default:
			break;
	}
	return "DIRECTIONS_SAINT_DENIS_RALEUR";
}

void func_369(int iParam0)
{
	iParam0->f_26 = 0;
	iParam0->f_27 = 1;
	iParam0->f_28 = 0;
	iParam0->f_29 = 1;
	func_56(&(iParam0->f_24), 8);
	func_56(&(iParam0->f_24), 2);
	func_56(&(iParam0->f_24), 32);
	func_56(&(iParam0->f_24), 128);
	func_56(&(iParam0->f_24), 256);
	func_56(&(iParam0->f_24), 512);
	func_56(&(iParam0->f_24), 16);
	func_56(&(iParam0->f_24), 1024);
	func_56(&(iParam0->f_24), 64);
	func_56(&(iParam0->f_24), 2048);
	func_56(&(iParam0->f_24), 16384);
	func_56(&(iParam0->f_24), 8192);
}

bool func_370(var uParam0)
{
	if (-1.527139E-27f == func_510(5.002459E-36f))
	{
		if (func_511(uParam0))
		{
			return true;
		}
	}
	else if (func_512(-9.847085E+19f, uParam0) || func_154(func_513(2.057189E+24f), -1.186825E-08f))
	{
		if (func_511(uParam0))
		{
			return true;
		}
	}
	return false;
}

int func_371(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_268(bParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -5.149929E+33f)
	{
		if (func_514(bParam0))
		{
			iParam3 = 9.275179E-19f;
		}
	}
	bVar0 = iParam3 == 9.275179E-19f;
	bVar1 = iParam3 == 1.994827E+33f;
	bVar2 = iParam3 == -1.202057E-11f;
	bVar3 = func_515(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_326(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_238(bParam0, 1))
	{
		return 0;
	}
	Var5 = { func_323(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_381(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var5, iParam1);
		}
		else if ((func_381(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_371(bParam0, func_381(bParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_290(bParam0) == -3.265313E+23f)
	{
		if (!func_516(bParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_517(bParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_408(bParam0, 0, 0) };
		if (func_297(0) && Var7.f_4 == 4.978612f)
		{
			func_518(1, 0, 0);
		}
	}
	if (bParam0 == -2.680077E+18f)
	{
		Global_1940072.f_21 = 0;
	}
	if (!func_297(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 6.236711E+08f)
	{
		func_326(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_372(int iParam0, char* sParam1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<17> Var6;
	struct<17> Var23;

	iVar0 = -1;
	Var1 = { func_408(3.996812E+36f, 1, 0) };
	Var6 = { func_519(3.996812E+36f, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = fParam2;
	iVar0 = func_520(7.184882E+22f, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var23.f_7 = -5.149929E+33f;
		Var23.f_16 = -1;
		StringCopy(&(Var23.f_12), sParam1, 32);
		func_521(iVar0, Var23);
	}
	return iVar0;
}

void func_373(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_142() < iParam0)
	{
		iParam0 = func_142();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_442(6.480143E+20f) };
	STATS::_STAT_ID_DECREMENT_INT(&Var0, iParam0);
}

void func_374(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_445(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 1, 4.465091E-08f, 0, 0, 0, 1);
}

bool func_375(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return NaNf;
		case 81:
			return 2.259831E-35f;
		case 40:
			return joaat("BLA_UPPERCLASS");
		default:
			break;
	}
	return -1;
}

int func_376(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_522(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_523(iVar0);
	return iVar1;
}

var func_377()
{
	return Global_1939089.f_26;
}

void func_378(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6)
{
	if (!func_524(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (bParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam0);
		return;
	}
	if (func_31(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0, vParam1, iParam6);
			break;
		case 5:
			PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(iParam0, vParam1, iParam6, false);
			break;
		case 6:
			PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(iParam0, vParam1, iParam6, false);
			break;
		case 4:
			PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(iParam0, vParam1);
			break;
		case 2:
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iParam0, vParam1, iParam6);
			break;
		case 1:
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam0);
			break;
		case 7:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iParam0);
			break;
		default:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iParam0);
			break;
	}
}

bool func_379(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_268(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_515(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_525("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_526(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_279(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_527(iVar1);
				return true;
			}
			iVar3++;
		}
		func_527(iVar1);
	}
	return false;
}

bool func_380(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_268(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_402(bParam0);
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
	iVar1 = func_528(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_529(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_530(bParam0);
	iVar2 = func_529(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_381(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_268(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_290(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_515(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_531(bParam0, 0);
	}
	if (func_425(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_419(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_532(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_419(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

void func_382(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_383(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_384(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_385(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_259(&(iParam0->f_18));
}

void func_386(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_13(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_14(&(iParam1->f_6), 0, 1);
	}
	if (!func_13(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_256(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_29(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 2f, 0, 8.750548E+22f, iParam1->f_10, 0);
			if (func_13(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_391(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_533(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_534(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_76(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
					HUD::_ENABLE_HUD_CONTEXT(-1.766261E-24f);
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_533(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_78(iParam1->f_6, 0, 1, 1);
				}
				else
				{
					func_78(iParam1->f_6, 1, 1, 1);
				}
			}
		}
	}
}

void func_387(int* iParam0, int iParam1)
{
	if (!func_189(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_75(iParam0, 14);
		}
	}
}

bool func_388(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_389(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_390(int iParam0, bool bParam1)
{
	if (bParam1 && !func_13(iParam0))
	{
		return false;
	}
	return !func_73(iParam0, 4);
}

void func_391(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_13(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	func_533(iParam0, 18, 0, 1);
	func_533(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar0 /*23*/].f_3, iParam4, iParam2);
}

bool func_392(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_13(iParam0))
	{
		return false;
	}
	iVar0 = func_57(iParam0);
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

bool func_393(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_13(iParam0))
	{
		return false;
	}
	iVar0 = func_57(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_394(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1951897[iVar0 /*23*/].f_3);
}

void func_395(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_189(iParam0, 13))
	{
		func_75(iParam0, 0);
	}
	else
	{
		func_172(iParam0, 0);
	}
	if (func_13(iParam0->f_6))
	{
		if (bParam2)
		{
			func_14(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_396(var uParam0, float fParam1)
{
	if (!func_249(uParam0))
	{
		return false;
	}
	if (func_212(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_397(int iParam0)
{
	return iParam0 != 0;
}

bool func_398(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_399(bool bParam0, int iParam1)
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

bool func_400(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

void func_401(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_402((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_402(bool bParam0)
{
	struct<2> Var0;

	if (!func_268(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_403(int iParam0)
{
	return func_535(iParam0) + 30;
}

bool func_404(bool bParam0)
{
	return func_290(bParam0) == -3.265313E+23f;
}

bool func_405(bool bParam0)
{
	var uVar0;

	if (func_166() != -1)
	{
		return false;
	}
	if (func_291(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_411(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_238(bParam0, 1);
}

void func_406(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_290(bParam0) != -3.265313E+23f)
	{
		return;
	}
	bVar0 = func_295(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_418(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_381(bParam0, 0, 0, 0) == 0))
		{
			if (func_166() == -1)
			{
				func_296(bVar0);
			}
			if (!*bParam3 && !iParam4 == 3787186f)
			{
				func_326(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_407(bool bParam0, int iParam1)
{
	if (func_154(bParam0, 7.644572E-37f))
	{
		func_456(bParam0, -982726.7f, iParam1, 1);
	}
}

struct<5> func_408(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_536(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_290(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_422(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_537(bParam1) };
			if (bParam2 && func_538(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_420(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_420(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_421(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_539(bParam1) };
			switch (func_402(bParam0))
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
			if (func_540(bParam0, -2.580501E-27f))
			{
				Var0 = { func_422(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_540(bParam0, -4.220332E-15f))
			{
				Var0 = { func_422(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_422(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_540(bParam0, -3.171238E-21f))
			{
				Var0 = { func_422(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_541(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_540(bParam0, -3.171238E-21f))
			{
				Var0 = { func_422(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

int func_409(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_268(bParam0, 0))
	{
		if (func_400(func_270(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_290(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_425(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, iParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_419(bParam3), bParam0);
}

int func_410(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_302(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_419(bParam1), bParam0, bParam3);
}

bool func_411(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_542(&bParam0);
	if (!func_268(bParam0, 0) && !func_400(func_270(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_425(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_404(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_537(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_420(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_421(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_538(bParam0, 1))
		{
			if (!func_420(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_421(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_409(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_543(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_412()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_544(Global_33, 8.330918E+10f)) && !func_544(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

int func_413(bool bParam0, int iParam1)
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

void func_414(int iParam0)
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

void func_415(int iParam0)
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
			func_545(1);
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
			func_546(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_546(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_546(3);
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
			func_547(1);
			break;
		case 33:
			func_548(1);
			break;
		case 34:
			func_549(1);
			break;
		case 35:
			break;
		case 36:
			func_550(0);
			break;
		case 37:
			func_551(0);
			break;
		case 38:
			func_552(0);
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
			if (func_553() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_554("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_307(677, 0);
			break;
		case 3:
			if (func_553() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_554("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_307(678, 0);
			break;
		case 4:
			if (func_553() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_554("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_307(679, 0);
			break;
		case 5:
			if (func_553() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_554("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_307(680, 0);
			break;
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.628467E+31f, true);
			UNLOCK::UNLOCK_SET_VISIBLE(-4.628467E+31f, true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
		case 47:
			if (func_166() == -1)
			{
				if (!func_238(0.01458261f, 1))
				{
					func_300(0.01458261f, 1, 6.028273E-12f);
				}
			}
			break;
		case 49:
			if (func_166() == -1)
			{
				if (!func_238(0.01458261f, 1))
				{
					func_300(0.01458261f, 1, 6.028273E-12f);
				}
				if (!func_238(7.734759E-34f, 1))
				{
					func_300(7.734759E-34f, 1, 6.028273E-12f);
				}
			}
			break;
		case 48:
			if (func_166() == -1)
			{
				if (!func_238(1.044822E-10f, 1))
				{
					func_300(1.044822E-10f, 1, 6.028273E-12f);
				}
			}
			break;
		case 50:
			if (func_166() == -1)
			{
				if (!func_238(1.044822E-10f, 1))
				{
					func_300(1.044822E-10f, 1, 6.028273E-12f);
				}
				if (!func_238(-1.840652E+20f, 1))
				{
					func_300(-1.840652E+20f, 1, 6.028273E-12f);
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

int func_416(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_555(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_417(bool bParam0)
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

bool func_418(bool bParam0)
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

int func_419(bool bParam0)
{
	if (func_166() == -1)
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

bool func_420(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_543(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_421(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_556(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_422(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_268(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_419(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_423(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_557(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_541(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_297(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_166() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_520(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_521(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_419(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_424(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_558(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

int func_425(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_400(func_270(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_426(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_268(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_425(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_408(bParam0, 0, 0) };
	if (func_411(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_297(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_419(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_427(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_268(bParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_411(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_297(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_419(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_428(bool bParam0)
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
	iVar2 = func_559();
	func_560(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

int func_429(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_280(bParam0))
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

bool func_430(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_431(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_432(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_60(49))
			{
				if (!func_60(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_60(50))
			{
				if (!func_60(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_433(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_434(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_561(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_562(iParam0))
	{
		return false;
	}
	if (func_563(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_439(iParam0, 1)) || func_564(32768))
	{
		if (!func_439(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_565())
	{
		return false;
	}
	return true;
}

void func_435(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_436(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_166() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_238(6.217872E+26f, 1))
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
			if (func_268(bVar25, 0) && func_154(bVar25, -7.721469E-31f))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_437(bool bParam0, int iParam1, var uParam2)
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

int func_438(bool bParam0, bool bParam1)
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

bool func_439(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_440(var uParam0, int iParam1)
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

int func_441(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_566(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_567(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_442(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

char* func_443(int iParam0)
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

float func_444(bool bParam0)
{
	var uVar0;

	if (!func_568(bParam0, &uVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		return -0.1987056f;
	}
	return uVar0;
}

int func_445(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_569(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_446()
{
	return !Global_1913431;
}

void func_447(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_448(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_449(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_450(bool bParam0)
{
	if (func_154(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_154(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_154(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_154(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_154(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_154(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_154(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_154(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_154(bParam0, -1.58908E+26f) || func_154(bParam0, -3.503386E-34f)) || func_154(bParam0, -1.887503E+19f)) || func_154(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_451(bool bParam0)
{
	if (func_154(bParam0, -1.15596E+32f))
	{
		if (((func_570(bParam0, -9.979451E-09f) || func_570(bParam0, 2.758862E+11f)) || func_570(bParam0, 1.868312E+36f)) || func_570(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_154(bParam0, -6.231785E+11f) || func_154(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

bool func_452(int iParam0)
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

int func_453(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_268(bParam0, 0))
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

bool func_454(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_571(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_572(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_573(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_574(bVar14))
			{
				func_575(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_575(iVar11);
	}
	return false;
}

bool func_455(bool bParam0, int iParam1)
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

int func_456(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_268(bParam0, 0) && !func_400(func_270(bParam0), 2))
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

char* func_457(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_458(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_576(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_459(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_268(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_577(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_578(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_579(bParam0), 128);
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

char* func_460(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_461(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_457(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

void func_462(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_580())
	{
		Global_1913431.f_125 = MISC::GET_GAME_TIMER();
		Global_1913431.f_126 = iParam1;
	}
	Global_1913431.f_127 = (Global_1913431.f_127 + iParam0);
}

bool func_463()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-3.159453E+34f);
}

bool func_464()
{
	return DLC::IS_DLC_PRESENT(-1.05615E-37f);
}

bool func_465(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	int iVar2;

	iVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (iVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_466(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_467((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_467(vector3 vParam0)
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

void func_468(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940186.f_32);
	Global_1940186.f_21 = func_581();
	if (Global_1940186.f_21)
	{
		Global_1940186.f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_33))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1940186.f_38;
			}
			Global_1940186.f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_582(&(Global_1940186.f_28), &(Global_1940186.f_33));
			Global_1940186.f_32 = iParam0;
			break;
		case 1:
			Global_1940186.f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1940186.f_24)
			{
				if (bVar1 && WEAPON::_IS_WEAPON_LASSO(Global_1940186.f_38))
				{
					Global_1940186.f_24 = PED::_GET_LASSO_TARGET(Global_33) != 0;
				}
				if (Global_1940186.f_40 == 1284.666f)
				{
					Global_1940186.f_24 = WEAPON::_0x46D42883E873C1D7(Global_33) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1940186.f_40);
			if (bVar3 && WEAPON::_IS_WEAPON_LASSO(Global_1940186.f_40))
			{
				Global_1940186.f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40))
				{
					Global_1940186.f_19 = PED::TIME_SINCE_PED_LAST_SHOT(Global_33) <= 3f;
				}
				else
				{
					Global_1940186.f_19 = PED::TIME_SINCE_PED_LAST_SHOT(Global_33) <= 1f;
				}
				if (Global_1940186.f_19)
				{
					Global_1940186.f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1940186.f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_469(int iParam0)
{
	return Global_1102813.f_3695[iParam0 /*3*/];
}

bool func_470(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_583(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_471(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940186.f_34;
	if (func_166() == -1)
	{
		if (Global_1940186.f_34 == 0)
		{
			iVar0 = func_584(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_34) || !Global_1956862.f_1716[4])
	{
		iVar0 = func_584(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_499(iVar0) == -1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return false;
	}
	uParam0->f_15 = iVar0;
	return true;
}

void func_472(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_585(uParam0);
	}
}

bool func_473(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_499(iParam2);
	}
	else
	{
		iVar1 = func_498(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_499(iParam0);
	}
	else
	{
		iVar0 = func_498(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_241(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_474(int iParam0, int iParam1)
{
	return func_41(iParam0, iParam1, 1, 1);
}

float func_475(var uParam0)
{
	return uParam0->f_29;
}

bool func_476(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_477(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(uParam0, 3.85186E-34f);
	}
	else
	{
		func_184(uParam0, 3.85186E-34f);
	}
}

void func_478()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

float func_479(var uParam0)
{
	return uParam0->f_18;
}

bool func_480(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_241(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_33, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_33, 17))
		{
			return true;
		}
	}
	return false;
}

int func_481(var uParam0)
{
	return uParam0->f_19;
}

int func_482(var uParam0)
{
	return uParam0->f_20;
}

bool func_483(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_333(iVar0, 0)))
		{
			if (func_465(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

float func_484(var uParam0)
{
	return uParam0->f_25;
}

int func_485(var uParam0)
{
	return uParam0->f_23;
}

int func_486(var uParam0)
{
	int iVar0;

	switch (uParam0->f_8)
	{
		case 0:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_7)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if ((*uParam0 && 2.350989E-38f) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_487(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_586(iParam0, vParam4, 1056964608 /* Float: 0.5f */))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_488(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1940186.f_38 == -3.273909E-18f)
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_40))
		{
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1940186.f_40) || WEAPON::IS_WEAPON_BOW(Global_1940186.f_40))
			{
				return 1;
			}
		}
	}
	if (func_587(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_489(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_490(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_588(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_491(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_588(iParam1))
		{
			return false;
		}
	}
	fVar0 = 1092616192; /* Float: 10f */
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_492(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_589(uParam0);
	if (func_588(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1940186.f_28[iParam3], 17))
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_1940186.f_28[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_493(int iParam0, int iParam1)
{
	if (!TASK::_IS_PED_LEADING_HORSE(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_GET_LED_HORSE_FROM_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_494(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_278(iParam0, 1, 0, 0)) && !func_278(iParam0, 1, 0, 0) == 1284.666f)
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_495(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_496(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_21(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_497(var uParam0)
{
	return uParam0->f_26;
}

int func_498(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_499(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_500(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_590(iParam0, vVar0, fParam2);
}

float func_501(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_502(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1940186.f_34 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true, true))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1940186.f_34, true, true))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_493(Global_33, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_41(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_41(iParam0, Global_1940186.f_34, 0, 1) < 1075838976)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1940186.f_34, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_503(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_583(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
				{
					if (!bParam2 || !func_506(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
			{
				if (!bParam2 || !func_506(uParam1, iVar1))
				{
					if (func_21(iVar1, Global_34, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_504(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!EVENT::_0x83D43F0FD5276E4D(iParam0, 0))
	{
		return false;
	}
	return true;
}

bool func_505(var uParam0)
{
	return func_241(*uParam0, 131072);
}

bool func_506(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_507(int iParam0)
{
	return false;
}

int func_508(var uParam0)
{
	return uParam0->f_22;
}

int func_509(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_13;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_33, 90f))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1069547520)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_33))
		{
			return 1;
		}
	}
	return 0;
}

int func_510(int iParam0)
{
	int iVar0;

	iVar0 = func_592(func_591(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1953279.f_1676.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_511(var uParam0)
{
	if (func_512(5.002459E-36f, uParam0))
	{
		return true;
	}
	if (func_512(-9.847085E+19f, uParam0))
	{
		return true;
	}
	return false;
}

bool func_512(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_592(func_591(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1953279.f_1676.f_1[iVar1 /*3*/] != 0 && Global_1953279.f_1676.f_1[iVar1 /*3*/] != Global_1953279.f_83[iVar1 /*12*/])
	{
		bVar0 = Global_1953279.f_1676.f_1[iVar1 /*3*/];
		if (func_402(bVar0) == iParam0 || (iParam0 == 5.002459E-36f && func_154(bVar0, 3.611922E-33f)))
		{
			*uParam1 = bVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

bool func_513(int iParam0)
{
	return Global_1953279.f_1676.f_1[func_592(iParam0, 1) /*3*/];
}

bool func_514(bool bParam0)
{
	return func_290(bParam0) == 4.324946E+36f;
}

bool func_515(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_268(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_290(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_154(bParam0, 9.811189E+11f))
	{
		func_437(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_516(bool bParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_593(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam2)
	{
		func_594(&Var0, func_537(0));
	}
	if (!func_595(&Var0, &iVar18, &iVar19, 0))
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
			if (!func_526(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_423(bParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_527(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_517(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_268(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_425(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_596(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_408(bParam0, bParam4, 0) };
	Var6 = { func_422(bParam0, Var1, Var1.f_4, bParam4) };
	return func_423(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

void func_518(int iParam0, bool bParam1, int iParam2)
{
	Global_1940239.f_5 = iParam0;
	Global_1940239.f_37 = iParam2;
	if (bParam1 || (func_597() && iParam2 == 0))
	{
		func_598(1);
		func_599(1);
	}
}

struct<17> func_519(bool bParam0, struct<4> Param1, float fParam5, int iParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_422(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_425(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_600() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_520(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_601(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_603(func_602(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_604(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_521(int iParam0, struct<17> Param1)
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

int func_522(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_605(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_606(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_523(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_524(int iParam0, int iParam1)
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
	if (func_55(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_55(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_55(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_525(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_419(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_526(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_527(int iParam0)
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

int func_528(bool bParam0)
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

int func_529(var uParam0, int iParam1)
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

int func_530(bool bParam0)
{
	int iVar0;

	iVar0 = func_402(bParam0);
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

int func_531(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_593(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_594(&Var0, func_537(0));
	}
	if (!func_595(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_527(iVar18);
	return iVar19;
}

struct<4> func_532(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_408(bParam0, bParam1, 0) };
	return func_422(bParam0, Var0, Var0.f_4, bParam1);
}

void func_533(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

void func_534(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_535(int iParam0)
{
	return iParam0 * 31;
}

struct<4> func_536(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_419(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_422(2.982335E+09f, func_600(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_422(2.982335E+09f, func_600(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_422(2.982335E+09f, func_600(), -5.45926E-19f, bParam0);
}

struct<4> func_537(bool bParam0)
{
	int iVar0;

	iVar0 = func_419(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_422(8.681942E-06f, func_536(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_422(8.681942E-06f, func_536(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_422(8.681942E-06f, func_536(bParam0), -1.942248E+12f, 0);
}

int func_538(bool bParam0, bool bParam1)
{
	if (func_402(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_607();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_539(bool bParam0)
{
	int iVar0;

	iVar0 = func_419(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_422(3.507197E-29f, func_536(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_422(3.507197E-29f, func_536(bParam0), 12999093, 0);
}

bool func_540(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_402(bParam0);
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
			if (func_608(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_541(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_609(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_542(bool bParam0)
{
	if (!func_268(*bParam0, 0))
	{
		return 0;
	}
	if (!func_610(*bParam0))
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

int func_543(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_268(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_425(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_422(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_419(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_419(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_544(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_545(bool bParam0)
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

void func_546(int iParam0)
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

void func_547(bool bParam0)
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

void func_548(bool bParam0)
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

void func_549(bool bParam0)
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

void func_550(bool bParam0)
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

void func_551(bool bParam0)
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

void func_552(bool bParam0)
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

bool func_553()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_554(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

int func_555(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_611(iParam2, -3.005759E+25f);
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
	func_612(uParam1, bParam0, Var3);
	return 1;
}

bool func_556(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_419(0);
	*iParam1 = { func_422(bParam0, func_537(0), fParam3, 0) };
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

bool func_557(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_558(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_559()
{
	return Global_1902565;
}

void func_560(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_613(*iParam0);
	iVar1 = func_614(*iParam0);
	iVar2 = func_615(*iParam0);
	iVar3 = func_616(*iParam0);
	iVar4 = func_617(*iParam0);
	iVar5 = func_618(*iParam0);
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
	iVar6 = func_619(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_619(iVar1, iVar0);
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
	func_620(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_561(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_562(int iParam0)
{
	if (func_439(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_563(int iParam0)
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

bool func_564(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_565()
{
	if (!func_621())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

void func_566(var uParam0)
{
	func_440(uParam0, 8.505438E-34f);
	if (func_622() == 3.272964E+34f)
	{
		func_440(uParam0, 8.967694E-17f);
	}
	else
	{
		func_440(uParam0, 1.721179E-28f);
	}
}

void func_567(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_623(uParam0))
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

bool func_568(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_569(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

int func_570(bool bParam0, int iParam1)
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

int func_571(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_268(bParam0, 0))
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

struct<10> func_572(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_573(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_574(bool bParam0)
{
	if (!func_268(bParam0, 0))
	{
	}
	if (func_154(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_575(int iParam0)
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

int func_576(bool bParam0, int iParam1)
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

char* func_577(bool bParam0)
{
	bool bVar0;

	if (!func_268(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_316(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

bool func_578(bool bParam0)
{
	if (func_402(bParam0) == -1.955052E+34f || func_402(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_579(bool bParam0)
{
	int iVar0;

	if (!func_268(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_453(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

bool func_580()
{
	return Global_1913431.f_127 == 0;
}

bool func_581()
{
	if (func_624())
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		if (Global_1940186.f_38 == 3.594275E+35f)
		{
			return PAD::IS_CONTROL_PRESSED(0, 3.101329E-34f);
		}
		return PED::GET_PED_RESET_FLAG(Global_33, 311);
	}
	else
	{
		return Global_1956862.f_1716[3];
	}
	return false;
}

void func_582(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_583(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940186.f_26))
		{
			*iParam1 = Global_1940186.f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940186.f_27))
		{
			if (PED::IS_PED_HOGTIED(Global_1940186.f_27) || ENTITY::IS_ENTITY_DEAD(Global_1940186.f_27))
			{
				*iParam2 = Global_1940186.f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940186.f_24 && !PED::IS_PED_INJURED(Global_33))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_584(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, -4.980293E+32f) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_7 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1940186.f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_33);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_33);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_585(var uParam0)
{
	int iVar0;

	if (Global_1940186.f_32 == 0)
	{
		func_184(uParam0, 1.504633E-36f);
		iVar0 = 0;
		while (iVar0 < Global_1940186.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_28[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1940186.f_28[iVar0]))
				{
					func_185(uParam0, 1.504633E-36f);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_586(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_587(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, -3.273909E-18f, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_38))
			{
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1940186.f_38) || Global_1940186.f_38 == -4.550719E+16f)
				{
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, Global_1940186.f_38, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_588(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (((((((((iVar0 == -1.657435E-22f || iVar0 == 2.81552E+22f) || iVar0 == 3.025941E+25f) || iVar0 == 7.594647E-28f) || iVar0 == -6.591612E+25f) || iVar0 == 5.846906E-16f) || iVar0 == -0.7710786f) || iVar0 == 3.572616E-37f) || iVar0 == 1.229294E-26f) || iVar0 == -3.037554E-34f)
	{
		return true;
	}
	if (iVar0 == -3.037554E-34f || iVar0 == 14.24763f)
	{
		iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(iParam0);
		if (iVar0 == 0.0004269964f)
		{
			return true;
		}
		return false;
	}
	return false;
}

float func_589(var uParam0)
{
	return uParam0->f_28;
}

int func_590(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_625(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_626(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_591(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -1.003831E+26f;
	}
	return func_627(iVar0);
}

int func_592(int iParam0, int iParam1)
{
	switch (iParam0)
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

struct<18> func_593(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_594(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_595(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_419(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_596(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_557(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_425(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_297(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_628(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_629(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_520(7.184882E+22f, &Var65, 1);
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
			func_521(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_419(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_597()
{
	if ((Global_1940239.f_11596 != (Global_1940239.f_41.f_203 - 1) || func_631(func_630(0), Global_1940239.f_11588, 0, 1, 1) > 0) || Global_1940239.f_11596 == 15)
	{
		return true;
	}
	func_632(0);
	if (Global_1940239.f_7)
	{
		return true;
	}
	return false;
}

void func_598(int iParam0)
{
	Global_1940239.f_11 = iParam0;
}

void func_599(int iParam0)
{
	Global_1940239.f_10 = iParam0;
}

struct<4> func_600()
{
	struct<4> Var0;

	return Var0;
}

bool func_601(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_633(iParam1->f_8, iParam0, iVar0, 2048) || func_633(iParam1->f_8, iParam0, iVar0, 32768)) || func_633(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_633(iParam1->f_8, iParam0, iVar0, 4) || func_633(iParam1->f_8, iParam0, iVar0, 256)) || func_633(iParam1->f_8, iParam0, iVar0, 65536)) || func_633(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_633(iParam1->f_8, iParam0, iVar0, 1) || func_633(iParam1->f_8, iParam0, iVar0, 8)) || func_633(iParam1->f_8, iParam0, iVar0, 65536)) || func_633(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_633(iParam1->f_8, iParam0, iVar0, 1) || func_633(iParam1->f_8, iParam0, iVar0, 16)) || func_633(iParam1->f_8, iParam0, iVar0, 2)) || func_633(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_633(iParam1->f_8, iParam0, iVar0, 8) || func_633(iParam1->f_8, iParam0, iVar0, 4096)) || func_633(iParam1->f_8, iParam0, iVar0, 256)) || func_633(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_602(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_603(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_634(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_634(iParam1, 2, 0, 0);
	return -1;
}

int func_604(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_634(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_605(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_635(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_606(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_607()
{
	if (func_410(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_608(bool bParam0, int iParam1, int iParam2)
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

int func_609(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_419(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_610(bool bParam0)
{
	return func_154(bParam0, 5.168749E+07f);
}

void func_611(int iParam0, int iParam1)
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

void func_612(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_623(uParam0))
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

int func_613(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_636(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_614(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_615(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_616(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_617(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_618(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_619(int iParam0, int iParam1)
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

void func_620(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_637(iParam0, iParam6);
	func_638(iParam0, iParam5);
	func_639(iParam0, iParam4);
	func_640(iParam0, iParam3);
	func_641(iParam0, iParam2);
	func_642(iParam0, iParam1);
}

bool func_621()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

int func_622()
{
	return Global_1953279.f_1;
}

bool func_623(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_624()
{
	switch (Global_1940186.f_38)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
			return true;
		default:
			break;
	}
	return false;
}

float func_625(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_626(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_627(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953279.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_643(iVar0, 1);
		}
		iVar0++;
	}
	return -1.003831E+26f;
}

bool func_628(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_425(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_644(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_629(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_422(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_630(int iParam0)
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_631(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_381(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_645(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_646(bParam1, bParam4));
	}
	return iVar0;
}

void func_632(int iParam0)
{
	if (!func_268(Global_1940239.f_11588, 0))
	{
		Global_1940239.f_7 = iParam0;
	}
	else if ((((func_413(Global_1940239.f_11588, 512441.5f) != 0 && Global_1940239.f_11587 != 0) && Global_1940239.f_11587 != -2.509875E-36f) && !Global_1915643.f_20638) && !Global_1915643.f_22504.f_1)
	{
		Global_1940239.f_7 = 1;
	}
	else
	{
		Global_1940239.f_7 = 0;
	}
}

int func_633(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_55(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_634(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_647(iParam0, iParam1, iParam2, iParam3);
}

int func_635(int iParam0, bool bParam1)
{
	return func_648(iParam0, Global_1893611.f_2, bParam1);
}

int func_636(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_637(int iParam0, int iParam1)
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

void func_638(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_639(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_614(*iParam0);
	iVar1 = func_613(*iParam0);
	if (iParam1 < 1 || iParam1 > func_619(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_640(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_641(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_642(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_643(int iParam0, int iParam1)
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

bool func_644(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_649(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_600() };
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

int func_645(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_650(bParam1))
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
			return func_651(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
		}
	}
	return 0;
}

int func_646(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_652())
	{
		return func_543(bParam0, func_536(1), -3.233114E-34f, 1, 1, 0);
	}
	return 0;
}

void func_647(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_653(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_648(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_654(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_655(iParam0, uVar0, iVar1, bParam2);
}

bool func_649(var uParam0)
{
	if (!func_656(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

bool func_650(bool bParam0)
{
	if (!func_455(bParam0, 9.300934E+31f))
	{
		return false;
	}
	if (!func_657(bParam0, 1))
	{
		return false;
	}
	return true;
}

int func_651(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_268(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_658(iParam0, bParam1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &Var0, false);
	return iVar4;
}

bool func_652()
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
	if (!func_659(iVar0))
	{
		return false;
	}
	return true;
}

void func_653(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_660(&(uParam0->f_4));
}

bool func_654(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_166() != -1;
	switch (iParam0)
	{
		case 81:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*uParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*uParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*uParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*uParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*uParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*uParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*uParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*uParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*uParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*uParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*uParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*uParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*uParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*uParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 709;
			}
			else
			{
				*uParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*uParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*uParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*uParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*uParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*uParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*uParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*uParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*uParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*uParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*uParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*uParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*uParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*uParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*uParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*uParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*uParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*uParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*uParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*uParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_655(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iParam0);
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_67(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_22(iVar2)))
		{
			if (func_22(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_656(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_657(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_661(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_658(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_662(iParam0) };
	return func_663(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_659(int iParam0)
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

void func_660(var uParam0)
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

int func_661(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_662(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_663(iParam0, 2.982335E+09f, func_600(), -5.45926E-19f) };
	Var0.f_4 = 4.978612f;
	return Var0;
}

struct<4> func_663(int iParam0, bool bParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_268(bParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &Var0);
	return Var0;
}

