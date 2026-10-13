/* Entry 0x089A74BC | file offset 0x001A4494 | FUN_089a74bc | bytes 412 */

undefined4 FUN_089a74bc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 local_240 [128];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30 [4];
  
  puVar3 = local_240;
  iVar1 = FUN_089a7e30(param_1,*(uint *)(param_1 + 0x28) | 0x10);
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar7 = iVar1 + 0x7ffU & 0xfffff800;
    if (uVar7 - iVar1 < 0xc) {
      uVar7 = uVar7 + 0x800;
    }
    uVar7 = uVar7 - 0xc;
  }
  else {
    uVar8 = FUN_089a92c4(param_1);
    iVar4 = (int)uVar8 + ((int)uVar8 + ((uint)((longlong)uVar8 >> 0x3f) >> 0x15) >> 0xb) * -0x800;
    iVar1 = iVar1 + iVar4;
    uVar7 = iVar1 + 0x7ffU & 0xfffff800;
    if (uVar7 - iVar1 < 0xc) {
      uVar7 = uVar7 + 0x800;
    }
    uVar7 = (uVar7 - 0xc) - iVar4;
  }
  *(uint *)(param_1 + 0x38) = uVar7;
  if (uVar7 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (uVar6 < 0x80);
    uVar6 = 0;
    if (uVar7 != 0) {
      iVar1 = 0;
      do {
        uVar5 = uVar7 + iVar1;
        if (0x200 < uVar5) {
          uVar5 = 0x200;
        }
        uVar2 = FUN_089a91b8(param_1,local_240,uVar5);
        uVar6 = uVar6 + 0x200;
        if (uVar2 != uVar5) {
          return 0x80660001;
        }
        iVar1 = -uVar6;
      } while (uVar6 < uVar7);
    }
  }
  local_3c = *(undefined4 *)(param_1 + 0x80);
  local_40 = 0x5453494c;
  iVar1 = FUN_089a9470(param_1,&local_40);
  if (iVar1 == 0) {
    uVar8 = FUN_089a92c4(param_1);
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    local_30[0] = 0x69766f6d;
    iVar1 = FUN_089a92d0(param_1,local_30);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0x80660001;
}

