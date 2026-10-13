/* Entry 0x088881FC | file offset 0x000851D4 | FUN_088881fc | bytes 344 */

undefined4 * FUN_088881fc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_08864ff0(param_1 + 1,1,70000,0x46);
  FUN_088cd3d4(param_1 + 0x1b);
  FUN_088cc83c(param_1 + 0x2c);
  FUN_08993560(param_1 + 0x3a,2,0xa4,FUN_088de25c);
  FUN_08993560(param_1 + 0x8c,2,0x27c,FUN_088d6c9c);
  FUN_088ce334(param_1 + 0x1ca);
  FUN_08993560(param_1 + 0x1d5,2,0x28,FUN_08890acc);
  FUN_0887a61c(param_1 + 0x1ea);
  param_1[0x200] = 0xffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = 0;
  param_1[0x14] = 2;
  iVar3 = 0;
  puVar2 = param_1;
  do {
    puVar2[500] = 0xffffffff;
    puVar2[0x1f8] = 0xffffffff;
    puVar2[0x1fa] = 0xffffffff;
    puVar2[0x1fe] = 0xffffffff;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 2);
  FUN_08888f48(param_1);
  FUN_088898f8(param_1);
  FUN_088898c8(param_1);
  param_1[0x1e9] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x1ee] = 0xffffffff;
  param_1[0x1ef] = 0xffffffff;
  iVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar3 + 0x7c0) = 0;
    *(undefined1 *)((int)param_1 + iVar3 + 0x7c2) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  uVar1 = DAT_089d7750;
  param_1[499] = 0;
  param_1[0x1f2] = uVar1;
  return param_1;
}

