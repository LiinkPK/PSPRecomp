/* Entry 0x0898FD98 | file offset 0x0018CD70 | FUN_0898fd98 | bytes 256 */

void FUN_0898fd98(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xb4)) {
    puVar2 = (undefined4 *)(param_1 + 0x34);
    do {
      if (*(char *)(*(int *)(param_1 + 0xc0) + iVar3) != '\0') {
        iVar4 = *(int *)(param_1 + 0x2c);
        *(int *)(param_1 + 0x2c) = iVar4 + 1;
        uVar6 = puVar2[1];
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar4 * 0x10);
        uVar8 = puVar2[2];
        uVar7 = puVar2[3];
        *puVar5 = *puVar2;
        puVar5[1] = uVar6;
        puVar5[2] = uVar8;
        puVar5[3] = uVar7;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0xb4));
  }
  FUN_0898e9b4(param_1 + 4,param_2);
  if ((*(char *)(param_1 + 0xc4) != '\0') && (uVar1 = 0, *(int *)(param_1 + 0xb8) != 0)) {
    do {
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + uVar1) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xb8));
  }
  return;
}

