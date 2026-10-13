/* Entry 0x0898FAF4 | file offset 0x0018CACC | FUN_0898faf4 | bytes 676 */

undefined4 FUN_0898faf4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar7 = DAT_09b6f478;
  if (*(char *)(param_2 + 0xc0) == '\0') {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_2 + 0xc1) == '\0') {
      uVar1 = *(undefined4 *)(param_2 + 0x7c);
    }
    else {
      uVar1 = 0x3f800000;
    }
    uVar8 = *(undefined4 *)(param_2 + 0x80);
    uVar9 = *(undefined4 *)(param_2 + 0x84);
    local_2c = CONCAT22(local_2c._2_2_,*(undefined2 *)(param_2 + 0x9c));
    uVar3 = 0;
    if (*(char *)(param_2 + 0xc1) == '\0') {
      uVar3 = (ushort)*(byte *)(param_2 + 0xc3);
    }
    local_30 = CONCAT22(uVar3,*(undefined2 *)(param_2 + 0x9a));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x24) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = local_3c;
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    *(undefined4 *)(param_1 + 0x10) = uVar9;
    *(undefined4 *)(param_1 + 0x14) = local_30;
    *(undefined4 *)(param_1 + 0x18) = local_2c;
    iVar5 = DAT_09b6f478;
    uVar1 = *(undefined4 *)(DAT_09b6f478 + 0x18);
    if (*(int *)(param_1 + 0x28) != 0) {
      iVar2 = FUN_08971010(uVar1,*(int *)(param_1 + 0x28));
      iVar4 = iVar5 + (uint)*(ushort *)(*(int *)(*(int *)(iVar5 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) - iVar2;
      uVar1 = *(undefined4 *)(iVar5 + 0x18);
    }
    iVar2 = FUN_08971134(uVar1,0x80,&local_28,1);
    if (iVar2 != 0) {
      iVar5 = iVar5 + (uint)*(ushort *)(*(int *)(*(int *)(iVar5 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar5 + 0xb4) = *(int *)(iVar5 + 0xb4) + local_28;
    }
    *(int *)(param_1 + 0x28) = iVar2;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar5 = FUN_08971134(*(undefined4 *)(iVar7 + 0x18),param_3,&local_24,1);
      if (iVar5 != 0) {
        iVar2 = iVar7 + (uint)*(ushort *)(*(int *)(*(int *)(iVar7 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) + local_24;
      }
      *(int *)(param_1 + 0xbc) = iVar5;
      iVar5 = FUN_08971134(*(undefined4 *)(iVar7 + 0x18),param_3,&local_20,1);
      if (iVar5 != 0) {
        iVar7 = iVar7 + (uint)*(ushort *)(*(int *)(*(int *)(iVar7 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar7 + 0xb4) = *(int *)(iVar7 + 0xb4) + local_20;
      }
      *(int *)(param_1 + 0xc0) = iVar5;
      if ((*(int *)(param_1 + 0xbc) == 0) || (*(int *)(param_1 + 0xc0) == 0)) {
        uVar1 = 0;
      }
      else {
        uVar6 = 0;
        *(int *)(param_1 + 0xb8) = param_3;
        if (param_3 != 0) {
          iVar7 = *(int *)(param_1 + 0xbc);
          while( true ) {
            *(undefined1 *)(iVar7 + uVar6) = 0;
            *(undefined1 *)(*(int *)(param_1 + 0xc0) + uVar6) = 0;
            uVar6 = uVar6 + 1;
            if (*(uint *)(param_1 + 0xb8) <= uVar6) break;
            iVar7 = *(int *)(param_1 + 0xbc);
          }
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

