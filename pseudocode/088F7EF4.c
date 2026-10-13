/* Entry 0x088F7EF4 | file offset 0x000F4ECC | FUN_088f7ef4 | bytes 436 */

int FUN_088f7ef4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar1 = *(int *)(param_1 + 0x31968);
  iVar8 = -1;
  if (iVar1 < 0x19) {
    *(int *)(param_1 + 0x31968) = iVar1 + 1;
    iVar8 = iVar1;
  }
  else {
    iVar4 = 0;
    uVar2 = 0xffffffff;
    if (0 < iVar1) {
      iVar6 = param_1 + 0x10000;
      iVar7 = param_1 + 0x14c80;
      do {
        if ((*(int *)(iVar6 + 0x5ee0) == 1) && ((*(byte *)(iVar7 + 0x27) & 1) == 0)) {
          if (*(uint *)(iVar7 + 0x1c) < uVar2) {
            uVar2 = *(uint *)(iVar7 + 0x1c);
            iVar8 = iVar4;
          }
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x1270;
        iVar7 = iVar7 + 0x1270;
      } while (iVar4 < iVar1);
    }
  }
  if (iVar8 != -1) {
    param_1 = param_1 + iVar8 * 0x1270;
    puVar9 = (undefined4 *)(param_1 + 0x14c78);
    FUN_088f4fc8(param_1 + 0x14c80);
    *(undefined2 *)(param_1 + 0x15eb8) = 0;
    *(undefined2 *)(param_1 + 0x15eba) = 0;
    *(undefined4 *)(param_1 + 0x15ebc) = 0;
    *(undefined4 *)(param_1 + 0x14c7c) = 0;
    *puVar9 = 0;
    *(undefined1 *)(param_1 + 0x15ec0) = 0;
    *(undefined1 *)(param_1 + 0x15ec4) = 0;
    *(undefined1 *)(param_1 + 0x15ec5) = 0;
    iVar1 = 0;
    puVar3 = puVar9;
    do {
      iVar1 = iVar1 + 1;
      *(undefined1 *)((int)puVar3 + 0x1249) = 0xff;
      puVar3 = (undefined4 *)(iVar1 + (int)puVar9);
    } while (iVar1 < 3);
    *(undefined4 *)(param_1 + 0x15ed0) = 0;
    *(undefined4 *)(param_1 + 0x15ed4) = 0;
    *(undefined4 *)(param_1 + 0x15ed8) = 0;
    *(undefined4 *)(param_1 + 0x15edc) = 0;
    *(undefined4 *)(param_1 + 0x15ee0) = 1;
    *(undefined1 *)(param_1 + 0x15ee4) = 0;
    iVar1 = 0;
    iVar4 = 0x24b;
    do {
      uVar5 = ((undefined4 *)(param_2 + iVar1))[1];
      *(undefined4 *)((int)puVar9 + iVar1) = *(undefined4 *)(param_2 + iVar1);
      ((undefined4 *)((int)puVar9 + iVar1))[1] = uVar5;
      iVar4 = iVar4 + -1;
      iVar1 = iVar1 + 8;
    } while (iVar4 != 0);
    *(undefined4 *)(param_1 + 0x15ed0) = 0;
    *(undefined4 *)(param_1 + 0x15ed4) = 0;
    *(undefined4 *)(param_1 + 0x15ed8) = 0;
    *(undefined4 *)(param_1 + 0x15edc) = 0;
    *(undefined4 *)(param_1 + 0x15ee0) = 0;
    *(undefined1 *)(param_1 + 0x15ee4) = 1;
  }
  return iVar8;
}

