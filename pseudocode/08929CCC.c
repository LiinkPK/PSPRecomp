/* Entry 0x08929CCC | file offset 0x00126CA4 | FUN_08929ccc | bytes 352 */

int FUN_08929ccc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  iVar1 = FUN_08929bcc(param_1,param_2,param_3,param_4,param_5);
  puVar9 = (undefined4 *)(param_1 + iVar1 * 0x154);
  iVar10 = 0;
  piVar11 = (int *)(param_5 + iVar1 * 4);
  puVar8 = (undefined4 *)(DAT_089d712c + 0x3e0b0);
  iVar12 = iVar1;
  do {
    iVar2 = FUN_0892a1e0(puVar8);
    if (iVar2 == 1) {
      if (param_2 <= iVar12) {
        return iVar12;
      }
      iVar2 = 0;
      iVar3 = 0x2a;
      uVar6 = *puVar8;
      puVar5 = puVar8;
      puVar7 = puVar9;
      do {
        uVar4 = puVar5[1];
        *puVar7 = uVar6;
        iVar2 = iVar2 + 8;
        puVar7[1] = uVar4;
        puVar5 = (undefined4 *)((int)puVar8 + iVar2);
        iVar3 = iVar3 + -1;
        uVar6 = *puVar5;
        puVar7 = (undefined4 *)((int)puVar9 + iVar2);
      } while (iVar3 != 0);
      *puVar7 = uVar6;
      if (param_5 != 0) {
        *piVar11 = iVar10 + iVar1;
      }
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 0x55;
      piVar11 = piVar11 + 1;
    }
    iVar10 = iVar10 + 1;
    puVar8 = puVar8 + 0x55;
  } while (iVar10 < 5);
  return iVar12;
}

