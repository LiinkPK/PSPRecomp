/* Entry 0x08970CDC | file offset 0x0016DCB4 | FUN_08970cdc | bytes 192 */

void FUN_08970cdc(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = (uint)uVar1;
  iVar4 = 0;
  if (uVar2 != 0) {
    piVar5 = *(int **)(param_2 + 0x30);
    iVar6 = 0;
    do {
      if (*piVar5 == param_1) {
        if (iVar4 < (int)(uVar2 - 1)) {
          do {
            iVar4 = iVar4 + 1;
            puVar3 = (undefined4 *)(*(int *)(param_2 + 0x30) + iVar6);
            *puVar3 = puVar3[1];
            uVar1 = *(ushort *)(param_2 + 4);
            iVar6 = iVar6 + 4;
          } while (iVar4 < (int)(uVar1 - 1));
        }
        *(ushort *)(param_2 + 4) = uVar1 - 1;
        if (*(short *)(param_2 + 4) != 0) {
          return;
        }
        FUN_0894be90(DAT_09b6f478,param_2,1);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 4;
      piVar5 = piVar5 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return;
}

