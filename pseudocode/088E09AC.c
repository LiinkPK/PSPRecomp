/* Entry 0x088E09AC | file offset 0x000DD984 | FUN_088e09ac | bytes 80 */

void FUN_088e09ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_089d6040;
  uVar2 = *(undefined4 *)(DAT_089d6040 + 4);
  param_6[1] = param_1;
  *param_6 = uVar2;
  uVar2 = *(undefined4 *)(iVar1 + 8);
  param_6[3] = param_2;
  param_6[2] = uVar2;
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  param_6[5] = param_3;
  param_6[4] = uVar2;
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  param_6[7] = param_4;
  param_6[6] = uVar2;
  param_6[9] = param_5;
  param_6[8] = 0;
  *(undefined1 *)(param_6 + 10) = 1;
  return;
}

