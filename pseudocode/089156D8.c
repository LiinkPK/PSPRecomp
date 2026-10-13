/* Entry 0x089156D8 | file offset 0x001126B0 | FUN_089156d8 | bytes 348 */

void FUN_089156d8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = param_1;
  do {
    if (*(int *)(iVar5 + 0x704) != 0) {
      iVar1 = FUN_088374b0(*(undefined4 *)(param_1 + 0x6d0));
      iVar2 = *(int *)(iVar5 + 0x704);
      if (iVar1 == 0) {
        uVar4 = *(uint *)(iVar2 + 0x38c);
        uVar3 = *(undefined4 *)(iVar2 + 0x388);
        *(uint *)(iVar2 + 0x38c) = uVar4 | 0x1000;
        *(undefined4 *)(iVar2 + 0x388) = uVar3;
        *(uint *)(iVar2 + 0x38c) = uVar4 & 0xfffff7ff | 0x1000;
        *(undefined4 *)(iVar2 + 0x388) = uVar3;
        iVar1 = *(int *)(iVar5 + 0x704);
      }
      else {
        uVar4 = *(uint *)(iVar2 + 0x38c);
        uVar3 = *(undefined4 *)(iVar2 + 0x388);
        *(uint *)(iVar2 + 0x38c) = uVar4 | 0x800;
        *(undefined4 *)(iVar2 + 0x388) = uVar3;
        *(uint *)(iVar2 + 0x38c) = uVar4 & 0xffffefff | 0x800;
        *(undefined4 *)(iVar2 + 0x388) = uVar3;
        iVar1 = *(int *)(iVar5 + 0x704);
      }
      iVar1 = func_0x08a6420c(*(undefined4 *)(iVar1 + 0x5c4));
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar5 + 0x704);
        uVar4 = *(uint *)(iVar1 + 0x38c);
        uVar3 = *(undefined4 *)(iVar1 + 0x388);
        *(uint *)(iVar1 + 0x38c) = uVar4 | 0x800;
        *(undefined4 *)(iVar1 + 0x388) = uVar3;
        *(uint *)(iVar1 + 0x38c) = uVar4 & 0xffffefff | 0x800;
        *(undefined4 *)(iVar1 + 0x388) = uVar3;
      }
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar6 < 4);
  return;
}

