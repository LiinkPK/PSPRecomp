/* Entry 0x08804160 | file offset 0x00001138 | Application_MainThread | bytes 700 */

/* WARNING: Removing unreachable block (ram,0x08804208) */
/* WARNING: Removing unreachable block (ram,0x08804288) */
/* WARNING: Removing unreachable block (ram,0x08804198) */
/* WARNING: Removing unreachable block (ram,0x08804264) */
/* Thread entry passed to sceKernelCreateThread by module_start. */

void Application_MainThread(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int in_k0;
  int local_400 [24];
  undefined4 local_3a0;
  undefined1 *local_39c;
  undefined1 *local_398;
  undefined1 *local_394;
  undefined4 local_390;
  undefined1 local_38c [28];
  undefined4 local_370;
  undefined *local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined1 local_340;
  undefined1 local_324 [36];
  undefined4 local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined2 local_2f0;
  undefined2 local_2ee;
  undefined2 local_2ec;
  undefined2 local_2ea;
  undefined2 local_2e8;
  undefined2 local_2e6;
  undefined2 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined1 local_2c8;
  undefined1 local_2c0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_1cc;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 auStack_138 [92];
  undefined1 auStack_dc [92];
  undefined1 auStack_80 [92];
  undefined4 local_24;
  
  piVar7 = local_400;
  FUN_0893431c(0);
  iVar8 = 0;
  iVar6 = param_2;
  iVar1 = param_2;
  if (0 < param_1) {
    while( true ) {
      local_400[0] = iVar1;
      iVar8 = iVar8 + 1;
      iVar1 = FUN_089359e8(iVar6);
      iVar6 = iVar6 + iVar1 + 1;
      piVar7 = piVar7 + 1;
      if ((0x13 < iVar8) || (param_1 <= iVar6 - param_2)) break;
      *piVar7 = iVar6;
      iVar1 = local_400[0];
    }
  }
  local_400[iVar8] = 0;
  local_39c = auStack_138;
  local_398 = auStack_dc;
  local_394 = auStack_80;
  puVar4 = local_38c;
  iVar6 = 0x18;
  local_3a0 = 0;
  local_390 = 0;
  do {
    iVar6 = iVar6 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar6);
  local_36c = &DAT_089c69b4;
  uVar5 = 0;
  local_370 = 0;
  local_368 = 0;
  local_364 = 0;
  local_360 = 0;
  local_35c = 0;
  local_358 = 0;
  local_354 = 0;
  local_350 = 0;
  local_34c = 0;
  local_348 = 0;
  local_344 = 0;
  local_340 = 0;
  do {
    puVar4 = local_324 + uVar5;
    uVar5 = uVar5 + 1;
    *puVar4 = 0;
  } while (uVar5 < 0x24);
  local_2f8 = 1;
  local_2f4 = 0;
  local_2f0 = 0x330e;
  local_2ee = 0xabcd;
  local_2ec = 0x1234;
  local_2ea = 0xe66d;
  local_2e8 = 0xdeec;
  local_2e6 = 5;
  local_2e4 = 0xb;
  local_300 = 0;
  local_2e0 = 0;
  local_2dc = 0;
  local_2d8 = 0;
  local_2d4 = 0;
  local_2d0 = 0;
  local_2cc = 0;
  local_2a4 = 0;
  local_2a0 = 0;
  local_29c = 0;
  local_298 = 0;
  local_294 = 0;
  local_290 = 0;
  local_28c = 0;
  local_288 = 0;
  local_284 = 0;
  local_280 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2a8 = 0;
  local_258 = 0;
  local_254 = 0;
  local_250 = 0;
  local_24c = 0;
  local_14c = 0;
  local_1cc = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  FUN_08935828(local_39c,0,0x114);
  local_24 = 0;
  *(undefined4 **)(in_k0 + 4) = &local_3a0;
  FUN_08934880(&LAB_08998580);
  FUN_08998578();
  uVar2 = FUN_08933398(iVar8,local_400);
  do {
    uVar3 = FUN_08934a48(uVar2);
    sceKernelExitDeleteThread(uVar3);
  } while( true );
}

