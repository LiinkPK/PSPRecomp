/* Entry 0x08893750 | file offset 0x00090728 | FUN_08893750 | bytes 204 */

void FUN_08893750(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1 + 0x50;
  do {
    if (puVar1[0x1d] != 0) {
      FUN_08894ea4(puVar1);
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x4c;
  } while (iVar2 < 3);
  if (param_1[0x155] != 0) {
    FUN_08894ea4(param_1 + 0x138);
  }
  *(undefined1 *)(param_1 + 0x184) = 0;
  param_1[0x4c] = param_1[0x4c] & 0xfffffffe;
  FUN_08892418(param_1);
  if (param_1[0x1ae] != 0) {
    FUN_0885c538(*param_1,param_1[0x1ae],0);
    param_1[0x1ae] = 0;
    param_1[0x1af] = 0;
    param_1[0x1b0] = 0;
  }
  FUN_08894ea4(param_1);
  return;
}

