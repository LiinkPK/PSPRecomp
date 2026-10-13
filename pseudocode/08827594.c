/* Entry 0x08827594 | file offset 0x0002456C | FUN_08827594 | bytes 368 */

void FUN_08827594(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x390) + 0x2c);
  iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x550) + 0x390) + 0x2c);
  iVar3 = (int)*(short *)(iVar6 + 0x18);
  *(int *)(param_1 + 0x598) = iVar3;
  if (0 < iVar3) {
    uVar1 = FUN_08842100(iVar3 << 2);
    *(undefined4 *)(param_1 + 0x594) = uVar1;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x598)) {
      iVar4 = 0;
      do {
        iVar3 = iVar3 + 1;
        puVar5 = (undefined2 *)(*(int *)(param_1 + 0x594) + iVar4);
        *puVar5 = 0xffff;
        puVar5[1] = 0xffff;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x598));
    }
    iVar3 = (int)*(short *)(iVar7 + 0x18);
    iVar4 = 0;
    iVar10 = 0;
    if (0 < iVar3) {
      do {
        iVar8 = 0;
        iVar9 = 0;
        if (0 < *(int *)(param_1 + 0x598)) {
          do {
            if ((*(short *)(*(int *)(param_1 + 0x594) + iVar9) < 0) &&
               (iVar2 = FUN_08935970(*(undefined4 *)(*(int *)(iVar6 + 0x14) + iVar9),
                                     *(undefined4 *)(*(int *)(iVar7 + 0x14) + iVar10)), iVar2 == 0))
            {
              *(short *)(*(int *)(param_1 + 0x594) + iVar9) = (short)iVar8;
              *(short *)(*(int *)(param_1 + 0x594) + iVar9 + 2) = (short)iVar4;
              break;
            }
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar8 < *(int *)(param_1 + 0x598));
        }
        iVar4 = iVar4 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar4 < iVar3);
    }
  }
  return;
}

