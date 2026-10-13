/* Entry 0x0890AD90 | file offset 0x00107D68 | FUN_0890ad90 | bytes 64 */

void FUN_0890ad90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x3c))
              (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x38),param_1 + 4);
  }
  return;
}

