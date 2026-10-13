/* Entry 0x08989D30 | file offset 0x00186D08 | FUN_08989d30 | bytes 364 */

void FUN_08989d30(int param_1,int *param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_3 <= (uint)param_2[1]) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_0898d150();
    iVar3 = param_2[1];
    uVar4 = 0;
    if (param_3 != 0) {
      do {
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        iVar5 = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * (float)(iVar3 + -2)) + 1;
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        else if (iVar3 + -1 < iVar5) {
          iVar5 = 0;
        }
        iVar2 = *(int *)(param_1 + 0x2c);
        puVar6 = (undefined4 *)(*param_2 + iVar5 * 0x10);
        *(int *)(param_1 + 0x2c) = iVar2 + 1;
        uVar8 = puVar6[1];
        uVar7 = puVar6[2];
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar2 * 0x10);
        uVar9 = puVar6[3];
        *puVar1 = *puVar6;
        puVar1[1] = uVar8;
        puVar1[2] = uVar7;
        uVar4 = uVar4 + 1;
        puVar1[3] = uVar9;
      } while (uVar4 < param_3);
    }
    FUN_0898e9b4(param_1 + 4,param_4);
  }
  return;
}

