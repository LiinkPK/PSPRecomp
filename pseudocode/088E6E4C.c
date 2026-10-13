/* Entry 0x088E6E4C | file offset 0x000E3E24 | FUN_088e6e4c | bytes 112 */

void FUN_088e6e4c(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = param_2;
  iVar2 = 0;
  puVar1 = param_1 + 4;
  do {
    FUN_088e7088(puVar1,param_3);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x40;
  } while (iVar2 < 4);
  *(undefined1 *)(param_1 + 0x105) = 0;
  param_1[0x104] = 0;
  return;
}

