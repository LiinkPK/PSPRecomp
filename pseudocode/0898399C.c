/* Entry 0x0898399C | file offset 0x00180974 | FUN_0898399c | bytes 84 */

void FUN_0898399c(void)

{
  int iVar1;
  undefined4 *in_a3;
  
  FUN_0898a030(*in_a3,3);
  iVar1 = in_a3[1];
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8),3);
  }
  return;
}

