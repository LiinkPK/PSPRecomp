/* Entry 0x0890D444 | file offset 0x0010A41C | FUN_0890d444 | bytes 84 */

int FUN_0890d444(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined2 *)(param_1 + 4);
  iVar4 = 0;
  iVar3 = 0;
  puVar2 = puVar1;
  do {
    iVar4 = iVar4 + CONCAT22(puVar1[1],*puVar2);
    iVar3 = iVar3 + 2;
    puVar2 = puVar2 + 2;
    puVar1 = puVar1 + 2;
  } while (iVar3 < 8);
  return iVar4 + *(int *)(param_1 + 0x14) + (int)*(char *)(param_1 + 0x20) +
         (uint)*(byte *)(param_1 + 0x21);
}

