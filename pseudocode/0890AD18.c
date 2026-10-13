/* Entry 0x0890AD18 | file offset 0x00107CF0 | FUN_0890ad18 | bytes 64 */

void FUN_0890ad18(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x34))
              (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x30),param_1 + 4);
  }
  return;
}

