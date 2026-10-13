/* Entry 0x08929EE8 | file offset 0x00126EC0 | FUN_08929ee8 | bytes 344 */

int FUN_08929ee8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar1 = FUN_08929bcc(param_1,param_2,param_3,param_4,0);
  iVar8 = 0;
  puVar10 = (undefined4 *)(param_1 + iVar1 * 0x154);
  iVar9 = param_5;
  do {
    if (-1 < *(short *)(iVar9 + 0x1a)) {
      puVar11 = (undefined4 *)(param_5 + *(short *)(iVar9 + 0x1a) * 0x168 + 0x1e0);
      iVar2 = FUN_0892a1e0(puVar11);
      if (iVar2 == 1) {
        if (param_2 <= iVar1) {
          return iVar1;
        }
        iVar2 = 0;
        iVar3 = 0x2a;
        uVar6 = *puVar11;
        puVar5 = puVar11;
        puVar7 = puVar10;
        do {
          uVar4 = puVar5[1];
          *puVar7 = uVar6;
          iVar2 = iVar2 + 8;
          puVar7[1] = uVar4;
          puVar5 = (undefined4 *)((int)puVar11 + iVar2);
          iVar3 = iVar3 + -1;
          uVar6 = *puVar5;
          puVar7 = (undefined4 *)((int)puVar10 + iVar2);
        } while (iVar3 != 0);
        *puVar7 = uVar6;
        iVar1 = iVar1 + 1;
        puVar10 = puVar10 + 0x55;
      }
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 0x1c;
  } while (iVar8 < 10);
  return iVar1;
}

