/* Entry 0x089B5044 | file offset 0x001B201C | FUN_089b5044 | bytes 208 */

void FUN_089b5044(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    return;
  }
  puVar1 = (undefined4 *)FUN_089ab5ec(0,0x10,800);
  *(undefined4 **)(param_1 + 4) = puVar1;
  iVar4 = 0x10;
  puVar2 = puVar1;
  do {
    iVar4 = iVar4 + -1;
    *puVar2 = 0x4a000000;
    puVar2[1] = 0x4b000000;
    puVar2[2] = 0xb000000;
    puVar2[3] = 0;
    *(undefined2 *)(puVar2 + 4) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    iVar3 = (int)DAT_09af71f0;
    puVar2 = puVar2 + 0xc;
  } while (iVar4 != 0);
  puVar1[0xc4] = 1;
  puVar1[0xc5] = 0;
  if (iVar3 != 0) {
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar4 + 0x314);
    } while (iVar3 != 0);
    *(undefined4 **)(iVar4 + 0x314) = puVar1;
    return;
  }
  DAT_09af71f0 = puVar1;
  return;
}

