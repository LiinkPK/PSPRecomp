/* Entry 0x0898B978 | file offset 0x00188950 | FUN_0898b978 | bytes 244 */

void FUN_0898b978(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_08983db4(*(undefined1 *)(param_1 + 0xba),0,1,2);
  FUN_08983cd8(uVar1);
  FUN_08983b74(0);
  if (*(char *)(param_1 + 0xb7) == '\0') {
    FUN_089a03dc(9);
  }
  else {
    iVar3 = *(int *)(DAT_09b6f478 + 0xa4);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x60) < 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(*(int *)(*(int *)(DAT_09b6f478 + 0x88) + 0x1c8) + 0x30);
        if (iVar2 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = *(int *)(*(int *)(iVar2 + *(int *)(param_1 + 0x60) * 4) + 0x10);
        }
      }
      if (iVar2 != -1) {
        FUN_089a0384(9);
        FUN_08973334(iVar3,iVar2,5,1,1,1);
      }
    }
  }
  return;
}

