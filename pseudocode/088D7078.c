/* Entry 0x088D7078 | file offset 0x000D4050 | FUN_088d7078 | bytes 376 */

undefined4 FUN_088d7078(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_088d723c();
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 3) {
      FUN_088d7884(param_1);
    }
    FUN_088d80ac(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 4) {
      FUN_088d78f4(param_1);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    if (iVar2 == 6) {
      FUN_088d7a2c(param_1);
    }
    FUN_088d8634(param_1 + 0x4c);
    FUN_088d9378(param_1 + 0x5c);
    FUN_088d7cb0(param_1 + 0x244);
    FUN_088d97f8(param_1 + 0x264);
    if (*(int *)(param_1 + 0x10) == 5) {
      FUN_088d79f0(param_1);
    }
    if ((*(int *)(param_1 + 4) != 0) &&
       ((*(int *)(param_1 + 0x10) == 3 || (*(int *)(param_1 + 0x10) == 4)))) {
      iVar2 = -1;
      if (*(int *)(param_1 + 0x14) == 0) {
        uVar3 = FUN_088d82f0(param_1 + 0x24);
        iVar4 = FUN_088d9418(param_1 + 0x5c,uVar3);
        if (iVar4 != 0) {
          iVar2 = FUN_088d8e90(iVar4);
        }
        cVar1 = *(char *)(param_1 + 8);
      }
      else {
        iVar2 = 0x30;
        cVar1 = *(char *)(param_1 + 8);
      }
      if ((cVar1 == '\0') && (iVar4 = FUN_088cd9fc(*(undefined4 *)(param_1 + 4)), iVar4 != iVar2)) {
        FUN_088cdbd8(*(undefined4 *)(param_1 + 4),iVar2);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

