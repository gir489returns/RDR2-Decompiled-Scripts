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
	struct<7> Local_13 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_13, 10);
	}
	else
	{
		func_1(&Local_13, 0);
	}
	Local_13.f_1 = ScriptParam_0.f_2;
	Local_13.f_6 = ScriptParam_0.f_4;
	Local_13.f_3 = ScriptParam_0;
	Local_13.f_4 = ScriptParam_0.f_3;
	while (func_2(&Local_13))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_5 = MISC::GET_GAME_TIMER();
}

bool func_2(var uParam0)
{
	func_3(uParam0);
	switch (*uParam0)
	{
		case 0:
			func_4(uParam0);
			break;
		case 1:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
			}
			else
			{
				func_6(uParam0);
				Jump @905; //curOff = 126
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 37, true);
				if (func_5(uParam0->f_5, 4000))
				{
					func_1(uParam0, 9);
				}
				else
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 1.883254E-09f) || uParam0->f_4)
					{
						func_7(uParam0->f_3);
						func_1(uParam0, 9);
					}
					Jump @905; //curOff = 207
					PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 37, true);
					if (func_5(uParam0->f_5, 4000))
					{
						func_1(uParam0, 9);
					}
					else
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 1.883254E-09f) || uParam0->f_4)
						{
							func_8(uParam0->f_3);
							func_1(uParam0, 9);
						}
						Jump @905; //curOff = 288
						PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 37, true);
						if (func_5(uParam0->f_5, 4000))
						{
							func_1(uParam0, 9);
						}
						else
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 1.883254E-09f) || uParam0->f_4)
							{
								func_9(uParam0->f_3, uParam0->f_1, &(uParam0->f_6));
								func_1(uParam0, 9);
							}
							Jump @905; //curOff = 378
							if (func_5(uParam0->f_5, 4000))
							{
								func_1(uParam0, 9);
							}
							else
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 1.883254E-09f) || uParam0->f_4)
								{
									if ((func_10(uParam0->f_1) == 5.002459E-36f || func_11(uParam0->f_1, 3.611922E-33f)) && !func_11(uParam0->f_1, -1.186825E-08f))
									{
										func_12(uParam0->f_3, uParam0->f_1);
									}
									else
									{
										func_13(uParam0->f_3, uParam0->f_1);
									}
									func_1(uParam0, 9);
								}
								Jump @905; //curOff = 522
								if (func_5(uParam0->f_5, 4000))
								{
									func_1(uParam0, 9);
								}
								else
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 1.883254E-09f) || uParam0->f_4)
									{
										if (func_10(uParam0->f_1) == 5.002459E-36f || func_11(uParam0->f_1, 3.611922E-33f))
										{
											func_14(uParam0->f_3, uParam0->f_1);
										}
										else
										{
											func_13(uParam0->f_3, uParam0->f_1);
										}
										func_1(uParam0, 9);
									}
									Jump @905; //curOff = 647
									if (func_5(uParam0->f_5, 4000))
									{
										func_1(uParam0, 9);
									}
									else
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 1.883254E-09f) || uParam0->f_4)
										{
											func_9(uParam0->f_3, uParam0->f_2, &(uParam0->f_6));
											uParam0->f_5 = func_15();
											func_1(uParam0, 8);
										}
										Jump @905; //curOff = 734
										if (func_5(uParam0->f_5, 4000))
										{
											func_1(uParam0, 9);
										}
										else if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(uParam0->f_3) && !uParam0->f_4)
										{
											if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 4.543783E-35f))
											{
											}
											else
											{
												Jump @905; //curOff = 803
												if (func_16())
												{
												}
												else if (func_17())
												{
													func_18();
												}
												else
												{
													if (Global_33 == uParam0->f_3)
													{
														Global_1953279.f_3503 = 0;
													}
													func_19(uParam0->f_1, 0);
													func_1(uParam0, 9);
													Jump @905; //curOff = 866
													if (Global_33 == uParam0->f_3)
													{
														Global_1953279.f_3503 = 0;
													}
													func_1(uParam0, 10);
													Jump @905; //curOff = 895
													return false;
												}
											}
											return true;
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

void func_3(var uParam0)
{
	if (func_20(uParam0) == 10)
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (Global_33 == uParam0->f_3)
		{
			uParam0->f_4 = 1;
			return;
		}
		else
		{
			uParam0->f_4 = 1;
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_1(uParam0, 10);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (Global_33 == uParam0->f_3)
		{
			func_1(uParam0, 9);
			return;
		}
		else
		{
			func_1(uParam0, 10);
			return;
		}
	}
}

void func_4(var uParam0)
{
	if (PED::IS_PED_A_PLAYER(uParam0->f_3))
	{
		if (Global_33 == uParam0->f_3)
		{
			if (Global_1953279.f_3503)
			{
				func_1(uParam0, 10);
			}
			else
			{
				Global_1953279.f_3503 = 1;
				func_1(uParam0, 1);
			}
		}
		else
		{
			func_1(uParam0, 1);
		}
	}
	else
	{
		func_1(uParam0, 10);
	}
}

bool func_5(int iParam0, int iParam1)
{
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - iParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_6(var uParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	if (!func_21(uParam0->f_1))
	{
		func_1(uParam0, 10);
		return;
	}
	bVar2 = false;
	bVar3 = true;
	if (func_22(&iVar0))
	{
		if (uParam0->f_1 == iVar0)
		{
			bVar2 = true;
			bVar3 = true;
		}
		else
		{
			uParam0->f_2 = iVar0;
			bVar3 = false;
		}
	}
	iVar4 = func_10(uParam0->f_1);
	bVar5 = func_23(&uVar1);
	if (bVar3)
	{
		iVar6 = func_24(uParam0->f_1);
		if (iVar6 != -1.003831E+26f && func_25(uParam0->f_6, 1))
		{
			func_1(uParam0, 6);
		}
		else if (bVar2)
		{
			if (bVar5)
			{
				if ((iVar4 == 5.002459E-36f || func_11(uParam0->f_1, 3.611922E-33f)) && !func_11(uParam0->f_1, -1.186825E-08f))
				{
					func_1(uParam0, 4);
				}
				else
				{
					func_1(uParam0, 6);
				}
			}
			else
			{
				func_1(uParam0, 5);
			}
		}
		else if (((iVar4 == 5.002459E-36f || func_11(uParam0->f_1, 3.611922E-33f)) && func_25(uParam0->f_6, 2)) && !func_11(uParam0->f_1, -1.186825E-08f))
		{
			func_1(uParam0, 2);
			func_26(&(uParam0->f_6), 2);
		}
		else
		{
			func_1(uParam0, 3);
		}
	}
	else
	{
		func_1(uParam0, 7);
	}
}

void func_7(int iParam0)
{
	bool bVar0;

	if (!func_23(&bVar0))
	{
		return;
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	func_27(bVar0, 2);
	func_28(23, 0, 0, 0, 0);
}

void func_8(int iParam0)
{
	bool bVar0;
	var uVar1;

	if (!func_22(&bVar0))
	{
		return;
	}
	if (func_23(&uVar1))
	{
		return;
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(7.922019E+30f, iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
	}
	func_27(bVar0, 1);
	func_28(23, 0, 0, 0, 0);
}

int func_9(int iParam0, bool bParam1, var uParam2)
{
	if (!func_21(bParam1))
	{
		return 0;
	}
	if (!func_29(bParam1))
	{
		return 0;
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	func_26(uParam2, 1);
	func_27(bParam1, 8);
	func_28(23, 0, 0, 0, 0);
	return 1;
}

int func_10(bool bParam0)
{
	struct<2> Var0;

	if (!func_30(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_11(bool bParam0, int iParam1)
{
	if (!func_30(bParam0, 0))
	{
		return func_32(func_31(bParam0), iParam1);
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

void func_12(int iParam0, bool bParam1)
{
	if (func_10(bParam1) != 5.002459E-36f && !func_11(bParam1, 3.611922E-33f))
	{
		return;
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
	func_27(bParam1, 2);
	func_28(23, 0, 0, 0, 0);
}

void func_13(int iParam0, bool bParam1)
{
	if (func_10(bParam1) != -9.847085E+19f && !func_11(bParam1, -1.186825E-08f))
	{
		return;
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(7.922019E+30f, iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
	}
	func_27(bParam1, 1);
	func_28(23, 0, 0, 0, 0);
}

void func_14(int iParam0, bool bParam1)
{
	if (func_10(bParam1) != 5.002459E-36f && !func_11(bParam1, 3.611922E-33f))
	{
		return;
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(7.922019E+30f, iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
	}
	func_27(bParam1, 1);
	func_28(23, 0, 0, 0, 0);
}

int func_15()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_16()
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

bool func_17()
{
	int iVar0;

	iVar0 = 0;
	if (func_33(5.002459E-36f, &iVar0))
	{
		return true;
	}
	if (func_33(-9.847085E+19f, &iVar0))
	{
		return true;
	}
	return false;
}

void func_18()
{
	if (!func_17())
	{
		return;
	}
	func_34();
}

int func_19(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_29(bParam0);
	if (func_10(bParam0) == -9.847085E+19f || func_11(bParam0, -1.186825E-08f))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_23(&bVar2))
		{
			if (bVar1)
			{
				iVar0 = func_35();
			}
			else
			{
				iVar0 = func_36();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_37();
		}
		else
		{
			iVar0 = func_38();
		}
	}
	else if (func_22(&bVar2))
	{
		if (func_11(bVar2, -1.186825E-08f) || func_10(bVar2) == -9.847085E+19f)
		{
			iVar0 = func_35();
		}
		else
		{
			iVar0 = func_36();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_37();
	}
	else
	{
		iVar0 = func_38();
	}
	if (iVar0 != 0)
	{
		Global_1953279.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, bParam0, iVar0, 1, iParam1, -1f);
		return 1;
	}
	return 0;
}

int func_20(var uParam0)
{
	return *uParam0;
}

bool func_21(bool bParam0)
{
	return func_39(bParam0);
}

bool func_22(bool bParam0)
{
	if (func_33(5.002459E-36f, bParam0))
	{
		return true;
	}
	if (func_33(-9.847085E+19f, bParam0))
	{
		return true;
	}
	return false;
}

bool func_23(var uParam0)
{
	if (-1.527139E-27f == func_40(5.002459E-36f))
	{
		if (func_22(uParam0))
		{
			return true;
		}
	}
	else if (func_33(-9.847085E+19f, uParam0) || func_11(func_41(2.057189E+24f), -1.186825E-08f))
	{
		if (func_22(uParam0))
		{
			return true;
		}
	}
	return false;
}

float func_24(bool bParam0)
{
	struct<5> Var0;

	Var0 = { func_42(bParam0, 1, 0) };
	return func_43(Var0.f_4);
}

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(var uParam0, int iParam1)
{
	func_44(uParam0, iParam1);
}

void func_27(bool bParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar1 = func_24(bParam0);
	iVar2 = func_45(iVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (func_46(bParam0) && func_47(bParam0))
	{
		iParam1 |= 64;
	}
	if ((iVar1 == 37.82234f && func_48(32768)) || bParam0 != Global_1953279.f_1676.f_1[iVar2 /*3*/])
	{
		if (func_46(Global_1953279.f_1676.f_1[iVar2 /*3*/]) && func_47(Global_1953279.f_1676.f_1[iVar2 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1953279.f_83[iVar2 /*12*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_10(bParam0))
		{
			case 81053684:
				if (func_33(-9.847085E+19f, &uVar0))
				{
					iVar3 = func_45(func_49(-9.847085E+19f), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1953279.f_2686[iVar3 /*2*/] = Global_1953279.f_83[iVar3 /*12*/];
						if (func_11(bParam0, -2.411198E+32f) && func_33(0.03593467f, &uVar0))
						{
							iVar3 = func_45(func_49(0.03593467f), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1953279.f_2686[iVar3 /*2*/] = Global_1953279.f_83[iVar3 /*12*/];
								Jump @513; //curOff = 342
								if (func_48(32768))
								{
									func_51(func_50(iVar2, 1));
								}
								if (func_33(5.002459E-36f, &uVar4))
								{
									iVar3 = func_45(func_49(5.002459E-36f), 1);
									if (iVar3 == 39)
									{
									}
									else
									{
										Global_1953279.f_2686[iVar3 /*2*/] = Global_1953279.f_83[iVar3 /*12*/];
										Jump @513; //curOff = 428
										if (!func_11(bParam0, 3.611922E-33f))
										{
										}
										else
										{
											if (func_33(-9.847085E+19f, &uVar0))
											{
												iVar3 = func_45(func_49(-9.847085E+19f), 1);
												if (iVar3 == 39)
												{
												}
												else
												{
													Global_1953279.f_2686[iVar3 /*2*/] = Global_1953279.f_83[iVar3 /*12*/];
												}
												Global_1953279.f_2686[iVar2 /*2*/] = bParam0;
												func_52(iVar1, iParam1, 6);
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

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_53(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_54(Var0);
}

bool func_29(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	if (func_22(&iVar0))
	{
		if (bParam0 == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_30(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_31(bool bParam0)
{
	return bParam0;
}

int func_32(bool bParam0, int iParam1)
{
	if (!func_55(bParam0, 2))
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

bool func_33(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_45(func_49(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1953279.f_1676.f_1[iVar1 /*3*/] != 0 && Global_1953279.f_1676.f_1[iVar1 /*3*/] != Global_1953279.f_83[iVar1 /*12*/])
	{
		bVar0 = Global_1953279.f_1676.f_1[iVar1 /*3*/];
		if (func_10(bVar0) == iParam0 || (iParam0 == 5.002459E-36f && func_11(bVar0, 3.611922E-33f)))
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

void func_34()
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (func_33(5.002459E-36f, &bVar1))
	{
		if (func_39(bVar1))
		{
			func_56(5.002459E-36f);
			bVar0 = true;
		}
	}
	if (func_33(-9.847085E+19f, &bVar1))
	{
		if (func_39(bVar1))
		{
			func_56(-9.847085E+19f);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		PED::_0xC494C76A34266E82(Global_33, 13);
	}
}

float func_35()
{
	float fVar0;

	fVar0 = 2.505841E+17f;
	switch (func_57())
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

float func_36()
{
	float fVar0;

	fVar0 = 7.033603E-17f;
	switch (func_57())
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

float func_37()
{
	float fVar0;

	fVar0 = -1.234154E-27f;
	switch (func_57())
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

float func_38()
{
	float fVar0;

	fVar0 = 1.111775E+20f;
	switch (func_57())
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

bool func_39(bool bParam0)
{
	int iVar0;

	iVar0 = func_10(bParam0);
	if (((iVar0 == 5.002459E-36f || iVar0 == -9.847085E+19f) || func_11(bParam0, 3.611922E-33f)) || func_11(bParam0, -1.186825E-08f))
	{
		return true;
	}
	return false;
}

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = func_45(func_49(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1953279.f_1676.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_41(int iParam0)
{
	return Global_1953279.f_1676.f_1[func_45(iParam0, 1) /*3*/];
}

struct<5> func_42(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_58(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_59(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_60(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_61(bParam1) };
			if (iParam2 && func_62(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_63(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_63(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_64(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_65(bParam1) };
			switch (func_10(bParam0))
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
			if (func_66(bParam0, -2.580501E-27f))
			{
				Var0 = { func_60(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_66(bParam0, -4.220332E-15f))
			{
				Var0 = { func_60(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_60(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_66(bParam0, -3.171238E-21f))
			{
				Var0 = { func_60(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_67(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_66(bParam0, -3.171238E-21f))
			{
				Var0 = { func_60(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

float func_43(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953279.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_50(iVar0, 1);
		}
		iVar0++;
	}
	return -1.003831E+26f;
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_45(int iParam0, int iParam1)
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

int func_46(bool bParam0)
{
	switch (func_10(bParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case 119907797:
			return 1;
		case 1388798186:
			return 1;
		default:
			break;
	}
	if (func_11(bParam0, 3.611922E-33f))
	{
		return 1;
	}
	return 0;
}

int func_47(bool bParam0)
{
	var uVar0;

	return func_68(bParam0, &uVar0);
}

bool func_48(int iParam0)
{
	return (Global_1953279 && iParam0) != 0;
}

float func_49(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -1.003831E+26f;
	}
	return func_43(iVar0);
}

int func_50(int iParam0, int iParam1)
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

void func_51(int iParam0)
{
	func_69(iParam0, 8, 6);
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_2686[func_45(iParam0, 1) /*2*/].f_1 = (Global_1953279.f_2686[func_45(iParam0, 1) /*2*/].f_1 || iParam1);
}

void func_53(int iParam0)
{
	Global_1953279 = (Global_1953279 || iParam0);
}

void func_54(struct<4> Param0)
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
			if (func_70(Param0))
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
			func_71(Param0);
			Global_1953279.f_736[Global_1953279.f_924 /*4*/] = { Param0 };
			Global_1953279.f_918++;
			Global_1953279.f_924 = (Global_1953279.f_924 + 1 % 25);
			func_53(8);
			break;
		case 24:
		case 25:
			if (Global_1953279.f_919 >= 25)
			{
				return;
			}
			if (func_70(Param0))
			{
				return;
			}
			func_71(Param0);
			Global_1953279.f_635[Global_1953279.f_919 /*4*/] = { Param0 };
			Global_1953279.f_919++;
			func_53(8);
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
			if (func_70(Param0))
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
			func_71(Param0);
			Global_1953279.f_837[Global_1953279.f_922 /*4*/] = { Param0 };
			Global_1953279.f_920++;
			Global_1953279.f_922 = (Global_1953279.f_922 + 1 % 20);
			func_53(8);
			break;
			break;
	}
}

bool func_55(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

void func_56(int iParam0)
{
	int iVar0;

	iVar0 = func_45(func_49(iParam0), 1);
	if (iVar0 == 39)
	{
		return;
	}
	func_27(Global_1953279.f_83[iVar0 /*12*/], 8);
	func_28(23, 0, 0, 0, 0);
}

int func_57()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -3.273909E-18f)
	{
		if (iVar0 == -3.273909E-18f)
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_72(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_33, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_72(iVar0)) || WEAPON::_IS_WEAPON_LASSO(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -3.273909E-18f)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

struct<4> func_58(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_73(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_60(2.982335E+09f, func_74(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_60(2.982335E+09f, func_74(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_60(2.982335E+09f, func_74(), -5.45926E-19f, bParam0);
}

int func_59(bool bParam0)
{
	vector3 vVar0;

	if (!func_30(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_60(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_30(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_73(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_61(bool bParam0)
{
	int iVar0;

	iVar0 = func_73(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_60(8.681942E-06f, func_58(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_60(8.681942E-06f, func_58(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_60(8.681942E-06f, func_58(bParam0), -1.942248E+12f, 0);
}

int func_62(bool bParam0, bool bParam1)
{
	if (func_10(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_75();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_63(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_76(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_64(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_77(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_65(bool bParam0)
{
	int iVar0;

	iVar0 = func_73(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_60(3.507197E-29f, func_58(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_60(3.507197E-29f, func_58(bParam0), 12999093, 0);
}

bool func_66(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_10(bParam0);
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
			if (func_78(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_67(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_79(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_68(bool bParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1953279.f_3352.f_26)
	{
		if (bParam0 == Global_1953279.f_3352[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_45(iParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_45(iParam0, 1) /*12*/].f_11 - (Global_1953279.f_83[func_45(iParam0, 1) /*12*/].f_11 && iParam1));
}

bool func_70(int iParam0)
{
	return Global_1953279.f_595[iParam0] > 0;
}

void func_71(int iParam0)
{
	Global_1953279.f_595[iParam0]++;
}

bool func_72(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_73(bool bParam0)
{
	if (func_80() == -1)
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

struct<4> func_74()
{
	struct<4> Var0;

	return Var0;
}

int func_75()
{
	if (func_81(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_76(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_30(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_82(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_60(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_73(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_73(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_77(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_73(0);
	*iParam1 = { func_60(bParam0, func_61(0), fParam3, 0) };
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

bool func_78(bool bParam0, int iParam1, int iParam2)
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

int func_79(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_73(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_80()
{
	return Global_1572887.f_14;
}

int func_81(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_83(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_73(bParam1), iParam0, bParam3);
}

int func_82(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_55(func_31(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_83(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

