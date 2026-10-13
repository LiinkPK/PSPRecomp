/* Entry 0x08808468 | file offset 0x00005440 | FUN_08808468 | bytes 120 */

void FUN_08808468(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = &DAT_09af84f0;
  do {
    if (*(short *)(puVar1 + 5) < 0) {
      *puVar1 = param_1;
      puVar1[1] = param_3;
      iVar3 = 0;
      puVar2 = puVar1;
      do {
        iVar3 = iVar3 + 1;
        puVar2[2] = *param_4;
        param_4 = param_4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < 3);
      *(undefined2 *)(puVar1 + 5) = param_2;
      *(undefined1 *)((int)puVar1 + 0x16) = param_5;
      return;
    }
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 6;
  } while (iVar3 < 0x20);
  return;
}

