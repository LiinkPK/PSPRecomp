/* Entry 0x08896AB0 | file offset 0x00093A88 | FUN_08896ab0 | bytes 144 */

void FUN_08896ab0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = DAT_089d6c80;
  iVar3 = 0;
  puVar2 = param_1;
  do {
    if (puVar2[4] != -1) {
      FUN_088a0dfc(uVar1,puVar2[4]);
      puVar2[4] = 0xffffffff;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 9);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  return;
}

