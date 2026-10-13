/* Entry 0x0886B980 | file offset 0x00068958 | FUN_0886b980 | bytes 452 */

int FUN_0886b980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_089b0e3c(*(undefined4 *)(param_1 + 0xc));
    if (*(int *)(param_1 + 0x108) == 0) {
      uVar2 = FUN_0885c6cc(*(undefined4 *)(DAT_089d5f94 + 4),iVar1 * 0xc,0,0,1,0);
      *(undefined4 *)(param_1 + 0x108) = uVar2;
    }
    iVar3 = 0;
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        puVar9 = (undefined4 *)(*(int *)(param_1 + 0x108) + iVar5);
        puVar9[2] = puVar9[2] & 0xfffbffff;
        *(undefined1 *)(puVar9 + 2) = 0;
        *(undefined1 *)((int)puVar9 + 9) = 0;
        *(undefined2 *)(puVar9 + 1) = 0;
        puVar9[2] = puVar9[2] & 0xfffdffff;
        *(undefined2 *)((int)puVar9 + 6) = 0;
        *puVar9 = 0;
        puVar9[2] = puVar9[2] & 0xfffeffff;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0xc;
      } while (iVar3 < iVar1);
    }
    uVar6 = 0;
    uVar7 = *(uint *)(param_1 + 0x9c) >> 2;
    puVar4 = *(uint **)(param_1 + 0x94);
    if (uVar7 != 0) {
      do {
        uVar8 = *puVar4;
        if (uVar8 == 0xb000000) {
          return iVar1;
        }
        if ((uVar8 & 0xffff0000) == 0x10000) {
          *(short *)(*(int *)(param_1 + 0x108) + (uVar8 & 0xffff) * 0xc + 4) =
               (short)puVar4 - (short)*(undefined4 *)(param_1 + 0x94);
          uVar7 = *(uint *)(param_1 + 0x9c) >> 2;
        }
        else if ((uVar8 & 0xffff0000) == 0x20000) {
          iVar3 = *(int *)(param_1 + 0x108) + (uVar8 & 0xffff) * 0xc;
          *(short *)(iVar3 + 6) =
               (((short)puVar4 - (short)*(undefined4 *)(param_1 + 0x94)) - *(short *)(iVar3 + 4)) +
               4;
          uVar7 = *(uint *)(param_1 + 0x9c) >> 2;
        }
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 < uVar7);
    }
  }
  return iVar1;
}

