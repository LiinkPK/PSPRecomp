/* Entry 0x08819538 | file offset 0x00016510 | FUN_08819538 | bytes 144 */

void FUN_08819538(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((((iVar1 == 0) || (*(int *)(iVar1 + 0x178) == 0)) ||
      (((*(uint *)(iVar1 + 0x184) & 2) != 0 && (*(short *)(iVar1 + 0x180) != 0x3e9)))) &&
     ((*(int *)(param_1 + 0x4c) != 0 && (*(int *)(*(int *)(param_1 + 0x4c) + 0x18) == 1)))) {
    FUN_08818e48();
  }
  return;
}

