/* Entry 0x0890BD08 | file offset 0x00108CE0 | FUN_0890bd08 | bytes 208 */

void FUN_0890bd08(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_2 + 0x184);
  iVar7 = 0;
  *(int *)(param_1 + 0x108) = iVar5;
  puVar6 = (undefined1 *)(param_1 + 8);
  if (0 < iVar5) {
    do {
      puVar4 = (undefined1 *)FUN_089040d8(param_2,iVar7);
      if (puVar4 != (undefined1 *)0x0) {
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        *puVar6 = *puVar4;
        uVar3 = puVar4[3];
        puVar6[1] = uVar1;
        uVar1 = puVar4[4];
        puVar6[2] = uVar2;
        uVar2 = puVar4[5];
        puVar6[3] = uVar3;
        puVar6[4] = uVar1;
        puVar6[5] = uVar2;
        FUN_08935524(*(undefined4 *)(puVar6 + 8),*(undefined4 *)(puVar4 + 8),
                     *(undefined4 *)(puVar4 + 0xc));
        *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar4 + 0xc);
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x10;
    } while (iVar7 < *(int *)(param_1 + 0x108));
  }
  return;
}

