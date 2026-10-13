/* Entry 0x089B0BAC | file offset 0x001ADB84 | FUN_089b0bac | bytes 452 */

void FUN_089b0bac(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x22);
    iVar9 = 0;
    if (uVar6 != 0) {
      do {
        iVar4 = *(int *)(param_1 + 0x10);
        while (iVar4 = iVar4 + iVar9 * 0x10, *(short *)(iVar4 + 8) != 0) {
          iVar7 = 0;
          do {
            iVar5 = *(int *)(iVar4 + 4);
            while( true ) {
              iVar5 = iVar7 * 0x40 + iVar5;
              iVar2 = FUN_089b1230(iVar5,1,0);
              iVar7 = iVar7 + 1;
              iVar8 = *(int *)(iVar5 + 4);
              if (((iVar2 == 0) || (iVar8 == 0)) ||
                 (iVar3 = *(int *)(iVar2 + 0x20) + -1, *(int *)(iVar2 + 0x20) = iVar3, iVar3 != 0))
              break;
              FUN_089b12a4(iVar5,iVar2);
              FUN_089ac3dc(iVar2,1);
              FUN_089b12f4(iVar5,*(undefined4 *)(iVar8 + 8));
              if ((int)(uint)*(ushort *)(iVar4 + 8) <= iVar7) {
                uVar1 = *(ushort *)(param_1 + 0x22);
                goto LAB_089b0b00;
              }
              iVar5 = *(int *)(iVar4 + 4);
            }
          } while (iVar7 < (int)(uint)*(ushort *)(iVar4 + 8));
          uVar1 = *(ushort *)(param_1 + 0x22);
LAB_089b0b00:
          uVar6 = (uint)uVar1;
          iVar9 = iVar9 + 1;
          if ((int)uVar6 <= iVar9) goto code_r0x089b0b20;
          iVar4 = *(int *)(param_1 + 0x10);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar6);
    }
code_r0x089b0b20:
    iVar9 = 0;
    if (*(short *)(param_1 + 0x26) != 0) {
      iVar4 = *(int *)(param_1 + 0x18);
      while( true ) {
        FUN_089b07b4(iVar4 + iVar9 * 0x10,0xffff);
        iVar9 = iVar9 + 1;
        if ((int)(uint)*(ushort *)(param_1 + 0x26) <= iVar9) break;
        iVar4 = *(int *)(param_1 + 0x18);
      }
      return;
    }
  }
  return;
}

