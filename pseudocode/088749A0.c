/* Entry 0x088749A0 | file offset 0x00071978 | FUN_088749a0 | bytes 208 */

int FUN_088749a0(undefined4 param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08874848(0x24);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_088745b0(iVar1,0);
    iVar2 = iVar1;
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = param_1;
    *(undefined4 *)(iVar2 + 0xc) = param_2;
    *(undefined1 *)(iVar2 + 0x1d) = param_4;
    *(float *)(iVar2 + 0x14) = (float)param_3;
    if (DAT_09b4835c == 0) {
      DAT_09b48358 = iVar2;
      DAT_09b4835c = iVar2;
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
    else {
      *(int *)(DAT_09b4835c + 0x20) = iVar2;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      DAT_09b4835c = iVar2;
    }
  }
  return iVar2;
}

