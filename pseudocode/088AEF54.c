/* Entry 0x088AEF54 | file offset 0x000ABF2C | FUN_088aef54 | bytes 68 */

bool FUN_088aef54(int param_1)

{
  uint uVar1;
  
  if ((**(int **)(param_1 + 8) == *(int *)(*(int *)(param_1 + 0xc) + 0x2b84)) &&
     ((*(int **)(param_1 + 8))[1] == *(int *)(*(int *)(param_1 + 0xc) + 0x2b88))) {
    uVar1 = *(uint *)(param_1 + 4) & 0xfffffffb;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4) | 4;
  }
  *(uint *)(param_1 + 4) = uVar1;
  return (uVar1 & 4) != 0;
}

