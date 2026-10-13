/* Entry 0x08922EA4 | file offset 0x0011FE7C | FUN_08922ea4 | bytes 84 */

void FUN_08922ea4(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  iVar3 = 0;
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  puVar1 = param_2;
  puVar2 = param_1;
  do {
    iVar3 = iVar3 + 1;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar2 + 4);
    puVar2 = puVar2 + 2;
    puVar1 = puVar1 + 2;
  } while (iVar3 < 5);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0xe);
  return;
}

