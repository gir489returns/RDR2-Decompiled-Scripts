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
	char cLocal_19[128] = "";
	char cLocal_35[128] = "";
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 6;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 20;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
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
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 2;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 5;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	StringCopy(&cLocal_19, "rank_item_", 128);
	StringCopy(&cLocal_35, "vip_item_", 128);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1(&uLocal_51);
		return;
	}
	bVar0 = false;
	while (!bVar0)
	{
		switch (func_2(&uLocal_51))
		{
			case 0:
				if (func_3(&uLocal_51))
				{
					func_4(&uLocal_51, 1);
				}
				else
				{
					bVar0 = true;
				}
				break;
			case 1:
				switch (func_5(&uLocal_51))
				{
					case 0:
						func_4(&uLocal_51, 2);
						break;
					case 1:
						break;
					case 2:
						bVar0 = true;
						break;
				}
				break;
			case 2:
				func_4(&uLocal_51, 3);
				break;
			case 3:
				if (func_6(&uLocal_51))
				{
					bVar0 = true;
				}
				else
				{
					func_7(&uLocal_51);
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&uLocal_51);
}

void func_1(var uParam0)
{
	func_8();
	func_9(uParam0);
	func_10(uParam0);
	func_11(&(uParam0->f_445));
	func_12(&(uParam0->f_478));
	if (func_13(uParam0))
	{
	}
	func_14(-2.219889E-30f);
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_2(var uParam0)
{
	return *uParam0;
}

bool func_3(var uParam0)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (func_15(uParam0))
	{
	}
	else
	{
		return false;
	}
	if (!func_16(uParam0))
	{
		return false;
	}
	if (!func_17(uParam0))
	{
		return false;
	}
	func_18();
	func_19(uParam0, 0);
	func_20(&(uParam0->f_416));
	func_21(&(uParam0->f_412));
	if (!func_22(&(uParam0->f_445)))
	{
		return false;
	}
	func_23(-2.219889E-30f);
	return true;
}

void func_4(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_5(var uParam0)
{
	return 0;
}

bool func_6(var uParam0)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return true;
	}
	return false;
}

void func_7(var uParam0)
{
	func_24(uParam0);
	func_25(uParam0);
	func_26(&(uParam0->f_416), &(uParam0->f_412));
	func_27(&(uParam0->f_412));
	func_28(&(uParam0->f_445));
	func_29(uParam0);
}

void func_8()
{
	func_30();
}

void func_9(var uParam0)
{
	func_31(uParam0);
}

int func_10(var uParam0)
{
	return 1;
}

void func_11(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_1)))
	{
		AUDIO::_RELEASE_SOUNDSET(&(iParam0->f_1));
	}
	func_32(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
}

void func_12(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	func_33(uParam0, *uParam0, 0);
}

bool func_13(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3))
	{
		return false;
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
	return true;
}

void func_14(int iParam0)
{
	int iVar0;

	if (func_34())
	{
		return;
	}
	if (Global_1960810.f_5 == -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1960810.f_5 == -1)
	{
		return;
	}
	if (Global_1960810.f_5 != iParam0)
	{
	}
	iVar0 = MISC::ABSI((Global_1295619.f_16 - Global_1960810.f_3));
	TELEMETRY::_TELEMETRY_HUB_NAVIGATION(Global_1960810.f_4, Global_1960810.f_5, iVar0, Global_1960810.f_2);
	Global_1960810.f_1 = 0;
	func_35(&Global_1960810);
	func_36(iParam0, 0);
}

bool func_15(var uParam0)
{
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "season_rewards_data");
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3))
	{
		return false;
	}
	uParam0->f_3.f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "season_vip_pass_owned", false);
	uParam0->f_3.f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "tooltipRawText", "");
	return true;
}

bool func_16(var uParam0)
{
	if (!func_37(uParam0))
	{
		return false;
	}
	if (!func_38(uParam0))
	{
		return false;
	}
	if (!func_39(&(uParam0->f_6), &(uParam0->f_6.f_6)))
	{
	}
	if (!func_40(&(uParam0->f_6.f_367), &(uParam0->f_6), "largeTextureName", "largeTextureTxd", "largeTextureAlpha", 0.15f, 0.15f, 0.3f))
	{
		return false;
	}
	if (!func_41(&(uParam0->f_6.f_383), &(uParam0->f_6), 7.459418E-17f, 2.680181E+19f, 1.694116E+15f))
	{
		return false;
	}
	return true;
}

bool func_17(var uParam0)
{
	if (!func_42(uParam0))
	{
		return false;
	}
	return true;
}

void func_18()
{
	func_43();
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

int func_20(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_44(&(uParam0->f_2[iVar0 /*3*/]));
		iVar0++;
	}
	func_44(&(uParam0->f_18));
	return 1;
}

void func_21(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
}

bool func_22(int* iParam0)
{
	func_45(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
	return true;
}

void func_23(int iParam0)
{
	if (func_34())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1960810.f_5 != -1 && Global_1960810.f_5 != iParam0)
	{
		func_14(Global_1960810.f_5);
	}
	Global_1960810.f_3 = Global_1295619.f_16;
	Global_1960810.f_5 = iParam0;
	Global_1960810.f_4 = Global_1960810;
}

void func_24(var uParam0)
{
	var uVar0;
	struct<4> Var4;

	if (func_46(uParam0, 4))
	{
		func_47(uParam0, 3, 1);
		func_47(uParam0, 4, 0);
	}
	while (UIEVENTS::EVENTS_UI_IS_PENDING(2.767335E+22f))
	{
		if (!UIEVENTS::EVENTS_UI_PEEK_MESSAGE(2.767335E+22f, &uVar0))
		{
		}
		else
		{
			func_48(uParam0, &uVar0);
			UIEVENTS::EVENTS_UI_POP_MESSAGE(2.767335E+22f);
		}
	}
	if (func_46(uParam0, 3))
	{
		Var4 = { func_49(uParam0) };
		if (func_50(uParam0, &Var4))
		{
			func_48(uParam0, &Var4);
		}
		func_47(uParam0, 3, 0);
	}
}

void func_25(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_51();
	iVar1 = func_52(uParam0);
	if (iVar0 != func_52(uParam0))
	{
		if (iVar1 != 0)
		{
			func_53(uParam0, iVar1);
		}
		func_19(uParam0, iVar0);
		func_54(uParam0, iVar0);
		func_55(uParam0, iVar0);
	}
	func_56(uParam0, iVar0);
	func_57(uParam0, iVar0);
}

void func_26(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*uParam0)
	{
		if (!func_58(uParam1))
		{
			*uParam0 = 0;
		}
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = uParam0->f_2[iVar1 /*3*/];
		if (!func_59(&(uParam0->f_2[iVar1 /*3*/])))
		{
		}
		else
		{
			if (!func_58(uParam1))
			{
				if (!func_60(uParam1, 1108082688 /* Float: 35f */, 1f))
				{
				}
				Jump @201; //curOff = 96
			}
			else
			{
				switch (func_61(&(uParam0->f_2[iVar1 /*3*/])))
				{
					case 0:
					case 2:
					case 4:
						break;
					case 3:
						break;
					default:
						iVar0++;
						Jump @201; //curOff = 156
						if (func_62(uParam1) < 1f)
						{
							iVar0++;
						}
						else
						{
							func_63(uParam1);
							func_64(uParam0, iVar2);
							*uParam0 = 1;
						}
						iVar1++;
						uParam0->f_1 = iVar0 > 0;
					}
				}
			}
		}

void func_27(var uParam0)
{
	if (!func_58(uParam0))
	{
		return;
	}
	if (uParam0->f_2 > 0f)
	{
		if (func_62(uParam0) > uParam0->f_2)
		{
			*uParam0 = 0;
			return;
		}
	}
	func_65(0);
	HUD::_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME();
}

void func_28(int* iParam0)
{
	if (!func_66(*iParam0, 1))
	{
		return;
	}
	if (!AUDIO::PREPARE_SOUNDSET(&(iParam0->f_1), false))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FRONTEND(&(iParam0->f_17), &(iParam0->f_1), false, 0);
	func_32(iParam0, 1);
}

void func_29(var uParam0)
{
	var uVar0;

	if (!func_67(&(uParam0->f_416), &(uParam0->f_412)))
	{
		return;
	}
	if (func_68(&(uParam0->f_416)) == func_69())
	{
		func_70(uParam0, -5.281266E+11f);
	}
	if (func_68(&(uParam0->f_416)) == func_71())
	{
		if (func_72(uParam0->f_481, 0))
		{
			if (func_73(uParam0->f_416.f_18, &uVar0))
			{
				TELEMETRY::_TELEMETRY_COUPON(&uVar0, uParam0->f_481.f_1, uParam0->f_481, uParam0->f_481.f_2, func_74(1), -0.03389949f);
			}
		}
	}
}

void func_30()
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iVar2 = func_75();
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		Var0 = { func_76(iVar3) };
		if (!TXD::DOES_STREAMED_TXD_EXIST(Var0.f_1))
		{
		}
		else
		{
			TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(Var0.f_1);
		}
		iVar3++;
	}
}

void func_31(var uParam0)
{
	func_77(0);
	func_78(&(uParam0->f_6.f_367));
	if (!func_79(uParam0))
	{
		func_33(&(uParam0->f_478), 3.052369E-06f, 0);
	}
}

void func_32(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_33(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (*uParam0 != iParam1)
	{
		return;
	}
	iVar0 = (Global_1295619.f_16 - uParam0->f_1);
	TELEMETRY::_TELEMETRY_MENU_NAVIGATION(*uParam0, iVar0, uParam0->f_2, iParam2);
	func_80(uParam0);
}

bool func_34()
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, 1.694023E-10f) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, 1.694023E-10f))
	{
		return false;
	}
	return Global_1960810.f_6;
}

void func_35(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_2 = 5.779137E+29f;
}

void func_36(int iParam0, bool bParam1)
{
	if (func_34())
	{
		return;
	}
	if (Global_1960810.f_1)
	{
		return;
	}
	Global_1960810 = iParam0;
	if (bParam1)
	{
		Global_1960810.f_1 = 1;
	}
}

bool func_37(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3))
	{
		return false;
	}
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_3, -2.84771E-18f);
	uParam0->f_6.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(uParam0->f_6, -1.059889E-17f, "");
	uParam0->f_6.f_2 = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_6, -1.692351f, 0);
	uParam0->f_6.f_3 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(uParam0->f_6, 1.548306E-22f);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6.f_3))
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_6.f_3);
	}
	uParam0->f_6.f_4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(uParam0->f_6, -1.926359E+26f);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6.f_4))
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_6.f_4);
	}
	uParam0->f_6.f_5 = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_6, 6.381529E+23f, 0);
	uParam0->f_6.f_387 = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_6, -4.784936E+08f, 0);
	uParam0->f_6.f_388 = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_6, -1.062502E+14f, 0);
	uParam0->f_6.f_389 = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(uParam0->f_6, 198470f, "");
	uParam0->f_6.f_390 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_6, -2.850148E+35f, false);
	uParam0->f_6.f_391 = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_6, 1.828305E+37f, 0);
	return true;
}

bool func_38(var uParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;

	if (!func_81(&(uParam0->f_6.f_19)))
	{
		if (!func_82(&(uParam0->f_6.f_19), &(uParam0->f_6)))
		{
			return false;
		}
	}
	func_83(&(uParam0->f_6.f_19), &(uParam0->f_6.f_26));
	iVar2 = func_84();
	iVar4 = 0;
	while (iVar4 < iVar2)
	{
		func_85(iVar4, &sVar0, &sVar1);
		cVar3 = MISC::VAR_STRING(2, func_86(-2.902946f), sVar0, sVar1);
		if (!func_87(&(uParam0->f_6.f_19), &(uParam0->f_6.f_26), cVar3))
		{
		}
		iVar4++;
	}
	func_88(&(uParam0->f_6.f_19), 0);
	return true;
}

bool func_39(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[32];
	int iVar5;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	iVar0 = *uParam1;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		StringCopy(&cVar1, "rank_slot_", 32);
		StringIntConCat(&cVar1, iVar5, 32);
		(*uParam1)[iVar5 /*2*/] = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, &cVar1, 0);
		StringConCat(&cVar1, "_enabled", 32);
		(uParam1[iVar5 /*2*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, &cVar1, false);
		iVar5++;
	}
	return true;
}

bool func_40(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, float fParam5, float fParam6, float fParam7)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam1, sParam2, 0);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam1, sParam3, 0);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, sParam4, 0);
	*uParam0 = 1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_1 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_5 = 0;
	uParam0->f_9 = fParam5;
	uParam0->f_8 = fParam6;
	uParam0->f_13 = fParam7;
	uParam0->f_15 = 0;
	return true;
}

bool func_41(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	*uParam0 = 0;
	if (iParam2 == 0)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		return false;
	}
	if (iParam4 == 0)
	{
		return false;
	}
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*uParam1, iParam2, "");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam1, iParam3, false);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam1, iParam4, false);
	*uParam0 = 1;
	return true;
}

bool func_42(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3))
	{
		return false;
	}
	uParam0->f_6.f_392 = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_3, -3.478456E-23f, 0);
	if (!func_89(&(uParam0->f_3), &(uParam0->f_6.f_392.f_1), "infoScreenBody"))
	{
		return false;
	}
	uParam0->f_6.f_392.f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(uParam0->f_3, -3.940566E-19f, "");
	uParam0->f_6.f_392.f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_3, -5.12896E-14f, false);
	uParam0->f_6.f_392.f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_3, -1.939267E-29f, 0);
	uParam0->f_6.f_392.f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_3, 1.115727f, 0);
	uParam0->f_6.f_392.f_9 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_3, "infoScreenBgTextureDict", 0);
	uParam0->f_6.f_392.f_10 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_3, "infoScreenBgGradientTexture", 0);
	uParam0->f_6.f_392.f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_3, "infoScreenBgGradientTextureDict", 0);
	uParam0->f_6.f_392.f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_3, -1.41359E+10f, 0);
	uParam0->f_6.f_392.f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_3, "infoScreenLogoTextureDict", 0);
	return true;
}

void func_43()
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iVar2 = func_75();
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		Var0 = { func_76(iVar3) };
		if (!TXD::DOES_STREAMED_TXD_EXIST(Var0.f_1))
		{
		}
		else
		{
			TXD::REQUEST_STREAMED_TXD(Var0.f_1, true);
		}
		iVar3++;
	}
}

void func_44(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
}

void func_45(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_46(var uParam0, int iParam1)
{
	return func_66(uParam0->f_1, iParam1);
}

void func_47(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_45(&(uParam0->f_1), iParam1);
	}
	else
	{
		func_32(&(uParam0->f_1), iParam1);
	}
}

void func_48(var uParam0, bool bParam1)
{
	switch (*bParam1)
	{
		case -1740156697:
			func_90(uParam0, bParam1);
			break;
		case -1203660660:
			func_91(uParam0, bParam1);
			break;
		case -722926211:
		case 703281244:
			func_92(uParam0, bParam1);
			break;
	}
}

struct<4> func_49(var uParam0)
{
	return uParam0->f_441;
}

bool func_50(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	switch (uParam1->f_2)
	{
		case -1479343923:
		case 684358904:
		case 1143084795:
		case 2097921812:
			iVar1 = func_93(uParam0);
			break;
		case -1964195787:
		case 148626529:
		case 389841892:
		case 406185559:
			iVar1 = func_94(uParam0);
			break;
	}
	if (iVar1 > 0)
	{
		if (uParam1->f_1 >= iVar1)
		{
			uParam1->f_1 = (iVar1 - 1);
		}
		switch (uParam1->f_2)
		{
			case -1479343923:
			case 2097921812:
				if (!func_95(uParam0, uParam1->f_1, &(uParam1->f_3)))
				{
				}
				break;
			case -1964195787:
			case 389841892:
				if (!func_96(uParam0, uParam1->f_1, &(uParam1->f_3)))
				{
				}
				break;
		}
		if (*uParam1 != -2.576099E-24f)
		{
			*uParam1 = -2.576099E-24f;
		}
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam1->f_3))
		{
			uParam1->f_2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(uParam1->f_3, 1.29661E-33f);
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_51()
{
	return UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(-8.522482E-18f);
}

int func_52(var uParam0)
{
	return uParam0->f_2;
}

void func_53(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("REWARDS"):
			func_31(uParam0);
			break;
		case -1102037190:
			func_97(uParam0);
			break;
	}
}

void func_54(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("REWARDS"):
			func_98(uParam0);
			break;
		case -1102037190:
			func_99(uParam0);
			break;
	}
}

void func_55(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("REWARDS"):
			func_100(&(uParam0->f_6.f_19));
			break;
	}
}

void func_56(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("REWARDS"):
			func_101(uParam0);
			break;
		case -1102037190:
			func_102(uParam0);
			break;
	}
}

void func_57(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("REWARDS"):
			if (func_103(&(uParam0->f_6.f_19)))
			{
				func_106(&(uParam0->f_478), func_105(func_104(&(uParam0->f_6.f_19))));
			}
			func_107(&(uParam0->f_6.f_19), &(uParam0->f_6.f_26));
			break;
	}
}

bool func_58(var uParam0)
{
	return *uParam0;
}

bool func_59(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		return false;
	}
	return true;
}

bool func_60(var uParam0, int iParam1, float fParam2)
{
	if (func_58(uParam0))
	{
		return false;
	}
	*uParam0 = 1;
	uParam0->f_1 = func_108();
	uParam0->f_2 = iParam1;
	uParam0->f_3 = fParam2;
	return true;
}

int func_61(var uParam0)
{
	return func_109(*uParam0);
}

float func_62(var uParam0)
{
	if (!*uParam0)
	{
		return 0f;
	}
	return MISC::ABSF((func_108() - uParam0->f_1));
}

void func_63(var uParam0)
{
	if (func_62(uParam0) < uParam0->f_3)
	{
		uParam0->f_2 = MISC::ABSF((uParam0->f_3 - func_62(uParam0)));
	}
	else
	{
		*uParam0 = 0;
	}
}

int func_64(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_2[iVar0 /*3*/] != iParam1)
		{
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_18), &(uParam0->f_2[iVar0 /*3*/]), 3);
			func_44(&(uParam0->f_2[iVar0 /*3*/]));
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_65(int iParam0)
{
	if (Global_1940072.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940072.f_105.f_2 = iParam0;
}

bool func_66(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

bool func_67(var uParam0, var uParam1)
{
	if (*uParam0 && func_58(uParam1))
	{
		return false;
	}
	return *uParam0;
}

int func_68(var uParam0)
{
	return uParam0->f_18.f_1;
}

bool func_69()
{
	return func_110(3.319684E+27f);
}

void func_70(var uParam0, float fParam1)
{
	char cVar0[256];

	cVar0 = { func_111(fParam1) };
	if (!func_112(&(uParam0->f_445), &cVar0, &(cVar0.f_16)))
	{
	}
}

int func_71()
{
	return func_110(-12.2445f);
}

bool func_72(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_73(int iParam0, var uParam1)
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(iParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1292096.f_2983;
		case 1:
			return Global_1292096.f_2984;
		default:
			break;
	}
	return 0;
}

int func_75()
{
	return 5;
}

struct<2> func_76(int iParam0)
{
	float fVar0;
	struct<2> Var1;

	switch (iParam0)
	{
		case 0:
			fVar0 = -8.75523E-22f;
			break;
		case 1:
			fVar0 = 6.27178E-31f;
			break;
		case 2:
			fVar0 = 7.051183E-37f;
			break;
		case 3:
			fVar0 = -7.714048E-26f;
			break;
		case 4:
			fVar0 = 677.1164f;
			break;
		default:
			return Var1;
	}
	return func_113(fVar0);
}

void func_77(bool bParam0)
{
	char* sVar0;

	sVar0 = func_114(-6.997895E+16f);
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_STOP(sVar0);
	}
}

void func_78(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	*uParam0 = 1;
	func_115(uParam0);
	uParam0->f_7 = 0;
	uParam0->f_6 = 0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_10, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_11, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, 0);
}

bool func_79(var uParam0)
{
	return uParam0->f_6.f_392.f_13;
}

void func_80(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

bool func_81(var uParam0)
{
	return uParam0->f_5;
}

bool func_82(var uParam0, var uParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabCount", 0);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam1, "tabName", "");
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabIndex", 0);
	uParam0->f_5 = 1;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	return true;
}

void func_83(var uParam0, var uParam1)
{
	int iVar0;

	uParam0->f_4 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		(uParam1[iVar0 /*17*/])->f_16 = 0;
		StringCopy(uParam1[iVar0 /*17*/], "", 128);
		iVar0++;
	}
}

int func_84()
{
	return BUILTIN::CEIL((BUILTIN::TO_FLOAT(func_116(0)) / 5f));
}

void func_85(int iParam0, int iParam1, int iParam2)
{
	func_117(5, iParam0, 1, iParam1, iParam2);
	*iParam1++;
	*iParam2++;
}

char* func_86(float fParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_118();
	Var0.f_2 = 9;
	Var0.f_3 = func_74(0);
	Var0.f_4 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var5, &Var0))
	{
		return func_119(fParam0);
	}
	return func_120(Var5);
}

bool func_87(var uParam0, var uParam1, char* sParam2)
{
	int iVar0;

	iVar0 = *uParam1;
	if (uParam0->f_4 >= iVar0)
	{
		return false;
	}
	if (!uParam0->f_5)
	{
		return false;
	}
	*(uParam1[uParam0->f_4 /*17*/]) = { func_121(sParam2) };
	(uParam1[uParam0->f_4 /*17*/])->f_16 = 0;
	uParam0->f_4++;
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_1, uParam0->f_4);
	return true;
}

int func_88(var uParam0, int iParam1)
{
	if (!func_81(uParam0))
	{
		return 0;
	}
	if (!func_122(uParam0, iParam1))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, iParam1);
	return 1;
}

bool func_89(var uParam0, var uParam1, char* sParam2)
{
	char cVar0[128];
	int iVar16;
	int iVar17;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	StringCopy(&cVar0, "", 128);
	iVar16 = *uParam1;
	iVar17 = 0;
	while (iVar17 < iVar16)
	{
		StringCopy(&cVar0, sParam2, 128);
		StringIntConCat(&cVar0, iVar17 + 1, 128);
		(*uParam1)[iVar17] = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, &cVar0, "");
		iVar17++;
	}
	return true;
}

void func_90(var uParam0, bool bParam1)
{
	func_123(uParam0, bParam1);
	if (func_46(uParam0, 4))
	{
		return;
	}
	switch (bParam1->f_2)
	{
		case 1143084795:
		case 2097921812:
			if (!func_124(uParam0, &(bParam1->f_3), bParam1->f_1))
			{
			}
			func_125(&(uParam0->f_6.f_383), 1);
			break;
		case -1479343923:
		case 684358904:
			if (!func_126(uParam0, &(bParam1->f_3), bParam1->f_1))
			{
			}
			func_125(&(uParam0->f_6.f_383), 1);
			break;
		case -1964195787:
		case 406185559:
			if (!func_127(uParam0, &(bParam1->f_3), bParam1->f_1))
			{
			}
			func_125(&(uParam0->f_6.f_383), 1);
			func_128(uParam0, 0);
			break;
		case 148626529:
		case 389841892:
			if (!func_129(uParam0, &(bParam1->f_3), bParam1->f_1))
			{
			}
			func_125(&(uParam0->f_6.f_383), 1);
			func_128(uParam0, 0);
			break;
	}
}

void func_91(var uParam0, bool bParam1)
{
	switch (bParam1->f_2)
	{
		case -1817877904:
			func_130(uParam0);
			break;
		case 148626529:
		case 406185559:
		case 684358904:
		case 1143084795:
			if (!func_131(uParam0, &(bParam1->f_3)))
			{
			}
			break;
		case 251386954:
			func_132(uParam0);
			break;
		case 1306840844:
			func_133(uParam0);
			break;
		case -739645416:
			if (func_134())
			{
				func_133(uParam0);
			}
			else
			{
				func_135(uParam0);
			}
			break;
		case 2127956707:
			if (func_136(uParam0))
			{
				func_33(&(uParam0->f_478), 3.065039E-21f, 0);
				func_47(uParam0, 5, 1);
			}
			break;
	}
}

void func_92(var uParam0, bool bParam1)
{
	switch (bParam1->f_2)
	{
		case 294480590:
			func_100(&(uParam0->f_6.f_19));
			func_128(uParam0, 0);
			func_47(uParam0, 4, 1);
			func_101(uParam0);
			break;
	}
}

int func_93(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6.f_3))
	{
		return 0;
	}
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_6.f_3);
}

int func_94(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6.f_4))
	{
		return 0;
	}
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_6.f_4);
}

bool func_95(var uParam0, int iParam1, int iParam2)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6.f_3))
	{
		return false;
	}
	*iParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_6.f_3, iParam1);
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*iParam2))
	{
		return false;
	}
	return true;
}

bool func_96(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_6.f_4);
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	*iParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_6.f_4, iParam1);
	return true;
}

void func_97(var uParam0)
{
}

void func_98(var uParam0)
{
	func_88(&(uParam0->f_6.f_19), func_138(func_137(0), 5, (func_116(0) / 5)));
	func_139(uParam0);
	func_77(1);
	func_128(uParam0, func_140(func_137(0), 5, func_116(0)));
	func_47(uParam0, 0, 1);
	func_47(uParam0, 1, 1);
	func_47(uParam0, 2, 1);
	if (!func_79(uParam0))
	{
		func_141(&(uParam0->f_478), 3.052369E-06f);
	}
	func_142(uParam0, func_86(-1.510235E+31f));
	func_143(&(uParam0->f_437), 3000);
}

void func_99(var uParam0)
{
	func_47(uParam0, 5, 0);
	func_144(uParam0, -7.714048E-26f);
	func_145(uParam0, 677.1164f);
}

void func_100(var uParam0)
{
	if (!func_81(uParam0))
	{
		return;
	}
	uParam0->f_6 = 1;
}

void func_101(var uParam0)
{
	int iVar0;

	iVar0 = func_104(&(uParam0->f_6.f_19));
	if (func_146(&(uParam0->f_437)))
	{
		if (func_147(&(uParam0->f_416)))
		{
		}
		else
		{
			func_47(uParam0, 0, 1);
			func_47(uParam0, 1, 1);
			func_47(uParam0, 2, 1);
			func_47(uParam0, 3, 1);
		}
	}
	if (func_67(&(uParam0->f_416), &(uParam0->f_412)))
	{
		func_47(uParam0, 0, 1);
		func_47(uParam0, 1, 1);
		func_47(uParam0, 2, 1);
		func_47(uParam0, 3, 1);
	}
	if (func_103(&(uParam0->f_6.f_19)))
	{
		func_47(uParam0, 0, 1);
		func_47(uParam0, 1, 1);
		func_47(uParam0, 2, 1);
	}
	if (func_46(uParam0, 2))
	{
		func_148(uParam0, iVar0);
		func_149(uParam0, func_137(0));
		func_47(uParam0, 2, 0);
	}
	if (func_46(uParam0, 0))
	{
		func_150(uParam0, iVar0);
		func_47(uParam0, 0, 0);
	}
	if (func_46(uParam0, 1))
	{
		func_151(uParam0, iVar0);
		func_47(uParam0, 1, 0);
	}
	func_152(&(uParam0->f_6.f_367));
	func_153(uParam0);
}

void func_102(var uParam0)
{
	if (func_46(uParam0, 5))
	{
		if (func_147(&(uParam0->f_416)))
		{
		}
		else if (!func_154(&(uParam0->f_416), func_71()))
		{
			if (func_134())
			{
				func_155(844712.8f);
			}
			func_47(uParam0, 5, 0);
		}
	}
}

bool func_103(var uParam0)
{
	return uParam0->f_6;
}

int func_104(var uParam0)
{
	if (!uParam0->f_5)
	{
		return -1;
	}
	return DATABINDING::DATABINDING_READ_INT(uParam0->f_3);
}

int func_105(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_106(var uParam0, int iParam1)
{
	func_156(&(uParam0->f_2), iParam1);
}

void func_107(var uParam0, var uParam1)
{
	int iVar0;

	if (!func_81(uParam0))
	{
		uParam0->f_6 = 0;
		return;
	}
	if (!func_103(uParam0))
	{
		return;
	}
	iVar0 = func_104(uParam0);
	if (!func_122(uParam0, iVar0))
	{
		uParam0->f_6 = 0;
		return;
	}
	func_157(uParam0, uParam1, iVar0);
	uParam0->f_6 = 0;
}

float func_108()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

int func_109(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_158(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_159(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_159(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_110(float fParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_118();
	Var0.f_2 = 23;
	Var0.f_3 = func_74(0);
	Var0.f_4 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return func_160(fParam0);
	}
	return uVar5;
}

struct<32> func_111(float fParam0)
{
	struct<32> Var0;
	struct<5> Var32;

	Var32 = func_118();
	Var32.f_3 = func_74(0);
	Var32.f_4 = fParam0;
	Var32.f_2 = 18;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var0, &Var32))
	{
		Var32.f_2 = 19;
		if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&(Var0.f_16), &Var32))
		{
			return Var0;
		}
	}
	else
	{
		return func_161(fParam0);
	}
	return Var0;
}

bool func_112(int* iParam0, char* sParam1, char* sParam2)
{
	if (!func_66(*iParam0, 0))
	{
		return false;
	}
	if (func_66(*iParam0, 1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return false;
	}
	func_45(iParam0, 1);
	StringCopy(&(iParam0->f_1), sParam2, 128);
	StringCopy(&(iParam0->f_17), sParam1, 128);
	AUDIO::_STOP_SOUND_WITH_NAME(&(iParam0->f_17), &(iParam0->f_1));
	return true;
}

struct<2> func_113(float fParam0)
{
	struct<2> Var0;
	struct<5> Var2;

	Var2 = func_118();
	Var2.f_3 = func_74(0);
	Var2.f_4 = fParam0;
	Var2.f_2 = 11;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&Var0, &Var2))
	{
		return func_162(fParam0);
	}
	Var2.f_2 = 13;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

char* func_114(float fParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_118();
	Var0.f_3 = func_74(0);
	Var0.f_4 = fParam0;
	Var0.f_2 = 21;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var5, &Var0))
	{
		return func_163(fParam0);
	}
	return func_120(Var5);
}

void func_115(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_116(int iParam0)
{
	return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(func_74(iParam0), func_164(iParam0));
}

void func_117(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (bParam2)
	{
		*iParam3 = (iParam0 * iParam1);
		*iParam4 = (*iParam3 + (iParam0 - 1));
	}
	else
	{
		*iParam3 = (iParam0 * iParam1);
		*iParam4 = (*iParam3 - (iParam0 - 1));
	}
}

var func_118()
{
	return Global_1072759.f_28418[52 /*4*/].f_3;
}

char* func_119(float fParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_118();
	Var0.f_2 = 8;
	Var0.f_3 = fParam0;
	Var0.f_4 = 0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var5, &Var0))
	{
		return "";
	}
	return func_120(Var5);
}

char* func_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

struct<16> func_121(char* sParam0)
{
	char cVar0[128];

	StringCopy(&cVar0, sParam0, 128);
	return cVar0;
}

bool func_122(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_4)
	{
		return false;
	}
	return true;
}

void func_123(var uParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_441), bParam1, 4);
}

bool func_124(var uParam0, var uParam1, int iParam2)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	func_165(uParam0, uParam1, iParam2);
	func_166(uParam0, uParam1, 0);
	return true;
}

int func_125(var uParam0, bool bParam1)
{
	if (!*uParam0)
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3, bParam1);
	return 1;
}

bool func_126(var uParam0, var uParam1, int iParam2)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	func_165(uParam0, uParam1, iParam2);
	func_167(uParam0, uParam1, 0);
	return true;
}

bool func_127(var uParam0, var uParam1, int iParam2)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	func_165(uParam0, uParam1, iParam2);
	func_166(uParam0, uParam1, 1);
	return true;
}

int func_128(var uParam0, int iParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6.f_5))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6.f_5, iParam1);
	return 1;
}

bool func_129(var uParam0, var uParam1, int iParam2)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	func_165(uParam0, uParam1, iParam2);
	func_167(uParam0, uParam1, 1);
	return true;
}

void func_130(var uParam0)
{
	func_168(uParam0, 0);
	switch (func_169(uParam0))
	{
		case 1:
			func_33(&(uParam0->f_478), -2.835456E-35f, 0);
			break;
		case 2:
			func_33(&(uParam0->f_478), -5.917605E+35f, 0);
			break;
		case 0:
			func_33(&(uParam0->f_478), 3.065039E-21f, 0);
			break;
	}
}

bool func_131(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_170(uParam1);
	iVar1 = func_137(0);
	iVar2 = (iVar0 - iVar1);
	if (!func_134())
	{
		return false;
	}
	if (func_147(&(uParam0->f_416)))
	{
		return false;
	}
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 < 5)
	{
		if (!func_59(&(uParam0->f_416.f_2[iVar4 /*3*/])))
		{
		}
		else
		{
			switch (func_61(&(uParam0->f_416.f_2[iVar4 /*3*/])))
			{
				case 0:
				case 2:
				case 4:
					break;
				case 3:
					break;
				default:
					iVar3++;
					Jump @172; //curOff = 146
					if (func_62(&(uParam0->f_412)) < 1f)
					{
						iVar3++;
					}
				}
				iVar4++;
			}
			if (iVar3 > 0)
			{
				return false;
			}
			if (iVar0 < iVar1)
			{
				return false;
			}
			if (iVar2 < 0)
			{
				return false;
			}
			if (!func_171(&iVar5, iVar2))
			{
				return false;
			}
			if (!func_172(&(uParam0->f_416), iVar5, func_69(), 0))
			{
				return false;
			}
			return true;
		}

void func_132(var uParam0)
{
	var uVar0;

	func_173(uParam0, 0);
	if (func_174())
	{
		func_175(uParam0, 2.729485E+38f);
	}
	else
	{
		func_175(uParam0, 497634f);
	}
	func_176(uParam0, 6.27178E-31f);
	func_177(uParam0, -8.864326E+23f);
	func_178(&uVar0);
	func_179(uParam0, &uVar0);
	func_180(uParam0, 1);
	func_33(&(uParam0->f_478), 3.052369E-06f, 0);
	func_141(&(uParam0->f_478), 3.065039E-21f);
	func_168(uParam0, 1);
}

void func_133(var uParam0)
{
	func_173(uParam0, 1);
	if (func_174())
	{
		func_175(uParam0, 1.313277E+35f);
	}
	else
	{
		func_175(uParam0, -2.432349E-30f);
	}
	func_176(uParam0, -8.75523E-22f);
	func_177(uParam0, -6.885761E+26f);
	func_70(uParam0, -1.437551E-27f);
	func_180(uParam0, 0);
	func_33(&(uParam0->f_478), 3.052369E-06f, 0);
	func_141(&(uParam0->f_478), -2.835456E-35f);
	func_168(uParam0, 1);
}

bool func_134()
{
	bool bVar0;

	bVar0 = func_71();
	if (!func_181(bVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0))
	{
		return false;
	}
	return true;
}

void func_135(var uParam0)
{
	func_173(uParam0, 2);
	if (func_174())
	{
		func_175(uParam0, -1.145956E-14f);
	}
	else
	{
		func_175(uParam0, 2.945145E-13f);
	}
	func_176(uParam0, 7.051183E-37f);
	func_177(uParam0, -5.067222E+37f);
	func_180(uParam0, 0);
	func_33(&(uParam0->f_478), 3.052369E-06f, 0);
	func_141(&(uParam0->f_478), -5.917605E+35f);
	func_168(uParam0, 1);
}

bool func_136(var uParam0)
{
	int iVar0;

	if (!func_182())
	{
		func_155(5.255109E+17f);
		return false;
	}
	if (!func_183(uParam0, &iVar0))
	{
		return false;
	}
	if (!func_172(&(uParam0->f_416), iVar0, func_71(), 0))
	{
		return false;
	}
	return true;
}

int func_137(int iParam0)
{
	return func_185(func_184(iParam0));
}

int func_138(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == (iParam1 * iParam2) && iParam2 != 0)
	{
		return (iParam2 - 1);
	}
	return BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0) / BUILTIN::TO_FLOAT(iParam1)));
}

void func_139(var uParam0)
{
	var uVar0;
	int iVar52;

	func_186(&uVar0, 0, 0);
	iVar52 = 0;
	while (iVar52 < 10)
	{
		func_186(&uVar0, iVar52, 0);
		if (!func_187(uParam0, &uVar0, iVar52))
		{
		}
		iVar52++;
	}
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == iParam2)
	{
		return (iParam1 - 1);
	}
	return (iParam0 % iParam1);
}

void func_141(var uParam0, int iParam1)
{
	if (*uParam0 != 0 && *uParam0 != iParam1)
	{
		func_33(uParam0, *uParam0, 0);
	}
	func_80(uParam0);
	*uParam0 = iParam1;
	uParam0->f_1 = Global_1295619.f_16;
}

void func_142(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_2, MISC::GET_HASH_KEY(sParam1));
}

void func_143(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_144(var uParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = { func_113(fParam1) };
	func_188(uParam0, Var0, Var0.f_1);
}

void func_145(var uParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = { func_113(fParam1) };
	func_189(uParam0, Var0, Var0.f_1);
}

bool func_146(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
		if (func_190(uParam0))
		{
			func_191(uParam0);
		}
		return false;
	}
	if (!func_190(uParam0))
	{
		func_192(uParam0, 1);
		return true;
	}
	if (!func_193(uParam0) >= uParam0->f_3)
	{
		return false;
	}
	func_194(uParam0);
	return true;
}

bool func_147(var uParam0)
{
	return uParam0->f_1;
}

void func_148(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	func_85(iParam1, &iVar0, &uVar1);
	iVar0 = (iVar0 - 1);
	if (!func_195(&(uParam0->f_6.f_6), iVar0, func_137(0)))
	{
	}
}

void func_149(var uParam0, char* sParam1)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, func_86(-1.672253E+20f), 128);
	StringCopy(&cVar16, MISC::VAR_STRING(2, func_86(-5.26591E+08f)), 128);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6.f_1, MISC::VAR_STRING(10, &cVar0, &cVar16, sParam1));
}

int func_150(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	func_85(iParam1, &iVar0, &uVar1);
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar2 = (iVar0 + iVar3);
		if (!func_197(uParam0, iVar3, iVar2, func_196(0, iVar2)))
		{
		}
		iVar3++;
	}
	return 1;
}

int func_151(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_85(iParam1, &iVar0, &iVar1);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		if (!func_198(uParam0, iVar2, iVar3, func_196(0, iVar3)))
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return 1;
}

void func_152(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	switch (func_199(uParam0))
	{
		case 0:
			break;
		case 1:
			if (!func_200(uParam0))
			{
				return;
			}
			func_201(uParam0, 2);
		case 2:
			iVar0 = DATABINDING::DATABINDING_READ_INT(uParam0->f_12);
			fVar1 = ((BUILTIN::TO_FLOAT(iVar0) * uParam0->f_8) / 1120403456);
			fVar1 = (fVar1 - MISC::GET_FRAME_TIME());
			fVar1 = func_202(fVar1, 0f, uParam0->f_8);
			iVar2 = BUILTIN::CEIL(((fVar1 / uParam0->f_8) * 1120403456));
			DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, iVar2);
			if (iVar2 > 0)
			{
				return;
			}
			func_201(uParam0, 3);
		case 3:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_10, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_11, 0);
			if (uParam0->f_7 != uParam0->f_3 && uParam0->f_7 != 0)
			{
				TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(uParam0->f_7);
			}
			uParam0->f_6 = uParam0->f_2;
			uParam0->f_7 = uParam0->f_3;
			uParam0->f_5 = uParam0->f_1;
			uParam0->f_14 = 0f;
			func_201(uParam0, 4);
		case 4:
			if (func_200(uParam0))
			{
				func_201(uParam0, 2);
				return;
			}
			if (func_203(uParam0))
			{
				func_204(uParam0);
			}
			else
			{
				uParam0->f_14 = (uParam0->f_14 + MISC::GET_FRAME_TIME());
				if (uParam0->f_14 < uParam0->f_13)
				{
					return;
				}
			}
			func_201(uParam0, 5);
		case 5:
			if (func_200(uParam0))
			{
				func_201(uParam0, 2);
				return;
			}
			if (uParam0->f_7 != uParam0->f_3)
			{
				TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(uParam0->f_7);
				func_201(uParam0, 1);
				return;
			}
			if (!TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_7))
			{
				func_201(uParam0, 1);
				return;
			}
			TXD::REQUEST_STREAMED_TXD(uParam0->f_7, true);
			if (!TXD::HAS_STREAMED_TXD_LOADED(uParam0->f_7))
			{
				return;
			}
			func_201(uParam0, 6);
		case 6:
			if (func_200(uParam0))
			{
				func_201(uParam0, 2);
				return;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_10, uParam0->f_6);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_11, uParam0->f_7);
			func_201(uParam0, 7);
		case 7:
			if (func_200(uParam0))
			{
				func_201(uParam0, 2);
				return;
			}
			iVar3 = DATABINDING::DATABINDING_READ_INT(uParam0->f_12);
			fVar4 = ((BUILTIN::TO_FLOAT(iVar3) * uParam0->f_9) / 1120403456);
			fVar4 = (fVar4 + MISC::GET_FRAME_TIME());
			fVar4 = func_202(fVar4, 0f, uParam0->f_9);
			iVar5 = BUILTIN::CEIL(((fVar4 * 1120403456) / uParam0->f_9));
			iVar5 = func_205(iVar5, 0, 100);
			DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, iVar5);
			if (iVar5 >= 100)
			{
				func_201(uParam0, 1);
			}
			break;
	}
}

void func_153(var uParam0)
{
	bool bVar0;

	bVar0 = func_134();
	if (func_206(uParam0) != bVar0)
	{
		func_207(uParam0, bVar0);
	}
}

bool func_154(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_2[iVar0 /*3*/].f_1 != iParam1)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_155(int iParam0)
{
	if (!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(-8.522482E-18f, iParam0))
	{
	}
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_157(var uParam0, var uParam1, int iParam2)
{
	func_209(uParam0, func_208(uParam1, iParam2));
	func_210(uParam1, iParam2);
}

int func_158(int iParam0)
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

void func_159(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_211(iParam0, iParam1, iParam2, iParam3);
}

int func_160(float fParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_118();
	Var0.f_2 = 22;
	Var0.f_3 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

struct<32> func_161(float fParam0)
{
	struct<32> Var0;
	struct<4> Var32;

	Var32 = func_118();
	Var32.f_3 = fParam0;
	Var32.f_2 = 16;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var0, &Var32))
	{
		return Var0;
	}
	Var32.f_3 = fParam0;
	Var32.f_2 = 17;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&(Var0.f_16), &Var32))
	{
		return Var0;
	}
	return Var0;
}

struct<2> func_162(float fParam0)
{
	struct<2> Var0;
	struct<4> Var2;

	Var2 = func_118();
	Var2.f_3 = fParam0;
	Var2.f_2 = 10;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&Var0, &Var2))
	{
		return Var0;
	}
	Var2.f_2 = 12;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

char* func_163(float fParam0)
{
	struct<4> Var0;
	struct<16> Var5;

	Var0 = func_118();
	Var0.f_3 = fParam0;
	Var0.f_2 = 20;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var5, &Var0))
	{
		return "";
	}
	return func_120(Var5);
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return -2.696814E-33f;
		default:
			break;
	}
	return 0;
}

void func_165(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return;
	}
	func_212(uParam0, uParam1);
	iVar0 = func_170(uParam1);
	func_213(uParam0, iVar0);
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, NaNf);
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -3.796351E+19f);
	iVar3 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 1.29661E-33f);
	switch (iVar3)
	{
		case -1479343923:
		case 2097921812:
			iVar4 = 1;
			break;
		case -1964195787:
		case 389841892:
			iVar4 = 2;
			break;
	}
	if (iVar1 != 0 && iVar2 != 0)
	{
		func_215(&(uParam0->f_6.f_367), iVar1, iVar2, func_214(iVar4, func_104(&(uParam0->f_6.f_19)), iParam2), 0);
	}
	else
	{
		func_115(&(uParam0->f_6.f_367));
	}
}

void func_166(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_170(uParam1);
	if (func_216() == 1)
	{
		func_218(uParam0, func_217(-1.010048E+37f));
		return;
	}
	else if (bParam2 && !func_134())
	{
		func_218(uParam0, func_217(-2170.564f));
		return;
	}
	else if (!func_196(0, iVar0))
	{
		func_218(uParam0, func_217(-4.41165E+25f));
		return;
	}
	else
	{
		iVar1 = func_219(uParam1);
		if (iVar1 != 0)
		{
			func_220(uParam0, func_219(uParam1));
			return;
		}
	}
	func_221(uParam0);
}

void func_167(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_170(uParam1);
	if (func_216() == 1)
	{
		func_218(uParam0, func_217(-1.010048E+37f));
		return;
	}
	else if (!func_196(0, iVar0))
	{
		func_218(uParam0, func_217(-4.41165E+25f));
		return;
	}
	func_221(uParam0);
}

void func_168(var uParam0, int iParam1)
{
	uParam0->f_6.f_392.f_13 = iParam1;
}

int func_169(var uParam0)
{
	return DATABINDING::DATABINDING_READ_INT(uParam0->f_6.f_392);
}

int func_170(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1.760569E+20f);
}

bool func_171(int iParam0, int iParam1)
{
	bool bVar0;
	struct<2> Var1;

	if (iParam1 < 1)
	{
		return false;
	}
	bVar0 = func_69();
	if (!func_181(bVar0))
	{
		return false;
	}
	if (!func_222(bVar0))
	{
		return false;
	}
	if (func_223(bVar0))
	{
		return false;
	}
	Var1 = -1;
	Var1.f_1 = -1;
	if (!func_224(&Var1, bVar0, iParam1, 1, 0, 0, 0, -1, 0))
	{
		return false;
	}
	*iParam0 = Var1;
	func_225(*iParam0);
	if (!func_226(&Var1))
	{
		return false;
	}
	return true;
}

bool func_172(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = 4;
	while (iVar0 >= 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_2[iVar0 /*3*/]), &(uParam0->f_2[(iVar0 - 1) /*3*/]), 3);
		iVar0 = (iVar0 + -1);
	}
	uParam0->f_2[0 /*3*/] = iParam1;
	uParam0->f_2[0 /*3*/].f_1 = iParam2;
	uParam0->f_2[0 /*3*/].f_2 = iParam3;
	return true;
}

void func_173(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6.f_392, iParam1);
}

bool func_174()
{
	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_227(2.378876E+29f)))
	{
		return false;
	}
	return NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_227(2.378876E+29f));
}

int func_175(var uParam0, float fParam1)
{
	return func_228(uParam0, func_86(fParam1));
}

void func_176(var uParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = { func_113(fParam1) };
	func_229(uParam0, Var0, Var0.f_1);
}

void func_177(var uParam0, float fParam1)
{
	func_231(uParam0, func_230(fParam1));
}

void func_178(char* sParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;

	bVar0 = func_71();
	iVar1 = 0;
	if (func_232(bVar0, &iVar3))
	{
		sVar2 = func_86(-2.323013E-27f);
		iVar1 = 0;
	}
	else if (func_233(bVar0, &iVar3))
	{
		sVar2 = func_86(-5.105137E+09f);
		iVar1 = func_235(func_234(bVar0, iVar3, 0, 1));
	}
	else
	{
		sVar2 = func_86(-5.314265E-05f);
		iVar1 = func_235(func_236());
	}
	StringCopy(sParam0, MISC::VAR_STRING(2, sVar2, iVar1), 128);
}

void func_179(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6.f_392.f_4, sParam1);
}

void func_180(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_6.f_392.f_5, bParam1);
}

bool func_181(bool bParam0)
{
	return bParam0 != 0;
}

bool func_182()
{
	bool bVar0;
	int iVar1;
	var uVar2;

	bVar0 = func_71();
	if (!func_222(bVar0))
	{
		return false;
	}
	if (func_232(bVar0, &iVar1))
	{
		return true;
	}
	else if (func_233(bVar0, &iVar1) && func_237(bVar0, iVar1, &uVar2, 1, 0))
	{
		return true;
	}
	else
	{
		return func_237(bVar0, func_238(bVar0, 0, 0, -1, 1), &uVar2, 1, 0);
	}
	return false;
}

bool func_183(var uParam0, int iParam1)
{
	bool bVar0;
	struct<12> Var1;
	struct<2> Var19;
	int iVar29;
	bool bVar30;

	bVar0 = func_71();
	if (!func_181(bVar0))
	{
		return false;
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0))
	{
		return false;
	}
	if (!func_222(bVar0))
	{
		return false;
	}
	if (func_223(bVar0))
	{
		return false;
	}
	Var1.f_9 = 1;
	Var1.f_11 = -5.45926E-19f;
	Var19 = -1;
	Var19.f_1 = -1;
	iVar29 = func_238(bVar0, 0, 0, -1, 1);
	bVar30 = func_239(bVar0, iVar29, 0);
	uParam0->f_481.f_1 = func_240(bVar30);
	uParam0->f_481.f_2 = func_241(bVar30);
	if (!func_242(&Var19, bVar0, &Var1, 0, iVar29, -1, 0))
	{
		return false;
	}
	*iParam1 = Var19;
	func_225(*iParam1);
	if (!func_226(&Var19))
	{
		return false;
	}
	if (iVar29 != 0)
	{
		uParam0->f_481 = bVar30;
	}
	return true;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_243(Global_1292096.f_2983);
		case 1:
			return func_243(Global_1292096.f_2984);
		default:
			break;
	}
	return -1;
}

int func_185(int iParam0)
{
	int iVar0;

	if (!func_244(iParam0))
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_246(iParam0, 1);
	}
	return 0;
}

int func_186(var uParam0, int iParam1, bool bParam2)
{
	func_247(uParam0, iParam1);
	uParam0->f_1 = 6.091255E-25f;
	if (func_134())
	{
		func_248(uParam0, iParam1, 1, 1);
	}
	else
	{
		func_249(uParam0);
	}
	return 1;
}

bool func_187(var uParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	var uVar10;

	iVar9 = func_94(uParam0);
	if (iParam2 >= iVar9)
	{
		MemCopy(&cVar1, {cLocal_35}, 8);
		StringIntConCat(&cVar1, iParam2, 64);
		uVar10 = 23;
		if (!func_250(&uVar10, uParam0->f_6.f_4, cVar1, cParam1))
		{
			return false;
		}
		if (!func_251(uParam0, &uVar10, -0.9081141f))
		{
			return false;
		}
	}
	else if (func_96(uParam0, iParam2, &iVar0))
	{
		if (!func_252(iVar0, cParam1))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_188(var uParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_392.f_6, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_392.f_7, iParam2);
}

void func_189(var uParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_392.f_10, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_392.f_11, iParam2);
}

bool func_190(var uParam0)
{
	return func_253(*uParam0, 1);
}

void func_191(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_192(var uParam0, bool bParam1)
{
	if (bParam1 || !func_190(uParam0))
	{
		func_194(uParam0);
	}
}

int func_193(var uParam0)
{
	if (!func_190(uParam0))
	{
		return 0;
	}
	if (func_254(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1148846080));
	}
	return (func_255() - BUILTIN::ROUND((uParam0->f_1 * 1148846080)));
}

void func_194(var uParam0)
{
	func_256(uParam0, 0f);
}

bool func_195(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID((*uParam0)[iVar1 /*2*/]))
		{
			return false;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT((*uParam0)[iVar1 /*2*/], iParam1);
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID((uParam0[iVar1 /*2*/])->f_1))
		{
			return false;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0[iVar1 /*2*/])->f_1, iParam1 <= iParam2);
		iParam1++;
		iVar1++;
	}
	return true;
}

bool func_196(int iParam0, int iParam1)
{
	return func_137(iParam0) >= iParam1;
}

bool func_197(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar52;
	int iVar53;
	int iVar54;

	func_257(&uVar0, iParam2, bParam3);
	iVar53 = func_258(0, iParam2);
	iVar54 = 0;
	while (iVar54 < iVar53)
	{
		bVar52 = func_259(0, iParam2, iVar54);
		if (!func_260(&uVar0, iParam2, bParam3, bVar52))
		{
		}
	else
	{
		}
		else
		{
			iVar54++;
		}
	}
	if (!func_261(uParam0, &uVar0, iParam1))
	{
	}
	return true;
}

bool func_198(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	bool bVar53;
	int iVar54;
	int iVar55;
	bool bVar56;
	int iVar57;

	iVar0 = 0;
	iVar54 = func_258(1, iParam2);
	bVar56 = false;
	iVar57 = 0;
	while (iVar57 < 2)
	{
		bVar56 = false;
		func_262(&uVar1);
		func_186(&uVar1, iParam2, bParam3);
		if (iVar54 > 0)
		{
			while (!bVar56)
			{
				if (iVar55 >= iVar54)
				{
					bVar56 = true;
				}
				else
				{
					bVar53 = func_259(1, iParam2, iVar55);
					iVar55++;
					if (!func_263(&uVar1, iParam2, bParam3, bVar53))
					{
					}
					else
					{
						bVar56 = true;
					}
				}
			}
		}
		if (!func_264(5, 2, iParam1, iVar57, &iVar0))
		{
			return false;
		}
		if (!func_187(uParam0, &uVar1, iVar0))
		{
			return false;
		}
		iVar57++;
	}
	return true;
}

int func_199(var uParam0)
{
	return *uParam0;
}

bool func_200(var uParam0)
{
	if (uParam0->f_4)
	{
		uParam0->f_4 = 0;
		return true;
	}
	if (uParam0->f_6 != uParam0->f_2)
	{
		return true;
	}
	if (uParam0->f_7 != uParam0->f_3)
	{
		return true;
	}
	if (uParam0->f_5 != uParam0->f_1)
	{
		return true;
	}
	return false;
}

void func_201(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_202(float fParam0, float fParam1, float fParam2)
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

bool func_203(var uParam0)
{
	return uParam0->f_15;
}

void func_204(var uParam0)
{
	uParam0->f_15 = 0;
}

int func_205(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_206(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_3.f_1);
}

void func_207(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3.f_1, bParam1);
}

char* func_208(var uParam0, int iParam1)
{
	return func_120(*(uParam0[iParam1 /*17*/]));
}

void func_209(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, sParam1);
}

void func_210(var uParam0, int iParam1)
{
	(uParam0[iParam1 /*17*/])->f_16 = 1;
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_265(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_212(var uParam0, var uParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_387, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -4.784936E+08f));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_388, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -1.062502E+14f));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6.f_389, DATABINDING::_0x6329C34BEE5BFF4B(*uParam1, 198470f));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_6.f_390, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(*uParam1, -2.850148E+35f));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_391, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 1.828305E+37f));
	return 1;
}

int func_213(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	iVar0 = func_137(0);
	if (iParam1 <= iVar0)
	{
		return func_266(uParam0, iParam1);
	}
	else if (iParam1 == iVar0 + 1)
	{
		func_267(iParam1, &sVar1, &sVar2);
		return func_268(uParam0, iParam1, sVar1, sVar2);
	}
	else
	{
		return func_269(uParam0, iParam1);
	}
	return 0;
}

int func_214(int iParam0, int iParam1, int iParam2)
{
	char cVar0[128];
	var uVar16;

	StringCopy(&cVar0, func_270(iParam0), 128);
	StringConCat(&cVar0, func_270(iParam1), 128);
	StringConCat(&cVar0, func_270(iParam2), 128);
	if (!MISC::STRING_TO_INT(&cVar0, &uVar16))
	{
		return -1;
	}
	return uVar16;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_1 = iParam3;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam4;
	uParam0->f_4 = 0;
}

int func_216()
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_227(1.689675E+21f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_227(1.689675E+21f)))
	{
		return 0;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_227(-3.629249E+19f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_227(-3.629249E+19f)))
	{
		return 2;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_227(1.76871E+20f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_227(1.76871E+20f)))
	{
		return 1;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_227(0.0002656324f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_227(0.0002656324f)))
	{
		return 3;
	}
	return 1;
}

char* func_217(float fParam0)
{
	return MISC::VAR_STRING(2, func_86(fParam0));
}

int func_218(var uParam0, char* sParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3.f_2, sParam1);
	return 1;
}

int func_219(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 3.218987E-15f);
}

int func_220(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3.f_2, HUD::GET_STRING_FROM_HASH_KEY(iParam1));
	return 1;
}

int func_221(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3.f_2, "");
	return 1;
}

bool func_222(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_223(bool bParam0)
{
	int iVar0;

	if (!func_181(bParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_2012)
	{
		if (Global_1292096.f_2012.f_1[iVar0 /*24*/].f_4 == bParam0 && Global_1292096.f_2012.f_1[iVar0 /*24*/].f_5 == 0)
		{
			return NETWORK::_0xE10F2D7715ABABEC(&(Global_1292096.f_2012.f_1[iVar0 /*24*/]));
		}
		iVar0++;
	}
	return false;
}

bool func_224(int* iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<18> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_242(iParam0, bParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return false;
	}
	func_271(Var0);
	return true;
}

void func_225(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	TELEMETRY::_TELEMETRY_SET_SHOP_FOR_TRANSACTION(iParam0, -8.522482E-18f, -8.522482E-18f);
}

bool func_226(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_159(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_159(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_159(*iParam0, 2, 0, 0);
		return false;
	}
	func_159(*iParam0, 1, 0, 0);
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

int func_227(float fParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_118();
	Var0.f_2 = 15;
	Var0.f_3 = func_74(0);
	Var0.f_4 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return func_272(fParam0);
	}
	return uVar5;
}

int func_228(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];
	int iVar17;

	iVar0 = uParam0->f_6.f_392.f_1;
	iVar17 = 0;
	while (iVar17 < iVar0)
	{
		StringCopy(&cVar1, sParam1, 128);
		StringIntConCat(&cVar1, iVar17 + 1, 128);
		if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar1))
		{
			func_273(&(uParam0->f_6.f_392.f_1), "", iVar17);
		}
		else
		{
			if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6.f_392.f_1[iVar17]))
			{
				return 0;
			}
			if (!func_273(&(uParam0->f_6.f_392.f_1), func_274(&cVar1), iVar17))
			{
				return 0;
			}
		}
		iVar17++;
	}
	return 1;
}

void func_229(var uParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_392.f_8, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_392.f_9, iParam2);
}

int func_230(float fParam0)
{
	return MISC::GET_HASH_KEY(func_86(fParam0));
}

void func_231(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6.f_392.f_12, iParam1);
}

bool func_232(bool bParam0, int iParam1)
{
	*iParam1 = func_275(bParam0, 1);
	return *iParam1 != 0;
}

bool func_233(bool bParam0, int iParam1)
{
	*iParam1 = func_276(bParam0, 1, 0);
	return *iParam1 != 0;
}

int func_234(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_277(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_235(int iParam0)
{
	return (iParam0 / 100);
}

int func_236()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_71();
	if (!func_181(bVar0))
	{
		return 0;
	}
	iVar1 = -1;
	iVar2 = func_238(bVar0, 0, 0, iVar1, 1);
	if (iVar2 == 0)
	{
		return 0;
	}
	return func_234(bVar0, iVar2, 1, 1);
}

bool func_237(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_277(bParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_278(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_279(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_280(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_281(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_282(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

int func_238(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_222(bParam0))
	{
		return 0;
	}
	bVar1 = func_283(iParam3, 2);
	bVar2 = func_284(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_284(bParam0, -982726.7f, bVar1);
	if (func_284(bParam0, 0.003804697f, bVar1))
	{
		iParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_232(bParam0, &fVar0) || func_233(bParam0, &fVar0)))
	{
		iParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_285())
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
	else if (func_286(15) && func_284(bParam0, 1.109321E-25f, bVar1))
	{
		iParam1 = 1.109321E-25f;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

int func_239(bool bParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_277(bParam0, iParam1, &Var0, &iVar31, bParam2, 1))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_287(Var0[iVar32 /*2*/]))
		{
			return Var0[iVar32 /*2*/];
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

float func_240(bool bParam0)
{
	if (!func_287(bParam0))
	{
		return 0;
	}
	if (func_288(bParam0))
	{
		return -4.07217E-32f;
	}
	if (func_289(bParam0, -3.639815E-14f))
	{
		return -6.335257E+35f;
	}
	if (func_289(bParam0, -3.567722E+12f))
	{
		return -5.414914E+13f;
	}
	if (func_289(bParam0, 2.768968E+15f))
	{
		return 5.15176E-06f;
	}
	if (func_289(bParam0, 5.250853E+36f))
	{
		return -1.128444E-20f;
	}
	return 1.335924E-32f;
}

int func_241(bool bParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	iVar0 = -1;
	if (!func_287(bParam0))
	{
		return iVar0;
	}
	iVar0 = 2.799884E-36f;
	Var1 = { func_290(bParam0, 0, 0) };
	Var6 = { func_291(bParam0, Var1, Var1.f_4, 0) };
	if (!func_292(&Var6))
	{
		return -1;
	}
	if (func_293(Var6))
	{
		iVar0 = 1.074468E-35f;
	}
	return iVar0;
}

bool func_242(int* iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_294(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_238(bParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_295(bParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_17 = bParam1;
	uParam2->f_8 = bParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 3787186f;
	if (!func_296(iParam0, *uParam2, 1.704487E-19f, iParam3))
	{
		return false;
	}
	if (COLLECTION::_0x9ADEE485726025D4(bParam1) != 0)
	{
		if (Global_1292096.f_20.f_422 != -1)
		{
		}
		Global_1292096.f_20.f_422.f_1 = bParam1;
		Global_1292096.f_20.f_422 = iParam0->f_1;
	}
	return true;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CHARACTER_RANK"):
			return 0;
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
			return 7;
		case joaat("CHARACTER_RANK_COLLECTOR"):
			return 12;
		case joaat("CHARACTER_RANK_TRADER"):
			return 11;
		case joaat("CHARACTER_RANK_SEASON_005"):
			return 13;
		case joaat("CHARACTER_RANK_VIP_SEASON_005"):
			return 14;
		case joaat("CHARACTER_RANK_MOONSHINER"):
			return 15;
		case joaat("CHARACTER_RANK_SEASON_006"):
			return 16;
		case joaat("CHARACTER_RANK_VIP_SEASON_006"):
			return 17;
		case -296143963:
			return 18;
		case -575193412:
			return 19;
		case 1364208910:
			return 20;
		case 1936286816:
			return 21;
		case -361115047:
			return 22;
		case -874931455:
			return 23;
		case -1692024648:
			return 24;
		case -1371940008:
			return 25;
		case -108990605:
			return 26;
		case -122883667:
			return 27;
		case -2093379718:
			return 28;
		case -362851054:
			return 29;
		case -244323351:
			return 30;
		case 1314790674:
			return 31;
		case -550123659:
			return 32;
		case 944566512:
			return 33;
		case 1589331582:
			return 34;
		case 721639005:
			return 35;
		case 1289855691:
			return 36;
		default:
			break;
	}
	return -1;
}

bool func_244(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 36)
	{
		return false;
	}
	return true;
}

int func_245(int iParam0)
{
	if (!func_244(iParam0))
	{
		return 0;
	}
	return Global_1292096.f_3024[iParam0];
}

int func_246(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_244(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		bVar0 = func_297(iParam0);
		if (func_72(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_298(255);
			}
			else
			{
				iVar1 = func_300(bVar0, func_299(1), -2.696814E-33f, 1, 0, 0);
			}
			Global_1292096.f_3024[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		bVar0 = func_301(iParam0);
		if (func_72(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_300(bVar0, func_299(1), -2.696814E-33f, 1, 0, 0);
			}
			Global_1292096.f_2986[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_247(var uParam0, int iParam1)
{
	*uParam0 = 2.767335E+22f;
	uParam0->f_31 = iParam1;
	func_267(iParam1, &(uParam0->f_32), &(uParam0->f_33));
}

void func_248(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2)
	{
		if (bParam3)
		{
			uParam0->f_1 = 1.323239E-33f;
		}
		else
		{
			uParam0->f_1 = 2.350999E-24f;
		}
	}
	else if (bParam3)
	{
		uParam0->f_1 = 2.24807E-14f;
	}
	else
	{
		uParam0->f_1 = 648.3591f;
	}
	uParam0->f_19 = (iParam1 == func_137(0) + 1 && func_302());
	if (!uParam0->f_19)
	{
		return;
	}
	uParam0->f_20 = func_303(1);
	iVar0 = func_304(1);
	switch (func_305())
	{
		case -570078785:
			StringCopy(&(uParam0->f_3), MISC::VAR_STRING(2, func_86(9.198648E+23f), func_235(iVar0)), 128);
			break;
		default:
			StringCopy(&(uParam0->f_3), MISC::VAR_STRING(10, func_86(9.198648E+23f), func_306(iVar0)), 128);
			break;
	}
}

void func_249(var uParam0)
{
	func_178(&(uParam0->f_3));
	uParam0->f_19 = func_307();
	uParam0->f_20 = 1;
	uParam0->f_21 = -8.310278E+29f;
}

bool func_250(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam1))
	{
		return false;
	}
	(*uParam0)[0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	(*uParam0)[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], 7.669176E-25f, *cParam10);
	(*uParam0)[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], 1.29661E-33f, cParam10->f_1);
	(*uParam0)[3] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH((*uParam0)[0], 4.126364E+16f, cParam10->f_2);
	(*uParam0)[8] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], 3.859434E-23f, cParam10->f_22);
	(*uParam0)[9] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], 0.6123784f, cParam10->f_23);
	(*uParam0)[10] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], NaNf, cParam10->f_24);
	(*uParam0)[11] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], -3.796351E+19f, cParam10->f_25);
	(*uParam0)[12] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], -4.784936E+08f, cParam10->f_26);
	(*uParam0)[13] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], -1.062502E+14f, cParam10->f_27);
	(*uParam0)[14] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH((*uParam0)[0], -3.737055E-28f, cParam10->f_28);
	(*uParam0)[15] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH((*uParam0)[0], 1.926786E+07f, cParam10->f_29);
	(*uParam0)[16] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], 3.218987E-15f, cParam10->f_30);
	(*uParam0)[17] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH((*uParam0)[0], -1.760569E+20f, cParam10->f_31);
	(*uParam0)[18] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH((*uParam0)[0], 1.006992E+32f, cParam10->f_32);
	(*uParam0)[19] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH((*uParam0)[0], -1.247489E+34f, cParam10->f_33);
	(*uParam0)[20] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH((*uParam0)[0], 198470f, &(cParam10->f_34));
	(*uParam0)[21] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH((*uParam0)[0], -2.850148E+35f, cParam10->f_50);
	(*uParam0)[22] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], 1.828305E+37f, cParam10->f_51);
	(*uParam0)[4] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH((*uParam0)[0], -6.6457E-35f, &(cParam10->f_3));
	(*uParam0)[5] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH((*uParam0)[0], -9.135358E+16f, cParam10->f_19);
	(*uParam0)[6] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH((*uParam0)[0], -2.344167E-24f, cParam10->f_20);
	(*uParam0)[7] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], -3.093774E+29f, cParam10->f_21);
	return true;
}

bool func_251(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6.f_4))
	{
		return false;
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID((*uParam1)[0]))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_6.f_4);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_6.f_4, iVar0, iParam2, (*uParam1)[0]);
	return true;
}

bool func_252(int iParam0, char[4] cParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, 7.669176E-25f, *cParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, 1.29661E-33f, cParam1->f_1);
	DATABINDING::_0xBFC83DA249BEFCC9(iParam0, 4.126364E+16f, cParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, 3.859434E-23f, cParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, 0.6123784f, cParam1->f_23);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, NaNf, cParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, -3.796351E+19f, cParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, -4.784936E+08f, cParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, -1.062502E+14f, cParam1->f_27);
	DATABINDING::_0xBFC83DA249BEFCC9(iParam0, -3.737055E-28f, cParam1->f_28);
	DATABINDING::_0xBFC83DA249BEFCC9(iParam0, 1.926786E+07f, cParam1->f_29);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, 3.218987E-15f, cParam1->f_30);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(iParam0, -1.760569E+20f, cParam1->f_31);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(iParam0, 1.006992E+32f, cParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(iParam0, -1.247489E+34f, cParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_STRING_FROM_HASH(iParam0, 198470f, &(cParam1->f_34));
	DATABINDING::_0xBFC83DA249BEFCC9(iParam0, -2.850148E+35f, cParam1->f_50);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, 1.828305E+37f, cParam1->f_51);
	DATABINDING::_DATABINDING_WRITE_STRING_FROM_HASH(iParam0, -6.6457E-35f, &(cParam1->f_3));
	DATABINDING::_0xBFC83DA249BEFCC9(iParam0, -9.135358E+16f, cParam1->f_19);
	DATABINDING::_0xBFC83DA249BEFCC9(iParam0, -2.344167E-24f, cParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iParam0, -3.093774E+29f, cParam1->f_21);
	return true;
}

bool func_253(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_254(var uParam0)
{
	return func_253(*uParam0, 2);
}

int func_255()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_256(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_108() - fParam1);
	func_308(uParam0, 1);
	func_309(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_257(var uParam0, int iParam1, bool bParam2)
{
	func_247(uParam0, iParam1);
	uParam0->f_1 = -5.856513E-15f;
	if (func_134())
	{
		func_248(uParam0, iParam1, 0, 1);
	}
}

int func_258(int iParam0, int iParam1)
{
	return func_312(func_310(iParam0), func_311(iParam0, iParam1));
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	return func_313(func_310(iParam0), func_311(iParam0, iParam1), iParam2);
}

bool func_260(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (func_314(bParam3))
	{
		case 0:
			if (!func_315(bParam3))
			{
				return false;
			}
			func_316(uParam0, iParam1, bParam2, bParam3);
			break;
		case 1:
			if (!func_317(bParam3))
			{
				return false;
			}
			func_318(uParam0, iParam1, bParam2, bParam3);
			break;
		default:
			return false;
	}
	return true;
}

bool func_261(var uParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	var uVar10;

	iVar9 = func_93(uParam0);
	if (iParam2 >= iVar9)
	{
		MemCopy(&cVar1, {cLocal_19}, 8);
		StringIntConCat(&cVar1, iParam2, 64);
		uVar10 = 23;
		if (!func_250(&uVar10, uParam0->f_6.f_3, cVar1, cParam1))
		{
			return false;
		}
		if (!func_319(uParam0, &uVar10, 1.582239E-17f))
		{
			return false;
		}
	}
	else if (func_95(uParam0, iParam2, &iVar0))
	{
		if (!func_252(iVar0, cParam1))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_262(bool bParam0)
{
	var uVar0;

	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, 52);
}

bool func_263(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (func_314(bParam3))
	{
		case 0:
			if (!func_320(bParam3))
			{
				return false;
			}
			func_321(uParam0, iParam1, bParam2, bParam3);
			break;
		case 1:
			if (!func_322(bParam3))
			{
				return false;
			}
			func_323(uParam0, iParam1, bParam2, bParam3);
			break;
		case -1:
			return false;
	}
	return true;
}

bool func_264(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam3 >= iParam1)
	{
		return false;
	}
	*iParam4 = ((iParam0 * iParam3) + iParam2);
	return true;
}

void func_265(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_324(&(uParam0->f_4));
}

int func_266(var uParam0, char* sParam1)
{
	return func_325(&(uParam0->f_6.f_383), MISC::VAR_STRING(2, func_86(11130.72f), sParam1), 1);
}

void func_267(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_137(0);
	iVar1 = func_326(0, iParam0);
	if (iVar0 < iParam0 && iVar1 == 0)
	{
		*uParam1 = 0;
		*uParam2 = 0;
		return;
	}
	iVar2 = func_205((iParam0 - 1), 0, func_116(0));
	iVar3 = func_326(0, iVar2);
	*uParam2 = (iVar1 - iVar3);
	if (iParam0 == iVar0 + 1)
	{
		*uParam1 = (func_327(0) - iVar3);
	}
	else if (iParam0 <= iVar0)
	{
		*uParam1 = *uParam2;
		if (*uParam1 == 0 && *uParam2 == 0)
		{
			*uParam1 = 1;
			*uParam2 = 1;
		}
	}
	else
	{
		*uParam1 = 0;
	}
}

int func_268(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	return func_325(&(uParam0->f_6.f_383), MISC::VAR_STRING(2, func_86(-8.097083E-22f), sParam1, sParam2, sParam3), 1);
}

int func_269(var uParam0, char* sParam1)
{
	return func_325(&(uParam0->f_6.f_383), MISC::VAR_STRING(2, func_86(-120.5201f), sParam1), 0);
}

char* func_270(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

void func_271(struct<18> Param0)
{
	bool bVar0;
	int iVar1;

	bVar0 = Param0.f_17;
	iVar1 = Param0.f_13;
	if (func_328(bVar0, 3.414007E-11f, iVar1, 0, 1) > 0)
	{
		func_329("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

int func_272(float fParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_118();
	Var0.f_2 = 14;
	Var0.f_3 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

bool func_273(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = *uParam0;
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam2 >= iVar0)
	{
		return false;
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID((*uParam0)[iParam2]))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((*uParam0)[iParam2], sParam1);
	return true;
}

char* func_274(char* sParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	vVar0 = { func_331(func_330(), 1) };
	vVar3 = { func_332(func_330(), 1) };
	vVar6 = { func_333(func_330()) };
	return MISC::VAR_STRING(170, sParam0, &vVar0, &vVar3, &vVar6);
}

int func_275(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_334(iVar0, 1, 0);
		if (!func_277(bParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_335(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_282(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

int func_276(bool bParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_334(iVar0, 0, 1);
		if (!func_277(bParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_288(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_282(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

bool func_277(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_222(bParam0))
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
		func_336(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_278(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_337() == 0)
	{
		return func_338(iParam0);
	}
	return iParam0 <= func_339();
}

bool func_279(int iParam0)
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

int func_280(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_289(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_281(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_72(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_299(0) };
	Var0.f_4 = func_340(iParam1);
	Var5 = { func_291(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_341(0), &Var5, false);
	return iVar9;
}

int func_282(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	iVar1 = func_342(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_343(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_344(bParam0, 0);
	}
	if (func_345(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_341(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_346(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_341(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_283(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_284(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_222(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_347(bParam0, iParam1);
	}
	return true;
}

bool func_285()
{
	return Global_1915643.f_22477;
}

bool func_286(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_348(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_287(bool bParam0)
{
	if (func_349(bParam0) == -1.955052E+34f || func_349(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

bool func_288(bool bParam0)
{
	return func_349(bParam0) == -1.955052E+34f;
}

bool func_289(bool bParam0, int iParam1)
{
	if (!func_72(bParam0, 0))
	{
		return func_351(func_350(bParam0), iParam1);
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

struct<5> func_290(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_299(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_342(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_291(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_352(bParam1) };
			if (iParam2 && func_353(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_354(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_354(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_355(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_356(bParam1) };
			switch (func_349(bParam0))
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
			if (func_357(bParam0, -2.580501E-27f))
			{
				Var0 = { func_291(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_357(bParam0, -4.220332E-15f))
			{
				Var0 = { func_291(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_291(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_357(bParam0, -3.171238E-21f))
			{
				Var0 = { func_291(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_358(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_357(bParam0, -3.171238E-21f))
			{
				Var0 = { func_291(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_291(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_72(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_341(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_292(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_293(struct<4> Param0)
{
	if (!func_292(&Param0))
	{
		return false;
	}
	if (func_359(&Param0))
	{
		return false;
	}
	return func_361(func_360(Param0));
}

bool func_294(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_362(iParam0))
		{
			return false;
		}
	}
	if (func_363(&(iParam0->f_6)))
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

int func_295(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_284(bParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_283(iParam2, 2))
	{
		if (func_347(bParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 0;
	}
	if (func_283(iParam2, 8))
	{
		return func_364(bParam0, iParam1);
	}
	return 1;
}

bool func_296(int* iParam0, struct<18> Param1, int iParam19, bool bParam20)
{
	if (iParam19 != 1.704487E-19f)
	{
		return false;
	}
	if (!func_365(Param1))
	{
		return false;
	}
	if (!func_366(iParam0, iParam19))
	{
		return false;
	}
	if (func_367(*iParam0, iParam19, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_368(iParam0, bParam20);
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -6.681918E+13f;
		case 7:
			return -946.1746f;
		case 12:
			return 2.49117E-34f;
		case 11:
			return -4.236482E-12f;
		case 13:
			return 1.219836E-13f;
		case 14:
			return -8.626482E+21f;
		case 15:
			return 9.89104E+10f;
		case 16:
			return 7.705457E+14f;
		case 17:
			return -5.487948E+32f;
		case 18:
			return -1.680517E+28f;
		case 19:
			return -1.650525E+18f;
		case 20:
			return 5.588182E+10f;
		case 21:
			return 1.849123E+31f;
		case 22:
			return -7.550397E+25f;
		case 23:
			return -2.852199E+07f;
		case 24:
			return -1.371075E-22f;
		case 25:
			return -4.225895E-11f;
		case 26:
			return -8.368383E+34f;
		case 27:
			return -2.806178E+34f;
		case 28:
			return -5.453132E-37f;
		case 29:
			return -6.749805E+25f;
		case 30:
			return -1.188034E+30f;
		case 31:
			return 9.316118E+08f;
		case 32:
			return -1.309857E+19f;
		case 33:
			return 4.886178E-05f;
		case 34:
			return 6.747306E+18f;
		case 35:
			return 4.66604E-13f;
		case 36:
			return 1.182982E+08f;
		default:
			break;
	}
	return 0;
}

int func_298(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

struct<4> func_299(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_341(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_291(2.982335E+09f, func_369(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_291(2.982335E+09f, func_369(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_291(2.982335E+09f, func_369(), -5.45926E-19f, bParam0);
}

int func_300(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_72(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_345(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_291(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_341(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_341(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1387.259f;
		case 7:
			return -7.269578E+24f;
		case 12:
			return -0.1123552f;
		case 11:
			return -1.825874E+15f;
		case 13:
			return -7.688707E+33f;
		case 14:
			return -1.036406E-27f;
		case 15:
			return -1.593099E-34f;
		case 16:
			return 2.135512E-13f;
		case 17:
			return -1.266827E+21f;
		case 18:
			return -3.254795E+24f;
		case 19:
			return 1.097937E+13f;
		case 20:
			return -3.331883E-09f;
		case 21:
			return 7.472092E-07f;
		case 22:
			return -1.384808E+32f;
		case 23:
			return 1.187948E-35f;
		case 24:
			return NaNf;
		case 25:
			return 0.02791043f;
		case 26:
			return 9.834264E-23f;
		case 27:
			return -1.650117E+25f;
		case 28:
			return -2.281791E-36f;
		case 29:
			return -3.724133E+22f;
		case 30:
			return -6.204737E-11f;
		case 31:
			return -1.286095E+12f;
		case 32:
			return 9.732989E-28f;
		case 33:
			return -4.955405f;
		case 34:
			return 3.41779E-37f;
		case 35:
			return -4.213494E-08f;
		case 36:
			return 0.04164011f;
		default:
			break;
	}
	return 0;
}

bool func_302()
{
	int iVar0;

	if (!func_370())
	{
		return false;
	}
	if (!func_134())
	{
		return false;
	}
	iVar0 = func_238(-1.417311E-09f, 0, 0, -1, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	return true;
}

bool func_303(int iParam0)
{
	bool bVar0;
	var uVar1;

	bVar0 = func_69();
	return func_237(bVar0, func_238(bVar0, 0, 1, -1, 0), &uVar1, 1, 0);
}

int func_304(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_69();
	iVar1 = func_234(bVar0, func_238(bVar0, 0, 1, -1, 0), 1, 1);
	if (iParam0 < 1)
	{
		return iVar1;
	}
	return (iVar1 * iParam0);
}

int func_305()
{
	return func_238(func_69(), 0, 1, -1, 0);
}

char* func_306(int iParam0)
{
	char cVar0[16];

	StringCopy(&cVar0, func_371(iParam0), 16);
	StringConCat(&cVar0, ".", 16);
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(func_372(iParam0)) < 2)
	{
		StringConCat(&cVar0, "0", 16);
	}
	StringConCat(&cVar0, func_372(iParam0), 16);
	return func_373(cVar0);
}

int func_307()
{
	bool bVar0;

	if (!func_370())
	{
		return 0;
	}
	bVar0 = func_71();
	if (func_284(bVar0, -982726.7f, 1))
	{
		return 1;
	}
	if (func_284(bVar0, -2.401104E+18f, 1))
	{
		return 1;
	}
	if (func_284(bVar0, 0.003804697f, 1))
	{
		return 1;
	}
	return 0;
}

void func_308(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_309(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_310(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;

	iVar0 = func_74(0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = func_118();
	switch (iParam0)
	{
		case 0:
			Var1.f_2 = 6;
			break;
		case 1:
			Var1.f_2 = 7;
			break;
	}
	Var1.f_3 = iVar0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar6, &Var1))
	{
		return 0;
	}
	return uVar6;
}

bool func_311(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	if (iParam1 < 1)
	{
		return false;
	}
	if (iParam1 > func_116(iParam0))
	{
		return false;
	}
	iVar0 = (iParam1 - 1);
	if (!func_374(func_184(iParam0), iVar0, &vVar1))
	{
		return false;
	}
	return vVar1.z;
}

int func_312(int iParam0, bool bParam1)
{
	struct<4> Var0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam0, bParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_3;
}

int func_313(int iParam0, bool bParam1, int iParam2)
{
	struct<4> Var0;
	var uVar4;
	var uVar5;
	var uVar6;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam0, bParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_3 < 1)
	{
		return 0;
	}
	if (!func_375(bParam1, iParam0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam0, bParam1, iParam2, &uVar4, &uVar5, &uVar6))
	{
		return 0;
	}
	return uVar4;
}

int func_314(bool bParam0)
{
	return func_376(bParam0);
}

bool func_315(bool bParam0)
{
	if (!func_72(bParam0, 0))
	{
		return false;
	}
	if (func_377(bParam0, 0) != 3)
	{
		return false;
	}
	return true;
}

void func_316(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<733> Var0;

	if (!func_72(bParam3, 0))
	{
		return;
	}
	func_247(uParam0, iParam1);
	func_378(uParam0, iParam1, bParam2);
	uParam0->f_26 = func_379(bParam3);
	uParam0->f_27 = func_380(bParam3);
	uParam0->f_30 = func_381(bParam3);
	Var0.f_8 = 10;
	Var0.f_8.f_1.f_4 = 15;
	Var0.f_8.f_1.f_36 = 10;
	Var0.f_8.f_1.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_480 = 10;
	Var0.f_480.f_1.f_4 = 10;
	Var0.f_480.f_1.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_732.f_2 = 5;
	Var0.f_732.f_18 = 8;
	if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_BY_NAME(bParam3, &Var0))
	{
		func_382(uParam0, &(Var0.f_732.f_2));
	}
}

bool func_317(bool bParam0)
{
	return true;
}

void func_318(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<19> Var0;

	if (bParam3 == 0)
	{
		return;
	}
	func_247(uParam0, iParam1);
	func_378(uParam0, iParam1, bParam2);
	uParam0->f_30 = func_383(bParam3);
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (func_384(bParam3, &Var0))
	{
		uParam0->f_26 = Var0;
		uParam0->f_27 = Var0.f_1;
		func_382(uParam0, &(Var0.f_2));
	}
}

bool func_319(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6.f_3))
	{
		return false;
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID((*uParam1)[0]))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_6.f_3);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_6.f_3, iVar0, iParam2, (*uParam1)[0]);
	return true;
}

bool func_320(bool bParam0)
{
	if (!func_72(bParam0, 0))
	{
		return false;
	}
	if (func_377(bParam0, 0) != 3)
	{
		return false;
	}
	return true;
}

void func_321(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<733> Var0;

	if (!func_72(bParam3, 0))
	{
		return;
	}
	func_247(uParam0, iParam1);
	func_385(uParam0, iParam1, bParam2);
	uParam0->f_26 = func_379(bParam3);
	uParam0->f_27 = func_380(bParam3);
	uParam0->f_30 = func_381(bParam3);
	Var0.f_8 = 10;
	Var0.f_8.f_1.f_4 = 15;
	Var0.f_8.f_1.f_36 = 10;
	Var0.f_8.f_1.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_480 = 10;
	Var0.f_480.f_1.f_4 = 10;
	Var0.f_480.f_1.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_732.f_2 = 5;
	Var0.f_732.f_18 = 8;
	if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_BY_NAME(bParam3, &Var0))
	{
		func_382(uParam0, &(Var0.f_732.f_2));
	}
}

bool func_322(bool bParam0)
{
	if (!func_222(bParam0))
	{
		return false;
	}
	return true;
}

void func_323(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<19> Var0;

	if (bParam3 == 0)
	{
		return;
	}
	func_247(uParam0, iParam1);
	func_385(uParam0, iParam1, bParam2);
	uParam0->f_30 = func_383(bParam3);
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (func_384(bParam3, &Var0))
	{
		uParam0->f_26 = Var0;
		uParam0->f_27 = Var0.f_1;
		func_382(uParam0, &(Var0.f_2));
	}
}

void func_324(var uParam0)
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

int func_325(var uParam0, char* sParam1, bool bParam2)
{
	if (!*uParam0)
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_2, bParam2);
	return 1;
}

int func_326(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (iParam1 - 1);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_374(func_184(iParam0), iVar0, &Var1))
	{
		return 0;
	}
	return Var1.f_1;
}

int func_327(int iParam0)
{
	return func_386(func_184(iParam0));
}

int func_328(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_277(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
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

void func_329(char* sParam0, char* sParam1, bool bParam2)
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

int func_330()
{
	int iVar0;

	if (func_174())
	{
		if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_227(-1.719866E+24f)))
		{
			if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-6.484858E+21f, func_227(-1.719866E+24f), &iVar0))
			{
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_227(-2.082868E-15f)))
	{
		if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-6.484858E+21f, func_227(-2.082868E-15f), &iVar0))
		{
		}
	}
	else
	{
		iVar0 = func_387(7.383157E-05f);
	}
	return iVar0;
}

Vector3 func_331(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar6[24];

	NETWORK::CONVERT_POSIX_TIME(iParam0, &vVar0);
	if (bParam1)
	{
		StringCopy(&cVar6, "SR_DAY_", 24);
		StringIntConCat(&cVar6, vVar0.z, 24);
		StringCopy(&cVar6, MISC::VAR_STRING(2, &cVar6), 24);
		return cVar6;
	}
	StringCopy(&cVar6, func_270(vVar0.z), 24);
	return cVar6;
}

Vector3 func_332(int iParam0, bool bParam1)
{
	struct<2> Var0;
	vector3 vVar6[24];

	NETWORK::CONVERT_POSIX_TIME(iParam0, &Var0);
	if (bParam1)
	{
		StringCopy(&cVar6, "MONTH_", 24);
		StringIntConCat(&cVar6, Var0.f_1, 24);
		StringCopy(&cVar6, MISC::VAR_STRING(2, &cVar6), 24);
		return cVar6;
	}
	StringCopy(&cVar6, func_270(Var0.f_1), 24);
	return cVar6;
}

Vector3 func_333(int iParam0)
{
	int iVar0;
	vector3 vVar6[24];

	NETWORK::CONVERT_POSIX_TIME(iParam0, &iVar0);
	StringCopy(&cVar6, func_270(iVar0), 24);
	return cVar6;
}

int func_334(int iParam0, bool bParam1, bool bParam2)
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

bool func_335(bool bParam0)
{
	return func_349(bParam0) == 4.029065E+31f;
}

void func_336(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_349((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_337()
{
	return Global_1572887.f_14;
}

bool func_338(int iParam0)
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

int func_339()
{
	if (func_337() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

float func_340(int iParam0)
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

int func_341(bool bParam0)
{
	if (func_337() == -1)
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

int func_342(bool bParam0)
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

bool func_343(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_72(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_342(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_289(bParam0, 9.811189E+11f))
	{
		func_388(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_344(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_389(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_390(&Var0, func_352(0));
	}
	if (!func_391(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_392(iVar18);
	return iVar19;
}

int func_345(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_393(func_350(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

struct<4> func_346(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_290(bParam0, bParam1, 0) };
	return func_291(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_347(bool bParam0, int iParam1)
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

bool func_348(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

int func_349(bool bParam0)
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

bool func_350(bool bParam0)
{
	return bParam0;
}

int func_351(bool bParam0, int iParam1)
{
	if (!func_393(bParam0, 2))
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

struct<4> func_352(bool bParam0)
{
	int iVar0;

	iVar0 = func_341(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_291(8.681942E-06f, func_299(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_291(8.681942E-06f, func_299(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_291(8.681942E-06f, func_299(bParam0), -1.942248E+12f, 0);
}

int func_353(bool bParam0, bool bParam1)
{
	if (func_349(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_394();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_354(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_300(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_355(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_395(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_356(bool bParam0)
{
	int iVar0;

	iVar0 = func_341(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_291(3.507197E-29f, func_299(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_291(3.507197E-29f, func_299(bParam0), 12999093, 0);
}

bool func_357(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_349(bParam0);
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
			if (func_396(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_358(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_397(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_359(var uParam0)
{
	if (!func_292(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_360(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_292(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

bool func_361(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_398()) > iParam0;
}

bool func_362(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_399(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_363(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_364(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -2.401104E+18f)
	{
		iVar0 = func_234(bParam0, -2.401104E+18f, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_279(iVar0))
		{
			if (Global_1915643.f_20644)
			{
				func_400(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_235(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -982726.7f)
	{
		iVar1 = func_234(bParam0, -982726.7f, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_278(iVar1))
		{
			if (Global_1915643.f_20644)
			{
				func_400("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 0.003804697f)
	{
		return 1;
	}
	if (!func_237(bParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_365(struct<18> Param0)
{
	if (!func_222(Param0.f_17))
	{
		return false;
	}
	return true;
}

bool func_366(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_401(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_226(iParam0))
		{
			return false;
		}
		if (!func_401(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_367(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_368(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_226(iParam0);
	}
	return true;
}

struct<4> func_369()
{
	struct<4> Var0;

	return Var0;
}

bool func_370()
{
	switch (func_216())
	{
		case 1:
		case 3:
			return false;
	}
	return true;
}

char* func_371(int iParam0)
{
	iParam0 = (iParam0 / 100);
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

char* func_372(int iParam0)
{
	iParam0 = (iParam0 % 100);
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_270(iParam0);
}

char* func_373(char[4] cParam0, char[4] cParam1)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_374(int iParam0, int iParam1, int* iParam2)
{
	struct<5> Var0;

	Var0 = Global_1149417.f_3;
	Var0.f_2 = 2.381558E-26f;
	Var0.f_3 = func_402(iParam0);
	Var0.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -1.365532E+35f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam2, &Var0);
		Var0.f_2 = -1.438058E+22f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(iParam2->f_1), &Var0);
		Var0.f_2 = -2.353784E-22f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(iParam2->f_2), &Var0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_375(bool bParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_SHOP_LAYOUT_KEY_VALID(iParam1))
	{
		return false;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_INFO(iParam1, &Var1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Var1.f_3)
	{
		ITEMDATABASE::_0xDBEADA0DF5F9AB9F(iParam1, iVar0, &iVar5);
		if (iVar5 == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_376(bool bParam0)
{
	if (func_222(bParam0))
	{
		return 1;
	}
	else if (func_72(bParam0, 0))
	{
		return 0;
	}
	return -1;
}

int func_377(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_72(bParam0, 0) && !func_393(func_350(bParam0), 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		iVar0 = func_403(0);
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 3.272964E+34f)
	{
		if (func_289(bParam0, -1.146799E+34f))
		{
			return 2;
		}
	}
	else if (iVar0 == 4.387347E-38f)
	{
		if (func_289(bParam0, -3.437357E+28f))
		{
			return 2;
		}
	}
	return 3;
}

void func_378(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_1 = 1.160968E+37f;
	uParam0->f_28 = !bParam2;
	uParam0->f_29 = bParam2;
	if (!uParam0->f_28 && uParam0->f_29)
	{
		uParam0->f_2 = 1;
	}
	if (!bParam2)
	{
		StringCopy(&(uParam0->f_34), MISC::VAR_STRING(2, func_86(-9.0963E-19f), sParam1), 128);
		uParam0->f_50 = 1;
	}
	if (func_134())
	{
		func_248(uParam0, sParam1, 0, 0);
	}
}

bool func_379(bool bParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	if (!func_72(bParam0, 0))
	{
		return false;
	}
	if (func_289(bParam0, -7.13245E+27f))
	{
		return func_404(bParam0);
	}
	else if (func_405(bParam0) && !func_289(bParam0, -0.4876374f))
	{
		iVar1 = func_406(bParam0);
		iVar2 = func_407(iVar1);
		sVar0 = func_408(iVar2);
		if (func_409(sVar0))
		{
			return MISC::GET_HASH_KEY(sVar0);
		}
	}
	else
	{
		sVar0 = HUD::GET_STRING_FROM_HASH_KEY(func_410(bParam0, 0));
		return func_410(bParam0, 0);
	}
	return false;
}

int func_380(bool bParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	if (!func_72(bParam0, 0))
	{
		return 0;
	}
	if (func_405(bParam0))
	{
		iVar1 = func_406(bParam0);
		iVar2 = func_407(iVar1);
		sVar0 = func_411(iVar2);
		if (func_409(sVar0))
		{
			return MISC::GET_HASH_KEY(sVar0);
		}
	}
	else
	{
		sVar0 = HUD::GET_STRING_FROM_HASH_KEY(func_412(bParam0));
		return func_412(bParam0);
	}
	return 0;
}

int func_381(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_72(bParam0, 0))
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
			if (Var0.f_18[iVar35 /*2*/].f_1 == -7.07921E-30f)
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

void func_382(var uParam0, var uParam1)
{
	switch (func_413(uParam1, 4.975531E-10f, &(uParam0->f_22), &(uParam0->f_23), 0))
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 0:
			break;
	}
	switch (func_413(uParam1, -1.888989E+38f, &(uParam0->f_24), &(uParam0->f_25), 0))
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 0:
			break;
	}
}

int func_383(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_222(bParam0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (func_384(bParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == -7.07921E-30f)
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

bool func_384(bool bParam0, var uParam1)
{
	return ITEMDATABASE::_0xF8D09EF8CE61D7BF(bParam0, uParam1);
}

void func_385(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_1 = -2.279827E-32f;
	if (!bParam2 || !func_134())
	{
		uParam0->f_28 = 1;
	}
	if (bParam2 && func_134())
	{
		uParam0->f_29 = 1;
	}
	if (bParam2 && func_134())
	{
		uParam0->f_2 = 1;
	}
	if (func_134())
	{
		if (!bParam2)
		{
			StringCopy(&(uParam0->f_34), MISC::VAR_STRING(2, func_86(-9.0963E-19f), sParam1), 128);
			uParam0->f_50 = 1;
		}
	}
	else
	{
		StringCopy(&(uParam0->f_34), MISC::VAR_STRING(2, func_86(-7.131985E-16f)), 128);
		uParam0->f_50 = 1;
		uParam0->f_51 = -4.035779E+11f;
	}
	if (func_134())
	{
		func_248(uParam0, sParam1, 1, 0);
	}
	else
	{
		func_249(uParam0);
	}
}

int func_386(int iParam0)
{
	int iVar0;

	if (!func_244(iParam0))
	{
		return 0;
	}
	iVar0 = func_414(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_246(iParam0, 0);
	}
	return 0;
}

int func_387(float fParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_118();
	Var0.f_2 = 25;
	Var0.f_3 = func_74(0);
	Var0.f_4 = fParam0;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

void func_388(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_389(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_390(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_391(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_341(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_392(int iParam0)
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

bool func_393(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_394()
{
	if (func_415(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_395(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_341(0);
	*iParam1 = { func_291(bParam0, func_352(0), fParam3, 0) };
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

bool func_396(bool bParam0, int iParam1, int iParam2)
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

bool func_397(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_341(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_398()
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, 4.380664E-34f))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-6.484858E+21f, 4.380664E-34f, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

int func_399(int* iParam0)
{
	return func_109(iParam0->f_1);
}

void func_400(char* sParam0)
{
	Global_1915643.f_22470 = func_416(sParam0, 10000, 0, 0, 0, 1);
}

bool func_401(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 2.249603E-13f, iParam1))
	{
		return false;
	}
	return true;
}

float func_402(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0.001672367f;
		case 0:
			return 3.361014E+09f;
		case 1:
			return -7.319774E+15f;
		case 2:
			return -7.423501E-32f;
		case 3:
			return 1.726986E+09f;
		case 4:
			return -1.043784E+20f;
		case 5:
			return 5.478523E+12f;
		case 6:
			return 0.006933101f;
		case 7:
			return 8.028382E-15f;
		case 8:
			return 3.601781E+25f;
		case 9:
			return 2.871704E-24f;
		case 10:
			return -1.997959E+37f;
		case 11:
			return 1.281581E-36f;
		case 12:
			return -3.364966E-10f;
		case 13:
			return -1.00624E+31f;
		case 14:
			return 5.840107E-12f;
		case 15:
			return 1.506198E+25f;
		case 16:
			return -1.442116E+29f;
		case 17:
			return 3.427811E-20f;
		case 18:
			return 5.184729E+32f;
		case 19:
			return -1.709603E+13f;
		case 20:
			return 6.834899E-12f;
		case 21:
			return 0.4260581f;
		case 22:
			return 2.66998E-19f;
		case 23:
			return -7.665636E+07f;
		case 24:
			return -4.545571E+35f;
		case 25:
			return 1.332678E+26f;
		case 26:
			return 5.948958E-14f;
		case 27:
			return -3.587715E-09f;
		case 28:
			return 1.108198E+17f;
		case 29:
			return 1.045902E-17f;
		case 30:
			return 4.941972E+27f;
		case 31:
			return 1.524509E-36f;
		case 32:
			return 2.866036E+29f;
		case 33:
			return -5.021916E+32f;
		case 34:
			return -1.66325E-32f;
		case 35:
			return 1.214417E+35f;
		case 36:
			return -2.20428E-26f;
		default:
			break;
	}
	return 0.001672367f;
}

int func_403(bool bParam0)
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
	Var15 = { func_291(5.207907E-07f, func_299(1), 0.08386164f, 1) };
	iVar19 = func_417(Var15, 4.163947E-19f, 1, -1);
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
	Var22 = { func_389(0, -5.45926E-19f, 4.163947E-19f, -5.45926E-19f, 0, 0, 0) };
	if (func_391(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_418(&Var0, 0, iVar20, iVar21))
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
				func_392(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_419(Var0, 1, 0);
			}
			func_392(iVar20);
			return iVar14;
		}
		func_392(iVar20);
	}
	return 0;
}

int func_404(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_72(bParam0, 0))
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

bool func_405(bool bParam0)
{
	return func_342(bParam0) == -6.742753E-26f;
}

int func_406(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("HORSE_BREED_AMERICANPAINT_OVERO"):
			return -5.097953E+22f;
		case joaat("HORSE_BREED_AMERICANPAINT_TOBIANO"):
			return -3.746147E-22f;
		case joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return 1.326867E+26f;
		case joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO"):
			return -2.39711E-32f;
		case joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK"):
			return -9.425214E-07f;
		case joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return -2.620005E+27f;
		case joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return 5.898036E-37f;
		case joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return -2.558989E+22f;
		case joaat("HORSE_BREED_ANDALUSIAN_DARKBAY"):
			return -7.549143E+22f;
		case joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY"):
			return 3.655798E-12f;
		case joaat("HORSE_BREED_ANDALUSIAN_PERLINO"):
			return 1.279023E-13f;
		case joaat("HORSE_BREED_APPALOOSA_BLANKET"):
			return 1.639308E+38f;
		case joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET"):
			return -1.144987E-17f;
		case joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD"):
			return -83.2372f;
		case joaat("HORSE_BREED_APPALOOSA_LEOPARD"):
			return -0.007998829f;
		case joaat("HORSE_BREED_ARABIAN_BLACK"):
			return -1.291859E-33f;
		case joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY"):
			return -2.300089E+24f;
		case joaat("HORSE_BREED_ARABIAN_WHITE"):
			return -446880f;
		case joaat("HORSE_BREED_ARDENNES_BAYROAN"):
			return -2.124561E-17f;
		case joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN"):
			return -1.147106E+16f;
		case joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT"):
			return -5.97347E+17f;
		case joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT"):
			return 2.637521E-05f;
		case joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return 8.783687E+18f;
		case joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return 5.064624E-08f;
			return 2.771022E-14f;
			return 9.622837E+22f;
			return -1.109266E+36f;
			return -2.758318E+09f;
			return -9.656978E+29f;
			return -2.852828E-07f;
			return 2.892364E+34f;
			return 4.583068E+22f;
			return -4.666592E-10f;
			return -0.0027031f;
			return 4.531001E+34f;
			return 875710.2f;
			return -38.67923f;
			return 1.87185E-35f;
			return -0.0003130038f;
			return 6.844282E+37f;
			return 2.302906E-37f;
			return NaNf;
			return -3.766959E-07f;
			return 4.229888E-35f;
			return 1.08126f;
			return 1.215591E-37f;
			return -2.825268E-19f;
			return -1.138134E-22f;
			return 1.794719f;
			return 2.175367f;
			return -5.852224E+35f;
			return -5.631653E+12f;
			return -1.002871E-21f;
			return -6.28309E-31f;
			return 3.818469E+28f;
			return -9.413384E+19f;
			return 7.69103E+37f;
			return 297.9659f;
			return 7.16707E+22f;
			return -1.915543E-19f;
			return -2.124406E+14f;
			return 7.668323E-27f;
			return -4.300648E+16f;
			return 1.589431E+17f;
			return -1.36675E-13f;
			return -1.637471E-23f;
			return 1.980355E+27f;
			return 438.0526f;
			return -1.277166E-23f;
			return 9.661226E-21f;
			return 1.963435E-11f;
			return NaNf;
			return -7.215119E+24f;
			return 26.79346f;
			return -0.006876003f;
			return -7.496014E+23f;
			return -2.64634E-14f;
			return 5.499588E+14f;
			return -7.174751E-20f;
			return -1.880936E+34f;
			return -2.207235E-29f;
			return -36922.69f;
			return -4.208984E+15f;
			return -3.840124E-28f;
			return 0.008685715f;
			return 0.05333715f;
			return -5.249799E-13f;
			return -1.131128E+31f;
			return -1.753697E+33f;
			return 1.046779E+10f;
			return 3.704112E+11f;
			return 9.37371E-21f;
			return 8.270925E+34f;
			return 1.583498E+19f;
			return 3.126511E+29f;
			return 6.737911E+20f;
			return 1696.447f;
			return 2.84276E-36f;
			return -7.855008E-34f;
			return 7.699082E-14f;
			return 1.360424E+16f;
			return 1.176967E-13f;
			return 2.470416E+25f;
			return -92.40316f;
			return 6.26105E-36f;
			return 3.166397E+15f;
			return -5.929735E-30f;
			return -5.623494E+23f;
			return 9.314159E-22f;
			return 5.199128E-06f;
			return -1026460f;
			return -2.310884E+17f;
			return 6.51589E-10f;
			return 0;
		}

int func_407(int iParam0)
{
	if (iParam0 == 6.51589E-10f)
	{
		return -5.867486E+25f;
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return -7671.036f;
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return 1.565249E+13f;
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return 1.206894E-35f;
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return -4.349822E+08f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return 1.019417E+11f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return -1.24796E+12f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return 3.947066E+18f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return -5.675616E+10f;
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return -2.501807E-09f;
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return 8.144612E-13f;
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return 19.44001f;
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return -7.905541E-26f;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return -0.0002948103f;
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return -2.676207E+32f;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return -2.358058E-07f;
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return -1.792899E-36f;
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return -1.835706E+08f;
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return -9.721153E+35f;
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return 7.125971E+26f;
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return 6.323706E-09f;
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return 2.070833E-33f;
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return -5.617021E-07f;
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return 6.362973E+37f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return -4.733491E-17f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return 3.068005E+13f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return 6.286798E-14f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return 7.639143E-29f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return 2.131064E+28f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return -2.811856E-11f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return -4.518364E-32f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return 4.596671E+10f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return 4.427686E+32f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return 2.149006E-19f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return 3.583278E+07f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return 3.672272E+36f;
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return 1317401f;
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return 6.706112E-07f;
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return 522994.2f;
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return 1.139994E-15f;
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return -3.391958E-19f;
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return 3.746556E+33f;
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return -3.879503E-13f;
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return 7.807593E-33f;
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return -1.605381E+12f;
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return -2.190123E-23f;
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return -1.420053E+35f;
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return -1.301456E-33f;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return 4.656437E+23f;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return 2.152173E-30f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return 1.354223E-34f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return -5.083863E+07f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return -1.021829E+07f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return -2.609989E+08f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return 6.879982E+24f;
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return -4.6141E+09f;
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return -4.526459E-30f;
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return 2.370827E+22f;
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return -3.511005E-07f;
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return 8.750258E+33f;
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return -9.142146E+33f;
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return -5.966001E+30f;
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return -2.014525E-29f;
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return -4.513147E+11f;
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return 2.120006E+30f;
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return 8.596086E+18f;
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return 0.00097687f;
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return 0.9606787f;
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return -6.984672E-11f;
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return 2.300937E+18f;
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return 3.055963E-25f;
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return joaat("BREED_CRIOLLO_BAYBRINDLE");
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return -1.131241E-23f;
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return -1.13357E+32f;
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return 5.734728E-08f;
		case -390136947:
			return -49526.15f;
		case 1104566530:
			return -1.164754E+26f;
		case -1142861801:
			return -1.076792E-24f;
		case -417416199:
			return -1.229762E+29f;
		case -1460773772:
			return 1.797443E+31f;
		case 1476007840:
			return -5.376032E-30f;
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return 3.738345E-07f;
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return -3.817251E-17f;
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return -1.856765E+17f;
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return -3.577101E+25f;
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return -8.213095E-23f;
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return -6.157964E+14f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return -9.863372E+27f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return 8053409f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return 1.824036E-09f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return -1.819399E+11f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return -2.392047E-27f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return 6.890993E+18f;
		case 1387035765:
			return 1.908594E+09f;
		case 506531963:
			return -0.001692632f;
		case 2038357529:
			return 2.163332E+28f;
		case 1599848740:
			return 4.000557E+12f;
		case 1887211198:
			return 3.11928E-18f;
		case 1645353708:
			return 907.9868f;
		case 1154747978:
			return -2.484812E-23f;
		case 74569170:
			return 2.332845E-24f;
		case -2004712574:
			return 0.0001293215f;
		case 699227695:
			return 6.169305E-34f;
		case 1514230770:
			return -2.827861E+38f;
		case 704938950:
			return 290.1437f;
		case joaat("A_C_DONKEY_01"):
			return -1.217579E-09f;
		case joaat("A_C_HORSEMULE_01"):
			return 1.537994E-34f;
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return -6.569504E-26f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return -1.304779E-31f;
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return -1.146618E+16f;
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return -4.191203E-13f;
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return -1.171704E-35f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return -2.655684E-08f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return -0.0003522342f;
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return 4.778737E-10f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return -2.409371E+30f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return NaNf;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return -5870.035f;
		default:
			break;
	}
	return 0;
}

char* func_408(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "COAT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "COAT_TOB";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "COAT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "COAT_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "COAT_PALDAP";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "COAT_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "COAT_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "COAT_LEOPBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "COAT_BRLEOP";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "COAT_LEOP";
		case joaat("BREED_ARABIAN_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "COAT_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "COAT_STRAWR";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "COAT_IRONGREYR";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "COAT_BLONDCH";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "COAT_MEALYCH";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "COAT_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "COAT_CHOCR";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "COAT_PIETOB";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "COAT_DAPDARKGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "COAT_CHPIN";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "COAT_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "COAT_AMBCHA";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "COAT_SILVERDAPPINT";
		case joaat("BREED_MORGAN_BAY"):
			return "COAT_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "COAT_PAL";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "COAT_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "COAT_TIGSTRBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "COAT_BLUER";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "COAT_WHITER";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "COAT_REVDAPR";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "COAT_LGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "COAT_BLACKRAB";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "COAT_CH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "COAT_DAPBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "COAT_FLAXR";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "COAT_BLBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "COAT_DAPGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "COAT_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "COAT_BLACKCH";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "COAT_REVDAPBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "COAT_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_BRETON_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "COAT_MEALYDAPBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "COAT_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "COAT_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "COAT_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "COAT_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "COAT_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "COAT_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "COAT_MARBLESABINO";
		case -952011226:
			return "COAT_PIE";
		case -356470463:
			return "COAT_WHITEBLAGDON";
		case -1750687713:
			return "COAT_PALBLAGDON";
		case -272192064:
			return "COAT_SKEWBALD";
		case 1935859332:
			return "COAT_SPLASHBAY";
		case -1898310680:
			return "COAT_SPLASHPIE";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "COAT_CREM";
		case joaat("BREED_KLADRUBER_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "COAT_DAPROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "COAT_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "COAT_PIEROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "COAT_DAPBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "COAT_SPOTTEDTRICOLOR";
		case 1323533737:
			return "COAT_BLACKTOVERO";
		case -1159865523:
			return "COAT_BLUER";
		case 1854655826:
			return "COAT_BUCKSKINBRINDLE";
		case 1416158449:
			return "COAT_DAPGREY";
		case 577120648:
			return "COAT_BLACKOVERO";
		case 1147338535:
			return "COAT_BUCKSKIN";
		case -1712303883:
			return "COAT_CHTOVERO";
		case 406093506:
			return "COAT_REDDUNOVERO";
		case 956799610:
			return "COAT_BLACK";
		case 139264677:
			return "COAT_CH";
		case -11223392:
			return "COAT_GREY";
		case 1133580901:
			return "COAT_PERLINO";
		case joaat("BREED_DONKEY"):
			return "COAT_NONE";
		case joaat("BREED_MULE"):
			return "COAT_NONE";
		case joaat("BREED_MULE_PAINTED"):
			return "COAT_NONE";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "COAT_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "COAT_BLACKSNO";
		case joaat("BREED_ARABIAN_GREY"):
			return "COAT_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "COAT_LIVERCH";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "COAT_SABLECHAMP";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "COAT_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "COAT_MAHBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "COAT_RAVBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "COAT_CHEMGOLD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "COAT_SEALBR";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "COAT_BLANKET";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "COAT_BLUER";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "COAT_BLACKRAB";
		case joaat("BREED_WINTER02_01"):
			return "COAT_SILVERBAY";
		case joaat("BREED_EAGLEFLIES"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_GANG_BILL"):
			return "COAT_BROWNR";
		case joaat("BREED_GANG_CHARLES"):
			return "COAT_GREYSNOWCAPSPOTTED";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "COAT_GREYROANSABINO";
		case joaat("BREED_GANG_DUTCH"):
			return "COAT_ALBINO";
		case joaat("BREED_GANG_HOSEA"):
			return "COAT_SILVER";
		case joaat("BREED_GANG_JAVIER"):
			return "COAT_GREYOVERO";
		case joaat("BREED_GANG_JOHN"):
			return "COAT_SILVERDARKBAY";
		case joaat("BREED_GANG_KAREN"):
			return "COAT_SMOKYBLACK";
		case joaat("BREED_GANG_KIERAN"):
			return "COAT_FLAXR";
		case joaat("BREED_GANG_LENNY"):
			return "COAT_LIGHTPALOMINO";
		case joaat("BREED_GANG_MICAH"):
			return "COAT_BLACK";
		case joaat("BREED_GANG_SADIE"):
			return "COAT_GOLDDAP";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "COAT_DARKBAYROAN";
		case joaat("BREED_GANG_SEAN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "COAT_BRLEOP";
		case joaat("BREED_GANG_UNCLE"):
			return "COAT_SABINO";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "COAT_FEWSPOTBUCKSKIN";
		case joaat("BREED_MANGY_BACKUP"):
			return "COAT_MANGY";
		default:
			break;
	}
	return "";
}

bool func_409(char* sParam0)
{
	if (HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_410(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_72(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_420(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

var func_411(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_421(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_422(&cVar0);
}

int func_412(bool bParam0)
{
	if (!func_72(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(bParam0);
}

int func_413(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		*uParam2 = 0;
		*uParam3 = 0;
		if ((uParam0[iVar1 /*3*/])->f_2 != iParam1)
		{
		}
		else
		{
			*uParam3 = MISC::GET_HASH_KEY((uParam0[iVar1 /*3*/])->f_1);
			if (*uParam3 == 0)
			{
				return 3;
			}
			if (iParam4 != 0 && iParam4 == *uParam3)
			{
			}
			else
			{
				if (!TXD::DOES_STREAMED_TXD_EXIST(*uParam3))
				{
					return 4;
				}
				*uParam2 = MISC::GET_HASH_KEY((*uParam0)[iVar1 /*3*/]);
				if (*uParam2 == 0)
				{
					return 2;
				}
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_414(int iParam0)
{
	if (!func_244(iParam0))
	{
		return 0;
	}
	return Global_1292096.f_2986[iParam0];
}

int func_415(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_423(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_341(bParam1), iParam0, bParam3);
}

int func_416(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_417(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_424(&uParam0, iParam4, bParam5, iParam6);
}

bool func_418(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_419(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_425(0))
	{
		return func_426(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_358(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_341(bParam5), &Param0, bParam4))
	{
		return false;
	}
	return true;
}

int func_420(bool bParam0, bool bParam1)
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

char* func_421(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "BREED_BRETON_REDROAN";
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "BREED_BRETON_GRULLODUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "BREED_BRETON_SEALBROWN";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "BREED_BRETON_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "BREED_CRIOLLO_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "BREED_CRIOLLO_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "BREED_CRIOLLO_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "BREED_CRIOLLO_MARBLESABINO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "BREED_KLADRUBER_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "BREED_KLADRUBER_CREMELLO";
		case joaat("BREED_KLADRUBER_GREY"):
			return "BREED_KLADRUBER_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "BREED_KLADRUBER_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "BREED_NORFOLKROADSTER_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case 1323533737:
			return "BREED_MISSOURIFOXTROTTER_BLACKTOVERO";
		case -1159865523:
			return "BREED_MISSOURIFOXTROTTER_BLUEROAN";
		case 1854655826:
			return "BREED_MISSOURIFOXTROTTER_BUCKSKINBRINDLE";
		case 1416158449:
			return "BREED_MISSOURIFOXTROTTER_DAPPLEGREY";
		case 577120648:
			return "BREED_MUSTANG_BLACKOVERO";
		case 1147338535:
			return "BREED_MUSTANG_BUCKSKIN";
		case -1712303883:
			return "BREED_MUSTANG_CHESTNUTTOVERO";
		case 406093506:
			return "BREED_MUSTANG_REDDUNOVERO";
		case 956799610:
			return "BREED_TURKOMAN_BLACK";
		case 139264677:
			return "BREED_TURKOMAN_CHESTNUT";
		case -11223392:
			return "BREED_TURKOMAN_GREY";
		case 1133580901:
			return "BREED_TURKOMAN_PERLINO";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

char[] func_422(char[4] cParam0)
{
	return cParam0;
}

bool func_423(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_424(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_427(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_425(bool bParam0)
{
	if (func_337() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_341(bParam0));
}

int func_426(int iParam0, bool bParam1, bool bParam2)
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
	if (!func_358(*iParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_342(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_428(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_429(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_430(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_431(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_432(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_433(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_434(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_435(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_427(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_341(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_397(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

struct<29> func_428(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_341(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_434(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_429(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_436(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_438(func_437(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_439(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

struct<26> func_430(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_341(bParam4), &uParam0, &Var26, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_434(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_431(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_438(func_440(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_439(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

struct<18> func_432(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_341(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_434(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_433(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_436(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_438(func_441(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_439(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	return -1;
}

struct<17> func_434(var uParam0, bool bParam1)
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
		Var0.f_15 = func_345(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_369() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_435(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_436(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_438(func_442(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_439(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

bool func_436(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_443(iParam1->f_8, iParam0, iVar0, 2048) || func_443(iParam1->f_8, iParam0, iVar0, 32768)) || func_443(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_443(iParam1->f_8, iParam0, iVar0, 4) || func_443(iParam1->f_8, iParam0, iVar0, 256)) || func_443(iParam1->f_8, iParam0, iVar0, 65536)) || func_443(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_443(iParam1->f_8, iParam0, iVar0, 1) || func_443(iParam1->f_8, iParam0, iVar0, 8)) || func_443(iParam1->f_8, iParam0, iVar0, 65536)) || func_443(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_443(iParam1->f_8, iParam0, iVar0, 1) || func_443(iParam1->f_8, iParam0, iVar0, 16)) || func_443(iParam1->f_8, iParam0, iVar0, 2)) || func_443(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_443(iParam1->f_8, iParam0, iVar0, 8) || func_443(iParam1->f_8, iParam0, iVar0, 4096)) || func_443(iParam1->f_8, iParam0, iVar0, 256)) || func_443(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_437(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

int func_438(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_159(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_159(iParam1, 2, 0, 0);
	return -1;
}

int func_439(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_159(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_440(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_441(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_442(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_443(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_444(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_444(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

