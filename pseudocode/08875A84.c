/* Entry 0x08875A84 | file offset 0x00072A5C | FUN_08875a84 | bytes 96 */

undefined4 FUN_08875a84(float param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08875978();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 4) = 0;
    *(float *)(param_2 + 0x18) = 1.0 / param_1;
  }
  return uVar2;
}

