/* Entry 0x0889F040 | file offset 0x0009C018 | FUN_0889f040 | bytes 332 */

bool FUN_0889f040(int param_1,undefined4 *param_2,short param_3,short param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_50 [64];
  
  bVar1 = *(int *)(*(int *)(param_1 + 4) + 8) < 0x100;
  if (bVar1) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(*(int *)(param_1 + 4) + 8) * 0x2c);
    uVar4 = param_2[1];
    uVar6 = param_2[2];
    *puVar3 = *param_2;
    uVar5 = param_2[3];
    puVar3[1] = uVar4;
    uVar4 = param_2[4];
    puVar3[2] = uVar6;
    uVar6 = param_2[5];
    puVar3[3] = uVar5;
    uVar5 = param_2[6];
    puVar3[4] = uVar4;
    uVar4 = param_2[7];
    puVar3[5] = uVar6;
    uVar6 = param_2[8];
    puVar3[6] = uVar5;
    uVar5 = param_2[9];
    puVar3[7] = uVar4;
    uVar4 = param_2[10];
    puVar3[8] = uVar6;
    puVar3[9] = uVar5;
    puVar3[10] = uVar4;
    iVar2 = (*(int *)(*(int *)(param_1 + 4) + 8) - *(int *)(param_1 + 0x40)) * 0x84;
    *(short *)(*(int *)(param_1 + 0x44) + iVar2) = param_3;
    *(short *)(*(int *)(param_1 + 0x44) + iVar2 + 2) = param_4;
    FUN_0893476c(auStack_50,"%03d_%03d",(int)param_3,(int)param_4);
    FUN_0887df14(DAT_089d6998,*(int *)(param_1 + 0x44) + iVar2 + 4,0x80,auStack_50);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) + 1;
  }
  return bVar1;
}

