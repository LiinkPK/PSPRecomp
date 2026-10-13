/* Entry 0x088D11C8 | file offset 0x000CE1A0 | FUN_088d11c8 | bytes 752 */

undefined4 * FUN_088d11c8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  FUN_08993560(param_1 + 0x207,0xfc,0x2c,&LAB_088da8ac);
  iVar1 = 0;
  puVar2 = param_1 + 0x207;
  puVar4 = param_1 + 0x11;
  puVar3 = param_1;
  do {
    puVar3[0xf] = puVar2;
    puVar3[0x10] = puVar4;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0xb;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 2;
  } while (iVar1 < 0xfc);
  FUN_08935828(param_1 + 0x207,0,0x2b50);
  puVar3 = param_1 + 0xf;
  param_1[0x206] = puVar3;
  param_1[0xcdb] = puVar3;
  param_1[0xcdc] = puVar3;
  FUN_08993560(param_1 + 0x10b1,0x1ea,0x44,&LAB_088d9988);
  iVar1 = 0;
  puVar2 = param_1 + 0x10b1;
  puVar4 = param_1 + 0xcdf;
  puVar3 = param_1;
  do {
    puVar3[0xcdd] = puVar2;
    puVar3[0xcde] = puVar4;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x11;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 2;
  } while (iVar1 < 0x1ea);
  FUN_08935828(param_1 + 0x10b1,0,0x8228);
  puVar3 = param_1 + 0xcdd;
  param_1[0x10b0] = puVar3;
  param_1[0x313b] = puVar3;
  param_1[0x313c] = puVar3;
  param_1[0x313e] = 0;
  param_1[0x313d] = 0;
  param_1[0x313f] = 0;
  FUN_08993560(param_1 + 0x31e0,0x50,0x74,&LAB_088dcb50);
  iVar1 = 0;
  puVar3 = param_1 + 0x31e0;
  puVar2 = param_1 + 0x4000;
  puVar4 = param_1 + 0x3142;
  puVar5 = param_1 + 0x4000;
  do {
    puVar2[-0xec0] = puVar3;
    puVar5[-0xebf] = puVar4;
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 0x1d;
    puVar2 = puVar2 + 2;
    puVar4 = puVar4 + 2;
    puVar5 = puVar5 + 2;
  } while (iVar1 < 0x50);
  FUN_08935828(param_1 + 0x31e0,0,0x2440);
  puVar3 = param_1 + 0x3140;
  param_1[0x31df] = puVar3;
  param_1[0x3af0] = puVar3;
  param_1[0x3af1] = puVar3;
  param_1[0x3af3] = 0;
  param_1[0x3af2] = 0;
  param_1[0x3af4] = 0;
  FUN_08993560(param_1 + 0x3d11,0x10e,0x14,&LAB_088de098);
  iVar1 = 0;
  puVar3 = param_1 + 0x3d11;
  puVar2 = param_1 + 0x4000;
  puVar4 = param_1 + 0x3af7;
  puVar5 = param_1 + 0x4000;
  do {
    puVar2[-0x50b] = puVar3;
    puVar5[-0x50a] = puVar4;
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 5;
    puVar2 = puVar2 + 2;
    puVar4 = puVar4 + 2;
    puVar5 = puVar5 + 2;
  } while (iVar1 < 0x10e);
  FUN_08935828(param_1 + 0x3d11,0,0x1518);
  puVar3 = param_1 + 0x3af5;
  param_1[0x3d10] = puVar3;
  param_1[0x4257] = puVar3;
  param_1[0x4258] = puVar3;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *param_1 = 0;
  return param_1;
}

