/* Entry 0x08914270 | file offset 0x00111248 | FUN_08914270 | bytes 456 */

void FUN_08914270(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < 1) {
    if ((-1 < iVar1) && (16.0 <= *(float *)(param_1 + 0x6c))) {
      iVar1 = FUN_088a9de8(*DAT_089d8378,8,0,0,0);
      uVar2 = FUN_08837014(*(undefined4 *)(param_1 + 0x6d0));
      FUN_088a72e8(uVar2,uVar2,uVar2,iVar1);
      FUN_088a6a38(0xbf800000,iVar1,1,*(int *)(param_1 + 0x6d0) + 0x4c8,0xffffffff,0xffffffff);
      *(uint *)(iVar1 + 0xdc) = *(uint *)(iVar1 + 0xdc) | 0x100;
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
  }
  else if (iVar1 < 2) {
    if (46.0 <= *(float *)(param_1 + 0x6c)) {
      FUN_08834d30(0x41a00000,0,*(undefined4 *)(param_1 + 0x6d0));
      *(undefined4 *)(param_1 + 0x48) = 2;
    }
  }
  else if (((iVar1 < 3) && (66.0 <= *(float *)(param_1 + 0x6c))) &&
          (iVar1 = FUN_08873eb4(), iVar1 == 0)) {
    FUN_08873d34(0x41f00000,3,FUN_08916f5c,0,0,2);
    FUN_08873dec(3,2);
    FUN_089168a4(param_1,0x3c);
    *(undefined1 *)(param_1 + 0x7d7) = 1;
  }
  return;
}

