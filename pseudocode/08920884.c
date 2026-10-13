/* Entry 0x08920884 | file offset 0x0011D85C | FUN_08920884 | bytes 236 */

void FUN_08920884(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[6] = 0;
    puVar1[0xb] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 5);
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  iVar2 = 0;
  puVar1 = param_1 + 0x19;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x46);
  iVar2 = 0;
  puVar1 = param_1 + 0x5f;
  do {
    *(undefined2 *)puVar1 = 0;
    *(undefined2 *)((int)puVar1 + 2) = 0;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined2 *)((int)puVar1 + 6) = 0xffff;
    iVar4 = 0;
    puVar3 = puVar1;
    do {
      puVar3[2] = 0;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 5);
    iVar2 = iVar2 + 1;
    puVar1[7] = 0;
    puVar1 = puVar1 + 8;
  } while (iVar2 < 0x20);
  iVar2 = 0;
  param_1 = param_1 + 0x15f;
  do {
    *param_1 = 0;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 5);
  return;
}

