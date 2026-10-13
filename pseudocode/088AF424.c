/* Entry 0x088AF424 | file offset 0x000AC3FC | FUN_088af424 | bytes 432 */

void FUN_088af424(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0xc);
  bVar1 = false;
  if (*(int *)(iVar4 + 0x2b30) == 1) {
    bVar1 = *(int *)(iVar4 + 0x814) != 5;
    if (!bVar1) {
      (**(code **)(iVar4 + 0x2ba0))();
      iVar4 = *(int *)(param_1 + 0xc);
    }
    *(undefined4 *)(iVar4 + 0x2b30) = 0;
  }
  else {
    iVar4 = FUN_088af720(param_1,*(int *)(iVar4 + 0x2b30),param_2);
    if (iVar4 == -1) {
      bVar1 = true;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = 0;
    }
    else {
      *(int *)(*(int *)(param_1 + 0xc) + 0x2b30) = iVar4;
      if ((iVar4 == 8) || (iVar4 == 9)) {
        FUN_088af36c(param_1,iVar4);
        uVar2 = 0x10;
        if (iVar4 == 8) {
          uVar2 = 0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = uVar2;
      }
      else if (iVar4 == 10) {
        FUN_088af348(param_1);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = 6;
      }
      else {
        iVar5 = *(int *)(param_1 + 0xc);
        if (iVar4 == 7) {
          (**(code **)(iVar5 + 0x2ba0))();
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = 0x10;
        }
        else {
          FUN_088af620(param_1,*(undefined4 *)(iVar5 + 0x2b30),*(undefined4 *)(iVar5 + 0x2b38),0);
        }
      }
    }
  }
  if (bVar1) {
    if ((*(uint *)(param_1 + 4) & 1) == 0) {
      FUN_088b1764(DAT_089d7280);
    }
    FUN_08872a18();
    uVar3 = *(uint *)(param_1 + 4);
    if ((uVar3 & 2) != 0) {
      uVar3 = uVar3 & 0xfffffffd;
      *(uint *)(param_1 + 4) = uVar3;
    }
    if ((uVar3 & 0x80) != 0) {
      *(uint *)(param_1 + 4) = uVar3 & 0xffffff7f;
    }
  }
  return;
}

