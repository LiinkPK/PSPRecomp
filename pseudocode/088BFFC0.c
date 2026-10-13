/* Entry 0x088BFFC0 | file offset 0x000BCF98 | FUN_088bffc0 | bytes 80 */

void FUN_088bffc0(undefined2 *param_1,undefined2 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar3 = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  sVar1 = param_1[1];
  iVar2 = 0;
  if (0 < sVar1) {
    do {
      iVar3 = iVar3 + 1;
      puVar4 = (undefined2 *)(*(int *)(param_2 + 2) + iVar2);
      iVar2 = iVar2 + 2;
      param_1[2] = *puVar4;
      param_1 = param_1 + 1;
    } while (iVar3 < sVar1);
  }
  return;
}

