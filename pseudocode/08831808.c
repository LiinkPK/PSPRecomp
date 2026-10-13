/* Entry 0x08831808 | file offset 0x0002E7E0 | FUN_08831808 | bytes 396 */

void FUN_08831808(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x390) + 0x18);
  if (iVar2 != 0) {
    iVar2 = FUN_08811efc(iVar2,0);
    *(int *)(param_1 + 0x3a0) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
      *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 0x2000;
    }
    iVar2 = FUN_0883e6e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),1);
    *(int *)(param_1 + 0x468) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
      *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 0x1000;
    }
    uVar1 = FUN_0883e6e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),2);
    *(undefined4 *)(param_1 + 0x46c) = uVar1;
    uVar1 = FUN_0883e6e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),3);
    *(undefined4 *)(param_1 + 0x470) = uVar1;
    uVar1 = FUN_0883e6e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),6);
    *(undefined4 *)(param_1 + 0x474) = uVar1;
    uVar1 = FUN_0883e6e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),5);
    *(undefined4 *)(param_1 + 0x478) = uVar1;
    uVar1 = FUN_0883e6e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),0xd);
    *(undefined4 *)(param_1 + 0x47c) = uVar1;
    uVar1 = FUN_0883e6e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),0xe);
    *(undefined4 *)(param_1 + 0x480) = uVar1;
    uVar1 = FUN_0883e6e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),0);
    *(undefined4 *)(param_1 + 0x484) = uVar1;
    uVar1 = FUN_0883e6e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),8);
    *(undefined4 *)(param_1 + 0x488) = uVar1;
    uVar1 = FUN_0883e6e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),4);
    *(undefined4 *)(param_1 + 0x48c) = uVar1;
  }
  return;
}

