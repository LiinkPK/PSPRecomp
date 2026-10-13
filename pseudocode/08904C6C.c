/* Entry 0x08904C6C | file offset 0x00101C44 | FUN_08904c6c | bytes 428 */

void FUN_08904c6c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 *param_5,
                 int param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x2d4);
  *(int *)(param_2 + 0x2d4) = param_1 + 8;
  FUN_089068b8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = param_4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar4 = FUN_0885c6cc(param_3,param_4,0,0,1,0);
  FUN_08905338(param_1 + 0x14,uVar4,param_4);
  uVar4 = FUN_0885c6cc(param_3,param_4,0,0,1,0);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(int *)(param_1 + 500) = param_6;
  if (0 < param_6) {
    puVar6 = (undefined1 *)(param_1 + 0x34);
    do {
      FUN_08905848(puVar6);
      *(undefined4 *)(puVar6 + 0x14) = 0;
      *(undefined4 *)(puVar6 + 0x18) = 0;
      uVar1 = param_5[1];
      uVar2 = param_5[2];
      *puVar6 = *param_5;
      uVar3 = param_5[3];
      puVar6[1] = uVar1;
      uVar1 = param_5[4];
      puVar6[2] = uVar2;
      uVar2 = param_5[5];
      puVar6[3] = uVar3;
      puVar6[4] = uVar1;
      puVar6[5] = uVar2;
      *(undefined4 *)(puVar6 + 0x14) = 0;
      *(undefined4 *)(puVar6 + 0x18) = 0;
      uVar4 = FUN_0885c6cc(param_3,param_4,0,0,1,0);
      *(undefined4 *)(puVar6 + 0x14) = uVar4;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 0x1c;
      param_5 = param_5 + 6;
    } while (iVar5 < param_6);
  }
  return;
}

