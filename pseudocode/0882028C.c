/* Entry 0x0882028C | file offset 0x0001D264 | FUN_0882028c | bytes 272 */

undefined4 FUN_0882028c(undefined2 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  FUN_08820250();
  iVar1 = DAT_089d4910;
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(char *)(*(int *)(param_2 + 0x564) + 9);
    if (uVar4 < *(uint *)(DAT_089d4910 + 0x2c)) {
      puVar5 = (undefined4 *)(*(int *)(DAT_089d4910 + 0x30) + uVar4 * 8);
      param_1[1] = (short)*puVar5;
      iVar2 = FUN_08842100((short)param_1[1] * 0x3c);
      *(int *)(param_1 + 2) = iVar2;
      if (iVar2 == 0) {
        return 0xfffffffe;
      }
      iVar6 = 0;
      iVar2 = 0;
      if (0 < (short)param_1[1]) {
        do {
          FUN_088206e8(*(int *)(param_1 + 2) + iVar2,
                       *(int *)(iVar1 + 0x38) + (iVar6 + puVar5[1]) * 0x48);
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + 0x3c;
        } while (iVar6 < (short)param_1[1]);
      }
    }
    *param_1 = 1;
    uVar3 = 0;
  }
  return uVar3;
}

