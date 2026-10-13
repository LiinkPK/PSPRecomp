/* Entry 0x0897CBA8 | file offset 0x00179B80 | FUN_0897cba8 | bytes 228 */

undefined4 FUN_0897cba8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_09b6f478;
  uVar1 = FUN_08983db4(*(undefined1 *)(param_1 + 0x34),0,1,2);
  FUN_08983cd8(uVar1);
  FUN_08983b74(0);
  iVar2 = *(int *)(iVar3 + 0xa4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1c) < 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x88) + 0x1c8) + 0x30);
      if (iVar3 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x1c) * 4) + 0x10);
      }
    }
    if (iVar3 == -1) {
      uVar1 = 0;
    }
    else {
      FUN_08973334(iVar2,iVar3,5,1,1,1);
      FUN_089a0384(9);
      uVar1 = 1;
    }
  }
  return uVar1;
}

