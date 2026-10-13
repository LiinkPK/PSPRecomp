/* Entry 0x08922E50 | file offset 0x0011FE28 | FUN_08922e50 | bytes 84 */

void FUN_08922e50(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(param_2 + 4);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar3 = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  puVar1 = param_1;
  do {
    iVar3 = iVar3 + 1;
    *(undefined4 *)(puVar1 + 4) = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar3 < 5);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  return;
}

