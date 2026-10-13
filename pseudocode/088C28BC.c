/* Entry 0x088C28BC | file offset 0x000BF894 | FUN_088c28bc | bytes 164 */

void FUN_088c28bc(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar6 = *(int *)(DAT_089d76b0 + 8);
  FUN_088c288c(param_1);
  iVar4 = 0;
  if (0 < iVar6) {
    iVar3 = 0;
    puVar1 = param_1;
    puVar2 = param_1;
    do {
      puVar5 = (undefined1 *)(DAT_089d76b4 + iVar3);
      *puVar2 = *puVar5;
      if (*(short *)(puVar5 + 0x26) == 1) {
        puVar1[1] = puVar1[1] | 0x16;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x28;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 2;
    } while (iVar4 < iVar6);
  }
  *(int *)(param_1 + 200) = iVar6;
  return;
}

