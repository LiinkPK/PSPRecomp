/* Entry 0x0890C19C | file offset 0x00109174 | FUN_0890c19c | bytes 180 */

void FUN_0890c19c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar7 = 0;
  *(int *)(param_1 + 0x108) = iVar4;
  puVar6 = (undefined1 *)(param_2 + 8);
  if (0 < iVar4) {
    puVar5 = (undefined1 *)(param_1 + 8);
    do {
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      *puVar5 = *puVar6;
      uVar3 = puVar6[3];
      puVar5[1] = uVar1;
      uVar1 = puVar6[4];
      puVar5[2] = uVar2;
      uVar2 = puVar6[5];
      puVar5[3] = uVar3;
      puVar5[4] = uVar1;
      puVar5[5] = uVar2;
      FUN_08935524(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar6 + 8),
                   *(undefined4 *)(puVar6 + 0xc));
      iVar7 = iVar7 + 1;
      *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(puVar6 + 0xc);
      puVar6 = puVar6 + 0x10;
      puVar5 = puVar5 + 0x10;
    } while (iVar7 < *(int *)(param_1 + 0x108));
  }
  return;
}

