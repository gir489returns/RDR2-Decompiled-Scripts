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
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<4> Var0;
	struct<4> Var4;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Var4.f_19 = -1;
	Var4.f_33 = -1;
	Var4.f_34 = -1;
	Var4.f_35 = -1;
	Var4.f_36 = -1;
	Var4.f_37 = 1;
	if (func_1() == -1)
	{
		func_2(&Var4);
	}
	else
	{
		func_3(&Var4);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_4(&Var4);
	}
	if (func_1() == -1)
	{
		while (true)
		{
			while (UIEVENTS::EVENTS_UI_IS_PENDING(iScriptParam_0))
			{
				if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iScriptParam_0, &Var0))
				{
					func_5(&Var0, &Var4);
					switch (Var0.f_2)
					{
						case joaat("ZONE"):
							Var4.f_4 = { Var0 };
							Var4 = { Var0 };
							switch (Var0)
							{
								case -1740156697:
									func_6(&Var4);
									break;
								case -632467210:
									Var4.f_33 = -1;
									Var4.f_34 = -1;
									func_7(&Var4);
									break;
							}
							Var4.f_37 = 1;
							break;
						case joaat("BLIP"):
							Var4 = { Var0 };
							switch (Var0)
							{
								case -1740156697:
									func_8(&Var4);
									break;
								case -632467210:
									func_9(&Var4);
									Var4 = { Var4.f_4 };
									func_6(&Var4);
									break;
								case -1203660660:
									func_10(&Var4);
									break;
							}
							break;
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
				}
			}
			func_11(&Var4);
			func_12(&Var4);
			BUILTIN::WAIT(0);
		}
	}
	else
	{
		while (!func_13(1, 1))
		{
			func_14(iScriptParam_0, &Var4);
			func_11(&Var4);
			func_15(&Var4);
			BUILTIN::WAIT(0);
		}
	}
	func_4(&Var4);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	return Global_1572887.f_14;
}

void func_2(var uParam0)
{
	struct<40> Var0;

	Var0.f_19 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = 1;
	*uParam0 = { Var0 };
	uParam0->f_20 = -1;
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH("", "MapFocus");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "Region", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_8, "ItemHovered", false);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "HoveredName", "");
	HUD::TEXT_BLOCK_REQUEST("FMMC");
	if (TXD::DOES_STREAMED_TXD_EXIST(-1.323002E-28f))
	{
		TXD::REQUEST_STREAMED_TXD(-1.323002E-28f, false);
	}
	uParam0->f_37 = 1;
}

void func_3(var uParam0)
{
	func_2(uParam0);
}

void func_4(var uParam0)
{
	if (func_1() == -1)
	{
		func_16(uParam0);
	}
	else
	{
		func_17(uParam0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(int iParam0, var uParam1)
{
	switch (iParam0->f_2)
	{
		case joaat("DISTRICT"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_33 = func_19(func_18(iParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
		case joaat("TEXT_WRITTEN"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_35 = func_18(iParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
		case joaat("TEXT_PRINTED"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_36 = func_18(iParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
		case joaat("TOWN"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_34 = func_20(func_18(iParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
	}
}

int func_6(var uParam0)
{
	uParam0->f_19 = uParam0->f_1;
	switch (func_21(uParam0))
	{
		case 2:
			uParam0->f_22 = func_22(uParam0->f_19);
			break;
		case 0:
			uParam0->f_22 = func_23(uParam0->f_20, 0);
			break;
		case 1:
			uParam0->f_22 = func_24(uParam0->f_21);
			break;
		default:
			func_25(uParam0);
			return 0;
	}
	func_25(uParam0);
	return 1;
}

void func_7(var uParam0)
{
	func_25(uParam0);
}

int func_8(var uParam0)
{
	uParam0->f_25 = uParam0->f_1;
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	switch (uParam0->f_23)
	{
		case 72:
			if (func_27(uParam0->f_25, &(uParam0->f_29)))
			{
				uParam0->f_26 = MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(MISC::GET_HASH_KEY(&(Global_1835011[uParam0->f_29 /*72*/].f_9)));
			}
			else
			{
				uParam0->f_26 = -9.49642E-21f;
			}
			break;
		case 71:
			switch (func_21(uParam0))
			{
				case 0:
					uParam0->f_22 = func_23(uParam0->f_20, 0);
					uParam0->f_26 = func_28(uParam0->f_19);
					if (!TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26))
					{
						uParam0->f_26 = func_29();
					}
					break;
			}
			break;
		case 52:
		case 92:
			uParam0->f_28 = 0;
			return 0;
		default:
			uParam0->f_26 = func_30(uParam0->f_23, uParam0->f_25);
			break;
	}
	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		TXD::REQUEST_STREAMED_TXD(uParam0->f_26, true);
		uParam0->f_28 = 1;
		return 1;
	}
	return 0;
}

void func_9(var uParam0)
{
	struct<2> Var0;

	func_31(uParam0);
	uParam0->f_23 = { Var0 };
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = -1;
	func_32(uParam0);
}

int func_10(var uParam0)
{
	if (uParam0->f_25 != uParam0->f_1)
	{
		return 0;
	}
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		if (!uParam0->f_28)
		{
			uParam0->f_39 = 0;
			UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(-3.737229E-35f, -7.867682E+18f);
			return 1;
		}
	}
	return 0;
}

void func_11(var uParam0)
{
	if (uParam0->f_37)
	{
		func_33(uParam0);
		uParam0->f_37 = 0;
	}
}

void func_12(var uParam0)
{
	if (func_34(uParam0))
	{
		switch (uParam0->f_23)
		{
			case 72:
				func_35(uParam0->f_25, uParam0);
				break;
			case 71:
				func_36(uParam0->f_19, uParam0);
				break;
			case 93:
				func_37(uParam0->f_25, uParam0);
				break;
			case 94:
				func_38(uParam0->f_25, uParam0);
				break;
			case 95:
				func_39(uParam0->f_25, uParam0);
				break;
			case 96:
				func_40(uParam0->f_23, uParam0);
				break;
			default:
				func_40(uParam0->f_23, uParam0);
				break;
		}
	}
}

bool func_13(bool bParam0, bool bParam1)
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

void func_14(int iParam0, var uParam1)
{
	struct<4> Var0;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(iParam0))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iParam0, &Var0))
		{
			func_5(&Var0, uParam1);
			switch (Var0.f_2)
			{
				case joaat("ZONE"):
					uParam1->f_4 = { Var0 };
					*uParam1 = { Var0 };
					switch (Var0)
					{
						case -1740156697:
							func_41(uParam1);
							break;
						case -632467210:
							func_42(uParam1);
							break;
					}
					break;
				case joaat("BLIP"):
					*uParam1 = { Var0 };
					switch (Var0)
					{
						case -1740156697:
							func_43(uParam1);
							break;
						case -632467210:
							func_44(uParam1);
							*uParam1 = { uParam1->f_4 };
							func_41(uParam1);
							break;
						case -1203660660:
							func_45(uParam1);
							break;
					}
					break;
				case joaat("CARD"):
					if (Var0 == -4.615686E-05f)
					{
						if (func_46(uParam1))
						{
							UIAPPS::_CLOSE_UIAPP_BY_HASH(7.215231E-38f);
						}
					}
					break;
			}
			UIEVENTS::EVENTS_UI_POP_MESSAGE(iParam0);
		}
	}
}

void func_15(var uParam0)
{
	var uVar0;

	if (func_34(uParam0))
	{
		if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &uVar0))
		{
			return;
		}
		switch (uParam0->f_23)
		{
			case 92:
				func_50(uParam0->f_25, uParam0);
				break;
			case 72:
				func_51(uParam0, &uVar0);
				break;
			case 71:
				func_52(uParam0, &uVar0);
				break;
			case 97:
			case 98:
				func_53(uParam0, &uVar0);
				break;
			default:
				func_54(uParam0, &uVar0);
				break;
		}
	}
	func_55(uParam0);
	func_56(uParam0);
}

void func_16(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
}

void func_17(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
}

int func_18(int iParam0)
{
	if (iParam0->f_1 != 0)
	{
		return iParam0->f_1;
	}
	return -1;
}

int func_19(int iParam0)
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

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ANNESBURG"):
			return 83;
		case joaat("ARMADILLO"):
			return 127;
		case joaat("BEECHERSHOPE"):
			return 39;
		case joaat("BLACKWATER"):
			return 40;
		case joaat("BRAITHWAITE"):
			return 99;
		case joaat("BUTCHER"):
			return 87;
		case joaat("CALIGA"):
			return 101;
		case joaat("CORNWALL"):
			return 70;
		case joaat("EMERALD"):
			return 74;
		case joaat("LAGRAS"):
			return 3;
		case joaat("MANZANITA"):
			return 116;
		case joaat("RHODES"):
			return 111;
		case joaat("STDENIS"):
			return 5;
		case joaat("SISKA"):
			return 33;
		case joaat("STRAWBERRY"):
			return 26;
		case joaat("TUMBLEWEED"):
			return 121;
		case joaat("VALENTINE"):
			return 81;
		case joaat("VANHORN"):
			return 98;
		case joaat("WALLACE"):
			return 37;
		case joaat("WAPITI"):
			return 60;
		case joaat("AGUASDULCESVILLA"):
		case joaat("AGUASDULCESRUINS"):
		case joaat("AGUASDULCESFARM"):
			return 62;
		case joaat("MANICATO"):
			return 66;
	}
	return -1;
}

int func_21(var uParam0)
{
	if (uParam0->f_19 == -1)
	{
		return -1;
	}
	uParam0->f_22 = func_22(uParam0->f_19);
	if (uParam0->f_22 != 0)
	{
		return 2;
	}
	uParam0->f_20 = func_20(uParam0->f_19);
	if (func_57(uParam0->f_20))
	{
		return 0;
	}
	uParam0->f_21 = func_19(uParam0->f_19);
	if (func_58(uParam0->f_21))
	{
		return 1;
	}
	return -1;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMBARINO"):
			return -3.171779E+17f;
		case joaat("LEMOYNE"):
			return 1.863622f;
		case joaat("NEWAUSTIN"):
			return 9183346f;
		case joaat("NEWHANOVER"):
			return 1.100028E+25f;
		case joaat("WESTELIZABETH"):
			return 2.266429E+23f;
		case joaat("LOWERWESTELIZABETH"):
			return -24931.68f;
		case joaat("UPPERWESTELIZABETH"):
			return -1.257263E-18f;
		case joaat("GUARMA"):
			return -3.070043E-13f;
		default:
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
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

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.087393E-14f;
		case 1:
			return -1.259349E-30f;
		case 2:
			return 1.498807E-37f;
		case 3:
			return 1.264142E+30f;
		case 4:
			return 3.69772E-30f;
		case 5:
			return -1.30807E-28f;
		case 6:
			return -8.966356E-27f;
		case 7:
			return -2.697481E+12f;
		case 8:
			return -1663469f;
		case 9:
			return 4.089406E+30f;
		case 10:
			return 1.82543E-09f;
		case 11:
			return 7.133003E-32f;
		case 12:
			return 9.458759E+32f;
		case 13:
			return 0.001473694f;
		case 14:
			return -2.892827E+12f;
		case 15:
			return -1.888375E-23f;
		case 16:
			return 1.008257E-07f;
		default:
			break;
	}
	return 0;
}

void func_25(var uParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = false;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = func_20(uParam0->f_19);
	iVar4 = uParam0->f_33;
	if (!func_58(iVar4))
	{
		iVar4 = func_19(uParam0->f_19);
	}
	if (!func_58(iVar4))
	{
		iVar5 = func_60(func_59(iVar3, 1, 1));
	}
	else
	{
		iVar5 = func_61(iVar4);
	}
	if ((func_62(iVar4) || func_63(iVar5)) || func_64(iVar3))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
		{
			sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
		}
		bVar0 = true;
	}
	else if (func_65(iVar5))
	{
		iVar1 = func_66(iVar5);
		if (iVar1 > 0)
		{
			bVar0 = true;
			sVar2 = MISC::VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, sVar2);
}

bool func_26(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	bool bVar2;

	bVar2 = MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &uVar1);
	*uParam1 = uVar0;
	uParam1->f_1 = uVar1;
	return bVar2;
}

bool func_27(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1900531)
	{
		if (!func_67(Global_1900531[iVar0 /*2*/]))
		{
		}
		else if (Global_1900531[iVar0 /*2*/] == 2)
		{
			*uParam1 = func_68(Global_1900531[iVar0 /*2*/]);
			if ((func_69(*uParam1) && MAP::DOES_BLIP_EXIST(Global_1835011[*uParam1 /*72*/].f_28)) && Global_1835011[*uParam1 /*72*/].f_28 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LAGRAS"):
			return 3.76069E-24f;
		case joaat("STDENIS"):
			return -1.237848E+37f;
		case joaat("STRAWBERRY"):
			return -6.441523E-11f;
		case joaat("BLACKWATER"):
			return -7.445001E-39f;
		case joaat("EMERALD"):
			return -2.801692E+15f;
		case joaat("VALENTINE"):
			return 40.12821f;
		case joaat("ANNESBURG"):
			return -1.957922E-10f;
		case joaat("VANHORN"):
			return -2.02087E-32f;
		case joaat("RHODES"):
			return -6.978614f;
		case joaat("ARMADILLO"):
			return -0.04645944f;
		case joaat("TUMBLEWEED"):
			return 1.397943E-19f;
		default:
			break;
	}
	return -1;
}

float func_29()
{
	return 40.12821f;
}

int func_30(int iParam0, int iParam1)
{
	var uVar0;
	struct<16> Var1;
	int iVar17;
	var uVar18;
	int iVar19;

	iVar17 = -1;
	switch (iParam0)
	{
		case 13:
			return -8.20124E+08f;
		case 14:
			return -276.8016f;
		case 15:
			return -0.01760737f;
		case 17:
			return -2.44283E-05f;
		case 18:
			return 2.778856E-06f;
		case 19:
			return -3.117041E-31f;
		case 55:
			return -2.137894E-05f;
		case 56:
			return -1.11952E-26f;
		case 57:
			return -8.002077E-32f;
		case 61:
			return -2.399327E+37f;
		case 62:
			return -5.455423E+13f;
		case 63:
			return -4.844003E+23f;
		case 64:
			return 5.05028E+08f;
		case 65:
			return -4.822662E-10f;
		case 66:
			return 4.856479E+09f;
		case 67:
			return 2.879288E+23f;
		case 92:
			return -9.49642E-21f;
		case 93:
			return -9.49642E-21f;
		case 94:
			return -9.49642E-21f;
		case 95:
			return -9.49642E-21f;
		case 96:
			return -9.49642E-21f;
		case 20:
		case 21:
		case 22:
		case 23:
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
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 53:
		case 59:
		case 68:
		case 69:
			Var1 = { func_70(iParam1, iParam0, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 16:
			iVar17 = MISC::GET_HASH_KEY("MAP_CARD_BLK_BOUNTY");
			break;
		case 58:
			Var1 = { func_71() };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 54:
		case 60:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			Var1 = { func_72(iParam0, iParam1, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
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
			StringCopy(&Var1, func_73(iParam0), 128);
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
			MAP::SET_BLIP_FLASHES(iParam1, &uVar18, &iVar19);
			StringCopy(&Var1, func_74(iVar19), 128);
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
	}
	if (iVar17 != -1)
	{
		return iVar17;
	}
	return -1;
}

void func_31(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_8);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_9);
}

void func_32(var uParam0)
{
	if (!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(-3.737229E-35f, 374.6005f))
	{
		uParam0->f_39 = 1;
	}
	else
	{
		uParam0->f_39 = 0;
	}
}

void func_33(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_38 && DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_9))
	{
		return;
	}
	sVar0 = func_75(uParam0->f_35, uParam0->f_36);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		if (uParam0->f_34 != -1)
		{
			iVar1 = func_76(uParam0->f_34);
		}
		if (uParam0->f_33 != -1)
		{
			iVar2 = func_77(uParam0->f_33);
			iVar3 = func_78(uParam0->f_33);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar2))
		{
			sVar0 = MISC::VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar1, iVar2);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar3))
		{
			sVar0 = MISC::VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar2, iVar3);
		}
		else
		{
			sVar0 = "";
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_10, sVar0);
}

bool func_34(var uParam0)
{
	if (uParam0->f_39)
	{
		func_32(uParam0);
	}
	if (!uParam0->f_28)
	{
		return false;
	}
	switch (uParam0->f_23)
	{
		case 0:
		case 52:
		case 92:
			uParam0->f_28 = 0;
			return false;
		default:
			break;
	}
	if ((TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26) && TXD::HAS_STREAMED_TXD_LOADED(uParam0->f_26)) && (uParam0->f_27 == 0 || ((uParam0->f_27 != 0 && TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_27)) && TXD::HAS_STREAMED_TXD_LOADED(uParam0->f_27))))
	{
		uParam0->f_28 = 0;
		uParam0->f_38 = 0;
		return true;
	}
	return false;
}

void func_35(int iParam0, var uParam1)
{
	char cVar0[16];
	int iVar2;

	if (!func_69(uParam1->f_29))
	{
		if (!func_27(iParam0, &(uParam1->f_29)))
		{
			return;
		}
	}
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1835011[uParam1->f_29 /*72*/].f_27);
	MemCopy(&cVar0, {Global_1835011[uParam1->f_29 /*72*/].f_9}, 2);
	StringConCat(&cVar0, "_DESC_PM", 16);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		StringCopy(&cVar0, "", 16);
	}
	iVar2 = MISC::GET_HASH_KEY(&(Global_1835011[uParam1->f_29 /*72*/].f_9));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", iVar2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1.628153E+17f);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_36(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "Zone");
	uParam1->f_26 = func_28(iParam0);
	iVar0 = func_79(uParam1->f_20);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_80(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(func_77(iVar0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", func_81(iParam0));
	if (TXD::DOES_STREAMED_TXD_EXIST(uParam1->f_26))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_28(iParam0));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", func_28(iParam0));
	}
	else
	{
		uParam1->f_26 = func_29();
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", uParam1->f_26);
	}
	iVar1 = func_61(iVar0);
	if (func_65(iVar1))
	{
		iVar2 = func_66(iVar1);
		if (iVar2 > 0)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", iVar2);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_NO_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_town", uParam1->f_9);
}

void func_37(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(func_82(iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -1.479745E+23f);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_38(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1072759.f_23824.f_383[iVar1 /*272*/]);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -1.479745E+23f);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_39(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_83(iVar1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -1.479745E+23f);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	char cVar17[128];
	char cVar33[128];

	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	StringCopy(&cVar17, func_84(iParam0), 128);
	switch (func_85(iParam0))
	{
		case 1:
			Var1 = { func_70(uParam1->f_25, iParam0, &iVar0) };
			if (iParam0 == 16)
			{
				StringCopy(&Var1, "MAP_CARD_BOUNTY", 128);
			}
			StringCopy(&cVar33, func_76(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(&cVar17));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 2:
			StringCopy(&Var1, func_73(iParam0), 128);
			iVar0 = func_86(MAP::GET_BLIP_COORDS(uParam1->f_25), 1);
			StringCopy(&cVar33, func_76(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 5:
			Var1 = { func_87(iVar0) };
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
		default:
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(iParam0, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_value", 0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

int func_41(var uParam0)
{
	struct<4> Var0;

	uParam0->f_19 = uParam0->f_1;
	if (func_49(uParam0->f_2, uParam0->f_1, &Var0))
	{
		uParam0->f_22 = Var0.f_3;
		func_88(uParam0);
		return 1;
	}
	func_88(uParam0);
	return 0;
}

void func_42(var uParam0)
{
	func_88(uParam0);
}

int func_43(var uParam0)
{
	struct<15> Var0;

	uParam0->f_25 = uParam0->f_1;
	uParam0->f_37 = 1;
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &Var0))
	{
	}
	switch (uParam0->f_23)
	{
		case 72:
			uParam0->f_29 = func_89(uParam0->f_25);
			uParam0->f_26 = Var0.f_12;
			break;
		case 52:
		case 92:
			uParam0->f_28 = 0;
			uParam0->f_26 = 0;
			return 0;
		case 95:
			uParam0->f_26 = Var0.f_12;
			uParam0->f_27 = Var0.f_14;
			break;
		case 94:
			if (Var0.f_1 == 0.000112171f)
			{
				uParam0->f_26 = func_90(Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_38.f_1);
			}
			else
			{
				uParam0->f_26 = Var0.f_12;
			}
			break;
		default:
			uParam0->f_26 = Var0.f_12;
			break;
	}
	if (!TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		uParam0->f_26 = 3.231859f;
	}
	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		TXD::REQUEST_STREAMED_TXD(uParam0->f_26, true);
		uParam0->f_28 = 1;
		if (uParam0->f_27 != 0 && TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_27))
		{
			TXD::REQUEST_STREAMED_TXD(uParam0->f_27, true);
		}
		return 1;
	}
	return 0;
}

void func_44(var uParam0)
{
	func_9(uParam0);
	func_91(uParam0);
}

int func_45(var uParam0)
{
	return func_10(uParam0);
}

bool func_46(var uParam0)
{
	struct<2> Var0;

	if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &Var0))
	{
	}
	if (uParam0->f_23 == 93)
	{
		func_93(func_92(Var0.f_1), 6);
		return true;
	}
	return false;
}

int func_47(int iParam0)
{
	return func_94(iParam0);
}

int func_48(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return 0;
	}
	MAP::SET_BLIP_FLASHES(iParam0, &iVar0, &uVar1);
	switch (func_94(iVar0))
	{
		case joaat("BLIP_MISSION"):
			return uVar1;
		case joaat("BLIP_TOWN"):
			return uVar1;
		case joaat("BLIP_STORE"):
			return uVar1;
		case joaat("BLIP_PLAYLIST"):
			return uVar1;
		case joaat("BLIP_FAST_TRAVEL"):
			return uVar1;
		case joaat("BLIP_GFH_GIVER"):
			return uVar1;
		case -1047712081:
			return uVar1;
		case joaat("BLIP_POSSE_CAMP"):
			return uVar1;
		case joaat("BLIP_POSSE_LOCAL_CAMP"):
			return uVar1;
		case joaat("BLIP_CUTSCENE"):
			return uVar1;
		default:
			break;
	}
	return uVar1;
}

bool func_49(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	Var0 = Global_1072759.f_28417;
	Var0.f_2 = -2.342567E-20f;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		*uParam2 = iParam0;
		uParam2->f_1 = iParam1;
		Var0.f_2 = -2.879084E+32f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_3), &Var0);
		Var0.f_2 = 1.045804E+36f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_2), &Var0);
		Var0.f_2 = -3.26116E-34f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_4), &Var0);
		Var0.f_2 = -5.998244E+08f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_5), &Var0);
		Var0.f_2 = -6.366537E-13f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_6), &Var0);
		Var0.f_2 = -2.750781E+07f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_7), &Var0);
		Var0.f_2 = 1.649235E-14f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_8), &Var0);
		Var0.f_2 = -1.243101E-27f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_9), &Var0);
		Var0.f_2 = 8.605964E+30f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_10), &Var0);
		Var0.f_2 = -5.081754E+08f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_11), &Var0);
		Var0.f_2 = 2.273515E-25f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_12), &Var0);
		Var0.f_2 = -6.028521E+07f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_13), &Var0);
		Var0.f_2 = -1.006053E-10f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_14), &Var0);
		Var0.f_2 = 1.587698E-14f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_15), &Var0);
		Var0.f_2 = 1.079622E+31f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_16), &Var0);
		Var0.f_2 = 2.918411E+32f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_17), &Var0);
		Var0.f_2 = -1.547069E-19f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_25), &Var0);
		return true;
	}
	return false;
}

void func_50(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	var uVar4;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	Var2 = { func_95(PLAYER::INT_TO_PLAYERINDEX(iVar1)) };
	uParam1->f_15 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", func_96(PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar1)), 4.808429E-35f));
	uParam1->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -1.479745E+23f);
	uParam1->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	func_97(&uVar4, Var2, 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISC::GET_HASH_KEY(&uVar4));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", -2.351278E+21f);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", func_98(iVar1));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
}

void func_51(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "description", HUD::GET_STRING_FROM_HASH_KEY(-7.981634E+36f));
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "description_title", "");
	func_99(uParam0, uParam1->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_52(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", uParam1->f_8);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_53(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	if (uParam0->f_23 == 97 || uParam0->f_23 == 98)
	{
		uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", uParam1->f_8);
		uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_54(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	switch (uParam0->f_23)
	{
		case 95:
			iVar4 = func_100(uParam1->f_1);
			if (!func_101(iVar4))
			{
			}
			else
			{
				iVar6 = func_102(iVar4);
				if (iVar6 == 3.006576E-21f)
				{
				}
				else
				{
					if (func_103(iVar4) != -1.753214E+27f)
					{
						if (func_104(iVar4) == -2.343906E-05f)
						{
							if (!func_105(func_104(iVar4)))
							{
								iVar6 = -1476916f;
							}
						}
						if (func_104(iVar4) == 18.80062f)
						{
							if (func_105(func_104(iVar4)))
							{
								iVar5 = PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(func_106(iVar4, iVar6), false, false);
								iVar0 = PLAYER::_0xDA9D7BE231FE865F(func_106(iVar4, iVar6), 0, 0);
								fVar3 = uParam1->f_8;
								fVar1 = uParam1->f_12;
								fVar2 = uParam1->f_13;
							}
							else
							{
								iVar0 = -1.704975E-14f;
								fVar3 = 2.072531E+14f;
								fVar1 = -1.323002E-28f;
								fVar2 = -1.931351E+13f;
							}
						}
						else
						{
							iVar5 = PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(func_106(iVar4, iVar6), false, false);
							if (iVar5 == 0)
							{
							}
							else
							{
								iVar0 = PLAYER::_0xDA9D7BE231FE865F(func_106(iVar4, iVar6), 0, 0);
								if (PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(iVar5))
								{
									switch (iVar6)
									{
										case joaat("PRIMARY"):
											fVar3 = uParam1->f_8;
											fVar1 = uParam1->f_12;
											fVar2 = uParam1->f_13;
											break;
										case joaat("SECONDARY"):
											if (func_104(iVar4) == -2.343906E-05f)
											{
												fVar3 = uParam1->f_8;
												fVar1 = uParam1->f_12;
												fVar2 = uParam1->f_13;
											}
											else
											{
												fVar3 = uParam1->f_9;
												fVar1 = uParam1->f_14;
												fVar2 = uParam1->f_15;
												uParam1->f_12 = uParam1->f_14;
												uParam1->f_13 = uParam1->f_15;
											}
											break;
										default:
											break;
									}
								}
								else
								{
									switch (func_107(iVar4, iVar6))
									{
										case joaat("FEMALE"):
											fVar3 = -3.767667E+15f;
											break;
										case joaat("MALE"):
											fVar3 = 2.072531E+14f;
											break;
										default:
											break;
									}
									fVar1 = -1.323002E-28f;
									fVar2 = -1.931351E+13f;
								}
								Jump @540; //curOff = 490
								iVar0 = func_108(iVar4, -0.220915f);
								if (iVar0 == 0)
								{
									iVar0 = MISC::GET_HASH_KEY("GEM_BOUNTY_BOARD");
								}
								fVar3 = uParam1->f_8;
								fVar1 = uParam1->f_12;
								fVar2 = uParam1->f_13;
								Jump @694; //curOff = 540
								iVar0 = uParam1->f_4;
								if (uParam1->f_1 == 0.000112171f)
								{
									fVar1 = func_90(Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_38.f_1);
								}
								else
								{
									fVar1 = uParam1->f_12;
								}
								fVar2 = uParam1->f_13;
								fVar3 = uParam1->f_8;
								Jump @694; //curOff = 602
								iVar0 = uParam1->f_4;
								if (uParam1->f_12 == 2.508494E-13f)
								{
									fVar1 = func_90(Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_38.f_1);
								}
								else
								{
									fVar1 = uParam1->f_12;
								}
								fVar2 = uParam1->f_13;
								fVar3 = uParam1->f_8;
								Jump @694; //curOff = 664
								iVar0 = uParam1->f_4;
								fVar1 = uParam1->f_12;
								fVar2 = uParam1->f_13;
								fVar3 = uParam1->f_8;
							}
							uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", iVar0);
							uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", fVar3);
							uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
							DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", fVar1);
							DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", fVar2);
							DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
							DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
							if (uParam1->f_10 != -6.374072E-27f)
							{
								uParam0->f_38 = 1;
								DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_10, MISC::VAR_STRING(0, uParam1->f_10));
							}
							if (uParam0->f_23 == 93)
							{
								iVar7 = func_92(uParam1->f_1);
								func_109(iVar7);
								uParam0->f_18 = 0;
								uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_9, "startable", true);
								uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "startPrompt", -1.229186E+18f);
								func_55(uParam0);
							}
							DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
						}
					}
				}
			}
			default:
				break;
	}
}

void func_55(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam0->f_23 == 93 && DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_16))
	{
		bVar0 = ((Global_1572887.f_72.f_40 > 1 && Global_1572887.f_72.f_40 <= 15) && !func_110());
		bVar1 = (GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10) && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()));
		bVar2 = (bVar0 || bVar1);
		if (uParam0->f_18 != bVar2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, !bVar2);
			if (bVar0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, 1.144865E+19f);
			}
			else if (bVar1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, 2.362363E-12f);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, -1.229186E+18f);
			}
			uParam0->f_18 = bVar2;
		}
	}
}

void func_56(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	if (uParam0->f_30)
	{
		uParam0->f_30 = 0;
		uParam0->f_30.f_1 = 1;
	}
	if (uParam0->f_30.f_1)
	{
		sVar1 = func_111(Global_265213.f_4[uParam0->f_30.f_2 /*46*/].f_17, &iVar0);
		if (iVar0 != 1)
		{
			uParam0->f_30.f_1 = 0;
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_13, sVar1);
			sVar2 = MISC::VAR_STRING(10, "LITERAL_STRING", &(Global_265213.f_4[uParam0->f_30.f_2 /*46*/].f_7));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_14, sVar2);
		}
	}
}

bool func_57(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_58(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 81:
			if (func_112(iParam0))
			{
				return 5.727499E-28f;
			}
			else
			{
				return -4.550262E-15f;
			}
			break;
		case 111:
			if (func_112(iParam0))
			{
				return -2.213167E-09f;
			}
			else
			{
				return -1.951939E-33f;
			}
			break;
		case 5:
			if (func_1() != -1 && func_113() == 7.153792E+09f)
			{
				return 7.153792E+09f;
			}
			else
			{
				return 5.579046E+17f;
			}
			break;
		case 66:
			return 9.269587E-37f;
		case 83:
			return 7.668727E+24f;
		case 26:
			return -1.3254E+18f;
		case 40:
			if (!bParam1 || func_1() != -1)
			{
				return 1.225169E+20f;
			}
			if (func_114(44))
			{
				return 1.225169E+20f;
			}
			else
			{
				return 2.517126E+23f;
			}
			break;
		case 98:
			if (func_1() != -1)
			{
				return 11802.65f;
			}
			else
			{
				return 3.581493E+20f;
			}
			break;
		case 70:
			return -5.202225E+07f;
		case 74:
			return 1.515653E+17f;
		case 99:
			return 0.05905914f;
		case 101:
			return -4.029773E+31f;
		case 62:
			return 1.957643E-10f;
		case 3:
			return -12802.21f;
		case 33:
			return 8.374734E-13f;
		case 87:
			if (func_1() != -1)
			{
				return 11802.65f;
			}
			else
			{
				return 6.753505E-13f;
			}
			break;
		case 37:
			return 2.333444E-32f;
		case 60:
			if (func_1() != -1)
			{
				return -0.004497551f;
			}
			else
			{
				return 3.93134E+35f;
			}
			break;
		case 135:
			return 0.0002236268f;
		case 127:
			return -4.581088E+29f;
		case 131:
			return 4.061754E+21f;
		case 121:
			return 6.18694E-30f;
		case 136:
			if (func_1() != -1)
			{
				return -2.363869E+07f;
			}
			if (!bParam1)
			{
				return 0.03422423f;
			}
			if (func_114(44))
			{
				return 0.03422423f;
			}
			else
			{
				return 4.526744E+20f;
			}
			break;
		case 22:
			return 0.0002714096f;
		case 39:
			return -9.790009E+20f;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -2.676368E-33f;
	}
	if (bParam2)
	{
		iVar0 = func_115(iParam0);
		if (iVar0 != -1)
		{
			return func_116(iVar0, bParam1);
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

bool func_62(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	return func_117(iParam0, 2);
}

bool func_63(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	return func_118(iParam0, 2);
}

bool func_64(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
	}
	return func_119(iParam0, 2.350989E-38f);
}

bool func_65(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_66(int iParam0)
{
	return func_120(iParam0);
}

bool func_67(struct<2> Param0)
{
	if (!func_121(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_122(Param0))
	{
		return false;
	}
	return true;
}

int func_68(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_123(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_69(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

struct<16> func_70(int iParam0, int iParam1, var uParam2)
{
	struct<16> Var0;
	vector3 vVar16;
	char cVar19[128];

	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return Var0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam0) };
	*uParam2 = func_86(vVar16, 1);
	while (vVar16.z < 1128792064 && !func_57(*uParam2))
	{
		vVar16.f_2 = (vVar16.z + 1103626240);
		*uParam2 = func_86(vVar16, 1);
	}
	if (!func_57(*uParam2))
	{
		return Var0;
	}
	StringCopy(&Var0, "MAP_CARD_", 128);
	cVar19 = func_124(*uParam2);
	StringConCat(&Var0, &cVar19, 128);
	StringConCat(&Var0, "_", 128);
	StringConCat(&Var0, func_125(iParam1, *uParam2, vVar16), 128);
	return Var0;
}

struct<16> func_71()
{
	char cVar0[128];

	StringCopy(&cVar0, "MAP_CARD_NBX_STAGECOACH", 128);
	return cVar0;
}

struct<16> func_72(int iParam0, int iParam1, var uParam2)
{
	struct<16> Var0;
	vector3 vVar16;

	if (!MAP::DOES_BLIP_EXIST(iParam1))
	{
		return Var0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam1) };
	if (vVar16.z == 0f)
	{
		func_126(&vVar16, 50, 10, 0, 0);
	}
	if (vVar16.z == 0f)
	{
		vVar16.f_2 = Global_34.f_2;
	}
	*uParam2 = func_86(vVar16, 1);
	if (!func_57(*uParam2))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var0, "MAP_CARD_CAMP_", 128);
			StringConCat(&Var0, func_127(*uParam2), 128);
			break;
		case 54:
			StringCopy(&Var0, "MAP_CARD_CAMP_BEECHERSHOPE", 128);
			break;
		case 75:
			StringCopy(&Var0, "MAP_CARD_CAMP_FOOD", 128);
			break;
		case 76:
			StringCopy(&Var0, "MAP_CARD_CAMP_TITHING_BOX", 128);
			break;
		case 77:
			StringCopy(&Var0, "MAP_CARD_CAMP_BUTCHER", 128);
			break;
		case 78:
			StringCopy(&Var0, "MAP_CARD_CAMP_HORSE_HITCH", 128);
			break;
		case 79:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_AMMO", 128);
			break;
		case 80:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_MEDICINE", 128);
			break;
		case 81:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_PROVISIONS", 128);
			break;
		case 82:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_POKER", 128);
			break;
		case 83:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER", 128);
			break;
		case 84:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_DOMINOES", 128);
			break;
	}
	return Var0;
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MAP_CARD_MINIGAMES_BLACKJACK";
		case 7:
			return "MAP_CARD_MINIGAMES_FENCE_BUILDING";
		case 3:
			return "MAP_CARD_MINIGAMES_POKER";
		case 5:
			return "MAP_CARD_MINIGAMES_COW_MILKING";
		case 6:
			return "MAP_CARD_MINIGAMES_CLEANING_STALLS";
		case 2:
			return "MAP_CARD_MINIGAMES_DOMINOES_BLOCK";
		case 8:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_THREES";
		case 9:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_FIVES";
		case 10:
			return "MAP_CARD_MINIGAMES_DOMINOES_DRAW";
		case 4:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC";
		case 11:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_GUTS";
		default:
			break;
	}
	return "";
}

char* func_74(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return "MAP_CARD_CAMP_HORSESHOE_HUNTING_CHARLES";
		case joaat("HAI_FISHING_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN";
		case joaat("HAI_FISHING_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER";
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return "MAP_CARD_CAMP_HORSESHOE_FIVE_FINGER_FILLET_LENNY";
		case joaat("HAI_HUNTING_06"):
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON";
		case joaat("HAI_DOMINOES_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY";
		case joaat("HAI_COACH_ROBBERY_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_SEAN";
		case joaat("HAI_COACH_ROBBERY_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_BILL";
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FIVE_FINGER_FILLET_MICAH";
		case joaat("HAI_BANK_ROBBERY_01"):
			return "MAP_CARD_CAMP_SHADYBELLE_BANK_ROBBERY_CHARLES";
		case joaat("HAI_COACH_ROBBERY_03"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_MICAH";
		case joaat("HAI_COACH_ROBBERY_04"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_LENNY";
		case joaat("HAI_RUSTLING_02"):
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE";
		case joaat("HAI_HOME_ROBBERY_01"):
			return "MAP_CARD_CAMP_HORSESHOE_HOME_ROBBERY_JAVIER";
		default:
			break;
	}
	return "";
}

char* func_75(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1;
	if (iParam0 != -1)
	{
		iVar1 = func_128(iParam0);
		if (iVar1 == 0 || MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
		{
			iVar0 = iParam0;
		}
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return MISC::VAR_STRING(0, iVar0);
}

char* func_76(int iParam0)
{
	if (!func_57(iParam0))
	{
		if (MISC::_IS_GLOBAL_BLOCK_VALID(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return func_129(Global_1887363[iParam0 /*36*/].f_23);
}

char* func_77(int iParam0)
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
	if (func_1() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_78(int iParam0)
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
	if (func_1() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

int func_79(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_80(int iParam0)
{
	char* sVar0;

	sVar0 = func_130(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sVar0);
}

int func_81(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	StringCopy(&cVar0, func_130(iParam0), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar8, "MAP_CARD_", 64);
	StringConCat(&cVar8, &cVar0, 64);
	StringConCat(&cVar8, "_DESC", 64);
	return MISC::GET_HASH_KEY(&cVar8);
}

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "NM_PLAYLIST_ADVERSARY_SMALL";
		case 3:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM";
		case 4:
			return "NM_PLAYLIST_ADVERSARY_LARGE";
		case 5:
			return "NM_PLAYLIST_GUN_RUSH_TEAMS";
		case 6:
			return "NM_PLAYLIST_GUN_RUSH";
		case 7:
			return "NM_PLAYLIST_ELIMINATION_SMALL";
		case 8:
			return "NM_PLAYLIST_ELIMINATION_MEDIUM";
		case 9:
			return "NM_PLAYLIST_ELIMINATION_LARGE";
		case 0:
			return "NM_PLAYLIST_RACE";
		case 1:
			return "NM_PLAYLIST_FEATURED_001";
		case 10:
			return "NM_PLAYLIST_NOMINATED";
		case 11:
			return "NM_BUCKET_NOMINATED_SERIES_SMALL";
		case 12:
			return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
		case 13:
			return "NM_BUCKET_NOMINATED_SERIES_LARGE";
		case 15:
			return "NM_PLAYLIST_ORBIS_SERIES_1";
		case 16:
			return "NM_PLAYLIST_ORBIS_SERIES_2";
		case 17:
			return "NM_PLAYLIST_ORBIS_SERIES_3";
		case 19:
			return "NM_PLAYLIST_CAPTURE";
		case 18:
			return "NM_PLAYLIST_SHOOTOUT";
		case 20:
			return "NM_PLAYLIST_HARDCORE_SERIES";
		default:
			break;
	}
	return "NM_PLAYLIST_FFA";
}

var func_83(int iParam0)
{
	float fVar0;

	if (func_105(func_104(iParam0)))
	{
		fVar0 = -0.220915f;
	}
	else
	{
		fVar0 = -1.001418E+35f;
	}
	return Global_1119220[iParam0 /*35*/].f_13[func_131(fVar0, 1)];
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BLIP_MG_POKER";
		case 1:
			return "BLIP_MG_BLACKJACK";
		case 2:
			return "BLIP_MG_DOMINOES";
		case 7:
			return "BLIP_MG_FENCE_BUILDING";
		case 4:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 5:
			return "BLIP_SUMMER_COW";
		case 6:
			return "BLIP_SUMMER_HORSE";
		case 8:
			return "BLIP_MG_DOMINOES_ALL3S";
		case 9:
			return "BLIP_MG_DOMINOES_ALL5S";
		case 10:
			return "BLIP_MG_DOMINOES_DRAW";
		case 11:
			return "BLIP_MG_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "BLIP_MG_FIVE_FINGER_FILLET_GUTS";
		case 14:
			return "BLIP_PROC_LOANSHARK";
		case 13:
			return "BLIP_AMBIENT_HERD";
		case 15:
			return "BLIP_PROC_BANK";
		case 16:
			return "BLIP_PROC_BOUNTY_POSTER";
		case 17:
			return "BLIP_AMBIENT_COACH";
		case 18:
			return "BLIP_AMBIENT_TRAIN";
		case 19:
			return "BLIP_AMBIENT_RIVERBOAT";
		case 20:
			return "BLIP_SHOP_STORE";
		case 21:
			return "BLIP_SHOP_SHADY_STORE";
		case 22:
			return "BLIP_AMBIENT_QUARTERMASTER";
		case 23:
			return "BLIP_SHOP_GUNSMITH";
		case 24:
			return "BLIP_SHOP_COACH_FENCING";
		case 25:
			return "BLIP_SHOP_DOCTOR";
		case 26:
			return "BLIP_SHOP_TAILOR";
		case 28:
			return "BLIP_SHOP_BLACKSMITH";
		case 29:
			return "BLIP_SHOP_TRAINER";
		case 33:
			return "BLIP_POST_OFFICE";
		case 34:
			return "BLIP_POST_OFFICE_REC";
		case 30:
			return "BLIP_SHOP_TRAIN";
		case 31:
			return "BLIP_SHOP_BARBER";
		case 32:
			return "BLIP_SHOP_BUTCHER";
		case 35:
			return "BLIP_SHOP_TACKLE";
		case 36:
			return "SHOP_TITLE_GUS";
		case 51:
			return "BLIP_MP_ROLE_NATURALIST";
		case 37:
			return "BLIP_SHOP_HORSE";
		case 38:
			return "BLIP_SHOP_HORSE_FENCING";
		case 39:
			return "BLIP_SHOP_HORSE_SADDLE";
		case 40:
			return "BLIP_HOTEL_BED";
		case 41:
			return "BLIP_PHOTO_STUDIO";
		case 27:
			return "BLIP_SALOON";
		case 52:
			return "BLIP_SHOP_WARDROBE";
		case 48:
			return "BLIP_MP_TRAVELLING_SALESWOMAN";
		case 49:
			return "BLIP_BUSINESS_MOONSHINE";
		case 50:
			return "BLIP_MOONSHINE_STILL";
		case 100:
			return "BLIP_MP_ROLE_MOONSHINER";
		case 53:
			return "BLIP_STABLE";
		case 54:
			return "BLIP_PROC_HOME";
		case 55:
			return "BLIP_PROC_HOME_LOCKED";
		case 56:
			return "BLIP_PROC_HOME";
		case 57:
			return "BLIP_AMBIENT_TELEGRAPH";
		case 58:
			return "BLIP_AMBIENT_COACH_TAXI";
		case 59:
			return "BLIP_AMBIENT_THEATRE";
		case 60:
			return "BLIP_REGION_CARAVAN";
		case 75:
			return "BLIP_CAMP_EAT";
		case 76:
			return "BLIP_AMBIENT_TITHING";
		case 77:
			return "BLIP_SHOP_PEARSON";
		case 78:
			return "BLIP_CAMP_HITCH";
		case 79:
			return "BLIP_SUPPLIES_AMMO";
		case 80:
			return "BLIP_SUPPLIES_HEALTH";
		case 81:
			return "BLIP_SUPPLIES_FOOD";
		case 82:
			return "BLIP_MG_POKER";
		case 83:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 84:
			return "BLIP_MG_DOMINOES";
		case 85:
			return "BLIP_REGION_HUNTING";
		case 86:
			return "BLIP_MG_FISHING";
		case 87:
			return "BLIP_ROBBERY_COACH";
		case 88:
			return "BLIP_REGION_HUNTING";
		case 89:
			return "BLIP_ROBBERY_BANK";
		case 90:
			return "BLIP_MG_DOMINOES";
		case 91:
			return "BLIP_AMBIENT_HERD";
		case 61:
			return "BLIP_EVENT_APPLESEED";
		case 62:
			return "BLIP_EVENT_CASTOR";
		case 63:
			return "BLIP_EVENT_RAILROAD_CAMP";
		case 64:
			return "BLIP_EVENT_RIGGS_CAMP";
		case 65:
			return "BLIP_REGION_HIDEOUT";
		case 66:
			return "BLIP_PROC_HOME";
		case 67:
			return "BLIP_MG_FISHING";
		case 68:
			return "BLIP_AMBIENT_THEATRE";
		case 69:
			return "BLIP_AMBIENT_THEATRE";
		default:
			return "";
	}
	return "";
}

int func_85(int iParam0)
{
	switch (iParam0)
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
			return 2;
		case 16:
		case 20:
		case 21:
		case 22:
		case 23:
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
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 53:
		case 59:
		case 68:
		case 69:
			return 1;
		case 54:
		case 60:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			return 3;
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
			return 4;
		case 58:
			return 5;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_86(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_132();
	if (func_57(iVar0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar0 /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_133(vParam0, iParam3);
}

struct<16> func_87(int iParam0)
{
	char cVar0[128];

	switch (iParam0)
	{
		case 111:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
		case 5:
			StringCopy(&cVar0, "MAP_CARD_TAXI_SAINTDENIS", 128);
			break;
		case 81:
			StringCopy(&cVar0, "MAP_CARD_TAXI_VALENTINE", 128);
			break;
		case 26:
			StringCopy(&cVar0, "MAP_CARD_TAXI_STRAWBERRY", 128);
			break;
		case 40:
			StringCopy(&cVar0, "MAP_CARD_TAXI_BLACKWATER", 128);
			break;
		default:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
	}
	return cVar0;
}

void func_88(var uParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = uParam0->f_33;
	if (!func_58(iVar3))
	{
		iVar3 = func_19(uParam0->f_19);
	}
	iVar4 = func_61(iVar3);
	if ((func_134() || func_135()) || func_136())
	{
		return;
	}
	else if (func_62(iVar3) || func_63(iVar4))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
		{
			sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
		}
		bVar0 = true;
	}
	else if (func_65(iVar4))
	{
		iVar1 = func_66(iVar4);
		if (iVar1 > 0)
		{
			bVar0 = true;
			sVar2 = MISC::VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, sVar2);
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1900531)
	{
		if (!func_67(Global_1900531[iVar0 /*2*/]))
		{
		}
		else if (Global_1900531[iVar0 /*2*/] == 2)
		{
			iVar1 = func_68(Global_1900531[iVar0 /*2*/]);
			if ((func_69(iVar1) && MAP::DOES_BLIP_EXIST(Global_1835011[iVar1 /*72*/].f_28)) && Global_1835011[iVar1 /*72*/].f_28 == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_90(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOU_NAWAS_CAMP"):
			return -6.946515E+30f;
		case joaat("BIG_VALLEY_CAMP"):
			return -6.644773E-28f;
		case joaat("CHOLLA_SPRINGS_CAMP"):
			return -19291.86f;
		case joaat("CUMBERLAND_FOREST_CAMP"):
			return -16664.66f;
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			return -1.087524E-17f;
		case joaat("GREAT_PLAINS_CAMP"):
			return -2.746251E+17f;
		case joaat("GRIZZLIES_CAMP"):
			return 2.026076E+36f;
		case joaat("HEARTLAND_CAMP"):
			return 2.109222E+11f;
		case joaat("HENNIGANS_STEAD_CAMP"):
			return 5.072605E-34f;
		case joaat("RIO_BRAVO_CAMP"):
			return -67.62843f;
		case joaat("ROANOKE_RIDGE_CAMP"):
			return -1.527862E-27f;
		case joaat("SCARLETT_MEADOWS_CAMP"):
			return -5.407292E-08f;
		case joaat("TALL_TREES_CAMP"):
			return 8.574027E-21f;
		default:
			break;
	}
	return 2.109222E+11f;
}

void func_91(var uParam0)
{
	uParam0->f_30 = 0;
	uParam0->f_30.f_1 = 0;
	uParam0->f_30.f_2 = 0;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NET_PLAYLIST_RACE_SERIES"):
			return 0;
		case joaat("NET_PLAYLIST_FEATURED_SERIES_001"):
			return 1;
		case joaat("NET_PLAYLIST_ADVERSARY_SMALL"):
			return 2;
		case joaat("NET_PLAYLIST_ADVERSARY_MEDIUM"):
			return 3;
		case joaat("NET_PLAYLIST_ADVERSARY_LARGE"):
			return 4;
		case joaat("NET_PLAYLIST_GUN_RUSH_TEAMS"):
			return 5;
		case joaat("NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL"):
			return 6;
		case joaat("NET_PLAYLIST_ELIMINATION_SMALL"):
			return 7;
		case joaat("NET_PLAYLIST_ELIMINATION_MEDIUM"):
			return 8;
		case joaat("NET_PLAYLIST_ELIMINATION_LARGE"):
			return 9;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES"):
			return 10;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_SMALL"):
			return 11;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_MEDIUM"):
			return 12;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_LARGE"):
			return 13;
		case joaat("NET_PLAYLIST_PRIVATE_SERIES"):
			return 14;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_1"):
			return 15;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_2"):
			return 16;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_3"):
			return 17;
		case joaat("NET_PLAYLIST_SHOOTOUT"):
			return 18;
		case joaat("NET_PLAYLIST_CAPTURE"):
			return 19;
		case -1516590035:
			return 20;
		default:
			break;
	}
	return -1;
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_137(iParam0))
	{
	}
	iVar0 = 1;
	iVar1 = iParam0;
	if (iParam0 >= 10 && iParam0 <= 13)
	{
		iVar0 = 0;
	}
	if (iParam0 == 18)
	{
		iVar1 = 3;
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (Global_1901671.f_783.f_1)
		{
			iVar1 = func_138(iParam0);
		}
	}
	iVar2 = 0;
	if (((iVar1 == 6 || iVar1 == 5) || iVar1 == 8) || iVar1 == 9)
	{
		iVar2 = 2;
	}
	func_139(iParam1);
	func_142(1, 32, iVar0, func_140(iVar1), func_141(), iVar2, -1, 0, 0, 0);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 92:
			return -1.139082E+20f;
		case 93:
			return 2.330689E+38f;
		case 94:
			return 4.935556E+24f;
		case 95:
			return -5.226628E-12f;
		case 96:
			return 2.782296E+17f;
		case 97:
			return -0.0005021607f;
		case 98:
			return 2.626575E+10f;
		case 71:
			return -4.6872E-07f;
		case 101:
			return -4.6872E-07f;
		case 72:
			return 5.405623E-30f;
		case 73:
			return -7107996f;
		case 16:
		case 20:
		case 21:
		case 22:
		case 23:
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
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 53:
		case 59:
		case 68:
		case 69:
		case 99:
			return 4.507755E+16f;
		case 70:
			return -17.64779f;
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
		case 46:
			return -1.213372E+32f;
		default:
			break;
	}
	return 0;
}

struct<2> func_95(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_96(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_143(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_97(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uParam1))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	switch (iParam3)
	{
		case 0:
			StringCopy(sParam0, NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&uParam1, iParam3), 128);
			return 4;
		case 1:
		case 2:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uParam1))
			{
				return 1;
			}
			return func_144(sParam0, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uParam1), iParam3);
		default:
			break;
	}
	return 3;
}

int func_98(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

void func_99(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_145(iParam1);
	if (iVar0 < 0)
	{
		return;
	}
	uParam0->f_30 = 1;
	uParam0->f_30.f_1 = 0;
	uParam0->f_30.f_2 = iVar0;
}

int func_100(var uParam0)
{
	return func_146(13, uParam0);
}

bool func_101(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

var func_102(int iParam0)
{
	return Global_1110244.f_268.f_2911[iParam0 /*13*/].f_1;
}

int func_103(int iParam0)
{
	return Global_1119220[iParam0 /*35*/].f_1;
}

int func_104(int iParam0)
{
	return Global_1119220[iParam0 /*35*/];
}

bool func_105(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_148(-2.613904E-22f, func_147(iParam0)) };
	return func_149(Var0);
}

var func_106(int iParam0, int iParam1)
{
	return Global_1119220[iParam0 /*35*/].f_2[func_150(iParam1, 1) /*2*/];
}

int func_107(int iParam0, int iParam1)
{
	return Global_1119220[iParam0 /*35*/].f_2[func_150(iParam1, 1) /*2*/].f_1;
}

float func_108(int iParam0, int iParam1)
{
	return Global_1119220[iParam0 /*35*/].f_13[func_131(iParam1, 1)];
}

void func_109(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 <= -1)
	{
		return;
	}
	if (iVar0 > 21)
	{
		return;
	}
	func_151(Global_1901671.f_125[iVar0 /*2*/].f_1, Global_1901671.f_125[iVar0 /*2*/]);
}

bool func_110()
{
	return func_152(Global_1572887.f_8, 1);
}

char* func_111(int iParam0, var uParam1)
{
	char* sVar0;

	if (Global_265213.f_122353.f_130 > 0 && Global_265213.f_122353.f_130 != iParam0)
	{
		*uParam1 = 5;
		return "";
	}
	switch (Global_265213.f_122353)
	{
		case 0:
			if (!NETWORK::UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(iParam0))
			{
				func_153(1);
			}
			else
			{
				NETWORK::UGC_RELEASE_ALL_CACHED_DESCRIPTIONS();
				func_153(1);
			}
			break;
		case 1:
			NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(iParam0);
			func_153(2);
			break;
		case 2:
			if (!NETWORK::UGC_HAS_DESCRIPTION_REQUEST_FINISHED(iParam0))
			{
				*uParam1 = 1;
				return "";
			}
			if (NETWORK::UGC_DID_DESCRIPTION_REQUEST_SUCCEED(iParam0))
			{
				func_153(3);
			}
			else
			{
				func_153(0);
				*uParam1 = 3;
				return "";
			}
			break;
		case 3:
			sVar0 = NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam0, 512);
			NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(iParam0);
			func_153(0);
			*uParam1 = 2;
			return sVar0;
	}
	*uParam1 = 1;
	return "";
}

bool func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
	}
	return func_119(iParam0, 9.403955E-38f);
}

int func_113()
{
	return Global_1939089.f_26;
}

bool func_114(int iParam0)
{
	if (!func_154(iParam0))
	{
		return false;
	}
	return func_155(iParam0);
}

int func_115(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 121)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_116(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.381375E-38f;
		case 1:
			return 0.1178391f;
		case 2:
			return 3.109246E-21f;
		case 3:
			return -6.153412E-38f;
		case 4:
			if (!bParam1 || func_1() != -1)
			{
				return -7.767989E-09f;
			}
			if (func_114(44))
			{
				return -7.767989E-09f;
			}
			else
			{
				return -2.93388E-24f;
			}
			break;
		case 5:
			return -0.004497551f;
		case 6:
			return -0.004497551f;
		case 7:
			return -0.004497551f;
		case 8:
			return 1.202762E-19f;
		case 9:
			return -8.461319E-12f;
		case 10:
			return 11802.65f;
		case 11:
			return 3.193451E+19f;
		case 12:
			if (!bParam1 || func_1() != -1)
			{
				return -3.267154E+15f;
			}
			if (func_114(44))
			{
				return -3.267154E+15f;
			}
			else
			{
				return 6.111615E-34f;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_1() != -1)
			{
				return -2.363869E+07f;
			}
			if (func_114(44))
			{
				return -2.363869E+07f;
			}
			else
			{
				return -5.573858E-20f;
			}
			break;
	}
	return 0;
}

bool func_117(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_271[iParam0] && iParam1) != 0;
	}
	return (Global_1072759.f_21335[iParam0] && iParam1) != 0;
}

bool func_118(int iParam0, int iParam1)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1) != 0;
}

bool func_119(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		return (Global_8130[iParam0 /*11*/] && fParam1) != 0;
	}
	return (Global_1072759.f_19611[iParam0 /*11*/] && fParam1) != 0;
}

int func_120(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	var uVar3;

	if (!func_65(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_14 == -1)
	{
		return Global_38.f_198[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_95(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var1, &uVar3);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1072759.f_21262[iVar0 /*12*/] = uVar3;
		iVar0++;
	}
	return Global_1072759.f_21262[iParam0 /*12*/];
}

bool func_121(int iParam0)
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

int func_122(int iParam0)
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

bool func_123(struct<2> Param0, bool bParam2)
{
	if (!func_67(Param0))
	{
		return false;
	}
	func_156(bParam2);
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

char[] func_124(int iParam0)
{
	char[] cVar0[8];

	if (!func_57(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1887363[iParam0 /*36*/].f_23;
}

char* func_125(int iParam0, int iParam1, vector3 vParam2)
{
	switch (iParam0)
	{
		case 20:
			return "GENERALSTORE";
		case 21:
			return "FENCE";
		case 23:
			return "GUNSMITH";
		case 25:
			return "DOCTOR";
		case 26:
			return "TAILOR";
		case 28:
			return "BLACKSMITH";
		case 33:
			switch (iParam1)
			{
				case 111:
					return "TRAINSTATION";
				default:
					return "DEPOT";
			}
			break;
		case 34:
			return "DEPOT";
		case 30:
			switch (iParam1)
			{
				case 5:
					return "DEPOT";
				default:
					return "TRAINSTATION";
			}
			break;
		case 31:
			return "BARBER";
		case 32:
			return "BUTCHER";
		case 35:
			return "BAITSHOP";
		case 36:
			return "TRAPPER";
		case 37:
			return "HORSESHOP";
		case 38:
			return "HORSESHOP";
		case 40:
			return "HOTEL";
		case 41:
			return "PHOTOGRAPHER";
		case 59:
			return "MAGICLANTERN";
		case 68:
			return "VAUDEVILLE";
		case 69:
			return "VAUDEVILLE";
		case 58:
			return "STAGECOACH";
		case 27:
			switch (iParam1)
			{
				case 5:
					if (BUILTIN::VDIST(vParam2, 2796f, -1167f, vParam2.z) <= 1103626240)
					{
						return "SLUMSALOON";
					}
					else
					{
						return "NICESALOON";
					}
					break;
				case 81:
					if (BUILTIN::VDIST(vParam2, -308f, 807.05f, vParam2.z) <= 1103626240)
					{
						return "SALOON_BARBER";
					}
					else
					{
						return "SALOON2";
					}
					break;
				default:
					return "SALOON";
			}
			break;
		case 16:
			return "BOUNTY";
		case 52:
			return "WARDROBE";
	}
	return "";
}

int func_126(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_157(*uParam0, 0f, 0f, 0f))
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

char* func_127(int iParam0)
{
	switch (func_158(iParam0))
	{
		case 6:
			return "BEAVERHOLLOW";
		case 2:
			return "CLEMENSPOINT";
		case 0:
			return "COLTER";
		case 4:
			return "GUARMA";
		case 1:
			return "HORSESHOE";
		case 5:
			return "LAKAY";
		case 3:
			return "SHADYBELLE";
		case 7:
			return "PRONGHORN";
	}
	return "";
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case joaat("W_4_ABANDONED_MISSION"):
			return 0.002742651f;
		case joaat("W_4_ABANDONED_TRADING_POST"):
			return 2.121785E+10f;
		case joaat("W_4_FIRE_LOOKOUT_TOWER"):
			return -3.484533E-07f;
		case joaat("W_4_FLATTENED_CABIN"):
			return 3.790058E+18f;
		case joaat("W_5_FORT_BRENNAND"):
			return 1.970772E-22f;
		case joaat("W_5_LIMPANY"):
			return 2.047961E+34f;
		case joaat("W_4_METEOR_HOUSE"):
			return 48458.25f;
		case joaat("W_4_OIL_DERRICK"):
			return -2.156451E-05f;
		case joaat("W_4_PLEASANCE"):
			return -4.745321E-34f;
		case joaat("W_4_ROADSIDE_BROTHEL"):
			return -2.944127E-33f;
		case joaat("W_4_THE_OLD_BACCHUS_PLACE"):
			return 3.790809E+35f;
		case joaat("W_4_TRADING_POST"):
			return -108265.4f;
		case joaat("W_4_TWO_CROWS"):
			return 1.433422E-19f;
		case joaat("W_4_UTOPIAN_COLONY_BUILDING"):
			return 1.419497E-36f;
		case joaat("W_4_WITCHES_CAULDRON"):
			return 5.118677E-25f;
		case joaat("W_4_APPLESEED_TIMBER_COMPANY"):
			return -1.087969E+21f;
		case joaat("W_4_CASTORS_RIDGE"):
			return -2.045847E+30f;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_1"):
			return 0.04918144f;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_2"):
			return 9.543188E-13f;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_3"):
			return -2.473492E+17f;
		case joaat("W_4_FORT_RIGGS_HOLDING_CAMP"):
			return -3.751822E+12f;
		case joaat("W_5_BEAVER_HOLLOW"):
			return -5.358283E-11f;
		case joaat("W_4_CLEMENS_POINT"):
			return 1.103986E-11f;
		case joaat("W_4_COLTER"):
			return 2.149383E+27f;
		case joaat("W_4_GAPTOOTH_BREACH"):
			return 6.327552E+23f;
		case joaat("W_4_HANGING_DOG_RANCH"):
			return -2.626526E+38f;
		case joaat("W_4_HORSESHOE_OVERLOOK"):
			return -2.361315E+23f;
		case joaat("W_4_PIKES_BASIN"):
			return 4.861634E+14f;
		case joaat("W_4_SHADY_BELLE"):
			return -1.39551E+26f;
		case joaat("W_4_SIX_POINT_CABIN"):
			return -814929.9f;
		case joaat("W_4_SOLOMONS_FOLLY"):
			return 6.346759E+32f;
		case joaat("W_4_ABERDEEN_PIG_FARM"):
			return 4.232901E+14f;
		case joaat("W_4_ADLER_RANCH"):
			return 2.37012E-22f;
		case joaat("W_4_CARMODY_DELL"):
			return -8.823569E-28f;
		case joaat("W_4_CATFISH_JACKSONS"):
			return -0.003672305f;
		case joaat("W_4_CHEZ_PORTER"):
			return -6.741661E-24f;
		case joaat("W_4_LARNED_SOD"):
			return -0.2067486f;
		case joaat("W_4_LONNIES_SHACK"):
			return NaNf;
		case joaat("W_4_MACLEANS_HOUSE"):
			return 1.380158E-34f;
		case joaat("W_4_PAINTED_SKY"):
			return -9.495817E-37f;
		case joaat("W_4_RIDGEWOOD_FARM"):
			return -1.055526E-09f;
		case joaat("W_4_VAN_HORN_MANSION"):
			return 7.032591E-36f;
		case joaat("W_4_WATSONS_CABIN"):
			return -5.950899E-27f;
		case joaat("W_4_WILLARDS_REST"):
			return 1.752256E-22f;
		case joaat("W_5_BERYLS_DREAM"):
			return -3.083407E+14f;
		case joaat("W_5_BLACK_BALSAM_RISE"):
			return 1.837754E+19f;
		case joaat("W_5_BLACK_BONE_FOREST"):
			return -1.909593E+15f;
		case joaat("W_4_BRITTLEBRUSH_TRAWL"):
			return 1.118861E+24f;
		case joaat("W_5_BROKEN_TREE"):
			return 1.493551E+36f;
		case joaat("W_4_CANEBREAK_MANOR"):
			return -1.524998E-31f;
		case joaat("W_5_CHADWICK_FARM"):
			return 3.327588E-31f;
		case joaat("W_4_CLINGMAN"):
			return 2.230097E-19f;
		case joaat("W_4_COCHINAY"):
			return 1.646843E-09f;
		case joaat("W_4_COMPSONS_STEAD"):
			return 6.590472E+35f;
		case joaat("W_4_COPPERHEAD_LANDING"):
			return 0.007551658f;
		case joaat("W_4_CUEVA_SECA"):
			return 1.448833E-23f;
		case joaat("W_4_DOVERHILL"):
			return -1.162533E+33f;
		case joaat("W_4_DOWNES_RANCH"):
			return -1.080593E-07f;
		case joaat("W_4_EVELYN_MILLER_CAMP"):
			return -24712.09f;
		case joaat("W_4_FACE_ROCK"):
			return 7.953594E-20f;
		case joaat("W_4_FIRWOOD_RISE"):
			return -3.10736E-10f;
		case joaat("W_5_FISHINGSPOT"):
			return 1.333148E+17f;
		case joaat("W_4_GREENHOLLOW"):
			return 1.738619E+24f;
		case joaat("W_4_GUTHRIE_FARM"):
			return 2.619473E-11f;
		case joaat("W_4_HAGEN_ORCHARDS"):
			return -2.183831E+30f;
		case joaat("W_4_HILL_HAVEN_RANCH"):
			return 1.464423E+29f;
		case joaat("W_4_HOUSEBOAT"):
			return 5.122068E+27f;
		case joaat("W_4_LAKE_DON_JULIO_HOUSE"):
			return 2.142827E+19f;
		case joaat("W_4_LONE_MULE_STEAD"):
			return -3.820025E-14f;
		case joaat("W_4_LUCKYS_CABIN"):
			return -3.937803E-10f;
		case joaat("W_4_MACOMBS_END"):
			return 9.619563f;
		case joaat("W_4_MERKINS_WALLER"):
			return 2.374228E+28f;
		case joaat("W_4_MICAHS_HIDEOUT"):
			return -2.699267E+07f;
		case joaat("W_4_MILLESANI_CLAIM"):
			return -3.817698E+35f;
		case joaat("W_4_MOSSY_FLATS"):
			return 1.314074E+29f;
		case joaat("W_4_NEKOTI_ROCK"):
			return -2.482656E+07f;
		case joaat("W_4_ODDFELLOWS_REST"):
			return -0.05857617f;
		case joaat("W_4_OLD_GREENBANK_MILL"):
			return 5.211075E-24f;
		case joaat("W_4_OLD_TOMS_BLIND"):
			return -1.953231E-12f;
		case joaat("W_4_PLEASANCE_HOUSE"):
			return -5.683453E-24f;
		case joaat("W_4_PRINZ_CO"):
			return 1.314068E+11f;
		case joaat("W_6_RADLEYS_HOUSE"):
			return -7.022341E-12f;
		case joaat("W_5_RADLEYS_PASTURE"):
			return -4.053854E-20f;
		case joaat("W_4_RATTLESNAKE_HOLLOW"):
			return -6.341341E-12f;
		case joaat("W_4_REPENTANCE"):
			return -1.439717E+27f;
		case joaat("W_4_RILEYS_CHARGE"):
			return -1.010413E-26f;
		case joaat("W_4_RIO_DEL_LOBO_HOUSE"):
			return -2.609113E+10f;
		case joaat("W_4_SCRATCHING_POST"):
			return -7.215934E-37f;
		case joaat("W_4_SILENT_STEAD"):
			return 5.531192E-36f;
		case joaat("W_4_SILTWATER_STRAND"):
			return -1.726599E-10f;
		case joaat("W_4_STILLWATER_CABIN"):
			return -8.428492E-19f;
		case joaat("W_4_STILT_SHACK"):
			return 5.901232E-31f;
		case joaat("W_4_TANNERS_REACH"):
			return 6.263714E+17f;
		case joaat("W_4_TAXIDERMIST_HOUSE"):
			return 27.57284f;
		case joaat("W_4_THE_HANGING_ROCK"):
			return 1.522939E+16f;
		case joaat("W_4_THE_LOFT"):
			return 7.418907E-07f;
		case joaat("W_5_VALLEY_VIEW"):
			return 1.68892E-30f;
		case joaat("W_4_VENTERS_PLACE"):
			return -0.000567631f;
		case joaat("W_4_VETERANS_HOMESTEAD"):
			return 3.145188E-27f;
		case joaat("W_4_WALLACE_OVERLOOK"):
			return -7.041817E-10f;
		case joaat("W_5_ARGIL_RISE"):
			return 1.48476E-31f;
		case joaat("W_4_BAYGALL_EDGE"):
			return 5.088825E-29f;
		case joaat("W_4_BEAR_CLAW"):
			return -1.288454E-37f;
		case joaat("W_4_CAIRN_LODGE"):
			return 2.270605E-37f;
		case joaat("W_4_CLAWSONS_REST"):
			return 9.255954E-19f;
		case joaat("W_4_CRAWDAD_WILLIES"):
			return 1.613995E+27f;
		case joaat("W_5_DEER_COTTAGE"):
			return -2.216376E+14f;
		case joaat("W_4_DODDS_BLUFF"):
			return 8.019467E-20f;
		case joaat("W_4_DORMIN_CREST"):
			return 2.652694E-25f;
		case joaat("W_4_FAIRVALE_SHANTY"):
			return 3.704404E+19f;
		case joaat("W_4_GILL_LANDING"):
			return 1.942142E+07f;
		case joaat("W_4_GRANGERS_HOGGERY"):
			return 1.738956E-15f;
		case joaat("W_4_HANIS_BETHEL"):
			return -1.151753E-30f;
		case joaat("W_5_HURON_GLEN"):
			return -1.002169E+34f;
		case joaat("W_5_LENORA_VIEW"):
			return 68.75815f;
		case joaat("W_4_MANITO_GLADE"):
			return 1.266234E+20f;
		case joaat("W_4_MARTHAS_SWAIN"):
			return -5.675319E+12f;
		case joaat("W_4_OLD_HARRY_FEN"):
			return 2.479537E+10f;
		case joaat("W_4_OLD_TRAIL_RISE"):
			return 8.563042E+28f;
		case joaat("W_4_OSMAN_GROVE"):
			return -1.02337E-06f;
		case joaat("W_4_PLANTERS_BAWN"):
			return 2.101791E+23f;
		case joaat("W_6_REED_COTTAGE"):
			return -8.806617E+22f;
		case joaat("W_4_RIDGE_VIEW"):
			return -4.222318E+37f;
		case joaat("W_4_ROBARD_FARM"):
			return -2.778805E+11f;
		case joaat("W_4_SAWBONE_CLEARING"):
			return 3.571017E+34f;
		case joaat("W_4_SHEPHERDS_RISE"):
			return -3.521766E-15f;
		case joaat("W_4_SWADBASS_POINT"):
			return -3.241092E-13f;
		case joaat("W_4_TRAPPERS_CABIN"):
			return 2.344658E+38f;
		case joaat("W_5_VETTERS_ECHO"):
			return -4.228897E+20f;
		case joaat("W_4_BEECHERS_HOPE"):
			return -4.580508E+20f;
		case joaat("W_4_BUTCHER_CREEK"):
			return 1.197407E-33f;
		case joaat("W_4_COOTS_CHAPEL"):
			return 1.389935E-05f;
		case joaat("W_4_CORNWALL_KEROSENE_TAR"):
			return 1.115845E-15f;
		case joaat("W_4_EWING_BASIN"):
			return 1.722176E-15f;
		case joaat("W_5_GRAND_KORRIGAN_DOCKED"):
			return -1.60124E+28f;
		case joaat("W_5_GRAND_KORRIGAN_SEA"):
			return 3.728529E+31f;
		case joaat("W_4_PRONGHORN_RANCH"):
			return 5.617157E-31f;
		default:
			break;
	}
	return 0;
}

char* func_129(var uParam0)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_130(int iParam0)
{
	switch (iParam0)
	{
		case joaat("VANHORN"):
			return "VHT";
		case joaat("EMERALD"):
			return "EMR";
		case joaat("ANNESBURG"):
			return "ANN";
		case joaat("LAGRAS"):
			return "LAG";
		case joaat("RHODES"):
			return "RHO";
		case joaat("STRAWBERRY"):
			return "STR";
		case joaat("BLACKWATER"):
			return "BLA";
		case joaat("STDENIS"):
			return "NBX";
		case joaat("VALENTINE"):
			return "VAL";
		case joaat("ARMADILLO"):
			return "AMD";
		case joaat("TUMBLEWEED"):
			return "TBL";
		default:
			break;
	}
	return "";
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("GIVER_NAME"):
			return 0;
		case joaat("GIVER_STRANGER_NAME"):
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

int func_132()
{
	return Global_1893611.f_2;
}

int func_133(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_159(vParam0);
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

bool func_134()
{
	return Global_263042[Global_1295619 /*65*/] > 2;
}

bool func_135()
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
	if (!func_67(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_136()
{
	if (func_160(255) <= 2)
	{
		return false;
	}
	if (Global_265213.f_122484.f_80.f_16.f_2 != -5.544348E+20f)
	{
		return false;
	}
	if (!func_161(Global_265213.f_122484.f_80.f_16.f_3))
	{
		return false;
	}
	return true;
}

bool func_137(int iParam0)
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(func_162(iParam0));
}

int func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6;
	int iVar7;

	iVar0 = 0;
	iVar1 = 1;
	if (func_163() > 0)
	{
		iVar1 = func_163();
	}
	switch (iParam0)
	{
		case 18:
			if (func_137(2) && func_164(2) >= iVar1)
			{
				iVar2[iVar0] = 2;
				iVar0++;
			}
			if (func_137(3) && func_164(3) >= iVar1)
			{
				iVar2[iVar0] = 3;
				iVar0++;
			}
			if (func_137(4) && func_164(4) >= iVar1)
			{
				iVar2[iVar0] = 4;
				iVar0++;
			}
			break;
		case 8:
			if (func_137(7) && func_164(7) >= iVar1)
			{
				iVar2[iVar0] = 7;
				iVar0++;
			}
			if (func_137(8) && func_164(8) >= iVar1)
			{
				iVar2[iVar0] = 8;
				iVar0++;
			}
			if (func_137(9) && func_164(9) >= iVar1)
			{
				iVar2[iVar0] = 9;
				iVar0++;
			}
			break;
		case 15:
			if (func_137(15) && func_164(15) >= iVar1)
			{
				iVar2[iVar0] = 15;
				iVar0++;
			}
			if (func_137(16) && func_164(16) >= iVar1)
			{
				iVar2[iVar0] = 16;
				iVar0++;
			}
			break;
		default:
			if (func_137(iParam0) && func_164(iParam0) >= iVar1)
			{
				iVar2[iVar0] = iParam0;
				iVar0++;
			}
			break;
	}
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	iVar7 = (iVar6 % iVar0);
	if (iVar7 < 0 || iVar7 >= 3)
	{
		iVar7 = 0;
	}
	return iVar2[iVar7];
}

void func_139(int iParam0)
{
	Global_1572887.f_72.f_14 = iParam0;
}

int func_140(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		return 6;
	}
	if (iParam0 == 11)
	{
		return 5;
	}
	if (iParam0 == 12)
	{
		return 7;
	}
	if (iParam0 == 13)
	{
		return 8;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_265213.f_107995.f_13510[iVar0] == Global_265189.f_1[iParam0])
		{
			return Global_265213.f_107995.f_13575[iVar0];
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_141()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	struct<7> Var0;
	char cVar22[64];
	struct<51> Var30;

	if (!func_165(iParam2, iParam3))
	{
		return 0;
	}
	if (func_166() && Global_1572887.f_72.f_40 != 9)
	{
		return 0;
	}
	if (!func_167(Global_1295619.f_5))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_168(&Var0);
	func_169(iParam10, 1);
	func_170(iParam2, iParam3, iParam7, 1);
	func_171(Param4, 1);
	func_172(iParam6);
	func_173(iParam9);
	func_174();
	if ((func_67(Param4) && !func_175()) && Global_1220744 == -1)
	{
		func_176(Param4);
	}
	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);
	if (iParam2 != 2)
	{
		func_177();
	}
	if (func_175())
	{
		func_178(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_179(2.524355E-29f))
		{
			if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f))
			{
				func_180(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var30 = 255;
			Var30.f_13 = NaNf;
			Var30.f_16.f_2 = -5.544348E+20f;
			Var30.f_16.f_4 = 3;
			Var30.f_21 = -1;
			Var30.f_25 = 1;
			Var30.f_26 = 1;
			Var30.f_27 = 1;
			Var30.f_28 = 32;
			Var30.f_29 = 1;
			Var30.f_30 = -2;
			Var30.f_42.f_5 = -1;
			Var30.f_48 = -1;
			Var30.f_48.f_1 = -1;
			Var30.f_50.f_3 = -1;
			func_181(&Var30, iParam3, -1, -1, 3);
			StringCopy(&cVar22, func_182(&(Var30.f_32), 4.808429E-35f), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar22, MISC::VAR_STRING(2, func_183(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar22, MISC::VAR_STRING(2, func_185(func_184(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, &cVar22);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_117, MISC::VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	}
	if ((!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_186(255, 0)) && !bParam8)
	{
		func_187("NM_MATCHMAKING_WARNING");
	}
	func_188(10);
	return 1;
}

char* func_143(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_144(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar5;
	int iVar6;
	char* sVar7;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_189(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar5 = func_190(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar5);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_191(iParam1, iParam2, 0);
						return 1;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1)))
					{
						func_191(iParam1, iParam2, 3);
					}
					else
					{
						func_191(iParam1, iParam2, 4);
					}
					func_192(iParam1, iParam2, iVar1);
					break;
				case 3:
					iVar1 = func_193(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_191(iParam1, iParam2, 0);
						return 1;
					}
					iVar6 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar6)
					{
						case 0:
							func_191(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_191(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_193(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_191(iParam1, iParam2, 0);
						return 1;
					}
					sVar7 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar7))
					{
						return 3;
					}
					func_191(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_193(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_191(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

int func_145(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265213.f_2)
	{
		if (Global_265213.f_57505[iVar0 /*8*/] == iParam0)
		{
			return iVar0;
		}
		if (Global_265213.f_4[iVar0 /*46*/].f_23 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_146(int iParam0, var uParam1)
{
	struct<2> Var0;

	if (func_194(iParam0, uParam1, &Var0))
	{
		return Var0.f_1;
	}
	return -1;
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WAR_VET"):
			return 3.520701E+20f;
		case joaat("FLACO_HERNANDEZ"):
			return -8.219625E+11f;
		case joaat("JOSIAH_TRELAWNY"):
			return 5.901083E-08f;
		case joaat("JOE"):
			return -5.211906E-18f;
		case joaat("SEAN_MACQUIRE"):
			return -1.936381E+37f;
		case joaat("BLACK_BELLE"):
			return 2.007024E-07f;
		case joaat("SADIE_ADLER"):
			return -1.178164E-32f;
		case joaat("MAMMA_WATSON"):
			return 495.8183f;
		case joaat("THOMAS_SKIFF_CAPTAIN"):
			return -335807.6f;
		case joaat("OBEDIAH_HINTON"):
			return -2.406148E+28f;
		case joaat("ANTHONY_FOREMAN"):
			return 2.829673E-18f;
		case joaat("LANGTON"):
			return 3.030559E+29f;
		case joaat("BONNIE"):
			return -9.273581E-30f;
		case joaat("SHERIFF_FREEMAN"):
			return -1.826038E-16f;
		case joaat("SHAKY"):
			return 960427.1f;
		case joaat("WALLACE_TRAIN_CLERK"):
			return -6.066405E+31f;
		case joaat("ALDEN"):
			return -0.001918495f;
		case joaat("HECTOR"):
			return -1.691306E+08f;
		case joaat("THE_BOY"):
			return -6.491929f;
		case joaat("ABERDEEN_PIG_FARMERS"):
			return -2.292522E-15f;
		case joaat("SAINT_DENIS_BOUNTY_BOARD"):
			return 1.819777E+22f;
		case joaat("VALENTINE_BOUNTY_BOARD"):
			return -8.339605E+17f;
		case joaat("RHODES_BOUNTY_BOARD"):
			return -3.095662E+18f;
		case joaat("STRAWBERRY_BOUNTY_BOARD"):
			return -56125.96f;
		case joaat("TUMBLEWEED_BOUNTY_BOARD"):
			return 4.244674E-15f;
		case joaat("ANNESBURG_BOUNTY_BOARD"):
			return 1.949879E-20f;
		case joaat("ARMADILLO_BOUNTY_BOARD"):
			return 7.083137E-25f;
		case joaat("BENEDICT_POINT_BOUNTY_BOARD"):
			return -1.957789E-16f;
		case joaat("BLACKWATER_BOUNTY_BOARD"):
			return 2.823215E-22f;
		case joaat("EMERALD_RANCH_BOUNTY_BOARD"):
			return 1.638145E+22f;
		case joaat("VAN_HORN_BOUNTY_BOARD"):
			return -2.609032E+35f;
		case joaat("RIGGS_BOUNTY_BOARD"):
			return 7.13322E+24f;
		case joaat("WALLACE_BOUNTY_BOARD"):
			return 5.521273E+35f;
		case joaat("CRIPPS"):
			return -2.926106E+32f;
		case joaat("MOONSHINER"):
			return 3.54277E+13f;
		case joaat("MARCEL"):
			return 8745.245f;
		case -465704507:
			return -1.413565E-23f;
		default:
			break;
	}
	return 0;
}

struct<2> func_148(float fParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_149(var uParam0, var uParam1)
{
	var uVar0;

	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!STATS::STAT_ID_GET_BOOL(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

int func_150(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SECONDARY"):
			return 2;
		case joaat("PRIMARY"):
			return 1;
		case joaat("NONE"):
			return 0;
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

void func_151(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != 0)
	{
		iVar0 = iParam0;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_44.f_104, func_195(iVar0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_103, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_103, false);
	}
	if (iParam1 != 0)
	{
		iVar0 = iParam1;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_44.f_101, func_195(iVar0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_100, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_100, false);
	}
}

bool func_152(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_153(int iParam0)
{
	Global_265213.f_122353 = iParam0;
}

bool func_154(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

void func_156(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_157(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 84:
			return 6;
		case 45:
			return 0;
		case 104:
			return 2;
		case 63:
			return 4;
		case 76:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 39:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_159(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_196(vParam0, 0f, 0f, 0, 2);
	return func_196(vParam0, Global_1892764[iVar0 /*3*/].f_1, Global_1892764[iVar0 /*3*/].f_2, Global_1892764[iVar0 /*3*/], 4);
}

int func_160(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1295619.f_5;
	}
	return Global_263042[iParam0 /*65*/];
}

bool func_161(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4.923836E-11f;
		case 1:
			return -1.183991E-26f;
		case 2:
			return 3.0585E+12f;
		case 3:
			return 6.504974E+36f;
		case 4:
			return -2.606333E-24f;
		case 5:
			return -1.032091E-38f;
		case 6:
			return -5.88325E+33f;
		case 7:
			return 6.631283E-35f;
		case 8:
			return -2.568551E-25f;
		case 9:
			return 5.038139E-36f;
		case 10:
			return 1.566288E-21f;
		case 11:
			return 3.508673E-32f;
		case 12:
			return -4.69489E+08f;
		case 13:
			return 8.416686E-10f;
		case 14:
			return 8.36175E-09f;
		case 15:
			return 3.880884E+24f;
		case 16:
			return 1.221154E+15f;
		case 17:
			return -4.49178E-32f;
		case 18:
			return -308.6616f;
		case 19:
			return 1.307238E-05f;
		case 20:
			return -2.683141E-16f;
		default:
			break;
	}
	return 0;
}

int func_163()
{
	return Global_1102813.f_3673;
}

int func_164(int iParam0)
{
	int iVar0;

	if (iParam0 == 10)
	{
		return 8;
	}
	if (iParam0 == 11)
	{
		return 4;
	}
	if (iParam0 == 12)
	{
		return 16;
	}
	if (iParam0 == 13)
	{
		return 32;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_265213.f_107995.f_13510[iVar0] == Global_265189.f_1[iParam0])
		{
			return Global_265213.f_107995.f_1028[iVar0 /*194*/].f_193;
		}
		iVar0++;
	}
	return -1;
}

bool func_165(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_166()
{
	return Global_1572887.f_72.f_40 != 1;
}

bool func_167(int iParam0)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (GANG::NETWORK_IS_GANG_ACTIVE(iVar0) && !GANG::NETWORK_IS_GANG_LEADER(iParam0))
	{
		return false;
	}
	return true;
}

void func_168(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1572887.f_72.f_17), bParam0, 22);
}

void func_169(int iParam0, bool bParam1)
{
	Global_1572887.f_72.f_39 = iParam0;
	if (bParam1)
	{
		func_197();
	}
}

void func_170(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887.f_72 = iParam0;
	Global_1572887.f_72.f_9 = iParam1;
	Global_1572887.f_72.f_10 = iParam2;
	if (bParam3)
	{
		func_197();
	}
}

void func_171(struct<2> Param0, bool bParam2)
{
	Global_1572887.f_72.f_11 = { Param0 };
	if (bParam2)
	{
		func_197();
	}
}

void func_172(int iParam0)
{
	Global_1572887.f_72.f_15 = iParam0;
}

void func_173(int iParam0)
{
	Global_1572887.f_72.f_13 = iParam0;
}

void func_174()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	Global_1572887.f_72.f_49 = { vVar1 };
}

bool func_175()
{
	if (func_184() != 0)
	{
		return false;
	}
	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_176(struct<2> Param0)
{
	if (func_198())
	{
		return 0;
	}
	if (!func_67(Param0))
	{
		return 0;
	}
	Global_1051268 = { Param0 };
	return 1;
}

void func_177()
{
	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12 = 0;
}

void func_178(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_117);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	iVar0 = func_199(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_200(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_201(iVar0);
	Var3 = { func_202(iVar1, uVar2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, MISC::VAR_STRING(2, &Var3));
}

bool func_179(int iParam0)
{
	return (Global_1572887.f_72.f_15 && iParam0) != 0;
}

int func_180(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_203();
	}
	if (!func_204(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_205(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

int func_181(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (uParam0->f_11 == iParam1)
	{
		func_206(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_145(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_22), {Global_265213.f_4[iVar0 /*46*/]}, 3);
	uParam0->f_32 = { Global_265213.f_4[iVar0 /*46*/].f_7 };
	uParam0->f_40 = Global_265213.f_4[iVar0 /*46*/].f_17;
	uParam0->f_41 = Global_265213.f_4[iVar0 /*46*/].f_25;
	uParam0->f_11 = Global_265213.f_4[iVar0 /*46*/].f_23;
	uParam0->f_12 = Global_265213.f_57505[iVar0 /*8*/];
	uParam0->f_56 = { Global_265213.f_4[iVar0 /*46*/].f_19 };
	uParam0->f_25 = Global_265213.f_4[iVar0 /*46*/].f_29;
	uParam0->f_27 = Global_265213.f_4[iVar0 /*46*/].f_27;
	uParam0->f_28 = Global_265213.f_4[iVar0 /*46*/].f_28;
	uParam0->f_16 = 1;
	uParam0->f_16.f_1 = 0;
	uParam0->f_16.f_4 = iParam4;
	uParam0->f_16.f_2 = Global_265213.f_4[iVar0 /*46*/].f_24;
	uParam0->f_16.f_3 = Global_265213.f_4[iVar0 /*46*/].f_26;
	uParam0->f_21 = Global_265213.f_4[iVar0 /*46*/].f_26;
	uParam0->f_29 = Global_265213.f_4[iVar0 /*46*/].f_35;
	uParam0->f_1 = { Global_265213.f_4[iVar0 /*46*/].f_15 };
	MemCopy(&(uParam0->f_3), {Global_265213.f_4[iVar0 /*46*/].f_4}, 8);
	func_207(&(Global_265213.f_4[iVar0 /*46*/]));
	if (iParam2 != -1)
	{
		if ((uParam0->f_16.f_2 == -218565.1f && func_208(iParam2)) || (uParam0->f_16.f_2 == 9.256025E-25f && func_209(iParam2)))
		{
			uParam0->f_16.f_3 = iParam2;
			uParam0->f_21 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_25 = iParam3;
	}
	iVar1 = func_210(Global_265213.f_57505[iVar0 /*8*/]);
	vVar2 = { func_211(uParam0->f_12) };
	if (iVar1 != -1)
	{
		uParam0->f_48 = { func_212(iVar1) };
	}
	else if (func_213(uParam0->f_12))
	{
		uParam0->f_48 = { func_215(func_214(uParam0->f_12)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_48 = { func_216(&vVar2) };
	}
	else if (uParam0->f_16.f_3 == 8.123318E-38f)
	{
		uParam0->f_48 = { func_217(6.2427E-16f) };
	}
	else if (uParam0->f_16.f_3 == -6.183555E+13f)
	{
		uParam0->f_48 = { func_217(3.23922E+10f) };
	}
	else
	{
		uParam0->f_48 = { func_218(uParam0->f_11) };
		if (!func_67(uParam0->f_48))
		{
			uParam0->f_48 = { func_217(func_219(uParam0->f_16.f_2)) };
		}
	}
	func_220(uParam0);
	func_206(uParam0, 4194304);
	return 1;
}

char* func_182(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_143(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_183(int iParam0)
{
	int iVar0;

	iVar0 = func_221(iParam0);
	if (iVar0 == Global_265189.f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == Global_265189.f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == Global_265189.f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == Global_265189.f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == Global_265189.f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == Global_265189.f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == Global_265189.f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == Global_265189.f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == Global_265189.f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == Global_265189.f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == Global_265189.f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == Global_265189.f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == Global_265189.f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == Global_265189.f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == Global_265189.f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_184()
{
	return Global_1572887.f_72;
}

char* func_185(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

bool func_186(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_222();
	}
	else if (iParam0 == func_222())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1295619.f_9;
		}
	}
	if (!bVar0)
	{
		if (!Global_1295619.f_17[iParam0])
		{
			return false;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iParam0]))
		{
			return false;
		}
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(Global_1295619.f_149[iParam0])) <= 1)
	{
		return false;
	}
	return true;
}

int func_187(char* sParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = MISC::VAR_STRING(2, sParam0);
	iVar1 = func_223(sVar0, -2, 0, 0, 0, 1);
	return iVar1;
}

void func_188(int iParam0)
{
	Global_1572887.f_72.f_40 = iParam0;
}

int func_189(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return Global_1149417.f_5087[iParam0 /*10*/].f_5[iParam1];
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_191(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1149417.f_5087[iParam0 /*10*/].f_5[iParam1] = iParam2;
}

void func_192(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1149417.f_5087[iParam0 /*10*/][iParam1] = iParam2;
}

int func_193(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1149417.f_5087[iParam0 /*10*/][iParam1];
}

bool func_194(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_224(iParam0, uParam1, &uVar0))
	{
		func_225(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5.764132E+16f;
		case 2:
			return 48.15688f;
		case 3:
			return 1.978542E+34f;
		case 4:
			return -4.863353E-20f;
		case 5:
			return 9.74296E+34f;
		case 6:
			return -3.572188E-13f;
		case 7:
			return -2.972978E+19f;
		case 8:
			return -8.082307E-06f;
		case 9:
			return 1.242632E+15f;
		case 10:
			return 2.428705E+13f;
		case 11:
			return 1.109313E+16f;
		case 12:
			return 1.774855E-07f;
		case 13:
			return -4.815321E-22f;
		case 14:
			return 2.376182E+33f;
		case 15:
			return 1821.314f;
		default:
			break;
	}
	return 0;
}

int func_196(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_197()
{
	int iVar0;

	if (func_1() == -1)
	{
		return;
	}
	iVar0 = Global_1295619;
	if (func_152(Global_1572887.f_8, 1))
	{
		func_226(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 4);
	}
	else
	{
		func_227(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 4);
	}
	Global_1056554[iVar0 /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[iVar0 /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[iVar0 /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[iVar0 /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[iVar0 /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[iVar0 /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[iVar0 /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;
	if (func_179(1024))
	{
		func_226(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 2);
	}
	else
	{
		func_227(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 2);
	}
}

bool func_198()
{
	return func_67(Global_1051268);
}

int func_199(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_228(Global_1206482.f_78[iVar0 /*20*/].f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_200(int iParam0)
{
	return Global_1206482.f_78[iParam0 /*20*/].f_3;
}

var func_201(int iParam0)
{
	return Global_1205923.f_1[iParam0 /*26*/].f_3;
}

struct<8> func_202(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_229(&Var8, iParam0) && func_230(&Var8)) && func_231(&Var8, uParam1)) && func_232(&Var8))
	{
		func_233(Var8, 1.348491E-37f, &Var0, 1);
	}
	return Var0;
}

void func_203()
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
}

bool func_204(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_235(bParam2, func_234(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_205(int iParam0)
{
	Global_1896762.f_365 = iParam0;
}

void func_206(var uParam0, int iParam1)
{
	uParam0->f_15 = (uParam0->f_15 || iParam1);
}

void func_207(char* sParam0)
{
	StringCopy(&(Global_1572887.f_72.f_60.f_6), sParam0, 32);
}

bool func_208(int iParam0)
{
	if (func_236(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_209(int iParam0)
{
	if (func_237(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_210(int iParam0)
{
	int iVar0;

	if (func_1() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_238(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_211(int iParam0)
{
	struct<2> Var0;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;

	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_239(&Var0))
	{
		return vVar5;
	}
	if (!func_240(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_240(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_241(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_240(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_240(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_241(&Var0, 1);
			if (!func_240(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}
}

struct<2> func_212(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_141();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

bool func_213(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_214(iParam0) != -1;
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (13 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_242(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_215(int iParam0)
{
	return func_243(iParam0);
}

struct<2> func_216(int iParam0)
{
	var uVar0;
	int iVar5;

	if (!func_239(&uVar0))
	{
		return func_141();
	}
	if (!func_240(&uVar0, 13, 0, 0, 1))
	{
		return func_141();
	}
	if (!func_240(&uVar0, 17, 0, 0, 1))
	{
		return func_141();
	}
	if (!func_240(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_141();
	}
	if (!func_240(&uVar0, 20, 0, 0, 1))
	{
		return func_141();
	}
	if (!func_240(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_141();
	}
	iVar5 = func_244(&uVar0);
	return func_217(iVar5);
}

struct<2> func_217(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_245(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_141();
}

struct<2> func_218(int iParam0)
{
	var uVar0;
	struct<5> Var5;

	if (iParam0 == 0)
	{
		return func_141();
	}
	if (!func_246(&uVar0, 7, iParam0, 3.536333E-36f))
	{
		return func_141();
	}
	func_247(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_141();
	}
	return func_245(Var5.f_3, Var5.f_4);
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 0.007354699f;
		case 395262693:
			return -1.410095E+37f;
		case -933924539:
			return 7.165112E-06f;
		default:
			break;
	}
	return 0;
}

void func_220(var uParam0)
{
	uParam0->f_15 = 0;
}

int func_221(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_265213.f_107995.f_13575[iVar0] == iParam0)
		{
			return Global_265213.f_107995.f_13510[iVar0];
		}
		iVar0++;
	}
	return 0;
}

int func_222()
{
	return Global_1102813.f_3672;
}

int func_223(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar17 = UIFEED::_UI_FEED_POST_FEED_TICKER(&Var0, &Var13, bParam5);
	return iVar17;
}

bool func_224(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_248(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_225(bool bParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	bParam0->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam0);
	bParam0->f_2 = -9.223824E-39f;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
		uParam2->f_2 = uVar0;
	}
	bParam0->f_2 = -9.223824E-39f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), bParam0);
	bParam0->f_2 = 1.375422E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), bParam0);
	bParam0->f_2 = 1165207f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), bParam0);
}

void func_226(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_227(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_228(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_229(bool bParam0, int iParam1)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206482.f_455))
	{
		return false;
	}
	*bParam0 = Global_1206482.f_455;
	bParam0->f_2 = -0.4166105f;
	bParam0->f_3 = func_249(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_230(bool bParam0)
{
	bParam0->f_2 = -5.135098E+27f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_231(bool bParam0, var uParam1)
{
	bParam0->f_2 = -2.751128E-24f;
	bParam0->f_3 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_232(bool bParam0)
{
	bParam0->f_2 = 6.889182E+22f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_233(vector3 vParam0, int iParam3, var uParam4, float fParam5, char* sParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_234()
{
	return Global_1915643.f_20643;
}

int func_235(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_250())
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

int func_236(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
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

int func_237(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

int func_238(int iParam0)
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (func_1() == -1)
	{
		return 0;
	}
	return Global_1835011[iParam0 /*72*/].f_51;
}

bool func_239(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1072759.f_28418[29 /*4*/].f_3;
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

bool func_240(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uVar0 = bParam0->f_1;
	bParam0->f_2 = iParam1;
	bParam0->f_3 = iParam2;
	bParam0->f_4 = iParam3;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		bParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_241(bool bParam0, int iParam1)
{
	bParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
}

int func_242(int iParam0)
{
	return Global_1295802[iParam0 /*37*/].f_9;
}

struct<2> func_243(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var0, &(Global_1295802[iParam0 /*37*/].f_6), 2);
	return Var0;
}

var func_244(bool bParam0)
{
	return func_251(bParam0, 67, 1);
}

struct<2> func_245(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_252(iParam0, &(Global_1072759.f_573), func_122(iParam1));
			break;
		case 3:
			Var0.f_1 = func_252(iParam0, &(Global_1072759.f_573.f_602), func_122(iParam1));
			break;
		case 4:
			Var0.f_1 = func_252(iParam0, &(Global_1072759.f_573.f_2104), func_122(iParam1));
			break;
		case 5:
			Var0.f_1 = func_252(iParam0, &(Global_1072759.f_573.f_12606), func_122(iParam1));
			break;
		case 6:
			Var0.f_1 = func_252(iParam0, &(Global_1072759.f_573.f_12908), func_122(iParam1));
			break;
		case 7:
			Var0.f_1 = func_252(iParam0, &(Global_1072759.f_573.f_15910), func_122(iParam1));
			break;
		case 8:
			Var0.f_1 = func_252(iParam0, &(Global_1072759.f_573.f_16512), func_122(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_141();
	}
	return Var0;
}

bool func_246(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	*bParam0 = Global_1149417.f_7;
	bParam0->f_2 = fParam3;
	bParam0->f_3 = func_248(iParam1);
	bParam0->f_4 = iParam2;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

void func_247(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_253(iParam0, uParam2->f_1);
	bParam1->f_2 = -9.223824E-39f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_2 = iVar0;
	bParam1->f_2 = -9.223824E-39f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_9), bParam1);
	bParam1->f_2 = 1.375422E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_17), bParam1);
	if (*uParam2 == 3)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_254(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_255(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_256(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_257(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_258(iVar0);
	bParam1->f_2 = 0.7275926f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_8), bParam1);
	bParam1->f_2 = 4.168656E-33f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	bParam1->f_2 = -3.435564E+12f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_25), bParam1);
	bParam1->f_2 = 2.963616E-21f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_26), bParam1);
	bParam1->f_2 = -5.234699E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_27), bParam1);
	bParam1->f_2 = -7.178136E+15f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_28), bParam1);
	iVar0 = 0;
	bParam1->f_2 = -1.430733E-34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.513029E-27f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.293884E-33f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.998338E+12f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_32 = iVar0;
}

int func_248(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -4.585506E-21f;
			break;
		case -3:
			iVar0 = 2.741749E+08f;
			break;
		case 1:
			iVar0 = -6.049365E-28f;
			break;
		case -2:
			iVar0 = 1.540051E+08f;
			break;
		case 2:
			iVar0 = -2.882769E-19f;
			break;
		case 3:
			iVar0 = 3.67675E+19f;
			break;
		case 4:
			iVar0 = 2.694446E+36f;
			break;
		case 5:
			iVar0 = 32.15498f;
			break;
		case 6:
			iVar0 = -8.391956E-09f;
			break;
		case 7:
			iVar0 = 61686.1f;
			break;
		case 8:
			iVar0 = 5.182694E+24f;
			break;
		case 9:
			iVar0 = -5.243371E-15f;
			break;
		case 10:
			iVar0 = 5.863398E+29f;
			break;
		case 11:
			iVar0 = 6.767836E+30f;
			break;
		case 12:
			iVar0 = -1.287736E+17f;
			break;
		case 13:
			iVar0 = 5713673f;
			break;
		case 14:
			iVar0 = -3.715131E-31f;
			break;
		case 15:
			iVar0 = 3.998251E+09f;
			break;
		case 16:
			iVar0 = 2.816196E+24f;
			break;
		case 17:
			iVar0 = 3.266747E+28f;
			break;
		case 18:
			iVar0 = 1347.951f;
			break;
		case 19:
			iVar0 = -4.200322E+27f;
			break;
	}
	return iVar0;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5.302326E+22f;
		case 1:
			return 8.819231E+30f;
		case 2:
			return -8.423986E-11f;
		case 3:
			return 2.893486E+20f;
		case 4:
			return -1.396906E+17f;
		case 5:
			return -1629.817f;
		case 6:
			return -4.788236E-29f;
		case 15:
			return -2.762819E+17f;
		case 16:
			return 8.72967E-06f;
		case 17:
			return 1.393353E+14f;
		case 18:
			return -3.120739E-36f;
		case 8:
			return -1.066212E+19f;
		case 10:
			return NaNf;
		case 9:
			return 0.003490584f;
		case 11:
			return 2.547941E+33f;
		case 12:
			return -5.747956E-23f;
		case 13:
			return -7.517295E+37f;
		case 14:
			return 1.365207E+21f;
		case 7:
			return -5.421841E+33f;
		default:
			break;
	}
	return 0;
}

bool func_250()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

var func_251(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

int func_252(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_253(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_259(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		case 434282564:
			return 11;
		case 1228993410:
			return 12;
		default:
			break;
	}
	return 0;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		case -862833187:
			return 23;
		case -89188661:
			return 24;
		case 1792833819:
			return 25;
		case 696644969:
			return 26;
		case -1317631038:
			return 27;
		case 1539627774:
			return 28;
		case 591458137:
			return 29;
		case 1837071987:
			return 30;
		case 67219675:
			return 31;
		case 1885832251:
			return 32;
		case -171568028:
			return 33;
		case -1968391995:
			return 34;
		case 2042305612:
			return 35;
		case -1797632736:
			return 36;
		default:
			break;
	}
	return -1;
}

bool func_259(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_260(iParam0, uParam1, &uVar0))
	{
		func_225(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_260(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_248(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

