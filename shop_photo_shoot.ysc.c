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
	struct<28> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_47 = 0f;
	var uLocal_48 = 4;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	struct<500> Local_58 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -39308912, 1, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1816535547, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0 } ;
	struct<91> Local_561 = { 0, 0, 0, -1, 7, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	struct<11> Local_659[7];
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	fLocal_47 = 1.124895E-14f;
	if (Global_1051832.f_4673)
	{
		func_1(iScriptParam_0);
	}
	func_2();
	while (!func_3(0, 0) && func_4())
	{
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(7, iParam0);
	func_8();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_561, 98, 49);
	func_9(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_561), 98, "m_PHST_HostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_659, 78, 50);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_659[0 /*11*/])), 78, "m_PHST_PlayerData");
	func_11(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

int func_2()
{
	func_12();
	func_13();
	func_14();
	func_15();
	func_16();
	func_17();
	func_18();
	return 1;
}

bool func_3(bool bParam0, bool bParam1)
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

bool func_4()
{
	switch (Local_58.f_59)
	{
		case 0:
			if (func_19())
			{
				Local_58.f_59 = 1;
			}
			break;
		case 1:
			if (!func_20())
			{
				return false;
			}
			if (Global_1051832.f_4673)
			{
				func_21();
			}
			break;
	}
	return true;
}

void func_5()
{
	if ((Local_58.f_497 && func_22() == 6) && GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO() != 2)
	{
		Local_58.f_496 = func_23(2.185187E+31f, 0, 1, 1, 0, 8.497754E-37f);
		Local_58.f_497 = 0;
	}
	if (Global_1051832.f_4673.f_3)
	{
		Global_1051832.f_4673.f_3 = 0;
		if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_24(0))
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
	}
	func_25();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
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
		if (func_26() == 0)
		{
			if (func_27())
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

int func_9(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_10(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11(bool bParam0)
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

int func_12()
{
	if (!func_28(18))
	{
		return 0;
	}
	if (!func_29(18) || func_30(18))
	{
		return 0;
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1915643.f_20346[18], 5.341062f, "SHOP_TYPE/BACKGROUNDS/BACKGROUND(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1915643.f_20346[18], 2.231723E-26f, "SHOP_TYPE/POSES/POSE(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1915643.f_20346[18], 1.197701E-08f, "PROPS");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1915643.f_20346[18], 1.699316E-28f, "PROPS/PROP(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1915643.f_20346[18], 1.144766E+23f, "VARIANTS");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1915643.f_20346[18], -1.461006E+07f, "VARIANTS/VARIANT(%i)");
	func_31(&(Global_1915643.f_20387[18]), 16);
	return 1;
}

void func_13()
{
	Global_1051832.f_4673.f_7 = 0;
	Local_58.f_30 = 0;
	Local_58.f_57 = 0;
	Local_58.f_31 = 0;
	Local_58.f_112 = 0;
	Local_58.f_114 = 0;
	Local_58.f_118 = 0;
	if (Global_1051832.f_4673)
	{
		Local_58.f_75 = "CameraViewfinderStudioPosse";
	}
	else
	{
		Local_58.f_75 = "CameraViewfinderStudio";
	}
	Local_58.f_76 = "CameraViewfinderForceOutro";
	Local_58.f_77 = "CameraTakePictureStudio";
	Local_58.f_80 = 0;
	Local_58.f_78 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	Local_58.f_79 = "facials@gen_male@portrait";
	Local_58.f_67 = 0f;
	Local_19.f_23 = 0;
	switch (Global_1051832.f_92[18 /*75*/].f_18)
	{
		case 12:
			Local_58.f_14 = { -1001732755, -995371152, 1110185948 };
			Local_58.f_17 = 1118605463;
			Local_58.f_22 = { -1001686306, -995365712, 1110236463 };
			Local_58.f_25 = 1134056908;
			Local_58.f_18 = { -1001733880, -995384183, 1110185948 };
			Local_58.f_21 = 1118127614;
			if (Global_1051832.f_4673)
			{
				Local_19.f_26 = 12;
				Local_58 = { -1001767518, -995370762, 1107882751 };
				Local_58.f_3 = { 1059848611, 0f, -1014543581 };
				Local_58.f_9 = 1105530978;
				Local_58.f_26 = { -1001651171, -995371211, 1108066149 };
				Local_58.f_125 = 1.911375E-26f;
				Local_58.f_119 = { -1001651171, -995371211, 1108066149 };
				Local_58.f_122 = { 0f, 0f, 0f };
				Local_58.f_89 = -1.663514E-20f;
				Local_58.f_113 = VOLUME::CREATE_VOLUME_BOX(-813.74f, -1374.56f, 35.02f, 0f, 0f, 0f, 5f, 5f, 3f);
				Local_58.f_10 = { -1001671877, -995371612, 1107617959 };
				Local_58.f_13 = 1133070985;
			}
			else
			{
				Local_19.f_26 = 2;
				Local_58 = { -1001713544, -995372224, 1110544823 };
				Local_58.f_3 = { 1075687981 /* Float: 2.464f */, 0f, 1119447666 };
				Local_58.f_9 = 1108004045; /* Float: 34.7f */
				Local_58.f_26 = { -1001633664, -995368575, 1110578142 };
				Local_58.f_89 = 2.549201f;
				Local_58.f_10 = { -1001671877, -995371612, 1110239399 };
				Local_58.f_13 = 1133070985;
			}
			break;
		case 60:
			Local_58.f_14 = { 1160432331, -997476381, 1111518688 };
			Local_58.f_17 = 1130612654;
			Local_58.f_22 = { 1160439163, -997458016, 1111525609 };
			Local_58.f_25 = 1111467360;
			Local_58.f_18 = { 1160440511, -997475571, 1111518321 };
			Local_58.f_21 = 1133903872; /* Float: 300f */
			if (Global_1051832.f_4673)
			{
				Local_19.f_26 = 11;
				Local_58 = { 1160427274, -997495767, 1109161594 };
				Local_58.f_3 = { 1059848611, 0f, -1021733326 };
				Local_58.f_9 = 1105530978;
				Local_58.f_26 = { 1160440271, -997443720, 1109344990 };
				Local_58.f_89 = -4.651235E-33f;
				Local_58.f_125 = -1.156761E+20f;
				Local_58.f_119 = { 1160440271, -997443720, 1109344990 };
				Local_58.f_122 = { 0f, 0f, 1122631680 /* Float: 117f */ };
				Local_58.f_113 = VOLUME::CREATE_VOLUME_BOX(2734.43f, -1119.7f, 40.13f, 0f, 0f, 0f, 5f, 5f, 3f);
				Local_58.f_10 = { 1160438170, -997453005, 1108904247 };
				Local_58.f_13 = 1102997094; /* Float: 23.8f */
			}
			else
			{
				Local_19.f_26 = 1;
				Local_58 = { 1160434519, -997469160, 1111889281 };
				Local_58.f_3 = { -1074540419, 0f, -1021630887 };
				Local_58.f_9 = 1108004045; /* Float: 34.7f */
				Local_58.f_26 = { 1160441381, -997440520, 1111909204 };
				Local_58.f_89 = 4.447541E+24f;
				Local_58.f_10 = { 1160438170, -997453005, 1111525687 };
				Local_58.f_13 = 1102997094; /* Float: 23.8f */
			}
			break;
	}
	func_32();
	if (Global_1051832.f_4673)
	{
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 0;
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8 = 0;
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 = 0;
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1 = 0;
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3 = -1;
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4 = 0;
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 = 0;
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_2 = 0;
	}
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX("CameraTransitionWipe_L");
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX("CameraTransitionWipe_R");
}

void func_14()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	struct<18> Var17;

	iVar0 = -1;
	Var3.f_9 = -5.45926E-19f;
	Var17 = { func_33(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -4.226342E+23f, 0, 0) };
	if (func_34(&Var17, &iVar0, &iVar1, 0))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_35(&Var3, iVar2, iVar0, iVar1))
			{
				if (Local_58.f_237 >= 34)
				{
					func_36(iVar0);
					return;
				}
				Local_58.f_132[Local_58.f_237] = Var3.f_4;
				Local_58.f_237++;
			}
			iVar2++;
		}
	}
	func_36(iVar0);
}

void func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	struct<18> Var17;

	iVar0 = -1;
	Var3.f_9 = -5.45926E-19f;
	Var17 = { func_33(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 2676.101f, 0, 0) };
	if (func_34(&Var17, &iVar0, &iVar1, 0))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_35(&Var3, iVar2, iVar0, iVar1))
			{
				if (Local_58.f_259 >= 17)
				{
					func_36(iVar0);
					return;
				}
				Local_58.f_241[Local_58.f_259] = Var3.f_4;
				Local_58.f_259++;
			}
			iVar2++;
		}
	}
	func_36(iVar0);
}

int func_16()
{
	struct<4> Var0;
	struct<4> Var5;
	int iVar10;
	var uVar11;

	Var0 = Global_1915643.f_20346[18];
	Var5 = Global_1915643.f_20346[18];
	iVar10 = 0;
	while (iVar10 < Local_58.f_237)
	{
		Var0.f_2 = 5.341062f;
		Var0.f_3 = Local_58.f_132[iVar10];
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var5.f_1), &Var0))
		{
			Var5.f_2 = -2.130137E-12f;
			if (Global_1051832.f_4673)
			{
				Var5.f_3 = 2.914538E-13f;
			}
			else
			{
				Var5.f_3 = -9.865934E+27f;
			}
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar11, &Var5);
			Local_58.f_167[iVar10] = uVar11;
			Var5.f_3 = -3.441745E+34f;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar11, &Var5);
			Local_58.f_202[iVar10] = uVar11;
		}
		else
		{
			Local_58.f_167[iVar10] = 0;
		}
		iVar10++;
	}
	return 1;
}

void func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!Global_1051832.f_4673)
	{
		return;
	}
	iVar0 = 0;
	iVar2 = NaNf;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (iVar1 == NETWORK::PARTICIPANT_ID() || (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && Local_659[iVar0 /*11*/]))
		{
			if (iVar1 != NETWORK::PARTICIPANT_ID())
			{
				if (Local_659[iVar0 /*11*/].f_1 < iVar2)
				{
					iVar2 = Local_659[iVar0 /*11*/].f_1;
					iVar3 = iVar1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 < NaNf)
	{
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5 = Local_659[iVar3 /*11*/].f_5;
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8 = Local_659[iVar3 /*11*/].f_8;
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 = Local_659[iVar3 /*11*/].f_9;
		iVar4 = 0;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_58.f_237)
		{
			if (Local_58.f_167[iVar5] == Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5)
			{
				Local_58.f_129 = iVar5;
				iVar4 = 0;
				while (iVar4 < 6)
				{
					if (func_38(Local_58.f_132[iVar5], func_37(Local_58.f_130)))
					{
						Jump @313; //curOff = 275
					}
					else
					{
						Local_58.f_130++;
						if (Local_58.f_130 >= 6)
						{
							Local_58.f_130 = 0;
						}
					}
					iVar4++;
				}
			}
			else
			{
				iVar5++;
			}
		}
		iVar5 = 0;
		while (iVar5 < Local_58.f_259)
		{
			if (Local_58.f_241[iVar5] == Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8)
			{
				Local_58.f_263 = iVar5;
			}
			else
			{
				iVar5++;
			}
		}
	}
	GRAPHICS::SET_TIMECYCLE_MODIFIER("MP_photo_posse");
}

void func_18()
{
	if (Global_1051832.f_92[18 /*75*/].f_18 == 12)
	{
		ENTITY::REMOVE_MODEL_HIDE(-1001684304, -995374940, 1110688662, 2f, -3638590f, 0);
		ENTITY::REMOVE_MODEL_HIDE(-1001684304, -995374940, 1110688662, 2f, 5.844319E+28f, 0);
		ENTITY::REMOVE_MODEL_HIDE(-1001684304, -995374940, 1110688662, 2f, -5.304592E-09f, 0);
	}
	else if (Global_1051832.f_92[18 /*75*/].f_18 == 60)
	{
		ENTITY::REMOVE_MODEL_HIDE(1160438436, -997460287, 1112046830, 2f, 8.206384E-19f, 0);
		ENTITY::REMOVE_MODEL_HIDE(1160438436, -997460287, 1112046830, 2f, -7.287528E-12f, 0);
		ENTITY::REMOVE_MODEL_HIDE(1160438436, -997460287, 1112046830, 2f, 4.121235E+09f, 0);
	}
}

bool func_19()
{
	if (!AUDIO::PREPARE_SOUNDSET("RDRO_Photo_Shop_Sounds", false))
	{
		return false;
	}
	if (GRAPHICS::_ANIMPOSTFX_HAS_LOADED("CameraTransitionWipe_L") || GRAPHICS::_ANIMPOSTFX_HAS_LOADED("CameraTransitionWipe_R"))
	{
		return false;
	}
	return true;
}

bool func_20()
{
	int iVar0;
	int iVar1;

	func_39();
	func_40();
	func_41();
	if (Global_1051832.f_4673.f_7 != 15 && Global_1051832.f_4673.f_7 != 16)
	{
		if (Global_1051832.f_4673.f_3)
		{
			func_42(15);
		}
		else
		{
			func_43();
		}
	}
	if (Global_1051832.f_4673)
	{
		func_44();
		INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(INTERIOR::GET_INTERIOR_AT_COORDS(Local_58.f_119), Local_58.f_125);
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_12[iVar0]))
			{
				iVar1 = NETWORK::NET_TO_ENT(Local_561.f_12[iVar0]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					INTERIOR::FORCE_ROOM_FOR_ENTITY(iVar1, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_33), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_33));
				}
			}
			iVar0++;
		}
	}
	if ((Global_1051832.f_4673.f_7 != 0 && Global_1051832.f_4673.f_7 != 1) && Global_1051832.f_4673.f_7 != 16)
	{
		func_45();
	}
	switch (Global_1051832.f_4673.f_7)
	{
		case 0:
			CAM::DO_SCREEN_FADE_OUT(500);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			func_46();
			STREAMING::REQUEST_MODEL(Local_58.f_95, false);
			if (!STREAMING::HAS_MODEL_LOADED(Local_58.f_95))
			{
				return true;
			}
			func_42(1);
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			else
			{
				if (Global_1051832.f_4673 && !Local_58.f_502)
				{
					func_47(Global_33, Local_58.f_10, Local_58.f_13, 0, 2f);
					ENTITY::FREEZE_ENTITY_POSITION(Global_33, true);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_33, false, false);
					ENTITY::SET_ENTITY_VISIBLE(Global_33, false);
					Local_58.f_502 = 1;
				}
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
				if (!func_48())
				{
					return true;
				}
				if (!func_49())
				{
					return true;
				}
				if (!func_50())
				{
					return true;
				}
				if (!func_51())
				{
					return true;
				}
				func_52();
				if (Global_1051832.f_4673 && !Local_58.f_240)
				{
				}
				else if (!func_53(1))
				{
				}
				else
				{
					FIRE::_0x754937C28271BC65(Local_58.f_66);
					FIRE::STOP_FIRE_IN_RANGE(Local_58.f_26, 5f);
					func_54();
					func_55();
					func_56();
					func_57(1);
					func_58(Local_58.f_29);
					func_59();
					func_60();
					func_42(4);
					Jump @1159; //curOff = 642
					if (Local_58.f_62 == 1)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_R");
					}
					else
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_L");
					}
					func_61(&(Local_58.f_493), 0);
					func_62();
					func_42(3);
					Jump @1159; //curOff = 691
					if (func_63(&(Local_58.f_493)) < 250)
					{
					}
					else
					{
						CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
						if (!func_53(0))
						{
						}
						else
						{
							if (Local_58.f_62 == 1)
							{
								GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("CameraTransitionWipe_R");
							}
							else
							{
								GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("CameraTransitionWipe_L");
							}
							func_64(&(Local_58.f_493));
							func_65();
							func_42(4);
							Jump @1159; //curOff = 772
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (PED::GET_PED_CONFIG_FLAG(func_66(), 408, true))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_66(), false, true);
								}
								CAM::DO_SCREEN_FADE_IN(500);
							}
							if (!CAM::IS_SCREEN_FADED_IN())
							{
							}
							else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_L") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_R"))
							{
							}
							else
							{
								func_67();
								func_42(5);
								Jump @1159; //curOff = 862
								func_68();
								Jump @1159; //curOff = 869
								func_68();
								if (!PED::GET_PED_CONFIG_FLAG(func_66(), 408, true))
								{
									func_67();
									func_42(5);
								}
								Jump @1159; //curOff = 901
								func_68();
								if (!PED::GET_PED_CONFIG_FLAG(func_66(), 408, true))
								{
									func_67();
									func_42(5);
								}
								Jump @1159; //curOff = 933
								if (!func_69(700))
								{
								}
								else
								{
									func_42(2);
									Jump @1159; //curOff = 955
									func_70();
									func_42(10);
									Jump @1159; //curOff = 968
									func_45();
									if (!func_69(1000))
									{
									}
									else
									{
										func_42(4);
										Jump @1159; //curOff = 994
										if (func_71())
										{
											func_42(4);
										}
										Jump @1159; //curOff = 1009
										if (func_72())
										{
											func_42(4);
										}
										Jump @1159; //curOff = 1024
										func_73(1);
										func_74();
										func_42(14);
										Jump @1159; //curOff = 1042
										if (!func_75(1))
										{
											if (Local_58.f_497)
											{
												if (GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO() == 0 && GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO() == 0)
												{
													Local_58.f_496 = func_23(2.185187E+31f, 0, 1, 1, 0, 8.497754E-37f);
													Local_58.f_497 = 0;
												}
											}
											func_42(10);
										}
										Jump @1159; //curOff = 1117
										if (!CAM::IS_SCREEN_FADING_OUT())
										{
											CAM::DO_SCREEN_FADE_OUT(1000);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											func_42(16);
										}
										Jump @1159; //curOff = 1148
										func_25();
										return false;
									}
								}
							}
						}
					}
				}
			}
			return true;
			default:
				break;
	}
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	bool bVar21;
	struct<4> Var22;
	int iVar26;
	bool bVar27;
	int iVar28;
	bool bVar29;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_561)
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(18);
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(11);
			Local_561 = true;
		}
		iVar4 = -1;
		iVar9 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && Local_659[iVar0 /*11*/].f_1 > 0) && !Local_659[iVar0 /*11*/])
			{
				iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				iVar9 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar8);
				iVar10 = Local_659[iVar0 /*11*/].f_1;
				if (Local_561.f_1 == iVar9)
				{
				}
				else
				{
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 7)
				{
					iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && Local_659[iVar0 /*11*/])
					{
						if (iVar9 != 0 && Local_659[iVar0 /*11*/].f_1 >= iVar10)
						{
							iVar9 = 0;
						}
					}
					iVar0++;
				}
				Local_561.f_1 = iVar9;
				iVar1 = 0;
				while (iVar1 < 7)
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_52[iVar1]))
					{
						func_76(iVar1);
						if (iVar4 < 0)
						{
							iVar4 = iVar1;
						}
					}
					else
					{
						bVar6 = false;
						iVar0 = 0;
						while (iVar0 < 7)
						{
							iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && Local_659[iVar0 /*11*/])
							{
								iVar11 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3));
								if (Local_561.f_36[iVar1] == iVar11)
								{
									bVar7 = false;
									if (Local_561.f_44[iVar1] != iVar11)
									{
										if (Local_659[iVar0 /*11*/].f_3 == iVar1)
										{
											Local_561.f_44[iVar1] = iVar11;
										}
										else
										{
											bVar7 = true;
										}
									}
									if (!bVar7)
									{
										if (Local_561.f_82[iVar1] != Local_659[iVar0 /*11*/].f_2 && Local_659[iVar0 /*11*/].f_2 != 0)
										{
											Local_561.f_82[iVar1] = Local_659[iVar0 /*11*/].f_2;
										}
										bVar6 = true;
									}
									else
									{
										Jump @509; //curOff = 454
										if (Local_561.f_44[iVar1] == iVar11)
										{
											bVar6 = true;
										}
										else if (MISC::IS_BIT_SET(Local_659[iVar0 /*11*/].f_4, iVar1))
										{
											Local_561.f_44[iVar1] = iVar11;
											bVar6 = true;
										}
										iVar0++;
									}
									if (!bVar6)
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar1]))
										{
											if (!func_77(&(Local_561.f_60[iVar1 /*3*/])))
											{
												func_61(&(Local_561.f_60[iVar1 /*3*/]), 0);
											}
											if (func_63(&(Local_561.f_60[iVar1 /*3*/])) > 5000)
											{
												iVar5 = NETWORK::NET_TO_PED(Local_561.f_52[iVar1]);
												PED::DELETE_PED(&iVar5);
												func_76(iVar1);
												if (iVar4 < 0)
												{
													iVar4 = iVar1;
												}
											}
										}
										else
										{
											NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar1]);
										}
									}
									else if (func_77(&(Local_561.f_60[iVar1 /*3*/])))
									{
										func_64(&(Local_561.f_60[iVar1 /*3*/]));
									}
									iVar1++;
									iVar0 = 0;
									while (iVar0 < 7)
									{
										iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
										bVar16 = false;
										if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && Local_659[iVar0 /*11*/]) && Local_659[iVar0 /*11*/].f_3 < 0)
										{
											iVar11 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3));
											iVar1 = 0;
											while (iVar1 < 7)
											{
												if (Local_561.f_36[iVar1] == iVar11)
												{
													bVar16 = true;
													if (!Local_561.f_90[iVar1])
													{
														if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar1]))
														{
															if (PED::IS_PED_READY_TO_RENDER(NETWORK::NET_TO_PED(Local_561.f_52[iVar1])))
															{
																PED::_REFRESH_META_PED_SHOP_ITEMS(NETWORK::NET_TO_PED(Local_561.f_52[iVar1]), 1);
																Local_561.f_90[iVar1] = 1;
															}
														}
														else
														{
															NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar1]);
														}
													}
												}
												else
												{
													iVar1++;
												}
											}
											if (!bVar16)
											{
												if (iVar4 > -1)
												{
													if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
													{
														iVar17 = PED::CLONE_PED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3)), true, true, true);
														PED::REMOVE_TAG_FROM_META_PED(iVar17, -5.426139E-06f, 1);
														PED::_UPDATE_PED_VARIATION(iVar17, false, true, true, true, false);
														NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar17, true);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar17, true);
														ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iVar17, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3)), true, false), ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3))), false, true);
														ENTITY::FREEZE_ENTITY_POSITION(iVar17, true);
														ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar17, false, false);
														ENTITY::SET_ENTITY_VISIBLE(iVar17, false);
														func_78(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3)), iVar17);
														Local_561.f_36[iVar4] = iVar11;
														Local_561.f_44[iVar4] = iVar11;
														Local_561.f_52[iVar4] = NETWORK::PED_TO_NET(iVar17);
													}
												}
												else
												{
													iVar18 = 0;
													iVar1 = 0;
													while (iVar1 < 7)
													{
														if (Local_561.f_36[iVar1] != Local_561.f_44[iVar1])
														{
															iVar18 = iVar1;
														}
														else
														{
															iVar1++;
														}
													}
													if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar18]))
													{
														iVar5 = NETWORK::NET_TO_PED(Local_561.f_52[iVar18]);
														PED::DELETE_PED(&iVar5);
														func_76(iVar18);
													}
													else
													{
														NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar18]);
													}
												}
											}
											else
											{
												iVar0++;
											}
											iVar12 = -1;
											bVar19 = false;
											bVar21 = true;
											bVar29 = true;
											iVar0 = 0;
											while (iVar0 < 7)
											{
												iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
												if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && Local_659[iVar0 /*11*/].f_3 > -1) && Local_659[iVar0 /*11*/].f_10 == 1)
												{
													iVar28 = Local_659[iVar0 /*11*/].f_3;
													iVar12 = -1;
													if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_4[iVar28]))
													{
														iVar12 = NETWORK::_NET_TO_ANIM_SCENE(Local_561.f_4[iVar28]);
													}
													if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar12) && !ANIMSCENE::GET_ANIM_SCENE_BOOL(iVar12, "BREAKLOOP"))
													{
														if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar12))
														{
															NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar12);
														}
														else
														{
															ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar12, "BREAKLOOP", true, false);
															iVar1 = 0;
															while (iVar1 < 7)
															{
																if (MISC::IS_BIT_SET(Local_659[iVar0 /*11*/].f_4, iVar1))
																{
																	iVar12 = -1;
																	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_4[iVar1]))
																	{
																		iVar12 = NETWORK::_NET_TO_ANIM_SCENE(Local_561.f_4[iVar1]);
																	}
																	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar12) && !ANIMSCENE::GET_ANIM_SCENE_BOOL(iVar12, "BREAKLOOP"))
																	{
																		if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar12))
																		{
																			NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar12);
																		}
																		else
																		{
																			ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar12, "BREAKLOOP", true, false);
																		}
																	}
																}
																iVar1++;
															}
															if (bVar29)
															{
																if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && Local_659[iVar0 /*11*/].f_10 != 4) && Local_659[iVar0 /*11*/].f_10 != 0)
																{
																	bVar29 = false;
																}
															}
														}
														iVar0++;
														if (bVar29)
														{
															iVar0 = 0;
															while (iVar0 < 7)
															{
																if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_4[iVar0]))
																{
																	iVar12 = NETWORK::_NET_TO_ANIM_SCENE(Local_561.f_4[iVar0]);
																	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar12) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar12, false))
																	{
																		if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar12))
																		{
																			NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar12);
																		}
																		else
																		{
																			ANIMSCENE::START_ANIM_SCENE(iVar12);
																		}
																	}
																}
																iVar0++;
															}
														}
														switch (Local_561.f_2)
														{
															case 0:
																iVar0 = 0;
																while (iVar0 < 7)
																{
																	iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
																	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && Local_659[iVar0 /*11*/].f_10 == 3)
																	{
																		iVar28 = Local_659[iVar0 /*11*/].f_3;
																		iVar12 = -1;
																		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_4[iVar28]))
																		{
																			iVar12 = NETWORK::_NET_TO_ANIM_SCENE(Local_561.f_4[iVar28]);
																		}
																		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar12))
																		{
																			bVar15 = true;
																			if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar12))
																			{
																				NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar12);
																				bVar15 = false;
																			}
																			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar28]))
																			{
																				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar28]);
																				bVar15 = false;
																			}
																			iVar2 = 0;
																			while (iVar2 < 11)
																			{
																				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_12[iVar2]) && func_79(Local_561.f_24[iVar2]) == Local_561.f_82[iVar28])
																				{
																					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_12[iVar2]))
																					{
																						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_12[iVar2]);
																						bVar15 = false;
																					}
																					else
																					{
																						NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_561.f_12[iVar2]);
																					}
																				}
																				iVar2++;
																			}
																			if (!bVar15)
																			{
																			}
																			else
																			{
																				ANIMSCENE::_DELETE_ANIM_SCENE(iVar12);
																				iVar2 = 0;
																				while (iVar2 < 11)
																				{
																					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_12[iVar2]) && func_79(Local_561.f_24[iVar2]) == Local_561.f_82[iVar28])
																					{
																						if (ENTITY::IS_ENTITY_A_PED(NETWORK::NET_TO_ENT(Local_561.f_12[iVar2])))
																						{
																							iVar14 = NETWORK::NET_TO_PED(Local_561.f_12[iVar2]);
																							PED::DELETE_PED(&iVar14);
																						}
																						else
																						{
																							iVar13 = NETWORK::NET_TO_OBJ(Local_561.f_12[iVar2]);
																							OBJECT::DELETE_OBJECT(&iVar13);
																						}
																						Local_561.f_12[iVar2] = 0;
																						Local_561.f_24[iVar2] = 0;
																					}
																					iVar2++;
																				}
																				TASK::CLEAR_PED_TASKS_IMMEDIATELY(NETWORK::NET_TO_PED(Local_561.f_52[iVar28]), false, true);
																				if (Local_58.f_264 != 0)
																				{
																					func_47(NETWORK::NET_TO_PED(Local_561.f_52[iVar28]), Local_58.f_10, Local_58.f_13, 2, 2f);
																				}
																				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_PED(Local_561.f_52[iVar28]), false, false);
																				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && (Local_58.f_264 != Local_659[iVar0 /*11*/].f_8 || Local_58.f_491 != Local_659[iVar0 /*11*/].f_9))
																				{
																					Local_58.f_264 = Local_659[iVar0 /*11*/].f_8;
																					Local_58.f_491 = Local_659[iVar0 /*11*/].f_9;
																					if (Local_58.f_264 != 0 && !func_80())
																					{
																					}
																					else
																					{
																						Local_561.f_3 = iVar28;
																						if (Local_58.f_264 == 0 || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_58.f_265)))
																						{
																							func_81(3);
																						}
																						else
																						{
																							iVar12 = ANIMSCENE::_CREATE_ANIM_SCENE(&(Local_58.f_265), 32768, 0, true, true);
																							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar12, Local_58.f_119, Local_58.f_122, 2);
																							Var22 = { func_82(iVar0) };
																							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar12, &Var22, NETWORK::NET_TO_PED(Local_561.f_52[iVar28]), 0);
																							WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(Local_561.f_52[iVar28]), true, true);
																							func_78(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3)), NETWORK::NET_TO_PED(Local_561.f_52[iVar28]));
																							Local_561.f_4[iVar28] = NETWORK::_ANIM_SCENE_TO_NET(iVar12);
																							func_81(1);
																						}
																					}
																					else
																					{
																						iVar0++;
																					}
																					Jump @3558; //curOff = 2490
																					iVar12 = -1;
																					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_4[Local_561.f_3]))
																					{
																						iVar12 = NETWORK::_NET_TO_ANIM_SCENE(Local_561.f_4[Local_561.f_3]);
																					}
																					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_52[Local_561.f_3]))
																					{
																						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_52[Local_561.f_3]);
																					}
																					else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar12, true, false))
																					{
																						if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iVar12, true))
																						{
																							ANIMSCENE::LOAD_ANIM_SCENE(iVar12);
																						}
																					}
																					else if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iVar12, false))
																					{
																					}
																					else
																					{
																						iVar0 = 0;
																						while (iVar0 < 7)
																						{
																							iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
																							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && Local_659[iVar0 /*11*/].f_3 == Local_561.f_3)
																							{
																								bVar19 = true;
																								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_561.f_52[Local_561.f_3]), true);
																							}
																							else
																							{
																								iVar0++;
																							}
																						}
																						if (bVar19)
																						{
																							func_81(2);
																						}
																						else
																						{
																							Local_561.f_3 = -1;
																							func_81(0);
																						}
																					}
																					Jump @3558; //curOff = 2725
																					iVar0 = 0;
																					while (iVar0 < 7)
																					{
																						iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
																						if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && Local_659[iVar0 /*11*/].f_3 == Local_561.f_3) && Local_659[iVar0 /*11*/].f_2 > 0)
																						{
																							bVar19 = true;
																							iVar26 = Local_659[iVar0 /*11*/].f_2;
																							bVar27 = PED::IS_PED_MALE(NETWORK::NET_TO_PED(Local_561.f_52[Local_659[iVar0 /*11*/].f_3]));
																							bVar21 = true;
																							iVar2 = 0;
																							while (iVar2 < 11)
																							{
																								if (func_79(Local_58.f_281[iVar2 /*19*/]) == iVar26)
																								{
																									iVar4 = -1;
																									iVar20 = 0;
																									while (iVar20 < 11)
																									{
																										if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_12[iVar20]))
																										{
																											if (iVar4 == -1)
																											{
																												iVar4 = iVar20;
																											}
																										}
																										else if (Local_561.f_24[iVar20] == Local_58.f_281[iVar2 /*19*/])
																										{
																											iVar4 = -1;
																										}
																										else
																										{
																											iVar20++;
																										}
																									}
																									if (iVar4 > -1)
																									{
																										bVar21 = false;
																										STREAMING::REQUEST_MODEL(Local_58.f_281[iVar2 /*19*/].f_17, false);
																										if (STREAMING::HAS_MODEL_LOADED(Local_58.f_281[iVar2 /*19*/].f_17))
																										{
																											iVar12 = -1;
																											if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_4[Local_561.f_3]))
																											{
																												iVar12 = NETWORK::_NET_TO_ANIM_SCENE(Local_561.f_4[Local_561.f_3]);
																											}
																											if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_52[Local_561.f_3]))
																											{
																												NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_52[Local_561.f_3]);
																											}
																											else
																											{
																												if (STREAMING::IS_MODEL_A_PED(Local_58.f_281[iVar2 /*19*/].f_17))
																												{
																													if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
																													{
																														iVar14 = func_83(Local_58.f_281[iVar2 /*19*/].f_17, Local_58.f_119, 0, 1, 1, 0, 1, 1, 1, 0, 0);
																														if (Local_58.f_281[iVar2 /*19*/].f_18 > -1)
																														{
																															PED::_EQUIP_META_PED_OUTFIT_PRESET(iVar14, Local_58.f_281[iVar2 /*19*/].f_18, false);
																														}
																														NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar14, true);
																														ENTITY::SET_ENTITY_COLLISION(iVar14, false, false);
																														ENTITY::FREEZE_ENTITY_POSITION(iVar14, true);
																														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar14, true);
																														if (bVar27)
																														{
																															ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar12, &(Local_58.f_281[iVar2 /*19*/].f_1), iVar14, 0);
																														}
																														else
																														{
																															ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar12, &(Local_58.f_281[iVar2 /*19*/].f_9), iVar14, 0);
																														}
																														Local_561.f_12[iVar4] = NETWORK::PED_TO_NET(iVar14);
																														Local_561.f_24[iVar4] = Local_58.f_281[iVar2 /*19*/];
																													}
																												}
																												else if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
																												{
																													iVar13 = OBJECT::CREATE_OBJECT(Local_58.f_281[iVar2 /*19*/].f_17, Local_58.f_119, true, true, false, false, true);
																													NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar13, true);
																													ENTITY::SET_ENTITY_COLLISION(iVar13, false, false);
																													if (bVar27)
																													{
																														ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar12, &(Local_58.f_281[iVar2 /*19*/].f_1), iVar13, 0);
																													}
																													else
																													{
																														ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar12, &(Local_58.f_281[iVar2 /*19*/].f_9), iVar13, 0);
																													}
																													Local_561.f_12[iVar4] = NETWORK::OBJ_TO_NET(iVar13);
																													Local_561.f_24[iVar4] = Local_58.f_281[iVar2 /*19*/];
																												}
																											}
																											else
																											{
																												iVar2++;
																											}
																											if (bVar21)
																											{
																												func_81(3);
																											}
																											Jump @3433; //curOff = 3421
																											iVar0++;
																											if (!bVar19)
																											{
																												Local_561.f_3 = -1;
																												func_81(0);
																											}
																											Jump @3558; //curOff = 3450
																											iVar0 = 0;
																											while (iVar0 < 7)
																											{
																												iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
																												if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && Local_659[iVar0 /*11*/].f_3 == Local_561.f_3)
																												{
																													bVar19 = true;
																													if (Local_659[iVar0 /*11*/].f_10 != 3)
																													{
																														Local_561.f_3 = -1;
																														func_81(0);
																													}
																												}
																												else
																												{
																													iVar0++;
																												}
																											}
																											if (!bVar19)
																											{
																												Local_561.f_3 = -1;
																												func_81(0);
																											}
																											iVar0 = 0;
																											while (iVar0 < 7)
																											{
																												if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_4[iVar0]))
																												{
																													if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_4[iVar0]))
																													{
																														NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_4[iVar0]);
																													}
																													else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_52[iVar0]))
																													{
																														NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_561.f_4[iVar0]);
																														iVar12 = NETWORK::_NET_TO_ANIM_SCENE(Local_561.f_4[iVar0]);
																														if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar12, false) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iVar12, "s_INTRO", true))
																														{
																															if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar0]))
																															{
																																NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar0]);
																															}
																															else
																															{
																																NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_561.f_52[iVar0]);
																															}
																														}
																													}
																													else
																													{
																														iVar12 = NETWORK::_NET_TO_ANIM_SCENE(Local_561.f_4[iVar0]);
																														ANIMSCENE::_DELETE_ANIM_SCENE(iVar12);
																														Local_561.f_4[iVar0] = 0;
																													}
																												}
																												iVar0++;
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
																default:
																	break;
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

int func_22()
{
	return Local_19.f_23;
}

int func_23(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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

	if (!func_84(bParam0, 0))
	{
		return -1;
	}
	if (func_85(bParam0) != 5.407193E-38f)
	{
		return -1;
	}
	if (func_86())
	{
		bParam3 = true;
	}
	if (iParam5 == -2.401104E+18f || iParam5 == -982726.7f)
	{
		iVar0 = (func_87(bParam0, iParam5, 1, 0, 1, 3.996812E+36f) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_87(bParam0, iParam5, 1, 0, 1, 3.414007E-11f) * iParam2);
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
	else if (func_88(bParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_89(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_90(0))
	{
		if (iVar0 > 0)
		{
			func_91(3.996812E+36f, iVar0, -5.149929E+33f, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_91(3.414007E-11f, iVar1, -5.149929E+33f, 0, 0);
		}
		else if (func_92(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_91(Var2[iVar35 /*2*/], iVar34, -5.149929E+33f, 0, 0);
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
	iVar53 = func_93(-2.328868E-12f, &Var36, bParam4);
	if (iVar53 == -1)
	{
	}
	else
	{
		Var54.f_7 = -5.149929E+33f;
		Var54.f_16 = -1;
		StringCopy(&(Var54.f_12), sParam1, 32);
		func_94(iVar53, Var54);
	}
	return iVar53;
}

bool func_24(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

void func_25()
{
	int iVar0;

	if (Local_58.f_80)
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(Local_58.f_53))
	{
		CAM::DESTROY_CAM(Local_58.f_53, false);
	}
	if (func_95(Local_58.f_51, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_58.f_51, false);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_58.f_51, false, true);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_33, false, false);
	}
	if (func_95(Global_33, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_33, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_33, true, false);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_33, Local_58.f_22, Local_58.f_25, true, false, true);
		ENTITY::SET_ENTITY_VISIBLE(Global_33, true);
		TASK::TASK_CLEAR_LOOK_AT(Global_33);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_33, false, false);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_58.f_95);
	ENTITY::SET_ENTITY_VISIBLE(Local_58.f_66, true);
	ENTITY::_UNPIN_MAP_ENTITY(Local_58.f_65);
	Local_58.f_65 = 0;
	Local_58.f_66 = 0;
	func_96();
	func_18();
	func_57(0);
	func_97();
	func_98();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Local_58.f_96[iVar0 /*2*/].f_1 = 0;
		Local_58.f_96[iVar0 /*2*/] = 0;
		iVar0++;
	}
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, 0);
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
	STREAMING::REMOVE_CLIP_SET(Local_58.f_79);
	STREAMING::REMOVE_ANIM_DICT(Local_58.f_78);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_R"))
	{
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("CameraTransitionWipe_R");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_L"))
	{
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("CameraTransitionWipe_L");
	}
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD(Local_58.f_75);
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD(Local_58.f_76);
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD(Local_58.f_77);
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD("CameraTransitionWipe_L");
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD("CameraTransitionWipe_R");
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_99(0, 1, 1, 0);
	if (VOLUME::DOES_VOLUME_EXIST(Local_58.f_113))
	{
		VOLUME::DELETE_VOLUME(Local_58.f_113);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_58.f_116))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_58.f_116));
		OBJECT::DELETE_OBJECT(&(Local_58.f_116));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_58.f_117))
	{
		OBJECT::DELETE_OBJECT(&(Local_58.f_117));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_58.f_131))
	{
		OBJECT::DELETE_OBJECT(&(Local_58.f_131));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_58.f_238))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_58.f_238);
	}
	if (Global_1051832.f_4673)
	{
		if (func_100(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 0;
			Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8 = 0;
			Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 = 0;
			Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1 = 0;
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	Local_58.f_80 = 1;
}

int func_26()
{
	return Global_1572887.f_14;
}

bool func_27()
{
	return Global_1051645.f_8;
}

bool func_28(int iParam0)
{
	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1915643.f_20346[iParam0]))
	{
		if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1915643.f_20346[iParam0]))
		{
			if (!func_101(Global_1915643.f_20387[iParam0], 2))
			{
				func_31(&(Global_1915643.f_20387[iParam0]), 2);
			}
			return true;
		}
	}
	return false;
}

bool func_29(int iParam0)
{
	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1915643.f_20346[iParam0]))
	{
		return func_101(Global_1915643.f_20387[iParam0], 4);
	}
	return false;
}

bool func_30(int iParam0)
{
	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1915643.f_20346[iParam0]))
	{
		return func_101(Global_1915643.f_20387[iParam0], 16);
	}
	return false;
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_32()
{
	Local_58.f_68[0] = "portrait_normal";
	Local_58.f_68[1] = "portrait_happy";
	Local_58.f_68[2] = "portrait_pensive";
	Local_58.f_68[3] = "portrait_relaxed";
	Local_58.f_68[4] = "portrait_angry";
	Local_58.f_68[5] = "portrait_annoyed";
	Local_58.f_29 = 0;
}

struct<18> func_33(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_34(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_102(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_35(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_36(int iParam0)
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

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2.869766E-27f;
		case 1:
			return -6.414859E-38f;
		case 2:
			return -10455.98f;
		case 3:
			return 6.210948E-06f;
		case 4:
			return -2.014257E-22f;
		case 5:
			return -4.890479E+11f;
		default:
			break;
	}
	return 0;
}

bool func_38(bool bParam0, int iParam1)
{
	if (!func_84(bParam0, 0))
	{
		return func_104(func_103(bParam0), iParam1);
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

void func_39()
{
	int iVar0;
	struct<8> Var1;
	int iVar20;
	int iVar21;
	int iVar22;
	char cVar23[32];
	int iVar27;
	int iVar28;
	char cVar29[16];
	char cVar31[16];
	int iVar33;

	if (Local_19.f_1 == 1)
	{
		func_105();
	}
	if (Local_19.f_23 == 0 && Local_19.f_1 == 0)
	{
		if (Local_19.f_2)
		{
			if ((MISC::GET_GAME_TIMER() - Local_19.f_21) > 2500)
			{
				iVar0 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
				if (Local_19.f_6 && Local_19.f_7 != iVar0)
				{
					Local_19.f_6 = 0;
				}
				Local_19.f_7 = iVar0;
				func_106();
				Local_19.f_21 = MISC::GET_GAME_TIMER();
			}
		}
	}
	switch (Local_19.f_23)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 3.87631E-31f))
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Local_19.f_19);
				Local_19.f_19 = 0;
				Local_19.f_6 = 1;
				func_107(2);
			}
			break;
		case 0:
			if (func_75(1))
			{
				Local_19.f_25 = 0;
				if (Local_19 || Local_19.f_6)
				{
					func_107(2);
				}
				else if (Local_19.f_7 == Local_19.f_8)
				{
					if (Local_19.f_19 == 0)
					{
						Var1.f_2 = 0;
						Var1.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var1.f_7.f_3 = 0;
						Local_19.f_19 = func_108(&Var1, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_107(1);
					}
					else
					{
						Local_19.f_6 = 1;
						func_107(2);
					}
				}
				else
				{
					func_107(2);
				}
			}
			if (func_75(4))
			{
				GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
				GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(1);
				func_107(7);
			}
			break;
		case 2:
			Local_19.f_5 = 0;
			func_107(3);
			Local_19.f_20 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - Local_19.f_20) > 0)
			{
				Local_19.f_20 = MISC::GET_GAME_TIMER();
				if (Local_19 || Local_19.f_6)
				{
					func_107(4);
				}
				else
				{
					GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					Local_19.f_7++;
					func_107(5);
				}
			}
			break;
		case 5:
			Local_19.f_24 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (Local_19.f_24 == 1)
			{
			}
			if (Local_19.f_24 == 0)
			{
				Local_19.f_25 = 1;
				GRAPHICS::_SET_PHOTO_SELF_STAT(false);
				GRAPHICS::_SET_PHOTO_STUDIO_STAT(Local_19.f_26);
				if (ITEMSET::IS_ITEMSET_VALID(Local_19.f_27))
				{
					ITEMSET::_CLEAR_ITEMSET(Local_19.f_27);
				}
				else
				{
					Local_19.f_27 = ITEMSET::CREATE_ITEMSET(true);
				}
				switch (Local_19.f_26)
				{
					case 11:
					case 12:
					case 13:
						POSSE::_0xC08AFF658B2E51DA(&iVar20);
						if (iVar20 != 0)
						{
							GRAPHICS::_SET_POSSE_ID_FOR_PHOTO(iVar20);
						}
						if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
						{
							iVar21 = 0;
							while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
							{
								iVar22 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar21);
								if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
								{
									GRAPHICS::_SET_PLAYER_APPEAR_IN_PHOTO(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22));
									ITEMSET::ADD_TO_ITEMSET(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22)), Local_19.f_27);
								}
								iVar21++;
							}
						}
						break;
					case 1:
					case 2:
						GRAPHICS::_SET_PLAYER_APPEAR_IN_PHOTO(PLAYER::PLAYER_ID());
						ITEMSET::ADD_TO_ITEMSET(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Local_19.f_27);
						break;
				}
				STATS::STAT_PHOTOGRAPH_TAKEN(Local_19.f_27);
				StringCopy(&cVar23, "", 32);
				iVar27 = func_109();
				if (func_110(iVar27))
				{
					MemCopy(&cVar23, {func_111(iVar27)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar23))
				{
					iVar28 = func_112();
					StringCopy(&cVar23, func_113(iVar28), 32);
				}
				GRAPHICS::_SET_REGION_PHOTO_TAKEN_STAT(&cVar23);
				StringCopy(&cVar29, "", 16);
				StringCopy(&cVar31, "", 16);
				iVar33 = func_114();
				if (func_115(iVar33))
				{
					StringCopy(&cVar29, func_116(iVar33), 16);
					StringCopy(&cVar31, func_117(iVar33), 16);
				}
				GRAPHICS::_SET_DISTRICT_PHOTO_TAKEN_STAT(&cVar29);
				GRAPHICS::_SET_STATE_PHOTO_TAKEN_STAT(&cVar31);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				Local_19.f_3 = 0;
				func_107(6);
			}
			else if (Local_19.f_24 == 2)
			{
				func_107(4);
			}
			break;
		case 6:
			if (Local_19.f_3 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				Local_19.f_3 = 1;
			}
			Local_19.f_24 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (Local_19.f_24 == 0)
			{
				Local_19.f_5 = 1;
				func_118(1);
				func_107(0);
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Wind_On_Film", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
			}
			else if (Local_19.f_24 == 2)
			{
				Local_19.f_5 = 1;
				func_118(1);
				func_107(0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - Local_19.f_20) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_118(1);
				func_107(0);
			}
			break;
		case 7:
			Local_19.f_24 = GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(1);
			if (Local_19.f_24 == 0)
			{
				GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(true, 0);
				func_73(8);
				func_118(4);
				func_107(0);
			}
			else if (Local_19.f_24 == 2)
			{
				func_118(4);
				func_107(0);
			}
			break;
	}
}

void func_40()
{
	var uVar0;

	if (Local_58.f_496 != -1 && !func_119(Local_58.f_496))
	{
		TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(Local_58.f_496, &uVar0);
		if (Global_1051832.f_4673)
		{
			TELEMETRY::_TELEMETRY_PHOTO(&uVar0, func_120(), Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8, Global_1051832.f_4673.f_4);
		}
		else
		{
			TELEMETRY::_TELEMETRY_PHOTO(&uVar0, func_120(), 0, 1);
		}
		Local_58.f_496 = -1;
	}
}

void func_41()
{
	if (Local_58.f_498 == -1)
	{
		if (AUDIO::LOAD_STREAM("track", "inworld_music_wax_cylinder_photostudio"))
		{
			Local_58.f_498 = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION("track", "inworld_music_wax_cylinder_photostudio");
			if (Local_58.f_498 != -1)
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(Local_58, Local_58.f_498);
			}
		}
	}
	if (Local_58.f_498 != -1)
	{
		if (!AUDIO::IS_STREAM_PLAYING(Local_58.f_498))
		{
			Local_58.f_498 = -1;
		}
	}
}

void func_42(int iParam0)
{
	Global_1051832.f_4673.f_7 = iParam0;
}

void func_43()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (!Global_1051832.f_4673)
	{
		return;
	}
	iVar3 = 0;
	if (!Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] && Local_58.f_502)
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if ((iVar2 != NETWORK::PARTICIPANT_ID() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)) && Local_659[iVar0 /*11*/])
			{
				if (Local_659[iVar0 /*11*/].f_1 > iVar3)
				{
					iVar3 = Local_659[iVar0 /*11*/].f_1;
				}
			}
			iVar0++;
		}
		if (Local_561.f_1 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) && Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1 > iVar3)
		{
			Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 1;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (Local_561.f_36[iVar0] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) && Local_561.f_82[iVar0] != 0)
				{
					bVar5 = true;
					Jump @357; //curOff = 224
				}
				else if (Local_561.f_36[iVar0] != 0)
				{
					bVar6 = false;
					iVar1 = 0;
					while (iVar1 < 7)
					{
						iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
						if (((iVar2 != NETWORK::PARTICIPANT_ID() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)) && Local_659[iVar1 /*11*/]) && Local_561.f_36[iVar0] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)))
						{
							bVar6 = true;
						}
						else
						{
							iVar1++;
						}
					}
					if (!bVar6)
					{
						iVar4++;
					}
				}
				iVar0++;
			}
			if (!bVar5)
			{
				iVar0 = 0;
				while (iVar0 < 7)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
					if ((iVar2 != NETWORK::PARTICIPANT_ID() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)) && Local_659[iVar0 /*11*/])
					{
						iVar7++;
					}
					iVar0++;
				}
				if ((iVar4 + iVar7) >= 7)
				{
					func_42(15);
					return;
				}
				Local_58.f_115 = (iVar4 + iVar7) + 1;
			}
		}
		else
		{
			Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1 = iVar3 + 1;
			return;
		}
	}
	Global_1051832.f_4673.f_4 = 0;
	Global_1051832.f_4673.f_1 = 0;
	Global_1051832.f_4673.f_2 = 0;
	iVar8 = -1;
	iVar13 = NaNf;
	if (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3 < 0)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (Local_561.f_36[iVar1] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) && Local_561.f_90[iVar1])
			{
				Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3 = iVar1;
			}
			else
			{
				iVar1++;
			}
		}
	}
	Local_58.f_114 = 0;
	if (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3 > -1 && Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 != 3)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_52[Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3]))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_52[Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3]);
		}
		else
		{
			Local_58.f_114 = 1;
			NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_561.f_52[Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3]);
		}
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		bVar9 = false;
		if (iVar2 == NETWORK::PARTICIPANT_ID() || (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_659[iVar0 /*11*/]))
		{
			MISC::SET_BIT(&iVar11, iVar0);
			Global_1051832.f_4673.f_4++;
			func_121(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
			if (Local_659[iVar0 /*11*/].f_1 < iVar13)
			{
				iVar13 = Local_659[iVar0 /*11*/].f_1;
				iVar10 = iVar0;
			}
		}
		iVar0++;
	}
	Local_58.f_112 = iVar10 == NETWORK::PARTICIPANT_ID_TO_INT();
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Local_58.f_96[iVar1 /*2*/].f_1 != 0)
		{
			bVar9 = false;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_58.f_96[iVar1 /*2*/].f_1 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)))
				{
					if (MISC::IS_BIT_SET(iVar11, iVar0))
					{
						bVar9 = true;
						MISC::SET_BIT(&iVar12, iVar0);
					}
					iVar8 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
			if (!bVar9)
			{
				if (Local_58.f_112)
				{
					iVar0 = 0;
					while (iVar0 < 7)
					{
						if (Local_58.f_96[iVar1 /*2*/].f_1 == Local_561.f_36[iVar0] || Local_58.f_96[iVar1 /*2*/].f_1 == Local_561.f_44[iVar0])
						{
							MISC::SET_BIT(&(Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4), iVar0);
						}
						iVar0++;
					}
				}
				Local_58.f_96[iVar1 /*2*/].f_1 = 0;
				Local_58.f_96[iVar1 /*2*/] = 0;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (MISC::IS_BIT_SET(iVar11, iVar0) && !MISC::IS_BIT_SET(iVar12, iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 7)
			{
				if (Local_58.f_96[iVar1 /*2*/].f_1 == 0)
				{
					iVar8 = iVar1;
				}
				else
				{
					iVar1++;
				}
			}
			Local_58.f_96[iVar8 /*2*/].f_1 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
			Local_58.f_96[iVar8 /*2*/] = Local_659[iVar0 /*11*/].f_1;
			Global_1051832.f_4673.f_4++;
			func_121(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
			if (iVar2 != NETWORK::PARTICIPANT_ID())
			{
				iVar1 = 0;
				while (iVar1 < 7)
				{
					if (MISC::IS_BIT_SET(Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4, iVar1))
					{
						if (Local_561.f_36[iVar1] == Local_58.f_96[iVar8 /*2*/].f_1)
						{
							MISC::CLEAR_BIT(&(Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4), iVar1);
						}
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	func_122(iVar10);
}

void func_44()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
		}
		iVar0++;
	}
}

void func_45()
{
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	if (!CAM::DOES_CAM_EXIST(Local_58.f_53))
	{
		Local_58.f_53 = CAM::CREATE_CAMERA_WITH_PARAMS(5.382516E-38f, Local_58, Local_58.f_3, 65f, false, 2);
		CAM::SET_CAM_FOV(Local_58.f_53, Local_58.f_9);
	}
	else
	{
		CAM::SET_CAM_ACTIVE(Local_58.f_53, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::SET_CAM_FOV(Local_58.f_53, Local_58.f_9);
	}
	func_123();
	if (!func_124(Global_33, 1.478669E-33f))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_33, Local_58.f_51, -1, 0, 51, 0);
	}
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1.490803E+21f);
}

void func_46()
{
	STREAMING::REQUEST_ANIM_DICT(Local_58.f_78);
	STREAMING::REQUEST_CLIP_SET(Local_58.f_79);
}

void func_47(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
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
	if (iParam0 == func_125(Global_33) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_126(iParam0))
	{
		if (func_127(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_128(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_47(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_47(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_128(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_128(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_128(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_128(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_128(iParam5, 129))
	{
		if (func_128(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iParam0, vParam1, fParam4, func_128(iParam5, 32), true);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_128(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_128(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_126(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_128(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_33 && !func_128(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_48()
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_58.f_78))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(Local_58.f_79))
	{
		return false;
	}
	return true;
}

bool func_49()
{
	func_129(18, &(Local_58.f_51));
	if (!func_95(Local_58.f_51, 0))
	{
		return false;
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_58.f_51, Local_58.f_14, Local_58.f_17, true, false, true);
	TASK::TASK_STAND_STILL(Local_58.f_51, -1);
	return true;
}

bool func_50()
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_58.f_116))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_58.f_66))
	{
		fVar0 = func_130();
		STREAMING::REQUEST_MODEL(fVar0, false);
		if (Global_1051832.f_4673)
		{
			STREAMING::REQUEST_MODEL(1.887181E+17f, false);
		}
		if (STREAMING::HAS_MODEL_LOADED(fVar0) && (!Global_1051832.f_4673 || STREAMING::HAS_MODEL_LOADED(1.887181E+17f)))
		{
			if (Global_1051832.f_4673)
			{
				Local_58.f_26 = { ENTITY::GET_ENTITY_COORDS(Local_58.f_66, true, false) + func_131(1036831949 /* Float: 0.1f */, 0f, -1077936128 /* Float: -1.5f */, ENTITY::GET_ENTITY_ROTATION(Local_58.f_66, 2)) };
			}
			else
			{
				Local_58.f_26 = { ENTITY::GET_ENTITY_COORDS(Local_58.f_66, true, false) + func_131(1036831949 /* Float: 0.1f */, 0f, -1080033280 /* Float: -1.25f */, ENTITY::GET_ENTITY_ROTATION(Local_58.f_66, 2)) };
			}
			Local_58.f_116 = OBJECT::CREATE_OBJECT(fVar0, Local_58.f_26, false, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_58.f_116, true);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_58.f_116, false, false);
			ENTITY::SET_ENTITY_ROTATION(Local_58.f_116, ENTITY::GET_ENTITY_ROTATION(Local_58.f_66, 2) + Vector(1127481344, 0f, 0f), 2, true);
			if (Global_1051832.f_4673)
			{
				Local_58.f_131 = OBJECT::CREATE_OBJECT(1.887181E+17f, ENTITY::GET_ENTITY_COORDS(Local_58.f_66, true, false) + func_131(1036831949 /* Float: 0.1f */, 0f, -1076090634 /* Float: -1.72f */, ENTITY::GET_ENTITY_ROTATION(Local_58.f_66, 2)), false, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_58.f_131, true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_58.f_131, false, false);
				ENTITY::SET_ENTITY_ROTATION(Local_58.f_131, ENTITY::GET_ENTITY_ROTATION(Local_58.f_66, 2), 2, true);
			}
			ENTITY::SET_ENTITY_VISIBLE(Local_58.f_66, false);
			return true;
		}
		return false;
	}
	if (Local_58.f_65 == 0)
	{
		Local_58.f_65 = ENTITY::PIN_CLOSEST_MAP_ENTITY(Local_58.f_89, Local_58.f_26, 7);
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(Local_58.f_65))
	{
		Local_58.f_66 = ENTITY::_GET_PINNED_MAP_ENTITY(Local_58.f_65);
	}
	return false;
}

bool func_51()
{
	if (!Global_1051832.f_4673)
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_58.f_238))
	{
		Local_58.f_238 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig_mp@photo@photo_studio", 2, 0, false, true);
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_58.f_238, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_58.f_238);
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(Local_58.f_238, false))
	{
	}
	else
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_58.f_238, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_58.f_238, Local_58.f_26, ENTITY::GET_ENTITY_ROTATION(Local_58.f_66, 2), 2);
			ANIMSCENE::START_ANIM_SCENE(Local_58.f_238);
		}
		return true;
	}
	return false;
}

void func_52()
{
	if (!Global_1051832.f_4673 || Local_58.f_240)
	{
		return;
	}
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_58.f_238, func_132(Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7));
	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_58.f_238, func_132(Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7)))
	{
		if (Local_58.f_239 != 0)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_58.f_238, func_133(Local_58.f_239), false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_58.f_238, func_132(Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7), true);
		Local_58.f_240 = 1;
	}
}

bool func_53(bool bParam0)
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
	bool bVar9;
	int iVar10;
	int iVar11;

	if (Global_1051832.f_4673)
	{
		iVar8 = -1;
		bVar9 = true;
		if (((Local_58.f_118 == 6 || Local_58.f_118 == 3) || Local_58.f_118 == 4) || Local_58.f_118 == 5)
		{
			iVar10 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar10) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
			{
				iVar11 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar10);
				if (Local_659[iVar11 /*11*/] && (Local_659[iVar11 /*11*/].f_8 != Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8 || Local_659[iVar11 /*11*/].f_9 != Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9))
				{
					func_134(0);
				}
			}
		}
		switch (Local_58.f_118)
		{
			case 0:
				Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 = 2;
				if (!Local_58.f_114)
				{
					return false;
				}
				if (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4 > 0)
				{
					iVar3 = 0;
					while (iVar3 < 7)
					{
						if (MISC::IS_BIT_SET(Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4, iVar3))
						{
							bVar9 = true;
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar3]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_52[iVar3]);
								bVar9 = false;
							}
							iVar4 = 0;
							while (iVar4 < 11)
							{
								if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_12[iVar4]) && func_79(Local_561.f_24[iVar4]) == Local_561.f_82[iVar3]) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_561.f_12[iVar4]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_561.f_12[iVar4]);
									bVar9 = false;
								}
								iVar4++;
							}
							if (!bVar9)
							{
							}
							else
							{
								iVar0 = NETWORK::NET_TO_PED(Local_561.f_52[iVar3]);
								PED::DELETE_PED(&iVar0);
								iVar4 = 0;
								while (iVar4 < 11)
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_12[iVar4]) && func_79(Local_561.f_24[iVar4]) == Local_561.f_82[iVar3])
									{
										if (ENTITY::IS_ENTITY_A_PED(NETWORK::NET_TO_ENT(Local_561.f_12[iVar4])))
										{
											iVar2 = NETWORK::NET_TO_PED(Local_561.f_12[iVar4]);
											PED::DELETE_PED(&iVar2);
										}
										else
										{
											iVar1 = NETWORK::NET_TO_OBJ(Local_561.f_12[iVar4]);
											OBJECT::DELETE_OBJECT(&iVar1);
										}
										Local_561.f_12[iVar4] = 0;
										Local_561.f_24[iVar4] = 0;
									}
									iVar4++;
								}
								MISC::CLEAR_BIT(&(Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4), iVar3);
							}
						}
						iVar3++;
					}
					if (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4 > 0)
					{
						return false;
					}
				}
				iVar5 = 0;
				while (iVar5 < 7)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (iVar6 == NETWORK::PARTICIPANT_ID())
					{
					}
					else if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6) && Local_659[iVar5 /*11*/]) && ((Local_659[iVar5 /*11*/].f_8 != Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8 || Local_659[iVar5 /*11*/].f_9 != Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9) || Local_659[iVar5 /*11*/].f_10 == 1))
					{
						return false;
					}
					iVar5++;
				}
				Local_58.f_128 = 0;
				func_134(2);
				return false;
			case 2:
				iVar0 = func_66();
				if (bParam0)
				{
					if (Local_561.f_82[Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3] != 0)
					{
						Local_58.f_128 = 1;
						Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_2 = Local_561.f_82[Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3];
						Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 = 4;
						func_134(3);
						return false;
					}
					else if (Local_58.f_115 > 0)
					{
						Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_2 = Local_58.f_115;
					}
				}
				else
				{
					NETWORK::_0x7E300B5B86AB1D1A(&(Local_58.f_96), 7, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					iVar7 = 0;
					iVar5 = 0;
					while (iVar5 < 7)
					{
						if (Local_58.f_96[iVar5 /*2*/].f_1 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
						{
							Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_2 = (iVar5 - iVar7) + 1;
							Jump @1030; //curOff = 995
						}
						else if (Local_58.f_96[iVar5 /*2*/].f_1 == 0)
						{
							iVar7++;
						}
						iVar5++;
					}
				}
				Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 = 3;
				func_134(1);
				return false;
			case 1:
				if (Local_561.f_3 == Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3 && Local_561.f_2 == 3)
				{
					Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 = 4;
					func_134(3);
				}
				return false;
			case 3:
				if (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8 != 0)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_561.f_4[Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3]))
					{
						iVar8 = NETWORK::_NET_TO_ANIM_SCENE(Local_561.f_4[Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3]);
					}
					else
					{
						Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 = 3;
						func_134(1);
					}
					if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar8, false))
					{
						Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 = 0;
						func_134(6);
					}
				}
				else if (!Local_58.f_128)
				{
					if (!Local_58.f_114)
					{
						return false;
					}
					iVar0 = func_66();
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
					func_134(4);
				}
				else
				{
					Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 = 0;
					func_134(6);
				}
				return false;
			case 4:
				if (!func_77(&(Local_58.f_499)))
				{
					if (!Local_58.f_114)
					{
						return false;
					}
					iVar0 = func_66();
					func_47(iVar0, Local_58.f_10 + Vector(0f, 0f, 1101004800), Local_58.f_13, 0, 2f);
					func_61(&(Local_58.f_499), 0);
				}
				if (func_63(&(Local_58.f_499)) > 1000)
				{
					func_134(5);
					func_64(&(Local_58.f_499));
				}
				return false;
			case 5:
				if (!Local_58.f_114)
				{
					return false;
				}
				iVar0 = func_66();
				func_47(iVar0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_58.f_10, Local_58.f_13, func_135((Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_2 - 1))), Local_58.f_13, 0, 2f);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar0, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
				func_78(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0);
				Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 = 0;
				func_134(6);
				return false;
			case 6:
				if (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8 == 0)
				{
					iVar5 = 0;
					while (iVar5 < 7)
					{
						iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
						if (iVar6 == NETWORK::PARTICIPANT_ID())
						{
						}
						else if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6) && Local_659[iVar5 /*11*/]) && Local_659[iVar5 /*11*/].f_10 != 0)
						{
							return false;
						}
						iVar5++;
					}
				}
				func_134(0);
				break;
		}
	}
	else
	{
		func_99(1, 1, 0, 0);
		func_47(Global_33, Local_58.f_10, Local_58.f_13, 0, 2f);
		ENTITY::FREEZE_ENTITY_POSITION(Global_33, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_33, false, false);
	}
	return true;
}

void func_54()
{
	if (Global_1051832.f_92[18 /*75*/].f_18 == 12)
	{
		ENTITY::CREATE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, -3638590f, false);
		ENTITY::CREATE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, 5.844319E+28f, false);
		ENTITY::CREATE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, -5.304592E-09f, false);
	}
	else if (Global_1051832.f_92[18 /*75*/].f_18 == 60)
	{
		ENTITY::CREATE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, 8.206384E-19f, false);
		ENTITY::CREATE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, -7.287528E-12f, false);
		ENTITY::CREATE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, 4.121235E+09f, false);
	}
}

void func_55()
{
	Local_58.f_52 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	if (Local_58.f_52 != 0)
	{
		PED::DETACH_CARRIABLE_ENTITY(Local_58.f_52, false, false);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_58.f_52, Local_58.f_18, Local_58.f_21, true, false, true);
	}
}

void func_56()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(Local_58.f_75))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(Local_58.f_75);
	}
}

void func_57(bool bParam0)
{
	int iVar0;
	char* sVar1;

	if (Global_1051832.f_92[18 /*75*/].f_18 == 12)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-814.042f, -1374.27f, 44.941f);
		sVar1 = "bla_photo_LightBoxPortrait";
	}
	else if (Global_1051832.f_92[18 /*75*/].f_18 == 60)
	{
		return;
	}
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		if (bParam0)
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sVar1))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sVar1, 0);
			}
		}
		else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sVar1))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sVar1, true);
		}
	}
}

void func_58(int iParam0)
{
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(func_66());
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_66(), Local_58.f_68[iParam0], Local_58.f_78);
}

void func_59()
{
	GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS();
	Local_19.f_1 = 1;
}

void func_60()
{
	int iVar0;
	int iVar1;

	if (AUDIO::_GET_ENTITY_AUDIO_MIX_GROUP(Local_58.f_51) != 3.905094E+16f)
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_58.f_51, "MP007_PhotoStudio_Photographer", 0f);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Local_561.f_52[iVar0] != 0)
		{
			iVar1 = NETWORK::NET_TO_ENT(Local_561.f_52[iVar0]);
			if (AUDIO::_GET_ENTITY_AUDIO_MIX_GROUP(iVar1) != -4.998369E-30f)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar1, "MP007_PhotoStudio_Subjects", 0f);
			}
		}
		iVar0++;
	}
	func_136("PhotoMode", "MP007_PhotoStudio_Sceneset");
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1 || !func_77(uParam0))
	{
		func_137(uParam0);
	}
}

void func_62()
{
	func_138("PoseTransition", "MP007_PhotoStudio_Sceneset");
}

int func_63(var uParam0)
{
	if (!func_77(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1148846080));
	}
	if (func_139(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1148846080));
	}
	return (func_140() - BUILTIN::ROUND((uParam0->f_1 * 1148846080)));
}

void func_64(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_65()
{
	func_138("PhotoMode", "MP007_PhotoStudio_Sceneset");
}

int func_66()
{
	int iVar0;

	iVar0 = Global_33;
	if (Local_58.f_114)
	{
		iVar0 = NETWORK::NET_TO_PED(Local_561.f_52[Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3]);
	}
	return iVar0;
}

void func_67()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID());
	if (!Local_58.f_31)
	{
		func_141(&(Local_58.f_40), 1, 1);
		func_141(&(Local_58.f_41), 1, 1);
		func_141(&(Local_58.f_42), 1, 1);
		func_141(&(Local_58.f_43), 1, 1);
		func_141(&(Local_58.f_44), 1, 1);
		func_141(&(Local_58.f_45), 1, 1);
		func_141(&(Local_58.f_46), 1, 1);
		func_141(&(Local_58.f_47), 1, 1);
		func_141(&(Local_58.f_49), 1, 1);
		if (Global_1051832.f_4673)
		{
			if (!func_142(Local_58.f_32))
			{
				Local_58.f_32 = func_143("PHOTO_STUDIO_CHANGE_POSE", -1.454045E-11f, 1.475287E+23f, 0);
				func_144(Local_58.f_32, 4, 1, 0);
				func_144(Local_58.f_32, 2, 1, 0);
			}
			func_145(Local_58.f_32, (Global_1051832.f_4673.f_4 > 1 && bVar0), 1, 1);
			if (Local_58.f_492 > 0)
			{
				if (!func_142(Local_58.f_33))
				{
					Local_58.f_33 = func_143("PHOTO_STUDIO_CHANGE_VARIANT", -2.800969E+07f, 1.095094E-28f, 0);
					func_144(Local_58.f_33, 4, 1, 0);
					func_144(Local_58.f_33, 2, 1, 0);
				}
				func_145(Local_58.f_33, (Global_1051832.f_4673.f_4 > 1 && bVar0), 1, 1);
			}
			else
			{
				func_141(&(Local_58.f_33), 1, 1);
			}
		}
		if (!func_142(Local_58.f_36))
		{
			Local_58.f_36 = func_143("PHOTO_STUDIO_CHANGE_EXPRESSION", -1.236065E-28f, 527.8984f, 0);
			func_144(Local_58.f_36, 4, 1, 0);
			func_144(Local_58.f_36, 2, 1, 0);
		}
		else
		{
			func_145(Local_58.f_36, 1, 1, 1);
		}
		if (!func_142(Local_58.f_34))
		{
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < Local_58.f_237)
			{
				if (iVar3 == Local_58.f_129)
				{
					if (bVar1)
					{
						Local_58.f_60 = -2.657632E+11f;
					}
					else
					{
						Local_58.f_60 = -2.794596E+37f;
					}
					iVar2 = iVar3;
				}
				else if (func_38(Local_58.f_132[iVar3], func_37(Local_58.f_130)))
				{
					bVar1 = false;
					iVar2 = iVar3;
				}
				iVar3++;
			}
			Local_58.f_61 = 1;
			if (Local_58.f_129 == iVar2)
			{
				if (Local_58.f_60 == -2.657632E+11f)
				{
					Local_58.f_61 = 0;
				}
				else
				{
					Local_58.f_60 = -2.05188E-29f;
				}
			}
			Local_58.f_34 = func_146("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_58.f_60, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_144(Local_58.f_34, 4, 1, 0);
		}
		func_145(Local_58.f_34, ((!Global_1051832.f_4673 || bVar0) && Local_58.f_61), 1, 1);
		if (!func_142(Local_58.f_35))
		{
			Local_58.f_35 = func_146("PHOTO_STUDIO_CHANGE_BACKGROUND_SET", 3.013735E+08f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_144(Local_58.f_35, 4, 1, 0);
		}
		func_145(Local_58.f_35, (!Global_1051832.f_4673 || bVar0), 1, 1);
		if (!func_142(Local_58.f_37))
		{
			Local_58.f_37 = func_146("PHOTO_STUDIO_QUIT", 9.715933E-10f, 4, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_144(Local_58.f_37, 4, 1, 0);
			func_144(Local_58.f_37, 2, 1, 0);
		}
		else
		{
			func_145(Local_58.f_37, 1, 1, 1);
		}
		if (!func_142(Local_58.f_39))
		{
			Local_58.f_39 = func_146("PHOTO_STUDIO_GALLERY", -2.072734E+13f, 4, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_144(Local_58.f_39, 4, 1, 0);
			func_144(Local_58.f_39, 2, 1, 0);
		}
		else
		{
			func_145(Local_58.f_39, 1, 1, 1);
		}
	}
	else
	{
		func_141(&(Local_58.f_32), 1, 1);
		func_141(&(Local_58.f_33), 1, 1);
		func_141(&(Local_58.f_36), 1, 1);
		func_141(&(Local_58.f_34), 1, 1);
		func_141(&(Local_58.f_35), 1, 1);
		func_141(&(Local_58.f_37), 1, 1);
		func_141(&(Local_58.f_39), 1, 1);
		func_147(&(Local_58.f_40), &(Local_58.f_41), 0);
		func_147(&(Local_58.f_42), &(Local_58.f_43), 3);
		func_147(&(Local_58.f_44), &(Local_58.f_45), 2);
		func_147(&(Local_58.f_46), &(Local_58.f_47), 1);
		if (!func_142(Local_58.f_49))
		{
			Local_58.f_49 = func_146("EMOTE_PERFORM_ACTION", 4.952044E-27f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_144(Local_58.f_49, 13, 1, 1);
			func_144(Local_58.f_49, 10, 1, 1);
			func_144(Local_58.f_49, 14, 1, 1);
			func_144(Local_58.f_49, 4, 1, 0);
			func_144(Local_58.f_49, 2, 1, 0);
			func_145(Local_58.f_49, 0, 1, 1);
			func_148(Local_58.f_49, 0, 1);
		}
	}
	if (!Global_1051832.f_4673 || Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8 == 0)
	{
		if (!func_142(Local_58.f_50))
		{
			Local_58.f_50 = func_146("NET_INTERACT_OPTION_EMOTE", -1.672588E+21f, 2, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_144(Local_58.f_50, 4, 1, 0);
			func_144(Local_58.f_50, 2, 1, 0);
		}
	}
	else
	{
		func_141(&(Local_58.f_50), 1, 1);
	}
	if (!func_142(Local_58.f_38))
	{
		Local_58.f_38 = func_146("PHOTO_STUDIO_TAKE_PHOTO_NET", -11.64975f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
		func_150(Local_58.f_38, "PHOTO_STUDIO_TAKE_PHOTO_NET", func_149(2.185187E+31f, 0, 1, 0, 1), 1);
		func_144(Local_58.f_38, 2, 1, 0);
	}
	if (func_151())
	{
		func_145(Local_58.f_38, 1, 1, 1);
	}
	else
	{
		func_145(Local_58.f_38, 0, 1, 1);
	}
}

void func_68()
{
	bool bVar0;
	bool bVar1;

	bVar1 = GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID());
	PAD::_SET_CONTROL_CONTEXT(4, -1.450741E+36f);
	if (func_142(Local_58.f_32))
	{
		bVar0 = (Global_1051832.f_4673.f_4 > 1 && bVar1);
		bVar0 = (bVar0 && Global_1051832.f_4673.f_7 == 5);
		if (func_152(Local_58.f_32, 0) != bVar0)
		{
			func_145(Local_58.f_32, bVar0, 1, 1);
		}
		if (func_153(Local_58.f_32, 0, 1))
		{
			Local_58.f_263 = (Local_58.f_263 - 1);
			func_154("change_pose", "RDRO_Photo_Shop_Sounds", 1);
			Local_58.f_62 = 1;
			func_42(8);
			func_155();
			func_156();
			return;
		}
		else if (func_153(Local_58.f_32, 1, 1))
		{
			Local_58.f_263++;
			func_154("change_pose", "RDRO_Photo_Shop_Sounds", 1);
			Local_58.f_62 = 0;
			func_42(8);
			func_155();
			func_156();
			return;
		}
		if (func_142(Local_58.f_33))
		{
			if (func_152(Local_58.f_33, 0) != bVar0)
			{
				func_145(Local_58.f_33, bVar0, 1, 1);
			}
			if (func_153(Local_58.f_33, 0, 1))
			{
				Local_58.f_491 = (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 - 1);
				func_154("change_pose_variation", "RDRO_Photo_Shop_Sounds", 1);
				Local_58.f_62 = 1;
				func_42(8);
				func_155();
				func_156();
				return;
			}
			else if (func_153(Local_58.f_33, 1, 1))
			{
				Local_58.f_491 = Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 + 1;
				func_154("change_pose_variation", "RDRO_Photo_Shop_Sounds", 1);
				Local_58.f_62 = 0;
				func_42(8);
				func_155();
				func_156();
				return;
			}
		}
	}
	if (func_142(Local_58.f_36))
	{
		if (func_153(Local_58.f_36, 0, 1))
		{
			func_154("dpad_up", "RDRO_Photo_Shop_Sounds", 1);
			Local_58.f_63 = 1;
			func_42(9);
			func_156();
			return;
		}
		else if (func_153(Local_58.f_36, 1, 1))
		{
			func_154("dpad_down", "RDRO_Photo_Shop_Sounds", 1);
			Local_58.f_63 = 0;
			func_42(9);
			func_156();
			return;
		}
	}
	if (func_142(Local_58.f_38))
	{
		if (func_151())
		{
			if (!func_152(Local_58.f_38, 0))
			{
				func_145(Local_58.f_38, 1, 1, 1);
			}
		}
		if (func_157(Local_58.f_38, 1))
		{
			if (Global_1051832.f_4673.f_7 == 6)
			{
				TASK::_TASK_EMOTE_OUTRO(func_66());
				Local_58.f_48 = 0;
			}
			func_42(13);
			func_156();
			if (Local_19.f_7 < Local_19.f_8)
			{
				Local_58.f_497 = 1;
			}
			else
			{
				Local_58.f_497 = 0;
			}
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, func_158(Local_58.f_38)))
		{
			if (!func_159(2.185187E+31f, 0, 1))
			{
				func_160("SHOP_H_TOO_POOR_PH", 10000, 0, 0, 0, 1);
				func_154("UNAFFORDABLE", "HUD_SHOP_SOUNDSET", 1);
			}
			else if (Global_1051832.f_4673 && Global_1051832.f_4673.f_4 <= 1)
			{
				func_160("PHOTO_REQUIRE_MORE_POSSE", 10000, 0, 0, 0, 1);
			}
		}
	}
	if (func_142(Local_58.f_37))
	{
		if (func_161(Local_58.f_37, 1) == 1f)
		{
			func_42(15);
			func_156();
		}
	}
	if (func_142(Local_58.f_34))
	{
		bVar0 = (!Global_1051832.f_4673 || bVar1);
		bVar0 = (bVar0 && Global_1051832.f_4673.f_7 == 5);
		bVar0 = (bVar0 && Local_58.f_61);
		if (func_152(Local_58.f_34, 0) != bVar0)
		{
			func_145(Local_58.f_34, bVar0, 1, 1);
		}
		if (func_162())
		{
			func_156();
			func_163();
			func_154("Backdrop_Move", "RDRO_Photo_Shop_Sounds", 1);
			func_42(11);
		}
	}
	if (func_142(Local_58.f_35))
	{
		bVar0 = (!Global_1051832.f_4673 || bVar1);
		bVar0 = (bVar0 && Global_1051832.f_4673.f_7 == 5);
		if (func_152(Local_58.f_35, 0) != bVar0)
		{
			func_145(Local_58.f_35, bVar0, 1, 1);
		}
		if (func_164())
		{
			func_156();
			func_163();
			if (Global_1051832.f_4673)
			{
				if (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6 == 2)
				{
					func_154("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
				}
				else
				{
					func_154("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
				}
			}
			else if (Local_58.f_261 == 2)
			{
				func_154("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
			}
			else
			{
				func_154("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
			}
			func_42(12);
		}
	}
	if (func_142(Local_58.f_50))
	{
		bVar0 = Global_1051832.f_4673.f_7 == 5;
		if (func_152(Local_58.f_50, 0) != bVar0)
		{
			func_145(Local_58.f_50, bVar0, 1, 1);
		}
		if (func_157(Local_58.f_50, 1))
		{
			func_154("bumper_right", "RDRO_Photo_Shop_Sounds", 1);
			Local_58.f_31 = !Local_58.f_31;
			func_67();
			if (Local_58.f_31)
			{
				func_165(Local_58.f_50, "NET_INTERACT_OPTION_EMOTE_PARENT", 1);
			}
			else
			{
				func_165(Local_58.f_50, "NET_INTERACT_OPTION_EMOTE", 1);
			}
		}
	}
	func_166(Local_58.f_40, Local_58.f_41, 0);
	func_166(Local_58.f_42, Local_58.f_43, 3);
	func_166(Local_58.f_44, Local_58.f_45, 2);
	func_166(Local_58.f_46, Local_58.f_47, 1);
	if (func_142(Local_58.f_49))
	{
		if (func_167(Local_58.f_49, 1))
		{
			TASK::_0x6A1AF481407BF6E9(func_66());
		}
	}
	if (func_142(Local_58.f_39))
	{
		if (!func_75(1))
		{
			if (func_161(Local_58.f_39, 1) == 1f)
			{
				func_168();
				func_156();
				func_42(10);
			}
		}
	}
}

bool func_69(int iParam0)
{
	if (!func_77(&(Local_58.f_54)))
	{
		func_61(&(Local_58.f_54), 0);
	}
	else if (func_63(&(Local_58.f_54)) > iParam0)
	{
		func_64(&(Local_58.f_54));
		return true;
	}
	return false;
}

void func_70()
{
	if (Local_58.f_63 == 1)
	{
		Local_58.f_29++;
		if (Local_58.f_29 > 5)
		{
			Local_58.f_29 = 0;
		}
		func_58(Local_58.f_29);
	}
	else if (Local_58.f_63 == 0)
	{
		Local_58.f_29 = (Local_58.f_29 - 1);
		if (Local_58.f_29 < 0)
		{
			Local_58.f_29 = 5;
		}
		func_58(Local_58.f_29);
	}
}

bool func_71()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_58.f_117))
	{
		if (Global_1051832.f_4673)
		{
			iVar0 = Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5;
		}
		else
		{
			iVar0 = Local_58.f_260;
		}
		STREAMING::REQUEST_MODEL(iVar0, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return false;
		}
		Local_58.f_117 = OBJECT::CREATE_OBJECT(iVar0, Local_58.f_26, false, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_58.f_117, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_58.f_117, false, false);
		ENTITY::SET_ENTITY_ROTATION(Local_58.f_117, ENTITY::GET_ENTITY_ROTATION(Local_58.f_116, 2), 2, true);
	}
	if (Global_1051832.f_4673)
	{
		iVar1 = Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6;
	}
	else
	{
		iVar1 = Local_58.f_261;
	}
	if (iVar1 == 0)
	{
		fVar2 = (1f - Local_58.f_67);
	}
	else
	{
		fVar2 = (Local_58.f_67 + 1f);
	}
	if (fVar2 <= 1041865114)
	{
		fVar3 = (fVar2 / 1040187392);
	}
	else if (fVar2 >= 1062836634)
	{
		fVar3 = ((1f - fVar2) / 1040187392);
	}
	else
	{
		fVar3 = 1f;
	}
	if (fVar3 < 1028443341)
	{
		fVar3 = 1028443341; /* Float: 0.05f */
	}
	if (iVar1 == 0)
	{
		Local_58.f_67 = (Local_58.f_67 + ((fVar3 * 1058642330) * BUILTIN::TIMESTEP()));
	}
	else
	{
		Local_58.f_67 = (Local_58.f_67 + (((fVar3 * 1058642330) * -1f) * BUILTIN::TIMESTEP()));
	}
	if ((iVar1 == 0 && Local_58.f_67 >= 1f) || (iVar1 == 1 && Local_58.f_67 <= -1f))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_58.f_116))
		{
			ENTITY::SET_ENTITY_COORDS(Local_58.f_117, Local_58.f_26, true, false, true, true);
			OBJECT::DELETE_OBJECT(&(Local_58.f_116));
		}
		if (!Global_1051832.f_4673 || Local_58.f_240)
		{
			Local_58.f_67 = 0f;
			Local_58.f_116 = Local_58.f_117;
			Local_58.f_117 = 0;
			if (Global_1051832.f_4673)
			{
				Global_1051832.f_4673.f_6 = Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5;
			}
			else
			{
				Global_1051832.f_4673.f_6 = Local_58.f_260;
			}
			return true;
		}
	}
	else
	{
		MISC::GET_MODEL_DIMENSIONS(Local_58.f_89, &vVar4, &vVar7);
		vVar10 = { 0f, 0f, Local_58.f_67 };
		if (iVar1 == 0)
		{
			vVar13 = { vVar10 - Vector(1f, 0f, 0f) };
		}
		else
		{
			vVar13 = { vVar10 + Vector(1f, 0f, 0f) };
		}
		if (fVar2 < 1056964608)
		{
			func_52();
		}
		vVar10 = { vVar10 * FtoV(MISC::ABSF((vVar7.z - vVar4.z))) };
		vVar13 = { vVar13 * FtoV(MISC::ABSF((vVar7.z - vVar4.z))) };
		ENTITY::SET_ENTITY_COORDS(Local_58.f_116, Local_58.f_26 + vVar10, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(Local_58.f_117, Local_58.f_26 + vVar13, true, false, false, true);
		INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_58.f_116, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_33), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_33));
		INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_58.f_117, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_33), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_33));
	}
	return false;
}

bool func_72()
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_58.f_117))
	{
		if (!func_77(&(Local_58.f_493)))
		{
			if (Global_1051832.f_4673)
			{
				if (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6 == 2)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_L");
				}
				else
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_R");
				}
			}
			else if (Local_58.f_261 == 2)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_L");
			}
			else
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_R");
			}
			func_61(&(Local_58.f_493), 0);
		}
		if (Global_1051832.f_4673)
		{
			iVar0 = Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5;
		}
		else
		{
			iVar0 = Local_58.f_260;
		}
		STREAMING::REQUEST_MODEL(iVar0, false);
		if (STREAMING::HAS_MODEL_LOADED(iVar0) && func_63(&(Local_58.f_493)) > 250)
		{
			Local_58.f_117 = OBJECT::CREATE_OBJECT(iVar0, Local_58.f_26, false, true, false, false, true);
		}
		else
		{
			return false;
		}
		ENTITY::FREEZE_ENTITY_POSITION(Local_58.f_117, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_58.f_117, false, false);
		ENTITY::SET_ENTITY_ROTATION(Local_58.f_117, ENTITY::GET_ENTITY_ROTATION(Local_58.f_116, 2), 2, true);
		OBJECT::DELETE_OBJECT(&(Local_58.f_116));
	}
	func_52();
	if (!Global_1051832.f_4673 || Local_58.f_240)
	{
		if (func_77(&(Local_58.f_493)))
		{
			if (Global_1051832.f_4673)
			{
				if (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6 == 2)
				{
					GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("CameraTransitionWipe_L");
				}
				else
				{
					GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("CameraTransitionWipe_R");
				}
			}
			else if (Local_58.f_261 == 2)
			{
				GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("CameraTransitionWipe_L");
			}
			else
			{
				GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("CameraTransitionWipe_R");
			}
			func_64(&(Local_58.f_493));
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_R") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_L"))
		{
			return false;
		}
		Local_58.f_116 = Local_58.f_117;
		Local_58.f_117 = 0;
		if (Global_1051832.f_4673)
		{
			Global_1051832.f_4673.f_6 = Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5;
		}
		else
		{
			Global_1051832.f_4673.f_6 = Local_58.f_260;
		}
		return true;
	}
	return false;
}

void func_73(int iParam0)
{
	Local_19.f_22 = (Local_19.f_22 || iParam0);
}

void func_74()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(Local_58.f_77))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(Local_58.f_77);
	}
	func_154("Camera_Flash", "RDRO_Photo_Shop_Sounds", 1);
	Local_58.f_57 = 1;
}

bool func_75(int iParam0)
{
	return (Local_19.f_22 && iParam0) != 0;
}

void func_76(int iParam0)
{
	Local_561.f_52[iParam0] = 0;
	Local_561.f_36[iParam0] = 0;
	Local_561.f_44[iParam0] = 0;
	Local_561.f_82[iParam0] = 0;
	Local_561.f_90[iParam0] = 0;
	func_64(&(Local_561.f_60[iParam0 /*3*/]));
}

bool func_77(var uParam0)
{
	return func_169(*uParam0, 1);
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;

	func_170(iParam0, iParam1);
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, 2, false))
	{
		if (iVar0 != -3.273909E-18f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, 2, false, false);
		}
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, 4, false))
	{
		if (iVar0 != -3.273909E-18f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, 4, false, false);
		}
	}
}

int func_79(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iParam0 = (iParam0 % 7);
	if (iParam0 == 0)
	{
		return 7;
	}
	return iParam0;
}

bool func_80()
{
	struct<4> Var0;
	struct<2> Var5;
	int iVar10;
	int iVar11;
	struct<4> Var12;
	int iVar17;
	struct<16> Var18;
	int iVar34;

	Var0 = Global_1915643.f_20346[18];
	Var0.f_2 = 2.231723E-26f;
	Var0.f_3 = Local_58.f_264;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -2.972384E-26f;
		Var0.f_3 = -1.532509E-15f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&(Local_58.f_265), &Var0);
		Var5 = Global_1915643.f_20346[18];
		iVar10 = 0;
		Var0.f_2 = 1.197701E-08f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var5.f_1), &Var0))
		{
			iVar10 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var5, Var5.f_1);
		}
		iVar11 = 0;
		while (iVar11 < 11)
		{
			Local_58.f_281[iVar11 /*19*/] = 0;
			Local_58.f_281[iVar11 /*19*/].f_17 = 0;
			iVar11++;
		}
		Local_58.f_492 = 0;
		if (iVar10 > 0)
		{
			iVar11 = 0;
			while (iVar11 < iVar10)
			{
				func_171(&Var0, iVar11, iVar11);
				iVar11++;
			}
		}
		Var12 = Global_1915643.f_20346[18];
		iVar17 = 0;
		Var0.f_2 = 1.144766E+23f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var12.f_1), &Var0))
		{
			iVar17 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var12, Var12.f_1);
		}
		Local_58.f_492 = (Local_58.f_492 + iVar17);
		if (iVar17 > 0)
		{
			Var0.f_2 = -1.461006E+07f;
			Var0.f_3 = Local_58.f_491;
			if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var12.f_1), &Var0))
			{
				Var12.f_2 = -2.972384E-26f;
				Var12.f_3 = -2.886859E-05f;
				if (DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var18, &Var12))
				{
					Local_58.f_265 = { Var18 };
				}
				iVar34 = 0;
				Var12.f_2 = 1.197701E-08f;
				if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var5.f_1), &Var12))
				{
					iVar34 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var5, Var5.f_1);
				}
				if (iVar34 > 0)
				{
					iVar11 = 0;
					while (iVar11 < iVar34)
					{
						func_171(&Var12, iVar11, (iVar10 + iVar11));
						iVar11++;
					}
				}
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_81(int iParam0)
{
	Local_561.f_2 = iParam0;
}

struct<4> func_82(int iParam0)
{
	char cVar0[32];
	int iVar4;

	iVar4 = NETWORK::NET_TO_PED(Local_561.f_52[Local_659[iParam0 /*11*/].f_3]);
	if (PED::IS_PED_MALE(iVar4))
	{
		StringCopy(&cVar0, "MP_MALE_0", 32);
	}
	else
	{
		StringCopy(&cVar0, "MP_FEMALE_0", 32);
	}
	StringIntConCat(&cVar0, Local_659[iParam0 /*11*/].f_2, 32);
	return cVar0;
}

int func_83(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_172(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_84(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_85(bool bParam0)
{
	vector3 vVar0;

	if (!func_84(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_86()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_87(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -982726.7f) && func_173(bParam0, 8.497754E-37f))
	{
		iParam1 = 8.497754E-37f;
	}
	if (func_174(bParam0) || func_38(bParam0, 2.791187f))
	{
		return func_176(func_175(bParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_88(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_88(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_84(bParam0, 0))
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
		func_177(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_89(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_84(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_85(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_178(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_179(bParam0, 0);
	}
	if (func_180(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_102(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_181(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_102(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_90(bool bParam0)
{
	if (func_26() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_102(bParam0));
}

bool func_91(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_84(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_180(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_182(bParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_183(bParam0, bParam4, 0) };
	Var6 = { func_184(bParam0, Var1, Var1.f_4, bParam4) };
	return func_185(bParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_92(int iParam0)
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

int func_93(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_186(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_188(func_187(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_189(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_94(int iParam0, struct<17> Param1)
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

bool func_95(int iParam0, int iParam1)
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
	if (func_128(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_128(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_128(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_128(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_128(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_128(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_128(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_128(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_96()
{
	func_141(&(Local_58.f_34), 1, 1);
	func_141(&(Local_58.f_35), 1, 1);
	func_141(&(Local_58.f_32), 1, 1);
	func_141(&(Local_58.f_33), 1, 1);
	func_141(&(Local_58.f_36), 1, 1);
	func_141(&(Local_58.f_50), 1, 1);
	func_141(&(Local_58.f_38), 1, 1);
	func_141(&(Local_58.f_37), 1, 1);
	func_141(&(Local_58.f_39), 1, 1);
	func_141(&(Local_58.f_40), 1, 1);
	func_141(&(Local_58.f_41), 1, 1);
	func_141(&(Local_58.f_42), 1, 1);
	func_141(&(Local_58.f_43), 1, 1);
	func_141(&(Local_58.f_44), 1, 1);
	func_141(&(Local_58.f_45), 1, 1);
	func_141(&(Local_58.f_46), 1, 1);
	func_141(&(Local_58.f_47), 1, 1);
	func_141(&(Local_58.f_49), 1, 1);
}

void func_97()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(Local_58.f_75))
	{
		GRAPHICS::ANIMPOSTFX_STOP(Local_58.f_75);
	}
}

void func_98()
{
	int iVar0;
	int iVar1;

	if (AUDIO::_GET_ENTITY_AUDIO_MIX_GROUP(Local_58.f_51) == 3.905094E+16f)
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_58.f_51, 0f);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Local_561.f_52[iVar0] != 0)
		{
			iVar1 = NETWORK::NET_TO_ENT(Local_561.f_52[iVar0]);
			if (AUDIO::_GET_ENTITY_AUDIO_MIX_GROUP(iVar1) == -4.998369E-30f)
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar1, 0f);
			}
		}
		iVar0++;
	}
	if (Local_58.f_498 != -1)
	{
		AUDIO::STOP_STREAM(Local_58.f_498);
		Local_58.f_498 = -1;
	}
	func_190("MP007_PhotoStudio_Sceneset");
	AUDIO::_RELEASE_SOUNDSET("RDRO_Photo_Shop_Sounds");
}

void func_99(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (func_26() != 0)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iVar0))
		{
			NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(bParam1, bParam2, 256);
			Global_1051832.f_3747 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, Global_1051832.f_3747, bParam3);
		}
	}
	else if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iVar0))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, Global_1051832.f_3747, bParam3);
	}
}

bool func_100(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return false;
	}
	return true;
}

bool func_101(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_102(bool bParam0)
{
	if (func_26() == -1)
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

bool func_103(bool bParam0)
{
	return bParam0;
}

int func_104(bool bParam0, int iParam1)
{
	if (!func_191(bParam0, 2))
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

void func_105()
{
	Local_19.f_24 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION();
	if (Local_19.f_24 == 1)
	{
	}
	if (Local_19.f_24 == 0)
	{
		Local_19 = false;
		Local_19.f_7 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
		Local_19.f_8 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		Local_19.f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		Local_19.f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_19.f_9, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_106();
		Local_19.f_1 = 0;
		Local_19.f_2 = 1;
		Local_19.f_21 = MISC::GET_GAME_TIMER();
	}
	else if (Local_19.f_24 == 2)
	{
		Local_19 = true;
		Local_19.f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		Local_19.f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_19.f_9, "cameraRollCapacityLabel", "failed/failed");
		func_192();
		Local_19.f_1 = 0;
		Local_19.f_2 = 0;
	}
}

void func_106()
{
	StringCopy(&(Local_19.f_11), "", 32);
	MISC::_INT_TO_STRING(Local_19.f_7, "%i", &(Local_19.f_11));
	StringConCat(&(Local_19.f_11), " / ", 32);
	StringCopy(&(Local_19.f_15), "", 32);
	MISC::_INT_TO_STRING(Local_19.f_8, "%i", &(Local_19.f_15));
	StringConCat(&(Local_19.f_11), &(Local_19.f_15), 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_19.f_10, &(Local_19.f_11));
}

void func_107(int iParam0)
{
	Local_19.f_23 = iParam0;
}

int func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	int iVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	iVar4 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(uParam0, &Var0, bParam5);
	return iVar4;
}

int func_109()
{
	return Global_1893611.f_2;
}

bool func_110(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_111(int iParam0)
{
	char[] cVar0[8];

	if (!func_110(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1887363[iParam0 /*36*/].f_23;
}

int func_112()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_34);
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return "WATER_AURORA_BASIN";
		case joaat("WATER_BARROW_LAGOON"):
			return "WATER_BARROW_LAGOON";
		case joaat("WATER_BAYOU_NWA"):
			return "WATER_BAYOU_NWA";
		case joaat("WATER_BEARTOOTH_BECK"):
			return "WATER_BEARTOOTH_BECK";
		case joaat("WATER_CAIRN_LAKE"):
			return "WATER_CAIRN_LAKE";
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
		case joaat("WATER_DAKOTA_RIVER"):
			return "WATER_DAKOTA_RIVER";
		case joaat("WATER_DEADBOOT_CREEK"):
			return "WATER_DEADBOOT_CREEK";
		case joaat("WATER_DEWBERRY_CREEK"):
			return "WATER_DEWBERRY_CREEK";
		case joaat("WATER_ELYSIAN_POOL"):
			return "WATER_ELYSIAN_POOL";
		case joaat("WATER_FLAT_IRON_LAKE"):
			return "WATER_FLAT_IRON";
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return "WATER_HAWKS_EYE_CREEK";
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return "WATER_HEARTLANDS_OVERFLOW";
		case joaat("WATER_HOT_SPRINGS"):
			return "WATER_HOT_SPRINGS";
		case joaat("WATER_KAMASSA_RIVER"):
			return "WATER_KAMASSA_RIVER";
		case joaat("WATER_LAKE_DON_JULIO"):
			return "WATER_LAKE_DON_JULIO";
		case joaat("WATER_LAKE_ISABELLA"):
			return "WATER_LAKE_ISABELLA";
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return "WATER_LANNACHECHEE_RIVER";
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return "WATER_LITTLE_CREEK_RIVER";
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return "WATER_LOWER_MONTANA_RIVER";
		case joaat("WATER_MATTLOCK_POND"):
			return "WATER_MATTLOCK_POND";
		case joaat("WATER_MOONSTONE_POND"):
			return "WATER_MOONSTONE_POND";
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
		case joaat("WATER_OWANJILA"):
			return "WATER_OWANJILA";
		case joaat("WATER_RINGNECK_CREEK"):
			return "WATER_RINGNECK_CREEK";
		case joaat("WATER_SAN_LUIS_RIVER"):
			return "WATER_SAN_LUIS_RIVER";
		case joaat("WATER_SEA_OF_CORONADO"):
			return "WATER_SEA_OF_CORONADO";
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return "WATER_SOUTHFIELD_FLATS";
		case joaat("WATER_SPIDER_GORGE"):
			return "WATER_SPIDER_GORGE";
		case joaat("WATER_STILLWATER_CREEK"):
			return "WATER_STILLWATER_CREEK";
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return "WATER_UPPER_MONTANA_RIVER";
		case joaat("WATER_WHINYARD_STRAIT"):
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

int func_114()
{
	return Global_1896646.f_41;
}

bool func_115(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	if (func_26() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	if (func_26() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

void func_118(int iParam0)
{
	Local_19.f_22 = (Local_19.f_22 - (Local_19.f_22 && iParam0));
}

bool func_119(int iParam0)
{
	int iVar0;

	iVar0 = func_193(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

int func_120()
{
	if (Global_1915643.f_22504.f_1)
	{
		return func_194(152);
	}
	return func_194(Global_1915643.f_20241.f_1);
}

void func_121(int iParam0)
{
	if ((!Global_1051832.f_4673.f_1 || !Global_1051832.f_4673.f_2) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			Global_1051832.f_4673.f_1 = 1;
		}
		else
		{
			Global_1051832.f_4673.f_2 = 1;
		}
	}
}

void func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar1 = iParam0;
	iVar2 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
	{
		iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		if (Local_659[iVar3 /*11*/])
		{
			iVar1 = iVar3;
		}
	}
	if ((((Global_1051832.f_4673.f_7 == 5 || Global_1051832.f_4673.f_7 == 6) || Global_1051832.f_4673.f_7 == 7) || Global_1051832.f_4673.f_7 == 10) || ((Global_1051832.f_4673.f_7 == 1 || Global_1051832.f_4673.f_7 == 3) && Local_58.f_118 == 0))
	{
		if (Local_659[iVar1 /*11*/].f_5 != Local_659[iVar0 /*11*/].f_5 && Local_659[iVar1 /*11*/].f_5 != 0)
		{
			if (Global_1051832.f_4673.f_7 == 1 || Global_1051832.f_4673.f_7 == 3)
			{
				if (!Local_58.f_262)
				{
					Local_58.f_262 = 1;
				}
			}
			else
			{
				Local_659[iVar0 /*11*/].f_5 = Local_659[iVar1 /*11*/].f_5;
				Local_659[iVar0 /*11*/].f_6 = Local_659[iVar1 /*11*/].f_6;
				Local_58.f_239 = Local_659[iVar0 /*11*/].f_7;
				Local_659[iVar0 /*11*/].f_7 = Local_659[iVar1 /*11*/].f_7;
				if (Global_1051832.f_4673.f_7 == 6)
				{
					TASK::_TASK_EMOTE_OUTRO(func_66());
					Local_58.f_48 = 0;
				}
				func_156();
				if ((Local_659[iVar0 /*11*/].f_6 == 2 || Local_659[iVar0 /*11*/].f_6 == 3) || Local_58.f_262)
				{
					Local_58.f_262 = 0;
					func_163();
					if (Local_659[iVar0 /*11*/].f_6 == 2)
					{
						func_154("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
					}
					else
					{
						func_154("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
					}
					func_42(12);
				}
				else
				{
					func_163();
					func_154("Backdrop_Move", "RDRO_Photo_Shop_Sounds", 1);
					func_42(11);
				}
				return;
			}
		}
		if (Local_659[iVar1 /*11*/].f_8 != Local_659[iVar0 /*11*/].f_8 || Local_659[iVar1 /*11*/].f_9 != Local_659[iVar0 /*11*/].f_9)
		{
			if (Global_1051832.f_4673.f_7 == 6)
			{
				TASK::_TASK_EMOTE_OUTRO(func_66());
				Local_58.f_48 = 0;
			}
			if (Local_58.f_31)
			{
				Local_58.f_31 = 0;
			}
			Local_659[iVar0 /*11*/].f_8 = Local_659[iVar1 /*11*/].f_8;
			Local_659[iVar0 /*11*/].f_9 = Local_659[iVar1 /*11*/].f_9;
			if (!(Global_1051832.f_4673.f_7 == 1 || Global_1051832.f_4673.f_7 == 3))
			{
				func_42(8);
				func_155();
				func_156();
			}
		}
	}
}

void func_123()
{
	PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -7.654632E+14f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 4726281f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.885348E+21f, false);
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
	return uParam0;
}

bool func_126(int iParam0)
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

bool func_127(int iParam0)
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

bool func_128(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_129(int iParam0, var uParam1)
{
	if (!func_195(iParam0))
	{
		return 0;
	}
	if ((iParam0 == 28 || iParam0 == 29) || iParam0 == 33)
	{
		*uParam1 = 0;
		return 1;
	}
	if (func_26() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
		{
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051832.f_92[iParam0 /*75*/].f_21);
		}
		else
		{
			return 0;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1915643.f_3[iParam0 /*447*/].f_23))
	{
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1915643.f_3[iParam0 /*447*/].f_23);
	}
	else
	{
		return 0;
	}
	return 1;
}

float func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1051832.f_4673)
	{
		iVar0 = Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5;
	}
	else
	{
		iVar0 = Local_58.f_260;
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	Local_58.f_130 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < Local_58.f_237)
		{
			if (func_38(Local_58.f_132[iVar2], func_37(Local_58.f_130)))
			{
				Local_58.f_129 = iVar2;
				if (Global_1051832.f_4673)
				{
					Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5 = Local_58.f_167[iVar2];
					Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7 = Local_58.f_202[iVar2];
				}
				else
				{
					Local_58.f_260 = Local_58.f_167[iVar2];
				}
				return Local_58.f_167[iVar2];
			}
			iVar2++;
		}
		Local_58.f_130++;
		if (Local_58.f_130 >= 6)
		{
			Local_58.f_130 = 0;
		}
		iVar1++;
	}
	return 4.299891E-21f;
}

Vector3 func_131(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = BUILTIN::COS(vParam3.x);
	fVar1 = BUILTIN::SIN(vParam3.x);
	vVar2.x = vParam0.x;
	vVar2.f_1 = ((fVar0 * vParam0.y) - (fVar1 * vParam0.z));
	vVar2.f_2 = ((fVar1 * vParam0.y) + (fVar0 * vParam0.z));
	vParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam3.y);
	fVar1 = BUILTIN::SIN(vParam3.y);
	vVar2.x = ((fVar0 * vParam0.x) + (fVar1 * vParam0.z));
	vVar2.f_1 = vParam0.y;
	vVar2.f_2 = ((fVar0 * vParam0.z) - (fVar1 * vParam0.x));
	vParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam3.z);
	fVar1 = BUILTIN::SIN(vParam3.z);
	vVar2.x = ((fVar0 * vParam0.x) - (fVar1 * vParam0.y));
	vVar2.f_1 = ((fVar1 * vParam0.x) + (fVar0 * vParam0.y));
	vVar2.f_2 = vParam0.z;
	vParam0 = { vVar2 };
	return vParam0;
}

char* func_132(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PHST_LIGHTING_STANDARD"):
			return "standard_PL";
		case joaat("PHST_LIGHTING_SUNNY"):
			return "sunny_PL";
		case joaat("PHST_LIGHTING_SUNSET"):
			return "sunset_PL";
		case joaat("PHST_LIGHTING_INTERIOR"):
			return "interior_PL";
		case joaat("PHST_LIGHTING_NIGHT"):
			return "night_PL";
		default:
			break;
	}
	return "standard_PL";
}

char* func_133(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PHST_LIGHTING_STANDARD"):
			return "b_standard";
		case joaat("PHST_LIGHTING_SUNNY"):
			return "b_sunny";
		case joaat("PHST_LIGHTING_SUNSET"):
			return "b_sunset";
		case joaat("PHST_LIGHTING_INTERIOR"):
			return "b_interior";
		case joaat("PHST_LIGHTING_NIGHT"):
			return "b_night";
		default:
			break;
	}
	return "b_standard";
}

void func_134(int iParam0)
{
	Local_58.f_118 = iParam0;
}

Vector3 func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 1061158912 /* Float: 0.75f */, 0f, 0f;
		case 2:
			return -1086324736 /* Float: -0.75f */, 0f, 0f;
		case 3:
			return (1063675494 * 1056964608), -1086324736 /* Float: -0.75f */, 0f;
		case 4:
			return (1063675494 * -1090519040), -1086324736 /* Float: -0.75f */, 0f;
		case 5:
			return (1063675494 * 1069547520), -1086324736 /* Float: -0.75f */, 0f;
		case 6:
			return (1063675494 * -1077936128), -1086324736 /* Float: -0.75f */, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_136(char* sParam0, char* sParam1)
{
	AUDIO::_START_AUDIO_SCENESET(sParam0, sParam1);
}

void func_137(var uParam0)
{
	func_196(uParam0, 0f);
}

void func_138(char* sParam0, char* sParam1)
{
	AUDIO::_SET_AUDIO_SCENESET(sParam0, sParam1);
}

bool func_139(var uParam0)
{
	return func_169(*uParam0, 2);
}

int func_140()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_141(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_142(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_197(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_198(iVar0);
	*uParam0 = 0;
}

bool func_142(int iParam0)
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

int func_143(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_199(iVar0, 2))
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
		func_200(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 2f, 0, 1f, 0, 0, iParam2, 8.750548E+22f, 0);
		return iVar1;
	}
	return 0;
}

void func_144(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_197(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

void func_145(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_197(iParam0);
	if (bParam1)
	{
		func_201(iParam0, 4);
		if (bParam3)
		{
			func_202(iVar0, 1);
		}
		func_203(iVar0, 1);
	}
	else
	{
		func_204(iParam0, 4);
		func_203(iVar0, 0);
	}
}

int func_146(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_199(iVar0, 2))
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
		func_200(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, fParam6, fParam7, fParam8, bParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_147(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	float fVar1;

	if (func_205(iParam2, &bVar0))
	{
		switch (iParam2)
		{
			case 0:
				fVar1 = -1.149305E+31f;
				break;
			case 3:
				fVar1 = 7.401282E+30f;
				break;
			case 2:
				fVar1 = 1.798544E+23f;
				break;
			case 1:
				fVar1 = 36289.56f;
				break;
		}
		if (!func_142(*uParam0))
		{
			*uParam0 = func_146(func_207(func_206(bVar0), 4.808429E-35f), fVar1, 5, 570, 4000, 10, 2f, 0, 1f, 0, 3, -2.656165E+09f, 0);
			func_144(*uParam0, 13, 1, 1);
			func_144(*uParam0, 10, 1, 1);
			func_144(*uParam0, 14, 1, 1);
			func_144(*uParam0, 19, 1, 1);
			func_144(*uParam0, 20, 1, 1);
			func_144(*uParam0, 4, 1, 0);
			func_144(*uParam0, 2, 1, 0);
		}
		else
		{
			func_145(*uParam0, 1, 1, 1);
		}
		if (!func_142(*uParam1))
		{
			*uParam1 = func_146(func_207(func_206(bVar0), 4.808429E-35f), fVar1, 2, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_144(*uParam1, 13, 1, 1);
			func_144(*uParam1, 10, 1, 1);
			func_144(*uParam1, 14, 1, 1);
			func_144(*uParam1, 4, 1, 0);
			func_144(*uParam1, 2, 1, 0);
		}
		else
		{
			func_145(*uParam1, 1, 1, 1);
		}
		func_148(*uParam1, 0, 1);
	}
}

void func_148(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_197(iParam0);
	func_202(iVar0, bParam1);
}

char* func_149(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (!func_84(bParam0, 0))
	{
		Global_1051832.f_81 = 0;
		Global_1051832.f_46 = 0;
		return 0;
	}
	bVar1 = func_208(bParam0, &bVar0);
	if ((iParam2 && bVar1) || ((func_209() && bVar1) && iParam1 == 0))
	{
		if (func_210(bVar0, 0.003804697f, 0) && !func_211(bVar0, 0.003804697f))
		{
			Global_1051832.f_46 = 0;
			Global_1051832.f_81 = bParam0;
			return Global_1051832.f_46;
		}
		else if (func_210(bVar0, -2.401104E+18f, 0))
		{
			if (bParam3)
			{
				iVar2 = func_176(bVar0, -2.401104E+18f, 0, 1);
			}
			else
			{
				iVar2 = func_212(func_176(bVar0, -2.401104E+18f, 0, 1));
			}
			Global_1051832.f_46 = iVar2;
			Global_1051832.f_81 = bParam0;
			return Global_1051832.f_46;
		}
	}
	iVar3 = iParam1;
	if (iVar3 == 0)
	{
		iVar3 = func_213(bParam0, iVar3, 1, -1, 1);
	}
	bVar4 = false;
	if (func_214(bParam0))
	{
		bVar4 = func_215(bParam0);
	}
	else if (func_216(bParam0))
	{
		bVar4 = func_217(bParam0);
	}
	else if (func_218(bParam0))
	{
		bVar4 = func_219(bParam0);
	}
	else if (func_220(bParam0))
	{
		bVar4 = func_221(bParam0);
	}
	if (bVar4 != 0)
	{
		iVar2 = func_176(bVar4, iVar3, 0, bParam4);
		bVar5 = false;
		if (func_222(iVar3))
		{
			if (func_223(bVar4, 3.414007E-11f, iVar3, 1, bParam4) > 0)
			{
				bVar5 = true;
			}
		}
		if ((iVar3 == -2.401104E+18f || bVar5) && !bParam3)
		{
			iVar2 = func_212(iVar2);
		}
		Global_1051832.f_81 = bParam0;
		return iVar2;
	}
	if (iVar3 == 0.003804697f)
	{
		Global_1051832.f_81 = bParam0;
		Global_1051832.f_46 = 0;
		return 0;
	}
	else
	{
		iVar2 = func_87(bParam0, iVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_222(iVar3))
		{
			if (func_224(bParam0, 3.414007E-11f, iVar3, bParam4, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((iVar3 == -2.401104E+18f || bVar6) && !bParam3)
		{
			iVar2 = func_212(iVar2);
		}
		Global_1051832.f_46 = iVar2;
		Global_1051832.f_81 = bParam0;
		if (Global_1051832.f_82 != Global_1051832.f_81)
		{
			Global_1051832.f_82 = Global_1051832.f_81;
		}
		else
		{
			Global_1051832.f_82 = 0;
		}
		return iVar2;
	}
	Global_1051832.f_46 = 0;
	return -1;
}

void func_150(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_197(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

bool func_151()
{
	if (Local_19.f_1)
	{
		func_145(Local_58.f_38, 0, 1, 1);
		return false;
	}
	if (Local_19)
	{
		func_145(Local_58.f_38, 0, 1, 1);
		return false;
	}
	if (!func_159(2.185187E+31f, 0, 1))
	{
		func_145(Local_58.f_38, 0, 1, 1);
		return false;
	}
	if (Local_19.f_24 == 1)
	{
		func_145(Local_58.f_38, 0, 1, 1);
		return false;
	}
	if (Local_19.f_6)
	{
		func_145(Local_58.f_38, 0, 1, 1);
		return false;
	}
	if (Global_1051832.f_4673 && Global_1051832.f_4673.f_4 <= 1)
	{
		func_145(Local_58.f_38, 0, 1, 1);
		return false;
	}
	return true;
}

bool func_152(int iParam0, bool bParam1)
{
	if (bParam1 && !func_142(iParam0))
	{
		return false;
	}
	return !func_199(iParam0, 4);
}

bool func_153(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_142(iParam0))
	{
		return false;
	}
	iVar0 = func_197(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

void func_154(char* sParam0, char* sParam1, bool bParam2)
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

void func_155()
{
	int iVar0;

	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		if (Local_58.f_263 > Local_58.f_259)
		{
			Local_58.f_263 = 0;
		}
		else if (Local_58.f_263 < 0)
		{
			Local_58.f_263 = Local_58.f_259;
		}
		iVar0 = 0;
		if (Local_58.f_263 != 0)
		{
			iVar0 = Local_58.f_241[(Local_58.f_263 - 1)];
			Local_58.f_31 = 0;
		}
		if (Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8 != iVar0)
		{
			Local_58.f_491 = 0;
			Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8 = iVar0;
		}
		else if (Local_58.f_491 >= Local_58.f_492)
		{
			Local_58.f_491 = 0;
		}
		else if (Local_58.f_491 < 0)
		{
			Local_58.f_491 = (Local_58.f_492 - 1);
		}
		Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 = Local_58.f_491;
	}
	Local_58.f_264 = Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8;
	if (Local_58.f_264 == 0)
	{
		Local_58.f_492 = 0;
	}
	else
	{
		func_80();
	}
	Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_10 = 1;
}

void func_156()
{
	if (func_142(Local_58.f_34))
	{
		func_145(Local_58.f_34, 0, 1, 1);
	}
	if (func_142(Local_58.f_35))
	{
		func_145(Local_58.f_35, 0, 1, 1);
	}
	if (func_142(Local_58.f_32))
	{
		func_145(Local_58.f_32, 0, 1, 1);
	}
	if (func_142(Local_58.f_33))
	{
		func_145(Local_58.f_33, 0, 1, 1);
	}
	if (func_142(Local_58.f_36))
	{
		func_145(Local_58.f_36, 0, 1, 1);
	}
	if (func_142(Local_58.f_50))
	{
		func_145(Local_58.f_50, 0, 1, 1);
	}
	if (func_142(Local_58.f_38))
	{
		func_145(Local_58.f_38, 0, 1, 1);
	}
	func_225(Local_58.f_40);
	func_225(Local_58.f_42);
	func_225(Local_58.f_44);
	func_225(Local_58.f_46);
	if (func_142(Local_58.f_41))
	{
		func_145(Local_58.f_41, 0, 1, 1);
	}
	if (func_142(Local_58.f_43))
	{
		func_145(Local_58.f_43, 0, 1, 1);
	}
	if (func_142(Local_58.f_45))
	{
		func_145(Local_58.f_45, 0, 1, 1);
	}
	if (func_142(Local_58.f_47))
	{
		func_145(Local_58.f_47, 0, 1, 1);
	}
	if (func_142(Local_58.f_49))
	{
		func_145(Local_58.f_49, 0, 1, 1);
	}
	if (func_142(Local_58.f_37))
	{
		func_145(Local_58.f_37, 0, 1, 1);
	}
	if (func_142(Local_58.f_39))
	{
		func_145(Local_58.f_39, 0, 1, 1);
	}
}

bool func_157(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_142(iParam0))
	{
		return false;
	}
	iVar0 = func_197(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

int func_158(int iParam0)
{
	int iVar0;

	iVar0 = func_197(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return Global_1951897[iVar0 /*23*/].f_4;
}

bool func_159(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	var uVar1;
	int iVar3;
	var uVar4;
	var uVar5;
	char* sVar7;

	if (!func_84(bParam0, 0))
	{
		return false;
	}
	if (func_226(bParam0, 1) && !func_227(bParam0, 1))
	{
		return false;
	}
	if (iParam2 && func_208(bParam0, &bVar0))
	{
		if (func_210(bVar0, 0.003804697f, 0) && !func_211(bVar0, 0.003804697f))
		{
			return true;
		}
		else if (func_210(bVar0, -2.401104E+18f, 0))
		{
			return func_228(bVar0, -2.401104E+18f, &uVar1, 1, 0);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			iVar3 = func_213(bParam0, iVar3, 1, -1, 1);
		}
		else
		{
			iVar3 = iParam1;
		}
		if (iVar3 == 0)
		{
			return false;
		}
		sVar7 = func_149(bParam0, iVar3, 0, 1, 1);
		if (iVar3 == -2.401104E+18f)
		{
			return func_229(sVar7);
		}
		else if (iVar3 == -982726.7f)
		{
			return func_230(sVar7);
		}
		else if (iVar3 == 0.003804697f)
		{
			return true;
		}
		else
		{
			return func_231(bParam0, 1, iVar3, &uVar5, &uVar4, 1, 0, 0);
		}
	}
	return false;
}

int func_160(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

float func_161(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_142(iParam0))
	{
		return 0f;
	}
	iVar0 = func_197(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_162()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!Local_58.f_61)
	{
		return false;
	}
	fVar0 = PAD::GET_CONTROL_NORMAL(2, Local_58.f_60);
	if ((fVar0 > 1061158912 && Local_58.f_60 != -2.05188E-29f) && Local_58.f_129 < (Local_58.f_237 - 1))
	{
		bVar1 = true;
	}
	else if ((fVar0 < -1086324736 || (Local_58.f_60 == -2.05188E-29f && fVar0 > 1061158912)) && Local_58.f_129 > 0)
	{
		bVar2 = true;
	}
	if (bVar1 || bVar2)
	{
		iVar4 = Local_58.f_129;
		while (iVar4 < Local_58.f_237 && iVar4 >= 0)
		{
			if (bVar1)
			{
				iVar4++;
			}
			else
			{
				iVar4 = (iVar4 - 1);
			}
			if (iVar4 >= Local_58.f_237 || iVar4 < 0)
			{
			}
			else
			{
				if (func_38(Local_58.f_132[iVar4], func_37(Local_58.f_130)))
				{
					if (!bVar3)
					{
						Local_58.f_129 = iVar4;
						if (Global_1051832.f_4673)
						{
							Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5 = Local_58.f_167[iVar4];
							Local_58.f_239 = Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7;
							Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7 = Local_58.f_202[iVar4];
							if (bVar1)
							{
								Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6 = 0;
							}
							else
							{
								Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6 = 1;
							}
						}
						else
						{
							Local_58.f_260 = Local_58.f_167[iVar4];
							if (bVar1)
							{
								Local_58.f_261 = 0;
							}
							else
							{
								Local_58.f_261 = 1;
							}
						}
						if (Local_58.f_60 != -2.794596E+37f)
						{
							func_141(&(Local_58.f_34), 1, 1);
							Local_58.f_60 = -2.794596E+37f;
							Local_58.f_34 = func_146("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_58.f_60, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
							func_144(Local_58.f_34, 4, 1, 0);
						}
						bVar3 = true;
					}
					else
					{
						return true;
					}
				}
			}
		}
		if (bVar3)
		{
			if (bVar1)
			{
				func_141(&(Local_58.f_34), 1, 1);
				Local_58.f_60 = -2.05188E-29f;
				Local_58.f_34 = func_146("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_58.f_60, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
				func_144(Local_58.f_34, 4, 1, 0);
			}
			else
			{
				func_141(&(Local_58.f_34), 1, 1);
				Local_58.f_60 = -2.657632E+11f;
				Local_58.f_34 = func_146("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_58.f_60, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
				func_144(Local_58.f_34, 4, 1, 0);
			}
			return true;
		}
	}
	return false;
}

void func_163()
{
	if (!Global_1051832.f_4673)
	{
		return;
	}
	if (Local_58.f_239 == Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7)
	{
		return;
	}
	if (Local_58.f_239 != 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_58.f_238, func_133(Local_58.f_239), true, false);
	}
	Local_58.f_240 = 0;
}

bool func_164()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	fVar0 = PAD::GET_CONTROL_NORMAL(2, func_158(Local_58.f_35));
	if (fVar0 > 1061158912 || fVar0 < -1086324736)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (fVar0 > 1061158912)
			{
				Local_58.f_130++;
				if (Local_58.f_130 >= 6)
				{
					Local_58.f_130 = 0;
				}
			}
			else
			{
				Local_58.f_130 = (Local_58.f_130 - 1);
				if (Local_58.f_130 < 0)
				{
					Local_58.f_130 = 5;
				}
			}
			iVar2 = 0;
			bVar3 = false;
			Local_58.f_61 = 0;
			iVar2 = 0;
			while (iVar2 < Local_58.f_237)
			{
				if (func_38(Local_58.f_132[iVar2], func_37(Local_58.f_130)))
				{
					if (!bVar3)
					{
						Local_58.f_129 = iVar2;
						if (fVar0 > 1061158912)
						{
							Local_58.f_64 = 0;
						}
						else
						{
							Local_58.f_64 = 1;
						}
						if (Global_1051832.f_4673)
						{
							Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5 = Local_58.f_167[iVar2];
							Local_58.f_239 = Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7;
							Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7 = Local_58.f_202[iVar2];
							if (fVar0 > 1061158912)
							{
								Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6 = 2;
							}
							else
							{
								Local_659[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6 = 3;
							}
						}
						else
						{
							Local_58.f_260 = Local_58.f_167[iVar2];
							if (fVar0 > 1061158912)
							{
								Local_58.f_261 = 2;
							}
							else
							{
								Local_58.f_261 = 3;
							}
						}
						bVar3 = true;
					}
					else
					{
						Local_58.f_61 = 1;
					}
					else
					{
						iVar2++;
					}
					if (bVar3)
					{
						func_141(&(Local_58.f_34), 1, 1);
						Local_58.f_60 = -2.657632E+11f;
						Local_58.f_34 = func_146("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_58.f_60, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
						func_144(Local_58.f_34, 4, 1, 0);
						func_145(Local_58.f_34, Local_58.f_61, 1, 1);
						return true;
					}
					iVar1++;
					return false;
				}
			}
		}
	}
}

void func_165(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_197(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, sParam1);
}

void func_166(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (func_142(iParam0))
	{
		if (Global_1051832.f_4673.f_7 != 6 && Global_1051832.f_4673.f_7 != 13)
		{
			if (func_232(iParam0, 1))
			{
				bVar0 = true;
				if (func_205(iParam2, &iVar1))
				{
					TASK::TASK_PLAY_EMOTE_WITH_HASH(func_66(), func_233(iParam2), 1, iVar1, true, false, false, true, false);
					Local_58.f_48 = iParam0;
					func_42(6);
					func_156();
					func_145(Local_58.f_38, 1, 1, 1);
					func_145(Local_58.f_49, 1, 1, 1);
					func_148(Local_58.f_49, 1, 1);
				}
			}
		}
		else if (!func_232(iParam0, 1) && Local_58.f_48 == iParam0)
		{
			func_145(iParam0, 0, 1, 1);
			func_145(Local_58.f_49, 0, 1, 1);
			func_148(Local_58.f_49, 0, 1);
			TASK::_TASK_EMOTE_OUTRO(func_66());
			Local_58.f_48 = 0;
		}
	}
	if (func_142(iParam1))
	{
		if (func_167(iParam1, 1))
		{
			bVar0 = true;
			if (func_205(iParam2, &iVar2))
			{
				TASK::TASK_PLAY_EMOTE_WITH_HASH(func_66(), func_234(iParam2), 2, iVar2, false, true, false, true, false);
				Local_58.f_48 = iParam0;
				func_156();
				func_145(Local_58.f_38, 1, 1, 1);
				func_42(7);
			}
		}
	}
	if (bVar0)
	{
		Global_1051832.f_4673.f_5 = iParam2;
	}
}

bool func_167(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_142(iParam0))
	{
		return false;
	}
	iVar0 = func_197(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_168()
{
	UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

bool func_169(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;

	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0);
	iVar1 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam1);
	if (iVar0 == 0 || iVar1 == 0)
	{
		return;
	}
	if (!INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iVar0, &uVar6, 8.681942E-06f, -1.942248E+12f, &uVar2))
	{
	}
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(iVar0, iVar1, &uVar2, 0);
}

void func_171(bool bParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	var uVar7;

	bParam0->f_2 = 1.699316E-28f;
	bParam0->f_3 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), bParam0))
	{
		iVar5 = 0;
		Var0 = Global_1915643.f_20346[18];
		Var0.f_2 = 5.578665E-35f;
		Var0.f_3 = -1.488841E-28f;
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar5, &Var0) && iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iParam2)
			{
				if (Local_58.f_281[iVar6 /*19*/] == iVar5)
				{
					iVar5 += 7;
				}
				iVar6++;
			}
			Local_58.f_281[iParam2 /*19*/] = iVar5;
			Var0.f_2 = -2.972384E-26f;
			Var0.f_3 = -9.986539E+07f;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(Local_58.f_281[iParam2 /*19*/].f_1), &Var0);
			Var0.f_3 = 2.96954E-27f;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(Local_58.f_281[iParam2 /*19*/].f_9), &Var0);
			Var0.f_2 = -2.130137E-12f;
			Var0.f_3 = -9.865934E+27f;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar7, &Var0);
			Local_58.f_281[iParam2 /*19*/].f_17 = uVar7;
			Local_58.f_281[iParam2 /*19*/].f_18 = -1;
			if (Local_58.f_281[iParam2 /*19*/].f_17 == 9.63511E+25f)
			{
				func_235(iParam2);
			}
		}
	}
}

void func_172(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_236(iParam0, 0, 1);
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
			func_237(iParam0, 0);
			bVar0 = true;
		}
		func_238(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_173(bool bParam0, int iParam1)
{
	if (!func_84(bParam0, 0))
	{
		return false;
	}
	if (func_174(bParam0) || func_38(bParam0, 2.791187f))
	{
		return func_210(func_175(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

bool func_174(bool bParam0)
{
	if (func_38(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_175(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_84(bParam0, 0))
	{
		return func_239(func_103(bParam0), bParam1);
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

int func_176(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_240(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

void func_177(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_241((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_178(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_84(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_85(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_38(bParam0, 9.811189E+11f))
	{
		func_242(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_179(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_33(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_244(&Var0, func_243(0));
	}
	if (!func_34(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_36(iVar18);
	return iVar19;
}

int func_180(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_191(func_103(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

struct<4> func_181(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_183(bParam0, bParam1, 0) };
	return func_184(bParam0, Var0, Var0.f_4, bParam1);
}

int func_182(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_245(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_180(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_90(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_246(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_247(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_93(7.184882E+22f, &Var65, 1);
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
			func_94(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_102(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_183(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_248(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_85(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_184(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_243(bParam1) };
			if (iParam2 && func_249(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_250(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_250(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_251(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_252(bParam1) };
			switch (func_241(bParam0))
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
			if (func_253(bParam0, -2.580501E-27f))
			{
				Var0 = { func_184(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_253(bParam0, -4.220332E-15f))
			{
				Var0 = { func_184(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_184(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_253(bParam0, -3.171238E-21f))
			{
				Var0 = { func_184(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_254(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_253(bParam0, -3.171238E-21f))
			{
				Var0 = { func_184(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_184(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_84(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_102(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_185(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_245(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_254(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_90(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_26() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_93(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_94(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_102(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_186(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_255(iParam1->f_8, iParam0, iVar0, 2048) || func_255(iParam1->f_8, iParam0, iVar0, 32768)) || func_255(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_255(iParam1->f_8, iParam0, iVar0, 4) || func_255(iParam1->f_8, iParam0, iVar0, 256)) || func_255(iParam1->f_8, iParam0, iVar0, 65536)) || func_255(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_255(iParam1->f_8, iParam0, iVar0, 1) || func_255(iParam1->f_8, iParam0, iVar0, 8)) || func_255(iParam1->f_8, iParam0, iVar0, 65536)) || func_255(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_255(iParam1->f_8, iParam0, iVar0, 1) || func_255(iParam1->f_8, iParam0, iVar0, 16)) || func_255(iParam1->f_8, iParam0, iVar0, 2)) || func_255(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_255(iParam1->f_8, iParam0, iVar0, 8) || func_255(iParam1->f_8, iParam0, iVar0, 4096)) || func_255(iParam1->f_8, iParam0, iVar0, 256)) || func_255(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_187(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_188(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_256(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_256(iParam1, 2, 0, 0);
	return -1;
}

int func_189(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_256(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_190(char* sParam0)
{
	AUDIO::_STOP_AUDIO_SCENESET(sParam0);
}

bool func_191(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

void func_192()
{
	StringCopy(&(Local_19.f_11), "-", 32);
	StringConCat(&(Local_19.f_11), " / ", 32);
	StringCopy(&(Local_19.f_15), "-", 32);
	StringConCat(&(Local_19.f_11), &(Local_19.f_15), 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_19.f_10, &(Local_19.f_11));
}

int func_193(int iParam0)
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

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -6.678279E+09f;
		case 6:
			return 5.092616E-23f;
		case 7:
			return 0.08901188f;
		case 8:
			return -1958.136f;
		case 19:
			return 1.757544E+13f;
		case 13:
			return 3.930592E-06f;
		case 14:
			return 5.223587E-29f;
		case 15:
			return -1.052651E+23f;
		case 12:
			return -5.816004E-34f;
		case 122:
			return 6.001663E+28f;
		case 123:
			return -5.778385E+09f;
		case 5:
			return 7.941624E+18f;
		case 9:
			return -5.145404E-15f;
		case 10:
			return -4.620579E+31f;
		case 11:
			return -2023770f;
		case 16:
			return 2.931569E-07f;
		case 17:
			return 1.092197E+32f;
		case 18:
			return 2.132098E+27f;
		case 23:
			return 2.946846E-31f;
		case 24:
			return 3.221863E-32f;
		case 25:
			return -1.071896E-20f;
		case 22:
			return 2836841f;
		case 26:
			return -1.583762E+32f;
		case 45:
			return -559756.6f;
		case 48:
			return 1.891847E-07f;
		case 46:
			return 3.209415E-27f;
		case 49:
			return -0.001697428f;
		case 42:
			return 3.415819E-32f;
		case 43:
			return 2.619793E-33f;
		case 44:
			return 0.0001756163f;
		case 50:
			return -1.314186E+17f;
		case 51:
			return -13861.96f;
		case 52:
			return 7.656175E-30f;
		case 53:
			return -8.745837E+37f;
		case 63:
			return -1.646639E+21f;
		case 56:
			return 1.11115E+13f;
		case 57:
			return -2.158932E+24f;
		case 60:
			return -2.074173E-38f;
		case 124:
			return 7.61699E+14f;
		case 125:
			return -1.392405E-19f;
		case 54:
			return 6.589171E+22f;
		case 55:
			return 1.156345E-20f;
		case 59:
			return -1.659592E-06f;
		case 58:
			return 3.946506E-35f;
		case 61:
			return -5.605502E-10f;
		case 62:
			return -3.081603E-38f;
		case 27:
			return -1.891411E+11f;
		case 28:
			return -4.238571E-26f;
		case 33:
			return 0.001610436f;
		case 31:
			return 1.055256E-27f;
		case 34:
			return 2.704235E-11f;
		case 35:
			return 1.446313E-28f;
		case 30:
			return 1.328889E-24f;
		case 39:
			return -1.990651E-06f;
		case 126:
			return 2.271166E+18f;
		case 29:
			return -4.124625E-13f;
		case 36:
			return 5.755767E-28f;
		case 37:
			return -6.40899E+13f;
		case 38:
			return -1430.345f;
		case 68:
			return 2.766683E+36f;
		case 69:
			return 7.8227E-06f;
		case 70:
			return 5.290563E+31f;
		case 71:
			return 1.985556E-17f;
		case 74:
			return -6.774944E+25f;
		case 127:
			return -3.091904E+32f;
		case 75:
			return -2.34763E-33f;
		case 72:
			return -9.884961E+18f;
		case 73:
			return 2.526965E+12f;
		case 83:
			return 9.748861E-16f;
		case 84:
			return -1.269082E+11f;
		case 85:
			return 4.319876E+13f;
		case 78:
			return 1.85519E-13f;
		case 87:
			return 1.119544E-12f;
		case 86:
			return 2.286067E-24f;
		case 82:
			return -1.186129E-24f;
		case 88:
			return 3.414019E+18f;
		case 81:
			return 139.4352f;
		case 91:
			return 7.167645E+19f;
		case 90:
			return -9.661501E+22f;
		case 120:
			return 3.526101E+21f;
		case 121:
			return 7.501371E-10f;
		case 77:
			return 2980.293f;
		case 79:
			return -1.801417E+24f;
		case 80:
			return -2.879967E-28f;
		case 89:
			return 1.105674E-10f;
		case 41:
			return 2.930603E+16f;
		case 98:
			return -3.188065E+25f;
		case 97:
			return 7.757542E-31f;
		case 93:
			return 2.462378E+13f;
		case 96:
			return -6.893608E-07f;
		case 94:
			return 3.550023E+16f;
		case 95:
			return 4.790249E-22f;
		case 128:
			return 8.133306E-16f;
		case 129:
			return -3.93835E-33f;
		case 0:
			return 80.73424f;
		case 1:
			return 1.347958E-16f;
		case 2:
			return -2.773782E-31f;
		case 101:
			return 1.558923E-35f;
		case 99:
			return 2.294131E-19f;
		case 100:
			return 1.213295E+29f;
		case 119:
			return -1.091912E-28f;
		case 133:
			return -1.264382f;
		case 152:
			return -3.515305E-20f;
		case 176:
			return 1.64784E+23f;
		case 177:
			return 5.003018f;
		case 178:
			return -2.562252E-20f;
		case 153:
			return 41.27814f;
		case 154:
			return 1.567787E-33f;
		case 147:
			return 4.415405E-32f;
		case 135:
			return 2.550329E+22f;
		case 136:
			return 2.77422E-16f;
		case 137:
			return 5.798392E+08f;
		case 138:
			return -1.004019E-28f;
		case 139:
			return -2.627055E+13f;
		case 140:
			return -4.514173E+36f;
		case 141:
			return -5.76357E-22f;
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
		case 143:
			return -4.480066E+07f;
		case 144:
			return 3.128354E+36f;
		case 145:
			return 4.82799E-20f;
		case 146:
			return 6.391131E+21f;
		case 47:
			return 0.03729688f;
		case 32:
			return 0.03729688f;
		case 21:
			return 0.03729688f;
		case 115:
			return 0.03729688f;
		case 92:
			return 0.03729688f;
		case 131:
			return 0.03729688f;
		case 20:
			return 0.03729688f;
		case 134:
			return -2.455795E+11f;
		case 179:
			return 2766996f;
		case 155:
			return -1.587301E+29f;
		case 156:
			return -4.606836E+28f;
		case 157:
			return 3.452008E-36f;
		case 158:
			return NaNf;
		case 67:
			return 4.921621E+16f;
		case 159:
			return 99.39199f;
		case 160:
			return -6.702547E-32f;
		case 161:
			return 6.240672E+34f;
		case 162:
			return 6.10996E-29f;
		case 65:
			return 4.325683E+11f;
		case 164:
			return 2.713322E+14f;
		case 165:
			return -14.89222f;
		case 166:
			return 9475.513f;
		case 167:
			return 5.074196E+37f;
		case 64:
			return 2.039205E-07f;
		case 168:
			return -3.945631E+20f;
		case 169:
			return -2.244019E+15f;
		case 170:
			return 1.756121E+18f;
		case 171:
			return 4.81626E+24f;
		case 172:
			return -9.719926E-38f;
		case 173:
			return 6.080284E+09f;
		case 174:
			return -2.116756E+30f;
		case 175:
			return 9.219983E-29f;
		case 66:
			return -2.27383E-36f;
		case 163:
			return -2.288724E+21f;
		case 108:
			return -2.075817E-25f;
		case 110:
			return -1.942438E-14f;
		case 109:
			return -4.915344E+09f;
		case 111:
			return 9.586019E+08f;
		case 112:
			return 9.236639E-23f;
		case 113:
			return -6.715591E-15f;
		case 114:
			return -0.01589598f;
		case 102:
			return -1.566179E-15f;
		case 105:
			return -1.044305E-38f;
		case 106:
			return NaNf;
		case 103:
			return -1.510513E-27f;
		case 104:
			return 3.068801E-32f;
		case 107:
			return -1.991238E-18f;
		case 116:
			return 6.552451f;
		case 130:
			return -1.047896E+19f;
		case 117:
			return 4.402083E-23f;
		case 118:
			return 1.206669E+09f;
		case 3:
			return 3.046649E-19f;
		case 4:
			return 3.120933E-30f;
		case 40:
			return -8.109014E+27f;
		case 76:
			return 0.009586659f;
		case 148:
			return 1852492f;
		case 149:
			return 2.747603E+32f;
		case 150:
			return 1.447315E-27f;
		case 151:
			return 6.372948E+12f;
		default:
			break;
	}
	return 0;
}

bool func_195(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

void func_196(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_257() - fParam1);
	func_258(uParam0, 1);
	func_259(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_197(int iParam0)
{
	return iParam0;
}

void func_198(int iParam0)
{
	if (!func_260(iParam0))
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

bool func_199(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_200(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_202(iParam0, 1);
	func_203(iParam0, 1);
	func_204(iParam0, 128);
}

void func_201(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_202(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_199(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_203(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_204(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_205(int iParam0, bool bParam1)
{
	return func_261(&(Global_17418.f_55.f_2501), iParam0, bParam1);
}

char* func_206(bool bParam0)
{
	bool bVar0;

	if (!func_84(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_262(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

char* func_207(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_263(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_208(bool bParam0, bool bParam1)
{
	bool bVar0;
	struct<5> Var1;

	*bParam1 = 0;
	if (!func_84(bParam0, 0))
	{
		return 0;
	}
	if (!func_38(bParam0, 2.791187f))
	{
		if (func_264(bParam0))
		{
			return 0;
		}
	}
	if (func_38(bParam0, 5.144831E-36f) || func_38(bParam0, 8.874786E+09f))
	{
		return 0;
	}
	if (func_174(bParam0))
	{
		return 0;
	}
	bVar0 = func_175(bParam0, 1);
	if (bVar0 == 0)
	{
		return 0;
	}
	if (!func_210(bVar0, -2.401104E+18f, 0))
	{
		return 0;
	}
	if (Global_1915643.f_22504.f_2 == 1)
	{
		Var1 = { func_183(bParam0, 0, 0) };
		if (Var1.f_4 == 4.978612f)
		{
			return 0;
		}
	}
	*bParam1 = bVar0;
	return 1;
}

bool func_209()
{
	return Global_1915643.f_22477;
}

bool func_210(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_265(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_211(bParam0, iParam1);
	}
	return true;
}

bool func_211(bool bParam0, bool bParam1)
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

int func_212(int iParam0)
{
	return (iParam0 / 100);
}

int func_213(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_84(bParam0, 0))
	{
		return 0;
	}
	if (func_174(bParam0) || func_38(bParam0, 2.791187f))
	{
		return func_267(func_175(bParam0, 0), iParam1, bParam2, iParam3, func_266(bParam0));
	}
	if (func_268(bParam0, bParam4) || func_269(bParam0))
	{
		iParam1 = 0.003804697f;
	}
	else if (func_266(bParam0) && (func_270(bParam0, &iVar0) || func_271(bParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_173(bParam0, -2.401104E+18f);
		bVar2 = func_173(bParam0, -982726.7f);
		if (bVar1 && !bVar2)
		{
			iParam1 = -2.401104E+18f;
		}
		else if (bVar2 && bVar1)
		{
			if (func_209())
			{
				iParam1 = -2.401104E+18f;
			}
			else
			{
				iParam1 = -982726.7f;
			}
		}
		else if (bVar2)
		{
			iParam1 = -982726.7f;
		}
		else if (func_272(15) && func_173(bParam0, 1.109321E-25f))
		{
			iParam1 = 1.109321E-25f;
		}
		else
		{
			iParam1 = 0;
		}
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

bool func_214(bool bParam0)
{
	return func_241(bParam0) == -947.1324f;
}

int func_215(bool bParam0)
{
	if (!func_214(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case -2068637111: /* GXTEntry: "The Copperhead Enforcer" */
			return -3.285949E+13f;
		case -1871922677: /* GXTEntry: "The Blackrose Bounty Hunter" */
			return 5.762361E+10f;
		case -905031115: /* GXTEntry: "The Grizzlies Outlaw" */
			return -8.272988E+24f;
		case 1928115537: /* GXTEntry: "The Déchaux" */
			return 1.791106E-31f;
		case 453281150: /* GXTEntry: "The Mercer" */
			return -1.997163E+35f;
		case 153739721: /* GXTEntry: "The Schefield" */
			return -2.431348E+24f;
		case 1167678119: /* GXTEntry: "The Hettinger" */
			return -2.406163E+13f;
		case 736667462: /* GXTEntry: "The Ajaccio" */
			return -7.003636E+25f;
		case -673644764: /* GXTEntry: "The Tasman" */
			return -3.206121E+36f;
		case -980133221: /* GXTEntry: "The Zacateca" */
			return 2.434618E-35f;
		case -209930641: /* GXTEntry: "The Clayton" */
			return -2.456843E-24f;
		case -1735897526: /* GXTEntry: "The Wakeeney" */
			return -7.333456E+37f;
		case -482614352: /* GXTEntry: "The Wakeeney" */
			return -3.950906E+29f;
		case -1258944731: /* GXTEntry: "The Wakeeney" */
			return -8.711066E+17f;
		case 1536480356: /* GXTEntry: "The Wakeeney" */
			return -4.199621E+09f;
		case 1827632921: /* GXTEntry: "The Wakeeney" */
			return -0.0003483712f;
		case -1483084691: /* GXTEntry: "The Wakeeney" */
			return -2.224576E-12f;
		case -1855140882: /* GXTEntry: "The Bullard" */
			return -3.230598E+38f;
		case -1605932637: /* GXTEntry: "The Bullard" */
			return 2.70872E-28f;
		case 838274308: /* GXTEntry: "The Bullard" */
			return -3.142608E-28f;
		case 1423463110: /* GXTEntry: "The Bullard" */
			return 5.617801E+22f;
		case 1722021469: /* GXTEntry: "The Bullard" */
			return 2.560422E+33f;
		case 1293960018: /* GXTEntry: "The Bullard" */
			return 22988.79f;
		case 1084020314: /* GXTEntry: "The Garwood" */
			return -1.047537E-09f;
		case 1384905272: /* GXTEntry: "The Garwood" */
			return -1.893466E-20f;
		case 166258931: /* GXTEntry: "The Garwood" */
			return -3.777814E-31f;
		case -285691117: /* GXTEntry: "The Garwood" */
			return 8.258599E+35f;
		case -1506238056: /* GXTEntry: "The Garwood" */
			return 2.748126E-05f;
		case -141245365: /* GXTEntry: "The Garwood" */
			return -1.946228E-16f;
		case 962175652: /* GXTEntry: "The Carthage" */
			return 2.83108E+10f;
		case 687079897: /* GXTEntry: "The Carthage" */
			return -4.618553E+23f;
		case 373021801: /* GXTEntry: "The Carthage" */
			return -1.196108E+32f;
		case 75839740: /* GXTEntry: "The Carthage" */
			return -3.027847E+35f;
		case -208529642: /* GXTEntry: "The Carthage" */
			return 1.495951E-24f;
		case -504466477: /* GXTEntry: "The Carthage" */
			return -3.280089E+08f;
		case -1896067425: /* GXTEntry: "The Wentworth" */
			return -4.237919E+30f;
		case -1732419039: /* GXTEntry: "The Wentworth" */
			return 6.96756E-37f;
		case 1620668890: /* GXTEntry: "The Wentworth" */
			return 3.534025E-25f;
		case 2095557238: /* GXTEntry: "The Wentworth" */
			return 1.974315E-24f;
		case -700719823: /* GXTEntry: "The Wentworth" */
			return 4.536867E-13f;
		case -520949089: /* GXTEntry: "The Wentworth" */
			return 0.04651987f;
		case 783963696: /* GXTEntry: "The Wallingford" */
			return -1.769255E-22f;
		case 477409701: /* GXTEntry: "The Wallingford" */
			return -2.325254E+35f;
		case 325427079: /* GXTEntry: "The Wallingford" */
			return -4.227626E+07f;
		case -2127824110: /* GXTEntry: "The Wallingford" */
			return -1.868177E+18f;
		case -478920799: /* GXTEntry: "The Wallingford" */
			return -7.659907E-10f;
		case -784753876: /* GXTEntry: "The Wallingford" */
			return 152.7005f;
		case -1991069642: /* GXTEntry: "The Gladewater" */
			return 1.583741E+19f;
		case 1534579841: /* GXTEntry: "The Gladewater" */
			return 6.799183E+15f;
		case 1755770591: /* GXTEntry: "The Gladewater" */
			return 0.008179452f;
		case 852591413: /* GXTEntry: "The Gladewater" */
			return -1.671268E-07f;
		case -1269692868: /* GXTEntry: "The Gladewater" */
			return -8.789632E-16f;
		case -1638540740: /* GXTEntry: "The Gladewater" */
			return -1.293673E+22f;
		case 1404368072: /* GXTEntry: "The Londonderry" */
			return -5.411146E-22f;
		case 561909851: /* GXTEntry: "The Londonderry" */
			return -2.537267E-11f;
		case 1369829534: /* GXTEntry: "The Londonderry" */
			return 2.895282E+38f;
		case 669687080: /* GXTEntry: "The Londonderry" */
			return -3.004937E-28f;
		case 908671397: /* GXTEntry: "The Londonderry" */
			return -6.62976E-18f;
		case -50313388: /* GXTEntry: "The Londonderry" */
			return -2.144196E-07f;
		case 896138350: /* GXTEntry: "The Monterey" */
			return -2.06615E+15f;
		case -1347489546: /* GXTEntry: "The Monterey" */
			return -1.545265E+07f;
		case -1127937242: /* GXTEntry: "The Monterey" */
			return -7.466492E+37f;
		case -821055557: /* GXTEntry: "The Monterey" */
			return 1.704003E-20f;
		case -666844643: /* GXTEntry: "The Monterey" */
			return 3.753521E-29f;
		case 1507149124: /* GXTEntry: "The Monterey" */
			return 61.55462f;
		case 1797068311: /* GXTEntry: "The Sunderland" */
			return 2.358636E-23f;
		case 1509389260: /* GXTEntry: "The Sunderland" */
			return -1.967847E-33f;
		case 1196052082: /* GXTEntry: "The Sunderland" */
			return 4.565281E+13f;
		case 914074837: /* GXTEntry: "The Sunderland" */
			return -905.7808f;
		case 599099209: /* GXTEntry: "The Sunderland" */
			return -2.238962E-19f;
		case 774216741: /* GXTEntry: "The Sunderland" */
			return -4.487284E-30f;
		case 180232641: /* GXTEntry: "The Worthington" */
			return -1.119912E-23f;
		case -1597878813: /* GXTEntry: "The Worthington" */
			return -1.536338E-17f;
		case -895311481: /* GXTEntry: "The Worthington" */
			return -3.052666E-21f;
		case -2075290374: /* GXTEntry: "The Worthington" */
			return -31613.13f;
		case -1349063796: /* GXTEntry: "The Worthington" */
			return 1.436807E+35f;
		case 1649135863: /* GXTEntry: "The Worthington" */
			return 9.466807E+26f;
		case 10498108: /* GXTEntry: "The Tyringham" */
			return -1.506119E-05f;
		case 317576407: /* GXTEntry: "The Tyringham" */
			return -1170.297f;
		case -803057859: /* GXTEntry: "The Tyringham" */
			return -3.243458E+16f;
		case -229076051: /* GXTEntry: "The Tyringham" */
			return -9.110928E-08f;
		case -1445559642: /* GXTEntry: "The Tyringham" */
			return -45.06712f;
		case -1140185331: /* GXTEntry: "The Tyringham" */
			return -2.181795E+14f;
		case 913153433:
			return 6.02028E-32f;
		case 606730510:
			return -9.956359E-33f;
		case -964051505:
			return 0.01536118f;
		case -1267459676:
			return 3.634253E-16f;
		case -483756272:
			return 2.064683E+12f;
		case -805187393:
			return -1.931095E+11f;
		case -1116096467:
			return 1.17126E+26f;
		case -4997980:
			return 1.091269E+15f;
		case -305588017:
			return -1.432989E+16f;
		case -694850968:
			return -3.329599E+07f;
		case -985380922:
			return -0.09419774f;
		case 974827889:
			return -2.130991E-10f;
		case -1156770257:
			return -1.06927E+10f;
		case -843695231:
			return 8.114789E+37f;
		case 1854078224:
			return -1.035175E-21f;
		case -2137185980:
			return 3.307489E-22f;
		case -1830566447:
			return 2.038346E-35f;
		case -1537546049:
			return -390.474f;
		case 469166476:
			return -4.992132E+37f;
		case 1229079574:
			return -2.671688E+07f;
		case 990422947:
			return 1.807599E-36f;
		case -229665218:
			return -1.353163E+29f;
		case -527568197:
			return 1.860282E-14f;
		case 242634379:
			return 6.710602E-06f;
		case -521123265:
			return -3.177446E-23f;
		case 766501761:
			return 1.763883E+24f;
		case -1135443708:
			return 8.006464E+37f;
		case 609997105:
			return 6.004272E+07f;
		case 378877348:
			return 2.978815E+16f;
		case -938370918:
			return 79.7342f;
		case -1651298733:
			return -0.4773238f;
		case -494651336:
			return -6.693474E+17f;
		case -1307650230:
			return -6.021299E+25f;
		case 1220379817:
			return 7918.224f;
		case 1450975270:
			return -16316.71f;
		case 1835159026:
			return -1.052941E-26f;
		case 1161689282:
			return -1.804669E+33f;
		case 1472306629:
			return 2.905265E-27f;
		case 23785761:
			return 3.389405E-38f;
		case 332895738:
			return 3.410421E+28f;
		case -860715087:
			return 3.732381E+17f;
		case -151856079:
			return 1.731034E+17f;
		case -477077213:
			return 4.619364E-28f;
		case -783270749:
			return -2.612634E+22f;
		case -2043500951:
			return -1.088541E+33f;
		case -705706526:
			return 1.018202E-07f;
		case 1219931046:
			return 9235.166f;
		case -1794096032:
			return 2.814574E-33f;
		case -1308806047:
			return 1.199314E+07f;
		case -1666643527:
			return 1.495157E+35f;
		case 1150998938:
			return 8.972291E+21f;
		case 927219437:
			return 1.110676E+30f;
		case 1761059415:
			return 3.375037E+38f;
		case 1523975700:
			return 8.5412E-29f;
		case joaat("CLOTHING_OUTFIT_ITEM_M_SEASON_S02_001"):
			return -7.147675E+37f;
		case joaat("CLOTHING_OUTFIT_ITEM_M_SEASON_S02_002"):
			return 0.0001884012f;
		case 2118934498:
			return 2.441889E+17f;
		case 275416096:
			return -1.283982E+31f;
		case 275775515: /* GXTEntry: "The Copperhead Enforcer" */
			return 2.008455E+11f;
		case -1160690408: /* GXTEntry: "The Blackrose Bounty Hunter" */
			return -1.126476E+30f;
		case -1763097043: /* GXTEntry: "The Grizzlies Outlaw" */
			return 8.518619E-35f;
		case 912572382: /* GXTEntry: "The Breckenridge" */
			return -4.144805E-12f;
		case 73391061: /* GXTEntry: "The Roanoke" */
			return -0.5194395f;
		case 332495544: /* GXTEntry: "The Summerfield" */
			return -8.436013E-30f;
		case -501475506: /* GXTEntry: "The Kimberly" */
			return -1.041828E-18f;
		case -280579677: /* GXTEntry: "The Danube" */
			return -3.191132E+31f;
		case -814845497: /* GXTEntry: "The Dauphine" */
			return -7376.968f;
		case -1610902814: /* GXTEntry: "The Redington" */
			return -4.855925E+13f;
		case -1313261987: /* GXTEntry: "The Quinton" */
			return 1.34226E-14f;
		case -668402627: /* GXTEntry: "The Wakeeney" */
			return -7.127158E-21f;
		case -1436966753: /* GXTEntry: "The Wakeeney" */
			return -2.504816E-29f;
		case -1105410003: /* GXTEntry: "The Wakeeney" */
			return 5.917291E+34f;
		case -792302208: /* GXTEntry: "The Wakeeney" */
			return 8.765725E-13f;
		case -1544547372: /* GXTEntry: "The Wakeeney" */
			return 4.388357E+22f;
		case -1268599623: /* GXTEntry: "The Wakeeney" */
			return -4.117865E-35f;
		case 1281867320: /* GXTEntry: "The Bullard" */
			return 1.762464E-23f;
		case -1699226913: /* GXTEntry: "The Bullard" */
			return 5.410436E-20f;
		case -1610553999: /* GXTEntry: "The Bullard" */
			return 6.203303E-09f;
		case -1909243438: /* GXTEntry: "The Bullard" */
			return 164.7791f;
		case -1551799186: /* GXTEntry: "The Bullard" */
			return 1.559393E+13f;
		case -1999554802: /* GXTEntry: "The Bullard" */
			return 3.625741E+23f;
		case 723981565: /* GXTEntry: "The Garwood" */
			return 1.711425E+22f;
		case 963752338: /* GXTEntry: "The Garwood" */
			return 1.561744E+12f;
		case 372402960: /* GXTEntry: "The Garwood" */
			return 1.953545E-36f;
		case 989901996: /* GXTEntry: "The Garwood" */
			return -8.162628E+30f;
		case -239754729: /* GXTEntry: "The Garwood" */
			return 4.882854E+19f;
		case 142266273: /* GXTEntry: "The Garwood" */
			return 5.122625E+08f;
		case 911761394: /* GXTEntry: "The Carthage" */
			return 2176663;
		case 1676688161: /* GXTEntry: "The Carthage" */
			return -2.144357E+28f;
		case 1907906229: /* GXTEntry: "The Carthage" */
			return 4.069247E+20f;
		case -1621282302: /* GXTEntry: "The Carthage" */
			return 1.239378E+11f;
		case -1801773954: /* GXTEntry: "The Carthage" */
			return -1.368791E-05f;
		case -1003029579: /* GXTEntry: "The Carthage" */
			return -2.827708E-16f;
		case 165089723: /* GXTEntry: "The Wentworth" */
			return -6.323801E+12f;
		case 395586869: /* GXTEntry: "The Wentworth" */
			return -2.636729E+22f;
		case 623560802: /* GXTEntry: "The Wentworth" */
			return -394144.5f;
		case 888203246: /* GXTEntry: "The Wentworth" */
			return -4.315713E-25f;
		case 1123550204: /* GXTEntry: "The Wentworth" */
			return -1.106961E-11f;
		case 1862360078: /* GXTEntry: "The Wentworth" */
			return -6.647085E-21f;
		case -1320869011: /* GXTEntry: "The Wallingford" */
			return -1.355374E+14f;
		case -1078345642: /* GXTEntry: "The Wallingford" */
			return -1.444544E+25f;
		case -571278136: /* GXTEntry: "The Wallingford" */
			return 1.631126E+35f;
		case -856663353: /* GXTEntry: "The Wallingford" */
			return -1.286188E-31f;
		case -632654469: /* GXTEntry: "The Wallingford" */
			return -1.3669E-20f;
		case -380562552: /* GXTEntry: "The Wallingford" */
			return -6.538843E-10f;
		case 1911459413: /* GXTEntry: "The Gladewater" */
			return -2.274897E-13f;
		case -1606456586: /* GXTEntry: "The Gladewater" */
			return -4.077399E+14f;
		case -1888892597: /* GXTEntry: "The Gladewater" */
			return 5.432032E-30f;
		case 1154823199: /* GXTEntry: "The Gladewater" */
			return -2.706792f;
		case 856068226: /* GXTEntry: "The Gladewater" */
			return 8.187985E+35f;
		case 1786380136: /* GXTEntry: "The Gladewater" */
			return 2.20589E+27f;
		case 1943475930: /* GXTEntry: "The Londonderry" */
			return -7.414377E-27f;
		case 1697315198: /* GXTEntry: "The Londonderry" */
			return -6.79877E-06f;
		case -1787340262: /* GXTEntry: "The Londonderry" */
			return -1.759896E-14f;
		case -1341845703: /* GXTEntry: "The Londonderry" */
			return 6.094228E-13f;
		case -1632670578: /* GXTEntry: "The Londonderry" */
			return 1.213189E+16f;
		case -932593662: /* GXTEntry: "The Londonderry" */
			return 1.640298E+07f;
		case -499308854: /* GXTEntry: "The Monterey" */
			return 1.969066E+31f;
		case -785677145: /* GXTEntry: "The Monterey" */
			return 0.000441706f;
		case -18849776: /* GXTEntry: "The Monterey" */
			return 89184.66f;
		case -806059467: /* GXTEntry: "The Monterey" */
			return 1.031608E-20f;
		case 91876671: /* GXTEntry: "The Monterey" */
			return 3.587905E-12f;
		case -199538046: /* GXTEntry: "The Monterey" */
			return 3.893657E-20f;
		case -1754780383: /* GXTEntry: "The Sunderland" */
			return 369967.6f;
		case -2050586146: /* GXTEntry: "The Sunderland" */
			return -3.433527E-18f;
		case -1622000367: /* GXTEntry: "The Sunderland" */
			return 1.880411E+27f;
		case -1930520502: /* GXTEntry: "The Sunderland" */
			return 1.967132E-05f;
		case 1689602008: /* GXTEntry: "The Sunderland" */
			return -6.088129E+16f;
		case 1384162159: /* GXTEntry: "The Sunderland" */
			return -5.06533E+27f;
		case -733625577: /* GXTEntry: "The Worthington" */
			return 159342.8f;
		case -370348443: /* GXTEntry: "The Worthington" */
			return 4.118066E+27f;
		case -1205728560: /* GXTEntry: "The Worthington" */
			return 4.144954E-27f;
		case 459985248: /* GXTEntry: "The Worthington" */
			return 3.894957E+25f;
		case 834207228: /* GXTEntry: "The Worthington" */
			return 4.726468E-10f;
		case 1230744937: /* GXTEntry: "The Worthington" */
			return -8.109389E+37f;
		case 1859098900: /* GXTEntry: "The Tyringham" */
			return 7.519461E-06f;
		case -2137310037: /* GXTEntry: "The Tyringham" */
			return 1.368749E-34f;
		case 1086995730: /* GXTEntry: "The Tyringham" */
			return 1.238602E-23f;
		case -1962290800: /* GXTEntry: "The Tyringham" */
			return 2.894204E+36f;
		case 1736084082: /* GXTEntry: "The Tyringham" */
			return -1.392772E-30f;
		case 2038967949: /* GXTEntry: "The Tyringham" */
			return 44.3497f;
		case -1732116082:
			return -7.255164E-34f;
		case -2043224964:
			return -3.913073E-25f;
		case 1970158315:
			return -1.255955E-19f;
		case 1655444839:
			return -6.094796E-09f;
		case 1373270980:
			return -5.878593E-32f;
		case 1058885194:
			return -6.798711E-31f;
		case -1944199774:
			return -3.442063E-07f;
		case 999079041:
			return -2.674531E-16f;
		case 635605293:
			return -2.249819E-24f;
		case 1493792634:
			return -2.412887E-33f;
		case -213406744:
			return 1.284299E+36f;
		case -505870069:
			return 2.013426E+10f;
		case -152330007:
			return -6.314635E+31f;
		case 2024678512:
			return 4.756464E-35f;
		case 1188643011:
			return -8.926254E+16f;
		case 1680243549:
			return -3.251606E+25f;
		case 845486043:
			return -2.690089E+34f;
		case -1351118334:
			return 6.578975E-35f;
		case -1206325201:
			return -1.740485E+12f;
		case -1514091649:
			return -2.180241E+13f;
		case 1284413724:
			return 8.814359E-11f;
		case 976581738:
			return 58.74585f;
		case 1895916033:
			return 3.35728E+34f;
		case 1588804965:
			return 1.488237E-32f;
		case -691537108:
			return -1.358272E-10f;
		case -2138714467:
			return -1.882349E-19f;
		case -1967660287:
			return -1.456814E+31f;
		case -1574858284:
			return -3.10294E+22f;
		case -1370707414:
			return -3.873816E+14f;
		case 1429764111:
			return -1896883f;
		case 1074060936:
			return 2.350236E-22f;
		case 1238037012:
			return 2.281757E-11f;
		case -1431915598:
			return -3.655575E+34f;
		case -1133947081:
			return 3.831366E-32f;
		case -987535189:
			return -6.281586E+13f;
		case -676262434:
			return -4.93844E+23f;
		case 1109042843:
			return 983.5434f;
		case 817890278:
			return -1.149983E+30f;
		case 1719496544:
			return -2.111402E+38f;
		case 1452003197:
			return 5.644485E-30f;
		case -2077939025:
			return -1.828695E-33f;
		case 2036208929:
			return 7.545888E-25f;
		case -1698171004:
			return -0.1579486f;
		case -1437165919:
			return 175941.8f;
		case -1206046162:
			return 1.530428E-15f;
		case -1020114856:
			return 4.557338E+27f;
		case -778869478:
			return 5.220431E+16f;
		case -558071952:
			return -6.143571E+29f;
		case -194211249:
			return -1.197601E-24f;
		case -816265268:
			return -2.930564E+08f;
		case -1115020241:
			return 1.121342E+31f;
		case -1412726606:
			return -2.386463E-14f;
		case 484467366:
			return 2.095066E+09f;
		case -1506708098:
			return -2.776153E-36f;
		case joaat("CLOTHING_OUTFIT_ITEM_F_SEASON_S02_001"):
			return 0.0006342587f;
		case joaat("CLOTHING_OUTFIT_ITEM_F_SEASON_S02_002"):
			return 6.387239E-15f;
		case 1762800129:
			return -3.062706E+29f;
		case 847004886:
			return -4.337193E+18f;
		default:
			break;
	}
	return 0;
}

bool func_216(bool bParam0)
{
	if (!func_84(bParam0, 0))
	{
		return false;
	}
	return func_241(bParam0) == 1.988047E-33f;
}

int func_217(bool bParam0)
{
	if (!func_216(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_001"):
			return 4.173306E+37f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_002"):
			return 2.393982E+26f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_003"):
			return 4.03685E+13f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_004"):
			return 928.8869f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_001"):
			return -2.228585E-34f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_002"):
			return -2.534239E-11f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_003"):
			return -3.292454E-17f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_004"):
			return 6.378785E+19f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_001"):
			return -529290.8f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_002"):
			return -1.344826E+08f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_003"):
			return -3.835049E+18f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_004"):
			return 8.750689E+31f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_001"):
			return 1.538172E+16f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_002"):
			return 207816.9f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_003"):
			return 2.695931E-20f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_004"):
			return 3.14283E-31f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_001"):
			return -760.8631f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_002"):
			return -3.482077E+13f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_003"):
			return -1.539419E+24f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_004"):
			return 2.703144E+36f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_001"):
			return -1.724546E-13f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_002"):
			return -1.459556E-21f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_003"):
			return -6140.203f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_004"):
			return -2.876204E-05f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_001"):
			return 1.194013E-11f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_002"):
			return 4.275902E+16f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_003"):
			return 2.385018E-17f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_004"):
			return 7.883663E-28f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_001"):
			return -1.113617E-26f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_002"):
			return 4.691455E-38f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_003"):
			return -3.725923E+28f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_004"):
			return 2.234865E+07f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_001"):
			return 1.488215E-36f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_002"):
			return -5.726211E-30f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_003"):
			return 1.636288E+32f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_004"):
			return -5.105117E-35f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_001"):
			return 4.617838E+21f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_002"):
			return 3.431801E+10f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_003"):
			return -0.007660674f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_004"):
			return -1.111268E-12f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_001"):
			return 11713414;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_002"):
			return 4.872438E+08f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_003"):
			return 2.152371E+18f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_004"):
			return 9.528118E-14f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_001"):
			return -2.177184E+11f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_002"):
			return -1.715797f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_003"):
			return -9.789951E-14f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_004"):
			return -2.280342E-22f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_001"):
			return -8.072012E-22f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_002"):
			return 1.100564E+26f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_003"):
			return 3.84057E+29f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_004"):
			return 7.467835E+37f;
		case 918258437:
			return -4.552833E-27f;
		case 1169203439:
			return 2.093346E-27f;
		case -1755397046:
			return 1.912483E-16f;
		case -2090951606:
			return -3.052837E+34f;
		case -1893420074:
			return -7660754f;
		case -521480347:
			return 3.939497E-10f;
		case -1515678445:
			return 2.188769E-23f;
		case 637343178:
			return 2.582294E+30f;
		case -1759971328:
			return 2.04004E+36f;
		case -1990239091:
			return 8.041426E-36f;
		case 1595344893:
			return 2.479936E-20f;
		case -553416748:
			return 1.874051E-14f;
		case 2086466425:
			return -5.017912E-33f;
		case 1829328082:
			return 5.096718E+16f;
		case 147295280:
			return 4.830181E+27f;
		case 857399510:
			return -0.3366188f;
		case 811850600:
			return -1.085505E-27f;
		case -528729190:
			return -1.104361E-16f;
		case -732726675:
			return 177.7845f;
		case -963846432:
			return 3.385438E-09f;
		case -1242022473:
			return 7.369485E-20f;
		case -2026971099:
			return 5.577702E-09f;
		case 2066466847:
			return 4.764664E-20f;
		case 1835609242:
			return -3.269268E+24f;
		case -881400018:
			return -6.03074E+31f;
		case -633699143:
			return -2.457439E+20f;
		case -1069100838:
			return -6.426059E+09f;
		case -695075472:
			return -1.525579E+08f;
		case -1665332793:
			return -3.321829E-09f;
		case -1292945877:
			return -1.773091E-14f;
		case 1858275734:
			return -2.300576E+25f;
		case -1678154750:
			return 1.307409E-05f;
		case 1382502619:
			return -1.047737E+18f;
		case -2121879779:
			return 5.497874E-13f;
		case -443582675:
			return 8.29761E-23f;
		case -741289040:
			return 1.416817E-14f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_001"):
			return 1.368019E+18f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_002"):
			return -3.226616E+28f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_003"):
			return 11282331;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_004"):
			return 6.660883E-13f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_001"):
			return -58556.57f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_002"):
			return 4.64073E+08f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_003"):
			return 8.74794E+16f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_004"):
			return 7.3712E+30f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_001"):
			return 9499074;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_002"):
			return 1.423845E-21f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_003"):
			return 2.06522E-30f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_004"):
			return 1.077628f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_001"):
			return 5.660514E+17f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_002"):
			return 1.742873E+09f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_003"):
			return 8.754077E+17f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_004"):
			return -1.652318E+31f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_001"):
			return -1.018448E+29f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_002"):
			return 1.740586E-18f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_003"):
			return 1.681441E-31f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_004"):
			return -0.0879634f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_001"):
			return 4.403766E+12f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_002"):
			return -4.511856E-37f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_003"):
			return 9.452466E+29f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_004"):
			return -9.156524E-25f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_001"):
			return 3.227755E+12f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_002"):
			return 16546.92f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_003"):
			return -2.228285E+31f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_004"):
			return 3.732781E-38f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_001"):
			return 3.724373E-08f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_002"):
			return 6.580237f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_003"):
			return 6.947178E+13f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_004"):
			return 2.484371E+22f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_001"):
			return 2.456577E+13f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_002"):
			return 9.014957E+21f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_003"):
			return -3.855651E+37f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_004"):
			return 6.535104E-32f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_001"):
			return -8.772451E-37f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_002"):
			return 4.454346E-07f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_003"):
			return 1.510407E-13f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_004"):
			return 7.878817E+15f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_001"):
			return -2.55827E-34f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_002"):
			return -2.275366E+16f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_003"):
			return -5.689435E+26f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_004"):
			return -0.02990022f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_001"):
			return 0.3399748f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_002"):
			return 6.465955E+09f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_003"):
			return 2.484785E-18f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_004"):
			return -2.599848E-16f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_001"):
			return -5.546313E+26f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_002"):
			return 2.044672E-23f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_003"):
			return 12.15982f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_004"):
			return 4.283728E+28f;
		case 135502004:
			return -7.866332E+09f;
		case -1094089207:
			return -1.499547E+21f;
		case 683366891:
			return -1.013596E-12f;
		case 457948940:
			return -0.0007105466f;
		case 84775568:
			return 4.135747E-25f;
		case -2142729980:
			return 2.994219E-16f;
		case -410630335:
			return 2.475768E-23f;
		case -161815318:
			return 3.236637E+12f;
		case 1125547616:
			return 1.395009E-15f;
		case -706894864:
			return -208.2649f;
		case 512996699:
			return -1.833534E+13f;
		case 822532673:
			return -1.232445E+29f;
		case -1151792276:
			return 9.605299E-20f;
		case -569224994:
			return 9.930023E+11f;
		case -1816871896:
			return 1.908876E-11f;
		case -2105861707:
			return 2.210563E+33f;
		case 45914674:
			return 672240.4f;
		case 676193620:
			return -3.001031E+17f;
		case 1564617196:
			return 7.254247E+11f;
		case 1142159244:
			return 7.133847E+19f;
		case 834556641:
			return 5.797535E+32f;
		case -1297099578:
			return -1.813593E-36f;
		case -1477066926:
			return -2.254588E-24f;
		case -1764025059:
			return -5.352944E-14f;
		case -1896863365:
			return -4.583573E-25f;
		case -1706409937:
			return -2.381358E-14f;
		case -1336579003:
			return 4.45701E+18f;
		case 2015984622:
			return 1.300588E+10f;
		case 1306077006:
			return -1.347045E-38f;
		case 424001060:
			return -8.833552E-18f;
		case 1525976567:
			return -220378.4f;
		case 1830662729:
			return 4.372685E-25f;
		case 2135971502:
			return -4.220641E+08f;
		case -1881999437:
			return -0.0008510749f;
		case 503878688:
			return 6.968935E+24f;
		case 816232796:
			return 1.039851E-06f;
		default:
			break;
	}
	return 0;
}

bool func_218(bool bParam0)
{
	return (func_273(bParam0) && func_38(bParam0, 4.31212E+18f));
}

int func_219(bool bParam0)
{
	if (!func_218(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case 731907282:
			return 6.665346E-32f;
		case 1561454517:
			return 3.055069E-22f;
		case 1254834984:
			return -4.715896E+27f;
		case 1829957287:
			return 3.799805E-08f;
		case 919634467:
			return -6.229594E-24f;
		case -28339930:
			return -6.558434E-35f;
		case 507515628:
			return -4.259769E+28f;
		case -1975194892:
			return 2.642597E-36f;
		case 2039957913:
			return 4.024488E-27f;
		case 1502511939:
			return 3.184647E+31f;
		case 1809065934:
			return 2.427981E-20f;
		case -997271222:
			return 2.25761E+10f;
		case -878058438:
			return -7.330709E+14f;
		case -1617589234:
			return -2.400042E+23f;
		case -1042952050:
			return -0.09105205f;
		case -2050900874:
			return -1.271532E+08f;
		case -1815586685:
			return -1.122659E+24f;
		case -51500315:
			return -3.14812E+29f;
		case 1348094862:
			return 5.933205E-08f;
		case 1646522145:
			return 3.478544E+22f;
		case 1156363443:
			return 4.785602E-25f;
		case 1952092069:
			return -4.590873E-27f;
		case -2109461640:
			return -6.353205E-17f;
		case -1806184545:
			return 1.139413E+29f;
		case -1053842899:
			return -3.432342E-34f;
		case -755677768:
			return -5.970071E-28f;
		case 767294276:
			return -2.052252E+17f;
		case 1311814185:
			return -4.238399E+30f;
		case -840486512:
			return -9.185677E+19f;
		case -1029170414:
			return 1.087713E+21f;
		case -831411723:
			return -1.509685E+07f;
		case -429434400:
			return 3.947197E+32f;
		case -131203731:
			return -1.438366E-27f;
		case 1800445393:
			return 1.504294E-17f;
		case 2047228732:
			return 1.617986E-28f;
		case -2027203194:
			return 2.88563E+36f;
		case -609641686:
			return 2.066523E-20f;
		case 154924622:
			return 1.768266E-31f;
		case -142781743:
			return -1.965168E+35f;
		case -533360838:
			return 395556.1f;
		case -464283790:
			return -9.180731E+18f;
		case -186533746:
			return -0.03333768f;
		case -1593520704:
			return -1.794599E+11f;
		case 1260724738:
			return -1.102499E-29f;
		case -297375678:
			return 1.503452E+37f;
		case 1701653225:
			return -1.22361E-08f;
		case 1386939749:
			return 2.173322E+37f;
		case 1103717282:
			return 1.644474E+25f;
		case 1332088703:
			return 6.339123E+10f;
		case 1034120186:
			return 7.123357E+36f;
		case 532885562:
			return 6.343059E+23f;
		case -452048774:
			return 0.0005745888f;
		case -1085571851:
			return 1.668324E+31f;
		case -862677113:
			return -1.671941E-20f;
		case 1890828381:
			return -3.907049E-23f;
		case 1864875333:
			return 1.494274E+22f;
		case -320325540:
			return 0.05339542f;
		case -1278925815:
			return 4.578568E+20f;
		case -80071950:
			return -5.311585E-06f;
		case -781656240:
			return -4.257166E-35f;
		case 525029001:
			return 2.536853E-22f;
		case 1717296181:
			return 1.388459E-33f;
		case 1894117705:
			return 876.647f;
		case 1464921218:
			return -4933.637f;
		case 550403966:
			return -1.246122E-05f;
		case 856007660:
			return 0.02454921f;
		case -1617179117:
			return 5.444291E-08f;
		case 1784374159:
			return 19.55518f;
		case 2081818376:
			return 1.09735E+14f;
		case -1615607679:
			return 1.93079E+22f;
		case -1894668475:
			return 1.048737E+32f;
		case 2095710966:
			return 1.713901E+21f;
		case -260985198:
			return -1.313098E+26f;
		case -1179959034:
			return -3.982064E+33f;
		case -873142887:
			return -5.61527E+26f;
		case 245915270:
			return 2.426734E-20f;
		case 844146134:
			return 0.0003002306f;
		case 538640747:
			return 1.239412E-14f;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -1.626788E+30f;
		case -188079477:
			return -1.578931E+19f;
		case 1578729681:
			return 4.646013E-20f;
		case 1879581870:
			return -7.458821E-11f;
		case 948647349:
			return -7.161369f;
		default:
			break;
	}
	return 0;
}

bool func_220(bool bParam0)
{
	return func_241(bParam0) == 2.251657E+29f;
}

int func_221(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_001"):
			return 1.090025E-32f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_002"):
			return 3.921272E-22f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_003"):
			return -1.620832E+32f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_004"):
			return 6.601528E-34f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_005"):
			return 3.432632E+21f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_006"):
			return 1.351448E+32f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_007"):
			return 1.923182E-11f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_008"):
			return 5.622205E+10f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_009"):
			return 2.048624E+36f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_010"):
			return 1.939711E-28f;
		default:
			break;
	}
	return 0;
}

bool func_222(int iParam0)
{
	switch (iParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1354270243:
		case -1251985981:
		case -1197011183:
		case 75922725:
		case 975507354:
		case 1070046552:
			return true;
		default:
			break;
	}
	return false;
}

int func_223(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_240(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == iParam1)
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
	if (!bParam3)
	{
	}
	return 0;
}

int func_224(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (func_174(bParam0) || func_38(bParam0, 2.791187f))
	{
		return func_223(func_175(bParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_88(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == iParam1)
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
	if (!bParam4)
	{
	}
	return 0;
}

void func_225(int iParam0)
{
	if (func_142(iParam0))
	{
		if (Global_1051832.f_4673.f_7 != 6 || iParam0 != Local_58.f_48)
		{
			func_145(iParam0, 0, 1, 1);
		}
	}
}

bool func_226(bool bParam0, bool bParam1)
{
	if (!func_38(bParam0, 5.908991E-05f))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_38(bParam0, -0.4876374f))
		{
			return func_175(bParam0, 1) != 0;
		}
		if ((func_274(bParam0, -982726.7f, 0) || func_274(bParam0, 2.273041E-17f, 0)) || func_274(bParam0, -2.401104E+18f, 0))
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

bool func_227(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;

	bVar0 = func_275(bParam0, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (func_211(bVar0, -8.816258E-39f))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_228(bVar0, -8.816258E-39f, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_228(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_240(bParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_230(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_229(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_276(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_277(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_89(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

bool func_229(int iParam0)
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

bool func_230(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_26() == 0)
	{
		return func_278(iParam0);
	}
	return iParam0 <= func_279();
}

bool func_231(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
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

	if (func_174(bParam0) || func_38(bParam0, 2.791187f))
	{
		return func_228(func_175(bParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_88(bParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_90(0)) && !func_86());
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
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && (bParam7 || func_230(iVar32)))
			{
				Jump @499; //curOff = 215
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && (bParam7 || func_229(iVar32)))
			{
			}
			else
			{
				iVar36 = func_276(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_277(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_89(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_280(Var0[iVar34 /*2*/]) || func_281(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_282(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_283(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @483; //curOff = 439
							if (bParam5 && ((iVar33 + func_284(7, Var0[iVar34 /*2*/])) + func_285(Var0[iVar34 /*2*/])) >= iVar32)
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

bool func_232(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_142(iParam0))
	{
		return false;
	}
	iVar0 = func_197(iParam0);
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

int func_233(int iParam0)
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

int func_234(int iParam0)
{
	return func_233(iParam0);
}

void func_235(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	int iVar26;
	int iVar27;
	int iVar28;

	bVar0 = func_286(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
	iVar1 = Local_58.f_491;
	if (bVar0 != 0)
	{
		if (Local_58.f_491 == 0)
		{
			iVar13 = func_287(bVar0);
			iVar2[iVar14] = iVar13;
			iVar14++;
			Local_58.f_281[iParam0 /*19*/].f_17 = iVar13;
			Local_58.f_281[iParam0 /*19*/].f_18 = func_288(bVar0);
		}
	}
	else
	{
		iVar1++;
	}
	Var16 = { func_289(-5.45926E-19f, -5.45926E-19f, 0, -1.533539E-31f, 0, 0, -1, 0, 0) };
	if (func_290(Var16, &iVar26, &iVar27, 0))
	{
		if (iVar27 > 0)
		{
			iVar28 = 0;
			while (iVar28 < iVar27)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar26, iVar28, &bVar0))
				{
					iVar13 = func_287(bVar0);
					iVar15 = 0;
					while (iVar15 < iVar14)
					{
						if (iVar13 == iVar2[iVar15])
						{
							iVar13 = 0;
						}
						else
						{
							iVar15++;
						}
					}
					if (iVar13 != 0)
					{
						if (iVar14 < iVar2)
						{
							iVar2[iVar14] = iVar13;
							iVar14++;
						}
						if (iVar1 == iVar14)
						{
							Local_58.f_281[iParam0 /*19*/].f_17 = iVar13;
						}
					}
				}
				iVar28++;
			}
		}
		func_291(iVar26);
	}
	Local_58.f_492 = iVar14;
}

void func_236(int iParam0, bool bParam1, bool bParam2)
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

void func_237(int iParam0, bool bParam1)
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

void func_238(int iParam0, int iParam1)
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

bool func_239(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_191(bParam0, 2))
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

bool func_240(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_265(bParam0))
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
		func_292(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_241(bool bParam0)
{
	struct<2> Var0;

	if (!func_84(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_242(bool bParam0, var uParam1, var uParam2)
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

struct<4> func_243(bool bParam0)
{
	int iVar0;

	iVar0 = func_102(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_184(8.681942E-06f, func_248(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_184(8.681942E-06f, func_248(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_184(8.681942E-06f, func_248(bParam0), -1.942248E+12f, 0);
}

void func_244(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_245(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_246(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_180(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_293(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_247(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_184(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_248(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_102(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_184(2.982335E+09f, func_294(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_184(2.982335E+09f, func_294(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_184(2.982335E+09f, func_294(), -5.45926E-19f, bParam0);
}

int func_249(bool bParam0, bool bParam1)
{
	if (func_241(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_295();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_250(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_296(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_251(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_297(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_252(bool bParam0)
{
	int iVar0;

	iVar0 = func_102(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_184(3.507197E-29f, func_248(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_184(3.507197E-29f, func_248(bParam0), 12999093, 0);
}

bool func_253(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_241(bParam0);
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
			if (func_298(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_254(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_299(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_255(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_128(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_256(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_300(iParam0, iParam1, iParam2, iParam3);
}

float func_257()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_258(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_259(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_260(int iParam0)
{
	return func_199(iParam0, 2);
}

int func_261(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		*bParam2 = 0;
		return 0;
	}
	if ((uParam0[iVar0 /*7*/])->f_1 < 0)
	{
		*bParam2 = 0;
		return 0;
	}
	*bParam2 = (uParam0[iVar0 /*7*/])->f_2[(uParam0[iVar0 /*7*/])->f_1];
	return 1;
}

bool func_262(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_84(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_301(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

char* func_263(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_264(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_26() == -1)
	{
		if (func_302(bParam0))
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

bool func_265(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_266(bool bParam0)
{
	if (!func_303() && func_304())
	{
		return true;
	}
	return func_38(bParam0, 1.931199E+13f);
}

int func_267(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_265(bParam0))
	{
		return 0;
	}
	bVar1 = func_101(iParam3, 2);
	bVar2 = func_210(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_210(bParam0, -982726.7f, bVar1);
	if (func_210(bParam0, 0.003804697f, bVar1))
	{
		iParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_305(bParam0, &fVar0) || func_306(bParam0, &fVar0)))
	{
		iParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_209())
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
	else if (func_272(15) && func_210(bParam0, 1.109321E-25f, bVar1))
	{
		iParam1 = 1.109321E-25f;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

bool func_268(bool bParam0, bool bParam1)
{
	return (func_173(bParam0, 0.003804697f) && !func_274(bParam0, 0.003804697f, bParam1));
}

bool func_269(bool bParam0)
{
	bool bVar0;

	bVar0 = func_175(bParam0, 1);
	if (bVar0 != 0 && func_210(bVar0, 0.003804697f, 0))
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.382125E-27f))
		{
			return true;
		}
	}
	return false;
}

bool func_270(bool bParam0, int iParam1)
{
	*iParam1 = func_307(bParam0, 1);
	return *iParam1 != 0;
}

bool func_271(bool bParam0, int iParam1)
{
	*iParam1 = func_308(bParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_272(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_24(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_273(bool bParam0)
{
	return func_241(bParam0) == 6.698816E+28f;
}

bool func_274(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_84(bParam0, 0))
	{
		return func_309(func_103(bParam0), bParam1, bParam2);
	}
	if (func_174(bParam0) || func_38(bParam0, 2.791187f))
	{
		return func_211(func_175(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_26() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return true;
	}
	if (!func_310(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_275(bool bParam0, bool bParam1)
{
	if (!func_226(bParam0, bParam1))
	{
		return false;
	}
	if (bParam0 == 5.725531E+31f)
	{
		return func_175(1.90694E+21f, 1);
	}
	else if (bParam0 == 3.260984E-38f)
	{
		return func_175(0.0002301198f, 1);
	}
	else if (bParam0 == 1.541746E-27f)
	{
		return func_175(-1.766809E-31f, 1);
	}
	else if (bParam0 == -1.84846E-25f)
	{
		return func_175(-3.589852E-30f, 1);
	}
	else if (bParam0 == 1.806564E-25f)
	{
		return func_175(-6.181976E+29f, 1);
	}
	else if (bParam0 == -6.888817E-09f)
	{
		return func_175(-7.708751E+16f, 1);
	}
	return func_175(bParam0, 1);
}

int func_276(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_38(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_277(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_84(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_248(0) };
	Var0.f_4 = func_311(iParam1);
	Var5 = { func_184(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_102(0), &Var5, false);
	return iVar9;
}

bool func_278(int iParam0)
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

int func_279()
{
	if (func_26() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_280(bool bParam0)
{
	if (!func_84(bParam0, 0))
	{
		return false;
	}
	if (func_38(bParam0, -1.051639E+07f))
	{
		return true;
	}
	return func_281(bParam0);
}

bool func_281(bool bParam0)
{
	if (!func_84(bParam0, 0))
	{
		return false;
	}
	if (func_38(bParam0, -5.092244E+08f))
	{
		return true;
	}
	return false;
}

int func_282(int iParam0, bool bParam1, int iParam2)
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

	iParam0 = func_312(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_84(bParam1, 0))
	{
		return 0;
	}
	if (!func_313(iParam0))
	{
		return 0;
	}
	iVar0 = func_314(iParam0);
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
		if (!func_315(iVar28))
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

int func_283(bool bParam0, int iParam1)
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

	if (!func_84(bParam0, 0))
	{
		return 0;
	}
	if (!func_280(bParam0) && !func_281(bParam0))
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
	iVar13 = func_316(bParam0, 5.339713E+22f);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_289(-5.45926E-19f, -5.45926E-19f, 0, 1.659074E-30f, 0, 0, -1, iVar13, 0) };
	if (func_290(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			bVar14 = func_317(iVar15, iVar1);
			if (func_84(bVar14, 0) && bParam0 != bVar14)
			{
				iVar16 = func_318(bVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_277(bVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_320(iVar16, func_319(bVar14), bParam0)));
					}
				}
			}
			iVar15++;
		}
		func_291(iVar1);
	}
	return iVar0;
}

int func_284(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_312(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_84(bParam1, 0))
	{
		return 0;
	}
	if (!func_313(iParam0))
	{
		return 0;
	}
	iVar0 = func_314(iParam0);
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

int func_285(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_84(bParam0, 0))
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

int func_286(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1147579[iParam0 /*12*/].f_1;
}

int func_287(bool bParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_288(bool bParam0)
{
	int iVar0;

	if (func_38(bParam0, -3.954944E-11f))
	{
		iVar0 = 0;
	}
	else if (func_38(bParam0, 0.05128385f))
	{
		iVar0 = 1;
	}
	else if (func_38(bParam0, 2.708889E+07f))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

struct<10> func_289(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_290(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_291(int iParam0)
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

void func_292(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_241((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_293(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_321(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_294() };
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

struct<4> func_294()
{
	struct<4> Var0;

	return Var0;
}

int func_295()
{
	if (func_322(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_296(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_84(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_180(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_184(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_102(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_102(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_297(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_102(0);
	*iParam1 = { func_184(bParam0, func_243(0), fParam3, 0) };
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

bool func_298(bool bParam0, int iParam1, int iParam2)
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

int func_299(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_102(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_300(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_323(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_301(bool bParam0, bool bParam1)
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

bool func_302(bool bParam0)
{
	return func_85(bParam0) == -3.265313E+23f;
}

bool func_303()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_304()
{
	return func_325(func_324(0));
}

bool func_305(bool bParam0, float fParam1)
{
	*fParam1 = func_326(bParam0, 1);
	return *fParam1 != 0;
}

bool func_306(bool bParam0, float fParam1)
{
	*fParam1 = func_327(bParam0, 1, 0);
	return *fParam1 != 0;
}

int func_307(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_328(iVar0, 1, 0);
		if (!func_88(bParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_329(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_89(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

int func_308(bool bParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_328(iVar0, 0, 1);
		if (!func_88(bParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_330(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_89(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

int func_309(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_191(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_26() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_331(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_310(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_84(bParam0, 0))
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

float func_311(int iParam0)
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

int func_312(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

bool func_313(int iParam0)
{
	iParam0 = func_312(iParam0);
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

int func_314(int iParam0)
{
	iParam0 = func_312(iParam0);
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

bool func_315(int iParam0)
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

int func_316(bool bParam0, int iParam1)
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

int func_317(int iParam0, int iParam1)
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

int func_318(bool bParam0)
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

int func_319(bool bParam0)
{
	if (func_38(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_38(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_38(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

int func_320(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_84(uVar0[iVar17], 0) && bParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_321(var uParam0)
{
	if (!func_332(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_322(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_333(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_102(bParam1), iParam0, bParam3);
}

void func_323(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_334(&(uParam0->f_4));
}

struct<2> func_324(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_325(struct<2> Param0)
{
	return func_335(Param0, 5, 8);
}

int func_326(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_328(iVar0, 1, 0);
		if (!func_240(bParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_329(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_89(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

int func_327(bool bParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_328(iVar0, 0, 1);
		if (!func_240(bParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_330(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_89(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

int func_328(int iParam0, bool bParam1, bool bParam2)
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

bool func_329(bool bParam0)
{
	return func_241(bParam0) == 4.029065E+31f;
}

bool func_330(bool bParam0)
{
	return func_241(bParam0) == -1.955052E+34f;
}

bool func_331(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_191(bParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_336(bParam0, bParam1, &Var0))
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

bool func_332(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_333(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_334(var uParam0)
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

bool func_335(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_337(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_338(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_336(bool bParam0, bool bParam1, var uParam2)
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

bool func_337(struct<2> Param0)
{
	if (!func_339(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_340(Param0))
	{
		return false;
	}
	return true;
}

int func_338(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_341(Param0);
	}
	return -1;
}

bool func_339(int iParam0)
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

int func_340(int iParam0)
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

int func_341(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_342(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_342(struct<2> Param0, bool bParam2)
{
	if (!func_337(Param0))
	{
		return false;
	}
	func_343(bParam2);
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

void func_343(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

