/* Entry 0x0890C43C | file offset 0x00109414 | FUN_0890c43c | bytes 384 */

void FUN_0890c43c(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,int param_5,
                 undefined1 *param_6,int param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(int *)(param_1 + 0x354) = param_5;
  iVar4 = 0;
  *(int *)(param_1 + 0x358) = param_7;
  if (0 < param_5) {
    puVar5 = (undefined1 *)(param_1 + 0x4c);
    do {
      FUN_08905848(puVar5);
      FUN_0890d3fc(puVar5 + 8);
      *(undefined4 *)(puVar5 + 0x4c) = 0;
      *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
      uVar1 = param_4[1];
      uVar2 = param_4[2];
      *puVar5 = *param_4;
      uVar3 = param_4[3];
      puVar5[1] = uVar1;
      uVar1 = param_4[4];
      puVar5[2] = uVar2;
      uVar2 = param_4[5];
      puVar5[3] = uVar3;
      puVar5[4] = uVar1;
      puVar5[5] = uVar2;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x54;
      param_4 = param_4 + 6;
    } while (iVar4 < param_5);
  }
  iVar4 = 0;
  if (0 < param_7) {
    puVar5 = (undefined1 *)(param_1 + 0xf4);
    do {
      FUN_08905848(puVar5);
      *(undefined4 *)(puVar5 + 8) = 0xffffffff;
      *(undefined4 *)(puVar5 + 0xc) = 0;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      puVar5[0x14] = 0;
      *(undefined4 *)(puVar5 + 0x38) = 0;
      *(undefined4 *)(puVar5 + 0x3c) = 0xffffffff;
      *(undefined4 *)(puVar5 + 0x40) = 0;
      *(undefined4 *)(puVar5 + 0x44) = 0;
      *(undefined4 *)(puVar5 + 0x48) = 0;
      uVar1 = param_6[1];
      uVar2 = param_6[2];
      *puVar5 = *param_6;
      uVar3 = param_6[3];
      puVar5[1] = uVar1;
      uVar1 = param_6[4];
      puVar5[2] = uVar2;
      uVar2 = param_6[5];
      puVar5[3] = uVar3;
      puVar5[4] = uVar1;
      puVar5[5] = uVar2;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x4c;
      param_6 = param_6 + 6;
    } while (iVar4 < param_7);
  }
  return;
}

