/* Entry 0x0881F4D8 | file offset 0x0001C4B0 | FUN_0881f4d8 | bytes 432 */

undefined4 FUN_0881f4d8(undefined2 *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  
  FUN_0881f49c();
  iVar2 = DAT_089d4910;
  if (param_2 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(char *)(*(int *)(param_2 + 0x564) + 8);
    if (uVar6 < *(uint *)(DAT_089d4910 + 0x18)) {
      puVar8 = (undefined4 *)(*(int *)(DAT_089d4910 + 0x1c) + uVar6 * 8);
      param_1[1] = (short)*puVar8;
      iVar3 = FUN_08842100((short)param_1[1] * 0x44);
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 == 0) {
        return 0xfffffffe;
      }
      iVar3 = 0;
      iVar10 = 0;
      if (0 < (short)param_1[1]) {
        do {
          piVar9 = (int *)(*(int *)(iVar2 + 0x24) + (iVar3 + puVar8[1]) * 0x4c);
          iVar4 = FUN_0881f9c8(*(int *)(param_1 + 2) + iVar10,piVar9);
          if (iVar4 == 0) {
            iVar4 = *piVar9;
            if ((iVar4 < 0) || (2 < iVar4)) {
              if ((2 < iVar4) && (iVar4 < 6)) {
                puVar7 = (undefined4 *)(*(int *)(param_1 + 2) + iVar10);
                if (*(undefined4 **)(param_1 + 10) == (undefined4 *)0x0) {
                  *(undefined4 **)(param_1 + 10) = puVar7;
                  *(undefined4 **)(param_1 + 8) = puVar7;
                  *puVar7 = 0;
                }
                else {
                  **(undefined4 **)(param_1 + 10) = puVar7;
                  *puVar7 = 0;
                  *(undefined4 **)(param_1 + 10) = puVar7;
                }
              }
            }
            else {
              puVar7 = (undefined4 *)(*(int *)(param_1 + 2) + iVar10);
              if (*(undefined4 **)(param_1 + 6) == (undefined4 *)0x0) {
                *(undefined4 **)(param_1 + 6) = puVar7;
                *(undefined4 **)(param_1 + 4) = puVar7;
                *puVar7 = 0;
              }
              else {
                **(undefined4 **)(param_1 + 6) = puVar7;
                *puVar7 = 0;
                *(undefined4 **)(param_1 + 6) = puVar7;
              }
            }
            sVar1 = param_1[1];
          }
          else {
            sVar1 = param_1[1];
          }
          iVar3 = iVar3 + 1;
          iVar10 = iVar10 + 0x44;
        } while (iVar3 < sVar1);
      }
    }
    *param_1 = 1;
    uVar5 = 0;
  }
  return uVar5;
}

